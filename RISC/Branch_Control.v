`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:13:29 10/26/2022 
// Design Name: 
// Module Name:    Branch_Control 
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
module Branch_Control(
	input [1:0] branchOP,
	input [4:0] func,
	input zero_bit,
	input carry_out,
	input sign_bit,
	output reg [1:0] branch_control_out
    );

	always @(*) begin
		case(branchOP)
			2'b01: begin
				case(func)
					5'b00000: begin
						branch_control_out <= 2'b01;
					end
					5'b00001: begin
						case(carry_out)
							1'b0: begin
								branch_control_out <= 2'b00;
							end
							1'b1: begin
								branch_control_out <= 2'b01;
							end
							default: branch_control_out <= 2'b00;
						endcase
					end
					5'b00010: begin
						case(carry_out)
							1'b0: begin
								branch_control_out <= 2'b01;
							end
							1'b1: begin
								branch_control_out <= 2'b00;
							end
							default: branch_control_out <= 2'b00;
						endcase
					end
					default: branch_control_out <= 2'b00;
				endcase
			end
			2'b10: begin
				case(func)
					5'b00000: begin
						branch_control_out <= 2'b10;
					end
					5'b00001: begin
						case(sign_bit)
							1'b0: begin
								branch_control_out <= 2'b00;
							end
							1'b1: begin
								branch_control_out <= 2'b01;
							end
							default: branch_control_out <= 2'b00;
						endcase
					end
					5'b00010: begin
						case(zero_bit)
							1'b0: begin
								branch_control_out <= 2'b00;
							end
							1'b1: begin
								branch_control_out <= 2'b01;
							end
							default: branch_control_out <= 2'b00;
						endcase
					end
					5'b00011: begin
						case(zero_bit)
							1'b0: begin
								branch_control_out <= 2'b01;
							end
							1'b1: begin
								branch_control_out <= 2'b00;
							end
							default: branch_control_out <= 2'b00;
						endcase
					end
					default: branch_control_out <= 2'b00;
				endcase
			end
			2'b11: begin
				case(func)
					5'b00000: begin
						branch_control_out <= 2'b01;
					end
					default: branch_control_out <= 2'b00;
				endcase
			end
			default: branch_control_out <= 2'b00;
		endcase
	end

endmodule
