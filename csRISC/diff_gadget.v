`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:19:54 11/09/2022 
// Design Name: 
// Module Name:    diff_gadget 
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
module diff_gadget(
	input c_in,
	input inp,
	input [31:0] myvalue,
	output [31:0] value,
	output c_out
    );

	assign c_out = c_in | inp;
	
	wire and_temp;
	assign and_temp = inp & (~c_in);
	
	assign value = and_temp ? myvalue : 32'b0;

endmodule
