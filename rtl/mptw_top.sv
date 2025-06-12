// Author: Stefano Mercogliano <stefano.mercogliano@unina.it>
// Author: Valerio Di Domenico <didomenico.valerio@virgilio.it>

// Description:
//      TBD

/* verilator lint_off IMPORTSTAR */
import mpt_pkg::*;
/* verilator lint_on IMPORTSTAR */

/* verilator lint_off UNDRIVEN */

// Import headers
`include "pipelining.svh"
`include "uninasoc_mem.svh"

// verilator lint_off PINCONNECTEMPTY
// verilator lint_off UNOPTFLAT

// TODO: Check READY LOGIC IN THE PIPELINE
// TODO: MEM REQ must be high until MEM GRNT is high

module mptw_top #(

    parameter unsigned NUM_STAGES                  = 4,                        // Four stages for SMMPT52
    parameter unsigned DATA_WIDTH                  = 64,
    parameter unsigned ADDR_WIDTH                  = 64,
    parameter unsigned PLB_STAGE_DEPTH             = 4,
    parameter unsigned PLB_TRANSACTION_DATA_WIDTH  = 64,                        // 8
    parameter unsigned PLB_TRANSACTION_ADDR_WIDTH  = 64,                        // $bits(plb_lookup_req_t)
    parameter unsigned WALKING_STAGE_MEM_DEPTH     = PLB_STAGE_DEPTH,
    parameter unsigned REORDER_BUFFER_DEPTH        = 32

) (
    //////////////////
    // Control Port //
    //////////////////

    input  logic                clk_i,
    input  logic                rst_ni,
    input  logic                flush_i,                // Flush signal to reset internal state             <TODO>
    input  logic                mptw_enable_i,          // Enable the MPT (i.e. only for non M-mode code)   <TODO>

    //////////////////////
    // Transaction Port //
    //////////////////////

    input  spa_t_u              spa_i,                      // Supervisor physical address input
    input  mmpt_reg_t           mmpt_reg_i,                 // Memory Protection Table Register input (coming from CSRs)
    input  mpt_access_e         access_type_i,              // Memory access type (read, write, execute)
    input  logic                mptw_transaction_valid_i,   // Input Data are Valid
    output logic                mptw_ready_o,               // The MPT Walker is ready to serve a transaction
    output logic                mptw_transaction_valid_o,   // Output Data is Valid (for one clock cycle)
    //output plb_entry_t plb_entry_o,            // Output PLB entry (contains SDID, physical address, and permissions) <TODO>

    ////////////////
    // Error Port //
    ////////////////

    output logic                access_page_fault_o,    // Access fault output (indicates if access is not allowed) 
    output page_format_fault_e  format_error_o,         // Format fault output (generic error in address translation)

    //////////////////
    // Memory Ports //
    //////////////////

    // PLB Cache Port
    `DEFINE_MEM_MASTER_PORTS(plb_master, PLB_TRANSACTION_DATA_WIDTH, PLB_TRANSACTION_ADDR_WIDTH),
    // Walking Stages Ports
    `DECLARE_MEM_PORT_ARRAY(walking_mem_master, NUM_STAGES, DATA_WIDTH, ADDR_WIDTH)

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
    localparam issue_stage_datawidth        = $bits(mptw_transaction_t);
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

    `DECLARE_DATA_BUS       ( input_to_fetch            , fetch_stage_datawidth                         );
    `DECLARE_DATA_BUS       ( fetch_to_issue            , issue_stage_datawidth                         );
    `DECLARE_DATA_BUS       ( issue_to_backend          , issue_stage_datawidth                         );
    `DECLARE_DATA_BUS       ( issue_to_plb_lookup       , plb_lookup_stage_datawidth                    );
    `DECLARE_DATA_BUS       ( plb_lookup_to_walking     , walking_stage_datawidth                       );
    `DECLARE_DATA_BUS_ARRAY ( walking_stage             , walking_stage_datawidth   , NUM_STAGES + 1    );
    `DECLARE_DATA_BUS       ( backend_to_issue          , issue_stage_datawidth                         );
    `DECLARE_DATA_BUS       ( retire_to_commit          , walking_stage_datawidth                       );
    `DECLARE_DATA_BUS       ( commit_to_output          , walking_stage_datawidth                       );

    // Here declare the number of walking stages


    `DECLARE_STATUS_BUS( fetch_pipe_status      );
    `DECLARE_STATUS_BUS( plb_lookup_pipe_status );

    //////////////////////////////////////////////////////
    //    _____                _                 _      //
    //   |  ___| __ ___  _ __ | |_ ___ _ __   __| |     //
    //   | |_ | '__/ _ \| '_ \| __/ _ \ '_ \ / _` |     //
    //   |  _|| | | (_) | | | | ||  __/ | | | (_| |     //
    //   |_|  |_|  \___/|_| |_|\__\___|_| |_|\__,_|     //
    //                                                  //
    //////////////////////////////////////////////////////

    // Here starts the MPTW frontend. The fronted selects a transaction and checks if it 
    // is valid. If it is, it communicates with the Backend to get a free ID for the current
    // transaction. Finally, it looks if that transaction is inside the PLB.
    // If it is, the transaction is already marked as completed, and pushed into the Backend.
    // Otherwise walking must be performed for that transaction.

    //////////////////////////
    // Input Handling logic //
    //////////////////////////

    // Build the transaction out of the input signals
    assign input_transaction.mmpt           = mmpt_reg_i;
    assign input_transaction.spa            = spa_i;
    assign input_transaction.access_type    = access_type_i;

    // Inintially, we assume a transaction must be walked
    assign input_transaction.walking        = MPT_WALKING_DO;
    assign input_transaction.valid          = mptw_transaction_valid_i; 
    assign input_transaction.completed      = '0;
    assign input_transaction.id             = '1; // ID 0xfff is reserved for non-issued transactions
    assign input_transaction.rpa            = '1;
    assign input_transaction.mpte           = '0;
    assign input_transaction.format_error   = NO_ERROR ;
    assign input_transaction.access_error   = '0 ;

    // Connect to the fetch stage
    assign input_to_fetch_data              = input_transaction;
    assign input_to_fetch_valid             = mptw_transaction_valid_i;
    assign mptw_ready_o                     = input_to_fetch_ready;     // TODO: make this depending on the whole pipeline conditions

    //////////////////////////////////////////////////////
    //    ___    _      _      ___ _                    //
    //   | __|__| |_ __| |_   / __| |_ __ _ __ _ ___    //
    //   | _/ -_)  _/ _| ' \  \__ \  _/ _` / _` / -_)   //
    //   |_|\___|\__\__|_||_| |___/\__\__,_\__, \___|   //
    //                                     |___/        //
    //////////////////////////////////////////////////////

    fetch_stage # (

        .PIPELINE_SLAVE_DATA_WIDTH      ( fetch_stage_datawidth         ),
        .PIPELINE_MASTER_DATA_WIDTH     ( issue_stage_datawidth         )

    ) fetch_stage_u (

        .clk_i                  ( clk_i                             ),
        .rst_ni                 ( rst_ni                            ),

        `MAP_DATA_PORT          ( stage_slave,  input_to_fetch      ),
        `MAP_DATA_PORT          ( stage_master, fetch_to_issue      ),
        `SINK_SLAVE_CTRL_PORT   ( stage_ctrl                        ),

        .exception_cause_o      ( fetch_exception_cause             )
    );

    //////////////////////////////////////////////////////
    //    ___                  ___ _                    //
    //   |_ _|_______  _ ___  / __| |_ __ _ __ _ ___    //
    //    | |(_-<_-< || / -_) \__ \  _/ _` / _` / -_)   //
    //   |___/__/__/\_,_\___| |___/\__\__,_\__, \___|   //
    //                                     |___/        //
    //////////////////////////////////////////////////////

    // The issue stage requests an ID from the Backend for the current
    // transactions, and move forward to the PLB lookup stage once
    // the ID is assigned

    `DECLARE_DATA_BUS_ARRAY( issue_stage_slave, issue_stage_datawidth, 2);
    `DECLARE_DATA_BUS_ARRAY( issue_stage_master, issue_stage_datawidth, 2);

    // Concat Master ports to Issue Slave Ports: Backend to Issue (1), Fetch to Issue (0)
    `CONCAT_MASTER_DATA_ARRAY_2( issue_stage_slave, backend_to_issue, fetch_to_issue );
    // Concat Slave ports to Master Ports: Issue to PLB Lookup (1), Issue to Backend (0)
    `CONCAT_SLAVE_DATA_ARRAY_2( issue_stage_master, issue_to_plb_lookup, issue_to_backend );

    issue_stage # (

        .PIPELINE_SLAVE_DATA_WIDTH      ( issue_stage_datawidth         ),
        .PIPELINE_MASTER_DATA_WIDTH     ( plb_lookup_stage_datawidth    ),
        .PIPELINE_PASSTHROUGH           ( 1                             ) 

    ) issue_stage_u (

        .clk_i                  ( clk_i                             ),
        .rst_ni                 ( rst_ni                            ),

        `MAP_DATA_PORT          ( stage_slave,  issue_stage_slave      ),
        `MAP_DATA_PORT          ( stage_master, issue_stage_master      )
    );

    //////////////////////////////////////////////////////////////////////////////
    //    ___ _    ___   _             _               ___ _                    //
    //   | _ \ |  | _ ) | |   ___  ___| |___  _ _ __  / __| |_ __ _ __ _ ___    //
    //   |  _/ |__| _ \ | |__/ _ \/ _ \ / / || | '_ \ \__ \  _/ _` / _` / -_)   //
    //   |_| |____|___/ |____\___/\___/_\_\\_,_| .__/ |___/\__\__,_\__, \___|   //
    //                                         |_|                 |___/        //
    //////////////////////////////////////////////////////////////////////////////

    plb_lookup_stage #(

        .PIPELINE_SLAVE_DATA_WIDTH  ( plb_lookup_stage_datawidth ),
        .PIPELINE_MASTER_DATA_WIDTH ( walking_stage_datawidth    ),
        .TRANSACTION_FIFO_DEPTH     ( PLB_STAGE_DEPTH            )

    ) plb_lookup_stage_u (
        
        .clk_i                  ( clk_i                                     ),
        .rst_ni                 ( rst_ni                                    ),

        // Pipeline Ports
        `MAP_DATA_PORT          ( stage_slave  , issue_to_plb_lookup        ),
        `MAP_DATA_PORT          ( stage_master , plb_lookup_to_walking      ),
        `SINK_SLAVE_CTRL_PORT   ( plb_lookup_ctrl                           ),

        // PLB Cache Port
        .plb_master_mem_req      ,
        .plb_master_mem_gnt      ,
        .plb_master_mem_valid    ,
        .plb_master_mem_addr     ,
        .plb_master_mem_rdata    ,
        .plb_master_mem_wdata    ,
        .plb_master_mem_we       ,
        .plb_master_mem_be       ,
        .plb_master_mem_error    

    ); 

    //////////////////////////////////////////
    //    __  __ _     _                _   //
    //   |  \/  (_) __| | ___ _ __   __| |  //
    //   | |\/| | |/ _` |/ _ \ '_ \ / _` |  //
    //   | |  | | | (_| |  __/ | | | (_| |  //
    //   |_|  |_|_|\__,_|\___|_| |_|\__,_|  //
    //                                      //
    //////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////
    //   __      __    _ _   _             ___ _                        //
    //   \ \    / /_ _| | |_(_)_ _  __ _  / __| |_ __ _ __ _ ___ ___    //
    //    \ \/\/ / _` | | / / | ' \/ _` | \__ \  _/ _` / _` / -_|_-<    //
    //     \_/\_/\__,_|_|_\_\_|_||_\__, | |___/\__\__,_\__, \___/__/    //
    //                             |___/               |___/            //
    //////////////////////////////////////////////////////////////////////

    // We assign the output of the plb lookup stage to the first walking stage
    `ASSIGN_DATA_BUS_SCALAR_TO_ARRAY(walking_stage, 0, plb_lookup_to_walking);

    generate
        for (genvar i = 0; i < NUM_STAGES; i = i + 1) begin : gen_walking_stages

            // Replace this with the walking stages
            walking_stage #(

                .PIPELINE_SLAVE_DATA_WIDTH      ( walking_stage_datawidth   ),
                .PIPELINE_MASTER_DATA_WIDTH     ( walking_stage_datawidth   ),
                .TRANSACTION_FIFO_DEPTH         ( WALKING_STAGE_MEM_DEPTH   ),
                .MEMORY_TRANSACTION_DATA_WIDTH  ( DATA_WIDTH                ),           
                .MEMORY_TRANSACTION_ADDR_WIDTH  ( ADDR_WIDTH                ),
                .WALKING_LEVEL                  ( NUM_STAGES - i            )

            ) walking_stage_u (
                
                .clk_i                  ( clk_i                                     ),
                .rst_ni                 ( rst_ni                                    ),

                // Pipeline Ports
                `MAP_DATA_INDEX_PORT    ( stage_slave, walking_stage, i             ),
                `MAP_DATA_INDEX_PORT    ( stage_master, walking_stage, i+1          ),

                // Walker Memory Port
                .memory_master_mem_req      ( walking_mem_master_mem_req[i]     ),
                .memory_master_mem_gnt      ( walking_mem_master_mem_gnt[i]     ),
                .memory_master_mem_valid    ( walking_mem_master_mem_valid[i]   ),
                .memory_master_mem_addr     ( walking_mem_master_mem_addr[i]    ),
                .memory_master_mem_rdata    ( walking_mem_master_mem_rdata[i]   ),
                .memory_master_mem_wdata    ( walking_mem_master_mem_wdata[i]   ),
                .memory_master_mem_we       ( walking_mem_master_mem_we[i]      ),
                .memory_master_mem_be       ( walking_mem_master_mem_be[i]      ),
                .memory_master_mem_error    ( walking_mem_master_mem_error[i]   ),

                // Error ports
                .access_page_fault_o        (),
                .format_error_cause_o       ()

            ); 

        end
    endgenerate

    //////////////////////////////////////////////////////////////////////////////////
    //    _            _     ___             _             ___ _                    //
    //   | |   __ _ __| |_  | _ \__ _ _ _ __(_)_ _  __ _  / __| |_ __ _ __ _ ___    //
    //   | |__/ _` (_-<  _| |  _/ _` | '_(_-< | ' \/ _` | \__ \  _/ _` / _` / -_)   //
    //   |____\__,_/__/\__| |_| \__,_|_| /__/_|_||_\__, | |___/\__\__,_\__, \___|   //
    //                                             |___/               |___/        //
    //////////////////////////////////////////////////////////////////////////////////

    parsing_stage #(
        .PIPELINE_SLAVE_DATA_WIDTH   ( walking_stage_datawidth      ),
        .PIPELINE_MASTER_DATA_WIDTH  ( walking_stage_datawidth      ),
        .WALKING_LEVEL               ( 0                            )
    ) commit_stage_u (
        .clk_i                      ( clk_i                         ),
        .rst_ni                     ( rst_ni                        ),

        // Pipeline Ports
        `MAP_DATA_INDEX_PORT        ( stage_slave  , walking_stage, NUM_STAGES ),
        `MAP_DATA_PORT              ( stage_master , commit_to_output          ), // This must go to the Retire Stage

        // Error Port
        .access_page_fault_o        ( ),
        .format_error_cause_o       ( )

    ); 

    //////////////////////////////////////////////////
    //    ____             _                  _     //
    //   | __ )  __ _  ___| | _____ _ __   __| |    //
    //   |  _ \ / _` |/ __| |/ / _ \ '_ \ / _` |    //
    //   | |_) | (_| | (__|   <  __/ | | | (_| |    //
    //   |____/ \__,_|\___|_|\_\___|_| |_|\__,_|    //  
    //                                              //
    //////////////////////////////////////////////////

    //////////////////////////////////////////////////////////
    //    ___     _   _           ___ _                     //
    //   | _ \___| |_(_)_ _ ___  / __| |_ __ _ __ _ ___     //
    //   |   / -_)  _| | '_/ -_) \__ \  _/ _` / _` / -_)    //
    //   |_|_\___|\__|_|_| \___| |___/\__\__,_\__, \___|    //
    //                                        |___/         //
    //////////////////////////////////////////////////////////

    retire_stage # (

        .PIPELINE_SLAVE_DATA_WIDTH      ( issue_stage_datawidth         ),
        .PIPELINE_MASTER_DATA_WIDTH     ( plb_lookup_stage_datawidth    ),
        .REORDER_BUFFER_DEPTH           ( REORDER_BUFFER_DEPTH          ),
        .RETIRE_PORT_NUM                ( 1 + NUM_STAGES                ),
        .PIPELINE_PASSTHROUGH           ( 1                             ) 

    ) retire_stage_u (

        .clk_i                  ( clk_i                             ),
        .rst_ni                 ( rst_ni                            ),

        // Master/Slave interface to the Issue Stage
        `MAP_DATA_PORT          ( issue_stage_slave,  issue_to_backend  ),
        `MAP_DATA_PORT          ( issue_stage_master, backend_to_issue  ),

        // Slave Interfaces to the PLB/Walking stages

        // Master interface to the Commit Stage
        `MAP_DATA_PORT          ( commit_stage_master, retire_to_commit )
    );

    //////////////////////////////////////////////////////////////
    //     ___                 _ _     ___ _                    //
    //    / __|___ _ __  _ __ (_) |_  / __| |_ __ _ __ _ ___    //
    //   | (__/ _ \ '  \| '  \| |  _| \__ \  _/ _` / _` / -_)   //
    //    \___\___/_|_|_|_|_|_|_|\__| |___/\__\__,_\__, \___|   //
    //                                             |___/        //
    //////////////////////////////////////////////////////////////

    // The commit stage does not implement any specific logic.
    // Instead, it just maps the output of the retire stage to
    // the system output.



    // Currently, we tie the last stage to be always ready
    // Future stall logic will deal with this
    assign commit_to_output_ready = 1;
    // Also, this allows the valid signal to be high for exactly one
    // clock cycle every time a new data is available on the commit stage
    assign mptw_transaction_valid_o = commit_to_output_valid;

endmodule : mptw_top

// verilator lint_on UNOPTFLAT
// verilator lint_on PINCONNECTEMPTY