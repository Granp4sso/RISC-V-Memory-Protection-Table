// Author: Stefano Mercogliano <stefano.mercogliano@unina.it>

// Description:
//  TBD

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

module control_unit #(
    parameter unsigned NUM_STAGES   = 4                // Four stages for SMMPT52
) (
    // Generic Signals
    input  logic                    clk_i,
    input  logic                    rst_ni,
    input  logic                    valid_req_i,        // A new valid transaction is issued
    output logic                    busy_o,             // The pipeline is still processing data
    output logic                    stalled_o,

    // External Control Signals
    input  logic                    flush_all_i,        // Externall flush
    input  logic                    flush_spec_i,       // External flush for speculative transactions
    input  logic                    stall_i,            // External Stall

    // Internal Control Signals
    input  logic                    pipeline_valid_i,   // A valid request is coming to the pipeline
    input  logic                    pipeline_ready_i,   // The pipeline can accept a new transaction
    output logic                    system_valid_o,     // The system can forward the input transaction
    output logic                    system_ready_o,     // The system can accept a new transaction

    // Control Ports to Stages
    `DEFINE_MASTER_CTRL_PORT        ( fetch_master_control      , $bits(mptw_flush_ctrl_e)               ),
    `DEFINE_MASTER_CTRL_PORT        ( issue_master_control      , $bits(mptw_flush_ctrl_e)               ),
    `DEFINE_MASTER_CTRL_PORT        ( plb_lookup_master_control , $bits(mptw_flush_ctrl_e)               ),
    `DEFINE_MASTER_CTRL_PORT_ARRAY  ( walking_master_control    , $bits(mptw_flush_ctrl_e) , NUM_STAGES  ),
    `DEFINE_MASTER_CTRL_PORT        ( retire_master_control     , $bits(mptw_flush_ctrl_e)               ),

    // Status Bus from Stages
    `DEFINE_SLAVE_STATUS_PORT        ( fetch_master_status       , $bits(mptw_flush_status_e)               ),
    `DEFINE_SLAVE_STATUS_PORT        ( issue_master_status       , $bits(mptw_flush_status_e)               ),
    `DEFINE_SLAVE_STATUS_PORT        ( plb_lookup_master_status  , $bits(mptw_flush_status_e)               ),
    `DEFINE_SLAVE_STATUS_PORT_ARRAY  ( walking_master_status     , $bits(mptw_flush_status_e) , NUM_STAGES  ),
    `DEFINE_SLAVE_STATUS_PORT        ( retire_master_status      , $bits(mptw_flush_status_e)               )

    // Error Ports from Stages
    // TBD
); 

    //////////////////////////////////////
    //    ___ _                _        //
    //   / __(_)__ _ _ _  __ _| |___    //
    //   \__ \ / _` | ' \/ _` | (_-<    //
    //   |___/_\__, |_||_\__,_|_/__/    //
    //         |___/                    //
    //////////////////////////////////////

    typedef enum logic [2:0] {
        CTRL_IDLE               = 3'b000,   // No transaction is inside the pipeline
        CTRL_RUNNING            = 3'b001,   // At least one transaction is still in the pipeline
        CTRL_FLUSH              = 3'b010,   // A Flush all request arrived from the outside
        CTRL_SPEC_FLUSH         = 3'b011,   // A speculative Flush request arrived
        CTRL_STALL              = 3'b100,   // The pipeline is stalled (wether because of internal or externall stalls)
        CTRL_STALL_AND_FLUSH    = 3'b101    // A flush is requested in a stalled state (e.g. an error occurred during walking)
    } ctrl_status_e;

    /////////////////////////
    // Signals Declaration //
    /////////////////////////

    ctrl_status_e       ctrl_status_q, ctrl_status_d;
    mptw_flush_ctrl_e   flush_type;
    logic               stall_condition;
    logic               pipeline_busy;

    /////////////////////
    // Bus Declaration //
    /////////////////////

    //////////////////////////////
    //    ___ _         _       //
    //   | __| |_  _ __| |_     //
    //   | _|| | || (_-< ' \    //
    //   |_| |_|\_,_/__/_||_|   //
    //                          //
    //////////////////////////////

    // Flush signals are generated from the outside. It can happen because
    //      1 - The CPU needs to flush the whole pipeline (e.g. reset)
    //      2 - The CPU only needs to flush speculative transactions (e.g. misprediction occurred)
    // Internally, flushes are generated only in case of error.

    // First, assign the flush_type based on the CPU request
    always_comb begin: flush_type_encode
        flush_type = MPT_FLUSH_NONE;
        if  ( flush_spec_i  ) flush_type = MPT_FLUSH_SPEC;
        if  ( flush_all_i   ) flush_type = MPT_FLUSH_ALL;   // It overrides the previous assignemnt if both are high
    end

    // We expect the external flush signal to be high for one clock cycle.
    // It will make the FSM to transition into a flush state, and go back
    // Into another state only when all stages have been emptied.
    // Forward the flush signal to all stages
    always_comb begin: flush_signal_forward
        fetch_master_control_flush      = flush_type;
        issue_master_control_flush      = flush_type;
        plb_lookup_master_control_flush = flush_type;  
        retire_master_control_flush     = flush_type;

        for( int i = 0; i < NUM_STAGES; i++ ) begin
            walking_master_control_flush[i] = flush_type;
        end
    end

    // The pipeline is busy as long as at least one stage is busy
    // This is a function of all status bus signals
    assign pipeline_busy = 1;

    //////////////////////////////
    //    ___ _        _ _      //
    //   / __| |_ __ _| | |     //
    //   \__ \  _/ _` | | |     //
    //   |___/\__\__,_|_|_|     //
    //                          //
    //////////////////////////////

    // TODO
    assign stall_condition = ( ~pipeline_ready_i ) || stall_i ;

    //////////////////////////////
    //    ___                   //
    //   | __|_ _ _ _ ___ _ _   //
    //   | _|| '_| '_/ _ \ '_|  //
    //   |___|_| |_| \___/_|    //
    //                          //
    //////////////////////////////

    // TODO
    // Flush and Stall the pipeline if an error occurs

    //////////////////////////
    //    ___ ___ __  __    //
    //   | __/ __|  \/  |   //
    //   | _|\__ \ |\/| |   //
    //   |_| |___/_|  |_|   //
    //                      //
    //////////////////////////

    always_comb begin

        // Default
        ctrl_status_d   = CTRL_IDLE;
        busy_o          = '0;
        stalled_o       = '0;               // Not yet handled

        // By default, forward the communication between system interface and pipeline
        system_ready_o  = pipeline_ready_i; 
        system_valid_o  = pipeline_valid_i;

        case ( ctrl_status_q )
            CTRL_IDLE: begin                // IDLE handling

                if ( stall_condition ) begin
                    // If the pipeline is not ready move to a stalled stage
                    // Stalls have maximum priority
                    ctrl_status_d = ( flush_type == MPT_FLUSH_NONE ) ? CTRL_STALL : CTRL_STALL_AND_FLUSH ;
                    system_ready_o = '0;
                    system_valid_o = '0;
                end else if ( flush_type == MPT_FLUSH_ALL ) begin
                    // A flush all arrived
                    ctrl_status_d = CTRL_FLUSH;
                    system_ready_o = '0;
                    system_valid_o = '0;
                end else if ( flush_type == MPT_FLUSH_SPEC ) begin
                    // A speculative flush all arrived
                    ctrl_status_d = CTRL_SPEC_FLUSH;
                    system_ready_o = '0;
                    system_valid_o = '0;
                end else if ( valid_req_i && pipeline_ready_i ) begin
                    // A valid transaction arrived and the pipeline can handle it
                    busy_o = 1'b1;
                    ctrl_status_d = CTRL_RUNNING;
                end else begin
                    ctrl_status_d = CTRL_IDLE;
                end
            end

            CTRL_RUNNING: begin             // Active running

                busy_o = pipeline_busy;
                if ( stall_condition ) begin
                    // Same as IDLE
                    ctrl_status_d = ( flush_type == MPT_FLUSH_NONE ) ? CTRL_STALL : CTRL_STALL_AND_FLUSH ;
                    system_ready_o = '0;
                    system_valid_o = '0;
                end else if ( flush_type == MPT_FLUSH_ALL ) begin
                    // A flush all arrived
                    ctrl_status_d = CTRL_FLUSH;
                    system_ready_o = '0;
                    system_valid_o = '0;
                end else if ( flush_type == MPT_FLUSH_SPEC ) begin
                    // A speculative flush all arrived
                    ctrl_status_d = CTRL_SPEC_FLUSH;
                    system_ready_o = '0;
                    system_valid_o = '0;
                end else if( ~pipeline_busy && ~( valid_req_i && pipeline_ready_i ) ) begin
                    // The pipeline is not busy anymore and no requests are coming
                    ctrl_status_d = CTRL_IDLE;
                end else begin
                    ctrl_status_d = CTRL_RUNNING;
                end

            end

            CTRL_FLUSH: begin               // Full flush
                // When flushing, the pipeline is busy until the flush is completed
                busy_o = 1'b1;
                system_ready_o = '0;
                system_valid_o = '0;
                // First, check for stalls
                if( ~pipeline_busy ) begin
                    // The pipeline is not busy anymore: the flush is completed.
                    // At this point, if a stall arrives, we go to stall, otherwise
                    // We can either go to idle or running depending if a request is coming
                    if ( stall_condition ) begin
                        ctrl_status_d = CTRL_STALL;
                    end else begin
                        ctrl_status_d = ( valid_req_i ) ? CTRL_RUNNING : CTRL_IDLE;
                        system_ready_o  = pipeline_ready_i; 
                        system_valid_o  = pipeline_valid_i;
                    end
                end else begin
                    // The flush is not yet completed. 
                    ctrl_status_d = ( stall_condition ) ? CTRL_STALL_AND_FLUSH : CTRL_FLUSH;
                end

            end

            CTRL_SPEC_FLUSH: begin          // Speculative flush (TODO)
                busy_o = pipeline_busy;
            end

            CTRL_STALL: begin               // Just stall, no flush (TODO)
                busy_o = pipeline_busy;
            end

            CTRL_STALL_AND_FLUSH: begin     // Treat like full flush (TODO)
                busy_o = pipeline_busy;

            end

            default: begin end
        endcase
    end

    always_ff @(posedge clk_i) begin
        if ( ~rst_ni ) begin
            ctrl_status_q   <= CTRL_IDLE;
        end else begin
            ctrl_status_q   <= ctrl_status_d;
        end
    end


endmodule : control_unit

// verilator lint_on UNOPTFLAT
// verilator lint_on PINCONNECTEMPTY
// verilator lint_on UNDRIVEN