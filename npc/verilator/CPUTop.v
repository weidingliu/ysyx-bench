module IFU(
  input         clock,
  input         reset,
  output [63:0] io_pc
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  reg [63:0] temp; // @[IFU.scala 11:19]
  wire [63:0] _temp_T_1 = temp + 64'h4; // @[IFU.scala 12:16]
  assign io_pc = temp; // @[IFU.scala 13:9]
  always @(posedge clock) begin
    if (reset) begin // @[IFU.scala 11:19]
      temp <= 64'h80000000; // @[IFU.scala 11:19]
    end else begin
      temp <= _temp_T_1; // @[IFU.scala 12:8]
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {2{`RANDOM}};
  temp = _RAND_0[63:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module IDU(
  input  [31:0] io_inst,
  output [2:0]  io_ctrlIO_src1type,
  output [2:0]  io_ctrlIO_src2type,
  output [4:0]  io_ctrlIO_src1,
  output [4:0]  io_ctrlIO_src2,
  output [4:0]  io_ctrlIO_rd,
  output [6:0]  io_ctrlIO_aluoptype,
  output [63:0] io_ctrlIO_Imm
);
  wire [31:0] _Inst_decode_T = io_inst & 32'h707f; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_1 = 32'h13 == _Inst_decode_T; // @[Lookup.scala 31:38]
  wire [31:0] _Inst_decode_T_2 = io_inst & 32'hfc00707f; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_3 = 32'h1013 == _Inst_decode_T_2; // @[Lookup.scala 31:38]
  wire [31:0] _Inst_decode_T_4 = io_inst & 32'h7f; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_5 = 32'h17 == _Inst_decode_T_4; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_7 = 32'h100073 == io_inst; // @[Lookup.scala 31:38]
  wire [1:0] _Inst_decode_T_9 = _Inst_decode_T_5 ? 2'h3 : 2'h2; // @[Lookup.scala 34:39]
  wire [1:0] _Inst_decode_T_10 = _Inst_decode_T_3 ? 2'h0 : _Inst_decode_T_9; // @[Lookup.scala 34:39]
  wire [1:0] Inst_decode_0 = _Inst_decode_T_1 ? 2'h0 : _Inst_decode_T_10; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_14 = _Inst_decode_T_7 ? 7'h42 : 7'h0; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_15 = _Inst_decode_T_5 ? 7'h40 : _Inst_decode_T_14; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_16 = _Inst_decode_T_3 ? 7'h41 : _Inst_decode_T_15; // @[Lookup.scala 34:39]
  wire [1:0] _T = Inst_decode_0 & 2'h1; // @[Lookup.scala 31:38]
  wire  _T_1 = 2'h0 == _T; // @[Lookup.scala 31:38]
  wire  _T_3 = 2'h3 == Inst_decode_0; // @[Lookup.scala 31:38]
  wire  _T_5 = 2'h2 == Inst_decode_0; // @[Lookup.scala 31:38]
  wire [1:0] _T_6 = _T_5 ? 2'h2 : 2'h0; // @[Lookup.scala 34:39]
  wire [1:0] _T_7 = _T_3 ? 2'h2 : _T_6; // @[Lookup.scala 34:39]
  wire [1:0] srctype1 = _T_1 ? 2'h0 : _T_7; // @[Lookup.scala 34:39]
  wire  srctype2 = _T_1 | _T_3; // @[Lookup.scala 34:39]
  wire  sign = io_inst[31]; // @[util.scala 9:19]
  wire [51:0] _T_12 = sign ? 52'hfffffffffffff : 52'h0; // @[Bitwise.scala 77:12]
  wire [63:0] _T_13 = {_T_12,io_inst[31:20]}; // @[Cat.scala 33:92]
  wire [31:0] _T_16 = {io_inst[31:12],12'h0}; // @[Cat.scala 33:92]
  wire  sign_1 = _T_16[31]; // @[util.scala 9:19]
  wire [31:0] _T_18 = sign_1 ? 32'hffffffff : 32'h0; // @[Bitwise.scala 77:12]
  wire [63:0] _T_19 = {_T_18,io_inst[31:12],12'h0}; // @[Cat.scala 33:92]
  wire [63:0] _imm_T_4 = _T_3 ? _T_19 : 64'h0; // @[Lookup.scala 34:39]
  assign io_ctrlIO_src1type = {{1'd0}, srctype1}; // @[IDU.scala 68:22]
  assign io_ctrlIO_src2type = {{2'd0}, srctype2}; // @[IDU.scala 69:22]
  assign io_ctrlIO_src1 = io_inst[19:15]; // @[IDU.scala 45:30]
  assign io_ctrlIO_src2 = io_inst[24:20]; // @[IDU.scala 45:47]
  assign io_ctrlIO_rd = io_inst[11:7]; // @[IDU.scala 45:64]
  assign io_ctrlIO_aluoptype = _Inst_decode_T_1 ? 7'h40 : _Inst_decode_T_16; // @[Lookup.scala 34:39]
  assign io_ctrlIO_Imm = _T_1 ? _T_13 : _imm_T_4; // @[Lookup.scala 34:39]
endmodule
module EXU(
  input  [2:0]  io_src1type,
  input  [2:0]  io_src2type,
  input  [6:0]  io_aluoptype,
  input  [63:0] io_Imm,
  input  [63:0] io1_REG1,
  input  [63:0] io1_REG2,
  input  [63:0] io1_PC,
  output [63:0] io1_result,
  output        io1_is_break
);
  wire [2:0] _src1_T = io_src1type & 3'h1; // @[Lookup.scala 31:38]
  wire  _src1_T_1 = 3'h0 == _src1_T; // @[Lookup.scala 31:38]
  wire [2:0] _src1_T_2 = io_src1type & 3'h3; // @[Lookup.scala 31:38]
  wire  _src1_T_3 = 3'h2 == _src1_T_2; // @[Lookup.scala 31:38]
  wire [63:0] _src1_T_4 = _src1_T_3 ? io1_PC : 64'h0; // @[Lookup.scala 34:39]
  wire [63:0] src1 = _src1_T_1 ? io1_REG1 : _src1_T_4; // @[Lookup.scala 34:39]
  wire [2:0] _src2_T = io_src2type & 3'h1; // @[Lookup.scala 31:38]
  wire  _src2_T_1 = 3'h0 == _src2_T; // @[Lookup.scala 31:38]
  wire  _src2_T_3 = 3'h1 == _src2_T; // @[Lookup.scala 31:38]
  wire [63:0] _src2_T_4 = _src2_T_3 ? io_Imm : 64'h0; // @[Lookup.scala 34:39]
  wire [63:0] src2 = _src2_T_1 ? io1_REG2 : _src2_T_4; // @[Lookup.scala 34:39]
  wire [63:0] _alu_result_T_1 = src1 + src2; // @[EXU.scala 52:25]
  assign io1_result = 7'h40 == io_aluoptype ? _alu_result_T_1 : 64'h0; // @[EXU.scala 50:23 52:17]
  assign io1_is_break = io_aluoptype == 7'h42; // @[EXU.scala 49:35]
endmodule
module CPUTop(
  input         clock,
  input         reset,
  output [63:0] io_pc,
  input  [31:0] io_inst,
  output [63:0] io_result
);
`ifdef RANDOMIZE_MEM_INIT
  reg [63:0] _RAND_0;
`endif // RANDOMIZE_MEM_INIT
  wire  IF_clock; // @[CPUTop.scala 16:16]
  wire  IF_reset; // @[CPUTop.scala 16:16]
  wire [63:0] IF_io_pc; // @[CPUTop.scala 16:16]
  wire [31:0] ID_io_inst; // @[CPUTop.scala 18:18]
  wire [2:0] ID_io_ctrlIO_src1type; // @[CPUTop.scala 18:18]
  wire [2:0] ID_io_ctrlIO_src2type; // @[CPUTop.scala 18:18]
  wire [4:0] ID_io_ctrlIO_src1; // @[CPUTop.scala 18:18]
  wire [4:0] ID_io_ctrlIO_src2; // @[CPUTop.scala 18:18]
  wire [4:0] ID_io_ctrlIO_rd; // @[CPUTop.scala 18:18]
  wire [6:0] ID_io_ctrlIO_aluoptype; // @[CPUTop.scala 18:18]
  wire [63:0] ID_io_ctrlIO_Imm; // @[CPUTop.scala 18:18]
  wire [2:0] EX_io_src1type; // @[CPUTop.scala 20:18]
  wire [2:0] EX_io_src2type; // @[CPUTop.scala 20:18]
  wire [6:0] EX_io_aluoptype; // @[CPUTop.scala 20:18]
  wire [63:0] EX_io_Imm; // @[CPUTop.scala 20:18]
  wire [63:0] EX_io1_REG1; // @[CPUTop.scala 20:18]
  wire [63:0] EX_io1_REG2; // @[CPUTop.scala 20:18]
  wire [63:0] EX_io1_PC; // @[CPUTop.scala 20:18]
  wire [63:0] EX_io1_result; // @[CPUTop.scala 20:18]
  wire  EX_io1_is_break; // @[CPUTop.scala 20:18]
  wire  DIP_is_break; // @[CPUTop.scala 22:19]
  reg [63:0] rf [0:31]; // @[RF.scala 6:17]
  wire  rf_EX_io1_REG1_MPORT_en; // @[RF.scala 6:17]
  wire [4:0] rf_EX_io1_REG1_MPORT_addr; // @[RF.scala 6:17]
  wire [63:0] rf_EX_io1_REG1_MPORT_data; // @[RF.scala 6:17]
  wire  rf_EX_io1_REG2_MPORT_en; // @[RF.scala 6:17]
  wire [4:0] rf_EX_io1_REG2_MPORT_addr; // @[RF.scala 6:17]
  wire [63:0] rf_EX_io1_REG2_MPORT_data; // @[RF.scala 6:17]
  wire [63:0] rf_MPORT_data; // @[RF.scala 6:17]
  wire [4:0] rf_MPORT_addr; // @[RF.scala 6:17]
  wire  rf_MPORT_mask; // @[RF.scala 6:17]
  wire  rf_MPORT_en; // @[RF.scala 6:17]
  wire [4:0] src1add = ID_io_ctrlIO_src1; // @[CPUTop.scala 33:21 38:10]
  wire [4:0] src2add = ID_io_ctrlIO_src2; // @[CPUTop.scala 34:21 39:10]
  IFU IF ( // @[CPUTop.scala 16:16]
    .clock(IF_clock),
    .reset(IF_reset),
    .io_pc(IF_io_pc)
  );
  IDU ID ( // @[CPUTop.scala 18:18]
    .io_inst(ID_io_inst),
    .io_ctrlIO_src1type(ID_io_ctrlIO_src1type),
    .io_ctrlIO_src2type(ID_io_ctrlIO_src2type),
    .io_ctrlIO_src1(ID_io_ctrlIO_src1),
    .io_ctrlIO_src2(ID_io_ctrlIO_src2),
    .io_ctrlIO_rd(ID_io_ctrlIO_rd),
    .io_ctrlIO_aluoptype(ID_io_ctrlIO_aluoptype),
    .io_ctrlIO_Imm(ID_io_ctrlIO_Imm)
  );
  EXU EX ( // @[CPUTop.scala 20:18]
    .io_src1type(EX_io_src1type),
    .io_src2type(EX_io_src2type),
    .io_aluoptype(EX_io_aluoptype),
    .io_Imm(EX_io_Imm),
    .io1_REG1(EX_io1_REG1),
    .io1_REG2(EX_io1_REG2),
    .io1_PC(EX_io1_PC),
    .io1_result(EX_io1_result),
    .io1_is_break(EX_io1_is_break)
  );
  DIP_model DIP ( // @[CPUTop.scala 22:19]
    .is_break(DIP_is_break)
  );
  assign rf_EX_io1_REG1_MPORT_en = 1'h1;
  assign rf_EX_io1_REG1_MPORT_addr = ID_io_ctrlIO_src1;
  assign rf_EX_io1_REG1_MPORT_data = rf[rf_EX_io1_REG1_MPORT_addr]; // @[RF.scala 6:17]
  assign rf_EX_io1_REG2_MPORT_en = 1'h1;
  assign rf_EX_io1_REG2_MPORT_addr = ID_io_ctrlIO_src2;
  assign rf_EX_io1_REG2_MPORT_data = rf[rf_EX_io1_REG2_MPORT_addr]; // @[RF.scala 6:17]
  assign rf_MPORT_data = EX_io1_result;
  assign rf_MPORT_addr = ID_io_ctrlIO_rd;
  assign rf_MPORT_mask = 1'h1;
  assign rf_MPORT_en = 1'h1;
  assign io_pc = IF_io_pc; // @[CPUTop.scala 26:9]
  assign io_result = EX_io1_result; // @[CPUTop.scala 42:13]
  assign IF_clock = clock;
  assign IF_reset = reset;
  assign ID_io_inst = io_inst; // @[CPUTop.scala 28:14]
  assign EX_io_src1type = ID_io_ctrlIO_src1type; // @[CPUTop.scala 30:16]
  assign EX_io_src2type = ID_io_ctrlIO_src2type; // @[CPUTop.scala 30:16]
  assign EX_io_aluoptype = ID_io_ctrlIO_aluoptype; // @[CPUTop.scala 30:16]
  assign EX_io_Imm = ID_io_ctrlIO_Imm; // @[CPUTop.scala 30:16]
  assign EX_io1_REG1 = src1add == 5'h0 ? 64'h0 : rf_EX_io1_REG1_MPORT_data; // @[RF.scala 7:37]
  assign EX_io1_REG2 = src2add == 5'h0 ? 64'h0 : rf_EX_io1_REG2_MPORT_data; // @[RF.scala 7:37]
  assign EX_io1_PC = IF_io_pc; // @[CPUTop.scala 31:13]
  assign DIP_is_break = EX_io1_is_break; // @[CPUTop.scala 44:19]
  always @(posedge clock) begin
    if (rf_MPORT_en & rf_MPORT_mask) begin
      rf[rf_MPORT_addr] <= rf_MPORT_data; // @[RF.scala 6:17]
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_MEM_INIT
  _RAND_0 = {2{`RANDOM}};
  for (initvar = 0; initvar < 32; initvar = initvar+1)
    rf[initvar] = _RAND_0[63:0];
`endif // RANDOMIZE_MEM_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
