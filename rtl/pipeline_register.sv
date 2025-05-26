// Author: Stefano Mercogliano <stefano.mercogliano@unina.it>

// Description:
//  TBD

// TODO: add support for FPGA-based implementations
// TODO: add support for more than 1 input/output ports

// Import headers
`include "include/pipelining.svh" 

module pipeline_register #(
    parameter unsigned DATA_WIDTH = 32
) (
    // Generic Signals
    input  logic                clk_i,
    input  logic                rst_ni,

    // Master Port
    `DEFINE_SLAVE_DATA_PORT(s_data, DATA_WIDTH)
    `DEFINE_MASTER_DATA_PORT(m_data, DATA_WIDTH)

    // Slave Port       
    `DEFINE_SLAVE_CTRL_PORT(s_ctrl)

); 
    // Internal Signals
    logic [DATA_WIDTH - 1 : 0] reg_data_d, reg_data_q;
    logic ready_d, ready_q;
    logic valid_d, valid_q;

    logic stall, flush;

    ///////////////////
    // Control Logic //
    ///////////////////

    // The pipeline stalls in two occasions:
    //      1 - An external stall is requestd
    //      2 - The next stage is not ready

    assign stall = s_ctrl_stall || ~m_data_ready;

    // The pipeline is flushed when the signal is asserted from the outside
    // NOTE:
    //      A flush signal has a similar effect to that of a reset.
    //      A flush is implemented as a write '0 to the register,
    //      And output 0 on the master side instantly
    //      It does not automatically stall the pipe

    assign flush = s_ctrl_flush;

    /////////////////
    // Slave Logic //
    /////////////////

    // The slave logic is used to update the internal register value
    // Data is produced by the previous pipeline stage

    always_comb begin
        reg_data_d = (~flushed) ? s_data_rdata : '0;
    end

    always_ff @(posedge clk_i) begin
        if (~rst_ni) begin
            reg_data_q <= '0;
        end else begin
            if (~stalled && s_data_valid) begin
                // The pipeline is not stalled and
                // the previous stage produced a valid data
                reg_data_q <= reg_data_d;
            end
        end
    end

    // The pipeline is ready to accept a new data if it is not stalled
    assign s_data_ready = ~stalled;

    //////////////////
    // Master Logic //
    //////////////////

    // The Pipeline is producing a valid value every clock cycle
    // if it is not stalled

    always_comb begin
        valid_d = (~flushed) ? ~stalled : '0;
    end

    always_ff @(posedge clk_i) begin
        if (~rst_ni || s_ctrl_flush) begin
            valid_q <= '0;
        end else begin
            if (~stalled && m_data_ready) begin
                // The consumer is ready to accept a new data
                valid_q <= valid_d;
            end
        end
    end

    // The pipeline register is producing no data if a flush
    // has occurred
    assign m_data_rdata = (~flushed) ? reg_data_q : '0;
    assign m_data_valid = (~flushed) ? valid_q : '0;
    
endmodule : pipeline_register