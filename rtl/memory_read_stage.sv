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

    // Data bus unpacking signal
    mptw_transaction_t slave_to_grant_fifo;
    mptw_transaction_t grant_fifo_to_valid_fifo;
    mptw_transaction_t valid_fifo_to_master;

    logic grant_fifo_full;
    logic grant_fifo_empty;
    logic grant_fifo_push;
    logic grant_fifo_pop;
    mptw_transaction_t grant_fifo_data_in;
    mptw_transaction_t grant_fifo_data_out;

    logic valid_fifo_full;
    logic valid_fifo_empty;
    logic valid_fifo_push;
    logic valid_fifo_pop;
    mptw_transaction_t valid_fifo_data_in;
    mptw_transaction_t valid_fifo_data_out;

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

    assign slave_to_grant_fifo = stage_slave_data;

    //////////////////////////////////////////
    //    ___         _               _     //
    //   | _ \_ _ ___| |_ ___  __ ___| |    //
    //   |  _/ '_/ _ \  _/ _ \/ _/ _ \ |    //
    //   |_| |_| \___/\__\___/\__\___/_|    //
    //                                      //
    //////////////////////////////////////////

    // The memory read stage implements only read transactions
    assign memory_master_mem_wdata  = '0;
    assign memory_master_mem_we     = '0;
    assign memory_master_mem_be     = '0;

    ////////////////////////////
    // Wait for Grant Process //
    ////////////////////////////

    always_comb begin: wait_for_grant_process
        // Default assignments
        memory_master_mem_req = '0;
        memory_master_mem_addr = '0;
        grant_fifo_push = '0;

        // If a transaction is coming in, and the fifos are not full
        // We can send a new request to the memory
        if( stage_slave_valid && ~grant_fifo_full && ~valid_fifo_full ) begin

            memory_master_mem_req = 1'b1;
            memory_master_mem_addr = slave_to_grant_fifo.spa;

            // Once a new request is sent to memory, we need to wait
            // For the grant signal
            if ( memory_master_mem_gnt ) begin
                // At this point, push the data transaction fifo
                grant_fifo_push = 1'b1;
            end 
        end
    end

    ////////////////////////////
    // Wait for Valid Process //
    ////////////////////////////

    // In this process, we wait for the valid signal to come from memory.
    always_comb begin: wait_for_valid_process
        // Default assignments
        grant_fifo_pop = '0;
        grant_fifo_to_valid_fifo = '0;

        // When a memory valid is coming from the memory,
        // It means that a previous queued request has been served
        // We can pop from gran fifo only if the valid fifo is not full
        // NOTE: conditions of fifo states should be redundant, as such situations
        // shall never occur
        if( memory_master_mem_valid && ~grant_fifo_empty && ~valid_fifo_full ) begin
            // Pop from the grant fifo
            grant_fifo_pop = 1'b1;
            // The response data can be saved into the current transaction
            grant_fifo_to_valid_fifo.rpa         = memory_master_mem_rdata;
            grant_fifo_to_valid_fifo.mmpt        = grant_fifo_data_out.mmpt;
            grant_fifo_to_valid_fifo.spa         = grant_fifo_data_out.spa;
            grant_fifo_to_valid_fifo.access_type = grant_fifo_data_out.access_type;
            grant_fifo_to_valid_fifo.walking     = grant_fifo_data_out.walking;
        end
    end

    ////////////////////////////
    // Move to the Next Stage //
    ////////////////////////////

    always_comb begin: move_to_next_stage_process
        // Default assignments
        valid_fifo_push     = '0;
        valid_fifo_data_in  = '0;
        valid_fifo_pop      = '0;

        // When a memory valid data is forwarded
        if( memory_master_mem_valid ) begin
            // we need to store the transaction If the next stage is not ready
            // Or if the valid fifo is not empty ( meaning older transactions are yet to retire )
            if( ( ~stage_master_ready || ~valid_fifo_empty ) && ~valid_fifo_full ) begin
                // Push the transaction to the valid queue
                valid_fifo_push = 1'b1;
            end
            // At the same time, if the fifo is not empty, and the next stage is ready, pop
            if( stage_master_ready && ~valid_fifo_empty ) begin
                valid_fifo_pop = 1'b1;
            end
        end

    end

    ///////////////////////
    // Transaction FIFOs //
    ///////////////////////

    /* verilator lint_off PINCONNECTEMPTY */
    
    // We must ensure that we do not issue more memory transactions
    // that we can handle. We use two fifos, one for outstanding
    // memory transactions, and one for the valid responses that couldn't
    // be immediately forwarded.

    // The grant fifo stores all the transactions that 
    // received a grant, but not yet a ready
    assign grant_fifo_data_in = slave_to_grant_fifo;
    
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
        .usage_o        (                           ),  // fill pointer
        .testmode_i     ( '0                        )   // test_mode to bypass clock gating
    );

    // The Valid fifo stores all memory requests that received the
    // Valid signal, but couldn't be moved forward since the next
    // stage was not ready yet.

    assign valid_fifo_data_in = grant_fifo_to_valid_fifo;
    
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
        .usage_o        (                           ),  // fill pointer
        .testmode_i     ( '0                        )   // test_mode to bypass clock gating
    );

    // Depending on the valid fifo status, the output is driven from one queue or another
    assign valid_fifo_to_master = ( valid_fifo_empty ) ? grant_fifo_to_valid_fifo : valid_fifo_data_out ;

    /* verilator lint_off PINCONNECTEMPTY */

    //////////////////////////////////////////////////
    //    ___                   _   _               //
    //   | _ \___ _ __  __ _ __| |_(_)_ _  __ _     //
    //   |   / -_) '_ \/ _` / _| / / | ' \/ _` |    //
    //   |_|_\___| .__/\__,_\__|_\_\_|_||_\__, |    //
    //           |_|                      |___/     //
    //////////////////////////////////////////////////

    assign stage_master_data    = valid_fifo_to_master;

    // The stage is ready to receive a new data if 
    // The grant fifo and the valid fifo are not full
    // assign stage_slave_ready    = ~grant_fifo_full && ~valid_fifo_full;
    // A new data is valid if a pop request is made
    assign stage_master_valid   = ( stage_master_ready && valid_fifo_empty ) ? grant_fifo_pop : valid_fifo_pop ;

    assign stage_slave_ready    = ~valid_fifo_full && ( ~grant_fifo_full && memory_master_mem_gnt );
    
endmodule : memory_read_stage

// verilator lint_on UNOPTFLAT