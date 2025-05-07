// Author: Stefano Mercogliano <stefano.mercogliano@unina.it>
// Author: Valerio Di Domenico <didomenico.valerio@virgilio.it>

// Description:
// This module implements the top-level logic for managing memory protection 
// table lookups. It handles state transitions for the Page Table Walk 
// (PTW) process, validates addresses, and manages PLB entries based on 
// memory access type. The module communicates with control, memory and CSR 
// ports, indicating if access is allowed and if any errors occur during address translation.

/* verilator lint_off IMPORTSTAR */
import mpt_pkg::*;
/* verilator lint_on IMPORTSTAR */

// Import headers
`include "uninasoc_mem.svh" 

module mpt64_top #(
    
) (
    // Control Port
    input logic clk_i,
    input logic rst_ni,
    input logic flush_i,                       // Flush signal to reset internal state
    input logic ptw_enable_i,                  // Page Table Walk enable signal
    input spa_t_u spa_i,                       // Supervisor physical address input
    input logic addr_valid_i,                  // Address validity signal

    // CSR Port
    input mmpt_reg_t mmpt_reg_i,               // Memory Protection Table Register input

    // Error Port
    output logic access_page_fault_o,          // Access fault output (indicates if access is not allowed) 
    output page_format_fault_e format_error_o, // Format fault output (generic error in address translation)

    // Memory Port 
    `DEFINE_MEM_MASTER_PORTS(m),

    // Status Port
    output logic ptw_busy_o,                   // Page Table Walk status (busy or not)
    output logic ptw_valid_o,                  // Page Table Walk validity status. Entry is valid

    input mpt_access_e access_type_i,          // Memory access type (read, write, execute)

    // Output Port
    output plb_entry_t plb_entry_o,            // Output PLB entry (contains SDID, physical address, and MPT permissions)
    output logic allow_o                       // Access allowed output (indicates if access is allowed)
);  
    // Registers
    mpt_state_e next_state_d, curr_state_q;
    mmpt_reg_t mmpt_q;
    mpt_access_e access_type_q;
    
    mpt_entry_t mptl_entry_q;
    plb_entry_t plb_entry_d, plb_entry_q;
    logic access_page_fault_d, access_page_fault_q;
    page_format_fault_e format_error_cause_d, format_error_cause_q;
    
    // Address used to access the next level of the Memory Protection Table
    logic [PPN_LEN-1:0] next_lookup_addr_d, next_lookup_addr_q;
    
    // Lookup level counter
    logic [2:0] lookup_lvl_cnt_q, lookup_lvl_cnt_d;  
    
    logic [PPN_LEN-1:0] a;
    logic [NUMPGINRANGE-1:0] range_offset;
    spa_t_u spa_u_q;

    // This holds the permissions associated with the memory protection entries    
    mpt_permissions_e mpt_permissions;
   
    always_comb begin 
        // Default values
        access_page_fault_d = 0;
        access_page_fault_o = 0;
        format_error_cause_d = NO_ERROR;
        format_error_o = NO_ERROR;
        ptw_busy_o = 0;
        ptw_valid_o = 0;
        allow_o = 0;
        plb_entry_o = 0;
        m_mem_wdata = 0;
        m_mem_we = 0;
        m_mem_be = 0;
        m_mem_req = 0;

        case (curr_state_q)
            IDLE: begin
                ptw_busy_o = 0;
                allow_o = 0;
                if (ptw_enable_i && addr_valid_i) begin
                    next_state_d = VALIDATE_ADDRESS;
                end
            end

            VALIDATE_ADDRESS: begin
                    // Validate the received physical address against the maximum addressable address for the current MPT mode. 
                    // If the address is invalid, generate a format_fault error
                    ptw_busy_o = 1;
                    case (mmpt_q.MODE) 
                            // No supervisor domain protection, access is allowed  
                            BARE_MODE: begin
                                next_state_d = COMMIT;
                            end

                            // Check if spa_q width is within the allowed range; if valid, compute next MPT pointer, else generate error
                            SMMPT43_MODE: begin
                                if (spa_u_q.spa43.ZERO != 0) begin
                                    format_error_cause_d = NOT_VALID_ADDR; 
                                    next_state_d = ERROR;
                                end else begin
                                    a = mmpt_q.PPN * PAGESIZE;
                                    lookup_lvl_cnt_d = 2;
                                    next_lookup_addr_d = a + {43'b0, spa_u_q.spa43.PN2} * MPTSIZE;
                                    next_state_d = WAIT_FOR_GRANT;
                                end
                            end

                            SMMPT52_MODE: begin
                                if (spa_u_q.spa52.ZERO != 0) begin
                                    format_error_cause_d = NOT_VALID_ADDR; 
                                    next_state_d = ERROR;
                                end else begin
                                    a = mmpt_q.PPN * PAGESIZE;
                                    lookup_lvl_cnt_d = 3;
                                    next_lookup_addr_d = a + {43'b0, spa_u_q.spa52.PN3} * MPTSIZE;
                                    next_state_d = WAIT_FOR_GRANT;
                                end
                            end

                            SMMPT64_MODE: begin
                                    a = mmpt_q.PPN * PAGESIZE;
                                    lookup_lvl_cnt_d = 4;
                                    next_lookup_addr_d = a + {40'b0, spa_u_q.spa64.PN4} * MPTSIZE;
                                    next_state_d = WAIT_FOR_GRANT;
                                end
                            
                            // Generate error if reserved MODE bits are used 
                            default: begin
                                format_error_cause_d = UNSUPPORTED_MODE; 
                                next_state_d = ERROR;
                            end
                        endcase
                    end

            // Request memory access and transition to WAIT_FOR_RVALID after receiving the grant signal  
            WAIT_FOR_GRANT: begin
                ptw_busy_o = 1;
                m_mem_req = 1;
                m_mem_addr = {12'b0, next_lookup_addr_q};
                if (m_mem_gnt) begin
                    next_state_d = WAIT_FOR_RVALID;
                end
            end
            
            // Wait for memory valid signal and transition to MPT_LOOKUP
            WAIT_FOR_RVALID: begin
                ptw_busy_o = 1;
                if (m_mem_valid) begin
                    next_state_d = MPT_LOOKUP;   
                end
            end
            
            // Perform MPT lookup
            MPT_LOOKUP: begin
                logic [8:0] pn; // Physical page number extracted during mpt lookup process
                ptw_busy_o = 1;
                   if ( !mptl_entry_q.V ) begin  // Check valid bit 
                    format_error_cause_d = NOT_VALID_ENTRY;
                    next_state_d = ERROR;
                end else if (mptl_entry_q.L) begin
                    if ( mptl_entry_q.mpt_payload.leaf.RESERVED != 0 || mptl_entry_q.RESERVED != 0 ) begin
                        format_error_cause_d = RESERVED_BITS_USED;
                        next_state_d = ERROR;
                    end else begin
                        next_state_d = CHECK_PERMISSIONS;
                    end
                end else begin 
                    lookup_lvl_cnt_d = lookup_lvl_cnt_q -1; 
                    if (lookup_lvl_cnt_q == 0) begin
                        format_error_cause_d = LEVEL_UNDERFLOW;
                        next_state_d = ERROR;
                    end else begin
                        case (mmpt_q.MODE)
                            SMMPT43_MODE: begin
                                case (lookup_lvl_cnt_q)
                                    // Depending on the lookup level we are in, PN1 or PN0 will be extracted
                                    3'd2 : pn = spa_u_q.spa43.PN1;
                                    3'd1 : pn = spa_u_q.spa43.PN0;
                                    default : begin
                                        format_error_cause_d = INVALID_LEVEL;
                                        next_state_d = ERROR;
                                    end
                                endcase
                            end

                            SMMPT52_MODE: begin
                                case (lookup_lvl_cnt_q)
                                    // Depending on the lookup level we are in, PN2, PN1 or PN0 will be extracted
                                    3'd3 : pn = spa_u_q.spa52.PN2;
                                    3'd2 : pn = spa_u_q.spa52.PN1;
                                    3'd1 : pn = spa_u_q.spa52.PN0;
                                    default : begin
                                        format_error_cause_d = INVALID_LEVEL;
                                        next_state_d = ERROR;
                                    end
                                endcase
                            end

                            SMMPT64_MODE: begin
                                case (lookup_lvl_cnt_q)
                                    // Depending on the lookup level we are in, PN3, PN2, PN1 or PN0 will be extracted
                                    3'd4 : pn = spa_u_q.spa64.PN3;
                                    3'd3 : pn = spa_u_q.spa64.PN2;
                                    3'd2 : pn = spa_u_q.spa64.PN1;
                                    3'd1 : pn = spa_u_q.spa64.PN0;
                                    default : begin
                                        format_error_cause_d = INVALID_LEVEL;
                                        next_state_d = ERROR;
                                    end
                                endcase
                            end

                            default: begin
                                format_error_cause_d = RESERVED_BITS_USED; 
                                next_state_d = ERROR;
                            end
                        endcase

                         //Compute next MPT pointer
                        a = ((mptl_entry_q.mpt_payload.non_leaf.PPN) * PAGESIZE);
                        next_lookup_addr_d = a + pn * MPTSIZE;
                        next_state_d = WAIT_FOR_GRANT;
                    end
                end
            end

            CHECK_PERMISSIONS: begin
                ptw_busy_o = 1;
                case (mmpt_q.MODE)

                    SMMPT43_MODE: begin
                        if (lookup_lvl_cnt_q > 0) begin
                            if (lookup_lvl_cnt_q == 2) begin
                                range_offset = spa_u_q.spa43.PN1[8:9-NUMPGINRANGE];
                            end else
                                range_offset = spa_u_q.spa43.PN0[8:9-NUMPGINRANGE];
                        end else 
                            range_offset = spa_u_q.spa43.RANGE_OFFSET[15:16-NUMPGINRANGE];
                    end

                    SMMPT52_MODE: begin
                        if (lookup_lvl_cnt_q > 0) begin
                            if (lookup_lvl_cnt_q == 3) begin
                                range_offset = spa_u_q.spa52.PN2[8:9-NUMPGINRANGE];
                            end else if (lookup_lvl_cnt_q == 2) begin 
                                range_offset = spa_u_q.spa52.PN1[8:9-NUMPGINRANGE];
                            end else
                                range_offset = spa_u_q.spa52.PN0[8:9-NUMPGINRANGE];
                        end else
                            range_offset = spa_u_q.spa52.RANGE_OFFSET[15:16-NUMPGINRANGE];
                    end

                    SMMPT64_MODE: begin
                        if (lookup_lvl_cnt_q > 0) begin    
                            if (lookup_lvl_cnt_q == 4) begin
                                range_offset = spa_u_q.spa64.PN3[8:9-NUMPGINRANGE];
                            end else if (lookup_lvl_cnt_q == 3) begin
                                range_offset = spa_u_q.spa64.PN2[8:9-NUMPGINRANGE];
                            end else if (lookup_lvl_cnt_q == 2) begin
                                range_offset = spa_u_q.spa64.PN1[8:9-NUMPGINRANGE];
                            end else
                                range_offset = spa_u_q.spa64.PN0[8:9-NUMPGINRANGE];    
                        end else
                            range_offset = spa_u_q.spa64.RANGE_OFFSET[15:16-NUMPGINRANGE];
                    end

                    default: begin
                        format_error_cause_d = UNSUPPORTED_MODE; 
                        next_state_d = ERROR;
                    end
                endcase

                mpt_permissions = mptl_entry_q.mpt_payload.leaf.PERMS[range_offset];

                // Check permissions
                if ((access_type_q == ACCESS_READ  && (mpt_permissions inside {ALLOW_R, ALLOW_RW, ALLOW_RX, ALLOW_RWX})) ||
                    (access_type_q == ACCESS_WRITE && (mpt_permissions inside {ALLOW_RW, ALLOW_RWX})) ||
                    (access_type_q == ACCESS_EXEC  && (mpt_permissions inside {ALLOW_X, ALLOW_RX, ALLOW_RWX}))) 
                begin
                    next_state_d = COMMIT;
                    plb_entry_d = {mmpt_q.SDID, spa_u_q.spa64, mpt_permissions};
                end else begin
                    access_page_fault_d = 1;
                    next_state_d = ERROR;
                end
            end

            // Wait for the mem_valid signal before transitioning to the IDLE state
            FLUSH: begin
                ptw_busy_o = 1;
                if (m_mem_valid) begin
                    next_state_d = IDLE;    
                end
            end
            
            // Handles format errors or page faults during memory access            
            ERROR: begin
                ptw_busy_o = 1;
                ptw_valid_o = 1;
                format_error_o = format_error_cause_q;
                access_page_fault_o = access_page_fault_q;
                next_state_d = IDLE;
            end

            // Access allowed and PLB entry ready
            COMMIT: begin
                plb_entry_o = plb_entry_q; 
                ptw_busy_o = 1;
                ptw_valid_o = 1;
                allow_o = 1;
                next_state_d = IDLE;
            end

            default: begin
                ptw_busy_o = 1;
                next_state_d = IDLE;
            end   
    endcase

        // Handle flush request  
        if (flush_i) begin
            // If waiting for a valid memory response and it has not arrived,  
            // or if waiting for a grant and it is received,  
            // go to FLUSH to complete the transaction
            if ((curr_state_q inside {WAIT_FOR_RVALID, FLUSH} && !m_mem_valid) || (curr_state_q == WAIT_FOR_GRANT && m_mem_gnt)) begin
                next_state_d = FLUSH;
            end else begin
                next_state_d = IDLE; // Otherwise, go to IDLE state
            end
        end
    end

    // State Transition Logic
    always_ff @(posedge clk_i) begin
        if (!rst_ni) begin
            curr_state_q <= IDLE;
            spa_u_q <= 0;
            mmpt_q <= 0;
            mptl_entry_q <= 0;
            format_error_cause_q <= NO_ERROR;
            access_type_q <= ACCESS_NONE;
            plb_entry_q <= 0;
            access_page_fault_q <= 0;
            lookup_lvl_cnt_q <= 0;
            next_lookup_addr_q <= 0; 
        end else begin
            curr_state_q <= next_state_d;
            format_error_cause_q <= format_error_cause_d;
            access_page_fault_q <= 0;
            lookup_lvl_cnt_q <= lookup_lvl_cnt_d; 
            next_lookup_addr_q <= next_lookup_addr_d;
            case (curr_state_q) 
                IDLE: begin
                    if(addr_valid_i) begin
                        spa_u_q <= spa_i;                 
                        mmpt_q <= mmpt_reg_i;           
                        access_type_q <= access_type_i; 
                    end
                end
                WAIT_FOR_RVALID: begin
                    if (m_mem_valid) begin
                        mptl_entry_q <= m_mem_rdata[XLEN-1:0];
                    end
                end
                CHECK_PERMISSIONS: begin
                    plb_entry_q <= plb_entry_d;
                    access_page_fault_q <= access_page_fault_d;
                end
                
                default: begin
                    curr_state_q <= next_state_d;
                end
            endcase
        end
    end
endmodule