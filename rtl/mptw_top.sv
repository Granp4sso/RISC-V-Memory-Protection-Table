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

    localparam unsigned PLB_TRANSACTION_DATA_WIDTH  = 1;                        // Only interested in the hit response 
    localparam unsigned PLB_TRANSACTION_ADDR_WIDTH  = $bits(plb_lookup_req_t); 
) (
    //////////////////
    // Control Port //
    //////////////////

    input  logic                clk_i,
    input  logic                rst_ni,
    input  logic                flush_i,                // Flush signal to reset internal state
    input  logic                mptw_enable_i,          // Enable the MPT (i.e. only for non M-mode code)

    //////////////////////
    // Transaction Port //
    //////////////////////

    input  spa_t_u              spa_i,                  // Supervisor physical address input
    input  mmpt_reg_t           mmpt_reg_i,             // Memory Protection Table Register input
    input  mpt_access_e         access_type_i,          // Memory access type (read, write, execute)
    input  logic                mptw_transaction_valid_i,
    output logic                mptw_ready_o,           // The MPT Walker is ready to serve a transaction

    ////////////////
    // Error Port //
    ////////////////

    output logic                access_page_fault_o,    // Access fault output (indicates if access is not allowed) 
    output page_format_fault_e  format_error_o,         // Format fault output (generic error in address translation)

    //////////////////
    // Memory Ports //
    //////////////////

    // PLB Cache Port
    `DEFINE_MEM_MASTER_PORTS(plb_cache, PLB_TRANSACTION_DATA_WIDTH, PLB_TRANSACTION_ADDR_WIDTH)


    //`DEFINE_MEM_MASTER_PORTS(m),

    // Output Port
    //output plb_entry_t plb_entry_o,            // Output PLB entry (contains SDID, physical address, and permissions)
    //output logic allow_o                       // Access allowed output (indicates if access is allowed)
);  

    //////////////////////////////////////////////////////////////
    //    _                 _                                   //
    //   | |   ___  __ __ _| |_ __  __ _ _ _ __ _ _ __  ___     //
    //   | |__/ _ \/ _/ _` | | '_ \/ _` | '_/ _` | '  \(_-<     //
    //   |____\___/\__\__,_|_| .__/\__,_|_| \__,_|_|_|_/__/     //
    //                       |_|                                //
    //////////////////////////////////////////////////////////////

    ////////////////////////////
    // Localparam Declaration //
    ////////////////////////////

    localparam fetch_stage_datawidth        = $bits(mptw_transaction_t);
    localparam plb_lookup_stage_datawidth   = $bits(mptw_transaction_t);
    localparam walking_stage_datawidth      = $bits(mptw_transaction_t);

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

    mptw_transaction_t      input_transaction;
    page_format_fault_e     fetch_exception_cause;

    /////////////////////
    // Bus Declaration //
    /////////////////////

    `DECLARE_DATA_BUS( input_to_fetch       , fetch_stage_datawidth         );
    `DECLARE_DATA_BUS( fetch_to_pipe        , plb_lookup_stage_datawidth    );
    `DECLARE_DATA_BUS( pipe_to_plb_lookup   , plb_lookup_stage_datawidth    );
    `DECLARE_DATA_BUS( plb_lookup_to_pipe   , walking_stage_datawidth       );
    `DECLARE_DATA_BUS( pipe_to_walking      , walking_stage_datawidth       );

    //////////////////////////////////////////////////////
    //    ___    _      _      ___ _                    //
    //   | __|__| |_ __| |_   / __| |_ __ _ __ _ ___    //
    //   | _/ -_)  _/ _| ' \  \__ \  _/ _` / _` / -_)   //
    //   |_|\___|\__\__|_||_| |___/\__\__,_\__, \___|   //
    //                                     |___/        //
    //////////////////////////////////////////////////////

    // Here starts the MPTW frontend. The fronted selects a transaction, checks if it 
    // is valid and then lookup into the PLB (if any). The goal of the frontend is to
    // decide wether a transaction has to be walked or not.

    //////////////////////////
    // Input Handling logic //
    //////////////////////////

    // Build the transaction out of the input signals
    assign input_transaction.mmpt           = mmpt_reg_i;
    assign input_transaction.spa            = spa_i;
    assign input_transaction.access_type    = access_type_i;
    assign input_transaction.walking        = MPT_WALKING_DO;

    // Build `input_to_fetch` signal
    assign input_to_fetch_data  = input_transaction;
    assign input_to_fetch_valid = mptw_transaction_valid_i;

    // TODO: make this depending on the whole pipeline conditions
    assign mptw_ready_o = input_to_fetch_ready; 

    //////////////////////////
    // Fetch Stage Instance //
    //////////////////////////

    .fetch_stage # (

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

    ///////////////////////////////////////////
    // Fetch to PLB Lookup Pipeline Register //
    ///////////////////////////////////////////

    .pipeline_register # ( 

        .DATA_WIDTH             ( plb_lookup_stage_datawidth    )

    ) fetch_to_plb_lookup_reg_u (

        .clk_i                  ( clk_i                         ),
        .rst_ni                 ( rst_ni                        ),

        `MAP_DATA_PORT          ( s_data, fetch_to_pipe         ),
        `MAP_DATA_PORT          ( m_data, pipe_to_plb_lookup   ),
        `SINK_SLAVE_CTRL_PORT   ( s_ctrl                        )

    ); 

    //////////////////////////////////////////////////////////////////////////////
    //    ___ _    ___   _             _               ___ _                    //
    //   | _ \ |  | _ ) | |   ___  ___| |___  _ _ __  / __| |_ __ _ __ _ ___    //
    //   |  _/ |__| _ \ | |__/ _ \/ _ \ / / || | '_ \ \__ \  _/ _` / _` / -_)   //
    //   |_| |____|___/ |____\___/\___/_\_\\_,_| .__/ |___/\__\__,_\__, \___|   //
    //                                         |_|                 |___/        //
    //////////////////////////////////////////////////////////////////////////////

    .plb_lookup_stage #(

        .PIPELINE_SLAVE_DATA_WIDTH  ( plb_lookup_stage_datawidth ),
        .PIPELINE_MASTER_DATA_WIDTH ( walking_stage_datawidth    )

    ) plb_lookup_stage_u (
        
        .clk_i                  ( clk_i                                     ),
        .rst_ni                 ( rst_ni                                    ),

        // Pipeline Ports
        `MAP_DATA_PORT          ( plb_lookup_slave  , pipe_to_plb_lookup    ),
        `MAP_DATA_PORT          ( plb_lookup_master , plb_lookup_to_pipe    ),
        `SINK_SLAVE_CTRL_PORT   ( plb_lookup_ctrl                           ),

        // PLB Cache Port
        .plb_cache_mem_req      ,
        .plb_cache_mem_gnt      ,
        .plb_cache_mem_valid    ,
        .plb_cache_mem_addr     ,
        .plb_cache_mem_rdata    ,
        .plb_cache_mem_wdata    ,
        .plb_cache_mem_we       ,
        .plb_cache_mem_be       ,
        .plb_cache_mem_error    

    ); 

    ///////////////////////////////////////////////////
    //PLB Lookup to Walking Stages Pipeline Register //
    ///////////////////////////////////////////////////

    .pipeline_register # ( 

        .DATA_WIDTH             ( plb_lookup_stage_datawidth    )

    ) fetch_to_plb_lookup_reg_u (

        .clk_i                  ( clk_i                         ),
        .rst_ni                 ( rst_ni                        ),

        `MAP_DATA_PORT          ( s_data, plb_lookup_to_pipe    ),
        `MAP_DATA_PORT          ( m_data, pipe_to_walking       ),
        `SINK_SLAVE_CTRL_PORT   ( s_ctrl                        )

    ); 


    //////////////////////////////////////////////////////////////////////
    //   __      __    _ _   _             ___ _                        //
    //   \ \    / /_ _| | |_(_)_ _  __ _  / __| |_ __ _ __ _ ___ ___    //
    //    \ \/\/ / _` | | / / | ' \/ _` | \__ \  _/ _` / _` / -_|_-<    //
    //     \_/\_/\__,_|_|_\_\_|_||_\__, | |___/\__\__,_\__, \___/__/    //
    //                             |___/               |___/            //
    //////////////////////////////////////////////////////////////////////

    //////////////////
    // Retire Stage //
    //////////////////

    // Optional if OoO is not supported

    //////////////////////////////////////////////////////////////
    //     ___                 _ _     ___ _                    //
    //    / __|___ _ __  _ __ (_) |_  / __| |_ __ _ __ _ ___    //
    //   | (__/ _ \ '  \| '  \| |  _| \__ \  _/ _` / _` / -_)   //
    //    \___\___/_|_|_|_|_|_|_|\__| |___/\__\__,_\__, \___|   //
    //                                             |___/        //
    //////////////////////////////////////////////////////////////

endmodule : mptw_top