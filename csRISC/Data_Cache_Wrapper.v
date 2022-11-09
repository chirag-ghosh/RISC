`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:16:56 10/26/2022 
// Design Name: 
// Module Name:    Data_Cache_Wrapper 
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
module Data_Cache_Wrapper(
	input clk,
	input enable,
	input write_enable,
	input [31:0] address,
	input [31:0] input_data,
	output [31:0] output_data
    );

	Data_Cache DC (.clka(~clk), .ena(enable), .wea(write_enable), .addra(address[11:0]), .dina(input_data), .douta(output_data));

endmodule
