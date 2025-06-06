// Author: Stefano Mercogliano <stefano.mercogliano@unina.it>

// Description:
//  The Memory Stage implements the Read SRAM protocol to the outside of the unit.
//  Every time a new transaction coming from a previous stage is ready, it is issued
//  On the memory port. The stage is pipelined using FIFOs, allowing for 
//  handling up to TRANSACTION_FIFO_DEPTH outstanding memory requests.

// TODO: Support stall and flush logic

/* verilator lint_off IMPORTSTAR */
import mpt_pkg::*;
/* verilator lint_on IMPORTSTAR */

// Import headers
`include "pipelining.svh"
`include "uninasoc_mem.svh"

// verilator lint_off UNOPTFLAT
// verilator lint_off PINCONNECTEMPTY
// verilator lint_off UNDRIVEN

module memory_read_stage #(
    parameter unsigned  PIPELINE_SLAVE_DATA_WIDTH   = 32,
    parameter unsigned  PIPELINE_MASTER_DATA_WIDTH  = 32,
    parameter unsigned  TRANSACTION_FIFO_DEPTH      = 4,
    parameter unsigned  MEMORY_DATA_WIDTH           = 32,                        
    parameter unsigned  MEMORY_ADDR_WIDTH           = 32
) (
    // Generic Signals
    input  logic                clk_i,
    input  logic                rst_ni,

    // Memory Stage Slave Port
    `DEFINE_SLAVE_DATA_PORT(stage_slave, PIPELINE_SLAVE_DATA_WIDTH),

    // Memory Stage Master Port
    `DEFINE_MASTER_DATA_PORT(stage_master, PIPELINE_MASTER_DATA_WIDTH),

    // Memory Master interface
    `DEFINE_MEM_MASTER_PORTS(memory_master, MEMORY_DATA_WIDTH, MEMORY_ADDR_WIDTH)

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

    `DECLARE_DATA_BUS( req_bus , PIPELINE_SLAVE_DATA_WIDTH );
    `DECLARE_DATA_BUS( req_to_mem_bus , PIPELINE_SLAVE_DATA_WIDTH );

    // Data bus unpacking signal
    mptw_transaction_t req_to_grant_fifo;
    mptw_transaction_t grant_fifo_to_valid_fifo;
    mptw_transaction_t valid_fifo_to_master;

    logic grant_fifo_full;
    logic grant_fifo_empty;
    logic grant_fifo_push;
    logic grant_fifo_pop;
    logic [1:0] grant_fifo_usage;
    mptw_transaction_t grant_fifo_data_in;
    mptw_transaction_t grant_fifo_data_out;

    logic valid_fifo_full;
    logic valid_fifo_empty;
    logic valid_fifo_push;
    logic valid_fifo_pop;
    logic [1:0] valid_fifo_usage;
    mptw_transaction_t valid_fifo_data_in;
    mptw_transaction_t valid_fifo_data_out;

    logic [2:0] stage_usage;

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

    assign req_to_grant_fifo = req_bus_data;

    //////////////////////////////////////////
    //    ___                      _        //
    //   | _ \___ __ _ _  _ ___ __| |_      //
    //   |   / -_) _` | || / -_|_-<  _|     //
    //   |_|_\___\__, |\_,_\___/__/\__|     //
    //              |_|                     //
    //////////////////////////////////////////

    // The memory read stage implements only read transactions
    assign memory_master_mem_wdata  = '0;
    assign memory_master_mem_we     = '0;
    assign memory_master_mem_be     = '0;

    pipeline_register # ( 
        .DATA_WIDTH             ( PIPELINE_SLAVE_DATA_WIDTH         )
    ) req_reg (
        .clk_i                  ( clk_i                             ),
        .rst_ni                 ( rst_ni                            ),
        `MAP_DATA_PORT          ( s_data, stage_slave               ),
        `MAP_DATA_PORT          ( m_data, req_bus                   ),
        `SINK_SLAVE_CTRL_PORT   ( s_ctrl                            ),
        `SINK_MASTER_STATUS_PORT( s_status  )
    );

    assign stage_usage = ( {1'b0, grant_fifo_usage} + {2'b0, grant_fifo_push} /* - {2'b0, grant_fifo_pop}*/ ) 
                       + ( {1'b0, valid_fifo_usage} /*+ {2'b0, valid_fifo_push} - {2'b0, valid_fifo_pop}*/ );

    assign memory_master_mem_req = ( stage_usage < 3'b100 && ~grant_fifo_full && ~valid_fifo_full ) ? req_bus_valid : 1'b0 ;
    assign memory_master_mem_addr = req_to_grant_fifo.spa;
    assign req_bus_ready = memory_master_mem_gnt;

    //////////////////////////////////////////////////////
    //     ___              _     ___ ___ ___ ___       //
    //    / __|_ _ __ _ _ _| |_  | __|_ _| __/ _ \      //
    //   | (_ | '_/ _` | ' \  _| | _| | || _| (_) |     //
    //    \___|_| \__,_|_||_\__| |_| |___|_| \___/      //
    //                                                  //
    //////////////////////////////////////////////////////        

    assign grant_fifo_data_in = req_to_grant_fifo;
    assign grant_fifo_push = memory_master_mem_gnt;

    fifo_v3 #(
        .FALL_THROUGH   ( 1'b0                      ),  
        .DATA_WIDTH     ( $bits(mptw_transaction_t) ),
        .DEPTH          ( TRANSACTION_FIFO_DEPTH    ),   
        .dtype          ( mptw_transaction_t        )
    ) grant_fifo_u (
        .clk_i          ( clk_i                     ),
        .rst_ni         ( rst_ni                    ),
        .flush_i        ('0                         ),
        // status flags
        .full_o         ( grant_fifo_full     ),
        .empty_o        ( grant_fifo_empty    ),
        // as long as the queue is not full we can push new data
        .data_i         ( grant_fifo_data_in  ),
        .push_i         ( grant_fifo_push     ),
        // as long as the queue is not empty we can pop new elements
        .data_o         ( grant_fifo_data_out ),
        .pop_i          ( grant_fifo_pop      ),
        // Unused
        .usage_o        ( grant_fifo_usage          ),  // fill pointer
        .testmode_i     ( '0                        )   // test_mode to bypass clock gating
    );

    // Pop from the grant fifo
    assign grant_fifo_pop = memory_master_mem_valid;
    // The response data can be saved into the current transaction
    assign grant_fifo_to_valid_fifo.rpa         = memory_master_mem_rdata;
    assign grant_fifo_to_valid_fifo.mmpt        = grant_fifo_data_out.mmpt;
    assign grant_fifo_to_valid_fifo.spa         = grant_fifo_data_out.spa;
    assign grant_fifo_to_valid_fifo.access_type = grant_fifo_data_out.access_type;
    assign grant_fifo_to_valid_fifo.walking     = grant_fifo_data_out.walking;

    //////////////////////////////////////////////////
    //   __   __    _ _    _   ___ ___ ___ ___      //
    //   \ \ / /_ _| (_)__| | | __|_ _| __/ _ \     //
    //    \ V / _` | | / _` | | _| | || _| (_) |    //
    //     \_/\__,_|_|_\__,_| |_| |___|_| \___/     //
    //                                              //
    //////////////////////////////////////////////////

    assign valid_fifo_data_in = grant_fifo_to_valid_fifo;
    // A data is pushed in the valid fifo right from the grant fifo
    // This can happen in two scenarios:
    //      1 - The next stage is not ready
    //      2 - The next stage is ready, and the valid fifo is not empty

    assign valid_fifo_push = ( ~stage_master_ready || ( stage_master_ready && ~valid_fifo_empty ) ) ? grant_fifo_pop : 1'b0 ;
    
    fifo_v3 #(
        .FALL_THROUGH   ( 1'b0                      ),  
        .DATA_WIDTH     ( $bits(mptw_transaction_t) ),
        .DEPTH          ( TRANSACTION_FIFO_DEPTH    ),   
        .dtype          ( mptw_transaction_t        )
    ) valid_fifo_u (
        .clk_i          ( clk_i                     ),
        .rst_ni         ( rst_ni                    ),
        .flush_i        ( '0                        ),
        // status flags
        .full_o         ( valid_fifo_full     ),
        .empty_o        ( valid_fifo_empty    ),
        // as long as the queue is not full we can push new data
        .data_i         ( valid_fifo_data_in  ),
        .push_i         ( valid_fifo_push     ),
        // as long as the queue is not empty we can pop new elements
        .data_o         ( valid_fifo_data_out ),
        .pop_i          ( valid_fifo_pop      ),
        // Unused
        .usage_o        ( valid_fifo_usage                          ),  // fill pointer
        .testmode_i     ( '0                        )   // test_mode to bypass clock gating
    );

    // Depending on the valid fifo status, the output is driven from one queue or another
    assign valid_fifo_to_master = ( valid_fifo_empty ) ? grant_fifo_to_valid_fifo : valid_fifo_data_out ;
    assign valid_fifo_pop = ( stage_master_ready && ~valid_fifo_empty ) ? 1'b1 : 1'b0 ;

    //////////////////////////////////////////////////
    //    ___                   _   _               //
    //   | _ \___ _ __  __ _ __| |_(_)_ _  __ _     //
    //   |   / -_) '_ \/ _` / _| / / | ' \/ _` |    //
    //   |_|_\___| .__/\__,_\__|_\_\_|_||_\__, |    //
    //           |_|                      |___/     //
    //////////////////////////////////////////////////

    assign stage_master_data    = valid_fifo_to_master;
    assign stage_master_valid   = ( stage_master_ready && valid_fifo_empty ) ? grant_fifo_pop : valid_fifo_pop ;

endmodule : memory_read_stage

// verilator lint_on UNOPTFLAT
// verilator lint_on PINCONNECTEMPTY
// verilator lint_on UNDRIVEN