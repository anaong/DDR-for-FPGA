`default_nettype none
`timescale 1ns / 1ps

module ram_1r1w_sync #(parameter [31:0] width_p = 8
                      ,parameter [31:0] depth_p = 128
                      ,parameter  filename_p = "chart.hex") (
    input [$clog2(depth_p) - 1 : 0] rd_addr_i,
    output [width_p-1:0] rd_data_o
  );

  wire [width_p-1:0] mem_l [depth_p-1:0];
  assign rd_data_o = mem_l[rd_addr_i];
  
  initial begin
    $readmemh(filename_p, mem_l);
  end

endmodule
