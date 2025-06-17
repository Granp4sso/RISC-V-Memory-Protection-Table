// Author: Stefano Mercogliano <stefano.mercogliano@unina.it>
// Author: Valerio Di Domenico <didomenico.valerio@virgilio.it>

// Description:
//  The forwarding buffer is used inside the Walking Stage as a
//  Phyisical Page Number Cache. Consecutive transactions are usually
//  Correlated by the locality principle; if the first fails, all the following
//  are likely to fail as well. However, given the pipelined nature of this component,
//  The MPT access for an older transaction may be useful for a younger one, hence
//  reducing both memory pressure and access latencies.

// TODO: Handle exception/flush/stall logic

// verilator lint_off IMPORTSTAR
// verilator lint_off PINCONNECTEMPTY
// verilator lint_off UNDRIVEN
// verilator lint_off UNOPTFLAT
// verilator lint_off WIDTH

import mpt_pkg::*;

// Import headers
`include "pipelining.svh" 

module forwarding_buffer #(
    parameter unsigned  TRANSACTION_DATA_WIDTH    = 32,
    parameter unsigned  FORWARDING_BUFFER_DEPTH   = 32
) (
    // Generic Signals
    input  logic                clk_i,
    input  logic                rst_ni,

    // Slave Port from the MPTE_parsiing
    `DEFINE_SLAVE_DATA_PORT ( parsing_slave_stage  , TRANSACTION_DATA_WIDTH ),

    // Slave Port to the Memory Stage update
    `DEFINE_SLAVE_DATA_PORT ( mem_slave_stage      , TRANSACTION_DATA_WIDTH ),

    // Master Port to the Memory Stage
    `DEFINE_MASTER_DATA_PORT( mem_master_stage     , TRANSACTION_DATA_WIDTH )
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

    mptw_transaction_t input_transaction;
    mptw_transaction_t output_transaction;
    mptw_transaction_t fwd_buffer_lookup_transaction;
    mptw_transaction_t fwd_buffer_update_transaction;

    logic lookup_enable;
    logic update_enable;

    mptw_fwd_buff_entry_t [FORWARDING_BUFFER_DEPTH - 1 : 0] fwd_buffer_mem_q ;
    mptw_fwd_buff_entry_t [FORWARDING_BUFFER_DEPTH - 1 : 0] fwd_buffer_mem_d ;
    logic [FORWARDING_BUFFER_DEPTH - 1 : 0]                 fwd_buffer_match_mask;
    logic [$clog2(FORWARDING_BUFFER_DEPTH) - 1 : 0]         fwd_buffer_match_addr;
    mpt_entry_t                                             fwd_buffer_match_data;
    logic                                                   fwd_match_seen;

    logic [$clog2(FORWARDING_BUFFER_DEPTH) - 1 : 0]         next_victim_line_q;
    logic [$clog2(FORWARDING_BUFFER_DEPTH) - 1 : 0]         next_victim_line_d;
    mptw_fwd_buff_entry_t                                   fwd_buffer_next_data;

    /////////////////////
    // Bus Declaration //
    /////////////////////

    `DECLARE_DATA_BUS( to_mem_bus    , TRANSACTION_DATA_WIDTH );

    //////////////////////////////////////////////////////
    //    _   _                    _   _                //
    //   | | | |_ _  _ __  __ _ __| |_(_)_ _  __ _      //
    //   | |_| | ' \| '_ \/ _` / _| / / | ' \/ _` |     //
    //    \___/|_||_| .__/\__,_\__|_\_\_|_||_\__, |     //
    //              |_|                      |___/      //
    //////////////////////////////////////////////////////

    assign input_transaction = parsing_slave_stage_data;

    //////////////////////////////////////
    //    ___       __  __              //
    //   | _ )_  _ / _|/ _|___ _ _      //
    //   | _ \ || |  _|  _/ -_) '_|     //
    //   |___/\_,_|_| |_| \___|_|       //
    //                                  //
    //////////////////////////////////////

    // On the parsing slave port, we are always ready if the 
    // next stage is ready
    assign parsing_slave_stage_ready = to_mem_bus_ready;

    /////////////////////
    // Transaction MUX //
    /////////////////////

    //If the input transaction is WALKING_SKIP, forward to output
    always_comb begin: fwd_transaction_mux
        lookup_enable = '0;
        if( input_transaction.walking == MPT_WALKING_DO && input_transaction.valid ) begin
            lookup_enable = 1'b1;
            output_transaction  = fwd_buffer_lookup_transaction;
        end else begin
            output_transaction = input_transaction;
        end
    end

    ///////////////////
    // Buffer Lookup //
    ///////////////////

    // If the lookup is enabled, check the forward buffer entries
    // against the input MPTE address
    always_comb begin: fwd_buffer_lookup_match
        for(int i = 0; i < FORWARDING_BUFFER_DEPTH; i++) begin
            if( input_transaction.mpte_ptr == fwd_buffer_mem_q[i].mpte_tag && lookup_enable ) begin
                fwd_buffer_match_mask[i] = 1'b1;
            end else begin
                fwd_buffer_match_mask[i] = 1'b0;
            end
        end
    end

    // The forward buffer is updated whenever a miss occurs
    // It means that each time an MPTE address matches, no new
    // line is added. Therefore, It is not possible to have more
    // than one match. We can use a one-hot encoder
    always_comb begin: fwd_buffer_lookup_address
        fwd_buffer_match_addr = '0;
        fwd_match_seen = '0;
        for(int i = 0; i < FORWARDING_BUFFER_DEPTH; i++) begin
            if ( !fwd_match_seen && fwd_buffer_match_mask[i] ) begin
                fwd_buffer_match_addr = i;
                fwd_match_seen = 1;
            end
        end
    end

    always_comb begin: fwd_buffer_lookup_data
        if( fwd_match_seen ) begin
            fwd_buffer_match_data = fwd_buffer_mem_q[fwd_buffer_match_addr].mpte_content;
        end else begin
            fwd_buffer_match_data = input_transaction.mpte;
        end
    end

    // Update Transaction
    assign fwd_buffer_lookup_transaction            = input_transaction;
    assign fwd_buffer_lookup_transaction.mpte       = fwd_buffer_match_data;
    assign fwd_buffer_lookup_transaction.walking    = ( fwd_match_seen ) ? MPT_WALKING_FWD : input_transaction.walking;

    ///////////////////
    // Buffer Update //
    ///////////////////

    assign fwd_buffer_mem_d = fwd_buffer_mem_q;
    assign mem_slave_stage_ready = 1'b1;
    assign update_enable = mem_slave_stage_valid;
    assign fwd_buffer_update_transaction = mem_slave_stage_data;

    // When a write arrives on the mem_slave_stage, next victim line is incremented and wdata is written
    always_comb begin: fwd_buffer_update

        next_victim_line_d      = next_victim_line_q;
        fwd_buffer_next_data    = '0;

        if( update_enable ) begin
            fwd_buffer_next_data.mpte_tag           = fwd_buffer_update_transaction.mpte_ptr;
            fwd_buffer_next_data.mpte_content       = fwd_buffer_update_transaction.mpte;
            fwd_buffer_mem_d[next_victim_line_q]    = fwd_buffer_next_data;
            next_victim_line_d                      = next_victim_line_q + 1;
        end
    end

    always_ff @(posedge clk_i) begin : fwd_buffer_reg_proc
        if ( ~rst_ni ) begin
            fwd_buffer_mem_q    <= '1; //'1; Since address 0x0 is valid for an mpte, we reset to '1.
            next_victim_line_q  <= '0;
        end else begin
            fwd_buffer_mem_q    <= fwd_buffer_mem_d;
            next_victim_line_q  <= next_victim_line_d;
        end
    end

    //////////////////////////////////////////////////
    //    ___                   _   _               //
    //   | _ \___ _ __  __ _ __| |_(_)_ _  __ _     //
    //   |   / -_) '_ \/ _` / _| / / | ' \/ _` |    //
    //   |_|_\___| .__/\__,_\__|_\_\_|_||_\__, |    //
    //           |_|                      |___/     //
    //////////////////////////////////////////////////

    assign to_mem_bus_valid = ( to_mem_bus_ready ) ? parsing_slave_stage_valid  : '0 ;
    assign to_mem_bus_data  = ( to_mem_bus_ready ) ? output_transaction         : '0 ;

    pipeline_register # ( 
        .DATA_WIDTH             ( TRANSACTION_DATA_WIDTH            )
    ) fwd_buffer_reg (
        .clk_i                  ( clk_i                             ),
        .rst_ni                 ( rst_ni                            ),
        `MAP_DATA_PORT          ( s_data, to_mem_bus                ),
        `MAP_DATA_PORT          ( m_data, mem_master_stage          ),
        `SINK_SLAVE_CTRL_PORT   ( s_ctrl                            ),
        `SINK_MASTER_STATUS_PORT( s_status  )
    );

    
endmodule : forwarding_buffer

// verilator lint_on IMPORTSTAR
// verilator lint_on PINCONNECTEMPTY
// verilator lint_on UNDRIVEN
// verilator lint_on UNOPTFLAT
// verilator lint_on WIDTH