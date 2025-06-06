// Author: Stefano Mercogliano <stefano.mercogliano@unina.it>

// Description:
//  The PLB lookup stage exposes a memory interface specifically used to access the PLB.
//  Currently we use a MEM/SRAM interface, assuming the address to be used as a TAG by the PLB.
//  The MEM protocol can be pipelined in two stages: grant_stage and valid_stage.
//  A plb_lookup_req is made of the current Supervisor Domain ID, the Supervisor Phyisical Address
//  And the required access permissions. If the data is available, the transaction is marked as MPT_WALKING_SKIP
//  Protocol conversion can be applied outside of the MPT Walker to comply with a specific Cache.

// TODO: Support stall and flush logic

/* verilator lint_off IMPORTSTAR */
import mpt_pkg::*;
/* verilator lint_on IMPORTSTAR */

// Import headers
`include "pipelining.svh"
`include "uninasoc_mem.svh"

// verilator lint_off UNOPTFLAT
// verilator lint_off PINCONNECTEMPTY

module plb_lookup_stage #(
    parameter unsigned  PIPELINE_SLAVE_DATA_WIDTH   = 32,
    parameter unsigned  PIPELINE_MASTER_DATA_WIDTH  = 32,
    parameter unsigned  TRANSACTION_FIFO_DEPTH      = 4,
    localparam unsigned PLB_TRANSACTION_DATA_WIDTH  = 64,                        // 8
    localparam unsigned PLB_TRANSACTION_ADDR_WIDTH  = 64                         // $bits(plb_lookup_req_t)
) (
    // Generic Signals
    input  logic                clk_i,
    input  logic                rst_ni,

    // PLB Lookup Slave Port
    `DEFINE_SLAVE_DATA_PORT(stage_slave, PIPELINE_SLAVE_DATA_WIDTH),

    // PLB Lookup Master Port
    `DEFINE_MASTER_DATA_PORT(stage_master, PIPELINE_MASTER_DATA_WIDTH),

    // PLB Lookup Control Port (Unused atm)
    `DEFINE_SLAVE_CTRL_PORT(plb_lookup_ctrl),

    // Cache memory interface
    `DEFINE_MEM_MASTER_PORTS(plb_master, PLB_TRANSACTION_DATA_WIDTH, PLB_TRANSACTION_ADDR_WIDTH)

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

    mptw_transaction_t  pre_local_transaction;
    mptw_transaction_t  post_local_transaction;
    plb_lookup_req_t    plb_tag_req;

    /////////////////////
    // Bus Declaration //
    /////////////////////

    `DECLARE_DATA_BUS( mem_to_local_bus, PIPELINE_SLAVE_DATA_WIDTH );
    `DECLARE_DATA_BUS( local_to_reg_bus , PIPELINE_SLAVE_DATA_WIDTH );

    //////////////////////////////////////////////////////
    //    _   _                    _   _                //
    //   | | | |_ _  _ __  __ _ __| |_(_)_ _  __ _      //
    //   | |_| | ' \| '_ \/ _` / _| / / | ' \/ _` |     //
    //    \___/|_||_| .__/\__,_\__|_\_\_|_||_\__, |     //
    //              |_|                      |___/      //
    //////////////////////////////////////////////////////

    // Unused

    //////////////////////////////////////////////////////
    //    __  __             ___ _                      //
    //   |  \/  |___ _ __   / __| |_ __ _ __ _ ___      //
    //   | |\/| / -_) '  \  \__ \  _/ _` / _` / -_)     //
    //   |_|  |_\___|_|_|_| |___/\__\__,_\__, \___|     //
    //                                   |___/          //
    //////////////////////////////////////////////////////

    // The PLB stage wraps the Memory Stage and converts the 
    // SRAM protocol to the cache-one adopted by the PLB

    memory_read_stage #(
        .PIPELINE_SLAVE_DATA_WIDTH   ( PIPELINE_SLAVE_DATA_WIDTH    ),
        .PIPELINE_MASTER_DATA_WIDTH  ( PIPELINE_MASTER_DATA_WIDTH   ),
        .TRANSACTION_FIFO_DEPTH      ( TRANSACTION_FIFO_DEPTH       ),
        .MEMORY_DATA_WIDTH           ( PLB_TRANSACTION_DATA_WIDTH   ),                      
        .MEMORY_ADDR_WIDTH           ( PLB_TRANSACTION_ADDR_WIDTH   )
    ) mem_stage_u (
        .clk_i                  ( clk_i                                     ),
        .rst_ni                 ( rst_ni                                    ),

        // Pipeline Ports
        `MAP_DATA_PORT          ( stage_slave  , stage_slave    ),
        `MAP_DATA_PORT          ( stage_master , mem_to_local_bus   ),

        // PLB Cache Port
        .memory_master_mem_req      ( plb_master_mem_req     ),
        .memory_master_mem_gnt      ( plb_master_mem_gnt     ),
        .memory_master_mem_valid    ( plb_master_mem_valid   ),
        .memory_master_mem_addr     ( plb_master_mem_addr    ),
        .memory_master_mem_rdata    ( plb_master_mem_rdata   ),
        .memory_master_mem_wdata    ( plb_master_mem_wdata   ),
        .memory_master_mem_we       ( plb_master_mem_we      ),
        .memory_master_mem_be       ( plb_master_mem_be      ),
        .memory_master_mem_error    ( plb_master_mem_error   )    
    );

    // The PLB request is built from the out transaction
    assign pre_local_transaction = mem_to_local_bus_data;


    // The slave_to_mem is going to output a valid transaction
    // Currently, we assume the PLB to use the SRAM protocol, and packs the
    // HIT or MISS into the data field for a transaction

    assign post_local_transaction.mmpt          = pre_local_transaction.mmpt;
    assign post_local_transaction.spa           = pre_local_transaction.spa;
    assign post_local_transaction.access_type   = pre_local_transaction.access_type;
    assign post_local_transaction.walking       = ( |pre_local_transaction.rpa ) ? MPT_WALKING_SKIP : MPT_WALKING_DO ;
    assign post_local_transaction.rpa           = '0;

    assign post_local_transaction.format_error  = pre_local_transaction.format_error;
    assign post_local_transaction.access_error  = pre_local_transaction.access_error;
    assign post_local_transaction.plb_hit       = ( |pre_local_transaction.rpa ) ? 1'b1 : 1'b0 ;
    assign post_local_transaction.mpte          = pre_local_transaction.mpte;

    assign post_local_transaction.valid         = pre_local_transaction.valid;

    //////////////////////////////////////////////////
    //    ___                   _   _               //
    //   | _ \___ _ __  __ _ __| |_(_)_ _  __ _     //
    //   |   / -_) '_ \/ _` / _| / / | ' \/ _` |    //
    //   |_|_\___| .__/\__,_\__|_\_\_|_||_\__, |    //
    //           |_|                      |___/     //
    //////////////////////////////////////////////////

    assign local_to_reg_bus_valid = mem_to_local_bus_valid;
    assign local_to_reg_bus_data = post_local_transaction;
    assign mem_to_local_bus_ready = local_to_reg_bus_ready;

    //assign stage_master_data = post_local_transaction; 
    //assign stage_master_valid = local_to_master_bus_valid; 
    //assign local_to_master_bus_ready = stage_master_ready; 
    

    pipeline_register # ( 

        .DATA_WIDTH             ( PIPELINE_SLAVE_DATA_WIDTH         )

    ) plb_lookup_reg_u (

        .clk_i                  ( clk_i                             ),
        .rst_ni                 ( rst_ni                            ),

        `MAP_DATA_PORT          ( s_data, local_to_reg_bus          ),
        `MAP_DATA_PORT          ( m_data, stage_master              ),
        `SINK_SLAVE_CTRL_PORT   ( s_ctrl                            ),
        `SINK_MASTER_STATUS_PORT( s_status                          )

    ); 


endmodule : plb_lookup_stage

// verilator lint_on UNOPTFLAT
// verilator lint_on PINCONNECTEMPTY