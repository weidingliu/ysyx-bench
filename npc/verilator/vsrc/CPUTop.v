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
  wire  _Inst_decode_T_39 = 32'h3 == _Inst_decode_T; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_41 = 32'h1023 == _Inst_decode_T; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_43 = 32'h7033 == _Inst_decode_T_20; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_45 = 32'h3033 == _Inst_decode_T_20; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_47 = 32'h4013 == _Inst_decode_T; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_49 = 32'h103b == _Inst_decode_T_20; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_51 = 32'h7013 == _Inst_decode_T; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_53 = 32'h6033 == _Inst_decode_T_20; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_55 = 32'h23 == _Inst_decode_T; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_57 = 32'h5013 == _Inst_decode_T_2; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_59 = 32'h5063 == _Inst_decode_T; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_61 = 32'h2023 == _Inst_decode_T; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_63 = 32'h200003b == _Inst_decode_T_20; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_65 = 32'h200403b == _Inst_decode_T_20; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_67 = 32'h200603b == _Inst_decode_T_20; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_69 = 32'h4063 == _Inst_decode_T; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_71 = 32'h4000003b == _Inst_decode_T_20; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_73 = 32'h2033 == _Inst_decode_T_20; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_75 = 32'h1003 == _Inst_decode_T; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_77 = 32'h5003 == _Inst_decode_T; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_79 = 32'h101b == _Inst_decode_T_2; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_81 = 32'h4000501b == _Inst_decode_T_2; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_83 = 32'h2000033 == _Inst_decode_T_20; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_85 = 32'h501b == _Inst_decode_T_2; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_87 = 32'h4000503b == _Inst_decode_T_20; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_89 = 32'h503b == _Inst_decode_T_20; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_91 = 32'h6063 == _Inst_decode_T; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_93 = 32'h7063 == _Inst_decode_T; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_95 = 32'h4033 == _Inst_decode_T_20; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_97 = 32'h200703b == _Inst_decode_T_20; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_99 = 32'h1033 == _Inst_decode_T_20; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_101 = 32'h2007033 == _Inst_decode_T_20; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_103 = 32'h200503b == _Inst_decode_T_20; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_105 = 32'h2013 == _Inst_decode_T; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_107 = 32'h6003 == _Inst_decode_T; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_109 = 32'h2006033 == _Inst_decode_T_20; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_111 = 32'h5033 == _Inst_decode_T_20; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_113 = 32'h2005033 == _Inst_decode_T_20; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_115 = 32'h2004033 == _Inst_decode_T_20; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_117 = 32'h40005033 == _Inst_decode_T_2; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_119 = 32'h100073 == io_inst; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_121 = 32'h2073 == _Inst_decode_T; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_123 = 32'h1073 == _Inst_decode_T; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_125 = 32'h73 == io_inst; // @[Lookup.scala 31:38]
  wire  _Inst_decode_T_127 = 32'h30200073 == io_inst; // @[Lookup.scala 31:38]
  wire [3:0] _Inst_decode_T_130 = _Inst_decode_T_123 ? 4'h8 : 4'h0; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_131 = _Inst_decode_T_121 ? 4'h8 : _Inst_decode_T_130; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_132 = _Inst_decode_T_119 ? 4'h0 : _Inst_decode_T_131; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_133 = _Inst_decode_T_117 ? 4'h5 : _Inst_decode_T_132; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_134 = _Inst_decode_T_115 ? 4'h5 : _Inst_decode_T_133; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_135 = _Inst_decode_T_113 ? 4'h5 : _Inst_decode_T_134; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_136 = _Inst_decode_T_111 ? 4'h5 : _Inst_decode_T_135; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_137 = _Inst_decode_T_109 ? 4'h5 : _Inst_decode_T_136; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_138 = _Inst_decode_T_107 ? 4'h8 : _Inst_decode_T_137; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_139 = _Inst_decode_T_105 ? 4'h8 : _Inst_decode_T_138; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_140 = _Inst_decode_T_103 ? 4'h5 : _Inst_decode_T_139; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_141 = _Inst_decode_T_101 ? 4'h5 : _Inst_decode_T_140; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_142 = _Inst_decode_T_99 ? 4'h5 : _Inst_decode_T_141; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_143 = _Inst_decode_T_97 ? 4'h5 : _Inst_decode_T_142; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_144 = _Inst_decode_T_95 ? 4'h5 : _Inst_decode_T_143; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_145 = _Inst_decode_T_93 ? 4'hb : _Inst_decode_T_144; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_146 = _Inst_decode_T_91 ? 4'hb : _Inst_decode_T_145; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_147 = _Inst_decode_T_89 ? 4'h5 : _Inst_decode_T_146; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_148 = _Inst_decode_T_87 ? 4'h5 : _Inst_decode_T_147; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_149 = _Inst_decode_T_85 ? 4'h8 : _Inst_decode_T_148; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_150 = _Inst_decode_T_83 ? 4'h5 : _Inst_decode_T_149; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_151 = _Inst_decode_T_81 ? 4'h8 : _Inst_decode_T_150; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_152 = _Inst_decode_T_79 ? 4'h8 : _Inst_decode_T_151; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_153 = _Inst_decode_T_77 ? 4'h8 : _Inst_decode_T_152; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_154 = _Inst_decode_T_75 ? 4'h8 : _Inst_decode_T_153; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_155 = _Inst_decode_T_73 ? 4'h5 : _Inst_decode_T_154; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_156 = _Inst_decode_T_71 ? 4'h5 : _Inst_decode_T_155; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_157 = _Inst_decode_T_69 ? 4'hb : _Inst_decode_T_156; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_158 = _Inst_decode_T_67 ? 4'h5 : _Inst_decode_T_157; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_159 = _Inst_decode_T_65 ? 4'h5 : _Inst_decode_T_158; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_160 = _Inst_decode_T_63 ? 4'h5 : _Inst_decode_T_159; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_161 = _Inst_decode_T_61 ? 4'h9 : _Inst_decode_T_160; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_162 = _Inst_decode_T_59 ? 4'hb : _Inst_decode_T_161; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_163 = _Inst_decode_T_57 ? 4'h8 : _Inst_decode_T_162; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_164 = _Inst_decode_T_55 ? 4'h9 : _Inst_decode_T_163; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_165 = _Inst_decode_T_53 ? 4'h5 : _Inst_decode_T_164; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_166 = _Inst_decode_T_51 ? 4'h8 : _Inst_decode_T_165; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_167 = _Inst_decode_T_49 ? 4'h5 : _Inst_decode_T_166; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_168 = _Inst_decode_T_47 ? 4'h8 : _Inst_decode_T_167; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_169 = _Inst_decode_T_45 ? 4'h5 : _Inst_decode_T_168; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_170 = _Inst_decode_T_43 ? 4'h5 : _Inst_decode_T_169; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_171 = _Inst_decode_T_41 ? 4'h9 : _Inst_decode_T_170; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_172 = _Inst_decode_T_39 ? 4'h8 : _Inst_decode_T_171; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_173 = _Inst_decode_T_37 ? 4'h8 : _Inst_decode_T_172; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_174 = _Inst_decode_T_35 ? 4'h8 : _Inst_decode_T_173; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_175 = _Inst_decode_T_33 ? 4'h5 : _Inst_decode_T_174; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_176 = _Inst_decode_T_31 ? 4'h8 : _Inst_decode_T_175; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_177 = _Inst_decode_T_29 ? 4'hb : _Inst_decode_T_176; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_178 = _Inst_decode_T_27 ? 4'hb : _Inst_decode_T_177; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_179 = _Inst_decode_T_25 ? 4'h8 : _Inst_decode_T_178; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_180 = _Inst_decode_T_23 ? 4'h5 : _Inst_decode_T_179; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_181 = _Inst_decode_T_21 ? 4'h5 : _Inst_decode_T_180; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_182 = _Inst_decode_T_19 ? 4'h8 : _Inst_decode_T_181; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_183 = _Inst_decode_T_17 ? 4'h9 : _Inst_decode_T_182; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_184 = _Inst_decode_T_15 ? 4'h8 : _Inst_decode_T_183; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_185 = _Inst_decode_T_13 ? 4'h8 : _Inst_decode_T_184; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_186 = _Inst_decode_T_11 ? 4'h7 : _Inst_decode_T_185; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_187 = _Inst_decode_T_9 ? 4'h8 : _Inst_decode_T_186; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_188 = _Inst_decode_T_7 ? 4'h3 : _Inst_decode_T_187; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_189 = _Inst_decode_T_5 ? 4'h3 : _Inst_decode_T_188; // @[Lookup.scala 34:39]
  wire [3:0] _Inst_decode_T_190 = _Inst_decode_T_3 ? 4'h8 : _Inst_decode_T_189; // @[Lookup.scala 34:39]
  wire [3:0] Inst_decode_0 = _Inst_decode_T_1 ? 4'h8 : _Inst_decode_T_190; // @[Lookup.scala 34:39]
  wire  _Inst_decode_T_200 = _Inst_decode_T_109 ? 1'h0 : _Inst_decode_T_111; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_201 = _Inst_decode_T_107 ? 3'h4 : {{2'd0}, _Inst_decode_T_200}; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_202 = _Inst_decode_T_105 ? 3'h5 : _Inst_decode_T_201; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_203 = _Inst_decode_T_103 ? 3'h0 : _Inst_decode_T_202; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_204 = _Inst_decode_T_101 ? 3'h0 : _Inst_decode_T_203; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_205 = _Inst_decode_T_99 ? 3'h1 : _Inst_decode_T_204; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_206 = _Inst_decode_T_97 ? 3'h0 : _Inst_decode_T_205; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_207 = _Inst_decode_T_95 ? 3'h0 : _Inst_decode_T_206; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_208 = _Inst_decode_T_93 ? 3'h2 : _Inst_decode_T_207; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_209 = _Inst_decode_T_91 ? 3'h2 : _Inst_decode_T_208; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_210 = _Inst_decode_T_89 ? 3'h1 : _Inst_decode_T_209; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_211 = _Inst_decode_T_87 ? 3'h1 : _Inst_decode_T_210; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_212 = _Inst_decode_T_85 ? 3'h1 : _Inst_decode_T_211; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_213 = _Inst_decode_T_83 ? 3'h0 : _Inst_decode_T_212; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_214 = _Inst_decode_T_81 ? 3'h1 : _Inst_decode_T_213; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_215 = _Inst_decode_T_79 ? 3'h1 : _Inst_decode_T_214; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_216 = _Inst_decode_T_77 ? 3'h4 : _Inst_decode_T_215; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_217 = _Inst_decode_T_75 ? 3'h4 : _Inst_decode_T_216; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_218 = _Inst_decode_T_73 ? 3'h5 : _Inst_decode_T_217; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_219 = _Inst_decode_T_71 ? 3'h0 : _Inst_decode_T_218; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_220 = _Inst_decode_T_69 ? 3'h2 : _Inst_decode_T_219; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_221 = _Inst_decode_T_67 ? 3'h0 : _Inst_decode_T_220; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_222 = _Inst_decode_T_65 ? 3'h0 : _Inst_decode_T_221; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_223 = _Inst_decode_T_63 ? 3'h0 : _Inst_decode_T_222; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_224 = _Inst_decode_T_61 ? 3'h4 : _Inst_decode_T_223; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_225 = _Inst_decode_T_59 ? 3'h2 : _Inst_decode_T_224; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_226 = _Inst_decode_T_57 ? 3'h1 : _Inst_decode_T_225; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_227 = _Inst_decode_T_55 ? 3'h4 : _Inst_decode_T_226; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_228 = _Inst_decode_T_53 ? 3'h0 : _Inst_decode_T_227; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_229 = _Inst_decode_T_51 ? 3'h0 : _Inst_decode_T_228; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_230 = _Inst_decode_T_49 ? 3'h1 : _Inst_decode_T_229; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_231 = _Inst_decode_T_47 ? 3'h0 : _Inst_decode_T_230; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_232 = _Inst_decode_T_45 ? 3'h5 : _Inst_decode_T_231; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_233 = _Inst_decode_T_43 ? 3'h0 : _Inst_decode_T_232; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_234 = _Inst_decode_T_41 ? 3'h4 : _Inst_decode_T_233; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_235 = _Inst_decode_T_39 ? 3'h4 : _Inst_decode_T_234; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_236 = _Inst_decode_T_37 ? 3'h4 : _Inst_decode_T_235; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_237 = _Inst_decode_T_35 ? 3'h1 : _Inst_decode_T_236; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_238 = _Inst_decode_T_33 ? 3'h0 : _Inst_decode_T_237; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_239 = _Inst_decode_T_31 ? 3'h0 : _Inst_decode_T_238; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_240 = _Inst_decode_T_29 ? 3'h2 : _Inst_decode_T_239; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_241 = _Inst_decode_T_27 ? 3'h2 : _Inst_decode_T_240; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_242 = _Inst_decode_T_25 ? 3'h5 : _Inst_decode_T_241; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_243 = _Inst_decode_T_23 ? 3'h0 : _Inst_decode_T_242; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_244 = _Inst_decode_T_21 ? 3'h0 : _Inst_decode_T_243; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_245 = _Inst_decode_T_19 ? 3'h4 : _Inst_decode_T_244; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_246 = _Inst_decode_T_17 ? 3'h4 : _Inst_decode_T_245; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_247 = _Inst_decode_T_15 ? 3'h4 : _Inst_decode_T_246; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_248 = _Inst_decode_T_13 ? 3'h3 : _Inst_decode_T_247; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_249 = _Inst_decode_T_11 ? 3'h3 : _Inst_decode_T_248; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_250 = _Inst_decode_T_9 ? 3'h0 : _Inst_decode_T_249; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_251 = _Inst_decode_T_7 ? 3'h0 : _Inst_decode_T_250; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_252 = _Inst_decode_T_5 ? 3'h0 : _Inst_decode_T_251; // @[Lookup.scala 34:39]
  wire [2:0] _Inst_decode_T_253 = _Inst_decode_T_3 ? 3'h1 : _Inst_decode_T_252; // @[Lookup.scala 34:39]
  wire [4:0] _Inst_decode_T_254 = _Inst_decode_T_127 ? 5'h18 : 5'h0; // @[Lookup.scala 34:39]
  wire [4:0] _Inst_decode_T_255 = _Inst_decode_T_125 ? 5'h17 : _Inst_decode_T_254; // @[Lookup.scala 34:39]
  wire [4:0] _Inst_decode_T_256 = _Inst_decode_T_123 ? 5'h16 : _Inst_decode_T_255; // @[Lookup.scala 34:39]
  wire [4:0] _Inst_decode_T_257 = _Inst_decode_T_121 ? 5'h15 : _Inst_decode_T_256; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_258 = _Inst_decode_T_119 ? 7'h42 : {{2'd0}, _Inst_decode_T_257}; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_259 = _Inst_decode_T_117 ? 7'h14 : _Inst_decode_T_258; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_260 = _Inst_decode_T_115 ? 7'h43 : _Inst_decode_T_259; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_261 = _Inst_decode_T_113 ? 7'h13 : _Inst_decode_T_260; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_262 = _Inst_decode_T_111 ? 7'h75 : _Inst_decode_T_261; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_263 = _Inst_decode_T_109 ? 7'h12 : _Inst_decode_T_262; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_264 = _Inst_decode_T_107 ? 7'h11 : _Inst_decode_T_263; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_265 = _Inst_decode_T_105 ? 7'h2 : _Inst_decode_T_264; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_266 = _Inst_decode_T_103 ? 7'h10 : _Inst_decode_T_265; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_267 = _Inst_decode_T_101 ? 7'hf : _Inst_decode_T_266; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_268 = _Inst_decode_T_99 ? 7'h41 : _Inst_decode_T_267; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_269 = _Inst_decode_T_97 ? 7'hd : _Inst_decode_T_268; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_270 = _Inst_decode_T_95 ? 7'h72 : _Inst_decode_T_269; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_271 = _Inst_decode_T_93 ? 7'hc : _Inst_decode_T_270; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_272 = _Inst_decode_T_91 ? 7'hb : _Inst_decode_T_271; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_273 = _Inst_decode_T_89 ? 7'ha : _Inst_decode_T_272; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_274 = _Inst_decode_T_87 ? 7'h9 : _Inst_decode_T_273; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_275 = _Inst_decode_T_85 ? 7'h8 : _Inst_decode_T_274; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_276 = _Inst_decode_T_83 ? 7'h7 : _Inst_decode_T_275; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_277 = _Inst_decode_T_81 ? 7'h6 : _Inst_decode_T_276; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_278 = _Inst_decode_T_79 ? 7'h5 : _Inst_decode_T_277; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_279 = _Inst_decode_T_77 ? 7'h4 : _Inst_decode_T_278; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_280 = _Inst_decode_T_75 ? 7'h3 : _Inst_decode_T_279; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_281 = _Inst_decode_T_73 ? 7'h2 : _Inst_decode_T_280; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_282 = _Inst_decode_T_71 ? 7'h1 : _Inst_decode_T_281; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_283 = _Inst_decode_T_69 ? 7'h7b : _Inst_decode_T_282; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_284 = _Inst_decode_T_67 ? 7'h7a : _Inst_decode_T_283; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_285 = _Inst_decode_T_65 ? 7'h79 : _Inst_decode_T_284; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_286 = _Inst_decode_T_63 ? 7'h78 : _Inst_decode_T_285; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_287 = _Inst_decode_T_61 ? 7'h77 : _Inst_decode_T_286; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_288 = _Inst_decode_T_59 ? 7'h76 : _Inst_decode_T_287; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_289 = _Inst_decode_T_57 ? 7'h75 : _Inst_decode_T_288; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_290 = _Inst_decode_T_55 ? 7'h74 : _Inst_decode_T_289; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_291 = _Inst_decode_T_53 ? 7'h44 : _Inst_decode_T_290; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_292 = _Inst_decode_T_51 ? 7'h71 : _Inst_decode_T_291; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_293 = _Inst_decode_T_49 ? 7'h73 : _Inst_decode_T_292; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_294 = _Inst_decode_T_47 ? 7'h72 : _Inst_decode_T_293; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_295 = _Inst_decode_T_45 ? 7'h6a : _Inst_decode_T_294; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_296 = _Inst_decode_T_43 ? 7'h71 : _Inst_decode_T_295; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_297 = _Inst_decode_T_41 ? 7'h70 : _Inst_decode_T_296; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_298 = _Inst_decode_T_39 ? 7'he : _Inst_decode_T_297; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_299 = _Inst_decode_T_37 ? 7'h6f : _Inst_decode_T_298; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_300 = _Inst_decode_T_35 ? 7'h6e : _Inst_decode_T_299; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_301 = _Inst_decode_T_33 ? 7'h40 : _Inst_decode_T_300; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_302 = _Inst_decode_T_31 ? 7'h6d : _Inst_decode_T_301; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_303 = _Inst_decode_T_29 ? 7'h6c : _Inst_decode_T_302; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_304 = _Inst_decode_T_27 ? 7'h6b : _Inst_decode_T_303; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_305 = _Inst_decode_T_25 ? 7'h6a : _Inst_decode_T_304; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_306 = _Inst_decode_T_23 ? 7'h69 : _Inst_decode_T_305; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_307 = _Inst_decode_T_21 ? 7'h68 : _Inst_decode_T_306; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_308 = _Inst_decode_T_19 ? 7'h47 : _Inst_decode_T_307; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_309 = _Inst_decode_T_17 ? 7'h46 : _Inst_decode_T_308; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_310 = _Inst_decode_T_15 ? 7'h45 : _Inst_decode_T_309; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_311 = _Inst_decode_T_13 ? 7'h48 : _Inst_decode_T_310; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_312 = _Inst_decode_T_11 ? 7'h19 : _Inst_decode_T_311; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_313 = _Inst_decode_T_9 ? 7'h44 : _Inst_decode_T_312; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_314 = _Inst_decode_T_7 ? 7'h40 : _Inst_decode_T_313; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_315 = _Inst_decode_T_5 ? 7'h40 : _Inst_decode_T_314; // @[Lookup.scala 34:39]
  wire [6:0] _Inst_decode_T_316 = _Inst_decode_T_3 ? 7'h41 : _Inst_decode_T_315; // @[Lookup.scala 34:39]
  wire [6:0] Inst_decode_2 = _Inst_decode_T_1 ? 7'h40 : _Inst_decode_T_316; // @[Lookup.scala 34:39]
  wire  _Inst_decode_T_321 = _Inst_decode_T_119 ? 1'h0 : _Inst_decode_T_121 | _Inst_decode_T_123; // @[Lookup.scala 34:39]
  wire  _Inst_decode_T_334 = _Inst_decode_T_93 ? 1'h0 : _Inst_decode_T_95 | (_Inst_decode_T_97 | (_Inst_decode_T_99 | (
    _Inst_decode_T_101 | (_Inst_decode_T_103 | (_Inst_decode_T_105 | (_Inst_decode_T_107 | (_Inst_decode_T_109 | (
    _Inst_decode_T_111 | (_Inst_decode_T_113 | (_Inst_decode_T_115 | (_Inst_decode_T_117 | _Inst_decode_T_321)))))))))))
    ; // @[Lookup.scala 34:39]
  wire  _Inst_decode_T_335 = _Inst_decode_T_91 ? 1'h0 : _Inst_decode_T_334; // @[Lookup.scala 34:39]
  wire  _Inst_decode_T_346 = _Inst_decode_T_69 ? 1'h0 : _Inst_decode_T_71 | (_Inst_decode_T_73 | (_Inst_decode_T_75 | (
    _Inst_decode_T_77 | (_Inst_decode_T_79 | (_Inst_decode_T_81 | (_Inst_decode_T_83 | (_Inst_decode_T_85 | (
    _Inst_decode_T_87 | (_Inst_decode_T_89 | _Inst_decode_T_335))))))))); // @[Lookup.scala 34:39]
  wire  _Inst_decode_T_350 = _Inst_decode_T_61 ? 1'h0 : _Inst_decode_T_63 | (_Inst_decode_T_65 | (_Inst_decode_T_67 |
    _Inst_decode_T_346)); // @[Lookup.scala 34:39]
  wire  _Inst_decode_T_351 = _Inst_decode_T_59 ? 1'h0 : _Inst_decode_T_350; // @[Lookup.scala 34:39]
  wire  _Inst_decode_T_353 = _Inst_decode_T_55 ? 1'h0 : _Inst_decode_T_57 | _Inst_decode_T_351; // @[Lookup.scala 34:39]
  wire  _Inst_decode_T_360 = _Inst_decode_T_41 ? 1'h0 : _Inst_decode_T_43 | (_Inst_decode_T_45 | (_Inst_decode_T_47 | (
    _Inst_decode_T_49 | (_Inst_decode_T_51 | (_Inst_decode_T_53 | _Inst_decode_T_353))))); // @[Lookup.scala 34:39]
  wire  _Inst_decode_T_366 = _Inst_decode_T_29 ? 1'h0 : _Inst_decode_T_31 | (_Inst_decode_T_33 | (_Inst_decode_T_35 | (
    _Inst_decode_T_37 | (_Inst_decode_T_39 | _Inst_decode_T_360)))); // @[Lookup.scala 34:39]
  wire  _Inst_decode_T_367 = _Inst_decode_T_27 ? 1'h0 : _Inst_decode_T_366; // @[Lookup.scala 34:39]
  wire  _Inst_decode_T_372 = _Inst_decode_T_17 ? 1'h0 : _Inst_decode_T_19 | (_Inst_decode_T_21 | (_Inst_decode_T_23 | (
    _Inst_decode_T_25 | _Inst_decode_T_367))); // @[Lookup.scala 34:39]
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
  wire  _io_mem_we_T_6 = Inst_decode_2 == 7'h45 | Inst_decode_2 == 7'h47 | Inst_decode_2 == 7'h6f | Inst_decode_2 == 7'h3
    ; // @[IDU.scala 97:107]
  wire  _io_mem_we_T_12 = _io_mem_we_T_6 | Inst_decode_2 == 7'h4 | Inst_decode_2 == 7'he | Inst_decode_2 == 7'h11; // @[IDU.scala 98:66]
  assign io_ctrlIO_src1type = {{1'd0}, _io_ctrlIO_src1type_T_2}; // @[IDU.scala 83:22]
  assign io_ctrlIO_src2type = {{2'd0}, srctype2}; // @[IDU.scala 84:22]
  assign io_ctrlIO_src1 = io_inst[19:15]; // @[IDU.scala 54:30]
  assign io_ctrlIO_src2 = io_inst[24:20]; // @[IDU.scala 54:47]
  assign io_ctrlIO_rd = io_inst[11:7]; // @[IDU.scala 54:64]
  assign io_ctrlIO_futype = _Inst_decode_T_1 ? 3'h0 : _Inst_decode_T_253; // @[Lookup.scala 34:39]
  assign io_ctrlIO_aluoptype = _Inst_decode_T_1 ? 7'h40 : _Inst_decode_T_316; // @[Lookup.scala 34:39]
  assign io_ctrlIO_Imm = _imm_T_12 | _imm_T_9; // @[Mux.scala 27:73]
  assign io_rd_en = _Inst_decode_T_1 | (_Inst_decode_T_3 | (_Inst_decode_T_5 | (_Inst_decode_T_7 | (_Inst_decode_T_9 | (
    _Inst_decode_T_11 | (_Inst_decode_T_13 | (_Inst_decode_T_15 | _Inst_decode_T_372))))))); // @[Lookup.scala 34:39]
  assign io_mem_we = _io_mem_we_T_12 ? 1'h0 : 1'h1; // @[IDU.scala 97:19]
endmodule
module EXU(
  input         clock,
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
`ifdef RANDOMIZE_MEM_INIT
  reg [63:0] _RAND_0;
`endif // RANDOMIZE_MEM_INIT
  reg [63:0] csr [0:255]; // @[RF.scala 12:16]
  wire  csr_alu_result_MPORT_en; // @[RF.scala 12:16]
  wire [7:0] csr_alu_result_MPORT_addr; // @[RF.scala 12:16]
  wire [63:0] csr_alu_result_MPORT_data; // @[RF.scala 12:16]
  wire  csr_MPORT_en; // @[RF.scala 12:16]
  wire [7:0] csr_MPORT_addr; // @[RF.scala 12:16]
  wire [63:0] csr_MPORT_data; // @[RF.scala 12:16]
  wire  csr_alu_result_MPORT_1_en; // @[RF.scala 12:16]
  wire [7:0] csr_alu_result_MPORT_1_addr; // @[RF.scala 12:16]
  wire [63:0] csr_alu_result_MPORT_1_data; // @[RF.scala 12:16]
  wire  csr_dnpc_MPORT_en; // @[RF.scala 12:16]
  wire [7:0] csr_dnpc_MPORT_addr; // @[RF.scala 12:16]
  wire [63:0] csr_dnpc_MPORT_data; // @[RF.scala 12:16]
  wire  csr_dnpc_MPORT_1_en; // @[RF.scala 12:16]
  wire [7:0] csr_dnpc_MPORT_1_addr; // @[RF.scala 12:16]
  wire [63:0] csr_dnpc_MPORT_1_data; // @[RF.scala 12:16]
  wire [63:0] csr_MPORT_1_data; // @[RF.scala 12:16]
  wire [7:0] csr_MPORT_1_addr; // @[RF.scala 12:16]
  wire  csr_MPORT_1_mask; // @[RF.scala 12:16]
  wire  csr_MPORT_1_en; // @[RF.scala 12:16]
  wire [63:0] csr_MPORT_2_data; // @[RF.scala 12:16]
  wire [7:0] csr_MPORT_2_addr; // @[RF.scala 12:16]
  wire  csr_MPORT_2_mask; // @[RF.scala 12:16]
  wire  csr_MPORT_2_en; // @[RF.scala 12:16]
  wire [63:0] csr_MPORT_3_data; // @[RF.scala 12:16]
  wire [7:0] csr_MPORT_3_addr; // @[RF.scala 12:16]
  wire  csr_MPORT_3_mask; // @[RF.scala 12:16]
  wire  csr_MPORT_3_en; // @[RF.scala 12:16]
  wire [63:0] csr_MPORT_4_data; // @[RF.scala 12:16]
  wire [7:0] csr_MPORT_4_addr; // @[RF.scala 12:16]
  wire  csr_MPORT_4_mask; // @[RF.scala 12:16]
  wire  csr_MPORT_4_en; // @[RF.scala 12:16]
  wire  _T = 3'h0 == io_src1type; // @[EXU.scala 106:22]
  wire [63:0] _GEN_1 = 3'h2 == io_src1type ? io1_PC : 64'h0; // @[EXU.scala 106:22 111:12]
  wire [63:0] src1 = 3'h0 == io_src1type ? io1_REG1 : _GEN_1; // @[EXU.scala 106:22 108:12]
  wire [63:0] _GEN_3 = 3'h1 == io_src2type ? io_Imm : 64'h0; // @[EXU.scala 117:22 122:12]
  wire [63:0] src2 = 3'h0 == io_src2type ? io1_REG2 : _GEN_3; // @[EXU.scala 117:22 119:11]
  wire  _T_67 = 7'h45 == io_aluoptype; // @[EXU.scala 150:23]
  wire [63:0] _addr_temp_T_1 = src1 + src2; // @[EXU.scala 152:25]
  wire  _T_68 = 7'h46 == io_aluoptype; // @[EXU.scala 150:23]
  wire [63:0] _addr_temp_T_3 = src1 + io_Imm; // @[EXU.scala 155:24]
  wire  _T_69 = 7'h70 == io_aluoptype; // @[EXU.scala 150:23]
  wire  _T_70 = 7'h47 == io_aluoptype; // @[EXU.scala 150:23]
  wire  _T_71 = 7'h11 == io_aluoptype; // @[EXU.scala 150:23]
  wire  _T_72 = 7'h6f == io_aluoptype; // @[EXU.scala 150:23]
  wire  _T_73 = 7'he == io_aluoptype; // @[EXU.scala 150:23]
  wire  _T_74 = 7'h74 == io_aluoptype; // @[EXU.scala 150:23]
  wire  _T_75 = 7'h77 == io_aluoptype; // @[EXU.scala 150:23]
  wire  _T_76 = 7'h3 == io_aluoptype; // @[EXU.scala 150:23]
  wire  _T_77 = 7'h4 == io_aluoptype; // @[EXU.scala 150:23]
  wire [63:0] _GEN_5 = 7'h4 == io_aluoptype ? _addr_temp_T_3 : 64'h0; // @[EXU.scala 150:23 182:17]
  wire [63:0] _GEN_6 = 7'h3 == io_aluoptype ? _addr_temp_T_3 : _GEN_5; // @[EXU.scala 150:23 179:17]
  wire [63:0] _GEN_7 = 7'h77 == io_aluoptype ? _addr_temp_T_3 : _GEN_6; // @[EXU.scala 150:23 176:17]
  wire [63:0] _GEN_8 = 7'h74 == io_aluoptype ? _addr_temp_T_3 : _GEN_7; // @[EXU.scala 150:23 173:17]
  wire [63:0] _GEN_9 = 7'he == io_aluoptype ? _addr_temp_T_3 : _GEN_8; // @[EXU.scala 150:23 170:17]
  wire [63:0] _GEN_10 = 7'h6f == io_aluoptype ? _addr_temp_T_3 : _GEN_9; // @[EXU.scala 150:23 167:17]
  wire [63:0] _GEN_11 = 7'h11 == io_aluoptype ? _addr_temp_T_3 : _GEN_10; // @[EXU.scala 150:23 164:17]
  wire [63:0] _GEN_12 = 7'h47 == io_aluoptype ? _addr_temp_T_3 : _GEN_11; // @[EXU.scala 150:23 161:17]
  wire [63:0] _GEN_13 = 7'h70 == io_aluoptype ? _addr_temp_T_3 : _GEN_12; // @[EXU.scala 150:23 158:17]
  wire [63:0] _GEN_14 = 7'h46 == io_aluoptype ? _addr_temp_T_3 : _GEN_13; // @[EXU.scala 150:23 155:17]
  wire [63:0] addr_temp = 7'h45 == io_aluoptype ? _addr_temp_T_1 : _GEN_14; // @[EXU.scala 150:23 152:17]
  wire  _T_6 = addr_temp[2:0] == 3'h0; // @[EXU.scala 130:22]
  wire  _T_8 = addr_temp[2:0] == 3'h1; // @[EXU.scala 131:22]
  wire  _T_10 = addr_temp[2:0] == 3'h2; // @[EXU.scala 132:22]
  wire  _T_12 = addr_temp[2:0] == 3'h3; // @[EXU.scala 133:22]
  wire  _T_14 = addr_temp[2:0] == 3'h4; // @[EXU.scala 134:22]
  wire  _T_16 = addr_temp[2:0] == 3'h5; // @[EXU.scala 135:22]
  wire  _T_18 = addr_temp[2:0] == 3'h6; // @[EXU.scala 136:22]
  wire  _T_20 = addr_temp[2:0] == 3'h7; // @[EXU.scala 137:22]
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
  wire [7:0] _GEN_16 = 2'h3 == addr_temp[2:1] ? 8'hc0 : 8'h0; // @[EXU.scala 192:29 206:22]
  wire [63:0] _GEN_17 = 2'h3 == addr_temp[2:1] ? _wdata_temp_T_13 : 64'h0; // @[EXU.scala 192:29 207:22]
  wire [7:0] _GEN_18 = 2'h2 == addr_temp[2:1] ? 8'h30 : _GEN_16; // @[EXU.scala 192:29 202:22]
  wire [63:0] _GEN_19 = 2'h2 == addr_temp[2:1] ? _wdata_temp_T_10 : _GEN_17; // @[EXU.scala 192:29 203:22]
  wire [7:0] _GEN_20 = 2'h1 == addr_temp[2:1] ? 8'hc : _GEN_18; // @[EXU.scala 192:29 198:22]
  wire [63:0] _GEN_21 = 2'h1 == addr_temp[2:1] ? _wdata_temp_T_6 : _GEN_19; // @[EXU.scala 192:29 199:22]
  wire [7:0] _GEN_22 = 2'h0 == addr_temp[2:1] ? 8'h3 : _GEN_20; // @[EXU.scala 192:29 194:22]
  wire [63:0] _GEN_23 = 2'h0 == addr_temp[2:1] ? _wdata_temp_T_2 : _GEN_21; // @[EXU.scala 192:29 195:22]
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
  wire [7:0] _wmask_temp_T_10 = addr_temp[2] ? 8'hf0 : 8'hf; // @[EXU.scala 217:24]
  wire [63:0] _wdata_temp_T_26 = {src2[31:0],32'h0}; // @[Cat.scala 31:58]
  wire [63:0] _wdata_temp_T_29 = {32'h0,src2[31:0]}; // @[Cat.scala 31:58]
  wire [63:0] _wdata_temp_T_30 = addr_temp[2] ? _wdata_temp_T_26 : _wdata_temp_T_29; // @[EXU.scala 218:24]
  wire [7:0] _GEN_24 = _T_75 ? _wmask_temp_T_10 : 8'h0; // @[EXU.scala 185:24 217:18]
  wire [63:0] _GEN_25 = _T_75 ? _wdata_temp_T_30 : 64'h0; // @[EXU.scala 185:24 218:18]
  wire [7:0] _GEN_26 = _T_74 ? _wmask_temp_T_7 : _GEN_24; // @[EXU.scala 185:24 213:18]
  wire [63:0] _GEN_27 = _T_74 ? _wdata_temp_T_21 : _GEN_25; // @[EXU.scala 185:24 214:18]
  wire [7:0] _GEN_28 = _T_69 ? _GEN_22 : _GEN_26; // @[EXU.scala 185:24]
  wire [63:0] _GEN_29 = _T_69 ? _GEN_23 : _GEN_27; // @[EXU.scala 185:24]
  wire  _T_112 = addr_temp[2:1] == 2'h0; // @[EXU.scala 232:21]
  wire  _T_115 = addr_temp[2:1] == 2'h1; // @[EXU.scala 233:21]
  wire  _T_118 = addr_temp[2:1] == 2'h2; // @[EXU.scala 234:21]
  wire  _T_121 = addr_temp[2:1] == 2'h3; // @[EXU.scala 235:21]
  wire  mem_result_sign = io1_rdata[63]; // @[util.scala 9:19]
  wire [31:0] _mem_result_T_4 = mem_result_sign ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _mem_result_T_5 = {_mem_result_T_4,io1_rdata[63:32]}; // @[Cat.scala 31:58]
  wire  mem_result_sign_1 = io1_rdata[31]; // @[util.scala 9:19]
  wire [31:0] _mem_result_T_8 = mem_result_sign_1 ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _mem_result_T_9 = {_mem_result_T_8,io1_rdata[31:0]}; // @[Cat.scala 31:58]
  wire [63:0] _mem_result_T_10 = addr_temp[2] ? _mem_result_T_5 : _mem_result_T_9; // @[EXU.scala 243:24]
  wire [63:0] _mem_result_T_15 = {32'h0,io1_rdata[63:32]}; // @[Cat.scala 31:58]
  wire [63:0] _mem_result_T_20 = addr_temp[2] ? _mem_result_T_15 : _mem_result_T_9; // @[EXU.scala 246:24]
  wire [7:0] _mem_result_T_21 = _T_20 ? io1_rdata[63:56] : 8'h0; // @[Mux.scala 101:16]
  wire [7:0] _mem_result_T_22 = _T_18 ? io1_rdata[55:48] : _mem_result_T_21; // @[Mux.scala 101:16]
  wire [7:0] _mem_result_T_23 = _T_16 ? io1_rdata[47:40] : _mem_result_T_22; // @[Mux.scala 101:16]
  wire [7:0] _mem_result_T_24 = _T_14 ? io1_rdata[39:32] : _mem_result_T_23; // @[Mux.scala 101:16]
  wire [7:0] _mem_result_T_25 = _T_12 ? io1_rdata[31:24] : _mem_result_T_24; // @[Mux.scala 101:16]
  wire [7:0] _mem_result_T_26 = _T_10 ? io1_rdata[23:16] : _mem_result_T_25; // @[Mux.scala 101:16]
  wire [7:0] _mem_result_T_27 = _T_8 ? io1_rdata[15:8] : _mem_result_T_26; // @[Mux.scala 101:16]
  wire [7:0] _mem_result_T_28 = _T_6 ? io1_rdata[7:0] : _mem_result_T_27; // @[Mux.scala 101:16]
  wire [63:0] _mem_result_T_30 = {56'h0,_mem_result_T_28}; // @[Cat.scala 31:58]
  wire  mem_result_sign_3 = _mem_result_T_28[7]; // @[util.scala 9:19]
  wire [55:0] _mem_result_T_40 = mem_result_sign_3 ? 56'hffffffffffffff : 56'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _mem_result_T_41 = {_mem_result_T_40,_mem_result_T_28}; // @[Cat.scala 31:58]
  wire [15:0] _mem_result_T_42 = _T_121 ? io1_rdata[63:48] : 16'h0; // @[Mux.scala 101:16]
  wire [15:0] _mem_result_T_43 = _T_118 ? io1_rdata[47:32] : _mem_result_T_42; // @[Mux.scala 101:16]
  wire [15:0] _mem_result_T_44 = _T_115 ? io1_rdata[31:16] : _mem_result_T_43; // @[Mux.scala 101:16]
  wire [15:0] _mem_result_T_45 = _T_112 ? io1_rdata[15:0] : _mem_result_T_44; // @[Mux.scala 101:16]
  wire  mem_result_sign_4 = _mem_result_T_45[15]; // @[util.scala 9:19]
  wire [47:0] _mem_result_T_47 = mem_result_sign_4 ? 48'hffffffffffff : 48'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _mem_result_T_48 = {_mem_result_T_47,_mem_result_T_45}; // @[Cat.scala 31:58]
  wire [63:0] _mem_result_T_54 = {48'h0,_mem_result_T_45}; // @[Cat.scala 31:58]
  wire [63:0] _GEN_32 = _T_77 ? _mem_result_T_54 : 64'h0; // @[EXU.scala 238:24 258:18]
  wire [63:0] _GEN_33 = _T_76 ? _mem_result_T_48 : _GEN_32; // @[EXU.scala 238:24 255:18]
  wire [63:0] _GEN_34 = _T_73 ? _mem_result_T_41 : _GEN_33; // @[EXU.scala 238:24 252:18]
  wire [63:0] _GEN_35 = _T_72 ? _mem_result_T_30 : _GEN_34; // @[EXU.scala 238:24 249:18]
  wire [63:0] _GEN_36 = _T_71 ? _mem_result_T_20 : _GEN_35; // @[EXU.scala 238:24 246:18]
  wire [63:0] _GEN_37 = _T_70 ? _mem_result_T_10 : _GEN_36; // @[EXU.scala 238:24 243:18]
  wire [63:0] mem_result = _T_67 ? io1_rdata : _GEN_37; // @[EXU.scala 238:24 240:18]
  wire  _T_130 = 7'h40 == io_aluoptype; // @[EXU.scala 277:23]
  wire  alu_result_sign = _addr_temp_T_1[31]; // @[util.scala 9:19]
  wire [31:0] _alu_result_T_6 = alu_result_sign ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _alu_result_T_7 = {_alu_result_T_6,_addr_temp_T_1[31:0]}; // @[Cat.scala 31:58]
  wire [63:0] _alu_result_T_8 = src1 | src2; // @[EXU.scala 285:26]
  wire [63:0] _alu_result_T_10 = src1 - src2; // @[EXU.scala 288:26]
  wire [63:0] _alu_result_T_11 = src1 & src2; // @[EXU.scala 291:26]
  wire [63:0] _alu_result_T_12 = src1 ^ src2; // @[EXU.scala 294:26]
  wire [127:0] _alu_result_T_19 = src1 * src2; // @[EXU.scala 300:37]
  wire  alu_result_sign_2 = _alu_result_T_19[31]; // @[util.scala 9:19]
  wire [31:0] _alu_result_T_22 = alu_result_sign_2 ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _alu_result_T_23 = {_alu_result_T_22,_alu_result_T_19[31:0]}; // @[Cat.scala 31:58]
  wire [31:0] _alu_result_T_25 = src1[31:0]; // @[EXU.scala 303:43]
  wire [31:0] _alu_result_T_27 = src2[31:0]; // @[EXU.scala 303:63]
  wire [32:0] _alu_result_T_28 = $signed(_alu_result_T_25) / $signed(_alu_result_T_27); // @[EXU.scala 303:50]
  wire  alu_result_sign_3 = _alu_result_T_28[31]; // @[util.scala 9:19]
  wire [31:0] _alu_result_T_31 = alu_result_sign_3 ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _alu_result_T_32 = {_alu_result_T_31,_alu_result_T_28[31:0]}; // @[Cat.scala 31:58]
  wire [31:0] _alu_result_T_38 = $signed(_alu_result_T_25) % $signed(_alu_result_T_27); // @[EXU.scala 306:70]
  wire  alu_result_sign_4 = _alu_result_T_38[31]; // @[util.scala 9:19]
  wire [31:0] _alu_result_T_40 = alu_result_sign_4 ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _alu_result_T_41 = {_alu_result_T_40,_alu_result_T_38}; // @[Cat.scala 31:58]
  wire [31:0] _GEN_15 = src1[31:0] % src2[31:0]; // @[EXU.scala 309:44]
  wire [31:0] _alu_result_T_44 = _GEN_15[31:0]; // @[EXU.scala 309:44]
  wire  alu_result_sign_5 = _alu_result_T_44[31]; // @[util.scala 9:19]
  wire [31:0] _alu_result_T_47 = alu_result_sign_5 ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _alu_result_T_48 = {_alu_result_T_47,_alu_result_T_44}; // @[Cat.scala 31:58]
  wire  alu_result_sign_6 = _alu_result_T_10[31]; // @[util.scala 9:19]
  wire [31:0] _alu_result_T_53 = alu_result_sign_6 ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _alu_result_T_54 = {_alu_result_T_53,_alu_result_T_10[31:0]}; // @[Cat.scala 31:58]
  wire [63:0] _GEN_30 = src1 % src2; // @[EXU.scala 318:27]
  wire [63:0] _alu_result_T_57 = _GEN_30[63:0]; // @[EXU.scala 318:27]
  wire [63:0] _alu_result_T_58 = 3'h0 == io_src1type ? io1_REG1 : _GEN_1; // @[EXU.scala 321:27]
  wire [63:0] _alu_result_T_59 = 3'h0 == io_src2type ? io1_REG2 : _GEN_3; // @[EXU.scala 321:41]
  wire [63:0] _alu_result_T_61 = $signed(_alu_result_T_58) % $signed(_alu_result_T_59); // @[EXU.scala 321:48]
  wire [31:0] _alu_result_T_64 = src1[31:0] / src2[31:0]; // @[EXU.scala 324:44]
  wire  alu_result_sign_7 = _alu_result_T_64[31]; // @[util.scala 9:19]
  wire [31:0] _alu_result_T_67 = alu_result_sign_7 ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _alu_result_T_68 = {_alu_result_T_67,_alu_result_T_64}; // @[Cat.scala 31:58]
  wire [63:0] _alu_result_T_69 = src1 / src2; // @[EXU.scala 327:26]
  wire [64:0] _alu_result_T_72 = $signed(_alu_result_T_58) / $signed(_alu_result_T_59); // @[EXU.scala 330:34]
  wire [63:0] _GEN_42 = 7'h16 == io_aluoptype ? csr_alu_result_MPORT_1_data : 64'h0; // @[EXU.scala 277:23 337:18]
  wire [63:0] _GEN_49 = 7'h15 == io_aluoptype ? csr_alu_result_MPORT_data : _GEN_42; // @[EXU.scala 277:23 333:18]
  wire  _GEN_56 = 7'h15 == io_aluoptype ? 1'h0 : 7'h16 == io_aluoptype; // @[EXU.scala 277:23 RF.scala 12:16]
  wire [63:0] _GEN_60 = 7'h43 == io_aluoptype ? _alu_result_T_72[63:0] : _GEN_49; // @[EXU.scala 277:23 330:18]
  wire  _GEN_63 = 7'h43 == io_aluoptype ? 1'h0 : 7'h15 == io_aluoptype; // @[EXU.scala 277:23 RF.scala 12:16]
  wire  _GEN_70 = 7'h43 == io_aluoptype ? 1'h0 : _GEN_56; // @[EXU.scala 277:23 RF.scala 12:16]
  wire [63:0] _GEN_74 = 7'h13 == io_aluoptype ? _alu_result_T_69 : _GEN_60; // @[EXU.scala 277:23 327:18]
  wire  _GEN_77 = 7'h13 == io_aluoptype ? 1'h0 : _GEN_63; // @[EXU.scala 277:23 RF.scala 12:16]
  wire  _GEN_84 = 7'h13 == io_aluoptype ? 1'h0 : _GEN_70; // @[EXU.scala 277:23 RF.scala 12:16]
  wire [63:0] _GEN_88 = 7'h10 == io_aluoptype ? _alu_result_T_68 : _GEN_74; // @[EXU.scala 277:23 324:18]
  wire  _GEN_91 = 7'h10 == io_aluoptype ? 1'h0 : _GEN_77; // @[EXU.scala 277:23 RF.scala 12:16]
  wire  _GEN_98 = 7'h10 == io_aluoptype ? 1'h0 : _GEN_84; // @[EXU.scala 277:23 RF.scala 12:16]
  wire [63:0] _GEN_102 = 7'h12 == io_aluoptype ? _alu_result_T_61 : _GEN_88; // @[EXU.scala 277:23 321:18]
  wire  _GEN_105 = 7'h12 == io_aluoptype ? 1'h0 : _GEN_91; // @[EXU.scala 277:23 RF.scala 12:16]
  wire  _GEN_112 = 7'h12 == io_aluoptype ? 1'h0 : _GEN_98; // @[EXU.scala 277:23 RF.scala 12:16]
  wire [63:0] _GEN_116 = 7'hf == io_aluoptype ? _alu_result_T_57 : _GEN_102; // @[EXU.scala 277:23 318:18]
  wire  _GEN_119 = 7'hf == io_aluoptype ? 1'h0 : _GEN_105; // @[EXU.scala 277:23 RF.scala 12:16]
  wire  _GEN_126 = 7'hf == io_aluoptype ? 1'h0 : _GEN_112; // @[EXU.scala 277:23 RF.scala 12:16]
  wire [63:0] _GEN_130 = 7'h7 == io_aluoptype ? _alu_result_T_19[63:0] : _GEN_116; // @[EXU.scala 277:23 315:18]
  wire  _GEN_133 = 7'h7 == io_aluoptype ? 1'h0 : _GEN_119; // @[EXU.scala 277:23 RF.scala 12:16]
  wire  _GEN_140 = 7'h7 == io_aluoptype ? 1'h0 : _GEN_126; // @[EXU.scala 277:23 RF.scala 12:16]
  wire [63:0] _GEN_144 = 7'h1 == io_aluoptype ? _alu_result_T_54 : _GEN_130; // @[EXU.scala 277:23 312:18]
  wire  _GEN_147 = 7'h1 == io_aluoptype ? 1'h0 : _GEN_133; // @[EXU.scala 277:23 RF.scala 12:16]
  wire  _GEN_154 = 7'h1 == io_aluoptype ? 1'h0 : _GEN_140; // @[EXU.scala 277:23 RF.scala 12:16]
  wire [63:0] _GEN_158 = 7'hd == io_aluoptype ? _alu_result_T_48 : _GEN_144; // @[EXU.scala 277:23 309:18]
  wire  _GEN_161 = 7'hd == io_aluoptype ? 1'h0 : _GEN_147; // @[EXU.scala 277:23 RF.scala 12:16]
  wire  _GEN_168 = 7'hd == io_aluoptype ? 1'h0 : _GEN_154; // @[EXU.scala 277:23 RF.scala 12:16]
  wire [63:0] _GEN_172 = 7'h7a == io_aluoptype ? _alu_result_T_41 : _GEN_158; // @[EXU.scala 277:23 306:18]
  wire  _GEN_175 = 7'h7a == io_aluoptype ? 1'h0 : _GEN_161; // @[EXU.scala 277:23 RF.scala 12:16]
  wire  _GEN_182 = 7'h7a == io_aluoptype ? 1'h0 : _GEN_168; // @[EXU.scala 277:23 RF.scala 12:16]
  wire [63:0] _GEN_186 = 7'h79 == io_aluoptype ? _alu_result_T_32 : _GEN_172; // @[EXU.scala 277:23 303:18]
  wire  _GEN_189 = 7'h79 == io_aluoptype ? 1'h0 : _GEN_175; // @[EXU.scala 277:23 RF.scala 12:16]
  wire  _GEN_196 = 7'h79 == io_aluoptype ? 1'h0 : _GEN_182; // @[EXU.scala 277:23 RF.scala 12:16]
  wire [63:0] _GEN_200 = 7'h78 == io_aluoptype ? _alu_result_T_23 : _GEN_186; // @[EXU.scala 277:23 300:18]
  wire  _GEN_203 = 7'h78 == io_aluoptype ? 1'h0 : _GEN_189; // @[EXU.scala 277:23 RF.scala 12:16]
  wire  _GEN_210 = 7'h78 == io_aluoptype ? 1'h0 : _GEN_196; // @[EXU.scala 277:23 RF.scala 12:16]
  wire [63:0] _GEN_214 = 7'h6d == io_aluoptype ? _alu_result_T_7 : _GEN_200; // @[EXU.scala 277:23 297:18]
  wire  _GEN_217 = 7'h6d == io_aluoptype ? 1'h0 : _GEN_203; // @[EXU.scala 277:23 RF.scala 12:16]
  wire  _GEN_224 = 7'h6d == io_aluoptype ? 1'h0 : _GEN_210; // @[EXU.scala 277:23 RF.scala 12:16]
  wire [63:0] _GEN_228 = 7'h72 == io_aluoptype ? _alu_result_T_12 : _GEN_214; // @[EXU.scala 277:23 294:18]
  wire  _GEN_231 = 7'h72 == io_aluoptype ? 1'h0 : _GEN_217; // @[EXU.scala 277:23 RF.scala 12:16]
  wire  _GEN_238 = 7'h72 == io_aluoptype ? 1'h0 : _GEN_224; // @[EXU.scala 277:23 RF.scala 12:16]
  wire [63:0] _GEN_242 = 7'h71 == io_aluoptype ? _alu_result_T_11 : _GEN_228; // @[EXU.scala 277:23 291:18]
  wire  _GEN_245 = 7'h71 == io_aluoptype ? 1'h0 : _GEN_231; // @[EXU.scala 277:23 RF.scala 12:16]
  wire  _GEN_252 = 7'h71 == io_aluoptype ? 1'h0 : _GEN_238; // @[EXU.scala 277:23 RF.scala 12:16]
  wire [63:0] _GEN_256 = 7'h69 == io_aluoptype ? _alu_result_T_10 : _GEN_242; // @[EXU.scala 277:23 288:18]
  wire  _GEN_259 = 7'h69 == io_aluoptype ? 1'h0 : _GEN_245; // @[EXU.scala 277:23 RF.scala 12:16]
  wire  _GEN_266 = 7'h69 == io_aluoptype ? 1'h0 : _GEN_252; // @[EXU.scala 277:23 RF.scala 12:16]
  wire [63:0] _GEN_270 = 7'h44 == io_aluoptype ? _alu_result_T_8 : _GEN_256; // @[EXU.scala 277:23 285:18]
  wire  _GEN_273 = 7'h44 == io_aluoptype ? 1'h0 : _GEN_259; // @[EXU.scala 277:23 RF.scala 12:16]
  wire  _GEN_280 = 7'h44 == io_aluoptype ? 1'h0 : _GEN_266; // @[EXU.scala 277:23 RF.scala 12:16]
  wire [63:0] _GEN_284 = 7'h68 == io_aluoptype ? _alu_result_T_7 : _GEN_270; // @[EXU.scala 277:23 282:18]
  wire  _GEN_287 = 7'h68 == io_aluoptype ? 1'h0 : _GEN_273; // @[EXU.scala 277:23 RF.scala 12:16]
  wire  _GEN_294 = 7'h68 == io_aluoptype ? 1'h0 : _GEN_280; // @[EXU.scala 277:23 RF.scala 12:16]
  wire [63:0] alu_result = 7'h40 == io_aluoptype ? _addr_temp_T_1 : _GEN_284; // @[EXU.scala 277:23 279:17]
  wire [63:0] _shift_result_T_3 = $signed(_alu_result_T_58) >>> src2[4:0]; // @[EXU.scala 344:50]
  wire [94:0] _GEN_0 = {{31'd0}, src1}; // @[EXU.scala 348:38]
  wire [94:0] _shift_result_T_5 = _GEN_0 << src2[4:0]; // @[EXU.scala 348:38]
  wire  shift_result_sign = _shift_result_T_5[31]; // @[util.scala 9:19]
  wire [31:0] _shift_result_T_8 = shift_result_sign ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _shift_result_T_9 = {_shift_result_T_8,_shift_result_T_5[31:0]}; // @[Cat.scala 31:58]
  wire [126:0] _GEN_2 = {{63'd0}, src1}; // @[EXU.scala 351:28]
  wire [126:0] _shift_result_T_11 = _GEN_2 << src2[5:0]; // @[EXU.scala 351:28]
  wire [63:0] _shift_result_T_13 = src1 >> src2[5:0]; // @[EXU.scala 354:35]
  wire [94:0] _GEN_4 = {{63'd0}, src1[31:0]}; // @[EXU.scala 357:45]
  wire [94:0] _shift_result_T_16 = _GEN_4 << src2[5:0]; // @[EXU.scala 357:45]
  wire  shift_result_sign_1 = _shift_result_T_16[31]; // @[util.scala 9:19]
  wire [31:0] _shift_result_T_19 = shift_result_sign_1 ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _shift_result_T_20 = {_shift_result_T_19,_shift_result_T_16[31:0]}; // @[Cat.scala 31:58]
  wire [31:0] _shift_result_T_25 = $signed(_alu_result_T_25) >>> src2[4:0]; // @[EXU.scala 360:67]
  wire  shift_result_sign_2 = _shift_result_T_25[31]; // @[util.scala 9:19]
  wire [31:0] _shift_result_T_27 = shift_result_sign_2 ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _shift_result_T_28 = {_shift_result_T_27,_shift_result_T_25}; // @[Cat.scala 31:58]
  wire [31:0] _shift_result_T_31 = src1[31:0] >> src2[4:0]; // @[EXU.scala 363:46]
  wire  shift_result_sign_3 = _shift_result_T_31[31]; // @[util.scala 9:19]
  wire [31:0] _shift_result_T_34 = shift_result_sign_3 ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _shift_result_T_35 = {_shift_result_T_34,_shift_result_T_31}; // @[Cat.scala 31:58]
  wire [63:0] _shift_result_T_54 = $signed(_alu_result_T_58) >>> src2[5:0]; // @[EXU.scala 372:50]
  wire [63:0] _GEN_312 = 7'h14 == io_aluoptype ? _shift_result_T_54 : 64'h0; // @[EXU.scala 342:23 372:20]
  wire [63:0] _GEN_313 = 7'ha == io_aluoptype ? _shift_result_T_35 : _GEN_312; // @[EXU.scala 342:23 369:20]
  wire [63:0] _GEN_314 = 7'h9 == io_aluoptype ? _shift_result_T_28 : _GEN_313; // @[EXU.scala 342:23 366:20]
  wire [63:0] _GEN_315 = 7'h8 == io_aluoptype ? _shift_result_T_35 : _GEN_314; // @[EXU.scala 342:23 363:20]
  wire [63:0] _GEN_316 = 7'h6 == io_aluoptype ? _shift_result_T_28 : _GEN_315; // @[EXU.scala 342:23 360:20]
  wire [63:0] _GEN_317 = 7'h5 == io_aluoptype ? _shift_result_T_20 : _GEN_316; // @[EXU.scala 342:23 357:20]
  wire [63:0] _GEN_318 = 7'h75 == io_aluoptype ? _shift_result_T_13 : _GEN_317; // @[EXU.scala 342:23 354:20]
  wire [126:0] _GEN_319 = 7'h41 == io_aluoptype ? _shift_result_T_11 : {{63'd0}, _GEN_318}; // @[EXU.scala 342:23 351:20]
  wire [126:0] _GEN_320 = 7'h73 == io_aluoptype ? {{63'd0}, _shift_result_T_9} : _GEN_319; // @[EXU.scala 342:23 348:20]
  wire [126:0] _GEN_321 = 7'h6e == io_aluoptype ? {{63'd0}, _shift_result_T_3} : _GEN_320; // @[EXU.scala 342:23 344:20]
  wire  _compar_result_T = src1 < src2; // @[EXU.scala 381:33]
  wire [63:0] _compar_result_T_1 = src1 < src2 ? 64'h1 : 64'h0; // @[EXU.scala 381:27]
  wire  _compar_result_T_4 = $signed(_alu_result_T_58) < $signed(_alu_result_T_59); // @[EXU.scala 384:41]
  wire [63:0] _compar_result_T_5 = $signed(_alu_result_T_58) < $signed(_alu_result_T_59) ? 64'h1 : 64'h0; // @[EXU.scala 384:27]
  wire [63:0] _GEN_322 = 7'h2 == io_aluoptype ? _compar_result_T_5 : 64'h0; // @[EXU.scala 379:23 384:21]
  wire [63:0] compar_result = 7'h6a == io_aluoptype ? _compar_result_T_1 : _GEN_322; // @[EXU.scala 379:23 381:21]
  wire [63:0] _jump_result_T_2 = io1_PC + 64'h4; // @[EXU.scala 389:52]
  wire [63:0] jump_result = io_futype == 3'h3 ? _jump_result_T_2 : 64'h0; // @[EXU.scala 389:21]
  wire [63:0] _GEN_324 = 3'h5 == io_futype ? compar_result : 64'h0; // @[EXU.scala 392:20 409:17]
  wire [63:0] _GEN_325 = 3'h4 == io_futype ? mem_result : _GEN_324; // @[EXU.scala 392:20 406:18]
  wire [63:0] shift_result = _GEN_321[63:0];
  wire [63:0] _GEN_326 = 3'h1 == io_futype ? shift_result : _GEN_325; // @[EXU.scala 392:20 403:17]
  wire [63:0] _GEN_327 = 3'h2 == io_futype ? 64'h0 : _GEN_326; // @[EXU.scala 392:20 400:18]
  wire [63:0] _GEN_328 = 3'h3 == io_futype ? jump_result : _GEN_327; // @[EXU.scala 392:20 397:18]
  wire  _T_174 = 7'h6b == io_aluoptype; // @[EXU.scala 418:25]
  wire [63:0] _branch_result_T_1 = io1_PC + io_Imm; // @[EXU.scala 420:33]
  wire  _T_175 = 7'h6c == io_aluoptype; // @[EXU.scala 418:25]
  wire  _T_176 = 7'h76 == io_aluoptype; // @[EXU.scala 418:25]
  wire  _T_177 = 7'h7b == io_aluoptype; // @[EXU.scala 418:25]
  wire  _T_178 = 7'hb == io_aluoptype; // @[EXU.scala 418:25]
  wire  _T_179 = 7'hc == io_aluoptype; // @[EXU.scala 418:25]
  wire  _T_180 = 7'h17 == io_aluoptype; // @[EXU.scala 418:25]
  wire  _T_181 = 7'h18 == io_aluoptype; // @[EXU.scala 418:25]
  wire  _GEN_331 = 7'h17 == io_aluoptype | 7'h18 == io_aluoptype; // @[EXU.scala 418:25 446:21]
  wire [63:0] _GEN_332 = 7'hc == io_aluoptype ? _branch_result_T_1 : 64'h0; // @[EXU.scala 418:25 440:23]
  wire  _GEN_333 = 7'hc == io_aluoptype ? src1 >= src2 : _GEN_331; // @[EXU.scala 418:25 441:21]
  wire [63:0] _GEN_334 = 7'hb == io_aluoptype ? _branch_result_T_1 : _GEN_332; // @[EXU.scala 418:25 436:23]
  wire  _GEN_335 = 7'hb == io_aluoptype ? _compar_result_T : _GEN_333; // @[EXU.scala 418:25 437:21]
  wire [63:0] _GEN_336 = 7'h7b == io_aluoptype ? _branch_result_T_1 : _GEN_334; // @[EXU.scala 418:25 432:23]
  wire  _GEN_337 = 7'h7b == io_aluoptype ? _compar_result_T_4 : _GEN_335; // @[EXU.scala 418:25 433:21]
  wire [63:0] _GEN_338 = 7'h76 == io_aluoptype ? _branch_result_T_1 : _GEN_336; // @[EXU.scala 418:25 428:23]
  wire  _GEN_339 = 7'h76 == io_aluoptype ? $signed(_alu_result_T_58) >= $signed(_alu_result_T_59) : _GEN_337; // @[EXU.scala 418:25 429:21]
  wire [63:0] _GEN_340 = 7'h6c == io_aluoptype ? _branch_result_T_1 : _GEN_338; // @[EXU.scala 418:25 424:23]
  wire  _GEN_341 = 7'h6c == io_aluoptype ? src1 != src2 : _GEN_339; // @[EXU.scala 418:25 425:21]
  wire [63:0] branch_result = 7'h6b == io_aluoptype ? _branch_result_T_1 : _GEN_340; // @[EXU.scala 418:25 420:23]
  wire  branch_flag = 7'h6b == io_aluoptype ? src1 == src2 : _GEN_341; // @[EXU.scala 418:25 421:21]
  wire  _T_182 = 7'h19 == io_aluoptype; // @[EXU.scala 454:23]
  wire [63:0] _dnpc_T_5 = {_addr_temp_T_1[63:1],1'h0}; // @[Cat.scala 31:58]
  wire [63:0] _dnpc_T_9 = branch_flag ? branch_result : _jump_result_T_2; // @[EXU.scala 462:18]
  wire [63:0] _GEN_347 = _T_181 ? csr_dnpc_MPORT_1_data : 64'h0; // @[EXU.scala 454:23 485:12]
  wire [63:0] _GEN_351 = _T_180 ? csr_dnpc_MPORT_data : _GEN_347; // @[EXU.scala 454:23 482:12]
  wire  _GEN_354 = _T_180 ? 1'h0 : _T_181; // @[EXU.scala 454:23 RF.scala 12:16]
  wire [63:0] _GEN_355 = _T_178 ? _dnpc_T_9 : _GEN_351; // @[EXU.scala 454:23 478:12]
  wire  _GEN_358 = _T_178 ? 1'h0 : _T_180; // @[EXU.scala 454:23 RF.scala 12:16]
  wire  _GEN_361 = _T_178 ? 1'h0 : _GEN_354; // @[EXU.scala 454:23 RF.scala 12:16]
  wire [63:0] _GEN_362 = _T_177 ? _dnpc_T_9 : _GEN_355; // @[EXU.scala 454:23 475:12]
  wire  _GEN_365 = _T_177 ? 1'h0 : _GEN_358; // @[EXU.scala 454:23 RF.scala 12:16]
  wire  _GEN_368 = _T_177 ? 1'h0 : _GEN_361; // @[EXU.scala 454:23 RF.scala 12:16]
  wire [63:0] _GEN_369 = _T_179 ? _dnpc_T_9 : _GEN_362; // @[EXU.scala 454:23 472:12]
  wire  _GEN_372 = _T_179 ? 1'h0 : _GEN_365; // @[EXU.scala 454:23 RF.scala 12:16]
  wire  _GEN_375 = _T_179 ? 1'h0 : _GEN_368; // @[EXU.scala 454:23 RF.scala 12:16]
  wire [63:0] _GEN_376 = _T_176 ? _dnpc_T_9 : _GEN_369; // @[EXU.scala 454:23 469:12]
  wire  _GEN_379 = _T_176 ? 1'h0 : _GEN_372; // @[EXU.scala 454:23 RF.scala 12:16]
  wire  _GEN_382 = _T_176 ? 1'h0 : _GEN_375; // @[EXU.scala 454:23 RF.scala 12:16]
  wire [63:0] _GEN_383 = _T_175 ? _dnpc_T_9 : _GEN_376; // @[EXU.scala 454:23 466:12]
  wire  _GEN_386 = _T_175 ? 1'h0 : _GEN_379; // @[EXU.scala 454:23 RF.scala 12:16]
  wire  _GEN_389 = _T_175 ? 1'h0 : _GEN_382; // @[EXU.scala 454:23 RF.scala 12:16]
  wire [63:0] _GEN_390 = _T_174 ? _dnpc_T_9 : _GEN_383; // @[EXU.scala 454:23 462:12]
  wire  _GEN_393 = _T_174 ? 1'h0 : _GEN_386; // @[EXU.scala 454:23 RF.scala 12:16]
  wire  _GEN_396 = _T_174 ? 1'h0 : _GEN_389; // @[EXU.scala 454:23 RF.scala 12:16]
  wire [63:0] _GEN_397 = 7'h48 == io_aluoptype ? _dnpc_T_5 : _GEN_390; // @[EXU.scala 454:23 459:12]
  wire  _GEN_400 = 7'h48 == io_aluoptype ? 1'h0 : _GEN_393; // @[EXU.scala 454:23 RF.scala 12:16]
  wire  _GEN_403 = 7'h48 == io_aluoptype ? 1'h0 : _GEN_396; // @[EXU.scala 454:23 RF.scala 12:16]
  assign csr_alu_result_MPORT_en = _T_130 ? 1'h0 : _GEN_287;
  assign csr_alu_result_MPORT_addr = io_Imm[7:0];
  assign csr_alu_result_MPORT_data = csr[csr_alu_result_MPORT_addr]; // @[RF.scala 12:16]
  assign csr_MPORT_en = _T_130 ? 1'h0 : _GEN_287;
  assign csr_MPORT_addr = io_Imm[7:0];
  assign csr_MPORT_data = csr[csr_MPORT_addr]; // @[RF.scala 12:16]
  assign csr_alu_result_MPORT_1_en = _T_130 ? 1'h0 : _GEN_294;
  assign csr_alu_result_MPORT_1_addr = io_Imm[7:0];
  assign csr_alu_result_MPORT_1_data = csr[csr_alu_result_MPORT_1_addr]; // @[RF.scala 12:16]
  assign csr_dnpc_MPORT_en = _T_182 ? 1'h0 : _GEN_400;
  assign csr_dnpc_MPORT_addr = 8'h5;
  assign csr_dnpc_MPORT_data = csr[csr_dnpc_MPORT_addr]; // @[RF.scala 12:16]
  assign csr_dnpc_MPORT_1_en = _T_182 ? 1'h0 : _GEN_403;
  assign csr_dnpc_MPORT_1_addr = 8'h29;
  assign csr_dnpc_MPORT_1_data = csr[csr_dnpc_MPORT_1_addr]; // @[RF.scala 12:16]
  assign csr_MPORT_1_data = csr_MPORT_data | src1;
  assign csr_MPORT_1_addr = io_Imm[7:0];
  assign csr_MPORT_1_mask = 1'h1;
  assign csr_MPORT_1_en = _T_130 ? 1'h0 : _GEN_287;
  assign csr_MPORT_2_data = _T ? io1_REG1 : _GEN_1;
  assign csr_MPORT_2_addr = io_Imm[7:0];
  assign csr_MPORT_2_mask = 1'h1;
  assign csr_MPORT_2_en = _T_130 ? 1'h0 : _GEN_294;
  assign csr_MPORT_3_data = io1_PC;
  assign csr_MPORT_3_addr = 8'h41;
  assign csr_MPORT_3_mask = 1'h1;
  assign csr_MPORT_3_en = 7'h17 == io_aluoptype;
  assign csr_MPORT_4_data = 64'hb;
  assign csr_MPORT_4_addr = 8'h42;
  assign csr_MPORT_4_mask = 1'h1;
  assign csr_MPORT_4_en = 7'h17 == io_aluoptype;
  assign io1_result = 3'h0 == io_futype ? alu_result : _GEN_328; // @[EXU.scala 392:20 394:18]
  assign io1_is_break = io_aluoptype == 7'h42; // @[EXU.scala 276:36]
  assign io1_is_jump = io_futype == 3'h3; // @[EXU.scala 414:31]
  assign io1_is_branch = 7'h6b == io_aluoptype ? src1 == src2 : _GEN_341; // @[EXU.scala 418:25 421:21]
  assign io1_dnpc = 7'h19 == io_aluoptype ? _addr_temp_T_1 : _GEN_397; // @[EXU.scala 454:23 456:12]
  assign io1_addr = 7'h45 == io_aluoptype ? _addr_temp_T_1 : _GEN_14; // @[EXU.scala 150:23 152:17]
  assign io1_wdata = _T_68 ? src2 : _GEN_29; // @[EXU.scala 185:24 189:18]
  assign io1_wmask = _T_68 ? 8'hff : _GEN_28; // @[EXU.scala 185:24 188:18]
  always @(posedge clock) begin
    if (csr_MPORT_1_en & csr_MPORT_1_mask) begin
      csr[csr_MPORT_1_addr] <= csr_MPORT_1_data; // @[RF.scala 12:16]
    end
    if (csr_MPORT_2_en & csr_MPORT_2_mask) begin
      csr[csr_MPORT_2_addr] <= csr_MPORT_2_data; // @[RF.scala 12:16]
    end
    if (csr_MPORT_3_en & csr_MPORT_3_mask) begin
      csr[csr_MPORT_3_addr] <= csr_MPORT_3_data; // @[RF.scala 12:16]
    end
    if (csr_MPORT_4_en & csr_MPORT_4_mask) begin
      csr[csr_MPORT_4_addr] <= csr_MPORT_4_data; // @[RF.scala 12:16]
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
  for (initvar = 0; initvar < 256; initvar = initvar+1)
    csr[initvar] = _RAND_0[63:0];
`endif // RANDOMIZE_MEM_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
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
  wire  IF_clock; // @[CPUTop.scala 39:16]
  wire  IF_reset; // @[CPUTop.scala 39:16]
  wire [63:0] IF_io_dnpc; // @[CPUTop.scala 39:16]
  wire  IF_io_is_jump; // @[CPUTop.scala 39:16]
  wire  IF_io_is_branch; // @[CPUTop.scala 39:16]
  wire [63:0] IF_io_pc; // @[CPUTop.scala 39:16]
  wire [63:0] IFM_pc; // @[CPUTop.scala 41:18]
  wire [31:0] IFM_inst; // @[CPUTop.scala 41:18]
  wire [31:0] ID_io_inst; // @[CPUTop.scala 43:18]
  wire [2:0] ID_io_ctrlIO_src1type; // @[CPUTop.scala 43:18]
  wire [2:0] ID_io_ctrlIO_src2type; // @[CPUTop.scala 43:18]
  wire [4:0] ID_io_ctrlIO_src1; // @[CPUTop.scala 43:18]
  wire [4:0] ID_io_ctrlIO_src2; // @[CPUTop.scala 43:18]
  wire [4:0] ID_io_ctrlIO_rd; // @[CPUTop.scala 43:18]
  wire [2:0] ID_io_ctrlIO_futype; // @[CPUTop.scala 43:18]
  wire [6:0] ID_io_ctrlIO_aluoptype; // @[CPUTop.scala 43:18]
  wire [63:0] ID_io_ctrlIO_Imm; // @[CPUTop.scala 43:18]
  wire  ID_io_rd_en; // @[CPUTop.scala 43:18]
  wire  ID_io_mem_we; // @[CPUTop.scala 43:18]
  wire  EX_clock; // @[CPUTop.scala 45:18]
  wire [2:0] EX_io_src1type; // @[CPUTop.scala 45:18]
  wire [2:0] EX_io_src2type; // @[CPUTop.scala 45:18]
  wire [2:0] EX_io_futype; // @[CPUTop.scala 45:18]
  wire [6:0] EX_io_aluoptype; // @[CPUTop.scala 45:18]
  wire [63:0] EX_io_Imm; // @[CPUTop.scala 45:18]
  wire [63:0] EX_io1_REG1; // @[CPUTop.scala 45:18]
  wire [63:0] EX_io1_REG2; // @[CPUTop.scala 45:18]
  wire [63:0] EX_io1_PC; // @[CPUTop.scala 45:18]
  wire [63:0] EX_io1_result; // @[CPUTop.scala 45:18]
  wire  EX_io1_is_break; // @[CPUTop.scala 45:18]
  wire  EX_io1_is_jump; // @[CPUTop.scala 45:18]
  wire  EX_io1_is_branch; // @[CPUTop.scala 45:18]
  wire [63:0] EX_io1_dnpc; // @[CPUTop.scala 45:18]
  wire [63:0] EX_io1_addr; // @[CPUTop.scala 45:18]
  wire [63:0] EX_io1_rdata; // @[CPUTop.scala 45:18]
  wire [63:0] EX_io1_wdata; // @[CPUTop.scala 45:18]
  wire [7:0] EX_io1_wmask; // @[CPUTop.scala 45:18]
  wire  DIP_is_break; // @[CPUTop.scala 47:19]
  wire [63:0] DIP_rf_0; // @[CPUTop.scala 47:19]
  wire [63:0] DIP_rf_1; // @[CPUTop.scala 47:19]
  wire [63:0] DIP_rf_2; // @[CPUTop.scala 47:19]
  wire [63:0] DIP_rf_3; // @[CPUTop.scala 47:19]
  wire [63:0] DIP_rf_4; // @[CPUTop.scala 47:19]
  wire [63:0] DIP_rf_5; // @[CPUTop.scala 47:19]
  wire [63:0] DIP_rf_6; // @[CPUTop.scala 47:19]
  wire [63:0] DIP_rf_7; // @[CPUTop.scala 47:19]
  wire [63:0] DIP_rf_8; // @[CPUTop.scala 47:19]
  wire [63:0] DIP_rf_9; // @[CPUTop.scala 47:19]
  wire [63:0] DIP_rf_10; // @[CPUTop.scala 47:19]
  wire [63:0] DIP_rf_11; // @[CPUTop.scala 47:19]
  wire [63:0] DIP_rf_12; // @[CPUTop.scala 47:19]
  wire [63:0] DIP_rf_13; // @[CPUTop.scala 47:19]
  wire [63:0] DIP_rf_14; // @[CPUTop.scala 47:19]
  wire [63:0] DIP_rf_15; // @[CPUTop.scala 47:19]
  wire [63:0] DIP_rf_16; // @[CPUTop.scala 47:19]
  wire [63:0] DIP_rf_17; // @[CPUTop.scala 47:19]
  wire [63:0] DIP_rf_18; // @[CPUTop.scala 47:19]
  wire [63:0] DIP_rf_19; // @[CPUTop.scala 47:19]
  wire [63:0] DIP_rf_20; // @[CPUTop.scala 47:19]
  wire [63:0] DIP_rf_21; // @[CPUTop.scala 47:19]
  wire [63:0] DIP_rf_22; // @[CPUTop.scala 47:19]
  wire [63:0] DIP_rf_23; // @[CPUTop.scala 47:19]
  wire [63:0] DIP_rf_24; // @[CPUTop.scala 47:19]
  wire [63:0] DIP_rf_25; // @[CPUTop.scala 47:19]
  wire [63:0] DIP_rf_26; // @[CPUTop.scala 47:19]
  wire [63:0] DIP_rf_27; // @[CPUTop.scala 47:19]
  wire [63:0] DIP_rf_28; // @[CPUTop.scala 47:19]
  wire [63:0] DIP_rf_29; // @[CPUTop.scala 47:19]
  wire [63:0] DIP_rf_30; // @[CPUTop.scala 47:19]
  wire [63:0] DIP_rf_31; // @[CPUTop.scala 47:19]
  wire [31:0] DIP_inst; // @[CPUTop.scala 47:19]
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
  wire [63:0] mem_addr; // @[CPUTop.scala 51:19]
  wire  mem_reset; // @[CPUTop.scala 51:19]
  wire  mem_we; // @[CPUTop.scala 51:19]
  wire  mem_ce; // @[CPUTop.scala 51:19]
  wire [63:0] mem_wdata; // @[CPUTop.scala 51:19]
  wire [63:0] mem_rdata; // @[CPUTop.scala 51:19]
  wire [7:0] mem_wmask; // @[CPUTop.scala 51:19]
  wire [4:0] src1add = ID_io_ctrlIO_src1; // @[CPUTop.scala 62:21 71:10]
  wire [4:0] src2add = ID_io_ctrlIO_src2; // @[CPUTop.scala 63:21 72:10]
  wire  _T_1 = ID_io_ctrlIO_rd == 5'h0; // @[RF.scala 8:61]
  wire [63:0] _T_2 = EX_io1_result; // @[RF.scala 8:78]
  IFU IF ( // @[CPUTop.scala 39:16]
    .clock(IF_clock),
    .reset(IF_reset),
    .io_dnpc(IF_io_dnpc),
    .io_is_jump(IF_io_is_jump),
    .io_is_branch(IF_io_is_branch),
    .io_pc(IF_io_pc)
  );
  ifm IFM ( // @[CPUTop.scala 41:18]
    .pc(IFM_pc),
    .inst(IFM_inst)
  );
  IDU ID ( // @[CPUTop.scala 43:18]
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
  EXU EX ( // @[CPUTop.scala 45:18]
    .clock(EX_clock),
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
  DIP_model DIP ( // @[CPUTop.scala 47:19]
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
  MEM mem ( // @[CPUTop.scala 51:19]
    .addr(mem_addr),
    .reset(mem_reset),
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
  assign io_pc = IF_io_pc; // @[CPUTop.scala 53:9]
  assign io_result = EX_io1_result; // @[CPUTop.scala 78:13]
  assign IF_clock = clock;
  assign IF_reset = reset;
  assign IF_io_dnpc = EX_io1_dnpc; // @[CPUTop.scala 67:14]
  assign IF_io_is_jump = EX_io1_is_jump; // @[CPUTop.scala 68:17]
  assign IF_io_is_branch = EX_io1_is_branch; // @[CPUTop.scala 69:19]
  assign IFM_pc = IF_io_pc; // @[CPUTop.scala 55:13]
  assign ID_io_inst = IFM_inst; // @[CPUTop.scala 57:14]
  assign EX_clock = clock;
  assign EX_io_src1type = ID_io_ctrlIO_src1type; // @[CPUTop.scala 59:16]
  assign EX_io_src2type = ID_io_ctrlIO_src2type; // @[CPUTop.scala 59:16]
  assign EX_io_futype = ID_io_ctrlIO_futype; // @[CPUTop.scala 59:16]
  assign EX_io_aluoptype = ID_io_ctrlIO_aluoptype; // @[CPUTop.scala 59:16]
  assign EX_io_Imm = ID_io_ctrlIO_Imm; // @[CPUTop.scala 59:16]
  assign EX_io1_REG1 = src1add == 5'h0 ? 64'h0 : rf_EX_io1_REG1_MPORT_data; // @[RF.scala 7:37]
  assign EX_io1_REG2 = src2add == 5'h0 ? 64'h0 : rf_EX_io1_REG2_MPORT_data; // @[RF.scala 7:37]
  assign EX_io1_PC = IF_io_pc; // @[CPUTop.scala 60:13]
  assign EX_io1_rdata = mem_rdata; // @[CPUTop.scala 87:16]
  assign DIP_is_break = EX_io1_is_break; // @[CPUTop.scala 80:19]
  assign DIP_rf_0 = rf_DIP_io_rf_0_MPORT_data; // @[CPUTop.scala 82:18]
  assign DIP_rf_1 = rf_DIP_io_rf_1_MPORT_data; // @[CPUTop.scala 82:18]
  assign DIP_rf_2 = rf_DIP_io_rf_2_MPORT_data; // @[CPUTop.scala 82:18]
  assign DIP_rf_3 = rf_DIP_io_rf_3_MPORT_data; // @[CPUTop.scala 82:18]
  assign DIP_rf_4 = rf_DIP_io_rf_4_MPORT_data; // @[CPUTop.scala 82:18]
  assign DIP_rf_5 = rf_DIP_io_rf_5_MPORT_data; // @[CPUTop.scala 82:18]
  assign DIP_rf_6 = rf_DIP_io_rf_6_MPORT_data; // @[CPUTop.scala 82:18]
  assign DIP_rf_7 = rf_DIP_io_rf_7_MPORT_data; // @[CPUTop.scala 82:18]
  assign DIP_rf_8 = rf_DIP_io_rf_8_MPORT_data; // @[CPUTop.scala 82:18]
  assign DIP_rf_9 = rf_DIP_io_rf_9_MPORT_data; // @[CPUTop.scala 82:18]
  assign DIP_rf_10 = rf_DIP_io_rf_10_MPORT_data; // @[CPUTop.scala 82:18]
  assign DIP_rf_11 = rf_DIP_io_rf_11_MPORT_data; // @[CPUTop.scala 82:18]
  assign DIP_rf_12 = rf_DIP_io_rf_12_MPORT_data; // @[CPUTop.scala 82:18]
  assign DIP_rf_13 = rf_DIP_io_rf_13_MPORT_data; // @[CPUTop.scala 82:18]
  assign DIP_rf_14 = rf_DIP_io_rf_14_MPORT_data; // @[CPUTop.scala 82:18]
  assign DIP_rf_15 = rf_DIP_io_rf_15_MPORT_data; // @[CPUTop.scala 82:18]
  assign DIP_rf_16 = rf_DIP_io_rf_16_MPORT_data; // @[CPUTop.scala 82:18]
  assign DIP_rf_17 = rf_DIP_io_rf_17_MPORT_data; // @[CPUTop.scala 82:18]
  assign DIP_rf_18 = rf_DIP_io_rf_18_MPORT_data; // @[CPUTop.scala 82:18]
  assign DIP_rf_19 = rf_DIP_io_rf_19_MPORT_data; // @[CPUTop.scala 82:18]
  assign DIP_rf_20 = rf_DIP_io_rf_20_MPORT_data; // @[CPUTop.scala 82:18]
  assign DIP_rf_21 = rf_DIP_io_rf_21_MPORT_data; // @[CPUTop.scala 82:18]
  assign DIP_rf_22 = rf_DIP_io_rf_22_MPORT_data; // @[CPUTop.scala 82:18]
  assign DIP_rf_23 = rf_DIP_io_rf_23_MPORT_data; // @[CPUTop.scala 82:18]
  assign DIP_rf_24 = rf_DIP_io_rf_24_MPORT_data; // @[CPUTop.scala 82:18]
  assign DIP_rf_25 = rf_DIP_io_rf_25_MPORT_data; // @[CPUTop.scala 82:18]
  assign DIP_rf_26 = rf_DIP_io_rf_26_MPORT_data; // @[CPUTop.scala 82:18]
  assign DIP_rf_27 = rf_DIP_io_rf_27_MPORT_data; // @[CPUTop.scala 82:18]
  assign DIP_rf_28 = rf_DIP_io_rf_28_MPORT_data; // @[CPUTop.scala 82:18]
  assign DIP_rf_29 = rf_DIP_io_rf_29_MPORT_data; // @[CPUTop.scala 82:18]
  assign DIP_rf_30 = rf_DIP_io_rf_30_MPORT_data; // @[CPUTop.scala 82:18]
  assign DIP_rf_31 = rf_DIP_io_rf_31_MPORT_data; // @[CPUTop.scala 82:18]
  assign DIP_inst = io_inst; // @[CPUTop.scala 84:15]
  assign mem_addr = EX_io1_addr; // @[CPUTop.scala 86:14]
  assign mem_reset = reset; // @[CPUTop.scala 92:16]
  assign mem_we = ID_io_mem_we; // @[CPUTop.scala 91:13]
  assign mem_ce = ID_io_ctrlIO_futype == 3'h4; // @[CPUTop.scala 90:41]
  assign mem_wdata = EX_io1_wdata; // @[CPUTop.scala 88:16]
  assign mem_wmask = EX_io1_wmask; // @[CPUTop.scala 89:16]
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
