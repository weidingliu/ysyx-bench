  
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
        next_state = idle;
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
    		default: next_state =idle;
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
assign bresp = 2'b00;
//assign r_valid = (state == read_busy) ? 1'b1:1'b0;

endmodule
  
  
module SRAM_AXI #(
    localparam BUS_WIDTH = 64,
    localparam DATA_WIDTH = 64
)(
    input wire clk,
    input wire reset,

    //read address channel 
    input wire ar_valid,
    output wire ar_ready,
    input wire [3:0]ar_id,
    input reg [7:0] ar_len,
    input wire [2:0] ar_size,
    input wire [BUS_WIDTH-1:0] ar_addr,//read request address 
    input wire [2:0]ar_prot, // Access attributes
    input wire [1:0]ar_burst,
    input wire [1:0]ar_lock,
    input wire [3:0]ar_cache,
    

    //write address channel
    input wire aw_valid,
    output wire aw_ready,
    input wire [3:0]aw_id,
    input reg [7:0] aw_len,
    input wire [2:0] aw_size,
    input wire [BUS_WIDTH-1:0] aw_addr,
    input wire [2:0]aw_prot,
    input wire [1:0]aw_burst,
    input wire [1:0]aw_lock,
    input wire [3:0]aw_cache,


    //read data channel 
    output wire rd_valid,
    input wire rd_ready,
    output    [ 3:0] rd_id,
    output wire [DATA_WIDTH-1:0] rd_data,
    output    [ 1:0] rd_resp,
    output           rd_last,


    //write data channel 
    input wire wd_valid,
    output wire wd_ready,
    input wire [3:0]wd_id,
    input wire [DATA_WIDTH-1:0] wd_data,
    input wire [DATA_WIDTH/8 -1 : 0]wstrb,
    input reg wd_last,

    //write respone channel
    output wire wr_valid,
    input wire wr_ready,
    output wire [3:0]wr_id,
    output wire [1:0]wr_breap
);

localparam idle = 2'b00;
localparam ready = 2'b01;
localparam data_transform = 2'b10;

reg [1:0]read_state;
reg [1:0]write_state;

reg [1:0]read_next_state;
reg [1:0]write_next_state;

reg [DATA_WIDTH-1:0] rdata;

reg [BUS_WIDTH-1:0] write_addr_buffer;
reg [BUS_WIDTH-1:0] read_addr_buffer;
reg [7:0]read_count;

always @(posedge clk) begin
    if(reset) begin 
        read_state <= idle;
        write_state <= idle;
    end
    else begin 
        read_state <= read_next_state;
        write_state <= write_next_state;
    end
end
always @(posedge clk) begin
    if(reset) begin 
        read_count <= 'h0;
        read_addr_buffer <= 'h0;
        write_addr_buffer <= 'h0;
    end
    else begin 
        if(read_state == idle && read_next_state == data_transform) begin 
            read_count <= ar_len;
            read_addr_buffer <= ar_addr;
        end
        if(write_state == idle && write_next_state == data_transform) begin 
            write_addr_buffer <= aw_addr;
        end

        if(write_state == data_transform && wd_valid && wd_ready && !wd_last) write_addr_buffer <= write_addr_buffer + 'h8;
        if(read_state == data_transform && rd_valid && rd_ready && !rd_last) begin 
            read_count <= read_count - 1'b1;
            read_addr_buffer <= read_addr_buffer + 'h8;
        end
    end
end


always @(*) begin 
    case(read_state)
        idle: begin 
            if(ar_valid) begin 
                read_next_state = data_transform;
            end
            else begin 
                read_next_state = idle;
            end
        end
        // ready: begin 
        //     if(rd_valid && rd_ready) begin 
        //         read_next_state = idle;
        //     end
            
        // end
        data_transform: begin 
            if(rd_valid && rd_ready && rd_last) read_next_state = idle;
            else read_next_state = data_transform;
        end
        default: begin 
            read_next_state = idle;
        end
    endcase
end

always @(*) begin
    case (write_state)
        idle: begin 
            if(aw_valid) begin 
                write_next_state = data_transform;
            end
            else begin 
                write_next_state = idle;
            end
        end
        ready: begin 
            if(wr_valid && wr_ready) begin 
                write_next_state = idle;
            end
        end
        data_transform: begin 
            if(wd_last) begin 
                write_next_state = ready;
            end
            else begin 
                write_next_state = data_transform;
            end
            
        end
        default: begin 
            write_next_state = idle;
        end
    endcase
end

always @(*) begin 
    if(reset) begin 
        //rdata <= 'h0;
        rdata = 64'h0;
    end
    else begin 
        // $display("%h %h %h %h %h\n",read_addr_buffer,ar_addr,read_count,ar_valid,read_state);
        if(read_state == data_transform && clk == 1'b1) begin 
            pmem_read(read_addr_buffer, rdata);
        end
        if(write_state == data_transform && clk == 1'b1) begin 
            pmem_write(write_addr_buffer, wd_data, wstrb);
        end
    end
end
assign rd_last = (read_count == 'h0) & (read_state == data_transform);
assign wr_breap = 2'b00;
assign rd_data = rdata;
assign ar_ready = (read_state == idle)? 1'b1:1'b0;
assign aw_ready = (write_state == idle)? 1'b1:1'b0;
assign wd_ready = (write_state == idle || write_state == data_transform) ? 1'b1:1'b0;
assign rd_valid = (read_state == data_transform)? 1'b1:1'b0;
assign wr_valid = (write_state == ready)? 1'b1:1'b0;
endmodule
  
  
  

