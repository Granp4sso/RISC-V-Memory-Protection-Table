// Author: Stefano Mercogliano <stefano.mercogliano@unina.it>
// Description: TBD

`include "smmpt_defs.sv"

module mtt_top #(
    parameter int unsigned ADDR_LEN = 56
) (
    // Control Port
    input logic  clk_i,
    input logic  rst_ni,
    input logic  flush_i,
    input logic  ptw_enable,
    input [ADDR_LEN-1:0] paddr_i,
    input logic    addr_valid,

    // CSR Port
    input [63:0]   mptt_reg, // Base address or register content

    // Error Port
    output logic   access_page_fault,
    output error_t format_error,

    // Memory Port
    output logic   mem_master_req,
    output logic [ADDR_LEN-1:0] mem_master_addr,
    input  logic   mem_master_valid,

    // Status Port
    output logic   ptw_busy,
    output logic   ptw_valid,
    input riscv::pmp_access_t access_type_i,
    //input riscv::priv_lvl_t priv_lvl_i,

    // Output Port
    output logic [63:0] TLB_entry, // TLB entry (SDID, addr, permissions)
    output logic   allow_o
);

    // State Definitions
    typedef enum logic [2:0] {
        IDLE             = 3'b000,
        VALIDATE_ADDRESS = 3'b001,
        WAIT_FOR_MEM     = 3'b010,
        MPT_LOOKUP       = 3'b011,
        FLUSH            = 3'b100,
        ERROR            = 3'b101,
        COMMIT           = 3'b110
    } state_t;

    typedef enum logic [1:0] {
        MPTL3_LOOKUP = 2'b00,
        MPTL2_LOOKUP = 2'b01,
        MPTL1_LOOKUP = 2'b10,
        ERROR        = 2'b11
    } mpt_lookup_state_t;

    // State Registers
    state_t curr_state, next_state;
    mpt_lookup_state_t curr_lookup_state, next_lookup_state;

    // Internal Signals
    logic [3:0] mode;                 // Mode extracted from mptt_reg
    logic [1:0] permissions;          // Permissions from MPT
    logic [5:0] sdid;                 // Supervisor Domain ID
    logic [ADDR_LEN-1:0] lookup_addr; // Current lookup address
    logic valid_address;              // Address validation signal
    logic [1:0] error_code;           // Error code
 
    // Assign Outputs
    assign ptw_busy = (curr_state != IDLE);
    assign format_error = error_code;
    assign ptw_valid = (curr_state == COMMIT);
    assign allow_o = (curr_state == COMMIT);

    // Extract mode from mptt_reg
    assign mode = (mptt_reg & MTTP64_MODE) >> 60;

    // Next State Logic
    always_comb begin
        // Default values
        next_state = curr_state;
        next_lookup_state = curr_lookup_state;
        mem_master_req = 0;
        mem_master_addr = 0;
        access_page_fault = 0;
        error_code = NO_ERROR;

        case (curr_state)
            IDLE: begin
                if (ptw_enable && addr_valid) begin
                    next_state = VALIDATE_ADDRESS;
                end
            end

            VALIDATE_ADDRESS: begin
                // Validate physical address length based on mode
                unique case (mode)
                    4'b0000: begin
                        // Bare mode: no translation, accept all addresses
                        valid_address = 1;
                    end
                    4'b0001: begin
                        // Mode 1: Address must be <= 46 bits
                        valid_address = (paddr_i < (1 << 46));
                    end
                    4'b0010: begin
                        // Mode 2: Address must be <= 56 bits
                        valid_address = (paddr_i < (1 << 56));
                    end
                    default: begin
                        // Unsupported mode
                        valid_address = 0;
                    end
                endcase

                if (!valid_address) begin
                    next_state = ERROR;
                    error_code = NOT_VALID_ADDR;
                end else begin
                    next_state = WAIT_FOR_MEM;
                    lookup_addr = paddr_i.PPN[3]+mptt_reg.PPN; // Start lookup with input address
                end
            end

            WAIT_FOR_MEM: begin
                mem_master_req=1;
                mem_master_addr = lookup_addr;

                if(mem_grant)begin
                    next_state = MPT_LOOKUP;
                end
                else begin
                    next_state = WAIT_FOR_MEM;
                end
            end
/*
            WAIT_FOR_MEM: begin
            mem_master_req = 1;
            // Wait for memory to provide the requested entry
            if (mem_grant) begin
                // Check the current lookup level and determine the next state
                if (curr_lookup_state == MPTL3_LOOKUP) begin
                    next_lookup_state = MPTL2_LOOKUP;
                end else if (curr_lookup_state == MPTL2_LOOKUP) begin
                    next_lookup_state = MPTL1_LOOKUP;
                end else begin
                    next_lookup_state = ERROR; // Undefined behavior
                end
            end else begin
                // Keep waiting if memory hasn't granted the request
                next_lookup_state = WAIT_FOR_MEM;
            end
        end
*/

            
            MPT_LOOKUP: begin
                // we wait for the valid signal
                if (data_rvalid_q) begin
                    case (curr_lookup_state)
                        MPTL3_LOOKUP: begin
                            //If MODE is SMMTT_46 go to MPTL2_LOOKUP else check if entry is valid or not
                            if (mode == 4'b0001) begin 
                                next_state = WAIT_FOR_MEM;
                                next_lookup_state = MPTL2_LOOKUP;

                            end
                            // Perform L3 lookup
                            else if (!mptl3_entry[43]/* entry not valid */) begin
                                next_state = ERROR;
                                error_code = NOT_VALID_MPTL3E;
                            end else if ( mptl3_entry[62:44]!=0/*reserved_bit used*/ ) begin
                                next_state = ERROR;
                                error_code = RESERVED_BITS_USED;
                            end else begin
                                // Calculate next MPT pointer: MPTL3.PPN + paddr_i.PPN[2]
                                //Compute next MPT pointer
                                // MPTL3.PPN+paddr_i.PPN[2]
                                lookup_addr = mptt_reg[43:0] + paddr_i[45:25];
                                next_state = WAIT_FOR_MEM;
                                next_lookup_state = MPTL2_LOOKUP; // Transition to wait for memory response
                            end
                        end

                        MPTL2_LOOKUP: begin
                            // Perform L2 lookup
                            if(reserved_bit used )begin 
                                next_state = ERROR;
                                error_code = RESERVED_BITS_USED;
                            end else 
                            //Compute next MPT pointer
                            // MPTL2E.PPN+paddr_i.PPN[1]
                            next_lookup_state = MPTL1_LOOKUP;
                        end

                        MPTL1_LOOKUP: begin
                            // Perform L1 lookup
                            if (reserved bit used) begin 
                                next_state = ERROR;
                                error_code = RESERVED_BITS_USED;
                            end
                            permissions=//permissions
                            next_state = COMMIT;
                            TLB_entry = {sdid, lookup_addr, permissions}; // Finalize TLB entry
                            end
                    endcase
                end
            end

            FLUSH: begin
                // Handle flush logic
                next_state = IDLE;
            end

            ERROR: begin
                access_page_fault = 1;
                next_state = IDLE;
            end

            COMMIT: begin
                next_state = IDLE;
            end

            default: next_state = IDLE;

            if (flush_i) begin 
                next_state = FLUSH;
            end

        endcase
    end


// State Transition Logic
    always_ff @(posedge clk_i) begin
        if (!rst_ni) begin
            curr_state <= IDLE;
            curr_lookup_state <= MPTL3_LOOKUP;
        end else begin
            curr_state <= next_state;
            curr_lookup_state <= next_lookup_state;
        end
    end


endmodule