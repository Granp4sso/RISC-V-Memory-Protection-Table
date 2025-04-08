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

module mpt32_top #(
    
) (
    // Control Port
    input logic clk_i,
    input logic rst_ni,
    input logic flush_i,                       // Flush signal to reset internal state
    input logic ptw_enable_i,                  // Page Table Walk enable signal
    input spa_t spa_i,                         // Supervisor physical address input
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
    output plb_entry_t plb_entry_o,            // Output PLB entry (contains SDID, physical address, and permissions)
    output logic allow_o                       // Access allowed output (indicates if access is allowed)
);

    // Registers
    mpt_state_e next_state_d, curr_state_q;
    mpt_lookup_state_e next_lookup_state_d, curr_lookup_state_q;
    spa_t spa_q;
    mmpt_reg_t mmpt_q;
    mpt_access_e access_type_q;
    logic [XLEN-1:0] mptl_entry_q;
    plb_entry_t plb_entry_d, plb_entry_q;
    logic access_page_fault_d, access_page_fault_q;
    logic [2:0] format_error_cause_d, format_error_cause_q;

    
    // Address used to access the next level of the Memory Protection Table
    logic [MMPT_PPN_LEN-1:0] next_look_up_addr;

   // MPT entries received from memory
    mptl2_entry_t mptl2_entry;
    mptl1_entry_t mptl1_entry;

    // This holds the permissions associated with the memory protection entries    
    mpt_permissions_e permissions;

    always_comb begin 
        // Default values
        access_page_fault_d = 0;
        access_page_fault_o = 0;
        format_error_cause_d = 0;
        format_error_o = 0;
        ptw_busy_o = 0;
        ptw_valid_o = 0;
        allow_o = 0;
        plb_entry_o = 0;
        m_mem_wdata = 0;
        m_mem_we = 0;
        m_mem_be = 0;
        m_mem_req = 0;
        //next_look_up_addr = 0;


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
                            SMMPT34_MODE: begin
                                    next_look_up_addr = mmpt_q.PPN + {13'b0, spa_q.PN2};
                                    next_state_d = WAIT_FOR_GRANT;
                                    next_lookup_state_d = MPTL2_LOOKUP;
                                end
                            
                            // Generate error if reserved MODE bits are used 
                            default: begin
                                format_error_cause_d = RESERVED_BITS_USED; 
                                next_state_d = ERROR;
                            end
                    endcase
            end
            
            // Request memory access and transition to WAIT_FOR_RVALID after receiving the grant signal  
            WAIT_FOR_GRANT: begin
                ptw_busy_o = 1;
                m_mem_req = 1;
                m_mem_addr = {10'b0, next_look_up_addr};
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
                ptw_busy_o = 1;
                case (curr_lookup_state_q)
                    // Perform L2 lookup
                    MPTL2_LOOKUP: begin
                        mptl2_entry = mptl_entry_q;
                        if (mptl2_entry.RESERVED != 0) begin // Check reserved bit
                            format_error_cause_d = RESERVED_BITS_USED;
                            next_state_d = ERROR;
                        end else begin 
                            case (mptl2_entry.TYPE) 

                                // Read, write or execute is not allowed to this 1 GiB address range for the domain
                                TYPE_1G_DISALLOW : begin
                                    if (mptl2_entry.INFO != 0) begin
                                        format_error_cause_d = INVALID_MPTL2_INFO;
                                        next_state_d = ERROR;
                                    end else begin
                                        permissions = DISALLOWED;
                                        next_state_d = ERROR;
                                        access_page_fault_d = 1;
                                    end
                                end

                                // Read and execute (but no write) is allowed to this 1 GiB address range for the domain
                                TYPE_1G_ALLOW_RX: begin
                                    if (mptl2_entry.INFO != 0) begin
                                        format_error_cause_d = INVALID_MPTL2_INFO;
                                        next_state_d = ERROR;                                        
                                    end else begin
                                        if (access_type_q inside {ACCESS_READ, ACCESS_EXEC}) begin
                                            next_state_d = COMMIT;
                                            permissions = ALLOW_RX;
                                            plb_entry_d = {mmpt_q.SDID, spa_q, permissions};
                                        end else begin
                                            next_state_d = ERROR;
                                            access_page_fault_d = 1;
                                        end
                                    end
                                end

                                // Read and write (but no execute) is allowed to this 1 GiB address range for the domain
                                TYPE_1G_ALLOW_RW: begin 
                                    if (mptl2_entry.INFO != 0) begin
                                        format_error_cause_d = INVALID_MPTL2_INFO;                                        
                                        next_state_d = ERROR;
                                    end else begin
                                        if (access_type_q inside {ACCESS_READ, ACCESS_WRITE}) begin
                                            next_state_d = COMMIT;
                                            permissions = ALLOW_RW;
                                            plb_entry_d = {mmpt_q.SDID, spa_q, permissions};
                                        end else begin
                                            next_state_d = ERROR;
                                            access_page_fault_d = 1;
                                        end
                                    end
                                end

                                // Read, write and execute is allowed to this 1 GiB address range for the domain
                                TYPE_1G_ALLOW_RWX: begin
                                    if (mptl2_entry.INFO != 0) begin
                                        format_error_cause_d = INVALID_MPTL2_INFO;                                        
                                        next_state_d = ERROR;
                                    end else begin
                                        if (access_type_q inside {ACCESS_READ,  ACCESS_WRITE,  ACCESS_EXEC}) begin
                                            next_state_d = COMMIT;
                                            permissions = ALLOW_RWX;
                                            plb_entry_d = {mmpt_q.SDID, spa_q, permissions};
                                        end else begin
                                            next_state_d = ERROR;
                                            access_page_fault_d = 1;
                                        end
                                    end
                                end

                                // INFO field provides the PPN of the MPTL1 page
                                TYPE_MPT_L1_DIR: begin
                                    //Compute next MPT pointer
                                    next_look_up_addr = {12'b0, spa_q.PN1} + mptl2_entry.INFO;
                                    next_state_d = WAIT_FOR_GRANT;
                                    next_lookup_state_d = MPTL1_LOOKUP; 
                                end
                                
                                // The 32 MiB range of address space is partitioned into 8 4 MiB pages where each page has read/write/execute access specified via the INFO field
                                TYPE_4M_PAGES: begin
                                    if (mptl2_entry.INFO[21:16] != 0) begin
                                        format_error_cause_d = RESERVED_BITS_USED;                                        
                                        next_state_d = ERROR;
                                    end else begin 
                                        // MPTL2 info field contains permissions
                                        permissions = mptl2_entry.INFO[spa_q.PN1[9:7] * 2 +: 2];
                                        // Verify if the requested access type is allowed by the MPT permissions.
                                        // If permitted, proceed to COMMIT state and update the PLB entry.
                                        // Otherwise, transition to ERROR state and raise a page fault. 
                                        if ((access_type_q == ACCESS_READ  && (permissions inside {ALLOW_RX, ALLOW_RW, ALLOW_RWX})) ||
                                            (access_type_q == ACCESS_WRITE && (permissions inside {ALLOW_RW, ALLOW_RWX})) ||
                                            (access_type_q == ACCESS_EXEC  && (permissions inside {ALLOW_RX, ALLOW_RWX}))) 
                                        begin
                                            next_state_d = COMMIT;
                                            plb_entry_d = {mmpt_q.SDID, spa_q, permissions};
                                            
                                        end else begin
                                        // ACCESS_NONE: This case should never occur in normal operation.
                                        // If it does, a page fault is raised
                                            access_page_fault_d = 1;                             
                                            next_state_d = ERROR;
                                        end
                                    end
                                end
                                // Type field undefined
                                default: begin
                                    format_error_cause_d = UNDEFINED_MPTL2_TYPE;
                                    next_state_d = ERROR;
                                end
                            endcase
                        end
                    end

                    // Perform L1 lookup
                    MPTL1_LOOKUP:begin
                        mptl1_entry = mptl_entry_q;
                        if (mptl1_entry.RESERVED != 0) begin   // Check reserved bit
                            format_error_cause_d = RESERVED_BITS_USED;                              
                            next_state_d = ERROR;
                        end else begin
                            // Directly index into the PAGE_PERM array using spa_q.PN0
                            permissions = mptl1_entry.PAGE_PERM[spa_q.PN0];

                            // Verify if the requested access type is allowed by the MPT permissions.
                            // If permitted, proceed to COMMIT state and update the PLB entry.
                            // Otherwise, transition to ERROR state and raise a page fault. 
                            if ((access_type_q == ACCESS_READ  && (permissions inside {ALLOW_RX, ALLOW_RW, ALLOW_RWX})) ||
                                (access_type_q == ACCESS_WRITE && (permissions inside {ALLOW_RW, ALLOW_RWX})) ||
                                (access_type_q == ACCESS_EXEC  && (permissions inside {ALLOW_RX, ALLOW_RWX}))) 
                            begin
                                next_state_d = COMMIT;
                                plb_entry_d = {mmpt_q.SDID, spa_q, permissions};
                            end else begin
                                // ACCESS_NONE: This case should never occur in normal operation.
                                // If it does, a page fault is raised
                                access_page_fault_d = 1;                             
                                next_state_d = ERROR;
                            end     
                        end
                    end
                    default: begin
                        // Invalid look_up_state
                        format_error_cause_d = UNDEFINED_MPT_LOOKUP_STATE;
                        next_state_d = ERROR;
                    end
                endcase
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
                next_state_d = IDLE; // Otherwise, transition directly to IDLE
            end
        end
    end

    // State Transition Logic
    always_ff @(posedge clk_i) begin
        if (!rst_ni) begin
            curr_state_q <= IDLE;
            curr_lookup_state_q <= MPTL2_LOOKUP;
            spa_q <= 0;
            mmpt_q <= 0;
            mptl_entry_q <= 0;
            format_error_cause_q <= 0;
            access_type_q <= 0;
            plb_entry_q <= 0;
            access_page_fault_q <= 0;
        end else begin
            curr_state_q <= next_state_d;
            curr_lookup_state_q <= next_lookup_state_d;
            format_error_cause_q <= format_error_cause_d;
            access_page_fault_q <= 0;
            case (curr_state_q) 
                IDLE: begin
                    if(addr_valid_i) begin
                        spa_q <= spa_i;                 
                        mmpt_q <= mmpt_reg_i;           
                        access_type_q <= access_type_i; 
                    end
                end
                WAIT_FOR_RVALID: begin
                    if (m_mem_valid) begin
                        mptl_entry_q <= m_mem_rdata[XLEN-1:0];
                    end
                end
                
                MPT_LOOKUP: begin
                    plb_entry_q <= plb_entry_d;
                    access_page_fault_q <= access_page_fault_d;
                end
                
                default: begin
                    curr_state_q <= next_state_d;
                    curr_lookup_state_q <= next_lookup_state_d;
                end
            endcase
        end
    end

endmodule