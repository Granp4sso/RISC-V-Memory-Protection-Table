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

module mptw_top #(

    parameter unsigned NUM_STAGES                  = 4,                        // Four stages for SMMPT52
    parameter unsigned DATA_WIDTH                  = 64,
    parameter unsigned ADDR_WIDTH                  = 64,
    parameter unsigned PLB_STAGE_DEPTH             = 4,
    parameter unsigned PLB_TRANSACTION_DATA_WIDTH  = 64,                        // 8
    parameter unsigned PLB_TRANSACTION_ADDR_WIDTH  = 64,                        // $bits(plb_lookup_req_t)
    parameter unsigned WALKING_STAGE_MEM_DEPTH     = PLB_STAGE_DEPTH,
    parameter unsigned FORWARDING_BUFFER_DEPTH     = 4,
    parameter unsigned REORDER_BUFFER_DEPTH        = 16,
    parameter unsigned PIPELINE_PASSTHROUGH        = 0                   // Experimental: remove some pipeline registers

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

    localparam REORDER_BUFFER_ENABLE = ( REORDER_BUFFER_DEPTH == 0 ) ? 0 : 1;

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
    mptw_transaction_t      plb_output_transaction;
    mptw_transaction_t      walking_output_transaction[ NUM_STAGES ];
    logic                   retire_demux_select[ NUM_STAGES ];

    /////////////////////
    // Bus Declaration //
    /////////////////////

    // Frontend Buses
    `DECLARE_DATA_BUS       ( input_to_fetch            , fetch_stage_datawidth                         );
    `DECLARE_DATA_BUS       ( fetch_to_issue            , issue_stage_datawidth                         );
    `DECLARE_DATA_BUS       ( issue_to_backend          , issue_stage_datawidth                         );
    `DECLARE_DATA_BUS       ( issue_to_plb_lookup       , plb_lookup_stage_datawidth                    );
    `DECLARE_DATA_BUS       ( plb_lookup_to_demux       , walking_stage_datawidth                       );
    // Midend Buses
    `DECLARE_DATA_BUS_ARRAY ( to_walking_stage          , walking_stage_datawidth   , NUM_STAGES + 1    );
    `DECLARE_DATA_BUS_ARRAY ( walking_to_demux          , walking_stage_datawidth   , NUM_STAGES + 1    );   
    `DECLARE_DATA_BUS_ARRAY ( walking_to_retire         , walking_stage_datawidth   , NUM_STAGES + 1    );
    // Backend Buses
    `DECLARE_DATA_BUS       ( backend_to_issue          , issue_stage_datawidth                         );
    `DECLARE_DATA_BUS       ( retire_to_commit          , walking_stage_datawidth                       );
    `DECLARE_DATA_BUS       ( commit_to_output          , walking_stage_datawidth                       );

    // Control and Status BUS
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
        .PIPELINE_PASSTHROUGH           ( PIPELINE_PASSTHROUGH          ) 

    ) issue_stage_u (

        .clk_i                  ( clk_i                             ),
        .rst_ni                 ( rst_ni                            ),

        `MAP_DATA_PORT          ( stage_slave,  issue_stage_slave      ),
        `MAP_DATA_PORT          ( stage_master, issue_stage_master     )
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
        `MAP_DATA_PORT          ( stage_master , plb_lookup_to_demux        ),
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

    //////////////////////////
    // Retire Demultiplexer //
    //////////////////////////

    // The PLB Lookup result can go either to the retire stage or the 
    // walking stages. If no reorder buffer is implemented, go straight to walking.

    assign plb_output_transaction = plb_lookup_to_demux_data;
    assign retire_demux_select[0] = plb_output_transaction.completed && plb_output_transaction.valid;

    // PLB Lookup retire port is port 0
    always_comb begin: plb_lookup_retire_demux
        if( retire_demux_select[0] && REORDER_BUFFER_ENABLE ) begin
            // Map the output to the corresponding retire stage
            `ASSIGN_DATA_BUS_SCALAR_TO_ARRAY( walking_to_retire , 0 , plb_lookup_to_demux );
            to_walking_stage_valid[0] = '0;
            to_walking_stage_data[0] = '0; 
        end else begin
            // Forward to the Midend
            `ASSIGN_DATA_BUS_SCALAR_TO_ARRAY( to_walking_stage , 0 , plb_lookup_to_demux );
            walking_to_retire_valid[0] = '0;
            walking_to_retire_data[0] = '0; 
        end
    end

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

    generate
        for (genvar i = 0; i < NUM_STAGES; i = i + 1) begin : gen_walking_stages

            ///////////////////
            // Walking Stage //
            ///////////////////

            walking_stage #(

                .PIPELINE_SLAVE_DATA_WIDTH      ( walking_stage_datawidth   ),
                .PIPELINE_MASTER_DATA_WIDTH     ( walking_stage_datawidth   ),
                .TRANSACTION_FIFO_DEPTH         ( WALKING_STAGE_MEM_DEPTH   ),
                .FORWARDING_BUFFER_DEPTH        ( FORWARDING_BUFFER_DEPTH   ),
                .MEMORY_TRANSACTION_DATA_WIDTH  ( DATA_WIDTH                ),           
                .MEMORY_TRANSACTION_ADDR_WIDTH  ( ADDR_WIDTH                ),
                .WALKING_LEVEL                  ( NUM_STAGES - i            )

            ) walking_stage_u (
                
                .clk_i                  ( clk_i                                     ),
                .rst_ni                 ( rst_ni                                    ),

                // Pipeline Ports
                `MAP_DATA_INDEX_PORT    ( stage_slave, to_walking_stage, i          ),
                `MAP_DATA_INDEX_PORT    ( stage_master, walking_to_demux, i         ),

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

            //////////////////////////
            // Retire Demultiplexer //
            //////////////////////////

            // The first walking stage is never producing a complete transaction because
            // Such a choice is taken by the parsing stage. The first parsing stage
            // just builds the first root-MPT Entry address. Only from the second onward
            // The complete bit might be filled (as walking happened)
            assign walking_output_transaction[i] = walking_to_demux_data[i];

            if( i != 0 ) begin: retire_demux_gen
                assign retire_demux_select[i] = walking_output_transaction[i].completed && walking_output_transaction[i].valid;
                always_comb begin: walking_stage_retire_demux
                    if( retire_demux_select[i] && REORDER_BUFFER_ENABLE ) begin
                        // Map the output to the corresponding retire stage
                        `ASSIGN_DATA_BUS_ARRAY_TO_ARRAY( walking_to_retire , i , walking_to_demux , i );
                        to_walking_stage_valid[i + 1] = '0;
                        to_walking_stage_data[i + 1] = '0; 
                    end else begin
                        // Forward to the next walking stage
                        `ASSIGN_DATA_BUS_ARRAY_TO_ARRAY( to_walking_stage , i + 1 , walking_to_demux , i );
                        walking_to_retire_valid[i] = '0;
                        walking_to_retire_data[i] = '0; 
                    end
                end
            end else begin: no_retire_demux_gen
                // In case of the first walking stage, just passthrough
                `ASSIGN_DATA_BUS_ARRAY_TO_ARRAY( to_walking_stage , i + 1 , walking_to_demux , i );
            end
            
        end
    endgenerate

    //////////////////////////////////////////////////////////////////////////////////
    //    _            _     ___             _             ___ _                    //
    //   | |   __ _ __| |_  | _ \__ _ _ _ __(_)_ _  __ _  / __| |_ __ _ __ _ ___    //
    //   | |__/ _` (_-<  _| |  _/ _` | '_(_-< | ' \/ _` | \__ \  _/ _` / _` / -_)   //
    //   |____\__,_/__/\__| |_| \__,_|_| /__/_|_||_\__, | |___/\__\__,_\__, \___|   //
    //                                             |___/               |___/        //
    //////////////////////////////////////////////////////////////////////////////////

    mpte_parsing_stage #(
        .PIPELINE_SLAVE_DATA_WIDTH   ( walking_stage_datawidth      ),
        .PIPELINE_MASTER_DATA_WIDTH  ( walking_stage_datawidth      ),
        .WALKING_LEVEL               ( 0                            )
    ) last_parsing_stage_u (
        .clk_i                      ( clk_i                         ),
        .rst_ni                     ( rst_ni                        ),

        // Pipeline Ports
        `MAP_DATA_INDEX_PORT        ( stage_slave  , to_walking_stage   , NUM_STAGES ),
        `MAP_DATA_INDEX_PORT        ( stage_master , walking_to_retire  , NUM_STAGES ), // This must go to the Retire Stage

        // Error Port
        .access_page_fault_o        ( ),
        .format_error_cause_o       ( )
    ); 

    ///////////////////////
    // Retire Forwarding //
    ///////////////////////

    // If the reorder buffer is enabled, data is to the last retire stage port.
    // Otherwise, the output goes directly to output.

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

    ///////////////////////////
    // Retire Stage Instance //
    ///////////////////////////

    if( REORDER_BUFFER_ENABLE ) begin: retire_stage_gen
        retire_stage # (

            .PIPELINE_SLAVE_DATA_WIDTH      ( issue_stage_datawidth         ),
            .PIPELINE_MASTER_DATA_WIDTH     ( plb_lookup_stage_datawidth    ),
            .REORDER_BUFFER_DEPTH           ( REORDER_BUFFER_DEPTH          ),
            .RETIRE_PORT_NUM                ( NUM_STAGES + 1                ),
            .PIPELINE_PASSTHROUGH           ( PIPELINE_PASSTHROUGH          ) 

        ) retire_stage_u (

            .clk_i                  ( clk_i                             ),
            .rst_ni                 ( rst_ni                            ),

            // Master/Slave interface to the Issue Stage
            `MAP_DATA_PORT          ( issue_stage_slave,  issue_to_backend  ),
            `MAP_DATA_PORT          ( issue_stage_master, backend_to_issue  ),
            // Slave Interfaces to the PLB/Walking stages
            `MAP_DATA_PORT          ( retire_stage_slave, walking_to_retire ),

            // Master interface to the Commit Stage
            `MAP_DATA_PORT          ( commit_stage_master, retire_to_commit )
        );
    end else begin
        `ASSIGN_DATA_BUS( backend_to_issue, issue_to_backend );
        `ASSIGN_DATA_BUS_ARRAY_TO_SCALAR( retire_to_commit, NUM_STAGES, walking_to_retire );
    end

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

    assign commit_to_output_data = retire_to_commit_data;
    // Currently, we tie the last stage to be always ready
    // Future stall logic will deal with this
    assign retire_to_commit_ready = 1;
    // Also, this allows the valid signal to be high for exactly one
    // clock cycle every time a new data is available on the commit stage
    assign mptw_transaction_valid_o = retire_to_commit_valid;

endmodule : mptw_top

// verilator lint_on UNOPTFLAT
// verilator lint_on PINCONNECTEMPTY