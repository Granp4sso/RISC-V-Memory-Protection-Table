// Author: Stefano Mercogliano <stefano.mercogliano@unina.it>

// Description:
//  TBD

// TODO: add support for FPGA-based implementations
// TODO: add support for more than 1 input/output ports

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
    // Internal Signals
    logic [DATA_WIDTH - 1 : 0] reg_data_d, reg_data_q;
    logic valid_d, valid_q;
    logic first_valid_d, first_valid_q;
    logic stall, flush, busy;

    ///////////////////
    // Control Logic //
    ///////////////////

    // The pipeline stalls in two occasions:
    //      1 - An external stall is requestd
    //      2 - The next stage is not ready

    // Note: if the pipe is not busy ( meaning no transaction is occupying it )
    // It can receive a new transaction even if the next stage is not ready

    assign stall = s_ctrl_stall || ( busy && ~m_data_ready );

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
        reg_data_d = (~flush) ? s_data_data : '0;
    end

    always_ff @(posedge clk_i) begin
        if (~rst_ni) begin
            reg_data_q <= '0;
        end else begin
            if (~stall && s_data_valid) begin
                // The pipeline is not stalled and
                // the previous stage produced a valid data
                reg_data_q <= reg_data_d;
            end
        end
    end

    // The pipeline is ready to accept a new data if it is not stalled.
    //
    assign s_data_ready = ~stall;

    //////////////////
    // Master Logic //
    //////////////////

    // The Pipeline is producing a valid data every time reg_data is updated,
    // if it is not stalled. No assmuptions are made on the valid signal.
    // Once the ready signal is high and the valid is high as well, the data
    // is fetched by the consumer.

    always_comb begin
        if(~flush && ~s_ctrl_stall) begin
            valid_d = s_data_valid;
        end else begin
            valid_d = '0;
        end
    end

    always_ff @(posedge clk_i) begin
        if (~rst_ni || s_ctrl_flush) begin
            valid_q <= '0;
        end else begin
            if (~stall) begin
                if(m_data_ready) begin
                    // If the consumer is ready, in the next clock cycle
                    // we will either have a valid data or not, depending
                    // on the production of the previous stage pipeline register.
                    valid_q <= valid_d;
                end else begin
                    // Otherwise, we need to mantain the valid until
                    // next stage is ready
                    valid_q <= ( valid_q ) ? 1'b1 : valid_d;
                end
            end
        end
    end

    // The pipeline register is producing no data if a flush
    // has occurred
    assign m_data_data = (~flush) ? reg_data_q : '0;
    assign m_data_valid = (~flush) ? valid_q : '0;

    //////////////////
    // Status Logic //
    //////////////////

    // The pipeline register propagates its status to the functional units and control units.
    // A pipeline stage can be empty in the following scenarios:
    //      1 - A flush occurred
    //      2 - No data has been produced yet
    //      3 - No data has been produced, but the current has been consumed

    logic empty;
    logic 
    always_comb begin
        first_valid_d = s_data_valid;
    end

    always_ff @(posedge clk_i) begin
        if (~rst_ni || s_ctrl_flush) begin
            first_valid_q <= '0;
        end else begin
            if ( ~first_valid_q ) begin
                // First valid is updated only if it's 0
                // If a flush or a reset is received, empty it
                // Otherwise, if a data is consumed, but not produced
                // set it to zero
                first_valid_q <= first_valid_d;
            end
        end
    end

    assign busy = first_valid_q;
    assign s_status_busy = busy;
    
endmodule : pipeline_register