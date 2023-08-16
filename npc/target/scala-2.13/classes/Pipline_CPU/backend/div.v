

module div(
    input wire clk,
    input wire reset,

    input wire in_valid,
    input wire [63:0] in_a,
    input wire [63:0] in_b,
    input wire div_signed,
    input wire flush,

    output wire result_valid,
    output wire [63:0]quotient,
    output wire [63:0]remainder
);

parameter idle = 2'b00;
parameter Run = 2'b01;
parameter eNDs = 2'b10;

reg [127:0]dividend;
reg [63:0]divisor;
reg [63:0]S;
reg [63:0]R;
reg [1:0]state;

reg [8:0]count;
wire s;

wire [63:0]negtive_S;
wire [63:0]negtive_R;

wire [63:0]negtive_a;
wire [63:0]negtive_b;

wire [63:0] s_o;
wire [63:0] r_o;

wire [63:0]res_div;

assign R = dividend[127:64];
assign res_div = dividend[127:63] - {1'b0,divisor};
assign s = count == 9'd64;
assign negtive_S = ~S + 'h1;
assign negtive_R = ~R + 'h1;

assign negtive_a = ~in_a + 'h1;
assign negtive_b = ~in_b + 'h1;

always @(posedge clk) begin
    if(reset || flush) begin
        state <= idle;
    end
    else begin
        case (state)
            idle: begin
                if(in_valid) state <= Run;
            end
            Run: begin
                if(s) state <= eNDs;
            end
            eNDs: begin
                state <= idle;
            end
            default: state <= idle;
        endcase
    end
end

always @(posedge clk) begin
    if(reset) begin
        count <= 'h0;
    end
    else begin
        if(state == Run) count <= count + 'h1;
    end
end

always @(posedge clk) begin
    if(reset) begin
        dividend <= 'h0;
        divisor <= 'h0;
        S <= 'h0;
    end
    else begin
        case(state)
            idle: begin
                dividend <= {64{1'b0},};
                divisor <= (div_signed & in_b[63]) ? negtive_b:in_b;
            end
            Run: begin
                S <= res_div[64] ? {S[62:0],1'b0}:{S[62:0],1'b1};
                dividend <= (res_div[64]? {res_div,dividend[62:0]}: dividend) << 1;
            end
            eNDs: begin

            end
        endcase
    end
end
// counter 
always @(posedge clk) begin
    if(reset) begin 
        count <= 9'b0;
    end
    else begin 
        if(state == Run) count <= count + 9'b1;
        if(state == idle) count <= 9'b0;
    end
end

assign s_o = (in_a[63] ^ in_b[63])? ({64{S[63]}} & S | {64{!S[63]}} & negtive_S):({64{S[63]}} & negtive_S | {64{!S[63]}} & S);
assign r_o = (in_a[63]) ? ({64{R[63]}} & R | {64{!R[63]}} & negtive_R):({64{R[63]}} & negtive_R | {64{!R[63]}} & R);

assign result_valid = state == eNDs;
assign quotient = {64{div_signed}} & s_o | {64{!div_signed}} & S;
assign remainder = {64{div_signed}} & r_o | {64{!div_signed}} & R;


endmodule



