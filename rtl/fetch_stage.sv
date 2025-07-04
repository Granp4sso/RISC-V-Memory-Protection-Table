// Author: Stefano Mercogliano <stefano.mercogliano@unina.it>
// Author: Valerio Di Domenico <didomenico.valerio@virgilio.it>

// Description:
//  The fetch stage fetches a transaction from the outside if it is ready.
//  It performs a check on the transaction format and output an error if necessary.

// TODO: Handle exception/flush/stall logic

/* verilator lint_off IMPORTSTAR */
import mpt_pkg::*;
/* verilator lint_on IMPORTSTAR */

// verilator lint_off PINCONNECTEMPTY

// Import headers
`include "pipelining.svh" 

module fetch_stage #(
    parameter unsigned PIPELINE_SLAVE_DATA_WIDTH = 32,
    parameter unsigned PIPELINE_MASTER_DATA_WIDTH = 32
) (
    // Generic Signals
    input  logic                clk_i,
    input  logic                rst_ni,

    // Fetch Slave Port
    `DEFINE_SLAVE_DATA_PORT     ( stage_slave   , PIPELINE_SLAVE_DATA_WIDTH     ),

    // Fetch Master Port
    `DEFINE_MASTER_DATA_PORT    ( stage_master  , PIPELINE_MASTER_DATA_WIDTH    ),

    // Control and Status Ports
    `DEFINE_SLAVE_CTRL_PORT     ( stage_ctrl    , $bits(mptw_flush_ctrl_e)      ),
    `DEFINE_MASTER_STATUS_PORT  ( stage_status  , $bits(mptw_flush_status_e)    ),

    // Extra Logics
    output page_format_fault_e  exception_cause_o

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

    logic stage_active;
    mptw_transaction_t input_transaction, output_transaction;
    page_format_fault_e format_error;
    mmpt_reg_t mmpt;
    spa_t_u spa;


    /////////////////////
    // Bus Declaration //
    /////////////////////

    `DECLARE_DATA_BUS( slave_to_reg_bus , PIPELINE_SLAVE_DATA_WIDTH );

    //////////////////////////////////////////////////////
    //    _   _                    _   _                //
    //   | | | |_ _  _ __  __ _ __| |_(_)_ _  __ _      //
    //   | |_| | ' \| '_ \/ _` / _| / / | ' \/ _` |     //
    //    \___/|_||_| .__/\__,_\__|_\_\_|_||_\__, |     //
    //              |_|                      |___/      //
    //////////////////////////////////////////////////////

    ///////////////////////////////////
    // Pipeline Slave Port Unpacking //
    ///////////////////////////////////

    // Here unpacking is required to extract mmpt and spa
    // to perform format checking. The actual content of the
    // transaction is not changed.

    assign input_transaction = stage_slave_data;

    // The stage is active if the slave port is forwarding
    // valid data. This is important especially in the case
    // of exception generation
    assign stage_active = stage_slave_valid && input_transaction.valid;

    //////////////////////////////////////////////////////////////
    //     ___ _           _     ___                   _        //
    //    / __| |_  ___ __| |__ | __|__ _ _ _ __  __ _| |_      //
    //   | (__| ' \/ -_) _| / / | _/ _ \ '_| '  \/ _` |  _|     //  
    //    \___|_||_\___\__|_\_\ |_|\___/_| |_|_|_\__,_|\__|     //
    //                                                          //
    //////////////////////////////////////////////////////////////

    assign mmpt = input_transaction.mmpt;
    assign spa = input_transaction.spa;

    // Checking Supervisor Phyisical Address format
    always_comb begin

        format_error = NO_ERROR;

        // If the stage is active (i.e. working on valid data)
        // evaluate the transaction format
        if(stage_active) begin
            case (mmpt.MODE) 
                
                // A transaction at this stage should not be BARE_MODE
                BARE_MODE: begin
                    format_error = NOT_VALID_ADDR;
                end

                // Check if spa_q width is within the allowed range
                SMMPT43_MODE: begin
                    if (spa.spa43.ZERO != 0) begin
                        format_error = NOT_VALID_ADDR;
                    end
                end

                SMMPT52_MODE: begin
                    if (spa.spa52.ZERO != 0) begin
                        format_error = NOT_VALID_ADDR;
                    end
                end

                // Here all bits are used
                SMMPT64_MODE: begin
                        format_error = NO_ERROR;
                end
                                
                // Generate error if reserved MODE bits are used 
                default: begin
                    format_error = NOT_VALID_ADDR;
                end

            endcase
        end
    end

    // Part of the transaction stay unchanged
    assign output_transaction               = input_transaction;

    // Update the other fields
    assign output_transaction.walking       = ( format_error != NO_ERROR ) ? MPT_WALKING_SKIP : MPT_WALKING_DO ;
    assign output_transaction.format_error  = ( input_transaction.valid ) ? format_error : NO_ERROR ;
    assign output_transaction.access_error  = ( input_transaction.valid ) ? input_transaction.access_error : '0 ;

    // All other signals can be forwarded without any issues
    // As they are getting pipelined for the next stage

    assign slave_to_reg_bus_data    = output_transaction;
    assign slave_to_reg_bus_valid   = stage_slave_valid;
    assign stage_slave_ready        = slave_to_reg_bus_ready;
    assign exception_cause_o        = format_error;

    //////////////////////////////////////////////////
    //    ___                   _   _               //
    //   | _ \___ _ __  __ _ __| |_(_)_ _  __ _     //
    //   |   / -_) '_ \/ _` / _| / / | ' \/ _` |    //
    //   |_|_\___| .__/\__,_\__|_\_\_|_||_\__, |    //
    //           |_|                      |___/     //
    //////////////////////////////////////////////////

    pipeline_register # ( 

        .DATA_WIDTH             ( PIPELINE_SLAVE_DATA_WIDTH    )

    ) fetch_reg (

        .clk_i                  ( clk_i                         ),
        .rst_ni                 ( rst_ni                        ),

        `MAP_DATA_PORT          ( s_data    , slave_to_reg_bus  ),
        `MAP_DATA_PORT          ( m_data    , stage_master      ),
        `MAP_CTRL_PORT          ( s_ctrl    , stage_ctrl        ),
        `MAP_STATUS_PORT        ( m_status  , stage_status      )

    ); 
    
endmodule : fetch_stage

// verilator lint_on PINCONNECTEMPTY