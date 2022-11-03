`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:15:13 10/26/2022 
// Design Name: 
// Module Name:    Program_Counter 
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
module Program_Counter(
	input [31:0] PC_input,
   input clock,
   input reset,
   output reg [31:0] PC_output
    );
	
	always @(posedge clock) begin
		if(reset) PC_output <= 0;
		else PC_output <= PC_input;
	end

endmodule
