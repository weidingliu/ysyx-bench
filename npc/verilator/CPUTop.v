module IFU(
  input         clock,
  input         reset,
  input  [63:0] io_dnpc,
  input         io_is_jump,
  output [63:0] io_pc
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  reg [63:0] temp; // @[IFU.scala 13:19]
  wire [63:0] _temp_T_2 = temp + 64'h4; // @[IFU.scala 14:56]
  assign io_pc = temp; // @[IFU.scala 15:9]
  always @(posedge clock) begin
    if (reset) begin // @[IFU.scala 13:19]
      temp <= 64'h80000000; // @[IFU.scala 13:19]
    end else if (io_is_jump) begin // @[IFU.scala 14:14]
      temp <= io_dnpc;
    end else begin
      temp <= _temp_T_2;
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
  output [2:0]  io_ctrlIO_futype,
  output [6:0]  io_ctrlIO_aluoptype,
  output [63:0] io_ctrlIO_Imm
);
  wire [31:0] _Inst_decode_T = io_inst & 32'h707f; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_1 = 32'h13 == _Inst_decode_T; // @[Lookup.scala 31:38]
  wire [31:0] _Inst_decode_T_2 = io_inst & 32'hfc00707f; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_3 = 32'h1013 == _Inst_decode_T_2; // @[Lookup.scala 31:38]
  wire [31:0] _Inst_decode_T_4 = io_inst & 32'h7f; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_5 = 32'h17 == _Inst_decode_T_4; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_7 = 32'h37 == _Inst_decode_T_4; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_9 = 32'h6013 == _Inst_decode_T; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_11 = 32'h6f == _Inst_decode_T_4; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_13 = 32'h67 == _Inst_decode_T; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_15 = 32'h100073 == io_inst; // @[Lookup.scala 31:38]
  wire [3:0] _Inst_decode_T_17 = _Inst_decode_T_13 ? 4'h8 : 4'h0; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_18 = _Inst_decode_T_11 ? 4'h7 : _Inst_decode_T_17; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_19 = _Inst_decode_T_9 ? 4'h8 : _Inst_decode_T_18; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_20 = _Inst_decode_T_7 ? 4'h3 : _Inst_decode_T_19; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_21 = _Inst_decode_T_5 ? 4'h3 : _Inst_decode_T_20; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_22 = _Inst_decode_T_3 ? 4'h8 : _Inst_decode_T_21; // @[Lookup.scala 34:39]
  wire [3:0] Inst_decode_0 = _Inst_decode_T_1 ? 4'h8 : _Inst_decode_T_22; // @[Lookup.scala 34:39]
  wire [1:0] _Inst_decode_T_24 = _Inst_decode_T_13 ? 2'h3 : 2'h0; // @[Lookup.scala 34:39]
  wire [1:0] _Inst_decode_T_25 = _Inst_decode_T_11 ? 2'h3 : _Inst_decode_T_24; // @[Lookup.scala 34:39]
  wire [1:0] _Inst_decode_T_26 = _Inst_decode_T_9 ? 2'h0 : _Inst_decode_T_25; // @[Lookup.scala 34:39]
  wire [1:0] _Inst_decode_T_27 = _Inst_decode_T_7 ? 2'h0 : _Inst_decode_T_26; // @[Lookup.scala 34:39]
  wire [1:0] _Inst_decode_T_28 = _Inst_decode_T_5 ? 2'h0 : _Inst_decode_T_27; // @[Lookup.scala 34:39]
  wire [1:0] _Inst_decode_T_29 = _Inst_decode_T_3 ? 2'h0 : _Inst_decode_T_28; // @[Lookup.scala 34:39]
  wire [1:0] Inst_decode_1 = _Inst_decode_T_1 ? 2'h0 : _Inst_decode_T_29; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_30 = _Inst_decode_T_15 ? 7'h42 : 7'h0; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_31 = _Inst_decode_T_13 ? 7'h48 : _Inst_decode_T_30; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_32 = _Inst_decode_T_11 ? 7'h19 : _Inst_decode_T_31; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_33 = _Inst_decode_T_9 ? 7'h44 : _Inst_decode_T_32; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_34 = _Inst_decode_T_7 ? 7'h40 : _Inst_decode_T_33; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_35 = _Inst_decode_T_5 ? 7'h40 : _Inst_decode_T_34; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_36 = _Inst_decode_T_3 ? 7'h41 : _Inst_decode_T_35; // @[Lookup.scala 34:39]
  wire  _srctype_T_1 = 4'h8 == Inst_decode_0; // @[Lookup.scala 31:38]
  wire [3:0] _srctype_T_2 = Inst_decode_0 & 4'h7; // @[Lookup.scala 31:38]
  wire  _srctype_T_3 = 4'h7 == _srctype_T_2; // @[Lookup.scala 31:38]
  wire [3:0] _srctype_T_4 = Inst_decode_0 & 4'h3; // @[Lookup.scala 31:38]
  wire  _srctype_T_5 = 4'h3 == _srctype_T_4; // @[Lookup.scala 31:38]
  wire [1:0] _srctype_T_12 = _srctype_T_5 ? 2'h2 : 2'h0; // @[Lookup.scala 34:39]
  wire [1:0] _srctype_T_13 = _srctype_T_3 ? 2'h2 : _srctype_T_12; // @[Lookup.scala 34:39]
  wire [1:0] srctype_0 = _srctype_T_1 ? 2'h0 : _srctype_T_13; // @[Lookup.scala 34:39]
  wire  srctype_1 = _srctype_T_1 | (_srctype_T_3 | _srctype_T_5); // @[Lookup.scala 34:39]
  wire [1:0] _io_ctrlIO_src1type_T_2 = io_inst[6:0] == 7'h37 ? 2'h3 : srctype_0; // @[IDU.scala 72:28]
  wire  sign = io_inst[31]; // @[util.scala 9:19]
  wire [51:0] _T_2 = sign ? 52'hfffffffffffff : 52'h0; // @[Bitwise.scala 77:12]
  wire [63:0] _T_3 = {_T_2,io_inst[31:20]}; // @[Cat.scala 33:92]
  wire [19:0] _T_7 = {io_inst[19:12],io_inst[20],io_inst[30:21],1'h0}; // @[Cat.scala 33:92]
  wire  sign_1 = _T_7[19]; // @[util.scala 9:19]
  wire [43:0] _T_9 = sign_1 ? 44'hfffffffffff : 44'h0; // @[Bitwise.scala 77:12]
  wire [63:0] _T_10 = {_T_9,io_inst[19:12],io_inst[20],io_inst[30:21],1'h0}; // @[Cat.scala 33:92]
  wire [31:0] _T_13 = {io_inst[31:12],12'h0}; // @[Cat.scala 33:92]
  wire  sign_2 = _T_13[31]; // @[util.scala 9:19]
  wire [31:0] _T_15 = sign_2 ? 32'hffffffff : 32'h0; // @[Bitwise.scala 77:12]
  wire [63:0] _T_16 = {_T_15,io_inst[31:12],12'h0}; // @[Cat.scala 33:92]
  wire [63:0] _imm_list_T_6 = _srctype_T_5 ? _T_16 : 64'h0; // @[Lookup.scala 34:39]
  wire [63:0] _imm_list_T_7 = _srctype_T_3 ? _T_10 : _imm_list_T_6; // @[Lookup.scala 34:39]
  assign io_ctrlIO_src1type = {{1'd0}, _io_ctrlIO_src1type_T_2}; // @[IDU.scala 72:22]
  assign io_ctrlIO_src2type = {{2'd0}, srctype_1}; // @[IDU.scala 73:22]
  assign io_ctrlIO_src1 = io_inst[19:15]; // @[IDU.scala 48:30]
  assign io_ctrlIO_src2 = io_inst[24:20]; // @[IDU.scala 48:47]
  assign io_ctrlIO_rd = io_inst[11:7]; // @[IDU.scala 48:64]
  assign io_ctrlIO_futype = {{1'd0}, Inst_decode_1}; // @[IDU.scala 53:22]
  assign io_ctrlIO_aluoptype = _Inst_decode_T_1 ? 7'h40 : _Inst_decode_T_36; // @[Lookup.scala 34:39]
  assign io_ctrlIO_Imm = _srctype_T_1 ? _T_3 : _imm_list_T_7; // @[Lookup.scala 34:39]
endmodule
module EXU(
  input  [2:0]  io_src1type,
  input  [2:0]  io_src2type,
  input  [2:0]  io_futype,
  input  [6:0]  io_aluoptype,
  input  [63:0] io_Imm,
  input  [63:0] io1_REG1,
  input  [63:0] io1_REG2,
  input  [63:0] io1_PC,
  output [63:0] io1_result,
  output        io1_is_break,
  output        io1_is_jump,
  output [63:0] io1_dnpc
);
  wire [63:0] _GEN_1 = 3'h2 == io_src1type ? io1_PC : 64'h0; // @[EXU.scala 46:22 51:12]
  wire [63:0] src1 = 3'h0 == io_src1type ? io1_REG1 : _GEN_1; // @[EXU.scala 46:22 48:12]
  wire [63:0] _GEN_3 = 3'h1 == io_src2type ? io_Imm : 64'h0; // @[EXU.scala 57:22 62:12]
  wire [63:0] src2 = 3'h0 == io_src2type ? io1_REG2 : _GEN_3; // @[EXU.scala 57:22 59:11]
  wire [63:0] _alu_result_T_1 = src1 + src2; // @[EXU.scala 80:25]
  wire [63:0] _alu_result_T_2 = src1 | src2; // @[EXU.scala 83:26]
  wire [63:0] _GEN_5 = 7'h44 == io_aluoptype ? _alu_result_T_2 : 64'h0; // @[EXU.scala 78:23 83:18]
  wire [63:0] alu_result = 7'h40 == io_aluoptype ? _alu_result_T_1 : _GEN_5; // @[EXU.scala 78:23 80:17]
  wire [63:0] _jump_result_T_2 = io1_PC + 64'h4; // @[EXU.scala 90:52]
  wire [63:0] jump_result = io_futype == 3'h3 ? _jump_result_T_2 : 64'h0; // @[EXU.scala 90:21]
  wire [63:0] _GEN_9 = 3'h3 == io_futype ? jump_result : 64'h0; // @[EXU.scala 93:20 98:18]
  wire [63:0] _dnpc_T_5 = {_alu_result_T_1[63:1],1'h0}; // @[Cat.scala 33:92]
  wire [63:0] _GEN_11 = 7'h48 == io_aluoptype ? _dnpc_T_5 : 64'h0; // @[EXU.scala 112:23 117:12]
  assign io1_result = 3'h0 == io_futype ? alu_result : _GEN_9; // @[EXU.scala 93:20 95:18]
  assign io1_is_break = io_aluoptype == 7'h42; // @[EXU.scala 77:35]
  assign io1_is_jump = io_futype == 3'h3; // @[EXU.scala 109:31]
  assign io1_dnpc = 7'h19 == io_aluoptype ? _alu_result_T_1 : _GEN_11; // @[EXU.scala 112:23 114:12]
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
  wire  IF_clock; // @[CPUTop.scala 17:16]
  wire  IF_reset; // @[CPUTop.scala 17:16]
  wire [63:0] IF_io_dnpc; // @[CPUTop.scala 17:16]
  wire  IF_io_is_jump; // @[CPUTop.scala 17:16]
  wire [63:0] IF_io_pc; // @[CPUTop.scala 17:16]
  wire [31:0] ID_io_inst; // @[CPUTop.scala 19:18]
  wire [2:0] ID_io_ctrlIO_src1type; // @[CPUTop.scala 19:18]
  wire [2:0] ID_io_ctrlIO_src2type; // @[CPUTop.scala 19:18]
  wire [4:0] ID_io_ctrlIO_src1; // @[CPUTop.scala 19:18]
  wire [4:0] ID_io_ctrlIO_src2; // @[CPUTop.scala 19:18]
  wire [4:0] ID_io_ctrlIO_rd; // @[CPUTop.scala 19:18]
  wire [2:0] ID_io_ctrlIO_futype; // @[CPUTop.scala 19:18]
  wire [6:0] ID_io_ctrlIO_aluoptype; // @[CPUTop.scala 19:18]
  wire [63:0] ID_io_ctrlIO_Imm; // @[CPUTop.scala 19:18]
  wire [2:0] EX_io_src1type; // @[CPUTop.scala 21:18]
  wire [2:0] EX_io_src2type; // @[CPUTop.scala 21:18]
  wire [2:0] EX_io_futype; // @[CPUTop.scala 21:18]
  wire [6:0] EX_io_aluoptype; // @[CPUTop.scala 21:18]
  wire [63:0] EX_io_Imm; // @[CPUTop.scala 21:18]
  wire [63:0] EX_io1_REG1; // @[CPUTop.scala 21:18]
  wire [63:0] EX_io1_REG2; // @[CPUTop.scala 21:18]
  wire [63:0] EX_io1_PC; // @[CPUTop.scala 21:18]
  wire [63:0] EX_io1_result; // @[CPUTop.scala 21:18]
  wire  EX_io1_is_break; // @[CPUTop.scala 21:18]
  wire  EX_io1_is_jump; // @[CPUTop.scala 21:18]
  wire [63:0] EX_io1_dnpc; // @[CPUTop.scala 21:18]
  wire  DIP_is_break; // @[CPUTop.scala 23:19]
  wire [63:0] DIP_rf_0; // @[CPUTop.scala 23:19]
  wire [63:0] DIP_rf_1; // @[CPUTop.scala 23:19]
  wire [63:0] DIP_rf_2; // @[CPUTop.scala 23:19]
  wire [63:0] DIP_rf_3; // @[CPUTop.scala 23:19]
  wire [63:0] DIP_rf_4; // @[CPUTop.scala 23:19]
  wire [63:0] DIP_rf_5; // @[CPUTop.scala 23:19]
  wire [63:0] DIP_rf_6; // @[CPUTop.scala 23:19]
  wire [63:0] DIP_rf_7; // @[CPUTop.scala 23:19]
  wire [63:0] DIP_rf_8; // @[CPUTop.scala 23:19]
  wire [63:0] DIP_rf_9; // @[CPUTop.scala 23:19]
  wire [63:0] DIP_rf_10; // @[CPUTop.scala 23:19]
  wire [63:0] DIP_rf_11; // @[CPUTop.scala 23:19]
  wire [63:0] DIP_rf_12; // @[CPUTop.scala 23:19]
  wire [63:0] DIP_rf_13; // @[CPUTop.scala 23:19]
  wire [63:0] DIP_rf_14; // @[CPUTop.scala 23:19]
  wire [63:0] DIP_rf_15; // @[CPUTop.scala 23:19]
  wire [63:0] DIP_rf_16; // @[CPUTop.scala 23:19]
  wire [63:0] DIP_rf_17; // @[CPUTop.scala 23:19]
  wire [63:0] DIP_rf_18; // @[CPUTop.scala 23:19]
  wire [63:0] DIP_rf_19; // @[CPUTop.scala 23:19]
  wire [63:0] DIP_rf_20; // @[CPUTop.scala 23:19]
  wire [63:0] DIP_rf_21; // @[CPUTop.scala 23:19]
  wire [63:0] DIP_rf_22; // @[CPUTop.scala 23:19]
  wire [63:0] DIP_rf_23; // @[CPUTop.scala 23:19]
  wire [63:0] DIP_rf_24; // @[CPUTop.scala 23:19]
  wire [63:0] DIP_rf_25; // @[CPUTop.scala 23:19]
  wire [63:0] DIP_rf_26; // @[CPUTop.scala 23:19]
  wire [63:0] DIP_rf_27; // @[CPUTop.scala 23:19]
  wire [63:0] DIP_rf_28; // @[CPUTop.scala 23:19]
  wire [63:0] DIP_rf_29; // @[CPUTop.scala 23:19]
  wire [63:0] DIP_rf_30; // @[CPUTop.scala 23:19]
  wire [63:0] DIP_rf_31; // @[CPUTop.scala 23:19]
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
  wire [4:0] src1add = ID_io_ctrlIO_src1; // @[CPUTop.scala 34:21 43:10]
  wire [4:0] src2add = ID_io_ctrlIO_src2; // @[CPUTop.scala 35:21 44:10]
  IFU IF ( // @[CPUTop.scala 17:16]
    .clock(IF_clock),
    .reset(IF_reset),
    .io_dnpc(IF_io_dnpc),
    .io_is_jump(IF_io_is_jump),
    .io_pc(IF_io_pc)
  );
  IDU ID ( // @[CPUTop.scala 19:18]
    .io_inst(ID_io_inst),
    .io_ctrlIO_src1type(ID_io_ctrlIO_src1type),
    .io_ctrlIO_src2type(ID_io_ctrlIO_src2type),
    .io_ctrlIO_src1(ID_io_ctrlIO_src1),
    .io_ctrlIO_src2(ID_io_ctrlIO_src2),
    .io_ctrlIO_rd(ID_io_ctrlIO_rd),
    .io_ctrlIO_futype(ID_io_ctrlIO_futype),
    .io_ctrlIO_aluoptype(ID_io_ctrlIO_aluoptype),
    .io_ctrlIO_Imm(ID_io_ctrlIO_Imm)
  );
  EXU EX ( // @[CPUTop.scala 21:18]
    .io_src1type(EX_io_src1type),
    .io_src2type(EX_io_src2type),
    .io_futype(EX_io_futype),
    .io_aluoptype(EX_io_aluoptype),
    .io_Imm(EX_io_Imm),
    .io1_REG1(EX_io1_REG1),
    .io1_REG2(EX_io1_REG2),
    .io1_PC(EX_io1_PC),
    .io1_result(EX_io1_result),
    .io1_is_break(EX_io1_is_break),
    .io1_is_jump(EX_io1_is_jump),
    .io1_dnpc(EX_io1_dnpc)
  );
  DIP_model DIP ( // @[CPUTop.scala 23:19]
    .is_break(DIP_is_break),
    .rf_0(DIP_rf_0),
    .rf_1(DIP_rf_1),
    .rf_2(DIP_rf_2),
    .rf_3(DIP_rf_3),
    .rf_4(DIP_rf_4),
    .rf_5(DIP_rf_5),
    .rf_6(DIP_rf_6),
    .rf_7(DIP_rf_7),
    .rf_8(DIP_rf_8),
    .rf_9(DIP_rf_9),
    .rf_10(DIP_rf_10),
    .rf_11(DIP_rf_11),
    .rf_12(DIP_rf_12),
    .rf_13(DIP_rf_13),
    .rf_14(DIP_rf_14),
    .rf_15(DIP_rf_15),
    .rf_16(DIP_rf_16),
    .rf_17(DIP_rf_17),
    .rf_18(DIP_rf_18),
    .rf_19(DIP_rf_19),
    .rf_20(DIP_rf_20),
    .rf_21(DIP_rf_21),
    .rf_22(DIP_rf_22),
    .rf_23(DIP_rf_23),
    .rf_24(DIP_rf_24),
    .rf_25(DIP_rf_25),
    .rf_26(DIP_rf_26),
    .rf_27(DIP_rf_27),
    .rf_28(DIP_rf_28),
    .rf_29(DIP_rf_29),
    .rf_30(DIP_rf_30),
    .rf_31(DIP_rf_31)
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
  assign io_pc = IF_io_pc; // @[CPUTop.scala 27:9]
  assign io_result = EX_io1_result; // @[CPUTop.scala 47:13]
  assign IF_clock = clock;
  assign IF_reset = reset;
  assign IF_io_dnpc = EX_io1_dnpc; // @[CPUTop.scala 39:14]
  assign IF_io_is_jump = EX_io1_is_jump; // @[CPUTop.scala 40:17]
  assign ID_io_inst = io_inst; // @[CPUTop.scala 29:14]
  assign EX_io_src1type = ID_io_ctrlIO_src1type; // @[CPUTop.scala 31:16]
  assign EX_io_src2type = ID_io_ctrlIO_src2type; // @[CPUTop.scala 31:16]
  assign EX_io_futype = ID_io_ctrlIO_futype; // @[CPUTop.scala 31:16]
  assign EX_io_aluoptype = ID_io_ctrlIO_aluoptype; // @[CPUTop.scala 31:16]
  assign EX_io_Imm = ID_io_ctrlIO_Imm; // @[CPUTop.scala 31:16]
  assign EX_io1_REG1 = src1add == 5'h0 ? 64'h0 : rf_EX_io1_REG1_MPORT_data; // @[RF.scala 7:37]
  assign EX_io1_REG2 = src2add == 5'h0 ? 64'h0 : rf_EX_io1_REG2_MPORT_data; // @[RF.scala 7:37]
  assign EX_io1_PC = IF_io_pc; // @[CPUTop.scala 32:13]
  assign DIP_is_break = EX_io1_is_break; // @[CPUTop.scala 49:19]
  assign DIP_rf_0 = 64'h0;
  assign DIP_rf_1 = 64'h0;
  assign DIP_rf_2 = 64'h0;
  assign DIP_rf_3 = 64'h0;
  assign DIP_rf_4 = 64'h0;
  assign DIP_rf_5 = 64'h0;
  assign DIP_rf_6 = 64'h0;
  assign DIP_rf_7 = 64'h0;
  assign DIP_rf_8 = 64'h0;
  assign DIP_rf_9 = 64'h0;
  assign DIP_rf_10 = 64'h0;
  assign DIP_rf_11 = 64'h0;
  assign DIP_rf_12 = 64'h0;
  assign DIP_rf_13 = 64'h0;
  assign DIP_rf_14 = 64'h0;
  assign DIP_rf_15 = 64'h0;
  assign DIP_rf_16 = 64'h0;
  assign DIP_rf_17 = 64'h0;
  assign DIP_rf_18 = 64'h0;
  assign DIP_rf_19 = 64'h0;
  assign DIP_rf_20 = 64'h0;
  assign DIP_rf_21 = 64'h0;
  assign DIP_rf_22 = 64'h0;
  assign DIP_rf_23 = 64'h0;
  assign DIP_rf_24 = 64'h0;
  assign DIP_rf_25 = 64'h0;
  assign DIP_rf_26 = 64'h0;
  assign DIP_rf_27 = 64'h0;
  assign DIP_rf_28 = 64'h0;
  assign DIP_rf_29 = 64'h0;
  assign DIP_rf_30 = 64'h0;
  assign DIP_rf_31 = 64'h0;
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
