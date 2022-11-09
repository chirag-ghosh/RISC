`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:54:52 10/26/2022 
// Design Name: 
// Module Name:    Write_Reg_MUX 
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
module Write_Reg_MUX(
	input [4:0] rs,
	input [4:0] rt,
	input [1:0] RegDst,
	output reg [4:0] reg_write
    );

	always @(*) begin
		case(RegDst)
			2'b00: begin
				reg_write <= rs;
			end
			2'b01: begin
				reg_write <= 5'd31;
			end
			2'b10: begin
				reg_write <= rt;
			end
			default: reg_write <= rs;
		endcase
	 end

endmodule
