
  module ifm(
      input wire reset,
      input wire [63:0] pc,
      output wire [31:0]inst
  
  );
  wire [63:0]rdata;
  always @(*) begin 
      if(reset) begin 
          inst=32'h0;
      end
      else begin 
          pmem_read(pc, rdata);
      end
      
  end
  assign inst=(pc[2]==1'b1)?  rdata[63:32]:rdata[31:0];
  
  endmodule
