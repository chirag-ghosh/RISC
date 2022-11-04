`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:10:07 10/26/2022 
// Design Name: 
// Module Name:    Write_Reg_Data_MUX 
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
module Write_Reg_Data_MUX(
	input [31:0] alu_data,
	input [31:0] mem_data,
	input [31:0] pc_data,
	input [1:0] PCMemReg,
	output reg [31:0] write_reg_data
    );

	always @(*) begin
		case(PCMemReg)
			2'b00: begin
				write_reg_data <= alu_data;
			end
			2'b01: begin
				write_reg_data <= mem_data;
			end
			2'b10: begin
				write_reg_data <= pc_data;
			end
			default: write_reg_data <= alu_data;
		endcase
	 end

endmodule
