// Author: Stefano Mercogliano <stefano.mercogliano@unina.it>

// Description:
//  TBD

/* verilator lint_off IMPORTSTAR */
import mpt_pkg::*;
/* verilator lint_on IMPORTSTAR */

// Import headers
`include "pipelining.svh"
`include "uninasoc_mem.svh"

// verilator lint_off UNOPTFLAT
// verilator lint_off PINCONNECTEMPTY
// verilator lint_off UNDRIVEN
module walking_stage #(
    parameter unsigned  PIPELINE_SLAVE_DATA_WIDTH       = 32,
    parameter unsigned  PIPELINE_MASTER_DATA_WIDTH      = 32,
    parameter unsigned  TRANSACTION_FIFO_DEPTH          = 4,
    parameter unsigned  FORWARDING_BUFFER_DEPTH         = 4,
    parameter unsigned  MEMORY_TRANSACTION_DATA_WIDTH   = 64,                       
    parameter unsigned  MEMORY_TRANSACTION_ADDR_WIDTH   = 64,
    parameter unsigned  WALKING_LEVEL                   = 0
) (
    // Generic Signals
    input  logic                clk_i,
    input  logic                rst_ni,

    // Walking Slave Port
    `DEFINE_SLAVE_DATA_PORT(stage_slave, PIPELINE_SLAVE_DATA_WIDTH),

    // Walking Master Port
    `DEFINE_MASTER_DATA_PORT(stage_master, PIPELINE_MASTER_DATA_WIDTH),

    // Walking memory interface
    `DEFINE_MEM_MASTER_PORTS(memory_master, MEMORY_TRANSACTION_DATA_WIDTH, MEMORY_TRANSACTION_ADDR_WIDTH),

    // Error Port
    output logic                access_page_fault_o,
    output page_format_fault_e  format_error_cause_o

); 

    //////////////////////////////////////
    //    ___ _                _        //
    //   / __(_)__ _ _ _  __ _| |___    //
    //   \__ \ / _` | ' \/ _` | (_-<    //
    //   |___/_\__, |_||_\__,_|_/__/    //
    //         |___/                    //
    //////////////////////////////////////

    localparam FORWARDING_BUFFER_ENABLE = ( FORWARDING_BUFFER_DEPTH == 0 ) ? 0 : 1;

    /////////////////////////
    // Signals Declaration //
    /////////////////////////

    mptw_transaction_t walking_output_transaction;
    mptw_transaction_t output_transaction;

    /////////////////////
    // Bus Declaration //
    /////////////////////

    `DECLARE_DATA_BUS( parsing_to_forwarding    , PIPELINE_SLAVE_DATA_WIDTH );
    `DECLARE_DATA_BUS( forwarding_to_walking    , PIPELINE_SLAVE_DATA_WIDTH );
    `DECLARE_DATA_BUS( from_walking             , PIPELINE_SLAVE_DATA_WIDTH );
    `DECLARE_DATA_BUS( walking_to_forwarding    , PIPELINE_SLAVE_DATA_WIDTH );
    `DECLARE_DATA_BUS( walking_to_pipe          , PIPELINE_SLAVE_DATA_WIDTH );

    //////////////////////////////////////////////////////
    //    _   _                    _   _                //
    //   | | | |_ _  _ __  __ _ __| |_(_)_ _  __ _      //
    //   | |_| | ' \| '_ \/ _` / _| / / | ' \/ _` |     //
    //    \___/|_||_| .__/\__,_\__|_\_\_|_||_\__, |     //
    //              |_|                      |___/      //
    //////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////////////////
    //    __  __ ___ _____ ___   ___             _             ___ _                    //
    //   |  \/  | _ \_   _| __| | _ \__ _ _ _ __(_)_ _  __ _  / __| |_ __ _ __ _ ___    //
    //   | |\/| |  _/ | | | _|  |  _/ _` | '_(_-< | ' \/ _` | \__ \  _/ _` / _` / -_)   //
    //   |_|  |_|_|   |_| |___| |_| \__,_|_| /__/_|_||_\__, | |___/\__\__,_\__, \___|   //  
    //                                                 |___/               |___/        //
    //////////////////////////////////////////////////////////////////////////////////////

    mpte_parsing_stage #(
        .PIPELINE_SLAVE_DATA_WIDTH  ( PIPELINE_SLAVE_DATA_WIDTH             ),
        .PIPELINE_MASTER_DATA_WIDTH ( PIPELINE_MASTER_DATA_WIDTH            ),
        .WALKING_LEVEL              ( WALKING_LEVEL                         )
    ) parsing_stage_u (
        .clk_i                      ( clk_i                                 ),
        .rst_ni                     ( rst_ni                                ),

        // Pipeline Ports
        `MAP_DATA_PORT              ( stage_slave  , stage_slave            ),
        `MAP_DATA_PORT              ( stage_master , parsing_to_forwarding  ),

        // Error Port
        .access_page_fault_o,
        .format_error_cause_o

    ); 

    //////////////////////////////////////////////////////////////////////////////////
    //    ___                           _ _              ___       __  __           //
    //   | __|__ _ ___ __ ____ _ _ _ __| (_)_ _  __ _   | _ )_  _ / _|/ _|___ _ _   //
    //   | _/ _ \ '_\ V  V / _` | '_/ _` | | ' \/ _` |  | _ \ || |  _|  _/ -_) '_|  //
    //   |_|\___/_|  \_/\_/\__,_|_| \__,_|_|_||_\__, |  |___/\_,_|_| |_| \___|_|    //
    //                                          |___/                               //
    //////////////////////////////////////////////////////////////////////////////////

    // The forwarding buffer acts as a simple MPTE cache.
    // It takes transactions out of the MPTE Parsing Stage and lookups
    // if an MPTE is already available for this transaction, hence
    // Marking it as NON-WALKING for the Memory Stage

    if( FORWARDING_BUFFER_ENABLE ) begin: gen_forwarding_buffer
        forwarding_buffer #(
            .TRANSACTION_DATA_WIDTH     ( PIPELINE_SLAVE_DATA_WIDTH                 ),
            .FORWARDING_BUFFER_DEPTH    ( FORWARDING_BUFFER_DEPTH                   )
        ) forwarding_buffer_u (
            .clk_i                      ( clk_i                                     ),
            .rst_ni                     ( rst_ni                                    ),

            // Slave Port from the MPTE_parsiing
            `MAP_DATA_PORT              ( parsing_slave_stage   , parsing_to_forwarding ),
            // Slave Port to the Memory Stage update
            `MAP_DATA_PORT              ( mem_slave_stage       , walking_to_forwarding ),
            // Master Port to the Memory Stage
            `MAP_DATA_PORT              ( mem_master_stage      , forwarding_to_walking )
        ); 
    end else begin: no_forwarding_buffer
        `ASSIGN_DATA_BUS( forwarding_to_walking, parsing_to_forwarding );
    end

    //////////////////////////////////////////////////////////////////
    //    __  __                          ___ _                     //
    //   |  \/  |___ _ __  ___ _ _ _  _  / __| |_ __ _ __ _ ___     //
    //   | |\/| / -_) '  \/ _ \ '_| || | \__ \  _/ _` / _` / -_)    //
    //   |_|  |_\___|_|_|_\___/_|  \_, | |___/\__\__,_\__, \___|    //
    //                             |__/               |___/         //
    //////////////////////////////////////////////////////////////////

    // The Walking Stage supports a memory read stage.

    memory_read_stage #(
        .PIPELINE_SLAVE_DATA_WIDTH  ( PIPELINE_SLAVE_DATA_WIDTH             ),
        .PIPELINE_MASTER_DATA_WIDTH ( PIPELINE_MASTER_DATA_WIDTH            ),
        .TRANSACTION_FIFO_DEPTH     ( TRANSACTION_FIFO_DEPTH                ),
        .MEMORY_DATA_WIDTH          ( MEMORY_TRANSACTION_DATA_WIDTH         ),                      
        .MEMORY_ADDR_WIDTH          ( MEMORY_TRANSACTION_ADDR_WIDTH         )
    ) mem_stage_u (
        .clk_i                      ( clk_i                                 ),
        .rst_ni                     ( rst_ni                                ),

        // Pipeline Ports
        `MAP_DATA_PORT              ( stage_slave  , forwarding_to_walking  ),
        `MAP_DATA_PORT              ( stage_master , from_walking           ),

        // PLB Cache Port
        .memory_master_mem_req      ( memory_master_mem_req                 ),
        .memory_master_mem_gnt      ( memory_master_mem_gnt                 ),
        .memory_master_mem_valid    ( memory_master_mem_valid               ),
        .memory_master_mem_addr     ( memory_master_mem_addr                ),
        .memory_master_mem_rdata    ( memory_master_mem_rdata               ),
        .memory_master_mem_wdata    ( memory_master_mem_wdata               ),
        .memory_master_mem_we       ( memory_master_mem_we                  ),
        .memory_master_mem_be       ( memory_master_mem_be                  ),
        .memory_master_mem_error    ( memory_master_mem_error               )    
    );

    //////////////////////////
    // To Forwarding Buffer //
    //////////////////////////

    assign walking_output_transaction = from_walking_data;
    // By default, the output transaction is just the output of the walking
    assign output_transaction           = walking_output_transaction;
    assign output_transaction.walking   = ( walking_output_transaction.walking == MPT_WALKING_FWD ) ? MPT_WALKING_DO : walking_output_transaction.walking ;

    // If the output transaction matched in the fwd buffer, it skipped the walking.
    // It is marked with MPT_WALKING_FWD. We need to reset it to MPT_WALKING_DO.
    // Otherwise, if the value was MPT_WALKING_DO, we can update the fwd buffer
    // With the current transaction mpte value
    always_comb begin: forward_transaction_process
        if( walking_output_transaction.walking == MPT_WALKING_DO && walking_output_transaction.valid && walking_to_forwarding_ready ) begin
            walking_to_forwarding_valid = from_walking_valid;
            walking_to_forwarding_data = walking_output_transaction;
        end else begin
            walking_to_forwarding_valid = '0;
            walking_to_forwarding_data = '0;
        end
    end

    //////////////////////////////////////////////////
    //    ___                   _   _               //
    //   | _ \___ _ __  __ _ __| |_(_)_ _  __ _     //
    //   |   / -_) '_ \/ _` / _| / / | ' \/ _` |    //
    //   |_|_\___| .__/\__,_\__|_\_\_|_||_\__, |    //
    //           |_|                      |___/     //
    //////////////////////////////////////////////////

    assign walking_to_pipe_valid    = from_walking_valid;
    assign walking_to_pipe_data     = output_transaction;
    assign from_walking_ready       = walking_to_pipe_ready;

    pipeline_register # ( 
        .DATA_WIDTH             ( PIPELINE_SLAVE_DATA_WIDTH         )
    ) walking_reg (
        .clk_i                  ( clk_i                             ),
        .rst_ni                 ( rst_ni                            ),
        `MAP_DATA_PORT          ( s_data, walking_to_pipe           ),
        `MAP_DATA_PORT          ( m_data, stage_master              ),
        `SINK_SLAVE_CTRL_PORT   ( s_ctrl                            ),
        `SINK_MASTER_STATUS_PORT( s_status  )
    );
    
endmodule : walking_stage

// verilator lint_on UNOPTFLAT
// verilator lint_on PINCONNECTEMPTY
// verilator lint_on UNDRIVEN