`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:58:17 10/26/2022 
// Design Name: 
// Module Name:    ALU_Input_MUX 
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
module ALU_Input_MUX(
	input [31:0] reg_data,
	input [31:0] instr_data,
	input ALUSource,
	output reg [31:0] alu_input
    );

	always @(*) begin
		if(ALUSource) alu_input <= instr_data;
		else alu_input <= reg_data;
	 end

endmodule
