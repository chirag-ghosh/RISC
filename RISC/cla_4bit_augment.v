`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:32:23 10/21/2022 
// Design Name: 
// Module Name:    cla_4bit_augment 
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
module cla_4bit_augment(
	 input c_in,
	 input [3:0] num1,
	 input [3:0] num2,
	 output [3:0] ans,
	 output P,
	 output G
    );
	 
	 wire G0, G1, G2, G3, P0, P1, P2, P3, C1, C2, C3, C4;
	 
	 assign G0 = num1[0] & num2[0];
	 assign G1 = num1[1] & num2[1];
	 assign G2 = num1[2] & num2[2];
	 assign G3 = num1[3] & num2[3];
	 
	 assign P0 = num1[0] ^ num2[0];
	 assign P1 = num1[1] ^ num2[1];
	 assign P2 = num1[2] ^ num2[2];
	 assign P3 = num1[3] ^ num2[3];
	 
	 assign C1 = G0 | (P0 & c_in);
	 assign C2 = G1 | (P1 & G0) | (P1 & P0 & c_in);
	 assign C3 = G2 | (P2 & G1) | (P2 & P1 & G0) | (P2 & P1 & P0 & c_in);

	 assign ans[0] = P0 ^ c_in;
	 assign ans[1] = P1 ^ C1;
	 assign ans[2] = P2 ^ C2;
	 assign ans[3] = P3 ^ C3;
	 
	 assign P = P3 & P2 & P1 & P0;
	 assign G = G3 | (P3 & G2) | (P3 & P2 & G1) | (P3 & P2 & P1 & G0);

endmodule
