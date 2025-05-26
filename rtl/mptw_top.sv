// Author: Stefano Mercogliano <stefano.mercogliano@unina.it>
// Author: Valerio Di Domenico <didomenico.valerio@virgilio.it>

// Description:
//      TBD

/* verilator lint_off IMPORTSTAR */
import mpt_pkg::*;
/* verilator lint_on IMPORTSTAR */

// Import headers
`include "pipelining.svh"
`include "uninasoc_mem.svh"

module mptw_top #(
) (
    // Control Port
    input  logic clk_i,
    input  logic rst_ni,
    input  logic flush_i,                       // Flush signal to reset internal state
    input  logic mptw_enable_i,                 // Enable the MPT (i.e. only for non M-mode code)

    // Transaction Port                         
    input  spa_t_u spa_i,                       // Supervisor physical address input
    input  mmpt_reg_t mmpt_reg_i,               // Memory Protection Table Register input
    input  mpt_access_e access_type_i,          // Memory access type (read, write, execute)
    input  logic transaction_valid_i,
    output logic mptw_ready_o,                  // The MPT Walker is ready to serve a transaction

    // Error Port
    output logic access_page_fault_o,          // Access fault output (indicates if access is not allowed) 
    output page_format_fault_e format_error_o  // Format fault output (generic error in address translation)

    // Memory Port 
    //`DEFINE_MEM_MASTER_PORTS(m),

    // Output Port
    //output plb_entry_t plb_entry_o,            // Output PLB entry (contains SDID, physical address, and permissions)
    //output logic allow_o                       // Access allowed output (indicates if access is allowed)
);  
    ////////////////////////////
    // Localparam Declaration //
    ////////////////////////////

    localparam fetch_stage_datawidth        = $bits(mptw_transaction_t);
    localparam plb_lookup_stage_datawidth   = $bits(mptw_transaction_t);

    /////////////////////////
    // Signals Declaration //
    /////////////////////////

    `DECLARE_DATA_BUS( input_to_fetch       , fetch_stage_datawidth         );
    `DECLARE_DATA_BUS( fetch_to_pipe        , plb_lookup_stage_datawidth    );
    `DECLARE_DATA_BUS( pipe_to_plb_lookup   , plb_lookup_stage_datawidth    );

    page_format_fault_e  fetch_exception_cause;

    /////////////////
    // Fetch Stage //
    /////////////////

    // Input Handling logic
    //      TBD

    // Fetch Stage 
    fetch_stage # (

        .PIPELINE_SLAVE_DATA_WIDTH      ( fetch_stage_datawidth         ),
        .PIPELINE_MASTER_DATA_WIDTH     ( plb_lookup_stage_datawidth    )

    ) fetch_stage_u (

        .clk_i                  ( clk_i                             ),
        .rst_ni                 ( rst_ni                            ),

        `MAP_DATA_PORT          ( fetch_slave, input_to_fetch       ),
        `MAP_DATA_PORT          ( fetch_master, fetch_to_pipe       ),
        `SINK_SLAVE_CTRL_PORT   ( fetch_ctrl                        ),

        .exception_cause_o      ( fetch_exception_cause             )
    );

    // Fetch to PLB Lookup Pipeline Register
    pipeline_register #(

        .DATA_WIDTH             ( plb_lookup_stage_datawidth    )

    ) fetch_to_plb_lookup_reg_u (

        .clk_i                  ( clk_i                         ),
        .rst_ni                 ( rst_ni                        ),

        `MAP_DATA_PORT          ( s_data, fetch_to_pipe         ),
        `MAP_DATA_PORT          ( m_data, fetch_to_plb_lookup   ),
        `SINK_SLAVE_CTRL_PORT   ( s_ctrl                        )

    ); 

    //////////////////////
    // PLB Lookup Stage //
    //////////////////////

    ////////////////////
    // Walking Stages //
    ////////////////////

    //////////////////
    // Retire Stage //
    //////////////////

    // Optional if OoO is not supported

    //////////////////
    // Commit Stage //
    //////////////////

endmodule : mptw_top