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
// verilator lint_off VARHIDDEN
// verilator lint_off WIDTH

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

    typedef enum logic[1:0] { 
        GNT_IDLE,
        GNT_WAIT_FOR_GRANT,
        GNT_WAIT_FOR_USAGE
    } grant_fifo_status_e;

    typedef enum logic[1:0] { 
        VALID_IDLE,
        VALID_PASSTHROUGH,
        VALID_BUFFER
    } valid_fifo_status_e;

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
    logic [$bits(TRANSACTION_FIFO_DEPTH)-1:0] grant_fifo_usage;
    mptw_transaction_t grant_fifo_data_in;
    mptw_transaction_t grant_fifo_data_out;

    logic valid_fifo_full;
    logic valid_fifo_empty;
    logic valid_fifo_push;
    logic valid_fifo_pop;
    logic [$bits(TRANSACTION_FIFO_DEPTH)-1:0] valid_fifo_usage;
    mptw_transaction_t valid_fifo_data_in;
    mptw_transaction_t valid_fifo_data_out;

    logic [$bits(TRANSACTION_FIFO_DEPTH):0] stage_usage;
    grant_fifo_status_e grant_fifo_status_q, grant_fifo_status_d;
    valid_fifo_status_e valid_fifo_status_q, valid_fifo_status_d;

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

    //`ASSIGN_DATA_BUS( req_bus, stage_slave );

    //////////////////////////////////////////////////////
    //     ___              _     ___ ___ ___ ___       //
    //    / __|_ _ __ _ _ _| |_  | __|_ _| __/ _ \      //
    //   | (_ | '_/ _` | ' \  _| | _| | || _| (_) |     //
    //    \___|_| \__,_|_||_\__| |_| |___|_| \___/      //
    //                                                  //
    //////////////////////////////////////////////////////  

    assign stage_usage = ( {1'b0, grant_fifo_usage} /*+ {2'b0, grant_fifo_push} - {2'b0, grant_fifo_pop}*/ ) 
                       + ( {1'b0, valid_fifo_usage} /*+ {2'b0, valid_fifo_push} - {2'b0, valid_fifo_pop}*/ );

    /////////
    // FSM //
    /////////

    always_comb begin

        case(grant_fifo_status_q)
            // No transaction is waiting for a Grant
            GNT_IDLE: begin
                memory_master_mem_req = '0;
                memory_master_mem_addr = '0;
                grant_fifo_push = '0;
                req_bus_ready = 1'b0;
                grant_fifo_status_d = GNT_IDLE;
                if( req_bus_valid && ( stage_usage < TRANSACTION_FIFO_DEPTH && ~grant_fifo_full && ~valid_fifo_full ) ) begin
                    memory_master_mem_req = 1'b1;
                    memory_master_mem_addr = req_to_grant_fifo.spa;
                    // The grant signal is not necessarily an answer to a request.
                    // The memory could always keep the grant signal high
                    if( memory_master_mem_gnt ) begin
                        // If it is already high, push the data into the grant fifo
                        grant_fifo_push = 1'b1;
                        // Then raise the ready signal
                        req_bus_ready = 1'b1;
                        // Stay in GNT_IDLE
                        grant_fifo_status_d = GNT_IDLE;
                    end else begin
                        // Otherwise, do not push yet
                        grant_fifo_push = 1'b0;
                        // We are not ready yet
                        req_bus_ready = 1'b0;
                        // go to Wait for Grant
                        grant_fifo_status_d = GNT_WAIT_FOR_GRANT;
                    end
                end
            end
            // A transaction is waiting for the grant signal
            GNT_WAIT_FOR_GRANT: begin

                grant_fifo_push = 1'b0;
                req_bus_ready = 1'b0;
                memory_master_mem_req = req_bus_valid;
                memory_master_mem_addr = req_to_grant_fifo.spa;

                if( memory_master_mem_gnt ) begin
                    // Once the grant signal arrives, push the data into the fifo
                    grant_fifo_push = 1'b1;
                    if( stage_usage + 1 < TRANSACTION_FIFO_DEPTH ) begin // TODO: consider also pop signals to improve performance
                        // If enough resources are available (after the push)
                        // Then raise the ready signal
                        req_bus_ready = 1'b1;
                        // Go back to GNT_IDLE
                        grant_fifo_status_d = GNT_IDLE;
                    end else begin
                        // Otherwise, lower the ready signal
                        req_bus_ready = 1'b0;
                        // Go into Wait for Usage
                        grant_fifo_status_d = GNT_WAIT_FOR_USAGE;
                    end
                end
            end
            // The grant signal arrived, but there are no enough resources
            // To put the state in ready
            GNT_WAIT_FOR_USAGE: begin
                // When here, ensure no other memory transaction is initiated
                memory_master_mem_req = '0;
                memory_master_mem_addr = '0;
                grant_fifo_push = '0;
                if( stage_usage < TRANSACTION_FIFO_DEPTH ) begin
                    // As soon as resources free
                    req_bus_ready = 1'b1;
                    grant_fifo_status_d = GNT_IDLE;
                end else begin
                    req_bus_ready = 1'b0;
                    grant_fifo_status_d = GNT_WAIT_FOR_USAGE;
                end
            end

            default begin
                memory_master_mem_req = '0;
                memory_master_mem_addr = '0;
                grant_fifo_push = '0;
                req_bus_ready = '0;
                grant_fifo_status_d = GNT_IDLE;
            end

        endcase

    end

    // Update status
    always_ff @(posedge clk_i) begin
        if ( ~rst_ni ) begin
            grant_fifo_status_q <= '0;
        end else begin
            grant_fifo_status_q <= grant_fifo_status_d;
        end
    end      

    assign grant_fifo_data_in = req_to_grant_fifo;

    ///////////////////
    // FIFO Instance //
    ///////////////////

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
    //assign grant_fifo_pop = memory_master_mem_valid;
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

    /////////
    // FSM //
    /////////

    // NOTE: A key assumption is that the valid signal won't be raised 
    // without a transaction being requested previously. Also a valid
    // signal is high for exactly one clock cycle.

    always_comb begin

        case(valid_fifo_status_q)
            // We are in the VALID_IDLE state as long as no transaction
            // is inside the the stage
            VALID_IDLE: begin

                grant_fifo_pop = '0;
                valid_fifo_push = '0;
                valid_fifo_pop = '0;
                valid_fifo_to_master = '0;
                stage_master_valid = '0;
                valid_fifo_status_d = VALID_IDLE;

                if( grant_fifo_push && grant_fifo_empty ) begin
                    // When the first transaction is granted,
                    // We move to the passthrough stage
                    valid_fifo_status_d = VALID_PASSTHROUGH;
                end
            end

            VALID_PASSTHROUGH: begin
                // We are in Passthrough as long as the next stage is ready.
                // It means that transaction receiving the valid signal from memory
                // Can be sent to the output
                grant_fifo_pop = '0;
                valid_fifo_push = '0;
                valid_fifo_pop = '0;
                valid_fifo_to_master = '0;
                stage_master_valid = '0;

                // The next stage is VALID_IDLE if the grant FIFO is empty
                // Or it will be emptied because of the passthrough
                if( ( grant_fifo_empty && ~grant_fifo_push ) || ( ( grant_fifo_usage - 1 == '0 ) && grant_fifo_pop && ~grant_fifo_push ) ) begin
                    valid_fifo_status_d = VALID_IDLE;
                end else begin
                    valid_fifo_status_d = VALID_PASSTHROUGH;
                end

                // If a valid signal arrives
                if( memory_master_mem_valid ) begin
                    // A valid signal arrived
                    grant_fifo_pop = 1'b1;
                    if( ~stage_master_ready && ~valid_fifo_full ) begin
                        // The next stage is not ready. We need to buffer
                        // this transaction and move to the buffering stage
                        valid_fifo_push = 1'b1;
                        valid_fifo_status_d = VALID_BUFFER;
                    end else begin
                        // Otherwise, the transaction from grant fifo can
                        // be forwarded to the next stage
                        valid_fifo_to_master = grant_fifo_to_valid_fifo;
                        stage_master_valid = 1'b1;
                    end
                end
            end

            VALID_BUFFER: begin
                // In the buffering stage, all valid transactions are buffered
                // Untill the next stage is ready
                grant_fifo_pop = '0;
                valid_fifo_push = '0;
                valid_fifo_pop = '0;
                valid_fifo_to_master = '0;
                stage_master_valid = '0;
                valid_fifo_status_d = VALID_BUFFER;

                // If a valid signal arrives
                if( memory_master_mem_valid ) begin
                    // Move data from grant fifo to valid fifo
                    grant_fifo_pop = ( ~valid_fifo_full ) ? 1'b1 : '0;
                    valid_fifo_push = ( ~valid_fifo_full ) ? 1'b1 : '0;
                end

                if( ~stage_master_ready ) begin
                    // Stay in VALID_BUFFER
                    valid_fifo_status_d = VALID_BUFFER;
                end else begin
                    // Data can be moved to the next stage
                    valid_fifo_to_master = valid_fifo_data_out;
                    stage_master_valid = 1'b1;
                    valid_fifo_pop = 1'b1;
                    // If the valid FIFO is going to be emptied
                    // We can go back to the VALID_PASSTHROUGH state
                    if( ( valid_fifo_usage - 1 == '0 ) && ~valid_fifo_push ) begin
                        valid_fifo_status_d = VALID_PASSTHROUGH;
                    end else begin
                        valid_fifo_status_d = VALID_BUFFER;
                    end
                end          
            end

            default begin
                grant_fifo_pop = '0;
                valid_fifo_push = '0;
                valid_fifo_pop = '0;
                valid_fifo_to_master = '0;
                stage_master_valid = '0;
                valid_fifo_status_d = VALID_IDLE;
            end

        endcase

    end

    // Update status
    always_ff @(posedge clk_i) begin
        if ( ~rst_ni ) begin
            valid_fifo_status_q <= VALID_IDLE;
        end else begin
            valid_fifo_status_q <= valid_fifo_status_d;
        end
    end      

    //assign valid_fifo_push = ( ~stage_master_ready || ( stage_master_ready && ~valid_fifo_empty ) ) ? grant_fifo_pop : 1'b0 ;
    
    ///////////////////
    // FIFO Instance //
    ///////////////////

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
    //assign valid_fifo_to_master = ( valid_fifo_empty ) ? grant_fifo_to_valid_fifo : valid_fifo_data_out ;
    //assign valid_fifo_pop = ( stage_master_ready && ~valid_fifo_empty ) ? 1'b1 : 1'b0 ;

    //////////////////////////////////////////////////
    //    ___                   _   _               //
    //   | _ \___ _ __  __ _ __| |_(_)_ _  __ _     //
    //   |   / -_) '_ \/ _` / _| / / | ' \/ _` |    //
    //   |_|_\___| .__/\__,_\__|_\_\_|_||_\__, |    //
    //           |_|                      |___/     //
    //////////////////////////////////////////////////

    assign stage_master_data    = valid_fifo_to_master;
    //assign stage_master_valid   = ( stage_master_ready && valid_fifo_empty ) ? grant_fifo_pop : valid_fifo_pop ;

endmodule : memory_read_stage

// verilator lint_on UNOPTFLAT
// verilator lint_on PINCONNECTEMPTY
// verilator lint_on UNDRIVEN
// verilator lint_on VARHIDDEN
// verilator lint_on WIDTH