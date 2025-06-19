// Author: Stefano Mercogliano <stefano.mercogliano@unina.it>

// Description:
//  The Memory Stage implements the Read SRAM protocol to the outside of the unit.
//  Every time a new transaction coming from a previous stage is ready, it is issued
//  On the memory port. The stage is pipelined using FIFOs, allowing for 
//  handling up to TRANSACTION_FIFO_DEPTH outstanding memory requests.

// TODO: Support stall and flush logic

//verilator lint_off IMPORTSTAR
// verilator lint_off UNOPTFLAT
// verilator lint_off PINCONNECTEMPTY
// verilator lint_off UNDRIVEN
// verilator lint_off VARHIDDEN
// verilator lint_off WIDTH

import mpt_pkg::*;

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
    `DEFINE_SLAVE_DATA_PORT     ( stage_slave   , PIPELINE_SLAVE_DATA_WIDTH             ),

    // Memory Stage Master Port
    `DEFINE_MASTER_DATA_PORT    ( stage_master  , PIPELINE_MASTER_DATA_WIDTH            ),

    // Control and Status Port
    `DEFINE_SLAVE_CTRL_PORT     ( stage_ctrl    , $bits(mptw_flush_ctrl_e)              ),
    `DEFINE_MASTER_STATUS_PORT  ( stage_status  , $bits(mptw_flush_status_e)            ),

    // Memory Master interface
    `DEFINE_MEM_MASTER_PORTS    ( memory_master , MEMORY_DATA_WIDTH, MEMORY_ADDR_WIDTH  )

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

    typedef enum logic[1:0] { 
        MEM_RUN_MODE,
        MEM_FLUSH_MODE,
        MEM_SPEC_FLUSH_MODE,
        MEM_FLUSH_WAIT
    } mem_flush_status_e;

    /////////////////////////
    // Signals Declaration //
    /////////////////////////

    `DECLARE_DATA_BUS( req_bus          , PIPELINE_SLAVE_DATA_WIDTH );
    `DECLARE_DATA_BUS( to_output_bus    , PIPELINE_SLAVE_DATA_WIDTH );

    mptw_transaction_t req_to_grant_fifo;
    mptw_transaction_t grant_fifo_to_valid_fifo;
    mptw_transaction_t valid_fifo_to_master;
    logic grant_do_walk;
    logic valid_do_walk;

    logic grant_fifo_full;
    logic grant_fifo_empty;
    logic grant_fifo_push;
    logic grant_fifo_pop;
    logic [$clog2(TRANSACTION_FIFO_DEPTH)-1:0] grant_fifo_usage;
    mptw_transaction_t grant_fifo_data_in;
    mptw_transaction_t grant_fifo_data_out;

    logic valid_fifo_full;
    logic valid_fifo_empty;
    logic valid_fifo_push;
    logic valid_fifo_pop;
    logic [$clog2(TRANSACTION_FIFO_DEPTH)-1:0] valid_fifo_usage;
    mptw_transaction_t valid_fifo_data_in;
    mptw_transaction_t valid_fifo_data_out;
    logic [$clog2(TRANSACTION_FIFO_DEPTH):0] valid_counter_q, valid_counter_d;
    logic [$clog2(TRANSACTION_FIFO_DEPTH):0] spec_transaction_cnt_q, spec_transaction_cnt_d;

    logic [$clog2(TRANSACTION_FIFO_DEPTH):0] stage_usage;
    grant_fifo_status_e grant_fifo_status_q, grant_fifo_status_d;
    valid_fifo_status_e valid_fifo_status_q, valid_fifo_status_d;

    // Flush Signals
    logic flush_event;
    logic flush_fifo;
    logic flush_grant_fifo_pop;
    mem_flush_status_e flush_status_q, flush_status_d;

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

    // This register is used to stabilize the communication between the
    // Previous stage and the current stage.
    // It is not required anymore, let's leave it for safety in case we
    // need it for debug purposes

    if( 0 ) begin: pipeline_register_generate
        pipeline_register # ( 
            .DATA_WIDTH             ( PIPELINE_SLAVE_DATA_WIDTH         )
        ) req_reg (
            .clk_i                  ( clk_i                             ),
            .rst_ni                 ( rst_ni                            ),
            `MAP_DATA_PORT          ( s_data, stage_slave               ),
            `MAP_DATA_PORT          ( m_data, req_bus                   ),
            `MAP_CTRL_PORT          ( s_ctrl, stage_ctrl                ),
            `SINK_MASTER_STATUS_PORT( m_status  )
        );
    end else begin: pipeline_register_passthrough
        `ASSIGN_DATA_BUS( req_bus, stage_slave );
    end

    assign grant_do_walk = ( req_to_grant_fifo.walking == MPT_WALKING_DO );

    //////////////////////////////////////////////////////
    //     ___              _     ___ ___ ___ ___       //
    //    / __|_ _ __ _ _ _| |_  | __|_ _| __/ _ \      //
    //   | (_ | '_/ _` | ' \  _| | _| | || _| (_) |     //
    //    \___|_| \__,_|_||_\__| |_| |___|_| \___/      //
    //                                                  //
    //////////////////////////////////////////////////////  

    // The Grant FIFO is used to store transactions which received
    // A grant from the memory. A new transaction can be fetched in
    // while the previous one is waiting for a valid from the memory.
    // A transaction might require NOT to walk. If it does, it can
    // move from one fifo to another as soon as possible, without waiting
    // for any grant/valid signal.

    // A transaction is accepted only if we can guarantee for it to be
    // entirely served. It means that there must be enough space in
    // both space combined to accomodate all possible transaction movements
    assign stage_usage = ( {1'b0, grant_fifo_usage}  )  + ( {1'b0, valid_fifo_usage}  );

    /////////
    // FSM //
    /////////

    // The memory read stage implements only read transactions
    // Therefore, write signals are tied to 0
    assign memory_master_mem_wdata  = '0;
    assign memory_master_mem_we     = '0;
    assign memory_master_mem_be     = '0;

    always_comb begin

        // By default, no memory transaction is issued
        memory_master_mem_req   = '0;
        memory_master_mem_addr  = '0;
        req_bus_ready           = '0;
        grant_fifo_push         = '0;
        grant_fifo_status_d     = GNT_IDLE;

        case( grant_fifo_status_q )
            // No transaction is waiting for a Grant
            GNT_IDLE: begin
                if( req_bus_valid && ( stage_usage < TRANSACTION_FIFO_DEPTH && ~grant_fifo_full && ~valid_fifo_full ) ) begin
                    // If the current transaction requires a walk
                    // Perform the memory protocol
                    if( grant_do_walk ) begin 
                        // If a flush arrives, and no grant is out yet, avoid the current transaction to be sent out
                        memory_master_mem_req   = '1;
                        memory_master_mem_addr  = req_to_grant_fifo.mpte_ptr;
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
                    end else begin
                        // If not, just push into the fifo
                        grant_fifo_push = 1'b1;
                        // Then raise the ready signal
                        req_bus_ready = 1'b1;
                        // Stay in GNT_IDLE
                        grant_fifo_status_d = GNT_IDLE;
                    end
                end
            end
            // A transaction is waiting for the grant signal
            GNT_WAIT_FOR_GRANT: begin

                memory_master_mem_req = req_bus_valid;
                memory_master_mem_addr = req_to_grant_fifo.mpte_ptr;

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
                if( stage_usage < TRANSACTION_FIFO_DEPTH ) begin
                    // As soon as resources free
                    req_bus_ready = 1'b1;
                    grant_fifo_status_d = GNT_IDLE;
                end else begin
                    req_bus_ready = 1'b0;
                    grant_fifo_status_d = GNT_WAIT_FOR_USAGE;
                end
            end

            default begin end
        endcase

    end

    // Update status
    always_ff @(posedge clk_i) begin
        if ( ~rst_ni || flush_fifo ) begin
            grant_fifo_status_q <= GNT_IDLE;
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

    // The response data can be saved into the current transaction
    assign grant_fifo_to_valid_fifo         = grant_fifo_data_out;

    // The MPTE field is used at input time ad the read address as
    // It contains the pointer to the mpte. Once the memory answers,
    // The content of the mpte field is changed to the actual MPTE data.
    assign grant_fifo_to_valid_fifo.mpte    = memory_master_mem_rdata;

    //////////////////////////////////////////////////
    //   __   __    _ _    _   ___ ___ ___ ___      //
    //   \ \ / /_ _| (_)__| | | __|_ _| __/ _ \     //
    //    \ V / _` | | / _` | | _| | || _| (_) |    //
    //     \_/\__,_|_|_\__,_| |_| |___|_| \___/     //
    //                                              //
    //////////////////////////////////////////////////

    // The Valid FIFO handles the communication between the Grant fifo
    // And the next stage. If the next stage is ready, the Valid FIFO FSM
    // Pops from grant fifo to the next stage the valid data as soon as
    // a valid signal comes from memory. Otherwise it must be stored
    // into the Valid FIFO.

    assign valid_fifo_data_in = grant_fifo_to_valid_fifo;

    /////////
    // FSM //
    /////////

    // NOTE: A key assumption is that the valid signal won't be raised 
    // without a transaction being requested previously. Also a valid
    // signal is high for exactly one clock cycle.
    always_comb begin

        valid_do_walk           = 1'b1;
        valid_counter_d         = valid_counter_q;

        grant_fifo_pop          = ( flush_status_q != MEM_FLUSH_MODE ) ? '0 : flush_grant_fifo_pop;
        valid_fifo_push         = '0;
        valid_fifo_pop          = '0;
        valid_fifo_to_master    = '0;
        to_output_bus_valid      = '0;
        valid_fifo_status_d     = VALID_IDLE;

        case( valid_fifo_status_q )
            // We are in the VALID_IDLE state as long as no transaction
            // is inside the the stage
            VALID_IDLE: begin
                if( grant_fifo_push && grant_fifo_empty ) begin
                    // When the first transaction is granted,
                    // We move to the passthrough stage
                    valid_fifo_status_d = VALID_PASSTHROUGH;
                end
            end

            VALID_PASSTHROUGH: begin
                // We are in Passthrough as long as the next stage is ready.
                // It means that transactions can be sent to the output straight
                // from grant fifo
                valid_fifo_status_d = VALID_PASSTHROUGH;

                // Check if the current transaction in the grant fifo is
                // was walking ( i.e. it is waiting for a valid now? )
                valid_do_walk = ( grant_fifo_data_out.walking == MPT_WALKING_DO );

                if( valid_do_walk ) begin
                    // The transaction is waiting for a valid
                    if( memory_master_mem_valid || ( valid_counter_q != '0 ) ) begin
                        // A valid signal arrived, or one was
                        // Buffered before ( therefore the valid counter is used )
                        if( ~valid_fifo_full && ~grant_fifo_empty ) begin
                            grant_fifo_pop = ( ~grant_fifo_empty ) ? 1'b1 : '0 ;
                            if( ~to_output_bus_ready && ~valid_fifo_full ) begin
                                // The next stage is not ready. We need to buffer
                                // this transaction and move to the buffering stage
                                valid_fifo_push = 1'b1;
                                valid_fifo_status_d = VALID_BUFFER;
                            end else begin
                                // Otherwise, the transaction from grant fifo can
                                // be forwarded to the next stage
                                valid_fifo_to_master = grant_fifo_to_valid_fifo;
                                to_output_bus_valid = 1'b1;
                            end
                            // The valid counter value is consumed if the mem valid is not high
                            valid_counter_d = ( memory_master_mem_valid ) ? valid_counter_q : valid_counter_q - 1;
                        end
                    end
                end else begin
                    // The transaction is not waiting for a valid, meaning it can just
                    // be forwarded if the next stage is ready.
                    if( ~valid_fifo_full && ~grant_fifo_empty ) begin
                        grant_fifo_pop = ( ~grant_fifo_empty ) ? 1'b1 : 1'b0;
                        if( ~to_output_bus_ready && ~valid_fifo_full ) begin
                            // The next stage is not ready. We need to buffer
                            // this transaction and move to the buffering stage
                            valid_fifo_push = 1'b1;
                            valid_fifo_status_d = VALID_BUFFER;
                        end else begin
                            // Otherwise, the transaction from grant fifo can
                            // be forwarded to the next stage
                            valid_fifo_to_master = grant_fifo_to_valid_fifo;
                            to_output_bus_valid = 1'b1;
                        end
                        // If a valid signal arrives when handling a NON_WALKING transaction
                        // we need to take not of such occurrence
                        valid_counter_d = ( memory_master_mem_valid ) ? valid_counter_q + 1 : valid_counter_q ;
                    end
                end

                // The next stage is VALID_IDLE if the grant FIFO is empty
                // Or it will be emptied because of the passthrough and the valid fifo won't be used
                if( ( grant_fifo_empty && ~grant_fifo_push ) ||
                    ( ~valid_fifo_empty ) ||
                    ( ( grant_fifo_usage - 1 == '0 ) && ( grant_fifo_pop && ~grant_fifo_push ) && ( to_output_bus_ready ) )
                    ) begin
                    valid_fifo_status_d = VALID_IDLE;
                end

            end

            VALID_BUFFER: begin
                // In the buffering stage, all valid transactions are buffered
                // Untill the next stage is ready
                valid_fifo_status_d = VALID_BUFFER;

                // This tells us if the transaction on top of the valid buffer is valid or not
                valid_do_walk = ( valid_fifo_data_out.walking == MPT_WALKING_DO );

                ////////////////////////
                // Push on VALID FIFO //
                ////////////////////////

                if( valid_do_walk ) begin
                    // If a valid signal arrives
                    if( memory_master_mem_valid || ( valid_counter_q != '0 ) ) begin
                        if( ~valid_fifo_full && ~grant_fifo_empty ) begin
                            // Move data from grant fifo to valid fifo
                            grant_fifo_pop = 1'b1;
                            valid_fifo_push = 1'b1;
                            // The valid counter value is consumed if the mem valid is not high
                            valid_counter_d = ( memory_master_mem_valid ) ? valid_counter_q : valid_counter_q - 1;
                        end
                    end
                end else begin
                    if( ~valid_fifo_full && ~grant_fifo_empty ) begin
                        // Move data from grant fifo to valid fifo
                        grant_fifo_pop = 1'b1;
                        valid_fifo_push = 1'b1;
                        // If a valid signal arrives when handling a NON_WALKING transaction
                        // we need to take not of such occurrence
                        valid_counter_d = ( memory_master_mem_valid ) ? valid_counter_q + 1: valid_counter_q ;
                    end
                end

                /////////////////////////
                // Pop from VALID FIFO //
                /////////////////////////

                if( ~to_output_bus_ready ) begin
                    // Stay in VALID_BUFFER
                    valid_fifo_status_d = VALID_BUFFER;
                end else begin
                    // Data can be moved to the next stage
                    valid_fifo_to_master = valid_fifo_data_out;
                    to_output_bus_valid = 1'b1;
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

            default begin end

        endcase

    end

    // Update status
    always_ff @(posedge clk_i) begin
        if ( ~rst_ni || flush_fifo ) begin
            valid_fifo_status_q <= VALID_IDLE;
            valid_counter_q     <= '0;
        end else begin
            valid_fifo_status_q <= valid_fifo_status_d;
            valid_counter_q     <= valid_counter_d;
        end
    end      
    
    ///////////////////
    // FIFO Instance //
    ///////////////////

    fifo_v3 #(
        .FALL_THROUGH   ( 1'b0                      ),  
        .DATA_WIDTH     ( $bits(mptw_transaction_t) ),
        .DEPTH          ( TRANSACTION_FIFO_DEPTH    ),   
        .dtype          ( mptw_transaction_t        )
    ) valid_fifo_u (
        .clk_i          ( clk_i               ),
        .rst_ni         ( rst_ni              ),
        .flush_i        ( flush_fifo          ),
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

    //////////////////////////////////////////////////////
    //    ___ _         _      _              _         //
    //   | __| |_  _ __| |_   | |   ___  __ _(_)__      //
    //   | _|| | || (_-< ' \  | |__/ _ \/ _` | / _|     //
    //   |_| |_|\_,_/__/_||_| |____\___/\__, |_\__|     //
    //                                  |___/           //
    //////////////////////////////////////////////////////

    // The flush logic here is complex enough to require a specific code section.
    // We assume the control_unit is keeping the flush signal high until the unit does confirm it.
    // The status flushed signal must be COMPLETED for one clock cycle to ack the control unit.
    // FSMs are kept to idle thanks to the flush signal.

    // When a FLUSH_ALL arrives, the fifos are reset, and so are their state machines.
    // The valid fifo can be flushed without problems, because it contains transactions that already closed the memory protocol.
    // The grant fifo is a bit more complicated. It contains memory transactions. We cannot just reset it like we do for the valid.
    // Instead, we must wait for as many valid as required. For each valid receive, just pop, without pushing anywhere.

    // If a FLUSH_SPEC arrives, things are a bit different. Transactions must be flushed only if they are speculative.
    // Each time a spec transaction enters, we must count their number. When the flush spec arrives, let all the
    // Transactions to continue.

    assign flush_event = ( stage_ctrl_flush != MPT_FLUSH_NONE );
    
    always_comb begin

        flush_status_d          = flush_status_q;
        flush_fifo              = '0;
        stage_status_flushed    = MPT_FLUSHED_NONE;
        flush_grant_fifo_pop    = '0;

        case( flush_status_q )

            MEM_RUN_MODE: begin
                // Stay in run mode until a flush signal arrives
                if( flush_event ) begin
                    flush_status_d = ( stage_ctrl_flush == MPT_FLUSH_ALL ) ? MEM_FLUSH_MODE : MEM_SPEC_FLUSH_MODE;
                    // Reset valid fifo and state machines
                    // Only if the flush is ALL
                    flush_fifo = ( stage_ctrl_flush == MPT_FLUSH_ALL ) ? '1 : '0;
                    stage_status_flushed = MPT_FLUSHED_ONGOING;
                end else begin
                    flush_status_d = MEM_RUN_MODE;
                end
            end

            MEM_FLUSH_MODE: begin
                // Flush is on going
                stage_status_flushed = MPT_FLUSHED_ONGOING;
                // Reset valid fifo and state machines
                flush_fifo = '1;
                // The stage must not be ready to accept
                req_bus_ready = 1'b0;
                // If the grant fifo is empty, go back to run mode
                if( grant_fifo_empty ) begin
                    stage_status_flushed = MPT_FLUSHED_COMPLETED;
                    flush_status_d = MEM_FLUSH_WAIT;
                end else begin
                    // Otherwise, se must wait for valids to pop data.
                    // Or just pop if the head transaction is a non walking one
                    if( memory_master_mem_valid || ( grant_fifo_to_valid_fifo.walking != MPT_WALKING_DO ) ) begin
                        flush_grant_fifo_pop = 1'b1;
                    end
                    flush_status_d = MEM_FLUSH_MODE;
                end
            end

            MEM_SPEC_FLUSH_MODE: begin
                // TODO: Experimental
                // Here we want to mantain the classic behaviour of the stage.
                // The only difference is that in this mode spec transactions are
                // popped but not forwarded anywhere
                stage_status_flushed = MPT_FLUSHED_COMPLETED;
                if( spec_transaction_cnt_q == '0 ) begin // Maybe using D?
                    flush_status_d = MEM_RUN_MODE;
                end else begin
                    flush_status_d = MEM_SPEC_FLUSH_MODE;
                end
            end

            MEM_FLUSH_WAIT: begin
                // This stage exists to wait for the control unit
                // To update its internal status register.
                // We stay here untill the flush signal is not lowered.
                flush_fifo = '1;
                // The stage must not be ready to accept
                req_bus_ready = 1'b0;

                stage_status_flushed    = MPT_FLUSHED_COMPLETED;
                flush_status_d          = ( stage_ctrl_flush != MPT_FLUSH_NONE ) ? MEM_FLUSH_WAIT : MEM_RUN_MODE;
                
            end

        endcase

    end

    /////////////////////////
    // Speculative Counter //
    /////////////////////////
    // TODO: Experimental

    always_comb begin
        spec_transaction_cnt_d = spec_transaction_cnt_q;
        // A new speculative transaction is in the grant fifo
        if( grant_fifo_push && req_to_grant_fifo.speculative ) begin
            spec_transaction_cnt_d = spec_transaction_cnt_q + 1;
            if( to_output_bus_valid && valid_fifo_to_master.speculative ) begin
                // A speculative transaction is coming in and one is going out
                spec_transaction_cnt_d = spec_transaction_cnt_q;
            end
        end else if( to_output_bus_valid && to_output_bus_ready && valid_fifo_to_master.speculative ) begin
            // A speculative tranasction is consumed
            spec_transaction_cnt_d = spec_transaction_cnt_q - 1;
        end
    end

    ////////////////
    // Sequential //
    ////////////////

    always_ff @(posedge clk_i) begin
        if ( ~rst_ni ) begin
            flush_status_q <= MEM_RUN_MODE;
            // TODO: Experimental
            spec_transaction_cnt_q <= '0;
        end else begin
            flush_status_q <= flush_status_d;
            // TODO: Experimental
            spec_transaction_cnt_q <= ( flush_fifo ) ? '0 :  spec_transaction_cnt_d;
        end
    end   



    //////////////////////////////////////////////////
    //    ___                   _   _               //
    //   | _ \___ _ __  __ _ __| |_(_)_ _  __ _     //
    //   |   / -_) '_ \/ _` / _| / / | ' \/ _` |    //
    //   |_|_\___| .__/\__,_\__|_\_\_|_||_\__, |    //
    //           |_|                      |___/     //
    //////////////////////////////////////////////////

    assign to_output_bus_ready  = stage_master_ready;
    // If we are in flush speculative mode, transactions can flow through the stage normally, but their
    // output is ignored by the next stage.
    // TODO: Experimental
    assign stage_master_data    = ( flush_status_q == MEM_SPEC_FLUSH_MODE && valid_fifo_to_master.speculative ) ? 64'hDDDDDDDDDDDDDDDD : valid_fifo_to_master;
    assign stage_master_valid   = ( flush_status_q == MEM_SPEC_FLUSH_MODE && valid_fifo_to_master.speculative ) ? '0 : to_output_bus_valid;

endmodule : memory_read_stage

// verilator lint_on UNOPTFLAT
// verilator lint_on PINCONNECTEMPTY
// verilator lint_on UNDRIVEN
// verilator lint_on VARHIDDEN
// verilator lint_on WIDTH
// verilator lint_on IMPORTSTAR