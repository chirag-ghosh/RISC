`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:02:47 10/21/2022 
// Design Name: 
// Module Name:    ALU 
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
module ALU(
	input [31:0] inp1,
	input [31:0] inp2,
	input [4:0] shamt,
	input [3:0] ALUControl,
	output reg [31:0] out,
	output carry_out,
	output reg isNeg,
	output reg isZero
    );
	 
	wire [31:0] sum, comp, AND, XOR, sll, srl, sra, diff_value;
	
	//add
	wire P1, G1, P2, G2, carry_intermediate;
	cla_16bit_lcu lcu1(.num1(inp1[15:0]), .num2(inp2[15:0]), .c_in(0), .ans(sum[15:0]), .c_out(carry_intermediate), .P(P1), .G(G1));
	cla_16bit_lcu lcu2(.num1(inp1[31:16]), .num2(inp2[31:16]), .c_in(carry_intermediate), .ans(sum[31:16]), .c_out(carry_out), .P(P2), .G(G2));
	
	assign comp = ~inp2 + 1'b1;
	
	assign AND = inp1 & inp2;
	
	assign XOR = inp1 ^ inp2;
	
	wire shift_amt = ALUControl[3] ? shamt : inp2;
	
	assign sll = inp1 << shift_amt;
	assign srl = inp1 >> shift_amt;
	assign sra = inp1 >>> shift_amt;
	
	diff df(.inp1(inp1), .inp2(inp2), .out(diff_value));
	
	always @(*) begin
		isZero <= inp1 == 0 ? 1'b1 : 1'b0;
		isNeg <= inp1[31] == 1'b1 ? 1'b1 : 1'b0;
		case (ALUControl[2:0])
			3'b000: begin
				out <= sum;
				end
			3'b001: begin
				out <= comp;
				end
			3'b010: begin
				out <= AND;
				end
			3'b011: begin
				out <= XOR;
				end
			3'b100: begin
				out <= sll;
				end
			3'b101: begin
				out <= srl;
				end
			3'b110: begin
				out <= sra;
				end
			3'b111: begin
				out <= diff_value;
				end
		endcase
	end
	

endmodule
