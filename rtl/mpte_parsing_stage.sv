// Author: Stefano Mercogliano <stefano.mercogliano@unina.it>
// Author: Valerio Di Domenico <didomenico.valerio@virgilio.it>

// Description:
//  The MPTE Parsing stage takes as input a transaction
//  Containing an MPTE. It parses the MPTE and updates
//  Transaction state (error, walking and completed fields)
//  If the input MPTE is a leaf, then the transaction if completed
//  Otherwise the next walking address is computed for the memory stage.

/* verilator lint_off IMPORTSTAR */
import mpt_pkg::*;
/* verilator lint_on IMPORTSTAR */

// Import headers
`include "pipelining.svh"
`include "uninasoc_mem.svh"

// verilator lint_off UNOPTFLAT
// verilator lint_off PINCONNECTEMPTY
// verilator lint_off UNDRIVEN

module mpte_parsing_stage #(
    parameter unsigned  PIPELINE_SLAVE_DATA_WIDTH       = 32,
    parameter unsigned  PIPELINE_MASTER_DATA_WIDTH      = 32,
    parameter unsigned  WALKING_LEVEL                   = 0
) (
    // Generic Signals
    input  logic                        clk_i,
    input  logic                        rst_ni,

    // Walking Slave Port
    `DEFINE_SLAVE_DATA_PORT             ( stage_slave   , PIPELINE_SLAVE_DATA_WIDTH         ),

    // Walking Master Port
    `DEFINE_MASTER_DATA_PORT            ( stage_master  , PIPELINE_MASTER_DATA_WIDTH        ),

    // Control and Status Ports
    `DEFINE_SLAVE_CTRL_PORT             ( stage_ctrl    , $bits(mptw_flush_ctrl_e)          ),
    `DEFINE_MASTER_STATUS_PORT          ( stage_status  , $bits(mptw_flush_status_e)        ),

    // Error Port
    output logic                        access_page_fault_o,
    output page_format_fault_e          format_error_cause_o

); 

    //////////////////////////////////////
    //    ___ _                _        //
    //   / __(_)__ _ _ _  __ _| |___    //
    //   \__ \ / _` | ' \/ _` | (_-<    //
    //   |___/_\__, |_||_\__,_|_/__/    //
    //         |___/                    //
    //////////////////////////////////////

    /////////////////////////
    // Signals Declaration //
    /////////////////////////

    mptw_transaction_t  input_transaction;
    mptw_transaction_t  output_transaction;
    mpt_entry_t mpt_entry;
    mpt_mode_e mmpt_mode;
    mmpt_reg_t mmpt_csr;
    spa_t_u spa;
    mpt_access_e            access_type;
    mpt_permissions_e    mpte_permissions;
    logic                access_page_fault;
    page_format_fault_e  format_error_cause;

    logic use_mmpt_csr;
    logic [8:0] spa_current_page_number;
    logic [XLEN-1:0] base_phyisical_address;
    logic [XLEN-1:0] next_mpte_addr;
    logic [NUMPGINRANGE-1:0] range_offset;


    `DECLARE_DATA_BUS( slave_to_reg_bus , PIPELINE_SLAVE_DATA_WIDTH );

    ///////////////////////
    // Bus Concatenation //
    ///////////////////////

    //////////////////////////////////////////////////////
    //    _   _                    _   _                //
    //   | | | |_ _  _ __  __ _ __| |_(_)_ _  __ _      //
    //   | |_| | ' \| '_ \/ _` / _| / / | ' \/ _` |     //
    //    \___/|_||_| .__/\__,_\__|_\_\_|_||_\__, |     //
    //              |_|                      |___/      //
    //////////////////////////////////////////////////////

    assign input_transaction = stage_slave_data;

    //////////////////////////////////////
    //    ___             _             //
    //   | _ \__ _ _ _ __(_)_ _  __ _   //
    //   |  _/ _` | '_(_-< | ' \/ _` |  //
    //   |_| \__,_|_| /__/_|_||_\__, |  //  
    //                          |___/   //
    //////////////////////////////////////

    // In this stage the input transaction is storing an MPTE entry.
    // First, we need to parse the content of the MMPT register
    assign mmpt_mode    = input_transaction.mmpt.MODE;
    assign spa          = input_transaction.spa;
    assign access_type  = input_transaction.access_type;

    ///////////////////////////////
    // Checking MPT Entry Format //
    ///////////////////////////////

    // Format error process is required to guarantee correct MPTEs are walked
    // if the WALKING_LEVEL equals the maximum level for the MODE
    // the mmpt CSR is used instead of the MPT entry.
    assign use_mmpt_csr =   ( mmpt_mode == SMMPT43_MODE && WALKING_LEVEL == SMMPT43_WALKING_LEVELS ) ||
                            ( mmpt_mode == SMMPT52_MODE && WALKING_LEVEL == SMMPT52_WALKING_LEVELS ) ||
                            ( mmpt_mode == SMMPT64_MODE && WALKING_LEVEL == SMMPT64_WALKING_LEVELS );

    always_comb begin: format_error_process
        
        // By default, no error occurs
        format_error_cause = NO_ERROR;

        if ( ~use_mmpt_csr) begin
            // If the retrieved MPTE is not valid, raise a NOT_VALID_ENTRY error
            if ( ~mpt_entry.V ) begin  // Check valid bit 
                format_error_cause = NOT_VALID_ENTRY;
            end else
            // Errors are generated if RESERVED BITS are used
            if ( 
                    ( mpt_entry.RESERVED != 0 )                                         ||
                    ( mpt_entry.L && ( mpt_entry.mpt_payload.leaf.RESERVED != 0 ) )     ||
                    ( ~mpt_entry.L && ( mpt_entry.mpt_payload.non_leaf.RESERVED != 0 ) ) 
                ) 
            begin
                format_error_cause = RESERVED_BITS_USED;
            end else
            // In entry at level 0 must always be a LEAF
            if ( ~mpt_entry.L ) begin
                format_error_cause = LEVEL_UNDERFLOW;
            end
        end

    end

    //////////////////////////////////
    // Build next Phyisical Address //
    //////////////////////////////////

    // If the current entry is not a leaf, we must build the
    // phyisical address to access the next MPT level during walking.
    // The next phyisical address is built depending on the MODE
    // and the current Walking Level.

    assign mpt_entry    = input_transaction.mpte;
    assign mmpt_csr     = input_transaction.mmpt;

    always_comb begin: build_next_ppn

        spa_current_page_number = '0;
        base_phyisical_address  = '0;
        next_mpte_addr          = '0;

        if( ~mpt_entry.L ) begin
            // Using mmpt CSR as base addr
            base_phyisical_address =  ( use_mmpt_csr ) ? ( mmpt_csr.PPN ) * PAGESIZE : ( mpt_entry.mpt_payload.non_leaf.PPN ) * PAGESIZE;

            // Now we need the physical page number 
            case ( mmpt_mode )
                SMMPT43_MODE: begin
                    case ( WALKING_LEVEL )
                        SMMPT43_WALKING_LEVELS      : spa_current_page_number = spa.spa43.PN2;
                        SMMPT43_WALKING_LEVELS - 1  : spa_current_page_number = spa.spa43.PN1;
                        SMMPT43_WALKING_LEVELS - 2  : spa_current_page_number = spa.spa43.PN0;
                        default                     : spa_current_page_number = '0;
                    endcase
                end
                SMMPT52_MODE: begin
                    case ( WALKING_LEVEL )
                        SMMPT52_WALKING_LEVELS      : spa_current_page_number = spa.spa52.PN3;
                        SMMPT52_WALKING_LEVELS - 1  : spa_current_page_number = spa.spa52.PN2;
                        SMMPT52_WALKING_LEVELS - 2  : spa_current_page_number = spa.spa52.PN1;
                        SMMPT52_WALKING_LEVELS - 3  : spa_current_page_number = spa.spa52.PN0;
                        default                     : spa_current_page_number = '0;
                    endcase
                end
                SMMPT64_MODE: begin
                    case ( WALKING_LEVEL )
                        SMMPT64_WALKING_LEVELS      : spa_current_page_number = spa.spa64.PN4[8:0]; // currently we ignore upper 3 bits
                        SMMPT64_WALKING_LEVELS - 1  : spa_current_page_number = spa.spa64.PN3;
                        SMMPT64_WALKING_LEVELS - 2  : spa_current_page_number = spa.spa64.PN2;
                        SMMPT64_WALKING_LEVELS - 3  : spa_current_page_number = spa.spa64.PN1;
                        SMMPT64_WALKING_LEVELS - 4  : spa_current_page_number = spa.spa64.PN0;
                        default                     : spa_current_page_number = '0;
                    endcase
            end
                default: begin
                    format_error_cause_o        = UNSUPPORTED_MODE;
                    spa_current_page_number     = '0;
                end
            endcase

            //Compute next MPTE Address
            next_mpte_addr = base_phyisical_address  + spa_current_page_number * MPTESIZE;

        end else begin
            // If the entry is a Leaf we need to check for the permissions offset
            // It depends on the current level; highest level (e.g. 3 for SMMPT43)
            // Cannot be a leaf since the PPN used is the root MPT base address (coming from mmpt csr).
            range_offset = '0;

            case ( mmpt_mode )
                SMMPT43_MODE: begin
                    case ( WALKING_LEVEL )
                        SMMPT43_WALKING_LEVELS - 1  : range_offset = spa.spa43.PN1[8:9-NUMPGINRANGE];               // Giga-Pages
                        SMMPT43_WALKING_LEVELS - 2  : range_offset = spa.spa43.PN0[8:9-NUMPGINRANGE];               // Mega-Pages
                        SMMPT43_WALKING_LEVELS - 3  : range_offset = spa.spa43.RANGE_OFFSET[15:16-NUMPGINRANGE];    // Kilo-Pages
                        default                     : range_offset = '0;
                    endcase
                end
                SMMPT52_MODE: begin
                    case ( WALKING_LEVEL )
                        SMMPT52_WALKING_LEVELS - 1  : range_offset = spa.spa52.PN2[8:9-NUMPGINRANGE];               // Tera-Pages
                        SMMPT52_WALKING_LEVELS - 2  : range_offset = spa.spa52.PN1[8:9-NUMPGINRANGE];               // Giga-Pages
                        SMMPT52_WALKING_LEVELS - 3  : range_offset = spa.spa52.PN0[8:9-NUMPGINRANGE];               // Mega-Pages
                        SMMPT52_WALKING_LEVELS - 4  : range_offset = spa.spa52.RANGE_OFFSET[15:16-NUMPGINRANGE];    // Kilo-Pages
                        default                     : range_offset = '0;
                    endcase
                end
                SMMPT64_MODE: begin
                    case ( WALKING_LEVEL )
                        SMMPT64_WALKING_LEVELS - 1  : range_offset = spa.spa64.PN3[8:9-NUMPGINRANGE];               // Peta-Pages
                        SMMPT64_WALKING_LEVELS - 2  : range_offset = spa.spa64.PN2[8:9-NUMPGINRANGE];               // Tera-Pages
                        SMMPT64_WALKING_LEVELS - 3  : range_offset = spa.spa64.PN1[8:9-NUMPGINRANGE];               // Giga-Pages
                        SMMPT64_WALKING_LEVELS - 4  : range_offset = spa.spa64.PN0[8:9-NUMPGINRANGE];               // Mega-Pages
                        SMMPT64_WALKING_LEVELS - 5  : range_offset = spa.spa64.RANGE_OFFSET[15:16-NUMPGINRANGE];    // Kilo-Pages
                        default                     : range_offset = '0;
                    endcase
                end
                default: begin
                    format_error_cause_o    = UNSUPPORTED_MODE;
                    range_offset            = '0;
                end
            endcase
        end
    end

    //////////////////////////////////
    // Check for Access Permissions //
    //////////////////////////////////

    // Once the range offset has been selected, meaning a LEAF
    // Is under process, we can look for permissions inside the MPT entry.

    always_comb begin: access_permission_check_process

        mpte_permissions    = '0;
        access_page_fault   = '0;

        if( mpt_entry.L ) begin

            mpte_permissions = mpt_entry.mpt_payload.leaf.PERMS[range_offset];

            // Check permissions
            if ((access_type == ACCESS_READ  && (mpte_permissions inside {ALLOW_R, ALLOW_RW, ALLOW_RX, ALLOW_RWX})) ||
                (access_type == ACCESS_WRITE && (mpte_permissions inside {ALLOW_RW, ALLOW_RWX})) ||
                (access_type == ACCESS_EXEC  && (mpte_permissions inside {ALLOW_X, ALLOW_RX, ALLOW_RWX}))) 
               begin
                   access_page_fault = 0;
               end else begin
                   access_page_fault = 1;
               end
               
        end 
    end


    //////////////////////////////////////////////////
    //    ___                   _   _               //
    //   | _ \___ _ __  __ _ __| |_(_)_ _  __ _     //
    //   |   / -_) '_ \/ _` / _| / / | ' \/ _` |    //
    //   |_|_\___| .__/\__,_\__|_\_\_|_||_\__, |    //
    //           |_|                      |___/     //
    //////////////////////////////////////////////////

    //////////////////////////////////
    // FOR TESTING PURPOSES - BEGIN //
    //////////////////////////////////
    // Let's assume no error happens
    assign format_error_cause = NO_ERROR;
    assign access_page_fault = '0;
    ////////////////////////////////
    // FOR TESTING PURPOSES - END //
    ////////////////////////////////

    // Part of the transaction stay unchanged
    assign output_transaction.id            = input_transaction.id;
    assign output_transaction.speculative   = input_transaction.speculative;
    assign output_transaction.mmpt          = input_transaction.mmpt;
    assign output_transaction.spa           = input_transaction.spa;
    assign output_transaction.access_type   = input_transaction.access_type;
    assign output_transaction.valid         = input_transaction.valid;
    assign output_transaction.plb_hit       = input_transaction.plb_hit;
    assign output_transaction.mpte          = input_transaction.mpte;

    // Complete transaction
    // A transaction is completed if (a) an error occurs, (b) if it is a leaf
    assign output_transaction.completed     = ( ( mpt_entry.L )                                         ||
                                                ( format_error_cause != NO_ERROR || access_page_fault ) ||
                                                ( WALKING_LEVEL == 0 )
                                              ) ? 1'b1 : input_transaction.completed;

    // If a transaction is completed, it doesn't have to be walked in the next stage
    assign output_transaction.walking = ( 
                                            ( output_transaction.completed ) ||
                                            ( format_error_cause != NO_ERROR || access_page_fault ) 
                                        ) ? MPT_WALKING_SKIP : input_transaction.walking ;

    // After a parsing stage the mpte field is updatet with a pointer;
    // Which is the address to the next mpte. The memory stage will use this
    // To lookup in memory and then updated with the actual value of the mpte
    assign output_transaction.mpte_ptr          = next_mpte_addr;

    // Update error fields and output signals
    assign output_transaction.format_error  = ( input_transaction.valid ) ? input_transaction.format_error : NO_ERROR ;
    assign output_transaction.access_error  = ( input_transaction.valid ) ? input_transaction.access_error : '0 ;

    assign format_error_cause_o = output_transaction.format_error;
    assign access_page_fault_o  = output_transaction.access_error;

    // Pipeline Register
    assign slave_to_reg_bus_data    = output_transaction;
    assign slave_to_reg_bus_valid   = stage_slave_valid;
    assign stage_slave_ready        = slave_to_reg_bus_ready;

    pipeline_register # ( 
        .DATA_WIDTH             ( PIPELINE_SLAVE_DATA_WIDTH         )
    ) parsing_reg (
        .clk_i                  ( clk_i                             ),
        .rst_ni                 ( rst_ni                            ),
        `MAP_DATA_PORT          ( s_data, slave_to_reg_bus          ),
        `MAP_DATA_PORT          ( m_data, stage_master              ),
        `MAP_CTRL_PORT          ( s_ctrl    , stage_ctrl            ),
        `MAP_STATUS_PORT        ( m_status  , stage_status          )
    );

    
endmodule : mpte_parsing_stage

// verilator lint_on UNOPTFLAT
// verilator lint_on PINCONNECTEMPTY
// verilator lint_on UNDRIVEN