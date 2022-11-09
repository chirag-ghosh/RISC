`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:30:38 10/21/2022 
// Design Name: 
// Module Name:    cla_16bit_lcu 
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
module cla_16bit_lcu(
	 input [15:0] num1,
	 input [15:0] num2,
	 input c_in,
	 output [15:0] ans,
	 output c_out,
	 output P,
	 output G
    );
	 
	 wire P0, P1, P2, P3;
	 wire G0, G1, G2, G3;
	 wire C1, C2, C3, C4;
	 
	 cla_4bit_augment cla1 (.c_in(c_in), .num1(num1[3:0]), .num2(num2[3:0]), .ans(ans[3:0]), .P(P0), .G(G0));
	 cla_4bit_augment cla2 (.c_in(C1), .num1(num1[7:4]), .num2(num2[7:4]), .ans(ans[7:4]), .P(P1), .G(G1));
	 cla_4bit_augment cla3 (.c_in(C2), .num1(num1[11:8]), .num2(num2[11:8]), .ans(ans[11:8]), .P(P2), .G(G2));
	 cla_4bit_augment cla4 (.c_in(C3), .num1(num1[15:12]), .num2(num2[15:12]), .ans(ans[15:12]), .P(P3), .G(G3));
	 
	 lookahead_carry_unit lcu (.c_in(c_in), .P0(P0), .P1(P1), .P2(P2), .P3(P3), .G0(G0), .G1(G1), .G2(G2), .G3(G3), .C1(C1), .C2(C2), .C3(C3), .C4(C4), .P(P), .G(G));
	 
	 assign c_out = C4;

endmodule
