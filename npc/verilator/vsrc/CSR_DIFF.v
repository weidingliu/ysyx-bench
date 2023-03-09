import "DPI-C" function void set_gpr_ptr(input logic [63:0] a []);
module CSR_DIFF(
  input wire [63:0] mepc,
input wire [63:0] mcause,
input wire [63:0] mstatus,
input wire [63:0] mtvec
);
wire [63:0] inst_csr[5:0];

assign inst_csr[1] =mepc;
assign inst_csr[2] =mcause;
assign inst_csr[3] =mstatus;
assign inst_csr[4] =mtvec;
initial begin 
set_gpr_ptr(inst_csr);
end

endmodule
