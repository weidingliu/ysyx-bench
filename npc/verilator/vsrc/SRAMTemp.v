  
  module SRAM(
    input wire reset,
    input wire clk,
    //read addr port
    input wire ar_valid,
    output wire ar_ready,
    input wire [63:0] araddr,
    
    //read data port
    output wire r_valid,
    input wire r_ready,
    output wire [63:0]rdata,
    
    //write addr port
    input wire aw_valid,
    output wire aw_ready,
    input wire [63:0] awaddr,
    
    //write data port 
    input wire w_valid,
    output wire w_ready,
    input wire [63:0] wdata,
    input wire [7:0] wstrb,
    
    //write respone port 
    output wire bvalid,
    input wire bready,
    output wire [1:0]bresp
);

always @(posedge clk) begin 
    if(reset) begin 
        
    end
    
    
end


assign ar_ready = 1'b1;



endmodule
  
  

