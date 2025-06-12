// Author: Stefano Mercogliano <stefano.mercogliano@unina.it>
// Author: Valerio Di Domenico <didomenico.valerio@virgilio.it>

// Description:
//  The retire stage implements the Reorder Buffer.
//  It supports a master and a slave ports towards the issue stage to assign an ID to transactions.
//  As many Slave ports as the number of walking stages to update the state of a transaction
//  A master port to the commit stage to pop a completed transaction

// TODO: Handle exception/flush/stall logic

/* verilator lint_off IMPORTSTAR */
import mpt_pkg::*;
/* verilator lint_on IMPORTSTAR */

// verilator lint_off PINCONNECTEMPTY
// verilator lint_off UNDRIVEN

// Import headers
`include "pipelining.svh" 

module retire_stage #(
    parameter unsigned PIPELINE_SLAVE_DATA_WIDTH    = 32,
    parameter unsigned PIPELINE_MASTER_DATA_WIDTH   = 32,
    parameter unsigned REORDER_BUFFER_DEPTH         = 32   
) (
    // Generic Signals
    input  logic                clk_i,
    input  logic                rst_ni,

    // Master/Slave Ports to the Issue Stage
    `DEFINE_SLAVE_DATA_PORT(issue_stage_slave, PIPELINE_SLAVE_DATA_WIDTH),
    `DEFINE_MASTER_DATA_PORT(issue_stage_master, PIPELINE_MASTER_DATA_WIDTH),

    // Slave Interfaces to the PLB/Walking stages

    // Master interface to the Commit Stage
    `DEFINE_MASTER_DATA_PORT(commit_stage_master, PIPELINE_MASTER_DATA_WIDTH)
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

    logic rob_fifo_full;
    logic rob_fifo_empty;
    logic rob_fifo_push;
    logic rob_fifo_pop;
    logic [$bits(TRANSACTION_FIFO_DEPTH)-1:0] rob_fifo_usage;
    mptw_transaction_t rob_fifo_data_in;
    mptw_transaction_t rob_fifo_data_out;

    /////////////////////
    // Bus Declaration //
    /////////////////////

    //////////////////////////////////////////////////
    //    ___         _      _              _       //
    //   | _ \_  _ __| |_   | |   ___  __ _(_)__    //
    //   |  _/ || (_-< ' \  | |__/ _ \/ _` | / _|   //
    //   |_|  \_,_/__/_||_| |____\___/\__, |_\__|   //
    //                                |___/         //
    //////////////////////////////////////////////////

    // Free ID counter
    // Pointer to last ID Pushed
    // Pointer to last ID popped

    //////////////////////////////////////////////////////////////////
    //    ___                _           ___       __  __           //
    //   | _ \___ ___ _ _ __| |___ _ _  | _ )_  _ / _|/ _|___ _ _   //
    //   |   / -_) _ \ '_/ _` / -_) '_| | _ \ || |  _|  _/ -_) '_|  //
    //   |_|_\___\___/_| \__,_\___|_|   |___/\_,_|_| |_| \___|_|    //
    //                                                              //
    //////////////////////////////////////////////////////////////////

    // The ROB is implemented as a FIFO. It enques transaction when they
    // are issued into the pipeline. At the same time, it reads from the
    // ROB memories; if any of the memories has a completed transaction
    // At the head transaction ID, then a transaction is popped to commit.

    //////////////
    // ROB FIFO //
    //////////////

    fifo_v3 #(
        .FALL_THROUGH   ( 1'b0                      ),  
        .DATA_WIDTH     ( $bits(mptw_transaction_t) ),
        .DEPTH          ( TRANSACTION_FIFO_DEPTH    ),   
        .dtype          ( mptw_transaction_t        )
    ) rob_fifo_u (
        .clk_i          ( clk_i                     ),
        .rst_ni         ( rst_ni                    ),
        .flush_i        ( '0                        ),
        .full_o         ( rob_fifo_full             ),
        .empty_o        ( rob_fifo_empty            ),
        .data_i         ( rob_fifo_data_in          ),
        .push_i         ( rob_fifo_push             ),
        .data_o         ( rob_fifo_data_out         ),
        .pop_i          ( rob_fifo_pop              ),
        .usage_o        ( rob_fifo_usage            ),  
        .testmode_i     ( '0                        )   
    );

    //////////////////
    // ROB Memories //
    //////////////////

    //////////////////////////////////////////////
    //    ___            _              _       //
    //   | _ \___ _ __  | |   ___  __ _(_)__    //
    //   |  _/ _ \ '_ \ | |__/ _ \/ _` | / _|   //
    //   |_| \___/ .__/ |____\___/\__, |_\__|   //
    //           |_|              |___/         //
    //////////////////////////////////////////////


    //////////////////////////////////////////////////
    //    ___                   _   _               //
    //   | _ \___ _ __  __ _ __| |_(_)_ _  __ _     //
    //   |   / -_) '_ \/ _` / _| / / | ' \/ _` |    //
    //   |_|_\___| .__/\__,_\__|_\_\_|_||_\__, |    //
    //           |_|                      |___/     //
    //////////////////////////////////////////////////

    pipeline_register # ( 
        .DATA_WIDTH             ( PIPELINE_SLAVE_DATA_WIDTH    )
    ) issue_reg (
        .clk_i                  ( clk_i                         ),
        .rst_ni                 ( rst_ni                        ),
        `MAP_DATA_PORT          ( s_data, issue_stage_slave     ),
        `MAP_DATA_PORT          ( m_data, issue_stage_master    ),
        `SINK_SLAVE_CTRL_PORT   ( s_ctrl                        ),
        `SINK_MASTER_STATUS_PORT( s_status  )
    ); 
    
endmodule : retire_stage

// verilator lint_on PINCONNECTEMPTY
// verilator lint_on UNDRIVEN