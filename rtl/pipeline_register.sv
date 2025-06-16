// Author: Stefano Mercogliano <stefano.mercogliano@unina.it>

// Description:
//  TBD

// TODO: add support for FPGA-based implementations
// TODO: add support for more than 1 input/output ports
// Stall logic shall be redefined

// Import headers
`include "pipelining.svh" 

module pipeline_register #(
    parameter unsigned DATA_WIDTH = 32
) (
    // Generic Signals
    input  logic                clk_i,
    input  logic                rst_ni,

    // Data Ports
    `DEFINE_SLAVE_DATA_PORT(s_data, DATA_WIDTH),
    `DEFINE_MASTER_DATA_PORT(m_data, DATA_WIDTH),

    // Control Ports    
    `DEFINE_SLAVE_CTRL_PORT(s_ctrl),

    // Status Ports
    `DEFINE_MASTER_STATUS_PORT(s_status)

);

    typedef enum logic { 
        EMPTY,
        FULL
    } pipe_status_e;

    pipe_status_e current_state, next_state; 
    logic [DATA_WIDTH - 1 : 0] reg_data_q, reg_data_d;
    always_comb begin

        reg_data_d = reg_data_q;
        
        case (current_state)
            EMPTY: begin
                // No data is produced and no consumer request is happening.
                // This can happen at reset time, a flush or pipeline bubbles
                // We can ask for a new production
                m_data_valid = 1'b0;
                s_data_ready = 1'b1;
                reg_data_d = '0;
                if( s_data_valid ) begin
                    // A new valid data is available
                    // But we currently have no available product
                    // We cannot yet expose a consumer ready
                    next_state = FULL;
                    reg_data_d = s_data_data;
                end else begin
                    next_state = EMPTY;
                end
            end

            FULL: begin
                // A product is now available and must be consumed
                m_data_valid = 1'b1;
                s_data_ready = 1'b1;
                if( s_data_valid && m_data_ready ) begin
                    // A consumer is requesting a data
                    // And at the same time a new data can be produced
                    reg_data_d = s_data_data;
                    next_state = FULL;
                end else if ( ~s_data_valid && m_data_ready ) begin
                    // A consumer is requesting a data
                    // But no valid data is available from the producer side
                    next_state = EMPTY;
                end else begin
                    // In all other cases
                    s_data_ready = '0;
                    next_state = FULL;
                end
            end
        endcase
    end

    always_ff @(posedge clk_i) begin
        if ( ~rst_ni || s_ctrl_flush ) begin
            current_state <= '0;
            reg_data_q <= '0;
        end else begin
            if ( ~s_ctrl_stall ) begin
                current_state <= next_state;
                reg_data_q <= reg_data_d;
            end
        end
    end

    assign m_data_data = reg_data_q;
    assign s_status_busy = current_state;

    
    
endmodule : pipeline_register