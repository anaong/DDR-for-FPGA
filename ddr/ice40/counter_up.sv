`timescale 1ns / 1ps

module counter_up #(parameter WIDTH_P = 4)(
    input  wire [0:0] clk_i,
    input  wire [0:0] reset_i,
    input  wire [0:0] up_i,
    output wire [WIDTH_P-1:0]count_o
    );

    logic [WIDTH_P-1:0] count_r = '0;
    logic [WIDTH_P-1:0] count_n = '0;
    always_ff @(posedge clk_i) begin
        if(reset_i) begin
            count_r <= '0;
        end else begin
            count_r <= count_n;
        end
    end

    always_comb begin
        case(up_i)
            1'b1 : count_n = count_r + 1;
            default : count_n = count_r + 0;
        endcase
    end

    assign count_o = count_r;

endmodule
