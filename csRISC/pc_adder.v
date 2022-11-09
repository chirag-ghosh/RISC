`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:35:02 10/28/2022 
// Design Name: 
// Module Name:    pc_adder 
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
module pc_adder(
	input [31:0] pc,
	output [31:0] pc_add
    );

	wire carry_intermediate, c_out;
	cla_16bit_lcu lcu1(.num1(pc[15:0]), .num2(16'd4), .c_in(1'b0), .ans(pc_add[15:0]), .c_out(carry_intermediate), .P(), .G());
	cla_16bit_lcu lcu2(.num1(pc[31:16]), .num2(16'd0), .c_in(carry_intermediate), .ans(pc_add[31:16]), .c_out(c_out), .P(), .G());
endmodule
