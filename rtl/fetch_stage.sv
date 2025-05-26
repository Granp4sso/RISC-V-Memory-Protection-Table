// Author: Stefano Mercogliano <stefano.mercogliano@unina.it>
// Author: Valerio Di Domenico <didomenico.valerio@virgilio.it>

// Description:
//  The fetch stage fetches a transaction from the outside if it is ready.

/* verilator lint_off IMPORTSTAR */
import mpt_pkg::*;
/* verilator lint_on IMPORTSTAR */

// Import headers
//`include "include/uninasoc_mem.svh" 

module fetch_stage #(
    // TBD
) (
    // Generic Signals
    input  logic                clk_i,
    input  logic                rst_ni,

    // Fetch Port (Input)
    input  mptw_transaction_t   mptw_transaction_i,
    input  logic                mptw_valid_i,
    output logic                mptw_ready_o,

    // Control Port
    input  logic                flush_i,                       
    input  logic                stall_i,    // Coming from the pipeline registers                  

    // Forward Port (Output)
    output mptw_transaction_t   fetch_transaction_o
); 

    assign mptw_ready_o = ~stall_i;

    always_ff @(posedge clk_i) begin
        if (~rst_ni || flush_i) begin
            fetch_transaction_o <= '0;
        end else begin
            if (~stall_i && mptw_valid_i) begin
                fetch_transaction_o <= mptw_transaction_i;
            end
        end
    end    
    
endmodule : fetch_stage