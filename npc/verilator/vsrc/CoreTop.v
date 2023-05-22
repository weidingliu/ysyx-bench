module IF(
  input         clock,
  input         reset,
  input         io_branch_io_is_branch,
  input         io_branch_io_is_jump,
  input  [63:0] io_branch_io_dnpc,
  output        io_cache_req_addr_req_valid,
  output [63:0] io_cache_req_addr_req_bits_addr,
  output        io_cache_req_rdata_rep_ready,
  input         io_cache_req_rdata_rep_valid,
  input  [63:0] io_cache_req_rdata_rep_bits_rdata,
  input         io_out_ready,
  output        io_out_valid,
  output [63:0] io_out_bits_PC,
  output [31:0] io_out_bits_Inst,
  input         io_flush
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  reg [63:0] temp; // @[IF.scala 22:21]
  wire [63:0] _temp_T_3 = temp + 64'h4; // @[IF.scala 23:136]
  wire [31:0] inst = temp[2] ? io_cache_req_rdata_rep_bits_rdata[63:32] : io_cache_req_rdata_rep_bits_rdata[31:0]; // @[IF.scala 40:17]
  assign io_cache_req_addr_req_valid = io_out_ready; // @[IF.scala 34:37]
  assign io_cache_req_addr_req_bits_addr = temp; // @[IF.scala 33:35]
  assign io_cache_req_rdata_rep_ready = io_out_ready; // @[IF.scala 39:32]
  assign io_out_valid = io_cache_req_rdata_rep_valid; // @[IF.scala 31:22]
  assign io_out_bits_PC = temp; // @[IF.scala 42:18]
  assign io_out_bits_Inst = io_flush ? 32'h0 : inst; // @[IF.scala 43:26]
  always @(posedge clock) begin
    if (reset) begin // @[IF.scala 22:21]
      temp <= 64'h80000000; // @[IF.scala 22:21]
    end else if (io_branch_io_is_jump | io_branch_io_is_branch) begin // @[IF.scala 23:14]
      temp <= io_branch_io_dnpc;
    end else if (io_out_ready & io_cache_req_rdata_rep_valid) begin // @[IF.scala 23:85]
      temp <= _temp_T_3;
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
  output        io_in_ready,
  input         io_in_valid,
  input  [63:0] io_in_bits_PC,
  input  [31:0] io_in_bits_Inst,
  input  [63:0] io_REG1,
  input  [63:0] io_REG2,
  input         io_flush,
  input         io_out_ready,
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
  wire  _srctype1_T = 4'h8 == Inst_decode_0; // @[util.scala 45:32]
  wire  _srctype1_T_2 = 4'h9 == Inst_decode_0; // @[util.scala 45:32]
  wire  _srctype1_T_3 = 4'hb == Inst_decode_0; // @[util.scala 45:32]
  wire  _srctype1_T_4 = 4'h7 == Inst_decode_0; // @[util.scala 45:32]
  wire  _srctype1_T_5 = 4'h3 == Inst_decode_0; // @[util.scala 45:32]
  wire [1:0] _srctype1_T_11 = _srctype1_T_4 ? 2'h2 : 2'h0; // @[Mux.scala 27:73]
  wire [1:0] _srctype1_T_12 = _srctype1_T_5 ? 2'h2 : 2'h0; // @[Mux.scala 27:73]
  wire [1:0] srctype1 = _srctype1_T_11 | _srctype1_T_12; // @[Mux.scala 27:73]
  wire  srctype2 = _srctype1_T | _srctype1_T_4 | _srctype1_T_5; // @[Mux.scala 27:73]
  wire  sign = io_in_bits_Inst[31]; // @[util.scala 11:19]
  wire [51:0] _T_2 = sign ? 52'hfffffffffffff : 52'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _T_3 = {_T_2,io_in_bits_Inst[31:20]}; // @[Cat.scala 31:58]
  wire [19:0] _T_7 = {io_in_bits_Inst[19:12],io_in_bits_Inst[20],io_in_bits_Inst[30:21],1'h0}; // @[Cat.scala 31:58]
  wire  sign_1 = _T_7[19]; // @[util.scala 11:19]
  wire [43:0] _T_9 = sign_1 ? 44'hfffffffffff : 44'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _T_10 = {_T_9,io_in_bits_Inst[19:12],io_in_bits_Inst[20],io_in_bits_Inst[30:21],1'h0}; // @[Cat.scala 31:58]
  wire [31:0] _T_13 = {io_in_bits_Inst[31:12],12'h0}; // @[Cat.scala 31:58]
  wire  sign_2 = _T_13[31]; // @[util.scala 11:19]
  wire [31:0] _T_15 = sign_2 ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _T_16 = {_T_15,io_in_bits_Inst[31:12],12'h0}; // @[Cat.scala 31:58]
  wire [11:0] _T_19 = {io_in_bits_Inst[31:25],rd}; // @[Cat.scala 31:58]
  wire  sign_3 = _T_19[11]; // @[util.scala 11:19]
  wire [51:0] _T_21 = sign_3 ? 52'hfffffffffffff : 52'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _T_22 = {_T_21,io_in_bits_Inst[31:25],rd}; // @[Cat.scala 31:58]
  wire [12:0] _T_27 = {io_in_bits_Inst[31],io_in_bits_Inst[7],io_in_bits_Inst[30:25],io_in_bits_Inst[11:8],1'h0}; // @[Cat.scala 31:58]
  wire  sign_4 = _T_27[12]; // @[util.scala 11:19]
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
  assign io_in_ready = io_out_ready; // @[ID.scala 106:15]
  assign io_out_valid = io_in_valid; // @[ID.scala 105:22]
  assign io_out_bits_ctrl_signal_src1Type = {{1'd0}, srctype1}; // @[ID.scala 87:36]
  assign io_out_bits_ctrl_signal_src2Type = {{2'd0}, srctype2}; // @[ID.scala 88:36]
  assign io_out_bits_ctrl_signal_fuType = _Inst_decode_T_1 ? 3'h0 : _Inst_decode_T_253; // @[Lookup.scala 34:39]
  assign io_out_bits_ctrl_signal_inst_valid = Inst_decode_2 == 7'h0 | io_flush | ~io_in_valid ? 1'h0 : 1'h1; // @[ID.scala 89:44]
  assign io_out_bits_ctrl_signal_rfSrc1 = io_in_bits_Inst[19:15]; // @[ID.scala 51:38]
  assign io_out_bits_ctrl_signal_rfSrc2 = io_in_bits_Inst[24:20]; // @[ID.scala 51:63]
  assign io_out_bits_ctrl_signal_rfWen = io_in_valid & Inst_decode_3; // @[ID.scala 84:39]
  assign io_out_bits_ctrl_signal_aluoptype = _Inst_decode_T_1 ? 7'h40 : _Inst_decode_T_316; // @[Lookup.scala 34:39]
  assign io_out_bits_ctrl_signal_rfDest = io_in_bits_Inst[11:7]; // @[ID.scala 51:88]
  assign io_out_bits_ctrl_data_src1 = io_REG1; // @[ID.scala 99:30]
  assign io_out_bits_ctrl_data_src2 = io_REG2; // @[ID.scala 100:30]
  assign io_out_bits_ctrl_data_Imm = _imm_T_12 | _imm_T_9; // @[Mux.scala 27:73]
  assign io_out_bits_ctrl_flow_PC = io_in_bits_PC; // @[ID.scala 92:28]
  assign io_out_bits_ctrl_flow_inst = io_in_bits_Inst; // @[ID.scala 93:30]
endmodule
module Partial_product(
  input  [2:0]   io_y_3,
  input  [131:0] io_x,
  output [131:0] io_p,
  output         io_c
);
  wire  _io_p_T = io_y_3 == 3'h0; // @[MUL.scala 26:13]
  wire  _io_p_T_1 = io_y_3 == 3'h1; // @[MUL.scala 27:13]
  wire  _io_p_T_2 = io_y_3 == 3'h2; // @[MUL.scala 28:13]
  wire  _io_p_T_3 = io_y_3 == 3'h3; // @[MUL.scala 29:13]
  wire [132:0] _io_p_T_4 = {io_x, 1'h0}; // @[MUL.scala 29:36]
  wire  _io_p_T_5 = io_y_3 == 3'h4; // @[MUL.scala 30:13]
  wire [132:0] _io_p_T_7 = ~_io_p_T_4; // @[MUL.scala 30:31]
  wire  _io_p_T_8 = io_y_3 == 3'h5; // @[MUL.scala 31:13]
  wire [131:0] _io_p_T_9 = ~io_x; // @[MUL.scala 31:32]
  wire  _io_p_T_10 = io_y_3 == 3'h6; // @[MUL.scala 32:13]
  wire [131:0] _io_p_T_14 = _io_p_T_10 ? _io_p_T_9 : 132'h0; // @[Mux.scala 101:16]
  wire [131:0] _io_p_T_15 = _io_p_T_8 ? _io_p_T_9 : _io_p_T_14; // @[Mux.scala 101:16]
  wire [132:0] _io_p_T_16 = _io_p_T_5 ? _io_p_T_7 : {{1'd0}, _io_p_T_15}; // @[Mux.scala 101:16]
  wire [132:0] _io_p_T_17 = _io_p_T_3 ? _io_p_T_4 : _io_p_T_16; // @[Mux.scala 101:16]
  wire [132:0] _io_p_T_18 = _io_p_T_2 ? {{1'd0}, io_x} : _io_p_T_17; // @[Mux.scala 101:16]
  wire [132:0] _io_p_T_19 = _io_p_T_1 ? {{1'd0}, io_x} : _io_p_T_18; // @[Mux.scala 101:16]
  wire [132:0] _io_p_T_20 = _io_p_T ? 133'h0 : _io_p_T_19; // @[Mux.scala 101:16]
  wire  _io_c_T_12 = _io_p_T_3 ? 1'h0 : _io_p_T_5 | (_io_p_T_8 | _io_p_T_10); // @[Mux.scala 101:16]
  wire  _io_c_T_13 = _io_p_T_2 ? 1'h0 : _io_c_T_12; // @[Mux.scala 101:16]
  wire  _io_c_T_14 = _io_p_T_1 ? 1'h0 : _io_c_T_13; // @[Mux.scala 101:16]
  assign io_p = _io_p_T_20[131:0]; // @[MUL.scala 25:8]
  assign io_c = _io_p_T ? 1'h0 : _io_c_T_14; // @[Mux.scala 101:16]
endmodule
module Booth_MUL(
  input         clock,
  input         reset,
  input         io_in_valid,
  input  [63:0] io_in_bits_ctrl_data_src1,
  input  [63:0] io_in_bits_ctrl_data_src2,
  output        io_out_valid,
  output [63:0] io_out_bits_result_result_lo
);
`ifdef RANDOMIZE_REG_INIT
  reg [95:0] _RAND_0;
  reg [159:0] _RAND_1;
  reg [159:0] _RAND_2;
  reg [31:0] _RAND_3;
`endif // RANDOMIZE_REG_INIT
  wire [2:0] partial_io_y_3; // @[MUL.scala 134:23]
  wire [131:0] partial_io_x; // @[MUL.scala 134:23]
  wire [131:0] partial_io_p; // @[MUL.scala 134:23]
  wire  partial_io_c; // @[MUL.scala 134:23]
  reg [65:0] multiplier; // @[MUL.scala 130:27]
  reg [131:0] multiplicand; // @[MUL.scala 131:29]
  reg [131:0] p; // @[MUL.scala 132:18]
  reg [6:0] count; // @[MUL.scala 133:22]
  wire [6:0] _count_T_5 = count + 7'h2; // @[MUL.scala 146:81]
  wire [65:0] _multiplier_T = {1'h0,io_in_bits_ctrl_data_src2,1'h0}; // @[Cat.scala 31:58]
  wire [131:0] _multiplicand_T_1 = {1'h0,1'h0,io_in_bits_ctrl_data_src1,66'h0}; // @[Cat.scala 31:58]
  wire [131:0] _temp_T_1 = p + partial_io_p; // @[MUL.scala 154:18]
  wire [131:0] _GEN_6 = {{131'd0}, partial_io_c}; // @[MUL.scala 154:28]
  wire [131:0] temp = _temp_T_1 + _GEN_6; // @[MUL.scala 154:28]
  wire  p_sign = temp[131]; // @[util.scala 11:19]
  wire [1:0] _p_T_2 = p_sign ? 2'h3 : 2'h0; // @[Bitwise.scala 74:12]
  wire [131:0] _p_T_3 = {_p_T_2,temp[131:2]}; // @[Cat.scala 31:58]
  Partial_product partial ( // @[MUL.scala 134:23]
    .io_y_3(partial_io_y_3),
    .io_x(partial_io_x),
    .io_p(partial_io_p),
    .io_c(partial_io_c)
  );
  assign io_out_valid = count == 7'h44; // @[MUL.scala 163:93]
  assign io_out_bits_result_result_lo = p[63:0]; // @[MUL.scala 166:36]
  assign partial_io_y_3 = multiplier[2:0]; // @[MUL.scala 160:31]
  assign partial_io_x = multiplicand; // @[MUL.scala 161:16]
  always @(posedge clock) begin
    if (reset) begin // @[MUL.scala 130:27]
      multiplier <= 66'h0; // @[MUL.scala 130:27]
    end else if (io_in_valid) begin // @[MUL.scala 147:51]
      if (count == 7'h0) begin // @[MUL.scala 148:25]
        multiplier <= _multiplier_T; // @[MUL.scala 149:18]
      end else begin
        multiplier <= {{2'd0}, multiplier[65:2]}; // @[MUL.scala 156:18]
      end
    end
    if (reset) begin // @[MUL.scala 131:29]
      multiplicand <= 132'h0; // @[MUL.scala 131:29]
    end else if (io_in_valid) begin // @[MUL.scala 147:51]
      if (count == 7'h0) begin // @[MUL.scala 148:25]
        multiplicand <= _multiplicand_T_1; // @[MUL.scala 150:20]
      end
    end
    if (reset) begin // @[MUL.scala 132:18]
      p <= 132'h0; // @[MUL.scala 132:18]
    end else if (io_in_valid) begin // @[MUL.scala 147:51]
      if (count == 7'h0) begin // @[MUL.scala 148:25]
        p <= 132'h0; // @[MUL.scala 151:9]
      end else begin
        p <= _p_T_3; // @[MUL.scala 155:9]
      end
    end
    if (reset) begin // @[MUL.scala 133:22]
      count <= 7'h0; // @[MUL.scala 133:22]
    end else if (io_in_valid & ~io_out_valid) begin // @[MUL.scala 146:15]
      count <= _count_T_5;
    end else begin
      count <= 7'h0;
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
  _RAND_0 = {3{`RANDOM}};
  multiplier = _RAND_0[65:0];
  _RAND_1 = {5{`RANDOM}};
  multiplicand = _RAND_1[131:0];
  _RAND_2 = {5{`RANDOM}};
  p = _RAND_2[131:0];
  _RAND_3 = {1{`RANDOM}};
  count = _RAND_3[6:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module MUL(
  input         clock,
  input         reset,
  input         io_in_valid,
  input  [63:0] io_in_bits_ctrl_data_src1,
  input  [63:0] io_in_bits_ctrl_data_src2,
  output        io_out_valid,
  output [63:0] io_out_bits_result_result_lo
);
  wire  mult_clock; // @[MUL.scala 203:24]
  wire  mult_reset; // @[MUL.scala 203:24]
  wire  mult_io_in_valid; // @[MUL.scala 203:24]
  wire [63:0] mult_io_in_bits_ctrl_data_src1; // @[MUL.scala 203:24]
  wire [63:0] mult_io_in_bits_ctrl_data_src2; // @[MUL.scala 203:24]
  wire  mult_io_out_valid; // @[MUL.scala 203:24]
  wire [63:0] mult_io_out_bits_result_result_lo; // @[MUL.scala 203:24]
  Booth_MUL mult ( // @[MUL.scala 203:24]
    .clock(mult_clock),
    .reset(mult_reset),
    .io_in_valid(mult_io_in_valid),
    .io_in_bits_ctrl_data_src1(mult_io_in_bits_ctrl_data_src1),
    .io_in_bits_ctrl_data_src2(mult_io_in_bits_ctrl_data_src2),
    .io_out_valid(mult_io_out_valid),
    .io_out_bits_result_result_lo(mult_io_out_bits_result_result_lo)
  );
  assign io_out_valid = mult_io_out_valid; // @[MUL.scala 205:14]
  assign io_out_bits_result_result_lo = mult_io_out_bits_result_result_lo; // @[MUL.scala 205:14]
  assign mult_clock = clock;
  assign mult_reset = reset;
  assign mult_io_in_valid = io_in_valid; // @[MUL.scala 204:13]
  assign mult_io_in_bits_ctrl_data_src1 = io_in_bits_ctrl_data_src1; // @[MUL.scala 204:13]
  assign mult_io_in_bits_ctrl_data_src2 = io_in_bits_ctrl_data_src2; // @[MUL.scala 204:13]
endmodule
module DIV(
  input         clock,
  input         reset,
  input         io_in_valid,
  input         io_in_bits_ctrl_flow_div_signed,
  input  [63:0] io_in_bits_ctrl_data_src1,
  input  [63:0] io_in_bits_ctrl_data_src2,
  output        io_out_valid,
  output [63:0] io_out_bits_result_quotient,
  output [63:0] io_out_bits_result_remainder
);
`ifdef RANDOMIZE_REG_INIT
  reg [127:0] _RAND_0;
  reg [63:0] _RAND_1;
  reg [63:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
`endif // RANDOMIZE_REG_INIT
  reg [127:0] dividend; // @[DIV.scala 15:25]
  reg [63:0] divisor; // @[DIV.scala 16:24]
  reg [63:0] S; // @[DIV.scala 17:18]
  reg [1:0] state; // @[DIV.scala 23:22]
  wire  _T = state == 2'h1; // @[DIV.scala 24:33]
  reg [5:0] count; // @[Counter.scala 62:40]
  wire  wrap_wrap = count == 6'h3f; // @[Counter.scala 74:24]
  wire [5:0] _wrap_value_T_1 = count + 6'h1; // @[Counter.scala 78:24]
  wire  s = _T & wrap_wrap; // @[Counter.scala 120:{16,23}]
  wire [64:0] _res_div_T_1 = {1'h0,divisor}; // @[Cat.scala 31:58]
  wire [64:0] res_div = dividend[127:63] - _res_div_T_1; // @[DIV.scala 25:49]
  wire [1:0] _GEN_2 = state == 2'h0 ? 2'h1 : state; // @[DIV.scala 27:25 28:13 23:22]
  wire [63:0] _dividend_T_4 = 64'h0 - io_in_bits_ctrl_data_src1; // @[DIV.scala 43:87]
  wire [63:0] _dividend_T_5 = io_in_bits_ctrl_flow_div_signed & io_in_bits_ctrl_data_src1[63] ? _dividend_T_4 :
    io_in_bits_ctrl_data_src1; // @[DIV.scala 43:12]
  wire [127:0] _dividend_T_6 = {64'h0,_dividend_T_5}; // @[Cat.scala 31:58]
  wire [63:0] _divisor_T_3 = 64'h0 - io_in_bits_ctrl_data_src2; // @[DIV.scala 44:96]
  wire  _S_T_1 = ~res_div[64]; // @[DIV.scala 48:35]
  wire [63:0] _S_T_3 = {S[63:1],1'h1}; // @[Cat.scala 31:58]
  wire [63:0] _S_T_5 = {S[63:1],1'h0}; // @[Cat.scala 31:58]
  wire [63:0] _S_T_6 = ~res_div[64] ? _S_T_3 : _S_T_5; // @[DIV.scala 48:17]
  wire [64:0] _S_T_7 = {_S_T_6, 1'h0}; // @[DIV.scala 49:79]
  wire [64:0] _GEN_6 = count != 6'h3f ? _S_T_7 : {{1'd0}, _S_T_6}; // @[DIV.scala 47:36 48:11 51:11]
  wire [127:0] _dividend_T_14 = {res_div,dividend[62:0]}; // @[Cat.scala 31:58]
  wire [127:0] _dividend_T_15 = _S_T_1 ? _dividend_T_14 : dividend; // @[DIV.scala 54:22]
  wire [128:0] _dividend_T_16 = {_dividend_T_15, 1'h0}; // @[DIV.scala 55:110]
  wire [64:0] _GEN_7 = 2'h1 == state ? _GEN_6 : {{1'd0}, S}; // @[DIV.scala 40:16 17:18]
  wire [128:0] _GEN_8 = 2'h1 == state ? _dividend_T_16 : {{1'd0}, dividend}; // @[DIV.scala 40:16 54:16 15:25]
  wire [128:0] _GEN_9 = 2'h0 == state ? {{1'd0}, _dividend_T_6} : _GEN_8; // @[DIV.scala 40:16 42:16]
  wire [64:0] _GEN_11 = 2'h0 == state ? {{1'd0}, S} : _GEN_7; // @[DIV.scala 40:16 17:18]
  wire [63:0] negative_s = 64'h0 - S; // @[DIV.scala 63:20]
  wire [63:0] negative_r = 64'h0 - dividend[127:64]; // @[DIV.scala 64:20]
  wire [63:0] _T_13 = S[63] ? negative_s : S; // @[DIV.scala 67:18]
  wire [63:0] _T_16 = dividend[127] ? negative_r : dividend[127:64]; // @[DIV.scala 67:49]
  wire [63:0] _T_18 = S[63] ? S : negative_s; // @[DIV.scala 68:18]
  wire [63:0] _T_26 = dividend[127] ? dividend[127:64] : negative_r; // @[DIV.scala 69:49]
  wire [1:0] _s_o_T_2 = {io_in_bits_ctrl_data_src1[63],io_in_bits_ctrl_data_src2[63]}; // @[Cat.scala 31:58]
  wire  _s_o_T_3 = 2'h0 == _s_o_T_2; // @[util.scala 45:32]
  wire  _s_o_T_4 = 2'h1 == _s_o_T_2; // @[util.scala 45:32]
  wire  _s_o_T_5 = 2'h2 == _s_o_T_2; // @[util.scala 45:32]
  wire  _s_o_T_6 = 2'h3 == _s_o_T_2; // @[util.scala 45:32]
  wire [63:0] _s_o_T_7 = _s_o_T_3 ? _T_13 : 64'h0; // @[Mux.scala 27:73]
  wire [63:0] _s_o_T_8 = _s_o_T_4 ? _T_18 : 64'h0; // @[Mux.scala 27:73]
  wire [63:0] _s_o_T_9 = _s_o_T_5 ? _T_18 : 64'h0; // @[Mux.scala 27:73]
  wire [63:0] _s_o_T_10 = _s_o_T_6 ? _T_13 : 64'h0; // @[Mux.scala 27:73]
  wire [63:0] _s_o_T_11 = _s_o_T_7 | _s_o_T_8; // @[Mux.scala 27:73]
  wire [63:0] _s_o_T_12 = _s_o_T_11 | _s_o_T_9; // @[Mux.scala 27:73]
  wire [63:0] s_o = _s_o_T_12 | _s_o_T_10; // @[Mux.scala 27:73]
  wire [63:0] _r_o_T_7 = _s_o_T_3 ? _T_16 : 64'h0; // @[Mux.scala 27:73]
  wire [63:0] _r_o_T_8 = _s_o_T_4 ? _T_16 : 64'h0; // @[Mux.scala 27:73]
  wire [63:0] _r_o_T_9 = _s_o_T_5 ? _T_26 : 64'h0; // @[Mux.scala 27:73]
  wire [63:0] _r_o_T_10 = _s_o_T_6 ? _T_26 : 64'h0; // @[Mux.scala 27:73]
  wire [63:0] _r_o_T_11 = _r_o_T_7 | _r_o_T_8; // @[Mux.scala 27:73]
  wire [63:0] _r_o_T_12 = _r_o_T_11 | _r_o_T_9; // @[Mux.scala 27:73]
  wire [63:0] r_o = _r_o_T_12 | _r_o_T_10; // @[Mux.scala 27:73]
  wire [128:0] _GEN_12 = reset ? 129'h0 : _GEN_9; // @[DIV.scala 15:{25,25}]
  wire [64:0] _GEN_13 = reset ? 65'h0 : _GEN_11; // @[DIV.scala 17:{18,18}]
  assign io_out_valid = state == 2'h2; // @[DIV.scala 76:29]
  assign io_out_bits_result_quotient = io_in_bits_ctrl_flow_div_signed ? s_o : S; // @[DIV.scala 77:37]
  assign io_out_bits_result_remainder = io_in_bits_ctrl_flow_div_signed ? r_o : dividend[127:64]; // @[DIV.scala 78:38]
  always @(posedge clock) begin
    dividend <= _GEN_12[127:0]; // @[DIV.scala 15:{25,25}]
    if (reset) begin // @[DIV.scala 16:24]
      divisor <= 64'h0; // @[DIV.scala 16:24]
    end else if (2'h0 == state) begin // @[DIV.scala 40:16]
      if (io_in_bits_ctrl_flow_div_signed & io_in_bits_ctrl_data_src2[63]) begin // @[DIV.scala 44:21]
        divisor <= _divisor_T_3;
      end else begin
        divisor <= io_in_bits_ctrl_data_src2;
      end
    end
    S <= _GEN_13[63:0]; // @[DIV.scala 17:{18,18}]
    if (reset) begin // @[DIV.scala 23:22]
      state <= 2'h0; // @[DIV.scala 23:22]
    end else if (io_in_valid) begin // @[DIV.scala 26:51]
      if (state == 2'h2) begin // @[DIV.scala 33:24]
        state <= 2'h0; // @[DIV.scala 34:13]
      end else if (_T & s) begin // @[DIV.scala 30:40]
        state <= 2'h2; // @[DIV.scala 31:15]
      end else begin
        state <= _GEN_2;
      end
    end else begin
      state <= 2'h0; // @[DIV.scala 37:11]
    end
    if (reset) begin // @[Counter.scala 62:40]
      count <= 6'h0; // @[Counter.scala 62:40]
    end else if (_T) begin // @[Counter.scala 120:16]
      count <= _wrap_value_T_1; // @[Counter.scala 78:15]
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
  _RAND_0 = {4{`RANDOM}};
  dividend = _RAND_0[127:0];
  _RAND_1 = {2{`RANDOM}};
  divisor = _RAND_1[63:0];
  _RAND_2 = {2{`RANDOM}};
  S = _RAND_2[63:0];
  _RAND_3 = {1{`RANDOM}};
  state = _RAND_3[1:0];
  _RAND_4 = {1{`RANDOM}};
  count = _RAND_4[5:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module EXE(
  input         clock,
  input         reset,
  output        io_in_ready,
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
  input         io_out_ready,
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
  wire [63:0] CSRDIFF_mepc; // @[EXE.scala 115:21]
  wire [63:0] CSRDIFF_mcause; // @[EXE.scala 115:21]
  wire [63:0] CSRDIFF_mstatus; // @[EXE.scala 115:21]
  wire [63:0] CSRDIFF_mtvec; // @[EXE.scala 115:21]
  wire  mul_clock; // @[EXE.scala 118:19]
  wire  mul_reset; // @[EXE.scala 118:19]
  wire  mul_io_in_valid; // @[EXE.scala 118:19]
  wire [63:0] mul_io_in_bits_ctrl_data_src1; // @[EXE.scala 118:19]
  wire [63:0] mul_io_in_bits_ctrl_data_src2; // @[EXE.scala 118:19]
  wire  mul_io_out_valid; // @[EXE.scala 118:19]
  wire [63:0] mul_io_out_bits_result_result_lo; // @[EXE.scala 118:19]
  wire  div_clock; // @[EXE.scala 119:19]
  wire  div_reset; // @[EXE.scala 119:19]
  wire  div_io_in_valid; // @[EXE.scala 119:19]
  wire  div_io_in_bits_ctrl_flow_div_signed; // @[EXE.scala 119:19]
  wire [63:0] div_io_in_bits_ctrl_data_src1; // @[EXE.scala 119:19]
  wire [63:0] div_io_in_bits_ctrl_data_src2; // @[EXE.scala 119:19]
  wire  div_io_out_valid; // @[EXE.scala 119:19]
  wire [63:0] div_io_out_bits_result_quotient; // @[EXE.scala 119:19]
  wire [63:0] div_io_out_bits_result_remainder; // @[EXE.scala 119:19]
  wire  _is_mul_T = 7'h78 == io_in_bits_ctrl_signal_aluoptype; // @[EXE.scala 104:32]
  wire  _is_mul_T_1 = 7'h7 == io_in_bits_ctrl_signal_aluoptype; // @[EXE.scala 104:86]
  wire  is_mul = (7'h78 == io_in_bits_ctrl_signal_aluoptype | 7'h7 == io_in_bits_ctrl_signal_aluoptype) &
    io_in_bits_ctrl_signal_inst_valid & io_in_valid; // @[EXE.scala 104:161]
  wire  _is_div_T = io_in_bits_ctrl_signal_aluoptype == 7'h43; // @[EXE.scala 105:50]
  wire  _is_div_T_2 = io_in_bits_ctrl_signal_aluoptype == 7'h43 | io_in_bits_ctrl_signal_aluoptype == 7'h13; // @[EXE.scala 105:68]
  wire  _is_div_T_3 = io_in_bits_ctrl_signal_aluoptype == 7'h79; // @[EXE.scala 106:41]
  wire  _is_div_T_5 = io_in_bits_ctrl_signal_aluoptype == 7'h10; // @[EXE.scala 106:96]
  wire  _is_div_T_6 = _is_div_T_2 | io_in_bits_ctrl_signal_aluoptype == 7'h79 | io_in_bits_ctrl_signal_aluoptype == 7'h10
    ; // @[EXE.scala 106:60]
  wire  _is_div_T_7 = io_in_bits_ctrl_signal_aluoptype == 7'h12; // @[EXE.scala 107:41]
  wire  _is_div_T_10 = _is_div_T_6 | io_in_bits_ctrl_signal_aluoptype == 7'h12 | io_in_bits_ctrl_signal_aluoptype == 7'hf
    ; // @[EXE.scala 107:59]
  wire  _is_div_T_11 = io_in_bits_ctrl_signal_aluoptype == 7'h7a; // @[EXE.scala 108:41]
  wire  _is_div_T_13 = io_in_bits_ctrl_signal_aluoptype == 7'hd; // @[EXE.scala 108:96]
  wire  is_div = (_is_div_T_10 | io_in_bits_ctrl_signal_aluoptype == 7'h7a | io_in_bits_ctrl_signal_aluoptype == 7'hd)
     & io_in_bits_ctrl_signal_inst_valid & io_in_valid; // @[EXE.scala 108:154]
  wire  _is_divw_T_2 = _is_div_T_3 | _is_div_T_5; // @[EXE.scala 109:70]
  wire  is_divw = _is_divw_T_2 | _is_div_T_11 | _is_div_T_13; // @[EXE.scala 110:60]
  wire  _is_div_sign_T_2 = _is_div_T | _is_div_T_3; // @[EXE.scala 111:73]
  wire  is_div_sign = _is_div_sign_T_2 | _is_div_T_7 | _is_div_T_11; // @[EXE.scala 112:59]
  reg [63:0] mepc; // @[CSR.scala 18:17]
  reg [63:0] mcause; // @[CSR.scala 19:23]
  reg [63:0] mstatus; // @[CSR.scala 20:24]
  reg [63:0] mtvec; // @[CSR.scala 21:22]
  reg [63:0] mie; // @[CSR.scala 22:20]
  reg [63:0] mip; // @[CSR.scala 23:20]
  wire [63:0] _GEN_1 = 3'h2 == io_in_bits_ctrl_signal_src1Type ? io_in_bits_ctrl_flow_PC : 64'h0; // @[EXE.scala 124:43 129:12]
  wire [63:0] src1 = 3'h0 == io_in_bits_ctrl_signal_src1Type ? io_src1 : _GEN_1; // @[EXE.scala 124:43 126:12]
  wire [63:0] _GEN_3 = 3'h1 == io_in_bits_ctrl_signal_src2Type ? io_in_bits_ctrl_data_Imm : 64'h0; // @[EXE.scala 135:43 141:12]
  wire [63:0] src2 = 3'h0 == io_in_bits_ctrl_signal_src2Type ? io_src2 : _GEN_3; // @[EXE.scala 135:43 138:12]
  wire [63:0] _dnpc_T_1 = io_in_bits_ctrl_flow_PC + 64'h4; // @[EXE.scala 147:49]
  wire [63:0] _alu_result_T_1 = src1 + src2; // @[EXE.scala 158:26]
  wire  alu_result_sign = _alu_result_T_1[31]; // @[util.scala 11:19]
  wire [31:0] _alu_result_T_6 = alu_result_sign ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _alu_result_T_7 = {_alu_result_T_6,_alu_result_T_1[31:0]}; // @[Cat.scala 31:58]
  wire [63:0] _alu_result_T_8 = src1 | src2; // @[EXE.scala 167:26]
  wire [63:0] _alu_result_T_10 = src1 - src2; // @[EXE.scala 170:26]
  wire [63:0] _alu_result_T_11 = src1 & src2; // @[EXE.scala 173:26]
  wire [63:0] _alu_result_T_12 = src1 ^ src2; // @[EXE.scala 176:26]
  wire  alu_result_sign_2 = mul_io_out_bits_result_result_lo[31]; // @[util.scala 11:19]
  wire [31:0] _alu_result_T_21 = alu_result_sign_2 ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _alu_result_T_22 = {_alu_result_T_21,mul_io_out_bits_result_result_lo[31:0]}; // @[Cat.scala 31:58]
  wire  alu_result_sign_3 = div_io_out_bits_result_quotient[31]; // @[util.scala 11:19]
  wire [31:0] _alu_result_T_25 = alu_result_sign_3 ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _alu_result_T_26 = {_alu_result_T_25,div_io_out_bits_result_quotient[31:0]}; // @[Cat.scala 31:58]
  wire  alu_result_sign_4 = div_io_out_bits_result_remainder[31]; // @[util.scala 11:19]
  wire [31:0] _alu_result_T_29 = alu_result_sign_4 ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _alu_result_T_30 = {_alu_result_T_29,div_io_out_bits_result_remainder[31:0]}; // @[Cat.scala 31:58]
  wire  alu_result_sign_6 = _alu_result_T_10[31]; // @[util.scala 11:19]
  wire [31:0] _alu_result_T_39 = alu_result_sign_6 ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _alu_result_T_40 = {_alu_result_T_39,_alu_result_T_10[31:0]}; // @[Cat.scala 31:58]
  wire  _alu_result_T_46 = io_in_bits_ctrl_data_Imm[11:0] == 12'h300; // @[CSR.scala 26:11]
  wire  _alu_result_T_47 = io_in_bits_ctrl_data_Imm[11:0] == 12'h305; // @[CSR.scala 27:11]
  wire  _alu_result_T_48 = io_in_bits_ctrl_data_Imm[11:0] == 12'h341; // @[CSR.scala 28:11]
  wire  _alu_result_T_49 = io_in_bits_ctrl_data_Imm[11:0] == 12'h342; // @[CSR.scala 29:11]
  wire  _alu_result_T_50 = io_in_bits_ctrl_data_Imm[11:0] == 12'h304; // @[CSR.scala 30:11]
  wire  _alu_result_T_51 = io_in_bits_ctrl_data_Imm[11:0] == 12'h344; // @[CSR.scala 31:11]
  wire [63:0] _alu_result_T_52 = _alu_result_T_51 ? mip : 64'h0; // @[Mux.scala 101:16]
  wire [63:0] _alu_result_T_53 = _alu_result_T_50 ? mie : _alu_result_T_52; // @[Mux.scala 101:16]
  wire [63:0] _alu_result_T_54 = _alu_result_T_49 ? mcause : _alu_result_T_53; // @[Mux.scala 101:16]
  wire [63:0] _alu_result_T_55 = _alu_result_T_48 ? mepc : _alu_result_T_54; // @[Mux.scala 101:16]
  wire [63:0] _alu_result_T_56 = _alu_result_T_47 ? mtvec : _alu_result_T_55; // @[Mux.scala 101:16]
  wire [63:0] _alu_result_T_57 = _alu_result_T_46 ? mstatus : _alu_result_T_56; // @[Mux.scala 101:16]
  wire [63:0] _T_39 = _alu_result_T_57 | src1; // @[EXE.scala 216:50]
  wire [63:0] _GEN_5 = _alu_result_T_51 ? _T_39 : mip; // @[CSR.scala 50:41 51:13 23:20]
  wire [63:0] _GEN_6 = _alu_result_T_50 ? _T_39 : mie; // @[CSR.scala 47:41 48:13 22:20]
  wire [63:0] _GEN_7 = _alu_result_T_50 ? mip : _GEN_5; // @[CSR.scala 23:20 47:41]
  wire [63:0] _GEN_8 = _alu_result_T_49 ? _T_39 : mcause; // @[CSR.scala 44:44 45:16 19:23]
  wire [63:0] _GEN_9 = _alu_result_T_49 ? mie : _GEN_6; // @[CSR.scala 22:20 44:44]
  wire [63:0] _GEN_10 = _alu_result_T_49 ? mip : _GEN_7; // @[CSR.scala 23:20 44:44]
  wire [63:0] _GEN_11 = _alu_result_T_48 ? _T_39 : mepc; // @[CSR.scala 41:42 42:14 18:17]
  wire [63:0] _GEN_12 = _alu_result_T_48 ? mcause : _GEN_8; // @[CSR.scala 19:23 41:42]
  wire [63:0] _GEN_13 = _alu_result_T_48 ? mie : _GEN_9; // @[CSR.scala 22:20 41:42]
  wire [63:0] _GEN_14 = _alu_result_T_48 ? mip : _GEN_10; // @[CSR.scala 23:20 41:42]
  wire [63:0] _GEN_15 = _alu_result_T_47 ? _T_39 : mtvec; // @[CSR.scala 38:43 39:15 21:22]
  wire [63:0] _GEN_16 = _alu_result_T_47 ? mepc : _GEN_11; // @[CSR.scala 18:17 38:43]
  wire [63:0] _GEN_17 = _alu_result_T_47 ? mcause : _GEN_12; // @[CSR.scala 19:23 38:43]
  wire [63:0] _GEN_18 = _alu_result_T_47 ? mie : _GEN_13; // @[CSR.scala 22:20 38:43]
  wire [63:0] _GEN_19 = _alu_result_T_47 ? mip : _GEN_14; // @[CSR.scala 23:20 38:43]
  wire [63:0] _GEN_20 = _alu_result_T_46 ? _T_39 : mstatus; // @[CSR.scala 35:38 36:15 20:24]
  wire [63:0] _GEN_21 = _alu_result_T_46 ? mtvec : _GEN_15; // @[CSR.scala 21:22 35:38]
  wire [63:0] _GEN_22 = _alu_result_T_46 ? mepc : _GEN_16; // @[CSR.scala 18:17 35:38]
  wire [63:0] _GEN_23 = _alu_result_T_46 ? mcause : _GEN_17; // @[CSR.scala 19:23 35:38]
  wire [63:0] _GEN_24 = _alu_result_T_46 ? mie : _GEN_18; // @[CSR.scala 22:20 35:38]
  wire [63:0] _GEN_25 = _alu_result_T_46 ? mip : _GEN_19; // @[CSR.scala 23:20 35:38]
  wire [63:0] _GEN_26 = _alu_result_T_51 ? src1 : mip; // @[CSR.scala 50:41 51:13 23:20]
  wire [63:0] _GEN_27 = _alu_result_T_50 ? src1 : mie; // @[CSR.scala 47:41 48:13 22:20]
  wire [63:0] _GEN_28 = _alu_result_T_50 ? mip : _GEN_26; // @[CSR.scala 23:20 47:41]
  wire [63:0] _GEN_29 = _alu_result_T_49 ? src1 : mcause; // @[CSR.scala 44:44 45:16 19:23]
  wire [63:0] _GEN_30 = _alu_result_T_49 ? mie : _GEN_27; // @[CSR.scala 22:20 44:44]
  wire [63:0] _GEN_31 = _alu_result_T_49 ? mip : _GEN_28; // @[CSR.scala 23:20 44:44]
  wire [63:0] _GEN_32 = _alu_result_T_48 ? src1 : mepc; // @[CSR.scala 41:42 42:14 18:17]
  wire [63:0] _GEN_33 = _alu_result_T_48 ? mcause : _GEN_29; // @[CSR.scala 19:23 41:42]
  wire [63:0] _GEN_34 = _alu_result_T_48 ? mie : _GEN_30; // @[CSR.scala 22:20 41:42]
  wire [63:0] _GEN_35 = _alu_result_T_48 ? mip : _GEN_31; // @[CSR.scala 23:20 41:42]
  wire [63:0] _GEN_36 = _alu_result_T_47 ? src1 : mtvec; // @[CSR.scala 38:43 39:15 21:22]
  wire [63:0] _GEN_37 = _alu_result_T_47 ? mepc : _GEN_32; // @[CSR.scala 18:17 38:43]
  wire [63:0] _GEN_38 = _alu_result_T_47 ? mcause : _GEN_33; // @[CSR.scala 19:23 38:43]
  wire [63:0] _GEN_39 = _alu_result_T_47 ? mie : _GEN_34; // @[CSR.scala 22:20 38:43]
  wire [63:0] _GEN_40 = _alu_result_T_47 ? mip : _GEN_35; // @[CSR.scala 23:20 38:43]
  wire [63:0] _GEN_41 = _alu_result_T_46 ? src1 : mstatus; // @[CSR.scala 35:38 36:15 20:24]
  wire [63:0] _GEN_42 = _alu_result_T_46 ? mtvec : _GEN_36; // @[CSR.scala 21:22 35:38]
  wire [63:0] _GEN_43 = _alu_result_T_46 ? mepc : _GEN_37; // @[CSR.scala 18:17 35:38]
  wire [63:0] _GEN_44 = _alu_result_T_46 ? mcause : _GEN_38; // @[CSR.scala 19:23 35:38]
  wire [63:0] _GEN_45 = _alu_result_T_46 ? mie : _GEN_39; // @[CSR.scala 22:20 35:38]
  wire [63:0] _GEN_46 = _alu_result_T_46 ? mip : _GEN_40; // @[CSR.scala 23:20 35:38]
  wire [63:0] _GEN_47 = 7'h16 == io_in_bits_ctrl_signal_aluoptype ? _alu_result_T_57 : 64'h0; // @[EXE.scala 156:44 219:18]
  wire [63:0] _GEN_48 = 7'h16 == io_in_bits_ctrl_signal_aluoptype ? _GEN_41 : mstatus; // @[EXE.scala 156:44 CSR.scala 20:24]
  wire [63:0] _GEN_49 = 7'h16 == io_in_bits_ctrl_signal_aluoptype ? _GEN_42 : mtvec; // @[EXE.scala 156:44 CSR.scala 21:22]
  wire [63:0] _GEN_50 = 7'h16 == io_in_bits_ctrl_signal_aluoptype ? _GEN_43 : mepc; // @[EXE.scala 156:44 CSR.scala 18:17]
  wire [63:0] _GEN_51 = 7'h16 == io_in_bits_ctrl_signal_aluoptype ? _GEN_44 : mcause; // @[EXE.scala 156:44 CSR.scala 19:23]
  wire [63:0] _GEN_52 = 7'h16 == io_in_bits_ctrl_signal_aluoptype ? _GEN_45 : mie; // @[EXE.scala 156:44 CSR.scala 22:20]
  wire [63:0] _GEN_53 = 7'h16 == io_in_bits_ctrl_signal_aluoptype ? _GEN_46 : mip; // @[EXE.scala 156:44 CSR.scala 23:20]
  wire [63:0] _GEN_54 = 7'h15 == io_in_bits_ctrl_signal_aluoptype ? _alu_result_T_57 : _GEN_47; // @[EXE.scala 156:44 215:18]
  wire [63:0] _GEN_55 = 7'h15 == io_in_bits_ctrl_signal_aluoptype ? _GEN_20 : _GEN_48; // @[EXE.scala 156:44]
  wire [63:0] _GEN_56 = 7'h15 == io_in_bits_ctrl_signal_aluoptype ? _GEN_21 : _GEN_49; // @[EXE.scala 156:44]
  wire [63:0] _GEN_57 = 7'h15 == io_in_bits_ctrl_signal_aluoptype ? _GEN_22 : _GEN_50; // @[EXE.scala 156:44]
  wire [63:0] _GEN_58 = 7'h15 == io_in_bits_ctrl_signal_aluoptype ? _GEN_23 : _GEN_51; // @[EXE.scala 156:44]
  wire [63:0] _GEN_59 = 7'h15 == io_in_bits_ctrl_signal_aluoptype ? _GEN_24 : _GEN_52; // @[EXE.scala 156:44]
  wire [63:0] _GEN_60 = 7'h15 == io_in_bits_ctrl_signal_aluoptype ? _GEN_25 : _GEN_53; // @[EXE.scala 156:44]
  wire [63:0] _GEN_61 = 7'h43 == io_in_bits_ctrl_signal_aluoptype ? div_io_out_bits_result_quotient : _GEN_54; // @[EXE.scala 156:44 212:18]
  wire [63:0] _GEN_62 = 7'h43 == io_in_bits_ctrl_signal_aluoptype ? mstatus : _GEN_55; // @[EXE.scala 156:44 CSR.scala 20:24]
  wire [63:0] _GEN_63 = 7'h43 == io_in_bits_ctrl_signal_aluoptype ? mtvec : _GEN_56; // @[EXE.scala 156:44 CSR.scala 21:22]
  wire [63:0] _GEN_64 = 7'h43 == io_in_bits_ctrl_signal_aluoptype ? mepc : _GEN_57; // @[EXE.scala 156:44 CSR.scala 18:17]
  wire [63:0] _GEN_65 = 7'h43 == io_in_bits_ctrl_signal_aluoptype ? mcause : _GEN_58; // @[EXE.scala 156:44 CSR.scala 19:23]
  wire [63:0] _GEN_66 = 7'h43 == io_in_bits_ctrl_signal_aluoptype ? mie : _GEN_59; // @[EXE.scala 156:44 CSR.scala 22:20]
  wire [63:0] _GEN_67 = 7'h43 == io_in_bits_ctrl_signal_aluoptype ? mip : _GEN_60; // @[EXE.scala 156:44 CSR.scala 23:20]
  wire [63:0] _GEN_68 = 7'h13 == io_in_bits_ctrl_signal_aluoptype ? div_io_out_bits_result_quotient : _GEN_61; // @[EXE.scala 156:44 209:18]
  wire [63:0] _GEN_69 = 7'h13 == io_in_bits_ctrl_signal_aluoptype ? mstatus : _GEN_62; // @[EXE.scala 156:44 CSR.scala 20:24]
  wire [63:0] _GEN_70 = 7'h13 == io_in_bits_ctrl_signal_aluoptype ? mtvec : _GEN_63; // @[EXE.scala 156:44 CSR.scala 21:22]
  wire [63:0] _GEN_71 = 7'h13 == io_in_bits_ctrl_signal_aluoptype ? mepc : _GEN_64; // @[EXE.scala 156:44 CSR.scala 18:17]
  wire [63:0] _GEN_72 = 7'h13 == io_in_bits_ctrl_signal_aluoptype ? mcause : _GEN_65; // @[EXE.scala 156:44 CSR.scala 19:23]
  wire [63:0] _GEN_73 = 7'h13 == io_in_bits_ctrl_signal_aluoptype ? mie : _GEN_66; // @[EXE.scala 156:44 CSR.scala 22:20]
  wire [63:0] _GEN_74 = 7'h13 == io_in_bits_ctrl_signal_aluoptype ? mip : _GEN_67; // @[EXE.scala 156:44 CSR.scala 23:20]
  wire [63:0] _GEN_75 = 7'h10 == io_in_bits_ctrl_signal_aluoptype ? _alu_result_T_26 : _GEN_68; // @[EXE.scala 156:44 206:18]
  wire [63:0] _GEN_76 = 7'h10 == io_in_bits_ctrl_signal_aluoptype ? mstatus : _GEN_69; // @[EXE.scala 156:44 CSR.scala 20:24]
  wire [63:0] _GEN_77 = 7'h10 == io_in_bits_ctrl_signal_aluoptype ? mtvec : _GEN_70; // @[EXE.scala 156:44 CSR.scala 21:22]
  wire [63:0] _GEN_78 = 7'h10 == io_in_bits_ctrl_signal_aluoptype ? mepc : _GEN_71; // @[EXE.scala 156:44 CSR.scala 18:17]
  wire [63:0] _GEN_79 = 7'h10 == io_in_bits_ctrl_signal_aluoptype ? mcause : _GEN_72; // @[EXE.scala 156:44 CSR.scala 19:23]
  wire [63:0] _GEN_80 = 7'h10 == io_in_bits_ctrl_signal_aluoptype ? mie : _GEN_73; // @[EXE.scala 156:44 CSR.scala 22:20]
  wire [63:0] _GEN_81 = 7'h10 == io_in_bits_ctrl_signal_aluoptype ? mip : _GEN_74; // @[EXE.scala 156:44 CSR.scala 23:20]
  wire [63:0] _GEN_82 = 7'h12 == io_in_bits_ctrl_signal_aluoptype ? div_io_out_bits_result_remainder : _GEN_75; // @[EXE.scala 156:44 203:18]
  wire [63:0] _GEN_83 = 7'h12 == io_in_bits_ctrl_signal_aluoptype ? mstatus : _GEN_76; // @[EXE.scala 156:44 CSR.scala 20:24]
  wire [63:0] _GEN_84 = 7'h12 == io_in_bits_ctrl_signal_aluoptype ? mtvec : _GEN_77; // @[EXE.scala 156:44 CSR.scala 21:22]
  wire [63:0] _GEN_85 = 7'h12 == io_in_bits_ctrl_signal_aluoptype ? mepc : _GEN_78; // @[EXE.scala 156:44 CSR.scala 18:17]
  wire [63:0] _GEN_86 = 7'h12 == io_in_bits_ctrl_signal_aluoptype ? mcause : _GEN_79; // @[EXE.scala 156:44 CSR.scala 19:23]
  wire [63:0] _GEN_87 = 7'h12 == io_in_bits_ctrl_signal_aluoptype ? mie : _GEN_80; // @[EXE.scala 156:44 CSR.scala 22:20]
  wire [63:0] _GEN_88 = 7'h12 == io_in_bits_ctrl_signal_aluoptype ? mip : _GEN_81; // @[EXE.scala 156:44 CSR.scala 23:20]
  wire [63:0] _GEN_89 = 7'hf == io_in_bits_ctrl_signal_aluoptype ? div_io_out_bits_result_remainder : _GEN_82; // @[EXE.scala 156:44 200:18]
  wire [63:0] _GEN_90 = 7'hf == io_in_bits_ctrl_signal_aluoptype ? mstatus : _GEN_83; // @[EXE.scala 156:44 CSR.scala 20:24]
  wire [63:0] _GEN_91 = 7'hf == io_in_bits_ctrl_signal_aluoptype ? mtvec : _GEN_84; // @[EXE.scala 156:44 CSR.scala 21:22]
  wire [63:0] _GEN_92 = 7'hf == io_in_bits_ctrl_signal_aluoptype ? mepc : _GEN_85; // @[EXE.scala 156:44 CSR.scala 18:17]
  wire [63:0] _GEN_93 = 7'hf == io_in_bits_ctrl_signal_aluoptype ? mcause : _GEN_86; // @[EXE.scala 156:44 CSR.scala 19:23]
  wire [63:0] _GEN_94 = 7'hf == io_in_bits_ctrl_signal_aluoptype ? mie : _GEN_87; // @[EXE.scala 156:44 CSR.scala 22:20]
  wire [63:0] _GEN_95 = 7'hf == io_in_bits_ctrl_signal_aluoptype ? mip : _GEN_88; // @[EXE.scala 156:44 CSR.scala 23:20]
  wire [63:0] _GEN_96 = _is_mul_T_1 ? mul_io_out_bits_result_result_lo : _GEN_89; // @[EXE.scala 156:44 197:18]
  wire [63:0] _GEN_97 = _is_mul_T_1 ? mstatus : _GEN_90; // @[EXE.scala 156:44 CSR.scala 20:24]
  wire [63:0] _GEN_98 = _is_mul_T_1 ? mtvec : _GEN_91; // @[EXE.scala 156:44 CSR.scala 21:22]
  wire [63:0] _GEN_99 = _is_mul_T_1 ? mepc : _GEN_92; // @[EXE.scala 156:44 CSR.scala 18:17]
  wire [63:0] _GEN_100 = _is_mul_T_1 ? mcause : _GEN_93; // @[EXE.scala 156:44 CSR.scala 19:23]
  wire [63:0] _GEN_101 = _is_mul_T_1 ? mie : _GEN_94; // @[EXE.scala 156:44 CSR.scala 22:20]
  wire [63:0] _GEN_102 = _is_mul_T_1 ? mip : _GEN_95; // @[EXE.scala 156:44 CSR.scala 23:20]
  wire [63:0] _GEN_103 = 7'h1 == io_in_bits_ctrl_signal_aluoptype ? _alu_result_T_40 : _GEN_96; // @[EXE.scala 156:44 194:18]
  wire [63:0] _GEN_104 = 7'h1 == io_in_bits_ctrl_signal_aluoptype ? mstatus : _GEN_97; // @[EXE.scala 156:44 CSR.scala 20:24]
  wire [63:0] _GEN_105 = 7'h1 == io_in_bits_ctrl_signal_aluoptype ? mtvec : _GEN_98; // @[EXE.scala 156:44 CSR.scala 21:22]
  wire [63:0] _GEN_106 = 7'h1 == io_in_bits_ctrl_signal_aluoptype ? mepc : _GEN_99; // @[EXE.scala 156:44 CSR.scala 18:17]
  wire [63:0] _GEN_107 = 7'h1 == io_in_bits_ctrl_signal_aluoptype ? mcause : _GEN_100; // @[EXE.scala 156:44 CSR.scala 19:23]
  wire [63:0] _GEN_108 = 7'h1 == io_in_bits_ctrl_signal_aluoptype ? mie : _GEN_101; // @[EXE.scala 156:44 CSR.scala 22:20]
  wire [63:0] _GEN_109 = 7'h1 == io_in_bits_ctrl_signal_aluoptype ? mip : _GEN_102; // @[EXE.scala 156:44 CSR.scala 23:20]
  wire [63:0] _GEN_110 = 7'hd == io_in_bits_ctrl_signal_aluoptype ? _alu_result_T_30 : _GEN_103; // @[EXE.scala 156:44 191:18]
  wire [63:0] _GEN_111 = 7'hd == io_in_bits_ctrl_signal_aluoptype ? mstatus : _GEN_104; // @[EXE.scala 156:44 CSR.scala 20:24]
  wire [63:0] _GEN_112 = 7'hd == io_in_bits_ctrl_signal_aluoptype ? mtvec : _GEN_105; // @[EXE.scala 156:44 CSR.scala 21:22]
  wire [63:0] _GEN_113 = 7'hd == io_in_bits_ctrl_signal_aluoptype ? mepc : _GEN_106; // @[EXE.scala 156:44 CSR.scala 18:17]
  wire [63:0] _GEN_114 = 7'hd == io_in_bits_ctrl_signal_aluoptype ? mcause : _GEN_107; // @[EXE.scala 156:44 CSR.scala 19:23]
  wire [63:0] _GEN_115 = 7'hd == io_in_bits_ctrl_signal_aluoptype ? mie : _GEN_108; // @[EXE.scala 156:44 CSR.scala 22:20]
  wire [63:0] _GEN_116 = 7'hd == io_in_bits_ctrl_signal_aluoptype ? mip : _GEN_109; // @[EXE.scala 156:44 CSR.scala 23:20]
  wire [63:0] _GEN_117 = 7'h7a == io_in_bits_ctrl_signal_aluoptype ? _alu_result_T_30 : _GEN_110; // @[EXE.scala 156:44 188:18]
  wire [63:0] _GEN_118 = 7'h7a == io_in_bits_ctrl_signal_aluoptype ? mstatus : _GEN_111; // @[EXE.scala 156:44 CSR.scala 20:24]
  wire [63:0] _GEN_119 = 7'h7a == io_in_bits_ctrl_signal_aluoptype ? mtvec : _GEN_112; // @[EXE.scala 156:44 CSR.scala 21:22]
  wire [63:0] _GEN_120 = 7'h7a == io_in_bits_ctrl_signal_aluoptype ? mepc : _GEN_113; // @[EXE.scala 156:44 CSR.scala 18:17]
  wire [63:0] _GEN_121 = 7'h7a == io_in_bits_ctrl_signal_aluoptype ? mcause : _GEN_114; // @[EXE.scala 156:44 CSR.scala 19:23]
  wire [63:0] _GEN_122 = 7'h7a == io_in_bits_ctrl_signal_aluoptype ? mie : _GEN_115; // @[EXE.scala 156:44 CSR.scala 22:20]
  wire [63:0] _GEN_123 = 7'h7a == io_in_bits_ctrl_signal_aluoptype ? mip : _GEN_116; // @[EXE.scala 156:44 CSR.scala 23:20]
  wire [63:0] _GEN_124 = 7'h79 == io_in_bits_ctrl_signal_aluoptype ? _alu_result_T_26 : _GEN_117; // @[EXE.scala 156:44 185:18]
  wire [63:0] _GEN_125 = 7'h79 == io_in_bits_ctrl_signal_aluoptype ? mstatus : _GEN_118; // @[EXE.scala 156:44 CSR.scala 20:24]
  wire [63:0] _GEN_126 = 7'h79 == io_in_bits_ctrl_signal_aluoptype ? mtvec : _GEN_119; // @[EXE.scala 156:44 CSR.scala 21:22]
  wire [63:0] _GEN_127 = 7'h79 == io_in_bits_ctrl_signal_aluoptype ? mepc : _GEN_120; // @[EXE.scala 156:44 CSR.scala 18:17]
  wire [63:0] _GEN_128 = 7'h79 == io_in_bits_ctrl_signal_aluoptype ? mcause : _GEN_121; // @[EXE.scala 156:44 CSR.scala 19:23]
  wire [63:0] _GEN_129 = 7'h79 == io_in_bits_ctrl_signal_aluoptype ? mie : _GEN_122; // @[EXE.scala 156:44 CSR.scala 22:20]
  wire [63:0] _GEN_130 = 7'h79 == io_in_bits_ctrl_signal_aluoptype ? mip : _GEN_123; // @[EXE.scala 156:44 CSR.scala 23:20]
  wire [63:0] _GEN_131 = _is_mul_T ? _alu_result_T_22 : _GEN_124; // @[EXE.scala 156:44 182:18]
  wire [63:0] _GEN_132 = _is_mul_T ? mstatus : _GEN_125; // @[EXE.scala 156:44 CSR.scala 20:24]
  wire [63:0] _GEN_133 = _is_mul_T ? mtvec : _GEN_126; // @[EXE.scala 156:44 CSR.scala 21:22]
  wire [63:0] _GEN_134 = _is_mul_T ? mepc : _GEN_127; // @[EXE.scala 156:44 CSR.scala 18:17]
  wire [63:0] _GEN_135 = _is_mul_T ? mcause : _GEN_128; // @[EXE.scala 156:44 CSR.scala 19:23]
  wire [63:0] _GEN_136 = _is_mul_T ? mie : _GEN_129; // @[EXE.scala 156:44 CSR.scala 22:20]
  wire [63:0] _GEN_137 = _is_mul_T ? mip : _GEN_130; // @[EXE.scala 156:44 CSR.scala 23:20]
  wire [63:0] _GEN_138 = 7'h6d == io_in_bits_ctrl_signal_aluoptype ? _alu_result_T_7 : _GEN_131; // @[EXE.scala 156:44 179:18]
  wire [63:0] _GEN_139 = 7'h6d == io_in_bits_ctrl_signal_aluoptype ? mstatus : _GEN_132; // @[EXE.scala 156:44 CSR.scala 20:24]
  wire [63:0] _GEN_140 = 7'h6d == io_in_bits_ctrl_signal_aluoptype ? mtvec : _GEN_133; // @[EXE.scala 156:44 CSR.scala 21:22]
  wire [63:0] _GEN_141 = 7'h6d == io_in_bits_ctrl_signal_aluoptype ? mepc : _GEN_134; // @[EXE.scala 156:44 CSR.scala 18:17]
  wire [63:0] _GEN_142 = 7'h6d == io_in_bits_ctrl_signal_aluoptype ? mcause : _GEN_135; // @[EXE.scala 156:44 CSR.scala 19:23]
  wire [63:0] _GEN_143 = 7'h6d == io_in_bits_ctrl_signal_aluoptype ? mie : _GEN_136; // @[EXE.scala 156:44 CSR.scala 22:20]
  wire [63:0] _GEN_144 = 7'h6d == io_in_bits_ctrl_signal_aluoptype ? mip : _GEN_137; // @[EXE.scala 156:44 CSR.scala 23:20]
  wire [63:0] _GEN_145 = 7'h72 == io_in_bits_ctrl_signal_aluoptype ? _alu_result_T_12 : _GEN_138; // @[EXE.scala 156:44 176:18]
  wire [63:0] _GEN_146 = 7'h72 == io_in_bits_ctrl_signal_aluoptype ? mstatus : _GEN_139; // @[EXE.scala 156:44 CSR.scala 20:24]
  wire [63:0] _GEN_147 = 7'h72 == io_in_bits_ctrl_signal_aluoptype ? mtvec : _GEN_140; // @[EXE.scala 156:44 CSR.scala 21:22]
  wire [63:0] _GEN_148 = 7'h72 == io_in_bits_ctrl_signal_aluoptype ? mepc : _GEN_141; // @[EXE.scala 156:44 CSR.scala 18:17]
  wire [63:0] _GEN_149 = 7'h72 == io_in_bits_ctrl_signal_aluoptype ? mcause : _GEN_142; // @[EXE.scala 156:44 CSR.scala 19:23]
  wire [63:0] _GEN_150 = 7'h72 == io_in_bits_ctrl_signal_aluoptype ? mie : _GEN_143; // @[EXE.scala 156:44 CSR.scala 22:20]
  wire [63:0] _GEN_151 = 7'h72 == io_in_bits_ctrl_signal_aluoptype ? mip : _GEN_144; // @[EXE.scala 156:44 CSR.scala 23:20]
  wire [63:0] _GEN_152 = 7'h71 == io_in_bits_ctrl_signal_aluoptype ? _alu_result_T_11 : _GEN_145; // @[EXE.scala 156:44 173:18]
  wire [63:0] _GEN_153 = 7'h71 == io_in_bits_ctrl_signal_aluoptype ? mstatus : _GEN_146; // @[EXE.scala 156:44 CSR.scala 20:24]
  wire [63:0] _GEN_154 = 7'h71 == io_in_bits_ctrl_signal_aluoptype ? mtvec : _GEN_147; // @[EXE.scala 156:44 CSR.scala 21:22]
  wire [63:0] _GEN_155 = 7'h71 == io_in_bits_ctrl_signal_aluoptype ? mepc : _GEN_148; // @[EXE.scala 156:44 CSR.scala 18:17]
  wire [63:0] _GEN_156 = 7'h71 == io_in_bits_ctrl_signal_aluoptype ? mcause : _GEN_149; // @[EXE.scala 156:44 CSR.scala 19:23]
  wire [63:0] _GEN_157 = 7'h71 == io_in_bits_ctrl_signal_aluoptype ? mie : _GEN_150; // @[EXE.scala 156:44 CSR.scala 22:20]
  wire [63:0] _GEN_158 = 7'h71 == io_in_bits_ctrl_signal_aluoptype ? mip : _GEN_151; // @[EXE.scala 156:44 CSR.scala 23:20]
  wire [63:0] _GEN_159 = 7'h69 == io_in_bits_ctrl_signal_aluoptype ? _alu_result_T_10 : _GEN_152; // @[EXE.scala 156:44 170:18]
  wire [63:0] _GEN_160 = 7'h69 == io_in_bits_ctrl_signal_aluoptype ? mstatus : _GEN_153; // @[EXE.scala 156:44 CSR.scala 20:24]
  wire [63:0] _GEN_161 = 7'h69 == io_in_bits_ctrl_signal_aluoptype ? mtvec : _GEN_154; // @[EXE.scala 156:44 CSR.scala 21:22]
  wire [63:0] _GEN_162 = 7'h69 == io_in_bits_ctrl_signal_aluoptype ? mepc : _GEN_155; // @[EXE.scala 156:44 CSR.scala 18:17]
  wire [63:0] _GEN_163 = 7'h69 == io_in_bits_ctrl_signal_aluoptype ? mcause : _GEN_156; // @[EXE.scala 156:44 CSR.scala 19:23]
  wire [63:0] _GEN_164 = 7'h69 == io_in_bits_ctrl_signal_aluoptype ? mie : _GEN_157; // @[EXE.scala 156:44 CSR.scala 22:20]
  wire [63:0] _GEN_165 = 7'h69 == io_in_bits_ctrl_signal_aluoptype ? mip : _GEN_158; // @[EXE.scala 156:44 CSR.scala 23:20]
  wire [63:0] _GEN_166 = 7'h44 == io_in_bits_ctrl_signal_aluoptype ? _alu_result_T_8 : _GEN_159; // @[EXE.scala 156:44 167:18]
  wire [63:0] _GEN_167 = 7'h44 == io_in_bits_ctrl_signal_aluoptype ? mstatus : _GEN_160; // @[EXE.scala 156:44 CSR.scala 20:24]
  wire [63:0] _GEN_168 = 7'h44 == io_in_bits_ctrl_signal_aluoptype ? mtvec : _GEN_161; // @[EXE.scala 156:44 CSR.scala 21:22]
  wire [63:0] _GEN_169 = 7'h44 == io_in_bits_ctrl_signal_aluoptype ? mepc : _GEN_162; // @[EXE.scala 156:44 CSR.scala 18:17]
  wire [63:0] _GEN_170 = 7'h44 == io_in_bits_ctrl_signal_aluoptype ? mcause : _GEN_163; // @[EXE.scala 156:44 CSR.scala 19:23]
  wire [63:0] _GEN_171 = 7'h44 == io_in_bits_ctrl_signal_aluoptype ? mie : _GEN_164; // @[EXE.scala 156:44 CSR.scala 22:20]
  wire [63:0] _GEN_172 = 7'h44 == io_in_bits_ctrl_signal_aluoptype ? mip : _GEN_165; // @[EXE.scala 156:44 CSR.scala 23:20]
  wire [63:0] _GEN_173 = 7'h68 == io_in_bits_ctrl_signal_aluoptype ? _alu_result_T_7 : _GEN_166; // @[EXE.scala 156:44 164:18]
  wire [63:0] _GEN_174 = 7'h68 == io_in_bits_ctrl_signal_aluoptype ? mstatus : _GEN_167; // @[EXE.scala 156:44 CSR.scala 20:24]
  wire [63:0] _GEN_177 = 7'h68 == io_in_bits_ctrl_signal_aluoptype ? mcause : _GEN_170; // @[EXE.scala 156:44 CSR.scala 19:23]
  wire [63:0] _GEN_180 = 7'h1a == io_in_bits_ctrl_signal_aluoptype ? src2 : _GEN_173; // @[EXE.scala 156:44 161:18]
  wire [63:0] _GEN_181 = 7'h1a == io_in_bits_ctrl_signal_aluoptype ? mstatus : _GEN_174; // @[EXE.scala 156:44 CSR.scala 20:24]
  wire [63:0] alu_result = 7'h40 == io_in_bits_ctrl_signal_aluoptype ? _alu_result_T_1 : _GEN_180; // @[EXE.scala 156:44 158:18]
  wire [63:0] _shift_result_T = 3'h0 == io_in_bits_ctrl_signal_src1Type ? io_src1 : _GEN_1; // @[EXE.scala 226:29]
  wire [63:0] _shift_result_T_3 = $signed(_shift_result_T) >>> src2[4:0]; // @[EXE.scala 226:51]
  wire [94:0] _GEN_0 = {{31'd0}, src1}; // @[EXE.scala 230:39]
  wire [94:0] _shift_result_T_5 = _GEN_0 << src2[4:0]; // @[EXE.scala 230:39]
  wire  shift_result_sign = _shift_result_T_5[31]; // @[util.scala 11:19]
  wire [31:0] _shift_result_T_8 = shift_result_sign ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _shift_result_T_9 = {_shift_result_T_8,_shift_result_T_5[31:0]}; // @[Cat.scala 31:58]
  wire [126:0] _GEN_2 = {{63'd0}, src1}; // @[EXE.scala 233:28]
  wire [126:0] _shift_result_T_11 = _GEN_2 << src2[5:0]; // @[EXE.scala 233:28]
  wire [63:0] _shift_result_T_13 = src1 >> src2[5:0]; // @[EXE.scala 236:35]
  wire [94:0] _GEN_4 = {{63'd0}, src1[31:0]}; // @[EXE.scala 239:46]
  wire [94:0] _shift_result_T_16 = _GEN_4 << src2[5:0]; // @[EXE.scala 239:46]
  wire  shift_result_sign_1 = _shift_result_T_16[31]; // @[util.scala 11:19]
  wire [31:0] _shift_result_T_19 = shift_result_sign_1 ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _shift_result_T_20 = {_shift_result_T_19,_shift_result_T_16[31:0]}; // @[Cat.scala 31:58]
  wire [31:0] _shift_result_T_22 = src1[31:0]; // @[EXE.scala 242:46]
  wire [31:0] _shift_result_T_25 = $signed(_shift_result_T_22) >>> src2[4:0]; // @[EXE.scala 242:68]
  wire  shift_result_sign_2 = _shift_result_T_25[31]; // @[util.scala 11:19]
  wire [31:0] _shift_result_T_27 = shift_result_sign_2 ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _shift_result_T_28 = {_shift_result_T_27,_shift_result_T_25}; // @[Cat.scala 31:58]
  wire [31:0] _shift_result_T_31 = src1[31:0] >> src2[4:0]; // @[EXE.scala 245:46]
  wire  shift_result_sign_3 = _shift_result_T_31[31]; // @[util.scala 11:19]
  wire [31:0] _shift_result_T_34 = shift_result_sign_3 ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _shift_result_T_35 = {_shift_result_T_34,_shift_result_T_31}; // @[Cat.scala 31:58]
  wire [63:0] _shift_result_T_54 = $signed(_shift_result_T) >>> src2[5:0]; // @[EXE.scala 254:51]
  wire [63:0] _GEN_194 = 7'h14 == io_in_bits_ctrl_signal_aluoptype ? _shift_result_T_54 : 64'h0; // @[EXE.scala 224:44 254:20]
  wire [63:0] _GEN_195 = 7'ha == io_in_bits_ctrl_signal_aluoptype ? _shift_result_T_35 : _GEN_194; // @[EXE.scala 224:44 251:20]
  wire [63:0] _GEN_196 = 7'h9 == io_in_bits_ctrl_signal_aluoptype ? _shift_result_T_28 : _GEN_195; // @[EXE.scala 224:44 248:20]
  wire [63:0] _GEN_197 = 7'h8 == io_in_bits_ctrl_signal_aluoptype ? _shift_result_T_35 : _GEN_196; // @[EXE.scala 224:44 245:20]
  wire [63:0] _GEN_198 = 7'h6 == io_in_bits_ctrl_signal_aluoptype ? _shift_result_T_28 : _GEN_197; // @[EXE.scala 224:44 242:20]
  wire [63:0] _GEN_199 = 7'h5 == io_in_bits_ctrl_signal_aluoptype ? _shift_result_T_20 : _GEN_198; // @[EXE.scala 224:44 239:20]
  wire [63:0] _GEN_200 = 7'h75 == io_in_bits_ctrl_signal_aluoptype ? _shift_result_T_13 : _GEN_199; // @[EXE.scala 224:44 236:20]
  wire [126:0] _GEN_201 = 7'h41 == io_in_bits_ctrl_signal_aluoptype ? _shift_result_T_11 : {{63'd0}, _GEN_200}; // @[EXE.scala 224:44 233:20]
  wire [126:0] _GEN_202 = 7'h73 == io_in_bits_ctrl_signal_aluoptype ? {{63'd0}, _shift_result_T_9} : _GEN_201; // @[EXE.scala 224:44 230:20]
  wire [126:0] _GEN_203 = 7'h6e == io_in_bits_ctrl_signal_aluoptype ? {{63'd0}, _shift_result_T_3} : _GEN_202; // @[EXE.scala 224:44 226:20]
  wire [63:0] _mul_io_in_bits_ctrl_data_src1_T_2 = {32'h0,src1[31:0]}; // @[Cat.scala 31:58]
  wire [63:0] _mul_io_in_bits_ctrl_data_src2_T_2 = {32'h0,src2[31:0]}; // @[Cat.scala 31:58]
  wire  _mul_io_in_valid_T = ~mul_io_out_valid; // @[EXE.scala 263:36]
  wire  div_io_in_bits_ctrl_data_src1_sign = src1[31]; // @[util.scala 11:19]
  wire [31:0] _div_io_in_bits_ctrl_data_src1_T_2 = div_io_in_bits_ctrl_data_src1_sign ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _div_io_in_bits_ctrl_data_src1_T_3 = {_div_io_in_bits_ctrl_data_src1_T_2,src1[31:0]}; // @[Cat.scala 31:58]
  wire [63:0] _div_io_in_bits_ctrl_data_src1_T_7 = is_div_sign ? _div_io_in_bits_ctrl_data_src1_T_3 :
    _mul_io_in_bits_ctrl_data_src1_T_2; // @[EXE.scala 269:51]
  wire  div_io_in_bits_ctrl_data_src2_sign = src2[31]; // @[util.scala 11:19]
  wire [31:0] _div_io_in_bits_ctrl_data_src2_T_2 = div_io_in_bits_ctrl_data_src2_sign ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _div_io_in_bits_ctrl_data_src2_T_3 = {_div_io_in_bits_ctrl_data_src2_T_2,src2[31:0]}; // @[Cat.scala 31:58]
  wire [63:0] _div_io_in_bits_ctrl_data_src2_T_7 = is_div_sign ? _div_io_in_bits_ctrl_data_src2_T_3 :
    _mul_io_in_bits_ctrl_data_src2_T_2; // @[EXE.scala 270:51]
  wire  _div_io_in_valid_T = ~div_io_out_valid; // @[EXE.scala 271:36]
  wire  _compar_result_T = src1 < src2; // @[EXE.scala 279:34]
  wire [63:0] _compar_result_T_1 = src1 < src2 ? 64'h1 : 64'h0; // @[EXE.scala 279:27]
  wire [63:0] _compar_result_T_3 = 3'h0 == io_in_bits_ctrl_signal_src2Type ? io_src2 : _GEN_3; // @[EXE.scala 282:48]
  wire  _compar_result_T_4 = $signed(_shift_result_T) < $signed(_compar_result_T_3); // @[EXE.scala 282:41]
  wire [63:0] _compar_result_T_5 = $signed(_shift_result_T) < $signed(_compar_result_T_3) ? 64'h1 : 64'h0; // @[EXE.scala 282:27]
  wire [63:0] _GEN_204 = 7'h2 == io_in_bits_ctrl_signal_aluoptype ? _compar_result_T_5 : 64'h0; // @[EXE.scala 277:44 282:21]
  wire [63:0] compar_result = 7'h6a == io_in_bits_ctrl_signal_aluoptype ? _compar_result_T_1 : _GEN_204; // @[EXE.scala 277:44 279:21]
  wire  _jump_result_T = io_in_bits_ctrl_signal_fuType == 3'h3; // @[EXE.scala 287:52]
  wire [63:0] jump_result = io_in_bits_ctrl_signal_fuType == 3'h3 ? _dnpc_T_1 : 64'h0; // @[EXE.scala 287:21]
  wire [63:0] _GEN_206 = 3'h5 == io_in_bits_ctrl_signal_fuType ? compar_result : 64'h0; // @[EXE.scala 290:41 304:18]
  wire [63:0] shift_result = _GEN_203[63:0];
  wire [63:0] _GEN_207 = 3'h1 == io_in_bits_ctrl_signal_fuType ? shift_result : _GEN_206; // @[EXE.scala 290:41 301:18]
  wire [63:0] _GEN_208 = 3'h2 == io_in_bits_ctrl_signal_fuType ? 64'h0 : _GEN_207; // @[EXE.scala 290:41 298:18]
  wire [63:0] _GEN_209 = 3'h3 == io_in_bits_ctrl_signal_fuType ? jump_result : _GEN_208; // @[EXE.scala 290:41 295:18]
  wire  _T_71 = 7'h6b == io_in_bits_ctrl_signal_aluoptype; // @[EXE.scala 312:44]
  wire [63:0] _branch_result_T_1 = io_in_bits_ctrl_flow_PC + io_in_bits_ctrl_data_Imm; // @[EXE.scala 314:27]
  wire  _T_72 = 7'h6c == io_in_bits_ctrl_signal_aluoptype; // @[EXE.scala 312:44]
  wire  _T_73 = 7'h76 == io_in_bits_ctrl_signal_aluoptype; // @[EXE.scala 312:44]
  wire  _T_74 = 7'h7b == io_in_bits_ctrl_signal_aluoptype; // @[EXE.scala 312:44]
  wire  _T_75 = 7'hb == io_in_bits_ctrl_signal_aluoptype; // @[EXE.scala 312:44]
  wire  _T_76 = 7'hc == io_in_bits_ctrl_signal_aluoptype; // @[EXE.scala 312:44]
  wire  _T_77 = 7'h17 == io_in_bits_ctrl_signal_aluoptype; // @[EXE.scala 312:44]
  wire  _T_78 = 7'h18 == io_in_bits_ctrl_signal_aluoptype; // @[EXE.scala 312:44]
  wire  _GEN_212 = 7'h17 == io_in_bits_ctrl_signal_aluoptype | 7'h18 == io_in_bits_ctrl_signal_aluoptype; // @[EXE.scala 312:44 339:19]
  wire [63:0] _GEN_213 = 7'hc == io_in_bits_ctrl_signal_aluoptype ? _branch_result_T_1 : 64'h0; // @[EXE.scala 312:44 334:21]
  wire  _GEN_214 = 7'hc == io_in_bits_ctrl_signal_aluoptype ? src1 >= src2 : _GEN_212; // @[EXE.scala 312:44 335:19]
  wire [63:0] _GEN_215 = 7'hb == io_in_bits_ctrl_signal_aluoptype ? _branch_result_T_1 : _GEN_213; // @[EXE.scala 312:44 330:21]
  wire  _GEN_216 = 7'hb == io_in_bits_ctrl_signal_aluoptype ? _compar_result_T : _GEN_214; // @[EXE.scala 312:44 331:19]
  wire [63:0] _GEN_217 = 7'h7b == io_in_bits_ctrl_signal_aluoptype ? _branch_result_T_1 : _GEN_215; // @[EXE.scala 312:44 326:21]
  wire  _GEN_218 = 7'h7b == io_in_bits_ctrl_signal_aluoptype ? _compar_result_T_4 : _GEN_216; // @[EXE.scala 312:44 327:19]
  wire [63:0] _GEN_219 = 7'h76 == io_in_bits_ctrl_signal_aluoptype ? _branch_result_T_1 : _GEN_217; // @[EXE.scala 312:44 322:21]
  wire  _GEN_220 = 7'h76 == io_in_bits_ctrl_signal_aluoptype ? $signed(_shift_result_T) >= $signed(_compar_result_T_3)
     : _GEN_218; // @[EXE.scala 312:44 323:19]
  wire [63:0] _GEN_221 = 7'h6c == io_in_bits_ctrl_signal_aluoptype ? _branch_result_T_1 : _GEN_219; // @[EXE.scala 312:44 318:21]
  wire  _GEN_222 = 7'h6c == io_in_bits_ctrl_signal_aluoptype ? src1 != src2 : _GEN_220; // @[EXE.scala 312:44 319:19]
  wire [63:0] branch_result = 7'h6b == io_in_bits_ctrl_signal_aluoptype ? _branch_result_T_1 : _GEN_221; // @[EXE.scala 312:44 314:21]
  wire  branch_flag = 7'h6b == io_in_bits_ctrl_signal_aluoptype ? src1 == src2 : _GEN_222; // @[EXE.scala 312:44 315:19]
  wire [63:0] _T_92 = mstatus & 64'hfffffffffffffff7; // @[EXE.scala 350:64]
  wire [63:0] _T_112 = mstatus | 64'h8; // @[EXE.scala 354:64]
  wire [63:0] _GEN_267 = _T_78 ? mepc : 64'h0; // @[EXE.scala 347:44 353:16]
  wire [63:0] csr_data = _T_77 ? mtvec : _GEN_267; // @[EXE.scala 347:44 349:16]
  wire [63:0] _dnpc_T_7 = {_alu_result_T_1[63:1],1'h0}; // @[Cat.scala 31:58]
  wire [63:0] _dnpc_T_11 = branch_flag ? branch_result : _dnpc_T_1; // @[EXE.scala 367:18]
  wire [63:0] _GEN_281 = _T_78 ? csr_data : _dnpc_T_1; // @[EXE.scala 359:44 390:12]
  wire [63:0] _GEN_282 = _T_77 ? csr_data : _GEN_281; // @[EXE.scala 359:44 387:12]
  wire [63:0] _GEN_283 = _T_75 ? _dnpc_T_11 : _GEN_282; // @[EXE.scala 359:44 383:12]
  wire [63:0] _GEN_284 = _T_74 ? _dnpc_T_11 : _GEN_283; // @[EXE.scala 359:44 380:12]
  wire [63:0] _GEN_285 = _T_76 ? _dnpc_T_11 : _GEN_284; // @[EXE.scala 359:44 377:12]
  wire [63:0] _GEN_286 = _T_73 ? _dnpc_T_11 : _GEN_285; // @[EXE.scala 359:44 374:12]
  wire [63:0] _GEN_287 = _T_72 ? _dnpc_T_11 : _GEN_286; // @[EXE.scala 359:44 371:12]
  wire [63:0] _GEN_288 = _T_71 ? _dnpc_T_11 : _GEN_287; // @[EXE.scala 359:44 367:12]
  wire [63:0] _GEN_289 = 7'h48 == io_in_bits_ctrl_signal_aluoptype ? _dnpc_T_7 : _GEN_288; // @[EXE.scala 359:44 364:12]
  reg [63:0] CSRDIFF_io_mtvec_REG; // @[EXE.scala 409:38]
  reg [63:0] CSRDIFF_io_mtvec_REG_1; // @[EXE.scala 409:30]
  reg [63:0] CSRDIFF_io_mcause_REG; // @[EXE.scala 410:39]
  reg [63:0] CSRDIFF_io_mcause_REG_1; // @[EXE.scala 410:31]
  reg [63:0] CSRDIFF_io_mepc_REG; // @[EXE.scala 411:37]
  reg [63:0] CSRDIFF_io_mepc_REG_1; // @[EXE.scala 411:29]
  reg [63:0] CSRDIFF_io_mstatus_REG; // @[EXE.scala 412:40]
  reg [63:0] CSRDIFF_io_mstatus_REG_1; // @[EXE.scala 412:32]
  wire  _io_out_valid_T_1 = _mul_io_in_valid_T & is_mul; // @[EXE.scala 436:43]
  wire  _io_out_valid_T_4 = _div_io_in_valid_T & is_div; // @[EXE.scala 436:78]
  CSR_DIFF CSRDIFF ( // @[EXE.scala 115:21]
    .mepc(CSRDIFF_mepc),
    .mcause(CSRDIFF_mcause),
    .mstatus(CSRDIFF_mstatus),
    .mtvec(CSRDIFF_mtvec)
  );
  MUL mul ( // @[EXE.scala 118:19]
    .clock(mul_clock),
    .reset(mul_reset),
    .io_in_valid(mul_io_in_valid),
    .io_in_bits_ctrl_data_src1(mul_io_in_bits_ctrl_data_src1),
    .io_in_bits_ctrl_data_src2(mul_io_in_bits_ctrl_data_src2),
    .io_out_valid(mul_io_out_valid),
    .io_out_bits_result_result_lo(mul_io_out_bits_result_result_lo)
  );
  DIV div ( // @[EXE.scala 119:19]
    .clock(div_clock),
    .reset(div_reset),
    .io_in_valid(div_io_in_valid),
    .io_in_bits_ctrl_flow_div_signed(div_io_in_bits_ctrl_flow_div_signed),
    .io_in_bits_ctrl_data_src1(div_io_in_bits_ctrl_data_src1),
    .io_in_bits_ctrl_data_src2(div_io_in_bits_ctrl_data_src2),
    .io_out_valid(div_io_out_valid),
    .io_out_bits_result_quotient(div_io_out_bits_result_quotient),
    .io_out_bits_result_remainder(div_io_out_bits_result_remainder)
  );
  assign io_in_ready = (_io_out_valid_T_1 | _io_out_valid_T_4) & io_in_valid ? 1'h0 : io_out_ready; // @[EXE.scala 437:21]
  assign io_branchIO_is_branch = branch_flag & io_out_bits_ctrl_signal_inst_valid & io_in_valid; // @[EXE.scala 433:77]
  assign io_branchIO_is_jump = _jump_result_T & io_out_bits_ctrl_signal_inst_valid & io_in_valid; // @[EXE.scala 434:114]
  assign io_branchIO_dnpc = 7'h19 == io_in_bits_ctrl_signal_aluoptype ? _alu_result_T_1 : _GEN_289; // @[EXE.scala 359:44 361:12]
  assign io_out_valid = ~(_mul_io_in_valid_T & is_mul) & ~(_div_io_in_valid_T & is_div) & io_in_valid; // @[EXE.scala 436:89]
  assign io_out_bits_ctrl_signal_fuType = io_in_bits_ctrl_signal_fuType; // @[EXE.scala 419:27]
  assign io_out_bits_ctrl_signal_inst_valid = io_in_bits_ctrl_signal_inst_valid; // @[EXE.scala 423:38]
  assign io_out_bits_ctrl_signal_rfWen = io_in_bits_ctrl_signal_rfWen; // @[EXE.scala 419:27]
  assign io_out_bits_ctrl_signal_aluoptype = io_in_bits_ctrl_signal_aluoptype; // @[EXE.scala 419:27]
  assign io_out_bits_ctrl_flow_PC = io_in_bits_ctrl_flow_PC; // @[EXE.scala 420:25]
  assign io_out_bits_ctrl_flow_inst = io_in_bits_ctrl_flow_inst; // @[EXE.scala 420:25]
  assign io_out_bits_ctrl_flow_Dnpc = 7'h19 == io_in_bits_ctrl_signal_aluoptype ? _alu_result_T_1 : _GEN_289; // @[EXE.scala 359:44 361:12]
  assign io_out_bits_ctrl_rf_rfDest = io_in_bits_ctrl_signal_rfDest; // @[EXE.scala 429:30]
  assign io_out_bits_ctrl_rf_rfWen = io_in_valid & io_in_bits_ctrl_signal_rfWen; // @[EXE.scala 430:35]
  assign io_out_bits_ctrl_rf_rfData = 3'h0 == io_in_bits_ctrl_signal_fuType ? alu_result : _GEN_209; // @[EXE.scala 290:41 292:18]
  assign io_out_bits_ctrl_data_src1 = 3'h0 == io_in_bits_ctrl_signal_src1Type ? io_src1 : _GEN_1; // @[EXE.scala 124:43 126:12]
  assign io_out_bits_ctrl_data_src2 = 3'h0 == io_in_bits_ctrl_signal_src2Type ? io_src2 : _GEN_3; // @[EXE.scala 135:43 138:12]
  assign io_out_bits_ctrl_data_Imm = io_in_bits_ctrl_data_Imm; // @[EXE.scala 421:25]
  assign io_is_break = io_in_bits_ctrl_signal_aluoptype == 7'h42 & io_out_bits_ctrl_signal_inst_valid; // @[EXE.scala 415:77]
  assign io_is_flush = (branch_flag | io_branchIO_is_jump) & io_in_valid; // @[EXE.scala 414:75]
  assign CSRDIFF_mepc = CSRDIFF_io_mepc_REG_1; // @[EXE.scala 411:19]
  assign CSRDIFF_mcause = CSRDIFF_io_mcause_REG_1; // @[EXE.scala 410:21]
  assign CSRDIFF_mstatus = CSRDIFF_io_mstatus_REG_1; // @[EXE.scala 412:22]
  assign CSRDIFF_mtvec = CSRDIFF_io_mtvec_REG_1; // @[EXE.scala 409:20]
  assign mul_clock = clock;
  assign mul_reset = reset;
  assign mul_io_in_valid = is_mul & ~mul_io_out_valid; // @[EXE.scala 263:33]
  assign mul_io_in_bits_ctrl_data_src1 = is_mul ? src1 : _mul_io_in_bits_ctrl_data_src1_T_2; // @[EXE.scala 259:39]
  assign mul_io_in_bits_ctrl_data_src2 = is_mul ? src2 : _mul_io_in_bits_ctrl_data_src2_T_2; // @[EXE.scala 260:39]
  assign div_clock = clock;
  assign div_reset = reset;
  assign div_io_in_valid = is_div & ~div_io_out_valid; // @[EXE.scala 271:33]
  assign div_io_in_bits_ctrl_flow_div_signed = _is_div_sign_T_2 | _is_div_T_7 | _is_div_T_11; // @[EXE.scala 112:59]
  assign div_io_in_bits_ctrl_data_src1 = is_divw ? _div_io_in_bits_ctrl_data_src1_T_7 : src1; // @[EXE.scala 269:39]
  assign div_io_in_bits_ctrl_data_src2 = is_divw ? _div_io_in_bits_ctrl_data_src2_T_7 : src2; // @[EXE.scala 270:39]
  always @(posedge clock) begin
    if (_T_77) begin // @[EXE.scala 394:44]
      mepc <= io_in_bits_ctrl_flow_PC;
    end else if (!(7'h40 == io_in_bits_ctrl_signal_aluoptype)) begin // @[EXE.scala 156:44]
      if (!(7'h1a == io_in_bits_ctrl_signal_aluoptype)) begin // @[EXE.scala 156:44]
        if (!(7'h68 == io_in_bits_ctrl_signal_aluoptype)) begin // @[EXE.scala 156:44]
          mepc <= _GEN_169;
        end
      end
    end
    if (reset) begin // @[CSR.scala 19:23]
      mcause <= 64'h0; // @[CSR.scala 19:23]
    end else if (_T_77) begin // @[EXE.scala 394:44]
      mcause <= 64'hb;
    end else if (!(7'h40 == io_in_bits_ctrl_signal_aluoptype)) begin // @[EXE.scala 156:44]
      if (!(7'h1a == io_in_bits_ctrl_signal_aluoptype)) begin // @[EXE.scala 156:44]
        mcause <= _GEN_177;
      end
    end
    if (reset) begin // @[CSR.scala 20:24]
      mstatus <= 64'h0; // @[CSR.scala 20:24]
    end else if (_T_77) begin // @[EXE.scala 347:44]
      mstatus <= _T_92;
    end else if (_T_78) begin // @[EXE.scala 347:44]
      mstatus <= _T_112;
    end else if (!(7'h40 == io_in_bits_ctrl_signal_aluoptype)) begin // @[EXE.scala 156:44]
      mstatus <= _GEN_181;
    end
    if (reset) begin // @[CSR.scala 21:22]
      mtvec <= 64'h0; // @[CSR.scala 21:22]
    end else if (!(7'h40 == io_in_bits_ctrl_signal_aluoptype)) begin // @[EXE.scala 156:44]
      if (!(7'h1a == io_in_bits_ctrl_signal_aluoptype)) begin // @[EXE.scala 156:44]
        if (!(7'h68 == io_in_bits_ctrl_signal_aluoptype)) begin // @[EXE.scala 156:44]
          mtvec <= _GEN_168;
        end
      end
    end
    if (reset) begin // @[CSR.scala 22:20]
      mie <= 64'h0; // @[CSR.scala 22:20]
    end else if (!(7'h40 == io_in_bits_ctrl_signal_aluoptype)) begin // @[EXE.scala 156:44]
      if (!(7'h1a == io_in_bits_ctrl_signal_aluoptype)) begin // @[EXE.scala 156:44]
        if (!(7'h68 == io_in_bits_ctrl_signal_aluoptype)) begin // @[EXE.scala 156:44]
          mie <= _GEN_171;
        end
      end
    end
    if (reset) begin // @[CSR.scala 23:20]
      mip <= 64'h0; // @[CSR.scala 23:20]
    end else if (!(7'h40 == io_in_bits_ctrl_signal_aluoptype)) begin // @[EXE.scala 156:44]
      if (!(7'h1a == io_in_bits_ctrl_signal_aluoptype)) begin // @[EXE.scala 156:44]
        if (!(7'h68 == io_in_bits_ctrl_signal_aluoptype)) begin // @[EXE.scala 156:44]
          mip <= _GEN_172;
        end
      end
    end
    CSRDIFF_io_mtvec_REG <= mtvec; // @[EXE.scala 409:38]
    CSRDIFF_io_mtvec_REG_1 <= CSRDIFF_io_mtvec_REG; // @[EXE.scala 409:30]
    CSRDIFF_io_mcause_REG <= mcause; // @[EXE.scala 410:39]
    CSRDIFF_io_mcause_REG_1 <= CSRDIFF_io_mcause_REG; // @[EXE.scala 410:31]
    CSRDIFF_io_mepc_REG <= mepc; // @[EXE.scala 411:37]
    CSRDIFF_io_mepc_REG_1 <= CSRDIFF_io_mepc_REG; // @[EXE.scala 411:29]
    CSRDIFF_io_mstatus_REG <= mstatus; // @[EXE.scala 412:40]
    CSRDIFF_io_mstatus_REG_1 <= CSRDIFF_io_mstatus_REG; // @[EXE.scala 412:32]
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
  output        io_in_ready,
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
  input         io_out_ready,
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
  output        io_cache_io_addr_req_valid,
  output [63:0] io_cache_io_addr_req_bits_addr,
  output        io_cache_io_addr_req_bits_ce,
  output        io_cache_io_addr_req_bits_we,
  input         io_cache_io_rdata_rep_valid,
  input  [63:0] io_cache_io_rdata_rep_bits_rdata,
  output [63:0] io_cache_io_wdata_req_bits_wdata,
  output [7:0]  io_cache_io_wdata_req_bits_wmask,
  input         io_cache_io_wdata_rep
);
  wire  _T_62 = 7'h45 == io_in_bits_ctrl_signal_aluoptype; // @[MEM.scala 54:44]
  wire [63:0] _addr_temp_T_1 = io_in_bits_ctrl_data_src1 + io_in_bits_ctrl_data_Imm; // @[MEM.scala 56:25]
  wire  _T_63 = 7'h46 == io_in_bits_ctrl_signal_aluoptype; // @[MEM.scala 54:44]
  wire  _T_64 = 7'h70 == io_in_bits_ctrl_signal_aluoptype; // @[MEM.scala 54:44]
  wire  _T_65 = 7'h47 == io_in_bits_ctrl_signal_aluoptype; // @[MEM.scala 54:44]
  wire  _T_66 = 7'h11 == io_in_bits_ctrl_signal_aluoptype; // @[MEM.scala 54:44]
  wire  _T_67 = 7'h6f == io_in_bits_ctrl_signal_aluoptype; // @[MEM.scala 54:44]
  wire  _T_68 = 7'he == io_in_bits_ctrl_signal_aluoptype; // @[MEM.scala 54:44]
  wire  _T_69 = 7'h74 == io_in_bits_ctrl_signal_aluoptype; // @[MEM.scala 54:44]
  wire  _T_70 = 7'h77 == io_in_bits_ctrl_signal_aluoptype; // @[MEM.scala 54:44]
  wire  _T_71 = 7'h3 == io_in_bits_ctrl_signal_aluoptype; // @[MEM.scala 54:44]
  wire  _T_72 = 7'h4 == io_in_bits_ctrl_signal_aluoptype; // @[MEM.scala 54:44]
  wire [63:0] _GEN_0 = 7'h4 == io_in_bits_ctrl_signal_aluoptype ? _addr_temp_T_1 : 64'h0; // @[MEM.scala 54:44 90:17]
  wire [63:0] _GEN_1 = 7'h3 == io_in_bits_ctrl_signal_aluoptype ? _addr_temp_T_1 : _GEN_0; // @[MEM.scala 54:44 87:17]
  wire [63:0] _GEN_2 = 7'h77 == io_in_bits_ctrl_signal_aluoptype ? _addr_temp_T_1 : _GEN_1; // @[MEM.scala 54:44 83:17]
  wire [63:0] _GEN_4 = 7'h74 == io_in_bits_ctrl_signal_aluoptype ? _addr_temp_T_1 : _GEN_2; // @[MEM.scala 54:44 79:17]
  wire [63:0] _GEN_6 = 7'he == io_in_bits_ctrl_signal_aluoptype ? _addr_temp_T_1 : _GEN_4; // @[MEM.scala 54:44 76:17]
  wire [63:0] _GEN_8 = 7'h6f == io_in_bits_ctrl_signal_aluoptype ? _addr_temp_T_1 : _GEN_6; // @[MEM.scala 54:44 73:17]
  wire [63:0] _GEN_10 = 7'h11 == io_in_bits_ctrl_signal_aluoptype ? _addr_temp_T_1 : _GEN_8; // @[MEM.scala 54:44 70:17]
  wire [63:0] _GEN_12 = 7'h47 == io_in_bits_ctrl_signal_aluoptype ? _addr_temp_T_1 : _GEN_10; // @[MEM.scala 54:44 67:17]
  wire [63:0] _GEN_14 = 7'h70 == io_in_bits_ctrl_signal_aluoptype ? _addr_temp_T_1 : _GEN_12; // @[MEM.scala 54:44 63:17]
  wire [63:0] _GEN_16 = 7'h46 == io_in_bits_ctrl_signal_aluoptype ? _addr_temp_T_1 : _GEN_14; // @[MEM.scala 54:44 59:17]
  wire [63:0] addr_temp = 7'h45 == io_in_bits_ctrl_signal_aluoptype ? _addr_temp_T_1 : _GEN_16; // @[MEM.scala 54:44 56:17]
  wire  _T_1 = addr_temp[2:0] == 3'h0; // @[MEM.scala 34:22]
  wire  _T_3 = addr_temp[2:0] == 3'h1; // @[MEM.scala 35:22]
  wire  _T_5 = addr_temp[2:0] == 3'h2; // @[MEM.scala 36:22]
  wire  _T_7 = addr_temp[2:0] == 3'h3; // @[MEM.scala 37:22]
  wire  _T_9 = addr_temp[2:0] == 3'h4; // @[MEM.scala 38:22]
  wire  _T_11 = addr_temp[2:0] == 3'h5; // @[MEM.scala 39:22]
  wire  _T_13 = addr_temp[2:0] == 3'h6; // @[MEM.scala 40:22]
  wire  _T_15 = addr_temp[2:0] == 3'h7; // @[MEM.scala 41:22]
  wire [63:0] _T_20 = {56'h0,io_in_bits_ctrl_data_src2[7:0]}; // @[Cat.scala 31:58]
  wire [63:0] _T_26 = {48'h0,io_in_bits_ctrl_data_src2[7:0],8'h0}; // @[Cat.scala 31:58]
  wire [63:0] _T_32 = {40'h0,io_in_bits_ctrl_data_src2[7:0],16'h0}; // @[Cat.scala 31:58]
  wire [63:0] _T_38 = {32'h0,io_in_bits_ctrl_data_src2[7:0],24'h0}; // @[Cat.scala 31:58]
  wire [63:0] _T_44 = {24'h0,io_in_bits_ctrl_data_src2[7:0],32'h0}; // @[Cat.scala 31:58]
  wire [63:0] _T_50 = {16'h0,io_in_bits_ctrl_data_src2[7:0],40'h0}; // @[Cat.scala 31:58]
  wire [63:0] _T_56 = {8'h0,io_in_bits_ctrl_data_src2[7:0],48'h0}; // @[Cat.scala 31:58]
  wire [63:0] _T_61 = {io_in_bits_ctrl_data_src2[7:0],56'h0}; // @[Cat.scala 31:58]
  wire  _GEN_5 = 7'h74 == io_in_bits_ctrl_signal_aluoptype | 7'h77 == io_in_bits_ctrl_signal_aluoptype; // @[MEM.scala 54:44 80:10]
  wire  _GEN_7 = 7'he == io_in_bits_ctrl_signal_aluoptype ? 1'h0 : _GEN_5; // @[MEM.scala 54:44]
  wire  _GEN_9 = 7'h6f == io_in_bits_ctrl_signal_aluoptype ? 1'h0 : _GEN_7; // @[MEM.scala 54:44]
  wire  _GEN_11 = 7'h11 == io_in_bits_ctrl_signal_aluoptype ? 1'h0 : _GEN_9; // @[MEM.scala 54:44]
  wire  _GEN_13 = 7'h47 == io_in_bits_ctrl_signal_aluoptype ? 1'h0 : _GEN_11; // @[MEM.scala 54:44]
  wire  _GEN_15 = 7'h70 == io_in_bits_ctrl_signal_aluoptype | _GEN_13; // @[MEM.scala 54:44 64:10]
  wire  _GEN_17 = 7'h46 == io_in_bits_ctrl_signal_aluoptype | _GEN_15; // @[MEM.scala 54:44 60:10]
  wire [63:0] _wdata_temp_T_2 = {48'h0,io_in_bits_ctrl_data_src2[15:0]}; // @[Cat.scala 31:58]
  wire [63:0] _wdata_temp_T_6 = {32'h0,io_in_bits_ctrl_data_src2[15:0],16'h0}; // @[Cat.scala 31:58]
  wire [63:0] _wdata_temp_T_10 = {16'h0,io_in_bits_ctrl_data_src2[15:0],32'h0}; // @[Cat.scala 31:58]
  wire [63:0] _wdata_temp_T_13 = {io_in_bits_ctrl_data_src2[15:0],48'h0}; // @[Cat.scala 31:58]
  wire [7:0] _GEN_20 = 2'h3 == addr_temp[2:1] ? 8'hc0 : 8'h0; // @[MEM.scala 100:31 114:22]
  wire [63:0] _GEN_21 = 2'h3 == addr_temp[2:1] ? _wdata_temp_T_13 : 64'h0; // @[MEM.scala 100:31 115:22]
  wire [7:0] _GEN_22 = 2'h2 == addr_temp[2:1] ? 8'h30 : _GEN_20; // @[MEM.scala 100:31 110:22]
  wire [63:0] _GEN_23 = 2'h2 == addr_temp[2:1] ? _wdata_temp_T_10 : _GEN_21; // @[MEM.scala 100:31 111:22]
  wire [7:0] _GEN_24 = 2'h1 == addr_temp[2:1] ? 8'hc : _GEN_22; // @[MEM.scala 100:31 106:22]
  wire [63:0] _GEN_25 = 2'h1 == addr_temp[2:1] ? _wdata_temp_T_6 : _GEN_23; // @[MEM.scala 100:31 107:22]
  wire [7:0] _GEN_26 = 2'h0 == addr_temp[2:1] ? 8'h3 : _GEN_24; // @[MEM.scala 100:31 102:22]
  wire [63:0] _GEN_27 = 2'h0 == addr_temp[2:1] ? _wdata_temp_T_2 : _GEN_25; // @[MEM.scala 100:31 103:22]
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
  wire [7:0] _wmask_temp_T_10 = addr_temp[2] ? 8'hf0 : 8'hf; // @[MEM.scala 125:24]
  wire [63:0] _wdata_temp_T_26 = {io_in_bits_ctrl_data_src2[31:0],32'h0}; // @[Cat.scala 31:58]
  wire [63:0] _wdata_temp_T_29 = {32'h0,io_in_bits_ctrl_data_src2[31:0]}; // @[Cat.scala 31:58]
  wire [63:0] _wdata_temp_T_30 = addr_temp[2] ? _wdata_temp_T_26 : _wdata_temp_T_29; // @[MEM.scala 126:24]
  wire [7:0] _GEN_28 = _T_70 ? _wmask_temp_T_10 : 8'h0; // @[MEM.scala 125:18 93:44]
  wire [63:0] _GEN_29 = _T_70 ? _wdata_temp_T_30 : 64'h0; // @[MEM.scala 126:18 93:44]
  wire [7:0] _GEN_30 = _T_69 ? _wmask_temp_T_7 : _GEN_28; // @[MEM.scala 121:18 93:44]
  wire [63:0] _GEN_31 = _T_69 ? _wdata_temp_T_21 : _GEN_29; // @[MEM.scala 122:18 93:44]
  wire [7:0] _GEN_32 = _T_64 ? _GEN_26 : _GEN_30; // @[MEM.scala 93:44]
  wire [63:0] _GEN_33 = _T_64 ? _GEN_27 : _GEN_31; // @[MEM.scala 93:44]
  wire  _T_107 = addr_temp[2:1] == 2'h0; // @[MEM.scala 140:22]
  wire  _T_110 = addr_temp[2:1] == 2'h1; // @[MEM.scala 141:22]
  wire  _T_113 = addr_temp[2:1] == 2'h2; // @[MEM.scala 142:22]
  wire  _T_116 = addr_temp[2:1] == 2'h3; // @[MEM.scala 143:22]
  wire  mem_result_sign = io_cache_io_rdata_rep_bits_rdata[63]; // @[util.scala 11:19]
  wire [31:0] _mem_result_T_4 = mem_result_sign ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _mem_result_T_5 = {_mem_result_T_4,io_cache_io_rdata_rep_bits_rdata[63:32]}; // @[Cat.scala 31:58]
  wire  mem_result_sign_1 = io_cache_io_rdata_rep_bits_rdata[31]; // @[util.scala 11:19]
  wire [31:0] _mem_result_T_8 = mem_result_sign_1 ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _mem_result_T_9 = {_mem_result_T_8,io_cache_io_rdata_rep_bits_rdata[31:0]}; // @[Cat.scala 31:58]
  wire [63:0] _mem_result_T_10 = addr_temp[2] ? _mem_result_T_5 : _mem_result_T_9; // @[MEM.scala 151:24]
  wire [63:0] _mem_result_T_15 = {32'h0,io_cache_io_rdata_rep_bits_rdata[63:32]}; // @[Cat.scala 31:58]
  wire [63:0] _mem_result_T_18 = {32'h0,io_cache_io_rdata_rep_bits_rdata[31:0]}; // @[Cat.scala 31:58]
  wire [63:0] _mem_result_T_19 = addr_temp[2] ? _mem_result_T_15 : _mem_result_T_18; // @[MEM.scala 154:24]
  wire [7:0] _mem_result_T_20 = _T_15 ? io_cache_io_rdata_rep_bits_rdata[63:56] : 8'h0; // @[Mux.scala 101:16]
  wire [7:0] _mem_result_T_21 = _T_13 ? io_cache_io_rdata_rep_bits_rdata[55:48] : _mem_result_T_20; // @[Mux.scala 101:16]
  wire [7:0] _mem_result_T_22 = _T_11 ? io_cache_io_rdata_rep_bits_rdata[47:40] : _mem_result_T_21; // @[Mux.scala 101:16]
  wire [7:0] _mem_result_T_23 = _T_9 ? io_cache_io_rdata_rep_bits_rdata[39:32] : _mem_result_T_22; // @[Mux.scala 101:16]
  wire [7:0] _mem_result_T_24 = _T_7 ? io_cache_io_rdata_rep_bits_rdata[31:24] : _mem_result_T_23; // @[Mux.scala 101:16]
  wire [7:0] _mem_result_T_25 = _T_5 ? io_cache_io_rdata_rep_bits_rdata[23:16] : _mem_result_T_24; // @[Mux.scala 101:16]
  wire [7:0] _mem_result_T_26 = _T_3 ? io_cache_io_rdata_rep_bits_rdata[15:8] : _mem_result_T_25; // @[Mux.scala 101:16]
  wire [7:0] _mem_result_T_27 = _T_1 ? io_cache_io_rdata_rep_bits_rdata[7:0] : _mem_result_T_26; // @[Mux.scala 101:16]
  wire [63:0] _mem_result_T_29 = {56'h0,_mem_result_T_27}; // @[Cat.scala 31:58]
  wire  mem_result_sign_2 = _mem_result_T_27[7]; // @[util.scala 11:19]
  wire [55:0] _mem_result_T_39 = mem_result_sign_2 ? 56'hffffffffffffff : 56'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _mem_result_T_40 = {_mem_result_T_39,_mem_result_T_27}; // @[Cat.scala 31:58]
  wire [15:0] _mem_result_T_41 = _T_116 ? io_cache_io_rdata_rep_bits_rdata[63:48] : 16'h0; // @[Mux.scala 101:16]
  wire [15:0] _mem_result_T_42 = _T_113 ? io_cache_io_rdata_rep_bits_rdata[47:32] : _mem_result_T_41; // @[Mux.scala 101:16]
  wire [15:0] _mem_result_T_43 = _T_110 ? io_cache_io_rdata_rep_bits_rdata[31:16] : _mem_result_T_42; // @[Mux.scala 101:16]
  wire [15:0] _mem_result_T_44 = _T_107 ? io_cache_io_rdata_rep_bits_rdata[15:0] : _mem_result_T_43; // @[Mux.scala 101:16]
  wire  mem_result_sign_3 = _mem_result_T_44[15]; // @[util.scala 11:19]
  wire [47:0] _mem_result_T_46 = mem_result_sign_3 ? 48'hffffffffffff : 48'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _mem_result_T_47 = {_mem_result_T_46,_mem_result_T_44}; // @[Cat.scala 31:58]
  wire [63:0] _mem_result_T_53 = {48'h0,_mem_result_T_44}; // @[Cat.scala 31:58]
  wire [63:0] _GEN_36 = _T_72 ? _mem_result_T_53 : 64'h0; // @[MEM.scala 146:44 166:18]
  wire [63:0] _GEN_37 = _T_71 ? _mem_result_T_47 : _GEN_36; // @[MEM.scala 146:44 163:18]
  wire [63:0] _GEN_38 = _T_68 ? _mem_result_T_40 : _GEN_37; // @[MEM.scala 146:44 160:18]
  wire [63:0] _GEN_39 = _T_67 ? _mem_result_T_29 : _GEN_38; // @[MEM.scala 146:44 157:18]
  wire [63:0] _GEN_40 = _T_66 ? _mem_result_T_19 : _GEN_39; // @[MEM.scala 146:44 154:18]
  wire [63:0] _GEN_41 = _T_65 ? _mem_result_T_10 : _GEN_40; // @[MEM.scala 146:44 151:18]
  wire [63:0] mem_result = _T_62 ? io_cache_io_rdata_rep_bits_rdata : _GEN_41; // @[MEM.scala 146:44 148:18]
  wire  _io_out_bits_ctrl_rf_rfData_T = io_in_bits_ctrl_signal_fuType == 3'h4; // @[MEM.scala 176:67]
  wire  _io_cache_io_addr_req_valid_T_1 = _io_out_bits_ctrl_rf_rfData_T & io_in_valid; // @[MEM.scala 179:82]
  wire  _io_out_valid_T_6 = io_in_valid & _io_out_bits_ctrl_rf_rfData_T & (~io_cache_io_rdata_rep_valid & ~
    io_cache_io_wdata_rep); // @[MEM.scala 194:96]
  assign io_in_ready = _io_out_valid_T_6 ? 1'h0 : 1'h1; // @[MEM.scala 195:21]
  assign io_out_valid = ~io_in_valid | io_in_valid & _io_out_bits_ctrl_rf_rfData_T & (~io_cache_io_rdata_rep_valid & ~
    io_cache_io_wdata_rep) ? 1'h0 : 1'h1; // @[MEM.scala 194:22]
  assign io_out_bits_ctrl_signal_inst_valid = io_in_valid & io_in_bits_ctrl_signal_inst_valid; // @[MEM.scala 175:44]
  assign io_out_bits_ctrl_signal_rfWen = io_in_bits_ctrl_signal_rfWen; // @[MEM.scala 171:27]
  assign io_out_bits_ctrl_flow_PC = io_in_bits_ctrl_flow_PC; // @[MEM.scala 172:25]
  assign io_out_bits_ctrl_flow_inst = io_in_bits_ctrl_flow_inst; // @[MEM.scala 172:25]
  assign io_out_bits_ctrl_flow_Dnpc = io_in_bits_ctrl_flow_Dnpc; // @[MEM.scala 172:25]
  assign io_out_bits_ctrl_flow_skip = addr_temp == 64'ha0000048 | addr_temp == 64'ha00003f8 | addr_temp >= 64'ha0000000
     & addr_temp <= 64'ha1200000; // @[MEM.scala 174:97]
  assign io_out_bits_ctrl_rf_rfDest = io_in_bits_ctrl_rf_rfDest; // @[MEM.scala 173:23]
  assign io_out_bits_ctrl_rf_rfWen = io_in_valid & io_in_bits_ctrl_signal_rfWen; // @[MEM.scala 177:35]
  assign io_out_bits_ctrl_rf_rfData = io_in_bits_ctrl_signal_fuType == 3'h4 ? mem_result : io_in_bits_ctrl_rf_rfData; // @[MEM.scala 176:36]
  assign io_cache_io_addr_req_valid = _io_out_bits_ctrl_rf_rfData_T & io_in_valid & io_out_bits_ctrl_signal_inst_valid; // @[MEM.scala 179:97]
  assign io_cache_io_addr_req_bits_addr = 7'h45 == io_in_bits_ctrl_signal_aluoptype ? _addr_temp_T_1 : _GEN_16; // @[MEM.scala 54:44 56:17]
  assign io_cache_io_addr_req_bits_ce = _io_cache_io_addr_req_valid_T_1 & io_out_bits_ctrl_signal_inst_valid; // @[MEM.scala 181:99]
  assign io_cache_io_addr_req_bits_we = 7'h45 == io_in_bits_ctrl_signal_aluoptype ? 1'h0 : _GEN_17; // @[MEM.scala 54:44]
  assign io_cache_io_wdata_req_bits_wdata = _T_63 ? io_in_bits_ctrl_data_src2 : _GEN_33; // @[MEM.scala 93:44 97:18]
  assign io_cache_io_wdata_req_bits_wmask = _T_63 ? 8'hff : _GEN_32; // @[MEM.scala 93:44 96:18]
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
  input         io_out_ready,
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
  assign io_out_valid = io_in_valid; // @[WB.scala 18:22]
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
module Cache_Data(
  input          clock,
  input          io_in_valid,
  input  [63:0]  io_in_addr,
  input  [63:0]  io_write_bus_addr,
  input          io_write_bus_valid,
  input  [1:0]   io_write_bus_waymask,
  input  [511:0] io_write_bus_wdata,
  output         io_out_valid,
  output [52:0]  io_out_bits_meat_tag_0,
  output [52:0]  io_out_bits_meat_tag_1,
  output         io_out_bits_meat_valid_0,
  output         io_out_bits_meat_valid_1,
  output [511:0] io_out_bits_data_data_0,
  output [511:0] io_out_bits_data_data_1,
  output [52:0]  io_out_bits_ctrl_data_tag,
  output [4:0]   io_out_bits_ctrl_data_index,
  output [5:0]   io_out_bits_ctrl_data_offset
);
`ifdef RANDOMIZE_MEM_INIT
  reg [511:0] _RAND_0;
  reg [511:0] _RAND_3;
  reg [63:0] _RAND_6;
  reg [63:0] _RAND_9;
  reg [31:0] _RAND_12;
  reg [31:0] _RAND_15;
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_10;
  reg [31:0] _RAND_11;
  reg [31:0] _RAND_13;
  reg [31:0] _RAND_14;
  reg [31:0] _RAND_16;
  reg [31:0] _RAND_17;
`endif // RANDOMIZE_REG_INIT
  reg [511:0] data_0 [0:31]; // @[Cache.scala 119:25]
  wire  data_0_data_w_en; // @[Cache.scala 119:25]
  wire [4:0] data_0_data_w_addr; // @[Cache.scala 119:25]
  wire [511:0] data_0_data_w_data; // @[Cache.scala 119:25]
  wire [511:0] data_0_MPORT_data; // @[Cache.scala 119:25]
  wire [4:0] data_0_MPORT_addr; // @[Cache.scala 119:25]
  wire  data_0_MPORT_mask; // @[Cache.scala 119:25]
  wire  data_0_MPORT_en; // @[Cache.scala 119:25]
  reg  data_0_data_w_en_pipe_0;
  reg [4:0] data_0_data_w_addr_pipe_0;
  reg [511:0] data_1 [0:31]; // @[Cache.scala 119:25]
  wire  data_1_data_w_en; // @[Cache.scala 119:25]
  wire [4:0] data_1_data_w_addr; // @[Cache.scala 119:25]
  wire [511:0] data_1_data_w_data; // @[Cache.scala 119:25]
  wire [511:0] data_1_MPORT_data; // @[Cache.scala 119:25]
  wire [4:0] data_1_MPORT_addr; // @[Cache.scala 119:25]
  wire  data_1_MPORT_mask; // @[Cache.scala 119:25]
  wire  data_1_MPORT_en; // @[Cache.scala 119:25]
  reg  data_1_data_w_en_pipe_0;
  reg [4:0] data_1_data_w_addr_pipe_0;
  reg [52:0] TAG_0 [0:31]; // @[Cache.scala 121:24]
  wire  TAG_0_tag_w_en; // @[Cache.scala 121:24]
  wire [4:0] TAG_0_tag_w_addr; // @[Cache.scala 121:24]
  wire [52:0] TAG_0_tag_w_data; // @[Cache.scala 121:24]
  wire [52:0] TAG_0_MPORT_1_data; // @[Cache.scala 121:24]
  wire [4:0] TAG_0_MPORT_1_addr; // @[Cache.scala 121:24]
  wire  TAG_0_MPORT_1_mask; // @[Cache.scala 121:24]
  wire  TAG_0_MPORT_1_en; // @[Cache.scala 121:24]
  reg  TAG_0_tag_w_en_pipe_0;
  reg [4:0] TAG_0_tag_w_addr_pipe_0;
  reg [52:0] TAG_1 [0:31]; // @[Cache.scala 121:24]
  wire  TAG_1_tag_w_en; // @[Cache.scala 121:24]
  wire [4:0] TAG_1_tag_w_addr; // @[Cache.scala 121:24]
  wire [52:0] TAG_1_tag_w_data; // @[Cache.scala 121:24]
  wire [52:0] TAG_1_MPORT_1_data; // @[Cache.scala 121:24]
  wire [4:0] TAG_1_MPORT_1_addr; // @[Cache.scala 121:24]
  wire  TAG_1_MPORT_1_mask; // @[Cache.scala 121:24]
  wire  TAG_1_MPORT_1_en; // @[Cache.scala 121:24]
  reg  TAG_1_tag_w_en_pipe_0;
  reg [4:0] TAG_1_tag_w_addr_pipe_0;
  reg  data_valid_0 [0:31]; // @[Cache.scala 122:31]
  wire  data_valid_0_valid_w_en; // @[Cache.scala 122:31]
  wire [4:0] data_valid_0_valid_w_addr; // @[Cache.scala 122:31]
  wire  data_valid_0_valid_w_data; // @[Cache.scala 122:31]
  wire  data_valid_0_MPORT_2_data; // @[Cache.scala 122:31]
  wire [4:0] data_valid_0_MPORT_2_addr; // @[Cache.scala 122:31]
  wire  data_valid_0_MPORT_2_mask; // @[Cache.scala 122:31]
  wire  data_valid_0_MPORT_2_en; // @[Cache.scala 122:31]
  reg  data_valid_0_valid_w_en_pipe_0;
  reg [4:0] data_valid_0_valid_w_addr_pipe_0;
  reg  data_valid_1 [0:31]; // @[Cache.scala 122:31]
  wire  data_valid_1_valid_w_en; // @[Cache.scala 122:31]
  wire [4:0] data_valid_1_valid_w_addr; // @[Cache.scala 122:31]
  wire  data_valid_1_valid_w_data; // @[Cache.scala 122:31]
  wire  data_valid_1_MPORT_2_data; // @[Cache.scala 122:31]
  wire [4:0] data_valid_1_MPORT_2_addr; // @[Cache.scala 122:31]
  wire  data_valid_1_MPORT_2_mask; // @[Cache.scala 122:31]
  wire  data_valid_1_MPORT_2_en; // @[Cache.scala 122:31]
  reg  data_valid_1_valid_w_en_pipe_0;
  reg [4:0] data_valid_1_valid_w_addr_pipe_0;
  assign data_0_data_w_en = data_0_data_w_en_pipe_0;
  assign data_0_data_w_addr = data_0_data_w_addr_pipe_0;
  assign data_0_data_w_data = data_0[data_0_data_w_addr]; // @[Cache.scala 119:25]
  assign data_0_MPORT_data = io_write_bus_wdata;
  assign data_0_MPORT_addr = io_write_bus_addr[10:6];
  assign data_0_MPORT_mask = io_write_bus_waymask[0];
  assign data_0_MPORT_en = io_write_bus_valid;
  assign data_1_data_w_en = data_1_data_w_en_pipe_0;
  assign data_1_data_w_addr = data_1_data_w_addr_pipe_0;
  assign data_1_data_w_data = data_1[data_1_data_w_addr]; // @[Cache.scala 119:25]
  assign data_1_MPORT_data = io_write_bus_wdata;
  assign data_1_MPORT_addr = io_write_bus_addr[10:6];
  assign data_1_MPORT_mask = io_write_bus_waymask[1];
  assign data_1_MPORT_en = io_write_bus_valid;
  assign TAG_0_tag_w_en = TAG_0_tag_w_en_pipe_0;
  assign TAG_0_tag_w_addr = TAG_0_tag_w_addr_pipe_0;
  assign TAG_0_tag_w_data = TAG_0[TAG_0_tag_w_addr]; // @[Cache.scala 121:24]
  assign TAG_0_MPORT_1_data = io_write_bus_addr[63:11];
  assign TAG_0_MPORT_1_addr = io_write_bus_addr[10:6];
  assign TAG_0_MPORT_1_mask = io_write_bus_waymask[0];
  assign TAG_0_MPORT_1_en = io_write_bus_valid;
  assign TAG_1_tag_w_en = TAG_1_tag_w_en_pipe_0;
  assign TAG_1_tag_w_addr = TAG_1_tag_w_addr_pipe_0;
  assign TAG_1_tag_w_data = TAG_1[TAG_1_tag_w_addr]; // @[Cache.scala 121:24]
  assign TAG_1_MPORT_1_data = io_write_bus_addr[63:11];
  assign TAG_1_MPORT_1_addr = io_write_bus_addr[10:6];
  assign TAG_1_MPORT_1_mask = io_write_bus_waymask[1];
  assign TAG_1_MPORT_1_en = io_write_bus_valid;
  assign data_valid_0_valid_w_en = data_valid_0_valid_w_en_pipe_0;
  assign data_valid_0_valid_w_addr = data_valid_0_valid_w_addr_pipe_0;
  assign data_valid_0_valid_w_data = data_valid_0[data_valid_0_valid_w_addr]; // @[Cache.scala 122:31]
  assign data_valid_0_MPORT_2_data = 1'h1;
  assign data_valid_0_MPORT_2_addr = io_write_bus_addr[10:6];
  assign data_valid_0_MPORT_2_mask = io_write_bus_waymask[0];
  assign data_valid_0_MPORT_2_en = io_write_bus_valid;
  assign data_valid_1_valid_w_en = data_valid_1_valid_w_en_pipe_0;
  assign data_valid_1_valid_w_addr = data_valid_1_valid_w_addr_pipe_0;
  assign data_valid_1_valid_w_data = data_valid_1[data_valid_1_valid_w_addr]; // @[Cache.scala 122:31]
  assign data_valid_1_MPORT_2_data = 1'h1;
  assign data_valid_1_MPORT_2_addr = io_write_bus_addr[10:6];
  assign data_valid_1_MPORT_2_mask = io_write_bus_waymask[1];
  assign data_valid_1_MPORT_2_en = io_write_bus_valid;
  assign io_out_valid = io_in_valid; // @[Cache.scala 138:22]
  assign io_out_bits_meat_tag_0 = TAG_0_tag_w_data; // @[Cache.scala 136:24]
  assign io_out_bits_meat_tag_1 = TAG_1_tag_w_data; // @[Cache.scala 136:24]
  assign io_out_bits_meat_valid_0 = data_valid_0_valid_w_data; // @[Cache.scala 133:26]
  assign io_out_bits_meat_valid_1 = data_valid_1_valid_w_data; // @[Cache.scala 133:26]
  assign io_out_bits_data_data_0 = data_0_data_w_data; // @[Cache.scala 134:25]
  assign io_out_bits_data_data_1 = data_1_data_w_data; // @[Cache.scala 134:25]
  assign io_out_bits_ctrl_data_tag = io_in_addr[63:11]; // @[Cache.scala 114:23]
  assign io_out_bits_ctrl_data_index = io_in_addr[10:6]; // @[Cache.scala 115:25]
  assign io_out_bits_ctrl_data_offset = io_in_addr[5:0]; // @[Cache.scala 116:26]
  always @(posedge clock) begin
    if (data_0_MPORT_en & data_0_MPORT_mask) begin
      data_0[data_0_MPORT_addr] <= data_0_MPORT_data; // @[Cache.scala 119:25]
    end
    data_0_data_w_en_pipe_0 <= 1'h1;
    if (1'h1) begin
      data_0_data_w_addr_pipe_0 <= io_in_addr[10:6];
    end
    if (data_1_MPORT_en & data_1_MPORT_mask) begin
      data_1[data_1_MPORT_addr] <= data_1_MPORT_data; // @[Cache.scala 119:25]
    end
    data_1_data_w_en_pipe_0 <= 1'h1;
    if (1'h1) begin
      data_1_data_w_addr_pipe_0 <= io_in_addr[10:6];
    end
    if (TAG_0_MPORT_1_en & TAG_0_MPORT_1_mask) begin
      TAG_0[TAG_0_MPORT_1_addr] <= TAG_0_MPORT_1_data; // @[Cache.scala 121:24]
    end
    TAG_0_tag_w_en_pipe_0 <= 1'h1;
    if (1'h1) begin
      TAG_0_tag_w_addr_pipe_0 <= io_in_addr[10:6];
    end
    if (TAG_1_MPORT_1_en & TAG_1_MPORT_1_mask) begin
      TAG_1[TAG_1_MPORT_1_addr] <= TAG_1_MPORT_1_data; // @[Cache.scala 121:24]
    end
    TAG_1_tag_w_en_pipe_0 <= 1'h1;
    if (1'h1) begin
      TAG_1_tag_w_addr_pipe_0 <= io_in_addr[10:6];
    end
    if (data_valid_0_MPORT_2_en & data_valid_0_MPORT_2_mask) begin
      data_valid_0[data_valid_0_MPORT_2_addr] <= data_valid_0_MPORT_2_data; // @[Cache.scala 122:31]
    end
    data_valid_0_valid_w_en_pipe_0 <= 1'h1;
    if (1'h1) begin
      data_valid_0_valid_w_addr_pipe_0 <= io_in_addr[10:6];
    end
    if (data_valid_1_MPORT_2_en & data_valid_1_MPORT_2_mask) begin
      data_valid_1[data_valid_1_MPORT_2_addr] <= data_valid_1_MPORT_2_data; // @[Cache.scala 122:31]
    end
    data_valid_1_valid_w_en_pipe_0 <= 1'h1;
    if (1'h1) begin
      data_valid_1_valid_w_addr_pipe_0 <= io_in_addr[10:6];
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
  _RAND_0 = {16{`RANDOM}};
  for (initvar = 0; initvar < 32; initvar = initvar+1)
    data_0[initvar] = _RAND_0[511:0];
  _RAND_3 = {16{`RANDOM}};
  for (initvar = 0; initvar < 32; initvar = initvar+1)
    data_1[initvar] = _RAND_3[511:0];
  _RAND_6 = {2{`RANDOM}};
  for (initvar = 0; initvar < 32; initvar = initvar+1)
    TAG_0[initvar] = _RAND_6[52:0];
  _RAND_9 = {2{`RANDOM}};
  for (initvar = 0; initvar < 32; initvar = initvar+1)
    TAG_1[initvar] = _RAND_9[52:0];
  _RAND_12 = {1{`RANDOM}};
  for (initvar = 0; initvar < 32; initvar = initvar+1)
    data_valid_0[initvar] = _RAND_12[0:0];
  _RAND_15 = {1{`RANDOM}};
  for (initvar = 0; initvar < 32; initvar = initvar+1)
    data_valid_1[initvar] = _RAND_15[0:0];
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  data_0_data_w_en_pipe_0 = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  data_0_data_w_addr_pipe_0 = _RAND_2[4:0];
  _RAND_4 = {1{`RANDOM}};
  data_1_data_w_en_pipe_0 = _RAND_4[0:0];
  _RAND_5 = {1{`RANDOM}};
  data_1_data_w_addr_pipe_0 = _RAND_5[4:0];
  _RAND_7 = {1{`RANDOM}};
  TAG_0_tag_w_en_pipe_0 = _RAND_7[0:0];
  _RAND_8 = {1{`RANDOM}};
  TAG_0_tag_w_addr_pipe_0 = _RAND_8[4:0];
  _RAND_10 = {1{`RANDOM}};
  TAG_1_tag_w_en_pipe_0 = _RAND_10[0:0];
  _RAND_11 = {1{`RANDOM}};
  TAG_1_tag_w_addr_pipe_0 = _RAND_11[4:0];
  _RAND_13 = {1{`RANDOM}};
  data_valid_0_valid_w_en_pipe_0 = _RAND_13[0:0];
  _RAND_14 = {1{`RANDOM}};
  data_valid_0_valid_w_addr_pipe_0 = _RAND_14[4:0];
  _RAND_16 = {1{`RANDOM}};
  data_valid_1_valid_w_en_pipe_0 = _RAND_16[0:0];
  _RAND_17 = {1{`RANDOM}};
  data_valid_1_valid_w_addr_pipe_0 = _RAND_17[4:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module Scanf_data(
  input          io_in_valid,
  input  [52:0]  io_in_bits_meat_tag_0,
  input  [52:0]  io_in_bits_meat_tag_1,
  input          io_in_bits_meat_valid_0,
  input          io_in_bits_meat_valid_1,
  input  [511:0] io_in_bits_data_data_0,
  input  [511:0] io_in_bits_data_data_1,
  input  [52:0]  io_in_bits_ctrl_data_tag,
  input  [4:0]   io_in_bits_ctrl_data_index,
  output         io_out_bits_hit,
  output [511:0] io_out_bits_data,
  output [4:0]   io_out_bits_meta_ctrl_data_index,
  output         io_out_bits_hit_way_0,
  output         io_out_bits_hit_way_1,
  output [52:0]  io_out_bits_tag_0,
  output [52:0]  io_out_bits_tag_1
);
  wire  _hit_way_0_T = io_in_bits_meat_valid_0 & io_in_valid; // @[Cache.scala 74:98]
  wire  hit_way_0_result = _hit_way_0_T & io_in_bits_ctrl_data_tag == io_in_bits_meat_tag_0; // @[Cache.scala 68:20]
  wire  _hit_way_1_T = io_in_bits_meat_valid_1 & io_in_valid; // @[Cache.scala 74:98]
  wire  hit_way_1_result = _hit_way_1_T & io_in_bits_ctrl_data_tag == io_in_bits_meat_tag_1; // @[Cache.scala 68:20]
  wire [511:0] _GEN_3 = hit_way_0_result ? io_in_bits_data_data_0 : 512'h0; // @[Cache.scala 80:29 82:17]
  assign io_out_bits_hit = hit_way_1_result | hit_way_0_result; // @[Cache.scala 80:29 81:16]
  assign io_out_bits_data = hit_way_1_result ? io_in_bits_data_data_1 : _GEN_3; // @[Cache.scala 80:29 82:17]
  assign io_out_bits_meta_ctrl_data_index = io_in_bits_ctrl_data_index; // @[Cache.scala 90:30]
  assign io_out_bits_hit_way_0 = _hit_way_0_T & io_in_bits_ctrl_data_tag == io_in_bits_meat_tag_0; // @[Cache.scala 68:20]
  assign io_out_bits_hit_way_1 = _hit_way_1_T & io_in_bits_ctrl_data_tag == io_in_bits_meat_tag_1; // @[Cache.scala 68:20]
  assign io_out_bits_tag_0 = io_in_bits_meat_tag_0; // @[Cache.scala 96:19]
  assign io_out_bits_tag_1 = io_in_bits_meat_tag_1; // @[Cache.scala 96:19]
endmodule
module Cache(
  input         clock,
  input         reset,
  input         io_in_addr_req_valid,
  input  [63:0] io_in_addr_req_bits_addr,
  input         io_in_rdata_rep_ready,
  output        io_in_rdata_rep_valid,
  output [63:0] io_in_rdata_rep_bits_rdata,
  input         io_flush,
  output [63:0] io_out_addr_req_bits_addr,
  output        io_out_addr_req_bits_ce,
  input  [63:0] io_out_rdata_rep_bits_rdata
);
`ifdef RANDOMIZE_MEM_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [511:0] _RAND_4;
  reg [63:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
`endif // RANDOMIZE_REG_INIT
  wire  Cache_data_clock; // @[Cache.scala 159:26]
  wire  Cache_data_io_in_valid; // @[Cache.scala 159:26]
  wire [63:0] Cache_data_io_in_addr; // @[Cache.scala 159:26]
  wire [63:0] Cache_data_io_write_bus_addr; // @[Cache.scala 159:26]
  wire  Cache_data_io_write_bus_valid; // @[Cache.scala 159:26]
  wire [1:0] Cache_data_io_write_bus_waymask; // @[Cache.scala 159:26]
  wire [511:0] Cache_data_io_write_bus_wdata; // @[Cache.scala 159:26]
  wire  Cache_data_io_out_valid; // @[Cache.scala 159:26]
  wire [52:0] Cache_data_io_out_bits_meat_tag_0; // @[Cache.scala 159:26]
  wire [52:0] Cache_data_io_out_bits_meat_tag_1; // @[Cache.scala 159:26]
  wire  Cache_data_io_out_bits_meat_valid_0; // @[Cache.scala 159:26]
  wire  Cache_data_io_out_bits_meat_valid_1; // @[Cache.scala 159:26]
  wire [511:0] Cache_data_io_out_bits_data_data_0; // @[Cache.scala 159:26]
  wire [511:0] Cache_data_io_out_bits_data_data_1; // @[Cache.scala 159:26]
  wire [52:0] Cache_data_io_out_bits_ctrl_data_tag; // @[Cache.scala 159:26]
  wire [4:0] Cache_data_io_out_bits_ctrl_data_index; // @[Cache.scala 159:26]
  wire [5:0] Cache_data_io_out_bits_ctrl_data_offset; // @[Cache.scala 159:26]
  wire  Scanf_io_in_valid; // @[Cache.scala 160:21]
  wire [52:0] Scanf_io_in_bits_meat_tag_0; // @[Cache.scala 160:21]
  wire [52:0] Scanf_io_in_bits_meat_tag_1; // @[Cache.scala 160:21]
  wire  Scanf_io_in_bits_meat_valid_0; // @[Cache.scala 160:21]
  wire  Scanf_io_in_bits_meat_valid_1; // @[Cache.scala 160:21]
  wire [511:0] Scanf_io_in_bits_data_data_0; // @[Cache.scala 160:21]
  wire [511:0] Scanf_io_in_bits_data_data_1; // @[Cache.scala 160:21]
  wire [52:0] Scanf_io_in_bits_ctrl_data_tag; // @[Cache.scala 160:21]
  wire [4:0] Scanf_io_in_bits_ctrl_data_index; // @[Cache.scala 160:21]
  wire  Scanf_io_out_bits_hit; // @[Cache.scala 160:21]
  wire [511:0] Scanf_io_out_bits_data; // @[Cache.scala 160:21]
  wire [4:0] Scanf_io_out_bits_meta_ctrl_data_index; // @[Cache.scala 160:21]
  wire  Scanf_io_out_bits_hit_way_0; // @[Cache.scala 160:21]
  wire  Scanf_io_out_bits_hit_way_1; // @[Cache.scala 160:21]
  wire [52:0] Scanf_io_out_bits_tag_0; // @[Cache.scala 160:21]
  wire [52:0] Scanf_io_out_bits_tag_1; // @[Cache.scala 160:21]
  reg  lru [0:31]; // @[Cache.scala 173:24]
  wire  lru_lru_w_MPORT_en; // @[Cache.scala 173:24]
  wire [4:0] lru_lru_w_MPORT_addr; // @[Cache.scala 173:24]
  wire  lru_lru_w_MPORT_data; // @[Cache.scala 173:24]
  wire  lru_MPORT_data; // @[Cache.scala 173:24]
  wire [4:0] lru_MPORT_addr; // @[Cache.scala 173:24]
  wire  lru_MPORT_mask; // @[Cache.scala 173:24]
  wire  lru_MPORT_en; // @[Cache.scala 173:24]
  wire  lru_MPORT_1_data; // @[Cache.scala 173:24]
  wire [4:0] lru_MPORT_1_addr; // @[Cache.scala 173:24]
  wire  lru_MPORT_1_mask; // @[Cache.scala 173:24]
  wire  lru_MPORT_1_en; // @[Cache.scala 173:24]
  wire  lru_MPORT_2_data; // @[Cache.scala 173:24]
  wire [4:0] lru_MPORT_2_addr; // @[Cache.scala 173:24]
  wire  lru_MPORT_2_mask; // @[Cache.scala 173:24]
  wire  lru_MPORT_2_en; // @[Cache.scala 173:24]
  wire  lru_MPORT_3_data; // @[Cache.scala 173:24]
  wire [4:0] lru_MPORT_3_addr; // @[Cache.scala 173:24]
  wire  lru_MPORT_3_mask; // @[Cache.scala 173:24]
  wire  lru_MPORT_3_en; // @[Cache.scala 173:24]
  reg  lru_lru_w_MPORT_en_pipe_0;
  reg [4:0] lru_lru_w_MPORT_addr_pipe_0;
  reg [1:0] state; // @[Cache.scala 163:22]
  reg [511:0] data_line_reg; // @[Cache.scala 165:30]
  reg [63:0] mem_addr_reg; // @[Cache.scala 166:29]
  reg  lru_r; // @[Cache.scala 168:23]
  reg [3:0] count; // @[Cache.scala 176:22]
  wire  s = count == 4'h8; // @[Cache.scala 177:17]
  wire  _T = 2'h0 == state; // @[Cache.scala 196:16]
  wire  _T_1 = 2'h1 == state; // @[Cache.scala 196:16]
  wire [63:0] _mem_addr_reg_T_2 = {io_in_addr_req_bits_addr[63:6],6'h0}; // @[Cat.scala 31:58]
  wire  hit_way_0 = Scanf_io_out_bits_hit_way_0; // @[Cache.scala 192:21 356:11]
  wire  hit_way_1 = Scanf_io_out_bits_hit_way_1; // @[Cache.scala 192:21 356:11]
  wire  lru_w = lru_lru_w_MPORT_data;
  wire  _GEN_17 = ~Scanf_io_out_bits_hit ? 1'h0 : hit_way_0; // @[Cache.scala 173:24 201:26]
  wire  _GEN_21 = ~Scanf_io_out_bits_hit ? 1'h0 : hit_way_1; // @[Cache.scala 173:24 201:26]
  wire  _T_5 = 2'h2 == state; // @[Cache.scala 196:16]
  wire [3:0] _count_T_1 = count + 4'h1; // @[Cache.scala 229:24]
  wire [3:0] _GEN_24 = ~io_in_rdata_rep_ready & s ? count : _count_T_1; // @[Cache.scala 226:81 227:15 229:15]
  wire [63:0] _mem_addr_reg_T_4 = mem_addr_reg + 64'h8; // @[Cache.scala 236:38]
  wire [511:0] _data_line_reg_T_1 = {io_out_rdata_rep_bits_rdata,data_line_reg[511:64]}; // @[Cat.scala 31:58]
  wire [63:0] _GEN_25 = ~s ? _mem_addr_reg_T_4 : mem_addr_reg; // @[Cache.scala 235:51 236:22 166:29]
  wire [511:0] _GEN_26 = ~s ? _data_line_reg_T_1 : data_line_reg; // @[Cache.scala 235:51 238:23 165:30]
  wire  _GEN_34 = lru_r ? 1'h0 : 1'h1; // @[Cache.scala 173:24 241:29]
  wire  _GEN_38 = io_in_rdata_rep_ready & s & lru_r; // @[Cache.scala 173:24 240:51]
  wire  _GEN_43 = io_in_rdata_rep_ready & s & _GEN_34; // @[Cache.scala 173:24 240:51]
  wire [3:0] _GEN_45 = io_in_rdata_rep_ready & s ? 4'h0 : _GEN_24; // @[Cache.scala 240:51 246:14]
  wire  _GEN_62 = 2'h1 == state & _GEN_17; // @[Cache.scala 196:16 173:24]
  wire  _GEN_66 = 2'h1 == state & _GEN_21; // @[Cache.scala 196:16 173:24]
  wire  _GEN_73 = 2'h1 == state ? 1'h0 : 2'h2 == state & _GEN_38; // @[Cache.scala 196:16 173:24]
  wire  _GEN_78 = 2'h1 == state ? 1'h0 : 2'h2 == state & _GEN_43; // @[Cache.scala 196:16 173:24]
  wire [63:0] _GEN_102 = 3'h7 == io_in_addr_req_bits_addr[5:3] ? Scanf_io_out_bits_data[511:448] : 64'h0; // @[Cache.scala 265:115 295:16]
  wire [63:0] _GEN_103 = 3'h7 == io_in_addr_req_bits_addr[5:3] ? data_line_reg[511:448] : 64'h0; // @[Cache.scala 265:115 296:16]
  wire [63:0] _GEN_104 = 3'h6 == io_in_addr_req_bits_addr[5:3] ? Scanf_io_out_bits_data[447:384] : _GEN_102; // @[Cache.scala 265:115 291:16]
  wire [63:0] _GEN_105 = 3'h6 == io_in_addr_req_bits_addr[5:3] ? data_line_reg[447:384] : _GEN_103; // @[Cache.scala 265:115 292:16]
  wire [63:0] _GEN_106 = 3'h5 == io_in_addr_req_bits_addr[5:3] ? Scanf_io_out_bits_data[383:320] : _GEN_104; // @[Cache.scala 265:115 287:16]
  wire [63:0] _GEN_107 = 3'h5 == io_in_addr_req_bits_addr[5:3] ? data_line_reg[383:320] : _GEN_105; // @[Cache.scala 265:115 288:16]
  wire [63:0] _GEN_108 = 3'h4 == io_in_addr_req_bits_addr[5:3] ? Scanf_io_out_bits_data[319:256] : _GEN_106; // @[Cache.scala 265:115 283:16]
  wire [63:0] _GEN_109 = 3'h4 == io_in_addr_req_bits_addr[5:3] ? data_line_reg[319:256] : _GEN_107; // @[Cache.scala 265:115 284:16]
  wire [63:0] _GEN_110 = 3'h3 == io_in_addr_req_bits_addr[5:3] ? Scanf_io_out_bits_data[255:192] : _GEN_108; // @[Cache.scala 265:115 279:16]
  wire [63:0] _GEN_111 = 3'h3 == io_in_addr_req_bits_addr[5:3] ? data_line_reg[255:192] : _GEN_109; // @[Cache.scala 265:115 280:16]
  wire [63:0] _GEN_112 = 3'h2 == io_in_addr_req_bits_addr[5:3] ? Scanf_io_out_bits_data[191:128] : _GEN_110; // @[Cache.scala 265:115 275:16]
  wire [63:0] _GEN_113 = 3'h2 == io_in_addr_req_bits_addr[5:3] ? data_line_reg[191:128] : _GEN_111; // @[Cache.scala 265:115 276:16]
  wire [63:0] _GEN_114 = 3'h1 == io_in_addr_req_bits_addr[5:3] ? Scanf_io_out_bits_data[127:64] : _GEN_112; // @[Cache.scala 265:115 271:16]
  wire [63:0] _GEN_115 = 3'h1 == io_in_addr_req_bits_addr[5:3] ? data_line_reg[127:64] : _GEN_113; // @[Cache.scala 265:115 272:16]
  wire [63:0] hit_data = 3'h0 == io_in_addr_req_bits_addr[5:3] ? Scanf_io_out_bits_data[63:0] : _GEN_114; // @[Cache.scala 265:115 267:16]
  wire [63:0] mem_data = 3'h0 == io_in_addr_req_bits_addr[5:3] ? data_line_reg[63:0] : _GEN_115; // @[Cache.scala 265:115 268:16]
  wire [1:0] _GEN_119 = Scanf_io_out_bits_hit ? 2'h0 : 2'h2; // @[Cache.scala 309:26 310:17 320:19]
  wire [1:0] _GEN_120 = s & io_in_rdata_rep_ready ? 2'h0 : state; // @[Cache.scala 326:52 327:17 163:22]
  wire [1:0] _GEN_121 = _T_5 ? _GEN_120 : state; // @[Cache.scala 300:16 163:22]
  wire  _io_in_rdata_rep_bits_rdata_T_1 = state == 2'h1 & Scanf_io_out_bits_hit; // @[Cache.scala 344:54]
  reg  Scanf_io_in_valid_REG; // @[Cache.scala 351:31]
  wire  _io_out_addr_req_valid_T = state == 2'h2; // @[Cache.scala 371:40]
  wire  _io_in_rdata_rep_valid_T_4 = _io_out_addr_req_valid_T & s; // @[Cache.scala 380:75]
  Cache_Data Cache_data ( // @[Cache.scala 159:26]
    .clock(Cache_data_clock),
    .io_in_valid(Cache_data_io_in_valid),
    .io_in_addr(Cache_data_io_in_addr),
    .io_write_bus_addr(Cache_data_io_write_bus_addr),
    .io_write_bus_valid(Cache_data_io_write_bus_valid),
    .io_write_bus_waymask(Cache_data_io_write_bus_waymask),
    .io_write_bus_wdata(Cache_data_io_write_bus_wdata),
    .io_out_valid(Cache_data_io_out_valid),
    .io_out_bits_meat_tag_0(Cache_data_io_out_bits_meat_tag_0),
    .io_out_bits_meat_tag_1(Cache_data_io_out_bits_meat_tag_1),
    .io_out_bits_meat_valid_0(Cache_data_io_out_bits_meat_valid_0),
    .io_out_bits_meat_valid_1(Cache_data_io_out_bits_meat_valid_1),
    .io_out_bits_data_data_0(Cache_data_io_out_bits_data_data_0),
    .io_out_bits_data_data_1(Cache_data_io_out_bits_data_data_1),
    .io_out_bits_ctrl_data_tag(Cache_data_io_out_bits_ctrl_data_tag),
    .io_out_bits_ctrl_data_index(Cache_data_io_out_bits_ctrl_data_index),
    .io_out_bits_ctrl_data_offset(Cache_data_io_out_bits_ctrl_data_offset)
  );
  Scanf_data Scanf ( // @[Cache.scala 160:21]
    .io_in_valid(Scanf_io_in_valid),
    .io_in_bits_meat_tag_0(Scanf_io_in_bits_meat_tag_0),
    .io_in_bits_meat_tag_1(Scanf_io_in_bits_meat_tag_1),
    .io_in_bits_meat_valid_0(Scanf_io_in_bits_meat_valid_0),
    .io_in_bits_meat_valid_1(Scanf_io_in_bits_meat_valid_1),
    .io_in_bits_data_data_0(Scanf_io_in_bits_data_data_0),
    .io_in_bits_data_data_1(Scanf_io_in_bits_data_data_1),
    .io_in_bits_ctrl_data_tag(Scanf_io_in_bits_ctrl_data_tag),
    .io_in_bits_ctrl_data_index(Scanf_io_in_bits_ctrl_data_index),
    .io_out_bits_hit(Scanf_io_out_bits_hit),
    .io_out_bits_data(Scanf_io_out_bits_data),
    .io_out_bits_meta_ctrl_data_index(Scanf_io_out_bits_meta_ctrl_data_index),
    .io_out_bits_hit_way_0(Scanf_io_out_bits_hit_way_0),
    .io_out_bits_hit_way_1(Scanf_io_out_bits_hit_way_1),
    .io_out_bits_tag_0(Scanf_io_out_bits_tag_0),
    .io_out_bits_tag_1(Scanf_io_out_bits_tag_1)
  );
  assign lru_lru_w_MPORT_en = lru_lru_w_MPORT_en_pipe_0;
  assign lru_lru_w_MPORT_addr = lru_lru_w_MPORT_addr_pipe_0;
  assign lru_lru_w_MPORT_data = lru[lru_lru_w_MPORT_addr]; // @[Cache.scala 173:24]
  assign lru_MPORT_data = 1'h1;
  assign lru_MPORT_addr = Cache_data_io_out_bits_ctrl_data_index;
  assign lru_MPORT_mask = 1'h1;
  assign lru_MPORT_en = _T ? 1'h0 : _GEN_62;
  assign lru_MPORT_1_data = 1'h0;
  assign lru_MPORT_1_addr = Cache_data_io_out_bits_ctrl_data_index;
  assign lru_MPORT_1_mask = 1'h1;
  assign lru_MPORT_1_en = _T ? 1'h0 : _GEN_66;
  assign lru_MPORT_2_data = 1'h0;
  assign lru_MPORT_2_addr = Cache_data_io_out_bits_ctrl_data_index;
  assign lru_MPORT_2_mask = 1'h1;
  assign lru_MPORT_2_en = _T ? 1'h0 : _GEN_73;
  assign lru_MPORT_3_data = 1'h1;
  assign lru_MPORT_3_addr = Cache_data_io_out_bits_ctrl_data_index;
  assign lru_MPORT_3_mask = 1'h1;
  assign lru_MPORT_3_en = _T ? 1'h0 : _GEN_78;
  assign io_in_rdata_rep_valid = (_io_in_rdata_rep_bits_rdata_T_1 | _io_out_addr_req_valid_T & s) & ~io_flush; // @[Cache.scala 380:93]
  assign io_in_rdata_rep_bits_rdata = state == 2'h1 & Scanf_io_out_bits_hit ? hit_data : mem_data; // @[Cache.scala 344:36]
  assign io_out_addr_req_bits_addr = mem_addr_reg; // @[Cache.scala 373:31]
  assign io_out_addr_req_bits_ce = state == 2'h2; // @[Cache.scala 372:42]
  assign Cache_data_clock = clock;
  assign Cache_data_io_in_valid = io_in_addr_req_valid & state == 2'h0; // @[Cache.scala 349:54]
  assign Cache_data_io_in_addr = io_in_addr_req_bits_addr; // @[Cache.scala 350:25]
  assign Cache_data_io_write_bus_addr = _io_in_rdata_rep_valid_T_4 ? io_in_addr_req_bits_addr : 64'h0; // @[Cache.scala 417:40]
  assign Cache_data_io_write_bus_valid = count == 4'h8; // @[Cache.scala 177:17]
  assign Cache_data_io_write_bus_waymask = lru_r ? 2'h2 : 2'h1; // @[Cache.scala 419:22]
  assign Cache_data_io_write_bus_wdata = _io_in_rdata_rep_valid_T_4 ? data_line_reg : 512'h0; // @[Cache.scala 418:41]
  assign Scanf_io_in_valid = Scanf_io_in_valid_REG; // @[Cache.scala 351:21]
  assign Scanf_io_in_bits_meat_tag_0 = Cache_data_io_out_bits_meat_tag_0; // @[Cache.scala 352:25]
  assign Scanf_io_in_bits_meat_tag_1 = Cache_data_io_out_bits_meat_tag_1; // @[Cache.scala 352:25]
  assign Scanf_io_in_bits_meat_valid_0 = Cache_data_io_out_bits_meat_valid_0; // @[Cache.scala 352:25]
  assign Scanf_io_in_bits_meat_valid_1 = Cache_data_io_out_bits_meat_valid_1; // @[Cache.scala 352:25]
  assign Scanf_io_in_bits_data_data_0 = Cache_data_io_out_bits_data_data_0; // @[Cache.scala 353:25]
  assign Scanf_io_in_bits_data_data_1 = Cache_data_io_out_bits_data_data_1; // @[Cache.scala 353:25]
  assign Scanf_io_in_bits_ctrl_data_tag = Cache_data_io_out_bits_ctrl_data_tag; // @[Cache.scala 354:30]
  assign Scanf_io_in_bits_ctrl_data_index = Cache_data_io_out_bits_ctrl_data_index; // @[Cache.scala 354:30]
  always @(posedge clock) begin
    if (lru_MPORT_en & lru_MPORT_mask) begin
      lru[lru_MPORT_addr] <= lru_MPORT_data; // @[Cache.scala 173:24]
    end
    if (lru_MPORT_1_en & lru_MPORT_1_mask) begin
      lru[lru_MPORT_1_addr] <= lru_MPORT_1_data; // @[Cache.scala 173:24]
    end
    if (lru_MPORT_2_en & lru_MPORT_2_mask) begin
      lru[lru_MPORT_2_addr] <= lru_MPORT_2_data; // @[Cache.scala 173:24]
    end
    if (lru_MPORT_3_en & lru_MPORT_3_mask) begin
      lru[lru_MPORT_3_addr] <= lru_MPORT_3_data; // @[Cache.scala 173:24]
    end
    lru_lru_w_MPORT_en_pipe_0 <= 1'h1;
    if (1'h1) begin
      lru_lru_w_MPORT_addr_pipe_0 <= Cache_data_io_out_bits_ctrl_data_index;
    end
    if (reset) begin // @[Cache.scala 163:22]
      state <= 2'h0; // @[Cache.scala 163:22]
    end else if (io_flush) begin // @[Cache.scala 339:18]
      state <= 2'h0; // @[Cache.scala 340:11]
    end else if (_T) begin // @[Cache.scala 300:16]
      if (io_in_addr_req_valid) begin // @[Cache.scala 302:33]
        state <= 2'h1; // @[Cache.scala 303:15]
      end else begin
        state <= 2'h0; // @[Cache.scala 305:15]
      end
    end else if (_T_1) begin // @[Cache.scala 300:16]
      state <= _GEN_119;
    end else begin
      state <= _GEN_121;
    end
    if (reset) begin // @[Cache.scala 165:30]
      data_line_reg <= 512'h0; // @[Cache.scala 165:30]
    end else if (!(2'h0 == state)) begin // @[Cache.scala 196:16]
      if (!(2'h1 == state)) begin // @[Cache.scala 196:16]
        if (2'h2 == state) begin // @[Cache.scala 196:16]
          data_line_reg <= _GEN_26;
        end
      end
    end
    if (reset) begin // @[Cache.scala 166:29]
      mem_addr_reg <= 64'h0; // @[Cache.scala 166:29]
    end else if (!(2'h0 == state)) begin // @[Cache.scala 196:16]
      if (2'h1 == state) begin // @[Cache.scala 196:16]
        if (~Scanf_io_out_bits_hit) begin // @[Cache.scala 201:26]
          mem_addr_reg <= _mem_addr_reg_T_2; // @[Cache.scala 202:24]
        end
      end else if (2'h2 == state) begin // @[Cache.scala 196:16]
        mem_addr_reg <= _GEN_25;
      end
    end
    if (reset) begin // @[Cache.scala 168:23]
      lru_r <= 1'h0; // @[Cache.scala 168:23]
    end else if (!(2'h0 == state)) begin // @[Cache.scala 196:16]
      if (2'h1 == state) begin // @[Cache.scala 196:16]
        if (~Scanf_io_out_bits_hit) begin // @[Cache.scala 201:26]
          lru_r <= lru_w; // @[Cache.scala 203:17]
        end
      end
    end
    if (reset) begin // @[Cache.scala 176:22]
      count <= 4'h0; // @[Cache.scala 176:22]
    end else if (2'h0 == state) begin // @[Cache.scala 196:16]
      count <= 4'h0; // @[Cache.scala 198:13]
    end else if (!(2'h1 == state)) begin // @[Cache.scala 196:16]
      if (2'h2 == state) begin // @[Cache.scala 196:16]
        count <= _GEN_45;
      end
    end
    Scanf_io_in_valid_REG <= Cache_data_io_out_valid; // @[Cache.scala 351:31]
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
  _RAND_0 = {1{`RANDOM}};
  for (initvar = 0; initvar < 32; initvar = initvar+1)
    lru[initvar] = _RAND_0[0:0];
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  lru_lru_w_MPORT_en_pipe_0 = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  lru_lru_w_MPORT_addr_pipe_0 = _RAND_2[4:0];
  _RAND_3 = {1{`RANDOM}};
  state = _RAND_3[1:0];
  _RAND_4 = {16{`RANDOM}};
  data_line_reg = _RAND_4[511:0];
  _RAND_5 = {2{`RANDOM}};
  mem_addr_reg = _RAND_5[63:0];
  _RAND_6 = {1{`RANDOM}};
  lru_r = _RAND_6[0:0];
  _RAND_7 = {1{`RANDOM}};
  count = _RAND_7[3:0];
  _RAND_8 = {1{`RANDOM}};
  Scanf_io_in_valid_REG = _RAND_8[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module Cache_1(
  input         clock,
  input         reset,
  input         io_in_addr_req_valid,
  input  [63:0] io_in_addr_req_bits_addr,
  input         io_in_addr_req_bits_we,
  output        io_in_rdata_rep_valid,
  output [63:0] io_in_rdata_rep_bits_rdata,
  input  [63:0] io_in_wdata_req_bits_wdata,
  input  [7:0]  io_in_wdata_req_bits_wmask,
  output        io_in_wdata_rep,
  output [63:0] io_out_addr_req_bits_addr,
  output        io_out_addr_req_bits_ce,
  output        io_out_addr_req_bits_we,
  input  [63:0] io_out_rdata_rep_bits_rdata,
  output [63:0] io_out_wdata_req_bits_wdata
);
`ifdef RANDOMIZE_MEM_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_6;
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [511:0] _RAND_10;
  reg [63:0] _RAND_11;
  reg [31:0] _RAND_12;
  reg [31:0] _RAND_13;
  reg [31:0] _RAND_14;
  reg [63:0] _RAND_15;
  reg [511:0] _RAND_16;
  reg [31:0] _RAND_17;
`endif // RANDOMIZE_REG_INIT
  wire  Cache_data_clock; // @[Cache.scala 159:26]
  wire  Cache_data_io_in_valid; // @[Cache.scala 159:26]
  wire [63:0] Cache_data_io_in_addr; // @[Cache.scala 159:26]
  wire [63:0] Cache_data_io_write_bus_addr; // @[Cache.scala 159:26]
  wire  Cache_data_io_write_bus_valid; // @[Cache.scala 159:26]
  wire [1:0] Cache_data_io_write_bus_waymask; // @[Cache.scala 159:26]
  wire [511:0] Cache_data_io_write_bus_wdata; // @[Cache.scala 159:26]
  wire  Cache_data_io_out_valid; // @[Cache.scala 159:26]
  wire [52:0] Cache_data_io_out_bits_meat_tag_0; // @[Cache.scala 159:26]
  wire [52:0] Cache_data_io_out_bits_meat_tag_1; // @[Cache.scala 159:26]
  wire  Cache_data_io_out_bits_meat_valid_0; // @[Cache.scala 159:26]
  wire  Cache_data_io_out_bits_meat_valid_1; // @[Cache.scala 159:26]
  wire [511:0] Cache_data_io_out_bits_data_data_0; // @[Cache.scala 159:26]
  wire [511:0] Cache_data_io_out_bits_data_data_1; // @[Cache.scala 159:26]
  wire [52:0] Cache_data_io_out_bits_ctrl_data_tag; // @[Cache.scala 159:26]
  wire [4:0] Cache_data_io_out_bits_ctrl_data_index; // @[Cache.scala 159:26]
  wire [5:0] Cache_data_io_out_bits_ctrl_data_offset; // @[Cache.scala 159:26]
  wire  Scanf_io_in_valid; // @[Cache.scala 160:21]
  wire [52:0] Scanf_io_in_bits_meat_tag_0; // @[Cache.scala 160:21]
  wire [52:0] Scanf_io_in_bits_meat_tag_1; // @[Cache.scala 160:21]
  wire  Scanf_io_in_bits_meat_valid_0; // @[Cache.scala 160:21]
  wire  Scanf_io_in_bits_meat_valid_1; // @[Cache.scala 160:21]
  wire [511:0] Scanf_io_in_bits_data_data_0; // @[Cache.scala 160:21]
  wire [511:0] Scanf_io_in_bits_data_data_1; // @[Cache.scala 160:21]
  wire [52:0] Scanf_io_in_bits_ctrl_data_tag; // @[Cache.scala 160:21]
  wire [4:0] Scanf_io_in_bits_ctrl_data_index; // @[Cache.scala 160:21]
  wire  Scanf_io_out_bits_hit; // @[Cache.scala 160:21]
  wire [511:0] Scanf_io_out_bits_data; // @[Cache.scala 160:21]
  wire [4:0] Scanf_io_out_bits_meta_ctrl_data_index; // @[Cache.scala 160:21]
  wire  Scanf_io_out_bits_hit_way_0; // @[Cache.scala 160:21]
  wire  Scanf_io_out_bits_hit_way_1; // @[Cache.scala 160:21]
  wire [52:0] Scanf_io_out_bits_tag_0; // @[Cache.scala 160:21]
  wire [52:0] Scanf_io_out_bits_tag_1; // @[Cache.scala 160:21]
  reg  lru [0:31]; // @[Cache.scala 173:24]
  wire  lru_lru_w_MPORT_en; // @[Cache.scala 173:24]
  wire [4:0] lru_lru_w_MPORT_addr; // @[Cache.scala 173:24]
  wire  lru_lru_w_MPORT_data; // @[Cache.scala 173:24]
  wire  lru_MPORT_data; // @[Cache.scala 173:24]
  wire [4:0] lru_MPORT_addr; // @[Cache.scala 173:24]
  wire  lru_MPORT_mask; // @[Cache.scala 173:24]
  wire  lru_MPORT_en; // @[Cache.scala 173:24]
  wire  lru_MPORT_1_data; // @[Cache.scala 173:24]
  wire [4:0] lru_MPORT_1_addr; // @[Cache.scala 173:24]
  wire  lru_MPORT_1_mask; // @[Cache.scala 173:24]
  wire  lru_MPORT_1_en; // @[Cache.scala 173:24]
  wire  lru_MPORT_2_data; // @[Cache.scala 173:24]
  wire [4:0] lru_MPORT_2_addr; // @[Cache.scala 173:24]
  wire  lru_MPORT_2_mask; // @[Cache.scala 173:24]
  wire  lru_MPORT_2_en; // @[Cache.scala 173:24]
  wire  lru_MPORT_3_data; // @[Cache.scala 173:24]
  wire [4:0] lru_MPORT_3_addr; // @[Cache.scala 173:24]
  wire  lru_MPORT_3_mask; // @[Cache.scala 173:24]
  wire  lru_MPORT_3_en; // @[Cache.scala 173:24]
  reg  lru_lru_w_MPORT_en_pipe_0;
  reg [4:0] lru_lru_w_MPORT_addr_pipe_0;
  reg  dirt_0 [0:31]; // @[Cache.scala 181:51]
  wire  dirt_0_dirt_w_en; // @[Cache.scala 181:51]
  wire [4:0] dirt_0_dirt_w_addr; // @[Cache.scala 181:51]
  wire  dirt_0_dirt_w_data; // @[Cache.scala 181:51]
  wire  dirt_0_MPORT_4_data; // @[Cache.scala 181:51]
  wire [4:0] dirt_0_MPORT_4_addr; // @[Cache.scala 181:51]
  wire  dirt_0_MPORT_4_mask; // @[Cache.scala 181:51]
  wire  dirt_0_MPORT_4_en; // @[Cache.scala 181:51]
  reg  dirt_0_dirt_w_en_pipe_0;
  reg [4:0] dirt_0_dirt_w_addr_pipe_0;
  reg  dirt_1 [0:31]; // @[Cache.scala 181:51]
  wire  dirt_1_dirt_w_en; // @[Cache.scala 181:51]
  wire [4:0] dirt_1_dirt_w_addr; // @[Cache.scala 181:51]
  wire  dirt_1_dirt_w_data; // @[Cache.scala 181:51]
  wire  dirt_1_MPORT_4_data; // @[Cache.scala 181:51]
  wire [4:0] dirt_1_MPORT_4_addr; // @[Cache.scala 181:51]
  wire  dirt_1_MPORT_4_mask; // @[Cache.scala 181:51]
  wire  dirt_1_MPORT_4_en; // @[Cache.scala 181:51]
  reg  dirt_1_dirt_w_en_pipe_0;
  reg [4:0] dirt_1_dirt_w_addr_pipe_0;
  reg [1:0] state; // @[Cache.scala 163:22]
  reg [511:0] data_line_reg; // @[Cache.scala 165:30]
  reg [63:0] mem_addr_reg; // @[Cache.scala 166:29]
  reg  lru_r; // @[Cache.scala 168:23]
  reg [3:0] count; // @[Cache.scala 176:22]
  wire  s = count == 4'h8; // @[Cache.scala 177:17]
  reg [3:0] count_write; // @[Cache.scala 182:54]
  wire  s_w = count_write == 4'h8; // @[Cache.scala 183:55]
  reg [63:0] mem_write_addr_reg; // @[Cache.scala 185:61]
  reg [511:0] mem_write_data_reg; // @[Cache.scala 186:61]
  wire  _T = 2'h0 == state; // @[Cache.scala 196:16]
  wire  _T_1 = 2'h1 == state; // @[Cache.scala 196:16]
  wire [63:0] _mem_addr_reg_T_2 = {io_in_addr_req_bits_addr[63:6],6'h0}; // @[Cat.scala 31:58]
  wire  lru_w = lru_lru_w_MPORT_data;
  wire [52:0] _GEN_5 = Scanf_io_out_bits_tag_0; // @[Cat.scala 31:{58,58}]
  wire [52:0] _GEN_6 = lru_w ? Scanf_io_out_bits_tag_1 : _GEN_5; // @[Cat.scala 31:{58,58}]
  wire [63:0] _mem_write_addr_reg_T_3 = {_GEN_6,Scanf_io_out_bits_meta_ctrl_data_index,6'h0}; // @[Cat.scala 31:58]
  wire [511:0] _GEN_7 = Cache_data_io_out_bits_data_data_0; // @[Cache.scala 208:{36,36}]
  wire [511:0] _GEN_8 = lru_w ? Cache_data_io_out_bits_data_data_1 : _GEN_7; // @[Cache.scala 208:{36,36}]
  wire  hit_way_0 = Scanf_io_out_bits_hit_way_0; // @[Cache.scala 192:21 356:11]
  wire  hit_way_1 = Scanf_io_out_bits_hit_way_1; // @[Cache.scala 192:21 356:11]
  wire  _GEN_29 = ~Scanf_io_out_bits_hit ? 1'h0 : hit_way_0; // @[Cache.scala 173:24 201:26]
  wire  _GEN_33 = ~Scanf_io_out_bits_hit ? 1'h0 : hit_way_1; // @[Cache.scala 173:24 201:26]
  wire  _T_5 = 2'h2 == state; // @[Cache.scala 196:16]
  wire [3:0] _count_T_1 = count + 4'h1; // @[Cache.scala 229:24]
  wire [63:0] _mem_addr_reg_T_4 = mem_addr_reg + 64'h8; // @[Cache.scala 236:38]
  wire [511:0] _data_line_reg_T_1 = {io_out_rdata_rep_bits_rdata,data_line_reg[511:64]}; // @[Cat.scala 31:58]
  wire [63:0] _GEN_37 = ~s ? _mem_addr_reg_T_4 : mem_addr_reg; // @[Cache.scala 235:51 236:22 166:29]
  wire [511:0] _GEN_38 = ~s ? _data_line_reg_T_1 : data_line_reg; // @[Cache.scala 235:51 238:23 165:30]
  wire  _GEN_46 = lru_r ? 1'h0 : 1'h1; // @[Cache.scala 173:24 241:29]
  wire  _GEN_50 = s & lru_r; // @[Cache.scala 173:24 240:51]
  wire  _GEN_55 = s & _GEN_46; // @[Cache.scala 173:24 240:51]
  wire [3:0] _GEN_57 = s ? 4'h0 : _count_T_1; // @[Cache.scala 240:51 246:14]
  wire  _T_16 = 2'h3 == state; // @[Cache.scala 196:16]
  wire [3:0] _count_write_T_1 = count_write + 4'h1; // @[Cache.scala 253:44]
  wire [63:0] _mem_write_addr_reg_T_5 = mem_write_addr_reg + 64'h8; // @[Cache.scala 254:58]
  wire [511:0] _mem_write_data_reg_T_4 = {64'h0,mem_write_data_reg[511:64]}; // @[Cat.scala 31:58]
  wire [3:0] _GEN_58 = s_w ? 4'h0 : _count_write_T_1; // @[Cache.scala 253:25 256:33 257:27]
  wire [3:0] _GEN_59 = 2'h3 == state ? _GEN_58 : count_write; // @[Cache.scala 196:16 182:54]
  wire [63:0] _GEN_60 = 2'h3 == state ? _mem_write_addr_reg_T_5 : mem_write_addr_reg; // @[Cache.scala 196:16 254:32 185:61]
  wire [511:0] _GEN_61 = 2'h3 == state ? _mem_write_data_reg_T_4 : mem_write_data_reg; // @[Cache.scala 196:16 255:32 186:61]
  wire  _GEN_88 = 2'h1 == state & _GEN_29; // @[Cache.scala 196:16 173:24]
  wire  _GEN_92 = 2'h1 == state & _GEN_33; // @[Cache.scala 196:16 173:24]
  wire  _GEN_99 = 2'h1 == state ? 1'h0 : 2'h2 == state & _GEN_50; // @[Cache.scala 196:16 173:24]
  wire  _GEN_104 = 2'h1 == state ? 1'h0 : 2'h2 == state & _GEN_55; // @[Cache.scala 196:16 173:24]
  wire [63:0] _GEN_135 = 3'h7 == io_in_addr_req_bits_addr[5:3] ? Scanf_io_out_bits_data[511:448] : 64'h0; // @[Cache.scala 265:115 295:16]
  wire [63:0] _GEN_136 = 3'h7 == io_in_addr_req_bits_addr[5:3] ? data_line_reg[511:448] : 64'h0; // @[Cache.scala 265:115 296:16]
  wire [63:0] _GEN_137 = 3'h6 == io_in_addr_req_bits_addr[5:3] ? Scanf_io_out_bits_data[447:384] : _GEN_135; // @[Cache.scala 265:115 291:16]
  wire [63:0] _GEN_138 = 3'h6 == io_in_addr_req_bits_addr[5:3] ? data_line_reg[447:384] : _GEN_136; // @[Cache.scala 265:115 292:16]
  wire [63:0] _GEN_139 = 3'h5 == io_in_addr_req_bits_addr[5:3] ? Scanf_io_out_bits_data[383:320] : _GEN_137; // @[Cache.scala 265:115 287:16]
  wire [63:0] _GEN_140 = 3'h5 == io_in_addr_req_bits_addr[5:3] ? data_line_reg[383:320] : _GEN_138; // @[Cache.scala 265:115 288:16]
  wire [63:0] _GEN_141 = 3'h4 == io_in_addr_req_bits_addr[5:3] ? Scanf_io_out_bits_data[319:256] : _GEN_139; // @[Cache.scala 265:115 283:16]
  wire [63:0] _GEN_142 = 3'h4 == io_in_addr_req_bits_addr[5:3] ? data_line_reg[319:256] : _GEN_140; // @[Cache.scala 265:115 284:16]
  wire [63:0] _GEN_143 = 3'h3 == io_in_addr_req_bits_addr[5:3] ? Scanf_io_out_bits_data[255:192] : _GEN_141; // @[Cache.scala 265:115 279:16]
  wire [63:0] _GEN_144 = 3'h3 == io_in_addr_req_bits_addr[5:3] ? data_line_reg[255:192] : _GEN_142; // @[Cache.scala 265:115 280:16]
  wire [63:0] _GEN_145 = 3'h2 == io_in_addr_req_bits_addr[5:3] ? Scanf_io_out_bits_data[191:128] : _GEN_143; // @[Cache.scala 265:115 275:16]
  wire [63:0] _GEN_146 = 3'h2 == io_in_addr_req_bits_addr[5:3] ? data_line_reg[191:128] : _GEN_144; // @[Cache.scala 265:115 276:16]
  wire [63:0] _GEN_147 = 3'h1 == io_in_addr_req_bits_addr[5:3] ? Scanf_io_out_bits_data[127:64] : _GEN_145; // @[Cache.scala 265:115 271:16]
  wire [63:0] _GEN_148 = 3'h1 == io_in_addr_req_bits_addr[5:3] ? data_line_reg[127:64] : _GEN_146; // @[Cache.scala 265:115 272:16]
  wire [63:0] hit_data = 3'h0 == io_in_addr_req_bits_addr[5:3] ? Scanf_io_out_bits_data[63:0] : _GEN_147; // @[Cache.scala 265:115 267:16]
  wire [63:0] mem_data = 3'h0 == io_in_addr_req_bits_addr[5:3] ? data_line_reg[63:0] : _GEN_148; // @[Cache.scala 265:115 268:16]
  wire  _GEN_153 = lru_w ? dirt_1_dirt_w_data : dirt_0_dirt_w_data; // @[Cache.scala 313:{36,36}]
  wire [1:0] _GEN_154 = _GEN_153 ? 2'h3 : 2'h2; // @[Cache.scala 313:44 314:21 316:21]
  wire [1:0] _GEN_156 = s ? 2'h0 : state; // @[Cache.scala 326:52 327:17 163:22]
  wire [1:0] _GEN_157 = s_w ? 2'h2 : state; // @[Cache.scala 333:34 334:17 163:22]
  wire [1:0] _GEN_158 = _T_16 ? _GEN_157 : state; // @[Cache.scala 300:16 163:22]
  wire  _io_in_rdata_rep_bits_rdata_T = state == 2'h1; // @[Cache.scala 344:44]
  wire  _io_in_rdata_rep_bits_rdata_T_1 = state == 2'h1 & Scanf_io_out_bits_hit; // @[Cache.scala 344:54]
  reg  Scanf_io_in_valid_REG; // @[Cache.scala 351:31]
  wire  _io_out_addr_req_valid_T = state == 2'h2; // @[Cache.scala 363:40]
  wire  _io_out_addr_req_valid_T_1 = state == 2'h3; // @[Cache.scala 363:58]
  wire  _io_out_addr_req_bits_ce_T_2 = ~s_w; // @[Cache.scala 364:79]
  wire  _io_in_rdata_rep_valid_T_4 = _io_out_addr_req_valid_T & s; // @[Cache.scala 380:75]
  wire  _io_in_rdata_rep_valid_T_5 = _io_in_rdata_rep_bits_rdata_T_1 | _io_out_addr_req_valid_T & s; // @[Cache.scala 380:57]
  wire [7:0] _wmaskextend_T_2 = io_in_addr_req_bits_we ? 8'hff : 8'h0; // @[Bitwise.scala 74:12]
  wire [7:0] _wmaskextend_T_3 = io_in_wdata_req_bits_wmask & _wmaskextend_T_2; // @[Cache.scala 383:38]
  wire  _wmaskextend_Genmask_T = Cache_data_io_out_bits_ctrl_data_offset[5:3] == 3'h0; // @[util.scala 55:15]
  wire [63:0] _wmaskextend_Genmask_T_2 = {56'h0,_wmaskextend_T_3}; // @[Cat.scala 31:58]
  wire  _wmaskextend_Genmask_T_3 = Cache_data_io_out_bits_ctrl_data_offset[5:3] == 3'h1; // @[util.scala 56:15]
  wire [63:0] _wmaskextend_Genmask_T_6 = {48'h0,_wmaskextend_T_3,8'h0}; // @[Cat.scala 31:58]
  wire  _wmaskextend_Genmask_T_7 = Cache_data_io_out_bits_ctrl_data_offset[5:3] == 3'h2; // @[util.scala 57:15]
  wire [63:0] _wmaskextend_Genmask_T_10 = {40'h0,_wmaskextend_T_3,16'h0}; // @[Cat.scala 31:58]
  wire  _wmaskextend_Genmask_T_11 = Cache_data_io_out_bits_ctrl_data_offset[5:3] == 3'h3; // @[util.scala 58:15]
  wire [63:0] _wmaskextend_Genmask_T_14 = {32'h0,_wmaskextend_T_3,24'h0}; // @[Cat.scala 31:58]
  wire  _wmaskextend_Genmask_T_15 = Cache_data_io_out_bits_ctrl_data_offset[5:3] == 3'h4; // @[util.scala 59:15]
  wire [63:0] _wmaskextend_Genmask_T_18 = {24'h0,_wmaskextend_T_3,32'h0}; // @[Cat.scala 31:58]
  wire  _wmaskextend_Genmask_T_19 = Cache_data_io_out_bits_ctrl_data_offset[5:3] == 3'h5; // @[util.scala 60:15]
  wire [63:0] _wmaskextend_Genmask_T_22 = {16'h0,_wmaskextend_T_3,40'h0}; // @[Cat.scala 31:58]
  wire  _wmaskextend_Genmask_T_23 = Cache_data_io_out_bits_ctrl_data_offset[5:3] == 3'h6; // @[util.scala 61:15]
  wire [63:0] _wmaskextend_Genmask_T_26 = {8'h0,_wmaskextend_T_3,48'h0}; // @[Cat.scala 31:58]
  wire  _wmaskextend_Genmask_T_27 = Cache_data_io_out_bits_ctrl_data_offset[5:3] == 3'h7; // @[util.scala 62:15]
  wire [63:0] _wmaskextend_Genmask_T_29 = {_wmaskextend_T_3,56'h0}; // @[Cat.scala 31:58]
  wire [63:0] _wmaskextend_Genmask_T_30 = _wmaskextend_Genmask_T_27 ? _wmaskextend_Genmask_T_29 : 64'h0; // @[Mux.scala 101:16]
  wire [63:0] _wmaskextend_Genmask_T_31 = _wmaskextend_Genmask_T_23 ? _wmaskextend_Genmask_T_26 :
    _wmaskextend_Genmask_T_30; // @[Mux.scala 101:16]
  wire [63:0] _wmaskextend_Genmask_T_32 = _wmaskextend_Genmask_T_19 ? _wmaskextend_Genmask_T_22 :
    _wmaskextend_Genmask_T_31; // @[Mux.scala 101:16]
  wire [63:0] _wmaskextend_Genmask_T_33 = _wmaskextend_Genmask_T_15 ? _wmaskextend_Genmask_T_18 :
    _wmaskextend_Genmask_T_32; // @[Mux.scala 101:16]
  wire [63:0] _wmaskextend_Genmask_T_34 = _wmaskextend_Genmask_T_11 ? _wmaskextend_Genmask_T_14 :
    _wmaskextend_Genmask_T_33; // @[Mux.scala 101:16]
  wire [63:0] _wmaskextend_Genmask_T_35 = _wmaskextend_Genmask_T_7 ? _wmaskextend_Genmask_T_10 :
    _wmaskextend_Genmask_T_34; // @[Mux.scala 101:16]
  wire [63:0] _wmaskextend_Genmask_T_36 = _wmaskextend_Genmask_T_3 ? _wmaskextend_Genmask_T_6 :
    _wmaskextend_Genmask_T_35; // @[Mux.scala 101:16]
  wire [63:0] wmaskextend_Genmask = _wmaskextend_Genmask_T ? _wmaskextend_Genmask_T_2 : _wmaskextend_Genmask_T_36; // @[Mux.scala 101:16]
  wire [7:0] _wmaskextend_T_69 = wmaskextend_Genmask[0] ? 8'hff : 8'h0; // @[Bitwise.scala 74:12]
  wire [7:0] _wmaskextend_T_71 = wmaskextend_Genmask[1] ? 8'hff : 8'h0; // @[Bitwise.scala 74:12]
  wire [7:0] _wmaskextend_T_73 = wmaskextend_Genmask[2] ? 8'hff : 8'h0; // @[Bitwise.scala 74:12]
  wire [7:0] _wmaskextend_T_75 = wmaskextend_Genmask[3] ? 8'hff : 8'h0; // @[Bitwise.scala 74:12]
  wire [7:0] _wmaskextend_T_77 = wmaskextend_Genmask[4] ? 8'hff : 8'h0; // @[Bitwise.scala 74:12]
  wire [7:0] _wmaskextend_T_79 = wmaskextend_Genmask[5] ? 8'hff : 8'h0; // @[Bitwise.scala 74:12]
  wire [7:0] _wmaskextend_T_81 = wmaskextend_Genmask[6] ? 8'hff : 8'h0; // @[Bitwise.scala 74:12]
  wire [7:0] _wmaskextend_T_83 = wmaskextend_Genmask[7] ? 8'hff : 8'h0; // @[Bitwise.scala 74:12]
  wire [7:0] _wmaskextend_T_85 = wmaskextend_Genmask[8] ? 8'hff : 8'h0; // @[Bitwise.scala 74:12]
  wire [7:0] _wmaskextend_T_87 = wmaskextend_Genmask[9] ? 8'hff : 8'h0; // @[Bitwise.scala 74:12]
  wire [7:0] _wmaskextend_T_89 = wmaskextend_Genmask[10] ? 8'hff : 8'h0; // @[Bitwise.scala 74:12]
  wire [7:0] _wmaskextend_T_91 = wmaskextend_Genmask[11] ? 8'hff : 8'h0; // @[Bitwise.scala 74:12]
  wire [7:0] _wmaskextend_T_93 = wmaskextend_Genmask[12] ? 8'hff : 8'h0; // @[Bitwise.scala 74:12]
  wire [7:0] _wmaskextend_T_95 = wmaskextend_Genmask[13] ? 8'hff : 8'h0; // @[Bitwise.scala 74:12]
  wire [7:0] _wmaskextend_T_97 = wmaskextend_Genmask[14] ? 8'hff : 8'h0; // @[Bitwise.scala 74:12]
  wire [7:0] _wmaskextend_T_99 = wmaskextend_Genmask[15] ? 8'hff : 8'h0; // @[Bitwise.scala 74:12]
  wire [7:0] _wmaskextend_T_101 = wmaskextend_Genmask[16] ? 8'hff : 8'h0; // @[Bitwise.scala 74:12]
  wire [7:0] _wmaskextend_T_103 = wmaskextend_Genmask[17] ? 8'hff : 8'h0; // @[Bitwise.scala 74:12]
  wire [7:0] _wmaskextend_T_105 = wmaskextend_Genmask[18] ? 8'hff : 8'h0; // @[Bitwise.scala 74:12]
  wire [7:0] _wmaskextend_T_107 = wmaskextend_Genmask[19] ? 8'hff : 8'h0; // @[Bitwise.scala 74:12]
  wire [7:0] _wmaskextend_T_109 = wmaskextend_Genmask[20] ? 8'hff : 8'h0; // @[Bitwise.scala 74:12]
  wire [7:0] _wmaskextend_T_111 = wmaskextend_Genmask[21] ? 8'hff : 8'h0; // @[Bitwise.scala 74:12]
  wire [7:0] _wmaskextend_T_113 = wmaskextend_Genmask[22] ? 8'hff : 8'h0; // @[Bitwise.scala 74:12]
  wire [7:0] _wmaskextend_T_115 = wmaskextend_Genmask[23] ? 8'hff : 8'h0; // @[Bitwise.scala 74:12]
  wire [7:0] _wmaskextend_T_117 = wmaskextend_Genmask[24] ? 8'hff : 8'h0; // @[Bitwise.scala 74:12]
  wire [7:0] _wmaskextend_T_119 = wmaskextend_Genmask[25] ? 8'hff : 8'h0; // @[Bitwise.scala 74:12]
  wire [7:0] _wmaskextend_T_121 = wmaskextend_Genmask[26] ? 8'hff : 8'h0; // @[Bitwise.scala 74:12]
  wire [7:0] _wmaskextend_T_123 = wmaskextend_Genmask[27] ? 8'hff : 8'h0; // @[Bitwise.scala 74:12]
  wire [7:0] _wmaskextend_T_125 = wmaskextend_Genmask[28] ? 8'hff : 8'h0; // @[Bitwise.scala 74:12]
  wire [7:0] _wmaskextend_T_127 = wmaskextend_Genmask[29] ? 8'hff : 8'h0; // @[Bitwise.scala 74:12]
  wire [7:0] _wmaskextend_T_129 = wmaskextend_Genmask[30] ? 8'hff : 8'h0; // @[Bitwise.scala 74:12]
  wire [7:0] _wmaskextend_T_131 = wmaskextend_Genmask[31] ? 8'hff : 8'h0; // @[Bitwise.scala 74:12]
  wire [7:0] _wmaskextend_T_133 = wmaskextend_Genmask[32] ? 8'hff : 8'h0; // @[Bitwise.scala 74:12]
  wire [7:0] _wmaskextend_T_135 = wmaskextend_Genmask[33] ? 8'hff : 8'h0; // @[Bitwise.scala 74:12]
  wire [7:0] _wmaskextend_T_137 = wmaskextend_Genmask[34] ? 8'hff : 8'h0; // @[Bitwise.scala 74:12]
  wire [7:0] _wmaskextend_T_139 = wmaskextend_Genmask[35] ? 8'hff : 8'h0; // @[Bitwise.scala 74:12]
  wire [7:0] _wmaskextend_T_141 = wmaskextend_Genmask[36] ? 8'hff : 8'h0; // @[Bitwise.scala 74:12]
  wire [7:0] _wmaskextend_T_143 = wmaskextend_Genmask[37] ? 8'hff : 8'h0; // @[Bitwise.scala 74:12]
  wire [7:0] _wmaskextend_T_145 = wmaskextend_Genmask[38] ? 8'hff : 8'h0; // @[Bitwise.scala 74:12]
  wire [7:0] _wmaskextend_T_147 = wmaskextend_Genmask[39] ? 8'hff : 8'h0; // @[Bitwise.scala 74:12]
  wire [7:0] _wmaskextend_T_149 = wmaskextend_Genmask[40] ? 8'hff : 8'h0; // @[Bitwise.scala 74:12]
  wire [7:0] _wmaskextend_T_151 = wmaskextend_Genmask[41] ? 8'hff : 8'h0; // @[Bitwise.scala 74:12]
  wire [7:0] _wmaskextend_T_153 = wmaskextend_Genmask[42] ? 8'hff : 8'h0; // @[Bitwise.scala 74:12]
  wire [7:0] _wmaskextend_T_155 = wmaskextend_Genmask[43] ? 8'hff : 8'h0; // @[Bitwise.scala 74:12]
  wire [7:0] _wmaskextend_T_157 = wmaskextend_Genmask[44] ? 8'hff : 8'h0; // @[Bitwise.scala 74:12]
  wire [7:0] _wmaskextend_T_159 = wmaskextend_Genmask[45] ? 8'hff : 8'h0; // @[Bitwise.scala 74:12]
  wire [7:0] _wmaskextend_T_161 = wmaskextend_Genmask[46] ? 8'hff : 8'h0; // @[Bitwise.scala 74:12]
  wire [7:0] _wmaskextend_T_163 = wmaskextend_Genmask[47] ? 8'hff : 8'h0; // @[Bitwise.scala 74:12]
  wire [7:0] _wmaskextend_T_165 = wmaskextend_Genmask[48] ? 8'hff : 8'h0; // @[Bitwise.scala 74:12]
  wire [7:0] _wmaskextend_T_167 = wmaskextend_Genmask[49] ? 8'hff : 8'h0; // @[Bitwise.scala 74:12]
  wire [7:0] _wmaskextend_T_169 = wmaskextend_Genmask[50] ? 8'hff : 8'h0; // @[Bitwise.scala 74:12]
  wire [7:0] _wmaskextend_T_171 = wmaskextend_Genmask[51] ? 8'hff : 8'h0; // @[Bitwise.scala 74:12]
  wire [7:0] _wmaskextend_T_173 = wmaskextend_Genmask[52] ? 8'hff : 8'h0; // @[Bitwise.scala 74:12]
  wire [7:0] _wmaskextend_T_175 = wmaskextend_Genmask[53] ? 8'hff : 8'h0; // @[Bitwise.scala 74:12]
  wire [7:0] _wmaskextend_T_177 = wmaskextend_Genmask[54] ? 8'hff : 8'h0; // @[Bitwise.scala 74:12]
  wire [7:0] _wmaskextend_T_179 = wmaskextend_Genmask[55] ? 8'hff : 8'h0; // @[Bitwise.scala 74:12]
  wire [7:0] _wmaskextend_T_181 = wmaskextend_Genmask[56] ? 8'hff : 8'h0; // @[Bitwise.scala 74:12]
  wire [7:0] _wmaskextend_T_183 = wmaskextend_Genmask[57] ? 8'hff : 8'h0; // @[Bitwise.scala 74:12]
  wire [7:0] _wmaskextend_T_185 = wmaskextend_Genmask[58] ? 8'hff : 8'h0; // @[Bitwise.scala 74:12]
  wire [7:0] _wmaskextend_T_187 = wmaskextend_Genmask[59] ? 8'hff : 8'h0; // @[Bitwise.scala 74:12]
  wire [7:0] _wmaskextend_T_189 = wmaskextend_Genmask[60] ? 8'hff : 8'h0; // @[Bitwise.scala 74:12]
  wire [7:0] _wmaskextend_T_191 = wmaskextend_Genmask[61] ? 8'hff : 8'h0; // @[Bitwise.scala 74:12]
  wire [7:0] _wmaskextend_T_193 = wmaskextend_Genmask[62] ? 8'hff : 8'h0; // @[Bitwise.scala 74:12]
  wire [7:0] _wmaskextend_T_195 = wmaskextend_Genmask[63] ? 8'hff : 8'h0; // @[Bitwise.scala 74:12]
  wire [63:0] wmaskextend_lo_lo_lo = {_wmaskextend_T_83,_wmaskextend_T_81,_wmaskextend_T_79,_wmaskextend_T_77,
    _wmaskextend_T_75,_wmaskextend_T_73,_wmaskextend_T_71,_wmaskextend_T_69}; // @[Cat.scala 31:58]
  wire [127:0] wmaskextend_lo_lo = {_wmaskextend_T_99,_wmaskextend_T_97,_wmaskextend_T_95,_wmaskextend_T_93,
    _wmaskextend_T_91,_wmaskextend_T_89,_wmaskextend_T_87,_wmaskextend_T_85,wmaskextend_lo_lo_lo}; // @[Cat.scala 31:58]
  wire [63:0] wmaskextend_lo_hi_lo = {_wmaskextend_T_115,_wmaskextend_T_113,_wmaskextend_T_111,_wmaskextend_T_109,
    _wmaskextend_T_107,_wmaskextend_T_105,_wmaskextend_T_103,_wmaskextend_T_101}; // @[Cat.scala 31:58]
  wire [255:0] wmaskextend_lo = {_wmaskextend_T_131,_wmaskextend_T_129,_wmaskextend_T_127,_wmaskextend_T_125,
    _wmaskextend_T_123,_wmaskextend_T_121,_wmaskextend_T_119,_wmaskextend_T_117,wmaskextend_lo_hi_lo,wmaskextend_lo_lo}; // @[Cat.scala 31:58]
  wire [63:0] wmaskextend_hi_lo_lo = {_wmaskextend_T_147,_wmaskextend_T_145,_wmaskextend_T_143,_wmaskextend_T_141,
    _wmaskextend_T_139,_wmaskextend_T_137,_wmaskextend_T_135,_wmaskextend_T_133}; // @[Cat.scala 31:58]
  wire [127:0] wmaskextend_hi_lo = {_wmaskextend_T_163,_wmaskextend_T_161,_wmaskextend_T_159,_wmaskextend_T_157,
    _wmaskextend_T_155,_wmaskextend_T_153,_wmaskextend_T_151,_wmaskextend_T_149,wmaskextend_hi_lo_lo}; // @[Cat.scala 31:58]
  wire [63:0] wmaskextend_hi_hi_lo = {_wmaskextend_T_179,_wmaskextend_T_177,_wmaskextend_T_175,_wmaskextend_T_173,
    _wmaskextend_T_171,_wmaskextend_T_169,_wmaskextend_T_167,_wmaskextend_T_165}; // @[Cat.scala 31:58]
  wire [255:0] wmaskextend_hi = {_wmaskextend_T_195,_wmaskextend_T_193,_wmaskextend_T_191,_wmaskextend_T_189,
    _wmaskextend_T_187,_wmaskextend_T_185,_wmaskextend_T_183,_wmaskextend_T_181,wmaskextend_hi_hi_lo,wmaskextend_hi_lo}; // @[Cat.scala 31:58]
  wire [511:0] wmaskextend = {wmaskextend_hi,wmaskextend_lo}; // @[Cat.scala 31:58]
  wire [511:0] wdata_extend = {io_in_wdata_req_bits_wdata,io_in_wdata_req_bits_wdata,io_in_wdata_req_bits_wdata,
    io_in_wdata_req_bits_wdata,io_in_wdata_req_bits_wdata,io_in_wdata_req_bits_wdata,io_in_wdata_req_bits_wdata,
    io_in_wdata_req_bits_wdata}; // @[Cat.scala 31:58]
  wire [511:0] _wdata_T_3 = ~wmaskextend; // @[util.scala 38:17]
  wire [511:0] _wdata_T_5 = data_line_reg & _wdata_T_3; // @[util.scala 38:14]
  wire [511:0] _wdata_T_6 = wdata_extend & wmaskextend; // @[util.scala 38:55]
  wire [511:0] _wdata_T_7 = _wdata_T_5 | _wdata_T_6; // @[util.scala 38:44]
  wire [511:0] _wdata_T_10 = Scanf_io_out_bits_data & _wdata_T_3; // @[util.scala 38:14]
  wire [511:0] _wdata_T_12 = _wdata_T_10 | _wdata_T_6; // @[util.scala 38:44]
  wire  _Cache_data_io_write_bus_valid_T_2 = _io_in_rdata_rep_bits_rdata_T & io_in_addr_req_bits_we &
    Scanf_io_out_bits_hit; // @[Cache.scala 396:91]
  wire [1:0] _waymask_T_3 = {hit_way_1,hit_way_0}; // @[Cache.scala 409:80]
  wire [1:0] _waymask_T_5 = lru_r ? 2'h2 : 2'h1; // @[Cache.scala 409:90]
  wire [1:0] waymask = _io_in_rdata_rep_bits_rdata_T_1 & io_in_addr_req_bits_we ? _waymask_T_3 : _waymask_T_5; // @[Cache.scala 409:22]
  Cache_Data Cache_data ( // @[Cache.scala 159:26]
    .clock(Cache_data_clock),
    .io_in_valid(Cache_data_io_in_valid),
    .io_in_addr(Cache_data_io_in_addr),
    .io_write_bus_addr(Cache_data_io_write_bus_addr),
    .io_write_bus_valid(Cache_data_io_write_bus_valid),
    .io_write_bus_waymask(Cache_data_io_write_bus_waymask),
    .io_write_bus_wdata(Cache_data_io_write_bus_wdata),
    .io_out_valid(Cache_data_io_out_valid),
    .io_out_bits_meat_tag_0(Cache_data_io_out_bits_meat_tag_0),
    .io_out_bits_meat_tag_1(Cache_data_io_out_bits_meat_tag_1),
    .io_out_bits_meat_valid_0(Cache_data_io_out_bits_meat_valid_0),
    .io_out_bits_meat_valid_1(Cache_data_io_out_bits_meat_valid_1),
    .io_out_bits_data_data_0(Cache_data_io_out_bits_data_data_0),
    .io_out_bits_data_data_1(Cache_data_io_out_bits_data_data_1),
    .io_out_bits_ctrl_data_tag(Cache_data_io_out_bits_ctrl_data_tag),
    .io_out_bits_ctrl_data_index(Cache_data_io_out_bits_ctrl_data_index),
    .io_out_bits_ctrl_data_offset(Cache_data_io_out_bits_ctrl_data_offset)
  );
  Scanf_data Scanf ( // @[Cache.scala 160:21]
    .io_in_valid(Scanf_io_in_valid),
    .io_in_bits_meat_tag_0(Scanf_io_in_bits_meat_tag_0),
    .io_in_bits_meat_tag_1(Scanf_io_in_bits_meat_tag_1),
    .io_in_bits_meat_valid_0(Scanf_io_in_bits_meat_valid_0),
    .io_in_bits_meat_valid_1(Scanf_io_in_bits_meat_valid_1),
    .io_in_bits_data_data_0(Scanf_io_in_bits_data_data_0),
    .io_in_bits_data_data_1(Scanf_io_in_bits_data_data_1),
    .io_in_bits_ctrl_data_tag(Scanf_io_in_bits_ctrl_data_tag),
    .io_in_bits_ctrl_data_index(Scanf_io_in_bits_ctrl_data_index),
    .io_out_bits_hit(Scanf_io_out_bits_hit),
    .io_out_bits_data(Scanf_io_out_bits_data),
    .io_out_bits_meta_ctrl_data_index(Scanf_io_out_bits_meta_ctrl_data_index),
    .io_out_bits_hit_way_0(Scanf_io_out_bits_hit_way_0),
    .io_out_bits_hit_way_1(Scanf_io_out_bits_hit_way_1),
    .io_out_bits_tag_0(Scanf_io_out_bits_tag_0),
    .io_out_bits_tag_1(Scanf_io_out_bits_tag_1)
  );
  assign lru_lru_w_MPORT_en = lru_lru_w_MPORT_en_pipe_0;
  assign lru_lru_w_MPORT_addr = lru_lru_w_MPORT_addr_pipe_0;
  assign lru_lru_w_MPORT_data = lru[lru_lru_w_MPORT_addr]; // @[Cache.scala 173:24]
  assign lru_MPORT_data = 1'h1;
  assign lru_MPORT_addr = Cache_data_io_out_bits_ctrl_data_index;
  assign lru_MPORT_mask = 1'h1;
  assign lru_MPORT_en = _T ? 1'h0 : _GEN_88;
  assign lru_MPORT_1_data = 1'h0;
  assign lru_MPORT_1_addr = Cache_data_io_out_bits_ctrl_data_index;
  assign lru_MPORT_1_mask = 1'h1;
  assign lru_MPORT_1_en = _T ? 1'h0 : _GEN_92;
  assign lru_MPORT_2_data = 1'h0;
  assign lru_MPORT_2_addr = Cache_data_io_out_bits_ctrl_data_index;
  assign lru_MPORT_2_mask = 1'h1;
  assign lru_MPORT_2_en = _T ? 1'h0 : _GEN_99;
  assign lru_MPORT_3_data = 1'h1;
  assign lru_MPORT_3_addr = Cache_data_io_out_bits_ctrl_data_index;
  assign lru_MPORT_3_mask = 1'h1;
  assign lru_MPORT_3_en = _T ? 1'h0 : _GEN_104;
  assign dirt_0_dirt_w_en = dirt_0_dirt_w_en_pipe_0;
  assign dirt_0_dirt_w_addr = dirt_0_dirt_w_addr_pipe_0;
  assign dirt_0_dirt_w_data = dirt_0[dirt_0_dirt_w_addr]; // @[Cache.scala 181:51]
  assign dirt_0_MPORT_4_data = 1'h1;
  assign dirt_0_MPORT_4_addr = Cache_data_io_out_bits_ctrl_data_index;
  assign dirt_0_MPORT_4_mask = waymask[0];
  assign dirt_0_MPORT_4_en = io_in_addr_req_bits_we & _io_in_rdata_rep_valid_T_5;
  assign dirt_1_dirt_w_en = dirt_1_dirt_w_en_pipe_0;
  assign dirt_1_dirt_w_addr = dirt_1_dirt_w_addr_pipe_0;
  assign dirt_1_dirt_w_data = dirt_1[dirt_1_dirt_w_addr]; // @[Cache.scala 181:51]
  assign dirt_1_MPORT_4_data = 1'h1;
  assign dirt_1_MPORT_4_addr = Cache_data_io_out_bits_ctrl_data_index;
  assign dirt_1_MPORT_4_mask = waymask[1];
  assign dirt_1_MPORT_4_en = io_in_addr_req_bits_we & _io_in_rdata_rep_valid_T_5;
  assign io_in_rdata_rep_valid = (_io_in_rdata_rep_bits_rdata_T_1 | _io_out_addr_req_valid_T & s) & ~
    io_in_addr_req_bits_we; // @[Cache.scala 380:108]
  assign io_in_rdata_rep_bits_rdata = state == 2'h1 & Scanf_io_out_bits_hit ? hit_data : mem_data; // @[Cache.scala 344:36]
  assign io_in_wdata_rep = _Cache_data_io_write_bus_valid_T_2 | _io_in_rdata_rep_valid_T_4 & io_in_addr_req_bits_we; // @[Cache.scala 401:83]
  assign io_out_addr_req_bits_addr = _io_out_addr_req_valid_T_1 ? mem_write_addr_reg : mem_addr_reg; // @[Cache.scala 365:37]
  assign io_out_addr_req_bits_ce = _io_out_addr_req_valid_T | _io_out_addr_req_valid_T_1 & ~s_w; // @[Cache.scala 364:51]
  assign io_out_addr_req_bits_we = _io_out_addr_req_valid_T_1 & _io_out_addr_req_bits_ce_T_2; // @[Cache.scala 366:57]
  assign io_out_wdata_req_bits_wdata = mem_write_data_reg[63:0]; // @[Cache.scala 367:62]
  assign Cache_data_clock = clock;
  assign Cache_data_io_in_valid = io_in_addr_req_valid & state == 2'h0; // @[Cache.scala 349:54]
  assign Cache_data_io_in_addr = io_in_addr_req_bits_addr; // @[Cache.scala 350:25]
  assign Cache_data_io_write_bus_addr = _io_in_rdata_rep_valid_T_4 | _Cache_data_io_write_bus_valid_T_2 ?
    io_in_addr_req_bits_addr : 64'h0; // @[Cache.scala 397:40]
  assign Cache_data_io_write_bus_valid = s | _io_in_rdata_rep_bits_rdata_T & io_in_addr_req_bits_we &
    Scanf_io_out_bits_hit; // @[Cache.scala 396:45]
  assign Cache_data_io_write_bus_waymask = _io_in_rdata_rep_bits_rdata_T_1 & io_in_addr_req_bits_we ? _waymask_T_3 :
    _waymask_T_5; // @[Cache.scala 409:22]
  assign Cache_data_io_write_bus_wdata = _io_in_rdata_rep_valid_T_4 ? _wdata_T_7 : _wdata_T_12; // @[Cache.scala 387:20]
  assign Scanf_io_in_valid = Scanf_io_in_valid_REG; // @[Cache.scala 351:21]
  assign Scanf_io_in_bits_meat_tag_0 = Cache_data_io_out_bits_meat_tag_0; // @[Cache.scala 352:25]
  assign Scanf_io_in_bits_meat_tag_1 = Cache_data_io_out_bits_meat_tag_1; // @[Cache.scala 352:25]
  assign Scanf_io_in_bits_meat_valid_0 = Cache_data_io_out_bits_meat_valid_0; // @[Cache.scala 352:25]
  assign Scanf_io_in_bits_meat_valid_1 = Cache_data_io_out_bits_meat_valid_1; // @[Cache.scala 352:25]
  assign Scanf_io_in_bits_data_data_0 = Cache_data_io_out_bits_data_data_0; // @[Cache.scala 353:25]
  assign Scanf_io_in_bits_data_data_1 = Cache_data_io_out_bits_data_data_1; // @[Cache.scala 353:25]
  assign Scanf_io_in_bits_ctrl_data_tag = Cache_data_io_out_bits_ctrl_data_tag; // @[Cache.scala 354:30]
  assign Scanf_io_in_bits_ctrl_data_index = Cache_data_io_out_bits_ctrl_data_index; // @[Cache.scala 354:30]
  always @(posedge clock) begin
    if (lru_MPORT_en & lru_MPORT_mask) begin
      lru[lru_MPORT_addr] <= lru_MPORT_data; // @[Cache.scala 173:24]
    end
    if (lru_MPORT_1_en & lru_MPORT_1_mask) begin
      lru[lru_MPORT_1_addr] <= lru_MPORT_1_data; // @[Cache.scala 173:24]
    end
    if (lru_MPORT_2_en & lru_MPORT_2_mask) begin
      lru[lru_MPORT_2_addr] <= lru_MPORT_2_data; // @[Cache.scala 173:24]
    end
    if (lru_MPORT_3_en & lru_MPORT_3_mask) begin
      lru[lru_MPORT_3_addr] <= lru_MPORT_3_data; // @[Cache.scala 173:24]
    end
    lru_lru_w_MPORT_en_pipe_0 <= 1'h1;
    if (1'h1) begin
      lru_lru_w_MPORT_addr_pipe_0 <= Cache_data_io_out_bits_ctrl_data_index;
    end
    if (dirt_0_MPORT_4_en & dirt_0_MPORT_4_mask) begin
      dirt_0[dirt_0_MPORT_4_addr] <= dirt_0_MPORT_4_data; // @[Cache.scala 181:51]
    end
    dirt_0_dirt_w_en_pipe_0 <= 1'h1;
    if (1'h1) begin
      dirt_0_dirt_w_addr_pipe_0 <= Cache_data_io_out_bits_ctrl_data_index;
    end
    if (dirt_1_MPORT_4_en & dirt_1_MPORT_4_mask) begin
      dirt_1[dirt_1_MPORT_4_addr] <= dirt_1_MPORT_4_data; // @[Cache.scala 181:51]
    end
    dirt_1_dirt_w_en_pipe_0 <= 1'h1;
    if (1'h1) begin
      dirt_1_dirt_w_addr_pipe_0 <= Cache_data_io_out_bits_ctrl_data_index;
    end
    if (reset) begin // @[Cache.scala 163:22]
      state <= 2'h0; // @[Cache.scala 163:22]
    end else if (_T) begin // @[Cache.scala 300:16]
      if (io_in_addr_req_valid) begin // @[Cache.scala 302:33]
        state <= 2'h1; // @[Cache.scala 303:15]
      end else begin
        state <= 2'h0; // @[Cache.scala 305:15]
      end
    end else if (_T_1) begin // @[Cache.scala 300:16]
      if (Scanf_io_out_bits_hit) begin // @[Cache.scala 309:26]
        state <= 2'h0; // @[Cache.scala 310:17]
      end else begin
        state <= _GEN_154;
      end
    end else if (_T_5) begin // @[Cache.scala 300:16]
      state <= _GEN_156;
    end else begin
      state <= _GEN_158;
    end
    if (reset) begin // @[Cache.scala 165:30]
      data_line_reg <= 512'h0; // @[Cache.scala 165:30]
    end else if (!(2'h0 == state)) begin // @[Cache.scala 196:16]
      if (!(2'h1 == state)) begin // @[Cache.scala 196:16]
        if (2'h2 == state) begin // @[Cache.scala 196:16]
          data_line_reg <= _GEN_38;
        end
      end
    end
    if (reset) begin // @[Cache.scala 166:29]
      mem_addr_reg <= 64'h0; // @[Cache.scala 166:29]
    end else if (!(2'h0 == state)) begin // @[Cache.scala 196:16]
      if (2'h1 == state) begin // @[Cache.scala 196:16]
        if (~Scanf_io_out_bits_hit) begin // @[Cache.scala 201:26]
          mem_addr_reg <= _mem_addr_reg_T_2; // @[Cache.scala 202:24]
        end
      end else if (2'h2 == state) begin // @[Cache.scala 196:16]
        mem_addr_reg <= _GEN_37;
      end
    end
    if (reset) begin // @[Cache.scala 168:23]
      lru_r <= 1'h0; // @[Cache.scala 168:23]
    end else if (!(2'h0 == state)) begin // @[Cache.scala 196:16]
      if (2'h1 == state) begin // @[Cache.scala 196:16]
        if (~Scanf_io_out_bits_hit) begin // @[Cache.scala 201:26]
          lru_r <= lru_w; // @[Cache.scala 203:17]
        end
      end
    end
    if (reset) begin // @[Cache.scala 176:22]
      count <= 4'h0; // @[Cache.scala 176:22]
    end else if (2'h0 == state) begin // @[Cache.scala 196:16]
      count <= 4'h0; // @[Cache.scala 198:13]
    end else if (!(2'h1 == state)) begin // @[Cache.scala 196:16]
      if (2'h2 == state) begin // @[Cache.scala 196:16]
        count <= _GEN_57;
      end
    end
    if (reset) begin // @[Cache.scala 182:54]
      count_write <= 4'h0; // @[Cache.scala 182:54]
    end else if (!(2'h0 == state)) begin // @[Cache.scala 196:16]
      if (2'h1 == state) begin // @[Cache.scala 196:16]
        if (~Scanf_io_out_bits_hit) begin // @[Cache.scala 201:26]
          count_write <= 4'h0; // @[Cache.scala 206:29]
        end
      end else if (!(2'h2 == state)) begin // @[Cache.scala 196:16]
        count_write <= _GEN_59;
      end
    end
    if (reset) begin // @[Cache.scala 185:61]
      mem_write_addr_reg <= 64'h0; // @[Cache.scala 185:61]
    end else if (!(2'h0 == state)) begin // @[Cache.scala 196:16]
      if (2'h1 == state) begin // @[Cache.scala 196:16]
        if (~Scanf_io_out_bits_hit) begin // @[Cache.scala 201:26]
          mem_write_addr_reg <= _mem_write_addr_reg_T_3; // @[Cache.scala 207:36]
        end
      end else if (!(2'h2 == state)) begin // @[Cache.scala 196:16]
        mem_write_addr_reg <= _GEN_60;
      end
    end
    if (reset) begin // @[Cache.scala 186:61]
      mem_write_data_reg <= 512'h0; // @[Cache.scala 186:61]
    end else if (!(2'h0 == state)) begin // @[Cache.scala 196:16]
      if (2'h1 == state) begin // @[Cache.scala 196:16]
        if (~Scanf_io_out_bits_hit) begin // @[Cache.scala 201:26]
          mem_write_data_reg <= _GEN_8; // @[Cache.scala 208:36]
        end
      end else if (!(2'h2 == state)) begin // @[Cache.scala 196:16]
        mem_write_data_reg <= _GEN_61;
      end
    end
    Scanf_io_in_valid_REG <= Cache_data_io_out_valid; // @[Cache.scala 351:31]
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
  _RAND_0 = {1{`RANDOM}};
  for (initvar = 0; initvar < 32; initvar = initvar+1)
    lru[initvar] = _RAND_0[0:0];
  _RAND_3 = {1{`RANDOM}};
  for (initvar = 0; initvar < 32; initvar = initvar+1)
    dirt_0[initvar] = _RAND_3[0:0];
  _RAND_6 = {1{`RANDOM}};
  for (initvar = 0; initvar < 32; initvar = initvar+1)
    dirt_1[initvar] = _RAND_6[0:0];
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  lru_lru_w_MPORT_en_pipe_0 = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  lru_lru_w_MPORT_addr_pipe_0 = _RAND_2[4:0];
  _RAND_4 = {1{`RANDOM}};
  dirt_0_dirt_w_en_pipe_0 = _RAND_4[0:0];
  _RAND_5 = {1{`RANDOM}};
  dirt_0_dirt_w_addr_pipe_0 = _RAND_5[4:0];
  _RAND_7 = {1{`RANDOM}};
  dirt_1_dirt_w_en_pipe_0 = _RAND_7[0:0];
  _RAND_8 = {1{`RANDOM}};
  dirt_1_dirt_w_addr_pipe_0 = _RAND_8[4:0];
  _RAND_9 = {1{`RANDOM}};
  state = _RAND_9[1:0];
  _RAND_10 = {16{`RANDOM}};
  data_line_reg = _RAND_10[511:0];
  _RAND_11 = {2{`RANDOM}};
  mem_addr_reg = _RAND_11[63:0];
  _RAND_12 = {1{`RANDOM}};
  lru_r = _RAND_12[0:0];
  _RAND_13 = {1{`RANDOM}};
  count = _RAND_13[3:0];
  _RAND_14 = {1{`RANDOM}};
  count_write = _RAND_14[3:0];
  _RAND_15 = {2{`RANDOM}};
  mem_write_addr_reg = _RAND_15[63:0];
  _RAND_16 = {16{`RANDOM}};
  mem_write_data_reg = _RAND_16[511:0];
  _RAND_17 = {1{`RANDOM}};
  Scanf_io_in_valid_REG = _RAND_17[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module MMIO(
  input         clock,
  input         reset,
  input         io_in_addr_req_valid,
  input  [63:0] io_in_addr_req_bits_addr,
  input         io_in_addr_req_bits_ce,
  input         io_in_addr_req_bits_we,
  output        io_in_rdata_rep_valid,
  output [63:0] io_in_rdata_rep_bits_rdata,
  input  [63:0] io_in_wdata_req_bits_wdata,
  input  [7:0]  io_in_wdata_req_bits_wmask,
  output        io_in_wdata_rep,
  output [63:0] io_out_addr_req_bits_addr,
  output        io_out_addr_req_bits_ce,
  output        io_out_addr_req_bits_we,
  input  [63:0] io_out_rdata_rep_bits_rdata,
  output [63:0] io_out_wdata_req_bits_wdata,
  output [7:0]  io_out_wdata_req_bits_wmask
);
  wire  DCACHE_clock; // @[MMIO.scala 12:22]
  wire  DCACHE_reset; // @[MMIO.scala 12:22]
  wire  DCACHE_io_in_addr_req_valid; // @[MMIO.scala 12:22]
  wire [63:0] DCACHE_io_in_addr_req_bits_addr; // @[MMIO.scala 12:22]
  wire  DCACHE_io_in_addr_req_bits_we; // @[MMIO.scala 12:22]
  wire  DCACHE_io_in_rdata_rep_valid; // @[MMIO.scala 12:22]
  wire [63:0] DCACHE_io_in_rdata_rep_bits_rdata; // @[MMIO.scala 12:22]
  wire [63:0] DCACHE_io_in_wdata_req_bits_wdata; // @[MMIO.scala 12:22]
  wire [7:0] DCACHE_io_in_wdata_req_bits_wmask; // @[MMIO.scala 12:22]
  wire  DCACHE_io_in_wdata_rep; // @[MMIO.scala 12:22]
  wire [63:0] DCACHE_io_out_addr_req_bits_addr; // @[MMIO.scala 12:22]
  wire  DCACHE_io_out_addr_req_bits_ce; // @[MMIO.scala 12:22]
  wire  DCACHE_io_out_addr_req_bits_we; // @[MMIO.scala 12:22]
  wire [63:0] DCACHE_io_out_rdata_rep_bits_rdata; // @[MMIO.scala 12:22]
  wire [63:0] DCACHE_io_out_wdata_req_bits_wdata; // @[MMIO.scala 12:22]
  wire  _GEN_0 = io_in_addr_req_bits_addr >= 64'ha0000000 & io_in_addr_req_bits_addr <= 64'ha2000000 ? 1'h0 :
    io_in_addr_req_valid; // @[MMIO.scala 14:16 19:97 20:35]
  wire  _GEN_1 = io_in_addr_req_bits_addr >= 64'ha0000000 & io_in_addr_req_bits_addr <= 64'ha2000000 ?
    io_in_addr_req_bits_we : DCACHE_io_out_addr_req_bits_we; // @[MMIO.scala 17:10 19:97 22:23]
  wire  _GEN_2 = io_in_addr_req_bits_addr >= 64'ha0000000 & io_in_addr_req_bits_addr <= 64'ha2000000 ?
    io_in_addr_req_bits_ce : DCACHE_io_out_addr_req_bits_ce; // @[MMIO.scala 17:10 19:97 22:23]
  wire [63:0] _GEN_3 = io_in_addr_req_bits_addr >= 64'ha0000000 & io_in_addr_req_bits_addr <= 64'ha2000000 ?
    io_in_addr_req_bits_addr : DCACHE_io_out_addr_req_bits_addr; // @[MMIO.scala 17:10 19:97 22:23]
  wire  _GEN_6 = io_in_addr_req_bits_addr >= 64'ha0000000 & io_in_addr_req_bits_addr <= 64'ha2000000 |
    DCACHE_io_in_wdata_rep; // @[MMIO.scala 14:16 19:97 23:28]
  wire [63:0] _GEN_7 = io_in_addr_req_bits_addr >= 64'ha0000000 & io_in_addr_req_bits_addr <= 64'ha2000000 ?
    io_out_rdata_rep_bits_rdata : DCACHE_io_in_rdata_rep_bits_rdata; // @[MMIO.scala 14:16 19:97 24:24]
  wire  _GEN_8 = io_in_addr_req_bits_addr >= 64'ha0000000 & io_in_addr_req_bits_addr <= 64'ha2000000 |
    DCACHE_io_in_rdata_rep_valid; // @[MMIO.scala 14:16 19:97 24:24]
  wire [7:0] _GEN_10 = io_in_addr_req_bits_addr >= 64'ha0000000 & io_in_addr_req_bits_addr <= 64'ha2000000 ?
    io_in_wdata_req_bits_wmask : 8'hff; // @[MMIO.scala 17:10 19:97 25:28]
  wire [63:0] _GEN_11 = io_in_addr_req_bits_addr >= 64'ha0000000 & io_in_addr_req_bits_addr <= 64'ha2000000 ?
    io_in_wdata_req_bits_wdata : DCACHE_io_out_wdata_req_bits_wdata; // @[MMIO.scala 17:10 19:97 25:28]
  Cache_1 DCACHE ( // @[MMIO.scala 12:22]
    .clock(DCACHE_clock),
    .reset(DCACHE_reset),
    .io_in_addr_req_valid(DCACHE_io_in_addr_req_valid),
    .io_in_addr_req_bits_addr(DCACHE_io_in_addr_req_bits_addr),
    .io_in_addr_req_bits_we(DCACHE_io_in_addr_req_bits_we),
    .io_in_rdata_rep_valid(DCACHE_io_in_rdata_rep_valid),
    .io_in_rdata_rep_bits_rdata(DCACHE_io_in_rdata_rep_bits_rdata),
    .io_in_wdata_req_bits_wdata(DCACHE_io_in_wdata_req_bits_wdata),
    .io_in_wdata_req_bits_wmask(DCACHE_io_in_wdata_req_bits_wmask),
    .io_in_wdata_rep(DCACHE_io_in_wdata_rep),
    .io_out_addr_req_bits_addr(DCACHE_io_out_addr_req_bits_addr),
    .io_out_addr_req_bits_ce(DCACHE_io_out_addr_req_bits_ce),
    .io_out_addr_req_bits_we(DCACHE_io_out_addr_req_bits_we),
    .io_out_rdata_rep_bits_rdata(DCACHE_io_out_rdata_rep_bits_rdata),
    .io_out_wdata_req_bits_wdata(DCACHE_io_out_wdata_req_bits_wdata)
  );
  assign io_in_rdata_rep_valid = io_in_addr_req_valid ? _GEN_8 : DCACHE_io_in_rdata_rep_valid; // @[MMIO.scala 14:16 18:29]
  assign io_in_rdata_rep_bits_rdata = io_in_addr_req_valid ? _GEN_7 : DCACHE_io_in_rdata_rep_bits_rdata; // @[MMIO.scala 14:16 18:29]
  assign io_in_wdata_rep = io_in_addr_req_valid ? _GEN_6 : DCACHE_io_in_wdata_rep; // @[MMIO.scala 14:16 18:29]
  assign io_out_addr_req_bits_addr = io_in_addr_req_valid ? _GEN_3 : DCACHE_io_out_addr_req_bits_addr; // @[MMIO.scala 17:10 18:29]
  assign io_out_addr_req_bits_ce = io_in_addr_req_valid ? _GEN_2 : DCACHE_io_out_addr_req_bits_ce; // @[MMIO.scala 17:10 18:29]
  assign io_out_addr_req_bits_we = io_in_addr_req_valid ? _GEN_1 : DCACHE_io_out_addr_req_bits_we; // @[MMIO.scala 17:10 18:29]
  assign io_out_wdata_req_bits_wdata = io_in_addr_req_valid ? _GEN_11 : DCACHE_io_out_wdata_req_bits_wdata; // @[MMIO.scala 17:10 18:29]
  assign io_out_wdata_req_bits_wmask = io_in_addr_req_valid ? _GEN_10 : 8'hff; // @[MMIO.scala 17:10 18:29]
  assign DCACHE_clock = clock;
  assign DCACHE_reset = reset;
  assign DCACHE_io_in_addr_req_valid = io_in_addr_req_valid ? _GEN_0 : io_in_addr_req_valid; // @[MMIO.scala 14:16 18:29]
  assign DCACHE_io_in_addr_req_bits_addr = io_in_addr_req_bits_addr; // @[MMIO.scala 14:16]
  assign DCACHE_io_in_addr_req_bits_we = io_in_addr_req_bits_we; // @[MMIO.scala 14:16]
  assign DCACHE_io_in_wdata_req_bits_wdata = io_in_wdata_req_bits_wdata; // @[MMIO.scala 14:16]
  assign DCACHE_io_in_wdata_req_bits_wmask = io_in_wdata_req_bits_wmask; // @[MMIO.scala 14:16]
  assign DCACHE_io_out_rdata_rep_bits_rdata = io_out_rdata_rep_bits_rdata; // @[MMIO.scala 17:10]
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
  reg [31:0] _RAND_44;
  reg [31:0] _RAND_45;
  reg [63:0] _RAND_46;
  reg [63:0] _RAND_47;
`endif // RANDOMIZE_REG_INIT
  wire  IF_clock; // @[CoreTop.scala 53:18]
  wire  IF_reset; // @[CoreTop.scala 53:18]
  wire  IF_io_branch_io_is_branch; // @[CoreTop.scala 53:18]
  wire  IF_io_branch_io_is_jump; // @[CoreTop.scala 53:18]
  wire [63:0] IF_io_branch_io_dnpc; // @[CoreTop.scala 53:18]
  wire  IF_io_cache_req_addr_req_valid; // @[CoreTop.scala 53:18]
  wire [63:0] IF_io_cache_req_addr_req_bits_addr; // @[CoreTop.scala 53:18]
  wire  IF_io_cache_req_rdata_rep_ready; // @[CoreTop.scala 53:18]
  wire  IF_io_cache_req_rdata_rep_valid; // @[CoreTop.scala 53:18]
  wire [63:0] IF_io_cache_req_rdata_rep_bits_rdata; // @[CoreTop.scala 53:18]
  wire  IF_io_out_ready; // @[CoreTop.scala 53:18]
  wire  IF_io_out_valid; // @[CoreTop.scala 53:18]
  wire [63:0] IF_io_out_bits_PC; // @[CoreTop.scala 53:18]
  wire [31:0] IF_io_out_bits_Inst; // @[CoreTop.scala 53:18]
  wire  IF_io_flush; // @[CoreTop.scala 53:18]
  wire  ID_io_in_ready; // @[CoreTop.scala 57:18]
  wire  ID_io_in_valid; // @[CoreTop.scala 57:18]
  wire [63:0] ID_io_in_bits_PC; // @[CoreTop.scala 57:18]
  wire [31:0] ID_io_in_bits_Inst; // @[CoreTop.scala 57:18]
  wire [63:0] ID_io_REG1; // @[CoreTop.scala 57:18]
  wire [63:0] ID_io_REG2; // @[CoreTop.scala 57:18]
  wire  ID_io_flush; // @[CoreTop.scala 57:18]
  wire  ID_io_out_ready; // @[CoreTop.scala 57:18]
  wire  ID_io_out_valid; // @[CoreTop.scala 57:18]
  wire [2:0] ID_io_out_bits_ctrl_signal_src1Type; // @[CoreTop.scala 57:18]
  wire [2:0] ID_io_out_bits_ctrl_signal_src2Type; // @[CoreTop.scala 57:18]
  wire [2:0] ID_io_out_bits_ctrl_signal_fuType; // @[CoreTop.scala 57:18]
  wire  ID_io_out_bits_ctrl_signal_inst_valid; // @[CoreTop.scala 57:18]
  wire [4:0] ID_io_out_bits_ctrl_signal_rfSrc1; // @[CoreTop.scala 57:18]
  wire [4:0] ID_io_out_bits_ctrl_signal_rfSrc2; // @[CoreTop.scala 57:18]
  wire  ID_io_out_bits_ctrl_signal_rfWen; // @[CoreTop.scala 57:18]
  wire [6:0] ID_io_out_bits_ctrl_signal_aluoptype; // @[CoreTop.scala 57:18]
  wire [4:0] ID_io_out_bits_ctrl_signal_rfDest; // @[CoreTop.scala 57:18]
  wire [63:0] ID_io_out_bits_ctrl_data_src1; // @[CoreTop.scala 57:18]
  wire [63:0] ID_io_out_bits_ctrl_data_src2; // @[CoreTop.scala 57:18]
  wire [63:0] ID_io_out_bits_ctrl_data_Imm; // @[CoreTop.scala 57:18]
  wire [63:0] ID_io_out_bits_ctrl_flow_PC; // @[CoreTop.scala 57:18]
  wire [31:0] ID_io_out_bits_ctrl_flow_inst; // @[CoreTop.scala 57:18]
  wire  EX_clock; // @[CoreTop.scala 59:18]
  wire  EX_reset; // @[CoreTop.scala 59:18]
  wire  EX_io_in_ready; // @[CoreTop.scala 59:18]
  wire  EX_io_in_valid; // @[CoreTop.scala 59:18]
  wire [2:0] EX_io_in_bits_ctrl_signal_src1Type; // @[CoreTop.scala 59:18]
  wire [2:0] EX_io_in_bits_ctrl_signal_src2Type; // @[CoreTop.scala 59:18]
  wire [2:0] EX_io_in_bits_ctrl_signal_fuType; // @[CoreTop.scala 59:18]
  wire  EX_io_in_bits_ctrl_signal_inst_valid; // @[CoreTop.scala 59:18]
  wire [4:0] EX_io_in_bits_ctrl_signal_rfSrc1; // @[CoreTop.scala 59:18]
  wire [4:0] EX_io_in_bits_ctrl_signal_rfSrc2; // @[CoreTop.scala 59:18]
  wire  EX_io_in_bits_ctrl_signal_rfWen; // @[CoreTop.scala 59:18]
  wire [6:0] EX_io_in_bits_ctrl_signal_aluoptype; // @[CoreTop.scala 59:18]
  wire [4:0] EX_io_in_bits_ctrl_signal_rfDest; // @[CoreTop.scala 59:18]
  wire [63:0] EX_io_in_bits_ctrl_data_src1; // @[CoreTop.scala 59:18]
  wire [63:0] EX_io_in_bits_ctrl_data_src2; // @[CoreTop.scala 59:18]
  wire [63:0] EX_io_in_bits_ctrl_data_Imm; // @[CoreTop.scala 59:18]
  wire [63:0] EX_io_in_bits_ctrl_flow_PC; // @[CoreTop.scala 59:18]
  wire [31:0] EX_io_in_bits_ctrl_flow_inst; // @[CoreTop.scala 59:18]
  wire [63:0] EX_io_src1; // @[CoreTop.scala 59:18]
  wire [63:0] EX_io_src2; // @[CoreTop.scala 59:18]
  wire  EX_io_branchIO_is_branch; // @[CoreTop.scala 59:18]
  wire  EX_io_branchIO_is_jump; // @[CoreTop.scala 59:18]
  wire [63:0] EX_io_branchIO_dnpc; // @[CoreTop.scala 59:18]
  wire  EX_io_out_ready; // @[CoreTop.scala 59:18]
  wire  EX_io_out_valid; // @[CoreTop.scala 59:18]
  wire [2:0] EX_io_out_bits_ctrl_signal_fuType; // @[CoreTop.scala 59:18]
  wire  EX_io_out_bits_ctrl_signal_inst_valid; // @[CoreTop.scala 59:18]
  wire  EX_io_out_bits_ctrl_signal_rfWen; // @[CoreTop.scala 59:18]
  wire [6:0] EX_io_out_bits_ctrl_signal_aluoptype; // @[CoreTop.scala 59:18]
  wire [63:0] EX_io_out_bits_ctrl_flow_PC; // @[CoreTop.scala 59:18]
  wire [31:0] EX_io_out_bits_ctrl_flow_inst; // @[CoreTop.scala 59:18]
  wire [63:0] EX_io_out_bits_ctrl_flow_Dnpc; // @[CoreTop.scala 59:18]
  wire [4:0] EX_io_out_bits_ctrl_rf_rfDest; // @[CoreTop.scala 59:18]
  wire  EX_io_out_bits_ctrl_rf_rfWen; // @[CoreTop.scala 59:18]
  wire [63:0] EX_io_out_bits_ctrl_rf_rfData; // @[CoreTop.scala 59:18]
  wire [63:0] EX_io_out_bits_ctrl_data_src1; // @[CoreTop.scala 59:18]
  wire [63:0] EX_io_out_bits_ctrl_data_src2; // @[CoreTop.scala 59:18]
  wire [63:0] EX_io_out_bits_ctrl_data_Imm; // @[CoreTop.scala 59:18]
  wire  EX_io_is_break; // @[CoreTop.scala 59:18]
  wire  EX_io_is_flush; // @[CoreTop.scala 59:18]
  wire  DIP_is_break; // @[CoreTop.scala 61:19]
  wire [63:0] DIP_rf_0; // @[CoreTop.scala 61:19]
  wire [63:0] DIP_rf_1; // @[CoreTop.scala 61:19]
  wire [63:0] DIP_rf_2; // @[CoreTop.scala 61:19]
  wire [63:0] DIP_rf_3; // @[CoreTop.scala 61:19]
  wire [63:0] DIP_rf_4; // @[CoreTop.scala 61:19]
  wire [63:0] DIP_rf_5; // @[CoreTop.scala 61:19]
  wire [63:0] DIP_rf_6; // @[CoreTop.scala 61:19]
  wire [63:0] DIP_rf_7; // @[CoreTop.scala 61:19]
  wire [63:0] DIP_rf_8; // @[CoreTop.scala 61:19]
  wire [63:0] DIP_rf_9; // @[CoreTop.scala 61:19]
  wire [63:0] DIP_rf_10; // @[CoreTop.scala 61:19]
  wire [63:0] DIP_rf_11; // @[CoreTop.scala 61:19]
  wire [63:0] DIP_rf_12; // @[CoreTop.scala 61:19]
  wire [63:0] DIP_rf_13; // @[CoreTop.scala 61:19]
  wire [63:0] DIP_rf_14; // @[CoreTop.scala 61:19]
  wire [63:0] DIP_rf_15; // @[CoreTop.scala 61:19]
  wire [63:0] DIP_rf_16; // @[CoreTop.scala 61:19]
  wire [63:0] DIP_rf_17; // @[CoreTop.scala 61:19]
  wire [63:0] DIP_rf_18; // @[CoreTop.scala 61:19]
  wire [63:0] DIP_rf_19; // @[CoreTop.scala 61:19]
  wire [63:0] DIP_rf_20; // @[CoreTop.scala 61:19]
  wire [63:0] DIP_rf_21; // @[CoreTop.scala 61:19]
  wire [63:0] DIP_rf_22; // @[CoreTop.scala 61:19]
  wire [63:0] DIP_rf_23; // @[CoreTop.scala 61:19]
  wire [63:0] DIP_rf_24; // @[CoreTop.scala 61:19]
  wire [63:0] DIP_rf_25; // @[CoreTop.scala 61:19]
  wire [63:0] DIP_rf_26; // @[CoreTop.scala 61:19]
  wire [63:0] DIP_rf_27; // @[CoreTop.scala 61:19]
  wire [63:0] DIP_rf_28; // @[CoreTop.scala 61:19]
  wire [63:0] DIP_rf_29; // @[CoreTop.scala 61:19]
  wire [63:0] DIP_rf_30; // @[CoreTop.scala 61:19]
  wire [63:0] DIP_rf_31; // @[CoreTop.scala 61:19]
  wire [31:0] DIP_inst; // @[CoreTop.scala 61:19]
  wire [63:0] DIP_pc; // @[CoreTop.scala 61:19]
  wire  DIP_inst_valid; // @[CoreTop.scala 61:19]
  wire [63:0] DIP_dnpc; // @[CoreTop.scala 61:19]
  wire  DIP_is_skip; // @[CoreTop.scala 61:19]
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
  wire [63:0] mem_addr; // @[CoreTop.scala 65:19]
  wire  mem_reset; // @[CoreTop.scala 65:19]
  wire  mem_clk; // @[CoreTop.scala 65:19]
  wire  mem_we; // @[CoreTop.scala 65:19]
  wire  mem_ce; // @[CoreTop.scala 65:19]
  wire [63:0] mem_wdata; // @[CoreTop.scala 65:19]
  wire [63:0] mem_rdata; // @[CoreTop.scala 65:19]
  wire [7:0] mem_wmask; // @[CoreTop.scala 65:19]
  wire  MEM_io_in_ready; // @[CoreTop.scala 67:19]
  wire  MEM_io_in_valid; // @[CoreTop.scala 67:19]
  wire [2:0] MEM_io_in_bits_ctrl_signal_fuType; // @[CoreTop.scala 67:19]
  wire  MEM_io_in_bits_ctrl_signal_inst_valid; // @[CoreTop.scala 67:19]
  wire  MEM_io_in_bits_ctrl_signal_rfWen; // @[CoreTop.scala 67:19]
  wire [6:0] MEM_io_in_bits_ctrl_signal_aluoptype; // @[CoreTop.scala 67:19]
  wire [63:0] MEM_io_in_bits_ctrl_flow_PC; // @[CoreTop.scala 67:19]
  wire [31:0] MEM_io_in_bits_ctrl_flow_inst; // @[CoreTop.scala 67:19]
  wire [63:0] MEM_io_in_bits_ctrl_flow_Dnpc; // @[CoreTop.scala 67:19]
  wire [4:0] MEM_io_in_bits_ctrl_rf_rfDest; // @[CoreTop.scala 67:19]
  wire [63:0] MEM_io_in_bits_ctrl_rf_rfData; // @[CoreTop.scala 67:19]
  wire [63:0] MEM_io_in_bits_ctrl_data_src1; // @[CoreTop.scala 67:19]
  wire [63:0] MEM_io_in_bits_ctrl_data_src2; // @[CoreTop.scala 67:19]
  wire [63:0] MEM_io_in_bits_ctrl_data_Imm; // @[CoreTop.scala 67:19]
  wire  MEM_io_out_ready; // @[CoreTop.scala 67:19]
  wire  MEM_io_out_valid; // @[CoreTop.scala 67:19]
  wire  MEM_io_out_bits_ctrl_signal_inst_valid; // @[CoreTop.scala 67:19]
  wire  MEM_io_out_bits_ctrl_signal_rfWen; // @[CoreTop.scala 67:19]
  wire [63:0] MEM_io_out_bits_ctrl_flow_PC; // @[CoreTop.scala 67:19]
  wire [31:0] MEM_io_out_bits_ctrl_flow_inst; // @[CoreTop.scala 67:19]
  wire [63:0] MEM_io_out_bits_ctrl_flow_Dnpc; // @[CoreTop.scala 67:19]
  wire  MEM_io_out_bits_ctrl_flow_skip; // @[CoreTop.scala 67:19]
  wire [4:0] MEM_io_out_bits_ctrl_rf_rfDest; // @[CoreTop.scala 67:19]
  wire  MEM_io_out_bits_ctrl_rf_rfWen; // @[CoreTop.scala 67:19]
  wire [63:0] MEM_io_out_bits_ctrl_rf_rfData; // @[CoreTop.scala 67:19]
  wire  MEM_io_cache_io_addr_req_valid; // @[CoreTop.scala 67:19]
  wire [63:0] MEM_io_cache_io_addr_req_bits_addr; // @[CoreTop.scala 67:19]
  wire  MEM_io_cache_io_addr_req_bits_ce; // @[CoreTop.scala 67:19]
  wire  MEM_io_cache_io_addr_req_bits_we; // @[CoreTop.scala 67:19]
  wire  MEM_io_cache_io_rdata_rep_valid; // @[CoreTop.scala 67:19]
  wire [63:0] MEM_io_cache_io_rdata_rep_bits_rdata; // @[CoreTop.scala 67:19]
  wire [63:0] MEM_io_cache_io_wdata_req_bits_wdata; // @[CoreTop.scala 67:19]
  wire [7:0] MEM_io_cache_io_wdata_req_bits_wmask; // @[CoreTop.scala 67:19]
  wire  MEM_io_cache_io_wdata_rep; // @[CoreTop.scala 67:19]
  wire  WB_io_in_valid; // @[CoreTop.scala 69:18]
  wire  WB_io_in_bits_ctrl_signal_inst_valid; // @[CoreTop.scala 69:18]
  wire  WB_io_in_bits_ctrl_signal_rfWen; // @[CoreTop.scala 69:18]
  wire [63:0] WB_io_in_bits_ctrl_flow_PC; // @[CoreTop.scala 69:18]
  wire [31:0] WB_io_in_bits_ctrl_flow_inst; // @[CoreTop.scala 69:18]
  wire [63:0] WB_io_in_bits_ctrl_flow_Dnpc; // @[CoreTop.scala 69:18]
  wire  WB_io_in_bits_ctrl_flow_skip; // @[CoreTop.scala 69:18]
  wire [4:0] WB_io_in_bits_ctrl_rf_rfDest; // @[CoreTop.scala 69:18]
  wire [63:0] WB_io_in_bits_ctrl_rf_rfData; // @[CoreTop.scala 69:18]
  wire  WB_io_out_ready; // @[CoreTop.scala 69:18]
  wire  WB_io_out_valid; // @[CoreTop.scala 69:18]
  wire  WB_io_out_bits_ctrl_signal_inst_valid; // @[CoreTop.scala 69:18]
  wire [63:0] WB_io_out_bits_ctrl_flow_PC; // @[CoreTop.scala 69:18]
  wire [31:0] WB_io_out_bits_ctrl_flow_inst; // @[CoreTop.scala 69:18]
  wire [63:0] WB_io_out_bits_ctrl_flow_Dnpc; // @[CoreTop.scala 69:18]
  wire  WB_io_out_bits_ctrl_flow_skip; // @[CoreTop.scala 69:18]
  wire [4:0] WB_io_out_bits_ctrl_rf_rfDest; // @[CoreTop.scala 69:18]
  wire  WB_io_out_bits_ctrl_rf_rfWen; // @[CoreTop.scala 69:18]
  wire [63:0] WB_io_out_bits_ctrl_rf_rfData; // @[CoreTop.scala 69:18]
  wire [4:0] bypass_io_EX_rf_rfDest; // @[CoreTop.scala 71:22]
  wire  bypass_io_EX_rf_rfWen; // @[CoreTop.scala 71:22]
  wire [63:0] bypass_io_EX_rf_rfData; // @[CoreTop.scala 71:22]
  wire [4:0] bypass_io_MEM_rf_rfDest; // @[CoreTop.scala 71:22]
  wire  bypass_io_MEM_rf_rfWen; // @[CoreTop.scala 71:22]
  wire [63:0] bypass_io_MEM_rf_rfData; // @[CoreTop.scala 71:22]
  wire [4:0] bypass_io_WB_rf_rfDest; // @[CoreTop.scala 71:22]
  wire  bypass_io_WB_rf_rfWen; // @[CoreTop.scala 71:22]
  wire [63:0] bypass_io_WB_rf_rfData; // @[CoreTop.scala 71:22]
  wire [63:0] bypass_io_Reg1; // @[CoreTop.scala 71:22]
  wire [4:0] bypass_io_reg_index1; // @[CoreTop.scala 71:22]
  wire [63:0] bypass_io_Reg2; // @[CoreTop.scala 71:22]
  wire [4:0] bypass_io_reg_index2; // @[CoreTop.scala 71:22]
  wire [63:0] bypass_io_Bypass_REG1; // @[CoreTop.scala 71:22]
  wire [63:0] bypass_io_Bypass_REG2; // @[CoreTop.scala 71:22]
  wire [4:0] mem_bypass_io_MEM_rf_rfDest; // @[CoreTop.scala 73:25]
  wire  mem_bypass_io_MEM_rf_rfWen; // @[CoreTop.scala 73:25]
  wire [63:0] mem_bypass_io_MEM_rf_rfData; // @[CoreTop.scala 73:25]
  wire [63:0] mem_bypass_io_Reg1; // @[CoreTop.scala 73:25]
  wire [4:0] mem_bypass_io_reg_index1; // @[CoreTop.scala 73:25]
  wire [63:0] mem_bypass_io_Reg2; // @[CoreTop.scala 73:25]
  wire [4:0] mem_bypass_io_reg_index2; // @[CoreTop.scala 73:25]
  wire [63:0] mem_bypass_io_Bypass_REG1; // @[CoreTop.scala 73:25]
  wire [63:0] mem_bypass_io_Bypass_REG2; // @[CoreTop.scala 73:25]
  wire  ICACHE_clock; // @[CoreTop.scala 75:22]
  wire  ICACHE_reset; // @[CoreTop.scala 75:22]
  wire  ICACHE_io_in_addr_req_valid; // @[CoreTop.scala 75:22]
  wire [63:0] ICACHE_io_in_addr_req_bits_addr; // @[CoreTop.scala 75:22]
  wire  ICACHE_io_in_rdata_rep_ready; // @[CoreTop.scala 75:22]
  wire  ICACHE_io_in_rdata_rep_valid; // @[CoreTop.scala 75:22]
  wire [63:0] ICACHE_io_in_rdata_rep_bits_rdata; // @[CoreTop.scala 75:22]
  wire  ICACHE_io_flush; // @[CoreTop.scala 75:22]
  wire [63:0] ICACHE_io_out_addr_req_bits_addr; // @[CoreTop.scala 75:22]
  wire  ICACHE_io_out_addr_req_bits_ce; // @[CoreTop.scala 75:22]
  wire [63:0] ICACHE_io_out_rdata_rep_bits_rdata; // @[CoreTop.scala 75:22]
  wire [63:0] IFMEM_addr; // @[CoreTop.scala 76:21]
  wire  IFMEM_reset; // @[CoreTop.scala 76:21]
  wire  IFMEM_clk; // @[CoreTop.scala 76:21]
  wire  IFMEM_we; // @[CoreTop.scala 76:21]
  wire  IFMEM_ce; // @[CoreTop.scala 76:21]
  wire [63:0] IFMEM_wdata; // @[CoreTop.scala 76:21]
  wire [63:0] IFMEM_rdata; // @[CoreTop.scala 76:21]
  wire [7:0] IFMEM_wmask; // @[CoreTop.scala 76:21]
  wire  MMIO_clock; // @[CoreTop.scala 78:20]
  wire  MMIO_reset; // @[CoreTop.scala 78:20]
  wire  MMIO_io_in_addr_req_valid; // @[CoreTop.scala 78:20]
  wire [63:0] MMIO_io_in_addr_req_bits_addr; // @[CoreTop.scala 78:20]
  wire  MMIO_io_in_addr_req_bits_ce; // @[CoreTop.scala 78:20]
  wire  MMIO_io_in_addr_req_bits_we; // @[CoreTop.scala 78:20]
  wire  MMIO_io_in_rdata_rep_valid; // @[CoreTop.scala 78:20]
  wire [63:0] MMIO_io_in_rdata_rep_bits_rdata; // @[CoreTop.scala 78:20]
  wire [63:0] MMIO_io_in_wdata_req_bits_wdata; // @[CoreTop.scala 78:20]
  wire [7:0] MMIO_io_in_wdata_req_bits_wmask; // @[CoreTop.scala 78:20]
  wire  MMIO_io_in_wdata_rep; // @[CoreTop.scala 78:20]
  wire [63:0] MMIO_io_out_addr_req_bits_addr; // @[CoreTop.scala 78:20]
  wire  MMIO_io_out_addr_req_bits_ce; // @[CoreTop.scala 78:20]
  wire  MMIO_io_out_addr_req_bits_we; // @[CoreTop.scala 78:20]
  wire [63:0] MMIO_io_out_rdata_rep_bits_rdata; // @[CoreTop.scala 78:20]
  wire [63:0] MMIO_io_out_wdata_req_bits_wdata; // @[CoreTop.scala 78:20]
  wire [7:0] MMIO_io_out_wdata_req_bits_wmask; // @[CoreTop.scala 78:20]
  wire  _T = ID_io_out_ready & ID_io_out_valid; // @[Decoupled.scala 50:35]
  reg  valid; // @[Pipline.scala 8:24]
  wire  _GEN_0 = _T ? 1'h0 : valid; // @[Pipline.scala 10:22 11:13 8:24]
  wire  _T_1 = IF_io_out_valid & ID_io_in_ready; // @[Pipline.scala 13:21]
  wire  _GEN_1 = IF_io_out_valid & ID_io_in_ready | _GEN_0; // @[Pipline.scala 13:37 14:13]
  reg [63:0] ID_io_in_bits_r_PC; // @[Reg.scala 16:16]
  reg [31:0] ID_io_in_bits_r_Inst; // @[Reg.scala 16:16]
  wire  _T_3 = EX_io_out_ready & EX_io_out_valid; // @[Decoupled.scala 50:35]
  reg  valid_1; // @[Pipline.scala 8:24]
  wire  _GEN_5 = _T_3 ? 1'h0 : valid_1; // @[Pipline.scala 10:22 11:13 8:24]
  wire  _T_4 = ID_io_out_valid & EX_io_in_ready; // @[Pipline.scala 13:21]
  wire  _GEN_6 = ID_io_out_valid & EX_io_in_ready | _GEN_5; // @[Pipline.scala 13:37 14:13]
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
  wire  _T_6 = MEM_io_out_ready & MEM_io_out_valid; // @[Decoupled.scala 50:35]
  reg  valid_2; // @[Pipline.scala 8:24]
  wire  _GEN_24 = _T_6 ? 1'h0 : valid_2; // @[Pipline.scala 10:22 11:13 8:24]
  wire  _T_7 = EX_io_out_valid & MEM_io_in_ready; // @[Pipline.scala 13:21]
  wire  _GEN_25 = EX_io_out_valid & MEM_io_in_ready | _GEN_24; // @[Pipline.scala 13:37 14:13]
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
  wire  _T_9 = WB_io_out_ready & WB_io_out_valid; // @[Decoupled.scala 50:35]
  reg  valid_3; // @[Pipline.scala 8:24]
  wire  _GEN_46 = _T_9 ? 1'h0 : valid_3; // @[Pipline.scala 10:22 11:13 8:24]
  wire  _T_10 = MEM_io_out_valid; // @[Pipline.scala 13:21]
  wire  _GEN_47 = MEM_io_out_valid | _GEN_46; // @[Pipline.scala 13:37 14:13]
  reg  WB_io_in_bits_r_ctrl_signal_inst_valid; // @[Reg.scala 16:16]
  reg  WB_io_in_bits_r_ctrl_signal_rfWen; // @[Reg.scala 16:16]
  reg [63:0] WB_io_in_bits_r_ctrl_flow_PC; // @[Reg.scala 16:16]
  reg [31:0] WB_io_in_bits_r_ctrl_flow_inst; // @[Reg.scala 16:16]
  reg [63:0] WB_io_in_bits_r_ctrl_flow_Dnpc; // @[Reg.scala 16:16]
  reg  WB_io_in_bits_r_ctrl_flow_skip; // @[Reg.scala 16:16]
  reg [4:0] WB_io_in_bits_r_ctrl_rf_rfDest; // @[Reg.scala 16:16]
  reg [63:0] WB_io_in_bits_r_ctrl_rf_rfData; // @[Reg.scala 16:16]
  wire  _T_13 = WB_io_out_bits_ctrl_rf_rfDest == 5'h0; // @[RF.scala 9:61]
  wire [63:0] _T_14 = WB_io_out_bits_ctrl_rf_rfData; // @[RF.scala 9:78]
  reg  DIP_io_is_break_REG; // @[CoreTop.scala 192:37]
  reg  DIP_io_is_break_REG_1; // @[CoreTop.scala 192:29]
  reg [31:0] DIP_io_inst_REG; // @[CoreTop.scala 196:25]
  reg  DIP_io_is_skip_REG; // @[CoreTop.scala 197:28]
  reg  DIP_io_inst_valid_REG; // @[CoreTop.scala 198:31]
  reg [63:0] DIP_io_pc_REG; // @[CoreTop.scala 199:23]
  reg [63:0] DIP_io_dnpc_REG; // @[CoreTop.scala 200:25]
  IF IF ( // @[CoreTop.scala 53:18]
    .clock(IF_clock),
    .reset(IF_reset),
    .io_branch_io_is_branch(IF_io_branch_io_is_branch),
    .io_branch_io_is_jump(IF_io_branch_io_is_jump),
    .io_branch_io_dnpc(IF_io_branch_io_dnpc),
    .io_cache_req_addr_req_valid(IF_io_cache_req_addr_req_valid),
    .io_cache_req_addr_req_bits_addr(IF_io_cache_req_addr_req_bits_addr),
    .io_cache_req_rdata_rep_ready(IF_io_cache_req_rdata_rep_ready),
    .io_cache_req_rdata_rep_valid(IF_io_cache_req_rdata_rep_valid),
    .io_cache_req_rdata_rep_bits_rdata(IF_io_cache_req_rdata_rep_bits_rdata),
    .io_out_ready(IF_io_out_ready),
    .io_out_valid(IF_io_out_valid),
    .io_out_bits_PC(IF_io_out_bits_PC),
    .io_out_bits_Inst(IF_io_out_bits_Inst),
    .io_flush(IF_io_flush)
  );
  ID ID ( // @[CoreTop.scala 57:18]
    .io_in_ready(ID_io_in_ready),
    .io_in_valid(ID_io_in_valid),
    .io_in_bits_PC(ID_io_in_bits_PC),
    .io_in_bits_Inst(ID_io_in_bits_Inst),
    .io_REG1(ID_io_REG1),
    .io_REG2(ID_io_REG2),
    .io_flush(ID_io_flush),
    .io_out_ready(ID_io_out_ready),
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
  EXE EX ( // @[CoreTop.scala 59:18]
    .clock(EX_clock),
    .reset(EX_reset),
    .io_in_ready(EX_io_in_ready),
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
    .io_out_ready(EX_io_out_ready),
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
  DIP_model DIP ( // @[CoreTop.scala 61:19]
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
  MEM mem ( // @[CoreTop.scala 65:19]
    .addr(mem_addr),
    .reset(mem_reset),
    .clk(mem_clk),
    .we(mem_we),
    .ce(mem_ce),
    .wdata(mem_wdata),
    .rdata(mem_rdata),
    .wmask(mem_wmask)
  );
  MEM_stage MEM ( // @[CoreTop.scala 67:19]
    .io_in_ready(MEM_io_in_ready),
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
    .io_out_ready(MEM_io_out_ready),
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
    .io_cache_io_addr_req_valid(MEM_io_cache_io_addr_req_valid),
    .io_cache_io_addr_req_bits_addr(MEM_io_cache_io_addr_req_bits_addr),
    .io_cache_io_addr_req_bits_ce(MEM_io_cache_io_addr_req_bits_ce),
    .io_cache_io_addr_req_bits_we(MEM_io_cache_io_addr_req_bits_we),
    .io_cache_io_rdata_rep_valid(MEM_io_cache_io_rdata_rep_valid),
    .io_cache_io_rdata_rep_bits_rdata(MEM_io_cache_io_rdata_rep_bits_rdata),
    .io_cache_io_wdata_req_bits_wdata(MEM_io_cache_io_wdata_req_bits_wdata),
    .io_cache_io_wdata_req_bits_wmask(MEM_io_cache_io_wdata_req_bits_wmask),
    .io_cache_io_wdata_rep(MEM_io_cache_io_wdata_rep)
  );
  WB WB ( // @[CoreTop.scala 69:18]
    .io_in_valid(WB_io_in_valid),
    .io_in_bits_ctrl_signal_inst_valid(WB_io_in_bits_ctrl_signal_inst_valid),
    .io_in_bits_ctrl_signal_rfWen(WB_io_in_bits_ctrl_signal_rfWen),
    .io_in_bits_ctrl_flow_PC(WB_io_in_bits_ctrl_flow_PC),
    .io_in_bits_ctrl_flow_inst(WB_io_in_bits_ctrl_flow_inst),
    .io_in_bits_ctrl_flow_Dnpc(WB_io_in_bits_ctrl_flow_Dnpc),
    .io_in_bits_ctrl_flow_skip(WB_io_in_bits_ctrl_flow_skip),
    .io_in_bits_ctrl_rf_rfDest(WB_io_in_bits_ctrl_rf_rfDest),
    .io_in_bits_ctrl_rf_rfData(WB_io_in_bits_ctrl_rf_rfData),
    .io_out_ready(WB_io_out_ready),
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
  Bypass bypass ( // @[CoreTop.scala 71:22]
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
  MEM_Bypass mem_bypass ( // @[CoreTop.scala 73:25]
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
  Cache ICACHE ( // @[CoreTop.scala 75:22]
    .clock(ICACHE_clock),
    .reset(ICACHE_reset),
    .io_in_addr_req_valid(ICACHE_io_in_addr_req_valid),
    .io_in_addr_req_bits_addr(ICACHE_io_in_addr_req_bits_addr),
    .io_in_rdata_rep_ready(ICACHE_io_in_rdata_rep_ready),
    .io_in_rdata_rep_valid(ICACHE_io_in_rdata_rep_valid),
    .io_in_rdata_rep_bits_rdata(ICACHE_io_in_rdata_rep_bits_rdata),
    .io_flush(ICACHE_io_flush),
    .io_out_addr_req_bits_addr(ICACHE_io_out_addr_req_bits_addr),
    .io_out_addr_req_bits_ce(ICACHE_io_out_addr_req_bits_ce),
    .io_out_rdata_rep_bits_rdata(ICACHE_io_out_rdata_rep_bits_rdata)
  );
  MEM IFMEM ( // @[CoreTop.scala 76:21]
    .addr(IFMEM_addr),
    .reset(IFMEM_reset),
    .clk(IFMEM_clk),
    .we(IFMEM_we),
    .ce(IFMEM_ce),
    .wdata(IFMEM_wdata),
    .rdata(IFMEM_rdata),
    .wmask(IFMEM_wmask)
  );
  MMIO MMIO ( // @[CoreTop.scala 78:20]
    .clock(MMIO_clock),
    .reset(MMIO_reset),
    .io_in_addr_req_valid(MMIO_io_in_addr_req_valid),
    .io_in_addr_req_bits_addr(MMIO_io_in_addr_req_bits_addr),
    .io_in_addr_req_bits_ce(MMIO_io_in_addr_req_bits_ce),
    .io_in_addr_req_bits_we(MMIO_io_in_addr_req_bits_we),
    .io_in_rdata_rep_valid(MMIO_io_in_rdata_rep_valid),
    .io_in_rdata_rep_bits_rdata(MMIO_io_in_rdata_rep_bits_rdata),
    .io_in_wdata_req_bits_wdata(MMIO_io_in_wdata_req_bits_wdata),
    .io_in_wdata_req_bits_wmask(MMIO_io_in_wdata_req_bits_wmask),
    .io_in_wdata_rep(MMIO_io_in_wdata_rep),
    .io_out_addr_req_bits_addr(MMIO_io_out_addr_req_bits_addr),
    .io_out_addr_req_bits_ce(MMIO_io_out_addr_req_bits_ce),
    .io_out_addr_req_bits_we(MMIO_io_out_addr_req_bits_we),
    .io_out_rdata_rep_bits_rdata(MMIO_io_out_rdata_rep_bits_rdata),
    .io_out_wdata_req_bits_wdata(MMIO_io_out_wdata_req_bits_wdata),
    .io_out_wdata_req_bits_wmask(MMIO_io_out_wdata_req_bits_wmask)
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
  assign rf_MPORT_data = _T_13 ? 64'h0 : _T_14;
  assign rf_MPORT_addr = WB_io_out_bits_ctrl_rf_rfDest;
  assign rf_MPORT_mask = 1'h1;
  assign rf_MPORT_en = WB_io_out_bits_ctrl_rf_rfWen;
  assign io_pc = IF_io_out_bits_PC; // @[CoreTop.scala 202:9]
  assign io_inst = WB_io_out_bits_ctrl_flow_inst; // @[CoreTop.scala 201:11]
  assign IF_clock = clock;
  assign IF_reset = reset;
  assign IF_io_branch_io_is_branch = EX_io_branchIO_is_branch; // @[CoreTop.scala 127:19]
  assign IF_io_branch_io_is_jump = EX_io_branchIO_is_jump; // @[CoreTop.scala 127:19]
  assign IF_io_branch_io_dnpc = EX_io_branchIO_dnpc; // @[CoreTop.scala 127:19]
  assign IF_io_cache_req_rdata_rep_valid = ICACHE_io_in_rdata_rep_valid; // @[CoreTop.scala 94:29]
  assign IF_io_cache_req_rdata_rep_bits_rdata = ICACHE_io_in_rdata_rep_bits_rdata; // @[CoreTop.scala 94:29]
  assign IF_io_out_ready = ID_io_in_ready; // @[Pipline.scala 20:16]
  assign IF_io_flush = EX_io_is_flush; // @[CoreTop.scala 115:15]
  assign ID_io_in_valid = valid; // @[Pipline.scala 23:17]
  assign ID_io_in_bits_PC = ID_io_in_bits_r_PC; // @[Pipline.scala 21:16]
  assign ID_io_in_bits_Inst = ID_io_in_bits_r_Inst; // @[Pipline.scala 21:16]
  assign ID_io_REG1 = bypass_io_Bypass_REG1; // @[CoreTop.scala 119:14]
  assign ID_io_REG2 = bypass_io_Bypass_REG2; // @[CoreTop.scala 120:14]
  assign ID_io_flush = EX_io_is_flush; // @[CoreTop.scala 121:15]
  assign ID_io_out_ready = EX_io_in_ready; // @[Pipline.scala 20:16]
  assign EX_clock = clock;
  assign EX_reset = reset;
  assign EX_io_in_valid = valid_1; // @[Pipline.scala 23:17]
  assign EX_io_in_bits_ctrl_signal_src1Type = EX_io_in_bits_r_ctrl_signal_src1Type; // @[Pipline.scala 21:16]
  assign EX_io_in_bits_ctrl_signal_src2Type = EX_io_in_bits_r_ctrl_signal_src2Type; // @[Pipline.scala 21:16]
  assign EX_io_in_bits_ctrl_signal_fuType = EX_io_in_bits_r_ctrl_signal_fuType; // @[Pipline.scala 21:16]
  assign EX_io_in_bits_ctrl_signal_inst_valid = EX_io_in_bits_r_ctrl_signal_inst_valid; // @[Pipline.scala 21:16]
  assign EX_io_in_bits_ctrl_signal_rfSrc1 = EX_io_in_bits_r_ctrl_signal_rfSrc1; // @[Pipline.scala 21:16]
  assign EX_io_in_bits_ctrl_signal_rfSrc2 = EX_io_in_bits_r_ctrl_signal_rfSrc2; // @[Pipline.scala 21:16]
  assign EX_io_in_bits_ctrl_signal_rfWen = EX_io_in_bits_r_ctrl_signal_rfWen; // @[Pipline.scala 21:16]
  assign EX_io_in_bits_ctrl_signal_aluoptype = EX_io_in_bits_r_ctrl_signal_aluoptype; // @[Pipline.scala 21:16]
  assign EX_io_in_bits_ctrl_signal_rfDest = EX_io_in_bits_r_ctrl_signal_rfDest; // @[Pipline.scala 21:16]
  assign EX_io_in_bits_ctrl_data_src1 = EX_io_in_bits_r_ctrl_data_src1; // @[Pipline.scala 21:16]
  assign EX_io_in_bits_ctrl_data_src2 = EX_io_in_bits_r_ctrl_data_src2; // @[Pipline.scala 21:16]
  assign EX_io_in_bits_ctrl_data_Imm = EX_io_in_bits_r_ctrl_data_Imm; // @[Pipline.scala 21:16]
  assign EX_io_in_bits_ctrl_flow_PC = EX_io_in_bits_r_ctrl_flow_PC; // @[Pipline.scala 21:16]
  assign EX_io_in_bits_ctrl_flow_inst = EX_io_in_bits_r_ctrl_flow_inst; // @[Pipline.scala 21:16]
  assign EX_io_src1 = mem_bypass_io_Bypass_REG1; // @[CoreTop.scala 135:14]
  assign EX_io_src2 = mem_bypass_io_Bypass_REG2; // @[CoreTop.scala 136:14]
  assign EX_io_out_ready = MEM_io_in_ready; // @[Pipline.scala 20:16]
  assign DIP_is_break = DIP_io_is_break_REG_1; // @[CoreTop.scala 192:19]
  assign DIP_rf_0 = rf_DIP_io_rf_0_MPORT_data; // @[CoreTop.scala 194:18]
  assign DIP_rf_1 = rf_DIP_io_rf_1_MPORT_data; // @[CoreTop.scala 194:18]
  assign DIP_rf_2 = rf_DIP_io_rf_2_MPORT_data; // @[CoreTop.scala 194:18]
  assign DIP_rf_3 = rf_DIP_io_rf_3_MPORT_data; // @[CoreTop.scala 194:18]
  assign DIP_rf_4 = rf_DIP_io_rf_4_MPORT_data; // @[CoreTop.scala 194:18]
  assign DIP_rf_5 = rf_DIP_io_rf_5_MPORT_data; // @[CoreTop.scala 194:18]
  assign DIP_rf_6 = rf_DIP_io_rf_6_MPORT_data; // @[CoreTop.scala 194:18]
  assign DIP_rf_7 = rf_DIP_io_rf_7_MPORT_data; // @[CoreTop.scala 194:18]
  assign DIP_rf_8 = rf_DIP_io_rf_8_MPORT_data; // @[CoreTop.scala 194:18]
  assign DIP_rf_9 = rf_DIP_io_rf_9_MPORT_data; // @[CoreTop.scala 194:18]
  assign DIP_rf_10 = rf_DIP_io_rf_10_MPORT_data; // @[CoreTop.scala 194:18]
  assign DIP_rf_11 = rf_DIP_io_rf_11_MPORT_data; // @[CoreTop.scala 194:18]
  assign DIP_rf_12 = rf_DIP_io_rf_12_MPORT_data; // @[CoreTop.scala 194:18]
  assign DIP_rf_13 = rf_DIP_io_rf_13_MPORT_data; // @[CoreTop.scala 194:18]
  assign DIP_rf_14 = rf_DIP_io_rf_14_MPORT_data; // @[CoreTop.scala 194:18]
  assign DIP_rf_15 = rf_DIP_io_rf_15_MPORT_data; // @[CoreTop.scala 194:18]
  assign DIP_rf_16 = rf_DIP_io_rf_16_MPORT_data; // @[CoreTop.scala 194:18]
  assign DIP_rf_17 = rf_DIP_io_rf_17_MPORT_data; // @[CoreTop.scala 194:18]
  assign DIP_rf_18 = rf_DIP_io_rf_18_MPORT_data; // @[CoreTop.scala 194:18]
  assign DIP_rf_19 = rf_DIP_io_rf_19_MPORT_data; // @[CoreTop.scala 194:18]
  assign DIP_rf_20 = rf_DIP_io_rf_20_MPORT_data; // @[CoreTop.scala 194:18]
  assign DIP_rf_21 = rf_DIP_io_rf_21_MPORT_data; // @[CoreTop.scala 194:18]
  assign DIP_rf_22 = rf_DIP_io_rf_22_MPORT_data; // @[CoreTop.scala 194:18]
  assign DIP_rf_23 = rf_DIP_io_rf_23_MPORT_data; // @[CoreTop.scala 194:18]
  assign DIP_rf_24 = rf_DIP_io_rf_24_MPORT_data; // @[CoreTop.scala 194:18]
  assign DIP_rf_25 = rf_DIP_io_rf_25_MPORT_data; // @[CoreTop.scala 194:18]
  assign DIP_rf_26 = rf_DIP_io_rf_26_MPORT_data; // @[CoreTop.scala 194:18]
  assign DIP_rf_27 = rf_DIP_io_rf_27_MPORT_data; // @[CoreTop.scala 194:18]
  assign DIP_rf_28 = rf_DIP_io_rf_28_MPORT_data; // @[CoreTop.scala 194:18]
  assign DIP_rf_29 = rf_DIP_io_rf_29_MPORT_data; // @[CoreTop.scala 194:18]
  assign DIP_rf_30 = rf_DIP_io_rf_30_MPORT_data; // @[CoreTop.scala 194:18]
  assign DIP_rf_31 = rf_DIP_io_rf_31_MPORT_data; // @[CoreTop.scala 194:18]
  assign DIP_inst = DIP_io_inst_REG; // @[CoreTop.scala 196:15]
  assign DIP_pc = DIP_io_pc_REG; // @[CoreTop.scala 199:13]
  assign DIP_inst_valid = DIP_io_inst_valid_REG; // @[CoreTop.scala 198:21]
  assign DIP_dnpc = DIP_io_dnpc_REG; // @[CoreTop.scala 200:15]
  assign DIP_is_skip = DIP_io_is_skip_REG; // @[CoreTop.scala 197:18]
  assign mem_addr = MMIO_io_out_addr_req_bits_addr; // @[CoreTop.scala 159:15]
  assign mem_reset = reset; // @[CoreTop.scala 177:16]
  assign mem_clk = clock; // @[CoreTop.scala 176:14]
  assign mem_we = MMIO_io_out_addr_req_bits_we; // @[CoreTop.scala 163:13]
  assign mem_ce = MMIO_io_out_addr_req_bits_ce; // @[CoreTop.scala 162:13]
  assign mem_wdata = MMIO_io_out_wdata_req_bits_wdata; // @[CoreTop.scala 160:16]
  assign mem_wmask = MMIO_io_out_wdata_req_bits_wmask; // @[CoreTop.scala 164:16]
  assign MEM_io_in_valid = valid_2; // @[Pipline.scala 23:17]
  assign MEM_io_in_bits_ctrl_signal_fuType = MEM_io_in_bits_r_ctrl_signal_fuType; // @[Pipline.scala 21:16]
  assign MEM_io_in_bits_ctrl_signal_inst_valid = MEM_io_in_bits_r_ctrl_signal_inst_valid; // @[Pipline.scala 21:16]
  assign MEM_io_in_bits_ctrl_signal_rfWen = MEM_io_in_bits_r_ctrl_signal_rfWen; // @[Pipline.scala 21:16]
  assign MEM_io_in_bits_ctrl_signal_aluoptype = MEM_io_in_bits_r_ctrl_signal_aluoptype; // @[Pipline.scala 21:16]
  assign MEM_io_in_bits_ctrl_flow_PC = MEM_io_in_bits_r_ctrl_flow_PC; // @[Pipline.scala 21:16]
  assign MEM_io_in_bits_ctrl_flow_inst = MEM_io_in_bits_r_ctrl_flow_inst; // @[Pipline.scala 21:16]
  assign MEM_io_in_bits_ctrl_flow_Dnpc = MEM_io_in_bits_r_ctrl_flow_Dnpc; // @[Pipline.scala 21:16]
  assign MEM_io_in_bits_ctrl_rf_rfDest = MEM_io_in_bits_r_ctrl_rf_rfDest; // @[Pipline.scala 21:16]
  assign MEM_io_in_bits_ctrl_rf_rfData = MEM_io_in_bits_r_ctrl_rf_rfData; // @[Pipline.scala 21:16]
  assign MEM_io_in_bits_ctrl_data_src1 = MEM_io_in_bits_r_ctrl_data_src1; // @[Pipline.scala 21:16]
  assign MEM_io_in_bits_ctrl_data_src2 = MEM_io_in_bits_r_ctrl_data_src2; // @[Pipline.scala 21:16]
  assign MEM_io_in_bits_ctrl_data_Imm = MEM_io_in_bits_r_ctrl_data_Imm; // @[Pipline.scala 21:16]
  assign MEM_io_out_ready = 1'h1; // @[Pipline.scala 20:16]
  assign MEM_io_cache_io_rdata_rep_valid = MMIO_io_in_rdata_rep_valid; // @[CoreTop.scala 156:19]
  assign MEM_io_cache_io_rdata_rep_bits_rdata = MMIO_io_in_rdata_rep_bits_rdata; // @[CoreTop.scala 156:19]
  assign MEM_io_cache_io_wdata_rep = MMIO_io_in_wdata_rep; // @[CoreTop.scala 156:19]
  assign WB_io_in_valid = valid_3; // @[Pipline.scala 23:17]
  assign WB_io_in_bits_ctrl_signal_inst_valid = WB_io_in_bits_r_ctrl_signal_inst_valid; // @[Pipline.scala 21:16]
  assign WB_io_in_bits_ctrl_signal_rfWen = WB_io_in_bits_r_ctrl_signal_rfWen; // @[Pipline.scala 21:16]
  assign WB_io_in_bits_ctrl_flow_PC = WB_io_in_bits_r_ctrl_flow_PC; // @[Pipline.scala 21:16]
  assign WB_io_in_bits_ctrl_flow_inst = WB_io_in_bits_r_ctrl_flow_inst; // @[Pipline.scala 21:16]
  assign WB_io_in_bits_ctrl_flow_Dnpc = WB_io_in_bits_r_ctrl_flow_Dnpc; // @[Pipline.scala 21:16]
  assign WB_io_in_bits_ctrl_flow_skip = WB_io_in_bits_r_ctrl_flow_skip; // @[Pipline.scala 21:16]
  assign WB_io_in_bits_ctrl_rf_rfDest = WB_io_in_bits_r_ctrl_rf_rfDest; // @[Pipline.scala 21:16]
  assign WB_io_in_bits_ctrl_rf_rfData = WB_io_in_bits_r_ctrl_rf_rfData; // @[Pipline.scala 21:16]
  assign WB_io_out_ready = 1'h1; // @[CoreTop.scala 188:19]
  assign bypass_io_EX_rf_rfDest = EX_io_out_bits_ctrl_rf_rfDest; // @[CoreTop.scala 128:19]
  assign bypass_io_EX_rf_rfWen = EX_io_out_bits_ctrl_rf_rfWen; // @[CoreTop.scala 128:19]
  assign bypass_io_EX_rf_rfData = EX_io_out_bits_ctrl_rf_rfData; // @[CoreTop.scala 128:19]
  assign bypass_io_MEM_rf_rfDest = MEM_io_out_bits_ctrl_rf_rfDest; // @[CoreTop.scala 178:20]
  assign bypass_io_MEM_rf_rfWen = MEM_io_out_bits_ctrl_rf_rfWen; // @[CoreTop.scala 178:20]
  assign bypass_io_MEM_rf_rfData = MEM_io_out_bits_ctrl_rf_rfData; // @[CoreTop.scala 178:20]
  assign bypass_io_WB_rf_rfDest = WB_io_out_bits_ctrl_rf_rfDest; // @[CoreTop.scala 189:19]
  assign bypass_io_WB_rf_rfWen = WB_io_out_bits_ctrl_rf_rfWen; // @[CoreTop.scala 189:19]
  assign bypass_io_WB_rf_rfData = WB_io_out_bits_ctrl_rf_rfData; // @[CoreTop.scala 189:19]
  assign bypass_io_Reg1 = ID_io_out_bits_ctrl_signal_rfSrc1 == 5'h0 ? 64'h0 : rf_bypass_io_Reg1_MPORT_data; // @[RF.scala 8:37]
  assign bypass_io_reg_index1 = ID_io_out_bits_ctrl_signal_rfSrc1; // @[CoreTop.scala 86:24]
  assign bypass_io_Reg2 = ID_io_out_bits_ctrl_signal_rfSrc2 == 5'h0 ? 64'h0 : rf_bypass_io_Reg2_MPORT_data; // @[RF.scala 8:37]
  assign bypass_io_reg_index2 = ID_io_out_bits_ctrl_signal_rfSrc2; // @[CoreTop.scala 87:24]
  assign mem_bypass_io_MEM_rf_rfDest = MEM_io_out_bits_ctrl_rf_rfDest; // @[CoreTop.scala 180:24]
  assign mem_bypass_io_MEM_rf_rfWen = MEM_io_out_bits_ctrl_rf_rfWen; // @[CoreTop.scala 180:24]
  assign mem_bypass_io_MEM_rf_rfData = MEM_io_out_bits_ctrl_rf_rfData; // @[CoreTop.scala 180:24]
  assign mem_bypass_io_Reg1 = EX_io_in_bits_ctrl_data_src1; // @[CoreTop.scala 130:22]
  assign mem_bypass_io_reg_index1 = EX_io_in_bits_ctrl_signal_rfSrc1; // @[CoreTop.scala 132:28]
  assign mem_bypass_io_Reg2 = EX_io_in_bits_ctrl_data_src2; // @[CoreTop.scala 131:22]
  assign mem_bypass_io_reg_index2 = EX_io_in_bits_ctrl_signal_rfSrc2; // @[CoreTop.scala 133:28]
  assign ICACHE_clock = clock;
  assign ICACHE_reset = reset;
  assign ICACHE_io_in_addr_req_valid = IF_io_cache_req_addr_req_valid; // @[CoreTop.scala 93:28]
  assign ICACHE_io_in_addr_req_bits_addr = IF_io_cache_req_addr_req_bits_addr; // @[CoreTop.scala 93:28]
  assign ICACHE_io_in_rdata_rep_ready = IF_io_cache_req_rdata_rep_ready; // @[CoreTop.scala 94:29]
  assign ICACHE_io_flush = EX_io_is_flush; // @[CoreTop.scala 95:19]
  assign ICACHE_io_out_rdata_rep_bits_rdata = IFMEM_rdata; // @[CoreTop.scala 96:38]
  assign IFMEM_addr = ICACHE_io_out_addr_req_bits_addr; // @[CoreTop.scala 99:17]
  assign IFMEM_reset = reset; // @[CoreTop.scala 98:18]
  assign IFMEM_clk = clock; // @[CoreTop.scala 97:16]
  assign IFMEM_we = 1'h0; // @[CoreTop.scala 102:15]
  assign IFMEM_ce = ICACHE_io_out_addr_req_bits_ce; // @[CoreTop.scala 103:15]
  assign IFMEM_wdata = 64'h0; // @[CoreTop.scala 100:18]
  assign IFMEM_wmask = 8'h0; // @[CoreTop.scala 101:18]
  assign MMIO_clock = clock;
  assign MMIO_reset = reset;
  assign MMIO_io_in_addr_req_valid = MEM_io_cache_io_addr_req_valid; // @[CoreTop.scala 156:19]
  assign MMIO_io_in_addr_req_bits_addr = MEM_io_cache_io_addr_req_bits_addr; // @[CoreTop.scala 156:19]
  assign MMIO_io_in_addr_req_bits_ce = MEM_io_cache_io_addr_req_bits_ce; // @[CoreTop.scala 156:19]
  assign MMIO_io_in_addr_req_bits_we = MEM_io_cache_io_addr_req_bits_we; // @[CoreTop.scala 156:19]
  assign MMIO_io_in_wdata_req_bits_wdata = MEM_io_cache_io_wdata_req_bits_wdata; // @[CoreTop.scala 156:19]
  assign MMIO_io_in_wdata_req_bits_wmask = MEM_io_cache_io_wdata_req_bits_wmask; // @[CoreTop.scala 156:19]
  assign MMIO_io_out_rdata_rep_bits_rdata = mem_rdata; // @[CoreTop.scala 161:36]
  always @(posedge clock) begin
    if (rf_MPORT_en & rf_MPORT_mask) begin
      rf[rf_MPORT_addr] <= rf_MPORT_data; // @[RF.scala 7:15]
    end
    if (reset) begin // @[Pipline.scala 8:24]
      valid <= 1'h0; // @[Pipline.scala 8:24]
    end else if (EX_io_is_flush) begin // @[Pipline.scala 16:25]
      valid <= 1'h0; // @[Pipline.scala 17:13]
    end else begin
      valid <= _GEN_1;
    end
    if (_T_1) begin // @[Reg.scala 17:18]
      ID_io_in_bits_r_PC <= IF_io_out_bits_PC; // @[Reg.scala 17:22]
    end
    if (_T_1) begin // @[Reg.scala 17:18]
      ID_io_in_bits_r_Inst <= IF_io_out_bits_Inst; // @[Reg.scala 17:22]
    end
    if (reset) begin // @[Pipline.scala 8:24]
      valid_1 <= 1'h0; // @[Pipline.scala 8:24]
    end else if (EX_io_is_flush) begin // @[Pipline.scala 16:25]
      valid_1 <= 1'h0; // @[Pipline.scala 17:13]
    end else begin
      valid_1 <= _GEN_6;
    end
    if (_T_4) begin // @[Reg.scala 17:18]
      EX_io_in_bits_r_ctrl_signal_src1Type <= ID_io_out_bits_ctrl_signal_src1Type; // @[Reg.scala 17:22]
    end
    if (_T_4) begin // @[Reg.scala 17:18]
      EX_io_in_bits_r_ctrl_signal_src2Type <= ID_io_out_bits_ctrl_signal_src2Type; // @[Reg.scala 17:22]
    end
    if (_T_4) begin // @[Reg.scala 17:18]
      EX_io_in_bits_r_ctrl_signal_fuType <= ID_io_out_bits_ctrl_signal_fuType; // @[Reg.scala 17:22]
    end
    if (_T_4) begin // @[Reg.scala 17:18]
      EX_io_in_bits_r_ctrl_signal_inst_valid <= ID_io_out_bits_ctrl_signal_inst_valid; // @[Reg.scala 17:22]
    end
    if (_T_4) begin // @[Reg.scala 17:18]
      EX_io_in_bits_r_ctrl_signal_rfSrc1 <= ID_io_out_bits_ctrl_signal_rfSrc1; // @[Reg.scala 17:22]
    end
    if (_T_4) begin // @[Reg.scala 17:18]
      EX_io_in_bits_r_ctrl_signal_rfSrc2 <= ID_io_out_bits_ctrl_signal_rfSrc2; // @[Reg.scala 17:22]
    end
    if (_T_4) begin // @[Reg.scala 17:18]
      EX_io_in_bits_r_ctrl_signal_rfWen <= ID_io_out_bits_ctrl_signal_rfWen; // @[Reg.scala 17:22]
    end
    if (_T_4) begin // @[Reg.scala 17:18]
      EX_io_in_bits_r_ctrl_signal_aluoptype <= ID_io_out_bits_ctrl_signal_aluoptype; // @[Reg.scala 17:22]
    end
    if (_T_4) begin // @[Reg.scala 17:18]
      EX_io_in_bits_r_ctrl_signal_rfDest <= ID_io_out_bits_ctrl_signal_rfDest; // @[Reg.scala 17:22]
    end
    if (_T_4) begin // @[Reg.scala 17:18]
      EX_io_in_bits_r_ctrl_data_src1 <= ID_io_out_bits_ctrl_data_src1; // @[Reg.scala 17:22]
    end
    if (_T_4) begin // @[Reg.scala 17:18]
      EX_io_in_bits_r_ctrl_data_src2 <= ID_io_out_bits_ctrl_data_src2; // @[Reg.scala 17:22]
    end
    if (_T_4) begin // @[Reg.scala 17:18]
      EX_io_in_bits_r_ctrl_data_Imm <= ID_io_out_bits_ctrl_data_Imm; // @[Reg.scala 17:22]
    end
    if (_T_4) begin // @[Reg.scala 17:18]
      EX_io_in_bits_r_ctrl_flow_PC <= ID_io_out_bits_ctrl_flow_PC; // @[Reg.scala 17:22]
    end
    if (_T_4) begin // @[Reg.scala 17:18]
      EX_io_in_bits_r_ctrl_flow_inst <= ID_io_out_bits_ctrl_flow_inst; // @[Reg.scala 17:22]
    end
    if (reset) begin // @[Pipline.scala 8:24]
      valid_2 <= 1'h0; // @[Pipline.scala 8:24]
    end else begin
      valid_2 <= _GEN_25;
    end
    if (_T_7) begin // @[Reg.scala 17:18]
      MEM_io_in_bits_r_ctrl_signal_fuType <= EX_io_out_bits_ctrl_signal_fuType; // @[Reg.scala 17:22]
    end
    if (_T_7) begin // @[Reg.scala 17:18]
      MEM_io_in_bits_r_ctrl_signal_inst_valid <= EX_io_out_bits_ctrl_signal_inst_valid; // @[Reg.scala 17:22]
    end
    if (_T_7) begin // @[Reg.scala 17:18]
      MEM_io_in_bits_r_ctrl_signal_rfWen <= EX_io_out_bits_ctrl_signal_rfWen; // @[Reg.scala 17:22]
    end
    if (_T_7) begin // @[Reg.scala 17:18]
      MEM_io_in_bits_r_ctrl_signal_aluoptype <= EX_io_out_bits_ctrl_signal_aluoptype; // @[Reg.scala 17:22]
    end
    if (_T_7) begin // @[Reg.scala 17:18]
      MEM_io_in_bits_r_ctrl_flow_PC <= EX_io_out_bits_ctrl_flow_PC; // @[Reg.scala 17:22]
    end
    if (_T_7) begin // @[Reg.scala 17:18]
      MEM_io_in_bits_r_ctrl_flow_inst <= EX_io_out_bits_ctrl_flow_inst; // @[Reg.scala 17:22]
    end
    if (_T_7) begin // @[Reg.scala 17:18]
      MEM_io_in_bits_r_ctrl_flow_Dnpc <= EX_io_out_bits_ctrl_flow_Dnpc; // @[Reg.scala 17:22]
    end
    if (_T_7) begin // @[Reg.scala 17:18]
      MEM_io_in_bits_r_ctrl_rf_rfDest <= EX_io_out_bits_ctrl_rf_rfDest; // @[Reg.scala 17:22]
    end
    if (_T_7) begin // @[Reg.scala 17:18]
      MEM_io_in_bits_r_ctrl_rf_rfData <= EX_io_out_bits_ctrl_rf_rfData; // @[Reg.scala 17:22]
    end
    if (_T_7) begin // @[Reg.scala 17:18]
      MEM_io_in_bits_r_ctrl_data_src1 <= EX_io_out_bits_ctrl_data_src1; // @[Reg.scala 17:22]
    end
    if (_T_7) begin // @[Reg.scala 17:18]
      MEM_io_in_bits_r_ctrl_data_src2 <= EX_io_out_bits_ctrl_data_src2; // @[Reg.scala 17:22]
    end
    if (_T_7) begin // @[Reg.scala 17:18]
      MEM_io_in_bits_r_ctrl_data_Imm <= EX_io_out_bits_ctrl_data_Imm; // @[Reg.scala 17:22]
    end
    if (reset) begin // @[Pipline.scala 8:24]
      valid_3 <= 1'h0; // @[Pipline.scala 8:24]
    end else begin
      valid_3 <= _GEN_47;
    end
    if (_T_10) begin // @[Reg.scala 17:18]
      WB_io_in_bits_r_ctrl_signal_inst_valid <= MEM_io_out_bits_ctrl_signal_inst_valid; // @[Reg.scala 17:22]
    end
    if (_T_10) begin // @[Reg.scala 17:18]
      WB_io_in_bits_r_ctrl_signal_rfWen <= MEM_io_out_bits_ctrl_signal_rfWen; // @[Reg.scala 17:22]
    end
    if (_T_10) begin // @[Reg.scala 17:18]
      WB_io_in_bits_r_ctrl_flow_PC <= MEM_io_out_bits_ctrl_flow_PC; // @[Reg.scala 17:22]
    end
    if (_T_10) begin // @[Reg.scala 17:18]
      WB_io_in_bits_r_ctrl_flow_inst <= MEM_io_out_bits_ctrl_flow_inst; // @[Reg.scala 17:22]
    end
    if (_T_10) begin // @[Reg.scala 17:18]
      WB_io_in_bits_r_ctrl_flow_Dnpc <= MEM_io_out_bits_ctrl_flow_Dnpc; // @[Reg.scala 17:22]
    end
    if (_T_10) begin // @[Reg.scala 17:18]
      WB_io_in_bits_r_ctrl_flow_skip <= MEM_io_out_bits_ctrl_flow_skip; // @[Reg.scala 17:22]
    end
    if (_T_10) begin // @[Reg.scala 17:18]
      WB_io_in_bits_r_ctrl_rf_rfDest <= MEM_io_out_bits_ctrl_rf_rfDest; // @[Reg.scala 17:22]
    end
    if (_T_10) begin // @[Reg.scala 17:18]
      WB_io_in_bits_r_ctrl_rf_rfData <= MEM_io_out_bits_ctrl_rf_rfData; // @[Reg.scala 17:22]
    end
    DIP_io_is_break_REG <= EX_io_is_break; // @[CoreTop.scala 192:37]
    DIP_io_is_break_REG_1 <= DIP_io_is_break_REG; // @[CoreTop.scala 192:29]
    DIP_io_inst_REG <= WB_io_out_bits_ctrl_flow_inst; // @[CoreTop.scala 196:25]
    DIP_io_is_skip_REG <= WB_io_out_bits_ctrl_flow_skip; // @[CoreTop.scala 197:28]
    DIP_io_inst_valid_REG <= WB_io_out_valid & WB_io_out_bits_ctrl_signal_inst_valid; // @[CoreTop.scala 198:35]
    DIP_io_pc_REG <= WB_io_out_bits_ctrl_flow_PC; // @[CoreTop.scala 199:23]
    DIP_io_dnpc_REG <= WB_io_out_bits_ctrl_flow_Dnpc; // @[CoreTop.scala 200:25]
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
  DIP_io_is_break_REG = _RAND_41[0:0];
  _RAND_42 = {1{`RANDOM}};
  DIP_io_is_break_REG_1 = _RAND_42[0:0];
  _RAND_43 = {1{`RANDOM}};
  DIP_io_inst_REG = _RAND_43[31:0];
  _RAND_44 = {1{`RANDOM}};
  DIP_io_is_skip_REG = _RAND_44[0:0];
  _RAND_45 = {1{`RANDOM}};
  DIP_io_inst_valid_REG = _RAND_45[0:0];
  _RAND_46 = {2{`RANDOM}};
  DIP_io_pc_REG = _RAND_46[63:0];
  _RAND_47 = {2{`RANDOM}};
  DIP_io_dnpc_REG = _RAND_47[63:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
