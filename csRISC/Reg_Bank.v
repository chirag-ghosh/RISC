`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:43:05 10/25/2022 
// Design Name: 
// Module Name:    Reg_Bank 
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
module Reg_Bank(
   input clk,
   input reset,
	input [4:0] reg1_address,
	input [4:0] reg2_address,
	input [4:0] write_register,
	input RegWrite,
   input [31:0] write_data,
   output [31:0] reg_data1,
   output [31:0] reg_data2,
	output program_done
		);
	
	reg [31:0] r[31:0]; 	// 32 registers of 32 bits
	
	always @(posedge clk) begin
        if(reset) begin
            r[0] <= 0;
            r[1] <= 0;
            r[2] <= 0;
            r[3] <= 0;
            r[4] <= 0;
            r[5] <= 0;
            r[6] <= 0;
            r[7] <= 0;
            r[8] <= 0;
            r[9] <= 0;
            r[10] <= 0;
            r[11] <= 0;
            r[12] <= 0;
            r[13] <= 0;
            r[14] <= 0;
            r[15] <= 0;
            r[16] <= 0;
            r[17] <= 0;
            r[18] <= 0;
            r[19] <= 0;
            r[20] <= 0;
            r[21] <= 0;
            r[22] <= 0;
            r[23] <= 0;
            r[24] <= 0;
            r[25] <= 0;
            r[26] <= 0;
            r[27] <= 0;
            r[28] <= 0;
            r[29] <= 0;
            r[30] <= 0;
            r[31] <= 0;
        end else begin
            if(RegWrite) r[write_register] <= write_data;
        end
    end
	
	assign reg_data1 = r[reg1_address];

	assign reg_data2 = r[reg2_address];
	
	assign program_done = r[30][0];

endmodule
