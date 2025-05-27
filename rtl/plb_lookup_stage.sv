// Author: Stefano Mercogliano <stefano.mercogliano@unina.it>

// Description:
//  The PLB lookup stage exposes a memory interface specifically used to access the PLB.
//  Currently we use a MEM/SRAM interface, assuming the address to be used as a TAG by the PLB.
//  The MEM protocol can be pipelined in two stages: grant_stage and valid_stage.
//  A plb_lookup_req is made of the current Supervisor Domain ID, the Supervisor Phyisical Address
//  And the required access permissions. If the data is available, the transaction is marked as MPT_WALKING_SKIP
//  Protocol conversion can be applied outside of the MPT Walker to comply with a specific Cache.

// TODO: Support stall and flush logic

/* verilator lint_off IMPORTSTAR */
import mpt_pkg::*;
/* verilator lint_on IMPORTSTAR */

// Import headers
`include "pipelining.svh"
`include "uninasoc_mem.svh"

module plb_lookup_stage #(
    parameter unsigned  PIPELINE_SLAVE_DATA_WIDTH   = 32;
    parameter unsigned  PIPELINE_MASTER_DATA_WIDTH  = 32;
    localparam unsigned PLB_TRANSACTION_DATA_WIDTH  = 1;                        // Only interested in the hit response 
    localparam unsigned PLB_TRANSACTION_ADDR_WIDTH  = $bits(plb_lookup_req_t); 
) (
    // Generic Signals
    input  logic                clk_i,
    input  logic                rst_ni,

    // PLB Lookup Slave Port
    `DEFINE_SLAVE_DATA_PORT(plb_lookup_slave, PIPELINE_SLAVE_DATA_WIDTH),

    // PLB Lookup Master Port
    `DEFINE_MASTER_DATA_PORT(plb_lookup_master, PIPELINE_MASTER_DATA_WIDTH),

    // PLB Lookup Control Port (Unused atm)
    `DEFINE_SLAVE_CTRL_PORT(plb_lookup_control),

    // Cache memory interface
    `DEFINE_MEM_MASTER_PORTS(plb_cache, PLB_TRANSACTION_DATA_WIDTH, PLB_TRANSACTION_ADDR_WIDTH)

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

    plb_lookup_req_t    plb_tag_req;
    mptw_transaction_t  grant_stage_transaction;
    mptw_transaction_t  valid_stage_pre_hit_transaction;
    mptw_transaction_t  valid_stage_post_hit_transaction;

    logic               plb_hit_d, plb_hit_q;
    logic               plb_hit_valid_d, plb_hit_valid_q;
    logic               hit_produced;

    // Data bus from Grant Stage to Valid Stage
    `DECLARE_DATA_BUS(grant_to_valid, PIPELINE_SLAVE_DATA_WIDTH)
    `DECLARE_CTRL_BUS(grant_ctrl)

    // Data bus from Valid Stage to the outside (next pipeline reg)
    `DECLARE_DATA_BUS(valid_stage, PIPELINE_SLAVE_DATA_WIDTH)

    ///////////////////////
    // Bus Concatenation //
    ///////////////////////

    // Assign ctrl signals to the inner stages
    // If the plb_lookup_stage is flushed or stalled, all the other
    // stages must be stalled/flushed as well
    `ASSIGN_CTRL_BUS(grant_ctrl, plb_lookup_ctrl)
    `ASSIGN_CTRL_BUS(valid_ctrl, plb_lookup_ctrl)

    //////////////////////////////////////////////////////
    //    _   _                    _   _                //
    //   | | | |_ _  _ __  __ _ __| |_(_)_ _  __ _      //
    //   | |_| | ' \| '_ \/ _` / _| / / | ' \/ _` |     //
    //    \___/|_||_| .__/\__,_\__|_\_\_|_||_\__, |     //
    //              |_|                      |___/      //
    //////////////////////////////////////////////////////

    // Unpack data into grant_stage_transaction
    assign grant_stage_transaction = plb_lookup_slave_rdata;

    //////////////////////////////////////////////////////////
    //     ___              _     ___ _                     //
    //    / __|_ _ __ _ _ _| |_  / __| |_ __ _ __ _ ___     //
    //   | (_ | '_/ _` | ' \  _| \__ \  _/ _` / _` / -_)    //
    //    \___|_| \__,_|_||_\__| |___/\__\__,_\__, \___|    //
    //                                        |___/         //
    //////////////////////////////////////////////////////////

    // In the grant stage, the transaction is built and forwarded.
    // Once the grant signal is asserted, the transaction moves to
    // the next stage, leaving room for another transaction to come in

    // First, let's build the PLB request out of the input transaction
    assign plb_tag_req.SDID         = grant_stage_transaction.mmpt.SDID;
    assign plb_tag_req.spa          = grant_stage_transaction.spa;
    assign plb_tag_req.access_type  = grant_stage_transaction.access_type;

    // Second, issue a new plb cache request if the Valid Stage is ready.
    // This is fundamental as when a grant is provided by the memory, in t he
    // next clock cycles[s] an answer will come regardless of the Valid Stage status.
    always_comb begin
        // Deault values
        plb_cache_mem_req   = '0;
        plb_cache_mem_addr  = '0;
        plb_cache_mem_we    = '0;
        // If Valid Stage is ready, send out a read request.
        // The request is high as long as the pipeline is working.
        // Once the grant signal is asserted by the memory, the result
        // Will come regardless of the MPT walker status (it will be ignored though)
        if ( grant_to_valid_ready ) begin 
            plb_cache_mem_req   = plb_lookup_slave_valid;
            plb_cache_mem_addr  = plb_tag_req;  
            // If the grant is received, the memory will return a value
            // in the next clock cycle[s]
            if ( plb_cache_mem_gnt ) begin
                // We can write on the pipeline register
                grant_to_valid_valid    = 1'b1;
                // Next clock cycle, we can have a new request coming in
                plb_lookup_slave_ready  = 1'b1;
            end else begin
                grant_to_valid_valid    = 1'b0;
                plb_lookup_slave_ready  = 1'b0;
            end
        end 
    end

    // The transaction value will be forwarded to the valid stage
    assign grant_to_valid_data = grant_stage_transaction;

    ///////////////////////
    // Pipeline Register //
    ///////////////////////

    // Once the grant signal is asserted, the input transaction can be forwarded
    // to the next stage. There is no reason to save the plb request.

    pipeline_register #(
        .DATA_WIDTH             ( $bits(grant_to_valid_data)    )
    ) grant_to_valid_reg (
        .clk_i                  ( clk_i                         ),
        .rst_ni                 ( rst_ni                        ),
        `MAP_DATA_PORT          ( s_data, grant_to_valid        ),
        `MAP_DATA_PORT          ( m_data, valid_stage           ),
        `MAP_CTRL_PORT          ( s_ctrl, grant_ctrl            )
    ); 

    //////////////////////////////////////////////////////
    //   __   __    _ _    _   ___ _                    //
    //   \ \ / /_ _| (_)__| | / __| |_ __ _ __ _ ___    //
    //    \ V / _` | | / _` | \__ \  _/ _` / _` / -_)   //
    //     \_/\__,_|_|_\__,_| |___/\__\__,_\__, \___|   //
    //                                     |___/        //
    //////////////////////////////////////////////////////

    // In the valid stage, we wait for the memory to return the hit value.
    // We assume it to be encoded into the data port for the read transaction
    // issued in the previous stage.

    // Hit value is encoded in the read data transaction ( which is 1 bit wide )
    // By default, the hit signal is non-valid, and the git depends on the data response.
    assign plb_hit_d        = ( plb_cache_mem_data ) ? 1'b1 : 1'b0 ;
    assign plb_hit_valid_d  = plb_cache_mem_valid; 

    // Once the `plb_cache_mem_valid` signal is asserted, the hit value is correctly retrieved.
    // Nevertheless, The valid stage is not free to go once the hit value is retrieved, as the next stage
    // might not be available. However, the cache does not need to stall, therefore we must buffer
    // the hit bit, and use it when the next stage is ready to process it.
    assign hit_produced = plb_hit_valid_d || plb_hit_valid_q;
    always_ff @(posedge clk_i) begin
        if (~rst_ni) begin
            plb_hit_q <= '0;
        end else begin
            // This FFs follow a producer-consumer logic. The producer is the memory ( `plb_cache_mem_valid` ).
            // The consumer is the Next stage ( `plb_lookup_master_ready` ).
            if ( plb_cache_mem_valid && ~plb_lookup_master_ready ) begin 
                // Data is produced, but the consumer is not ready.
                // Therefore, buffer the data
                plb_hit_q       <= plb_hit_d;
                plb_hit_valid_q <= plb_hit_valid_d;
            else if ( plb_hit_valid_q ) begin 
                // If the produced response was buffered, we need to wait for the consumer
                plb_hit_q       <= ( plb_lookup_master_ready ) ? '0 : plb_hit_q ;
                plb_hit_valid_q <= ( plb_lookup_master_ready ) ? '0 : plb_hit_valid_q ;
            end else begin
                // In all other cases, just keep the FFs low
                plb_hit_q       <= '0;
                plb_hit_valid_q <= '0;
            end
        end
    end

    // This stage is ready to accept a transaction only if the data is produced, and
    // the next stage (i.e. the consumer) is ready (i.e. will get the data in the next clock cycle)
    assign valid_stage_ready = (hit_produced) && plb_lookup_master_ready;

    // Once the plb hit value is valid, and the next stage is ready, we can update the transaction value
    // Depending on the hit; if the transaction was found in the PLB, then the walking is avoided,
    // otherwise it must be performed.
    assign valid_stage_pre_hit_transaction = valid_stage_data;

    always_comb begin

        valid_stage_post_hit_transaction.mmpt = valid_stage_pre_hit_transaction.mmpt;
        valid_stage_post_hit_transaction.spa = valid_stage_pre_hit_transaction.spa;
        valid_stage_post_hit_transaction.access_type = valid_stage_pre_hit_transaction.access_type;

        if ( valid_stage_ready ) begin 
            valid_stage_post_hit_transaction.walking = ( ( plb_hit_q || plb_hit_d ) ) ? MPT_WALKING_SKIP : MPT_WALKING_DO ;
        end 
    end

    //////////////////////////////////////////////////
    //    ___                   _   _               //
    //   | _ \___ _ __  __ _ __| |_(_)_ _  __ _     //
    //   |   / -_) '_ \/ _` / _| / / | ' \/ _` |    //
    //   |_|_\___| .__/\__,_\__|_\_\_|_||_\__, |    //
    //           |_|                      |___/     //
    //////////////////////////////////////////////////

    // Finally, we can repack the signals to the next pipeline register/stage.
    // The output data is the `valid_stage_post_hit_transaction`
    assign plb_lookup_master_data = valid_stage_post_hit_transaction;

    // The data is valid then hit has been produced
    assign plb_lookup_master_valid = hit_produced;

    
endmodule : plb_lookup_stage

