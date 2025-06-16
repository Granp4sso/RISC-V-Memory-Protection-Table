// Author: Stefano Mercogliano <stefano.mercogliano@unina.it>
// Author: Valerio Di Domenico <didomenico.valerio@virgilio.it>

// Description:
//  The retire stage implements the Reorder Buffer.
//  It supports a master and a slave ports towards the issue stage to assign an ID to transactions.
//  As many Slave ports as the number of walking stages to update the state of a transaction
//  A master port to the commit stage to pop a completed transaction

// TODO: Handle exception/flush/stall logic

// TODO: Optimize resource usage. Currently transactions are entirely stored inside the ROB memories.
//       This can be heavily optimized by putting static info inside the ROB fifo, and only dynamic
//       Ones inside the ROB memories.

// verilator lint_off IMPORTSTAR
// verilator lint_off PINCONNECTEMPTY
// verilator lint_off UNDRIVEN
// verilator lint_off WIDTH
// verilator lint_off UNOPTFLAT
// verilator lint_off LITENDIAN

import mpt_pkg::*;

// Import headers
`include "pipelining.svh" 

module retire_stage #(
    parameter unsigned PIPELINE_SLAVE_DATA_WIDTH    = 32,
    parameter unsigned PIPELINE_MASTER_DATA_WIDTH   = 32,
    parameter unsigned REORDER_BUFFER_DEPTH         = 32,   // Never exceed 2**mpt_pkg::ROB_ID_SIZE
    parameter unsigned RETIRE_PORT_NUM              = 4,
    parameter unsigned PIPELINE_PASSTHROUGH         = 0   
) (
    // Generic Signals
    input  logic                clk_i,
    input  logic                rst_ni,

    // Master/Slave Ports to the Issue Stage
    `DEFINE_SLAVE_DATA_PORT(issue_stage_slave, PIPELINE_SLAVE_DATA_WIDTH),
    `DEFINE_MASTER_DATA_PORT(issue_stage_master, PIPELINE_MASTER_DATA_WIDTH),

    // Slave Interfaces to the PLB/Walking stages
    `DEFINE_SLAVE_DATA_PORT_ARRAY(retire_stage_slave, PIPELINE_SLAVE_DATA_WIDTH, RETIRE_PORT_NUM),

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

    // This assignment is required because we use ID = 2**(mpt_pkg::ROB_ID_SIZE) - 1 as the NON-valid ID.
    // Therefore, the maximum usable size for the ROB is actually 2**(mpt_pkg::ROB_ID_SIZE) - 1,
    // meaning the last valid ID being 2**(mpt_pkg::ROB_ID_SIZE) - 2.
    localparam unsigned REORDER_BUFFER_LOCAL_DEPTH =    ( REORDER_BUFFER_DEPTH == ( 2**(mpt_pkg::ROB_ID_SIZE) - 1 ) ) ?
                                                        ( REORDER_BUFFER_DEPTH - 1 ) :
                                                        ( REORDER_BUFFER_DEPTH ) ;

    // State Machine Enumerations
    typedef enum logic[1:0] { 
        ROB_PUSH_AVAILABLE,
        ROB_PUSH_FULL,
        ROB_PUSH_FLUSH
    } rob_push_status_e;

    typedef enum logic[1:0] { 
        ROB_POP_IDLE,
        ROB_POP_WAIT_FOR_COMPLETED,
        ROB_POP_FLUSH
    } rob_pop_status_e;

    /////////////////////////
    // Signals Declaration //
    /////////////////////////

    // Issue Stage
    mptw_transaction_t from_issue_transaction;
    mptw_transaction_t to_issue_transaction;

    // Retire Ports
    mptw_transaction_t retire_transaction_bus[RETIRE_PORT_NUM];

    // Push Process
    rob_push_status_e rob_push_status_q, rob_push_status_d;
    logic [$clog2(REORDER_BUFFER_DEPTH):0] rob_next_valid_id_q, rob_next_valid_id_d;

    // Reorder Buffer FIFO
    logic rob_fifo_full;
    logic rob_fifo_empty;
    logic rob_fifo_push;
    logic rob_fifo_pop;
    logic [$clog2(REORDER_BUFFER_DEPTH)-1:0] rob_fifo_usage;
    rob_id_size_t rob_fifo_data_in;
    rob_id_size_t rob_fifo_data_out;

    // Reorder Buffer Memories
    // A single ROB Memory is a packed 2D array.
    // We have an unpacked array of RETIRE_PORT_NUM elements
    logic [REORDER_BUFFER_DEPTH - 1 : 0][$bits(mptw_transaction_t) - 1 : 0] rob_memory_q[RETIRE_PORT_NUM];
    logic [REORDER_BUFFER_DEPTH - 1 : 0][$bits(mptw_transaction_t) - 1 : 0] rob_memory_d[RETIRE_PORT_NUM];
    // Addressing the ROB memories
    logic [$clog2(REORDER_BUFFER_DEPTH) - 1 : 0] rob_memory_waddr[RETIRE_PORT_NUM];
    logic [$clog2(REORDER_BUFFER_DEPTH) - 1 : 0] rob_memory_raddr[RETIRE_PORT_NUM];
    // Data from/to ROB memories
    mptw_transaction_t rob_memory_wdata[RETIRE_PORT_NUM];
    mptw_transaction_t rob_memory_rdata[RETIRE_PORT_NUM];
    // Clear ROB memories
    logic [RETIRE_PORT_NUM - 1 : 0] rob_memory_clear;

    // Pop Process
    rob_pop_status_e rob_pop_status_q, rob_pop_status_d;
    mptw_transaction_t eldest_transaction;
    logic [$clog2(REORDER_BUFFER_DEPTH):0] eldest_transaction_id;
    logic [RETIRE_PORT_NUM - 1 : 0] eldest_transaction_completed_mask;

    /////////////////////
    // Bus Declaration //
    /////////////////////

    `DECLARE_DATA_BUS( from_issue_bus   , PIPELINE_SLAVE_DATA_WIDTH                     );
    `DECLARE_DATA_BUS( to_issue_bus     , PIPELINE_SLAVE_DATA_WIDTH                     );
    `DECLARE_DATA_BUS( to_commit_bus    , PIPELINE_MASTER_DATA_WIDTH                   );

    //////////////////////////////////////////////////////
    //    _   _                    _   _                //
    //   | | | |_ _  _ __  __ _ __| |_(_)_ _  __ _      //
    //   | |_| | ' \| '_ \/ _` / _| / / | ' \/ _` |     //
    //    \___/|_||_| .__/\__,_\__|_\_\_|_||_\__, |     //
    //              |_|                      |___/      //
    //////////////////////////////////////////////////////

    `ASSIGN_DATA_BUS( from_issue_bus, issue_stage_slave );

    assign from_issue_transaction = from_issue_bus_data;

    generate
        for (genvar i = 0; i < RETIRE_PORT_NUM; i = i + 1) begin : gen_assign_retire_bus
            assign retire_transaction_bus[i] = retire_stage_slave_data[i];
        end
    endgenerate

    //////////////////////////////////////////////////
    //    ___         _      _              _       //
    //   | _ \_  _ __| |_   | |   ___  __ _(_)__    //
    //   |  _/ || (_-< ' \  | |__/ _ \/ _` | / _|   //
    //   |_|  \_,_/__/_||_| |____\___/\__, |_\__|   //
    //                                |___/         //
    //////////////////////////////////////////////////

    // When a transaction request comes from the Issue stage,
    // the retire stage returns an ID for that transaction, and
    // pushes the transaction ID inside the ROB FIFO.
    // It keeps track of the first valid ID.

    assign to_issue_transaction.completed     = from_issue_transaction.completed;
    assign to_issue_transaction.mmpt          = from_issue_transaction.mmpt;
    assign to_issue_transaction.spa           = from_issue_transaction.spa;
    assign to_issue_transaction.access_type   = from_issue_transaction.access_type;
    assign to_issue_transaction.rpa           = from_issue_transaction.rpa;
    assign to_issue_transaction.valid         = from_issue_transaction.valid;
    assign to_issue_transaction.mpte          = from_issue_transaction.mpte;
    assign to_issue_transaction.plb_hit       = from_issue_transaction.plb_hit;
    assign to_issue_transaction.walking       = from_issue_transaction.walking;
    assign to_issue_transaction.format_error  = from_issue_transaction.format_error;
    assign to_issue_transaction.access_error  = from_issue_transaction.access_error;

    always_comb begin: rob_push_process

        // By default, the next valid id does not change
        rob_next_valid_id_d = rob_next_valid_id_q;
        // Keep the ID to non-valid value
        to_issue_transaction.id = ( 2**$bits(rob_id_size_t)-1 );
        // Tie to zero Issue Stage ports
        from_issue_bus_ready = '0;
        to_issue_bus_data = '0;
        to_issue_bus_valid = '0;
        // ROB input signals
        rob_fifo_push = '0;
        rob_fifo_data_in = '0;

        case(rob_push_status_q)

            ROB_PUSH_AVAILABLE: begin
                // The ROB is not full
                from_issue_bus_ready = ( to_issue_bus_ready ) ? 1'b1 : '0;
                if( from_issue_bus_valid && to_issue_bus_ready ) begin
                    // A new request is coming from Issue Stage
                    // Since the ROB is not full, just assign the first valid ID
                    to_issue_transaction.id = rob_next_valid_id_d;
                    rob_next_valid_id_d = rob_next_valid_id_q + 1;
                    // Then present the data to the Issue Stage
                    to_issue_bus_data = to_issue_transaction;
                    to_issue_bus_valid = 1'b1;
                    // Raise the push signal
                    rob_fifo_push = 1'b1;
                    rob_fifo_data_in = to_issue_transaction.id;
                end

                // Check next state
                if( rob_fifo_usage == ( REORDER_BUFFER_DEPTH - 1 ) && ~rob_fifo_pop ) begin
                    // The current push is going to fill the FIFO and there is no pop
                    rob_push_status_d = ROB_PUSH_FULL;
                end else begin
                    // Stay in here
                    rob_push_status_d = ROB_PUSH_AVAILABLE;
                end
            end

            ROB_PUSH_FULL: begin
                // Wait untill a pop occurs
                if( rob_fifo_pop ) begin
                    rob_push_status_d = ROB_PUSH_AVAILABLE;
                end else begin
                    rob_push_status_d = ROB_PUSH_FULL;
                end 
            end

            ROB_PUSH_FLUSH: begin end // TBD

            default: begin end

        endcase

    end

    always_ff @(posedge clk_i) begin
        if ( ~rst_ni ) begin
            rob_push_status_q <= '0;
            rob_next_valid_id_q <= '0;
        end else begin
            rob_push_status_q <= rob_push_status_d;
            // Reset the next valid ID if the maximum value is reached
            rob_next_valid_id_q <= ( rob_next_valid_id_d == REORDER_BUFFER_DEPTH ) ? '0 : rob_next_valid_id_d;
        end
    end

    // Register to communicate with the issue stage
    if( ~PIPELINE_PASSTHROUGH ) begin: issue_pipeline_register_generate
        pipeline_register # ( 
            .DATA_WIDTH             ( PIPELINE_SLAVE_DATA_WIDTH    )
        ) issue_reg (
            .clk_i                  ( clk_i                         ),
            .rst_ni                 ( rst_ni                        ),
            `MAP_DATA_PORT          ( s_data, to_issue_bus          ),
            `MAP_DATA_PORT          ( m_data, issue_stage_master    ),
            `SINK_SLAVE_CTRL_PORT   ( s_ctrl                        ),
            `SINK_MASTER_STATUS_PORT( s_status  )
        );
    end else begin: issue_pipeline_register_passthrough
        `ASSIGN_DATA_BUS( issue_stage_master, to_issue_bus );
    end

    //////////////////////////////////////////////////////////////////
    //    ___                _           ___       __  __           //
    //   | _ \___ ___ _ _ __| |___ _ _  | _ )_  _ / _|/ _|___ _ _   //
    //   |   / -_) _ \ '_/ _` / -_) '_| | _ \ || |  _|  _/ -_) '_|  //
    //   |_|_\___\___/_| \__,_\___|_|   |___/\_,_|_| |_| \___|_|    //
    //                                                              //
    //////////////////////////////////////////////////////////////////

    // The ROB is implemented as a FIFO-Registers combination.
    // It enques transaction IDs when theya re issued into the pipeline.
    // At the same time, it reads from the ROB memories; 
    // if any of the memories has a completed transaction
    // At the head value, then a pop happens.

    //////////////
    // ROB FIFO //
    //////////////

    fifo_v3 #(
        .FALL_THROUGH   ( 1'b0                      ),  
        .DATA_WIDTH     ( $bits(rob_id_size_t)      ),
        .DEPTH          ( REORDER_BUFFER_DEPTH      ),   
        .dtype          ( rob_id_size_t             )
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

    // ROB memories are implemented as an addressable register file.
    // The allowed operations are Write, Read and Clear.
    // The number of ROB Memories supported equals the ROB_PORT_NUM.
    // ROB Memories are built using ROB Entries, which are as many
    // As the ROB_DEPTH, and store an entire transaction

    generate
        for (genvar i = 0; i < RETIRE_PORT_NUM; i = i + 1) begin : gen_rob_memory

            // The ROB is ready whenever it can receive a WRITE operation (always)
            // Every time a valid WRITE is available on the retire port it is
            // Propagated.
            assign retire_stage_slave_ready[i] = ( ~rob_memory_clear[i] ) ? 1'b1 : 1'b0;

            // ROB Write
            always_comb begin : rob_memory_write_logic 
                // waddr and wdata comes from the retire_data ports.
                rob_memory_wdata[i] = retire_transaction_bus[i];
                rob_memory_waddr[i] = retire_transaction_bus[i].id;
                // By default, do not update the selected entry
                rob_memory_d[i][rob_memory_waddr[i]] = rob_memory_q[i][rob_memory_waddr[i]];
                // If a valid retire request arrives, update the entry
                if( retire_stage_slave_valid[i] && ( ~rob_memory_clear[i] ) ) begin
                    rob_memory_d[i][rob_memory_waddr[i]] = rob_memory_wdata[i];
                end
            end

            // ROB Read and Clean
            always_comb begin : rob_memory_read_and_clean_logic
                // Always read whatevere the top of the FIFO says ( if it contains a valid data )
                rob_memory_raddr[i] = ( eldest_transaction_id == '1 || rob_fifo_empty ) ? '0 : eldest_transaction_id ;
                rob_memory_rdata[i] = rob_memory_q[i][rob_memory_raddr[i]];

                // Check if the selected rdata is completed
                if( rob_memory_rdata[i].completed ) begin
                    eldest_transaction_completed_mask[i] = 1'b1;
                end else begin
                    eldest_transaction_completed_mask[i] = 1'b0;
                end

                if( rob_memory_clear[i] ) begin
                    // Zero the register. This operation is mutually exclusive
                    // with writes. To improve in the future
                    rob_memory_d[i][rob_memory_raddr[i]] = '0;
                end
            end

            // Sequential
            // verilator lint_off WIDTHCONCAT
            always_ff @(posedge clk_i) begin : rob_memory_reg
                if ( ~rst_ni ) begin
                    rob_memory_q[i] <= '0;
                end else begin
                    rob_memory_q[i] <= rob_memory_d[i];
                end
            end
            // verilator lint_on WIDTHCONCAT
        end
    endgenerate

    // Assign the eldest_transaction value depending on the mask
    // Using a one-hot encoder
    always_comb begin: eldest_transaction_encoder
        eldest_transaction = '0;
        for ( int i = 0; i < RETIRE_PORT_NUM; i++ ) begin
            if ( eldest_transaction_completed_mask[i] ) begin
                eldest_transaction = rob_memory_rdata[i];
            end
        end
    end

    //////////////////////////////////////////////
    //    ___            _              _       //
    //   | _ \___ _ __  | |   ___  __ _(_)__    //
    //   |  _/ _ \ '_ \ | |__/ _ \/ _` | / _|   //
    //   |_| \___/ .__/ |____\___/\__, |_\__|   //
    //           |_|              |___/         //
    //////////////////////////////////////////////

    // Drive commit port signals
    // Pop the first valid entry and generate clear signal

    always_comb begin: rob_pop_process

        to_commit_bus_data = '0;
        to_commit_bus_valid = '0;
        rob_fifo_pop = '0;
        eldest_transaction_id = '0;
        rob_memory_clear = '0;

        // commit_stage_master
        case(rob_pop_status_q)

            ROB_POP_IDLE: begin
                // We are in idle if the fifo if the ROB is empty
                // As soon as one entry arrives, move to runnig
                if( rob_fifo_push ) begin
                    rob_pop_status_d = ROB_POP_WAIT_FOR_COMPLETED;
                end else begin
                    rob_pop_status_d = ROB_POP_IDLE;
                end
            end

            ROB_POP_WAIT_FOR_COMPLETED: begin
                // Read the eldest transaction ID
                eldest_transaction_id = rob_fifo_data_out;
                // If the eldest transaction was completed on some retire port
                // and the next stage is ready, we can send it to the commit stage
                if( |eldest_transaction_completed_mask && to_commit_bus_ready ) begin
                    to_commit_bus_data = eldest_transaction;
                    to_commit_bus_valid = 1'b1;
                    rob_fifo_pop = 1'b1;
                    rob_memory_clear = '1; // Clear all rob registers that matched
                end

                // If the fifo is going to be empty, go back to idle
                if( rob_fifo_empty || ( rob_fifo_usage == 1 && rob_fifo_pop && ~rob_fifo_push ) ) begin
                    rob_pop_status_d = ROB_POP_IDLE;
                end else begin
                    rob_pop_status_d = ROB_POP_WAIT_FOR_COMPLETED;
                end
            end

            ROB_POP_FLUSH: begin end // TBD

            default: begin end

        endcase

    end

    always_ff @(posedge clk_i) begin
        if ( ~rst_ni ) begin
            rob_pop_status_q <= ROB_POP_IDLE;
        end else begin
            rob_pop_status_q <= rob_pop_status_d;
        end
    end


    //////////////////////////////////////////////////
    //    ___                   _   _               //
    //   | _ \___ _ __  __ _ __| |_(_)_ _  __ _     //
    //   |   / -_) '_ \/ _` / _| / / | ' \/ _` |    //
    //   |_|_\___| .__/\__,_\__|_\_\_|_||_\__, |    //
    //           |_|                      |___/     //
    //////////////////////////////////////////////////

    // Register to commit stage
    if( ~PIPELINE_PASSTHROUGH ) begin: commit_stage_register_generate
        pipeline_register # ( 
            .DATA_WIDTH             ( PIPELINE_SLAVE_DATA_WIDTH    )
        ) issue_reg (
            .clk_i                  ( clk_i                         ),
            .rst_ni                 ( rst_ni                        ),
            `MAP_DATA_PORT          ( s_data, to_commit_bus         ),
            `MAP_DATA_PORT          ( m_data, commit_stage_master   ),
            `SINK_SLAVE_CTRL_PORT   ( s_ctrl                        ),
            `SINK_MASTER_STATUS_PORT( s_status  )
        );
    end else begin: commit_stage_register_generate
        `ASSIGN_DATA_BUS( commit_stage_master, to_commit_bus );
    end
    
endmodule : retire_stage

// verilator lint_on PINCONNECTEMPTY
// verilator lint_on UNDRIVEN
// verilator lint_on WIDTH
// verilator lint_on UNOPTFLAT
// verilator lint_on IMPORTSTAR
// verilator lint_on LITENDIAN