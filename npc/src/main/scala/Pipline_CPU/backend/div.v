

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
parameter End = 2'b10;

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

assign s = count == 9'd64;
assign negtive_S = ~S + 'h1;
assign negtive_R = ~dividend[127:64] + 'h1;

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
                if(s) state <= End;
            end
            End: begin
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

            end
            End: begin

            end
        endcase
    end
end

endmodule



