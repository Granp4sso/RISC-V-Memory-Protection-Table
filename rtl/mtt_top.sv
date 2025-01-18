// Author: Stefano Mercogliano <stefano.mercogliano@unina.it>
// Author: Valerio Di Domenico <valer.didomenico@studenti.unina.it>

// Description:
// This module implements the top-level logic for managing memory protection 
// table lookups. It handles state transitions for the Page Table Walk 
// (PTW) process, validates addresses, and manages TLB entries based on 
// memory access type. The module communicates with control, memory and CSR 
// ports, indicating if access is allowed and if any errors occur during address translation.


/* verilator lint_off IMPORTSTAR */
import mpt_pkg::*;
/* verilator lint_on IMPORTSTAR */


module mtt_top #(
    
) (
    // Control Port
    input logic  clk_i,
    input logic  rst_ni,
    input logic  flush_i,                       // Flush signal to reset internal state
    input logic  ptw_enable_i,                  // Page Table Walk enable signal
    input logic  [PLEN-1:0] paddr_i,            // Physical address input
    input logic  addr_valid_i,                  // Address validity signal

    // CSR Port
    input mmpt_reg_t mmpt_reg_i,                // Memory Protection Table Register input

    // Error Port
    output logic access_page_fault_o,           // Access fault output (indicates if access is not allowed) 
    output page_format_fault_e format_error_o,  // Format fault output (generic error in address translation)

    // Memory Port (TODO: Integrate with uninasoc_mem.svh for memory interface)
    //output logic   mem_master_req, 
    //output logic   [PLEN-1:0] mem_master_addr,
    //input  logic   mem_master_valid,

    // Status Port
    output logic   ptw_busy_o,                  // Page Table Walk status (busy or not)
    output logic   ptw_valid_o,                 // Page Table Walk validity status. Entry is valid

    input mpt_access_e access_type_i,           // Memory access type (read, write, execute)

    // Output Port
    output logic [TLB_ENTRY_LEN-1:0] tlb_entry_o,            // Output TLB entry (contains SDID, physical address, and permissions)
    output logic   allow_o                      // Access allowed output (indicates if access is allowed)
);

    // State Registers
    mpt_state_e curr_state, next_state;
    mpt_lookup_state_e curr_lookup_state, next_lookup_state;

    // Register to store the physical address
    logic [PLEN-1:0] paddr;

    always_comb begin
        // Default values
        next_state = curr_state;
        next_lookup_state = curr_lookup_state;
        access_page_fault_o = 0;
        format_error_o = 0;
        ptw_busy_o = 0;
        ptw_valid_o = 0;
        allow_o = 0;
        tlb_entry_o = 0;

        case (curr_state)
            IDLE: begin
                if (ptw_enable_i && addr_valid_i) begin
                    next_state = VALIDATE_ADDRESS;
                end
            end
            default: begin
                next_state = IDLE;
            end
        endcase
    end

    // State Transition Logic
    always_ff @(posedge clk_i) begin
        if (!rst_ni) begin
            curr_state <= IDLE;
            curr_lookup_state <= MPTL3_LOOKUP;
            paddr <= 0;
        end else begin
            curr_state <= next_state;
            curr_lookup_state <= next_lookup_state;
            case (curr_state) 
                IDLE: begin
                    if(addr_valid_i) begin
                        paddr<=paddr_i; // Save paddr_i in paddr register when in IDLE state and addr_valid_i = 1
                    end
                end
                default: begin
                    curr_state <= IDLE;
                end
            endcase
        end
    end

endmodule