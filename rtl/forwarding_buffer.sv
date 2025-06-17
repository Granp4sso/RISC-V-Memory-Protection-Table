// Author: Stefano Mercogliano <stefano.mercogliano@unina.it>
// Author: Valerio Di Domenico <didomenico.valerio@virgilio.it>

// Description:
//  The forwarding buffer is used inside the Walking Stage as a
//  Phyisical Page Number Cache. Consecutive transactions are usually
//  Correlated by the locality principle; if the first fails, all the following
//  are likely to fail as well. However, given the pipelined nature of this component,
//  The MPT access for an older transaction may be useful for a younger one, hence
//  reducing both memory pressure and access latencies.

// TODO: Handle exception/flush/stall logic

// verilator lint_off IMPORTSTAR
// verilator lint_off PINCONNECTEMPTY
// verilator lint_off UNDRIVEN

import mpt_pkg::*;

// Import headers
`include "pipelining.svh" 

module forwarding_buffer #(
    parameter unsigned  TRANSACTION_DATA_WIDTH    = 32,
    parameter unsigned  FORWARDING_BUFFER_DEPTH   = 32
) (
    // Generic Signals
    input  logic                clk_i,
    input  logic                rst_ni,

    // Slave Port from the MPTE_parsiing
    `DEFINE_SLAVE_DATA_PORT ( mpte_slave_stage     , TRANSACTION_DATA_WIDTH ),

    // Slave Port to the Memory Stage update
    `DEFINE_SLAVE_DATA_PORT ( mem_slave_stage      , TRANSACTION_DATA_WIDTH ),

    // Master Port to the Memory Stage
    `DEFINE_MASTER_DATA_PORT( mem_master_stage     , TRANSACTION_DATA_WIDTH )
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


    /////////////////////
    // Bus Declaration //
    /////////////////////

    //////////////////////////////////////////////////////
    //    _   _                    _   _                //
    //   | | | |_ _  _ __  __ _ __| |_(_)_ _  __ _      //
    //   | |_| | ' \| '_ \/ _` / _| / / | ' \/ _` |     //
    //    \___/|_||_| .__/\__,_\__|_\_\_|_||_\__, |     //
    //              |_|                      |___/      //
    //////////////////////////////////////////////////////



    //////////////////////////////////////////////////
    //    ___                   _   _               //
    //   | _ \___ _ __  __ _ __| |_(_)_ _  __ _     //
    //   |   / -_) '_ \/ _` / _| / / | ' \/ _` |    //
    //   |_|_\___| .__/\__,_\__|_\_\_|_||_\__, |    //
    //           |_|                      |___/     //
    //////////////////////////////////////////////////

    `ASSIGN_DATA_BUS( mem_master_stage, mpte_slave_stage );

    
endmodule : forwarding_buffer

// verilator lint_on IMPORTSTAR
// verilator lint_on PINCONNECTEMPTY
// verilator lint_on UNDRIVEN