// Author: Stefano Mercogliano <stefano.mercogliano@unina.it>
// Author: Valerio Di Domenico <didomenico.valerio@virgilio.it>

// Description:
//  The PLB lookup stage exposes a memory interface specifically used to access the PLB.
//  Currently we use a MEM/SRAM interface, assuming the address to be used as a TAG by the PLB.
//  The MEM protocol can be pipelined in two stages: grant_stage and valid_stage.
//  A plb_lookup_req is made of the current Supervisor Domain ID, the Supervisor Phyisical Address
//  And the required access permissions. If the data is available, the transaction is marked as MPT_WALKING_SKIP
//  Protocol conversion can be applied outside of the MPT Walker to comply with a specific Cache.

/* verilator lint_off IMPORTSTAR */
import mpt_pkg::*;
/* verilator lint_on IMPORTSTAR */

// Import headers
`include "pipelining.svh"
`include "uninasoc_mem.svh"

module plb_lookup_stage #(
    parameter unsigned PIPELINE_SLAVE_DATA_WIDTH = 32;
    parameter unsigned PIPELINE_MASTER_DATA_WIDTH = 32;
    localparam unsigned PLB_TRANSACTION_DATA_WIDTH = $bits(plb_lookup_req_t);
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
    `DEFINE_MEM_MASTER_PORTS(plb_cache, PLB_TRANSACTION_DATA_WIDTH)

); 

    /////////////////////////
    // Signals Declaration //
    /////////////////////////

    plb_lookup_req_t plb_tag_req;
    mptw_transaction_t transaction_i, transaction_o;
    mptw_transaction_t pre_hit_transaction, post_hit_transaction;
    logic stage_active;
    logic [1:0] current_state_q, next_state_d;
    logic plb_hit_d, plb_hit_q;
    logic plb_hit_valid_d, plb_hit_valid_q;

    `DECLARE_DATA_BUS(grant_to_valid, PIPELINE_SLAVE_DATA_WIDTH)
    `DECLARE_CTRL_BUS(grant_ctrl)

    `DECLARE_DATA_BUS(valid_to_output, PIPELINE_SLAVE_DATA_WIDTH)

    //////////////////////////////////////////////////////
    //    _   _                    _   _                //
    //   | | | |_ _  _ __  __ _ __| |_(_)_ _  __ _      //
    //   | |_| | ' \| '_ \/ _` / _| / / | ' \/ _` |     //
    //    \___/|_||_| .__/\__,_\__|_\_\_|_||_\__, |     //
    //              |_|                      |___/      //
    //////////////////////////////////////////////////////

    // First, let's unpack data into transaction_i
    assign transaction_i = plb_lookup_slave_rdata;

    // Assign ctrl signals to the inner stages
    `ASSIGN_CTRL_BUS(grant_ctrl, plb_lookup_ctrl)
    `ASSIGN_CTRL_BUS(valid_ctrl, plb_lookup_ctrl)

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
    assign plb_tag_req.SDID = transaction_i.mmpt.SDID;
    assign plb_tag_req.spa = transaction_i.spa;
    assign plb_tag_req.access_type = transaction_i.access_type;

    // Second, issue a new request if the valid stage is ready 
    always_comb begin
        // If valid stage is ready, send out the request
        if ( grant_to_valid_ready ) begin 
            plb_cache_mem_req = plb_lookup_slave_valid;
            plb_cache_mem_addr = plb_tag_req;
            plb_cache_mem_we = '0; // read transaction
            // If the grant is received, the memory will return a value
            // in the next clock cycle[s]
            if ( plb_cache_mem_gnt ) begin
                // We can write on the pipeline register
                grant_to_valid_valid = 1'b1;
                // Next clock cycle, we can have a new request coming in
                plb_lookup_slave_ready = 1'b1;
            end else begin
                grant_to_valid_valid = 1'b0;
                plb_lookup_slave_ready = 1'b0;
            end
        end 
    end

    // The transaction value will be forwarded to the valid stage
    assign grant_to_valid_data = transaction_i;

    ///////////////////////
    // Pipeline Register //
    ///////////////////////

    // Once the grant signal is asserted, the input transaction can be forwarded
    // to the next stage. There is no reason to save the plb request.

    pipeline_register #(
        .DATA_WIDTH             ( PIPELINE_SLAVE_DATA_WIDTH     )
    ) grant_to_valid_reg (
        .clk_i                  ( clk_i                         ),
        .rst_ni                 ( rst_ni                        ),
        `MAP_DATA_PORT          ( s_data, grant_to_valid        ),
        `MAP_DATA_PORT          ( m_data, valid_to_output       ),
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

    // Hit value is encoded in the read data transaction
    assign plb_hit_d = ( plb_cache_mem_data ) ? 1'b1 : 1'b0 ;
    assign plb_hit_valid_d = 1'b0; 

    // The valid stage is not free to go once the hit value is retrieved, as the next stage
    // might not be available. However, the cache does not need to stall, therefore we
    // need to buffer the the hit bit.
    always_ff @(posedge clk_i) begin
        if (~rst_ni || plb_lookup_control_flush) begin
            plb_hit_q <= '0;
        end else begin
            if ( plb_cache_mem_valid ) begin 
                plb_hit_q <= plb_hit_d;
                plb_hit_valid_d <= 1'b1
            end
        end
    end

    // Once the plb hit value is valid, and the next stage is ready, we can update the transaction value
    assign pre_hit_transaction = valid_to_output_data;

    always_comb begin

        post_hit_transaction.mmpt = pre_hit_transaction.mmpt;
        post_hit_transaction.spa = pre_hit_transaction.spa;
        post_hit_transaction.access_type = pre_hit_transaction.access_type;

        if ( (plb_hit_valid_d || plb_hit_valid_q) && plb_lookup_master_ready ) begin 
            post_hit_transaction.walking = ( plb_cache_mem_data ) ? MPT_WALKING_SKIP : MPT_WALKING_DO ;
        end 
    end

    // down here connect the last bits

    //////////////////////////////////
    // Pipeline Master Port Packing //
    //////////////////////////////////

    `ASSIGN_DATA_BUS(fetch_master, slave_master)
    
endmodule : plb_lookup_stage