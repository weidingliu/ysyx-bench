import "DPI-C" function void pmem_read(
  input longint raddr, output longint rdata);
import "DPI-C" function void pmem_write(
  input longint waddr, input longint wdata, input byte wmask);

module MEM(
    input wire [63:0] addr,
    input wire we,
    input wire ce,
    input wire [63:0] wdata,
    output wire [63:0] rdata,
    input wire [7:0]wmask
);

always @(*) begin 
    if(ce ==1'b1) begin 
        pmem_write(addr, wdata, wmask);
        pmem_read(addr, rdata);
    
    end
    /*if(ce==1'b1) begin 
        if(we==1'b1) begin 
            pmem_write(addr, wdata, wmask);
            rdata=64'h0;
        end
        else begin 
            pmem_read(addr, rdata);
            $display("-------------%h",rdata);
        end
    end
    else begin 
        rdata=64'h0;
    end*/

end





endmodule
