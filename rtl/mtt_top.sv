// Author: Stefano Mercogliano <stefano.mercogliano@unina.it>
// Description: TBD

module mtt_top #(

) (
    input  logic    clk_i,
    input  logic    rst_ni,
    output logic    toggle_o

);

    logic toggle;

    always_ff @(posedge clk_i) begin
        if (!rst_ni) begin
            toggle <= 0;
        end else begin
            toggle <= ~toggle;
        end
    end

    assign toggle_o = toggle;


endmodule