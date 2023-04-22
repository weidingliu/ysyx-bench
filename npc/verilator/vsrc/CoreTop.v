module IF(
  input         clock,
  input         reset,
  input         io_branch_io_is_branch,
  input         io_branch_io_is_jump,
  input  [63:0] io_branch_io_dnpc,
  input  [31:0] io_inst,
  output [63:0] io_out_bits_PC,
  output [31:0] io_out_bits_Inst
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  reg [63:0] temp; // @[IF.scala 16:21]
  wire [63:0] _temp_T_2 = temp + 64'h4; // @[IF.scala 17:104]
  assign io_out_bits_PC = temp; // @[IF.scala 19:18]
  assign io_out_bits_Inst = io_inst; // @[IF.scala 20:20]
  always @(posedge clock) begin
    if (reset) begin // @[IF.scala 16:21]
      temp <= 64'h80000000; // @[IF.scala 16:21]
    end else if (io_branch_io_is_jump | io_branch_io_is_branch) begin // @[IF.scala 17:14]
      temp <= io_branch_io_dnpc;
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
module ID(
  input         io_in_valid,
  input  [63:0] io_in_bits_PC,
  input  [31:0] io_in_bits_Inst,
  input  [63:0] io_REG1,
  input  [63:0] io_REG2,
  output        io_out_valid,
  output [2:0]  io_out_bits_ctrl_signal_src1Type,
  output [2:0]  io_out_bits_ctrl_signal_src2Type,
  output [2:0]  io_out_bits_ctrl_signal_fuType,
  output        io_out_bits_ctrl_signal_inst_valid,
  output [4:0]  io_out_bits_ctrl_signal_rfSrc1,
  output [4:0]  io_out_bits_ctrl_signal_rfSrc2,
  output        io_out_bits_ctrl_signal_rfWen,
  output [6:0]  io_out_bits_ctrl_signal_aluoptype,
  output [4:0]  io_out_bits_ctrl_signal_rfDest,
  output [63:0] io_out_bits_ctrl_data_src1,
  output [63:0] io_out_bits_ctrl_data_src2,
  output [63:0] io_out_bits_ctrl_data_Imm,
  output [63:0] io_out_bits_ctrl_flow_PC,
  output [31:0] io_out_bits_ctrl_flow_inst
);
  wire [4:0] rd = io_in_bits_Inst[11:7]; // @[ID.scala 51:88]
  wire [31:0] _Inst_decode_T = io_in_bits_Inst & 32'h707f; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_1 = 32'h13 == _Inst_decode_T; // @[Lookup.scala 31:38]
  wire [31:0] _Inst_decode_T_2 = io_in_bits_Inst & 32'hfc00707f; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_3 = 32'h1013 == _Inst_decode_T_2; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_5 = 32'h6013 == _Inst_decode_T; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_7 = 32'h3003 == _Inst_decode_T; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_9 = 32'h2003 == _Inst_decode_T; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_11 = 32'h3013 == _Inst_decode_T; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_13 = 32'h1b == _Inst_decode_T; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_15 = 32'h40005013 == _Inst_decode_T_2; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_17 = 32'h4003 == _Inst_decode_T; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_19 = 32'h3 == _Inst_decode_T; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_21 = 32'h4013 == _Inst_decode_T; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_23 = 32'h7013 == _Inst_decode_T; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_25 = 32'h5013 == _Inst_decode_T_2; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_27 = 32'h1003 == _Inst_decode_T; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_29 = 32'h5003 == _Inst_decode_T; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_31 = 32'h101b == _Inst_decode_T_2; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_33 = 32'h4000501b == _Inst_decode_T_2; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_35 = 32'h501b == _Inst_decode_T_2; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_37 = 32'h2013 == _Inst_decode_T; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_39 = 32'h6003 == _Inst_decode_T; // @[Lookup.scala 31:38]
  wire [31:0] _Inst_decode_T_40 = io_in_bits_Inst & 32'hfe00707f; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_41 = 32'h3b == _Inst_decode_T_40; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_43 = 32'h40000033 == _Inst_decode_T_40; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_45 = 32'h33 == _Inst_decode_T_40; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_47 = 32'h7033 == _Inst_decode_T_40; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_49 = 32'h3033 == _Inst_decode_T_40; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_51 = 32'h103b == _Inst_decode_T_40; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_53 = 32'h6033 == _Inst_decode_T_40; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_55 = 32'h200003b == _Inst_decode_T_40; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_57 = 32'h200403b == _Inst_decode_T_40; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_59 = 32'h200603b == _Inst_decode_T_40; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_61 = 32'h4000003b == _Inst_decode_T_40; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_63 = 32'h2033 == _Inst_decode_T_40; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_65 = 32'h4000503b == _Inst_decode_T_40; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_67 = 32'h503b == _Inst_decode_T_40; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_69 = 32'h4033 == _Inst_decode_T_40; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_71 = 32'h200703b == _Inst_decode_T_40; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_73 = 32'h1033 == _Inst_decode_T_40; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_75 = 32'h2007033 == _Inst_decode_T_40; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_77 = 32'h200503b == _Inst_decode_T_40; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_79 = 32'h2006033 == _Inst_decode_T_40; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_81 = 32'h5033 == _Inst_decode_T_40; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_83 = 32'h2005033 == _Inst_decode_T_40; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_85 = 32'h2004033 == _Inst_decode_T_40; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_87 = 32'h40005033 == _Inst_decode_T_2; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_89 = 32'h2000033 == _Inst_decode_T_40; // @[Lookup.scala 31:38]
  wire [31:0] _Inst_decode_T_90 = io_in_bits_Inst & 32'h7f; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_91 = 32'h17 == _Inst_decode_T_90; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_93 = 32'h37 == _Inst_decode_T_90; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_95 = 32'h3023 == _Inst_decode_T; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_97 = 32'h1023 == _Inst_decode_T; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_99 = 32'h23 == _Inst_decode_T; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_101 = 32'h2023 == _Inst_decode_T; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_103 = 32'h100073 == io_in_bits_Inst; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_105 = 32'h6f == _Inst_decode_T_90; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_107 = 32'h67 == _Inst_decode_T; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_109 = 32'h63 == _Inst_decode_T; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_111 = 32'h1063 == _Inst_decode_T; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_113 = 32'h5063 == _Inst_decode_T; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_115 = 32'h4063 == _Inst_decode_T; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_117 = 32'h6063 == _Inst_decode_T; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_119 = 32'h7063 == _Inst_decode_T; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_121 = 32'h2073 == _Inst_decode_T; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_123 = 32'h1073 == _Inst_decode_T; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_125 = 32'h73 == io_in_bits_Inst; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_127 = 32'h30200073 == io_in_bits_Inst; // @[Lookup.scala 31:38]
  wire [3:0] _Inst_decode_T_130 = _Inst_decode_T_123 ? 4'h8 : 4'h0; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_131 = _Inst_decode_T_121 ? 4'h8 : _Inst_decode_T_130; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_132 = _Inst_decode_T_119 ? 4'hb : _Inst_decode_T_131; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_133 = _Inst_decode_T_117 ? 4'hb : _Inst_decode_T_132; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_134 = _Inst_decode_T_115 ? 4'hb : _Inst_decode_T_133; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_135 = _Inst_decode_T_113 ? 4'hb : _Inst_decode_T_134; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_136 = _Inst_decode_T_111 ? 4'hb : _Inst_decode_T_135; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_137 = _Inst_decode_T_109 ? 4'hb : _Inst_decode_T_136; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_138 = _Inst_decode_T_107 ? 4'h8 : _Inst_decode_T_137; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_139 = _Inst_decode_T_105 ? 4'h7 : _Inst_decode_T_138; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_140 = _Inst_decode_T_103 ? 4'h0 : _Inst_decode_T_139; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_141 = _Inst_decode_T_101 ? 4'h9 : _Inst_decode_T_140; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_142 = _Inst_decode_T_99 ? 4'h9 : _Inst_decode_T_141; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_143 = _Inst_decode_T_97 ? 4'h9 : _Inst_decode_T_142; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_144 = _Inst_decode_T_95 ? 4'h9 : _Inst_decode_T_143; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_145 = _Inst_decode_T_93 ? 4'h3 : _Inst_decode_T_144; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_146 = _Inst_decode_T_91 ? 4'h3 : _Inst_decode_T_145; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_147 = _Inst_decode_T_89 ? 4'h5 : _Inst_decode_T_146; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_148 = _Inst_decode_T_87 ? 4'h5 : _Inst_decode_T_147; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_149 = _Inst_decode_T_85 ? 4'h5 : _Inst_decode_T_148; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_150 = _Inst_decode_T_83 ? 4'h5 : _Inst_decode_T_149; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_151 = _Inst_decode_T_81 ? 4'h5 : _Inst_decode_T_150; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_152 = _Inst_decode_T_79 ? 4'h5 : _Inst_decode_T_151; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_153 = _Inst_decode_T_77 ? 4'h5 : _Inst_decode_T_152; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_154 = _Inst_decode_T_75 ? 4'h5 : _Inst_decode_T_153; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_155 = _Inst_decode_T_73 ? 4'h5 : _Inst_decode_T_154; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_156 = _Inst_decode_T_71 ? 4'h5 : _Inst_decode_T_155; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_157 = _Inst_decode_T_69 ? 4'h5 : _Inst_decode_T_156; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_158 = _Inst_decode_T_67 ? 4'h5 : _Inst_decode_T_157; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_159 = _Inst_decode_T_65 ? 4'h5 : _Inst_decode_T_158; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_160 = _Inst_decode_T_63 ? 4'h5 : _Inst_decode_T_159; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_161 = _Inst_decode_T_61 ? 4'h5 : _Inst_decode_T_160; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_162 = _Inst_decode_T_59 ? 4'h5 : _Inst_decode_T_161; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_163 = _Inst_decode_T_57 ? 4'h5 : _Inst_decode_T_162; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_164 = _Inst_decode_T_55 ? 4'h5 : _Inst_decode_T_163; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_165 = _Inst_decode_T_53 ? 4'h5 : _Inst_decode_T_164; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_166 = _Inst_decode_T_51 ? 4'h5 : _Inst_decode_T_165; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_167 = _Inst_decode_T_49 ? 4'h5 : _Inst_decode_T_166; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_168 = _Inst_decode_T_47 ? 4'h5 : _Inst_decode_T_167; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_169 = _Inst_decode_T_45 ? 4'h5 : _Inst_decode_T_168; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_170 = _Inst_decode_T_43 ? 4'h5 : _Inst_decode_T_169; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_171 = _Inst_decode_T_41 ? 4'h5 : _Inst_decode_T_170; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_172 = _Inst_decode_T_39 ? 4'h8 : _Inst_decode_T_171; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_173 = _Inst_decode_T_37 ? 4'h8 : _Inst_decode_T_172; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_174 = _Inst_decode_T_35 ? 4'h8 : _Inst_decode_T_173; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_175 = _Inst_decode_T_33 ? 4'h8 : _Inst_decode_T_174; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_176 = _Inst_decode_T_31 ? 4'h8 : _Inst_decode_T_175; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_177 = _Inst_decode_T_29 ? 4'h8 : _Inst_decode_T_176; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_178 = _Inst_decode_T_27 ? 4'h8 : _Inst_decode_T_177; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_179 = _Inst_decode_T_25 ? 4'h8 : _Inst_decode_T_178; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_180 = _Inst_decode_T_23 ? 4'h8 : _Inst_decode_T_179; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_181 = _Inst_decode_T_21 ? 4'h8 : _Inst_decode_T_180; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_182 = _Inst_decode_T_19 ? 4'h8 : _Inst_decode_T_181; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_183 = _Inst_decode_T_17 ? 4'h8 : _Inst_decode_T_182; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_184 = _Inst_decode_T_15 ? 4'h8 : _Inst_decode_T_183; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_185 = _Inst_decode_T_13 ? 4'h8 : _Inst_decode_T_184; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_186 = _Inst_decode_T_11 ? 4'h8 : _Inst_decode_T_185; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_187 = _Inst_decode_T_9 ? 4'h8 : _Inst_decode_T_186; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_188 = _Inst_decode_T_7 ? 4'h8 : _Inst_decode_T_187; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_189 = _Inst_decode_T_5 ? 4'h8 : _Inst_decode_T_188; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_190 = _Inst_decode_T_3 ? 4'h8 : _Inst_decode_T_189; // @[Lookup.scala 34:39]
  wire [3:0] Inst_decode_0 = _Inst_decode_T_1 ? 4'h8 : _Inst_decode_T_190; // @[Lookup.scala 34:39]
  wire [1:0] _Inst_decode_T_195 = _Inst_decode_T_119 ? 2'h2 : 2'h0; // @[Lookup.scala 34:39]
  wire [1:0] _Inst_decode_T_196 = _Inst_decode_T_117 ? 2'h2 : _Inst_decode_T_195; // @[Lookup.scala 34:39]
  wire [1:0] _Inst_decode_T_197 = _Inst_decode_T_115 ? 2'h2 : _Inst_decode_T_196; // @[Lookup.scala 34:39]
  wire [1:0] _Inst_decode_T_198 = _Inst_decode_T_113 ? 2'h2 : _Inst_decode_T_197; // @[Lookup.scala 34:39]
  wire [1:0] _Inst_decode_T_199 = _Inst_decode_T_111 ? 2'h2 : _Inst_decode_T_198; // @[Lookup.scala 34:39]
  wire [1:0] _Inst_decode_T_200 = _Inst_decode_T_109 ? 2'h2 : _Inst_decode_T_199; // @[Lookup.scala 34:39]
  wire [1:0] _Inst_decode_T_201 = _Inst_decode_T_107 ? 2'h3 : _Inst_decode_T_200; // @[Lookup.scala 34:39]
  wire [1:0] _Inst_decode_T_202 = _Inst_decode_T_105 ? 2'h3 : _Inst_decode_T_201; // @[Lookup.scala 34:39]
  wire [1:0] _Inst_decode_T_203 = _Inst_decode_T_103 ? 2'h0 : _Inst_decode_T_202; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_204 = _Inst_decode_T_101 ? 3'h4 : {{1'd0}, _Inst_decode_T_203}; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_205 = _Inst_decode_T_99 ? 3'h4 : _Inst_decode_T_204; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_206 = _Inst_decode_T_97 ? 3'h4 : _Inst_decode_T_205; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_207 = _Inst_decode_T_95 ? 3'h4 : _Inst_decode_T_206; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_208 = _Inst_decode_T_93 ? 3'h0 : _Inst_decode_T_207; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_209 = _Inst_decode_T_91 ? 3'h0 : _Inst_decode_T_208; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_210 = _Inst_decode_T_89 ? 3'h0 : _Inst_decode_T_209; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_211 = _Inst_decode_T_87 ? 3'h0 : _Inst_decode_T_210; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_212 = _Inst_decode_T_85 ? 3'h0 : _Inst_decode_T_211; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_213 = _Inst_decode_T_83 ? 3'h0 : _Inst_decode_T_212; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_214 = _Inst_decode_T_81 ? 3'h1 : _Inst_decode_T_213; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_215 = _Inst_decode_T_79 ? 3'h0 : _Inst_decode_T_214; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_216 = _Inst_decode_T_77 ? 3'h0 : _Inst_decode_T_215; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_217 = _Inst_decode_T_75 ? 3'h0 : _Inst_decode_T_216; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_218 = _Inst_decode_T_73 ? 3'h1 : _Inst_decode_T_217; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_219 = _Inst_decode_T_71 ? 3'h0 : _Inst_decode_T_218; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_220 = _Inst_decode_T_69 ? 3'h0 : _Inst_decode_T_219; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_221 = _Inst_decode_T_67 ? 3'h1 : _Inst_decode_T_220; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_222 = _Inst_decode_T_65 ? 3'h1 : _Inst_decode_T_221; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_223 = _Inst_decode_T_63 ? 3'h5 : _Inst_decode_T_222; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_224 = _Inst_decode_T_61 ? 3'h0 : _Inst_decode_T_223; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_225 = _Inst_decode_T_59 ? 3'h0 : _Inst_decode_T_224; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_226 = _Inst_decode_T_57 ? 3'h0 : _Inst_decode_T_225; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_227 = _Inst_decode_T_55 ? 3'h0 : _Inst_decode_T_226; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_228 = _Inst_decode_T_53 ? 3'h0 : _Inst_decode_T_227; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_229 = _Inst_decode_T_51 ? 3'h1 : _Inst_decode_T_228; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_230 = _Inst_decode_T_49 ? 3'h5 : _Inst_decode_T_229; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_231 = _Inst_decode_T_47 ? 3'h0 : _Inst_decode_T_230; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_232 = _Inst_decode_T_45 ? 3'h0 : _Inst_decode_T_231; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_233 = _Inst_decode_T_43 ? 3'h0 : _Inst_decode_T_232; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_234 = _Inst_decode_T_41 ? 3'h0 : _Inst_decode_T_233; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_235 = _Inst_decode_T_39 ? 3'h4 : _Inst_decode_T_234; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_236 = _Inst_decode_T_37 ? 3'h5 : _Inst_decode_T_235; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_237 = _Inst_decode_T_35 ? 3'h1 : _Inst_decode_T_236; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_238 = _Inst_decode_T_33 ? 3'h1 : _Inst_decode_T_237; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_239 = _Inst_decode_T_31 ? 3'h1 : _Inst_decode_T_238; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_240 = _Inst_decode_T_29 ? 3'h4 : _Inst_decode_T_239; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_241 = _Inst_decode_T_27 ? 3'h4 : _Inst_decode_T_240; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_242 = _Inst_decode_T_25 ? 3'h1 : _Inst_decode_T_241; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_243 = _Inst_decode_T_23 ? 3'h0 : _Inst_decode_T_242; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_244 = _Inst_decode_T_21 ? 3'h0 : _Inst_decode_T_243; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_245 = _Inst_decode_T_19 ? 3'h4 : _Inst_decode_T_244; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_246 = _Inst_decode_T_17 ? 3'h4 : _Inst_decode_T_245; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_247 = _Inst_decode_T_15 ? 3'h1 : _Inst_decode_T_246; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_248 = _Inst_decode_T_13 ? 3'h0 : _Inst_decode_T_247; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_249 = _Inst_decode_T_11 ? 3'h5 : _Inst_decode_T_248; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_250 = _Inst_decode_T_9 ? 3'h4 : _Inst_decode_T_249; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_251 = _Inst_decode_T_7 ? 3'h4 : _Inst_decode_T_250; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_252 = _Inst_decode_T_5 ? 3'h0 : _Inst_decode_T_251; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_253 = _Inst_decode_T_3 ? 3'h1 : _Inst_decode_T_252; // @[Lookup.scala 34:39]
  wire [4:0] _Inst_decode_T_254 = _Inst_decode_T_127 ? 5'h18 : 5'h0; // @[Lookup.scala 34:39]
  wire [4:0] _Inst_decode_T_255 = _Inst_decode_T_125 ? 5'h17 : _Inst_decode_T_254; // @[Lookup.scala 34:39]
  wire [4:0] _Inst_decode_T_256 = _Inst_decode_T_123 ? 5'h16 : _Inst_decode_T_255; // @[Lookup.scala 34:39]
  wire [4:0] _Inst_decode_T_257 = _Inst_decode_T_121 ? 5'h15 : _Inst_decode_T_256; // @[Lookup.scala 34:39]
  wire [4:0] _Inst_decode_T_258 = _Inst_decode_T_119 ? 5'hc : _Inst_decode_T_257; // @[Lookup.scala 34:39]
  wire [4:0] _Inst_decode_T_259 = _Inst_decode_T_117 ? 5'hb : _Inst_decode_T_258; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_260 = _Inst_decode_T_115 ? 7'h7b : {{2'd0}, _Inst_decode_T_259}; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_261 = _Inst_decode_T_113 ? 7'h76 : _Inst_decode_T_260; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_262 = _Inst_decode_T_111 ? 7'h6c : _Inst_decode_T_261; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_263 = _Inst_decode_T_109 ? 7'h6b : _Inst_decode_T_262; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_264 = _Inst_decode_T_107 ? 7'h48 : _Inst_decode_T_263; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_265 = _Inst_decode_T_105 ? 7'h19 : _Inst_decode_T_264; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_266 = _Inst_decode_T_103 ? 7'h42 : _Inst_decode_T_265; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_267 = _Inst_decode_T_101 ? 7'h77 : _Inst_decode_T_266; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_268 = _Inst_decode_T_99 ? 7'h74 : _Inst_decode_T_267; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_269 = _Inst_decode_T_97 ? 7'h70 : _Inst_decode_T_268; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_270 = _Inst_decode_T_95 ? 7'h46 : _Inst_decode_T_269; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_271 = _Inst_decode_T_93 ? 7'h1a : _Inst_decode_T_270; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_272 = _Inst_decode_T_91 ? 7'h40 : _Inst_decode_T_271; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_273 = _Inst_decode_T_89 ? 7'h7 : _Inst_decode_T_272; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_274 = _Inst_decode_T_87 ? 7'h14 : _Inst_decode_T_273; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_275 = _Inst_decode_T_85 ? 7'h43 : _Inst_decode_T_274; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_276 = _Inst_decode_T_83 ? 7'h13 : _Inst_decode_T_275; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_277 = _Inst_decode_T_81 ? 7'h75 : _Inst_decode_T_276; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_278 = _Inst_decode_T_79 ? 7'h12 : _Inst_decode_T_277; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_279 = _Inst_decode_T_77 ? 7'h10 : _Inst_decode_T_278; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_280 = _Inst_decode_T_75 ? 7'hf : _Inst_decode_T_279; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_281 = _Inst_decode_T_73 ? 7'h41 : _Inst_decode_T_280; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_282 = _Inst_decode_T_71 ? 7'hd : _Inst_decode_T_281; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_283 = _Inst_decode_T_69 ? 7'h72 : _Inst_decode_T_282; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_284 = _Inst_decode_T_67 ? 7'ha : _Inst_decode_T_283; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_285 = _Inst_decode_T_65 ? 7'h9 : _Inst_decode_T_284; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_286 = _Inst_decode_T_63 ? 7'h2 : _Inst_decode_T_285; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_287 = _Inst_decode_T_61 ? 7'h1 : _Inst_decode_T_286; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_288 = _Inst_decode_T_59 ? 7'h7a : _Inst_decode_T_287; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_289 = _Inst_decode_T_57 ? 7'h79 : _Inst_decode_T_288; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_290 = _Inst_decode_T_55 ? 7'h78 : _Inst_decode_T_289; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_291 = _Inst_decode_T_53 ? 7'h44 : _Inst_decode_T_290; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_292 = _Inst_decode_T_51 ? 7'h73 : _Inst_decode_T_291; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_293 = _Inst_decode_T_49 ? 7'h6a : _Inst_decode_T_292; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_294 = _Inst_decode_T_47 ? 7'h71 : _Inst_decode_T_293; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_295 = _Inst_decode_T_45 ? 7'h40 : _Inst_decode_T_294; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_296 = _Inst_decode_T_43 ? 7'h69 : _Inst_decode_T_295; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_297 = _Inst_decode_T_41 ? 7'h68 : _Inst_decode_T_296; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_298 = _Inst_decode_T_39 ? 7'h11 : _Inst_decode_T_297; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_299 = _Inst_decode_T_37 ? 7'h2 : _Inst_decode_T_298; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_300 = _Inst_decode_T_35 ? 7'h8 : _Inst_decode_T_299; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_301 = _Inst_decode_T_33 ? 7'h6 : _Inst_decode_T_300; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_302 = _Inst_decode_T_31 ? 7'h5 : _Inst_decode_T_301; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_303 = _Inst_decode_T_29 ? 7'h4 : _Inst_decode_T_302; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_304 = _Inst_decode_T_27 ? 7'h3 : _Inst_decode_T_303; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_305 = _Inst_decode_T_25 ? 7'h75 : _Inst_decode_T_304; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_306 = _Inst_decode_T_23 ? 7'h71 : _Inst_decode_T_305; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_307 = _Inst_decode_T_21 ? 7'h72 : _Inst_decode_T_306; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_308 = _Inst_decode_T_19 ? 7'he : _Inst_decode_T_307; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_309 = _Inst_decode_T_17 ? 7'h6f : _Inst_decode_T_308; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_310 = _Inst_decode_T_15 ? 7'h6e : _Inst_decode_T_309; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_311 = _Inst_decode_T_13 ? 7'h6d : _Inst_decode_T_310; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_312 = _Inst_decode_T_11 ? 7'h6a : _Inst_decode_T_311; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_313 = _Inst_decode_T_9 ? 7'h47 : _Inst_decode_T_312; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_314 = _Inst_decode_T_7 ? 7'h45 : _Inst_decode_T_313; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_315 = _Inst_decode_T_5 ? 7'h44 : _Inst_decode_T_314; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_316 = _Inst_decode_T_3 ? 7'h41 : _Inst_decode_T_315; // @[Lookup.scala 34:39]
  wire [6:0] Inst_decode_2 = _Inst_decode_T_1 ? 7'h40 : _Inst_decode_T_316; // @[Lookup.scala 34:39]
  wire  _Inst_decode_T_321 = _Inst_decode_T_119 ? 1'h0 : _Inst_decode_T_121 | _Inst_decode_T_123; // @[Lookup.scala 34:39]
  wire  _Inst_decode_T_322 = _Inst_decode_T_117 ? 1'h0 : _Inst_decode_T_321; // @[Lookup.scala 34:39]
  wire  _Inst_decode_T_323 = _Inst_decode_T_115 ? 1'h0 : _Inst_decode_T_322; // @[Lookup.scala 34:39]
  wire  _Inst_decode_T_324 = _Inst_decode_T_113 ? 1'h0 : _Inst_decode_T_323; // @[Lookup.scala 34:39]
  wire  _Inst_decode_T_325 = _Inst_decode_T_111 ? 1'h0 : _Inst_decode_T_324; // @[Lookup.scala 34:39]
  wire  _Inst_decode_T_326 = _Inst_decode_T_109 ? 1'h0 : _Inst_decode_T_325; // @[Lookup.scala 34:39]
  wire  _Inst_decode_T_329 = _Inst_decode_T_103 ? 1'h0 : _Inst_decode_T_105 | (_Inst_decode_T_107 | _Inst_decode_T_326); // @[Lookup.scala 34:39]
  wire  _Inst_decode_T_330 = _Inst_decode_T_101 ? 1'h0 : _Inst_decode_T_329; // @[Lookup.scala 34:39]
  wire  _Inst_decode_T_331 = _Inst_decode_T_99 ? 1'h0 : _Inst_decode_T_330; // @[Lookup.scala 34:39]
  wire  _Inst_decode_T_332 = _Inst_decode_T_97 ? 1'h0 : _Inst_decode_T_331; // @[Lookup.scala 34:39]
  wire  _Inst_decode_T_333 = _Inst_decode_T_95 ? 1'h0 : _Inst_decode_T_332; // @[Lookup.scala 34:39]
  wire  _Inst_decode_T_363 = _Inst_decode_T_35 | (_Inst_decode_T_37 | (_Inst_decode_T_39 | (_Inst_decode_T_41 | (
    _Inst_decode_T_43 | (_Inst_decode_T_45 | (_Inst_decode_T_47 | (_Inst_decode_T_49 | (_Inst_decode_T_51 | (
    _Inst_decode_T_53 | (_Inst_decode_T_55 | (_Inst_decode_T_57 | (_Inst_decode_T_59 | (_Inst_decode_T_61 | (
    _Inst_decode_T_63 | (_Inst_decode_T_65 | (_Inst_decode_T_67 | (_Inst_decode_T_69 | (_Inst_decode_T_71 | (
    _Inst_decode_T_73 | (_Inst_decode_T_75 | (_Inst_decode_T_77 | (_Inst_decode_T_79 | (_Inst_decode_T_81 | (
    _Inst_decode_T_83 | (_Inst_decode_T_85 | (_Inst_decode_T_87 | (_Inst_decode_T_89 | (_Inst_decode_T_91 | (
    _Inst_decode_T_93 | _Inst_decode_T_333))))))))))))))))))))))))))))); // @[Lookup.scala 34:39]
  wire  Inst_decode_3 = _Inst_decode_T_1 | (_Inst_decode_T_3 | (_Inst_decode_T_5 | (_Inst_decode_T_7 | (_Inst_decode_T_9
     | (_Inst_decode_T_11 | (_Inst_decode_T_13 | (_Inst_decode_T_15 | (_Inst_decode_T_17 | (_Inst_decode_T_19 | (
    _Inst_decode_T_21 | (_Inst_decode_T_23 | (_Inst_decode_T_25 | (_Inst_decode_T_27 | (_Inst_decode_T_29 | (
    _Inst_decode_T_31 | (_Inst_decode_T_33 | _Inst_decode_T_363)))))))))))))))); // @[Lookup.scala 34:39]
  wire  _srctype1_T = 4'h8 == Inst_decode_0; // @[util.scala 31:32]
  wire  _srctype1_T_2 = 4'h9 == Inst_decode_0; // @[util.scala 31:32]
  wire  _srctype1_T_3 = 4'hb == Inst_decode_0; // @[util.scala 31:32]
  wire  _srctype1_T_4 = 4'h7 == Inst_decode_0; // @[util.scala 31:32]
  wire  _srctype1_T_5 = 4'h3 == Inst_decode_0; // @[util.scala 31:32]
  wire [1:0] _srctype1_T_11 = _srctype1_T_4 ? 2'h2 : 2'h0; // @[Mux.scala 27:73]
  wire [1:0] _srctype1_T_12 = _srctype1_T_5 ? 2'h2 : 2'h0; // @[Mux.scala 27:73]
  wire [1:0] srctype1 = _srctype1_T_11 | _srctype1_T_12; // @[Mux.scala 27:73]
  wire  srctype2 = _srctype1_T | _srctype1_T_4 | _srctype1_T_5; // @[Mux.scala 27:73]
  wire  sign = io_in_bits_Inst[31]; // @[util.scala 10:19]
  wire [51:0] _T_2 = sign ? 52'hfffffffffffff : 52'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _T_3 = {_T_2,io_in_bits_Inst[31:20]}; // @[Cat.scala 31:58]
  wire [19:0] _T_7 = {io_in_bits_Inst[19:12],io_in_bits_Inst[20],io_in_bits_Inst[30:21],1'h0}; // @[Cat.scala 31:58]
  wire  sign_1 = _T_7[19]; // @[util.scala 10:19]
  wire [43:0] _T_9 = sign_1 ? 44'hfffffffffff : 44'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _T_10 = {_T_9,io_in_bits_Inst[19:12],io_in_bits_Inst[20],io_in_bits_Inst[30:21],1'h0}; // @[Cat.scala 31:58]
  wire [31:0] _T_13 = {io_in_bits_Inst[31:12],12'h0}; // @[Cat.scala 31:58]
  wire  sign_2 = _T_13[31]; // @[util.scala 10:19]
  wire [31:0] _T_15 = sign_2 ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _T_16 = {_T_15,io_in_bits_Inst[31:12],12'h0}; // @[Cat.scala 31:58]
  wire [11:0] _T_19 = {io_in_bits_Inst[31:25],rd}; // @[Cat.scala 31:58]
  wire  sign_3 = _T_19[11]; // @[util.scala 10:19]
  wire [51:0] _T_21 = sign_3 ? 52'hfffffffffffff : 52'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _T_22 = {_T_21,io_in_bits_Inst[31:25],rd}; // @[Cat.scala 31:58]
  wire [12:0] _T_27 = {io_in_bits_Inst[31],io_in_bits_Inst[7],io_in_bits_Inst[30:25],io_in_bits_Inst[11:8],1'h0}; // @[Cat.scala 31:58]
  wire  sign_4 = _T_27[12]; // @[util.scala 10:19]
  wire [50:0] _T_29 = sign_4 ? 51'h7ffffffffffff : 51'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _T_30 = {_T_29,io_in_bits_Inst[31],io_in_bits_Inst[7],io_in_bits_Inst[30:25],io_in_bits_Inst[11:8],1'h0}; // @[Cat.scala 31:58]
  wire [63:0] _imm_T_5 = _srctype1_T ? _T_3 : 64'h0; // @[Mux.scala 27:73]
  wire [63:0] _imm_T_6 = _srctype1_T_4 ? _T_10 : 64'h0; // @[Mux.scala 27:73]
  wire [63:0] _imm_T_7 = _srctype1_T_5 ? _T_16 : 64'h0; // @[Mux.scala 27:73]
  wire [63:0] _imm_T_8 = _srctype1_T_2 ? _T_22 : 64'h0; // @[Mux.scala 27:73]
  wire [63:0] _imm_T_9 = _srctype1_T_3 ? _T_30 : 64'h0; // @[Mux.scala 27:73]
  wire [63:0] _imm_T_10 = _imm_T_5 | _imm_T_6; // @[Mux.scala 27:73]
  wire [63:0] _imm_T_11 = _imm_T_10 | _imm_T_7; // @[Mux.scala 27:73]
  wire [63:0] _imm_T_12 = _imm_T_11 | _imm_T_8; // @[Mux.scala 27:73]
  assign io_out_valid = io_in_valid; // @[ID.scala 106:36]
  assign io_out_bits_ctrl_signal_src1Type = {{1'd0}, srctype1}; // @[ID.scala 88:36]
  assign io_out_bits_ctrl_signal_src2Type = {{2'd0}, srctype2}; // @[ID.scala 89:36]
  assign io_out_bits_ctrl_signal_fuType = _Inst_decode_T_1 ? 3'h0 : _Inst_decode_T_253; // @[Lookup.scala 34:39]
  assign io_out_bits_ctrl_signal_inst_valid = Inst_decode_2 == 7'h0 | ~io_in_valid ? 1'h0 : 1'h1; // @[ID.scala 90:44]
  assign io_out_bits_ctrl_signal_rfSrc1 = io_in_bits_Inst[19:15]; // @[ID.scala 51:38]
  assign io_out_bits_ctrl_signal_rfSrc2 = io_in_bits_Inst[24:20]; // @[ID.scala 51:63]
  assign io_out_bits_ctrl_signal_rfWen = io_in_valid & Inst_decode_3; // @[ID.scala 85:40]
  assign io_out_bits_ctrl_signal_aluoptype = _Inst_decode_T_1 ? 7'h40 : _Inst_decode_T_316; // @[Lookup.scala 34:39]
  assign io_out_bits_ctrl_signal_rfDest = io_in_bits_Inst[11:7]; // @[ID.scala 51:88]
  assign io_out_bits_ctrl_data_src1 = io_REG1; // @[ID.scala 100:30]
  assign io_out_bits_ctrl_data_src2 = io_REG2; // @[ID.scala 101:30]
  assign io_out_bits_ctrl_data_Imm = _imm_T_12 | _imm_T_9; // @[Mux.scala 27:73]
  assign io_out_bits_ctrl_flow_PC = io_in_bits_PC; // @[ID.scala 93:28]
  assign io_out_bits_ctrl_flow_inst = io_in_bits_Inst; // @[ID.scala 94:30]
endmodule
module EXE(
  input         clock,
  input         reset,
  input         io_in_valid,
  input  [2:0]  io_in_bits_ctrl_signal_src1Type,
  input  [2:0]  io_in_bits_ctrl_signal_src2Type,
  input  [2:0]  io_in_bits_ctrl_signal_fuType,
  input         io_in_bits_ctrl_signal_inst_valid,
  input  [4:0]  io_in_bits_ctrl_signal_rfSrc1,
  input  [4:0]  io_in_bits_ctrl_signal_rfSrc2,
  input         io_in_bits_ctrl_signal_rfWen,
  input  [6:0]  io_in_bits_ctrl_signal_aluoptype,
  input  [4:0]  io_in_bits_ctrl_signal_rfDest,
  input  [63:0] io_in_bits_ctrl_data_src1,
  input  [63:0] io_in_bits_ctrl_data_src2,
  input  [63:0] io_in_bits_ctrl_data_Imm,
  input  [63:0] io_in_bits_ctrl_flow_PC,
  input  [31:0] io_in_bits_ctrl_flow_inst,
  input  [63:0] io_src1,
  input  [63:0] io_src2,
  output        io_branchIO_is_branch,
  output        io_branchIO_is_jump,
  output [63:0] io_branchIO_dnpc,
  output        io_out_valid,
  output [2:0]  io_out_bits_ctrl_signal_fuType,
  output        io_out_bits_ctrl_signal_inst_valid,
  output        io_out_bits_ctrl_signal_rfWen,
  output [6:0]  io_out_bits_ctrl_signal_aluoptype,
  output [63:0] io_out_bits_ctrl_flow_PC,
  output [31:0] io_out_bits_ctrl_flow_inst,
  output [63:0] io_out_bits_ctrl_flow_Dnpc,
  output [4:0]  io_out_bits_ctrl_rf_rfDest,
  output        io_out_bits_ctrl_rf_rfWen,
  output [63:0] io_out_bits_ctrl_rf_rfData,
  output [63:0] io_out_bits_ctrl_data_src1,
  output [63:0] io_out_bits_ctrl_data_src2,
  output [63:0] io_out_bits_ctrl_data_Imm,
  output        io_is_break,
  output        io_is_flush
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
  reg [63:0] _RAND_1;
  reg [63:0] _RAND_2;
  reg [63:0] _RAND_3;
  reg [63:0] _RAND_4;
  reg [63:0] _RAND_5;
  reg [63:0] _RAND_6;
  reg [63:0] _RAND_7;
  reg [63:0] _RAND_8;
  reg [63:0] _RAND_9;
  reg [63:0] _RAND_10;
  reg [63:0] _RAND_11;
  reg [63:0] _RAND_12;
  reg [63:0] _RAND_13;
`endif // RANDOMIZE_REG_INIT
  wire [63:0] CSRDIFF_mepc; // @[EXE.scala 105:21]
  wire [63:0] CSRDIFF_mcause; // @[EXE.scala 105:21]
  wire [63:0] CSRDIFF_mstatus; // @[EXE.scala 105:21]
  wire [63:0] CSRDIFF_mtvec; // @[EXE.scala 105:21]
  reg [63:0] mepc; // @[CSR.scala 18:17]
  reg [63:0] mcause; // @[CSR.scala 19:23]
  reg [63:0] mstatus; // @[CSR.scala 20:24]
  reg [63:0] mtvec; // @[CSR.scala 21:22]
  reg [63:0] mie; // @[CSR.scala 22:20]
  reg [63:0] mip; // @[CSR.scala 23:20]
  wire [63:0] _GEN_1 = 3'h2 == io_in_bits_ctrl_signal_src1Type ? io_in_bits_ctrl_flow_PC : 64'h0; // @[EXE.scala 110:43 117:12]
  wire [63:0] src1 = 3'h0 == io_in_bits_ctrl_signal_src1Type ? io_src1 : _GEN_1; // @[EXE.scala 110:43 113:12]
  wire [63:0] _GEN_3 = 3'h1 == io_in_bits_ctrl_signal_src2Type ? io_in_bits_ctrl_data_Imm : 64'h0; // @[EXE.scala 123:43 129:12]
  wire [63:0] src2 = 3'h0 == io_in_bits_ctrl_signal_src2Type ? io_src2 : _GEN_3; // @[EXE.scala 123:43 126:12]
  wire [63:0] _dnpc_T_1 = io_in_bits_ctrl_flow_PC + 64'h4; // @[EXE.scala 135:49]
  wire [63:0] _alu_result_T_1 = src1 + src2; // @[EXE.scala 139:26]
  wire  alu_result_sign = _alu_result_T_1[31]; // @[util.scala 10:19]
  wire [31:0] _alu_result_T_6 = alu_result_sign ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _alu_result_T_7 = {_alu_result_T_6,_alu_result_T_1[31:0]}; // @[Cat.scala 31:58]
  wire [63:0] _alu_result_T_8 = src1 | src2; // @[EXE.scala 148:26]
  wire [63:0] _alu_result_T_10 = src1 - src2; // @[EXE.scala 151:26]
  wire [63:0] _alu_result_T_11 = src1 & src2; // @[EXE.scala 154:26]
  wire [63:0] _alu_result_T_12 = src1 ^ src2; // @[EXE.scala 157:26]
  wire [127:0] _alu_result_T_19 = src1 * src2; // @[EXE.scala 163:37]
  wire  alu_result_sign_2 = _alu_result_T_19[31]; // @[util.scala 10:19]
  wire [31:0] _alu_result_T_22 = alu_result_sign_2 ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _alu_result_T_23 = {_alu_result_T_22,_alu_result_T_19[31:0]}; // @[Cat.scala 31:58]
  wire [31:0] _alu_result_T_25 = src1[31:0]; // @[EXE.scala 166:44]
  wire [31:0] _alu_result_T_27 = src2[31:0]; // @[EXE.scala 166:65]
  wire [32:0] _alu_result_T_28 = $signed(_alu_result_T_25) / $signed(_alu_result_T_27); // @[EXE.scala 166:51]
  wire  alu_result_sign_3 = _alu_result_T_28[31]; // @[util.scala 10:19]
  wire [31:0] _alu_result_T_31 = alu_result_sign_3 ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _alu_result_T_32 = {_alu_result_T_31,_alu_result_T_28[31:0]}; // @[Cat.scala 31:58]
  wire [31:0] _alu_result_T_38 = $signed(_alu_result_T_25) % $signed(_alu_result_T_27); // @[EXE.scala 169:73]
  wire  alu_result_sign_4 = _alu_result_T_38[31]; // @[util.scala 10:19]
  wire [31:0] _alu_result_T_40 = alu_result_sign_4 ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _alu_result_T_41 = {_alu_result_T_40,_alu_result_T_38}; // @[Cat.scala 31:58]
  wire [31:0] _GEN_175 = src1[31:0] % src2[31:0]; // @[EXE.scala 172:44]
  wire [31:0] _alu_result_T_44 = _GEN_175[31:0]; // @[EXE.scala 172:44]
  wire  alu_result_sign_5 = _alu_result_T_44[31]; // @[util.scala 10:19]
  wire [31:0] _alu_result_T_47 = alu_result_sign_5 ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _alu_result_T_48 = {_alu_result_T_47,_alu_result_T_44}; // @[Cat.scala 31:58]
  wire  alu_result_sign_6 = _alu_result_T_10[31]; // @[util.scala 10:19]
  wire [31:0] _alu_result_T_53 = alu_result_sign_6 ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _alu_result_T_54 = {_alu_result_T_53,_alu_result_T_10[31:0]}; // @[Cat.scala 31:58]
  wire [63:0] _GEN_176 = src1 % src2; // @[EXE.scala 181:27]
  wire [63:0] _alu_result_T_57 = _GEN_176[63:0]; // @[EXE.scala 181:27]
  wire [63:0] _alu_result_T_58 = 3'h0 == io_in_bits_ctrl_signal_src1Type ? io_src1 : _GEN_1; // @[EXE.scala 184:27]
  wire [63:0] _alu_result_T_59 = 3'h0 == io_in_bits_ctrl_signal_src2Type ? io_src2 : _GEN_3; // @[EXE.scala 184:41]
  wire [63:0] _alu_result_T_61 = $signed(_alu_result_T_58) % $signed(_alu_result_T_59); // @[EXE.scala 184:49]
  wire [31:0] _alu_result_T_64 = src1[31:0] / src2[31:0]; // @[EXE.scala 187:44]
  wire  alu_result_sign_7 = _alu_result_T_64[31]; // @[util.scala 10:19]
  wire [31:0] _alu_result_T_67 = alu_result_sign_7 ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _alu_result_T_68 = {_alu_result_T_67,_alu_result_T_64}; // @[Cat.scala 31:58]
  wire [63:0] _alu_result_T_69 = src1 / src2; // @[EXE.scala 190:26]
  wire [64:0] _alu_result_T_72 = $signed(_alu_result_T_58) / $signed(_alu_result_T_59); // @[EXE.scala 193:34]
  wire  _alu_result_T_75 = io_in_bits_ctrl_data_Imm[11:0] == 12'h300; // @[CSR.scala 26:11]
  wire  _alu_result_T_76 = io_in_bits_ctrl_data_Imm[11:0] == 12'h305; // @[CSR.scala 27:11]
  wire  _alu_result_T_77 = io_in_bits_ctrl_data_Imm[11:0] == 12'h341; // @[CSR.scala 28:11]
  wire  _alu_result_T_78 = io_in_bits_ctrl_data_Imm[11:0] == 12'h342; // @[CSR.scala 29:11]
  wire  _alu_result_T_79 = io_in_bits_ctrl_data_Imm[11:0] == 12'h304; // @[CSR.scala 30:11]
  wire  _alu_result_T_80 = io_in_bits_ctrl_data_Imm[11:0] == 12'h344; // @[CSR.scala 31:11]
  wire [63:0] _alu_result_T_81 = _alu_result_T_80 ? mip : 64'h0; // @[Mux.scala 101:16]
  wire [63:0] _alu_result_T_82 = _alu_result_T_79 ? mie : _alu_result_T_81; // @[Mux.scala 101:16]
  wire [63:0] _alu_result_T_83 = _alu_result_T_78 ? mcause : _alu_result_T_82; // @[Mux.scala 101:16]
  wire [63:0] _alu_result_T_84 = _alu_result_T_77 ? mepc : _alu_result_T_83; // @[Mux.scala 101:16]
  wire [63:0] _alu_result_T_85 = _alu_result_T_76 ? mtvec : _alu_result_T_84; // @[Mux.scala 101:16]
  wire [63:0] _alu_result_T_86 = _alu_result_T_75 ? mstatus : _alu_result_T_85; // @[Mux.scala 101:16]
  wire [63:0] _T_39 = _alu_result_T_86 | src1; // @[EXE.scala 197:50]
  wire [63:0] _GEN_5 = _alu_result_T_80 ? _T_39 : mip; // @[CSR.scala 50:41 51:13 23:20]
  wire [63:0] _GEN_6 = _alu_result_T_79 ? _T_39 : mie; // @[CSR.scala 47:41 48:13 22:20]
  wire [63:0] _GEN_7 = _alu_result_T_79 ? mip : _GEN_5; // @[CSR.scala 23:20 47:41]
  wire [63:0] _GEN_8 = _alu_result_T_78 ? _T_39 : mcause; // @[CSR.scala 44:44 45:16 19:23]
  wire [63:0] _GEN_9 = _alu_result_T_78 ? mie : _GEN_6; // @[CSR.scala 22:20 44:44]
  wire [63:0] _GEN_10 = _alu_result_T_78 ? mip : _GEN_7; // @[CSR.scala 23:20 44:44]
  wire [63:0] _GEN_11 = _alu_result_T_77 ? _T_39 : mepc; // @[CSR.scala 41:42 42:14 18:17]
  wire [63:0] _GEN_12 = _alu_result_T_77 ? mcause : _GEN_8; // @[CSR.scala 19:23 41:42]
  wire [63:0] _GEN_13 = _alu_result_T_77 ? mie : _GEN_9; // @[CSR.scala 22:20 41:42]
  wire [63:0] _GEN_14 = _alu_result_T_77 ? mip : _GEN_10; // @[CSR.scala 23:20 41:42]
  wire [63:0] _GEN_15 = _alu_result_T_76 ? _T_39 : mtvec; // @[CSR.scala 38:43 39:15 21:22]
  wire [63:0] _GEN_16 = _alu_result_T_76 ? mepc : _GEN_11; // @[CSR.scala 18:17 38:43]
  wire [63:0] _GEN_17 = _alu_result_T_76 ? mcause : _GEN_12; // @[CSR.scala 19:23 38:43]
  wire [63:0] _GEN_18 = _alu_result_T_76 ? mie : _GEN_13; // @[CSR.scala 22:20 38:43]
  wire [63:0] _GEN_19 = _alu_result_T_76 ? mip : _GEN_14; // @[CSR.scala 23:20 38:43]
  wire [63:0] _GEN_20 = _alu_result_T_75 ? _T_39 : mstatus; // @[CSR.scala 35:38 36:15 20:24]
  wire [63:0] _GEN_21 = _alu_result_T_75 ? mtvec : _GEN_15; // @[CSR.scala 21:22 35:38]
  wire [63:0] _GEN_22 = _alu_result_T_75 ? mepc : _GEN_16; // @[CSR.scala 18:17 35:38]
  wire [63:0] _GEN_23 = _alu_result_T_75 ? mcause : _GEN_17; // @[CSR.scala 19:23 35:38]
  wire [63:0] _GEN_24 = _alu_result_T_75 ? mie : _GEN_18; // @[CSR.scala 22:20 35:38]
  wire [63:0] _GEN_25 = _alu_result_T_75 ? mip : _GEN_19; // @[CSR.scala 23:20 35:38]
  wire [63:0] _GEN_26 = _alu_result_T_80 ? src1 : mip; // @[CSR.scala 50:41 51:13 23:20]
  wire [63:0] _GEN_27 = _alu_result_T_79 ? src1 : mie; // @[CSR.scala 47:41 48:13 22:20]
  wire [63:0] _GEN_28 = _alu_result_T_79 ? mip : _GEN_26; // @[CSR.scala 23:20 47:41]
  wire [63:0] _GEN_29 = _alu_result_T_78 ? src1 : mcause; // @[CSR.scala 44:44 45:16 19:23]
  wire [63:0] _GEN_30 = _alu_result_T_78 ? mie : _GEN_27; // @[CSR.scala 22:20 44:44]
  wire [63:0] _GEN_31 = _alu_result_T_78 ? mip : _GEN_28; // @[CSR.scala 23:20 44:44]
  wire [63:0] _GEN_32 = _alu_result_T_77 ? src1 : mepc; // @[CSR.scala 41:42 42:14 18:17]
  wire [63:0] _GEN_33 = _alu_result_T_77 ? mcause : _GEN_29; // @[CSR.scala 19:23 41:42]
  wire [63:0] _GEN_34 = _alu_result_T_77 ? mie : _GEN_30; // @[CSR.scala 22:20 41:42]
  wire [63:0] _GEN_35 = _alu_result_T_77 ? mip : _GEN_31; // @[CSR.scala 23:20 41:42]
  wire [63:0] _GEN_36 = _alu_result_T_76 ? src1 : mtvec; // @[CSR.scala 38:43 39:15 21:22]
  wire [63:0] _GEN_37 = _alu_result_T_76 ? mepc : _GEN_32; // @[CSR.scala 18:17 38:43]
  wire [63:0] _GEN_38 = _alu_result_T_76 ? mcause : _GEN_33; // @[CSR.scala 19:23 38:43]
  wire [63:0] _GEN_39 = _alu_result_T_76 ? mie : _GEN_34; // @[CSR.scala 22:20 38:43]
  wire [63:0] _GEN_40 = _alu_result_T_76 ? mip : _GEN_35; // @[CSR.scala 23:20 38:43]
  wire [63:0] _GEN_41 = _alu_result_T_75 ? src1 : mstatus; // @[CSR.scala 35:38 36:15 20:24]
  wire [63:0] _GEN_42 = _alu_result_T_75 ? mtvec : _GEN_36; // @[CSR.scala 21:22 35:38]
  wire [63:0] _GEN_43 = _alu_result_T_75 ? mepc : _GEN_37; // @[CSR.scala 18:17 35:38]
  wire [63:0] _GEN_44 = _alu_result_T_75 ? mcause : _GEN_38; // @[CSR.scala 19:23 35:38]
  wire [63:0] _GEN_45 = _alu_result_T_75 ? mie : _GEN_39; // @[CSR.scala 22:20 35:38]
  wire [63:0] _GEN_46 = _alu_result_T_75 ? mip : _GEN_40; // @[CSR.scala 23:20 35:38]
  wire [63:0] _GEN_47 = 7'h16 == io_in_bits_ctrl_signal_aluoptype ? _alu_result_T_86 : 64'h0; // @[EXE.scala 137:44 200:18]
  wire [63:0] _GEN_48 = 7'h16 == io_in_bits_ctrl_signal_aluoptype ? _GEN_41 : mstatus; // @[EXE.scala 137:44 CSR.scala 20:24]
  wire [63:0] _GEN_49 = 7'h16 == io_in_bits_ctrl_signal_aluoptype ? _GEN_42 : mtvec; // @[EXE.scala 137:44 CSR.scala 21:22]
  wire [63:0] _GEN_50 = 7'h16 == io_in_bits_ctrl_signal_aluoptype ? _GEN_43 : mepc; // @[EXE.scala 137:44 CSR.scala 18:17]
  wire [63:0] _GEN_51 = 7'h16 == io_in_bits_ctrl_signal_aluoptype ? _GEN_44 : mcause; // @[EXE.scala 137:44 CSR.scala 19:23]
  wire [63:0] _GEN_52 = 7'h16 == io_in_bits_ctrl_signal_aluoptype ? _GEN_45 : mie; // @[EXE.scala 137:44 CSR.scala 22:20]
  wire [63:0] _GEN_53 = 7'h16 == io_in_bits_ctrl_signal_aluoptype ? _GEN_46 : mip; // @[EXE.scala 137:44 CSR.scala 23:20]
  wire [63:0] _GEN_54 = 7'h15 == io_in_bits_ctrl_signal_aluoptype ? _alu_result_T_86 : _GEN_47; // @[EXE.scala 137:44 196:18]
  wire [63:0] _GEN_55 = 7'h15 == io_in_bits_ctrl_signal_aluoptype ? _GEN_20 : _GEN_48; // @[EXE.scala 137:44]
  wire [63:0] _GEN_56 = 7'h15 == io_in_bits_ctrl_signal_aluoptype ? _GEN_21 : _GEN_49; // @[EXE.scala 137:44]
  wire [63:0] _GEN_57 = 7'h15 == io_in_bits_ctrl_signal_aluoptype ? _GEN_22 : _GEN_50; // @[EXE.scala 137:44]
  wire [63:0] _GEN_58 = 7'h15 == io_in_bits_ctrl_signal_aluoptype ? _GEN_23 : _GEN_51; // @[EXE.scala 137:44]
  wire [63:0] _GEN_59 = 7'h15 == io_in_bits_ctrl_signal_aluoptype ? _GEN_24 : _GEN_52; // @[EXE.scala 137:44]
  wire [63:0] _GEN_60 = 7'h15 == io_in_bits_ctrl_signal_aluoptype ? _GEN_25 : _GEN_53; // @[EXE.scala 137:44]
  wire [63:0] _GEN_61 = 7'h43 == io_in_bits_ctrl_signal_aluoptype ? _alu_result_T_72[63:0] : _GEN_54; // @[EXE.scala 137:44 193:18]
  wire [63:0] _GEN_62 = 7'h43 == io_in_bits_ctrl_signal_aluoptype ? mstatus : _GEN_55; // @[EXE.scala 137:44 CSR.scala 20:24]
  wire [63:0] _GEN_63 = 7'h43 == io_in_bits_ctrl_signal_aluoptype ? mtvec : _GEN_56; // @[EXE.scala 137:44 CSR.scala 21:22]
  wire [63:0] _GEN_64 = 7'h43 == io_in_bits_ctrl_signal_aluoptype ? mepc : _GEN_57; // @[EXE.scala 137:44 CSR.scala 18:17]
  wire [63:0] _GEN_65 = 7'h43 == io_in_bits_ctrl_signal_aluoptype ? mcause : _GEN_58; // @[EXE.scala 137:44 CSR.scala 19:23]
  wire [63:0] _GEN_66 = 7'h43 == io_in_bits_ctrl_signal_aluoptype ? mie : _GEN_59; // @[EXE.scala 137:44 CSR.scala 22:20]
  wire [63:0] _GEN_67 = 7'h43 == io_in_bits_ctrl_signal_aluoptype ? mip : _GEN_60; // @[EXE.scala 137:44 CSR.scala 23:20]
  wire [63:0] _GEN_68 = 7'h13 == io_in_bits_ctrl_signal_aluoptype ? _alu_result_T_69 : _GEN_61; // @[EXE.scala 137:44 190:18]
  wire [63:0] _GEN_69 = 7'h13 == io_in_bits_ctrl_signal_aluoptype ? mstatus : _GEN_62; // @[EXE.scala 137:44 CSR.scala 20:24]
  wire [63:0] _GEN_70 = 7'h13 == io_in_bits_ctrl_signal_aluoptype ? mtvec : _GEN_63; // @[EXE.scala 137:44 CSR.scala 21:22]
  wire [63:0] _GEN_71 = 7'h13 == io_in_bits_ctrl_signal_aluoptype ? mepc : _GEN_64; // @[EXE.scala 137:44 CSR.scala 18:17]
  wire [63:0] _GEN_72 = 7'h13 == io_in_bits_ctrl_signal_aluoptype ? mcause : _GEN_65; // @[EXE.scala 137:44 CSR.scala 19:23]
  wire [63:0] _GEN_73 = 7'h13 == io_in_bits_ctrl_signal_aluoptype ? mie : _GEN_66; // @[EXE.scala 137:44 CSR.scala 22:20]
  wire [63:0] _GEN_74 = 7'h13 == io_in_bits_ctrl_signal_aluoptype ? mip : _GEN_67; // @[EXE.scala 137:44 CSR.scala 23:20]
  wire [63:0] _GEN_75 = 7'h10 == io_in_bits_ctrl_signal_aluoptype ? _alu_result_T_68 : _GEN_68; // @[EXE.scala 137:44 187:18]
  wire [63:0] _GEN_76 = 7'h10 == io_in_bits_ctrl_signal_aluoptype ? mstatus : _GEN_69; // @[EXE.scala 137:44 CSR.scala 20:24]
  wire [63:0] _GEN_77 = 7'h10 == io_in_bits_ctrl_signal_aluoptype ? mtvec : _GEN_70; // @[EXE.scala 137:44 CSR.scala 21:22]
  wire [63:0] _GEN_78 = 7'h10 == io_in_bits_ctrl_signal_aluoptype ? mepc : _GEN_71; // @[EXE.scala 137:44 CSR.scala 18:17]
  wire [63:0] _GEN_79 = 7'h10 == io_in_bits_ctrl_signal_aluoptype ? mcause : _GEN_72; // @[EXE.scala 137:44 CSR.scala 19:23]
  wire [63:0] _GEN_80 = 7'h10 == io_in_bits_ctrl_signal_aluoptype ? mie : _GEN_73; // @[EXE.scala 137:44 CSR.scala 22:20]
  wire [63:0] _GEN_81 = 7'h10 == io_in_bits_ctrl_signal_aluoptype ? mip : _GEN_74; // @[EXE.scala 137:44 CSR.scala 23:20]
  wire [63:0] _GEN_82 = 7'h12 == io_in_bits_ctrl_signal_aluoptype ? _alu_result_T_61 : _GEN_75; // @[EXE.scala 137:44 184:18]
  wire [63:0] _GEN_83 = 7'h12 == io_in_bits_ctrl_signal_aluoptype ? mstatus : _GEN_76; // @[EXE.scala 137:44 CSR.scala 20:24]
  wire [63:0] _GEN_84 = 7'h12 == io_in_bits_ctrl_signal_aluoptype ? mtvec : _GEN_77; // @[EXE.scala 137:44 CSR.scala 21:22]
  wire [63:0] _GEN_85 = 7'h12 == io_in_bits_ctrl_signal_aluoptype ? mepc : _GEN_78; // @[EXE.scala 137:44 CSR.scala 18:17]
  wire [63:0] _GEN_86 = 7'h12 == io_in_bits_ctrl_signal_aluoptype ? mcause : _GEN_79; // @[EXE.scala 137:44 CSR.scala 19:23]
  wire [63:0] _GEN_87 = 7'h12 == io_in_bits_ctrl_signal_aluoptype ? mie : _GEN_80; // @[EXE.scala 137:44 CSR.scala 22:20]
  wire [63:0] _GEN_88 = 7'h12 == io_in_bits_ctrl_signal_aluoptype ? mip : _GEN_81; // @[EXE.scala 137:44 CSR.scala 23:20]
  wire [63:0] _GEN_89 = 7'hf == io_in_bits_ctrl_signal_aluoptype ? _alu_result_T_57 : _GEN_82; // @[EXE.scala 137:44 181:18]
  wire [63:0] _GEN_90 = 7'hf == io_in_bits_ctrl_signal_aluoptype ? mstatus : _GEN_83; // @[EXE.scala 137:44 CSR.scala 20:24]
  wire [63:0] _GEN_91 = 7'hf == io_in_bits_ctrl_signal_aluoptype ? mtvec : _GEN_84; // @[EXE.scala 137:44 CSR.scala 21:22]
  wire [63:0] _GEN_92 = 7'hf == io_in_bits_ctrl_signal_aluoptype ? mepc : _GEN_85; // @[EXE.scala 137:44 CSR.scala 18:17]
  wire [63:0] _GEN_93 = 7'hf == io_in_bits_ctrl_signal_aluoptype ? mcause : _GEN_86; // @[EXE.scala 137:44 CSR.scala 19:23]
  wire [63:0] _GEN_94 = 7'hf == io_in_bits_ctrl_signal_aluoptype ? mie : _GEN_87; // @[EXE.scala 137:44 CSR.scala 22:20]
  wire [63:0] _GEN_95 = 7'hf == io_in_bits_ctrl_signal_aluoptype ? mip : _GEN_88; // @[EXE.scala 137:44 CSR.scala 23:20]
  wire [63:0] _GEN_96 = 7'h7 == io_in_bits_ctrl_signal_aluoptype ? _alu_result_T_19[63:0] : _GEN_89; // @[EXE.scala 137:44 178:18]
  wire [63:0] _GEN_97 = 7'h7 == io_in_bits_ctrl_signal_aluoptype ? mstatus : _GEN_90; // @[EXE.scala 137:44 CSR.scala 20:24]
  wire [63:0] _GEN_98 = 7'h7 == io_in_bits_ctrl_signal_aluoptype ? mtvec : _GEN_91; // @[EXE.scala 137:44 CSR.scala 21:22]
  wire [63:0] _GEN_99 = 7'h7 == io_in_bits_ctrl_signal_aluoptype ? mepc : _GEN_92; // @[EXE.scala 137:44 CSR.scala 18:17]
  wire [63:0] _GEN_100 = 7'h7 == io_in_bits_ctrl_signal_aluoptype ? mcause : _GEN_93; // @[EXE.scala 137:44 CSR.scala 19:23]
  wire [63:0] _GEN_101 = 7'h7 == io_in_bits_ctrl_signal_aluoptype ? mie : _GEN_94; // @[EXE.scala 137:44 CSR.scala 22:20]
  wire [63:0] _GEN_102 = 7'h7 == io_in_bits_ctrl_signal_aluoptype ? mip : _GEN_95; // @[EXE.scala 137:44 CSR.scala 23:20]
  wire [63:0] _GEN_103 = 7'h1 == io_in_bits_ctrl_signal_aluoptype ? _alu_result_T_54 : _GEN_96; // @[EXE.scala 137:44 175:18]
  wire [63:0] _GEN_104 = 7'h1 == io_in_bits_ctrl_signal_aluoptype ? mstatus : _GEN_97; // @[EXE.scala 137:44 CSR.scala 20:24]
  wire [63:0] _GEN_105 = 7'h1 == io_in_bits_ctrl_signal_aluoptype ? mtvec : _GEN_98; // @[EXE.scala 137:44 CSR.scala 21:22]
  wire [63:0] _GEN_106 = 7'h1 == io_in_bits_ctrl_signal_aluoptype ? mepc : _GEN_99; // @[EXE.scala 137:44 CSR.scala 18:17]
  wire [63:0] _GEN_107 = 7'h1 == io_in_bits_ctrl_signal_aluoptype ? mcause : _GEN_100; // @[EXE.scala 137:44 CSR.scala 19:23]
  wire [63:0] _GEN_108 = 7'h1 == io_in_bits_ctrl_signal_aluoptype ? mie : _GEN_101; // @[EXE.scala 137:44 CSR.scala 22:20]
  wire [63:0] _GEN_109 = 7'h1 == io_in_bits_ctrl_signal_aluoptype ? mip : _GEN_102; // @[EXE.scala 137:44 CSR.scala 23:20]
  wire [63:0] _GEN_110 = 7'hd == io_in_bits_ctrl_signal_aluoptype ? _alu_result_T_48 : _GEN_103; // @[EXE.scala 137:44 172:18]
  wire [63:0] _GEN_111 = 7'hd == io_in_bits_ctrl_signal_aluoptype ? mstatus : _GEN_104; // @[EXE.scala 137:44 CSR.scala 20:24]
  wire [63:0] _GEN_112 = 7'hd == io_in_bits_ctrl_signal_aluoptype ? mtvec : _GEN_105; // @[EXE.scala 137:44 CSR.scala 21:22]
  wire [63:0] _GEN_113 = 7'hd == io_in_bits_ctrl_signal_aluoptype ? mepc : _GEN_106; // @[EXE.scala 137:44 CSR.scala 18:17]
  wire [63:0] _GEN_114 = 7'hd == io_in_bits_ctrl_signal_aluoptype ? mcause : _GEN_107; // @[EXE.scala 137:44 CSR.scala 19:23]
  wire [63:0] _GEN_115 = 7'hd == io_in_bits_ctrl_signal_aluoptype ? mie : _GEN_108; // @[EXE.scala 137:44 CSR.scala 22:20]
  wire [63:0] _GEN_116 = 7'hd == io_in_bits_ctrl_signal_aluoptype ? mip : _GEN_109; // @[EXE.scala 137:44 CSR.scala 23:20]
  wire [63:0] _GEN_117 = 7'h7a == io_in_bits_ctrl_signal_aluoptype ? _alu_result_T_41 : _GEN_110; // @[EXE.scala 137:44 169:18]
  wire [63:0] _GEN_118 = 7'h7a == io_in_bits_ctrl_signal_aluoptype ? mstatus : _GEN_111; // @[EXE.scala 137:44 CSR.scala 20:24]
  wire [63:0] _GEN_119 = 7'h7a == io_in_bits_ctrl_signal_aluoptype ? mtvec : _GEN_112; // @[EXE.scala 137:44 CSR.scala 21:22]
  wire [63:0] _GEN_120 = 7'h7a == io_in_bits_ctrl_signal_aluoptype ? mepc : _GEN_113; // @[EXE.scala 137:44 CSR.scala 18:17]
  wire [63:0] _GEN_121 = 7'h7a == io_in_bits_ctrl_signal_aluoptype ? mcause : _GEN_114; // @[EXE.scala 137:44 CSR.scala 19:23]
  wire [63:0] _GEN_122 = 7'h7a == io_in_bits_ctrl_signal_aluoptype ? mie : _GEN_115; // @[EXE.scala 137:44 CSR.scala 22:20]
  wire [63:0] _GEN_123 = 7'h7a == io_in_bits_ctrl_signal_aluoptype ? mip : _GEN_116; // @[EXE.scala 137:44 CSR.scala 23:20]
  wire [63:0] _GEN_124 = 7'h79 == io_in_bits_ctrl_signal_aluoptype ? _alu_result_T_32 : _GEN_117; // @[EXE.scala 137:44 166:18]
  wire [63:0] _GEN_125 = 7'h79 == io_in_bits_ctrl_signal_aluoptype ? mstatus : _GEN_118; // @[EXE.scala 137:44 CSR.scala 20:24]
  wire [63:0] _GEN_126 = 7'h79 == io_in_bits_ctrl_signal_aluoptype ? mtvec : _GEN_119; // @[EXE.scala 137:44 CSR.scala 21:22]
  wire [63:0] _GEN_127 = 7'h79 == io_in_bits_ctrl_signal_aluoptype ? mepc : _GEN_120; // @[EXE.scala 137:44 CSR.scala 18:17]
  wire [63:0] _GEN_128 = 7'h79 == io_in_bits_ctrl_signal_aluoptype ? mcause : _GEN_121; // @[EXE.scala 137:44 CSR.scala 19:23]
  wire [63:0] _GEN_129 = 7'h79 == io_in_bits_ctrl_signal_aluoptype ? mie : _GEN_122; // @[EXE.scala 137:44 CSR.scala 22:20]
  wire [63:0] _GEN_130 = 7'h79 == io_in_bits_ctrl_signal_aluoptype ? mip : _GEN_123; // @[EXE.scala 137:44 CSR.scala 23:20]
  wire [63:0] _GEN_131 = 7'h78 == io_in_bits_ctrl_signal_aluoptype ? _alu_result_T_23 : _GEN_124; // @[EXE.scala 137:44 163:18]
  wire [63:0] _GEN_132 = 7'h78 == io_in_bits_ctrl_signal_aluoptype ? mstatus : _GEN_125; // @[EXE.scala 137:44 CSR.scala 20:24]
  wire [63:0] _GEN_133 = 7'h78 == io_in_bits_ctrl_signal_aluoptype ? mtvec : _GEN_126; // @[EXE.scala 137:44 CSR.scala 21:22]
  wire [63:0] _GEN_134 = 7'h78 == io_in_bits_ctrl_signal_aluoptype ? mepc : _GEN_127; // @[EXE.scala 137:44 CSR.scala 18:17]
  wire [63:0] _GEN_135 = 7'h78 == io_in_bits_ctrl_signal_aluoptype ? mcause : _GEN_128; // @[EXE.scala 137:44 CSR.scala 19:23]
  wire [63:0] _GEN_136 = 7'h78 == io_in_bits_ctrl_signal_aluoptype ? mie : _GEN_129; // @[EXE.scala 137:44 CSR.scala 22:20]
  wire [63:0] _GEN_137 = 7'h78 == io_in_bits_ctrl_signal_aluoptype ? mip : _GEN_130; // @[EXE.scala 137:44 CSR.scala 23:20]
  wire [63:0] _GEN_138 = 7'h6d == io_in_bits_ctrl_signal_aluoptype ? _alu_result_T_7 : _GEN_131; // @[EXE.scala 137:44 160:18]
  wire [63:0] _GEN_139 = 7'h6d == io_in_bits_ctrl_signal_aluoptype ? mstatus : _GEN_132; // @[EXE.scala 137:44 CSR.scala 20:24]
  wire [63:0] _GEN_140 = 7'h6d == io_in_bits_ctrl_signal_aluoptype ? mtvec : _GEN_133; // @[EXE.scala 137:44 CSR.scala 21:22]
  wire [63:0] _GEN_141 = 7'h6d == io_in_bits_ctrl_signal_aluoptype ? mepc : _GEN_134; // @[EXE.scala 137:44 CSR.scala 18:17]
  wire [63:0] _GEN_142 = 7'h6d == io_in_bits_ctrl_signal_aluoptype ? mcause : _GEN_135; // @[EXE.scala 137:44 CSR.scala 19:23]
  wire [63:0] _GEN_143 = 7'h6d == io_in_bits_ctrl_signal_aluoptype ? mie : _GEN_136; // @[EXE.scala 137:44 CSR.scala 22:20]
  wire [63:0] _GEN_144 = 7'h6d == io_in_bits_ctrl_signal_aluoptype ? mip : _GEN_137; // @[EXE.scala 137:44 CSR.scala 23:20]
  wire [63:0] _GEN_145 = 7'h72 == io_in_bits_ctrl_signal_aluoptype ? _alu_result_T_12 : _GEN_138; // @[EXE.scala 137:44 157:18]
  wire [63:0] _GEN_146 = 7'h72 == io_in_bits_ctrl_signal_aluoptype ? mstatus : _GEN_139; // @[EXE.scala 137:44 CSR.scala 20:24]
  wire [63:0] _GEN_147 = 7'h72 == io_in_bits_ctrl_signal_aluoptype ? mtvec : _GEN_140; // @[EXE.scala 137:44 CSR.scala 21:22]
  wire [63:0] _GEN_148 = 7'h72 == io_in_bits_ctrl_signal_aluoptype ? mepc : _GEN_141; // @[EXE.scala 137:44 CSR.scala 18:17]
  wire [63:0] _GEN_149 = 7'h72 == io_in_bits_ctrl_signal_aluoptype ? mcause : _GEN_142; // @[EXE.scala 137:44 CSR.scala 19:23]
  wire [63:0] _GEN_150 = 7'h72 == io_in_bits_ctrl_signal_aluoptype ? mie : _GEN_143; // @[EXE.scala 137:44 CSR.scala 22:20]
  wire [63:0] _GEN_151 = 7'h72 == io_in_bits_ctrl_signal_aluoptype ? mip : _GEN_144; // @[EXE.scala 137:44 CSR.scala 23:20]
  wire [63:0] _GEN_152 = 7'h71 == io_in_bits_ctrl_signal_aluoptype ? _alu_result_T_11 : _GEN_145; // @[EXE.scala 137:44 154:18]
  wire [63:0] _GEN_153 = 7'h71 == io_in_bits_ctrl_signal_aluoptype ? mstatus : _GEN_146; // @[EXE.scala 137:44 CSR.scala 20:24]
  wire [63:0] _GEN_154 = 7'h71 == io_in_bits_ctrl_signal_aluoptype ? mtvec : _GEN_147; // @[EXE.scala 137:44 CSR.scala 21:22]
  wire [63:0] _GEN_155 = 7'h71 == io_in_bits_ctrl_signal_aluoptype ? mepc : _GEN_148; // @[EXE.scala 137:44 CSR.scala 18:17]
  wire [63:0] _GEN_156 = 7'h71 == io_in_bits_ctrl_signal_aluoptype ? mcause : _GEN_149; // @[EXE.scala 137:44 CSR.scala 19:23]
  wire [63:0] _GEN_157 = 7'h71 == io_in_bits_ctrl_signal_aluoptype ? mie : _GEN_150; // @[EXE.scala 137:44 CSR.scala 22:20]
  wire [63:0] _GEN_158 = 7'h71 == io_in_bits_ctrl_signal_aluoptype ? mip : _GEN_151; // @[EXE.scala 137:44 CSR.scala 23:20]
  wire [63:0] _GEN_159 = 7'h69 == io_in_bits_ctrl_signal_aluoptype ? _alu_result_T_10 : _GEN_152; // @[EXE.scala 137:44 151:18]
  wire [63:0] _GEN_160 = 7'h69 == io_in_bits_ctrl_signal_aluoptype ? mstatus : _GEN_153; // @[EXE.scala 137:44 CSR.scala 20:24]
  wire [63:0] _GEN_161 = 7'h69 == io_in_bits_ctrl_signal_aluoptype ? mtvec : _GEN_154; // @[EXE.scala 137:44 CSR.scala 21:22]
  wire [63:0] _GEN_162 = 7'h69 == io_in_bits_ctrl_signal_aluoptype ? mepc : _GEN_155; // @[EXE.scala 137:44 CSR.scala 18:17]
  wire [63:0] _GEN_163 = 7'h69 == io_in_bits_ctrl_signal_aluoptype ? mcause : _GEN_156; // @[EXE.scala 137:44 CSR.scala 19:23]
  wire [63:0] _GEN_164 = 7'h69 == io_in_bits_ctrl_signal_aluoptype ? mie : _GEN_157; // @[EXE.scala 137:44 CSR.scala 22:20]
  wire [63:0] _GEN_165 = 7'h69 == io_in_bits_ctrl_signal_aluoptype ? mip : _GEN_158; // @[EXE.scala 137:44 CSR.scala 23:20]
  wire [63:0] _GEN_166 = 7'h44 == io_in_bits_ctrl_signal_aluoptype ? _alu_result_T_8 : _GEN_159; // @[EXE.scala 137:44 148:18]
  wire [63:0] _GEN_167 = 7'h44 == io_in_bits_ctrl_signal_aluoptype ? mstatus : _GEN_160; // @[EXE.scala 137:44 CSR.scala 20:24]
  wire [63:0] _GEN_168 = 7'h44 == io_in_bits_ctrl_signal_aluoptype ? mtvec : _GEN_161; // @[EXE.scala 137:44 CSR.scala 21:22]
  wire [63:0] _GEN_169 = 7'h44 == io_in_bits_ctrl_signal_aluoptype ? mepc : _GEN_162; // @[EXE.scala 137:44 CSR.scala 18:17]
  wire [63:0] _GEN_170 = 7'h44 == io_in_bits_ctrl_signal_aluoptype ? mcause : _GEN_163; // @[EXE.scala 137:44 CSR.scala 19:23]
  wire [63:0] _GEN_171 = 7'h44 == io_in_bits_ctrl_signal_aluoptype ? mie : _GEN_164; // @[EXE.scala 137:44 CSR.scala 22:20]
  wire [63:0] _GEN_172 = 7'h44 == io_in_bits_ctrl_signal_aluoptype ? mip : _GEN_165; // @[EXE.scala 137:44 CSR.scala 23:20]
  wire [63:0] _GEN_173 = 7'h68 == io_in_bits_ctrl_signal_aluoptype ? _alu_result_T_7 : _GEN_166; // @[EXE.scala 137:44 145:18]
  wire [63:0] _GEN_174 = 7'h68 == io_in_bits_ctrl_signal_aluoptype ? mstatus : _GEN_167; // @[EXE.scala 137:44 CSR.scala 20:24]
  wire [63:0] _GEN_177 = 7'h68 == io_in_bits_ctrl_signal_aluoptype ? mcause : _GEN_170; // @[EXE.scala 137:44 CSR.scala 19:23]
  wire [63:0] _GEN_180 = 7'h1a == io_in_bits_ctrl_signal_aluoptype ? src2 : _GEN_173; // @[EXE.scala 137:44 142:18]
  wire [63:0] _GEN_181 = 7'h1a == io_in_bits_ctrl_signal_aluoptype ? mstatus : _GEN_174; // @[EXE.scala 137:44 CSR.scala 20:24]
  wire [63:0] alu_result = 7'h40 == io_in_bits_ctrl_signal_aluoptype ? _alu_result_T_1 : _GEN_180; // @[EXE.scala 137:44 139:18]
  wire [63:0] _shift_result_T_3 = $signed(_alu_result_T_58) >>> src2[4:0]; // @[EXE.scala 207:51]
  wire [94:0] _GEN_0 = {{31'd0}, src1}; // @[EXE.scala 211:39]
  wire [94:0] _shift_result_T_5 = _GEN_0 << src2[4:0]; // @[EXE.scala 211:39]
  wire  shift_result_sign = _shift_result_T_5[31]; // @[util.scala 10:19]
  wire [31:0] _shift_result_T_8 = shift_result_sign ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _shift_result_T_9 = {_shift_result_T_8,_shift_result_T_5[31:0]}; // @[Cat.scala 31:58]
  wire [126:0] _GEN_2 = {{63'd0}, src1}; // @[EXE.scala 214:28]
  wire [126:0] _shift_result_T_11 = _GEN_2 << src2[5:0]; // @[EXE.scala 214:28]
  wire [63:0] _shift_result_T_13 = src1 >> src2[5:0]; // @[EXE.scala 217:35]
  wire [94:0] _GEN_4 = {{63'd0}, src1[31:0]}; // @[EXE.scala 220:46]
  wire [94:0] _shift_result_T_16 = _GEN_4 << src2[5:0]; // @[EXE.scala 220:46]
  wire  shift_result_sign_1 = _shift_result_T_16[31]; // @[util.scala 10:19]
  wire [31:0] _shift_result_T_19 = shift_result_sign_1 ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _shift_result_T_20 = {_shift_result_T_19,_shift_result_T_16[31:0]}; // @[Cat.scala 31:58]
  wire [31:0] _shift_result_T_25 = $signed(_alu_result_T_25) >>> src2[4:0]; // @[EXE.scala 223:68]
  wire  shift_result_sign_2 = _shift_result_T_25[31]; // @[util.scala 10:19]
  wire [31:0] _shift_result_T_27 = shift_result_sign_2 ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _shift_result_T_28 = {_shift_result_T_27,_shift_result_T_25}; // @[Cat.scala 31:58]
  wire [31:0] _shift_result_T_31 = src1[31:0] >> src2[4:0]; // @[EXE.scala 226:46]
  wire  shift_result_sign_3 = _shift_result_T_31[31]; // @[util.scala 10:19]
  wire [31:0] _shift_result_T_34 = shift_result_sign_3 ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _shift_result_T_35 = {_shift_result_T_34,_shift_result_T_31}; // @[Cat.scala 31:58]
  wire [63:0] _shift_result_T_54 = $signed(_alu_result_T_58) >>> src2[5:0]; // @[EXE.scala 235:51]
  wire [63:0] _GEN_194 = 7'h14 == io_in_bits_ctrl_signal_aluoptype ? _shift_result_T_54 : 64'h0; // @[EXE.scala 205:44 235:20]
  wire [63:0] _GEN_195 = 7'ha == io_in_bits_ctrl_signal_aluoptype ? _shift_result_T_35 : _GEN_194; // @[EXE.scala 205:44 232:20]
  wire [63:0] _GEN_196 = 7'h9 == io_in_bits_ctrl_signal_aluoptype ? _shift_result_T_28 : _GEN_195; // @[EXE.scala 205:44 229:20]
  wire [63:0] _GEN_197 = 7'h8 == io_in_bits_ctrl_signal_aluoptype ? _shift_result_T_35 : _GEN_196; // @[EXE.scala 205:44 226:20]
  wire [63:0] _GEN_198 = 7'h6 == io_in_bits_ctrl_signal_aluoptype ? _shift_result_T_28 : _GEN_197; // @[EXE.scala 205:44 223:20]
  wire [63:0] _GEN_199 = 7'h5 == io_in_bits_ctrl_signal_aluoptype ? _shift_result_T_20 : _GEN_198; // @[EXE.scala 205:44 220:20]
  wire [63:0] _GEN_200 = 7'h75 == io_in_bits_ctrl_signal_aluoptype ? _shift_result_T_13 : _GEN_199; // @[EXE.scala 205:44 217:20]
  wire [126:0] _GEN_201 = 7'h41 == io_in_bits_ctrl_signal_aluoptype ? _shift_result_T_11 : {{63'd0}, _GEN_200}; // @[EXE.scala 205:44 214:20]
  wire [126:0] _GEN_202 = 7'h73 == io_in_bits_ctrl_signal_aluoptype ? {{63'd0}, _shift_result_T_9} : _GEN_201; // @[EXE.scala 205:44 211:20]
  wire [126:0] _GEN_203 = 7'h6e == io_in_bits_ctrl_signal_aluoptype ? {{63'd0}, _shift_result_T_3} : _GEN_202; // @[EXE.scala 205:44 207:20]
  wire  _compar_result_T = src1 < src2; // @[EXE.scala 244:34]
  wire [63:0] _compar_result_T_1 = src1 < src2 ? 64'h1 : 64'h0; // @[EXE.scala 244:27]
  wire  _compar_result_T_4 = $signed(_alu_result_T_58) < $signed(_alu_result_T_59); // @[EXE.scala 247:41]
  wire [63:0] _compar_result_T_5 = $signed(_alu_result_T_58) < $signed(_alu_result_T_59) ? 64'h1 : 64'h0; // @[EXE.scala 247:27]
  wire [63:0] _GEN_204 = 7'h2 == io_in_bits_ctrl_signal_aluoptype ? _compar_result_T_5 : 64'h0; // @[EXE.scala 242:44 247:21]
  wire [63:0] compar_result = 7'h6a == io_in_bits_ctrl_signal_aluoptype ? _compar_result_T_1 : _GEN_204; // @[EXE.scala 242:44 244:21]
  wire  _jump_result_T = io_in_bits_ctrl_signal_fuType == 3'h3; // @[EXE.scala 252:52]
  wire [63:0] jump_result = io_in_bits_ctrl_signal_fuType == 3'h3 ? _dnpc_T_1 : 64'h0; // @[EXE.scala 252:21]
  wire [63:0] _GEN_206 = 3'h5 == io_in_bits_ctrl_signal_fuType ? compar_result : 64'h0; // @[EXE.scala 255:41 269:18]
  wire [63:0] shift_result = _GEN_203[63:0];
  wire [63:0] _GEN_207 = 3'h1 == io_in_bits_ctrl_signal_fuType ? shift_result : _GEN_206; // @[EXE.scala 255:41 266:18]
  wire [63:0] _GEN_208 = 3'h2 == io_in_bits_ctrl_signal_fuType ? 64'h0 : _GEN_207; // @[EXE.scala 255:41 263:18]
  wire [63:0] _GEN_209 = 3'h3 == io_in_bits_ctrl_signal_fuType ? jump_result : _GEN_208; // @[EXE.scala 255:41 260:18]
  wire  _T_71 = 7'h6b == io_in_bits_ctrl_signal_aluoptype; // @[EXE.scala 277:44]
  wire [63:0] _branch_result_T_1 = io_in_bits_ctrl_flow_PC + io_in_bits_ctrl_data_Imm; // @[EXE.scala 279:27]
  wire  _T_72 = 7'h6c == io_in_bits_ctrl_signal_aluoptype; // @[EXE.scala 277:44]
  wire  _T_73 = 7'h76 == io_in_bits_ctrl_signal_aluoptype; // @[EXE.scala 277:44]
  wire  _T_74 = 7'h7b == io_in_bits_ctrl_signal_aluoptype; // @[EXE.scala 277:44]
  wire  _T_75 = 7'hb == io_in_bits_ctrl_signal_aluoptype; // @[EXE.scala 277:44]
  wire  _T_76 = 7'hc == io_in_bits_ctrl_signal_aluoptype; // @[EXE.scala 277:44]
  wire  _T_77 = 7'h17 == io_in_bits_ctrl_signal_aluoptype; // @[EXE.scala 277:44]
  wire  _T_78 = 7'h18 == io_in_bits_ctrl_signal_aluoptype; // @[EXE.scala 277:44]
  wire  _GEN_212 = 7'h17 == io_in_bits_ctrl_signal_aluoptype | 7'h18 == io_in_bits_ctrl_signal_aluoptype; // @[EXE.scala 277:44 304:19]
  wire [63:0] _GEN_213 = 7'hc == io_in_bits_ctrl_signal_aluoptype ? _branch_result_T_1 : 64'h0; // @[EXE.scala 277:44 299:21]
  wire  _GEN_214 = 7'hc == io_in_bits_ctrl_signal_aluoptype ? src1 >= src2 : _GEN_212; // @[EXE.scala 277:44 300:19]
  wire [63:0] _GEN_215 = 7'hb == io_in_bits_ctrl_signal_aluoptype ? _branch_result_T_1 : _GEN_213; // @[EXE.scala 277:44 295:21]
  wire  _GEN_216 = 7'hb == io_in_bits_ctrl_signal_aluoptype ? _compar_result_T : _GEN_214; // @[EXE.scala 277:44 296:19]
  wire [63:0] _GEN_217 = 7'h7b == io_in_bits_ctrl_signal_aluoptype ? _branch_result_T_1 : _GEN_215; // @[EXE.scala 277:44 291:21]
  wire  _GEN_218 = 7'h7b == io_in_bits_ctrl_signal_aluoptype ? _compar_result_T_4 : _GEN_216; // @[EXE.scala 277:44 292:19]
  wire [63:0] _GEN_219 = 7'h76 == io_in_bits_ctrl_signal_aluoptype ? _branch_result_T_1 : _GEN_217; // @[EXE.scala 277:44 287:21]
  wire  _GEN_220 = 7'h76 == io_in_bits_ctrl_signal_aluoptype ? $signed(_alu_result_T_58) >= $signed(_alu_result_T_59) :
    _GEN_218; // @[EXE.scala 277:44 288:19]
  wire [63:0] _GEN_221 = 7'h6c == io_in_bits_ctrl_signal_aluoptype ? _branch_result_T_1 : _GEN_219; // @[EXE.scala 277:44 283:21]
  wire  _GEN_222 = 7'h6c == io_in_bits_ctrl_signal_aluoptype ? src1 != src2 : _GEN_220; // @[EXE.scala 277:44 284:19]
  wire [63:0] branch_result = 7'h6b == io_in_bits_ctrl_signal_aluoptype ? _branch_result_T_1 : _GEN_221; // @[EXE.scala 277:44 279:21]
  wire  branch_flag = 7'h6b == io_in_bits_ctrl_signal_aluoptype ? src1 == src2 : _GEN_222; // @[EXE.scala 277:44 280:19]
  wire [63:0] _T_92 = mstatus & 64'hfffffffffffffff7; // @[EXE.scala 315:64]
  wire [63:0] _T_112 = mstatus | 64'h8; // @[EXE.scala 319:64]
  wire [63:0] _GEN_267 = _T_78 ? mepc : 64'h0; // @[EXE.scala 312:44 318:16]
  wire [63:0] csr_data = _T_77 ? mtvec : _GEN_267; // @[EXE.scala 312:44 314:16]
  wire [63:0] _dnpc_T_7 = {_alu_result_T_1[63:1],1'h0}; // @[Cat.scala 31:58]
  wire [63:0] _dnpc_T_11 = branch_flag ? branch_result : _dnpc_T_1; // @[EXE.scala 332:18]
  wire [63:0] _GEN_281 = _T_78 ? csr_data : _dnpc_T_1; // @[EXE.scala 324:44 355:12]
  wire [63:0] _GEN_282 = _T_77 ? csr_data : _GEN_281; // @[EXE.scala 324:44 352:12]
  wire [63:0] _GEN_283 = _T_75 ? _dnpc_T_11 : _GEN_282; // @[EXE.scala 324:44 348:12]
  wire [63:0] _GEN_284 = _T_74 ? _dnpc_T_11 : _GEN_283; // @[EXE.scala 324:44 345:12]
  wire [63:0] _GEN_285 = _T_76 ? _dnpc_T_11 : _GEN_284; // @[EXE.scala 324:44 342:12]
  wire [63:0] _GEN_286 = _T_73 ? _dnpc_T_11 : _GEN_285; // @[EXE.scala 324:44 339:12]
  wire [63:0] _GEN_287 = _T_72 ? _dnpc_T_11 : _GEN_286; // @[EXE.scala 324:44 336:12]
  wire [63:0] _GEN_288 = _T_71 ? _dnpc_T_11 : _GEN_287; // @[EXE.scala 324:44 332:12]
  wire [63:0] _GEN_289 = 7'h48 == io_in_bits_ctrl_signal_aluoptype ? _dnpc_T_7 : _GEN_288; // @[EXE.scala 324:44 329:12]
  reg [63:0] CSRDIFF_io_mtvec_REG; // @[EXE.scala 374:38]
  reg [63:0] CSRDIFF_io_mtvec_REG_1; // @[EXE.scala 374:30]
  reg [63:0] CSRDIFF_io_mcause_REG; // @[EXE.scala 375:39]
  reg [63:0] CSRDIFF_io_mcause_REG_1; // @[EXE.scala 375:31]
  reg [63:0] CSRDIFF_io_mepc_REG; // @[EXE.scala 376:37]
  reg [63:0] CSRDIFF_io_mepc_REG_1; // @[EXE.scala 376:29]
  reg [63:0] CSRDIFF_io_mstatus_REG; // @[EXE.scala 377:40]
  reg [63:0] CSRDIFF_io_mstatus_REG_1; // @[EXE.scala 377:32]
  CSR_DIFF CSRDIFF ( // @[EXE.scala 105:21]
    .mepc(CSRDIFF_mepc),
    .mcause(CSRDIFF_mcause),
    .mstatus(CSRDIFF_mstatus),
    .mtvec(CSRDIFF_mtvec)
  );
  assign io_branchIO_is_branch = branch_flag & io_in_valid; // @[EXE.scala 398:40]
  assign io_branchIO_is_jump = _jump_result_T & io_in_valid; // @[EXE.scala 399:76]
  assign io_branchIO_dnpc = 7'h19 == io_in_bits_ctrl_signal_aluoptype ? _alu_result_T_1 : _GEN_289; // @[EXE.scala 324:44 326:12]
  assign io_out_valid = io_in_valid; // @[EXE.scala 401:36]
  assign io_out_bits_ctrl_signal_fuType = io_in_bits_ctrl_signal_fuType; // @[EXE.scala 384:27]
  assign io_out_bits_ctrl_signal_inst_valid = io_in_valid & io_in_bits_ctrl_signal_inst_valid; // @[EXE.scala 388:44]
  assign io_out_bits_ctrl_signal_rfWen = io_in_bits_ctrl_signal_rfWen; // @[EXE.scala 384:27]
  assign io_out_bits_ctrl_signal_aluoptype = io_in_bits_ctrl_signal_aluoptype; // @[EXE.scala 384:27]
  assign io_out_bits_ctrl_flow_PC = io_in_bits_ctrl_flow_PC; // @[EXE.scala 385:25]
  assign io_out_bits_ctrl_flow_inst = io_in_bits_ctrl_flow_inst; // @[EXE.scala 385:25]
  assign io_out_bits_ctrl_flow_Dnpc = 7'h19 == io_in_bits_ctrl_signal_aluoptype ? _alu_result_T_1 : _GEN_289; // @[EXE.scala 324:44 326:12]
  assign io_out_bits_ctrl_rf_rfDest = io_in_bits_ctrl_signal_rfDest; // @[EXE.scala 394:30]
  assign io_out_bits_ctrl_rf_rfWen = io_in_valid & io_in_bits_ctrl_signal_rfWen; // @[EXE.scala 395:35]
  assign io_out_bits_ctrl_rf_rfData = 3'h0 == io_in_bits_ctrl_signal_fuType ? alu_result : _GEN_209; // @[EXE.scala 255:41 257:18]
  assign io_out_bits_ctrl_data_src1 = 3'h0 == io_in_bits_ctrl_signal_src1Type ? io_src1 : _GEN_1; // @[EXE.scala 110:43 113:12]
  assign io_out_bits_ctrl_data_src2 = 3'h0 == io_in_bits_ctrl_signal_src2Type ? io_src2 : _GEN_3; // @[EXE.scala 123:43 126:12]
  assign io_out_bits_ctrl_data_Imm = io_in_bits_ctrl_data_Imm; // @[EXE.scala 386:25]
  assign io_is_break = io_in_bits_ctrl_signal_aluoptype == 7'h42; // @[EXE.scala 380:56]
  assign io_is_flush = (branch_flag | io_branchIO_is_jump) & io_in_valid; // @[EXE.scala 379:75]
  assign CSRDIFF_mepc = CSRDIFF_io_mepc_REG_1; // @[EXE.scala 376:19]
  assign CSRDIFF_mcause = CSRDIFF_io_mcause_REG_1; // @[EXE.scala 375:21]
  assign CSRDIFF_mstatus = CSRDIFF_io_mstatus_REG_1; // @[EXE.scala 377:22]
  assign CSRDIFF_mtvec = CSRDIFF_io_mtvec_REG_1; // @[EXE.scala 374:20]
  always @(posedge clock) begin
    if (_T_77) begin // @[EXE.scala 359:44]
      mepc <= io_in_bits_ctrl_flow_PC;
    end else if (!(7'h40 == io_in_bits_ctrl_signal_aluoptype)) begin // @[EXE.scala 137:44]
      if (!(7'h1a == io_in_bits_ctrl_signal_aluoptype)) begin // @[EXE.scala 137:44]
        if (!(7'h68 == io_in_bits_ctrl_signal_aluoptype)) begin // @[EXE.scala 137:44]
          mepc <= _GEN_169;
        end
      end
    end
    if (reset) begin // @[CSR.scala 19:23]
      mcause <= 64'h0; // @[CSR.scala 19:23]
    end else if (_T_77) begin // @[EXE.scala 359:44]
      mcause <= 64'hb;
    end else if (!(7'h40 == io_in_bits_ctrl_signal_aluoptype)) begin // @[EXE.scala 137:44]
      if (!(7'h1a == io_in_bits_ctrl_signal_aluoptype)) begin // @[EXE.scala 137:44]
        mcause <= _GEN_177;
      end
    end
    if (reset) begin // @[CSR.scala 20:24]
      mstatus <= 64'h0; // @[CSR.scala 20:24]
    end else if (_T_77) begin // @[EXE.scala 312:44]
      mstatus <= _T_92;
    end else if (_T_78) begin // @[EXE.scala 312:44]
      mstatus <= _T_112;
    end else if (!(7'h40 == io_in_bits_ctrl_signal_aluoptype)) begin // @[EXE.scala 137:44]
      mstatus <= _GEN_181;
    end
    if (reset) begin // @[CSR.scala 21:22]
      mtvec <= 64'h0; // @[CSR.scala 21:22]
    end else if (!(7'h40 == io_in_bits_ctrl_signal_aluoptype)) begin // @[EXE.scala 137:44]
      if (!(7'h1a == io_in_bits_ctrl_signal_aluoptype)) begin // @[EXE.scala 137:44]
        if (!(7'h68 == io_in_bits_ctrl_signal_aluoptype)) begin // @[EXE.scala 137:44]
          mtvec <= _GEN_168;
        end
      end
    end
    if (reset) begin // @[CSR.scala 22:20]
      mie <= 64'h0; // @[CSR.scala 22:20]
    end else if (!(7'h40 == io_in_bits_ctrl_signal_aluoptype)) begin // @[EXE.scala 137:44]
      if (!(7'h1a == io_in_bits_ctrl_signal_aluoptype)) begin // @[EXE.scala 137:44]
        if (!(7'h68 == io_in_bits_ctrl_signal_aluoptype)) begin // @[EXE.scala 137:44]
          mie <= _GEN_171;
        end
      end
    end
    if (reset) begin // @[CSR.scala 23:20]
      mip <= 64'h0; // @[CSR.scala 23:20]
    end else if (!(7'h40 == io_in_bits_ctrl_signal_aluoptype)) begin // @[EXE.scala 137:44]
      if (!(7'h1a == io_in_bits_ctrl_signal_aluoptype)) begin // @[EXE.scala 137:44]
        if (!(7'h68 == io_in_bits_ctrl_signal_aluoptype)) begin // @[EXE.scala 137:44]
          mip <= _GEN_172;
        end
      end
    end
    CSRDIFF_io_mtvec_REG <= mtvec; // @[EXE.scala 374:38]
    CSRDIFF_io_mtvec_REG_1 <= CSRDIFF_io_mtvec_REG; // @[EXE.scala 374:30]
    CSRDIFF_io_mcause_REG <= mcause; // @[EXE.scala 375:39]
    CSRDIFF_io_mcause_REG_1 <= CSRDIFF_io_mcause_REG; // @[EXE.scala 375:31]
    CSRDIFF_io_mepc_REG <= mepc; // @[EXE.scala 376:37]
    CSRDIFF_io_mepc_REG_1 <= CSRDIFF_io_mepc_REG; // @[EXE.scala 376:29]
    CSRDIFF_io_mstatus_REG <= mstatus; // @[EXE.scala 377:40]
    CSRDIFF_io_mstatus_REG_1 <= CSRDIFF_io_mstatus_REG; // @[EXE.scala 377:32]
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
  mepc = _RAND_0[63:0];
  _RAND_1 = {2{`RANDOM}};
  mcause = _RAND_1[63:0];
  _RAND_2 = {2{`RANDOM}};
  mstatus = _RAND_2[63:0];
  _RAND_3 = {2{`RANDOM}};
  mtvec = _RAND_3[63:0];
  _RAND_4 = {2{`RANDOM}};
  mie = _RAND_4[63:0];
  _RAND_5 = {2{`RANDOM}};
  mip = _RAND_5[63:0];
  _RAND_6 = {2{`RANDOM}};
  CSRDIFF_io_mtvec_REG = _RAND_6[63:0];
  _RAND_7 = {2{`RANDOM}};
  CSRDIFF_io_mtvec_REG_1 = _RAND_7[63:0];
  _RAND_8 = {2{`RANDOM}};
  CSRDIFF_io_mcause_REG = _RAND_8[63:0];
  _RAND_9 = {2{`RANDOM}};
  CSRDIFF_io_mcause_REG_1 = _RAND_9[63:0];
  _RAND_10 = {2{`RANDOM}};
  CSRDIFF_io_mepc_REG = _RAND_10[63:0];
  _RAND_11 = {2{`RANDOM}};
  CSRDIFF_io_mepc_REG_1 = _RAND_11[63:0];
  _RAND_12 = {2{`RANDOM}};
  CSRDIFF_io_mstatus_REG = _RAND_12[63:0];
  _RAND_13 = {2{`RANDOM}};
  CSRDIFF_io_mstatus_REG_1 = _RAND_13[63:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module MEM_stage(
  input         io_in_valid,
  input  [2:0]  io_in_bits_ctrl_signal_fuType,
  input         io_in_bits_ctrl_signal_inst_valid,
  input         io_in_bits_ctrl_signal_rfWen,
  input  [6:0]  io_in_bits_ctrl_signal_aluoptype,
  input  [63:0] io_in_bits_ctrl_flow_PC,
  input  [31:0] io_in_bits_ctrl_flow_inst,
  input  [63:0] io_in_bits_ctrl_flow_Dnpc,
  input  [4:0]  io_in_bits_ctrl_rf_rfDest,
  input  [63:0] io_in_bits_ctrl_rf_rfData,
  input  [63:0] io_in_bits_ctrl_data_src1,
  input  [63:0] io_in_bits_ctrl_data_src2,
  input  [63:0] io_in_bits_ctrl_data_Imm,
  output        io_out_valid,
  output        io_out_bits_ctrl_signal_inst_valid,
  output        io_out_bits_ctrl_signal_rfWen,
  output [63:0] io_out_bits_ctrl_flow_PC,
  output [31:0] io_out_bits_ctrl_flow_inst,
  output [63:0] io_out_bits_ctrl_flow_Dnpc,
  output        io_out_bits_ctrl_flow_skip,
  output [4:0]  io_out_bits_ctrl_rf_rfDest,
  output        io_out_bits_ctrl_rf_rfWen,
  output [63:0] io_out_bits_ctrl_rf_rfData,
  output [63:0] io_mem_addr,
  input  [63:0] io_mem_rdata,
  output [63:0] io_mem_wdata,
  output [7:0]  io_mem_wmask,
  output        io_mem_ce,
  output        io_mem_we
);
  wire  _T_62 = 7'h45 == io_in_bits_ctrl_signal_aluoptype; // @[MEM.scala 53:44]
  wire [63:0] _addr_temp_T_1 = io_in_bits_ctrl_data_src1 + io_in_bits_ctrl_data_Imm; // @[MEM.scala 55:25]
  wire  _T_63 = 7'h46 == io_in_bits_ctrl_signal_aluoptype; // @[MEM.scala 53:44]
  wire  _T_64 = 7'h70 == io_in_bits_ctrl_signal_aluoptype; // @[MEM.scala 53:44]
  wire  _T_65 = 7'h47 == io_in_bits_ctrl_signal_aluoptype; // @[MEM.scala 53:44]
  wire  _T_66 = 7'h11 == io_in_bits_ctrl_signal_aluoptype; // @[MEM.scala 53:44]
  wire  _T_67 = 7'h6f == io_in_bits_ctrl_signal_aluoptype; // @[MEM.scala 53:44]
  wire  _T_68 = 7'he == io_in_bits_ctrl_signal_aluoptype; // @[MEM.scala 53:44]
  wire  _T_69 = 7'h74 == io_in_bits_ctrl_signal_aluoptype; // @[MEM.scala 53:44]
  wire  _T_70 = 7'h77 == io_in_bits_ctrl_signal_aluoptype; // @[MEM.scala 53:44]
  wire  _T_71 = 7'h3 == io_in_bits_ctrl_signal_aluoptype; // @[MEM.scala 53:44]
  wire  _T_72 = 7'h4 == io_in_bits_ctrl_signal_aluoptype; // @[MEM.scala 53:44]
  wire [63:0] _GEN_0 = 7'h4 == io_in_bits_ctrl_signal_aluoptype ? _addr_temp_T_1 : 64'h0; // @[MEM.scala 53:44 89:17]
  wire [63:0] _GEN_1 = 7'h3 == io_in_bits_ctrl_signal_aluoptype ? _addr_temp_T_1 : _GEN_0; // @[MEM.scala 53:44 86:17]
  wire [63:0] _GEN_2 = 7'h77 == io_in_bits_ctrl_signal_aluoptype ? _addr_temp_T_1 : _GEN_1; // @[MEM.scala 53:44 82:17]
  wire [63:0] _GEN_4 = 7'h74 == io_in_bits_ctrl_signal_aluoptype ? _addr_temp_T_1 : _GEN_2; // @[MEM.scala 53:44 78:17]
  wire [63:0] _GEN_6 = 7'he == io_in_bits_ctrl_signal_aluoptype ? _addr_temp_T_1 : _GEN_4; // @[MEM.scala 53:44 75:17]
  wire [63:0] _GEN_8 = 7'h6f == io_in_bits_ctrl_signal_aluoptype ? _addr_temp_T_1 : _GEN_6; // @[MEM.scala 53:44 72:17]
  wire [63:0] _GEN_10 = 7'h11 == io_in_bits_ctrl_signal_aluoptype ? _addr_temp_T_1 : _GEN_8; // @[MEM.scala 53:44 69:17]
  wire [63:0] _GEN_12 = 7'h47 == io_in_bits_ctrl_signal_aluoptype ? _addr_temp_T_1 : _GEN_10; // @[MEM.scala 53:44 66:17]
  wire [63:0] _GEN_14 = 7'h70 == io_in_bits_ctrl_signal_aluoptype ? _addr_temp_T_1 : _GEN_12; // @[MEM.scala 53:44 62:17]
  wire [63:0] _GEN_16 = 7'h46 == io_in_bits_ctrl_signal_aluoptype ? _addr_temp_T_1 : _GEN_14; // @[MEM.scala 53:44 58:17]
  wire [63:0] addr_temp = 7'h45 == io_in_bits_ctrl_signal_aluoptype ? _addr_temp_T_1 : _GEN_16; // @[MEM.scala 53:44 55:17]
  wire  _T_1 = addr_temp[2:0] == 3'h0; // @[MEM.scala 33:22]
  wire  _T_3 = addr_temp[2:0] == 3'h1; // @[MEM.scala 34:22]
  wire  _T_5 = addr_temp[2:0] == 3'h2; // @[MEM.scala 35:22]
  wire  _T_7 = addr_temp[2:0] == 3'h3; // @[MEM.scala 36:22]
  wire  _T_9 = addr_temp[2:0] == 3'h4; // @[MEM.scala 37:22]
  wire  _T_11 = addr_temp[2:0] == 3'h5; // @[MEM.scala 38:22]
  wire  _T_13 = addr_temp[2:0] == 3'h6; // @[MEM.scala 39:22]
  wire  _T_15 = addr_temp[2:0] == 3'h7; // @[MEM.scala 40:22]
  wire [63:0] _T_20 = {56'h0,io_in_bits_ctrl_data_src2[7:0]}; // @[Cat.scala 31:58]
  wire [63:0] _T_26 = {48'h0,io_in_bits_ctrl_data_src2[7:0],8'h0}; // @[Cat.scala 31:58]
  wire [63:0] _T_32 = {40'h0,io_in_bits_ctrl_data_src2[7:0],16'h0}; // @[Cat.scala 31:58]
  wire [63:0] _T_38 = {32'h0,io_in_bits_ctrl_data_src2[7:0],24'h0}; // @[Cat.scala 31:58]
  wire [63:0] _T_44 = {24'h0,io_in_bits_ctrl_data_src2[7:0],32'h0}; // @[Cat.scala 31:58]
  wire [63:0] _T_50 = {16'h0,io_in_bits_ctrl_data_src2[7:0],40'h0}; // @[Cat.scala 31:58]
  wire [63:0] _T_56 = {8'h0,io_in_bits_ctrl_data_src2[7:0],48'h0}; // @[Cat.scala 31:58]
  wire [63:0] _T_61 = {io_in_bits_ctrl_data_src2[7:0],56'h0}; // @[Cat.scala 31:58]
  wire  _GEN_5 = 7'h74 == io_in_bits_ctrl_signal_aluoptype | 7'h77 == io_in_bits_ctrl_signal_aluoptype; // @[MEM.scala 53:44 79:10]
  wire  _GEN_7 = 7'he == io_in_bits_ctrl_signal_aluoptype ? 1'h0 : _GEN_5; // @[MEM.scala 53:44]
  wire  _GEN_9 = 7'h6f == io_in_bits_ctrl_signal_aluoptype ? 1'h0 : _GEN_7; // @[MEM.scala 53:44]
  wire  _GEN_11 = 7'h11 == io_in_bits_ctrl_signal_aluoptype ? 1'h0 : _GEN_9; // @[MEM.scala 53:44]
  wire  _GEN_13 = 7'h47 == io_in_bits_ctrl_signal_aluoptype ? 1'h0 : _GEN_11; // @[MEM.scala 53:44]
  wire  _GEN_15 = 7'h70 == io_in_bits_ctrl_signal_aluoptype | _GEN_13; // @[MEM.scala 53:44 63:10]
  wire  _GEN_17 = 7'h46 == io_in_bits_ctrl_signal_aluoptype | _GEN_15; // @[MEM.scala 53:44 59:10]
  wire [63:0] _wdata_temp_T_2 = {48'h0,io_in_bits_ctrl_data_src2[15:0]}; // @[Cat.scala 31:58]
  wire [63:0] _wdata_temp_T_6 = {32'h0,io_in_bits_ctrl_data_src2[15:0],16'h0}; // @[Cat.scala 31:58]
  wire [63:0] _wdata_temp_T_10 = {16'h0,io_in_bits_ctrl_data_src2[15:0],32'h0}; // @[Cat.scala 31:58]
  wire [63:0] _wdata_temp_T_13 = {io_in_bits_ctrl_data_src2[15:0],48'h0}; // @[Cat.scala 31:58]
  wire [7:0] _GEN_20 = 2'h3 == addr_temp[2:1] ? 8'hc0 : 8'h0; // @[MEM.scala 113:22 99:31]
  wire [63:0] _GEN_21 = 2'h3 == addr_temp[2:1] ? _wdata_temp_T_13 : 64'h0; // @[MEM.scala 114:22 99:31]
  wire [7:0] _GEN_22 = 2'h2 == addr_temp[2:1] ? 8'h30 : _GEN_20; // @[MEM.scala 109:22 99:31]
  wire [63:0] _GEN_23 = 2'h2 == addr_temp[2:1] ? _wdata_temp_T_10 : _GEN_21; // @[MEM.scala 110:22 99:31]
  wire [7:0] _GEN_24 = 2'h1 == addr_temp[2:1] ? 8'hc : _GEN_22; // @[MEM.scala 105:22 99:31]
  wire [63:0] _GEN_25 = 2'h1 == addr_temp[2:1] ? _wdata_temp_T_6 : _GEN_23; // @[MEM.scala 106:22 99:31]
  wire [7:0] _GEN_26 = 2'h0 == addr_temp[2:1] ? 8'h3 : _GEN_24; // @[MEM.scala 101:22 99:31]
  wire [63:0] _GEN_27 = 2'h0 == addr_temp[2:1] ? _wdata_temp_T_2 : _GEN_25; // @[MEM.scala 102:22 99:31]
  wire [7:0] _wmask_temp_T = _T_15 ? 8'h80 : 8'h0; // @[Mux.scala 101:16]
  wire [7:0] _wmask_temp_T_1 = _T_13 ? 8'h40 : _wmask_temp_T; // @[Mux.scala 101:16]
  wire [7:0] _wmask_temp_T_2 = _T_11 ? 8'h20 : _wmask_temp_T_1; // @[Mux.scala 101:16]
  wire [7:0] _wmask_temp_T_3 = _T_9 ? 8'h10 : _wmask_temp_T_2; // @[Mux.scala 101:16]
  wire [7:0] _wmask_temp_T_4 = _T_7 ? 8'h8 : _wmask_temp_T_3; // @[Mux.scala 101:16]
  wire [7:0] _wmask_temp_T_5 = _T_5 ? 8'h4 : _wmask_temp_T_4; // @[Mux.scala 101:16]
  wire [7:0] _wmask_temp_T_6 = _T_3 ? 8'h2 : _wmask_temp_T_5; // @[Mux.scala 101:16]
  wire [7:0] _wmask_temp_T_7 = _T_1 ? 8'h1 : _wmask_temp_T_6; // @[Mux.scala 101:16]
  wire [63:0] _wdata_temp_T_14 = _T_15 ? _T_61 : 64'h0; // @[Mux.scala 101:16]
  wire [63:0] _wdata_temp_T_15 = _T_13 ? _T_56 : _wdata_temp_T_14; // @[Mux.scala 101:16]
  wire [63:0] _wdata_temp_T_16 = _T_11 ? _T_50 : _wdata_temp_T_15; // @[Mux.scala 101:16]
  wire [63:0] _wdata_temp_T_17 = _T_9 ? _T_44 : _wdata_temp_T_16; // @[Mux.scala 101:16]
  wire [63:0] _wdata_temp_T_18 = _T_7 ? _T_38 : _wdata_temp_T_17; // @[Mux.scala 101:16]
  wire [63:0] _wdata_temp_T_19 = _T_5 ? _T_32 : _wdata_temp_T_18; // @[Mux.scala 101:16]
  wire [63:0] _wdata_temp_T_20 = _T_3 ? _T_26 : _wdata_temp_T_19; // @[Mux.scala 101:16]
  wire [63:0] _wdata_temp_T_21 = _T_1 ? _T_20 : _wdata_temp_T_20; // @[Mux.scala 101:16]
  wire [7:0] _wmask_temp_T_10 = addr_temp[2] ? 8'hf0 : 8'hf; // @[MEM.scala 124:24]
  wire [63:0] _wdata_temp_T_26 = {io_in_bits_ctrl_data_src2[31:0],32'h0}; // @[Cat.scala 31:58]
  wire [63:0] _wdata_temp_T_29 = {32'h0,io_in_bits_ctrl_data_src2[31:0]}; // @[Cat.scala 31:58]
  wire [63:0] _wdata_temp_T_30 = addr_temp[2] ? _wdata_temp_T_26 : _wdata_temp_T_29; // @[MEM.scala 125:24]
  wire [7:0] _GEN_28 = _T_70 ? _wmask_temp_T_10 : 8'h0; // @[MEM.scala 124:18 92:44]
  wire [63:0] _GEN_29 = _T_70 ? _wdata_temp_T_30 : 64'h0; // @[MEM.scala 125:18 92:44]
  wire [7:0] _GEN_30 = _T_69 ? _wmask_temp_T_7 : _GEN_28; // @[MEM.scala 120:18 92:44]
  wire [63:0] _GEN_31 = _T_69 ? _wdata_temp_T_21 : _GEN_29; // @[MEM.scala 121:18 92:44]
  wire [7:0] _GEN_32 = _T_64 ? _GEN_26 : _GEN_30; // @[MEM.scala 92:44]
  wire [63:0] _GEN_33 = _T_64 ? _GEN_27 : _GEN_31; // @[MEM.scala 92:44]
  wire  _T_107 = addr_temp[2:1] == 2'h0; // @[MEM.scala 139:22]
  wire  _T_110 = addr_temp[2:1] == 2'h1; // @[MEM.scala 140:22]
  wire  _T_113 = addr_temp[2:1] == 2'h2; // @[MEM.scala 141:22]
  wire  _T_116 = addr_temp[2:1] == 2'h3; // @[MEM.scala 142:22]
  wire  mem_result_sign = io_mem_rdata[63]; // @[util.scala 10:19]
  wire [31:0] _mem_result_T_4 = mem_result_sign ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _mem_result_T_5 = {_mem_result_T_4,io_mem_rdata[63:32]}; // @[Cat.scala 31:58]
  wire  mem_result_sign_1 = io_mem_rdata[31]; // @[util.scala 10:19]
  wire [31:0] _mem_result_T_8 = mem_result_sign_1 ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _mem_result_T_9 = {_mem_result_T_8,io_mem_rdata[31:0]}; // @[Cat.scala 31:58]
  wire [63:0] _mem_result_T_10 = addr_temp[2] ? _mem_result_T_5 : _mem_result_T_9; // @[MEM.scala 150:24]
  wire [63:0] _mem_result_T_15 = {32'h0,io_mem_rdata[63:32]}; // @[Cat.scala 31:58]
  wire [63:0] _mem_result_T_18 = {32'h0,io_mem_rdata[31:0]}; // @[Cat.scala 31:58]
  wire [63:0] _mem_result_T_19 = addr_temp[2] ? _mem_result_T_15 : _mem_result_T_18; // @[MEM.scala 153:24]
  wire [7:0] _mem_result_T_20 = _T_15 ? io_mem_rdata[63:56] : 8'h0; // @[Mux.scala 101:16]
  wire [7:0] _mem_result_T_21 = _T_13 ? io_mem_rdata[55:48] : _mem_result_T_20; // @[Mux.scala 101:16]
  wire [7:0] _mem_result_T_22 = _T_11 ? io_mem_rdata[47:40] : _mem_result_T_21; // @[Mux.scala 101:16]
  wire [7:0] _mem_result_T_23 = _T_9 ? io_mem_rdata[39:32] : _mem_result_T_22; // @[Mux.scala 101:16]
  wire [7:0] _mem_result_T_24 = _T_7 ? io_mem_rdata[31:24] : _mem_result_T_23; // @[Mux.scala 101:16]
  wire [7:0] _mem_result_T_25 = _T_5 ? io_mem_rdata[23:16] : _mem_result_T_24; // @[Mux.scala 101:16]
  wire [7:0] _mem_result_T_26 = _T_3 ? io_mem_rdata[15:8] : _mem_result_T_25; // @[Mux.scala 101:16]
  wire [7:0] _mem_result_T_27 = _T_1 ? io_mem_rdata[7:0] : _mem_result_T_26; // @[Mux.scala 101:16]
  wire [63:0] _mem_result_T_29 = {56'h0,_mem_result_T_27}; // @[Cat.scala 31:58]
  wire  mem_result_sign_2 = _mem_result_T_27[7]; // @[util.scala 10:19]
  wire [55:0] _mem_result_T_39 = mem_result_sign_2 ? 56'hffffffffffffff : 56'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _mem_result_T_40 = {_mem_result_T_39,_mem_result_T_27}; // @[Cat.scala 31:58]
  wire [15:0] _mem_result_T_41 = _T_116 ? io_mem_rdata[63:48] : 16'h0; // @[Mux.scala 101:16]
  wire [15:0] _mem_result_T_42 = _T_113 ? io_mem_rdata[47:32] : _mem_result_T_41; // @[Mux.scala 101:16]
  wire [15:0] _mem_result_T_43 = _T_110 ? io_mem_rdata[31:16] : _mem_result_T_42; // @[Mux.scala 101:16]
  wire [15:0] _mem_result_T_44 = _T_107 ? io_mem_rdata[15:0] : _mem_result_T_43; // @[Mux.scala 101:16]
  wire  mem_result_sign_3 = _mem_result_T_44[15]; // @[util.scala 10:19]
  wire [47:0] _mem_result_T_46 = mem_result_sign_3 ? 48'hffffffffffff : 48'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _mem_result_T_47 = {_mem_result_T_46,_mem_result_T_44}; // @[Cat.scala 31:58]
  wire [63:0] _mem_result_T_53 = {48'h0,_mem_result_T_44}; // @[Cat.scala 31:58]
  wire [63:0] _GEN_36 = _T_72 ? _mem_result_T_53 : 64'h0; // @[MEM.scala 145:44 165:18]
  wire [63:0] _GEN_37 = _T_71 ? _mem_result_T_47 : _GEN_36; // @[MEM.scala 145:44 162:18]
  wire [63:0] _GEN_38 = _T_68 ? _mem_result_T_40 : _GEN_37; // @[MEM.scala 145:44 159:18]
  wire [63:0] _GEN_39 = _T_67 ? _mem_result_T_29 : _GEN_38; // @[MEM.scala 145:44 156:18]
  wire [63:0] _GEN_40 = _T_66 ? _mem_result_T_19 : _GEN_39; // @[MEM.scala 145:44 153:18]
  wire [63:0] _GEN_41 = _T_65 ? _mem_result_T_10 : _GEN_40; // @[MEM.scala 145:44 150:18]
  wire [63:0] mem_result = _T_62 ? io_mem_rdata : _GEN_41; // @[MEM.scala 145:44 147:18]
  wire  _io_out_bits_ctrl_rf_rfData_T = io_in_bits_ctrl_signal_fuType == 3'h4; // @[MEM.scala 175:67]
  assign io_out_valid = io_in_valid; // @[MEM.scala 182:36]
  assign io_out_bits_ctrl_signal_inst_valid = io_in_valid & io_in_bits_ctrl_signal_inst_valid; // @[MEM.scala 174:44]
  assign io_out_bits_ctrl_signal_rfWen = io_in_bits_ctrl_signal_rfWen; // @[MEM.scala 170:27]
  assign io_out_bits_ctrl_flow_PC = io_in_bits_ctrl_flow_PC; // @[MEM.scala 171:25]
  assign io_out_bits_ctrl_flow_inst = io_in_bits_ctrl_flow_inst; // @[MEM.scala 171:25]
  assign io_out_bits_ctrl_flow_Dnpc = io_in_bits_ctrl_flow_Dnpc; // @[MEM.scala 171:25]
  assign io_out_bits_ctrl_flow_skip = addr_temp == 64'ha0000048 | addr_temp == 64'ha00003f8 | addr_temp >= 64'ha0000000
     & addr_temp <= 64'ha1200000; // @[MEM.scala 173:97]
  assign io_out_bits_ctrl_rf_rfDest = io_in_bits_ctrl_rf_rfDest; // @[MEM.scala 172:23]
  assign io_out_bits_ctrl_rf_rfWen = io_in_valid & io_in_bits_ctrl_signal_rfWen; // @[MEM.scala 176:35]
  assign io_out_bits_ctrl_rf_rfData = io_in_bits_ctrl_signal_fuType == 3'h4 ? mem_result : io_in_bits_ctrl_rf_rfData; // @[MEM.scala 175:36]
  assign io_mem_addr = 7'h45 == io_in_bits_ctrl_signal_aluoptype ? _addr_temp_T_1 : _GEN_16; // @[MEM.scala 53:44 55:17]
  assign io_mem_wdata = _T_63 ? io_in_bits_ctrl_data_src2 : _GEN_33; // @[MEM.scala 92:44 96:18]
  assign io_mem_wmask = _T_63 ? 8'hff : _GEN_32; // @[MEM.scala 92:44 95:18]
  assign io_mem_ce = _io_out_bits_ctrl_rf_rfData_T & io_in_valid; // @[MEM.scala 185:65]
  assign io_mem_we = 7'h45 == io_in_bits_ctrl_signal_aluoptype ? 1'h0 : _GEN_17; // @[MEM.scala 53:44]
endmodule
module WB(
  input         io_in_valid,
  input         io_in_bits_ctrl_signal_inst_valid,
  input         io_in_bits_ctrl_signal_rfWen,
  input  [63:0] io_in_bits_ctrl_flow_PC,
  input  [31:0] io_in_bits_ctrl_flow_inst,
  input  [63:0] io_in_bits_ctrl_flow_Dnpc,
  input         io_in_bits_ctrl_flow_skip,
  input  [4:0]  io_in_bits_ctrl_rf_rfDest,
  input  [63:0] io_in_bits_ctrl_rf_rfData,
  output        io_out_valid,
  output        io_out_bits_ctrl_signal_inst_valid,
  output [63:0] io_out_bits_ctrl_flow_PC,
  output [31:0] io_out_bits_ctrl_flow_inst,
  output [63:0] io_out_bits_ctrl_flow_Dnpc,
  output        io_out_bits_ctrl_flow_skip,
  output [4:0]  io_out_bits_ctrl_rf_rfDest,
  output        io_out_bits_ctrl_rf_rfWen,
  output [63:0] io_out_bits_ctrl_rf_rfData
);
  assign io_out_valid = io_in_valid; // @[WB.scala 18:36]
  assign io_out_bits_ctrl_signal_inst_valid = io_in_valid & io_in_bits_ctrl_signal_inst_valid; // @[WB.scala 15:44]
  assign io_out_bits_ctrl_flow_PC = io_in_bits_ctrl_flow_PC; // @[WB.scala 13:15]
  assign io_out_bits_ctrl_flow_inst = io_in_bits_ctrl_flow_inst; // @[WB.scala 13:15]
  assign io_out_bits_ctrl_flow_Dnpc = io_in_bits_ctrl_flow_Dnpc; // @[WB.scala 13:15]
  assign io_out_bits_ctrl_flow_skip = io_in_bits_ctrl_flow_skip; // @[WB.scala 13:15]
  assign io_out_bits_ctrl_rf_rfDest = io_in_bits_ctrl_rf_rfDest; // @[WB.scala 13:15]
  assign io_out_bits_ctrl_rf_rfWen = io_in_valid & io_in_bits_ctrl_signal_rfWen; // @[WB.scala 16:35]
  assign io_out_bits_ctrl_rf_rfData = io_in_bits_ctrl_rf_rfData; // @[WB.scala 13:15]
endmodule
module Bypass(
  input  [4:0]  io_EX_rf_rfDest,
  input         io_EX_rf_rfWen,
  input  [63:0] io_EX_rf_rfData,
  input  [4:0]  io_MEM_rf_rfDest,
  input         io_MEM_rf_rfWen,
  input  [63:0] io_MEM_rf_rfData,
  input  [4:0]  io_WB_rf_rfDest,
  input         io_WB_rf_rfWen,
  input  [63:0] io_WB_rf_rfData,
  input  [63:0] io_Reg1,
  input  [4:0]  io_reg_index1,
  input  [63:0] io_Reg2,
  input  [4:0]  io_reg_index2,
  output [63:0] io_Bypass_REG1,
  output [63:0] io_Bypass_REG2
);
  wire  _reg1_temp_T_3 = io_EX_rf_rfDest != 5'h0; // @[Bypass.scala 26:92]
  wire  _reg1_temp_T_4 = io_EX_rf_rfWen & io_EX_rf_rfDest == io_reg_index1 & io_EX_rf_rfDest != 5'h0; // @[Bypass.scala 26:73]
  wire  _reg1_temp_T_8 = io_MEM_rf_rfDest != 5'h0; // @[Bypass.scala 27:95]
  wire  _reg1_temp_T_9 = io_MEM_rf_rfWen & io_MEM_rf_rfDest == io_reg_index1 & io_MEM_rf_rfDest != 5'h0; // @[Bypass.scala 27:75]
  wire  _reg1_temp_T_13 = io_WB_rf_rfDest != 5'h0; // @[Bypass.scala 28:92]
  wire  _reg1_temp_T_14 = io_WB_rf_rfWen & io_WB_rf_rfDest == io_reg_index1 & io_WB_rf_rfDest != 5'h0; // @[Bypass.scala 28:73]
  wire [63:0] _reg1_temp_T_15 = _reg1_temp_T_14 ? io_WB_rf_rfData : io_Reg1; // @[Mux.scala 47:70]
  wire [63:0] _reg1_temp_T_16 = _reg1_temp_T_9 ? io_MEM_rf_rfData : _reg1_temp_T_15; // @[Mux.scala 47:70]
  wire  _reg2_temp_T_4 = io_EX_rf_rfWen & io_EX_rf_rfDest == io_reg_index2 & _reg1_temp_T_3; // @[Bypass.scala 34:73]
  wire  _reg2_temp_T_9 = io_MEM_rf_rfWen & io_MEM_rf_rfDest == io_reg_index2 & _reg1_temp_T_8; // @[Bypass.scala 35:75]
  wire  _reg2_temp_T_14 = io_WB_rf_rfWen & io_WB_rf_rfDest == io_reg_index2 & _reg1_temp_T_13; // @[Bypass.scala 36:73]
  wire [63:0] _reg2_temp_T_15 = _reg2_temp_T_14 ? io_WB_rf_rfData : io_Reg2; // @[Mux.scala 47:70]
  wire [63:0] _reg2_temp_T_16 = _reg2_temp_T_9 ? io_MEM_rf_rfData : _reg2_temp_T_15; // @[Mux.scala 47:70]
  assign io_Bypass_REG1 = _reg1_temp_T_4 ? io_EX_rf_rfData : _reg1_temp_T_16; // @[Mux.scala 47:70]
  assign io_Bypass_REG2 = _reg2_temp_T_4 ? io_EX_rf_rfData : _reg2_temp_T_16; // @[Mux.scala 47:70]
endmodule
module MEM_Bypass(
  input  [4:0]  io_MEM_rf_rfDest,
  input         io_MEM_rf_rfWen,
  input  [63:0] io_MEM_rf_rfData,
  input  [63:0] io_Reg1,
  input  [4:0]  io_reg_index1,
  input  [63:0] io_Reg2,
  input  [4:0]  io_reg_index2,
  output [63:0] io_Bypass_REG1,
  output [63:0] io_Bypass_REG2
);
  wire  _reg1_temp_T_3 = io_MEM_rf_rfDest != 5'h0; // @[Bypass.scala 66:95]
  wire  _reg1_temp_T_4 = io_MEM_rf_rfWen & io_MEM_rf_rfDest == io_reg_index1 & io_MEM_rf_rfDest != 5'h0; // @[Bypass.scala 66:75]
  wire  _reg2_temp_T_4 = io_MEM_rf_rfWen & io_MEM_rf_rfDest == io_reg_index2 & _reg1_temp_T_3; // @[Bypass.scala 72:75]
  assign io_Bypass_REG1 = _reg1_temp_T_4 ? io_MEM_rf_rfData : io_Reg1; // @[Mux.scala 47:70]
  assign io_Bypass_REG2 = _reg2_temp_T_4 ? io_MEM_rf_rfData : io_Reg2; // @[Mux.scala 47:70]
endmodule
module CoreTop(
  input         clock,
  input         reset,
  output [63:0] io_pc,
  output [31:0] io_inst
);
`ifdef RANDOMIZE_MEM_INIT
  reg [63:0] _RAND_0;
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_1;
  reg [63:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [31:0] _RAND_10;
  reg [31:0] _RAND_11;
  reg [31:0] _RAND_12;
  reg [31:0] _RAND_13;
  reg [63:0] _RAND_14;
  reg [63:0] _RAND_15;
  reg [63:0] _RAND_16;
  reg [63:0] _RAND_17;
  reg [31:0] _RAND_18;
  reg [31:0] _RAND_19;
  reg [31:0] _RAND_20;
  reg [31:0] _RAND_21;
  reg [31:0] _RAND_22;
  reg [31:0] _RAND_23;
  reg [63:0] _RAND_24;
  reg [31:0] _RAND_25;
  reg [63:0] _RAND_26;
  reg [31:0] _RAND_27;
  reg [63:0] _RAND_28;
  reg [63:0] _RAND_29;
  reg [63:0] _RAND_30;
  reg [63:0] _RAND_31;
  reg [31:0] _RAND_32;
  reg [31:0] _RAND_33;
  reg [31:0] _RAND_34;
  reg [63:0] _RAND_35;
  reg [31:0] _RAND_36;
  reg [63:0] _RAND_37;
  reg [31:0] _RAND_38;
  reg [31:0] _RAND_39;
  reg [63:0] _RAND_40;
  reg [31:0] _RAND_41;
  reg [31:0] _RAND_42;
  reg [31:0] _RAND_43;
  reg [63:0] _RAND_44;
  reg [63:0] _RAND_45;
`endif // RANDOMIZE_REG_INIT
  wire  IF_clock; // @[CoreTop.scala 52:18]
  wire  IF_reset; // @[CoreTop.scala 52:18]
  wire  IF_io_branch_io_is_branch; // @[CoreTop.scala 52:18]
  wire  IF_io_branch_io_is_jump; // @[CoreTop.scala 52:18]
  wire [63:0] IF_io_branch_io_dnpc; // @[CoreTop.scala 52:18]
  wire [31:0] IF_io_inst; // @[CoreTop.scala 52:18]
  wire [63:0] IF_io_out_bits_PC; // @[CoreTop.scala 52:18]
  wire [31:0] IF_io_out_bits_Inst; // @[CoreTop.scala 52:18]
  wire  IFM_reset; // @[CoreTop.scala 54:19]
  wire  IFM_clk; // @[CoreTop.scala 54:19]
  wire [63:0] IFM_pc; // @[CoreTop.scala 54:19]
  wire [31:0] IFM_inst; // @[CoreTop.scala 54:19]
  wire  ID_io_in_valid; // @[CoreTop.scala 56:18]
  wire [63:0] ID_io_in_bits_PC; // @[CoreTop.scala 56:18]
  wire [31:0] ID_io_in_bits_Inst; // @[CoreTop.scala 56:18]
  wire [63:0] ID_io_REG1; // @[CoreTop.scala 56:18]
  wire [63:0] ID_io_REG2; // @[CoreTop.scala 56:18]
  wire  ID_io_out_valid; // @[CoreTop.scala 56:18]
  wire [2:0] ID_io_out_bits_ctrl_signal_src1Type; // @[CoreTop.scala 56:18]
  wire [2:0] ID_io_out_bits_ctrl_signal_src2Type; // @[CoreTop.scala 56:18]
  wire [2:0] ID_io_out_bits_ctrl_signal_fuType; // @[CoreTop.scala 56:18]
  wire  ID_io_out_bits_ctrl_signal_inst_valid; // @[CoreTop.scala 56:18]
  wire [4:0] ID_io_out_bits_ctrl_signal_rfSrc1; // @[CoreTop.scala 56:18]
  wire [4:0] ID_io_out_bits_ctrl_signal_rfSrc2; // @[CoreTop.scala 56:18]
  wire  ID_io_out_bits_ctrl_signal_rfWen; // @[CoreTop.scala 56:18]
  wire [6:0] ID_io_out_bits_ctrl_signal_aluoptype; // @[CoreTop.scala 56:18]
  wire [4:0] ID_io_out_bits_ctrl_signal_rfDest; // @[CoreTop.scala 56:18]
  wire [63:0] ID_io_out_bits_ctrl_data_src1; // @[CoreTop.scala 56:18]
  wire [63:0] ID_io_out_bits_ctrl_data_src2; // @[CoreTop.scala 56:18]
  wire [63:0] ID_io_out_bits_ctrl_data_Imm; // @[CoreTop.scala 56:18]
  wire [63:0] ID_io_out_bits_ctrl_flow_PC; // @[CoreTop.scala 56:18]
  wire [31:0] ID_io_out_bits_ctrl_flow_inst; // @[CoreTop.scala 56:18]
  wire  EX_clock; // @[CoreTop.scala 58:18]
  wire  EX_reset; // @[CoreTop.scala 58:18]
  wire  EX_io_in_valid; // @[CoreTop.scala 58:18]
  wire [2:0] EX_io_in_bits_ctrl_signal_src1Type; // @[CoreTop.scala 58:18]
  wire [2:0] EX_io_in_bits_ctrl_signal_src2Type; // @[CoreTop.scala 58:18]
  wire [2:0] EX_io_in_bits_ctrl_signal_fuType; // @[CoreTop.scala 58:18]
  wire  EX_io_in_bits_ctrl_signal_inst_valid; // @[CoreTop.scala 58:18]
  wire [4:0] EX_io_in_bits_ctrl_signal_rfSrc1; // @[CoreTop.scala 58:18]
  wire [4:0] EX_io_in_bits_ctrl_signal_rfSrc2; // @[CoreTop.scala 58:18]
  wire  EX_io_in_bits_ctrl_signal_rfWen; // @[CoreTop.scala 58:18]
  wire [6:0] EX_io_in_bits_ctrl_signal_aluoptype; // @[CoreTop.scala 58:18]
  wire [4:0] EX_io_in_bits_ctrl_signal_rfDest; // @[CoreTop.scala 58:18]
  wire [63:0] EX_io_in_bits_ctrl_data_src1; // @[CoreTop.scala 58:18]
  wire [63:0] EX_io_in_bits_ctrl_data_src2; // @[CoreTop.scala 58:18]
  wire [63:0] EX_io_in_bits_ctrl_data_Imm; // @[CoreTop.scala 58:18]
  wire [63:0] EX_io_in_bits_ctrl_flow_PC; // @[CoreTop.scala 58:18]
  wire [31:0] EX_io_in_bits_ctrl_flow_inst; // @[CoreTop.scala 58:18]
  wire [63:0] EX_io_src1; // @[CoreTop.scala 58:18]
  wire [63:0] EX_io_src2; // @[CoreTop.scala 58:18]
  wire  EX_io_branchIO_is_branch; // @[CoreTop.scala 58:18]
  wire  EX_io_branchIO_is_jump; // @[CoreTop.scala 58:18]
  wire [63:0] EX_io_branchIO_dnpc; // @[CoreTop.scala 58:18]
  wire  EX_io_out_valid; // @[CoreTop.scala 58:18]
  wire [2:0] EX_io_out_bits_ctrl_signal_fuType; // @[CoreTop.scala 58:18]
  wire  EX_io_out_bits_ctrl_signal_inst_valid; // @[CoreTop.scala 58:18]
  wire  EX_io_out_bits_ctrl_signal_rfWen; // @[CoreTop.scala 58:18]
  wire [6:0] EX_io_out_bits_ctrl_signal_aluoptype; // @[CoreTop.scala 58:18]
  wire [63:0] EX_io_out_bits_ctrl_flow_PC; // @[CoreTop.scala 58:18]
  wire [31:0] EX_io_out_bits_ctrl_flow_inst; // @[CoreTop.scala 58:18]
  wire [63:0] EX_io_out_bits_ctrl_flow_Dnpc; // @[CoreTop.scala 58:18]
  wire [4:0] EX_io_out_bits_ctrl_rf_rfDest; // @[CoreTop.scala 58:18]
  wire  EX_io_out_bits_ctrl_rf_rfWen; // @[CoreTop.scala 58:18]
  wire [63:0] EX_io_out_bits_ctrl_rf_rfData; // @[CoreTop.scala 58:18]
  wire [63:0] EX_io_out_bits_ctrl_data_src1; // @[CoreTop.scala 58:18]
  wire [63:0] EX_io_out_bits_ctrl_data_src2; // @[CoreTop.scala 58:18]
  wire [63:0] EX_io_out_bits_ctrl_data_Imm; // @[CoreTop.scala 58:18]
  wire  EX_io_is_break; // @[CoreTop.scala 58:18]
  wire  EX_io_is_flush; // @[CoreTop.scala 58:18]
  wire  DIP_is_break; // @[CoreTop.scala 60:19]
  wire [63:0] DIP_rf_0; // @[CoreTop.scala 60:19]
  wire [63:0] DIP_rf_1; // @[CoreTop.scala 60:19]
  wire [63:0] DIP_rf_2; // @[CoreTop.scala 60:19]
  wire [63:0] DIP_rf_3; // @[CoreTop.scala 60:19]
  wire [63:0] DIP_rf_4; // @[CoreTop.scala 60:19]
  wire [63:0] DIP_rf_5; // @[CoreTop.scala 60:19]
  wire [63:0] DIP_rf_6; // @[CoreTop.scala 60:19]
  wire [63:0] DIP_rf_7; // @[CoreTop.scala 60:19]
  wire [63:0] DIP_rf_8; // @[CoreTop.scala 60:19]
  wire [63:0] DIP_rf_9; // @[CoreTop.scala 60:19]
  wire [63:0] DIP_rf_10; // @[CoreTop.scala 60:19]
  wire [63:0] DIP_rf_11; // @[CoreTop.scala 60:19]
  wire [63:0] DIP_rf_12; // @[CoreTop.scala 60:19]
  wire [63:0] DIP_rf_13; // @[CoreTop.scala 60:19]
  wire [63:0] DIP_rf_14; // @[CoreTop.scala 60:19]
  wire [63:0] DIP_rf_15; // @[CoreTop.scala 60:19]
  wire [63:0] DIP_rf_16; // @[CoreTop.scala 60:19]
  wire [63:0] DIP_rf_17; // @[CoreTop.scala 60:19]
  wire [63:0] DIP_rf_18; // @[CoreTop.scala 60:19]
  wire [63:0] DIP_rf_19; // @[CoreTop.scala 60:19]
  wire [63:0] DIP_rf_20; // @[CoreTop.scala 60:19]
  wire [63:0] DIP_rf_21; // @[CoreTop.scala 60:19]
  wire [63:0] DIP_rf_22; // @[CoreTop.scala 60:19]
  wire [63:0] DIP_rf_23; // @[CoreTop.scala 60:19]
  wire [63:0] DIP_rf_24; // @[CoreTop.scala 60:19]
  wire [63:0] DIP_rf_25; // @[CoreTop.scala 60:19]
  wire [63:0] DIP_rf_26; // @[CoreTop.scala 60:19]
  wire [63:0] DIP_rf_27; // @[CoreTop.scala 60:19]
  wire [63:0] DIP_rf_28; // @[CoreTop.scala 60:19]
  wire [63:0] DIP_rf_29; // @[CoreTop.scala 60:19]
  wire [63:0] DIP_rf_30; // @[CoreTop.scala 60:19]
  wire [63:0] DIP_rf_31; // @[CoreTop.scala 60:19]
  wire [31:0] DIP_inst; // @[CoreTop.scala 60:19]
  wire [63:0] DIP_pc; // @[CoreTop.scala 60:19]
  wire  DIP_inst_valid; // @[CoreTop.scala 60:19]
  wire [63:0] DIP_dnpc; // @[CoreTop.scala 60:19]
  wire  DIP_is_skip; // @[CoreTop.scala 60:19]
  reg [63:0] rf [0:31]; // @[RF.scala 7:15]
  wire  rf_bypass_io_Reg1_MPORT_en; // @[RF.scala 7:15]
  wire [4:0] rf_bypass_io_Reg1_MPORT_addr; // @[RF.scala 7:15]
  wire [63:0] rf_bypass_io_Reg1_MPORT_data; // @[RF.scala 7:15]
  wire  rf_bypass_io_Reg2_MPORT_en; // @[RF.scala 7:15]
  wire [4:0] rf_bypass_io_Reg2_MPORT_addr; // @[RF.scala 7:15]
  wire [63:0] rf_bypass_io_Reg2_MPORT_data; // @[RF.scala 7:15]
  wire  rf_DIP_io_rf_0_MPORT_en; // @[RF.scala 7:15]
  wire [4:0] rf_DIP_io_rf_0_MPORT_addr; // @[RF.scala 7:15]
  wire [63:0] rf_DIP_io_rf_0_MPORT_data; // @[RF.scala 7:15]
  wire  rf_DIP_io_rf_1_MPORT_en; // @[RF.scala 7:15]
  wire [4:0] rf_DIP_io_rf_1_MPORT_addr; // @[RF.scala 7:15]
  wire [63:0] rf_DIP_io_rf_1_MPORT_data; // @[RF.scala 7:15]
  wire  rf_DIP_io_rf_2_MPORT_en; // @[RF.scala 7:15]
  wire [4:0] rf_DIP_io_rf_2_MPORT_addr; // @[RF.scala 7:15]
  wire [63:0] rf_DIP_io_rf_2_MPORT_data; // @[RF.scala 7:15]
  wire  rf_DIP_io_rf_3_MPORT_en; // @[RF.scala 7:15]
  wire [4:0] rf_DIP_io_rf_3_MPORT_addr; // @[RF.scala 7:15]
  wire [63:0] rf_DIP_io_rf_3_MPORT_data; // @[RF.scala 7:15]
  wire  rf_DIP_io_rf_4_MPORT_en; // @[RF.scala 7:15]
  wire [4:0] rf_DIP_io_rf_4_MPORT_addr; // @[RF.scala 7:15]
  wire [63:0] rf_DIP_io_rf_4_MPORT_data; // @[RF.scala 7:15]
  wire  rf_DIP_io_rf_5_MPORT_en; // @[RF.scala 7:15]
  wire [4:0] rf_DIP_io_rf_5_MPORT_addr; // @[RF.scala 7:15]
  wire [63:0] rf_DIP_io_rf_5_MPORT_data; // @[RF.scala 7:15]
  wire  rf_DIP_io_rf_6_MPORT_en; // @[RF.scala 7:15]
  wire [4:0] rf_DIP_io_rf_6_MPORT_addr; // @[RF.scala 7:15]
  wire [63:0] rf_DIP_io_rf_6_MPORT_data; // @[RF.scala 7:15]
  wire  rf_DIP_io_rf_7_MPORT_en; // @[RF.scala 7:15]
  wire [4:0] rf_DIP_io_rf_7_MPORT_addr; // @[RF.scala 7:15]
  wire [63:0] rf_DIP_io_rf_7_MPORT_data; // @[RF.scala 7:15]
  wire  rf_DIP_io_rf_8_MPORT_en; // @[RF.scala 7:15]
  wire [4:0] rf_DIP_io_rf_8_MPORT_addr; // @[RF.scala 7:15]
  wire [63:0] rf_DIP_io_rf_8_MPORT_data; // @[RF.scala 7:15]
  wire  rf_DIP_io_rf_9_MPORT_en; // @[RF.scala 7:15]
  wire [4:0] rf_DIP_io_rf_9_MPORT_addr; // @[RF.scala 7:15]
  wire [63:0] rf_DIP_io_rf_9_MPORT_data; // @[RF.scala 7:15]
  wire  rf_DIP_io_rf_10_MPORT_en; // @[RF.scala 7:15]
  wire [4:0] rf_DIP_io_rf_10_MPORT_addr; // @[RF.scala 7:15]
  wire [63:0] rf_DIP_io_rf_10_MPORT_data; // @[RF.scala 7:15]
  wire  rf_DIP_io_rf_11_MPORT_en; // @[RF.scala 7:15]
  wire [4:0] rf_DIP_io_rf_11_MPORT_addr; // @[RF.scala 7:15]
  wire [63:0] rf_DIP_io_rf_11_MPORT_data; // @[RF.scala 7:15]
  wire  rf_DIP_io_rf_12_MPORT_en; // @[RF.scala 7:15]
  wire [4:0] rf_DIP_io_rf_12_MPORT_addr; // @[RF.scala 7:15]
  wire [63:0] rf_DIP_io_rf_12_MPORT_data; // @[RF.scala 7:15]
  wire  rf_DIP_io_rf_13_MPORT_en; // @[RF.scala 7:15]
  wire [4:0] rf_DIP_io_rf_13_MPORT_addr; // @[RF.scala 7:15]
  wire [63:0] rf_DIP_io_rf_13_MPORT_data; // @[RF.scala 7:15]
  wire  rf_DIP_io_rf_14_MPORT_en; // @[RF.scala 7:15]
  wire [4:0] rf_DIP_io_rf_14_MPORT_addr; // @[RF.scala 7:15]
  wire [63:0] rf_DIP_io_rf_14_MPORT_data; // @[RF.scala 7:15]
  wire  rf_DIP_io_rf_15_MPORT_en; // @[RF.scala 7:15]
  wire [4:0] rf_DIP_io_rf_15_MPORT_addr; // @[RF.scala 7:15]
  wire [63:0] rf_DIP_io_rf_15_MPORT_data; // @[RF.scala 7:15]
  wire  rf_DIP_io_rf_16_MPORT_en; // @[RF.scala 7:15]
  wire [4:0] rf_DIP_io_rf_16_MPORT_addr; // @[RF.scala 7:15]
  wire [63:0] rf_DIP_io_rf_16_MPORT_data; // @[RF.scala 7:15]
  wire  rf_DIP_io_rf_17_MPORT_en; // @[RF.scala 7:15]
  wire [4:0] rf_DIP_io_rf_17_MPORT_addr; // @[RF.scala 7:15]
  wire [63:0] rf_DIP_io_rf_17_MPORT_data; // @[RF.scala 7:15]
  wire  rf_DIP_io_rf_18_MPORT_en; // @[RF.scala 7:15]
  wire [4:0] rf_DIP_io_rf_18_MPORT_addr; // @[RF.scala 7:15]
  wire [63:0] rf_DIP_io_rf_18_MPORT_data; // @[RF.scala 7:15]
  wire  rf_DIP_io_rf_19_MPORT_en; // @[RF.scala 7:15]
  wire [4:0] rf_DIP_io_rf_19_MPORT_addr; // @[RF.scala 7:15]
  wire [63:0] rf_DIP_io_rf_19_MPORT_data; // @[RF.scala 7:15]
  wire  rf_DIP_io_rf_20_MPORT_en; // @[RF.scala 7:15]
  wire [4:0] rf_DIP_io_rf_20_MPORT_addr; // @[RF.scala 7:15]
  wire [63:0] rf_DIP_io_rf_20_MPORT_data; // @[RF.scala 7:15]
  wire  rf_DIP_io_rf_21_MPORT_en; // @[RF.scala 7:15]
  wire [4:0] rf_DIP_io_rf_21_MPORT_addr; // @[RF.scala 7:15]
  wire [63:0] rf_DIP_io_rf_21_MPORT_data; // @[RF.scala 7:15]
  wire  rf_DIP_io_rf_22_MPORT_en; // @[RF.scala 7:15]
  wire [4:0] rf_DIP_io_rf_22_MPORT_addr; // @[RF.scala 7:15]
  wire [63:0] rf_DIP_io_rf_22_MPORT_data; // @[RF.scala 7:15]
  wire  rf_DIP_io_rf_23_MPORT_en; // @[RF.scala 7:15]
  wire [4:0] rf_DIP_io_rf_23_MPORT_addr; // @[RF.scala 7:15]
  wire [63:0] rf_DIP_io_rf_23_MPORT_data; // @[RF.scala 7:15]
  wire  rf_DIP_io_rf_24_MPORT_en; // @[RF.scala 7:15]
  wire [4:0] rf_DIP_io_rf_24_MPORT_addr; // @[RF.scala 7:15]
  wire [63:0] rf_DIP_io_rf_24_MPORT_data; // @[RF.scala 7:15]
  wire  rf_DIP_io_rf_25_MPORT_en; // @[RF.scala 7:15]
  wire [4:0] rf_DIP_io_rf_25_MPORT_addr; // @[RF.scala 7:15]
  wire [63:0] rf_DIP_io_rf_25_MPORT_data; // @[RF.scala 7:15]
  wire  rf_DIP_io_rf_26_MPORT_en; // @[RF.scala 7:15]
  wire [4:0] rf_DIP_io_rf_26_MPORT_addr; // @[RF.scala 7:15]
  wire [63:0] rf_DIP_io_rf_26_MPORT_data; // @[RF.scala 7:15]
  wire  rf_DIP_io_rf_27_MPORT_en; // @[RF.scala 7:15]
  wire [4:0] rf_DIP_io_rf_27_MPORT_addr; // @[RF.scala 7:15]
  wire [63:0] rf_DIP_io_rf_27_MPORT_data; // @[RF.scala 7:15]
  wire  rf_DIP_io_rf_28_MPORT_en; // @[RF.scala 7:15]
  wire [4:0] rf_DIP_io_rf_28_MPORT_addr; // @[RF.scala 7:15]
  wire [63:0] rf_DIP_io_rf_28_MPORT_data; // @[RF.scala 7:15]
  wire  rf_DIP_io_rf_29_MPORT_en; // @[RF.scala 7:15]
  wire [4:0] rf_DIP_io_rf_29_MPORT_addr; // @[RF.scala 7:15]
  wire [63:0] rf_DIP_io_rf_29_MPORT_data; // @[RF.scala 7:15]
  wire  rf_DIP_io_rf_30_MPORT_en; // @[RF.scala 7:15]
  wire [4:0] rf_DIP_io_rf_30_MPORT_addr; // @[RF.scala 7:15]
  wire [63:0] rf_DIP_io_rf_30_MPORT_data; // @[RF.scala 7:15]
  wire  rf_DIP_io_rf_31_MPORT_en; // @[RF.scala 7:15]
  wire [4:0] rf_DIP_io_rf_31_MPORT_addr; // @[RF.scala 7:15]
  wire [63:0] rf_DIP_io_rf_31_MPORT_data; // @[RF.scala 7:15]
  wire [63:0] rf_MPORT_data; // @[RF.scala 7:15]
  wire [4:0] rf_MPORT_addr; // @[RF.scala 7:15]
  wire  rf_MPORT_mask; // @[RF.scala 7:15]
  wire  rf_MPORT_en; // @[RF.scala 7:15]
  wire [63:0] mem_addr; // @[CoreTop.scala 64:19]
  wire  mem_reset; // @[CoreTop.scala 64:19]
  wire  mem_clk; // @[CoreTop.scala 64:19]
  wire  mem_we; // @[CoreTop.scala 64:19]
  wire  mem_ce; // @[CoreTop.scala 64:19]
  wire [63:0] mem_wdata; // @[CoreTop.scala 64:19]
  wire [63:0] mem_rdata; // @[CoreTop.scala 64:19]
  wire [7:0] mem_wmask; // @[CoreTop.scala 64:19]
  wire  MEM_io_in_valid; // @[CoreTop.scala 66:19]
  wire [2:0] MEM_io_in_bits_ctrl_signal_fuType; // @[CoreTop.scala 66:19]
  wire  MEM_io_in_bits_ctrl_signal_inst_valid; // @[CoreTop.scala 66:19]
  wire  MEM_io_in_bits_ctrl_signal_rfWen; // @[CoreTop.scala 66:19]
  wire [6:0] MEM_io_in_bits_ctrl_signal_aluoptype; // @[CoreTop.scala 66:19]
  wire [63:0] MEM_io_in_bits_ctrl_flow_PC; // @[CoreTop.scala 66:19]
  wire [31:0] MEM_io_in_bits_ctrl_flow_inst; // @[CoreTop.scala 66:19]
  wire [63:0] MEM_io_in_bits_ctrl_flow_Dnpc; // @[CoreTop.scala 66:19]
  wire [4:0] MEM_io_in_bits_ctrl_rf_rfDest; // @[CoreTop.scala 66:19]
  wire [63:0] MEM_io_in_bits_ctrl_rf_rfData; // @[CoreTop.scala 66:19]
  wire [63:0] MEM_io_in_bits_ctrl_data_src1; // @[CoreTop.scala 66:19]
  wire [63:0] MEM_io_in_bits_ctrl_data_src2; // @[CoreTop.scala 66:19]
  wire [63:0] MEM_io_in_bits_ctrl_data_Imm; // @[CoreTop.scala 66:19]
  wire  MEM_io_out_valid; // @[CoreTop.scala 66:19]
  wire  MEM_io_out_bits_ctrl_signal_inst_valid; // @[CoreTop.scala 66:19]
  wire  MEM_io_out_bits_ctrl_signal_rfWen; // @[CoreTop.scala 66:19]
  wire [63:0] MEM_io_out_bits_ctrl_flow_PC; // @[CoreTop.scala 66:19]
  wire [31:0] MEM_io_out_bits_ctrl_flow_inst; // @[CoreTop.scala 66:19]
  wire [63:0] MEM_io_out_bits_ctrl_flow_Dnpc; // @[CoreTop.scala 66:19]
  wire  MEM_io_out_bits_ctrl_flow_skip; // @[CoreTop.scala 66:19]
  wire [4:0] MEM_io_out_bits_ctrl_rf_rfDest; // @[CoreTop.scala 66:19]
  wire  MEM_io_out_bits_ctrl_rf_rfWen; // @[CoreTop.scala 66:19]
  wire [63:0] MEM_io_out_bits_ctrl_rf_rfData; // @[CoreTop.scala 66:19]
  wire [63:0] MEM_io_mem_addr; // @[CoreTop.scala 66:19]
  wire [63:0] MEM_io_mem_rdata; // @[CoreTop.scala 66:19]
  wire [63:0] MEM_io_mem_wdata; // @[CoreTop.scala 66:19]
  wire [7:0] MEM_io_mem_wmask; // @[CoreTop.scala 66:19]
  wire  MEM_io_mem_ce; // @[CoreTop.scala 66:19]
  wire  MEM_io_mem_we; // @[CoreTop.scala 66:19]
  wire  WB_io_in_valid; // @[CoreTop.scala 68:18]
  wire  WB_io_in_bits_ctrl_signal_inst_valid; // @[CoreTop.scala 68:18]
  wire  WB_io_in_bits_ctrl_signal_rfWen; // @[CoreTop.scala 68:18]
  wire [63:0] WB_io_in_bits_ctrl_flow_PC; // @[CoreTop.scala 68:18]
  wire [31:0] WB_io_in_bits_ctrl_flow_inst; // @[CoreTop.scala 68:18]
  wire [63:0] WB_io_in_bits_ctrl_flow_Dnpc; // @[CoreTop.scala 68:18]
  wire  WB_io_in_bits_ctrl_flow_skip; // @[CoreTop.scala 68:18]
  wire [4:0] WB_io_in_bits_ctrl_rf_rfDest; // @[CoreTop.scala 68:18]
  wire [63:0] WB_io_in_bits_ctrl_rf_rfData; // @[CoreTop.scala 68:18]
  wire  WB_io_out_valid; // @[CoreTop.scala 68:18]
  wire  WB_io_out_bits_ctrl_signal_inst_valid; // @[CoreTop.scala 68:18]
  wire [63:0] WB_io_out_bits_ctrl_flow_PC; // @[CoreTop.scala 68:18]
  wire [31:0] WB_io_out_bits_ctrl_flow_inst; // @[CoreTop.scala 68:18]
  wire [63:0] WB_io_out_bits_ctrl_flow_Dnpc; // @[CoreTop.scala 68:18]
  wire  WB_io_out_bits_ctrl_flow_skip; // @[CoreTop.scala 68:18]
  wire [4:0] WB_io_out_bits_ctrl_rf_rfDest; // @[CoreTop.scala 68:18]
  wire  WB_io_out_bits_ctrl_rf_rfWen; // @[CoreTop.scala 68:18]
  wire [63:0] WB_io_out_bits_ctrl_rf_rfData; // @[CoreTop.scala 68:18]
  wire [4:0] bypass_io_EX_rf_rfDest; // @[CoreTop.scala 70:22]
  wire  bypass_io_EX_rf_rfWen; // @[CoreTop.scala 70:22]
  wire [63:0] bypass_io_EX_rf_rfData; // @[CoreTop.scala 70:22]
  wire [4:0] bypass_io_MEM_rf_rfDest; // @[CoreTop.scala 70:22]
  wire  bypass_io_MEM_rf_rfWen; // @[CoreTop.scala 70:22]
  wire [63:0] bypass_io_MEM_rf_rfData; // @[CoreTop.scala 70:22]
  wire [4:0] bypass_io_WB_rf_rfDest; // @[CoreTop.scala 70:22]
  wire  bypass_io_WB_rf_rfWen; // @[CoreTop.scala 70:22]
  wire [63:0] bypass_io_WB_rf_rfData; // @[CoreTop.scala 70:22]
  wire [63:0] bypass_io_Reg1; // @[CoreTop.scala 70:22]
  wire [4:0] bypass_io_reg_index1; // @[CoreTop.scala 70:22]
  wire [63:0] bypass_io_Reg2; // @[CoreTop.scala 70:22]
  wire [4:0] bypass_io_reg_index2; // @[CoreTop.scala 70:22]
  wire [63:0] bypass_io_Bypass_REG1; // @[CoreTop.scala 70:22]
  wire [63:0] bypass_io_Bypass_REG2; // @[CoreTop.scala 70:22]
  wire [4:0] mem_bypass_io_MEM_rf_rfDest; // @[CoreTop.scala 72:25]
  wire  mem_bypass_io_MEM_rf_rfWen; // @[CoreTop.scala 72:25]
  wire [63:0] mem_bypass_io_MEM_rf_rfData; // @[CoreTop.scala 72:25]
  wire [63:0] mem_bypass_io_Reg1; // @[CoreTop.scala 72:25]
  wire [4:0] mem_bypass_io_reg_index1; // @[CoreTop.scala 72:25]
  wire [63:0] mem_bypass_io_Reg2; // @[CoreTop.scala 72:25]
  wire [4:0] mem_bypass_io_reg_index2; // @[CoreTop.scala 72:25]
  wire [63:0] mem_bypass_io_Bypass_REG1; // @[CoreTop.scala 72:25]
  wire [63:0] mem_bypass_io_Bypass_REG2; // @[CoreTop.scala 72:25]
  reg  valid; // @[Pipline.scala 8:24]
  reg [63:0] ID_io_in_bits_r_PC; // @[Reg.scala 16:16]
  reg [31:0] ID_io_in_bits_r_Inst; // @[Reg.scala 16:16]
  reg  valid_1; // @[Pipline.scala 8:24]
  wire  _T_6 = ID_io_out_valid; // @[Pipline.scala 12:21]
  reg [2:0] EX_io_in_bits_r_ctrl_signal_src1Type; // @[Reg.scala 16:16]
  reg [2:0] EX_io_in_bits_r_ctrl_signal_src2Type; // @[Reg.scala 16:16]
  reg [2:0] EX_io_in_bits_r_ctrl_signal_fuType; // @[Reg.scala 16:16]
  reg  EX_io_in_bits_r_ctrl_signal_inst_valid; // @[Reg.scala 16:16]
  reg [4:0] EX_io_in_bits_r_ctrl_signal_rfSrc1; // @[Reg.scala 16:16]
  reg [4:0] EX_io_in_bits_r_ctrl_signal_rfSrc2; // @[Reg.scala 16:16]
  reg  EX_io_in_bits_r_ctrl_signal_rfWen; // @[Reg.scala 16:16]
  reg [6:0] EX_io_in_bits_r_ctrl_signal_aluoptype; // @[Reg.scala 16:16]
  reg [4:0] EX_io_in_bits_r_ctrl_signal_rfDest; // @[Reg.scala 16:16]
  reg [63:0] EX_io_in_bits_r_ctrl_data_src1; // @[Reg.scala 16:16]
  reg [63:0] EX_io_in_bits_r_ctrl_data_src2; // @[Reg.scala 16:16]
  reg [63:0] EX_io_in_bits_r_ctrl_data_Imm; // @[Reg.scala 16:16]
  reg [63:0] EX_io_in_bits_r_ctrl_flow_PC; // @[Reg.scala 16:16]
  reg [31:0] EX_io_in_bits_r_ctrl_flow_inst; // @[Reg.scala 16:16]
  reg  valid_2; // @[Pipline.scala 8:24]
  wire  _T_10 = EX_io_out_valid; // @[Pipline.scala 12:21]
  reg [2:0] MEM_io_in_bits_r_ctrl_signal_fuType; // @[Reg.scala 16:16]
  reg  MEM_io_in_bits_r_ctrl_signal_inst_valid; // @[Reg.scala 16:16]
  reg  MEM_io_in_bits_r_ctrl_signal_rfWen; // @[Reg.scala 16:16]
  reg [6:0] MEM_io_in_bits_r_ctrl_signal_aluoptype; // @[Reg.scala 16:16]
  reg [63:0] MEM_io_in_bits_r_ctrl_flow_PC; // @[Reg.scala 16:16]
  reg [31:0] MEM_io_in_bits_r_ctrl_flow_inst; // @[Reg.scala 16:16]
  reg [63:0] MEM_io_in_bits_r_ctrl_flow_Dnpc; // @[Reg.scala 16:16]
  reg [4:0] MEM_io_in_bits_r_ctrl_rf_rfDest; // @[Reg.scala 16:16]
  reg [63:0] MEM_io_in_bits_r_ctrl_rf_rfData; // @[Reg.scala 16:16]
  reg [63:0] MEM_io_in_bits_r_ctrl_data_src1; // @[Reg.scala 16:16]
  reg [63:0] MEM_io_in_bits_r_ctrl_data_src2; // @[Reg.scala 16:16]
  reg [63:0] MEM_io_in_bits_r_ctrl_data_Imm; // @[Reg.scala 16:16]
  reg  valid_3; // @[Pipline.scala 8:24]
  wire  _T_14 = MEM_io_out_valid; // @[Pipline.scala 12:21]
  reg  WB_io_in_bits_r_ctrl_signal_inst_valid; // @[Reg.scala 16:16]
  reg  WB_io_in_bits_r_ctrl_signal_rfWen; // @[Reg.scala 16:16]
  reg [63:0] WB_io_in_bits_r_ctrl_flow_PC; // @[Reg.scala 16:16]
  reg [31:0] WB_io_in_bits_r_ctrl_flow_inst; // @[Reg.scala 16:16]
  reg [63:0] WB_io_in_bits_r_ctrl_flow_Dnpc; // @[Reg.scala 16:16]
  reg  WB_io_in_bits_r_ctrl_flow_skip; // @[Reg.scala 16:16]
  reg [4:0] WB_io_in_bits_r_ctrl_rf_rfDest; // @[Reg.scala 16:16]
  reg [63:0] WB_io_in_bits_r_ctrl_rf_rfData; // @[Reg.scala 16:16]
  wire  _T_17 = WB_io_out_bits_ctrl_rf_rfDest == 5'h0; // @[RF.scala 9:61]
  wire [63:0] _T_18 = WB_io_out_bits_ctrl_rf_rfData; // @[RF.scala 9:78]
  reg [31:0] DIP_io_inst_REG; // @[CoreTop.scala 138:25]
  reg  DIP_io_is_skip_REG; // @[CoreTop.scala 139:28]
  reg  DIP_io_inst_valid_REG; // @[CoreTop.scala 140:31]
  reg [63:0] DIP_io_pc_REG; // @[CoreTop.scala 141:23]
  reg [63:0] DIP_io_dnpc_REG; // @[CoreTop.scala 142:25]
  IF IF ( // @[CoreTop.scala 52:18]
    .clock(IF_clock),
    .reset(IF_reset),
    .io_branch_io_is_branch(IF_io_branch_io_is_branch),
    .io_branch_io_is_jump(IF_io_branch_io_is_jump),
    .io_branch_io_dnpc(IF_io_branch_io_dnpc),
    .io_inst(IF_io_inst),
    .io_out_bits_PC(IF_io_out_bits_PC),
    .io_out_bits_Inst(IF_io_out_bits_Inst)
  );
  ifm IFM ( // @[CoreTop.scala 54:19]
    .reset(IFM_reset),
    .clk(IFM_clk),
    .pc(IFM_pc),
    .inst(IFM_inst)
  );
  ID ID ( // @[CoreTop.scala 56:18]
    .io_in_valid(ID_io_in_valid),
    .io_in_bits_PC(ID_io_in_bits_PC),
    .io_in_bits_Inst(ID_io_in_bits_Inst),
    .io_REG1(ID_io_REG1),
    .io_REG2(ID_io_REG2),
    .io_out_valid(ID_io_out_valid),
    .io_out_bits_ctrl_signal_src1Type(ID_io_out_bits_ctrl_signal_src1Type),
    .io_out_bits_ctrl_signal_src2Type(ID_io_out_bits_ctrl_signal_src2Type),
    .io_out_bits_ctrl_signal_fuType(ID_io_out_bits_ctrl_signal_fuType),
    .io_out_bits_ctrl_signal_inst_valid(ID_io_out_bits_ctrl_signal_inst_valid),
    .io_out_bits_ctrl_signal_rfSrc1(ID_io_out_bits_ctrl_signal_rfSrc1),
    .io_out_bits_ctrl_signal_rfSrc2(ID_io_out_bits_ctrl_signal_rfSrc2),
    .io_out_bits_ctrl_signal_rfWen(ID_io_out_bits_ctrl_signal_rfWen),
    .io_out_bits_ctrl_signal_aluoptype(ID_io_out_bits_ctrl_signal_aluoptype),
    .io_out_bits_ctrl_signal_rfDest(ID_io_out_bits_ctrl_signal_rfDest),
    .io_out_bits_ctrl_data_src1(ID_io_out_bits_ctrl_data_src1),
    .io_out_bits_ctrl_data_src2(ID_io_out_bits_ctrl_data_src2),
    .io_out_bits_ctrl_data_Imm(ID_io_out_bits_ctrl_data_Imm),
    .io_out_bits_ctrl_flow_PC(ID_io_out_bits_ctrl_flow_PC),
    .io_out_bits_ctrl_flow_inst(ID_io_out_bits_ctrl_flow_inst)
  );
  EXE EX ( // @[CoreTop.scala 58:18]
    .clock(EX_clock),
    .reset(EX_reset),
    .io_in_valid(EX_io_in_valid),
    .io_in_bits_ctrl_signal_src1Type(EX_io_in_bits_ctrl_signal_src1Type),
    .io_in_bits_ctrl_signal_src2Type(EX_io_in_bits_ctrl_signal_src2Type),
    .io_in_bits_ctrl_signal_fuType(EX_io_in_bits_ctrl_signal_fuType),
    .io_in_bits_ctrl_signal_inst_valid(EX_io_in_bits_ctrl_signal_inst_valid),
    .io_in_bits_ctrl_signal_rfSrc1(EX_io_in_bits_ctrl_signal_rfSrc1),
    .io_in_bits_ctrl_signal_rfSrc2(EX_io_in_bits_ctrl_signal_rfSrc2),
    .io_in_bits_ctrl_signal_rfWen(EX_io_in_bits_ctrl_signal_rfWen),
    .io_in_bits_ctrl_signal_aluoptype(EX_io_in_bits_ctrl_signal_aluoptype),
    .io_in_bits_ctrl_signal_rfDest(EX_io_in_bits_ctrl_signal_rfDest),
    .io_in_bits_ctrl_data_src1(EX_io_in_bits_ctrl_data_src1),
    .io_in_bits_ctrl_data_src2(EX_io_in_bits_ctrl_data_src2),
    .io_in_bits_ctrl_data_Imm(EX_io_in_bits_ctrl_data_Imm),
    .io_in_bits_ctrl_flow_PC(EX_io_in_bits_ctrl_flow_PC),
    .io_in_bits_ctrl_flow_inst(EX_io_in_bits_ctrl_flow_inst),
    .io_src1(EX_io_src1),
    .io_src2(EX_io_src2),
    .io_branchIO_is_branch(EX_io_branchIO_is_branch),
    .io_branchIO_is_jump(EX_io_branchIO_is_jump),
    .io_branchIO_dnpc(EX_io_branchIO_dnpc),
    .io_out_valid(EX_io_out_valid),
    .io_out_bits_ctrl_signal_fuType(EX_io_out_bits_ctrl_signal_fuType),
    .io_out_bits_ctrl_signal_inst_valid(EX_io_out_bits_ctrl_signal_inst_valid),
    .io_out_bits_ctrl_signal_rfWen(EX_io_out_bits_ctrl_signal_rfWen),
    .io_out_bits_ctrl_signal_aluoptype(EX_io_out_bits_ctrl_signal_aluoptype),
    .io_out_bits_ctrl_flow_PC(EX_io_out_bits_ctrl_flow_PC),
    .io_out_bits_ctrl_flow_inst(EX_io_out_bits_ctrl_flow_inst),
    .io_out_bits_ctrl_flow_Dnpc(EX_io_out_bits_ctrl_flow_Dnpc),
    .io_out_bits_ctrl_rf_rfDest(EX_io_out_bits_ctrl_rf_rfDest),
    .io_out_bits_ctrl_rf_rfWen(EX_io_out_bits_ctrl_rf_rfWen),
    .io_out_bits_ctrl_rf_rfData(EX_io_out_bits_ctrl_rf_rfData),
    .io_out_bits_ctrl_data_src1(EX_io_out_bits_ctrl_data_src1),
    .io_out_bits_ctrl_data_src2(EX_io_out_bits_ctrl_data_src2),
    .io_out_bits_ctrl_data_Imm(EX_io_out_bits_ctrl_data_Imm),
    .io_is_break(EX_io_is_break),
    .io_is_flush(EX_io_is_flush)
  );
  DIP_model DIP ( // @[CoreTop.scala 60:19]
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
    .inst(DIP_inst),
    .pc(DIP_pc),
    .inst_valid(DIP_inst_valid),
    .dnpc(DIP_dnpc),
    .is_skip(DIP_is_skip)
  );
  MEM mem ( // @[CoreTop.scala 64:19]
    .addr(mem_addr),
    .reset(mem_reset),
    .clk(mem_clk),
    .we(mem_we),
    .ce(mem_ce),
    .wdata(mem_wdata),
    .rdata(mem_rdata),
    .wmask(mem_wmask)
  );
  MEM_stage MEM ( // @[CoreTop.scala 66:19]
    .io_in_valid(MEM_io_in_valid),
    .io_in_bits_ctrl_signal_fuType(MEM_io_in_bits_ctrl_signal_fuType),
    .io_in_bits_ctrl_signal_inst_valid(MEM_io_in_bits_ctrl_signal_inst_valid),
    .io_in_bits_ctrl_signal_rfWen(MEM_io_in_bits_ctrl_signal_rfWen),
    .io_in_bits_ctrl_signal_aluoptype(MEM_io_in_bits_ctrl_signal_aluoptype),
    .io_in_bits_ctrl_flow_PC(MEM_io_in_bits_ctrl_flow_PC),
    .io_in_bits_ctrl_flow_inst(MEM_io_in_bits_ctrl_flow_inst),
    .io_in_bits_ctrl_flow_Dnpc(MEM_io_in_bits_ctrl_flow_Dnpc),
    .io_in_bits_ctrl_rf_rfDest(MEM_io_in_bits_ctrl_rf_rfDest),
    .io_in_bits_ctrl_rf_rfData(MEM_io_in_bits_ctrl_rf_rfData),
    .io_in_bits_ctrl_data_src1(MEM_io_in_bits_ctrl_data_src1),
    .io_in_bits_ctrl_data_src2(MEM_io_in_bits_ctrl_data_src2),
    .io_in_bits_ctrl_data_Imm(MEM_io_in_bits_ctrl_data_Imm),
    .io_out_valid(MEM_io_out_valid),
    .io_out_bits_ctrl_signal_inst_valid(MEM_io_out_bits_ctrl_signal_inst_valid),
    .io_out_bits_ctrl_signal_rfWen(MEM_io_out_bits_ctrl_signal_rfWen),
    .io_out_bits_ctrl_flow_PC(MEM_io_out_bits_ctrl_flow_PC),
    .io_out_bits_ctrl_flow_inst(MEM_io_out_bits_ctrl_flow_inst),
    .io_out_bits_ctrl_flow_Dnpc(MEM_io_out_bits_ctrl_flow_Dnpc),
    .io_out_bits_ctrl_flow_skip(MEM_io_out_bits_ctrl_flow_skip),
    .io_out_bits_ctrl_rf_rfDest(MEM_io_out_bits_ctrl_rf_rfDest),
    .io_out_bits_ctrl_rf_rfWen(MEM_io_out_bits_ctrl_rf_rfWen),
    .io_out_bits_ctrl_rf_rfData(MEM_io_out_bits_ctrl_rf_rfData),
    .io_mem_addr(MEM_io_mem_addr),
    .io_mem_rdata(MEM_io_mem_rdata),
    .io_mem_wdata(MEM_io_mem_wdata),
    .io_mem_wmask(MEM_io_mem_wmask),
    .io_mem_ce(MEM_io_mem_ce),
    .io_mem_we(MEM_io_mem_we)
  );
  WB WB ( // @[CoreTop.scala 68:18]
    .io_in_valid(WB_io_in_valid),
    .io_in_bits_ctrl_signal_inst_valid(WB_io_in_bits_ctrl_signal_inst_valid),
    .io_in_bits_ctrl_signal_rfWen(WB_io_in_bits_ctrl_signal_rfWen),
    .io_in_bits_ctrl_flow_PC(WB_io_in_bits_ctrl_flow_PC),
    .io_in_bits_ctrl_flow_inst(WB_io_in_bits_ctrl_flow_inst),
    .io_in_bits_ctrl_flow_Dnpc(WB_io_in_bits_ctrl_flow_Dnpc),
    .io_in_bits_ctrl_flow_skip(WB_io_in_bits_ctrl_flow_skip),
    .io_in_bits_ctrl_rf_rfDest(WB_io_in_bits_ctrl_rf_rfDest),
    .io_in_bits_ctrl_rf_rfData(WB_io_in_bits_ctrl_rf_rfData),
    .io_out_valid(WB_io_out_valid),
    .io_out_bits_ctrl_signal_inst_valid(WB_io_out_bits_ctrl_signal_inst_valid),
    .io_out_bits_ctrl_flow_PC(WB_io_out_bits_ctrl_flow_PC),
    .io_out_bits_ctrl_flow_inst(WB_io_out_bits_ctrl_flow_inst),
    .io_out_bits_ctrl_flow_Dnpc(WB_io_out_bits_ctrl_flow_Dnpc),
    .io_out_bits_ctrl_flow_skip(WB_io_out_bits_ctrl_flow_skip),
    .io_out_bits_ctrl_rf_rfDest(WB_io_out_bits_ctrl_rf_rfDest),
    .io_out_bits_ctrl_rf_rfWen(WB_io_out_bits_ctrl_rf_rfWen),
    .io_out_bits_ctrl_rf_rfData(WB_io_out_bits_ctrl_rf_rfData)
  );
  Bypass bypass ( // @[CoreTop.scala 70:22]
    .io_EX_rf_rfDest(bypass_io_EX_rf_rfDest),
    .io_EX_rf_rfWen(bypass_io_EX_rf_rfWen),
    .io_EX_rf_rfData(bypass_io_EX_rf_rfData),
    .io_MEM_rf_rfDest(bypass_io_MEM_rf_rfDest),
    .io_MEM_rf_rfWen(bypass_io_MEM_rf_rfWen),
    .io_MEM_rf_rfData(bypass_io_MEM_rf_rfData),
    .io_WB_rf_rfDest(bypass_io_WB_rf_rfDest),
    .io_WB_rf_rfWen(bypass_io_WB_rf_rfWen),
    .io_WB_rf_rfData(bypass_io_WB_rf_rfData),
    .io_Reg1(bypass_io_Reg1),
    .io_reg_index1(bypass_io_reg_index1),
    .io_Reg2(bypass_io_Reg2),
    .io_reg_index2(bypass_io_reg_index2),
    .io_Bypass_REG1(bypass_io_Bypass_REG1),
    .io_Bypass_REG2(bypass_io_Bypass_REG2)
  );
  MEM_Bypass mem_bypass ( // @[CoreTop.scala 72:25]
    .io_MEM_rf_rfDest(mem_bypass_io_MEM_rf_rfDest),
    .io_MEM_rf_rfWen(mem_bypass_io_MEM_rf_rfWen),
    .io_MEM_rf_rfData(mem_bypass_io_MEM_rf_rfData),
    .io_Reg1(mem_bypass_io_Reg1),
    .io_reg_index1(mem_bypass_io_reg_index1),
    .io_Reg2(mem_bypass_io_Reg2),
    .io_reg_index2(mem_bypass_io_reg_index2),
    .io_Bypass_REG1(mem_bypass_io_Bypass_REG1),
    .io_Bypass_REG2(mem_bypass_io_Bypass_REG2)
  );
  assign rf_bypass_io_Reg1_MPORT_en = 1'h1;
  assign rf_bypass_io_Reg1_MPORT_addr = ID_io_out_bits_ctrl_signal_rfSrc1;
  assign rf_bypass_io_Reg1_MPORT_data = rf[rf_bypass_io_Reg1_MPORT_addr]; // @[RF.scala 7:15]
  assign rf_bypass_io_Reg2_MPORT_en = 1'h1;
  assign rf_bypass_io_Reg2_MPORT_addr = ID_io_out_bits_ctrl_signal_rfSrc2;
  assign rf_bypass_io_Reg2_MPORT_data = rf[rf_bypass_io_Reg2_MPORT_addr]; // @[RF.scala 7:15]
  assign rf_DIP_io_rf_0_MPORT_en = 1'h1;
  assign rf_DIP_io_rf_0_MPORT_addr = 5'h0;
  assign rf_DIP_io_rf_0_MPORT_data = rf[rf_DIP_io_rf_0_MPORT_addr]; // @[RF.scala 7:15]
  assign rf_DIP_io_rf_1_MPORT_en = 1'h1;
  assign rf_DIP_io_rf_1_MPORT_addr = 5'h1;
  assign rf_DIP_io_rf_1_MPORT_data = rf[rf_DIP_io_rf_1_MPORT_addr]; // @[RF.scala 7:15]
  assign rf_DIP_io_rf_2_MPORT_en = 1'h1;
  assign rf_DIP_io_rf_2_MPORT_addr = 5'h2;
  assign rf_DIP_io_rf_2_MPORT_data = rf[rf_DIP_io_rf_2_MPORT_addr]; // @[RF.scala 7:15]
  assign rf_DIP_io_rf_3_MPORT_en = 1'h1;
  assign rf_DIP_io_rf_3_MPORT_addr = 5'h3;
  assign rf_DIP_io_rf_3_MPORT_data = rf[rf_DIP_io_rf_3_MPORT_addr]; // @[RF.scala 7:15]
  assign rf_DIP_io_rf_4_MPORT_en = 1'h1;
  assign rf_DIP_io_rf_4_MPORT_addr = 5'h4;
  assign rf_DIP_io_rf_4_MPORT_data = rf[rf_DIP_io_rf_4_MPORT_addr]; // @[RF.scala 7:15]
  assign rf_DIP_io_rf_5_MPORT_en = 1'h1;
  assign rf_DIP_io_rf_5_MPORT_addr = 5'h5;
  assign rf_DIP_io_rf_5_MPORT_data = rf[rf_DIP_io_rf_5_MPORT_addr]; // @[RF.scala 7:15]
  assign rf_DIP_io_rf_6_MPORT_en = 1'h1;
  assign rf_DIP_io_rf_6_MPORT_addr = 5'h6;
  assign rf_DIP_io_rf_6_MPORT_data = rf[rf_DIP_io_rf_6_MPORT_addr]; // @[RF.scala 7:15]
  assign rf_DIP_io_rf_7_MPORT_en = 1'h1;
  assign rf_DIP_io_rf_7_MPORT_addr = 5'h7;
  assign rf_DIP_io_rf_7_MPORT_data = rf[rf_DIP_io_rf_7_MPORT_addr]; // @[RF.scala 7:15]
  assign rf_DIP_io_rf_8_MPORT_en = 1'h1;
  assign rf_DIP_io_rf_8_MPORT_addr = 5'h8;
  assign rf_DIP_io_rf_8_MPORT_data = rf[rf_DIP_io_rf_8_MPORT_addr]; // @[RF.scala 7:15]
  assign rf_DIP_io_rf_9_MPORT_en = 1'h1;
  assign rf_DIP_io_rf_9_MPORT_addr = 5'h9;
  assign rf_DIP_io_rf_9_MPORT_data = rf[rf_DIP_io_rf_9_MPORT_addr]; // @[RF.scala 7:15]
  assign rf_DIP_io_rf_10_MPORT_en = 1'h1;
  assign rf_DIP_io_rf_10_MPORT_addr = 5'ha;
  assign rf_DIP_io_rf_10_MPORT_data = rf[rf_DIP_io_rf_10_MPORT_addr]; // @[RF.scala 7:15]
  assign rf_DIP_io_rf_11_MPORT_en = 1'h1;
  assign rf_DIP_io_rf_11_MPORT_addr = 5'hb;
  assign rf_DIP_io_rf_11_MPORT_data = rf[rf_DIP_io_rf_11_MPORT_addr]; // @[RF.scala 7:15]
  assign rf_DIP_io_rf_12_MPORT_en = 1'h1;
  assign rf_DIP_io_rf_12_MPORT_addr = 5'hc;
  assign rf_DIP_io_rf_12_MPORT_data = rf[rf_DIP_io_rf_12_MPORT_addr]; // @[RF.scala 7:15]
  assign rf_DIP_io_rf_13_MPORT_en = 1'h1;
  assign rf_DIP_io_rf_13_MPORT_addr = 5'hd;
  assign rf_DIP_io_rf_13_MPORT_data = rf[rf_DIP_io_rf_13_MPORT_addr]; // @[RF.scala 7:15]
  assign rf_DIP_io_rf_14_MPORT_en = 1'h1;
  assign rf_DIP_io_rf_14_MPORT_addr = 5'he;
  assign rf_DIP_io_rf_14_MPORT_data = rf[rf_DIP_io_rf_14_MPORT_addr]; // @[RF.scala 7:15]
  assign rf_DIP_io_rf_15_MPORT_en = 1'h1;
  assign rf_DIP_io_rf_15_MPORT_addr = 5'hf;
  assign rf_DIP_io_rf_15_MPORT_data = rf[rf_DIP_io_rf_15_MPORT_addr]; // @[RF.scala 7:15]
  assign rf_DIP_io_rf_16_MPORT_en = 1'h1;
  assign rf_DIP_io_rf_16_MPORT_addr = 5'h10;
  assign rf_DIP_io_rf_16_MPORT_data = rf[rf_DIP_io_rf_16_MPORT_addr]; // @[RF.scala 7:15]
  assign rf_DIP_io_rf_17_MPORT_en = 1'h1;
  assign rf_DIP_io_rf_17_MPORT_addr = 5'h11;
  assign rf_DIP_io_rf_17_MPORT_data = rf[rf_DIP_io_rf_17_MPORT_addr]; // @[RF.scala 7:15]
  assign rf_DIP_io_rf_18_MPORT_en = 1'h1;
  assign rf_DIP_io_rf_18_MPORT_addr = 5'h12;
  assign rf_DIP_io_rf_18_MPORT_data = rf[rf_DIP_io_rf_18_MPORT_addr]; // @[RF.scala 7:15]
  assign rf_DIP_io_rf_19_MPORT_en = 1'h1;
  assign rf_DIP_io_rf_19_MPORT_addr = 5'h13;
  assign rf_DIP_io_rf_19_MPORT_data = rf[rf_DIP_io_rf_19_MPORT_addr]; // @[RF.scala 7:15]
  assign rf_DIP_io_rf_20_MPORT_en = 1'h1;
  assign rf_DIP_io_rf_20_MPORT_addr = 5'h14;
  assign rf_DIP_io_rf_20_MPORT_data = rf[rf_DIP_io_rf_20_MPORT_addr]; // @[RF.scala 7:15]
  assign rf_DIP_io_rf_21_MPORT_en = 1'h1;
  assign rf_DIP_io_rf_21_MPORT_addr = 5'h15;
  assign rf_DIP_io_rf_21_MPORT_data = rf[rf_DIP_io_rf_21_MPORT_addr]; // @[RF.scala 7:15]
  assign rf_DIP_io_rf_22_MPORT_en = 1'h1;
  assign rf_DIP_io_rf_22_MPORT_addr = 5'h16;
  assign rf_DIP_io_rf_22_MPORT_data = rf[rf_DIP_io_rf_22_MPORT_addr]; // @[RF.scala 7:15]
  assign rf_DIP_io_rf_23_MPORT_en = 1'h1;
  assign rf_DIP_io_rf_23_MPORT_addr = 5'h17;
  assign rf_DIP_io_rf_23_MPORT_data = rf[rf_DIP_io_rf_23_MPORT_addr]; // @[RF.scala 7:15]
  assign rf_DIP_io_rf_24_MPORT_en = 1'h1;
  assign rf_DIP_io_rf_24_MPORT_addr = 5'h18;
  assign rf_DIP_io_rf_24_MPORT_data = rf[rf_DIP_io_rf_24_MPORT_addr]; // @[RF.scala 7:15]
  assign rf_DIP_io_rf_25_MPORT_en = 1'h1;
  assign rf_DIP_io_rf_25_MPORT_addr = 5'h19;
  assign rf_DIP_io_rf_25_MPORT_data = rf[rf_DIP_io_rf_25_MPORT_addr]; // @[RF.scala 7:15]
  assign rf_DIP_io_rf_26_MPORT_en = 1'h1;
  assign rf_DIP_io_rf_26_MPORT_addr = 5'h1a;
  assign rf_DIP_io_rf_26_MPORT_data = rf[rf_DIP_io_rf_26_MPORT_addr]; // @[RF.scala 7:15]
  assign rf_DIP_io_rf_27_MPORT_en = 1'h1;
  assign rf_DIP_io_rf_27_MPORT_addr = 5'h1b;
  assign rf_DIP_io_rf_27_MPORT_data = rf[rf_DIP_io_rf_27_MPORT_addr]; // @[RF.scala 7:15]
  assign rf_DIP_io_rf_28_MPORT_en = 1'h1;
  assign rf_DIP_io_rf_28_MPORT_addr = 5'h1c;
  assign rf_DIP_io_rf_28_MPORT_data = rf[rf_DIP_io_rf_28_MPORT_addr]; // @[RF.scala 7:15]
  assign rf_DIP_io_rf_29_MPORT_en = 1'h1;
  assign rf_DIP_io_rf_29_MPORT_addr = 5'h1d;
  assign rf_DIP_io_rf_29_MPORT_data = rf[rf_DIP_io_rf_29_MPORT_addr]; // @[RF.scala 7:15]
  assign rf_DIP_io_rf_30_MPORT_en = 1'h1;
  assign rf_DIP_io_rf_30_MPORT_addr = 5'h1e;
  assign rf_DIP_io_rf_30_MPORT_data = rf[rf_DIP_io_rf_30_MPORT_addr]; // @[RF.scala 7:15]
  assign rf_DIP_io_rf_31_MPORT_en = 1'h1;
  assign rf_DIP_io_rf_31_MPORT_addr = 5'h1f;
  assign rf_DIP_io_rf_31_MPORT_data = rf[rf_DIP_io_rf_31_MPORT_addr]; // @[RF.scala 7:15]
  assign rf_MPORT_data = _T_17 ? 64'h0 : _T_18;
  assign rf_MPORT_addr = WB_io_out_bits_ctrl_rf_rfDest;
  assign rf_MPORT_mask = 1'h1;
  assign rf_MPORT_en = WB_io_out_bits_ctrl_rf_rfWen;
  assign io_pc = IF_io_out_bits_PC; // @[CoreTop.scala 144:9]
  assign io_inst = WB_io_out_bits_ctrl_flow_inst; // @[CoreTop.scala 143:11]
  assign IF_clock = clock;
  assign IF_reset = reset;
  assign IF_io_branch_io_is_branch = EX_io_branchIO_is_branch; // @[CoreTop.scala 98:19]
  assign IF_io_branch_io_is_jump = EX_io_branchIO_is_jump; // @[CoreTop.scala 98:19]
  assign IF_io_branch_io_dnpc = EX_io_branchIO_dnpc; // @[CoreTop.scala 98:19]
  assign IF_io_inst = IFM_inst; // @[CoreTop.scala 85:14]
  assign IFM_reset = reset; // @[CoreTop.scala 86:16]
  assign IFM_clk = clock; // @[CoreTop.scala 87:14]
  assign IFM_pc = IF_io_out_bits_PC; // @[CoreTop.scala 84:13]
  assign ID_io_in_valid = valid; // @[Pipline.scala 24:17]
  assign ID_io_in_bits_PC = ID_io_in_bits_r_PC; // @[Pipline.scala 23:16]
  assign ID_io_in_bits_Inst = ID_io_in_bits_r_Inst; // @[Pipline.scala 23:16]
  assign ID_io_REG1 = bypass_io_Bypass_REG1; // @[CoreTop.scala 91:14]
  assign ID_io_REG2 = bypass_io_Bypass_REG2; // @[CoreTop.scala 92:14]
  assign EX_clock = clock;
  assign EX_reset = reset;
  assign EX_io_in_valid = valid_1; // @[Pipline.scala 24:17]
  assign EX_io_in_bits_ctrl_signal_src1Type = EX_io_in_bits_r_ctrl_signal_src1Type; // @[Pipline.scala 23:16]
  assign EX_io_in_bits_ctrl_signal_src2Type = EX_io_in_bits_r_ctrl_signal_src2Type; // @[Pipline.scala 23:16]
  assign EX_io_in_bits_ctrl_signal_fuType = EX_io_in_bits_r_ctrl_signal_fuType; // @[Pipline.scala 23:16]
  assign EX_io_in_bits_ctrl_signal_inst_valid = EX_io_in_bits_r_ctrl_signal_inst_valid; // @[Pipline.scala 23:16]
  assign EX_io_in_bits_ctrl_signal_rfSrc1 = EX_io_in_bits_r_ctrl_signal_rfSrc1; // @[Pipline.scala 23:16]
  assign EX_io_in_bits_ctrl_signal_rfSrc2 = EX_io_in_bits_r_ctrl_signal_rfSrc2; // @[Pipline.scala 23:16]
  assign EX_io_in_bits_ctrl_signal_rfWen = EX_io_in_bits_r_ctrl_signal_rfWen; // @[Pipline.scala 23:16]
  assign EX_io_in_bits_ctrl_signal_aluoptype = EX_io_in_bits_r_ctrl_signal_aluoptype; // @[Pipline.scala 23:16]
  assign EX_io_in_bits_ctrl_signal_rfDest = EX_io_in_bits_r_ctrl_signal_rfDest; // @[Pipline.scala 23:16]
  assign EX_io_in_bits_ctrl_data_src1 = EX_io_in_bits_r_ctrl_data_src1; // @[Pipline.scala 23:16]
  assign EX_io_in_bits_ctrl_data_src2 = EX_io_in_bits_r_ctrl_data_src2; // @[Pipline.scala 23:16]
  assign EX_io_in_bits_ctrl_data_Imm = EX_io_in_bits_r_ctrl_data_Imm; // @[Pipline.scala 23:16]
  assign EX_io_in_bits_ctrl_flow_PC = EX_io_in_bits_r_ctrl_flow_PC; // @[Pipline.scala 23:16]
  assign EX_io_in_bits_ctrl_flow_inst = EX_io_in_bits_r_ctrl_flow_inst; // @[Pipline.scala 23:16]
  assign EX_io_src1 = mem_bypass_io_Bypass_REG1; // @[CoreTop.scala 106:14]
  assign EX_io_src2 = mem_bypass_io_Bypass_REG2; // @[CoreTop.scala 107:14]
  assign DIP_is_break = EX_io_is_break; // @[CoreTop.scala 134:19]
  assign DIP_rf_0 = rf_DIP_io_rf_0_MPORT_data; // @[CoreTop.scala 136:18]
  assign DIP_rf_1 = rf_DIP_io_rf_1_MPORT_data; // @[CoreTop.scala 136:18]
  assign DIP_rf_2 = rf_DIP_io_rf_2_MPORT_data; // @[CoreTop.scala 136:18]
  assign DIP_rf_3 = rf_DIP_io_rf_3_MPORT_data; // @[CoreTop.scala 136:18]
  assign DIP_rf_4 = rf_DIP_io_rf_4_MPORT_data; // @[CoreTop.scala 136:18]
  assign DIP_rf_5 = rf_DIP_io_rf_5_MPORT_data; // @[CoreTop.scala 136:18]
  assign DIP_rf_6 = rf_DIP_io_rf_6_MPORT_data; // @[CoreTop.scala 136:18]
  assign DIP_rf_7 = rf_DIP_io_rf_7_MPORT_data; // @[CoreTop.scala 136:18]
  assign DIP_rf_8 = rf_DIP_io_rf_8_MPORT_data; // @[CoreTop.scala 136:18]
  assign DIP_rf_9 = rf_DIP_io_rf_9_MPORT_data; // @[CoreTop.scala 136:18]
  assign DIP_rf_10 = rf_DIP_io_rf_10_MPORT_data; // @[CoreTop.scala 136:18]
  assign DIP_rf_11 = rf_DIP_io_rf_11_MPORT_data; // @[CoreTop.scala 136:18]
  assign DIP_rf_12 = rf_DIP_io_rf_12_MPORT_data; // @[CoreTop.scala 136:18]
  assign DIP_rf_13 = rf_DIP_io_rf_13_MPORT_data; // @[CoreTop.scala 136:18]
  assign DIP_rf_14 = rf_DIP_io_rf_14_MPORT_data; // @[CoreTop.scala 136:18]
  assign DIP_rf_15 = rf_DIP_io_rf_15_MPORT_data; // @[CoreTop.scala 136:18]
  assign DIP_rf_16 = rf_DIP_io_rf_16_MPORT_data; // @[CoreTop.scala 136:18]
  assign DIP_rf_17 = rf_DIP_io_rf_17_MPORT_data; // @[CoreTop.scala 136:18]
  assign DIP_rf_18 = rf_DIP_io_rf_18_MPORT_data; // @[CoreTop.scala 136:18]
  assign DIP_rf_19 = rf_DIP_io_rf_19_MPORT_data; // @[CoreTop.scala 136:18]
  assign DIP_rf_20 = rf_DIP_io_rf_20_MPORT_data; // @[CoreTop.scala 136:18]
  assign DIP_rf_21 = rf_DIP_io_rf_21_MPORT_data; // @[CoreTop.scala 136:18]
  assign DIP_rf_22 = rf_DIP_io_rf_22_MPORT_data; // @[CoreTop.scala 136:18]
  assign DIP_rf_23 = rf_DIP_io_rf_23_MPORT_data; // @[CoreTop.scala 136:18]
  assign DIP_rf_24 = rf_DIP_io_rf_24_MPORT_data; // @[CoreTop.scala 136:18]
  assign DIP_rf_25 = rf_DIP_io_rf_25_MPORT_data; // @[CoreTop.scala 136:18]
  assign DIP_rf_26 = rf_DIP_io_rf_26_MPORT_data; // @[CoreTop.scala 136:18]
  assign DIP_rf_27 = rf_DIP_io_rf_27_MPORT_data; // @[CoreTop.scala 136:18]
  assign DIP_rf_28 = rf_DIP_io_rf_28_MPORT_data; // @[CoreTop.scala 136:18]
  assign DIP_rf_29 = rf_DIP_io_rf_29_MPORT_data; // @[CoreTop.scala 136:18]
  assign DIP_rf_30 = rf_DIP_io_rf_30_MPORT_data; // @[CoreTop.scala 136:18]
  assign DIP_rf_31 = rf_DIP_io_rf_31_MPORT_data; // @[CoreTop.scala 136:18]
  assign DIP_inst = DIP_io_inst_REG; // @[CoreTop.scala 138:15]
  assign DIP_pc = DIP_io_pc_REG; // @[CoreTop.scala 141:13]
  assign DIP_inst_valid = DIP_io_inst_valid_REG; // @[CoreTop.scala 140:21]
  assign DIP_dnpc = DIP_io_dnpc_REG; // @[CoreTop.scala 142:15]
  assign DIP_is_skip = DIP_io_is_skip_REG; // @[CoreTop.scala 139:18]
  assign mem_addr = MEM_io_mem_addr; // @[CoreTop.scala 114:15]
  assign mem_reset = reset; // @[CoreTop.scala 119:16]
  assign mem_clk = clock; // @[CoreTop.scala 118:14]
  assign mem_we = MEM_io_mem_we; // @[CoreTop.scala 117:13]
  assign mem_ce = MEM_io_mem_ce; // @[CoreTop.scala 116:13]
  assign mem_wdata = MEM_io_mem_wdata; // @[CoreTop.scala 113:16]
  assign mem_wmask = MEM_io_mem_wmask; // @[CoreTop.scala 115:16]
  assign MEM_io_in_valid = valid_2; // @[Pipline.scala 24:17]
  assign MEM_io_in_bits_ctrl_signal_fuType = MEM_io_in_bits_r_ctrl_signal_fuType; // @[Pipline.scala 23:16]
  assign MEM_io_in_bits_ctrl_signal_inst_valid = MEM_io_in_bits_r_ctrl_signal_inst_valid; // @[Pipline.scala 23:16]
  assign MEM_io_in_bits_ctrl_signal_rfWen = MEM_io_in_bits_r_ctrl_signal_rfWen; // @[Pipline.scala 23:16]
  assign MEM_io_in_bits_ctrl_signal_aluoptype = MEM_io_in_bits_r_ctrl_signal_aluoptype; // @[Pipline.scala 23:16]
  assign MEM_io_in_bits_ctrl_flow_PC = MEM_io_in_bits_r_ctrl_flow_PC; // @[Pipline.scala 23:16]
  assign MEM_io_in_bits_ctrl_flow_inst = MEM_io_in_bits_r_ctrl_flow_inst; // @[Pipline.scala 23:16]
  assign MEM_io_in_bits_ctrl_flow_Dnpc = MEM_io_in_bits_r_ctrl_flow_Dnpc; // @[Pipline.scala 23:16]
  assign MEM_io_in_bits_ctrl_rf_rfDest = MEM_io_in_bits_r_ctrl_rf_rfDest; // @[Pipline.scala 23:16]
  assign MEM_io_in_bits_ctrl_rf_rfData = MEM_io_in_bits_r_ctrl_rf_rfData; // @[Pipline.scala 23:16]
  assign MEM_io_in_bits_ctrl_data_src1 = MEM_io_in_bits_r_ctrl_data_src1; // @[Pipline.scala 23:16]
  assign MEM_io_in_bits_ctrl_data_src2 = MEM_io_in_bits_r_ctrl_data_src2; // @[Pipline.scala 23:16]
  assign MEM_io_in_bits_ctrl_data_Imm = MEM_io_in_bits_r_ctrl_data_Imm; // @[Pipline.scala 23:16]
  assign MEM_io_mem_rdata = mem_rdata; // @[CoreTop.scala 112:20]
  assign WB_io_in_valid = valid_3; // @[Pipline.scala 24:17]
  assign WB_io_in_bits_ctrl_signal_inst_valid = WB_io_in_bits_r_ctrl_signal_inst_valid; // @[Pipline.scala 23:16]
  assign WB_io_in_bits_ctrl_signal_rfWen = WB_io_in_bits_r_ctrl_signal_rfWen; // @[Pipline.scala 23:16]
  assign WB_io_in_bits_ctrl_flow_PC = WB_io_in_bits_r_ctrl_flow_PC; // @[Pipline.scala 23:16]
  assign WB_io_in_bits_ctrl_flow_inst = WB_io_in_bits_r_ctrl_flow_inst; // @[Pipline.scala 23:16]
  assign WB_io_in_bits_ctrl_flow_Dnpc = WB_io_in_bits_r_ctrl_flow_Dnpc; // @[Pipline.scala 23:16]
  assign WB_io_in_bits_ctrl_flow_skip = WB_io_in_bits_r_ctrl_flow_skip; // @[Pipline.scala 23:16]
  assign WB_io_in_bits_ctrl_rf_rfDest = WB_io_in_bits_r_ctrl_rf_rfDest; // @[Pipline.scala 23:16]
  assign WB_io_in_bits_ctrl_rf_rfData = WB_io_in_bits_r_ctrl_rf_rfData; // @[Pipline.scala 23:16]
  assign bypass_io_EX_rf_rfDest = EX_io_out_bits_ctrl_rf_rfDest; // @[CoreTop.scala 99:19]
  assign bypass_io_EX_rf_rfWen = EX_io_out_bits_ctrl_rf_rfWen; // @[CoreTop.scala 99:19]
  assign bypass_io_EX_rf_rfData = EX_io_out_bits_ctrl_rf_rfData; // @[CoreTop.scala 99:19]
  assign bypass_io_MEM_rf_rfDest = MEM_io_out_bits_ctrl_rf_rfDest; // @[CoreTop.scala 120:20]
  assign bypass_io_MEM_rf_rfWen = MEM_io_out_bits_ctrl_rf_rfWen; // @[CoreTop.scala 120:20]
  assign bypass_io_MEM_rf_rfData = MEM_io_out_bits_ctrl_rf_rfData; // @[CoreTop.scala 120:20]
  assign bypass_io_WB_rf_rfDest = WB_io_out_bits_ctrl_rf_rfDest; // @[CoreTop.scala 131:19]
  assign bypass_io_WB_rf_rfWen = WB_io_out_bits_ctrl_rf_rfWen; // @[CoreTop.scala 131:19]
  assign bypass_io_WB_rf_rfData = WB_io_out_bits_ctrl_rf_rfData; // @[CoreTop.scala 131:19]
  assign bypass_io_Reg1 = ID_io_out_bits_ctrl_signal_rfSrc1 == 5'h0 ? 64'h0 : rf_bypass_io_Reg1_MPORT_data; // @[RF.scala 8:37]
  assign bypass_io_reg_index1 = ID_io_out_bits_ctrl_signal_rfSrc1; // @[CoreTop.scala 79:24]
  assign bypass_io_Reg2 = ID_io_out_bits_ctrl_signal_rfSrc2 == 5'h0 ? 64'h0 : rf_bypass_io_Reg2_MPORT_data; // @[RF.scala 8:37]
  assign bypass_io_reg_index2 = ID_io_out_bits_ctrl_signal_rfSrc2; // @[CoreTop.scala 80:24]
  assign mem_bypass_io_MEM_rf_rfDest = MEM_io_out_bits_ctrl_rf_rfDest; // @[CoreTop.scala 122:24]
  assign mem_bypass_io_MEM_rf_rfWen = MEM_io_out_bits_ctrl_rf_rfWen; // @[CoreTop.scala 122:24]
  assign mem_bypass_io_MEM_rf_rfData = MEM_io_out_bits_ctrl_rf_rfData; // @[CoreTop.scala 122:24]
  assign mem_bypass_io_Reg1 = EX_io_in_bits_ctrl_data_src1; // @[CoreTop.scala 101:22]
  assign mem_bypass_io_reg_index1 = EX_io_in_bits_ctrl_signal_rfSrc1; // @[CoreTop.scala 103:28]
  assign mem_bypass_io_Reg2 = EX_io_in_bits_ctrl_data_src2; // @[CoreTop.scala 102:22]
  assign mem_bypass_io_reg_index2 = EX_io_in_bits_ctrl_signal_rfSrc2; // @[CoreTop.scala 104:28]
  always @(posedge clock) begin
    if (rf_MPORT_en & rf_MPORT_mask) begin
      rf[rf_MPORT_addr] <= rf_MPORT_data; // @[RF.scala 7:15]
    end
    if (reset) begin // @[Pipline.scala 8:24]
      valid <= 1'h0; // @[Pipline.scala 8:24]
    end else if (EX_io_is_flush) begin // @[Pipline.scala 18:25]
      valid <= 1'h0; // @[Pipline.scala 19:13]
    end else begin
      valid <= 1'h1;
    end
    ID_io_in_bits_r_PC <= IF_io_out_bits_PC; // @[Reg.scala 16:16 17:{18,22}]
    ID_io_in_bits_r_Inst <= IF_io_out_bits_Inst; // @[Reg.scala 16:16 17:{18,22}]
    if (reset) begin // @[Pipline.scala 8:24]
      valid_1 <= 1'h0; // @[Pipline.scala 8:24]
    end else if (EX_io_is_flush) begin // @[Pipline.scala 18:25]
      valid_1 <= 1'h0; // @[Pipline.scala 19:13]
    end else begin
      valid_1 <= _T_6;
    end
    if (_T_6) begin // @[Reg.scala 17:18]
      EX_io_in_bits_r_ctrl_signal_src1Type <= ID_io_out_bits_ctrl_signal_src1Type; // @[Reg.scala 17:22]
    end
    if (_T_6) begin // @[Reg.scala 17:18]
      EX_io_in_bits_r_ctrl_signal_src2Type <= ID_io_out_bits_ctrl_signal_src2Type; // @[Reg.scala 17:22]
    end
    if (_T_6) begin // @[Reg.scala 17:18]
      EX_io_in_bits_r_ctrl_signal_fuType <= ID_io_out_bits_ctrl_signal_fuType; // @[Reg.scala 17:22]
    end
    if (_T_6) begin // @[Reg.scala 17:18]
      EX_io_in_bits_r_ctrl_signal_inst_valid <= ID_io_out_bits_ctrl_signal_inst_valid; // @[Reg.scala 17:22]
    end
    if (_T_6) begin // @[Reg.scala 17:18]
      EX_io_in_bits_r_ctrl_signal_rfSrc1 <= ID_io_out_bits_ctrl_signal_rfSrc1; // @[Reg.scala 17:22]
    end
    if (_T_6) begin // @[Reg.scala 17:18]
      EX_io_in_bits_r_ctrl_signal_rfSrc2 <= ID_io_out_bits_ctrl_signal_rfSrc2; // @[Reg.scala 17:22]
    end
    if (_T_6) begin // @[Reg.scala 17:18]
      EX_io_in_bits_r_ctrl_signal_rfWen <= ID_io_out_bits_ctrl_signal_rfWen; // @[Reg.scala 17:22]
    end
    if (_T_6) begin // @[Reg.scala 17:18]
      EX_io_in_bits_r_ctrl_signal_aluoptype <= ID_io_out_bits_ctrl_signal_aluoptype; // @[Reg.scala 17:22]
    end
    if (_T_6) begin // @[Reg.scala 17:18]
      EX_io_in_bits_r_ctrl_signal_rfDest <= ID_io_out_bits_ctrl_signal_rfDest; // @[Reg.scala 17:22]
    end
    if (_T_6) begin // @[Reg.scala 17:18]
      EX_io_in_bits_r_ctrl_data_src1 <= ID_io_out_bits_ctrl_data_src1; // @[Reg.scala 17:22]
    end
    if (_T_6) begin // @[Reg.scala 17:18]
      EX_io_in_bits_r_ctrl_data_src2 <= ID_io_out_bits_ctrl_data_src2; // @[Reg.scala 17:22]
    end
    if (_T_6) begin // @[Reg.scala 17:18]
      EX_io_in_bits_r_ctrl_data_Imm <= ID_io_out_bits_ctrl_data_Imm; // @[Reg.scala 17:22]
    end
    if (_T_6) begin // @[Reg.scala 17:18]
      EX_io_in_bits_r_ctrl_flow_PC <= ID_io_out_bits_ctrl_flow_PC; // @[Reg.scala 17:22]
    end
    if (_T_6) begin // @[Reg.scala 17:18]
      EX_io_in_bits_r_ctrl_flow_inst <= ID_io_out_bits_ctrl_flow_inst; // @[Reg.scala 17:22]
    end
    if (reset) begin // @[Pipline.scala 8:24]
      valid_2 <= 1'h0; // @[Pipline.scala 8:24]
    end else begin
      valid_2 <= _T_10;
    end
    if (_T_10) begin // @[Reg.scala 17:18]
      MEM_io_in_bits_r_ctrl_signal_fuType <= EX_io_out_bits_ctrl_signal_fuType; // @[Reg.scala 17:22]
    end
    if (_T_10) begin // @[Reg.scala 17:18]
      MEM_io_in_bits_r_ctrl_signal_inst_valid <= EX_io_out_bits_ctrl_signal_inst_valid; // @[Reg.scala 17:22]
    end
    if (_T_10) begin // @[Reg.scala 17:18]
      MEM_io_in_bits_r_ctrl_signal_rfWen <= EX_io_out_bits_ctrl_signal_rfWen; // @[Reg.scala 17:22]
    end
    if (_T_10) begin // @[Reg.scala 17:18]
      MEM_io_in_bits_r_ctrl_signal_aluoptype <= EX_io_out_bits_ctrl_signal_aluoptype; // @[Reg.scala 17:22]
    end
    if (_T_10) begin // @[Reg.scala 17:18]
      MEM_io_in_bits_r_ctrl_flow_PC <= EX_io_out_bits_ctrl_flow_PC; // @[Reg.scala 17:22]
    end
    if (_T_10) begin // @[Reg.scala 17:18]
      MEM_io_in_bits_r_ctrl_flow_inst <= EX_io_out_bits_ctrl_flow_inst; // @[Reg.scala 17:22]
    end
    if (_T_10) begin // @[Reg.scala 17:18]
      MEM_io_in_bits_r_ctrl_flow_Dnpc <= EX_io_out_bits_ctrl_flow_Dnpc; // @[Reg.scala 17:22]
    end
    if (_T_10) begin // @[Reg.scala 17:18]
      MEM_io_in_bits_r_ctrl_rf_rfDest <= EX_io_out_bits_ctrl_rf_rfDest; // @[Reg.scala 17:22]
    end
    if (_T_10) begin // @[Reg.scala 17:18]
      MEM_io_in_bits_r_ctrl_rf_rfData <= EX_io_out_bits_ctrl_rf_rfData; // @[Reg.scala 17:22]
    end
    if (_T_10) begin // @[Reg.scala 17:18]
      MEM_io_in_bits_r_ctrl_data_src1 <= EX_io_out_bits_ctrl_data_src1; // @[Reg.scala 17:22]
    end
    if (_T_10) begin // @[Reg.scala 17:18]
      MEM_io_in_bits_r_ctrl_data_src2 <= EX_io_out_bits_ctrl_data_src2; // @[Reg.scala 17:22]
    end
    if (_T_10) begin // @[Reg.scala 17:18]
      MEM_io_in_bits_r_ctrl_data_Imm <= EX_io_out_bits_ctrl_data_Imm; // @[Reg.scala 17:22]
    end
    if (reset) begin // @[Pipline.scala 8:24]
      valid_3 <= 1'h0; // @[Pipline.scala 8:24]
    end else begin
      valid_3 <= _T_14;
    end
    if (_T_14) begin // @[Reg.scala 17:18]
      WB_io_in_bits_r_ctrl_signal_inst_valid <= MEM_io_out_bits_ctrl_signal_inst_valid; // @[Reg.scala 17:22]
    end
    if (_T_14) begin // @[Reg.scala 17:18]
      WB_io_in_bits_r_ctrl_signal_rfWen <= MEM_io_out_bits_ctrl_signal_rfWen; // @[Reg.scala 17:22]
    end
    if (_T_14) begin // @[Reg.scala 17:18]
      WB_io_in_bits_r_ctrl_flow_PC <= MEM_io_out_bits_ctrl_flow_PC; // @[Reg.scala 17:22]
    end
    if (_T_14) begin // @[Reg.scala 17:18]
      WB_io_in_bits_r_ctrl_flow_inst <= MEM_io_out_bits_ctrl_flow_inst; // @[Reg.scala 17:22]
    end
    if (_T_14) begin // @[Reg.scala 17:18]
      WB_io_in_bits_r_ctrl_flow_Dnpc <= MEM_io_out_bits_ctrl_flow_Dnpc; // @[Reg.scala 17:22]
    end
    if (_T_14) begin // @[Reg.scala 17:18]
      WB_io_in_bits_r_ctrl_flow_skip <= MEM_io_out_bits_ctrl_flow_skip; // @[Reg.scala 17:22]
    end
    if (_T_14) begin // @[Reg.scala 17:18]
      WB_io_in_bits_r_ctrl_rf_rfDest <= MEM_io_out_bits_ctrl_rf_rfDest; // @[Reg.scala 17:22]
    end
    if (_T_14) begin // @[Reg.scala 17:18]
      WB_io_in_bits_r_ctrl_rf_rfData <= MEM_io_out_bits_ctrl_rf_rfData; // @[Reg.scala 17:22]
    end
    DIP_io_inst_REG <= WB_io_out_bits_ctrl_flow_inst; // @[CoreTop.scala 138:25]
    DIP_io_is_skip_REG <= WB_io_out_bits_ctrl_flow_skip; // @[CoreTop.scala 139:28]
    DIP_io_inst_valid_REG <= WB_io_out_valid & WB_io_out_bits_ctrl_signal_inst_valid; // @[CoreTop.scala 140:35]
    DIP_io_pc_REG <= WB_io_out_bits_ctrl_flow_PC; // @[CoreTop.scala 141:23]
    DIP_io_dnpc_REG <= WB_io_out_bits_ctrl_flow_Dnpc; // @[CoreTop.scala 142:25]
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
`ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  valid = _RAND_1[0:0];
  _RAND_2 = {2{`RANDOM}};
  ID_io_in_bits_r_PC = _RAND_2[63:0];
  _RAND_3 = {1{`RANDOM}};
  ID_io_in_bits_r_Inst = _RAND_3[31:0];
  _RAND_4 = {1{`RANDOM}};
  valid_1 = _RAND_4[0:0];
  _RAND_5 = {1{`RANDOM}};
  EX_io_in_bits_r_ctrl_signal_src1Type = _RAND_5[2:0];
  _RAND_6 = {1{`RANDOM}};
  EX_io_in_bits_r_ctrl_signal_src2Type = _RAND_6[2:0];
  _RAND_7 = {1{`RANDOM}};
  EX_io_in_bits_r_ctrl_signal_fuType = _RAND_7[2:0];
  _RAND_8 = {1{`RANDOM}};
  EX_io_in_bits_r_ctrl_signal_inst_valid = _RAND_8[0:0];
  _RAND_9 = {1{`RANDOM}};
  EX_io_in_bits_r_ctrl_signal_rfSrc1 = _RAND_9[4:0];
  _RAND_10 = {1{`RANDOM}};
  EX_io_in_bits_r_ctrl_signal_rfSrc2 = _RAND_10[4:0];
  _RAND_11 = {1{`RANDOM}};
  EX_io_in_bits_r_ctrl_signal_rfWen = _RAND_11[0:0];
  _RAND_12 = {1{`RANDOM}};
  EX_io_in_bits_r_ctrl_signal_aluoptype = _RAND_12[6:0];
  _RAND_13 = {1{`RANDOM}};
  EX_io_in_bits_r_ctrl_signal_rfDest = _RAND_13[4:0];
  _RAND_14 = {2{`RANDOM}};
  EX_io_in_bits_r_ctrl_data_src1 = _RAND_14[63:0];
  _RAND_15 = {2{`RANDOM}};
  EX_io_in_bits_r_ctrl_data_src2 = _RAND_15[63:0];
  _RAND_16 = {2{`RANDOM}};
  EX_io_in_bits_r_ctrl_data_Imm = _RAND_16[63:0];
  _RAND_17 = {2{`RANDOM}};
  EX_io_in_bits_r_ctrl_flow_PC = _RAND_17[63:0];
  _RAND_18 = {1{`RANDOM}};
  EX_io_in_bits_r_ctrl_flow_inst = _RAND_18[31:0];
  _RAND_19 = {1{`RANDOM}};
  valid_2 = _RAND_19[0:0];
  _RAND_20 = {1{`RANDOM}};
  MEM_io_in_bits_r_ctrl_signal_fuType = _RAND_20[2:0];
  _RAND_21 = {1{`RANDOM}};
  MEM_io_in_bits_r_ctrl_signal_inst_valid = _RAND_21[0:0];
  _RAND_22 = {1{`RANDOM}};
  MEM_io_in_bits_r_ctrl_signal_rfWen = _RAND_22[0:0];
  _RAND_23 = {1{`RANDOM}};
  MEM_io_in_bits_r_ctrl_signal_aluoptype = _RAND_23[6:0];
  _RAND_24 = {2{`RANDOM}};
  MEM_io_in_bits_r_ctrl_flow_PC = _RAND_24[63:0];
  _RAND_25 = {1{`RANDOM}};
  MEM_io_in_bits_r_ctrl_flow_inst = _RAND_25[31:0];
  _RAND_26 = {2{`RANDOM}};
  MEM_io_in_bits_r_ctrl_flow_Dnpc = _RAND_26[63:0];
  _RAND_27 = {1{`RANDOM}};
  MEM_io_in_bits_r_ctrl_rf_rfDest = _RAND_27[4:0];
  _RAND_28 = {2{`RANDOM}};
  MEM_io_in_bits_r_ctrl_rf_rfData = _RAND_28[63:0];
  _RAND_29 = {2{`RANDOM}};
  MEM_io_in_bits_r_ctrl_data_src1 = _RAND_29[63:0];
  _RAND_30 = {2{`RANDOM}};
  MEM_io_in_bits_r_ctrl_data_src2 = _RAND_30[63:0];
  _RAND_31 = {2{`RANDOM}};
  MEM_io_in_bits_r_ctrl_data_Imm = _RAND_31[63:0];
  _RAND_32 = {1{`RANDOM}};
  valid_3 = _RAND_32[0:0];
  _RAND_33 = {1{`RANDOM}};
  WB_io_in_bits_r_ctrl_signal_inst_valid = _RAND_33[0:0];
  _RAND_34 = {1{`RANDOM}};
  WB_io_in_bits_r_ctrl_signal_rfWen = _RAND_34[0:0];
  _RAND_35 = {2{`RANDOM}};
  WB_io_in_bits_r_ctrl_flow_PC = _RAND_35[63:0];
  _RAND_36 = {1{`RANDOM}};
  WB_io_in_bits_r_ctrl_flow_inst = _RAND_36[31:0];
  _RAND_37 = {2{`RANDOM}};
  WB_io_in_bits_r_ctrl_flow_Dnpc = _RAND_37[63:0];
  _RAND_38 = {1{`RANDOM}};
  WB_io_in_bits_r_ctrl_flow_skip = _RAND_38[0:0];
  _RAND_39 = {1{`RANDOM}};
  WB_io_in_bits_r_ctrl_rf_rfDest = _RAND_39[4:0];
  _RAND_40 = {2{`RANDOM}};
  WB_io_in_bits_r_ctrl_rf_rfData = _RAND_40[63:0];
  _RAND_41 = {1{`RANDOM}};
  DIP_io_inst_REG = _RAND_41[31:0];
  _RAND_42 = {1{`RANDOM}};
  DIP_io_is_skip_REG = _RAND_42[0:0];
  _RAND_43 = {1{`RANDOM}};
  DIP_io_inst_valid_REG = _RAND_43[0:0];
  _RAND_44 = {2{`RANDOM}};
  DIP_io_pc_REG = _RAND_44[63:0];
  _RAND_45 = {2{`RANDOM}};
  DIP_io_dnpc_REG = _RAND_45[63:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
