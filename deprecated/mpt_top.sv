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

module mpt_top #(
) (
    // Control Port
    input logic clk_i,
    input logic rst_ni,
    input logic flush_i,                       // Flush signal to reset internal state
    input logic mptw_enable_i,                 // Enable the MPT (i.e. only for non M-mode code)

    // Transaction Port                         
    input spa_t_u spa_i,                       // Supervisor physical address input
    input mmpt_reg_t mmpt_reg_i,               // Memory Protection Table Register input
    input mpt_access_e access_type_i,          // Memory access type (read, write, execute)
    input logic addr_valid_i,                  // Address validity signal

    // CSR Port
    

    // Error Port
    output logic access_page_fault_o,          // Access fault output (indicates if access is not allowed) 
    output page_format_fault_e format_error_o, // Format fault output (generic error in address translation)

    // Memory Port 
    `DEFINE_MEM_MASTER_PORTS(m),

    // Status Port
    output logic ptw_busy_o,                   // Page Table Walk status (busy or not)
    output logic ptw_valid_o,                  // Page Table Walk validity status. Entry is valid

    // Output Port
    output plb_entry_t plb_entry_o,            // Output PLB entry (contains SDID, physical address, and permissions)
    output logic allow_o                       // Access allowed output (indicates if access is allowed)
);  
        `ifdef ARCH_rv32
            mpt32_top u_mpt32 (
                .clk_i                  (clk_i),
                .rst_ni                 (rst_ni),
                .flush_i                (flush_i),
                .ptw_enable_i           (ptw_enable_i),
                .spa_i                  (spa_i),
                .addr_valid_i           (addr_valid_i),
                .mmpt_reg_i             (mmpt_reg_i),
                .access_page_fault_o    (access_page_fault_o),
                .format_error_o         (format_error_o),
                .ptw_busy_o             (ptw_busy_o),
                .ptw_valid_o            (ptw_valid_o),
                .access_type_i          (access_type_i),
                .plb_entry_o            (plb_entry_o),
                .allow_o                (allow_o),
                .m_mem_req              (m_mem_req),
                .m_mem_gnt              (m_mem_gnt),
                .m_mem_valid            (m_mem_valid),
                .m_mem_addr             (m_mem_addr),
                .m_mem_rdata            (m_mem_rdata),
                .m_mem_wdata            (m_mem_wdata),
                .m_mem_we               (m_mem_we),
                .m_mem_be               (m_mem_be),
                .m_mem_error            (m_mem_error)
            );

        `elsif ARCH_rv64
            mpt64_top u_mpt64 (
                .clk_i                  (clk_i),
                .rst_ni                 (rst_ni),
                .flush_i                (flush_i),
                .ptw_enable_i           (ptw_enable_i),
                .spa_i                  (spa_i),
                .addr_valid_i           (addr_valid_i),
                .mmpt_reg_i             (mmpt_reg_i),
                .access_page_fault_o    (access_page_fault_o),
                .format_error_o         (format_error_o),
                .ptw_busy_o             (ptw_busy_o),
                .ptw_valid_o            (ptw_valid_o),
                .access_type_i          (access_type_i),
                .plb_entry_o            (plb_entry_o),
                .allow_o                (allow_o),
                .m_mem_req              (m_mem_req),
                .m_mem_gnt              (m_mem_gnt),
                .m_mem_valid            (m_mem_valid),
                .m_mem_addr             (m_mem_addr),
                .m_mem_rdata            (m_mem_rdata),
                .m_mem_wdata            (m_mem_wdata),
                .m_mem_we               (m_mem_we),
                .m_mem_be               (m_mem_be),
                .m_mem_error            (m_mem_error)
            );
        `endif
endmodule : mpt_top