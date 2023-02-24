module IFU(
  input         clock,
  input         reset,
  input  [63:0] io_dnpc,
  input         io_is_jump,
  input         io_is_branch,
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
    end else if (io_is_jump | io_is_branch) begin // @[IFU.scala 14:14]
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
  output [63:0] io_ctrlIO_Imm,
  output        io_rd_en,
  output        io_mem_we
);
  wire [4:0] rd = io_inst[11:7]; // @[IDU.scala 54:64]
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
  wire  _Inst_decode_T_15 = 32'h3003 == _Inst_decode_T; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_17 = 32'h3023 == _Inst_decode_T; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_19 = 32'h2003 == _Inst_decode_T; // @[Lookup.scala 31:38]
  wire [31:0] _Inst_decode_T_20 = io_inst & 32'hfe00707f; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_21 = 32'h3b == _Inst_decode_T_20; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_23 = 32'h40000033 == _Inst_decode_T_20; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_25 = 32'h3013 == _Inst_decode_T; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_27 = 32'h63 == _Inst_decode_T; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_29 = 32'h1063 == _Inst_decode_T; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_31 = 32'h1b == _Inst_decode_T; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_33 = 32'h33 == _Inst_decode_T_20; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_35 = 32'h40005013 == _Inst_decode_T_2; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_37 = 32'h4003 == _Inst_decode_T; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_39 = 32'h1023 == _Inst_decode_T; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_41 = 32'h7033 == _Inst_decode_T_20; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_43 = 32'h3033 == _Inst_decode_T_20; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_45 = 32'h4013 == _Inst_decode_T; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_47 = 32'h103b == _Inst_decode_T_20; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_49 = 32'h7013 == _Inst_decode_T; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_51 = 32'h6033 == _Inst_decode_T_20; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_53 = 32'h23 == _Inst_decode_T; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_55 = 32'h100073 == io_inst; // @[Lookup.scala 31:38]
  wire [3:0] _Inst_decode_T_57 = _Inst_decode_T_53 ? 4'h9 : 4'h0; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_58 = _Inst_decode_T_51 ? 4'h5 : _Inst_decode_T_57; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_59 = _Inst_decode_T_49 ? 4'h8 : _Inst_decode_T_58; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_60 = _Inst_decode_T_47 ? 4'h5 : _Inst_decode_T_59; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_61 = _Inst_decode_T_45 ? 4'h8 : _Inst_decode_T_60; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_62 = _Inst_decode_T_43 ? 4'h5 : _Inst_decode_T_61; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_63 = _Inst_decode_T_41 ? 4'h5 : _Inst_decode_T_62; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_64 = _Inst_decode_T_39 ? 4'h9 : _Inst_decode_T_63; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_65 = _Inst_decode_T_37 ? 4'h8 : _Inst_decode_T_64; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_66 = _Inst_decode_T_35 ? 4'h8 : _Inst_decode_T_65; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_67 = _Inst_decode_T_33 ? 4'h5 : _Inst_decode_T_66; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_68 = _Inst_decode_T_31 ? 4'h8 : _Inst_decode_T_67; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_69 = _Inst_decode_T_29 ? 4'hb : _Inst_decode_T_68; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_70 = _Inst_decode_T_27 ? 4'hb : _Inst_decode_T_69; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_71 = _Inst_decode_T_25 ? 4'h8 : _Inst_decode_T_70; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_72 = _Inst_decode_T_23 ? 4'h5 : _Inst_decode_T_71; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_73 = _Inst_decode_T_21 ? 4'h5 : _Inst_decode_T_72; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_74 = _Inst_decode_T_19 ? 4'h8 : _Inst_decode_T_73; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_75 = _Inst_decode_T_17 ? 4'h9 : _Inst_decode_T_74; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_76 = _Inst_decode_T_15 ? 4'h8 : _Inst_decode_T_75; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_77 = _Inst_decode_T_13 ? 4'h8 : _Inst_decode_T_76; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_78 = _Inst_decode_T_11 ? 4'h7 : _Inst_decode_T_77; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_79 = _Inst_decode_T_9 ? 4'h8 : _Inst_decode_T_78; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_80 = _Inst_decode_T_7 ? 4'h3 : _Inst_decode_T_79; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_81 = _Inst_decode_T_5 ? 4'h3 : _Inst_decode_T_80; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_82 = _Inst_decode_T_3 ? 4'h8 : _Inst_decode_T_81; // @[Lookup.scala 34:39]
  wire [3:0] Inst_decode_0 = _Inst_decode_T_1 ? 4'h8 : _Inst_decode_T_82; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_84 = _Inst_decode_T_53 ? 3'h4 : 3'h0; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_85 = _Inst_decode_T_51 ? 3'h0 : _Inst_decode_T_84; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_86 = _Inst_decode_T_49 ? 3'h0 : _Inst_decode_T_85; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_87 = _Inst_decode_T_47 ? 3'h1 : _Inst_decode_T_86; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_88 = _Inst_decode_T_45 ? 3'h0 : _Inst_decode_T_87; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_89 = _Inst_decode_T_43 ? 3'h5 : _Inst_decode_T_88; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_90 = _Inst_decode_T_41 ? 3'h0 : _Inst_decode_T_89; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_91 = _Inst_decode_T_39 ? 3'h4 : _Inst_decode_T_90; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_92 = _Inst_decode_T_37 ? 3'h4 : _Inst_decode_T_91; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_93 = _Inst_decode_T_35 ? 3'h1 : _Inst_decode_T_92; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_94 = _Inst_decode_T_33 ? 3'h0 : _Inst_decode_T_93; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_95 = _Inst_decode_T_31 ? 3'h0 : _Inst_decode_T_94; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_96 = _Inst_decode_T_29 ? 3'h2 : _Inst_decode_T_95; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_97 = _Inst_decode_T_27 ? 3'h2 : _Inst_decode_T_96; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_98 = _Inst_decode_T_25 ? 3'h5 : _Inst_decode_T_97; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_99 = _Inst_decode_T_23 ? 3'h0 : _Inst_decode_T_98; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_100 = _Inst_decode_T_21 ? 3'h0 : _Inst_decode_T_99; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_101 = _Inst_decode_T_19 ? 3'h4 : _Inst_decode_T_100; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_102 = _Inst_decode_T_17 ? 3'h4 : _Inst_decode_T_101; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_103 = _Inst_decode_T_15 ? 3'h4 : _Inst_decode_T_102; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_104 = _Inst_decode_T_13 ? 3'h3 : _Inst_decode_T_103; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_105 = _Inst_decode_T_11 ? 3'h3 : _Inst_decode_T_104; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_106 = _Inst_decode_T_9 ? 3'h0 : _Inst_decode_T_105; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_107 = _Inst_decode_T_7 ? 3'h0 : _Inst_decode_T_106; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_108 = _Inst_decode_T_5 ? 3'h0 : _Inst_decode_T_107; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_109 = _Inst_decode_T_3 ? 3'h1 : _Inst_decode_T_108; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_110 = _Inst_decode_T_55 ? 7'h42 : 7'h0; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_111 = _Inst_decode_T_53 ? 7'h74 : _Inst_decode_T_110; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_112 = _Inst_decode_T_51 ? 7'h44 : _Inst_decode_T_111; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_113 = _Inst_decode_T_49 ? 7'h71 : _Inst_decode_T_112; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_114 = _Inst_decode_T_47 ? 7'h73 : _Inst_decode_T_113; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_115 = _Inst_decode_T_45 ? 7'h72 : _Inst_decode_T_114; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_116 = _Inst_decode_T_43 ? 7'h6a : _Inst_decode_T_115; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_117 = _Inst_decode_T_41 ? 7'h71 : _Inst_decode_T_116; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_118 = _Inst_decode_T_39 ? 7'h70 : _Inst_decode_T_117; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_119 = _Inst_decode_T_37 ? 7'h6f : _Inst_decode_T_118; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_120 = _Inst_decode_T_35 ? 7'h6e : _Inst_decode_T_119; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_121 = _Inst_decode_T_33 ? 7'h40 : _Inst_decode_T_120; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_122 = _Inst_decode_T_31 ? 7'h6d : _Inst_decode_T_121; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_123 = _Inst_decode_T_29 ? 7'h6c : _Inst_decode_T_122; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_124 = _Inst_decode_T_27 ? 7'h6b : _Inst_decode_T_123; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_125 = _Inst_decode_T_25 ? 7'h6a : _Inst_decode_T_124; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_126 = _Inst_decode_T_23 ? 7'h69 : _Inst_decode_T_125; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_127 = _Inst_decode_T_21 ? 7'h68 : _Inst_decode_T_126; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_128 = _Inst_decode_T_19 ? 7'h47 : _Inst_decode_T_127; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_129 = _Inst_decode_T_17 ? 7'h46 : _Inst_decode_T_128; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_130 = _Inst_decode_T_15 ? 7'h45 : _Inst_decode_T_129; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_131 = _Inst_decode_T_13 ? 7'h48 : _Inst_decode_T_130; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_132 = _Inst_decode_T_11 ? 7'h19 : _Inst_decode_T_131; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_133 = _Inst_decode_T_9 ? 7'h44 : _Inst_decode_T_132; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_134 = _Inst_decode_T_7 ? 7'h40 : _Inst_decode_T_133; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_135 = _Inst_decode_T_5 ? 7'h40 : _Inst_decode_T_134; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_136 = _Inst_decode_T_3 ? 7'h41 : _Inst_decode_T_135; // @[Lookup.scala 34:39]
  wire [6:0] Inst_decode_2 = _Inst_decode_T_1 ? 7'h40 : _Inst_decode_T_136; // @[Lookup.scala 34:39]
  wire  _Inst_decode_T_145 = _Inst_decode_T_39 ? 1'h0 : _Inst_decode_T_41 | (_Inst_decode_T_43 | (_Inst_decode_T_45 | (
    _Inst_decode_T_47 | (_Inst_decode_T_49 | _Inst_decode_T_51)))); // @[Lookup.scala 34:39]
  wire  _Inst_decode_T_150 = _Inst_decode_T_29 ? 1'h0 : _Inst_decode_T_31 | (_Inst_decode_T_33 | (_Inst_decode_T_35 | (
    _Inst_decode_T_37 | _Inst_decode_T_145))); // @[Lookup.scala 34:39]
  wire  _Inst_decode_T_151 = _Inst_decode_T_27 ? 1'h0 : _Inst_decode_T_150; // @[Lookup.scala 34:39]
  wire  _Inst_decode_T_156 = _Inst_decode_T_17 ? 1'h0 : _Inst_decode_T_19 | (_Inst_decode_T_21 | (_Inst_decode_T_23 | (
    _Inst_decode_T_25 | _Inst_decode_T_151))); // @[Lookup.scala 34:39]
  wire  _srctype1_T = 4'h8 == Inst_decode_0; // @[util.scala 30:32]
  wire  _srctype1_T_2 = 4'h9 == Inst_decode_0; // @[util.scala 30:32]
  wire  _srctype1_T_3 = 4'hb == Inst_decode_0; // @[util.scala 30:32]
  wire  _srctype1_T_4 = 4'h7 == Inst_decode_0; // @[util.scala 30:32]
  wire  _srctype1_T_5 = 4'h3 == Inst_decode_0; // @[util.scala 30:32]
  wire [1:0] _srctype1_T_11 = _srctype1_T_4 ? 2'h2 : 2'h0; // @[Mux.scala 27:73]
  wire [1:0] _srctype1_T_12 = _srctype1_T_5 ? 2'h2 : 2'h0; // @[Mux.scala 27:73]
  wire [1:0] srctype1 = _srctype1_T_11 | _srctype1_T_12; // @[Mux.scala 27:73]
  wire  srctype2 = _srctype1_T | _srctype1_T_4 | _srctype1_T_5; // @[Mux.scala 27:73]
  wire [1:0] _io_ctrlIO_src1type_T_2 = io_inst[6:0] == 7'h37 ? 2'h3 : srctype1; // @[IDU.scala 83:28]
  wire  sign = io_inst[31]; // @[util.scala 9:19]
  wire [51:0] _T_2 = sign ? 52'hfffffffffffff : 52'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _T_3 = {_T_2,io_inst[31:20]}; // @[Cat.scala 31:58]
  wire [19:0] _T_7 = {io_inst[19:12],io_inst[20],io_inst[30:21],1'h0}; // @[Cat.scala 31:58]
  wire  sign_1 = _T_7[19]; // @[util.scala 9:19]
  wire [43:0] _T_9 = sign_1 ? 44'hfffffffffff : 44'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _T_10 = {_T_9,io_inst[19:12],io_inst[20],io_inst[30:21],1'h0}; // @[Cat.scala 31:58]
  wire [31:0] _T_13 = {io_inst[31:12],12'h0}; // @[Cat.scala 31:58]
  wire  sign_2 = _T_13[31]; // @[util.scala 9:19]
  wire [31:0] _T_15 = sign_2 ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _T_16 = {_T_15,io_inst[31:12],12'h0}; // @[Cat.scala 31:58]
  wire [11:0] _T_19 = {io_inst[31:25],rd}; // @[Cat.scala 31:58]
  wire  sign_3 = _T_19[11]; // @[util.scala 9:19]
  wire [51:0] _T_21 = sign_3 ? 52'hfffffffffffff : 52'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _T_22 = {_T_21,io_inst[31:25],rd}; // @[Cat.scala 31:58]
  wire [12:0] _T_27 = {io_inst[31],io_inst[7],io_inst[30:25],io_inst[11:8],1'h0}; // @[Cat.scala 31:58]
  wire  sign_4 = _T_27[12]; // @[util.scala 9:19]
  wire [50:0] _T_29 = sign_4 ? 51'h7ffffffffffff : 51'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _T_30 = {_T_29,io_inst[31],io_inst[7],io_inst[30:25],io_inst[11:8],1'h0}; // @[Cat.scala 31:58]
  wire [63:0] _imm_T_5 = _srctype1_T ? _T_3 : 64'h0; // @[Mux.scala 27:73]
  wire [63:0] _imm_T_6 = _srctype1_T_4 ? _T_10 : 64'h0; // @[Mux.scala 27:73]
  wire [63:0] _imm_T_7 = _srctype1_T_5 ? _T_16 : 64'h0; // @[Mux.scala 27:73]
  wire [63:0] _imm_T_8 = _srctype1_T_2 ? _T_22 : 64'h0; // @[Mux.scala 27:73]
  wire [63:0] _imm_T_9 = _srctype1_T_3 ? _T_30 : 64'h0; // @[Mux.scala 27:73]
  wire [63:0] _imm_T_10 = _imm_T_5 | _imm_T_6; // @[Mux.scala 27:73]
  wire [63:0] _imm_T_11 = _imm_T_10 | _imm_T_7; // @[Mux.scala 27:73]
  wire [63:0] _imm_T_12 = _imm_T_11 | _imm_T_8; // @[Mux.scala 27:73]
  assign io_ctrlIO_src1type = {{1'd0}, _io_ctrlIO_src1type_T_2}; // @[IDU.scala 83:22]
  assign io_ctrlIO_src2type = {{2'd0}, srctype2}; // @[IDU.scala 84:22]
  assign io_ctrlIO_src1 = io_inst[19:15]; // @[IDU.scala 54:30]
  assign io_ctrlIO_src2 = io_inst[24:20]; // @[IDU.scala 54:47]
  assign io_ctrlIO_rd = io_inst[11:7]; // @[IDU.scala 54:64]
  assign io_ctrlIO_futype = _Inst_decode_T_1 ? 3'h0 : _Inst_decode_T_109; // @[Lookup.scala 34:39]
  assign io_ctrlIO_aluoptype = _Inst_decode_T_1 ? 7'h40 : _Inst_decode_T_136; // @[Lookup.scala 34:39]
  assign io_ctrlIO_Imm = _imm_T_12 | _imm_T_9; // @[Mux.scala 27:73]
  assign io_rd_en = _Inst_decode_T_1 | (_Inst_decode_T_3 | (_Inst_decode_T_5 | (_Inst_decode_T_7 | (_Inst_decode_T_9 | (
    _Inst_decode_T_11 | (_Inst_decode_T_13 | (_Inst_decode_T_15 | _Inst_decode_T_156))))))); // @[Lookup.scala 34:39]
  assign io_mem_we = Inst_decode_2 == 7'h45 | Inst_decode_2 == 7'h47 | Inst_decode_2 == 7'h6f ? 1'h0 : 1'h1; // @[IDU.scala 97:19]
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
  output        io1_is_branch,
  output [63:0] io1_dnpc,
  output [63:0] io1_addr,
  input  [63:0] io1_rdata,
  output [63:0] io1_wdata,
  output [7:0]  io1_wmask
);
  wire [63:0] _GEN_1 = 3'h2 == io_src1type ? io1_PC : 64'h0; // @[EXU.scala 74:22 79:12]
  wire [63:0] src1 = 3'h0 == io_src1type ? io1_REG1 : _GEN_1; // @[EXU.scala 74:22 76:12]
  wire [63:0] _GEN_3 = 3'h1 == io_src2type ? io_Imm : 64'h0; // @[EXU.scala 85:22 90:12]
  wire [63:0] src2 = 3'h0 == io_src2type ? io1_REG2 : _GEN_3; // @[EXU.scala 85:22 87:11]
  wire  _T_67 = 7'h45 == io_aluoptype; // @[EXU.scala 118:23]
  wire [63:0] _addr_temp_T_1 = src1 + src2; // @[EXU.scala 120:25]
  wire  _T_68 = 7'h46 == io_aluoptype; // @[EXU.scala 118:23]
  wire [63:0] _addr_temp_T_3 = src1 + io_Imm; // @[EXU.scala 123:24]
  wire  _T_69 = 7'h70 == io_aluoptype; // @[EXU.scala 118:23]
  wire  _T_70 = 7'h47 == io_aluoptype; // @[EXU.scala 118:23]
  wire  _T_71 = 7'h6f == io_aluoptype; // @[EXU.scala 118:23]
  wire  _T_72 = 7'h74 == io_aluoptype; // @[EXU.scala 118:23]
  wire [63:0] _GEN_5 = 7'h74 == io_aluoptype ? _addr_temp_T_3 : 64'h0; // @[EXU.scala 118:23 135:17]
  wire [63:0] _GEN_6 = 7'h6f == io_aluoptype ? _addr_temp_T_3 : _GEN_5; // @[EXU.scala 118:23 132:17]
  wire [63:0] _GEN_7 = 7'h47 == io_aluoptype ? _addr_temp_T_3 : _GEN_6; // @[EXU.scala 118:23 129:17]
  wire [63:0] _GEN_8 = 7'h70 == io_aluoptype ? _addr_temp_T_3 : _GEN_7; // @[EXU.scala 118:23 126:17]
  wire [63:0] _GEN_9 = 7'h46 == io_aluoptype ? _addr_temp_T_3 : _GEN_8; // @[EXU.scala 118:23 123:17]
  wire [63:0] addr_temp = 7'h45 == io_aluoptype ? _addr_temp_T_1 : _GEN_9; // @[EXU.scala 118:23 120:17]
  wire  _T_6 = addr_temp[2:0] == 3'h0; // @[EXU.scala 98:22]
  wire  _T_8 = addr_temp[2:0] == 3'h1; // @[EXU.scala 99:22]
  wire  _T_10 = addr_temp[2:0] == 3'h2; // @[EXU.scala 100:22]
  wire  _T_12 = addr_temp[2:0] == 3'h3; // @[EXU.scala 101:22]
  wire  _T_14 = addr_temp[2:0] == 3'h4; // @[EXU.scala 102:22]
  wire  _T_16 = addr_temp[2:0] == 3'h5; // @[EXU.scala 103:22]
  wire  _T_18 = addr_temp[2:0] == 3'h6; // @[EXU.scala 104:22]
  wire  _T_20 = addr_temp[2:0] == 3'h7; // @[EXU.scala 105:22]
  wire [63:0] _T_25 = {56'h0,src2[7:0]}; // @[Cat.scala 31:58]
  wire [63:0] _T_31 = {48'h0,src2[7:0],8'h0}; // @[Cat.scala 31:58]
  wire [63:0] _T_37 = {40'h0,src2[7:0],16'h0}; // @[Cat.scala 31:58]
  wire [63:0] _T_43 = {32'h0,src2[7:0],24'h0}; // @[Cat.scala 31:58]
  wire [63:0] _T_49 = {24'h0,src2[7:0],32'h0}; // @[Cat.scala 31:58]
  wire [63:0] _T_55 = {16'h0,src2[7:0],40'h0}; // @[Cat.scala 31:58]
  wire [63:0] _T_61 = {8'h0,src2[7:0],48'h0}; // @[Cat.scala 31:58]
  wire [63:0] _T_66 = {src2[7:0],56'h0}; // @[Cat.scala 31:58]
  wire [63:0] _wdata_temp_T_2 = {48'h0,src2[15:0]}; // @[Cat.scala 31:58]
  wire [63:0] _wdata_temp_T_6 = {32'h0,src2[15:0],16'h0}; // @[Cat.scala 31:58]
  wire [63:0] _wdata_temp_T_10 = {16'h0,src2[15:0],32'h0}; // @[Cat.scala 31:58]
  wire [63:0] _wdata_temp_T_13 = {src2[15:0],48'h0}; // @[Cat.scala 31:58]
  wire [7:0] _GEN_11 = 2'h3 == addr_temp[2:1] ? 8'hc0 : 8'h0; // @[EXU.scala 156:29 170:22]
  wire [63:0] _GEN_12 = 2'h3 == addr_temp[2:1] ? _wdata_temp_T_13 : 64'h0; // @[EXU.scala 156:29 171:22]
  wire [7:0] _GEN_13 = 2'h2 == addr_temp[2:1] ? 8'h30 : _GEN_11; // @[EXU.scala 156:29 166:22]
  wire [63:0] _GEN_14 = 2'h2 == addr_temp[2:1] ? _wdata_temp_T_10 : _GEN_12; // @[EXU.scala 156:29 167:22]
  wire [7:0] _GEN_15 = 2'h1 == addr_temp[2:1] ? 8'hc : _GEN_13; // @[EXU.scala 156:29 162:22]
  wire [63:0] _GEN_16 = 2'h1 == addr_temp[2:1] ? _wdata_temp_T_6 : _GEN_14; // @[EXU.scala 156:29 163:22]
  wire [7:0] _GEN_17 = 2'h0 == addr_temp[2:1] ? 8'h3 : _GEN_15; // @[EXU.scala 156:29 158:22]
  wire [63:0] _GEN_18 = 2'h0 == addr_temp[2:1] ? _wdata_temp_T_2 : _GEN_16; // @[EXU.scala 156:29 159:22]
  wire [7:0] _wmask_temp_T = _T_20 ? 8'h80 : 8'h0; // @[Mux.scala 101:16]
  wire [7:0] _wmask_temp_T_1 = _T_18 ? 8'h40 : _wmask_temp_T; // @[Mux.scala 101:16]
  wire [7:0] _wmask_temp_T_2 = _T_16 ? 8'h20 : _wmask_temp_T_1; // @[Mux.scala 101:16]
  wire [7:0] _wmask_temp_T_3 = _T_14 ? 8'h10 : _wmask_temp_T_2; // @[Mux.scala 101:16]
  wire [7:0] _wmask_temp_T_4 = _T_12 ? 8'h8 : _wmask_temp_T_3; // @[Mux.scala 101:16]
  wire [7:0] _wmask_temp_T_5 = _T_10 ? 8'h4 : _wmask_temp_T_4; // @[Mux.scala 101:16]
  wire [7:0] _wmask_temp_T_6 = _T_8 ? 8'h2 : _wmask_temp_T_5; // @[Mux.scala 101:16]
  wire [7:0] _wmask_temp_T_7 = _T_6 ? 8'h1 : _wmask_temp_T_6; // @[Mux.scala 101:16]
  wire [63:0] _wdata_temp_T_14 = _T_20 ? _T_66 : 64'h0; // @[Mux.scala 101:16]
  wire [63:0] _wdata_temp_T_15 = _T_18 ? _T_61 : _wdata_temp_T_14; // @[Mux.scala 101:16]
  wire [63:0] _wdata_temp_T_16 = _T_16 ? _T_55 : _wdata_temp_T_15; // @[Mux.scala 101:16]
  wire [63:0] _wdata_temp_T_17 = _T_14 ? _T_49 : _wdata_temp_T_16; // @[Mux.scala 101:16]
  wire [63:0] _wdata_temp_T_18 = _T_12 ? _T_43 : _wdata_temp_T_17; // @[Mux.scala 101:16]
  wire [63:0] _wdata_temp_T_19 = _T_10 ? _T_37 : _wdata_temp_T_18; // @[Mux.scala 101:16]
  wire [63:0] _wdata_temp_T_20 = _T_8 ? _T_31 : _wdata_temp_T_19; // @[Mux.scala 101:16]
  wire [63:0] _wdata_temp_T_21 = _T_6 ? _T_25 : _wdata_temp_T_20; // @[Mux.scala 101:16]
  wire [7:0] _GEN_19 = _T_72 ? _wmask_temp_T_7 : 8'h0; // @[EXU.scala 138:24 177:18]
  wire [63:0] _GEN_20 = _T_72 ? _wdata_temp_T_21 : 64'h0; // @[EXU.scala 138:24 178:18]
  wire [7:0] _GEN_21 = _T_69 ? _GEN_17 : _GEN_19; // @[EXU.scala 138:24]
  wire [63:0] _GEN_22 = _T_69 ? _GEN_18 : _GEN_20; // @[EXU.scala 138:24]
  wire [7:0] _GEN_23 = _T_68 ? 8'hff : _GEN_21; // @[EXU.scala 138:24 152:18]
  wire [63:0] _GEN_24 = _T_68 ? src2 : _GEN_22; // @[EXU.scala 138:24 153:18]
  wire [7:0] _GEN_25 = _T_71 ? 8'h0 : _GEN_23; // @[EXU.scala 138:24 148:18]
  wire [63:0] _GEN_26 = _T_71 ? 64'h0 : _GEN_24; // @[EXU.scala 138:24 149:18]
  wire [7:0] _GEN_27 = _T_70 ? 8'h0 : _GEN_25; // @[EXU.scala 138:24 144:18]
  wire [63:0] _GEN_28 = _T_70 ? 64'h0 : _GEN_26; // @[EXU.scala 138:24 145:18]
  wire  mem_result_sign = io1_rdata[63]; // @[util.scala 9:19]
  wire [31:0] _mem_result_T_4 = mem_result_sign ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _mem_result_T_5 = {_mem_result_T_4,io1_rdata[63:32]}; // @[Cat.scala 31:58]
  wire  mem_result_sign_1 = io1_rdata[31]; // @[util.scala 9:19]
  wire [31:0] _mem_result_T_8 = mem_result_sign_1 ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _mem_result_T_9 = {_mem_result_T_8,io1_rdata[31:0]}; // @[Cat.scala 31:58]
  wire [63:0] _mem_result_T_10 = addr_temp[2] ? _mem_result_T_5 : _mem_result_T_9; // @[EXU.scala 197:24]
  wire [63:0] _mem_result_T_11 = _T_20 ? {{56'd0}, io1_rdata[63:56]} : 64'h0; // @[Mux.scala 101:16]
  wire [63:0] _mem_result_T_12 = _T_18 ? {{56'd0}, io1_rdata[55:48]} : _mem_result_T_11; // @[Mux.scala 101:16]
  wire [63:0] _mem_result_T_13 = _T_16 ? {{56'd0}, io1_rdata[47:40]} : _mem_result_T_12; // @[Mux.scala 101:16]
  wire [63:0] _mem_result_T_14 = _T_14 ? {{56'd0}, io1_rdata[39:32]} : _mem_result_T_13; // @[Mux.scala 101:16]
  wire [63:0] _mem_result_T_15 = _T_12 ? {{56'd0}, io1_rdata[31:24]} : _mem_result_T_14; // @[Mux.scala 101:16]
  wire [63:0] _mem_result_T_16 = _T_10 ? {{56'd0}, io1_rdata[23:16]} : _mem_result_T_15; // @[Mux.scala 101:16]
  wire [63:0] _mem_result_T_17 = _T_8 ? {{56'd0}, io1_rdata[15:8]} : _mem_result_T_16; // @[Mux.scala 101:16]
  wire [63:0] _mem_result_T_18 = _T_6 ? {{56'd0}, io1_rdata[7:0]} : _mem_result_T_17; // @[Mux.scala 101:16]
  wire [63:0] _GEN_31 = _T_71 ? _mem_result_T_18 : 64'h0; // @[EXU.scala 192:24 200:18]
  wire [63:0] _GEN_32 = _T_70 ? _mem_result_T_10 : _GEN_31; // @[EXU.scala 192:24 197:18]
  wire [63:0] mem_result = _T_67 ? io1_rdata : _GEN_32; // @[EXU.scala 192:24 194:18]
  wire  alu_result_sign = _addr_temp_T_1[31]; // @[util.scala 9:19]
  wire [31:0] _alu_result_T_6 = alu_result_sign ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _alu_result_T_7 = {_alu_result_T_6,_addr_temp_T_1[31:0]}; // @[Cat.scala 31:58]
  wire [63:0] _alu_result_T_8 = src1 | src2; // @[EXU.scala 227:26]
  wire [63:0] _alu_result_T_10 = src1 - src2; // @[EXU.scala 230:26]
  wire [63:0] _alu_result_T_11 = src1 & src2; // @[EXU.scala 233:26]
  wire [63:0] _alu_result_T_12 = src1 ^ src2; // @[EXU.scala 236:26]
  wire [63:0] _GEN_34 = 7'h6d == io_aluoptype ? _alu_result_T_7 : 64'h0; // @[EXU.scala 219:23 239:18]
  wire [63:0] _GEN_35 = 7'h72 == io_aluoptype ? _alu_result_T_12 : _GEN_34; // @[EXU.scala 219:23 236:18]
  wire [63:0] _GEN_36 = 7'h71 == io_aluoptype ? _alu_result_T_11 : _GEN_35; // @[EXU.scala 219:23 233:18]
  wire [63:0] _GEN_37 = 7'h69 == io_aluoptype ? _alu_result_T_10 : _GEN_36; // @[EXU.scala 219:23 230:18]
  wire [63:0] _GEN_38 = 7'h44 == io_aluoptype ? _alu_result_T_8 : _GEN_37; // @[EXU.scala 219:23 227:18]
  wire [63:0] _GEN_39 = 7'h68 == io_aluoptype ? _alu_result_T_7 : _GEN_38; // @[EXU.scala 219:23 224:18]
  wire [63:0] alu_result = 7'h40 == io_aluoptype ? _addr_temp_T_1 : _GEN_39; // @[EXU.scala 219:23 221:17]
  wire [63:0] _shift_result_T_1 = src1 >> io_Imm[4:0]; // @[EXU.scala 245:28]
  wire [94:0] _GEN_0 = {{31'd0}, src1}; // @[EXU.scala 249:38]
  wire [94:0] _shift_result_T_3 = _GEN_0 << src2[4:0]; // @[EXU.scala 249:38]
  wire  shift_result_sign = _shift_result_T_3[31]; // @[util.scala 9:19]
  wire [31:0] _shift_result_T_6 = shift_result_sign ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _shift_result_T_7 = {_shift_result_T_6,_shift_result_T_3[31:0]}; // @[Cat.scala 31:58]
  wire [126:0] _GEN_2 = {{63'd0}, src1}; // @[EXU.scala 252:28]
  wire [126:0] _shift_result_T_9 = _GEN_2 << src2[5:0]; // @[EXU.scala 252:28]
  wire [126:0] _GEN_41 = 7'h41 == io_aluoptype ? _shift_result_T_9 : 127'h0; // @[EXU.scala 243:23 252:20]
  wire [126:0] _GEN_42 = 7'h73 == io_aluoptype ? {{63'd0}, _shift_result_T_7} : _GEN_41; // @[EXU.scala 243:23 249:20]
  wire [126:0] _GEN_43 = 7'h6e == io_aluoptype ? {{63'd0}, _shift_result_T_1} : _GEN_42; // @[EXU.scala 243:23 245:20]
  wire [63:0] _compar_result_T_1 = src1 < src2 ? 64'h1 : 64'h0; // @[EXU.scala 260:27]
  wire [63:0] compar_result = 7'h6a == io_aluoptype ? _compar_result_T_1 : 64'h0; // @[EXU.scala 258:23 260:21]
  wire [63:0] _jump_result_T_2 = io1_PC + 64'h4; // @[EXU.scala 265:52]
  wire [63:0] jump_result = io_futype == 3'h3 ? _jump_result_T_2 : 64'h0; // @[EXU.scala 265:21]
  wire [63:0] _GEN_45 = 3'h5 == io_futype ? compar_result : 64'h0; // @[EXU.scala 268:20 285:17]
  wire [63:0] _GEN_46 = 3'h4 == io_futype ? mem_result : _GEN_45; // @[EXU.scala 268:20 282:18]
  wire [63:0] shift_result = _GEN_43[63:0];
  wire [63:0] _GEN_47 = 3'h1 == io_futype ? shift_result : _GEN_46; // @[EXU.scala 268:20 279:17]
  wire [63:0] _GEN_48 = 3'h2 == io_futype ? 64'h0 : _GEN_47; // @[EXU.scala 268:20 276:18]
  wire [63:0] _GEN_49 = 3'h3 == io_futype ? jump_result : _GEN_48; // @[EXU.scala 268:20 273:18]
  wire  _T_128 = 7'h6b == io_aluoptype; // @[EXU.scala 294:25]
  wire [63:0] _branch_result_T_1 = io1_PC + io_Imm; // @[EXU.scala 296:33]
  wire  _T_129 = 7'h6c == io_aluoptype; // @[EXU.scala 294:25]
  wire [63:0] _GEN_51 = 7'h6c == io_aluoptype ? _branch_result_T_1 : 64'h0; // @[EXU.scala 294:25 300:23]
  wire  _GEN_52 = 7'h6c == io_aluoptype & src1 != src2; // @[EXU.scala 294:25 301:21]
  wire [63:0] branch_result = 7'h6b == io_aluoptype ? _branch_result_T_1 : _GEN_51; // @[EXU.scala 294:25 296:23]
  wire  branch_flag = 7'h6b == io_aluoptype ? src1 == src2 : _GEN_52; // @[EXU.scala 294:25 297:21]
  wire [63:0] _dnpc_T_5 = {_addr_temp_T_1[63:1],1'h0}; // @[Cat.scala 31:58]
  wire [63:0] _dnpc_T_9 = branch_flag ? branch_result : _jump_result_T_2; // @[EXU.scala 314:18]
  wire [63:0] _GEN_55 = _T_129 ? _dnpc_T_9 : 64'h0; // @[EXU.scala 306:23 318:12]
  wire [63:0] _GEN_56 = _T_128 ? _dnpc_T_9 : _GEN_55; // @[EXU.scala 306:23 314:12]
  wire [63:0] _GEN_57 = 7'h48 == io_aluoptype ? _dnpc_T_5 : _GEN_56; // @[EXU.scala 306:23 311:12]
  assign io1_result = 3'h0 == io_futype ? alu_result : _GEN_49; // @[EXU.scala 268:20 270:18]
  assign io1_is_break = io_aluoptype == 7'h42; // @[EXU.scala 218:35]
  assign io1_is_jump = io_futype == 3'h3; // @[EXU.scala 290:31]
  assign io1_is_branch = 7'h6b == io_aluoptype ? src1 == src2 : _GEN_52; // @[EXU.scala 294:25 297:21]
  assign io1_dnpc = 7'h19 == io_aluoptype ? _addr_temp_T_1 : _GEN_57; // @[EXU.scala 306:23 308:12]
  assign io1_addr = 7'h45 == io_aluoptype ? _addr_temp_T_1 : _GEN_9; // @[EXU.scala 118:23 120:17]
  assign io1_wdata = _T_67 ? 64'h0 : _GEN_28; // @[EXU.scala 138:24 141:18]
  assign io1_wmask = _T_67 ? 8'h0 : _GEN_27; // @[EXU.scala 138:24 140:18]
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
  wire  IF_clock; // @[CPUTop.scala 38:16]
  wire  IF_reset; // @[CPUTop.scala 38:16]
  wire [63:0] IF_io_dnpc; // @[CPUTop.scala 38:16]
  wire  IF_io_is_jump; // @[CPUTop.scala 38:16]
  wire  IF_io_is_branch; // @[CPUTop.scala 38:16]
  wire [63:0] IF_io_pc; // @[CPUTop.scala 38:16]
  wire [63:0] IFM_pc; // @[CPUTop.scala 40:18]
  wire [31:0] IFM_inst; // @[CPUTop.scala 40:18]
  wire [31:0] ID_io_inst; // @[CPUTop.scala 42:18]
  wire [2:0] ID_io_ctrlIO_src1type; // @[CPUTop.scala 42:18]
  wire [2:0] ID_io_ctrlIO_src2type; // @[CPUTop.scala 42:18]
  wire [4:0] ID_io_ctrlIO_src1; // @[CPUTop.scala 42:18]
  wire [4:0] ID_io_ctrlIO_src2; // @[CPUTop.scala 42:18]
  wire [4:0] ID_io_ctrlIO_rd; // @[CPUTop.scala 42:18]
  wire [2:0] ID_io_ctrlIO_futype; // @[CPUTop.scala 42:18]
  wire [6:0] ID_io_ctrlIO_aluoptype; // @[CPUTop.scala 42:18]
  wire [63:0] ID_io_ctrlIO_Imm; // @[CPUTop.scala 42:18]
  wire  ID_io_rd_en; // @[CPUTop.scala 42:18]
  wire  ID_io_mem_we; // @[CPUTop.scala 42:18]
  wire [2:0] EX_io_src1type; // @[CPUTop.scala 44:18]
  wire [2:0] EX_io_src2type; // @[CPUTop.scala 44:18]
  wire [2:0] EX_io_futype; // @[CPUTop.scala 44:18]
  wire [6:0] EX_io_aluoptype; // @[CPUTop.scala 44:18]
  wire [63:0] EX_io_Imm; // @[CPUTop.scala 44:18]
  wire [63:0] EX_io1_REG1; // @[CPUTop.scala 44:18]
  wire [63:0] EX_io1_REG2; // @[CPUTop.scala 44:18]
  wire [63:0] EX_io1_PC; // @[CPUTop.scala 44:18]
  wire [63:0] EX_io1_result; // @[CPUTop.scala 44:18]
  wire  EX_io1_is_break; // @[CPUTop.scala 44:18]
  wire  EX_io1_is_jump; // @[CPUTop.scala 44:18]
  wire  EX_io1_is_branch; // @[CPUTop.scala 44:18]
  wire [63:0] EX_io1_dnpc; // @[CPUTop.scala 44:18]
  wire [63:0] EX_io1_addr; // @[CPUTop.scala 44:18]
  wire [63:0] EX_io1_rdata; // @[CPUTop.scala 44:18]
  wire [63:0] EX_io1_wdata; // @[CPUTop.scala 44:18]
  wire [7:0] EX_io1_wmask; // @[CPUTop.scala 44:18]
  wire  DIP_is_break; // @[CPUTop.scala 46:19]
  wire [63:0] DIP_rf_0; // @[CPUTop.scala 46:19]
  wire [63:0] DIP_rf_1; // @[CPUTop.scala 46:19]
  wire [63:0] DIP_rf_2; // @[CPUTop.scala 46:19]
  wire [63:0] DIP_rf_3; // @[CPUTop.scala 46:19]
  wire [63:0] DIP_rf_4; // @[CPUTop.scala 46:19]
  wire [63:0] DIP_rf_5; // @[CPUTop.scala 46:19]
  wire [63:0] DIP_rf_6; // @[CPUTop.scala 46:19]
  wire [63:0] DIP_rf_7; // @[CPUTop.scala 46:19]
  wire [63:0] DIP_rf_8; // @[CPUTop.scala 46:19]
  wire [63:0] DIP_rf_9; // @[CPUTop.scala 46:19]
  wire [63:0] DIP_rf_10; // @[CPUTop.scala 46:19]
  wire [63:0] DIP_rf_11; // @[CPUTop.scala 46:19]
  wire [63:0] DIP_rf_12; // @[CPUTop.scala 46:19]
  wire [63:0] DIP_rf_13; // @[CPUTop.scala 46:19]
  wire [63:0] DIP_rf_14; // @[CPUTop.scala 46:19]
  wire [63:0] DIP_rf_15; // @[CPUTop.scala 46:19]
  wire [63:0] DIP_rf_16; // @[CPUTop.scala 46:19]
  wire [63:0] DIP_rf_17; // @[CPUTop.scala 46:19]
  wire [63:0] DIP_rf_18; // @[CPUTop.scala 46:19]
  wire [63:0] DIP_rf_19; // @[CPUTop.scala 46:19]
  wire [63:0] DIP_rf_20; // @[CPUTop.scala 46:19]
  wire [63:0] DIP_rf_21; // @[CPUTop.scala 46:19]
  wire [63:0] DIP_rf_22; // @[CPUTop.scala 46:19]
  wire [63:0] DIP_rf_23; // @[CPUTop.scala 46:19]
  wire [63:0] DIP_rf_24; // @[CPUTop.scala 46:19]
  wire [63:0] DIP_rf_25; // @[CPUTop.scala 46:19]
  wire [63:0] DIP_rf_26; // @[CPUTop.scala 46:19]
  wire [63:0] DIP_rf_27; // @[CPUTop.scala 46:19]
  wire [63:0] DIP_rf_28; // @[CPUTop.scala 46:19]
  wire [63:0] DIP_rf_29; // @[CPUTop.scala 46:19]
  wire [63:0] DIP_rf_30; // @[CPUTop.scala 46:19]
  wire [63:0] DIP_rf_31; // @[CPUTop.scala 46:19]
  wire [31:0] DIP_inst; // @[CPUTop.scala 46:19]
  reg [63:0] rf [0:31]; // @[RF.scala 6:17]
  wire  rf_EX_io1_REG1_MPORT_en; // @[RF.scala 6:17]
  wire [4:0] rf_EX_io1_REG1_MPORT_addr; // @[RF.scala 6:17]
  wire [63:0] rf_EX_io1_REG1_MPORT_data; // @[RF.scala 6:17]
  wire  rf_EX_io1_REG2_MPORT_en; // @[RF.scala 6:17]
  wire [4:0] rf_EX_io1_REG2_MPORT_addr; // @[RF.scala 6:17]
  wire [63:0] rf_EX_io1_REG2_MPORT_data; // @[RF.scala 6:17]
  wire  rf_DIP_io_rf_0_MPORT_en; // @[RF.scala 6:17]
  wire [4:0] rf_DIP_io_rf_0_MPORT_addr; // @[RF.scala 6:17]
  wire [63:0] rf_DIP_io_rf_0_MPORT_data; // @[RF.scala 6:17]
  wire  rf_DIP_io_rf_1_MPORT_en; // @[RF.scala 6:17]
  wire [4:0] rf_DIP_io_rf_1_MPORT_addr; // @[RF.scala 6:17]
  wire [63:0] rf_DIP_io_rf_1_MPORT_data; // @[RF.scala 6:17]
  wire  rf_DIP_io_rf_2_MPORT_en; // @[RF.scala 6:17]
  wire [4:0] rf_DIP_io_rf_2_MPORT_addr; // @[RF.scala 6:17]
  wire [63:0] rf_DIP_io_rf_2_MPORT_data; // @[RF.scala 6:17]
  wire  rf_DIP_io_rf_3_MPORT_en; // @[RF.scala 6:17]
  wire [4:0] rf_DIP_io_rf_3_MPORT_addr; // @[RF.scala 6:17]
  wire [63:0] rf_DIP_io_rf_3_MPORT_data; // @[RF.scala 6:17]
  wire  rf_DIP_io_rf_4_MPORT_en; // @[RF.scala 6:17]
  wire [4:0] rf_DIP_io_rf_4_MPORT_addr; // @[RF.scala 6:17]
  wire [63:0] rf_DIP_io_rf_4_MPORT_data; // @[RF.scala 6:17]
  wire  rf_DIP_io_rf_5_MPORT_en; // @[RF.scala 6:17]
  wire [4:0] rf_DIP_io_rf_5_MPORT_addr; // @[RF.scala 6:17]
  wire [63:0] rf_DIP_io_rf_5_MPORT_data; // @[RF.scala 6:17]
  wire  rf_DIP_io_rf_6_MPORT_en; // @[RF.scala 6:17]
  wire [4:0] rf_DIP_io_rf_6_MPORT_addr; // @[RF.scala 6:17]
  wire [63:0] rf_DIP_io_rf_6_MPORT_data; // @[RF.scala 6:17]
  wire  rf_DIP_io_rf_7_MPORT_en; // @[RF.scala 6:17]
  wire [4:0] rf_DIP_io_rf_7_MPORT_addr; // @[RF.scala 6:17]
  wire [63:0] rf_DIP_io_rf_7_MPORT_data; // @[RF.scala 6:17]
  wire  rf_DIP_io_rf_8_MPORT_en; // @[RF.scala 6:17]
  wire [4:0] rf_DIP_io_rf_8_MPORT_addr; // @[RF.scala 6:17]
  wire [63:0] rf_DIP_io_rf_8_MPORT_data; // @[RF.scala 6:17]
  wire  rf_DIP_io_rf_9_MPORT_en; // @[RF.scala 6:17]
  wire [4:0] rf_DIP_io_rf_9_MPORT_addr; // @[RF.scala 6:17]
  wire [63:0] rf_DIP_io_rf_9_MPORT_data; // @[RF.scala 6:17]
  wire  rf_DIP_io_rf_10_MPORT_en; // @[RF.scala 6:17]
  wire [4:0] rf_DIP_io_rf_10_MPORT_addr; // @[RF.scala 6:17]
  wire [63:0] rf_DIP_io_rf_10_MPORT_data; // @[RF.scala 6:17]
  wire  rf_DIP_io_rf_11_MPORT_en; // @[RF.scala 6:17]
  wire [4:0] rf_DIP_io_rf_11_MPORT_addr; // @[RF.scala 6:17]
  wire [63:0] rf_DIP_io_rf_11_MPORT_data; // @[RF.scala 6:17]
  wire  rf_DIP_io_rf_12_MPORT_en; // @[RF.scala 6:17]
  wire [4:0] rf_DIP_io_rf_12_MPORT_addr; // @[RF.scala 6:17]
  wire [63:0] rf_DIP_io_rf_12_MPORT_data; // @[RF.scala 6:17]
  wire  rf_DIP_io_rf_13_MPORT_en; // @[RF.scala 6:17]
  wire [4:0] rf_DIP_io_rf_13_MPORT_addr; // @[RF.scala 6:17]
  wire [63:0] rf_DIP_io_rf_13_MPORT_data; // @[RF.scala 6:17]
  wire  rf_DIP_io_rf_14_MPORT_en; // @[RF.scala 6:17]
  wire [4:0] rf_DIP_io_rf_14_MPORT_addr; // @[RF.scala 6:17]
  wire [63:0] rf_DIP_io_rf_14_MPORT_data; // @[RF.scala 6:17]
  wire  rf_DIP_io_rf_15_MPORT_en; // @[RF.scala 6:17]
  wire [4:0] rf_DIP_io_rf_15_MPORT_addr; // @[RF.scala 6:17]
  wire [63:0] rf_DIP_io_rf_15_MPORT_data; // @[RF.scala 6:17]
  wire  rf_DIP_io_rf_16_MPORT_en; // @[RF.scala 6:17]
  wire [4:0] rf_DIP_io_rf_16_MPORT_addr; // @[RF.scala 6:17]
  wire [63:0] rf_DIP_io_rf_16_MPORT_data; // @[RF.scala 6:17]
  wire  rf_DIP_io_rf_17_MPORT_en; // @[RF.scala 6:17]
  wire [4:0] rf_DIP_io_rf_17_MPORT_addr; // @[RF.scala 6:17]
  wire [63:0] rf_DIP_io_rf_17_MPORT_data; // @[RF.scala 6:17]
  wire  rf_DIP_io_rf_18_MPORT_en; // @[RF.scala 6:17]
  wire [4:0] rf_DIP_io_rf_18_MPORT_addr; // @[RF.scala 6:17]
  wire [63:0] rf_DIP_io_rf_18_MPORT_data; // @[RF.scala 6:17]
  wire  rf_DIP_io_rf_19_MPORT_en; // @[RF.scala 6:17]
  wire [4:0] rf_DIP_io_rf_19_MPORT_addr; // @[RF.scala 6:17]
  wire [63:0] rf_DIP_io_rf_19_MPORT_data; // @[RF.scala 6:17]
  wire  rf_DIP_io_rf_20_MPORT_en; // @[RF.scala 6:17]
  wire [4:0] rf_DIP_io_rf_20_MPORT_addr; // @[RF.scala 6:17]
  wire [63:0] rf_DIP_io_rf_20_MPORT_data; // @[RF.scala 6:17]
  wire  rf_DIP_io_rf_21_MPORT_en; // @[RF.scala 6:17]
  wire [4:0] rf_DIP_io_rf_21_MPORT_addr; // @[RF.scala 6:17]
  wire [63:0] rf_DIP_io_rf_21_MPORT_data; // @[RF.scala 6:17]
  wire  rf_DIP_io_rf_22_MPORT_en; // @[RF.scala 6:17]
  wire [4:0] rf_DIP_io_rf_22_MPORT_addr; // @[RF.scala 6:17]
  wire [63:0] rf_DIP_io_rf_22_MPORT_data; // @[RF.scala 6:17]
  wire  rf_DIP_io_rf_23_MPORT_en; // @[RF.scala 6:17]
  wire [4:0] rf_DIP_io_rf_23_MPORT_addr; // @[RF.scala 6:17]
  wire [63:0] rf_DIP_io_rf_23_MPORT_data; // @[RF.scala 6:17]
  wire  rf_DIP_io_rf_24_MPORT_en; // @[RF.scala 6:17]
  wire [4:0] rf_DIP_io_rf_24_MPORT_addr; // @[RF.scala 6:17]
  wire [63:0] rf_DIP_io_rf_24_MPORT_data; // @[RF.scala 6:17]
  wire  rf_DIP_io_rf_25_MPORT_en; // @[RF.scala 6:17]
  wire [4:0] rf_DIP_io_rf_25_MPORT_addr; // @[RF.scala 6:17]
  wire [63:0] rf_DIP_io_rf_25_MPORT_data; // @[RF.scala 6:17]
  wire  rf_DIP_io_rf_26_MPORT_en; // @[RF.scala 6:17]
  wire [4:0] rf_DIP_io_rf_26_MPORT_addr; // @[RF.scala 6:17]
  wire [63:0] rf_DIP_io_rf_26_MPORT_data; // @[RF.scala 6:17]
  wire  rf_DIP_io_rf_27_MPORT_en; // @[RF.scala 6:17]
  wire [4:0] rf_DIP_io_rf_27_MPORT_addr; // @[RF.scala 6:17]
  wire [63:0] rf_DIP_io_rf_27_MPORT_data; // @[RF.scala 6:17]
  wire  rf_DIP_io_rf_28_MPORT_en; // @[RF.scala 6:17]
  wire [4:0] rf_DIP_io_rf_28_MPORT_addr; // @[RF.scala 6:17]
  wire [63:0] rf_DIP_io_rf_28_MPORT_data; // @[RF.scala 6:17]
  wire  rf_DIP_io_rf_29_MPORT_en; // @[RF.scala 6:17]
  wire [4:0] rf_DIP_io_rf_29_MPORT_addr; // @[RF.scala 6:17]
  wire [63:0] rf_DIP_io_rf_29_MPORT_data; // @[RF.scala 6:17]
  wire  rf_DIP_io_rf_30_MPORT_en; // @[RF.scala 6:17]
  wire [4:0] rf_DIP_io_rf_30_MPORT_addr; // @[RF.scala 6:17]
  wire [63:0] rf_DIP_io_rf_30_MPORT_data; // @[RF.scala 6:17]
  wire  rf_DIP_io_rf_31_MPORT_en; // @[RF.scala 6:17]
  wire [4:0] rf_DIP_io_rf_31_MPORT_addr; // @[RF.scala 6:17]
  wire [63:0] rf_DIP_io_rf_31_MPORT_data; // @[RF.scala 6:17]
  wire [63:0] rf_MPORT_data; // @[RF.scala 6:17]
  wire [4:0] rf_MPORT_addr; // @[RF.scala 6:17]
  wire  rf_MPORT_mask; // @[RF.scala 6:17]
  wire  rf_MPORT_en; // @[RF.scala 6:17]
  wire [63:0] mem_addr; // @[CPUTop.scala 50:19]
  wire  mem_we; // @[CPUTop.scala 50:19]
  wire  mem_ce; // @[CPUTop.scala 50:19]
  wire [63:0] mem_wdata; // @[CPUTop.scala 50:19]
  wire [63:0] mem_rdata; // @[CPUTop.scala 50:19]
  wire [7:0] mem_wmask; // @[CPUTop.scala 50:19]
  wire [4:0] src1add = ID_io_ctrlIO_src1; // @[CPUTop.scala 61:21 70:10]
  wire [4:0] src2add = ID_io_ctrlIO_src2; // @[CPUTop.scala 62:21 71:10]
  wire  _T_1 = ID_io_ctrlIO_rd == 5'h0; // @[RF.scala 8:61]
  wire [63:0] _T_2 = EX_io1_result; // @[RF.scala 8:78]
  IFU IF ( // @[CPUTop.scala 38:16]
    .clock(IF_clock),
    .reset(IF_reset),
    .io_dnpc(IF_io_dnpc),
    .io_is_jump(IF_io_is_jump),
    .io_is_branch(IF_io_is_branch),
    .io_pc(IF_io_pc)
  );
  ifm IFM ( // @[CPUTop.scala 40:18]
    .pc(IFM_pc),
    .inst(IFM_inst)
  );
  IDU ID ( // @[CPUTop.scala 42:18]
    .io_inst(ID_io_inst),
    .io_ctrlIO_src1type(ID_io_ctrlIO_src1type),
    .io_ctrlIO_src2type(ID_io_ctrlIO_src2type),
    .io_ctrlIO_src1(ID_io_ctrlIO_src1),
    .io_ctrlIO_src2(ID_io_ctrlIO_src2),
    .io_ctrlIO_rd(ID_io_ctrlIO_rd),
    .io_ctrlIO_futype(ID_io_ctrlIO_futype),
    .io_ctrlIO_aluoptype(ID_io_ctrlIO_aluoptype),
    .io_ctrlIO_Imm(ID_io_ctrlIO_Imm),
    .io_rd_en(ID_io_rd_en),
    .io_mem_we(ID_io_mem_we)
  );
  EXU EX ( // @[CPUTop.scala 44:18]
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
    .io1_is_branch(EX_io1_is_branch),
    .io1_dnpc(EX_io1_dnpc),
    .io1_addr(EX_io1_addr),
    .io1_rdata(EX_io1_rdata),
    .io1_wdata(EX_io1_wdata),
    .io1_wmask(EX_io1_wmask)
  );
  DIP_model DIP ( // @[CPUTop.scala 46:19]
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
    .rf_31(DIP_rf_31),
    .inst(DIP_inst)
  );
  MEM mem ( // @[CPUTop.scala 50:19]
    .addr(mem_addr),
    .we(mem_we),
    .ce(mem_ce),
    .wdata(mem_wdata),
    .rdata(mem_rdata),
    .wmask(mem_wmask)
  );
  assign rf_EX_io1_REG1_MPORT_en = 1'h1;
  assign rf_EX_io1_REG1_MPORT_addr = ID_io_ctrlIO_src1;
  assign rf_EX_io1_REG1_MPORT_data = rf[rf_EX_io1_REG1_MPORT_addr]; // @[RF.scala 6:17]
  assign rf_EX_io1_REG2_MPORT_en = 1'h1;
  assign rf_EX_io1_REG2_MPORT_addr = ID_io_ctrlIO_src2;
  assign rf_EX_io1_REG2_MPORT_data = rf[rf_EX_io1_REG2_MPORT_addr]; // @[RF.scala 6:17]
  assign rf_DIP_io_rf_0_MPORT_en = 1'h1;
  assign rf_DIP_io_rf_0_MPORT_addr = 5'h0;
  assign rf_DIP_io_rf_0_MPORT_data = rf[rf_DIP_io_rf_0_MPORT_addr]; // @[RF.scala 6:17]
  assign rf_DIP_io_rf_1_MPORT_en = 1'h1;
  assign rf_DIP_io_rf_1_MPORT_addr = 5'h1;
  assign rf_DIP_io_rf_1_MPORT_data = rf[rf_DIP_io_rf_1_MPORT_addr]; // @[RF.scala 6:17]
  assign rf_DIP_io_rf_2_MPORT_en = 1'h1;
  assign rf_DIP_io_rf_2_MPORT_addr = 5'h2;
  assign rf_DIP_io_rf_2_MPORT_data = rf[rf_DIP_io_rf_2_MPORT_addr]; // @[RF.scala 6:17]
  assign rf_DIP_io_rf_3_MPORT_en = 1'h1;
  assign rf_DIP_io_rf_3_MPORT_addr = 5'h3;
  assign rf_DIP_io_rf_3_MPORT_data = rf[rf_DIP_io_rf_3_MPORT_addr]; // @[RF.scala 6:17]
  assign rf_DIP_io_rf_4_MPORT_en = 1'h1;
  assign rf_DIP_io_rf_4_MPORT_addr = 5'h4;
  assign rf_DIP_io_rf_4_MPORT_data = rf[rf_DIP_io_rf_4_MPORT_addr]; // @[RF.scala 6:17]
  assign rf_DIP_io_rf_5_MPORT_en = 1'h1;
  assign rf_DIP_io_rf_5_MPORT_addr = 5'h5;
  assign rf_DIP_io_rf_5_MPORT_data = rf[rf_DIP_io_rf_5_MPORT_addr]; // @[RF.scala 6:17]
  assign rf_DIP_io_rf_6_MPORT_en = 1'h1;
  assign rf_DIP_io_rf_6_MPORT_addr = 5'h6;
  assign rf_DIP_io_rf_6_MPORT_data = rf[rf_DIP_io_rf_6_MPORT_addr]; // @[RF.scala 6:17]
  assign rf_DIP_io_rf_7_MPORT_en = 1'h1;
  assign rf_DIP_io_rf_7_MPORT_addr = 5'h7;
  assign rf_DIP_io_rf_7_MPORT_data = rf[rf_DIP_io_rf_7_MPORT_addr]; // @[RF.scala 6:17]
  assign rf_DIP_io_rf_8_MPORT_en = 1'h1;
  assign rf_DIP_io_rf_8_MPORT_addr = 5'h8;
  assign rf_DIP_io_rf_8_MPORT_data = rf[rf_DIP_io_rf_8_MPORT_addr]; // @[RF.scala 6:17]
  assign rf_DIP_io_rf_9_MPORT_en = 1'h1;
  assign rf_DIP_io_rf_9_MPORT_addr = 5'h9;
  assign rf_DIP_io_rf_9_MPORT_data = rf[rf_DIP_io_rf_9_MPORT_addr]; // @[RF.scala 6:17]
  assign rf_DIP_io_rf_10_MPORT_en = 1'h1;
  assign rf_DIP_io_rf_10_MPORT_addr = 5'ha;
  assign rf_DIP_io_rf_10_MPORT_data = rf[rf_DIP_io_rf_10_MPORT_addr]; // @[RF.scala 6:17]
  assign rf_DIP_io_rf_11_MPORT_en = 1'h1;
  assign rf_DIP_io_rf_11_MPORT_addr = 5'hb;
  assign rf_DIP_io_rf_11_MPORT_data = rf[rf_DIP_io_rf_11_MPORT_addr]; // @[RF.scala 6:17]
  assign rf_DIP_io_rf_12_MPORT_en = 1'h1;
  assign rf_DIP_io_rf_12_MPORT_addr = 5'hc;
  assign rf_DIP_io_rf_12_MPORT_data = rf[rf_DIP_io_rf_12_MPORT_addr]; // @[RF.scala 6:17]
  assign rf_DIP_io_rf_13_MPORT_en = 1'h1;
  assign rf_DIP_io_rf_13_MPORT_addr = 5'hd;
  assign rf_DIP_io_rf_13_MPORT_data = rf[rf_DIP_io_rf_13_MPORT_addr]; // @[RF.scala 6:17]
  assign rf_DIP_io_rf_14_MPORT_en = 1'h1;
  assign rf_DIP_io_rf_14_MPORT_addr = 5'he;
  assign rf_DIP_io_rf_14_MPORT_data = rf[rf_DIP_io_rf_14_MPORT_addr]; // @[RF.scala 6:17]
  assign rf_DIP_io_rf_15_MPORT_en = 1'h1;
  assign rf_DIP_io_rf_15_MPORT_addr = 5'hf;
  assign rf_DIP_io_rf_15_MPORT_data = rf[rf_DIP_io_rf_15_MPORT_addr]; // @[RF.scala 6:17]
  assign rf_DIP_io_rf_16_MPORT_en = 1'h1;
  assign rf_DIP_io_rf_16_MPORT_addr = 5'h10;
  assign rf_DIP_io_rf_16_MPORT_data = rf[rf_DIP_io_rf_16_MPORT_addr]; // @[RF.scala 6:17]
  assign rf_DIP_io_rf_17_MPORT_en = 1'h1;
  assign rf_DIP_io_rf_17_MPORT_addr = 5'h11;
  assign rf_DIP_io_rf_17_MPORT_data = rf[rf_DIP_io_rf_17_MPORT_addr]; // @[RF.scala 6:17]
  assign rf_DIP_io_rf_18_MPORT_en = 1'h1;
  assign rf_DIP_io_rf_18_MPORT_addr = 5'h12;
  assign rf_DIP_io_rf_18_MPORT_data = rf[rf_DIP_io_rf_18_MPORT_addr]; // @[RF.scala 6:17]
  assign rf_DIP_io_rf_19_MPORT_en = 1'h1;
  assign rf_DIP_io_rf_19_MPORT_addr = 5'h13;
  assign rf_DIP_io_rf_19_MPORT_data = rf[rf_DIP_io_rf_19_MPORT_addr]; // @[RF.scala 6:17]
  assign rf_DIP_io_rf_20_MPORT_en = 1'h1;
  assign rf_DIP_io_rf_20_MPORT_addr = 5'h14;
  assign rf_DIP_io_rf_20_MPORT_data = rf[rf_DIP_io_rf_20_MPORT_addr]; // @[RF.scala 6:17]
  assign rf_DIP_io_rf_21_MPORT_en = 1'h1;
  assign rf_DIP_io_rf_21_MPORT_addr = 5'h15;
  assign rf_DIP_io_rf_21_MPORT_data = rf[rf_DIP_io_rf_21_MPORT_addr]; // @[RF.scala 6:17]
  assign rf_DIP_io_rf_22_MPORT_en = 1'h1;
  assign rf_DIP_io_rf_22_MPORT_addr = 5'h16;
  assign rf_DIP_io_rf_22_MPORT_data = rf[rf_DIP_io_rf_22_MPORT_addr]; // @[RF.scala 6:17]
  assign rf_DIP_io_rf_23_MPORT_en = 1'h1;
  assign rf_DIP_io_rf_23_MPORT_addr = 5'h17;
  assign rf_DIP_io_rf_23_MPORT_data = rf[rf_DIP_io_rf_23_MPORT_addr]; // @[RF.scala 6:17]
  assign rf_DIP_io_rf_24_MPORT_en = 1'h1;
  assign rf_DIP_io_rf_24_MPORT_addr = 5'h18;
  assign rf_DIP_io_rf_24_MPORT_data = rf[rf_DIP_io_rf_24_MPORT_addr]; // @[RF.scala 6:17]
  assign rf_DIP_io_rf_25_MPORT_en = 1'h1;
  assign rf_DIP_io_rf_25_MPORT_addr = 5'h19;
  assign rf_DIP_io_rf_25_MPORT_data = rf[rf_DIP_io_rf_25_MPORT_addr]; // @[RF.scala 6:17]
  assign rf_DIP_io_rf_26_MPORT_en = 1'h1;
  assign rf_DIP_io_rf_26_MPORT_addr = 5'h1a;
  assign rf_DIP_io_rf_26_MPORT_data = rf[rf_DIP_io_rf_26_MPORT_addr]; // @[RF.scala 6:17]
  assign rf_DIP_io_rf_27_MPORT_en = 1'h1;
  assign rf_DIP_io_rf_27_MPORT_addr = 5'h1b;
  assign rf_DIP_io_rf_27_MPORT_data = rf[rf_DIP_io_rf_27_MPORT_addr]; // @[RF.scala 6:17]
  assign rf_DIP_io_rf_28_MPORT_en = 1'h1;
  assign rf_DIP_io_rf_28_MPORT_addr = 5'h1c;
  assign rf_DIP_io_rf_28_MPORT_data = rf[rf_DIP_io_rf_28_MPORT_addr]; // @[RF.scala 6:17]
  assign rf_DIP_io_rf_29_MPORT_en = 1'h1;
  assign rf_DIP_io_rf_29_MPORT_addr = 5'h1d;
  assign rf_DIP_io_rf_29_MPORT_data = rf[rf_DIP_io_rf_29_MPORT_addr]; // @[RF.scala 6:17]
  assign rf_DIP_io_rf_30_MPORT_en = 1'h1;
  assign rf_DIP_io_rf_30_MPORT_addr = 5'h1e;
  assign rf_DIP_io_rf_30_MPORT_data = rf[rf_DIP_io_rf_30_MPORT_addr]; // @[RF.scala 6:17]
  assign rf_DIP_io_rf_31_MPORT_en = 1'h1;
  assign rf_DIP_io_rf_31_MPORT_addr = 5'h1f;
  assign rf_DIP_io_rf_31_MPORT_data = rf[rf_DIP_io_rf_31_MPORT_addr]; // @[RF.scala 6:17]
  assign rf_MPORT_data = _T_1 ? 64'h0 : _T_2;
  assign rf_MPORT_addr = ID_io_ctrlIO_rd;
  assign rf_MPORT_mask = 1'h1;
  assign rf_MPORT_en = ID_io_rd_en;
  assign io_pc = IF_io_pc; // @[CPUTop.scala 52:9]
  assign io_result = EX_io1_result; // @[CPUTop.scala 77:13]
  assign IF_clock = clock;
  assign IF_reset = reset;
  assign IF_io_dnpc = EX_io1_dnpc; // @[CPUTop.scala 66:14]
  assign IF_io_is_jump = EX_io1_is_jump; // @[CPUTop.scala 67:17]
  assign IF_io_is_branch = EX_io1_is_branch; // @[CPUTop.scala 68:19]
  assign IFM_pc = IF_io_pc; // @[CPUTop.scala 54:13]
  assign ID_io_inst = IFM_inst; // @[CPUTop.scala 56:14]
  assign EX_io_src1type = ID_io_ctrlIO_src1type; // @[CPUTop.scala 58:16]
  assign EX_io_src2type = ID_io_ctrlIO_src2type; // @[CPUTop.scala 58:16]
  assign EX_io_futype = ID_io_ctrlIO_futype; // @[CPUTop.scala 58:16]
  assign EX_io_aluoptype = ID_io_ctrlIO_aluoptype; // @[CPUTop.scala 58:16]
  assign EX_io_Imm = ID_io_ctrlIO_Imm; // @[CPUTop.scala 58:16]
  assign EX_io1_REG1 = src1add == 5'h0 ? 64'h0 : rf_EX_io1_REG1_MPORT_data; // @[RF.scala 7:37]
  assign EX_io1_REG2 = src2add == 5'h0 ? 64'h0 : rf_EX_io1_REG2_MPORT_data; // @[RF.scala 7:37]
  assign EX_io1_PC = IF_io_pc; // @[CPUTop.scala 59:13]
  assign EX_io1_rdata = mem_rdata; // @[CPUTop.scala 86:16]
  assign DIP_is_break = EX_io1_is_break; // @[CPUTop.scala 79:19]
  assign DIP_rf_0 = rf_DIP_io_rf_0_MPORT_data; // @[CPUTop.scala 81:18]
  assign DIP_rf_1 = rf_DIP_io_rf_1_MPORT_data; // @[CPUTop.scala 81:18]
  assign DIP_rf_2 = rf_DIP_io_rf_2_MPORT_data; // @[CPUTop.scala 81:18]
  assign DIP_rf_3 = rf_DIP_io_rf_3_MPORT_data; // @[CPUTop.scala 81:18]
  assign DIP_rf_4 = rf_DIP_io_rf_4_MPORT_data; // @[CPUTop.scala 81:18]
  assign DIP_rf_5 = rf_DIP_io_rf_5_MPORT_data; // @[CPUTop.scala 81:18]
  assign DIP_rf_6 = rf_DIP_io_rf_6_MPORT_data; // @[CPUTop.scala 81:18]
  assign DIP_rf_7 = rf_DIP_io_rf_7_MPORT_data; // @[CPUTop.scala 81:18]
  assign DIP_rf_8 = rf_DIP_io_rf_8_MPORT_data; // @[CPUTop.scala 81:18]
  assign DIP_rf_9 = rf_DIP_io_rf_9_MPORT_data; // @[CPUTop.scala 81:18]
  assign DIP_rf_10 = rf_DIP_io_rf_10_MPORT_data; // @[CPUTop.scala 81:18]
  assign DIP_rf_11 = rf_DIP_io_rf_11_MPORT_data; // @[CPUTop.scala 81:18]
  assign DIP_rf_12 = rf_DIP_io_rf_12_MPORT_data; // @[CPUTop.scala 81:18]
  assign DIP_rf_13 = rf_DIP_io_rf_13_MPORT_data; // @[CPUTop.scala 81:18]
  assign DIP_rf_14 = rf_DIP_io_rf_14_MPORT_data; // @[CPUTop.scala 81:18]
  assign DIP_rf_15 = rf_DIP_io_rf_15_MPORT_data; // @[CPUTop.scala 81:18]
  assign DIP_rf_16 = rf_DIP_io_rf_16_MPORT_data; // @[CPUTop.scala 81:18]
  assign DIP_rf_17 = rf_DIP_io_rf_17_MPORT_data; // @[CPUTop.scala 81:18]
  assign DIP_rf_18 = rf_DIP_io_rf_18_MPORT_data; // @[CPUTop.scala 81:18]
  assign DIP_rf_19 = rf_DIP_io_rf_19_MPORT_data; // @[CPUTop.scala 81:18]
  assign DIP_rf_20 = rf_DIP_io_rf_20_MPORT_data; // @[CPUTop.scala 81:18]
  assign DIP_rf_21 = rf_DIP_io_rf_21_MPORT_data; // @[CPUTop.scala 81:18]
  assign DIP_rf_22 = rf_DIP_io_rf_22_MPORT_data; // @[CPUTop.scala 81:18]
  assign DIP_rf_23 = rf_DIP_io_rf_23_MPORT_data; // @[CPUTop.scala 81:18]
  assign DIP_rf_24 = rf_DIP_io_rf_24_MPORT_data; // @[CPUTop.scala 81:18]
  assign DIP_rf_25 = rf_DIP_io_rf_25_MPORT_data; // @[CPUTop.scala 81:18]
  assign DIP_rf_26 = rf_DIP_io_rf_26_MPORT_data; // @[CPUTop.scala 81:18]
  assign DIP_rf_27 = rf_DIP_io_rf_27_MPORT_data; // @[CPUTop.scala 81:18]
  assign DIP_rf_28 = rf_DIP_io_rf_28_MPORT_data; // @[CPUTop.scala 81:18]
  assign DIP_rf_29 = rf_DIP_io_rf_29_MPORT_data; // @[CPUTop.scala 81:18]
  assign DIP_rf_30 = rf_DIP_io_rf_30_MPORT_data; // @[CPUTop.scala 81:18]
  assign DIP_rf_31 = rf_DIP_io_rf_31_MPORT_data; // @[CPUTop.scala 81:18]
  assign DIP_inst = io_inst; // @[CPUTop.scala 83:15]
  assign mem_addr = EX_io1_addr; // @[CPUTop.scala 85:14]
  assign mem_we = ID_io_mem_we; // @[CPUTop.scala 90:13]
  assign mem_ce = ID_io_ctrlIO_futype == 3'h4; // @[CPUTop.scala 89:41]
  assign mem_wdata = EX_io1_wdata; // @[CPUTop.scala 87:16]
  assign mem_wmask = EX_io1_wmask; // @[CPUTop.scala 88:16]
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
