// Author: Stefano Mercogliano <stefano.mercogliano@unina.it>
// Author: Valerio Di Domenico <didomenico.valerio@virgilio.it>

// Description:
//  TBD

// TODO: Handle exception/flush/stall logic

/* verilator lint_off IMPORTSTAR */
import mpt_pkg::*;
/* verilator lint_on IMPORTSTAR */

// verilator lint_off PINCONNECTEMPTY
// verilator lint_off UNDRIVEN

// Import headers
`include "pipelining.svh" 

module issue_stage #(
    parameter unsigned PIPELINE_SLAVE_DATA_WIDTH    = 32,
    parameter unsigned PIPELINE_MASTER_DATA_WIDTH   = 32,
    parameter unsigned PIPELINE_PASSTHROUGH         = 1
) (
    // Generic Signals
    input  logic                clk_i,
    input  logic                rst_ni,

    // Slave Ports: Backend to Issue (1), Fetch to Issue (0)
    `DEFINE_SLAVE_DATA_PORT_ARRAY       ( stage_slave   , PIPELINE_SLAVE_DATA_WIDTH     , 2 ),

    // Master Ports: Issue to PLB Lookup (1), Issue to Backend (0)
    `DEFINE_MASTER_DATA_PORT_ARRAY      ( stage_master  , PIPELINE_MASTER_DATA_WIDTH    , 2 ),

    // Control and Status Ports
    `DEFINE_SLAVE_CTRL_PORT             ( stage_ctrl    , $bits(mptw_flush_ctrl_e)          ),
    `DEFINE_MASTER_STATUS_PORT          ( stage_status  , $bits(mptw_flush_status_e)        )
); 

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

    //////////////////  ///
    // Bus Declaration   //
    //////////////////  ///   

    `DECLARE_DATA_BUS       ( fetch_to_issue            , PIPELINE_SLAVE_DATA_WIDTH     );
    `DECLARE_DATA_BUS       ( backend_to_issue          , PIPELINE_SLAVE_DATA_WIDTH     );
    `DECLARE_DATA_BUS       ( issue_to_backend          , PIPELINE_MASTER_DATA_WIDTH    );
    `DECLARE_DATA_BUS       ( issue_to_plb_lookup       , PIPELINE_MASTER_DATA_WIDTH    );
    
    `DECLARE_STATUS_BUS     ( issue_backend_status      , $bits(mptw_flush_status_e)    );
    `DECLARE_STATUS_BUS     ( issue_status              , $bits(mptw_flush_status_e)    );

    //////////////////////////////////////////////////////
    //    _   _                    _   _                //
    //   | | | |_ _  _ __  __ _ __| |_(_)_ _  __ _      //
    //   | |_| | ' \| '_ \/ _` / _| / / | ' \/ _` |     //
    //    \___/|_||_| .__/\__,_\__|_\_\_|_||_\__, |     //
    //              |_|                      |___/      //
    //////////////////////////////////////////////////////

    // Unpack the array signals to scalar ones
    `ASSIGN_DATA_BUS_ARRAY_TO_SCALAR    ( fetch_to_issue        , 0 , stage_slave               );
    `ASSIGN_DATA_BUS_ARRAY_TO_SCALAR    ( backend_to_issue      , 1 , stage_slave               );

    // Now let's do the passthrough from the fetch stage to the backend
    if( ~PIPELINE_PASSTHROUGH ) begin: pipeline_register_generate
        pipeline_register # ( 

            .DATA_WIDTH             ( PIPELINE_SLAVE_DATA_WIDTH    )

        ) issue_backend_reg (

            .clk_i                  ( clk_i                             ),
            .rst_ni                 ( rst_ni                            ),

            `MAP_DATA_PORT          ( s_data    , fetch_to_issue        ),
            `MAP_DATA_PORT          ( m_data    , issue_to_backend      ),
            `MAP_CTRL_PORT          ( s_ctrl    , stage_ctrl            ),
            `MAP_STATUS_PORT        ( m_status  , issue_backend_status  )

        ); 
    end else begin: pipeline_register_passthrough
        `ASSIGN_DATA_BUS( issue_to_backend, fetch_to_issue );
        // Add CTRL and STATUS sink here
        assign issue_backend_status_flushed = MPT_FLUSHED_COMPLETED;
    end

    //////////////////////////////////////////////////
    //    ___                   _   _               //
    //   | _ \___ _ __  __ _ __| |_(_)_ _  __ _     //
    //   |   / -_) '_ \/ _` / _| / / | ' \/ _` |    //
    //   |_|_\___| .__/\__,_\__|_\_\_|_||_\__, |    //
    //           |_|                      |___/     //
    //////////////////////////////////////////////////

    // Then receive the answer from the backend (i.e. ID assigned to transaction)
    if( ~PIPELINE_PASSTHROUGH ) begin: pipeline_register_generate
        pipeline_register # ( 

            .DATA_WIDTH             ( PIPELINE_SLAVE_DATA_WIDTH    )

        ) issue_reg (

            .clk_i                  ( clk_i                                 ),
            .rst_ni                 ( rst_ni                                ),

            `MAP_DATA_PORT          ( s_data    , backend_to_issue          ),
            `MAP_DATA_PORT          ( m_data    , issue_to_plb_lookup       ),
            `MAP_CTRL_PORT          ( s_ctrl    , stage_ctrl                ),
            `MAP_STATUS_PORT        ( m_status  , issue_status              )

        ); 
    end else begin: pipeline_register_passthrough
        `ASSIGN_DATA_BUS( issue_to_plb_lookup, backend_to_issue );
        // Add CTRL and STATUS sink here
        assign issue_status_flushed = MPT_FLUSHED_COMPLETED;
    end

    // Assign master ports
    `ASSIGN_DATA_BUS_SCALAR_TO_ARRAY( stage_master      , 0 , issue_to_backend      );
    `ASSIGN_DATA_BUS_SCALAR_TO_ARRAY( stage_master      , 1 , issue_to_plb_lookup   );

    //////////////////////////////////////////////////////
    //    ___ _         _      _              _         //
    //   | __| |_  _ __| |_   | |   ___  __ _(_)__      //
    //   | _|| | || (_-< ' \  | |__/ _ \/ _` | / _|     //
    //   |_| |_|\_,_/__/_||_| |____\___/\__, |_\__|     //
    //                                  |___/           //
    //////////////////////////////////////////////////////
    
    // Here we do handle the combination of flushed states of register and mem stage
    always_comb begin: flush_handler_process
        if ( ( issue_backend_status_flushed == MPT_FLUSHED_COMPLETED ) && ( issue_status_flushed == MPT_FLUSHED_COMPLETED ) ) begin
            stage_status_flushed = MPT_FLUSHED_COMPLETED;
        end else if ( ( issue_backend_status_flushed != MPT_FLUSHED_NONE ) || ( issue_status_flushed != MPT_FLUSHED_NONE ) ) begin
            stage_status_flushed = MPT_FLUSHED_ONGOING;
        end else begin
            stage_status_flushed = MPT_FLUSHED_NONE;
        end
    end
    
endmodule : issue_stage

// verilator lint_on PINCONNECTEMPTY
// verilator lint_on UNDRIVEN