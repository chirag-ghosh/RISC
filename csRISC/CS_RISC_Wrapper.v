`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:30:02 11/04/2022 
// Design Name: 
// Module Name:    CS_RISC_Wrapper 
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
module CS_RISC_Wrapper(
	input clk,
	input reset,
	input address_mode,
	input [11:0] sw,
	output [15:0] led
    );
	
	/*reg [31:0] myaddress;
	assign myaddress = ;*/
	
	wire [16:0] temp;
	
	wire clk_out;
	
	clock_divider clkdiv(.clk(clk), .clk_out(clk_out));
	
	CS_RISC uut (
		.clk(clk_out), 
		.reset(~reset),
		.address_mode(address_mode),
		.fpga_address({20'd0,sw}),
		.fpga_value({temp,led[14:0]}),
		.program_done(led[15])
	);
	
	/*always @(posedge clk) begin
		led = uut.RB.r[sw][16:0];
	end*/

endmodule
