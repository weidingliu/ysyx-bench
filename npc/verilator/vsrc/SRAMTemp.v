  
  module SRAM(
    input wire reset,
    input wire clk,
    //read addr port
    input wire ar_valid,
    output wire ar_ready,
    input wire [63:0] araddr,
    
    //read data port
    output reg r_valid,
    input wire r_ready,
    output reg [63:0]rdata,
    
    //write addr port
    input wire aw_valid,
    output wire aw_ready,
    input wire [63:0] awaddr,
    
    //write data port 
    input wire w_valid,
    output reg w_ready,
    input wire [63:0] wdata,
    input wire [7:0] wstrb,
    
    //write respone port 
    output wire bvalid,
    input wire bready,
    output wire [1:0]bresp
);
localparam idle = 2'b00;
localparam read_busy = 2'b01;
localparam write_busy = 2'b10;
localparam wait_bus = 2'b11;
reg [1:0] state;
//reg [63:0] rdata;
reg [1:0] next_state;

always @(posedge clk) begin
    if(reset) begin 
        state <= idle;
    end
    else state <= next_state;
end

always @(*) begin 
    if(reset) begin 
        next_state = idle;
    end
    else begin 
    	case(state)
    		idle: begin 
    		    if(ar_valid) next_state = read_busy;
    		    if(aw_valid) next_state = write_busy;
    		end
    		read_busy: begin 
    		    if(!r_ready) begin 
    		        next_state = wait_bus;
    		    end
    		    else begin 
    		        next_state = idle;
    		    end
    		end
    		write_busy: begin 
    		    if(!bready) begin 
    		        next_state = wait_bus;
    		    end
    		    else begin 
    		        next_state = idle;
    		    end
    		end
    		wait_bus: begin 
    		    if(r_ready || bready) begin 
    		        next_state =idle;
    		    end
    		end
    	endcase
    end
end

always @(posedge clk) begin 
    //$display("-------------%h ----%h",addr,clk);
    if(reset) begin 
        rdata=64'h0;

    end
    else if(aw_valid) begin 
            pmem_write(awaddr, wdata, wstrb);
    end
    else if(ar_valid) begin 
           pmem_read(araddr, rdata);
    end
    else begin 
        rdata=64'h0;
    end
end

always @(posedge clk) begin 
    if(reset) begin 
        bvalid <= 1'b0;
        r_valid <= 1'b0;
    end
    else begin 
        case(next_state)
               idle: begin 
    		    bvalid <= 1'b0;
    		    r_valid <= 1'b0;
    		end
    		read_busy: begin 
    		    r_valid <= 1'b1;
    		end
    		write_busy: begin 
    		    bvalid <= 1'b1;
    		end
    		wait_bus: begin 
    		    
    		end
    		default: begin 
    		    bvalid <= 1'b0;
    		    r_valid <= 1'b0;
    		end
        endcase
    end
end

assign ar_ready = (state == idle)? 1'b1:1'b0;
assign aw_ready = (state == idle)? 1'b1:1'b0;
assign w_ready = (state == idle)? 1'b1:1'b0;
//assign r_valid = (state == read_busy) ? 1'b1:1'b0;



endmodule
  
  

