`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:45:12 11/09/2022 
// Design Name: 
// Module Name:    clock_divider 
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
module clock_divider(
		input clk,
		output clk_out
    );
	 
	 
	localparam timelimit = 500;
	
	reg out;
	reg [31:0] temp;

	initial begin
		out = 0;
	end
	
	always @ (posedge clk) begin
		if(temp == timelimit) begin
			temp <= 0;
			out <= ~out;
		end else
			temp <= temp + 1;
	end
	
	assign clk_out = out;

endmodule
