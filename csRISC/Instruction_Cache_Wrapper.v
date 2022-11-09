`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:43:12 10/26/2022 
// Design Name: 
// Module Name:    Instruction_Cache_Wrapper 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments:
//
//////////////////////////////////////////////////////////////////////////////////
module Instruction_Cache_Wrapper(
	input clk,
	input [31:0] address,
	output [31:0] output_data
    );

	Instruction_Cache IC(.clka(clk), .addra(address), .douta(output_data));

endmodule
