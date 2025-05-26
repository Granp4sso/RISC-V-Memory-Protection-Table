// Author: Stefano Mercogliano <stefano.mercogliano@unina.it>
// Author: Valerio Di Domenico <didomenico.valerio@virgilio.it>

// Description:
//      Validate the received physical address against the maximum addressable address for the current MPT mode. 
//      If the address is invalid, generate a format_fault error

/* verilator lint_off IMPORTSTAR */
import mpt_pkg::*;
/* verilator lint_on IMPORTSTAR */

// Import headers
//`include "include/uninasoc_mem.svh" 

module check_format_stage #(
    // TBD
) (
    // Generic Signals
    input  logic                clk_i,
    input  logic                rst_ni,

    // Input Port
    input  mptw_transaction_t   from_fetch_transaction_i,
    input  logic                cf_valid_i,
    output logic                cf_ready_o,

    // Control Port
    input  logic                flush_i,                       
    input  logic                stall_i,    // Coming from the pipeline registers                  

    // Output Port
    output mptw_transaction_t   cf_transaction_o,
    output logic                cf_format_error_o
); 

    mmpt_reg_t mmpt;
    spa_t_u spa;

    assign mmpt = from_fetch_transaction_i.mmpt;
    assign spa = from_fetch_transaction_i.spa;

    // Combinatorial Logic
    always_comb begin

        case (mmpt.MODE) 

            cf_transaction_o = '0;
            cf_format_error_o = '0;
            
            // A transaction at this stage should not be BARE_MODE
            BARE_MODE: begin
                cf_format_error_o = 1'b1;
            end

            // Check if spa_q width is within the allowed range
            SMMPT43_MODE: begin
                if (spa_u_q.spa43.ZERO != 0) begin
                    cf_format_error_o = 1'b1;
                end else begin
                    cf_transaction_o = from_fetch_transaction_i;
                end
            end

            SMMPT52_MODE: begin
                if (spa_u_q.spa52.ZERO != 0) begin
                    cf_format_error_o = 1'b1;
                end else begin
                    cf_transaction_o = from_fetch_transaction_i;
                end
            end

            // Here all bits are used
            SMMPT64_MODE: begin
                    cf_transaction_o = from_fetch_transaction_i;
            end
                            
            // Generate error if reserved MODE bits are used 
            default: begin
                cf_format_error_o = 1'b1;
            end

        endcase
    end

    // Sequential Logic
    always_ff @(posedge clk_i) begin
        if (~rst_ni || flush_i) begin
            cf_transaction_o <= '0;
        end else begin
            if (~stall_i && mptw_valid_i) begin
                fetch_transaction_o <= mptw_transaction_i;
            end
        end
    end    

    // Output Signal Mapping
    assign cf_ready_o = ~stall_i;
    
endmodule : check_format_stage