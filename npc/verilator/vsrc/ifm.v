import "DPI-C" function void pmem_read(
  input longint raddr, output longint rdata);
  
  module ifm(
      input wire [63:0] pc,
      output wire [31:0]inst
  
  );
  wire [63:0]rdata;
  initial begin 
      pmem_read(pc, rdata);
  end
  assign inst=(pc[2]==1'b1)?  rdata[63:32]:rdata[31:0];
  
  endmodule
