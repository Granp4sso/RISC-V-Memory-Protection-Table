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

    parameter unsigned NUM_STAGES                  = 4,                  // Four stages for SMMPT52
    parameter unsigned DATA_WIDTH                  = 64,
    parameter unsigned ADDR_WIDTH                  = 64,
    parameter unsigned PLB_STAGE_DEPTH             = 64,
    parameter unsigned PLB_TRANSACTION_DATA_WIDTH  = 64,                 // 8
    parameter unsigned PLB_TRANSACTION_ADDR_WIDTH  = 64,                 // $bits(plb_lookup_req_t)
    parameter unsigned WALKING_STAGE_MEM_DEPTH     = PLB_STAGE_DEPTH,
    parameter unsigned FORWARDING_BUFFER_DEPTH     = 0,
    parameter unsigned REORDER_BUFFER_DEPTH        = 0,
    parameter unsigned PIPELINE_PASSTHROUGH        = 0,                  // Experimental: remove some pipeline registers
    parameter unsigned TEST_MODE                   = 1                   // Remove ERROR propagation and output IDs on the rdata memory ports

) (
    //////////////////
    // Control Port //
    //////////////////

    input  logic                clk_i,
    input  logic                rst_ni,
    input  logic                flush_all_i,                // Flush all transactions in the pipeline
    input  logic                flush_spec_i,               // Only flush speculative transactions (e.g. on a branch misprediction)
    input  logic                stall_i,                    // External stall request
    output logic                busy_o,                     // Required to notify to the CPU that transactions are still ongoing
    output logic                stalled_o,                  // The pipeline is stalled

    //////////////////////
    // Transaction Port //
    //////////////////////

    input  spa_t_u              spa_i,                      // Supervisor physical address input
    input  mmpt_reg_t           mmpt_reg_i,                 // Memory Protection Table Register input (coming from CSRs)
    input  mpt_access_e         access_type_i,              // Memory access type (read, write, execute)
    input  logic                speculative_i,              // This transaction comes from speculative execution
    input  logic                mptw_transaction_valid_i,   // Input Data are Valid
    output logic                mptw_ready_o,               // The MPT Walker is ready to serve a transaction
    output logic                mptw_result_valid_o,        // Output Data is Valid (for one clock cycle)
    output spa_t_u              plb_entry_o,                // Output PLB entry (contains SDID, physical address, and permissions) <TODO>

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

    localparam REORDER_BUFFER_ENABLE        = ( REORDER_BUFFER_DEPTH == 0 ) ? 0 : 1;
    localparam PIPELINE_STAGES_NUM          = 4 + NUM_STAGES + 1; // Check

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
    `DECLARE_DATA_BUS           ( input_to_fetch_data           , fetch_stage_datawidth                             );
    `DECLARE_DATA_BUS           ( fetch_to_issue_data           , issue_stage_datawidth                             );
    `DECLARE_DATA_BUS           ( issue_to_backend_data         , issue_stage_datawidth                             );
    `DECLARE_DATA_BUS           ( issue_to_plb_lookup_data      , plb_lookup_stage_datawidth                        );
    `DECLARE_DATA_BUS           ( plb_lookup_to_demux_data      , walking_stage_datawidth                           );

    // Midend Buses
    `DECLARE_DATA_BUS_ARRAY     ( to_walking_stage_data         , walking_stage_datawidth       , NUM_STAGES + 1    );
    `DECLARE_DATA_BUS_ARRAY     ( walking_to_demux_data         , walking_stage_datawidth       , NUM_STAGES + 1    );
    `DECLARE_DATA_BUS_ARRAY     ( walking_to_retire_data        , walking_stage_datawidth       , NUM_STAGES + 1    );
 
    // Backend Buses
    `DECLARE_DATA_BUS           ( backend_to_issue_data         , issue_stage_datawidth                             );
    `DECLARE_DATA_BUS           ( retire_to_commit_data         , walking_stage_datawidth                           );
    `DECLARE_DATA_BUS           ( commit_to_output_data         , walking_stage_datawidth                           );

    // Control and Status buses
    `DECLARE_CTRL_BUS_ARRAY     ( system_control                , $bits(mptw_flush_ctrl_e)      , PIPELINE_STAGES_NUM   );
    `DECLARE_STATUS_BUS_ARRAY   ( system_status                 , $bits(mptw_flush_status_e)    , PIPELINE_STAGES_NUM   );


    //////////////////////////////////////////////////////////
    //     ___         _           _   _   _      _ _       //
    //    / __|___ _ _| |_ _ _ ___| | | | | |_ _ (_) |_     //
    //   | (__/ _ \ ' \  _| '_/ _ \ | | |_| | ' \| |  _|    //
    //    \___\___/_||_\__|_| \___/_|  \___/|_||_|_|\__|    //
    //                                                      //
    //////////////////////////////////////////////////////////

    // Control unit handles external flush and stall logics
    // It also handles the internal error conditions

    // verilator lint_off PINMISSING
    control_unit # (
        .CONTROL_AND_STATUS_PORTS_NUM   ( PIPELINE_STAGES_NUM                                   )
    ) control_unit_u (
        .clk_i                          ( clk_i                                                 ),
        .rst_ni                         ( rst_ni                                                ),
        .valid_req_i                    ( mptw_transaction_valid_i                              ),   // A new valid transaction is issued
        .busy_o                         ( busy_o                                                ),   // The pipeline is still processing data
        .stalled_o                      ( stalled_o                                             ),
        .flush_all_i                    ( flush_all_i                                           ),   // Externall flush
        .flush_spec_i                   ( flush_spec_i                                          ),   // External flush for speculative transactions
        .stall_i                        ( stall_i                                               ),   // External Stall
        .pipeline_valid_i               ( mptw_transaction_valid_i                              ),   // A valid request is coming to the pipeline
        .pipeline_ready_i               ( input_to_fetch_data_ready                             ),   // The pipeline can accept a new transaction
        .system_valid_o                 ( input_to_fetch_data_valid                             ),   // The system can forward the input transaction
        .system_ready_o                 ( mptw_ready_o                                          ),   // The system can accept a new transaction

        `MAP_CTRL_PORT                  ( master_control            , system_control            ),
        `MAP_STATUS_PORT                ( slave_status              , system_status             )
    ); 
    // verilator lint_on PINMISSING

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
    assign input_transaction.speculative    = speculative_i;

    // Inintially, we assume a transaction must be walked
    assign input_transaction.walking        = MPT_WALKING_DO;
    assign input_transaction.valid          = mptw_transaction_valid_i; 
    assign input_transaction.completed      = '0;
    assign input_transaction.id             = '1; // ID 0xfff is reserved for non-issued transactions
    assign input_transaction.mpte           = '0;
    assign input_transaction.mpte_ptr       = '0;
    assign input_transaction.format_error   = NO_ERROR ;
    assign input_transaction.access_error   = '0 ;

    // Connect to the fetch stage
    assign input_to_fetch_data_data         = input_transaction;

    //////////////////////////////////////////////////////
    //    ___    _      _      ___ _                    //
    //   | __|__| |_ __| |_   / __| |_ __ _ __ _ ___    //
    //   | _/ -_)  _/ _| ' \  \__ \  _/ _` / _` / -_)   //
    //   |_|\___|\__\__|_||_| |___/\__\__,_\__, \___|   //
    //                                     |___/        //
    //////////////////////////////////////////////////////

    fetch_stage # (

        .PIPELINE_SLAVE_DATA_WIDTH      ( fetch_stage_datawidth         ),
        .PIPELINE_MASTER_DATA_WIDTH     ( issue_stage_datawidth         ),
        .TEST_MODE                      ( TEST_MODE                     )

    ) fetch_stage_u (

        .clk_i                  ( clk_i                                     ),
        .rst_ni                 ( rst_ni                                    ),

        `MAP_DATA_PORT          ( stage_slave   , input_to_fetch_data       ),
        `MAP_DATA_PORT          ( stage_master  , fetch_to_issue_data       ),
        `MAP_CTRL_INDEX_PORT    ( stage_ctrl    , system_control        , 0 ),
        `MAP_STATUS_INDEX_PORT  ( stage_status  , system_status         , 0 ),

        .exception_cause_o      ( fetch_exception_cause                     )
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
    `CONCAT_MASTER_DATA_ARRAY_2( issue_stage_slave, backend_to_issue_data, fetch_to_issue_data );
    // Concat Slave ports to Master Ports: Issue to PLB Lookup (1), Issue to Backend (0)
    `CONCAT_SLAVE_DATA_ARRAY_2( issue_stage_master, issue_to_plb_lookup_data, issue_to_backend_data );

    issue_stage # (

        .PIPELINE_SLAVE_DATA_WIDTH      ( issue_stage_datawidth         ),
        .PIPELINE_MASTER_DATA_WIDTH     ( plb_lookup_stage_datawidth    ),
        .PIPELINE_PASSTHROUGH           ( PIPELINE_PASSTHROUGH          ) 

    ) issue_stage_u (

        .clk_i                  ( clk_i                                     ),
        .rst_ni                 ( rst_ni                                    ),

        `MAP_DATA_PORT          ( stage_slave   , issue_stage_slave         ),
        `MAP_DATA_PORT          ( stage_master  , issue_stage_master        ),
        `MAP_CTRL_INDEX_PORT    ( stage_ctrl    , system_control        , 1 ),
        `MAP_STATUS_INDEX_PORT  ( stage_status  , system_status         , 1 )
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
        .TRANSACTION_FIFO_DEPTH     ( PLB_STAGE_DEPTH            ),
        .TEST_MODE                  ( TEST_MODE                  )

    ) plb_lookup_stage_u (
        
        .clk_i                  ( clk_i                                         ),
        .rst_ni                 ( rst_ni                                        ),

        // Pipeline Ports
        `MAP_DATA_PORT          ( stage_slave   , issue_to_plb_lookup_data      ),
        `MAP_DATA_PORT          ( stage_master  , plb_lookup_to_demux_data      ),
        `MAP_CTRL_INDEX_PORT    ( stage_ctrl    , system_control            , 2 ),
        `MAP_STATUS_INDEX_PORT  ( stage_status  , system_status             , 2 ),

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

    assign plb_output_transaction = plb_lookup_to_demux_data_data;
    assign retire_demux_select[0] = plb_output_transaction.completed && plb_output_transaction.valid;

    // PLB Lookup retire port is port 0
    always_comb begin: plb_lookup_retire_demux
        if( retire_demux_select[0] && REORDER_BUFFER_ENABLE ) begin
            // Map the output to the corresponding retire stage
            `ASSIGN_DATA_BUS_SCALAR_TO_ARRAY( walking_to_retire_data , 0 , plb_lookup_to_demux_data );
            to_walking_stage_data_valid[0] = '0;
            to_walking_stage_data_data[0] = '0; 
        end else begin
            // Forward to the Midend
            `ASSIGN_DATA_BUS_SCALAR_TO_ARRAY( to_walking_stage_data , 0 , plb_lookup_to_demux_data );
            walking_to_retire_data_valid[0] = '0;
            walking_to_retire_data_data[0] = '0; 
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
                .WALKING_LEVEL                  ( NUM_STAGES - i            ),
                .TEST_MODE                      ( TEST_MODE                 )

            ) walking_stage_u (
                
                .clk_i                      ( clk_i                                             ),
                .rst_ni                     ( rst_ni                                            ),

                // Pipeline Ports
                `MAP_DATA_INDEX_PORT        ( stage_slave   , to_walking_stage_data , i         ),
                `MAP_DATA_INDEX_PORT        ( stage_master  , walking_to_demux_data , i         ),
                `MAP_CTRL_INDEX_PORT        ( stage_ctrl    , system_control        , 3 + i     ),
                `MAP_STATUS_INDEX_PORT      ( stage_status  , system_status         , 3 + i     ),

                // Walker Memory Port
                .memory_master_mem_req      ( walking_mem_master_mem_req[i]                     ),
                .memory_master_mem_gnt      ( walking_mem_master_mem_gnt[i]                     ),
                .memory_master_mem_valid    ( walking_mem_master_mem_valid[i]                   ),
                .memory_master_mem_addr     ( walking_mem_master_mem_addr[i]                    ),
                .memory_master_mem_rdata    ( walking_mem_master_mem_rdata[i]                   ),
                .memory_master_mem_wdata    ( walking_mem_master_mem_wdata[i]                   ),
                .memory_master_mem_we       ( walking_mem_master_mem_we[i]                      ),
                .memory_master_mem_be       ( walking_mem_master_mem_be[i]                      ),
                .memory_master_mem_error    ( walking_mem_master_mem_error[i]                   ),

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
            assign walking_output_transaction[i] = walking_to_demux_data_data[i];

            if( i != 0 ) begin: retire_demux_gen
                assign retire_demux_select[i] = walking_output_transaction[i].completed && walking_output_transaction[i].valid;
                always_comb begin: walking_stage_retire_demux
                    if( retire_demux_select[i] && REORDER_BUFFER_ENABLE ) begin
                        // Map the output to the corresponding retire stage
                        `ASSIGN_DATA_BUS_ARRAY_TO_ARRAY( walking_to_retire_data , i , walking_to_demux_data , i );
                        to_walking_stage_data_valid[i + 1] = '0;
                        to_walking_stage_data_data[i + 1] = '0; 
                    end else begin
                        // Forward to the next walking stage
                        `ASSIGN_DATA_BUS_ARRAY_TO_ARRAY( to_walking_stage_data , i + 1 , walking_to_demux_data , i );
                        walking_to_retire_data_valid[i] = '0;
                        walking_to_retire_data_data[i] = '0; 
                    end
                end
            end else begin: no_retire_demux_gen
                // In case of the first walking stage, just passthrough
                `ASSIGN_DATA_BUS_ARRAY_TO_ARRAY( to_walking_stage_data , i + 1 , walking_to_demux_data , i );
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
        .PIPELINE_SLAVE_DATA_WIDTH   ( walking_stage_datawidth                                      ),
        .PIPELINE_MASTER_DATA_WIDTH  ( walking_stage_datawidth                                      ),
        .WALKING_LEVEL               ( 0                                                            ),
        .TEST_MODE                   ( TEST_MODE                                                    )
    ) last_parsing_stage_u (
        .clk_i                      ( clk_i                                                         ),
        .rst_ni                     ( rst_ni                                                        ),

        // Pipeline Ports
        `MAP_DATA_INDEX_PORT        ( stage_slave   , to_walking_stage_data     , NUM_STAGES        ),
        `MAP_DATA_INDEX_PORT        ( stage_master  , walking_to_retire_data    , NUM_STAGES        ), 
        `MAP_CTRL_INDEX_PORT        ( stage_ctrl    , system_control            , 3 + NUM_STAGES    ),
        `MAP_STATUS_INDEX_PORT      ( stage_status  , system_status             , 3 + NUM_STAGES    ),

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

            .clk_i                  ( clk_i                                                                         ),
            .rst_ni                 ( rst_ni                                                                        ),

            // Master/Slave interface to the Issue Stage
            `MAP_DATA_PORT          ( issue_stage_slave     , issue_to_backend_data                                 ),
            `MAP_DATA_PORT          ( issue_stage_master    , backend_to_issue_data                                 ),
            // Slave Interfaces to the PLB/Walking stages
            `MAP_DATA_PORT          ( retire_stage_slave    , walking_to_retire_data                                ),
            // Master interface to the Commit Sta   ge
            `MAP_DATA_PORT          ( commit_stage_master   , retire_to_commit_data                                 ),
            // Control and Status Ports
            `MAP_CTRL_INDEX_PORT    ( stage_ctrl            , system_control            , PIPELINE_STAGES_NUM - 1   ),
            `MAP_STATUS_INDEX_PORT  ( stage_status          , system_status             , PIPELINE_STAGES_NUM - 1   )
        );
    end else begin
        `ASSIGN_DATA_BUS                    ( backend_to_issue_data , issue_to_backend_data                             );
        `ASSIGN_DATA_BUS_ARRAY_TO_SCALAR    ( retire_to_commit_data , NUM_STAGES            , walking_to_retire_data    );
        assign system_status_flushed[PIPELINE_STAGES_NUM - 1] = MPT_FLUSHED_COMPLETED;
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

    assign commit_to_output_data_data = retire_to_commit_data_data;
    // Currently, we tie the last stage to be always ready
    // Future stall logic will deal with this
    assign retire_to_commit_data_ready = 1;
    // Also, this allows the valid signal to be high for exactly one
    // clock cycle every time a new data is available on the commit stage
    assign mptw_result_valid_o = retire_to_commit_data_valid;

    mptw_transaction_t debug_output_transaction;
    assign debug_output_transaction = commit_to_output_data_data;
    assign plb_entry_o = debug_output_transaction.spa;

endmodule : mptw_top

// verilator lint_on UNOPTFLAT
// verilator lint_on PINCONNECTEMPTY