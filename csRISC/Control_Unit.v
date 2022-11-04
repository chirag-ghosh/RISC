`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:43:00 10/26/2022 
// Design Name: 
// Module Name:    Control_Unit 
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
module Control_Unit(
	input [5:0] OPcode,
	output reg [1:0] reg_dst,
	output reg reg_write,
	output reg [2:0] ALUop, 	
	output reg memory_read,
	output reg memory_write,
	output reg [1:0] branchOP,
	output reg ALUsource,
	output reg [1:0] PC_mem_reg
    );
	 
	always @(*) begin
		case (OPcode)
			6'b000000: begin
				reg_dst <= 2'b00;
				reg_write <= 1'b1;
				ALUop	<= 3'b001;
				memory_read <= 1'b0;
				memory_write <= 1'b0;
				branchOP <= 2'b00;
				ALUsource <= 1'b0;
				PC_mem_reg <= 2'b00;
			end
			6'b000001: begin
				reg_dst <= 2'b00;
				reg_write <= 1'b1;
				ALUop	<= 3'b011;
				memory_read <= 1'b0;
				memory_write <= 1'b0;
				branchOP <= 2'b00;
				ALUsource <= 1'b0;
				PC_mem_reg <= 2'b00;
			end
			6'b000010: begin
				reg_dst <= 2'b00;
				reg_write <= 1'b1;
				ALUop	<= 3'b101;
				memory_read <= 1'b0;
				memory_write <= 1'b0;
				branchOP <= 2'b00;
				ALUsource <= 1'b0;
				PC_mem_reg <= 2'b00;
			end
			6'b000011: begin
				reg_dst <= 2'b00;
				reg_write <= 1'b1;
				ALUop	<= 3'b110;
				memory_read <= 1'b0;
				memory_write <= 1'b0;
				branchOP <= 2'b00;
				ALUsource <= 1'b0;
				PC_mem_reg <= 2'b00;
			end
			6'b000100: begin
				reg_dst <= 2'b00;
				reg_write <= 1'b0;
				ALUop	<= 3'b000;
				memory_read <= 1'b0;
				memory_write <= 1'b0;
				branchOP <= 2'b01;
				ALUsource <= 1'b0;
				PC_mem_reg <= 2'b00;
			end
			6'b000101: begin
				reg_dst <= 2'b00;
				reg_write <= 1'b0;
				ALUop	<= 3'b000;
				memory_read <= 1'b0;
				memory_write <= 1'b0;
				branchOP <= 2'b10;
				ALUsource <= 1'b0;
				PC_mem_reg <= 2'b00;
			end
			6'b000110: begin
				reg_dst <= 2'b01;
				reg_write <= 1'b1;
				ALUop	<= 3'b000;
				memory_read <= 1'b0;
				memory_write <= 1'b0;
				branchOP <= 2'b11;
				ALUsource <= 1'b0;
				PC_mem_reg <= 2'b10;
			end
			6'b111100: begin
				reg_dst <= 2'b00;
				reg_write <= 1'b1;
				ALUop	<= 3'b010;
				memory_read <= 1'b0;
				memory_write <= 1'b0;
				branchOP <= 2'b00;
				ALUsource <= 1'b1;
				PC_mem_reg <= 2'b00;
			end
			6'b111101: begin
				reg_dst <= 2'b00;
				reg_write <= 1'b1;
				ALUop	<= 3'b100;
				memory_read <= 1'b0;
				memory_write <= 1'b0;
				branchOP <= 2'b00;
				ALUsource <= 1'b1;
				PC_mem_reg <= 2'b00;
			end
			6'b111110: begin
				reg_dst <= 2'b10;
				reg_write <= 1'b1;
				ALUop	<= 3'b010;
				memory_read <= 1'b1;
				memory_write <= 1'b0;
				branchOP <= 2'b00;
				ALUsource <= 1'b1;
				PC_mem_reg <= 2'b01;
			end
			6'b111111: begin
				reg_dst <= 2'b00;
				reg_write <= 1'b0;
				ALUop	<= 3'b010;
				memory_read <= 1'b0;
				memory_write <= 1'b1;
				branchOP <= 2'b00;
				ALUsource <= 1'b1;
				PC_mem_reg <= 2'b00;
			end
			default: begin
				reg_dst <= 2'b00;
				reg_write <= 1'b0;
				ALUop	<= 3'b000;
				memory_read <= 1'b0;
				memory_write <= 1'b0;
				branchOP <= 2'b00;
				ALUsource <= 1'b0;
				PC_mem_reg <= 2'b00;
			end
		endcase
	end

endmodule
