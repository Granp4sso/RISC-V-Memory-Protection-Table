// Author: Stefano Mercogliano <stefano.mercogliano@unina.it>
// Author: Valerio Di Domenico <didomenico.valerio@virgilio.it>

// Description:
//  The fetch stage fetches a transaction from the outside if it is ready.
//  It performs a check on the transaction format. If it is valid, it forwards it
//  Towards the PLB lookup stage.

/* verilator lint_off IMPORTSTAR */
import mpt_pkg::*;
/* verilator lint_on IMPORTSTAR */

// Import headers
include "pipelining.svh" 

module fetch_stage #(
    parameter unsigned PIPELINE_SLAVE_DATA_WIDTH = 32;
    parameter unsigned PIPELINE_MASTER_DATA_WIDTH = 32;
) (
    // Generic Signals
    input  logic                clk_i,
    input  logic                rst_ni,

    // Fetch Slave Port
    `DEFINE_SLAVE_DATA_PORT(fetch_slave, PIPELINE_SLAVE_DATA_WIDTH),

    // Fetch Master Port
    `DEFINE_MASTER_DATA_PORT(fetch_master, PIPELINE_MASTER_DATA_WIDTH),

    // Control Port (Unused atm)
    `DEFINE_SLAVE_CTRL_PORT(fetch_control),

    // Extra Logics
    output page_format_fault_e  exception_cause_o

); 

    logic stage_active;
    mptw_transaction_t transaction_i, transaction_o;
    mmpt_reg_t mmpt;
    spa_t_u spa;

    ///////////////////////////////////
    // Pipeline Slave Port Unpacking //
    ///////////////////////////////////

    // Here unpacking is required to extract mmpt and spa
    // to perform format checking. The actual content of the
    // transaction is not changed.

    assign transaction_i = fetch_slave_rdata;

    // The stage is active if the slave port is forwarding
    // valid data. This is important especially in the case
    // of exception generation
    assign stage_active = fetch_slave_valid;

    ////////////
    // Logics //
    ////////////

    assign mmpt = transaction.mmpt;
    assign spa = transaction.spa;

    // Checking Supervisor Phyisical Address format
    always_comb begin

        exception_cause_o = NO_ERROR;

        // If the stage is active (i.e. working on valid data)
        // evaluate the transaction format
        if(stage_active) begin
            case (mmpt.MODE) 
                
                // A transaction at this stage should not be BARE_MODE
                BARE_MODE: begin
                    exception_cause_o = NOT_VALID_ADDR;
                end

                // Check if spa_q width is within the allowed range
                SMMPT43_MODE: begin
                    if (spa.spa43.ZERO != 0) begin
                        exception_cause_o = NOT_VALID_ADDR;
                    end
                end

                SMMPT52_MODE: begin
                    if (spa.spa52.ZERO != 0) begin
                        exception_cause_o = NOT_VALID_ADDR;
                    end
                end

                // Here all bits are used
                SMMPT64_MODE: begin
                        exception_cause_o = NO_ERROR;
                end
                                
                // Generate error if reserved MODE bits are used 
                default: begin
                    exception_cause_o = NOT_VALID_ADDR;
                end

            endcase
        end
    end

    // All other signals can be forwarded without any issues
    // As they are getting pipelined for the next stage

    //////////////////////////////////
    // Pipeline Master Port Packing //
    //////////////////////////////////

    `ASSIGN_DATA_BUS(fetch_master, slave_master)
    
endmodule : fetch_stage