`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:41:28 10/26/2022 
// Design Name: 
// Module Name:    Branching_MUX 
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
module Branching_MUX(
	input [1:0] branch_control_out,
	input [31:0] pc_add,
	input [31:0] instr_addr,
	input [31:0] reg_addr,
	output reg [31:0] next_addr
    );
	 
	wire [31:0] actual_instr_addr, actual_reg_addr;
	assign actual_instr_addr = instr_addr << 2;
	assign actual_reg_addr = reg_addr << 2;
	 
	 always @(*) begin
		case(branch_control_out)
			2'b00: begin
				next_addr <= pc_add;
			end
			2'b01: begin
				next_addr <= actual_instr_addr;
			end
			2'b10: begin
				next_addr <= actual_reg_addr;
			end
			default: next_addr <= pc_add;
		endcase
	 end


endmodule
