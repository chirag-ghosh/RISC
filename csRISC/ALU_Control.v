`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:37:45 10/21/2022 
// Design Name: 
// Module Name:    ALU_Control 
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
module ALU_Control(
	 input [2:0] ALUop,
    input [4:0] func,
    output reg [3:0] ALU_control_output
    );
	always @(*) begin
		case (ALUop)
			3'b000: begin
				ALU_control_output <= 4'b0000;
			end
			3'b001: begin
					case (func)
						3'b00000: begin
							ALU_control_output <= 4'b0000;
							end
						3'b00001: begin
							ALU_control_output <= 4'b0001;
							end
						default: ALU_control_output <= 4'b0000;
						endcase
					end
			3'b010: begin			
					ALU_control_output <= 4'b1000;
				end	
			3'b011: begin
					case (func)
						3'b00000: begin
							ALU_control_output <= 4'b0010;
							end
						3'b00001: begin
							ALU_control_output <= 4'b0011;
							end
						default: ALU_control_output <= 4'b0000;
						endcase
					end
			3'b100: begin			
					ALU_control_output <= 4'b1001;
				end
			3'b101: begin
					case (func)
						3'b00000: begin
							ALU_control_output <= 4'b1100;
							end
						3'b00001: begin
							ALU_control_output <= 4'b1101;
							end
						3'b00010: begin
							ALU_control_output <= 4'b0100;
							end
						3'b00011: begin
							ALU_control_output <= 4'b0101;
							end
						3'b00100: begin
							ALU_control_output <= 4'b1110;
							end
						3'b00101: begin
							ALU_control_output <= 4'b0110;
							end
						default: ALU_control_output <= 4'b0000;
						endcase
					end
			3'b110: begin			
					ALU_control_output <= 4'b0111;
				end
			default: ALU_control_output <= 4'b0000;
			endcase
	end

endmodule
