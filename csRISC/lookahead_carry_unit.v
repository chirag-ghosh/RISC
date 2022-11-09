`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:30:00 10/21/2022 
// Design Name: 
// Module Name:    lookahead_carry_unit 
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
module lookahead_carry_unit(
	 input c_in, P0, P1, P2, P3, G0, G1, G2, G3,
	 output C1, C2, C3, C4, P, G
    );
	 
	 assign C1 = G0 | (P0 & c_in);
	 assign C2 = G1 | (P1 & G0) | (P1 & P0 & c_in);
	 assign C3 = G2 | (P2 & G1) | (P2 & P1 & G0) | (P2 & P1 & P0 & c_in);
	 assign C4 = G3 | (P3 & G2) | (P3 & P2 & G1) | (P3 & P2 & P1 & G0) | (P3 & P2 & P1 & P0 & c_in);
	 
	 assign P = P0 & P1 & P2 & P3;
	 assign G = G3 | (P3 & G2) | (P3 & P2 & G1) | (P3 & P2 & P1 & G0);


endmodule
