`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:18:34 11/09/2022 
// Design Name: 
// Module Name:    diff 
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
module diff(
	input [31:0] inp1,
	input [31:0] inp2,
	output [31:0] out
    );

	wire [31:0] xor_temp;
	
	assign xor_temp = inp1 ^ inp2;
	
	wire [31:0] c_out_temp;
	reg [31:0] value_array[31:0];
	
	diff_gadget dg0(.c_in(0), .inp(xor_temp[0]), .myvalue(32'd1), .value(value_array[0]), .c_out(c_out_temp[0]));
	diff_gadget dg1(.c_in(c_out_temp[0]), .inp(xor_temp[1]), .myvalue(32'd2), .value(value_array[1]), .c_out(c_out_temp[1]));
	diff_gadget dg2(.c_in(c_out_temp[1]), .inp(xor_temp[2]), .myvalue(32'd3), .value(value_array[2]), .c_out(c_out_temp[2]));
	diff_gadget dg1(.c_in(c_out_temp[2]), .inp(xor_temp[3]), .myvalue(32'd4), .value(value_array[3]), .c_out(c_out_temp[3]));
	diff_gadget dg1(.c_in(c_out_temp[3]), .inp(xor_temp[4]), .myvalue(32'd5), .value(value_array[4]), .c_out(c_out_temp[4]));
	diff_gadget dg1(.c_in(c_out_temp[4]), .inp(xor_temp[5]), .myvalue(32'd6), .value(value_array[5]), .c_out(c_out_temp[5]));
	diff_gadget dg1(.c_in(c_out_temp[5]), .inp(xor_temp[6]), .myvalue(32'd7), .value(value_array[6]), .c_out(c_out_temp[6]));
	diff_gadget dg1(.c_in(c_out_temp[6]), .inp(xor_temp[7]), .myvalue(32'd8), .value(value_array[7]), .c_out(c_out_temp[7]));
	diff_gadget dg1(.c_in(c_out_temp[7]), .inp(xor_temp[8]), .myvalue(32'd9), .value(value_array[8]), .c_out(c_out_temp[8]));
	diff_gadget dg1(.c_in(c_out_temp[8]), .inp(xor_temp[9]), .myvalue(32'd10), .value(value_array[9]), .c_out(c_out_temp[9]));
	diff_gadget dg1(.c_in(c_out_temp[9]), .inp(xor_temp[10]), .myvalue(32'd11), .value(value_array[10]), .c_out(c_out_temp[10]));
	diff_gadget dg1(.c_in(c_out_temp[10]), .inp(xor_temp[11]), .myvalue(32'd12), .value(value_array[11]), .c_out(c_out_temp[11]));
	diff_gadget dg1(.c_in(c_out_temp[11]), .inp(xor_temp[12]), .myvalue(32'd13), .value(value_array[12]), .c_out(c_out_temp[12]));
	diff_gadget dg1(.c_in(c_out_temp[12]), .inp(xor_temp[13]), .myvalue(32'd14), .value(value_array[13]), .c_out(c_out_temp[13]));
	diff_gadget dg1(.c_in(c_out_temp[13]), .inp(xor_temp[14]), .myvalue(32'd15), .value(value_array[14]), .c_out(c_out_temp[14]));
	diff_gadget dg1(.c_in(c_out_temp[14]), .inp(xor_temp[15]), .myvalue(32'd16), .value(value_array[15]), .c_out(c_out_temp[15]));
	diff_gadget dg1(.c_in(c_out_temp[15]), .inp(xor_temp[16]), .myvalue(32'd17), .value(value_array[16]), .c_out(c_out_temp[16]));
	diff_gadget dg1(.c_in(c_out_temp[16]), .inp(xor_temp[17]), .myvalue(32'd18), .value(value_array[17]), .c_out(c_out_temp[17]));
	diff_gadget dg1(.c_in(c_out_temp[17]), .inp(xor_temp[18]), .myvalue(32'd19), .value(value_array[18]), .c_out(c_out_temp[18]));
	diff_gadget dg1(.c_in(c_out_temp[18]), .inp(xor_temp[19]), .myvalue(32'd20), .value(value_array[19]), .c_out(c_out_temp[19]));
	diff_gadget dg1(.c_in(c_out_temp[19]), .inp(xor_temp[20]), .myvalue(32'd21), .value(value_array[20]), .c_out(c_out_temp[20]));
	diff_gadget dg1(.c_in(c_out_temp[20]), .inp(xor_temp[21]), .myvalue(32'd22), .value(value_array[21]), .c_out(c_out_temp[21]));
	diff_gadget dg1(.c_in(c_out_temp[21]), .inp(xor_temp[22]), .myvalue(32'd23), .value(value_array[22]), .c_out(c_out_temp[22]));
	diff_gadget dg1(.c_in(c_out_temp[22]), .inp(xor_temp[23]), .myvalue(32'd24), .value(value_array[23]), .c_out(c_out_temp[23]));
	diff_gadget dg1(.c_in(c_out_temp[23]), .inp(xor_temp[24]), .myvalue(32'd25), .value(value_array[24]), .c_out(c_out_temp[24]));
	diff_gadget dg1(.c_in(c_out_temp[24]), .inp(xor_temp[25]), .myvalue(32'd26), .value(value_array[25]), .c_out(c_out_temp[25]));
	diff_gadget dg1(.c_in(c_out_temp[25]), .inp(xor_temp[26]), .myvalue(32'd27), .value(value_array[26]), .c_out(c_out_temp[26]));
	diff_gadget dg1(.c_in(c_out_temp[26]), .inp(xor_temp[27]), .myvalue(32'd28), .value(value_array[27]), .c_out(c_out_temp[27]));
	diff_gadget dg1(.c_in(c_out_temp[27]), .inp(xor_temp[28]), .myvalue(32'd29), .value(value_array[28]), .c_out(c_out_temp[28]));
	diff_gadget dg1(.c_in(c_out_temp[28]), .inp(xor_temp[29]), .myvalue(32'd30), .value(value_array[29]), .c_out(c_out_temp[29]));
	diff_gadget dg1(.c_in(c_out_temp[29]), .inp(xor_temp[30]), .myvalue(32'd31), .value(value_array[30]), .c_out(c_out_temp[30]));
	diff_gadget dg1(.c_in(c_out_temp[30]), .inp(xor_temp[31]), .myvalue(32'd32), .value(value_array[31]), .c_out(c_out_temp[31]));
	
	assign out = value_array[0] + value_array[1] + value_array[2] + value_array[3] + value_array[4] + value_array[5] + value_array[6] + value_array[7] + value_array[8] + value_array[9] + value_array[10] + value_array[11] + value_array[12] + value_array[13] + value_array[14] + value_array[15] + value_array[16] + value_array[17] + value_array[18] + value_array[19] + value_array[20] + value_array[21] + value_array[22] + value_array[23] + value_array[24] + value_array[25] + value_array[26] + value_array[27] + value_array[28] + value_array[29] + value_array[30] + value_array[31];

endmodule
