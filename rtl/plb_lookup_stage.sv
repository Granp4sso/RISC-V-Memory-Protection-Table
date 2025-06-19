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
// verilator lint_off UNDRIVEN

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
    `DEFINE_SLAVE_DATA_PORT     ( stage_slave   , PIPELINE_SLAVE_DATA_WIDTH     ),

    // PLB Lookup Master Port
    `DEFINE_MASTER_DATA_PORT    ( stage_master  , PIPELINE_MASTER_DATA_WIDTH    ),

    // PLB Lookup Control Port (Unused atm)
    `DEFINE_SLAVE_CTRL_PORT     ( stage_ctrl    , $bits(mptw_flush_ctrl_e)      ),
    `DEFINE_MASTER_STATUS_PORT  ( stage_status  , $bits(mptw_flush_status_e)    ),

    // Cache memory interface
    `DEFINE_MEM_MASTER_PORTS    ( plb_master    , PLB_TRANSACTION_DATA_WIDTH    , PLB_TRANSACTION_ADDR_WIDTH    )

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

    mptw_transaction_t  input_transaction;
    mptw_transaction_t  intermedate_transaction;
    mptw_transaction_t  output_transaction;
    plb_lookup_req_t    plb_tag_req;
    logic               plb_hit;

    logic               flush_completed;

    /////////////////////
    // Bus Declaration //
    /////////////////////

    `DECLARE_DATA_BUS   ( input_to_mem_bus      , PIPELINE_SLAVE_DATA_WIDTH     );
    `DECLARE_DATA_BUS   ( mem_to_local_bus      , PIPELINE_SLAVE_DATA_WIDTH     );
    `DECLARE_DATA_BUS   ( local_to_reg_bus      , PIPELINE_SLAVE_DATA_WIDTH     );

    `DECLARE_STATUS_BUS ( plb_lookup_mem_status , $bits(mptw_flush_status_e)    );
    `DECLARE_STATUS_BUS ( plb_lookup_reg_status , $bits(mptw_flush_status_e)    );

    //////////////////////////////////////////////////////
    //    _   _                    _   _                //
    //   | | | |_ _  _ __  __ _ __| |_(_)_ _  __ _      //
    //   | |_| | ' \| '_ \/ _` / _| / / | ' \/ _` |     //
    //    \___/|_||_| .__/\__,_\__|_\_\_|_||_\__, |     //
    //              |_|                      |___/      //
    //////////////////////////////////////////////////////

    assign input_transaction = stage_slave_data;
    assign input_to_mem_bus_valid = stage_slave_valid;
    assign stage_slave_ready = input_to_mem_bus_ready;

    //////////////////////////////////////////////////////
    //    __  __             ___ _                      //
    //   |  \/  |___ _ __   / __| |_ __ _ __ _ ___      //
    //   | |\/| / -_) '  \  \__ \  _/ _` / _` / -_)     //
    //   |_|  |_\___|_|_|_| |___/\__\__,_\__, \___|     //
    //                                   |___/          //
    //////////////////////////////////////////////////////

    // The PLB stage reuses the memory read stage.
    // The main difference is that the mem stage assumes
    // That the read address is transaction.mpte_ptr, and the
    // answer will be saved into the mpte field.
    // We build the PLB read address as the SDID + SPA (for now we only use SPA)
    assign input_transaction.mpte_ptr = input_transaction.spa;
    assign input_to_mem_bus_data = input_transaction;

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
        `MAP_DATA_PORT          ( stage_slave  , input_to_mem_bus           ),
        `MAP_DATA_PORT          ( stage_master , mem_to_local_bus           ),
        `MAP_CTRL_PORT          ( stage_ctrl   , stage_ctrl                 ),
        `MAP_STATUS_PORT        ( stage_status , plb_lookup_mem_status      ),

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

    // The answer from the memory can either be 0x1 (hit) or 0x0 (miss)
    assign intermedate_transaction = mem_to_local_bus_data;
    assign plb_hit = |intermedate_transaction.mpte;

    // The slave_to_mem is going to output a valid transaction
    // Currently, we assume the PLB to use the SRAM protocol, and packs the
    // HIT or MISS into the data field for a transaction

    // Unchanged signals
    assign output_transaction               = intermedate_transaction;     

    // A transaction is completed if we had a hit
    assign output_transaction.completed     = plb_hit;
    assign output_transaction.plb_hit       = plb_hit ;
    assign output_transaction.mpte          = '0; // Zero-out MPTE as this is not real walking
    assign output_transaction.mpte_ptr      = '0; // Zero-out MPTE ptr as this is not real walking

    // If no error occurred, and a hit does not occur, then walk
    assign output_transaction.walking       =   ( 
                                                    ( intermedate_transaction.format_error != NO_ERROR ) ||
                                                    ( ( intermedate_transaction.valid ) && ( plb_hit ) )
                                                ) 
                                                    ? MPT_WALKING_SKIP : intermedate_transaction.walking ;

    //////////////////////////////////////////////////
    //    ___                   _   _               //
    //   | _ \___ _ __  __ _ __| |_(_)_ _  __ _     //
    //   |   / -_) '_ \/ _` / _| / / | ' \/ _` |    //
    //   |_|_\___| .__/\__,_\__|_\_\_|_||_\__, |    //
    //           |_|                      |___/     //
    //////////////////////////////////////////////////

    assign local_to_reg_bus_valid = mem_to_local_bus_valid;
    assign local_to_reg_bus_data = output_transaction;
    assign mem_to_local_bus_ready = local_to_reg_bus_ready;

    pipeline_register # ( 

        .DATA_WIDTH             ( PIPELINE_SLAVE_DATA_WIDTH             )

    ) plb_lookup_reg_u (

        .clk_i                  ( clk_i                                 ),
        .rst_ni                 ( rst_ni                                ),

        `MAP_DATA_PORT          ( s_data    , local_to_reg_bus          ),
        `MAP_DATA_PORT          ( m_data    , stage_master              ),
        `MAP_CTRL_PORT          ( s_ctrl    , stage_ctrl                ),
        `MAP_STATUS_PORT        ( m_status  , plb_lookup_reg_status     )

    ); 

    //////////////////////////////////////////////////////
    //    ___ _         _      _              _         //
    //   | __| |_  _ __| |_   | |   ___  __ _(_)__      //
    //   | _|| | || (_-< ' \  | |__/ _ \/ _` | / _|     //
    //   |_| |_|\_,_/__/_||_| |____\___/\__, |_\__|     //
    //                                  |___/           //
    //////////////////////////////////////////////////////
    
    // Here we do handle the combination of flushed states of register and mem stage
    always_comb begin: flush_handler_process
        if ( ( plb_lookup_reg_status_flushed == MPT_FLUSHED_COMPLETED ) && ( plb_lookup_mem_status_flushed == MPT_FLUSHED_COMPLETED ) ) begin
            stage_status_flushed = MPT_FLUSHED_COMPLETED;
        end else if ( ( plb_lookup_reg_status_flushed != MPT_FLUSHED_NONE ) || ( plb_lookup_mem_status_flushed != MPT_FLUSHED_NONE ) ) begin
            stage_status_flushed = MPT_FLUSHED_ONGOING;
        end else begin
            stage_status_flushed = MPT_FLUSHED_NONE;
        end
    end


endmodule : plb_lookup_stage

// verilator lint_on UNOPTFLAT
// verilator lint_on PINCONNECTEMPTY
// verilator lint_on UNDRIVEN

