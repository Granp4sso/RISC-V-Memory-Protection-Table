// Author: Stefano Mercogliano <stefano.mercogliano@unina.it>

// Description:
//  TBD

/* verilator lint_off IMPORTSTAR */
import mpt_pkg::*;
/* verilator lint_on IMPORTSTAR */

// Import headers
`include "pipelining.svh"
`include "uninasoc_mem.svh"

// verilator lint_off UNOPTFLAT
// verilator lint_off PINCONNECTEMPTY
// verilator lint_off UNDRIVEN
module walking_stage #(
    parameter unsigned  PIPELINE_SLAVE_DATA_WIDTH       = 32,
    parameter unsigned  PIPELINE_MASTER_DATA_WIDTH      = 32,
    parameter unsigned  TRANSACTION_FIFO_DEPTH          = 4,
    parameter unsigned  MEMORY_TRANSACTION_DATA_WIDTH   = 64,                       
    parameter unsigned  MEMORY_TRANSACTION_ADDR_WIDTH   = 64
) (
    // Generic Signals
    input  logic                clk_i,
    input  logic                rst_ni,

    // Walking Slave Port
    `DEFINE_SLAVE_DATA_PORT(stage_slave, PIPELINE_SLAVE_DATA_WIDTH),

    // Walking Master Port
    `DEFINE_MASTER_DATA_PORT(stage_master, PIPELINE_MASTER_DATA_WIDTH),

    // Walking memory interface
    `DEFINE_MEM_MASTER_PORTS(memory_master, MEMORY_TRANSACTION_DATA_WIDTH, MEMORY_TRANSACTION_ADDR_WIDTH)

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

    `DECLARE_DATA_BUS( walking_to_pipe, PIPELINE_SLAVE_DATA_WIDTH );
    `DECLARE_DATA_BUS( pipe_to_output , PIPELINE_SLAVE_DATA_WIDTH );

    ///////////////////////
    // Bus Concatenation //
    ///////////////////////

    //////////////////////////////////////////////////////
    //    _   _                    _   _                //
    //   | | | |_ _  _ __  __ _ __| |_(_)_ _  __ _      //
    //   | |_| | ' \| '_ \/ _` / _| / / | ' \/ _` |     //
    //    \___/|_||_| .__/\__,_\__|_\_\_|_||_\__, |     //
    //              |_|                      |___/      //
    //////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////
    //    __  __                          ___ _                     //
    //   |  \/  |___ _ __  ___ _ _ _  _  / __| |_ __ _ __ _ ___     //
    //   | |\/| / -_) '  \/ _ \ '_| || | \__ \  _/ _` / _` / -_)    //
    //   |_|  |_\___|_|_|_\___/_|  \_, | |___/\__\__,_\__, \___|    //
    //                             |__/               |___/         //
    //////////////////////////////////////////////////////////////////

    // The Walking Stage supports a memory read stage.

    memory_read_stage #(
        .PIPELINE_SLAVE_DATA_WIDTH   ( PIPELINE_SLAVE_DATA_WIDTH    ),
        .PIPELINE_MASTER_DATA_WIDTH  ( PIPELINE_MASTER_DATA_WIDTH   ),
        .TRANSACTION_FIFO_DEPTH      ( TRANSACTION_FIFO_DEPTH       ),
        .MEMORY_DATA_WIDTH           ( MEMORY_TRANSACTION_DATA_WIDTH   ),                      
        .MEMORY_ADDR_WIDTH           ( MEMORY_TRANSACTION_ADDR_WIDTH   )
    ) mem_stage_u (
        .clk_i                  ( clk_i                                     ),
        .rst_ni                 ( rst_ni                                    ),

        // Pipeline Ports
        `MAP_DATA_PORT          ( stage_slave  , stage_slave    ),
        `MAP_DATA_PORT          ( stage_master , walking_to_pipe   ),

        // PLB Cache Port
        .memory_master_mem_req      ( memory_master_mem_req     ),
        .memory_master_mem_gnt      ( memory_master_mem_gnt     ),
        .memory_master_mem_valid    ( memory_master_mem_valid   ),
        .memory_master_mem_addr     ( memory_master_mem_addr    ),
        .memory_master_mem_rdata    ( memory_master_mem_rdata   ),
        .memory_master_mem_wdata    ( memory_master_mem_wdata   ),
        .memory_master_mem_we       ( memory_master_mem_we      ),
        .memory_master_mem_be       ( memory_master_mem_be      ),
        .memory_master_mem_error    ( memory_master_mem_error   )    
    );

    pipeline_register # ( 
        .DATA_WIDTH             ( PIPELINE_SLAVE_DATA_WIDTH         )
    ) walking_reg (
        .clk_i                  ( clk_i                             ),
        .rst_ni                 ( rst_ni                            ),
        `MAP_DATA_PORT          ( s_data, walking_to_pipe               ),
        `MAP_DATA_PORT          ( m_data, stage_master              ),
        `SINK_SLAVE_CTRL_PORT   ( s_ctrl                            ),
        `SINK_MASTER_STATUS_PORT( s_status  )
    );


    //////////////////////////////////////////////////////////////////////////////////////
    //    __  __ ___ _____ ___   ___             _             ___ _                    //
    //   |  \/  | _ \_   _| __| | _ \__ _ _ _ __(_)_ _  __ _  / __| |_ __ _ __ _ ___    //
    //   | |\/| |  _/ | | | _|  |  _/ _` | '_(_-< | ' \/ _` | \__ \  _/ _` / _` / -_)   //
    //   |_|  |_|_|   |_| |___| |_| \__,_|_| /__/_|_||_\__, | |___/\__\__,_\__, \___|   //  
    //                                                 |___/               |___/        //
    //////////////////////////////////////////////////////////////////////////////////////

    // Parsing Stage Here

    // Reg

    /*pipeline_register # ( 
        .DATA_WIDTH             ( PIPELINE_SLAVE_DATA_WIDTH         )
    ) walking_reg (
        .clk_i                  ( clk_i                             ),
        .rst_ni                 ( rst_ni                            ),
        `MAP_DATA_PORT          ( s_data, stage_slave               ),
        `MAP_DATA_PORT          ( m_data, stage_master              ),
        `SINK_SLAVE_CTRL_PORT   ( s_ctrl                            ),
        `SINK_MASTER_STATUS_PORT( s_status  )
    );*/

    //////////////////////////////////////////////////
    //    ___                   _   _               //
    //   | _ \___ _ __  __ _ __| |_(_)_ _  __ _     //
    //   |   / -_) '_ \/ _` / _| / / | ' \/ _` |    //
    //   |_|_\___| .__/\__,_\__|_\_\_|_||_\__, |    //
    //           |_|                      |___/     //
    //////////////////////////////////////////////////

    
endmodule : walking_stage

// verilator lint_on UNOPTFLAT
// verilator lint_on PINCONNECTEMPTY
// verilator lint_on UNDRIVEN