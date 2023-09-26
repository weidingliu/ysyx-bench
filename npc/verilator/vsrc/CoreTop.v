module ysyx_22050321_IF(
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
  input         io_flush,
  input         io_mret_flush,
  input         io_excp_flush,
  input  [63:0] io_mtvec,
  input  [63:0] io_mret,
  input         io_wb_stall,
  input         io_ex_stall
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  reg [63:0] temp; // @[IF.scala 29:21]
  wire  _temp_T = ~io_wb_stall; // @[IF.scala 30:15]
  wire  _temp_T_1 = ~io_ex_stall; // @[IF.scala 30:31]
  wire  _temp_T_3 = ~io_excp_flush; // @[IF.scala 30:47]
  wire  _temp_T_5 = ~io_mret_flush; // @[IF.scala 30:65]
  wire [63:0] _temp_T_10 = temp + 64'h4; // @[IF.scala 31:59]
  wire [31:0] inst = temp[2] ? io_cache_req_rdata_rep_bits_rdata[63:32] : io_cache_req_rdata_rep_bits_rdata[31:0]; // @[IF.scala 48:17]
  assign io_cache_req_addr_req_valid = io_out_ready & ~io_branch_io_is_jump & ~io_branch_io_is_branch & _temp_T &
    _temp_T_1 & _temp_T_3 & _temp_T_5; // @[IF.scala 42:148]
  assign io_cache_req_addr_req_bits_addr = temp; // @[IF.scala 41:35]
  assign io_cache_req_rdata_rep_ready = io_out_ready; // @[IF.scala 47:32]
  assign io_out_valid = io_cache_req_rdata_rep_valid; // @[IF.scala 39:22]
  assign io_out_bits_PC = temp; // @[IF.scala 50:18]
  assign io_out_bits_Inst = io_flush ? 32'h0 : inst; // @[IF.scala 51:26]
  always @(posedge clock) begin
    if (reset) begin // @[IF.scala 29:21]
      temp <= 64'h80000000; // @[IF.scala 29:21]
    end else if (~io_wb_stall & ~io_ex_stall & ~io_excp_flush & ~io_mret_flush) begin // @[IF.scala 30:14]
      if (io_branch_io_is_jump | io_branch_io_is_branch) begin // @[IF.scala 30:83]
        temp <= io_branch_io_dnpc;
      end else if (io_out_ready & io_cache_req_rdata_rep_valid) begin // @[IF.scala 31:8]
        temp <= _temp_T_10;
      end
    end else if (io_excp_flush) begin // @[IF.scala 32:18]
      temp <= io_mtvec;
    end else if (io_mret_flush) begin // @[IF.scala 32:45]
      temp <= io_mret;
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
module ysyx_22050321_ID(
  input         io_in_valid,
  input  [63:0] io_in_bits_PC,
  input  [31:0] io_in_bits_Inst,
  input  [63:0] io_REG1,
  input  [63:0] io_REG2,
  input         io_flush,
  input         io_ex_is_mem,
  input  [4:0]  io_ex_reg_rfDest,
  input         io_ex_reg_rfWen,
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
  output        io_out_bits_ctrl_signal_ertn_flush,
  output        io_out_bits_ctrl_signal_excp_flush,
  output [63:0] io_out_bits_ctrl_data_src1,
  output [63:0] io_out_bits_ctrl_data_src2,
  output [63:0] io_out_bits_ctrl_data_Imm,
  output [63:0] io_out_bits_ctrl_flow_PC,
  output [31:0] io_out_bits_ctrl_flow_inst,
  output [11:0] io_out_bits_ctrl_csr_csr_idx
);
  wire [4:0] rs = io_in_bits_Inst[19:15]; // @[ID.scala 54:38]
  wire [4:0] rt = io_in_bits_Inst[24:20]; // @[ID.scala 54:63]
  wire [4:0] rd = io_in_bits_Inst[11:7]; // @[ID.scala 54:88]
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
  wire [51:0] _T_2 = sign ? 52'hfffffffffffff : 52'h0; // @[Bitwise.scala 77:12]
  wire [63:0] _T_3 = {_T_2,io_in_bits_Inst[31:20]}; // @[Cat.scala 33:92]
  wire [19:0] _T_7 = {io_in_bits_Inst[19:12],io_in_bits_Inst[20],io_in_bits_Inst[30:21],1'h0}; // @[Cat.scala 33:92]
  wire  sign_1 = _T_7[19]; // @[util.scala 11:19]
  wire [43:0] _T_9 = sign_1 ? 44'hfffffffffff : 44'h0; // @[Bitwise.scala 77:12]
  wire [63:0] _T_10 = {_T_9,io_in_bits_Inst[19:12],io_in_bits_Inst[20],io_in_bits_Inst[30:21],1'h0}; // @[Cat.scala 33:92]
  wire [31:0] _T_13 = {io_in_bits_Inst[31:12],12'h0}; // @[Cat.scala 33:92]
  wire  sign_2 = _T_13[31]; // @[util.scala 11:19]
  wire [31:0] _T_15 = sign_2 ? 32'hffffffff : 32'h0; // @[Bitwise.scala 77:12]
  wire [63:0] _T_16 = {_T_15,io_in_bits_Inst[31:12],12'h0}; // @[Cat.scala 33:92]
  wire [11:0] _T_19 = {io_in_bits_Inst[31:25],rd}; // @[Cat.scala 33:92]
  wire  sign_3 = _T_19[11]; // @[util.scala 11:19]
  wire [51:0] _T_21 = sign_3 ? 52'hfffffffffffff : 52'h0; // @[Bitwise.scala 77:12]
  wire [63:0] _T_22 = {_T_21,io_in_bits_Inst[31:25],rd}; // @[Cat.scala 33:92]
  wire [12:0] _T_27 = {io_in_bits_Inst[31],io_in_bits_Inst[7],io_in_bits_Inst[30:25],io_in_bits_Inst[11:8],1'h0}; // @[Cat.scala 33:92]
  wire  sign_4 = _T_27[12]; // @[util.scala 11:19]
  wire [50:0] _T_29 = sign_4 ? 51'h7ffffffffffff : 51'h0; // @[Bitwise.scala 77:12]
  wire [63:0] _T_30 = {_T_29,io_in_bits_Inst[31],io_in_bits_Inst[7],io_in_bits_Inst[30:25],io_in_bits_Inst[11:8],1'h0}; // @[Cat.scala 33:92]
  wire [63:0] _imm_T_5 = _srctype1_T ? _T_3 : 64'h0; // @[Mux.scala 27:73]
  wire [63:0] _imm_T_6 = _srctype1_T_4 ? _T_10 : 64'h0; // @[Mux.scala 27:73]
  wire [63:0] _imm_T_7 = _srctype1_T_5 ? _T_16 : 64'h0; // @[Mux.scala 27:73]
  wire [63:0] _imm_T_8 = _srctype1_T_2 ? _T_22 : 64'h0; // @[Mux.scala 27:73]
  wire [63:0] _imm_T_9 = _srctype1_T_3 ? _T_30 : 64'h0; // @[Mux.scala 27:73]
  wire [63:0] _imm_T_10 = _imm_T_5 | _imm_T_6; // @[Mux.scala 27:73]
  wire [63:0] _imm_T_11 = _imm_T_10 | _imm_T_7; // @[Mux.scala 27:73]
  wire [63:0] _imm_T_12 = _imm_T_11 | _imm_T_8; // @[Mux.scala 27:73]
  wire [63:0] imm = _imm_T_12 | _imm_T_9; // @[Mux.scala 27:73]
  wire  stall_req = io_ex_is_mem & io_ex_reg_rfWen & (io_ex_reg_rfDest == rs | io_ex_reg_rfDest == rt); // @[ID.scala 112:50]
  assign io_out_valid = io_in_valid & ~stall_req; // @[ID.scala 114:35]
  assign io_out_bits_ctrl_signal_src1Type = {{1'd0}, srctype1}; // @[ID.scala 90:36]
  assign io_out_bits_ctrl_signal_src2Type = {{2'd0}, srctype2}; // @[ID.scala 91:36]
  assign io_out_bits_ctrl_signal_fuType = _Inst_decode_T_1 ? 3'h0 : _Inst_decode_T_253; // @[Lookup.scala 34:39]
  assign io_out_bits_ctrl_signal_inst_valid = Inst_decode_2 == 7'h0 | io_flush | ~io_in_valid ? 1'h0 : 1'h1; // @[ID.scala 92:44]
  assign io_out_bits_ctrl_signal_rfSrc1 = io_in_bits_Inst[19:15]; // @[ID.scala 54:38]
  assign io_out_bits_ctrl_signal_rfSrc2 = io_in_bits_Inst[24:20]; // @[ID.scala 54:63]
  assign io_out_bits_ctrl_signal_rfWen = io_in_valid & Inst_decode_3; // @[ID.scala 87:39]
  assign io_out_bits_ctrl_signal_aluoptype = _Inst_decode_T_1 ? 7'h40 : _Inst_decode_T_316; // @[Lookup.scala 34:39]
  assign io_out_bits_ctrl_signal_rfDest = io_in_bits_Inst[11:7]; // @[ID.scala 54:88]
  assign io_out_bits_ctrl_signal_ertn_flush = Inst_decode_2 == 7'h18; // @[ID.scala 94:51]
  assign io_out_bits_ctrl_signal_excp_flush = Inst_decode_2 == 7'h17; // @[ID.scala 95:51]
  assign io_out_bits_ctrl_data_src1 = io_REG1; // @[ID.scala 108:30]
  assign io_out_bits_ctrl_data_src2 = io_REG2; // @[ID.scala 109:30]
  assign io_out_bits_ctrl_data_Imm = _imm_T_12 | _imm_T_9; // @[Mux.scala 27:73]
  assign io_out_bits_ctrl_flow_PC = io_in_bits_PC; // @[ID.scala 97:28]
  assign io_out_bits_ctrl_flow_inst = io_in_bits_Inst; // @[ID.scala 98:30]
  assign io_out_bits_ctrl_csr_csr_idx = imm[11:0]; // @[ID.scala 104:38]
endmodule
module ysyx_22050321_Partial_product(
  input  [2:0]   io_y_3,
  input  [131:0] io_x,
  output [131:0] io_p,
  output         io_c
);
  wire  _io_p_T = io_y_3 == 3'h0; // @[MUL.scala 27:13]
  wire  _io_p_T_1 = io_y_3 == 3'h1; // @[MUL.scala 28:13]
  wire  _io_p_T_2 = io_y_3 == 3'h2; // @[MUL.scala 29:13]
  wire  _io_p_T_3 = io_y_3 == 3'h3; // @[MUL.scala 30:13]
  wire [132:0] _io_p_T_4 = {io_x, 1'h0}; // @[MUL.scala 30:36]
  wire  _io_p_T_5 = io_y_3 == 3'h4; // @[MUL.scala 31:13]
  wire [132:0] _io_p_T_7 = ~_io_p_T_4; // @[MUL.scala 31:31]
  wire  _io_p_T_8 = io_y_3 == 3'h5; // @[MUL.scala 32:13]
  wire [131:0] _io_p_T_9 = ~io_x; // @[MUL.scala 32:32]
  wire  _io_p_T_10 = io_y_3 == 3'h6; // @[MUL.scala 33:13]
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
  assign io_p = _io_p_T_20[131:0]; // @[MUL.scala 26:8]
  assign io_c = _io_p_T ? 1'h0 : _io_c_T_14; // @[Mux.scala 101:16]
endmodule
module ysyx_22050321_Booth_MUL(
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
  wire [2:0] partial_io_y_3; // @[MUL.scala 172:23]
  wire [131:0] partial_io_x; // @[MUL.scala 172:23]
  wire [131:0] partial_io_p; // @[MUL.scala 172:23]
  wire  partial_io_c; // @[MUL.scala 172:23]
  reg [65:0] multiplier; // @[MUL.scala 168:27]
  reg [131:0] multiplicand; // @[MUL.scala 169:29]
  reg [131:0] p; // @[MUL.scala 170:18]
  reg [6:0] count; // @[MUL.scala 171:22]
  wire [6:0] _count_T_5 = count + 7'h2; // @[MUL.scala 184:81]
  wire [65:0] _multiplier_T = {1'h0,io_in_bits_ctrl_data_src2,1'h0}; // @[Cat.scala 33:92]
  wire [131:0] _multiplicand_T_1 = {1'h0,1'h0,io_in_bits_ctrl_data_src1,66'h0}; // @[Cat.scala 33:92]
  wire [131:0] _temp_T_1 = p + partial_io_p; // @[MUL.scala 192:18]
  wire [131:0] _GEN_6 = {{131'd0}, partial_io_c}; // @[MUL.scala 192:28]
  wire [131:0] temp = _temp_T_1 + _GEN_6; // @[MUL.scala 192:28]
  wire  p_sign = temp[131]; // @[util.scala 11:19]
  wire [1:0] _p_T_2 = p_sign ? 2'h3 : 2'h0; // @[Bitwise.scala 77:12]
  wire [131:0] _p_T_3 = {_p_T_2,temp[131:2]}; // @[Cat.scala 33:92]
  ysyx_22050321_Partial_product partial ( // @[MUL.scala 172:23]
    .io_y_3(partial_io_y_3),
    .io_x(partial_io_x),
    .io_p(partial_io_p),
    .io_c(partial_io_c)
  );
  assign io_out_valid = count == 7'h44; // @[MUL.scala 201:93]
  assign io_out_bits_result_result_lo = p[63:0]; // @[MUL.scala 204:36]
  assign partial_io_y_3 = multiplier[2:0]; // @[MUL.scala 198:31]
  assign partial_io_x = multiplicand; // @[MUL.scala 199:16]
  always @(posedge clock) begin
    if (reset) begin // @[MUL.scala 168:27]
      multiplier <= 66'h0; // @[MUL.scala 168:27]
    end else if (io_in_valid) begin // @[MUL.scala 185:51]
      if (count == 7'h0) begin // @[MUL.scala 186:25]
        multiplier <= _multiplier_T; // @[MUL.scala 187:18]
      end else begin
        multiplier <= {{2'd0}, multiplier[65:2]}; // @[MUL.scala 194:18]
      end
    end
    if (reset) begin // @[MUL.scala 169:29]
      multiplicand <= 132'h0; // @[MUL.scala 169:29]
    end else if (io_in_valid) begin // @[MUL.scala 185:51]
      if (count == 7'h0) begin // @[MUL.scala 186:25]
        multiplicand <= _multiplicand_T_1; // @[MUL.scala 188:20]
      end
    end
    if (reset) begin // @[MUL.scala 170:18]
      p <= 132'h0; // @[MUL.scala 170:18]
    end else if (io_in_valid) begin // @[MUL.scala 185:51]
      if (count == 7'h0) begin // @[MUL.scala 186:25]
        p <= 132'h0; // @[MUL.scala 189:9]
      end else begin
        p <= _p_T_3; // @[MUL.scala 193:9]
      end
    end
    if (reset) begin // @[MUL.scala 171:22]
      count <= 7'h0; // @[MUL.scala 171:22]
    end else if (io_in_valid & ~io_out_valid) begin // @[MUL.scala 184:15]
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
module ysyx_22050321_MUL(
  input         clock,
  input         reset,
  input         io_in_valid,
  input  [63:0] io_in_bits_ctrl_data_src1,
  input  [63:0] io_in_bits_ctrl_data_src2,
  output        io_out_valid,
  output [63:0] io_out_bits_result_result_lo
);
  wire  mult_clock; // @[MUL.scala 349:24]
  wire  mult_reset; // @[MUL.scala 349:24]
  wire  mult_io_in_valid; // @[MUL.scala 349:24]
  wire [63:0] mult_io_in_bits_ctrl_data_src1; // @[MUL.scala 349:24]
  wire [63:0] mult_io_in_bits_ctrl_data_src2; // @[MUL.scala 349:24]
  wire  mult_io_out_valid; // @[MUL.scala 349:24]
  wire [63:0] mult_io_out_bits_result_result_lo; // @[MUL.scala 349:24]
  ysyx_22050321_Booth_MUL mult ( // @[MUL.scala 349:24]
    .clock(mult_clock),
    .reset(mult_reset),
    .io_in_valid(mult_io_in_valid),
    .io_in_bits_ctrl_data_src1(mult_io_in_bits_ctrl_data_src1),
    .io_in_bits_ctrl_data_src2(mult_io_in_bits_ctrl_data_src2),
    .io_out_valid(mult_io_out_valid),
    .io_out_bits_result_result_lo(mult_io_out_bits_result_result_lo)
  );
  assign io_out_valid = mult_io_out_valid; // @[MUL.scala 351:14]
  assign io_out_bits_result_result_lo = mult_io_out_bits_result_result_lo; // @[MUL.scala 351:14]
  assign mult_clock = clock;
  assign mult_reset = reset;
  assign mult_io_in_valid = io_in_valid; // @[MUL.scala 350:13]
  assign mult_io_in_bits_ctrl_data_src1 = io_in_bits_ctrl_data_src1; // @[MUL.scala 350:13]
  assign mult_io_in_bits_ctrl_data_src2 = io_in_bits_ctrl_data_src2; // @[MUL.scala 350:13]
endmodule
module ysyx_22050321_Radix2Div(
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
  reg [31:0] _RAND_0;
  reg [159:0] _RAND_1;
  reg [95:0] _RAND_2;
  reg [63:0] _RAND_3;
  reg [31:0] _RAND_4;
`endif // RANDOMIZE_REG_INIT
  reg [2:0] state; // @[DIV.scala 173:22]
  wire  NewReq = state == 3'h0 & io_in_valid; // @[DIV.scala 174:35]
  reg [128:0] shiftReg; // @[DIV.scala 176:21]
  wire [64:0] hi = shiftReg[128:64]; // @[DIV.scala 177:20]
  wire [63:0] lo = shiftReg[63:0]; // @[DIV.scala 178:20]
  wire  aSign = io_in_bits_ctrl_data_src1[63] & io_in_bits_ctrl_flow_div_signed; // @[DIV.scala 168:26]
  wire [63:0] _T_1 = 64'h0 - io_in_bits_ctrl_data_src1; // @[DIV.scala 169:14]
  wire [63:0] aVal = aSign ? _T_1 : io_in_bits_ctrl_data_src1; // @[DIV.scala 169:11]
  wire  bSign = io_in_bits_ctrl_data_src2[63] & io_in_bits_ctrl_flow_div_signed; // @[DIV.scala 168:26]
  wire [63:0] _T_3 = 64'h0 - io_in_bits_ctrl_data_src2; // @[DIV.scala 169:14]
  wire  qSign = aSign ^ bSign; // @[DIV.scala 182:21]
  wire [64:0] _aValx2Reg_T = {aVal,1'h0}; // @[Cat.scala 33:92]
  reg [64:0] aValx2Reg; // @[Reg.scala 19:16]
  reg [63:0] bValReg; // @[Reg.scala 19:16]
  reg [5:0] cnt_value; // @[Counter.scala 61:40]
  wire [31:0] cntShift_hi = bValReg[63:32]; // @[CircuitMath.scala 33:17]
  wire [31:0] cntShift_lo = bValReg[31:0]; // @[CircuitMath.scala 34:17]
  wire  cntShift_useHi = |cntShift_hi; // @[CircuitMath.scala 35:22]
  wire [15:0] cntShift_hi_1 = cntShift_hi[31:16]; // @[CircuitMath.scala 33:17]
  wire [15:0] cntShift_lo_1 = cntShift_hi[15:0]; // @[CircuitMath.scala 34:17]
  wire  cntShift_useHi_1 = |cntShift_hi_1; // @[CircuitMath.scala 35:22]
  wire [7:0] cntShift_hi_2 = cntShift_hi_1[15:8]; // @[CircuitMath.scala 33:17]
  wire [7:0] cntShift_lo_2 = cntShift_hi_1[7:0]; // @[CircuitMath.scala 34:17]
  wire  cntShift_useHi_2 = |cntShift_hi_2; // @[CircuitMath.scala 35:22]
  wire [3:0] cntShift_hi_3 = cntShift_hi_2[7:4]; // @[CircuitMath.scala 33:17]
  wire [3:0] cntShift_lo_3 = cntShift_hi_2[3:0]; // @[CircuitMath.scala 34:17]
  wire  cntShift_useHi_3 = |cntShift_hi_3; // @[CircuitMath.scala 35:22]
  wire [1:0] _cntShift_T_3 = cntShift_hi_3[2] ? 2'h2 : {{1'd0}, cntShift_hi_3[1]}; // @[CircuitMath.scala 30:10]
  wire [1:0] _cntShift_T_4 = cntShift_hi_3[3] ? 2'h3 : _cntShift_T_3; // @[CircuitMath.scala 30:10]
  wire [1:0] _cntShift_T_8 = cntShift_lo_3[2] ? 2'h2 : {{1'd0}, cntShift_lo_3[1]}; // @[CircuitMath.scala 30:10]
  wire [1:0] _cntShift_T_9 = cntShift_lo_3[3] ? 2'h3 : _cntShift_T_8; // @[CircuitMath.scala 30:10]
  wire [1:0] _cntShift_T_10 = cntShift_useHi_3 ? _cntShift_T_4 : _cntShift_T_9; // @[CircuitMath.scala 36:21]
  wire [2:0] _cntShift_T_11 = {cntShift_useHi_3,_cntShift_T_10}; // @[Cat.scala 33:92]
  wire [3:0] cntShift_hi_4 = cntShift_lo_2[7:4]; // @[CircuitMath.scala 33:17]
  wire [3:0] cntShift_lo_4 = cntShift_lo_2[3:0]; // @[CircuitMath.scala 34:17]
  wire  cntShift_useHi_4 = |cntShift_hi_4; // @[CircuitMath.scala 35:22]
  wire [1:0] _cntShift_T_15 = cntShift_hi_4[2] ? 2'h2 : {{1'd0}, cntShift_hi_4[1]}; // @[CircuitMath.scala 30:10]
  wire [1:0] _cntShift_T_16 = cntShift_hi_4[3] ? 2'h3 : _cntShift_T_15; // @[CircuitMath.scala 30:10]
  wire [1:0] _cntShift_T_20 = cntShift_lo_4[2] ? 2'h2 : {{1'd0}, cntShift_lo_4[1]}; // @[CircuitMath.scala 30:10]
  wire [1:0] _cntShift_T_21 = cntShift_lo_4[3] ? 2'h3 : _cntShift_T_20; // @[CircuitMath.scala 30:10]
  wire [1:0] _cntShift_T_22 = cntShift_useHi_4 ? _cntShift_T_16 : _cntShift_T_21; // @[CircuitMath.scala 36:21]
  wire [2:0] _cntShift_T_23 = {cntShift_useHi_4,_cntShift_T_22}; // @[Cat.scala 33:92]
  wire [2:0] _cntShift_T_24 = cntShift_useHi_2 ? _cntShift_T_11 : _cntShift_T_23; // @[CircuitMath.scala 36:21]
  wire [3:0] _cntShift_T_25 = {cntShift_useHi_2,_cntShift_T_24}; // @[Cat.scala 33:92]
  wire [7:0] cntShift_hi_5 = cntShift_lo_1[15:8]; // @[CircuitMath.scala 33:17]
  wire [7:0] cntShift_lo_5 = cntShift_lo_1[7:0]; // @[CircuitMath.scala 34:17]
  wire  cntShift_useHi_5 = |cntShift_hi_5; // @[CircuitMath.scala 35:22]
  wire [3:0] cntShift_hi_6 = cntShift_hi_5[7:4]; // @[CircuitMath.scala 33:17]
  wire [3:0] cntShift_lo_6 = cntShift_hi_5[3:0]; // @[CircuitMath.scala 34:17]
  wire  cntShift_useHi_6 = |cntShift_hi_6; // @[CircuitMath.scala 35:22]
  wire [1:0] _cntShift_T_29 = cntShift_hi_6[2] ? 2'h2 : {{1'd0}, cntShift_hi_6[1]}; // @[CircuitMath.scala 30:10]
  wire [1:0] _cntShift_T_30 = cntShift_hi_6[3] ? 2'h3 : _cntShift_T_29; // @[CircuitMath.scala 30:10]
  wire [1:0] _cntShift_T_34 = cntShift_lo_6[2] ? 2'h2 : {{1'd0}, cntShift_lo_6[1]}; // @[CircuitMath.scala 30:10]
  wire [1:0] _cntShift_T_35 = cntShift_lo_6[3] ? 2'h3 : _cntShift_T_34; // @[CircuitMath.scala 30:10]
  wire [1:0] _cntShift_T_36 = cntShift_useHi_6 ? _cntShift_T_30 : _cntShift_T_35; // @[CircuitMath.scala 36:21]
  wire [2:0] _cntShift_T_37 = {cntShift_useHi_6,_cntShift_T_36}; // @[Cat.scala 33:92]
  wire [3:0] cntShift_hi_7 = cntShift_lo_5[7:4]; // @[CircuitMath.scala 33:17]
  wire [3:0] cntShift_lo_7 = cntShift_lo_5[3:0]; // @[CircuitMath.scala 34:17]
  wire  cntShift_useHi_7 = |cntShift_hi_7; // @[CircuitMath.scala 35:22]
  wire [1:0] _cntShift_T_41 = cntShift_hi_7[2] ? 2'h2 : {{1'd0}, cntShift_hi_7[1]}; // @[CircuitMath.scala 30:10]
  wire [1:0] _cntShift_T_42 = cntShift_hi_7[3] ? 2'h3 : _cntShift_T_41; // @[CircuitMath.scala 30:10]
  wire [1:0] _cntShift_T_46 = cntShift_lo_7[2] ? 2'h2 : {{1'd0}, cntShift_lo_7[1]}; // @[CircuitMath.scala 30:10]
  wire [1:0] _cntShift_T_47 = cntShift_lo_7[3] ? 2'h3 : _cntShift_T_46; // @[CircuitMath.scala 30:10]
  wire [1:0] _cntShift_T_48 = cntShift_useHi_7 ? _cntShift_T_42 : _cntShift_T_47; // @[CircuitMath.scala 36:21]
  wire [2:0] _cntShift_T_49 = {cntShift_useHi_7,_cntShift_T_48}; // @[Cat.scala 33:92]
  wire [2:0] _cntShift_T_50 = cntShift_useHi_5 ? _cntShift_T_37 : _cntShift_T_49; // @[CircuitMath.scala 36:21]
  wire [3:0] _cntShift_T_51 = {cntShift_useHi_5,_cntShift_T_50}; // @[Cat.scala 33:92]
  wire [3:0] _cntShift_T_52 = cntShift_useHi_1 ? _cntShift_T_25 : _cntShift_T_51; // @[CircuitMath.scala 36:21]
  wire [4:0] _cntShift_T_53 = {cntShift_useHi_1,_cntShift_T_52}; // @[Cat.scala 33:92]
  wire [15:0] cntShift_hi_8 = cntShift_lo[31:16]; // @[CircuitMath.scala 33:17]
  wire [15:0] cntShift_lo_8 = cntShift_lo[15:0]; // @[CircuitMath.scala 34:17]
  wire  cntShift_useHi_8 = |cntShift_hi_8; // @[CircuitMath.scala 35:22]
  wire [7:0] cntShift_hi_9 = cntShift_hi_8[15:8]; // @[CircuitMath.scala 33:17]
  wire [7:0] cntShift_lo_9 = cntShift_hi_8[7:0]; // @[CircuitMath.scala 34:17]
  wire  cntShift_useHi_9 = |cntShift_hi_9; // @[CircuitMath.scala 35:22]
  wire [3:0] cntShift_hi_10 = cntShift_hi_9[7:4]; // @[CircuitMath.scala 33:17]
  wire [3:0] cntShift_lo_10 = cntShift_hi_9[3:0]; // @[CircuitMath.scala 34:17]
  wire  cntShift_useHi_10 = |cntShift_hi_10; // @[CircuitMath.scala 35:22]
  wire [1:0] _cntShift_T_57 = cntShift_hi_10[2] ? 2'h2 : {{1'd0}, cntShift_hi_10[1]}; // @[CircuitMath.scala 30:10]
  wire [1:0] _cntShift_T_58 = cntShift_hi_10[3] ? 2'h3 : _cntShift_T_57; // @[CircuitMath.scala 30:10]
  wire [1:0] _cntShift_T_62 = cntShift_lo_10[2] ? 2'h2 : {{1'd0}, cntShift_lo_10[1]}; // @[CircuitMath.scala 30:10]
  wire [1:0] _cntShift_T_63 = cntShift_lo_10[3] ? 2'h3 : _cntShift_T_62; // @[CircuitMath.scala 30:10]
  wire [1:0] _cntShift_T_64 = cntShift_useHi_10 ? _cntShift_T_58 : _cntShift_T_63; // @[CircuitMath.scala 36:21]
  wire [2:0] _cntShift_T_65 = {cntShift_useHi_10,_cntShift_T_64}; // @[Cat.scala 33:92]
  wire [3:0] cntShift_hi_11 = cntShift_lo_9[7:4]; // @[CircuitMath.scala 33:17]
  wire [3:0] cntShift_lo_11 = cntShift_lo_9[3:0]; // @[CircuitMath.scala 34:17]
  wire  cntShift_useHi_11 = |cntShift_hi_11; // @[CircuitMath.scala 35:22]
  wire [1:0] _cntShift_T_69 = cntShift_hi_11[2] ? 2'h2 : {{1'd0}, cntShift_hi_11[1]}; // @[CircuitMath.scala 30:10]
  wire [1:0] _cntShift_T_70 = cntShift_hi_11[3] ? 2'h3 : _cntShift_T_69; // @[CircuitMath.scala 30:10]
  wire [1:0] _cntShift_T_74 = cntShift_lo_11[2] ? 2'h2 : {{1'd0}, cntShift_lo_11[1]}; // @[CircuitMath.scala 30:10]
  wire [1:0] _cntShift_T_75 = cntShift_lo_11[3] ? 2'h3 : _cntShift_T_74; // @[CircuitMath.scala 30:10]
  wire [1:0] _cntShift_T_76 = cntShift_useHi_11 ? _cntShift_T_70 : _cntShift_T_75; // @[CircuitMath.scala 36:21]
  wire [2:0] _cntShift_T_77 = {cntShift_useHi_11,_cntShift_T_76}; // @[Cat.scala 33:92]
  wire [2:0] _cntShift_T_78 = cntShift_useHi_9 ? _cntShift_T_65 : _cntShift_T_77; // @[CircuitMath.scala 36:21]
  wire [3:0] _cntShift_T_79 = {cntShift_useHi_9,_cntShift_T_78}; // @[Cat.scala 33:92]
  wire [7:0] cntShift_hi_12 = cntShift_lo_8[15:8]; // @[CircuitMath.scala 33:17]
  wire [7:0] cntShift_lo_12 = cntShift_lo_8[7:0]; // @[CircuitMath.scala 34:17]
  wire  cntShift_useHi_12 = |cntShift_hi_12; // @[CircuitMath.scala 35:22]
  wire [3:0] cntShift_hi_13 = cntShift_hi_12[7:4]; // @[CircuitMath.scala 33:17]
  wire [3:0] cntShift_lo_13 = cntShift_hi_12[3:0]; // @[CircuitMath.scala 34:17]
  wire  cntShift_useHi_13 = |cntShift_hi_13; // @[CircuitMath.scala 35:22]
  wire [1:0] _cntShift_T_83 = cntShift_hi_13[2] ? 2'h2 : {{1'd0}, cntShift_hi_13[1]}; // @[CircuitMath.scala 30:10]
  wire [1:0] _cntShift_T_84 = cntShift_hi_13[3] ? 2'h3 : _cntShift_T_83; // @[CircuitMath.scala 30:10]
  wire [1:0] _cntShift_T_88 = cntShift_lo_13[2] ? 2'h2 : {{1'd0}, cntShift_lo_13[1]}; // @[CircuitMath.scala 30:10]
  wire [1:0] _cntShift_T_89 = cntShift_lo_13[3] ? 2'h3 : _cntShift_T_88; // @[CircuitMath.scala 30:10]
  wire [1:0] _cntShift_T_90 = cntShift_useHi_13 ? _cntShift_T_84 : _cntShift_T_89; // @[CircuitMath.scala 36:21]
  wire [2:0] _cntShift_T_91 = {cntShift_useHi_13,_cntShift_T_90}; // @[Cat.scala 33:92]
  wire [3:0] cntShift_hi_14 = cntShift_lo_12[7:4]; // @[CircuitMath.scala 33:17]
  wire [3:0] cntShift_lo_14 = cntShift_lo_12[3:0]; // @[CircuitMath.scala 34:17]
  wire  cntShift_useHi_14 = |cntShift_hi_14; // @[CircuitMath.scala 35:22]
  wire [1:0] _cntShift_T_95 = cntShift_hi_14[2] ? 2'h2 : {{1'd0}, cntShift_hi_14[1]}; // @[CircuitMath.scala 30:10]
  wire [1:0] _cntShift_T_96 = cntShift_hi_14[3] ? 2'h3 : _cntShift_T_95; // @[CircuitMath.scala 30:10]
  wire [1:0] _cntShift_T_100 = cntShift_lo_14[2] ? 2'h2 : {{1'd0}, cntShift_lo_14[1]}; // @[CircuitMath.scala 30:10]
  wire [1:0] _cntShift_T_101 = cntShift_lo_14[3] ? 2'h3 : _cntShift_T_100; // @[CircuitMath.scala 30:10]
  wire [1:0] _cntShift_T_102 = cntShift_useHi_14 ? _cntShift_T_96 : _cntShift_T_101; // @[CircuitMath.scala 36:21]
  wire [2:0] _cntShift_T_103 = {cntShift_useHi_14,_cntShift_T_102}; // @[Cat.scala 33:92]
  wire [2:0] _cntShift_T_104 = cntShift_useHi_12 ? _cntShift_T_91 : _cntShift_T_103; // @[CircuitMath.scala 36:21]
  wire [3:0] _cntShift_T_105 = {cntShift_useHi_12,_cntShift_T_104}; // @[Cat.scala 33:92]
  wire [3:0] _cntShift_T_106 = cntShift_useHi_8 ? _cntShift_T_79 : _cntShift_T_105; // @[CircuitMath.scala 36:21]
  wire [4:0] _cntShift_T_107 = {cntShift_useHi_8,_cntShift_T_106}; // @[Cat.scala 33:92]
  wire [4:0] _cntShift_T_108 = cntShift_useHi ? _cntShift_T_53 : _cntShift_T_107; // @[CircuitMath.scala 36:21]
  wire [5:0] _cntShift_T_109 = {cntShift_useHi,_cntShift_T_108}; // @[Cat.scala 33:92]
  wire [6:0] _GEN_17 = {{1'd0}, _cntShift_T_109}; // @[DIV.scala 193:26]
  wire [6:0] _cntShift_T_110 = 7'h40 | _GEN_17; // @[DIV.scala 193:26]
  wire  cntShift_hi_15 = aValx2Reg[64]; // @[CircuitMath.scala 33:17]
  wire [63:0] cntShift_lo_15 = aValx2Reg[63:0]; // @[CircuitMath.scala 34:17]
  wire  cntShift_useHi_15 = |cntShift_hi_15; // @[CircuitMath.scala 35:22]
  wire [31:0] cntShift_hi_16 = cntShift_lo_15[63:32]; // @[CircuitMath.scala 33:17]
  wire [31:0] cntShift_lo_16 = cntShift_lo_15[31:0]; // @[CircuitMath.scala 34:17]
  wire  cntShift_useHi_16 = |cntShift_hi_16; // @[CircuitMath.scala 35:22]
  wire [15:0] cntShift_hi_17 = cntShift_hi_16[31:16]; // @[CircuitMath.scala 33:17]
  wire [15:0] cntShift_lo_17 = cntShift_hi_16[15:0]; // @[CircuitMath.scala 34:17]
  wire  cntShift_useHi_17 = |cntShift_hi_17; // @[CircuitMath.scala 35:22]
  wire [7:0] cntShift_hi_18 = cntShift_hi_17[15:8]; // @[CircuitMath.scala 33:17]
  wire [7:0] cntShift_lo_18 = cntShift_hi_17[7:0]; // @[CircuitMath.scala 34:17]
  wire  cntShift_useHi_18 = |cntShift_hi_18; // @[CircuitMath.scala 35:22]
  wire [3:0] cntShift_hi_19 = cntShift_hi_18[7:4]; // @[CircuitMath.scala 33:17]
  wire [3:0] cntShift_lo_19 = cntShift_hi_18[3:0]; // @[CircuitMath.scala 34:17]
  wire  cntShift_useHi_19 = |cntShift_hi_19; // @[CircuitMath.scala 35:22]
  wire [1:0] _cntShift_T_114 = cntShift_hi_19[2] ? 2'h2 : {{1'd0}, cntShift_hi_19[1]}; // @[CircuitMath.scala 30:10]
  wire [1:0] _cntShift_T_115 = cntShift_hi_19[3] ? 2'h3 : _cntShift_T_114; // @[CircuitMath.scala 30:10]
  wire [1:0] _cntShift_T_119 = cntShift_lo_19[2] ? 2'h2 : {{1'd0}, cntShift_lo_19[1]}; // @[CircuitMath.scala 30:10]
  wire [1:0] _cntShift_T_120 = cntShift_lo_19[3] ? 2'h3 : _cntShift_T_119; // @[CircuitMath.scala 30:10]
  wire [1:0] _cntShift_T_121 = cntShift_useHi_19 ? _cntShift_T_115 : _cntShift_T_120; // @[CircuitMath.scala 36:21]
  wire [2:0] _cntShift_T_122 = {cntShift_useHi_19,_cntShift_T_121}; // @[Cat.scala 33:92]
  wire [3:0] cntShift_hi_20 = cntShift_lo_18[7:4]; // @[CircuitMath.scala 33:17]
  wire [3:0] cntShift_lo_20 = cntShift_lo_18[3:0]; // @[CircuitMath.scala 34:17]
  wire  cntShift_useHi_20 = |cntShift_hi_20; // @[CircuitMath.scala 35:22]
  wire [1:0] _cntShift_T_126 = cntShift_hi_20[2] ? 2'h2 : {{1'd0}, cntShift_hi_20[1]}; // @[CircuitMath.scala 30:10]
  wire [1:0] _cntShift_T_127 = cntShift_hi_20[3] ? 2'h3 : _cntShift_T_126; // @[CircuitMath.scala 30:10]
  wire [1:0] _cntShift_T_131 = cntShift_lo_20[2] ? 2'h2 : {{1'd0}, cntShift_lo_20[1]}; // @[CircuitMath.scala 30:10]
  wire [1:0] _cntShift_T_132 = cntShift_lo_20[3] ? 2'h3 : _cntShift_T_131; // @[CircuitMath.scala 30:10]
  wire [1:0] _cntShift_T_133 = cntShift_useHi_20 ? _cntShift_T_127 : _cntShift_T_132; // @[CircuitMath.scala 36:21]
  wire [2:0] _cntShift_T_134 = {cntShift_useHi_20,_cntShift_T_133}; // @[Cat.scala 33:92]
  wire [2:0] _cntShift_T_135 = cntShift_useHi_18 ? _cntShift_T_122 : _cntShift_T_134; // @[CircuitMath.scala 36:21]
  wire [3:0] _cntShift_T_136 = {cntShift_useHi_18,_cntShift_T_135}; // @[Cat.scala 33:92]
  wire [7:0] cntShift_hi_21 = cntShift_lo_17[15:8]; // @[CircuitMath.scala 33:17]
  wire [7:0] cntShift_lo_21 = cntShift_lo_17[7:0]; // @[CircuitMath.scala 34:17]
  wire  cntShift_useHi_21 = |cntShift_hi_21; // @[CircuitMath.scala 35:22]
  wire [3:0] cntShift_hi_22 = cntShift_hi_21[7:4]; // @[CircuitMath.scala 33:17]
  wire [3:0] cntShift_lo_22 = cntShift_hi_21[3:0]; // @[CircuitMath.scala 34:17]
  wire  cntShift_useHi_22 = |cntShift_hi_22; // @[CircuitMath.scala 35:22]
  wire [1:0] _cntShift_T_140 = cntShift_hi_22[2] ? 2'h2 : {{1'd0}, cntShift_hi_22[1]}; // @[CircuitMath.scala 30:10]
  wire [1:0] _cntShift_T_141 = cntShift_hi_22[3] ? 2'h3 : _cntShift_T_140; // @[CircuitMath.scala 30:10]
  wire [1:0] _cntShift_T_145 = cntShift_lo_22[2] ? 2'h2 : {{1'd0}, cntShift_lo_22[1]}; // @[CircuitMath.scala 30:10]
  wire [1:0] _cntShift_T_146 = cntShift_lo_22[3] ? 2'h3 : _cntShift_T_145; // @[CircuitMath.scala 30:10]
  wire [1:0] _cntShift_T_147 = cntShift_useHi_22 ? _cntShift_T_141 : _cntShift_T_146; // @[CircuitMath.scala 36:21]
  wire [2:0] _cntShift_T_148 = {cntShift_useHi_22,_cntShift_T_147}; // @[Cat.scala 33:92]
  wire [3:0] cntShift_hi_23 = cntShift_lo_21[7:4]; // @[CircuitMath.scala 33:17]
  wire [3:0] cntShift_lo_23 = cntShift_lo_21[3:0]; // @[CircuitMath.scala 34:17]
  wire  cntShift_useHi_23 = |cntShift_hi_23; // @[CircuitMath.scala 35:22]
  wire [1:0] _cntShift_T_152 = cntShift_hi_23[2] ? 2'h2 : {{1'd0}, cntShift_hi_23[1]}; // @[CircuitMath.scala 30:10]
  wire [1:0] _cntShift_T_153 = cntShift_hi_23[3] ? 2'h3 : _cntShift_T_152; // @[CircuitMath.scala 30:10]
  wire [1:0] _cntShift_T_157 = cntShift_lo_23[2] ? 2'h2 : {{1'd0}, cntShift_lo_23[1]}; // @[CircuitMath.scala 30:10]
  wire [1:0] _cntShift_T_158 = cntShift_lo_23[3] ? 2'h3 : _cntShift_T_157; // @[CircuitMath.scala 30:10]
  wire [1:0] _cntShift_T_159 = cntShift_useHi_23 ? _cntShift_T_153 : _cntShift_T_158; // @[CircuitMath.scala 36:21]
  wire [2:0] _cntShift_T_160 = {cntShift_useHi_23,_cntShift_T_159}; // @[Cat.scala 33:92]
  wire [2:0] _cntShift_T_161 = cntShift_useHi_21 ? _cntShift_T_148 : _cntShift_T_160; // @[CircuitMath.scala 36:21]
  wire [3:0] _cntShift_T_162 = {cntShift_useHi_21,_cntShift_T_161}; // @[Cat.scala 33:92]
  wire [3:0] _cntShift_T_163 = cntShift_useHi_17 ? _cntShift_T_136 : _cntShift_T_162; // @[CircuitMath.scala 36:21]
  wire [4:0] _cntShift_T_164 = {cntShift_useHi_17,_cntShift_T_163}; // @[Cat.scala 33:92]
  wire [15:0] cntShift_hi_24 = cntShift_lo_16[31:16]; // @[CircuitMath.scala 33:17]
  wire [15:0] cntShift_lo_24 = cntShift_lo_16[15:0]; // @[CircuitMath.scala 34:17]
  wire  cntShift_useHi_24 = |cntShift_hi_24; // @[CircuitMath.scala 35:22]
  wire [7:0] cntShift_hi_25 = cntShift_hi_24[15:8]; // @[CircuitMath.scala 33:17]
  wire [7:0] cntShift_lo_25 = cntShift_hi_24[7:0]; // @[CircuitMath.scala 34:17]
  wire  cntShift_useHi_25 = |cntShift_hi_25; // @[CircuitMath.scala 35:22]
  wire [3:0] cntShift_hi_26 = cntShift_hi_25[7:4]; // @[CircuitMath.scala 33:17]
  wire [3:0] cntShift_lo_26 = cntShift_hi_25[3:0]; // @[CircuitMath.scala 34:17]
  wire  cntShift_useHi_26 = |cntShift_hi_26; // @[CircuitMath.scala 35:22]
  wire [1:0] _cntShift_T_168 = cntShift_hi_26[2] ? 2'h2 : {{1'd0}, cntShift_hi_26[1]}; // @[CircuitMath.scala 30:10]
  wire [1:0] _cntShift_T_169 = cntShift_hi_26[3] ? 2'h3 : _cntShift_T_168; // @[CircuitMath.scala 30:10]
  wire [1:0] _cntShift_T_173 = cntShift_lo_26[2] ? 2'h2 : {{1'd0}, cntShift_lo_26[1]}; // @[CircuitMath.scala 30:10]
  wire [1:0] _cntShift_T_174 = cntShift_lo_26[3] ? 2'h3 : _cntShift_T_173; // @[CircuitMath.scala 30:10]
  wire [1:0] _cntShift_T_175 = cntShift_useHi_26 ? _cntShift_T_169 : _cntShift_T_174; // @[CircuitMath.scala 36:21]
  wire [2:0] _cntShift_T_176 = {cntShift_useHi_26,_cntShift_T_175}; // @[Cat.scala 33:92]
  wire [3:0] cntShift_hi_27 = cntShift_lo_25[7:4]; // @[CircuitMath.scala 33:17]
  wire [3:0] cntShift_lo_27 = cntShift_lo_25[3:0]; // @[CircuitMath.scala 34:17]
  wire  cntShift_useHi_27 = |cntShift_hi_27; // @[CircuitMath.scala 35:22]
  wire [1:0] _cntShift_T_180 = cntShift_hi_27[2] ? 2'h2 : {{1'd0}, cntShift_hi_27[1]}; // @[CircuitMath.scala 30:10]
  wire [1:0] _cntShift_T_181 = cntShift_hi_27[3] ? 2'h3 : _cntShift_T_180; // @[CircuitMath.scala 30:10]
  wire [1:0] _cntShift_T_185 = cntShift_lo_27[2] ? 2'h2 : {{1'd0}, cntShift_lo_27[1]}; // @[CircuitMath.scala 30:10]
  wire [1:0] _cntShift_T_186 = cntShift_lo_27[3] ? 2'h3 : _cntShift_T_185; // @[CircuitMath.scala 30:10]
  wire [1:0] _cntShift_T_187 = cntShift_useHi_27 ? _cntShift_T_181 : _cntShift_T_186; // @[CircuitMath.scala 36:21]
  wire [2:0] _cntShift_T_188 = {cntShift_useHi_27,_cntShift_T_187}; // @[Cat.scala 33:92]
  wire [2:0] _cntShift_T_189 = cntShift_useHi_25 ? _cntShift_T_176 : _cntShift_T_188; // @[CircuitMath.scala 36:21]
  wire [3:0] _cntShift_T_190 = {cntShift_useHi_25,_cntShift_T_189}; // @[Cat.scala 33:92]
  wire [7:0] cntShift_hi_28 = cntShift_lo_24[15:8]; // @[CircuitMath.scala 33:17]
  wire [7:0] cntShift_lo_28 = cntShift_lo_24[7:0]; // @[CircuitMath.scala 34:17]
  wire  cntShift_useHi_28 = |cntShift_hi_28; // @[CircuitMath.scala 35:22]
  wire [3:0] cntShift_hi_29 = cntShift_hi_28[7:4]; // @[CircuitMath.scala 33:17]
  wire [3:0] cntShift_lo_29 = cntShift_hi_28[3:0]; // @[CircuitMath.scala 34:17]
  wire  cntShift_useHi_29 = |cntShift_hi_29; // @[CircuitMath.scala 35:22]
  wire [1:0] _cntShift_T_194 = cntShift_hi_29[2] ? 2'h2 : {{1'd0}, cntShift_hi_29[1]}; // @[CircuitMath.scala 30:10]
  wire [1:0] _cntShift_T_195 = cntShift_hi_29[3] ? 2'h3 : _cntShift_T_194; // @[CircuitMath.scala 30:10]
  wire [1:0] _cntShift_T_199 = cntShift_lo_29[2] ? 2'h2 : {{1'd0}, cntShift_lo_29[1]}; // @[CircuitMath.scala 30:10]
  wire [1:0] _cntShift_T_200 = cntShift_lo_29[3] ? 2'h3 : _cntShift_T_199; // @[CircuitMath.scala 30:10]
  wire [1:0] _cntShift_T_201 = cntShift_useHi_29 ? _cntShift_T_195 : _cntShift_T_200; // @[CircuitMath.scala 36:21]
  wire [2:0] _cntShift_T_202 = {cntShift_useHi_29,_cntShift_T_201}; // @[Cat.scala 33:92]
  wire [3:0] cntShift_hi_30 = cntShift_lo_28[7:4]; // @[CircuitMath.scala 33:17]
  wire [3:0] cntShift_lo_30 = cntShift_lo_28[3:0]; // @[CircuitMath.scala 34:17]
  wire  cntShift_useHi_30 = |cntShift_hi_30; // @[CircuitMath.scala 35:22]
  wire [1:0] _cntShift_T_206 = cntShift_hi_30[2] ? 2'h2 : {{1'd0}, cntShift_hi_30[1]}; // @[CircuitMath.scala 30:10]
  wire [1:0] _cntShift_T_207 = cntShift_hi_30[3] ? 2'h3 : _cntShift_T_206; // @[CircuitMath.scala 30:10]
  wire [1:0] _cntShift_T_211 = cntShift_lo_30[2] ? 2'h2 : {{1'd0}, cntShift_lo_30[1]}; // @[CircuitMath.scala 30:10]
  wire [1:0] _cntShift_T_212 = cntShift_lo_30[3] ? 2'h3 : _cntShift_T_211; // @[CircuitMath.scala 30:10]
  wire [1:0] _cntShift_T_213 = cntShift_useHi_30 ? _cntShift_T_207 : _cntShift_T_212; // @[CircuitMath.scala 36:21]
  wire [2:0] _cntShift_T_214 = {cntShift_useHi_30,_cntShift_T_213}; // @[Cat.scala 33:92]
  wire [2:0] _cntShift_T_215 = cntShift_useHi_28 ? _cntShift_T_202 : _cntShift_T_214; // @[CircuitMath.scala 36:21]
  wire [3:0] _cntShift_T_216 = {cntShift_useHi_28,_cntShift_T_215}; // @[Cat.scala 33:92]
  wire [3:0] _cntShift_T_217 = cntShift_useHi_24 ? _cntShift_T_190 : _cntShift_T_216; // @[CircuitMath.scala 36:21]
  wire [4:0] _cntShift_T_218 = {cntShift_useHi_24,_cntShift_T_217}; // @[Cat.scala 33:92]
  wire [4:0] _cntShift_T_219 = cntShift_useHi_16 ? _cntShift_T_164 : _cntShift_T_218; // @[CircuitMath.scala 36:21]
  wire [5:0] _cntShift_T_220 = {cntShift_useHi_16,_cntShift_T_219}; // @[Cat.scala 33:92]
  wire [5:0] _cntShift_T_221 = cntShift_useHi_15 ? 6'h0 : _cntShift_T_220; // @[CircuitMath.scala 36:21]
  wire [6:0] _cntShift_T_222 = {cntShift_useHi_15,_cntShift_T_221}; // @[Cat.scala 33:92]
  wire [6:0] cntShift = _cntShift_T_110 - _cntShift_T_222; // @[DIV.scala 193:43]
  wire [6:0] _value_T_1 = cntShift >= 7'h3f ? 7'h3f : cntShift; // @[DIV.scala 195:21]
  wire [127:0] _GEN_0 = {{63'd0}, aValx2Reg}; // @[DIV.scala 197:27]
  wire [127:0] _shiftReg_T = _GEN_0 << cnt_value; // @[DIV.scala 197:27]
  wire [64:0] _GEN_18 = {{1'd0}, bValReg}; // @[DIV.scala 200:28]
  wire  enough = hi >= _GEN_18; // @[DIV.scala 200:28]
  wire [64:0] _shiftReg_T_2 = hi - _GEN_18; // @[DIV.scala 201:36]
  wire [64:0] _shiftReg_T_3 = enough ? _shiftReg_T_2 : hi; // @[DIV.scala 201:24]
  wire [128:0] _shiftReg_T_5 = {_shiftReg_T_3[63:0],lo,enough}; // @[Cat.scala 33:92]
  wire  wrap = cnt_value == 6'h3f; // @[Counter.scala 73:24]
  wire [5:0] _value_T_3 = cnt_value + 6'h1; // @[Counter.scala 77:24]
  wire [2:0] _GEN_2 = wrap ? 3'h4 : state; // @[DIV.scala 173:22 203:{40,47}]
  wire [2:0] _GEN_4 = state == 3'h4 ? 3'h0 : state; // @[DIV.scala 173:22 204:33]
  wire [5:0] _GEN_6 = state == 3'h3 ? _value_T_3 : cnt_value; // @[DIV.scala 199:34 Counter.scala 77:15 61:40]
  wire [2:0] _GEN_7 = state == 3'h3 ? _GEN_2 : _GEN_4; // @[DIV.scala 199:34]
  wire [5:0] _GEN_10 = state == 3'h2 ? cnt_value : _GEN_6; // @[DIV.scala 196:32 Counter.scala 61:40]
  wire [6:0] _GEN_12 = state == 3'h1 ? _value_T_1 : {{1'd0}, _GEN_10}; // @[DIV.scala 191:31 195:15]
  wire [6:0] _GEN_15 = NewReq ? {{1'd0}, cnt_value} : _GEN_12; // @[DIV.scala 189:15 Counter.scala 61:40]
  wire [63:0] _io_out_bits_result_remainder_T_2 = 64'h0 - hi[64:1]; // @[DIV.scala 208:45]
  wire [63:0] _io_out_bits_result_quotient_T_1 = 64'h0 - lo; // @[DIV.scala 209:44]
  wire [6:0] _GEN_20 = reset ? 7'h0 : _GEN_15; // @[Counter.scala 61:{40,40}]
  assign io_out_valid = state == 3'h4; // @[DIV.scala 210:25]
  assign io_out_bits_result_quotient = qSign ? _io_out_bits_result_quotient_T_1 : lo; // @[DIV.scala 209:37]
  assign io_out_bits_result_remainder = aSign ? _io_out_bits_result_remainder_T_2 : hi[64:1]; // @[DIV.scala 208:38]
  always @(posedge clock) begin
    if (reset) begin // @[DIV.scala 173:22]
      state <= 3'h0; // @[DIV.scala 173:22]
    end else if (NewReq) begin // @[DIV.scala 189:15]
      state <= 3'h1; // @[DIV.scala 190:11]
    end else if (state == 3'h1) begin // @[DIV.scala 191:31]
      state <= 3'h2; // @[DIV.scala 192:11]
    end else if (state == 3'h2) begin // @[DIV.scala 196:32]
      state <= 3'h3; // @[DIV.scala 198:11]
    end else begin
      state <= _GEN_7;
    end
    if (!(NewReq)) begin // @[DIV.scala 189:15]
      if (!(state == 3'h1)) begin // @[DIV.scala 191:31]
        if (state == 3'h2) begin // @[DIV.scala 196:32]
          shiftReg <= {{1'd0}, _shiftReg_T}; // @[DIV.scala 197:14]
        end else if (state == 3'h3) begin // @[DIV.scala 199:34]
          shiftReg <= _shiftReg_T_5; // @[DIV.scala 201:14]
        end
      end
    end
    if (NewReq) begin // @[Reg.scala 20:18]
      aValx2Reg <= _aValx2Reg_T; // @[Reg.scala 20:22]
    end
    if (NewReq) begin // @[Reg.scala 20:18]
      if (bSign) begin // @[DIV.scala 169:11]
        bValReg <= _T_3;
      end else begin
        bValReg <= io_in_bits_ctrl_data_src2;
      end
    end
    cnt_value <= _GEN_20[5:0]; // @[Counter.scala 61:{40,40}]
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
  _RAND_0 = {1{`RANDOM}};
  state = _RAND_0[2:0];
  _RAND_1 = {5{`RANDOM}};
  shiftReg = _RAND_1[128:0];
  _RAND_2 = {3{`RANDOM}};
  aValx2Reg = _RAND_2[64:0];
  _RAND_3 = {2{`RANDOM}};
  bValReg = _RAND_3[63:0];
  _RAND_4 = {1{`RANDOM}};
  cnt_value = _RAND_4[5:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module ysyx_22050321_Div_Top(
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
  wire  divi_clock; // @[DIV.scala 242:24]
  wire  divi_reset; // @[DIV.scala 242:24]
  wire  divi_io_in_valid; // @[DIV.scala 242:24]
  wire  divi_io_in_bits_ctrl_flow_div_signed; // @[DIV.scala 242:24]
  wire [63:0] divi_io_in_bits_ctrl_data_src1; // @[DIV.scala 242:24]
  wire [63:0] divi_io_in_bits_ctrl_data_src2; // @[DIV.scala 242:24]
  wire  divi_io_out_valid; // @[DIV.scala 242:24]
  wire [63:0] divi_io_out_bits_result_quotient; // @[DIV.scala 242:24]
  wire [63:0] divi_io_out_bits_result_remainder; // @[DIV.scala 242:24]
  ysyx_22050321_Radix2Div divi ( // @[DIV.scala 242:24]
    .clock(divi_clock),
    .reset(divi_reset),
    .io_in_valid(divi_io_in_valid),
    .io_in_bits_ctrl_flow_div_signed(divi_io_in_bits_ctrl_flow_div_signed),
    .io_in_bits_ctrl_data_src1(divi_io_in_bits_ctrl_data_src1),
    .io_in_bits_ctrl_data_src2(divi_io_in_bits_ctrl_data_src2),
    .io_out_valid(divi_io_out_valid),
    .io_out_bits_result_quotient(divi_io_out_bits_result_quotient),
    .io_out_bits_result_remainder(divi_io_out_bits_result_remainder)
  );
  assign io_out_valid = divi_io_out_valid; // @[DIV.scala 244:14]
  assign io_out_bits_result_quotient = divi_io_out_bits_result_quotient; // @[DIV.scala 244:14]
  assign io_out_bits_result_remainder = divi_io_out_bits_result_remainder; // @[DIV.scala 244:14]
  assign divi_clock = clock;
  assign divi_reset = reset;
  assign divi_io_in_valid = io_in_valid; // @[DIV.scala 243:13]
  assign divi_io_in_bits_ctrl_flow_div_signed = io_in_bits_ctrl_flow_div_signed; // @[DIV.scala 243:13]
  assign divi_io_in_bits_ctrl_data_src1 = io_in_bits_ctrl_data_src1; // @[DIV.scala 243:13]
  assign divi_io_in_bits_ctrl_data_src2 = io_in_bits_ctrl_data_src2; // @[DIV.scala 243:13]
endmodule
module ysyx_22050321_EXE(
  input         clock,
  input         reset,
  output        io_in_ready,
  input         io_in_valid,
  input  [2:0]  io_in_bits_ctrl_signal_src1Type,
  input  [2:0]  io_in_bits_ctrl_signal_src2Type,
  input  [2:0]  io_in_bits_ctrl_signal_fuType,
  input         io_in_bits_ctrl_signal_inst_valid,
  input         io_in_bits_ctrl_signal_rfWen,
  input  [6:0]  io_in_bits_ctrl_signal_aluoptype,
  input  [4:0]  io_in_bits_ctrl_signal_rfDest,
  input         io_in_bits_ctrl_signal_ertn_flush,
  input         io_in_bits_ctrl_signal_excp_flush,
  input  [63:0] io_in_bits_ctrl_data_src1,
  input  [63:0] io_in_bits_ctrl_data_src2,
  input  [63:0] io_in_bits_ctrl_data_Imm,
  input  [63:0] io_in_bits_ctrl_flow_PC,
  input  [31:0] io_in_bits_ctrl_flow_inst,
  input  [11:0] io_in_bits_ctrl_csr_csr_idx,
  output        io_is_mem,
  output        io_branchIO_is_branch,
  output        io_branchIO_is_jump,
  output [63:0] io_branchIO_dnpc,
  input         io_out_ready,
  output        io_out_valid,
  output [2:0]  io_out_bits_ctrl_signal_fuType,
  output        io_out_bits_ctrl_signal_inst_valid,
  output        io_out_bits_ctrl_signal_rfWen,
  output [6:0]  io_out_bits_ctrl_signal_aluoptype,
  output        io_out_bits_ctrl_signal_ertn_flush,
  output        io_out_bits_ctrl_signal_excp_flush,
  output [63:0] io_out_bits_ctrl_flow_PC,
  output [31:0] io_out_bits_ctrl_flow_inst,
  output [63:0] io_out_bits_ctrl_flow_Dnpc,
  output [4:0]  io_out_bits_ctrl_rf_rfDest,
  output        io_out_bits_ctrl_rf_rfWen,
  output [63:0] io_out_bits_ctrl_rf_rfData,
  output [63:0] io_out_bits_ctrl_data_src1,
  output [63:0] io_out_bits_ctrl_data_src2,
  output [63:0] io_out_bits_ctrl_data_Imm,
  output [63:0] io_out_bits_ctrl_csr_csr_data,
  output        io_out_bits_ctrl_csr_csr_en,
  output [11:0] io_out_bits_ctrl_csr_csr_idx,
  output        io_is_break,
  output        io_is_flush,
  input         io_icache_busy,
  input  [63:0] io_csr_rd_io_rd_data,
  output [11:0] io_csr_rd_io_csr_addr,
  output        io_stall
);
  wire  mul_clock; // @[EXE.scala 115:19]
  wire  mul_reset; // @[EXE.scala 115:19]
  wire  mul_io_in_valid; // @[EXE.scala 115:19]
  wire [63:0] mul_io_in_bits_ctrl_data_src1; // @[EXE.scala 115:19]
  wire [63:0] mul_io_in_bits_ctrl_data_src2; // @[EXE.scala 115:19]
  wire  mul_io_out_valid; // @[EXE.scala 115:19]
  wire [63:0] mul_io_out_bits_result_result_lo; // @[EXE.scala 115:19]
  wire  div_clock; // @[EXE.scala 116:19]
  wire  div_reset; // @[EXE.scala 116:19]
  wire  div_io_in_valid; // @[EXE.scala 116:19]
  wire  div_io_in_bits_ctrl_flow_div_signed; // @[EXE.scala 116:19]
  wire [63:0] div_io_in_bits_ctrl_data_src1; // @[EXE.scala 116:19]
  wire [63:0] div_io_in_bits_ctrl_data_src2; // @[EXE.scala 116:19]
  wire  div_io_out_valid; // @[EXE.scala 116:19]
  wire [63:0] div_io_out_bits_result_quotient; // @[EXE.scala 116:19]
  wire [63:0] div_io_out_bits_result_remainder; // @[EXE.scala 116:19]
  wire  _is_mul_T = 7'h78 == io_in_bits_ctrl_signal_aluoptype; // @[EXE.scala 99:32]
  wire  _is_mul_T_1 = 7'h7 == io_in_bits_ctrl_signal_aluoptype; // @[EXE.scala 99:86]
  wire  is_mul = (7'h78 == io_in_bits_ctrl_signal_aluoptype | 7'h7 == io_in_bits_ctrl_signal_aluoptype) &
    io_in_bits_ctrl_signal_inst_valid & io_in_valid; // @[EXE.scala 99:161]
  wire  _is_div_T = io_in_bits_ctrl_signal_aluoptype == 7'h43; // @[EXE.scala 100:50]
  wire  _is_div_T_2 = io_in_bits_ctrl_signal_aluoptype == 7'h43 | io_in_bits_ctrl_signal_aluoptype == 7'h13; // @[EXE.scala 100:68]
  wire  _is_div_T_3 = io_in_bits_ctrl_signal_aluoptype == 7'h79; // @[EXE.scala 101:41]
  wire  _is_div_T_5 = io_in_bits_ctrl_signal_aluoptype == 7'h10; // @[EXE.scala 101:96]
  wire  _is_div_T_6 = _is_div_T_2 | io_in_bits_ctrl_signal_aluoptype == 7'h79 | io_in_bits_ctrl_signal_aluoptype == 7'h10
    ; // @[EXE.scala 101:60]
  wire  _is_div_T_7 = io_in_bits_ctrl_signal_aluoptype == 7'h12; // @[EXE.scala 102:41]
  wire  _is_div_T_10 = _is_div_T_6 | io_in_bits_ctrl_signal_aluoptype == 7'h12 | io_in_bits_ctrl_signal_aluoptype == 7'hf
    ; // @[EXE.scala 102:59]
  wire  _is_div_T_11 = io_in_bits_ctrl_signal_aluoptype == 7'h7a; // @[EXE.scala 103:41]
  wire  _is_div_T_13 = io_in_bits_ctrl_signal_aluoptype == 7'hd; // @[EXE.scala 103:96]
  wire  is_div = (_is_div_T_10 | io_in_bits_ctrl_signal_aluoptype == 7'h7a | io_in_bits_ctrl_signal_aluoptype == 7'hd)
     & io_in_bits_ctrl_signal_inst_valid & io_in_valid; // @[EXE.scala 103:154]
  wire  _is_divw_T_2 = _is_div_T_3 | _is_div_T_5; // @[EXE.scala 104:70]
  wire  is_divw = _is_divw_T_2 | _is_div_T_11 | _is_div_T_13; // @[EXE.scala 105:60]
  wire  _is_div_sign_T_2 = _is_div_T | _is_div_T_3; // @[EXE.scala 106:73]
  wire  is_div_sign = _is_div_sign_T_2 | _is_div_T_7 | _is_div_T_11; // @[EXE.scala 107:59]
  wire  _io_is_mem_T_3 = io_in_bits_ctrl_signal_aluoptype == 7'h6f; // @[EXE.scala 109:38]
  wire  _io_is_mem_T_4 = io_in_bits_ctrl_signal_aluoptype == 7'he | _io_is_mem_T_3; // @[EXE.scala 108:130]
  wire  _io_is_mem_T_9 = io_in_bits_ctrl_signal_aluoptype == 7'h4; // @[EXE.scala 110:38]
  wire  _io_is_mem_T_10 = _io_is_mem_T_4 | io_in_bits_ctrl_signal_aluoptype == 7'h45 | io_in_bits_ctrl_signal_aluoptype
     == 7'h3 | _io_is_mem_T_9; // @[EXE.scala 109:162]
  wire  _io_is_mem_T_14 = _io_is_mem_T_10 | io_in_bits_ctrl_signal_aluoptype == 7'h47 | io_in_bits_ctrl_signal_aluoptype
     == 7'h11; // @[EXE.scala 110:109]
  wire [63:0] _GEN_1 = 3'h2 == io_in_bits_ctrl_signal_src1Type ? io_in_bits_ctrl_flow_PC : 64'h0; // @[EXE.scala 121:43 126:12]
  wire [63:0] src1 = 3'h0 == io_in_bits_ctrl_signal_src1Type ? io_in_bits_ctrl_data_src1 : _GEN_1; // @[EXE.scala 121:43 123:12]
  wire [63:0] _GEN_3 = 3'h1 == io_in_bits_ctrl_signal_src2Type ? io_in_bits_ctrl_data_Imm : 64'h0; // @[EXE.scala 132:43 137:12]
  wire [63:0] src2 = 3'h0 == io_in_bits_ctrl_signal_src2Type ? io_in_bits_ctrl_data_src2 : _GEN_3; // @[EXE.scala 132:43 134:12]
  wire [63:0] _dnpc_T_1 = io_in_bits_ctrl_flow_PC + 64'h4; // @[EXE.scala 142:49]
  wire [63:0] _alu_result_T_1 = src1 + src2; // @[EXE.scala 154:26]
  wire  alu_result_sign = _alu_result_T_1[31]; // @[util.scala 11:19]
  wire [31:0] _alu_result_T_6 = alu_result_sign ? 32'hffffffff : 32'h0; // @[Bitwise.scala 77:12]
  wire [63:0] _alu_result_T_7 = {_alu_result_T_6,_alu_result_T_1[31:0]}; // @[Cat.scala 33:92]
  wire [63:0] _alu_result_T_8 = src1 | src2; // @[EXE.scala 163:26]
  wire [63:0] _alu_result_T_10 = src1 - src2; // @[EXE.scala 166:26]
  wire [63:0] _alu_result_T_11 = src1 & src2; // @[EXE.scala 169:26]
  wire [63:0] _alu_result_T_12 = src1 ^ src2; // @[EXE.scala 172:26]
  wire  alu_result_sign_2 = mul_io_out_bits_result_result_lo[31]; // @[util.scala 11:19]
  wire [31:0] _alu_result_T_21 = alu_result_sign_2 ? 32'hffffffff : 32'h0; // @[Bitwise.scala 77:12]
  wire [63:0] _alu_result_T_22 = {_alu_result_T_21,mul_io_out_bits_result_result_lo[31:0]}; // @[Cat.scala 33:92]
  wire  alu_result_sign_3 = div_io_out_bits_result_quotient[31]; // @[util.scala 11:19]
  wire [31:0] _alu_result_T_25 = alu_result_sign_3 ? 32'hffffffff : 32'h0; // @[Bitwise.scala 77:12]
  wire [63:0] _alu_result_T_26 = {_alu_result_T_25,div_io_out_bits_result_quotient[31:0]}; // @[Cat.scala 33:92]
  wire  alu_result_sign_4 = div_io_out_bits_result_remainder[31]; // @[util.scala 11:19]
  wire [31:0] _alu_result_T_29 = alu_result_sign_4 ? 32'hffffffff : 32'h0; // @[Bitwise.scala 77:12]
  wire [63:0] _alu_result_T_30 = {_alu_result_T_29,div_io_out_bits_result_remainder[31:0]}; // @[Cat.scala 33:92]
  wire  alu_result_sign_6 = _alu_result_T_10[31]; // @[util.scala 11:19]
  wire [31:0] _alu_result_T_39 = alu_result_sign_6 ? 32'hffffffff : 32'h0; // @[Bitwise.scala 77:12]
  wire [63:0] _alu_result_T_40 = {_alu_result_T_39,_alu_result_T_10[31:0]}; // @[Cat.scala 33:92]
  wire [63:0] _csr_result_T = io_csr_rd_io_rd_data | src1; // @[EXE.scala 212:42]
  wire [63:0] _GEN_5 = 7'h16 == io_in_bits_ctrl_signal_aluoptype ? io_csr_rd_io_rd_data : 64'h0; // @[EXE.scala 152:44 217:18]
  wire [63:0] _GEN_6 = 7'h16 == io_in_bits_ctrl_signal_aluoptype ? src1 : 64'h0; // @[EXE.scala 152:44 218:18]
  wire [11:0] _GEN_7 = 7'h16 == io_in_bits_ctrl_signal_aluoptype ? io_in_bits_ctrl_csr_csr_idx : 12'h0; // @[EXE.scala 152:44 219:15]
  wire [63:0] _GEN_8 = 7'h15 == io_in_bits_ctrl_signal_aluoptype ? io_csr_rd_io_rd_data : _GEN_5; // @[EXE.scala 152:44 211:18]
  wire [63:0] _GEN_9 = 7'h15 == io_in_bits_ctrl_signal_aluoptype ? _csr_result_T : _GEN_6; // @[EXE.scala 152:44 212:18]
  wire [11:0] _GEN_10 = 7'h15 == io_in_bits_ctrl_signal_aluoptype ? io_in_bits_ctrl_csr_csr_idx : _GEN_7; // @[EXE.scala 152:44 213:15]
  wire [63:0] _GEN_11 = 7'h43 == io_in_bits_ctrl_signal_aluoptype ? div_io_out_bits_result_quotient : _GEN_8; // @[EXE.scala 152:44 208:18]
  wire [63:0] _GEN_12 = 7'h43 == io_in_bits_ctrl_signal_aluoptype ? 64'h0 : _GEN_9; // @[EXE.scala 152:44]
  wire [11:0] _GEN_13 = 7'h43 == io_in_bits_ctrl_signal_aluoptype ? 12'h0 : _GEN_10; // @[EXE.scala 152:44]
  wire [63:0] _GEN_14 = 7'h13 == io_in_bits_ctrl_signal_aluoptype ? div_io_out_bits_result_quotient : _GEN_11; // @[EXE.scala 152:44 205:18]
  wire [63:0] _GEN_15 = 7'h13 == io_in_bits_ctrl_signal_aluoptype ? 64'h0 : _GEN_12; // @[EXE.scala 152:44]
  wire [11:0] _GEN_16 = 7'h13 == io_in_bits_ctrl_signal_aluoptype ? 12'h0 : _GEN_13; // @[EXE.scala 152:44]
  wire [63:0] _GEN_17 = 7'h10 == io_in_bits_ctrl_signal_aluoptype ? _alu_result_T_26 : _GEN_14; // @[EXE.scala 152:44 202:18]
  wire [63:0] _GEN_18 = 7'h10 == io_in_bits_ctrl_signal_aluoptype ? 64'h0 : _GEN_15; // @[EXE.scala 152:44]
  wire [11:0] _GEN_19 = 7'h10 == io_in_bits_ctrl_signal_aluoptype ? 12'h0 : _GEN_16; // @[EXE.scala 152:44]
  wire [63:0] _GEN_20 = 7'h12 == io_in_bits_ctrl_signal_aluoptype ? div_io_out_bits_result_remainder : _GEN_17; // @[EXE.scala 152:44 199:18]
  wire [63:0] _GEN_21 = 7'h12 == io_in_bits_ctrl_signal_aluoptype ? 64'h0 : _GEN_18; // @[EXE.scala 152:44]
  wire [11:0] _GEN_22 = 7'h12 == io_in_bits_ctrl_signal_aluoptype ? 12'h0 : _GEN_19; // @[EXE.scala 152:44]
  wire [63:0] _GEN_23 = 7'hf == io_in_bits_ctrl_signal_aluoptype ? div_io_out_bits_result_remainder : _GEN_20; // @[EXE.scala 152:44 196:18]
  wire [63:0] _GEN_24 = 7'hf == io_in_bits_ctrl_signal_aluoptype ? 64'h0 : _GEN_21; // @[EXE.scala 152:44]
  wire [11:0] _GEN_25 = 7'hf == io_in_bits_ctrl_signal_aluoptype ? 12'h0 : _GEN_22; // @[EXE.scala 152:44]
  wire [63:0] _GEN_26 = _is_mul_T_1 ? mul_io_out_bits_result_result_lo : _GEN_23; // @[EXE.scala 152:44 193:18]
  wire [63:0] _GEN_27 = _is_mul_T_1 ? 64'h0 : _GEN_24; // @[EXE.scala 152:44]
  wire [11:0] _GEN_28 = _is_mul_T_1 ? 12'h0 : _GEN_25; // @[EXE.scala 152:44]
  wire [63:0] _GEN_29 = 7'h1 == io_in_bits_ctrl_signal_aluoptype ? _alu_result_T_40 : _GEN_26; // @[EXE.scala 152:44 190:18]
  wire [63:0] _GEN_30 = 7'h1 == io_in_bits_ctrl_signal_aluoptype ? 64'h0 : _GEN_27; // @[EXE.scala 152:44]
  wire [11:0] _GEN_31 = 7'h1 == io_in_bits_ctrl_signal_aluoptype ? 12'h0 : _GEN_28; // @[EXE.scala 152:44]
  wire [63:0] _GEN_32 = 7'hd == io_in_bits_ctrl_signal_aluoptype ? _alu_result_T_30 : _GEN_29; // @[EXE.scala 152:44 187:18]
  wire [63:0] _GEN_33 = 7'hd == io_in_bits_ctrl_signal_aluoptype ? 64'h0 : _GEN_30; // @[EXE.scala 152:44]
  wire [11:0] _GEN_34 = 7'hd == io_in_bits_ctrl_signal_aluoptype ? 12'h0 : _GEN_31; // @[EXE.scala 152:44]
  wire [63:0] _GEN_35 = 7'h7a == io_in_bits_ctrl_signal_aluoptype ? _alu_result_T_30 : _GEN_32; // @[EXE.scala 152:44 184:18]
  wire [63:0] _GEN_36 = 7'h7a == io_in_bits_ctrl_signal_aluoptype ? 64'h0 : _GEN_33; // @[EXE.scala 152:44]
  wire [11:0] _GEN_37 = 7'h7a == io_in_bits_ctrl_signal_aluoptype ? 12'h0 : _GEN_34; // @[EXE.scala 152:44]
  wire [63:0] _GEN_38 = 7'h79 == io_in_bits_ctrl_signal_aluoptype ? _alu_result_T_26 : _GEN_35; // @[EXE.scala 152:44 181:18]
  wire [63:0] _GEN_39 = 7'h79 == io_in_bits_ctrl_signal_aluoptype ? 64'h0 : _GEN_36; // @[EXE.scala 152:44]
  wire [11:0] _GEN_40 = 7'h79 == io_in_bits_ctrl_signal_aluoptype ? 12'h0 : _GEN_37; // @[EXE.scala 152:44]
  wire [63:0] _GEN_41 = _is_mul_T ? _alu_result_T_22 : _GEN_38; // @[EXE.scala 152:44 178:18]
  wire [63:0] _GEN_42 = _is_mul_T ? 64'h0 : _GEN_39; // @[EXE.scala 152:44]
  wire [11:0] _GEN_43 = _is_mul_T ? 12'h0 : _GEN_40; // @[EXE.scala 152:44]
  wire [63:0] _GEN_44 = 7'h6d == io_in_bits_ctrl_signal_aluoptype ? _alu_result_T_7 : _GEN_41; // @[EXE.scala 152:44 175:18]
  wire [63:0] _GEN_45 = 7'h6d == io_in_bits_ctrl_signal_aluoptype ? 64'h0 : _GEN_42; // @[EXE.scala 152:44]
  wire [11:0] _GEN_46 = 7'h6d == io_in_bits_ctrl_signal_aluoptype ? 12'h0 : _GEN_43; // @[EXE.scala 152:44]
  wire [63:0] _GEN_47 = 7'h72 == io_in_bits_ctrl_signal_aluoptype ? _alu_result_T_12 : _GEN_44; // @[EXE.scala 152:44 172:18]
  wire [63:0] _GEN_48 = 7'h72 == io_in_bits_ctrl_signal_aluoptype ? 64'h0 : _GEN_45; // @[EXE.scala 152:44]
  wire [11:0] _GEN_49 = 7'h72 == io_in_bits_ctrl_signal_aluoptype ? 12'h0 : _GEN_46; // @[EXE.scala 152:44]
  wire [63:0] _GEN_50 = 7'h71 == io_in_bits_ctrl_signal_aluoptype ? _alu_result_T_11 : _GEN_47; // @[EXE.scala 152:44 169:18]
  wire [63:0] _GEN_51 = 7'h71 == io_in_bits_ctrl_signal_aluoptype ? 64'h0 : _GEN_48; // @[EXE.scala 152:44]
  wire [11:0] _GEN_52 = 7'h71 == io_in_bits_ctrl_signal_aluoptype ? 12'h0 : _GEN_49; // @[EXE.scala 152:44]
  wire [63:0] _GEN_53 = 7'h69 == io_in_bits_ctrl_signal_aluoptype ? _alu_result_T_10 : _GEN_50; // @[EXE.scala 152:44 166:18]
  wire [63:0] _GEN_54 = 7'h69 == io_in_bits_ctrl_signal_aluoptype ? 64'h0 : _GEN_51; // @[EXE.scala 152:44]
  wire [11:0] _GEN_55 = 7'h69 == io_in_bits_ctrl_signal_aluoptype ? 12'h0 : _GEN_52; // @[EXE.scala 152:44]
  wire [63:0] _GEN_56 = 7'h44 == io_in_bits_ctrl_signal_aluoptype ? _alu_result_T_8 : _GEN_53; // @[EXE.scala 152:44 163:18]
  wire [63:0] _GEN_57 = 7'h44 == io_in_bits_ctrl_signal_aluoptype ? 64'h0 : _GEN_54; // @[EXE.scala 152:44]
  wire [11:0] _GEN_58 = 7'h44 == io_in_bits_ctrl_signal_aluoptype ? 12'h0 : _GEN_55; // @[EXE.scala 152:44]
  wire [63:0] _GEN_59 = 7'h68 == io_in_bits_ctrl_signal_aluoptype ? _alu_result_T_7 : _GEN_56; // @[EXE.scala 152:44 160:18]
  wire [63:0] _GEN_60 = 7'h68 == io_in_bits_ctrl_signal_aluoptype ? 64'h0 : _GEN_57; // @[EXE.scala 152:44]
  wire [11:0] _GEN_61 = 7'h68 == io_in_bits_ctrl_signal_aluoptype ? 12'h0 : _GEN_58; // @[EXE.scala 152:44]
  wire [63:0] _GEN_62 = 7'h1a == io_in_bits_ctrl_signal_aluoptype ? src2 : _GEN_59; // @[EXE.scala 152:44 157:18]
  wire [63:0] _GEN_63 = 7'h1a == io_in_bits_ctrl_signal_aluoptype ? 64'h0 : _GEN_60; // @[EXE.scala 152:44]
  wire [11:0] _GEN_64 = 7'h1a == io_in_bits_ctrl_signal_aluoptype ? 12'h0 : _GEN_61; // @[EXE.scala 152:44]
  wire [63:0] alu_result = 7'h40 == io_in_bits_ctrl_signal_aluoptype ? _alu_result_T_1 : _GEN_62; // @[EXE.scala 152:44 154:18]
  wire [63:0] _shift_result_T = 3'h0 == io_in_bits_ctrl_signal_src1Type ? io_in_bits_ctrl_data_src1 : _GEN_1; // @[EXE.scala 226:29]
  wire [63:0] _shift_result_T_3 = $signed(_shift_result_T) >>> src2[4:0]; // @[EXE.scala 226:51]
  wire [94:0] _GEN_0 = {{31'd0}, src1}; // @[EXE.scala 230:39]
  wire [94:0] _shift_result_T_5 = _GEN_0 << src2[4:0]; // @[EXE.scala 230:39]
  wire  shift_result_sign = _shift_result_T_5[31]; // @[util.scala 11:19]
  wire [31:0] _shift_result_T_8 = shift_result_sign ? 32'hffffffff : 32'h0; // @[Bitwise.scala 77:12]
  wire [63:0] _shift_result_T_9 = {_shift_result_T_8,_shift_result_T_5[31:0]}; // @[Cat.scala 33:92]
  wire [126:0] _GEN_2 = {{63'd0}, src1}; // @[EXE.scala 233:28]
  wire [126:0] _shift_result_T_11 = _GEN_2 << src2[5:0]; // @[EXE.scala 233:28]
  wire [63:0] _shift_result_T_13 = src1 >> src2[5:0]; // @[EXE.scala 236:35]
  wire [94:0] _GEN_4 = {{63'd0}, src1[31:0]}; // @[EXE.scala 239:46]
  wire [94:0] _shift_result_T_16 = _GEN_4 << src2[5:0]; // @[EXE.scala 239:46]
  wire  shift_result_sign_1 = _shift_result_T_16[31]; // @[util.scala 11:19]
  wire [31:0] _shift_result_T_19 = shift_result_sign_1 ? 32'hffffffff : 32'h0; // @[Bitwise.scala 77:12]
  wire [63:0] _shift_result_T_20 = {_shift_result_T_19,_shift_result_T_16[31:0]}; // @[Cat.scala 33:92]
  wire [31:0] _shift_result_T_22 = src1[31:0]; // @[EXE.scala 242:46]
  wire [31:0] _shift_result_T_25 = $signed(_shift_result_T_22) >>> src2[4:0]; // @[EXE.scala 242:68]
  wire  shift_result_sign_2 = _shift_result_T_25[31]; // @[util.scala 11:19]
  wire [31:0] _shift_result_T_27 = shift_result_sign_2 ? 32'hffffffff : 32'h0; // @[Bitwise.scala 77:12]
  wire [63:0] _shift_result_T_28 = {_shift_result_T_27,_shift_result_T_25}; // @[Cat.scala 33:92]
  wire [31:0] _shift_result_T_31 = src1[31:0] >> src2[4:0]; // @[EXE.scala 245:46]
  wire  shift_result_sign_3 = _shift_result_T_31[31]; // @[util.scala 11:19]
  wire [31:0] _shift_result_T_34 = shift_result_sign_3 ? 32'hffffffff : 32'h0; // @[Bitwise.scala 77:12]
  wire [63:0] _shift_result_T_35 = {_shift_result_T_34,_shift_result_T_31}; // @[Cat.scala 33:92]
  wire [63:0] _shift_result_T_54 = $signed(_shift_result_T) >>> src2[5:0]; // @[EXE.scala 254:51]
  wire [63:0] _GEN_68 = 7'h14 == io_in_bits_ctrl_signal_aluoptype ? _shift_result_T_54 : 64'h0; // @[EXE.scala 224:44 254:20]
  wire [63:0] _GEN_69 = 7'ha == io_in_bits_ctrl_signal_aluoptype ? _shift_result_T_35 : _GEN_68; // @[EXE.scala 224:44 251:20]
  wire [63:0] _GEN_70 = 7'h9 == io_in_bits_ctrl_signal_aluoptype ? _shift_result_T_28 : _GEN_69; // @[EXE.scala 224:44 248:20]
  wire [63:0] _GEN_71 = 7'h8 == io_in_bits_ctrl_signal_aluoptype ? _shift_result_T_35 : _GEN_70; // @[EXE.scala 224:44 245:20]
  wire [63:0] _GEN_72 = 7'h6 == io_in_bits_ctrl_signal_aluoptype ? _shift_result_T_28 : _GEN_71; // @[EXE.scala 224:44 242:20]
  wire [63:0] _GEN_73 = 7'h5 == io_in_bits_ctrl_signal_aluoptype ? _shift_result_T_20 : _GEN_72; // @[EXE.scala 224:44 239:20]
  wire [63:0] _GEN_74 = 7'h75 == io_in_bits_ctrl_signal_aluoptype ? _shift_result_T_13 : _GEN_73; // @[EXE.scala 224:44 236:20]
  wire [126:0] _GEN_75 = 7'h41 == io_in_bits_ctrl_signal_aluoptype ? _shift_result_T_11 : {{63'd0}, _GEN_74}; // @[EXE.scala 224:44 233:20]
  wire [126:0] _GEN_76 = 7'h73 == io_in_bits_ctrl_signal_aluoptype ? {{63'd0}, _shift_result_T_9} : _GEN_75; // @[EXE.scala 224:44 230:20]
  wire [126:0] _GEN_77 = 7'h6e == io_in_bits_ctrl_signal_aluoptype ? {{63'd0}, _shift_result_T_3} : _GEN_76; // @[EXE.scala 224:44 226:20]
  wire [63:0] _mul_io_in_bits_ctrl_data_src1_T_2 = {32'h0,src1[31:0]}; // @[Cat.scala 33:92]
  wire [63:0] _mul_io_in_bits_ctrl_data_src2_T_2 = {32'h0,src2[31:0]}; // @[Cat.scala 33:92]
  wire  _mul_io_in_valid_T = ~mul_io_out_valid; // @[EXE.scala 262:36]
  wire  div_io_in_bits_ctrl_data_src1_sign = src1[31]; // @[util.scala 11:19]
  wire [31:0] _div_io_in_bits_ctrl_data_src1_T_2 = div_io_in_bits_ctrl_data_src1_sign ? 32'hffffffff : 32'h0; // @[Bitwise.scala 77:12]
  wire [63:0] _div_io_in_bits_ctrl_data_src1_T_3 = {_div_io_in_bits_ctrl_data_src1_T_2,src1[31:0]}; // @[Cat.scala 33:92]
  wire [63:0] _div_io_in_bits_ctrl_data_src1_T_7 = is_div_sign ? _div_io_in_bits_ctrl_data_src1_T_3 :
    _mul_io_in_bits_ctrl_data_src1_T_2; // @[EXE.scala 268:51]
  wire  div_io_in_bits_ctrl_data_src2_sign = src2[31]; // @[util.scala 11:19]
  wire [31:0] _div_io_in_bits_ctrl_data_src2_T_2 = div_io_in_bits_ctrl_data_src2_sign ? 32'hffffffff : 32'h0; // @[Bitwise.scala 77:12]
  wire [63:0] _div_io_in_bits_ctrl_data_src2_T_3 = {_div_io_in_bits_ctrl_data_src2_T_2,src2[31:0]}; // @[Cat.scala 33:92]
  wire [63:0] _div_io_in_bits_ctrl_data_src2_T_7 = is_div_sign ? _div_io_in_bits_ctrl_data_src2_T_3 :
    _mul_io_in_bits_ctrl_data_src2_T_2; // @[EXE.scala 269:51]
  wire  _div_io_in_valid_T = ~div_io_out_valid; // @[EXE.scala 270:36]
  wire  _compar_result_T = src1 < src2; // @[EXE.scala 278:34]
  wire [63:0] _compar_result_T_1 = src1 < src2 ? 64'h1 : 64'h0; // @[EXE.scala 278:27]
  wire [63:0] _compar_result_T_3 = 3'h0 == io_in_bits_ctrl_signal_src2Type ? io_in_bits_ctrl_data_src2 : _GEN_3; // @[EXE.scala 281:48]
  wire  _compar_result_T_4 = $signed(_shift_result_T) < $signed(_compar_result_T_3); // @[EXE.scala 281:41]
  wire [63:0] _compar_result_T_5 = $signed(_shift_result_T) < $signed(_compar_result_T_3) ? 64'h1 : 64'h0; // @[EXE.scala 281:27]
  wire [63:0] _GEN_78 = 7'h2 == io_in_bits_ctrl_signal_aluoptype ? _compar_result_T_5 : 64'h0; // @[EXE.scala 276:44 281:21]
  wire [63:0] compar_result = 7'h6a == io_in_bits_ctrl_signal_aluoptype ? _compar_result_T_1 : _GEN_78; // @[EXE.scala 276:44 278:21]
  wire  _jump_result_T = io_in_bits_ctrl_signal_fuType == 3'h3; // @[EXE.scala 286:52]
  wire [63:0] jump_result = io_in_bits_ctrl_signal_fuType == 3'h3 ? _dnpc_T_1 : 64'h0; // @[EXE.scala 286:21]
  wire [63:0] _GEN_80 = 3'h5 == io_in_bits_ctrl_signal_fuType ? compar_result : 64'h0; // @[EXE.scala 289:41 303:18]
  wire [63:0] shift_result = _GEN_77[63:0];
  wire [63:0] _GEN_81 = 3'h1 == io_in_bits_ctrl_signal_fuType ? shift_result : _GEN_80; // @[EXE.scala 289:41 300:18]
  wire [63:0] _GEN_82 = 3'h2 == io_in_bits_ctrl_signal_fuType ? 64'h0 : _GEN_81; // @[EXE.scala 289:41 297:18]
  wire [63:0] _GEN_83 = 3'h3 == io_in_bits_ctrl_signal_fuType ? jump_result : _GEN_82; // @[EXE.scala 289:41 294:18]
  wire  _T_43 = 7'h6b == io_in_bits_ctrl_signal_aluoptype; // @[EXE.scala 311:44]
  wire [63:0] _branch_result_T_1 = io_in_bits_ctrl_flow_PC + io_in_bits_ctrl_data_Imm; // @[EXE.scala 313:27]
  wire  _T_44 = 7'h6c == io_in_bits_ctrl_signal_aluoptype; // @[EXE.scala 311:44]
  wire  _T_45 = 7'h76 == io_in_bits_ctrl_signal_aluoptype; // @[EXE.scala 311:44]
  wire  _T_46 = 7'h7b == io_in_bits_ctrl_signal_aluoptype; // @[EXE.scala 311:44]
  wire  _T_47 = 7'hb == io_in_bits_ctrl_signal_aluoptype; // @[EXE.scala 311:44]
  wire  _T_48 = 7'hc == io_in_bits_ctrl_signal_aluoptype; // @[EXE.scala 311:44]
  wire [63:0] _GEN_85 = 7'hc == io_in_bits_ctrl_signal_aluoptype ? _branch_result_T_1 : 64'h0; // @[EXE.scala 311:44 333:21]
  wire  _GEN_86 = 7'hc == io_in_bits_ctrl_signal_aluoptype & src1 >= src2; // @[EXE.scala 311:44 334:19]
  wire [63:0] _GEN_87 = 7'hb == io_in_bits_ctrl_signal_aluoptype ? _branch_result_T_1 : _GEN_85; // @[EXE.scala 311:44 329:21]
  wire  _GEN_88 = 7'hb == io_in_bits_ctrl_signal_aluoptype ? _compar_result_T : _GEN_86; // @[EXE.scala 311:44 330:19]
  wire [63:0] _GEN_89 = 7'h7b == io_in_bits_ctrl_signal_aluoptype ? _branch_result_T_1 : _GEN_87; // @[EXE.scala 311:44 325:21]
  wire  _GEN_90 = 7'h7b == io_in_bits_ctrl_signal_aluoptype ? _compar_result_T_4 : _GEN_88; // @[EXE.scala 311:44 326:19]
  wire [63:0] _GEN_91 = 7'h76 == io_in_bits_ctrl_signal_aluoptype ? _branch_result_T_1 : _GEN_89; // @[EXE.scala 311:44 321:21]
  wire  _GEN_92 = 7'h76 == io_in_bits_ctrl_signal_aluoptype ? $signed(_shift_result_T) >= $signed(_compar_result_T_3) :
    _GEN_90; // @[EXE.scala 311:44 322:19]
  wire [63:0] _GEN_93 = 7'h6c == io_in_bits_ctrl_signal_aluoptype ? _branch_result_T_1 : _GEN_91; // @[EXE.scala 311:44 317:21]
  wire  _GEN_94 = 7'h6c == io_in_bits_ctrl_signal_aluoptype ? src1 != src2 : _GEN_92; // @[EXE.scala 311:44 318:19]
  wire [63:0] branch_result = 7'h6b == io_in_bits_ctrl_signal_aluoptype ? _branch_result_T_1 : _GEN_93; // @[EXE.scala 311:44 313:21]
  wire  branch_flag = 7'h6b == io_in_bits_ctrl_signal_aluoptype ? src1 == src2 : _GEN_94; // @[EXE.scala 311:44 314:19]
  wire [63:0] _dnpc_T_7 = {_alu_result_T_1[63:1],1'h0}; // @[Cat.scala 33:92]
  wire [63:0] _dnpc_T_11 = branch_flag ? branch_result : _dnpc_T_1; // @[EXE.scala 364:18]
  wire [63:0] _GEN_97 = _T_47 ? _dnpc_T_11 : _dnpc_T_1; // @[EXE.scala 356:44 380:12]
  wire [63:0] _GEN_98 = _T_46 ? _dnpc_T_11 : _GEN_97; // @[EXE.scala 356:44 377:12]
  wire [63:0] _GEN_99 = _T_48 ? _dnpc_T_11 : _GEN_98; // @[EXE.scala 356:44 374:12]
  wire [63:0] _GEN_100 = _T_45 ? _dnpc_T_11 : _GEN_99; // @[EXE.scala 356:44 371:12]
  wire [63:0] _GEN_101 = _T_44 ? _dnpc_T_11 : _GEN_100; // @[EXE.scala 356:44 368:12]
  wire [63:0] _GEN_102 = _T_43 ? _dnpc_T_11 : _GEN_101; // @[EXE.scala 356:44 364:12]
  wire [63:0] _GEN_103 = 7'h48 == io_in_bits_ctrl_signal_aluoptype ? _dnpc_T_7 : _GEN_102; // @[EXE.scala 356:44 361:12]
  wire  is_branch = branch_flag & io_out_bits_ctrl_signal_inst_valid & io_in_valid; // @[EXE.scala 424:68]
  wire  is_jump = _jump_result_T & io_out_bits_ctrl_signal_inst_valid & io_in_valid; // @[EXE.scala 425:101]
  wire  _io_branchIO_is_branch_T_1 = ~io_icache_busy; // @[EXE.scala 426:55]
  wire  _io_is_flush_T_2 = is_branch | is_jump; // @[EXE.scala 429:41]
  wire  _io_is_flush_T_4 = (is_branch | is_jump) & io_in_valid & io_out_ready; // @[EXE.scala 429:76]
  wire  _io_out_bits_ctrl_csr_csr_en_T_2 = io_in_bits_ctrl_signal_aluoptype == 7'h18 | io_in_bits_ctrl_signal_aluoptype
     == 7'h18; // @[EXE.scala 434:90]
  wire  _io_out_valid_T_1 = _mul_io_in_valid_T & is_mul; // @[EXE.scala 439:43]
  wire  _io_out_valid_T_4 = _div_io_in_valid_T & is_div; // @[EXE.scala 439:78]
  wire  _io_out_valid_T_11 = _io_is_flush_T_2 & io_icache_busy; // @[EXE.scala 439:148]
  ysyx_22050321_MUL mul ( // @[EXE.scala 115:19]
    .clock(mul_clock),
    .reset(mul_reset),
    .io_in_valid(mul_io_in_valid),
    .io_in_bits_ctrl_data_src1(mul_io_in_bits_ctrl_data_src1),
    .io_in_bits_ctrl_data_src2(mul_io_in_bits_ctrl_data_src2),
    .io_out_valid(mul_io_out_valid),
    .io_out_bits_result_result_lo(mul_io_out_bits_result_result_lo)
  );
  ysyx_22050321_Div_Top div ( // @[EXE.scala 116:19]
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
  assign io_in_ready = (_io_out_valid_T_1 | _io_out_valid_T_4) & io_in_valid | _io_out_valid_T_11 | io_stall ? 1'h0 :
    io_out_ready; // @[EXE.scala 440:21]
  assign io_is_mem = io_in_valid & io_in_bits_ctrl_signal_fuType == 3'h4 & _io_is_mem_T_14; // @[EXE.scala 108:77]
  assign io_branchIO_is_branch = is_branch & io_out_ready & ~io_icache_busy; // @[EXE.scala 426:53]
  assign io_branchIO_is_jump = is_jump & io_out_ready & _io_branchIO_is_branch_T_1; // @[EXE.scala 427:53]
  assign io_branchIO_dnpc = 7'h19 == io_in_bits_ctrl_signal_aluoptype ? _alu_result_T_1 : _GEN_103; // @[EXE.scala 356:44 358:12]
  assign io_out_valid = ~(_mul_io_in_valid_T & is_mul) & ~(_div_io_in_valid_T & is_div) & io_in_valid & ~(
    _io_is_flush_T_2 & io_icache_busy) & ~io_stall; // @[EXE.scala 439:167]
  assign io_out_bits_ctrl_signal_fuType = io_in_bits_ctrl_signal_fuType; // @[EXE.scala 409:27]
  assign io_out_bits_ctrl_signal_inst_valid = io_in_bits_ctrl_signal_inst_valid; // @[EXE.scala 413:38]
  assign io_out_bits_ctrl_signal_rfWen = io_in_bits_ctrl_signal_rfWen; // @[EXE.scala 409:27]
  assign io_out_bits_ctrl_signal_aluoptype = io_in_bits_ctrl_signal_aluoptype; // @[EXE.scala 409:27]
  assign io_out_bits_ctrl_signal_ertn_flush = io_in_bits_ctrl_signal_ertn_flush; // @[EXE.scala 409:27]
  assign io_out_bits_ctrl_signal_excp_flush = io_in_bits_ctrl_signal_excp_flush; // @[EXE.scala 409:27]
  assign io_out_bits_ctrl_flow_PC = io_in_bits_ctrl_flow_PC; // @[EXE.scala 410:25]
  assign io_out_bits_ctrl_flow_inst = io_in_bits_ctrl_flow_inst; // @[EXE.scala 410:25]
  assign io_out_bits_ctrl_flow_Dnpc = 7'h19 == io_in_bits_ctrl_signal_aluoptype ? _alu_result_T_1 : _GEN_103; // @[EXE.scala 356:44 358:12]
  assign io_out_bits_ctrl_rf_rfDest = io_in_bits_ctrl_signal_rfDest; // @[EXE.scala 419:30]
  assign io_out_bits_ctrl_rf_rfWen = io_in_valid & io_in_bits_ctrl_signal_rfWen; // @[EXE.scala 420:35]
  assign io_out_bits_ctrl_rf_rfData = 3'h0 == io_in_bits_ctrl_signal_fuType ? alu_result : _GEN_83; // @[EXE.scala 289:41 291:18]
  assign io_out_bits_ctrl_data_src1 = 3'h0 == io_in_bits_ctrl_signal_src1Type ? io_in_bits_ctrl_data_src1 : _GEN_1; // @[EXE.scala 121:43 123:12]
  assign io_out_bits_ctrl_data_src2 = 3'h0 == io_in_bits_ctrl_signal_src2Type ? io_in_bits_ctrl_data_src2 : _GEN_3; // @[EXE.scala 132:43 134:12]
  assign io_out_bits_ctrl_data_Imm = io_in_bits_ctrl_data_Imm; // @[EXE.scala 411:25]
  assign io_out_bits_ctrl_csr_csr_data = 7'h40 == io_in_bits_ctrl_signal_aluoptype ? 64'h0 : _GEN_63; // @[EXE.scala 152:44]
  assign io_out_bits_ctrl_csr_csr_en = _io_out_bits_ctrl_csr_csr_en_T_2 | io_in_bits_ctrl_signal_aluoptype == 7'h15 |
    io_in_bits_ctrl_signal_aluoptype == 7'h16; // @[EXE.scala 435:61]
  assign io_out_bits_ctrl_csr_csr_idx = 7'h40 == io_in_bits_ctrl_signal_aluoptype ? 12'h0 : _GEN_64; // @[EXE.scala 152:44]
  assign io_is_break = io_in_bits_ctrl_signal_aluoptype == 7'h42 & io_out_bits_ctrl_signal_inst_valid; // @[EXE.scala 430:77]
  assign io_is_flush = (is_branch | is_jump) & io_in_valid & io_out_ready & _io_branchIO_is_branch_T_1; // @[EXE.scala 429:91]
  assign io_csr_rd_io_csr_addr = 7'h40 == io_in_bits_ctrl_signal_aluoptype ? 12'h0 : _GEN_64; // @[EXE.scala 152:44]
  assign io_stall = _io_is_flush_T_4 & ~io_is_flush; // @[EXE.scala 432:88]
  assign mul_clock = clock;
  assign mul_reset = reset;
  assign mul_io_in_valid = is_mul & ~mul_io_out_valid; // @[EXE.scala 262:33]
  assign mul_io_in_bits_ctrl_data_src1 = is_mul ? src1 : _mul_io_in_bits_ctrl_data_src1_T_2; // @[EXE.scala 258:39]
  assign mul_io_in_bits_ctrl_data_src2 = is_mul ? src2 : _mul_io_in_bits_ctrl_data_src2_T_2; // @[EXE.scala 259:39]
  assign div_clock = clock;
  assign div_reset = reset;
  assign div_io_in_valid = is_div & ~div_io_out_valid; // @[EXE.scala 270:33]
  assign div_io_in_bits_ctrl_flow_div_signed = _is_div_sign_T_2 | _is_div_T_7 | _is_div_T_11; // @[EXE.scala 107:59]
  assign div_io_in_bits_ctrl_data_src1 = is_divw ? _div_io_in_bits_ctrl_data_src1_T_7 : src1; // @[EXE.scala 268:39]
  assign div_io_in_bits_ctrl_data_src2 = is_divw ? _div_io_in_bits_ctrl_data_src2_T_7 : src2; // @[EXE.scala 269:39]
endmodule
module ysyx_22050321_MEM_stage(
  output        io_in_ready,
  input         io_in_valid,
  input  [2:0]  io_in_bits_ctrl_signal_fuType,
  input         io_in_bits_ctrl_signal_inst_valid,
  input         io_in_bits_ctrl_signal_rfWen,
  input  [6:0]  io_in_bits_ctrl_signal_aluoptype,
  input         io_in_bits_ctrl_signal_ertn_flush,
  input         io_in_bits_ctrl_signal_excp_flush,
  input  [63:0] io_in_bits_ctrl_flow_PC,
  input  [31:0] io_in_bits_ctrl_flow_inst,
  input  [63:0] io_in_bits_ctrl_flow_Dnpc,
  input  [4:0]  io_in_bits_ctrl_rf_rfDest,
  input  [63:0] io_in_bits_ctrl_rf_rfData,
  input  [63:0] io_in_bits_ctrl_data_src1,
  input  [63:0] io_in_bits_ctrl_data_src2,
  input  [63:0] io_in_bits_ctrl_data_Imm,
  input  [63:0] io_in_bits_ctrl_csr_csr_data,
  input         io_in_bits_ctrl_csr_csr_en,
  input  [11:0] io_in_bits_ctrl_csr_csr_idx,
  input         io_out_ready,
  output        io_out_valid,
  output        io_out_bits_ctrl_signal_inst_valid,
  output        io_out_bits_ctrl_signal_rfWen,
  output        io_out_bits_ctrl_signal_ertn_flush,
  output        io_out_bits_ctrl_signal_excp_flush,
  output [63:0] io_out_bits_ctrl_flow_PC,
  output [31:0] io_out_bits_ctrl_flow_inst,
  output [63:0] io_out_bits_ctrl_flow_Dnpc,
  output        io_out_bits_ctrl_flow_skip,
  output [4:0]  io_out_bits_ctrl_rf_rfDest,
  output        io_out_bits_ctrl_rf_rfWen,
  output [63:0] io_out_bits_ctrl_rf_rfData,
  output [63:0] io_out_bits_ctrl_csr_csr_data,
  output        io_out_bits_ctrl_csr_csr_en,
  output [11:0] io_out_bits_ctrl_csr_csr_idx,
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
  wire [63:0] _T_20 = {56'h0,io_in_bits_ctrl_data_src2[7:0]}; // @[Cat.scala 33:92]
  wire [63:0] _T_26 = {48'h0,io_in_bits_ctrl_data_src2[7:0],8'h0}; // @[Cat.scala 33:92]
  wire [63:0] _T_32 = {40'h0,io_in_bits_ctrl_data_src2[7:0],16'h0}; // @[Cat.scala 33:92]
  wire [63:0] _T_38 = {32'h0,io_in_bits_ctrl_data_src2[7:0],24'h0}; // @[Cat.scala 33:92]
  wire [63:0] _T_44 = {24'h0,io_in_bits_ctrl_data_src2[7:0],32'h0}; // @[Cat.scala 33:92]
  wire [63:0] _T_50 = {16'h0,io_in_bits_ctrl_data_src2[7:0],40'h0}; // @[Cat.scala 33:92]
  wire [63:0] _T_56 = {8'h0,io_in_bits_ctrl_data_src2[7:0],48'h0}; // @[Cat.scala 33:92]
  wire [63:0] _T_61 = {io_in_bits_ctrl_data_src2[7:0],56'h0}; // @[Cat.scala 33:92]
  wire  _GEN_5 = 7'h74 == io_in_bits_ctrl_signal_aluoptype | 7'h77 == io_in_bits_ctrl_signal_aluoptype; // @[MEM.scala 53:44 79:10]
  wire  _GEN_7 = 7'he == io_in_bits_ctrl_signal_aluoptype ? 1'h0 : _GEN_5; // @[MEM.scala 53:44]
  wire  _GEN_9 = 7'h6f == io_in_bits_ctrl_signal_aluoptype ? 1'h0 : _GEN_7; // @[MEM.scala 53:44]
  wire  _GEN_11 = 7'h11 == io_in_bits_ctrl_signal_aluoptype ? 1'h0 : _GEN_9; // @[MEM.scala 53:44]
  wire  _GEN_13 = 7'h47 == io_in_bits_ctrl_signal_aluoptype ? 1'h0 : _GEN_11; // @[MEM.scala 53:44]
  wire  _GEN_15 = 7'h70 == io_in_bits_ctrl_signal_aluoptype | _GEN_13; // @[MEM.scala 53:44 63:10]
  wire  _GEN_17 = 7'h46 == io_in_bits_ctrl_signal_aluoptype | _GEN_15; // @[MEM.scala 53:44 59:10]
  wire [63:0] _wdata_temp_T_2 = {48'h0,io_in_bits_ctrl_data_src2[15:0]}; // @[Cat.scala 33:92]
  wire [63:0] _wdata_temp_T_6 = {32'h0,io_in_bits_ctrl_data_src2[15:0],16'h0}; // @[Cat.scala 33:92]
  wire [63:0] _wdata_temp_T_10 = {16'h0,io_in_bits_ctrl_data_src2[15:0],32'h0}; // @[Cat.scala 33:92]
  wire [63:0] _wdata_temp_T_13 = {io_in_bits_ctrl_data_src2[15:0],48'h0}; // @[Cat.scala 33:92]
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
  wire [63:0] _wdata_temp_T_26 = {io_in_bits_ctrl_data_src2[31:0],32'h0}; // @[Cat.scala 33:92]
  wire [63:0] _wdata_temp_T_29 = {32'h0,io_in_bits_ctrl_data_src2[31:0]}; // @[Cat.scala 33:92]
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
  wire  mem_result_sign = io_cache_io_rdata_rep_bits_rdata[63]; // @[util.scala 11:19]
  wire [31:0] _mem_result_T_4 = mem_result_sign ? 32'hffffffff : 32'h0; // @[Bitwise.scala 77:12]
  wire [63:0] _mem_result_T_5 = {_mem_result_T_4,io_cache_io_rdata_rep_bits_rdata[63:32]}; // @[Cat.scala 33:92]
  wire  mem_result_sign_1 = io_cache_io_rdata_rep_bits_rdata[31]; // @[util.scala 11:19]
  wire [31:0] _mem_result_T_8 = mem_result_sign_1 ? 32'hffffffff : 32'h0; // @[Bitwise.scala 77:12]
  wire [63:0] _mem_result_T_9 = {_mem_result_T_8,io_cache_io_rdata_rep_bits_rdata[31:0]}; // @[Cat.scala 33:92]
  wire [63:0] _mem_result_T_10 = addr_temp[2] ? _mem_result_T_5 : _mem_result_T_9; // @[MEM.scala 150:24]
  wire [63:0] _mem_result_T_15 = {32'h0,io_cache_io_rdata_rep_bits_rdata[63:32]}; // @[Cat.scala 33:92]
  wire [63:0] _mem_result_T_18 = {32'h0,io_cache_io_rdata_rep_bits_rdata[31:0]}; // @[Cat.scala 33:92]
  wire [63:0] _mem_result_T_19 = addr_temp[2] ? _mem_result_T_15 : _mem_result_T_18; // @[MEM.scala 153:24]
  wire [7:0] _mem_result_T_20 = _T_15 ? io_cache_io_rdata_rep_bits_rdata[63:56] : 8'h0; // @[Mux.scala 101:16]
  wire [7:0] _mem_result_T_21 = _T_13 ? io_cache_io_rdata_rep_bits_rdata[55:48] : _mem_result_T_20; // @[Mux.scala 101:16]
  wire [7:0] _mem_result_T_22 = _T_11 ? io_cache_io_rdata_rep_bits_rdata[47:40] : _mem_result_T_21; // @[Mux.scala 101:16]
  wire [7:0] _mem_result_T_23 = _T_9 ? io_cache_io_rdata_rep_bits_rdata[39:32] : _mem_result_T_22; // @[Mux.scala 101:16]
  wire [7:0] _mem_result_T_24 = _T_7 ? io_cache_io_rdata_rep_bits_rdata[31:24] : _mem_result_T_23; // @[Mux.scala 101:16]
  wire [7:0] _mem_result_T_25 = _T_5 ? io_cache_io_rdata_rep_bits_rdata[23:16] : _mem_result_T_24; // @[Mux.scala 101:16]
  wire [7:0] _mem_result_T_26 = _T_3 ? io_cache_io_rdata_rep_bits_rdata[15:8] : _mem_result_T_25; // @[Mux.scala 101:16]
  wire [7:0] _mem_result_T_27 = _T_1 ? io_cache_io_rdata_rep_bits_rdata[7:0] : _mem_result_T_26; // @[Mux.scala 101:16]
  wire [63:0] _mem_result_T_29 = {56'h0,_mem_result_T_27}; // @[Cat.scala 33:92]
  wire  mem_result_sign_2 = _mem_result_T_27[7]; // @[util.scala 11:19]
  wire [55:0] _mem_result_T_39 = mem_result_sign_2 ? 56'hffffffffffffff : 56'h0; // @[Bitwise.scala 77:12]
  wire [63:0] _mem_result_T_40 = {_mem_result_T_39,_mem_result_T_27}; // @[Cat.scala 33:92]
  wire [15:0] _mem_result_T_41 = _T_116 ? io_cache_io_rdata_rep_bits_rdata[63:48] : 16'h0; // @[Mux.scala 101:16]
  wire [15:0] _mem_result_T_42 = _T_113 ? io_cache_io_rdata_rep_bits_rdata[47:32] : _mem_result_T_41; // @[Mux.scala 101:16]
  wire [15:0] _mem_result_T_43 = _T_110 ? io_cache_io_rdata_rep_bits_rdata[31:16] : _mem_result_T_42; // @[Mux.scala 101:16]
  wire [15:0] _mem_result_T_44 = _T_107 ? io_cache_io_rdata_rep_bits_rdata[15:0] : _mem_result_T_43; // @[Mux.scala 101:16]
  wire  mem_result_sign_3 = _mem_result_T_44[15]; // @[util.scala 11:19]
  wire [47:0] _mem_result_T_46 = mem_result_sign_3 ? 48'hffffffffffff : 48'h0; // @[Bitwise.scala 77:12]
  wire [63:0] _mem_result_T_47 = {_mem_result_T_46,_mem_result_T_44}; // @[Cat.scala 33:92]
  wire [63:0] _mem_result_T_53 = {48'h0,_mem_result_T_44}; // @[Cat.scala 33:92]
  wire [63:0] _GEN_36 = _T_72 ? _mem_result_T_53 : 64'h0; // @[MEM.scala 145:44 165:18]
  wire [63:0] _GEN_37 = _T_71 ? _mem_result_T_47 : _GEN_36; // @[MEM.scala 145:44 162:18]
  wire [63:0] _GEN_38 = _T_68 ? _mem_result_T_40 : _GEN_37; // @[MEM.scala 145:44 159:18]
  wire [63:0] _GEN_39 = _T_67 ? _mem_result_T_29 : _GEN_38; // @[MEM.scala 145:44 156:18]
  wire [63:0] _GEN_40 = _T_66 ? _mem_result_T_19 : _GEN_39; // @[MEM.scala 145:44 153:18]
  wire [63:0] _GEN_41 = _T_65 ? _mem_result_T_10 : _GEN_40; // @[MEM.scala 145:44 150:18]
  wire [63:0] mem_result = _T_62 ? io_cache_io_rdata_rep_bits_rdata : _GEN_41; // @[MEM.scala 145:44 147:18]
  wire  _io_out_bits_ctrl_rf_rfData_T = io_in_bits_ctrl_signal_fuType == 3'h4; // @[MEM.scala 175:67]
  wire  _io_cache_io_addr_req_valid_T_1 = _io_out_bits_ctrl_rf_rfData_T & io_in_valid; // @[MEM.scala 180:82]
  wire  _io_out_valid_T_6 = io_in_valid & _io_out_bits_ctrl_rf_rfData_T & (~io_cache_io_rdata_rep_valid & ~
    io_cache_io_wdata_rep); // @[MEM.scala 191:96]
  assign io_in_ready = _io_out_valid_T_6 ? 1'h0 : io_out_ready; // @[MEM.scala 192:21]
  assign io_out_valid = ~io_in_valid | io_in_valid & _io_out_bits_ctrl_rf_rfData_T & (~io_cache_io_rdata_rep_valid & ~
    io_cache_io_wdata_rep) ? 1'h0 : 1'h1; // @[MEM.scala 191:22]
  assign io_out_bits_ctrl_signal_inst_valid = io_in_valid & io_in_bits_ctrl_signal_inst_valid; // @[MEM.scala 174:44]
  assign io_out_bits_ctrl_signal_rfWen = io_in_bits_ctrl_signal_rfWen; // @[MEM.scala 170:27]
  assign io_out_bits_ctrl_signal_ertn_flush = io_in_bits_ctrl_signal_ertn_flush; // @[MEM.scala 170:27]
  assign io_out_bits_ctrl_signal_excp_flush = io_in_bits_ctrl_signal_excp_flush; // @[MEM.scala 170:27]
  assign io_out_bits_ctrl_flow_PC = io_in_bits_ctrl_flow_PC; // @[MEM.scala 171:25]
  assign io_out_bits_ctrl_flow_inst = io_in_bits_ctrl_flow_inst; // @[MEM.scala 171:25]
  assign io_out_bits_ctrl_flow_Dnpc = io_in_bits_ctrl_flow_Dnpc; // @[MEM.scala 171:25]
  assign io_out_bits_ctrl_flow_skip = addr_temp == 64'ha0000048 | addr_temp == 64'ha00003f8 | addr_temp >= 64'ha0000000
     & addr_temp <= 64'ha1200000; // @[MEM.scala 173:97]
  assign io_out_bits_ctrl_rf_rfDest = io_in_bits_ctrl_rf_rfDest; // @[MEM.scala 172:23]
  assign io_out_bits_ctrl_rf_rfWen = io_in_valid & io_in_bits_ctrl_signal_rfWen; // @[MEM.scala 176:35]
  assign io_out_bits_ctrl_rf_rfData = io_in_bits_ctrl_signal_fuType == 3'h4 ? mem_result : io_in_bits_ctrl_rf_rfData; // @[MEM.scala 175:36]
  assign io_out_bits_ctrl_csr_csr_data = io_in_bits_ctrl_csr_csr_data; // @[MEM.scala 177:24]
  assign io_out_bits_ctrl_csr_csr_en = io_in_valid & io_in_bits_ctrl_csr_csr_en; // @[MEM.scala 178:37]
  assign io_out_bits_ctrl_csr_csr_idx = io_in_bits_ctrl_csr_csr_idx; // @[MEM.scala 177:24]
  assign io_cache_io_addr_req_valid = _io_out_bits_ctrl_rf_rfData_T & io_in_valid & io_out_bits_ctrl_signal_inst_valid; // @[MEM.scala 180:97]
  assign io_cache_io_addr_req_bits_addr = 7'h45 == io_in_bits_ctrl_signal_aluoptype ? _addr_temp_T_1 : _GEN_16; // @[MEM.scala 53:44 55:17]
  assign io_cache_io_addr_req_bits_ce = _io_cache_io_addr_req_valid_T_1 & io_out_bits_ctrl_signal_inst_valid; // @[MEM.scala 182:99]
  assign io_cache_io_addr_req_bits_we = 7'h45 == io_in_bits_ctrl_signal_aluoptype ? 1'h0 : _GEN_17; // @[MEM.scala 53:44]
  assign io_cache_io_wdata_req_bits_wdata = _T_63 ? io_in_bits_ctrl_data_src2 : _GEN_33; // @[MEM.scala 92:44 96:18]
  assign io_cache_io_wdata_req_bits_wmask = _T_63 ? 8'hff : _GEN_32; // @[MEM.scala 92:44 95:18]
endmodule
module ysyx_22050321_WB(
  output        io_in_ready,
  input         io_in_valid,
  input         io_in_bits_ctrl_signal_inst_valid,
  input         io_in_bits_ctrl_signal_rfWen,
  input         io_in_bits_ctrl_signal_ertn_flush,
  input         io_in_bits_ctrl_signal_excp_flush,
  input  [63:0] io_in_bits_ctrl_flow_PC,
  input  [31:0] io_in_bits_ctrl_flow_inst,
  input  [63:0] io_in_bits_ctrl_flow_Dnpc,
  input         io_in_bits_ctrl_flow_skip,
  input  [4:0]  io_in_bits_ctrl_rf_rfDest,
  input  [63:0] io_in_bits_ctrl_rf_rfData,
  input  [63:0] io_in_bits_ctrl_csr_csr_data,
  input         io_in_bits_ctrl_csr_csr_en,
  input  [11:0] io_in_bits_ctrl_csr_csr_idx,
  input         io_out_ready,
  output        io_out_valid,
  output        io_out_bits_ctrl_signal_inst_valid,
  output        io_out_bits_ctrl_signal_ertn_flush,
  output        io_out_bits_ctrl_signal_excp_flush,
  output [63:0] io_out_bits_ctrl_flow_PC,
  output [31:0] io_out_bits_ctrl_flow_inst,
  output [63:0] io_out_bits_ctrl_flow_Dnpc,
  output        io_out_bits_ctrl_flow_skip,
  output [4:0]  io_out_bits_ctrl_rf_rfDest,
  output        io_out_bits_ctrl_rf_rfWen,
  output [63:0] io_out_bits_ctrl_rf_rfData,
  output [63:0] io_out_bits_ctrl_csr_csr_data,
  output        io_out_bits_ctrl_csr_csr_en,
  output [11:0] io_out_bits_ctrl_csr_csr_idx,
  input         io_icache_busy,
  output        io_stall
);
  assign io_in_ready = io_stall ? 1'h0 : 1'h1; // @[WB.scala 31:21]
  assign io_out_valid = io_stall ? 1'h0 : io_in_valid; // @[WB.scala 30:22]
  assign io_out_bits_ctrl_signal_inst_valid = io_in_valid & io_in_bits_ctrl_signal_inst_valid; // @[WB.scala 23:44]
  assign io_out_bits_ctrl_signal_ertn_flush = io_icache_busy ? 1'h0 : io_in_bits_ctrl_signal_ertn_flush & io_in_valid; // @[WB.scala 27:44]
  assign io_out_bits_ctrl_signal_excp_flush = io_icache_busy ? 1'h0 : io_in_bits_ctrl_signal_excp_flush & io_in_valid; // @[WB.scala 26:44]
  assign io_out_bits_ctrl_flow_PC = io_in_bits_ctrl_flow_PC; // @[WB.scala 16:15]
  assign io_out_bits_ctrl_flow_inst = io_in_bits_ctrl_flow_inst; // @[WB.scala 16:15]
  assign io_out_bits_ctrl_flow_Dnpc = io_in_bits_ctrl_flow_Dnpc; // @[WB.scala 16:15]
  assign io_out_bits_ctrl_flow_skip = io_in_bits_ctrl_flow_skip; // @[WB.scala 16:15]
  assign io_out_bits_ctrl_rf_rfDest = io_in_bits_ctrl_rf_rfDest; // @[WB.scala 16:15]
  assign io_out_bits_ctrl_rf_rfWen = io_in_valid & io_in_bits_ctrl_signal_rfWen; // @[WB.scala 24:35]
  assign io_out_bits_ctrl_rf_rfData = io_in_bits_ctrl_rf_rfData; // @[WB.scala 16:15]
  assign io_out_bits_ctrl_csr_csr_data = io_in_bits_ctrl_csr_csr_data; // @[WB.scala 16:15]
  assign io_out_bits_ctrl_csr_csr_en = io_in_valid & io_in_bits_ctrl_csr_csr_en; // @[WB.scala 22:37]
  assign io_out_bits_ctrl_csr_csr_idx = io_in_bits_ctrl_csr_csr_idx; // @[WB.scala 16:15]
  assign io_stall = io_in_valid & (io_in_bits_ctrl_signal_excp_flush | io_in_bits_ctrl_signal_ertn_flush) &
    io_icache_busy; // @[WB.scala 28:106]
endmodule
module ysyx_22050321_Bypass(
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
module ysyx_22050321_Cache_Data(
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
module ysyx_22050321_Scanf_data(
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
module ysyx_22050321_Cache_Axi(
  input         clock,
  input         reset,
  input         io_in_addr_req_valid,
  input  [63:0] io_in_addr_req_bits_addr,
  input         io_in_rdata_rep_ready,
  output        io_in_rdata_rep_valid,
  output [63:0] io_in_rdata_rep_bits_rdata,
  output        io_cache_busy,
  input         io_out_raddr_req_ready,
  output        io_out_raddr_req_valid,
  output [63:0] io_out_raddr_req_bits_addr,
  input         io_out_rdata_rep_valid,
  input  [63:0] io_out_rdata_rep_bits_data,
  input         io_out_rdata_rep_bits_last,
  input         io_out_wb_valid,
  input  [1:0]  io_out_wb_bits_breap
);
`ifdef RANDOMIZE_MEM_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [511:0] _RAND_5;
  reg [63:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
`endif // RANDOMIZE_REG_INIT
  wire  Cache_data_clock; // @[Cache.scala 436:26]
  wire  Cache_data_io_in_valid; // @[Cache.scala 436:26]
  wire [63:0] Cache_data_io_in_addr; // @[Cache.scala 436:26]
  wire [63:0] Cache_data_io_write_bus_addr; // @[Cache.scala 436:26]
  wire  Cache_data_io_write_bus_valid; // @[Cache.scala 436:26]
  wire [1:0] Cache_data_io_write_bus_waymask; // @[Cache.scala 436:26]
  wire [511:0] Cache_data_io_write_bus_wdata; // @[Cache.scala 436:26]
  wire  Cache_data_io_out_valid; // @[Cache.scala 436:26]
  wire [52:0] Cache_data_io_out_bits_meat_tag_0; // @[Cache.scala 436:26]
  wire [52:0] Cache_data_io_out_bits_meat_tag_1; // @[Cache.scala 436:26]
  wire  Cache_data_io_out_bits_meat_valid_0; // @[Cache.scala 436:26]
  wire  Cache_data_io_out_bits_meat_valid_1; // @[Cache.scala 436:26]
  wire [511:0] Cache_data_io_out_bits_data_data_0; // @[Cache.scala 436:26]
  wire [511:0] Cache_data_io_out_bits_data_data_1; // @[Cache.scala 436:26]
  wire [52:0] Cache_data_io_out_bits_ctrl_data_tag; // @[Cache.scala 436:26]
  wire [4:0] Cache_data_io_out_bits_ctrl_data_index; // @[Cache.scala 436:26]
  wire [5:0] Cache_data_io_out_bits_ctrl_data_offset; // @[Cache.scala 436:26]
  wire  Scanf_io_in_valid; // @[Cache.scala 437:21]
  wire [52:0] Scanf_io_in_bits_meat_tag_0; // @[Cache.scala 437:21]
  wire [52:0] Scanf_io_in_bits_meat_tag_1; // @[Cache.scala 437:21]
  wire  Scanf_io_in_bits_meat_valid_0; // @[Cache.scala 437:21]
  wire  Scanf_io_in_bits_meat_valid_1; // @[Cache.scala 437:21]
  wire [511:0] Scanf_io_in_bits_data_data_0; // @[Cache.scala 437:21]
  wire [511:0] Scanf_io_in_bits_data_data_1; // @[Cache.scala 437:21]
  wire [52:0] Scanf_io_in_bits_ctrl_data_tag; // @[Cache.scala 437:21]
  wire [4:0] Scanf_io_in_bits_ctrl_data_index; // @[Cache.scala 437:21]
  wire  Scanf_io_out_bits_hit; // @[Cache.scala 437:21]
  wire [511:0] Scanf_io_out_bits_data; // @[Cache.scala 437:21]
  wire [4:0] Scanf_io_out_bits_meta_ctrl_data_index; // @[Cache.scala 437:21]
  wire  Scanf_io_out_bits_hit_way_0; // @[Cache.scala 437:21]
  wire  Scanf_io_out_bits_hit_way_1; // @[Cache.scala 437:21]
  wire [52:0] Scanf_io_out_bits_tag_0; // @[Cache.scala 437:21]
  wire [52:0] Scanf_io_out_bits_tag_1; // @[Cache.scala 437:21]
  reg  lru [0:31]; // @[Cache.scala 456:24]
  wire  lru_lru_w_MPORT_en; // @[Cache.scala 456:24]
  wire [4:0] lru_lru_w_MPORT_addr; // @[Cache.scala 456:24]
  wire  lru_lru_w_MPORT_data; // @[Cache.scala 456:24]
  wire  lru_MPORT_data; // @[Cache.scala 456:24]
  wire [4:0] lru_MPORT_addr; // @[Cache.scala 456:24]
  wire  lru_MPORT_mask; // @[Cache.scala 456:24]
  wire  lru_MPORT_en; // @[Cache.scala 456:24]
  wire  lru_MPORT_1_data; // @[Cache.scala 456:24]
  wire [4:0] lru_MPORT_1_addr; // @[Cache.scala 456:24]
  wire  lru_MPORT_1_mask; // @[Cache.scala 456:24]
  wire  lru_MPORT_1_en; // @[Cache.scala 456:24]
  wire  lru_MPORT_2_data; // @[Cache.scala 456:24]
  wire [4:0] lru_MPORT_2_addr; // @[Cache.scala 456:24]
  wire  lru_MPORT_2_mask; // @[Cache.scala 456:24]
  wire  lru_MPORT_2_en; // @[Cache.scala 456:24]
  wire  lru_MPORT_3_data; // @[Cache.scala 456:24]
  wire [4:0] lru_MPORT_3_addr; // @[Cache.scala 456:24]
  wire  lru_MPORT_3_mask; // @[Cache.scala 456:24]
  wire  lru_MPORT_3_en; // @[Cache.scala 456:24]
  reg  lru_lru_w_MPORT_en_pipe_0;
  reg [4:0] lru_lru_w_MPORT_addr_pipe_0;
  reg [2:0] state; // @[Cache.scala 443:22]
  reg [1:0] read_state; // @[Cache.scala 444:27]
  reg [511:0] data_line_reg; // @[Cache.scala 448:30]
  reg [63:0] mem_addr_reg; // @[Cache.scala 449:29]
  reg  lru_r; // @[Cache.scala 451:22]
  wire  _T = 3'h0 == state; // @[Cache.scala 479:17]
  wire  _T_1 = 3'h1 == state; // @[Cache.scala 479:17]
  wire  _T_3 = 3'h2 == state; // @[Cache.scala 479:17]
  wire  _T_4 = read_state == 2'h3; // @[Cache.scala 505:48]
  wire  _T_5 = io_in_rdata_rep_ready & read_state == 2'h3; // @[Cache.scala 505:34]
  wire [2:0] _GEN_6 = io_in_rdata_rep_ready & read_state == 2'h3 ? 3'h0 : state; // @[Cache.scala 505:72 506:15 443:22]
  wire [2:0] _GEN_7 = _T_5 | io_out_wb_valid & io_out_wb_bits_breap == 2'h0 ? 3'h0 : state; // @[Cache.scala 518:119 519:15 443:22]
  wire [2:0] _GEN_8 = 3'h4 == state ? _GEN_7 : state; // @[Cache.scala 479:17 443:22]
  wire [2:0] _GEN_9 = 3'h3 == state ? state : _GEN_8; // @[Cache.scala 479:17 443:22]
  wire  _T_14 = state == 3'h2; // @[Cache.scala 524:17]
  wire [1:0] _GEN_17 = io_out_rdata_rep_valid & io_out_rdata_rep_bits_last ? 2'h3 : read_state; // @[Cache.scala 543:65 544:20 444:27]
  wire [1:0] _GEN_18 = io_in_rdata_rep_ready ? 2'h0 : read_state; // @[Cache.scala 548:35 549:20 444:27]
  wire [1:0] _GEN_19 = 2'h3 == read_state ? _GEN_18 : read_state; // @[Cache.scala 531:21 444:27]
  wire [63:0] _mem_addr_reg_T_2 = {io_in_addr_req_bits_addr[63:6],6'h0}; // @[Cat.scala 33:92]
  wire  hit_way_0 = Scanf_io_out_bits_hit_way_0; // @[Cache.scala 475:21 730:11]
  wire  hit_way_1 = Scanf_io_out_bits_hit_way_1; // @[Cache.scala 475:21 730:11]
  wire  lru_w = lru_lru_w_MPORT_data;
  wire  _GEN_44 = ~Scanf_io_out_bits_hit ? 1'h0 : hit_way_0; // @[Cache.scala 456:24 582:25]
  wire  _GEN_48 = ~Scanf_io_out_bits_hit ? 1'h0 : hit_way_1; // @[Cache.scala 456:24 582:25]
  wire [511:0] _data_line_reg_T_1 = {io_out_rdata_rep_bits_data,data_line_reg[511:64]}; // @[Cat.scala 33:92]
  wire [511:0] _GEN_51 = read_state == 2'h2 & io_out_rdata_rep_valid ? _data_line_reg_T_1 : data_line_reg; // @[Cache.scala 608:72 609:23 448:30]
  wire  _GEN_59 = lru_r ? 1'h0 : 1'h1; // @[Cache.scala 456:24 614:29]
  wire  _GEN_63 = _T_5 & lru_r; // @[Cache.scala 456:24 613:60]
  wire  _GEN_68 = _T_5 & _GEN_59; // @[Cache.scala 456:24 613:60]
  wire  _GEN_84 = _T_1 & _GEN_44; // @[Cache.scala 577:17 456:24]
  wire  _GEN_88 = _T_1 & _GEN_48; // @[Cache.scala 577:17 456:24]
  wire  _GEN_94 = _T_1 ? 1'h0 : _T_3 & _GEN_63; // @[Cache.scala 577:17 456:24]
  wire  _GEN_99 = _T_1 ? 1'h0 : _T_3 & _GEN_68; // @[Cache.scala 577:17 456:24]
  wire [63:0] _GEN_122 = 3'h7 == io_in_addr_req_bits_addr[5:3] ? Scanf_io_out_bits_data[511:448] : 64'h0; // @[Cache.scala 639:115 669:16]
  wire [63:0] _GEN_123 = 3'h7 == io_in_addr_req_bits_addr[5:3] ? data_line_reg[511:448] : 64'h0; // @[Cache.scala 639:115 670:16]
  wire [63:0] _GEN_124 = 3'h6 == io_in_addr_req_bits_addr[5:3] ? Scanf_io_out_bits_data[447:384] : _GEN_122; // @[Cache.scala 639:115 665:16]
  wire [63:0] _GEN_125 = 3'h6 == io_in_addr_req_bits_addr[5:3] ? data_line_reg[447:384] : _GEN_123; // @[Cache.scala 639:115 666:16]
  wire [63:0] _GEN_126 = 3'h5 == io_in_addr_req_bits_addr[5:3] ? Scanf_io_out_bits_data[383:320] : _GEN_124; // @[Cache.scala 639:115 661:16]
  wire [63:0] _GEN_127 = 3'h5 == io_in_addr_req_bits_addr[5:3] ? data_line_reg[383:320] : _GEN_125; // @[Cache.scala 639:115 662:16]
  wire [63:0] _GEN_128 = 3'h4 == io_in_addr_req_bits_addr[5:3] ? Scanf_io_out_bits_data[319:256] : _GEN_126; // @[Cache.scala 639:115 657:16]
  wire [63:0] _GEN_129 = 3'h4 == io_in_addr_req_bits_addr[5:3] ? data_line_reg[319:256] : _GEN_127; // @[Cache.scala 639:115 658:16]
  wire [63:0] _GEN_130 = 3'h3 == io_in_addr_req_bits_addr[5:3] ? Scanf_io_out_bits_data[255:192] : _GEN_128; // @[Cache.scala 639:115 653:16]
  wire [63:0] _GEN_131 = 3'h3 == io_in_addr_req_bits_addr[5:3] ? data_line_reg[255:192] : _GEN_129; // @[Cache.scala 639:115 654:16]
  wire [63:0] _GEN_132 = 3'h2 == io_in_addr_req_bits_addr[5:3] ? Scanf_io_out_bits_data[191:128] : _GEN_130; // @[Cache.scala 639:115 649:16]
  wire [63:0] _GEN_133 = 3'h2 == io_in_addr_req_bits_addr[5:3] ? data_line_reg[191:128] : _GEN_131; // @[Cache.scala 639:115 650:16]
  wire [63:0] _GEN_134 = 3'h1 == io_in_addr_req_bits_addr[5:3] ? Scanf_io_out_bits_data[127:64] : _GEN_132; // @[Cache.scala 639:115 645:16]
  wire [63:0] _GEN_135 = 3'h1 == io_in_addr_req_bits_addr[5:3] ? data_line_reg[127:64] : _GEN_133; // @[Cache.scala 639:115 646:16]
  wire [63:0] hit_data = 3'h0 == io_in_addr_req_bits_addr[5:3] ? Scanf_io_out_bits_data[63:0] : _GEN_134; // @[Cache.scala 639:115 641:16]
  wire [63:0] mem_data = 3'h0 == io_in_addr_req_bits_addr[5:3] ? data_line_reg[63:0] : _GEN_135; // @[Cache.scala 639:115 642:16]
  wire  _io_in_rdata_rep_bits_rdata_T_1 = state == 3'h1 & Scanf_io_out_bits_hit; // @[Cache.scala 718:54]
  wire  _Cache_data_io_in_valid_T = state == 3'h0; // @[Cache.scala 723:63]
  reg  Scanf_io_in_valid_REG; // @[Cache.scala 725:31]
  wire  _io_out_raddr_req_valid_T = read_state == 2'h1; // @[Cache.scala 753:46]
  ysyx_22050321_Cache_Data Cache_data ( // @[Cache.scala 436:26]
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
  ysyx_22050321_Scanf_data Scanf ( // @[Cache.scala 437:21]
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
  assign lru_lru_w_MPORT_data = lru[lru_lru_w_MPORT_addr]; // @[Cache.scala 456:24]
  assign lru_MPORT_data = 1'h1;
  assign lru_MPORT_addr = Cache_data_io_out_bits_ctrl_data_index;
  assign lru_MPORT_mask = 1'h1;
  assign lru_MPORT_en = _T ? 1'h0 : _GEN_84;
  assign lru_MPORT_1_data = 1'h0;
  assign lru_MPORT_1_addr = Cache_data_io_out_bits_ctrl_data_index;
  assign lru_MPORT_1_mask = 1'h1;
  assign lru_MPORT_1_en = _T ? 1'h0 : _GEN_88;
  assign lru_MPORT_2_data = 1'h0;
  assign lru_MPORT_2_addr = Cache_data_io_out_bits_ctrl_data_index;
  assign lru_MPORT_2_mask = 1'h1;
  assign lru_MPORT_2_en = _T ? 1'h0 : _GEN_94;
  assign lru_MPORT_3_data = 1'h1;
  assign lru_MPORT_3_addr = Cache_data_io_out_bits_ctrl_data_index;
  assign lru_MPORT_3_mask = 1'h1;
  assign lru_MPORT_3_en = _T ? 1'h0 : _GEN_99;
  assign io_in_rdata_rep_valid = _io_in_rdata_rep_bits_rdata_T_1 | _T_14 & _T_4; // @[Cache.scala 773:58]
  assign io_in_rdata_rep_bits_rdata = state == 3'h1 & Scanf_io_out_bits_hit ? hit_data : mem_data; // @[Cache.scala 718:36]
  assign io_cache_busy = ~_Cache_data_io_in_valid_T; // @[Cache.scala 835:20]
  assign io_out_raddr_req_valid = read_state == 2'h1; // @[Cache.scala 753:46]
  assign io_out_raddr_req_bits_addr = _io_out_raddr_req_valid_T ? mem_addr_reg : 64'h0; // @[Cache.scala 756:38]
  assign Cache_data_clock = clock;
  assign Cache_data_io_in_valid = io_in_addr_req_valid & state == 3'h0; // @[Cache.scala 723:54]
  assign Cache_data_io_in_addr = io_in_addr_req_bits_addr; // @[Cache.scala 724:25]
  assign Cache_data_io_write_bus_addr = _T_4 ? io_in_addr_req_bits_addr : 64'h0; // @[Cache.scala 803:40]
  assign Cache_data_io_write_bus_valid = read_state == 2'h3; // @[Cache.scala 802:53]
  assign Cache_data_io_write_bus_waymask = lru_r ? 2'h2 : 2'h1; // @[Cache.scala 805:22]
  assign Cache_data_io_write_bus_wdata = _T_4 ? data_line_reg : 512'h0; // @[Cache.scala 804:41]
  assign Scanf_io_in_valid = Scanf_io_in_valid_REG; // @[Cache.scala 725:21]
  assign Scanf_io_in_bits_meat_tag_0 = Cache_data_io_out_bits_meat_tag_0; // @[Cache.scala 726:25]
  assign Scanf_io_in_bits_meat_tag_1 = Cache_data_io_out_bits_meat_tag_1; // @[Cache.scala 726:25]
  assign Scanf_io_in_bits_meat_valid_0 = Cache_data_io_out_bits_meat_valid_0; // @[Cache.scala 726:25]
  assign Scanf_io_in_bits_meat_valid_1 = Cache_data_io_out_bits_meat_valid_1; // @[Cache.scala 726:25]
  assign Scanf_io_in_bits_data_data_0 = Cache_data_io_out_bits_data_data_0; // @[Cache.scala 727:25]
  assign Scanf_io_in_bits_data_data_1 = Cache_data_io_out_bits_data_data_1; // @[Cache.scala 727:25]
  assign Scanf_io_in_bits_ctrl_data_tag = Cache_data_io_out_bits_ctrl_data_tag; // @[Cache.scala 728:30]
  assign Scanf_io_in_bits_ctrl_data_index = Cache_data_io_out_bits_ctrl_data_index; // @[Cache.scala 728:30]
  always @(posedge clock) begin
    if (lru_MPORT_en & lru_MPORT_mask) begin
      lru[lru_MPORT_addr] <= lru_MPORT_data; // @[Cache.scala 456:24]
    end
    if (lru_MPORT_1_en & lru_MPORT_1_mask) begin
      lru[lru_MPORT_1_addr] <= lru_MPORT_1_data; // @[Cache.scala 456:24]
    end
    if (lru_MPORT_2_en & lru_MPORT_2_mask) begin
      lru[lru_MPORT_2_addr] <= lru_MPORT_2_data; // @[Cache.scala 456:24]
    end
    if (lru_MPORT_3_en & lru_MPORT_3_mask) begin
      lru[lru_MPORT_3_addr] <= lru_MPORT_3_data; // @[Cache.scala 456:24]
    end
    lru_lru_w_MPORT_en_pipe_0 <= 1'h1;
    if (1'h1) begin
      lru_lru_w_MPORT_addr_pipe_0 <= Cache_data_io_out_bits_ctrl_data_index;
    end
    if (reset) begin // @[Cache.scala 443:22]
      state <= 3'h0; // @[Cache.scala 443:22]
    end else if (3'h0 == state) begin // @[Cache.scala 479:17]
      if (io_in_addr_req_valid) begin // @[Cache.scala 481:34]
        state <= 3'h1; // @[Cache.scala 482:15]
      end else begin
        state <= 3'h0; // @[Cache.scala 484:15]
      end
    end else if (3'h1 == state) begin // @[Cache.scala 479:17]
      if (Scanf_io_out_bits_hit) begin // @[Cache.scala 488:25]
        state <= 3'h0; // @[Cache.scala 489:15]
      end else begin
        state <= 3'h2; // @[Cache.scala 499:17]
      end
    end else if (3'h2 == state) begin // @[Cache.scala 479:17]
      state <= _GEN_6;
    end else begin
      state <= _GEN_9;
    end
    if (reset) begin // @[Cache.scala 444:27]
      read_state <= 2'h0; // @[Cache.scala 444:27]
    end else if (2'h0 == read_state) begin // @[Cache.scala 531:21]
      if (_T_14) begin // @[Cache.scala 533:27]
        read_state <= 2'h1; // @[Cache.scala 534:20]
      end
    end else if (2'h1 == read_state) begin // @[Cache.scala 531:21]
      if (io_out_raddr_req_ready) begin // @[Cache.scala 538:35]
        read_state <= 2'h2; // @[Cache.scala 539:20]
      end
    end else if (2'h2 == read_state) begin // @[Cache.scala 531:21]
      read_state <= _GEN_17;
    end else begin
      read_state <= _GEN_19;
    end
    if (reset) begin // @[Cache.scala 448:30]
      data_line_reg <= 512'h0; // @[Cache.scala 448:30]
    end else if (!(_T)) begin // @[Cache.scala 577:17]
      if (!(_T_1)) begin // @[Cache.scala 577:17]
        if (_T_3) begin // @[Cache.scala 577:17]
          data_line_reg <= _GEN_51;
        end
      end
    end
    if (reset) begin // @[Cache.scala 449:29]
      mem_addr_reg <= 64'h0; // @[Cache.scala 449:29]
    end else if (!(_T)) begin // @[Cache.scala 577:17]
      if (_T_1) begin // @[Cache.scala 577:17]
        if (~Scanf_io_out_bits_hit) begin // @[Cache.scala 582:25]
          mem_addr_reg <= _mem_addr_reg_T_2; // @[Cache.scala 583:22]
        end
      end
    end
    if (reset) begin // @[Cache.scala 451:22]
      lru_r <= 1'h0; // @[Cache.scala 451:22]
    end else if (!(_T)) begin // @[Cache.scala 577:17]
      if (_T_1) begin // @[Cache.scala 577:17]
        if (~Scanf_io_out_bits_hit) begin // @[Cache.scala 582:25]
          lru_r <= lru_w; // @[Cache.scala 584:15]
        end
      end
    end
    Scanf_io_in_valid_REG <= Cache_data_io_out_valid; // @[Cache.scala 725:31]
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
  state = _RAND_3[2:0];
  _RAND_4 = {1{`RANDOM}};
  read_state = _RAND_4[1:0];
  _RAND_5 = {16{`RANDOM}};
  data_line_reg = _RAND_5[511:0];
  _RAND_6 = {2{`RANDOM}};
  mem_addr_reg = _RAND_6[63:0];
  _RAND_7 = {1{`RANDOM}};
  lru_r = _RAND_7[0:0];
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
module ysyx_22050321_Axi_FULLArbiter(
  input         clock,
  input         reset,
  output        io_in1_raddr_req_ready,
  input         io_in1_raddr_req_valid,
  input  [63:0] io_in1_raddr_req_bits_addr,
  input  [7:0]  io_in1_raddr_req_bits_len,
  output        io_in1_waddr_req_ready,
  input         io_in1_waddr_req_valid,
  input  [63:0] io_in1_waddr_req_bits_addr,
  input  [7:0]  io_in1_waddr_req_bits_len,
  input         io_in1_rdata_rep_ready,
  output        io_in1_rdata_rep_valid,
  output [63:0] io_in1_rdata_rep_bits_data,
  output        io_in1_rdata_rep_bits_last,
  output        io_in1_wdata_req_ready,
  input         io_in1_wdata_req_valid,
  input  [63:0] io_in1_wdata_req_bits_data,
  input  [7:0]  io_in1_wdata_req_bits_wstrb,
  input         io_in1_wdata_req_bits_last,
  input         io_in1_wb_ready,
  output        io_in1_wb_valid,
  output [1:0]  io_in1_wb_bits_breap,
  output        io_in2_raddr_req_ready,
  input         io_in2_raddr_req_valid,
  input  [63:0] io_in2_raddr_req_bits_addr,
  output        io_in2_rdata_rep_valid,
  output [63:0] io_in2_rdata_rep_bits_data,
  output        io_in2_rdata_rep_bits_last,
  output        io_in2_wb_valid,
  output [1:0]  io_in2_wb_bits_breap,
  input         io_out_raddr_req_ready,
  output        io_out_raddr_req_valid,
  output [63:0] io_out_raddr_req_bits_addr,
  output [7:0]  io_out_raddr_req_bits_len,
  input         io_out_waddr_req_ready,
  output        io_out_waddr_req_valid,
  output [63:0] io_out_waddr_req_bits_addr,
  output [7:0]  io_out_waddr_req_bits_len,
  output        io_out_rdata_rep_ready,
  input         io_out_rdata_rep_valid,
  input  [63:0] io_out_rdata_rep_bits_data,
  input         io_out_rdata_rep_bits_last,
  input         io_out_wdata_req_ready,
  output        io_out_wdata_req_valid,
  output [63:0] io_out_wdata_req_bits_data,
  output [7:0]  io_out_wdata_req_bits_wstrb,
  output        io_out_wdata_req_bits_last,
  output        io_out_wb_ready,
  input         io_out_wb_valid,
  input  [1:0]  io_out_wb_bits_breap
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  reg  state; // @[AxiArbiter.scala 14:22]
  reg  choose_r; // @[AxiArbiter.scala 15:25]
  wire  _T_1 = ~state; // @[AxiArbiter.scala 17:68]
  wire  _GEN_0 = io_out_rdata_rep_bits_last & io_out_rdata_rep_valid | io_out_wb_valid ? 1'h0 : state; // @[AxiArbiter.scala 110:87 111:15 14:22]
  wire  _GEN_2 = ~choose_r & io_out_rdata_rep_valid; // @[AxiArbiter.scala 100:28 126:30 175:30]
  wire  _GEN_3 = ~choose_r & io_out_wb_valid; // @[AxiArbiter.scala 100:28 116:23 177:23]
  wire  _GEN_4 = ~choose_r ? 1'h0 : io_out_rdata_rep_valid; // @[AxiArbiter.scala 100:28 129:30 172:30]
  wire  _GEN_5 = ~choose_r ? 1'h0 : io_out_wb_valid; // @[AxiArbiter.scala 100:28 131:23 162:23]
  wire  _GEN_6 = ~choose_r ? io_in1_rdata_rep_ready : 1'h1; // @[AxiArbiter.scala 100:28 125:30 171:30]
  wire  _GEN_7 = ~choose_r ? _GEN_0 : _GEN_0; // @[AxiArbiter.scala 100:28]
  wire  _GEN_8 = ~choose_r & io_in1_wdata_req_valid; // @[AxiArbiter.scala 100:28 113:30 159:30]
  wire  _GEN_9 = ~choose_r & io_out_wdata_req_ready; // @[AxiArbiter.scala 100:28 114:30 178:30]
  wire  _GEN_10 = ~choose_r ? io_in1_wb_ready : 1'h1; // @[AxiArbiter.scala 100:28 117:23 163:23]
  wire  _GEN_11 = ~choose_r ? io_in1_raddr_req_valid : io_in2_raddr_req_valid; // @[AxiArbiter.scala 100:28 119:30 165:30]
  wire  _GEN_12 = ~choose_r & io_out_raddr_req_ready; // @[AxiArbiter.scala 100:28 120:30 174:30]
  wire  _GEN_13 = ~choose_r & io_in1_waddr_req_valid; // @[AxiArbiter.scala 100:28 122:30 168:30]
  wire  _GEN_14 = ~choose_r & io_out_waddr_req_ready; // @[AxiArbiter.scala 100:28 123:30 176:30]
  wire  _GEN_15 = ~choose_r ? 1'h0 : io_out_raddr_req_ready; // @[AxiArbiter.scala 100:28 128:30 166:30]
  wire [63:0] _GEN_18 = ~choose_r ? io_in1_raddr_req_bits_addr : io_in2_raddr_req_bits_addr; // @[AxiArbiter.scala 100:28 134:29 180:29]
  wire [7:0] _GEN_20 = ~choose_r ? io_in1_raddr_req_bits_len : 8'h7; // @[AxiArbiter.scala 100:28 134:29 180:29]
  wire [63:0] _GEN_26 = ~choose_r ? io_in1_waddr_req_bits_addr : 64'h0; // @[AxiArbiter.scala 100:28 135:29 181:29]
  wire [7:0] _GEN_28 = ~choose_r ? io_in1_waddr_req_bits_len : 8'h7; // @[AxiArbiter.scala 100:28 135:29 181:29]
  wire [63:0] _GEN_41 = ~choose_r ? io_in1_wdata_req_bits_data : 64'h0; // @[AxiArbiter.scala 100:28 138:29 184:29]
  wire [7:0] _GEN_42 = ~choose_r ? io_in1_wdata_req_bits_wstrb : 8'h0; // @[AxiArbiter.scala 100:28 138:29 184:29]
  wire  _GEN_43 = ~choose_r & io_in1_wdata_req_bits_last; // @[AxiArbiter.scala 100:28 138:29 184:29]
  wire  _GEN_50 = state ? _GEN_2 : io_out_rdata_rep_valid; // @[AxiArbiter.scala 211:28 99:29]
  wire  _GEN_51 = state ? _GEN_3 : io_out_wb_valid; // @[AxiArbiter.scala 201:21 99:29]
  wire  _GEN_52 = state & _GEN_4; // @[AxiArbiter.scala 214:28 99:29]
  wire  _GEN_53 = state & _GEN_5; // @[AxiArbiter.scala 216:21 99:29]
  wire  _GEN_54 = state ? _GEN_6 : io_in1_rdata_rep_ready; // @[AxiArbiter.scala 210:28 99:29]
  wire  _GEN_55 = state ? _GEN_7 : state; // @[AxiArbiter.scala 14:22 99:29]
  wire  _GEN_56 = state ? _GEN_8 : io_in1_wdata_req_valid; // @[AxiArbiter.scala 198:28 99:29]
  wire  _GEN_57 = state ? _GEN_9 : io_out_wdata_req_ready; // @[AxiArbiter.scala 199:28 99:29]
  wire  _GEN_58 = state ? _GEN_10 : io_in1_wb_ready; // @[AxiArbiter.scala 202:21 99:29]
  wire  _GEN_59 = state ? _GEN_11 : io_in1_raddr_req_valid; // @[AxiArbiter.scala 204:28 99:29]
  wire  _GEN_60 = state ? _GEN_12 : io_out_raddr_req_ready; // @[AxiArbiter.scala 205:28 99:29]
  wire  _GEN_61 = state ? _GEN_13 : io_in1_waddr_req_valid; // @[AxiArbiter.scala 207:28 99:29]
  wire  _GEN_62 = state ? _GEN_14 : io_out_waddr_req_ready; // @[AxiArbiter.scala 208:28 99:29]
  wire  _GEN_63 = state & _GEN_15; // @[AxiArbiter.scala 213:28 99:29]
  wire [63:0] _GEN_66 = state ? _GEN_18 : io_in2_raddr_req_bits_addr; // @[AxiArbiter.scala 219:27 99:29]
  wire [7:0] _GEN_68 = state ? _GEN_20 : 8'h7; // @[AxiArbiter.scala 219:27 99:29]
  wire [63:0] _GEN_74 = state ? _GEN_26 : 64'h0; // @[AxiArbiter.scala 220:27 99:29]
  wire [7:0] _GEN_76 = state ? _GEN_28 : 8'h7; // @[AxiArbiter.scala 220:27 99:29]
  wire [63:0] _GEN_89 = state ? _GEN_41 : 64'h0; // @[AxiArbiter.scala 223:27 99:29]
  wire [7:0] _GEN_90 = state ? _GEN_42 : 8'h0; // @[AxiArbiter.scala 223:27 99:29]
  wire  _GEN_91 = state & _GEN_43; // @[AxiArbiter.scala 223:27 99:29]
  wire  _GEN_98 = io_in2_raddr_req_valid & _T_1 | choose_r; // @[AxiArbiter.scala 58:83 59:14 15:25]
  wire  _GEN_99 = io_in2_raddr_req_valid & _T_1 ? 1'h0 : _GEN_56; // @[AxiArbiter.scala 58:83 65:28]
  wire  _GEN_101 = io_in2_raddr_req_valid & _T_1 ? io_out_wb_valid : _GEN_53; // @[AxiArbiter.scala 58:83 68:21]
  wire  _GEN_102 = io_in2_raddr_req_valid & _T_1 | _GEN_58; // @[AxiArbiter.scala 58:83 69:21]
  wire  _GEN_103 = io_in2_raddr_req_valid & _T_1 ? io_in2_raddr_req_valid : _GEN_59; // @[AxiArbiter.scala 58:83 71:28]
  wire  _GEN_104 = io_in2_raddr_req_valid & _T_1 ? io_out_raddr_req_ready : _GEN_63; // @[AxiArbiter.scala 58:83 72:28]
  wire  _GEN_105 = io_in2_raddr_req_valid & _T_1 ? 1'h0 : _GEN_61; // @[AxiArbiter.scala 58:83 74:28]
  wire  _GEN_107 = io_in2_raddr_req_valid & _T_1 | _GEN_54; // @[AxiArbiter.scala 58:83 77:28]
  wire  _GEN_108 = io_in2_raddr_req_valid & _T_1 ? io_out_rdata_rep_valid : _GEN_52; // @[AxiArbiter.scala 58:83 78:28]
  wire  _GEN_109 = io_in2_raddr_req_valid & _T_1 ? 1'h0 : _GEN_60; // @[AxiArbiter.scala 58:83 80:28]
  wire  _GEN_110 = io_in2_raddr_req_valid & _T_1 ? 1'h0 : _GEN_50; // @[AxiArbiter.scala 58:83 81:28]
  wire  _GEN_111 = io_in2_raddr_req_valid & _T_1 ? 1'h0 : _GEN_62; // @[AxiArbiter.scala 58:83 82:28]
  wire  _GEN_112 = io_in2_raddr_req_valid & _T_1 ? 1'h0 : _GEN_51; // @[AxiArbiter.scala 58:83 83:21]
  wire  _GEN_113 = io_in2_raddr_req_valid & _T_1 ? 1'h0 : _GEN_57; // @[AxiArbiter.scala 58:83 84:28]
  wire [63:0] _GEN_114 = io_in2_raddr_req_valid & _T_1 ? io_in2_raddr_req_bits_addr : _GEN_66; // @[AxiArbiter.scala 58:83 86:27]
  wire [7:0] _GEN_116 = io_in2_raddr_req_valid & _T_1 ? 8'h7 : _GEN_68; // @[AxiArbiter.scala 58:83 86:27]
  wire [63:0] _GEN_122 = io_in2_raddr_req_valid & _T_1 ? 64'h0 : _GEN_74; // @[AxiArbiter.scala 58:83 87:27]
  wire [7:0] _GEN_124 = io_in2_raddr_req_valid & _T_1 ? 8'h7 : _GEN_76; // @[AxiArbiter.scala 58:83 87:27]
  wire [63:0] _GEN_137 = io_in2_raddr_req_valid & _T_1 ? 64'h0 : _GEN_89; // @[AxiArbiter.scala 58:83 90:27]
  wire [7:0] _GEN_138 = io_in2_raddr_req_valid & _T_1 ? 8'h0 : _GEN_90; // @[AxiArbiter.scala 58:83 90:27]
  wire  _GEN_139 = io_in2_raddr_req_valid & _T_1 ? 1'h0 : _GEN_91; // @[AxiArbiter.scala 58:83 90:27]
  wire  _GEN_146 = io_in2_raddr_req_valid & _T_1 | _GEN_55; // @[AxiArbiter.scala 58:83 98:11]
  wire  _GEN_195 = (io_in1_raddr_req_valid | io_in1_waddr_req_valid) & ~state | _GEN_146; // @[AxiArbiter.scala 17:77 57:11]
  assign io_in1_raddr_req_ready = (io_in1_raddr_req_valid | io_in1_waddr_req_valid) & ~state ? io_out_raddr_req_ready :
    _GEN_109; // @[AxiArbiter.scala 17:77 31:28]
  assign io_in1_waddr_req_ready = (io_in1_raddr_req_valid | io_in1_waddr_req_valid) & ~state ? io_out_waddr_req_ready :
    _GEN_111; // @[AxiArbiter.scala 17:77 34:28]
  assign io_in1_rdata_rep_valid = (io_in1_raddr_req_valid | io_in1_waddr_req_valid) & ~state ? io_out_rdata_rep_valid :
    _GEN_110; // @[AxiArbiter.scala 17:77 37:28]
  assign io_in1_rdata_rep_bits_data = io_out_rdata_rep_bits_data; // @[AxiArbiter.scala 263:25]
  assign io_in1_rdata_rep_bits_last = io_out_rdata_rep_bits_last; // @[AxiArbiter.scala 263:25]
  assign io_in1_wdata_req_ready = (io_in1_raddr_req_valid | io_in1_waddr_req_valid) & ~state ? io_out_wdata_req_ready :
    _GEN_113; // @[AxiArbiter.scala 17:77 25:28]
  assign io_in1_wb_valid = (io_in1_raddr_req_valid | io_in1_waddr_req_valid) & ~state ? io_out_wb_valid : _GEN_112; // @[AxiArbiter.scala 17:77 27:21]
  assign io_in1_wb_bits_breap = io_out_wb_bits_breap; // @[AxiArbiter.scala 264:18]
  assign io_in2_raddr_req_ready = (io_in1_raddr_req_valid | io_in1_waddr_req_valid) & ~state ? 1'h0 : _GEN_104; // @[AxiArbiter.scala 17:77 39:28]
  assign io_in2_rdata_rep_valid = (io_in1_raddr_req_valid | io_in1_waddr_req_valid) & ~state ? 1'h0 : _GEN_108; // @[AxiArbiter.scala 17:77 40:28]
  assign io_in2_rdata_rep_bits_data = io_out_rdata_rep_bits_data; // @[AxiArbiter.scala 260:25]
  assign io_in2_rdata_rep_bits_last = io_out_rdata_rep_bits_last; // @[AxiArbiter.scala 260:25]
  assign io_in2_wb_valid = (io_in1_raddr_req_valid | io_in1_waddr_req_valid) & ~state ? 1'h0 : _GEN_101; // @[AxiArbiter.scala 17:77 42:21]
  assign io_in2_wb_bits_breap = io_out_wb_bits_breap; // @[AxiArbiter.scala 261:18]
  assign io_out_raddr_req_valid = (io_in1_raddr_req_valid | io_in1_waddr_req_valid) & ~state ? io_in1_raddr_req_valid :
    _GEN_103; // @[AxiArbiter.scala 17:77 30:28]
  assign io_out_raddr_req_bits_addr = (io_in1_raddr_req_valid | io_in1_waddr_req_valid) & ~state ?
    io_in1_raddr_req_bits_addr : _GEN_114; // @[AxiArbiter.scala 17:77 45:27]
  assign io_out_raddr_req_bits_len = (io_in1_raddr_req_valid | io_in1_waddr_req_valid) & ~state ?
    io_in1_raddr_req_bits_len : _GEN_116; // @[AxiArbiter.scala 17:77 45:27]
  assign io_out_waddr_req_valid = (io_in1_raddr_req_valid | io_in1_waddr_req_valid) & ~state ? io_in1_waddr_req_valid :
    _GEN_105; // @[AxiArbiter.scala 17:77 33:28]
  assign io_out_waddr_req_bits_addr = (io_in1_raddr_req_valid | io_in1_waddr_req_valid) & ~state ?
    io_in1_waddr_req_bits_addr : _GEN_122; // @[AxiArbiter.scala 17:77 46:27]
  assign io_out_waddr_req_bits_len = (io_in1_raddr_req_valid | io_in1_waddr_req_valid) & ~state ?
    io_in1_waddr_req_bits_len : _GEN_124; // @[AxiArbiter.scala 17:77 46:27]
  assign io_out_rdata_rep_ready = (io_in1_raddr_req_valid | io_in1_waddr_req_valid) & ~state ? io_in1_rdata_rep_ready :
    _GEN_107; // @[AxiArbiter.scala 17:77 36:28]
  assign io_out_wdata_req_valid = (io_in1_raddr_req_valid | io_in1_waddr_req_valid) & ~state ? io_in1_wdata_req_valid :
    _GEN_99; // @[AxiArbiter.scala 17:77 24:28]
  assign io_out_wdata_req_bits_data = (io_in1_raddr_req_valid | io_in1_waddr_req_valid) & ~state ?
    io_in1_wdata_req_bits_data : _GEN_137; // @[AxiArbiter.scala 17:77 49:27]
  assign io_out_wdata_req_bits_wstrb = (io_in1_raddr_req_valid | io_in1_waddr_req_valid) & ~state ?
    io_in1_wdata_req_bits_wstrb : _GEN_138; // @[AxiArbiter.scala 17:77 49:27]
  assign io_out_wdata_req_bits_last = (io_in1_raddr_req_valid | io_in1_waddr_req_valid) & ~state ?
    io_in1_wdata_req_bits_last : _GEN_139; // @[AxiArbiter.scala 17:77 49:27]
  assign io_out_wb_ready = (io_in1_raddr_req_valid | io_in1_waddr_req_valid) & ~state ? io_in1_wb_ready : _GEN_102; // @[AxiArbiter.scala 17:77 28:21]
  always @(posedge clock) begin
    if (reset) begin // @[AxiArbiter.scala 14:22]
      state <= 1'h0; // @[AxiArbiter.scala 14:22]
    end else begin
      state <= _GEN_195;
    end
    if (reset) begin // @[AxiArbiter.scala 15:25]
      choose_r <= 1'h0; // @[AxiArbiter.scala 15:25]
    end else if ((io_in1_raddr_req_valid | io_in1_waddr_req_valid) & ~state) begin // @[AxiArbiter.scala 17:77]
      choose_r <= 1'h0; // @[AxiArbiter.scala 18:14]
    end else begin
      choose_r <= _GEN_98;
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
  _RAND_0 = {1{`RANDOM}};
  state = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  choose_r = _RAND_1[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module ysyx_22050321_Cache_Axi_1(
  input         clock,
  input         reset,
  input         io_in_addr_req_valid,
  input  [63:0] io_in_addr_req_bits_addr,
  input         io_in_addr_req_bits_we,
  input         io_in_rdata_rep_ready,
  output        io_in_rdata_rep_valid,
  output [63:0] io_in_rdata_rep_bits_rdata,
  input  [63:0] io_in_wdata_req_bits_wdata,
  input  [7:0]  io_in_wdata_req_bits_wmask,
  output        io_in_wdata_rep,
  input         io_out_raddr_req_ready,
  output        io_out_raddr_req_valid,
  output [63:0] io_out_raddr_req_bits_addr,
  input         io_out_waddr_req_ready,
  output        io_out_waddr_req_valid,
  output [63:0] io_out_waddr_req_bits_addr,
  input         io_out_rdata_rep_valid,
  input  [63:0] io_out_rdata_rep_bits_data,
  input         io_out_rdata_rep_bits_last,
  input         io_out_wdata_req_ready,
  output        io_out_wdata_req_valid,
  output [63:0] io_out_wdata_req_bits_data,
  output        io_out_wdata_req_bits_last,
  input         io_out_wb_valid,
  input  [1:0]  io_out_wb_bits_breap
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
  reg [31:0] _RAND_10;
  reg [31:0] _RAND_11;
  reg [511:0] _RAND_12;
  reg [63:0] _RAND_13;
  reg [31:0] _RAND_14;
  reg [31:0] _RAND_15;
  reg [63:0] _RAND_16;
  reg [511:0] _RAND_17;
  reg [31:0] _RAND_18;
`endif // RANDOMIZE_REG_INIT
  wire  Cache_data_clock; // @[Cache.scala 436:26]
  wire  Cache_data_io_in_valid; // @[Cache.scala 436:26]
  wire [63:0] Cache_data_io_in_addr; // @[Cache.scala 436:26]
  wire [63:0] Cache_data_io_write_bus_addr; // @[Cache.scala 436:26]
  wire  Cache_data_io_write_bus_valid; // @[Cache.scala 436:26]
  wire [1:0] Cache_data_io_write_bus_waymask; // @[Cache.scala 436:26]
  wire [511:0] Cache_data_io_write_bus_wdata; // @[Cache.scala 436:26]
  wire  Cache_data_io_out_valid; // @[Cache.scala 436:26]
  wire [52:0] Cache_data_io_out_bits_meat_tag_0; // @[Cache.scala 436:26]
  wire [52:0] Cache_data_io_out_bits_meat_tag_1; // @[Cache.scala 436:26]
  wire  Cache_data_io_out_bits_meat_valid_0; // @[Cache.scala 436:26]
  wire  Cache_data_io_out_bits_meat_valid_1; // @[Cache.scala 436:26]
  wire [511:0] Cache_data_io_out_bits_data_data_0; // @[Cache.scala 436:26]
  wire [511:0] Cache_data_io_out_bits_data_data_1; // @[Cache.scala 436:26]
  wire [52:0] Cache_data_io_out_bits_ctrl_data_tag; // @[Cache.scala 436:26]
  wire [4:0] Cache_data_io_out_bits_ctrl_data_index; // @[Cache.scala 436:26]
  wire [5:0] Cache_data_io_out_bits_ctrl_data_offset; // @[Cache.scala 436:26]
  wire  Scanf_io_in_valid; // @[Cache.scala 437:21]
  wire [52:0] Scanf_io_in_bits_meat_tag_0; // @[Cache.scala 437:21]
  wire [52:0] Scanf_io_in_bits_meat_tag_1; // @[Cache.scala 437:21]
  wire  Scanf_io_in_bits_meat_valid_0; // @[Cache.scala 437:21]
  wire  Scanf_io_in_bits_meat_valid_1; // @[Cache.scala 437:21]
  wire [511:0] Scanf_io_in_bits_data_data_0; // @[Cache.scala 437:21]
  wire [511:0] Scanf_io_in_bits_data_data_1; // @[Cache.scala 437:21]
  wire [52:0] Scanf_io_in_bits_ctrl_data_tag; // @[Cache.scala 437:21]
  wire [4:0] Scanf_io_in_bits_ctrl_data_index; // @[Cache.scala 437:21]
  wire  Scanf_io_out_bits_hit; // @[Cache.scala 437:21]
  wire [511:0] Scanf_io_out_bits_data; // @[Cache.scala 437:21]
  wire [4:0] Scanf_io_out_bits_meta_ctrl_data_index; // @[Cache.scala 437:21]
  wire  Scanf_io_out_bits_hit_way_0; // @[Cache.scala 437:21]
  wire  Scanf_io_out_bits_hit_way_1; // @[Cache.scala 437:21]
  wire [52:0] Scanf_io_out_bits_tag_0; // @[Cache.scala 437:21]
  wire [52:0] Scanf_io_out_bits_tag_1; // @[Cache.scala 437:21]
  reg  lru [0:31]; // @[Cache.scala 456:24]
  wire  lru_lru_w_MPORT_en; // @[Cache.scala 456:24]
  wire [4:0] lru_lru_w_MPORT_addr; // @[Cache.scala 456:24]
  wire  lru_lru_w_MPORT_data; // @[Cache.scala 456:24]
  wire  lru_MPORT_data; // @[Cache.scala 456:24]
  wire [4:0] lru_MPORT_addr; // @[Cache.scala 456:24]
  wire  lru_MPORT_mask; // @[Cache.scala 456:24]
  wire  lru_MPORT_en; // @[Cache.scala 456:24]
  wire  lru_MPORT_1_data; // @[Cache.scala 456:24]
  wire [4:0] lru_MPORT_1_addr; // @[Cache.scala 456:24]
  wire  lru_MPORT_1_mask; // @[Cache.scala 456:24]
  wire  lru_MPORT_1_en; // @[Cache.scala 456:24]
  wire  lru_MPORT_2_data; // @[Cache.scala 456:24]
  wire [4:0] lru_MPORT_2_addr; // @[Cache.scala 456:24]
  wire  lru_MPORT_2_mask; // @[Cache.scala 456:24]
  wire  lru_MPORT_2_en; // @[Cache.scala 456:24]
  wire  lru_MPORT_3_data; // @[Cache.scala 456:24]
  wire [4:0] lru_MPORT_3_addr; // @[Cache.scala 456:24]
  wire  lru_MPORT_3_mask; // @[Cache.scala 456:24]
  wire  lru_MPORT_3_en; // @[Cache.scala 456:24]
  reg  lru_lru_w_MPORT_en_pipe_0;
  reg [4:0] lru_lru_w_MPORT_addr_pipe_0;
  reg  dirt_0 [0:31]; // @[Cache.scala 464:52]
  wire  dirt_0_dirt_w_en; // @[Cache.scala 464:52]
  wire [4:0] dirt_0_dirt_w_addr; // @[Cache.scala 464:52]
  wire  dirt_0_dirt_w_data; // @[Cache.scala 464:52]
  wire  dirt_0_MPORT_4_data; // @[Cache.scala 464:52]
  wire [4:0] dirt_0_MPORT_4_addr; // @[Cache.scala 464:52]
  wire  dirt_0_MPORT_4_mask; // @[Cache.scala 464:52]
  wire  dirt_0_MPORT_4_en; // @[Cache.scala 464:52]
  reg  dirt_0_dirt_w_en_pipe_0;
  reg [4:0] dirt_0_dirt_w_addr_pipe_0;
  reg  dirt_1 [0:31]; // @[Cache.scala 464:52]
  wire  dirt_1_dirt_w_en; // @[Cache.scala 464:52]
  wire [4:0] dirt_1_dirt_w_addr; // @[Cache.scala 464:52]
  wire  dirt_1_dirt_w_data; // @[Cache.scala 464:52]
  wire  dirt_1_MPORT_4_data; // @[Cache.scala 464:52]
  wire [4:0] dirt_1_MPORT_4_addr; // @[Cache.scala 464:52]
  wire  dirt_1_MPORT_4_mask; // @[Cache.scala 464:52]
  wire  dirt_1_MPORT_4_en; // @[Cache.scala 464:52]
  reg  dirt_1_dirt_w_en_pipe_0;
  reg [4:0] dirt_1_dirt_w_addr_pipe_0;
  reg [2:0] state; // @[Cache.scala 443:22]
  reg [1:0] read_state; // @[Cache.scala 444:27]
  reg [1:0] write_state; // @[Cache.scala 445:28]
  reg [511:0] data_line_reg; // @[Cache.scala 448:30]
  reg [63:0] mem_addr_reg; // @[Cache.scala 449:29]
  reg  lru_r; // @[Cache.scala 451:22]
  reg [3:0] count_write; // @[Cache.scala 465:55]
  reg [63:0] mem_write_addr_reg; // @[Cache.scala 468:62]
  reg [511:0] mem_write_data_reg; // @[Cache.scala 469:62]
  wire  _T = 3'h0 == state; // @[Cache.scala 479:17]
  wire  _T_1 = 3'h1 == state; // @[Cache.scala 479:17]
  wire  lru_w = lru_lru_w_MPORT_data;
  wire  _GEN_7 = lru_w ? dirt_1_dirt_w_data : dirt_0_dirt_w_data; // @[Cache.scala 492:{34,34}]
  wire [2:0] _GEN_8 = _GEN_7 ? 3'h3 : 3'h2; // @[Cache.scala 492:43 493:19 495:19]
  wire  _T_6 = 3'h2 == state; // @[Cache.scala 479:17]
  wire  _T_7 = read_state == 2'h3; // @[Cache.scala 505:48]
  wire  _T_8 = io_in_rdata_rep_ready & read_state == 2'h3; // @[Cache.scala 505:34]
  wire [2:0] _GEN_10 = io_in_rdata_rep_ready & read_state == 2'h3 ? 3'h0 : state; // @[Cache.scala 505:72 506:15 443:22]
  wire  _T_10 = 3'h3 == state; // @[Cache.scala 479:17]
  wire  _T_12 = io_out_wb_valid & io_out_wb_bits_breap == 2'h0; // @[Cache.scala 512:30]
  wire [2:0] _GEN_11 = io_out_wb_valid & io_out_wb_bits_breap == 2'h0 ? 3'h2 : state; // @[Cache.scala 512:67 513:17 443:22]
  wire [2:0] _GEN_12 = _T_8 | _T_12 ? 3'h0 : state; // @[Cache.scala 518:119 519:15 443:22]
  wire [2:0] _GEN_13 = 3'h4 == state ? _GEN_12 : state; // @[Cache.scala 479:17 443:22]
  wire [2:0] _GEN_14 = 3'h3 == state ? _GEN_11 : _GEN_13; // @[Cache.scala 479:17]
  wire  _T_19 = state == 3'h2; // @[Cache.scala 524:17]
  wire  _T_20 = state == 3'h3; // @[Cache.scala 524:35]
  wire [1:0] _GEN_22 = io_out_rdata_rep_valid & io_out_rdata_rep_bits_last ? 2'h3 : read_state; // @[Cache.scala 543:65 544:20 444:27]
  wire [1:0] _GEN_23 = io_in_rdata_rep_ready ? 2'h0 : read_state; // @[Cache.scala 548:35 549:20 444:27]
  wire [1:0] _GEN_24 = 2'h3 == read_state ? _GEN_23 : read_state; // @[Cache.scala 531:21 444:27]
  wire [1:0] _GEN_30 = io_out_wdata_req_ready & io_out_wdata_req_bits_last ? 2'h3 : write_state; // @[Cache.scala 565:65 566:21 445:28]
  wire [1:0] _GEN_31 = _T_12 ? 2'h0 : write_state; // @[Cache.scala 570:64 571:21 445:28]
  wire [1:0] _GEN_32 = 2'h3 == write_state ? _GEN_31 : write_state; // @[Cache.scala 553:22 445:28]
  wire [63:0] _mem_addr_reg_T_2 = {io_in_addr_req_bits_addr[63:6],6'h0}; // @[Cat.scala 33:92]
  wire [52:0] _GEN_36 = Scanf_io_out_bits_tag_0; // @[Cat.scala 33:{92,92}]
  wire [52:0] _GEN_37 = lru_w ? Scanf_io_out_bits_tag_1 : _GEN_36; // @[Cat.scala 33:{92,92}]
  wire [63:0] _mem_write_addr_reg_T_3 = {_GEN_37,Scanf_io_out_bits_meta_ctrl_data_index,6'h0}; // @[Cat.scala 33:92]
  wire [511:0] _GEN_38 = Cache_data_io_out_bits_data_data_0; // @[Cache.scala 589:{34,34}]
  wire [511:0] _GEN_39 = lru_w ? Cache_data_io_out_bits_data_data_1 : _GEN_38; // @[Cache.scala 589:{34,34}]
  wire  hit_way_0 = Scanf_io_out_bits_hit_way_0; // @[Cache.scala 475:21 730:11]
  wire  hit_way_1 = Scanf_io_out_bits_hit_way_1; // @[Cache.scala 475:21 730:11]
  wire  _GEN_60 = ~Scanf_io_out_bits_hit ? 1'h0 : hit_way_0; // @[Cache.scala 456:24 582:25]
  wire  _GEN_64 = ~Scanf_io_out_bits_hit ? 1'h0 : hit_way_1; // @[Cache.scala 456:24 582:25]
  wire [511:0] _data_line_reg_T_1 = {io_out_rdata_rep_bits_data,data_line_reg[511:64]}; // @[Cat.scala 33:92]
  wire [511:0] _GEN_67 = read_state == 2'h2 & io_out_rdata_rep_valid ? _data_line_reg_T_1 : data_line_reg; // @[Cache.scala 608:72 609:23 448:30]
  wire  _GEN_75 = lru_r ? 1'h0 : 1'h1; // @[Cache.scala 456:24 614:29]
  wire  _GEN_79 = _T_8 & lru_r; // @[Cache.scala 456:24 613:60]
  wire  _GEN_84 = _T_8 & _GEN_75; // @[Cache.scala 456:24 613:60]
  wire [3:0] _count_write_T_1 = count_write + 4'h1; // @[Cache.scala 626:46]
  wire [511:0] _mem_write_data_reg_T_4 = {64'h0,mem_write_data_reg[511:64]}; // @[Cat.scala 33:92]
  wire [3:0] _GEN_86 = io_out_wdata_req_ready & write_state == 2'h2 ? _count_write_T_1 : count_write; // @[Cache.scala 625:77 626:27 465:55]
  wire [511:0] _GEN_87 = io_out_wdata_req_ready & write_state == 2'h2 ? _mem_write_data_reg_T_4 : mem_write_data_reg; // @[Cache.scala 625:77 628:34 469:62]
  wire [3:0] _GEN_88 = io_out_wdata_req_bits_last ? 4'h0 : _GEN_86; // @[Cache.scala 630:42 631:27]
  wire [3:0] _GEN_89 = _T_10 ? _GEN_88 : count_write; // @[Cache.scala 577:17 465:55]
  wire [511:0] _GEN_90 = _T_10 ? _GEN_87 : mem_write_data_reg; // @[Cache.scala 577:17 469:62]
  wire  _GEN_114 = _T_1 & _GEN_60; // @[Cache.scala 577:17 456:24]
  wire  _GEN_118 = _T_1 & _GEN_64; // @[Cache.scala 577:17 456:24]
  wire  _GEN_124 = _T_1 ? 1'h0 : _T_6 & _GEN_79; // @[Cache.scala 577:17 456:24]
  wire  _GEN_129 = _T_1 ? 1'h0 : _T_6 & _GEN_84; // @[Cache.scala 577:17 456:24]
  wire [63:0] _GEN_159 = 3'h7 == io_in_addr_req_bits_addr[5:3] ? Scanf_io_out_bits_data[511:448] : 64'h0; // @[Cache.scala 639:115 669:16]
  wire [63:0] _GEN_160 = 3'h7 == io_in_addr_req_bits_addr[5:3] ? data_line_reg[511:448] : 64'h0; // @[Cache.scala 639:115 670:16]
  wire [63:0] _GEN_161 = 3'h6 == io_in_addr_req_bits_addr[5:3] ? Scanf_io_out_bits_data[447:384] : _GEN_159; // @[Cache.scala 639:115 665:16]
  wire [63:0] _GEN_162 = 3'h6 == io_in_addr_req_bits_addr[5:3] ? data_line_reg[447:384] : _GEN_160; // @[Cache.scala 639:115 666:16]
  wire [63:0] _GEN_163 = 3'h5 == io_in_addr_req_bits_addr[5:3] ? Scanf_io_out_bits_data[383:320] : _GEN_161; // @[Cache.scala 639:115 661:16]
  wire [63:0] _GEN_164 = 3'h5 == io_in_addr_req_bits_addr[5:3] ? data_line_reg[383:320] : _GEN_162; // @[Cache.scala 639:115 662:16]
  wire [63:0] _GEN_165 = 3'h4 == io_in_addr_req_bits_addr[5:3] ? Scanf_io_out_bits_data[319:256] : _GEN_163; // @[Cache.scala 639:115 657:16]
  wire [63:0] _GEN_166 = 3'h4 == io_in_addr_req_bits_addr[5:3] ? data_line_reg[319:256] : _GEN_164; // @[Cache.scala 639:115 658:16]
  wire [63:0] _GEN_167 = 3'h3 == io_in_addr_req_bits_addr[5:3] ? Scanf_io_out_bits_data[255:192] : _GEN_165; // @[Cache.scala 639:115 653:16]
  wire [63:0] _GEN_168 = 3'h3 == io_in_addr_req_bits_addr[5:3] ? data_line_reg[255:192] : _GEN_166; // @[Cache.scala 639:115 654:16]
  wire [63:0] _GEN_169 = 3'h2 == io_in_addr_req_bits_addr[5:3] ? Scanf_io_out_bits_data[191:128] : _GEN_167; // @[Cache.scala 639:115 649:16]
  wire [63:0] _GEN_170 = 3'h2 == io_in_addr_req_bits_addr[5:3] ? data_line_reg[191:128] : _GEN_168; // @[Cache.scala 639:115 650:16]
  wire [63:0] _GEN_171 = 3'h1 == io_in_addr_req_bits_addr[5:3] ? Scanf_io_out_bits_data[127:64] : _GEN_169; // @[Cache.scala 639:115 645:16]
  wire [63:0] _GEN_172 = 3'h1 == io_in_addr_req_bits_addr[5:3] ? data_line_reg[127:64] : _GEN_170; // @[Cache.scala 639:115 646:16]
  wire [63:0] hit_data = 3'h0 == io_in_addr_req_bits_addr[5:3] ? Scanf_io_out_bits_data[63:0] : _GEN_171; // @[Cache.scala 639:115 641:16]
  wire [63:0] mem_data = 3'h0 == io_in_addr_req_bits_addr[5:3] ? data_line_reg[63:0] : _GEN_172; // @[Cache.scala 639:115 642:16]
  wire  _io_in_rdata_rep_bits_rdata_T = state == 3'h1; // @[Cache.scala 718:44]
  wire  _io_in_rdata_rep_bits_rdata_T_1 = state == 3'h1 & Scanf_io_out_bits_hit; // @[Cache.scala 718:54]
  reg  Scanf_io_in_valid_REG; // @[Cache.scala 725:31]
  wire  _io_out_raddr_req_valid_T = read_state == 2'h1; // @[Cache.scala 738:46]
  wire  _io_out_waddr_req_valid_T = write_state == 2'h1; // @[Cache.scala 739:47]
  wire  _io_in_rdata_rep_valid_T_4 = _T_19 & _T_7; // @[Cache.scala 773:77]
  wire [7:0] _wmaskextend_T_2 = io_in_addr_req_bits_we ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _wmaskextend_T_3 = io_in_wdata_req_bits_wmask & _wmaskextend_T_2; // @[Cache.scala 776:38]
  wire  _wmaskextend_Genmask_T = Cache_data_io_out_bits_ctrl_data_offset[5:3] == 3'h0; // @[util.scala 55:15]
  wire [63:0] _wmaskextend_Genmask_T_2 = {56'h0,_wmaskextend_T_3}; // @[Cat.scala 33:92]
  wire  _wmaskextend_Genmask_T_3 = Cache_data_io_out_bits_ctrl_data_offset[5:3] == 3'h1; // @[util.scala 56:15]
  wire [63:0] _wmaskextend_Genmask_T_6 = {48'h0,_wmaskextend_T_3,8'h0}; // @[Cat.scala 33:92]
  wire  _wmaskextend_Genmask_T_7 = Cache_data_io_out_bits_ctrl_data_offset[5:3] == 3'h2; // @[util.scala 57:15]
  wire [63:0] _wmaskextend_Genmask_T_10 = {40'h0,_wmaskextend_T_3,16'h0}; // @[Cat.scala 33:92]
  wire  _wmaskextend_Genmask_T_11 = Cache_data_io_out_bits_ctrl_data_offset[5:3] == 3'h3; // @[util.scala 58:15]
  wire [63:0] _wmaskextend_Genmask_T_14 = {32'h0,_wmaskextend_T_3,24'h0}; // @[Cat.scala 33:92]
  wire  _wmaskextend_Genmask_T_15 = Cache_data_io_out_bits_ctrl_data_offset[5:3] == 3'h4; // @[util.scala 59:15]
  wire [63:0] _wmaskextend_Genmask_T_18 = {24'h0,_wmaskextend_T_3,32'h0}; // @[Cat.scala 33:92]
  wire  _wmaskextend_Genmask_T_19 = Cache_data_io_out_bits_ctrl_data_offset[5:3] == 3'h5; // @[util.scala 60:15]
  wire [63:0] _wmaskextend_Genmask_T_22 = {16'h0,_wmaskextend_T_3,40'h0}; // @[Cat.scala 33:92]
  wire  _wmaskextend_Genmask_T_23 = Cache_data_io_out_bits_ctrl_data_offset[5:3] == 3'h6; // @[util.scala 61:15]
  wire [63:0] _wmaskextend_Genmask_T_26 = {8'h0,_wmaskextend_T_3,48'h0}; // @[Cat.scala 33:92]
  wire  _wmaskextend_Genmask_T_27 = Cache_data_io_out_bits_ctrl_data_offset[5:3] == 3'h7; // @[util.scala 62:15]
  wire [63:0] _wmaskextend_Genmask_T_29 = {_wmaskextend_T_3,56'h0}; // @[Cat.scala 33:92]
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
  wire [7:0] _wmaskextend_T_69 = wmaskextend_Genmask[0] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _wmaskextend_T_71 = wmaskextend_Genmask[1] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _wmaskextend_T_73 = wmaskextend_Genmask[2] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _wmaskextend_T_75 = wmaskextend_Genmask[3] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _wmaskextend_T_77 = wmaskextend_Genmask[4] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _wmaskextend_T_79 = wmaskextend_Genmask[5] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _wmaskextend_T_81 = wmaskextend_Genmask[6] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _wmaskextend_T_83 = wmaskextend_Genmask[7] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _wmaskextend_T_85 = wmaskextend_Genmask[8] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _wmaskextend_T_87 = wmaskextend_Genmask[9] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _wmaskextend_T_89 = wmaskextend_Genmask[10] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _wmaskextend_T_91 = wmaskextend_Genmask[11] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _wmaskextend_T_93 = wmaskextend_Genmask[12] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _wmaskextend_T_95 = wmaskextend_Genmask[13] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _wmaskextend_T_97 = wmaskextend_Genmask[14] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _wmaskextend_T_99 = wmaskextend_Genmask[15] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _wmaskextend_T_101 = wmaskextend_Genmask[16] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _wmaskextend_T_103 = wmaskextend_Genmask[17] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _wmaskextend_T_105 = wmaskextend_Genmask[18] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _wmaskextend_T_107 = wmaskextend_Genmask[19] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _wmaskextend_T_109 = wmaskextend_Genmask[20] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _wmaskextend_T_111 = wmaskextend_Genmask[21] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _wmaskextend_T_113 = wmaskextend_Genmask[22] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _wmaskextend_T_115 = wmaskextend_Genmask[23] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _wmaskextend_T_117 = wmaskextend_Genmask[24] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _wmaskextend_T_119 = wmaskextend_Genmask[25] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _wmaskextend_T_121 = wmaskextend_Genmask[26] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _wmaskextend_T_123 = wmaskextend_Genmask[27] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _wmaskextend_T_125 = wmaskextend_Genmask[28] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _wmaskextend_T_127 = wmaskextend_Genmask[29] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _wmaskextend_T_129 = wmaskextend_Genmask[30] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _wmaskextend_T_131 = wmaskextend_Genmask[31] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _wmaskextend_T_133 = wmaskextend_Genmask[32] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _wmaskextend_T_135 = wmaskextend_Genmask[33] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _wmaskextend_T_137 = wmaskextend_Genmask[34] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _wmaskextend_T_139 = wmaskextend_Genmask[35] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _wmaskextend_T_141 = wmaskextend_Genmask[36] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _wmaskextend_T_143 = wmaskextend_Genmask[37] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _wmaskextend_T_145 = wmaskextend_Genmask[38] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _wmaskextend_T_147 = wmaskextend_Genmask[39] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _wmaskextend_T_149 = wmaskextend_Genmask[40] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _wmaskextend_T_151 = wmaskextend_Genmask[41] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _wmaskextend_T_153 = wmaskextend_Genmask[42] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _wmaskextend_T_155 = wmaskextend_Genmask[43] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _wmaskextend_T_157 = wmaskextend_Genmask[44] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _wmaskextend_T_159 = wmaskextend_Genmask[45] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _wmaskextend_T_161 = wmaskextend_Genmask[46] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _wmaskextend_T_163 = wmaskextend_Genmask[47] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _wmaskextend_T_165 = wmaskextend_Genmask[48] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _wmaskextend_T_167 = wmaskextend_Genmask[49] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _wmaskextend_T_169 = wmaskextend_Genmask[50] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _wmaskextend_T_171 = wmaskextend_Genmask[51] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _wmaskextend_T_173 = wmaskextend_Genmask[52] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _wmaskextend_T_175 = wmaskextend_Genmask[53] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _wmaskextend_T_177 = wmaskextend_Genmask[54] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _wmaskextend_T_179 = wmaskextend_Genmask[55] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _wmaskextend_T_181 = wmaskextend_Genmask[56] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _wmaskextend_T_183 = wmaskextend_Genmask[57] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _wmaskextend_T_185 = wmaskextend_Genmask[58] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _wmaskextend_T_187 = wmaskextend_Genmask[59] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _wmaskextend_T_189 = wmaskextend_Genmask[60] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _wmaskextend_T_191 = wmaskextend_Genmask[61] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _wmaskextend_T_193 = wmaskextend_Genmask[62] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _wmaskextend_T_195 = wmaskextend_Genmask[63] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [63:0] wmaskextend_lo_lo_lo = {_wmaskextend_T_83,_wmaskextend_T_81,_wmaskextend_T_79,_wmaskextend_T_77,
    _wmaskextend_T_75,_wmaskextend_T_73,_wmaskextend_T_71,_wmaskextend_T_69}; // @[Cat.scala 33:92]
  wire [127:0] wmaskextend_lo_lo = {_wmaskextend_T_99,_wmaskextend_T_97,_wmaskextend_T_95,_wmaskextend_T_93,
    _wmaskextend_T_91,_wmaskextend_T_89,_wmaskextend_T_87,_wmaskextend_T_85,wmaskextend_lo_lo_lo}; // @[Cat.scala 33:92]
  wire [63:0] wmaskextend_lo_hi_lo = {_wmaskextend_T_115,_wmaskextend_T_113,_wmaskextend_T_111,_wmaskextend_T_109,
    _wmaskextend_T_107,_wmaskextend_T_105,_wmaskextend_T_103,_wmaskextend_T_101}; // @[Cat.scala 33:92]
  wire [255:0] wmaskextend_lo = {_wmaskextend_T_131,_wmaskextend_T_129,_wmaskextend_T_127,_wmaskextend_T_125,
    _wmaskextend_T_123,_wmaskextend_T_121,_wmaskextend_T_119,_wmaskextend_T_117,wmaskextend_lo_hi_lo,wmaskextend_lo_lo}; // @[Cat.scala 33:92]
  wire [63:0] wmaskextend_hi_lo_lo = {_wmaskextend_T_147,_wmaskextend_T_145,_wmaskextend_T_143,_wmaskextend_T_141,
    _wmaskextend_T_139,_wmaskextend_T_137,_wmaskextend_T_135,_wmaskextend_T_133}; // @[Cat.scala 33:92]
  wire [127:0] wmaskextend_hi_lo = {_wmaskextend_T_163,_wmaskextend_T_161,_wmaskextend_T_159,_wmaskextend_T_157,
    _wmaskextend_T_155,_wmaskextend_T_153,_wmaskextend_T_151,_wmaskextend_T_149,wmaskextend_hi_lo_lo}; // @[Cat.scala 33:92]
  wire [63:0] wmaskextend_hi_hi_lo = {_wmaskextend_T_179,_wmaskextend_T_177,_wmaskextend_T_175,_wmaskextend_T_173,
    _wmaskextend_T_171,_wmaskextend_T_169,_wmaskextend_T_167,_wmaskextend_T_165}; // @[Cat.scala 33:92]
  wire [255:0] wmaskextend_hi = {_wmaskextend_T_195,_wmaskextend_T_193,_wmaskextend_T_191,_wmaskextend_T_189,
    _wmaskextend_T_187,_wmaskextend_T_185,_wmaskextend_T_183,_wmaskextend_T_181,wmaskextend_hi_hi_lo,wmaskextend_hi_lo}; // @[Cat.scala 33:92]
  wire [511:0] wmaskextend = {wmaskextend_hi,wmaskextend_lo}; // @[Cat.scala 33:92]
  wire [511:0] wdata_extend = {io_in_wdata_req_bits_wdata,io_in_wdata_req_bits_wdata,io_in_wdata_req_bits_wdata,
    io_in_wdata_req_bits_wdata,io_in_wdata_req_bits_wdata,io_in_wdata_req_bits_wdata,io_in_wdata_req_bits_wdata,
    io_in_wdata_req_bits_wdata}; // @[Cat.scala 33:92]
  wire [511:0] _wdata_T_1 = ~wmaskextend; // @[util.scala 38:17]
  wire [511:0] _wdata_T_3 = data_line_reg & _wdata_T_1; // @[util.scala 38:14]
  wire [511:0] _wdata_T_4 = wdata_extend & wmaskextend; // @[util.scala 38:55]
  wire [511:0] _wdata_T_5 = _wdata_T_3 | _wdata_T_4; // @[util.scala 38:44]
  wire [511:0] _wdata_T_8 = Scanf_io_out_bits_data & _wdata_T_1; // @[util.scala 38:14]
  wire [511:0] _wdata_T_10 = _wdata_T_8 | _wdata_T_4; // @[util.scala 38:44]
  wire  _Cache_data_io_write_bus_valid_T_3 = _io_in_rdata_rep_bits_rdata_T & io_in_addr_req_bits_we &
    Scanf_io_out_bits_hit; // @[Cache.scala 781:111]
  wire [1:0] _waymask_T_3 = {hit_way_1,hit_way_0}; // @[Cache.scala 794:81]
  wire [1:0] _waymask_T_5 = lru_r ? 2'h2 : 2'h1; // @[Cache.scala 794:92]
  wire [1:0] waymask = _io_in_rdata_rep_bits_rdata_T_1 & io_in_addr_req_bits_we ? _waymask_T_3 : _waymask_T_5; // @[Cache.scala 794:22]
  wire  _T_62 = _io_in_rdata_rep_bits_rdata_T_1 | _T_7; // @[Cache.scala 796:61]
  ysyx_22050321_Cache_Data Cache_data ( // @[Cache.scala 436:26]
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
  ysyx_22050321_Scanf_data Scanf ( // @[Cache.scala 437:21]
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
  assign lru_lru_w_MPORT_data = lru[lru_lru_w_MPORT_addr]; // @[Cache.scala 456:24]
  assign lru_MPORT_data = 1'h1;
  assign lru_MPORT_addr = Cache_data_io_out_bits_ctrl_data_index;
  assign lru_MPORT_mask = 1'h1;
  assign lru_MPORT_en = _T ? 1'h0 : _GEN_114;
  assign lru_MPORT_1_data = 1'h0;
  assign lru_MPORT_1_addr = Cache_data_io_out_bits_ctrl_data_index;
  assign lru_MPORT_1_mask = 1'h1;
  assign lru_MPORT_1_en = _T ? 1'h0 : _GEN_118;
  assign lru_MPORT_2_data = 1'h0;
  assign lru_MPORT_2_addr = Cache_data_io_out_bits_ctrl_data_index;
  assign lru_MPORT_2_mask = 1'h1;
  assign lru_MPORT_2_en = _T ? 1'h0 : _GEN_124;
  assign lru_MPORT_3_data = 1'h1;
  assign lru_MPORT_3_addr = Cache_data_io_out_bits_ctrl_data_index;
  assign lru_MPORT_3_mask = 1'h1;
  assign lru_MPORT_3_en = _T ? 1'h0 : _GEN_129;
  assign dirt_0_dirt_w_en = dirt_0_dirt_w_en_pipe_0;
  assign dirt_0_dirt_w_addr = dirt_0_dirt_w_addr_pipe_0;
  assign dirt_0_dirt_w_data = dirt_0[dirt_0_dirt_w_addr]; // @[Cache.scala 464:52]
  assign dirt_0_MPORT_4_data = 1'h1;
  assign dirt_0_MPORT_4_addr = Cache_data_io_out_bits_ctrl_data_index;
  assign dirt_0_MPORT_4_mask = waymask[0];
  assign dirt_0_MPORT_4_en = io_in_addr_req_bits_we & _T_62;
  assign dirt_1_dirt_w_en = dirt_1_dirt_w_en_pipe_0;
  assign dirt_1_dirt_w_addr = dirt_1_dirt_w_addr_pipe_0;
  assign dirt_1_dirt_w_data = dirt_1[dirt_1_dirt_w_addr]; // @[Cache.scala 464:52]
  assign dirt_1_MPORT_4_data = 1'h1;
  assign dirt_1_MPORT_4_addr = Cache_data_io_out_bits_ctrl_data_index;
  assign dirt_1_MPORT_4_mask = waymask[1];
  assign dirt_1_MPORT_4_en = io_in_addr_req_bits_we & _T_62;
  assign io_in_rdata_rep_valid = (_io_in_rdata_rep_bits_rdata_T_1 | _T_19 & _T_7) & ~io_in_addr_req_bits_we; // @[Cache.scala 773:119]
  assign io_in_rdata_rep_bits_rdata = state == 3'h1 & Scanf_io_out_bits_hit ? hit_data : mem_data; // @[Cache.scala 718:36]
  assign io_in_wdata_rep = _Cache_data_io_write_bus_valid_T_3 | _io_in_rdata_rep_valid_T_4 & io_in_addr_req_bits_we; // @[Cache.scala 786:83]
  assign io_out_raddr_req_valid = read_state == 2'h1; // @[Cache.scala 738:46]
  assign io_out_raddr_req_bits_addr = _io_out_raddr_req_valid_T ? mem_addr_reg : 64'h0; // @[Cache.scala 741:38]
  assign io_out_waddr_req_valid = write_state == 2'h1; // @[Cache.scala 739:47]
  assign io_out_waddr_req_bits_addr = _io_out_waddr_req_valid_T ? mem_write_addr_reg : 64'h0; // @[Cache.scala 742:38]
  assign io_out_wdata_req_valid = write_state == 2'h2; // @[Cache.scala 747:47]
  assign io_out_wdata_req_bits_data = mem_write_data_reg[63:0]; // @[Cache.scala 748:57]
  assign io_out_wdata_req_bits_last = count_write == 4'h7; // @[Cache.scala 466:56]
  assign Cache_data_clock = clock;
  assign Cache_data_io_in_valid = io_in_addr_req_valid & state == 3'h0; // @[Cache.scala 723:54]
  assign Cache_data_io_in_addr = io_in_addr_req_bits_addr; // @[Cache.scala 724:25]
  assign Cache_data_io_write_bus_addr = _io_in_rdata_rep_valid_T_4 | _Cache_data_io_write_bus_valid_T_3 ?
    io_in_addr_req_bits_addr : 64'h0; // @[Cache.scala 782:40]
  assign Cache_data_io_write_bus_valid = _T_7 | _io_in_rdata_rep_bits_rdata_T & io_in_addr_req_bits_we &
    Scanf_io_out_bits_hit; // @[Cache.scala 781:65]
  assign Cache_data_io_write_bus_waymask = _io_in_rdata_rep_bits_rdata_T_1 & io_in_addr_req_bits_we ? _waymask_T_3 :
    _waymask_T_5; // @[Cache.scala 794:22]
  assign Cache_data_io_write_bus_wdata = _T_7 ? _wdata_T_5 : _wdata_T_10; // @[Cache.scala 779:20]
  assign Scanf_io_in_valid = Scanf_io_in_valid_REG; // @[Cache.scala 725:21]
  assign Scanf_io_in_bits_meat_tag_0 = Cache_data_io_out_bits_meat_tag_0; // @[Cache.scala 726:25]
  assign Scanf_io_in_bits_meat_tag_1 = Cache_data_io_out_bits_meat_tag_1; // @[Cache.scala 726:25]
  assign Scanf_io_in_bits_meat_valid_0 = Cache_data_io_out_bits_meat_valid_0; // @[Cache.scala 726:25]
  assign Scanf_io_in_bits_meat_valid_1 = Cache_data_io_out_bits_meat_valid_1; // @[Cache.scala 726:25]
  assign Scanf_io_in_bits_data_data_0 = Cache_data_io_out_bits_data_data_0; // @[Cache.scala 727:25]
  assign Scanf_io_in_bits_data_data_1 = Cache_data_io_out_bits_data_data_1; // @[Cache.scala 727:25]
  assign Scanf_io_in_bits_ctrl_data_tag = Cache_data_io_out_bits_ctrl_data_tag; // @[Cache.scala 728:30]
  assign Scanf_io_in_bits_ctrl_data_index = Cache_data_io_out_bits_ctrl_data_index; // @[Cache.scala 728:30]
  always @(posedge clock) begin
    if (lru_MPORT_en & lru_MPORT_mask) begin
      lru[lru_MPORT_addr] <= lru_MPORT_data; // @[Cache.scala 456:24]
    end
    if (lru_MPORT_1_en & lru_MPORT_1_mask) begin
      lru[lru_MPORT_1_addr] <= lru_MPORT_1_data; // @[Cache.scala 456:24]
    end
    if (lru_MPORT_2_en & lru_MPORT_2_mask) begin
      lru[lru_MPORT_2_addr] <= lru_MPORT_2_data; // @[Cache.scala 456:24]
    end
    if (lru_MPORT_3_en & lru_MPORT_3_mask) begin
      lru[lru_MPORT_3_addr] <= lru_MPORT_3_data; // @[Cache.scala 456:24]
    end
    lru_lru_w_MPORT_en_pipe_0 <= 1'h1;
    if (1'h1) begin
      lru_lru_w_MPORT_addr_pipe_0 <= Cache_data_io_out_bits_ctrl_data_index;
    end
    if (dirt_0_MPORT_4_en & dirt_0_MPORT_4_mask) begin
      dirt_0[dirt_0_MPORT_4_addr] <= dirt_0_MPORT_4_data; // @[Cache.scala 464:52]
    end
    dirt_0_dirt_w_en_pipe_0 <= 1'h1;
    if (1'h1) begin
      dirt_0_dirt_w_addr_pipe_0 <= Cache_data_io_out_bits_ctrl_data_index;
    end
    if (dirt_1_MPORT_4_en & dirt_1_MPORT_4_mask) begin
      dirt_1[dirt_1_MPORT_4_addr] <= dirt_1_MPORT_4_data; // @[Cache.scala 464:52]
    end
    dirt_1_dirt_w_en_pipe_0 <= 1'h1;
    if (1'h1) begin
      dirt_1_dirt_w_addr_pipe_0 <= Cache_data_io_out_bits_ctrl_data_index;
    end
    if (reset) begin // @[Cache.scala 443:22]
      state <= 3'h0; // @[Cache.scala 443:22]
    end else if (3'h0 == state) begin // @[Cache.scala 479:17]
      if (io_in_addr_req_valid) begin // @[Cache.scala 481:34]
        state <= 3'h1; // @[Cache.scala 482:15]
      end else begin
        state <= 3'h0; // @[Cache.scala 484:15]
      end
    end else if (3'h1 == state) begin // @[Cache.scala 479:17]
      if (Scanf_io_out_bits_hit) begin // @[Cache.scala 488:25]
        state <= 3'h0; // @[Cache.scala 489:15]
      end else begin
        state <= _GEN_8;
      end
    end else if (3'h2 == state) begin // @[Cache.scala 479:17]
      state <= _GEN_10;
    end else begin
      state <= _GEN_14;
    end
    if (reset) begin // @[Cache.scala 444:27]
      read_state <= 2'h0; // @[Cache.scala 444:27]
    end else if (2'h0 == read_state) begin // @[Cache.scala 531:21]
      if (_T_19) begin // @[Cache.scala 533:27]
        read_state <= 2'h1; // @[Cache.scala 534:20]
      end
    end else if (2'h1 == read_state) begin // @[Cache.scala 531:21]
      if (io_out_raddr_req_ready) begin // @[Cache.scala 538:35]
        read_state <= 2'h2; // @[Cache.scala 539:20]
      end
    end else if (2'h2 == read_state) begin // @[Cache.scala 531:21]
      read_state <= _GEN_22;
    end else begin
      read_state <= _GEN_24;
    end
    if (reset) begin // @[Cache.scala 445:28]
      write_state <= 2'h0; // @[Cache.scala 445:28]
    end else if (2'h0 == write_state) begin // @[Cache.scala 553:22]
      if (_T_20) begin // @[Cache.scala 555:33]
        write_state <= 2'h1; // @[Cache.scala 556:21]
      end
    end else if (2'h1 == write_state) begin // @[Cache.scala 553:22]
      if (io_out_waddr_req_ready) begin // @[Cache.scala 560:35]
        write_state <= 2'h2; // @[Cache.scala 561:21]
      end
    end else if (2'h2 == write_state) begin // @[Cache.scala 553:22]
      write_state <= _GEN_30;
    end else begin
      write_state <= _GEN_32;
    end
    if (reset) begin // @[Cache.scala 448:30]
      data_line_reg <= 512'h0; // @[Cache.scala 448:30]
    end else if (!(_T)) begin // @[Cache.scala 577:17]
      if (!(_T_1)) begin // @[Cache.scala 577:17]
        if (_T_6) begin // @[Cache.scala 577:17]
          data_line_reg <= _GEN_67;
        end
      end
    end
    if (reset) begin // @[Cache.scala 449:29]
      mem_addr_reg <= 64'h0; // @[Cache.scala 449:29]
    end else if (!(_T)) begin // @[Cache.scala 577:17]
      if (_T_1) begin // @[Cache.scala 577:17]
        if (~Scanf_io_out_bits_hit) begin // @[Cache.scala 582:25]
          mem_addr_reg <= _mem_addr_reg_T_2; // @[Cache.scala 583:22]
        end
      end
    end
    if (reset) begin // @[Cache.scala 451:22]
      lru_r <= 1'h0; // @[Cache.scala 451:22]
    end else if (!(_T)) begin // @[Cache.scala 577:17]
      if (_T_1) begin // @[Cache.scala 577:17]
        if (~Scanf_io_out_bits_hit) begin // @[Cache.scala 582:25]
          lru_r <= lru_w; // @[Cache.scala 584:15]
        end
      end
    end
    if (reset) begin // @[Cache.scala 465:55]
      count_write <= 4'h0; // @[Cache.scala 465:55]
    end else if (!(_T)) begin // @[Cache.scala 577:17]
      if (_T_1) begin // @[Cache.scala 577:17]
        if (~Scanf_io_out_bits_hit) begin // @[Cache.scala 582:25]
          count_write <= 4'h0; // @[Cache.scala 587:27]
        end
      end else if (!(_T_6)) begin // @[Cache.scala 577:17]
        count_write <= _GEN_89;
      end
    end
    if (reset) begin // @[Cache.scala 468:62]
      mem_write_addr_reg <= 64'h0; // @[Cache.scala 468:62]
    end else if (!(_T)) begin // @[Cache.scala 577:17]
      if (_T_1) begin // @[Cache.scala 577:17]
        if (~Scanf_io_out_bits_hit) begin // @[Cache.scala 582:25]
          mem_write_addr_reg <= _mem_write_addr_reg_T_3; // @[Cache.scala 588:34]
        end
      end
    end
    if (reset) begin // @[Cache.scala 469:62]
      mem_write_data_reg <= 512'h0; // @[Cache.scala 469:62]
    end else if (!(_T)) begin // @[Cache.scala 577:17]
      if (_T_1) begin // @[Cache.scala 577:17]
        if (~Scanf_io_out_bits_hit) begin // @[Cache.scala 582:25]
          mem_write_data_reg <= _GEN_39; // @[Cache.scala 589:34]
        end
      end else if (!(_T_6)) begin // @[Cache.scala 577:17]
        mem_write_data_reg <= _GEN_90;
      end
    end
    Scanf_io_in_valid_REG <= Cache_data_io_out_valid; // @[Cache.scala 725:31]
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
  state = _RAND_9[2:0];
  _RAND_10 = {1{`RANDOM}};
  read_state = _RAND_10[1:0];
  _RAND_11 = {1{`RANDOM}};
  write_state = _RAND_11[1:0];
  _RAND_12 = {16{`RANDOM}};
  data_line_reg = _RAND_12[511:0];
  _RAND_13 = {2{`RANDOM}};
  mem_addr_reg = _RAND_13[63:0];
  _RAND_14 = {1{`RANDOM}};
  lru_r = _RAND_14[0:0];
  _RAND_15 = {1{`RANDOM}};
  count_write = _RAND_15[3:0];
  _RAND_16 = {2{`RANDOM}};
  mem_write_addr_reg = _RAND_16[63:0];
  _RAND_17 = {16{`RANDOM}};
  mem_write_data_reg = _RAND_17[511:0];
  _RAND_18 = {1{`RANDOM}};
  Scanf_io_in_valid_REG = _RAND_18[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module ysyx_22050321_Sram_axifull(
  input         clock,
  input         reset,
  input         io_in_addr_req_valid,
  input  [63:0] io_in_addr_req_bits_addr,
  input         io_in_addr_req_bits_ce,
  input         io_in_addr_req_bits_we,
  input         io_in_rdata_rep_ready,
  output        io_in_rdata_rep_valid,
  output [63:0] io_in_rdata_rep_bits_rdata,
  input         io_in_wdata_req_valid,
  input  [63:0] io_in_wdata_req_bits_wdata,
  input  [7:0]  io_in_wdata_req_bits_wmask,
  output        io_in_wdata_rep,
  input         io_out_raddr_req_ready,
  output        io_out_raddr_req_valid,
  output [63:0] io_out_raddr_req_bits_addr,
  input         io_out_waddr_req_ready,
  output        io_out_waddr_req_valid,
  output [63:0] io_out_waddr_req_bits_addr,
  output        io_out_rdata_rep_ready,
  input         io_out_rdata_rep_valid,
  input  [63:0] io_out_rdata_rep_bits_data,
  input         io_out_rdata_rep_bits_last,
  input         io_out_wdata_req_ready,
  output        io_out_wdata_req_valid,
  output [63:0] io_out_wdata_req_bits_data,
  output [7:0]  io_out_wdata_req_bits_wstrb,
  output        io_out_wdata_req_bits_last,
  output        io_out_wb_ready,
  input         io_out_wb_valid,
  input  [1:0]  io_out_wb_bits_breap
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  reg [1:0] read_state; // @[sram2axi.scala 164:27]
  reg [1:0] write_state; // @[sram2axi.scala 165:28]
  wire  _T_1 = io_in_addr_req_valid & io_in_addr_req_bits_ce; // @[sram2axi.scala 169:33]
  wire [1:0] _GEN_2 = io_out_rdata_rep_valid & io_out_rdata_rep_ready & io_out_rdata_rep_bits_last ? 2'h0 : read_state; // @[sram2axi.scala 179:91 180:20 164:27]
  wire [1:0] _GEN_8 = io_out_wdata_req_valid & io_out_wdata_req_ready & io_out_wdata_req_bits_last ? 2'h3 : write_state; // @[sram2axi.scala 197:92 198:21 165:28]
  wire  _T_19 = io_out_wb_bits_breap == 2'h0; // @[sram2axi.scala 202:71]
  wire [1:0] _GEN_9 = io_out_wb_valid & io_out_wb_ready & io_out_wb_bits_breap == 2'h0 ? 2'h0 : write_state; // @[sram2axi.scala 202:79 203:21 165:28]
  wire [1:0] _GEN_10 = 2'h3 == write_state ? _GEN_9 : write_state; // @[sram2axi.scala 185:22 165:28]
  assign io_in_rdata_rep_valid = io_out_rdata_rep_valid; // @[sram2axi.scala 230:25]
  assign io_in_rdata_rep_bits_rdata = io_out_rdata_rep_bits_data; // @[sram2axi.scala 229:30]
  assign io_in_wdata_rep = io_out_wb_valid & _T_19; // @[sram2axi.scala 240:42]
  assign io_out_raddr_req_valid = read_state == 2'h1; // @[sram2axi.scala 214:44]
  assign io_out_raddr_req_bits_addr = io_in_addr_req_bits_addr; // @[sram2axi.scala 215:30]
  assign io_out_waddr_req_valid = write_state == 2'h1; // @[sram2axi.scala 224:45]
  assign io_out_waddr_req_bits_addr = io_in_addr_req_bits_addr; // @[sram2axi.scala 225:30]
  assign io_out_rdata_rep_ready = io_in_rdata_rep_ready; // @[sram2axi.scala 228:26]
  assign io_out_wdata_req_valid = io_in_wdata_req_valid; // @[sram2axi.scala 232:26]
  assign io_out_wdata_req_bits_data = io_in_wdata_req_bits_wdata; // @[sram2axi.scala 233:30]
  assign io_out_wdata_req_bits_wstrb = io_in_wdata_req_bits_wmask; // @[sram2axi.scala 236:31]
  assign io_out_wdata_req_bits_last = write_state == 2'h2; // @[sram2axi.scala 234:49]
  assign io_out_wb_ready = write_state == 2'h3; // @[sram2axi.scala 239:38]
  always @(posedge clock) begin
    if (reset) begin // @[sram2axi.scala 164:27]
      read_state <= 2'h0; // @[sram2axi.scala 164:27]
    end else if (2'h0 == read_state) begin // @[sram2axi.scala 167:21]
      if (io_in_addr_req_valid & io_in_addr_req_bits_ce & ~io_in_addr_req_bits_we) begin // @[sram2axi.scala 169:86]
        read_state <= 2'h1; // @[sram2axi.scala 170:20]
      end
    end else if (2'h1 == read_state) begin // @[sram2axi.scala 167:21]
      if (io_out_raddr_req_valid & io_out_raddr_req_ready) begin // @[sram2axi.scala 174:61]
        read_state <= 2'h2; // @[sram2axi.scala 175:20]
      end
    end else if (2'h2 == read_state) begin // @[sram2axi.scala 167:21]
      read_state <= _GEN_2;
    end
    if (reset) begin // @[sram2axi.scala 165:28]
      write_state <= 2'h0; // @[sram2axi.scala 165:28]
    end else if (2'h0 == write_state) begin // @[sram2axi.scala 185:22]
      if (_T_1 & io_in_addr_req_bits_we) begin // @[sram2axi.scala 187:86]
        write_state <= 2'h1; // @[sram2axi.scala 188:21]
      end
    end else if (2'h1 == write_state) begin // @[sram2axi.scala 185:22]
      if (io_out_waddr_req_ready & io_out_waddr_req_valid) begin // @[sram2axi.scala 192:61]
        write_state <= 2'h2; // @[sram2axi.scala 193:21]
      end
    end else if (2'h2 == write_state) begin // @[sram2axi.scala 185:22]
      write_state <= _GEN_8;
    end else begin
      write_state <= _GEN_10;
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
  _RAND_0 = {1{`RANDOM}};
  read_state = _RAND_0[1:0];
  _RAND_1 = {1{`RANDOM}};
  write_state = _RAND_1[1:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module ysyx_22050321_MMIO(
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
  input         io_out_raddr_req_ready,
  output        io_out_raddr_req_valid,
  output [63:0] io_out_raddr_req_bits_addr,
  output [7:0]  io_out_raddr_req_bits_len,
  input         io_out_waddr_req_ready,
  output        io_out_waddr_req_valid,
  output [63:0] io_out_waddr_req_bits_addr,
  output [7:0]  io_out_waddr_req_bits_len,
  output        io_out_rdata_rep_ready,
  input         io_out_rdata_rep_valid,
  input  [63:0] io_out_rdata_rep_bits_data,
  input         io_out_rdata_rep_bits_last,
  input         io_out_wdata_req_ready,
  output        io_out_wdata_req_valid,
  output [63:0] io_out_wdata_req_bits_data,
  output [7:0]  io_out_wdata_req_bits_wstrb,
  output        io_out_wdata_req_bits_last,
  output        io_out_wb_ready,
  input         io_out_wb_valid,
  input  [1:0]  io_out_wb_bits_breap
);
  wire  DCACHE_clock; // @[MMIO.scala 13:22]
  wire  DCACHE_reset; // @[MMIO.scala 13:22]
  wire  DCACHE_io_in_addr_req_valid; // @[MMIO.scala 13:22]
  wire [63:0] DCACHE_io_in_addr_req_bits_addr; // @[MMIO.scala 13:22]
  wire  DCACHE_io_in_addr_req_bits_we; // @[MMIO.scala 13:22]
  wire  DCACHE_io_in_rdata_rep_ready; // @[MMIO.scala 13:22]
  wire  DCACHE_io_in_rdata_rep_valid; // @[MMIO.scala 13:22]
  wire [63:0] DCACHE_io_in_rdata_rep_bits_rdata; // @[MMIO.scala 13:22]
  wire [63:0] DCACHE_io_in_wdata_req_bits_wdata; // @[MMIO.scala 13:22]
  wire [7:0] DCACHE_io_in_wdata_req_bits_wmask; // @[MMIO.scala 13:22]
  wire  DCACHE_io_in_wdata_rep; // @[MMIO.scala 13:22]
  wire  DCACHE_io_out_raddr_req_ready; // @[MMIO.scala 13:22]
  wire  DCACHE_io_out_raddr_req_valid; // @[MMIO.scala 13:22]
  wire [63:0] DCACHE_io_out_raddr_req_bits_addr; // @[MMIO.scala 13:22]
  wire  DCACHE_io_out_waddr_req_ready; // @[MMIO.scala 13:22]
  wire  DCACHE_io_out_waddr_req_valid; // @[MMIO.scala 13:22]
  wire [63:0] DCACHE_io_out_waddr_req_bits_addr; // @[MMIO.scala 13:22]
  wire  DCACHE_io_out_rdata_rep_valid; // @[MMIO.scala 13:22]
  wire [63:0] DCACHE_io_out_rdata_rep_bits_data; // @[MMIO.scala 13:22]
  wire  DCACHE_io_out_rdata_rep_bits_last; // @[MMIO.scala 13:22]
  wire  DCACHE_io_out_wdata_req_ready; // @[MMIO.scala 13:22]
  wire  DCACHE_io_out_wdata_req_valid; // @[MMIO.scala 13:22]
  wire [63:0] DCACHE_io_out_wdata_req_bits_data; // @[MMIO.scala 13:22]
  wire  DCACHE_io_out_wdata_req_bits_last; // @[MMIO.scala 13:22]
  wire  DCACHE_io_out_wb_valid; // @[MMIO.scala 13:22]
  wire [1:0] DCACHE_io_out_wb_bits_breap; // @[MMIO.scala 13:22]
  wire  birdge_clock; // @[MMIO.scala 14:22]
  wire  birdge_reset; // @[MMIO.scala 14:22]
  wire  birdge_io_in_addr_req_valid; // @[MMIO.scala 14:22]
  wire [63:0] birdge_io_in_addr_req_bits_addr; // @[MMIO.scala 14:22]
  wire  birdge_io_in_addr_req_bits_ce; // @[MMIO.scala 14:22]
  wire  birdge_io_in_addr_req_bits_we; // @[MMIO.scala 14:22]
  wire  birdge_io_in_rdata_rep_ready; // @[MMIO.scala 14:22]
  wire  birdge_io_in_rdata_rep_valid; // @[MMIO.scala 14:22]
  wire [63:0] birdge_io_in_rdata_rep_bits_rdata; // @[MMIO.scala 14:22]
  wire  birdge_io_in_wdata_req_valid; // @[MMIO.scala 14:22]
  wire [63:0] birdge_io_in_wdata_req_bits_wdata; // @[MMIO.scala 14:22]
  wire [7:0] birdge_io_in_wdata_req_bits_wmask; // @[MMIO.scala 14:22]
  wire  birdge_io_in_wdata_rep; // @[MMIO.scala 14:22]
  wire  birdge_io_out_raddr_req_ready; // @[MMIO.scala 14:22]
  wire  birdge_io_out_raddr_req_valid; // @[MMIO.scala 14:22]
  wire [63:0] birdge_io_out_raddr_req_bits_addr; // @[MMIO.scala 14:22]
  wire  birdge_io_out_waddr_req_ready; // @[MMIO.scala 14:22]
  wire  birdge_io_out_waddr_req_valid; // @[MMIO.scala 14:22]
  wire [63:0] birdge_io_out_waddr_req_bits_addr; // @[MMIO.scala 14:22]
  wire  birdge_io_out_rdata_rep_ready; // @[MMIO.scala 14:22]
  wire  birdge_io_out_rdata_rep_valid; // @[MMIO.scala 14:22]
  wire [63:0] birdge_io_out_rdata_rep_bits_data; // @[MMIO.scala 14:22]
  wire  birdge_io_out_rdata_rep_bits_last; // @[MMIO.scala 14:22]
  wire  birdge_io_out_wdata_req_ready; // @[MMIO.scala 14:22]
  wire  birdge_io_out_wdata_req_valid; // @[MMIO.scala 14:22]
  wire [63:0] birdge_io_out_wdata_req_bits_data; // @[MMIO.scala 14:22]
  wire [7:0] birdge_io_out_wdata_req_bits_wstrb; // @[MMIO.scala 14:22]
  wire  birdge_io_out_wdata_req_bits_last; // @[MMIO.scala 14:22]
  wire  birdge_io_out_wb_ready; // @[MMIO.scala 14:22]
  wire  birdge_io_out_wb_valid; // @[MMIO.scala 14:22]
  wire [1:0] birdge_io_out_wb_bits_breap; // @[MMIO.scala 14:22]
  ysyx_22050321_Cache_Axi_1 DCACHE ( // @[MMIO.scala 13:22]
    .clock(DCACHE_clock),
    .reset(DCACHE_reset),
    .io_in_addr_req_valid(DCACHE_io_in_addr_req_valid),
    .io_in_addr_req_bits_addr(DCACHE_io_in_addr_req_bits_addr),
    .io_in_addr_req_bits_we(DCACHE_io_in_addr_req_bits_we),
    .io_in_rdata_rep_ready(DCACHE_io_in_rdata_rep_ready),
    .io_in_rdata_rep_valid(DCACHE_io_in_rdata_rep_valid),
    .io_in_rdata_rep_bits_rdata(DCACHE_io_in_rdata_rep_bits_rdata),
    .io_in_wdata_req_bits_wdata(DCACHE_io_in_wdata_req_bits_wdata),
    .io_in_wdata_req_bits_wmask(DCACHE_io_in_wdata_req_bits_wmask),
    .io_in_wdata_rep(DCACHE_io_in_wdata_rep),
    .io_out_raddr_req_ready(DCACHE_io_out_raddr_req_ready),
    .io_out_raddr_req_valid(DCACHE_io_out_raddr_req_valid),
    .io_out_raddr_req_bits_addr(DCACHE_io_out_raddr_req_bits_addr),
    .io_out_waddr_req_ready(DCACHE_io_out_waddr_req_ready),
    .io_out_waddr_req_valid(DCACHE_io_out_waddr_req_valid),
    .io_out_waddr_req_bits_addr(DCACHE_io_out_waddr_req_bits_addr),
    .io_out_rdata_rep_valid(DCACHE_io_out_rdata_rep_valid),
    .io_out_rdata_rep_bits_data(DCACHE_io_out_rdata_rep_bits_data),
    .io_out_rdata_rep_bits_last(DCACHE_io_out_rdata_rep_bits_last),
    .io_out_wdata_req_ready(DCACHE_io_out_wdata_req_ready),
    .io_out_wdata_req_valid(DCACHE_io_out_wdata_req_valid),
    .io_out_wdata_req_bits_data(DCACHE_io_out_wdata_req_bits_data),
    .io_out_wdata_req_bits_last(DCACHE_io_out_wdata_req_bits_last),
    .io_out_wb_valid(DCACHE_io_out_wb_valid),
    .io_out_wb_bits_breap(DCACHE_io_out_wb_bits_breap)
  );
  ysyx_22050321_Sram_axifull birdge ( // @[MMIO.scala 14:22]
    .clock(birdge_clock),
    .reset(birdge_reset),
    .io_in_addr_req_valid(birdge_io_in_addr_req_valid),
    .io_in_addr_req_bits_addr(birdge_io_in_addr_req_bits_addr),
    .io_in_addr_req_bits_ce(birdge_io_in_addr_req_bits_ce),
    .io_in_addr_req_bits_we(birdge_io_in_addr_req_bits_we),
    .io_in_rdata_rep_ready(birdge_io_in_rdata_rep_ready),
    .io_in_rdata_rep_valid(birdge_io_in_rdata_rep_valid),
    .io_in_rdata_rep_bits_rdata(birdge_io_in_rdata_rep_bits_rdata),
    .io_in_wdata_req_valid(birdge_io_in_wdata_req_valid),
    .io_in_wdata_req_bits_wdata(birdge_io_in_wdata_req_bits_wdata),
    .io_in_wdata_req_bits_wmask(birdge_io_in_wdata_req_bits_wmask),
    .io_in_wdata_rep(birdge_io_in_wdata_rep),
    .io_out_raddr_req_ready(birdge_io_out_raddr_req_ready),
    .io_out_raddr_req_valid(birdge_io_out_raddr_req_valid),
    .io_out_raddr_req_bits_addr(birdge_io_out_raddr_req_bits_addr),
    .io_out_waddr_req_ready(birdge_io_out_waddr_req_ready),
    .io_out_waddr_req_valid(birdge_io_out_waddr_req_valid),
    .io_out_waddr_req_bits_addr(birdge_io_out_waddr_req_bits_addr),
    .io_out_rdata_rep_ready(birdge_io_out_rdata_rep_ready),
    .io_out_rdata_rep_valid(birdge_io_out_rdata_rep_valid),
    .io_out_rdata_rep_bits_data(birdge_io_out_rdata_rep_bits_data),
    .io_out_rdata_rep_bits_last(birdge_io_out_rdata_rep_bits_last),
    .io_out_wdata_req_ready(birdge_io_out_wdata_req_ready),
    .io_out_wdata_req_valid(birdge_io_out_wdata_req_valid),
    .io_out_wdata_req_bits_data(birdge_io_out_wdata_req_bits_data),
    .io_out_wdata_req_bits_wstrb(birdge_io_out_wdata_req_bits_wstrb),
    .io_out_wdata_req_bits_last(birdge_io_out_wdata_req_bits_last),
    .io_out_wb_ready(birdge_io_out_wb_ready),
    .io_out_wb_valid(birdge_io_out_wb_valid),
    .io_out_wb_bits_breap(birdge_io_out_wb_bits_breap)
  );
  assign io_in_rdata_rep_valid = io_in_addr_req_valid & io_in_addr_req_bits_addr >= 64'ha0000000 &
    io_in_addr_req_bits_addr <= 64'ha2000000 ? birdge_io_in_rdata_rep_valid : DCACHE_io_in_rdata_rep_valid; // @[MMIO.scala 29:119 31:18 73:18]
  assign io_in_rdata_rep_bits_rdata = io_in_addr_req_valid & io_in_addr_req_bits_addr >= 64'ha0000000 &
    io_in_addr_req_bits_addr <= 64'ha2000000 ? birdge_io_in_rdata_rep_bits_rdata : DCACHE_io_in_rdata_rep_bits_rdata; // @[MMIO.scala 29:119 31:18 73:18]
  assign io_in_wdata_rep = io_in_addr_req_valid & io_in_addr_req_bits_addr >= 64'ha0000000 & io_in_addr_req_bits_addr
     <= 64'ha2000000 ? birdge_io_in_wdata_rep : DCACHE_io_in_wdata_rep; // @[MMIO.scala 29:119 31:18 73:18]
  assign io_out_raddr_req_valid = io_in_addr_req_valid & io_in_addr_req_bits_addr >= 64'ha0000000 &
    io_in_addr_req_bits_addr <= 64'ha2000000 ? birdge_io_out_raddr_req_valid : DCACHE_io_out_raddr_req_valid; // @[MMIO.scala 29:119 48:28 88:28]
  assign io_out_raddr_req_bits_addr = io_in_addr_req_valid & io_in_addr_req_bits_addr >= 64'ha0000000 &
    io_in_addr_req_bits_addr <= 64'ha2000000 ? birdge_io_out_raddr_req_bits_addr : DCACHE_io_out_raddr_req_bits_addr; // @[MMIO.scala 29:119 101:34 61:34]
  assign io_out_raddr_req_bits_len = io_in_addr_req_valid & io_in_addr_req_bits_addr >= 64'ha0000000 &
    io_in_addr_req_bits_addr <= 64'ha2000000 ? 8'h0 : 8'h7; // @[MMIO.scala 29:119 101:34 61:34]
  assign io_out_waddr_req_valid = io_in_addr_req_valid & io_in_addr_req_bits_addr >= 64'ha0000000 &
    io_in_addr_req_bits_addr <= 64'ha2000000 ? birdge_io_out_waddr_req_valid : DCACHE_io_out_waddr_req_valid; // @[MMIO.scala 29:119 51:28 91:28]
  assign io_out_waddr_req_bits_addr = io_in_addr_req_valid & io_in_addr_req_bits_addr >= 64'ha0000000 &
    io_in_addr_req_bits_addr <= 64'ha2000000 ? birdge_io_out_waddr_req_bits_addr : DCACHE_io_out_waddr_req_bits_addr; // @[MMIO.scala 29:119 102:34 62:34]
  assign io_out_waddr_req_bits_len = io_in_addr_req_valid & io_in_addr_req_bits_addr >= 64'ha0000000 &
    io_in_addr_req_bits_addr <= 64'ha2000000 ? 8'h0 : 8'h7; // @[MMIO.scala 29:119 102:34 62:34]
  assign io_out_rdata_rep_ready = io_in_addr_req_valid & io_in_addr_req_bits_addr >= 64'ha0000000 &
    io_in_addr_req_bits_addr <= 64'ha2000000 ? birdge_io_out_rdata_rep_ready : 1'h1; // @[MMIO.scala 29:119 46:28 86:28]
  assign io_out_wdata_req_valid = io_in_addr_req_valid & io_in_addr_req_bits_addr >= 64'ha0000000 &
    io_in_addr_req_bits_addr <= 64'ha2000000 ? birdge_io_out_wdata_req_valid : DCACHE_io_out_wdata_req_valid; // @[MMIO.scala 29:119 54:28 94:28]
  assign io_out_wdata_req_bits_data = io_in_addr_req_valid & io_in_addr_req_bits_addr >= 64'ha0000000 &
    io_in_addr_req_bits_addr <= 64'ha2000000 ? birdge_io_out_wdata_req_bits_data : DCACHE_io_out_wdata_req_bits_data; // @[MMIO.scala 29:119 104:34 64:34]
  assign io_out_wdata_req_bits_wstrb = io_in_addr_req_valid & io_in_addr_req_bits_addr >= 64'ha0000000 &
    io_in_addr_req_bits_addr <= 64'ha2000000 ? birdge_io_out_wdata_req_bits_wstrb : 8'hff; // @[MMIO.scala 29:119 104:34 64:34]
  assign io_out_wdata_req_bits_last = io_in_addr_req_valid & io_in_addr_req_bits_addr >= 64'ha0000000 &
    io_in_addr_req_bits_addr <= 64'ha2000000 ? birdge_io_out_wdata_req_bits_last : DCACHE_io_out_wdata_req_bits_last; // @[MMIO.scala 29:119 104:34 64:34]
  assign io_out_wb_ready = io_in_addr_req_valid & io_in_addr_req_bits_addr >= 64'ha0000000 & io_in_addr_req_bits_addr
     <= 64'ha2000000 ? birdge_io_out_wb_ready : 1'h1; // @[MMIO.scala 29:119 58:21 98:21]
  assign DCACHE_clock = clock;
  assign DCACHE_reset = reset;
  assign DCACHE_io_in_addr_req_valid = io_in_addr_req_valid & io_in_addr_req_bits_addr >= 64'ha0000000 &
    io_in_addr_req_bits_addr <= 64'ha2000000 ? 1'h0 : io_in_addr_req_valid; // @[MMIO.scala 29:119 33:33 73:18]
  assign DCACHE_io_in_addr_req_bits_addr = io_in_addr_req_bits_addr; // @[MMIO.scala 29:119 31:18 24:30]
  assign DCACHE_io_in_addr_req_bits_we = io_in_addr_req_bits_we; // @[MMIO.scala 29:119 31:18 24:30]
  assign DCACHE_io_in_rdata_rep_ready = io_in_addr_req_valid & io_in_addr_req_bits_addr >= 64'ha0000000 &
    io_in_addr_req_bits_addr <= 64'ha2000000 ? 1'h0 : 1'h1; // @[MMIO.scala 29:119 36:34 73:18]
  assign DCACHE_io_in_wdata_req_bits_wdata = io_in_wdata_req_bits_wdata; // @[MMIO.scala 29:119 31:18 25:35]
  assign DCACHE_io_in_wdata_req_bits_wmask = io_in_wdata_req_bits_wmask; // @[MMIO.scala 29:119 31:18 25:35]
  assign DCACHE_io_out_raddr_req_ready = io_in_addr_req_valid & io_in_addr_req_bits_addr >= 64'ha0000000 &
    io_in_addr_req_bits_addr <= 64'ha2000000 ? 1'h0 : io_out_raddr_req_ready; // @[MMIO.scala 29:119 41:35 89:35]
  assign DCACHE_io_out_waddr_req_ready = io_in_addr_req_valid & io_in_addr_req_bits_addr >= 64'ha0000000 &
    io_in_addr_req_bits_addr <= 64'ha2000000 ? 1'h0 : io_out_waddr_req_ready; // @[MMIO.scala 29:119 42:35 92:35]
  assign DCACHE_io_out_rdata_rep_valid = io_in_addr_req_valid & io_in_addr_req_bits_addr >= 64'ha0000000 &
    io_in_addr_req_bits_addr <= 64'ha2000000 ? 1'h0 : io_out_rdata_rep_valid; // @[MMIO.scala 29:119 39:35 85:35]
  assign DCACHE_io_out_rdata_rep_bits_data = io_out_rdata_rep_bits_data; // @[MMIO.scala 29:119 103:34]
  assign DCACHE_io_out_rdata_rep_bits_last = io_out_rdata_rep_bits_last; // @[MMIO.scala 29:119 103:34]
  assign DCACHE_io_out_wdata_req_ready = io_in_addr_req_valid & io_in_addr_req_bits_addr >= 64'ha0000000 &
    io_in_addr_req_bits_addr <= 64'ha2000000 ? 1'h0 : io_out_wdata_req_ready; // @[MMIO.scala 29:119 43:35 95:35]
  assign DCACHE_io_out_wb_valid = io_in_addr_req_valid & io_in_addr_req_bits_addr >= 64'ha0000000 &
    io_in_addr_req_bits_addr <= 64'ha2000000 ? 1'h0 : io_out_wb_valid; // @[MMIO.scala 29:119 40:28 97:28]
  assign DCACHE_io_out_wb_bits_breap = io_out_wb_bits_breap; // @[MMIO.scala 29:119 100:27]
  assign birdge_clock = clock;
  assign birdge_reset = reset;
  assign birdge_io_in_addr_req_valid = io_in_addr_req_valid & io_in_addr_req_bits_addr >= 64'ha0000000 &
    io_in_addr_req_bits_addr <= 64'ha2000000 & io_in_addr_req_valid; // @[MMIO.scala 29:119 31:18 75:33]
  assign birdge_io_in_addr_req_bits_addr = io_in_addr_req_bits_addr; // @[MMIO.scala 29:119 31:18 24:30]
  assign birdge_io_in_addr_req_bits_ce = io_in_addr_req_bits_ce; // @[MMIO.scala 29:119 31:18 24:30]
  assign birdge_io_in_addr_req_bits_we = io_in_addr_req_bits_we; // @[MMIO.scala 29:119 31:18 24:30]
  assign birdge_io_in_rdata_rep_ready = io_in_addr_req_valid & io_in_addr_req_bits_addr >= 64'ha0000000 &
    io_in_addr_req_bits_addr <= 64'ha2000000; // @[MMIO.scala 29:74]
  assign birdge_io_in_wdata_req_valid = io_in_addr_req_valid & io_in_addr_req_bits_addr >= 64'ha0000000 &
    io_in_addr_req_bits_addr <= 64'ha2000000; // @[MMIO.scala 29:74]
  assign birdge_io_in_wdata_req_bits_wdata = io_in_wdata_req_bits_wdata; // @[MMIO.scala 29:119 31:18 25:35]
  assign birdge_io_in_wdata_req_bits_wmask = io_in_wdata_req_bits_wmask; // @[MMIO.scala 29:119 31:18 25:35]
  assign birdge_io_out_raddr_req_ready = io_in_addr_req_valid & io_in_addr_req_bits_addr >= 64'ha0000000 &
    io_in_addr_req_bits_addr <= 64'ha2000000 & io_out_raddr_req_ready; // @[MMIO.scala 29:119 49:35 81:35]
  assign birdge_io_out_waddr_req_ready = io_in_addr_req_valid & io_in_addr_req_bits_addr >= 64'ha0000000 &
    io_in_addr_req_bits_addr <= 64'ha2000000 & io_out_waddr_req_ready; // @[MMIO.scala 29:119 52:35 82:35]
  assign birdge_io_out_rdata_rep_valid = io_in_addr_req_valid & io_in_addr_req_bits_addr >= 64'ha0000000 &
    io_in_addr_req_bits_addr <= 64'ha2000000 & io_out_rdata_rep_valid; // @[MMIO.scala 29:119 45:35 79:35]
  assign birdge_io_out_rdata_rep_bits_data = io_out_rdata_rep_bits_data; // @[MMIO.scala 29:119 63:34]
  assign birdge_io_out_rdata_rep_bits_last = io_out_rdata_rep_bits_last; // @[MMIO.scala 29:119 63:34]
  assign birdge_io_out_wdata_req_ready = io_in_addr_req_valid & io_in_addr_req_bits_addr >= 64'ha0000000 &
    io_in_addr_req_bits_addr <= 64'ha2000000 & io_out_wdata_req_ready; // @[MMIO.scala 29:119 55:35 83:35]
  assign birdge_io_out_wb_valid = io_in_addr_req_valid & io_in_addr_req_bits_addr >= 64'ha0000000 &
    io_in_addr_req_bits_addr <= 64'ha2000000 & io_out_wb_valid; // @[MMIO.scala 29:119 57:28 80:28]
  assign birdge_io_out_wb_bits_breap = io_out_wb_bits_breap; // @[MMIO.scala 29:119 60:27]
endmodule
module ysyx_22050321_CSR_(
  input         clock,
  input         reset,
  output [63:0] io_rd_rd_data,
  input  [11:0] io_rd_csr_addr,
  input  [63:0] io_wr_csr_data,
  input         io_wr_csr_en,
  input  [11:0] io_wr_csr_idx,
  input         io_excp_flush,
  input         io_mert_flush,
  input  [63:0] io_epc,
  output [63:0] io_mtvec_o,
  output [63:0] io_mepc_o
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
  reg [63:0] _RAND_1;
  reg [63:0] _RAND_2;
  reg [63:0] _RAND_3;
  reg [63:0] _RAND_4;
  reg [63:0] _RAND_5;
`endif // RANDOMIZE_REG_INIT
  wire [63:0] CSRDIFF_mepc; // @[CSR.scala 86:23]
  wire [63:0] CSRDIFF_mcause; // @[CSR.scala 86:23]
  wire [63:0] CSRDIFF_mstatus; // @[CSR.scala 86:23]
  wire [63:0] CSRDIFF_mtvec; // @[CSR.scala 86:23]
  reg [63:0] mepc; // @[CSR.scala 35:17]
  reg [63:0] mcause; // @[CSR.scala 36:23]
  reg [63:0] mstatus; // @[CSR.scala 37:24]
  reg [63:0] mtvec; // @[CSR.scala 38:22]
  reg [63:0] mie; // @[CSR.scala 39:20]
  reg [63:0] mip; // @[CSR.scala 40:20]
  wire  _T = io_rd_csr_addr == 12'h300; // @[CSR.scala 44:21]
  wire  _T_1 = io_rd_csr_addr == 12'h305; // @[CSR.scala 45:22]
  wire  _T_2 = io_rd_csr_addr == 12'h341; // @[CSR.scala 46:22]
  wire  _T_3 = io_rd_csr_addr == 12'h342; // @[CSR.scala 47:22]
  wire  _T_4 = io_rd_csr_addr == 12'h304; // @[CSR.scala 48:22]
  wire  _T_5 = io_rd_csr_addr == 12'h344; // @[CSR.scala 49:22]
  wire [63:0] _io_rd_rd_data_T = _T_5 ? mip : 64'h0; // @[Mux.scala 101:16]
  wire [63:0] _io_rd_rd_data_T_1 = _T_4 ? mie : _io_rd_rd_data_T; // @[Mux.scala 101:16]
  wire [63:0] _io_rd_rd_data_T_2 = _T_3 ? mcause : _io_rd_rd_data_T_1; // @[Mux.scala 101:16]
  wire [63:0] _io_rd_rd_data_T_3 = _T_2 ? mepc : _io_rd_rd_data_T_2; // @[Mux.scala 101:16]
  wire [63:0] _io_rd_rd_data_T_4 = _T_1 ? mtvec : _io_rd_rd_data_T_3; // @[Mux.scala 101:16]
  wire [63:0] _mstatus_T = mstatus & 64'hfffffffffffffff7; // @[CSR.scala 54:24]
  wire [63:0] _GEN_1 = io_excp_flush ? 64'hb : mcause; // @[CSR.scala 53:22 55:12 36:23]
  wire [63:0] _GEN_2 = io_excp_flush ? io_epc : mepc; // @[CSR.scala 53:22 56:10 35:17]
  wire [63:0] _mstatus_T_1 = mstatus | 64'h8; // @[CSR.scala 59:24]
  wire [63:0] _GEN_4 = io_wr_csr_idx == 12'h344 & io_wr_csr_en ? io_wr_csr_data : mip; // @[CSR.scala 78:64 79:11 40:20]
  wire [63:0] _GEN_5 = io_wr_csr_idx == 12'h304 & io_wr_csr_en ? io_wr_csr_data : mie; // @[CSR.scala 75:64 76:11 39:20]
  wire [63:0] _GEN_6 = io_wr_csr_idx == 12'h304 & io_wr_csr_en ? mip : _GEN_4; // @[CSR.scala 40:20 75:64]
  wire [63:0] _GEN_7 = io_wr_csr_idx == 12'h342 & io_wr_csr_en ? io_wr_csr_data : _GEN_1; // @[CSR.scala 72:67 73:14]
  wire [63:0] _GEN_8 = io_wr_csr_idx == 12'h342 & io_wr_csr_en ? mie : _GEN_5; // @[CSR.scala 39:20 72:67]
  wire [63:0] _GEN_9 = io_wr_csr_idx == 12'h342 & io_wr_csr_en ? mip : _GEN_6; // @[CSR.scala 40:20 72:67]
  CSR_DIFF CSRDIFF ( // @[CSR.scala 86:23]
    .mepc(CSRDIFF_mepc),
    .mcause(CSRDIFF_mcause),
    .mstatus(CSRDIFF_mstatus),
    .mtvec(CSRDIFF_mtvec)
  );
  assign io_rd_rd_data = _T ? mstatus : _io_rd_rd_data_T_4; // @[Mux.scala 101:16]
  assign io_mtvec_o = mtvec; // @[CSR.scala 83:14]
  assign io_mepc_o = mepc; // @[CSR.scala 84:13]
  assign CSRDIFF_mepc = mepc; // @[CSR.scala 87:19]
  assign CSRDIFF_mcause = mcause; // @[CSR.scala 89:21]
  assign CSRDIFF_mstatus = mstatus; // @[CSR.scala 90:22]
  assign CSRDIFF_mtvec = mtvec; // @[CSR.scala 88:20]
  always @(posedge clock) begin
    if (io_wr_csr_idx == 12'h300 & io_wr_csr_en) begin // @[CSR.scala 63:61]
      mepc <= _GEN_2;
    end else if (io_wr_csr_idx == 12'h305 & io_wr_csr_en) begin // @[CSR.scala 66:66]
      mepc <= _GEN_2;
    end else if (io_wr_csr_idx == 12'h341 & io_wr_csr_en) begin // @[CSR.scala 69:65]
      mepc <= io_wr_csr_data; // @[CSR.scala 70:12]
    end else begin
      mepc <= _GEN_2;
    end
    if (reset) begin // @[CSR.scala 36:23]
      mcause <= 64'h0; // @[CSR.scala 36:23]
    end else if (io_wr_csr_idx == 12'h300 & io_wr_csr_en) begin // @[CSR.scala 63:61]
      mcause <= _GEN_1;
    end else if (io_wr_csr_idx == 12'h305 & io_wr_csr_en) begin // @[CSR.scala 66:66]
      mcause <= _GEN_1;
    end else if (io_wr_csr_idx == 12'h341 & io_wr_csr_en) begin // @[CSR.scala 69:65]
      mcause <= _GEN_1;
    end else begin
      mcause <= _GEN_7;
    end
    if (reset) begin // @[CSR.scala 37:24]
      mstatus <= 64'h0; // @[CSR.scala 37:24]
    end else if (io_wr_csr_idx == 12'h300 & io_wr_csr_en) begin // @[CSR.scala 63:61]
      mstatus <= io_wr_csr_data; // @[CSR.scala 64:13]
    end else if (io_mert_flush) begin // @[CSR.scala 58:22]
      mstatus <= _mstatus_T_1; // @[CSR.scala 59:13]
    end else if (io_excp_flush) begin // @[CSR.scala 53:22]
      mstatus <= _mstatus_T; // @[CSR.scala 54:13]
    end
    if (reset) begin // @[CSR.scala 38:22]
      mtvec <= 64'h0; // @[CSR.scala 38:22]
    end else if (!(io_wr_csr_idx == 12'h300 & io_wr_csr_en)) begin // @[CSR.scala 63:61]
      if (io_wr_csr_idx == 12'h305 & io_wr_csr_en) begin // @[CSR.scala 66:66]
        mtvec <= io_wr_csr_data; // @[CSR.scala 67:13]
      end
    end
    if (reset) begin // @[CSR.scala 39:20]
      mie <= 64'h0; // @[CSR.scala 39:20]
    end else if (!(io_wr_csr_idx == 12'h300 & io_wr_csr_en)) begin // @[CSR.scala 63:61]
      if (!(io_wr_csr_idx == 12'h305 & io_wr_csr_en)) begin // @[CSR.scala 66:66]
        if (!(io_wr_csr_idx == 12'h341 & io_wr_csr_en)) begin // @[CSR.scala 69:65]
          mie <= _GEN_8;
        end
      end
    end
    if (reset) begin // @[CSR.scala 40:20]
      mip <= 64'h0; // @[CSR.scala 40:20]
    end else if (!(io_wr_csr_idx == 12'h300 & io_wr_csr_en)) begin // @[CSR.scala 63:61]
      if (!(io_wr_csr_idx == 12'h305 & io_wr_csr_en)) begin // @[CSR.scala 66:66]
        if (!(io_wr_csr_idx == 12'h341 & io_wr_csr_en)) begin // @[CSR.scala 69:65]
          mip <= _GEN_9;
        end
      end
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
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module ysyx_22050321_CoreTop(
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
  reg [31:0] _RAND_2;
  reg [63:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [63:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [63:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [63:0] _RAND_9;
  reg [31:0] _RAND_10;
  reg [63:0] _RAND_11;
  reg [31:0] _RAND_12;
  reg [63:0] _RAND_13;
  reg [31:0] _RAND_14;
  reg [63:0] _RAND_15;
  reg [31:0] _RAND_16;
  reg [63:0] _RAND_17;
  reg [31:0] _RAND_18;
  reg [63:0] _RAND_19;
  reg [31:0] _RAND_20;
  reg [63:0] _RAND_21;
  reg [31:0] _RAND_22;
  reg [63:0] _RAND_23;
  reg [31:0] _RAND_24;
  reg [63:0] _RAND_25;
  reg [31:0] _RAND_26;
  reg [63:0] _RAND_27;
  reg [31:0] _RAND_28;
  reg [63:0] _RAND_29;
  reg [31:0] _RAND_30;
  reg [63:0] _RAND_31;
  reg [31:0] _RAND_32;
  reg [63:0] _RAND_33;
  reg [31:0] _RAND_34;
  reg [63:0] _RAND_35;
  reg [31:0] _RAND_36;
  reg [63:0] _RAND_37;
  reg [31:0] _RAND_38;
  reg [63:0] _RAND_39;
  reg [31:0] _RAND_40;
  reg [63:0] _RAND_41;
  reg [31:0] _RAND_42;
  reg [63:0] _RAND_43;
  reg [31:0] _RAND_44;
  reg [63:0] _RAND_45;
  reg [31:0] _RAND_46;
  reg [63:0] _RAND_47;
  reg [31:0] _RAND_48;
  reg [63:0] _RAND_49;
  reg [31:0] _RAND_50;
  reg [63:0] _RAND_51;
  reg [31:0] _RAND_52;
  reg [63:0] _RAND_53;
  reg [31:0] _RAND_54;
  reg [63:0] _RAND_55;
  reg [31:0] _RAND_56;
  reg [63:0] _RAND_57;
  reg [31:0] _RAND_58;
  reg [63:0] _RAND_59;
  reg [31:0] _RAND_60;
  reg [63:0] _RAND_61;
  reg [31:0] _RAND_62;
  reg [63:0] _RAND_63;
  reg [31:0] _RAND_64;
  reg [63:0] _RAND_65;
  reg [31:0] _RAND_66;
  reg [31:0] _RAND_67;
  reg [31:0] _RAND_68;
  reg [31:0] _RAND_69;
  reg [31:0] _RAND_70;
  reg [31:0] _RAND_71;
  reg [31:0] _RAND_72;
  reg [31:0] _RAND_73;
  reg [31:0] _RAND_74;
  reg [31:0] _RAND_75;
  reg [31:0] _RAND_76;
  reg [63:0] _RAND_77;
  reg [63:0] _RAND_78;
  reg [63:0] _RAND_79;
  reg [63:0] _RAND_80;
  reg [31:0] _RAND_81;
  reg [31:0] _RAND_82;
  reg [31:0] _RAND_83;
  reg [31:0] _RAND_84;
  reg [31:0] _RAND_85;
  reg [31:0] _RAND_86;
  reg [31:0] _RAND_87;
  reg [31:0] _RAND_88;
  reg [31:0] _RAND_89;
  reg [63:0] _RAND_90;
  reg [31:0] _RAND_91;
  reg [63:0] _RAND_92;
  reg [31:0] _RAND_93;
  reg [63:0] _RAND_94;
  reg [63:0] _RAND_95;
  reg [63:0] _RAND_96;
  reg [63:0] _RAND_97;
  reg [63:0] _RAND_98;
  reg [31:0] _RAND_99;
  reg [31:0] _RAND_100;
  reg [31:0] _RAND_101;
  reg [31:0] _RAND_102;
  reg [31:0] _RAND_103;
  reg [31:0] _RAND_104;
  reg [31:0] _RAND_105;
  reg [63:0] _RAND_106;
  reg [31:0] _RAND_107;
  reg [63:0] _RAND_108;
  reg [31:0] _RAND_109;
  reg [31:0] _RAND_110;
  reg [63:0] _RAND_111;
  reg [63:0] _RAND_112;
  reg [31:0] _RAND_113;
  reg [31:0] _RAND_114;
  reg [31:0] _RAND_115;
  reg [31:0] _RAND_116;
  reg [31:0] _RAND_117;
  reg [31:0] _RAND_118;
  reg [31:0] _RAND_119;
  reg [63:0] _RAND_120;
  reg [63:0] _RAND_121;
`endif // RANDOMIZE_REG_INIT
  wire  IF_clock; // @[CoreTop.scala 123:18]
  wire  IF_reset; // @[CoreTop.scala 123:18]
  wire  IF_io_branch_io_is_branch; // @[CoreTop.scala 123:18]
  wire  IF_io_branch_io_is_jump; // @[CoreTop.scala 123:18]
  wire [63:0] IF_io_branch_io_dnpc; // @[CoreTop.scala 123:18]
  wire  IF_io_cache_req_addr_req_valid; // @[CoreTop.scala 123:18]
  wire [63:0] IF_io_cache_req_addr_req_bits_addr; // @[CoreTop.scala 123:18]
  wire  IF_io_cache_req_rdata_rep_ready; // @[CoreTop.scala 123:18]
  wire  IF_io_cache_req_rdata_rep_valid; // @[CoreTop.scala 123:18]
  wire [63:0] IF_io_cache_req_rdata_rep_bits_rdata; // @[CoreTop.scala 123:18]
  wire  IF_io_out_ready; // @[CoreTop.scala 123:18]
  wire  IF_io_out_valid; // @[CoreTop.scala 123:18]
  wire [63:0] IF_io_out_bits_PC; // @[CoreTop.scala 123:18]
  wire [31:0] IF_io_out_bits_Inst; // @[CoreTop.scala 123:18]
  wire  IF_io_flush; // @[CoreTop.scala 123:18]
  wire  IF_io_mret_flush; // @[CoreTop.scala 123:18]
  wire  IF_io_excp_flush; // @[CoreTop.scala 123:18]
  wire [63:0] IF_io_mtvec; // @[CoreTop.scala 123:18]
  wire [63:0] IF_io_mret; // @[CoreTop.scala 123:18]
  wire  IF_io_wb_stall; // @[CoreTop.scala 123:18]
  wire  IF_io_ex_stall; // @[CoreTop.scala 123:18]
  wire  ID_io_in_valid; // @[CoreTop.scala 128:18]
  wire [63:0] ID_io_in_bits_PC; // @[CoreTop.scala 128:18]
  wire [31:0] ID_io_in_bits_Inst; // @[CoreTop.scala 128:18]
  wire [63:0] ID_io_REG1; // @[CoreTop.scala 128:18]
  wire [63:0] ID_io_REG2; // @[CoreTop.scala 128:18]
  wire  ID_io_flush; // @[CoreTop.scala 128:18]
  wire  ID_io_ex_is_mem; // @[CoreTop.scala 128:18]
  wire [4:0] ID_io_ex_reg_rfDest; // @[CoreTop.scala 128:18]
  wire  ID_io_ex_reg_rfWen; // @[CoreTop.scala 128:18]
  wire  ID_io_out_ready; // @[CoreTop.scala 128:18]
  wire  ID_io_out_valid; // @[CoreTop.scala 128:18]
  wire [2:0] ID_io_out_bits_ctrl_signal_src1Type; // @[CoreTop.scala 128:18]
  wire [2:0] ID_io_out_bits_ctrl_signal_src2Type; // @[CoreTop.scala 128:18]
  wire [2:0] ID_io_out_bits_ctrl_signal_fuType; // @[CoreTop.scala 128:18]
  wire  ID_io_out_bits_ctrl_signal_inst_valid; // @[CoreTop.scala 128:18]
  wire [4:0] ID_io_out_bits_ctrl_signal_rfSrc1; // @[CoreTop.scala 128:18]
  wire [4:0] ID_io_out_bits_ctrl_signal_rfSrc2; // @[CoreTop.scala 128:18]
  wire  ID_io_out_bits_ctrl_signal_rfWen; // @[CoreTop.scala 128:18]
  wire [6:0] ID_io_out_bits_ctrl_signal_aluoptype; // @[CoreTop.scala 128:18]
  wire [4:0] ID_io_out_bits_ctrl_signal_rfDest; // @[CoreTop.scala 128:18]
  wire  ID_io_out_bits_ctrl_signal_ertn_flush; // @[CoreTop.scala 128:18]
  wire  ID_io_out_bits_ctrl_signal_excp_flush; // @[CoreTop.scala 128:18]
  wire [63:0] ID_io_out_bits_ctrl_data_src1; // @[CoreTop.scala 128:18]
  wire [63:0] ID_io_out_bits_ctrl_data_src2; // @[CoreTop.scala 128:18]
  wire [63:0] ID_io_out_bits_ctrl_data_Imm; // @[CoreTop.scala 128:18]
  wire [63:0] ID_io_out_bits_ctrl_flow_PC; // @[CoreTop.scala 128:18]
  wire [31:0] ID_io_out_bits_ctrl_flow_inst; // @[CoreTop.scala 128:18]
  wire [11:0] ID_io_out_bits_ctrl_csr_csr_idx; // @[CoreTop.scala 128:18]
  wire  EX_clock; // @[CoreTop.scala 130:18]
  wire  EX_reset; // @[CoreTop.scala 130:18]
  wire  EX_io_in_ready; // @[CoreTop.scala 130:18]
  wire  EX_io_in_valid; // @[CoreTop.scala 130:18]
  wire [2:0] EX_io_in_bits_ctrl_signal_src1Type; // @[CoreTop.scala 130:18]
  wire [2:0] EX_io_in_bits_ctrl_signal_src2Type; // @[CoreTop.scala 130:18]
  wire [2:0] EX_io_in_bits_ctrl_signal_fuType; // @[CoreTop.scala 130:18]
  wire  EX_io_in_bits_ctrl_signal_inst_valid; // @[CoreTop.scala 130:18]
  wire  EX_io_in_bits_ctrl_signal_rfWen; // @[CoreTop.scala 130:18]
  wire [6:0] EX_io_in_bits_ctrl_signal_aluoptype; // @[CoreTop.scala 130:18]
  wire [4:0] EX_io_in_bits_ctrl_signal_rfDest; // @[CoreTop.scala 130:18]
  wire  EX_io_in_bits_ctrl_signal_ertn_flush; // @[CoreTop.scala 130:18]
  wire  EX_io_in_bits_ctrl_signal_excp_flush; // @[CoreTop.scala 130:18]
  wire [63:0] EX_io_in_bits_ctrl_data_src1; // @[CoreTop.scala 130:18]
  wire [63:0] EX_io_in_bits_ctrl_data_src2; // @[CoreTop.scala 130:18]
  wire [63:0] EX_io_in_bits_ctrl_data_Imm; // @[CoreTop.scala 130:18]
  wire [63:0] EX_io_in_bits_ctrl_flow_PC; // @[CoreTop.scala 130:18]
  wire [31:0] EX_io_in_bits_ctrl_flow_inst; // @[CoreTop.scala 130:18]
  wire [11:0] EX_io_in_bits_ctrl_csr_csr_idx; // @[CoreTop.scala 130:18]
  wire  EX_io_is_mem; // @[CoreTop.scala 130:18]
  wire  EX_io_branchIO_is_branch; // @[CoreTop.scala 130:18]
  wire  EX_io_branchIO_is_jump; // @[CoreTop.scala 130:18]
  wire [63:0] EX_io_branchIO_dnpc; // @[CoreTop.scala 130:18]
  wire  EX_io_out_ready; // @[CoreTop.scala 130:18]
  wire  EX_io_out_valid; // @[CoreTop.scala 130:18]
  wire [2:0] EX_io_out_bits_ctrl_signal_fuType; // @[CoreTop.scala 130:18]
  wire  EX_io_out_bits_ctrl_signal_inst_valid; // @[CoreTop.scala 130:18]
  wire  EX_io_out_bits_ctrl_signal_rfWen; // @[CoreTop.scala 130:18]
  wire [6:0] EX_io_out_bits_ctrl_signal_aluoptype; // @[CoreTop.scala 130:18]
  wire  EX_io_out_bits_ctrl_signal_ertn_flush; // @[CoreTop.scala 130:18]
  wire  EX_io_out_bits_ctrl_signal_excp_flush; // @[CoreTop.scala 130:18]
  wire [63:0] EX_io_out_bits_ctrl_flow_PC; // @[CoreTop.scala 130:18]
  wire [31:0] EX_io_out_bits_ctrl_flow_inst; // @[CoreTop.scala 130:18]
  wire [63:0] EX_io_out_bits_ctrl_flow_Dnpc; // @[CoreTop.scala 130:18]
  wire [4:0] EX_io_out_bits_ctrl_rf_rfDest; // @[CoreTop.scala 130:18]
  wire  EX_io_out_bits_ctrl_rf_rfWen; // @[CoreTop.scala 130:18]
  wire [63:0] EX_io_out_bits_ctrl_rf_rfData; // @[CoreTop.scala 130:18]
  wire [63:0] EX_io_out_bits_ctrl_data_src1; // @[CoreTop.scala 130:18]
  wire [63:0] EX_io_out_bits_ctrl_data_src2; // @[CoreTop.scala 130:18]
  wire [63:0] EX_io_out_bits_ctrl_data_Imm; // @[CoreTop.scala 130:18]
  wire [63:0] EX_io_out_bits_ctrl_csr_csr_data; // @[CoreTop.scala 130:18]
  wire  EX_io_out_bits_ctrl_csr_csr_en; // @[CoreTop.scala 130:18]
  wire [11:0] EX_io_out_bits_ctrl_csr_csr_idx; // @[CoreTop.scala 130:18]
  wire  EX_io_is_break; // @[CoreTop.scala 130:18]
  wire  EX_io_is_flush; // @[CoreTop.scala 130:18]
  wire  EX_io_icache_busy; // @[CoreTop.scala 130:18]
  wire [63:0] EX_io_csr_rd_io_rd_data; // @[CoreTop.scala 130:18]
  wire [11:0] EX_io_csr_rd_io_csr_addr; // @[CoreTop.scala 130:18]
  wire  EX_io_stall; // @[CoreTop.scala 130:18]
  wire  DIP_is_break; // @[CoreTop.scala 132:19]
  wire [63:0] DIP_rf_0; // @[CoreTop.scala 132:19]
  wire [63:0] DIP_rf_1; // @[CoreTop.scala 132:19]
  wire [63:0] DIP_rf_2; // @[CoreTop.scala 132:19]
  wire [63:0] DIP_rf_3; // @[CoreTop.scala 132:19]
  wire [63:0] DIP_rf_4; // @[CoreTop.scala 132:19]
  wire [63:0] DIP_rf_5; // @[CoreTop.scala 132:19]
  wire [63:0] DIP_rf_6; // @[CoreTop.scala 132:19]
  wire [63:0] DIP_rf_7; // @[CoreTop.scala 132:19]
  wire [63:0] DIP_rf_8; // @[CoreTop.scala 132:19]
  wire [63:0] DIP_rf_9; // @[CoreTop.scala 132:19]
  wire [63:0] DIP_rf_10; // @[CoreTop.scala 132:19]
  wire [63:0] DIP_rf_11; // @[CoreTop.scala 132:19]
  wire [63:0] DIP_rf_12; // @[CoreTop.scala 132:19]
  wire [63:0] DIP_rf_13; // @[CoreTop.scala 132:19]
  wire [63:0] DIP_rf_14; // @[CoreTop.scala 132:19]
  wire [63:0] DIP_rf_15; // @[CoreTop.scala 132:19]
  wire [63:0] DIP_rf_16; // @[CoreTop.scala 132:19]
  wire [63:0] DIP_rf_17; // @[CoreTop.scala 132:19]
  wire [63:0] DIP_rf_18; // @[CoreTop.scala 132:19]
  wire [63:0] DIP_rf_19; // @[CoreTop.scala 132:19]
  wire [63:0] DIP_rf_20; // @[CoreTop.scala 132:19]
  wire [63:0] DIP_rf_21; // @[CoreTop.scala 132:19]
  wire [63:0] DIP_rf_22; // @[CoreTop.scala 132:19]
  wire [63:0] DIP_rf_23; // @[CoreTop.scala 132:19]
  wire [63:0] DIP_rf_24; // @[CoreTop.scala 132:19]
  wire [63:0] DIP_rf_25; // @[CoreTop.scala 132:19]
  wire [63:0] DIP_rf_26; // @[CoreTop.scala 132:19]
  wire [63:0] DIP_rf_27; // @[CoreTop.scala 132:19]
  wire [63:0] DIP_rf_28; // @[CoreTop.scala 132:19]
  wire [63:0] DIP_rf_29; // @[CoreTop.scala 132:19]
  wire [63:0] DIP_rf_30; // @[CoreTop.scala 132:19]
  wire [63:0] DIP_rf_31; // @[CoreTop.scala 132:19]
  wire [31:0] DIP_inst; // @[CoreTop.scala 132:19]
  wire [63:0] DIP_pc; // @[CoreTop.scala 132:19]
  wire  DIP_inst_valid; // @[CoreTop.scala 132:19]
  wire [63:0] DIP_dnpc; // @[CoreTop.scala 132:19]
  wire  DIP_is_skip; // @[CoreTop.scala 132:19]
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
  wire  MEM_io_in_ready; // @[CoreTop.scala 138:19]
  wire  MEM_io_in_valid; // @[CoreTop.scala 138:19]
  wire [2:0] MEM_io_in_bits_ctrl_signal_fuType; // @[CoreTop.scala 138:19]
  wire  MEM_io_in_bits_ctrl_signal_inst_valid; // @[CoreTop.scala 138:19]
  wire  MEM_io_in_bits_ctrl_signal_rfWen; // @[CoreTop.scala 138:19]
  wire [6:0] MEM_io_in_bits_ctrl_signal_aluoptype; // @[CoreTop.scala 138:19]
  wire  MEM_io_in_bits_ctrl_signal_ertn_flush; // @[CoreTop.scala 138:19]
  wire  MEM_io_in_bits_ctrl_signal_excp_flush; // @[CoreTop.scala 138:19]
  wire [63:0] MEM_io_in_bits_ctrl_flow_PC; // @[CoreTop.scala 138:19]
  wire [31:0] MEM_io_in_bits_ctrl_flow_inst; // @[CoreTop.scala 138:19]
  wire [63:0] MEM_io_in_bits_ctrl_flow_Dnpc; // @[CoreTop.scala 138:19]
  wire [4:0] MEM_io_in_bits_ctrl_rf_rfDest; // @[CoreTop.scala 138:19]
  wire [63:0] MEM_io_in_bits_ctrl_rf_rfData; // @[CoreTop.scala 138:19]
  wire [63:0] MEM_io_in_bits_ctrl_data_src1; // @[CoreTop.scala 138:19]
  wire [63:0] MEM_io_in_bits_ctrl_data_src2; // @[CoreTop.scala 138:19]
  wire [63:0] MEM_io_in_bits_ctrl_data_Imm; // @[CoreTop.scala 138:19]
  wire [63:0] MEM_io_in_bits_ctrl_csr_csr_data; // @[CoreTop.scala 138:19]
  wire  MEM_io_in_bits_ctrl_csr_csr_en; // @[CoreTop.scala 138:19]
  wire [11:0] MEM_io_in_bits_ctrl_csr_csr_idx; // @[CoreTop.scala 138:19]
  wire  MEM_io_out_ready; // @[CoreTop.scala 138:19]
  wire  MEM_io_out_valid; // @[CoreTop.scala 138:19]
  wire  MEM_io_out_bits_ctrl_signal_inst_valid; // @[CoreTop.scala 138:19]
  wire  MEM_io_out_bits_ctrl_signal_rfWen; // @[CoreTop.scala 138:19]
  wire  MEM_io_out_bits_ctrl_signal_ertn_flush; // @[CoreTop.scala 138:19]
  wire  MEM_io_out_bits_ctrl_signal_excp_flush; // @[CoreTop.scala 138:19]
  wire [63:0] MEM_io_out_bits_ctrl_flow_PC; // @[CoreTop.scala 138:19]
  wire [31:0] MEM_io_out_bits_ctrl_flow_inst; // @[CoreTop.scala 138:19]
  wire [63:0] MEM_io_out_bits_ctrl_flow_Dnpc; // @[CoreTop.scala 138:19]
  wire  MEM_io_out_bits_ctrl_flow_skip; // @[CoreTop.scala 138:19]
  wire [4:0] MEM_io_out_bits_ctrl_rf_rfDest; // @[CoreTop.scala 138:19]
  wire  MEM_io_out_bits_ctrl_rf_rfWen; // @[CoreTop.scala 138:19]
  wire [63:0] MEM_io_out_bits_ctrl_rf_rfData; // @[CoreTop.scala 138:19]
  wire [63:0] MEM_io_out_bits_ctrl_csr_csr_data; // @[CoreTop.scala 138:19]
  wire  MEM_io_out_bits_ctrl_csr_csr_en; // @[CoreTop.scala 138:19]
  wire [11:0] MEM_io_out_bits_ctrl_csr_csr_idx; // @[CoreTop.scala 138:19]
  wire  MEM_io_cache_io_addr_req_valid; // @[CoreTop.scala 138:19]
  wire [63:0] MEM_io_cache_io_addr_req_bits_addr; // @[CoreTop.scala 138:19]
  wire  MEM_io_cache_io_addr_req_bits_ce; // @[CoreTop.scala 138:19]
  wire  MEM_io_cache_io_addr_req_bits_we; // @[CoreTop.scala 138:19]
  wire  MEM_io_cache_io_rdata_rep_valid; // @[CoreTop.scala 138:19]
  wire [63:0] MEM_io_cache_io_rdata_rep_bits_rdata; // @[CoreTop.scala 138:19]
  wire [63:0] MEM_io_cache_io_wdata_req_bits_wdata; // @[CoreTop.scala 138:19]
  wire [7:0] MEM_io_cache_io_wdata_req_bits_wmask; // @[CoreTop.scala 138:19]
  wire  MEM_io_cache_io_wdata_rep; // @[CoreTop.scala 138:19]
  wire  WB_io_in_ready; // @[CoreTop.scala 140:18]
  wire  WB_io_in_valid; // @[CoreTop.scala 140:18]
  wire  WB_io_in_bits_ctrl_signal_inst_valid; // @[CoreTop.scala 140:18]
  wire  WB_io_in_bits_ctrl_signal_rfWen; // @[CoreTop.scala 140:18]
  wire  WB_io_in_bits_ctrl_signal_ertn_flush; // @[CoreTop.scala 140:18]
  wire  WB_io_in_bits_ctrl_signal_excp_flush; // @[CoreTop.scala 140:18]
  wire [63:0] WB_io_in_bits_ctrl_flow_PC; // @[CoreTop.scala 140:18]
  wire [31:0] WB_io_in_bits_ctrl_flow_inst; // @[CoreTop.scala 140:18]
  wire [63:0] WB_io_in_bits_ctrl_flow_Dnpc; // @[CoreTop.scala 140:18]
  wire  WB_io_in_bits_ctrl_flow_skip; // @[CoreTop.scala 140:18]
  wire [4:0] WB_io_in_bits_ctrl_rf_rfDest; // @[CoreTop.scala 140:18]
  wire [63:0] WB_io_in_bits_ctrl_rf_rfData; // @[CoreTop.scala 140:18]
  wire [63:0] WB_io_in_bits_ctrl_csr_csr_data; // @[CoreTop.scala 140:18]
  wire  WB_io_in_bits_ctrl_csr_csr_en; // @[CoreTop.scala 140:18]
  wire [11:0] WB_io_in_bits_ctrl_csr_csr_idx; // @[CoreTop.scala 140:18]
  wire  WB_io_out_ready; // @[CoreTop.scala 140:18]
  wire  WB_io_out_valid; // @[CoreTop.scala 140:18]
  wire  WB_io_out_bits_ctrl_signal_inst_valid; // @[CoreTop.scala 140:18]
  wire  WB_io_out_bits_ctrl_signal_ertn_flush; // @[CoreTop.scala 140:18]
  wire  WB_io_out_bits_ctrl_signal_excp_flush; // @[CoreTop.scala 140:18]
  wire [63:0] WB_io_out_bits_ctrl_flow_PC; // @[CoreTop.scala 140:18]
  wire [31:0] WB_io_out_bits_ctrl_flow_inst; // @[CoreTop.scala 140:18]
  wire [63:0] WB_io_out_bits_ctrl_flow_Dnpc; // @[CoreTop.scala 140:18]
  wire  WB_io_out_bits_ctrl_flow_skip; // @[CoreTop.scala 140:18]
  wire [4:0] WB_io_out_bits_ctrl_rf_rfDest; // @[CoreTop.scala 140:18]
  wire  WB_io_out_bits_ctrl_rf_rfWen; // @[CoreTop.scala 140:18]
  wire [63:0] WB_io_out_bits_ctrl_rf_rfData; // @[CoreTop.scala 140:18]
  wire [63:0] WB_io_out_bits_ctrl_csr_csr_data; // @[CoreTop.scala 140:18]
  wire  WB_io_out_bits_ctrl_csr_csr_en; // @[CoreTop.scala 140:18]
  wire [11:0] WB_io_out_bits_ctrl_csr_csr_idx; // @[CoreTop.scala 140:18]
  wire  WB_io_icache_busy; // @[CoreTop.scala 140:18]
  wire  WB_io_stall; // @[CoreTop.scala 140:18]
  wire [4:0] bypass_io_EX_rf_rfDest; // @[CoreTop.scala 142:22]
  wire  bypass_io_EX_rf_rfWen; // @[CoreTop.scala 142:22]
  wire [63:0] bypass_io_EX_rf_rfData; // @[CoreTop.scala 142:22]
  wire [4:0] bypass_io_MEM_rf_rfDest; // @[CoreTop.scala 142:22]
  wire  bypass_io_MEM_rf_rfWen; // @[CoreTop.scala 142:22]
  wire [63:0] bypass_io_MEM_rf_rfData; // @[CoreTop.scala 142:22]
  wire [4:0] bypass_io_WB_rf_rfDest; // @[CoreTop.scala 142:22]
  wire  bypass_io_WB_rf_rfWen; // @[CoreTop.scala 142:22]
  wire [63:0] bypass_io_WB_rf_rfData; // @[CoreTop.scala 142:22]
  wire [63:0] bypass_io_Reg1; // @[CoreTop.scala 142:22]
  wire [4:0] bypass_io_reg_index1; // @[CoreTop.scala 142:22]
  wire [63:0] bypass_io_Reg2; // @[CoreTop.scala 142:22]
  wire [4:0] bypass_io_reg_index2; // @[CoreTop.scala 142:22]
  wire [63:0] bypass_io_Bypass_REG1; // @[CoreTop.scala 142:22]
  wire [63:0] bypass_io_Bypass_REG2; // @[CoreTop.scala 142:22]
  wire  ICACHE_clock; // @[CoreTop.scala 146:22]
  wire  ICACHE_reset; // @[CoreTop.scala 146:22]
  wire  ICACHE_io_in_addr_req_valid; // @[CoreTop.scala 146:22]
  wire [63:0] ICACHE_io_in_addr_req_bits_addr; // @[CoreTop.scala 146:22]
  wire  ICACHE_io_in_rdata_rep_ready; // @[CoreTop.scala 146:22]
  wire  ICACHE_io_in_rdata_rep_valid; // @[CoreTop.scala 146:22]
  wire [63:0] ICACHE_io_in_rdata_rep_bits_rdata; // @[CoreTop.scala 146:22]
  wire  ICACHE_io_cache_busy; // @[CoreTop.scala 146:22]
  wire  ICACHE_io_out_raddr_req_ready; // @[CoreTop.scala 146:22]
  wire  ICACHE_io_out_raddr_req_valid; // @[CoreTop.scala 146:22]
  wire [63:0] ICACHE_io_out_raddr_req_bits_addr; // @[CoreTop.scala 146:22]
  wire  ICACHE_io_out_rdata_rep_valid; // @[CoreTop.scala 146:22]
  wire [63:0] ICACHE_io_out_rdata_rep_bits_data; // @[CoreTop.scala 146:22]
  wire  ICACHE_io_out_rdata_rep_bits_last; // @[CoreTop.scala 146:22]
  wire  ICACHE_io_out_wb_valid; // @[CoreTop.scala 146:22]
  wire [1:0] ICACHE_io_out_wb_bits_breap; // @[CoreTop.scala 146:22]
  wire  MMEM_reset; // @[CoreTop.scala 152:20]
  wire  MMEM_clk; // @[CoreTop.scala 152:20]
  wire  MMEM_ar_valid; // @[CoreTop.scala 152:20]
  wire  MMEM_ar_ready; // @[CoreTop.scala 152:20]
  wire [63:0] MMEM_ar_addr; // @[CoreTop.scala 152:20]
  wire [3:0] MMEM_ar_id; // @[CoreTop.scala 152:20]
  wire [7:0] MMEM_ar_len; // @[CoreTop.scala 152:20]
  wire [2:0] MMEM_ar_size; // @[CoreTop.scala 152:20]
  wire [2:0] MMEM_ar_prot; // @[CoreTop.scala 152:20]
  wire [1:0] MMEM_ar_burst; // @[CoreTop.scala 152:20]
  wire [1:0] MMEM_ar_lock; // @[CoreTop.scala 152:20]
  wire [3:0] MMEM_ar_cache; // @[CoreTop.scala 152:20]
  wire  MMEM_rd_valid; // @[CoreTop.scala 152:20]
  wire  MMEM_rd_ready; // @[CoreTop.scala 152:20]
  wire [63:0] MMEM_rd_data; // @[CoreTop.scala 152:20]
  wire [3:0] MMEM_rd_id; // @[CoreTop.scala 152:20]
  wire [1:0] MMEM_rd_resp; // @[CoreTop.scala 152:20]
  wire  MMEM_rd_last; // @[CoreTop.scala 152:20]
  wire  MMEM_aw_valid; // @[CoreTop.scala 152:20]
  wire  MMEM_aw_ready; // @[CoreTop.scala 152:20]
  wire [63:0] MMEM_aw_addr; // @[CoreTop.scala 152:20]
  wire [3:0] MMEM_aw_id; // @[CoreTop.scala 152:20]
  wire [7:0] MMEM_aw_len; // @[CoreTop.scala 152:20]
  wire [2:0] MMEM_aw_size; // @[CoreTop.scala 152:20]
  wire [2:0] MMEM_aw_prot; // @[CoreTop.scala 152:20]
  wire [1:0] MMEM_aw_burst; // @[CoreTop.scala 152:20]
  wire [1:0] MMEM_aw_lock; // @[CoreTop.scala 152:20]
  wire [3:0] MMEM_aw_cache; // @[CoreTop.scala 152:20]
  wire  MMEM_wd_valid; // @[CoreTop.scala 152:20]
  wire  MMEM_wd_ready; // @[CoreTop.scala 152:20]
  wire [63:0] MMEM_wd_data; // @[CoreTop.scala 152:20]
  wire [7:0] MMEM_wstrb; // @[CoreTop.scala 152:20]
  wire [3:0] MMEM_wd_id; // @[CoreTop.scala 152:20]
  wire  MMEM_wd_last; // @[CoreTop.scala 152:20]
  wire  MMEM_wr_valid; // @[CoreTop.scala 152:20]
  wire  MMEM_wr_ready; // @[CoreTop.scala 152:20]
  wire [1:0] MMEM_wr_breap; // @[CoreTop.scala 152:20]
  wire [3:0] MMEM_wr_id; // @[CoreTop.scala 152:20]
  wire  ARBITER_clock; // @[CoreTop.scala 154:23]
  wire  ARBITER_reset; // @[CoreTop.scala 154:23]
  wire  ARBITER_io_in1_raddr_req_ready; // @[CoreTop.scala 154:23]
  wire  ARBITER_io_in1_raddr_req_valid; // @[CoreTop.scala 154:23]
  wire [63:0] ARBITER_io_in1_raddr_req_bits_addr; // @[CoreTop.scala 154:23]
  wire [7:0] ARBITER_io_in1_raddr_req_bits_len; // @[CoreTop.scala 154:23]
  wire  ARBITER_io_in1_waddr_req_ready; // @[CoreTop.scala 154:23]
  wire  ARBITER_io_in1_waddr_req_valid; // @[CoreTop.scala 154:23]
  wire [63:0] ARBITER_io_in1_waddr_req_bits_addr; // @[CoreTop.scala 154:23]
  wire [7:0] ARBITER_io_in1_waddr_req_bits_len; // @[CoreTop.scala 154:23]
  wire  ARBITER_io_in1_rdata_rep_ready; // @[CoreTop.scala 154:23]
  wire  ARBITER_io_in1_rdata_rep_valid; // @[CoreTop.scala 154:23]
  wire [63:0] ARBITER_io_in1_rdata_rep_bits_data; // @[CoreTop.scala 154:23]
  wire  ARBITER_io_in1_rdata_rep_bits_last; // @[CoreTop.scala 154:23]
  wire  ARBITER_io_in1_wdata_req_ready; // @[CoreTop.scala 154:23]
  wire  ARBITER_io_in1_wdata_req_valid; // @[CoreTop.scala 154:23]
  wire [63:0] ARBITER_io_in1_wdata_req_bits_data; // @[CoreTop.scala 154:23]
  wire [7:0] ARBITER_io_in1_wdata_req_bits_wstrb; // @[CoreTop.scala 154:23]
  wire  ARBITER_io_in1_wdata_req_bits_last; // @[CoreTop.scala 154:23]
  wire  ARBITER_io_in1_wb_ready; // @[CoreTop.scala 154:23]
  wire  ARBITER_io_in1_wb_valid; // @[CoreTop.scala 154:23]
  wire [1:0] ARBITER_io_in1_wb_bits_breap; // @[CoreTop.scala 154:23]
  wire  ARBITER_io_in2_raddr_req_ready; // @[CoreTop.scala 154:23]
  wire  ARBITER_io_in2_raddr_req_valid; // @[CoreTop.scala 154:23]
  wire [63:0] ARBITER_io_in2_raddr_req_bits_addr; // @[CoreTop.scala 154:23]
  wire  ARBITER_io_in2_rdata_rep_valid; // @[CoreTop.scala 154:23]
  wire [63:0] ARBITER_io_in2_rdata_rep_bits_data; // @[CoreTop.scala 154:23]
  wire  ARBITER_io_in2_rdata_rep_bits_last; // @[CoreTop.scala 154:23]
  wire  ARBITER_io_in2_wb_valid; // @[CoreTop.scala 154:23]
  wire [1:0] ARBITER_io_in2_wb_bits_breap; // @[CoreTop.scala 154:23]
  wire  ARBITER_io_out_raddr_req_ready; // @[CoreTop.scala 154:23]
  wire  ARBITER_io_out_raddr_req_valid; // @[CoreTop.scala 154:23]
  wire [63:0] ARBITER_io_out_raddr_req_bits_addr; // @[CoreTop.scala 154:23]
  wire [7:0] ARBITER_io_out_raddr_req_bits_len; // @[CoreTop.scala 154:23]
  wire  ARBITER_io_out_waddr_req_ready; // @[CoreTop.scala 154:23]
  wire  ARBITER_io_out_waddr_req_valid; // @[CoreTop.scala 154:23]
  wire [63:0] ARBITER_io_out_waddr_req_bits_addr; // @[CoreTop.scala 154:23]
  wire [7:0] ARBITER_io_out_waddr_req_bits_len; // @[CoreTop.scala 154:23]
  wire  ARBITER_io_out_rdata_rep_ready; // @[CoreTop.scala 154:23]
  wire  ARBITER_io_out_rdata_rep_valid; // @[CoreTop.scala 154:23]
  wire [63:0] ARBITER_io_out_rdata_rep_bits_data; // @[CoreTop.scala 154:23]
  wire  ARBITER_io_out_rdata_rep_bits_last; // @[CoreTop.scala 154:23]
  wire  ARBITER_io_out_wdata_req_ready; // @[CoreTop.scala 154:23]
  wire  ARBITER_io_out_wdata_req_valid; // @[CoreTop.scala 154:23]
  wire [63:0] ARBITER_io_out_wdata_req_bits_data; // @[CoreTop.scala 154:23]
  wire [7:0] ARBITER_io_out_wdata_req_bits_wstrb; // @[CoreTop.scala 154:23]
  wire  ARBITER_io_out_wdata_req_bits_last; // @[CoreTop.scala 154:23]
  wire  ARBITER_io_out_wb_ready; // @[CoreTop.scala 154:23]
  wire  ARBITER_io_out_wb_valid; // @[CoreTop.scala 154:23]
  wire [1:0] ARBITER_io_out_wb_bits_breap; // @[CoreTop.scala 154:23]
  wire  MMIO_clock; // @[CoreTop.scala 156:20]
  wire  MMIO_reset; // @[CoreTop.scala 156:20]
  wire  MMIO_io_in_addr_req_valid; // @[CoreTop.scala 156:20]
  wire [63:0] MMIO_io_in_addr_req_bits_addr; // @[CoreTop.scala 156:20]
  wire  MMIO_io_in_addr_req_bits_ce; // @[CoreTop.scala 156:20]
  wire  MMIO_io_in_addr_req_bits_we; // @[CoreTop.scala 156:20]
  wire  MMIO_io_in_rdata_rep_valid; // @[CoreTop.scala 156:20]
  wire [63:0] MMIO_io_in_rdata_rep_bits_rdata; // @[CoreTop.scala 156:20]
  wire [63:0] MMIO_io_in_wdata_req_bits_wdata; // @[CoreTop.scala 156:20]
  wire [7:0] MMIO_io_in_wdata_req_bits_wmask; // @[CoreTop.scala 156:20]
  wire  MMIO_io_in_wdata_rep; // @[CoreTop.scala 156:20]
  wire  MMIO_io_out_raddr_req_ready; // @[CoreTop.scala 156:20]
  wire  MMIO_io_out_raddr_req_valid; // @[CoreTop.scala 156:20]
  wire [63:0] MMIO_io_out_raddr_req_bits_addr; // @[CoreTop.scala 156:20]
  wire [7:0] MMIO_io_out_raddr_req_bits_len; // @[CoreTop.scala 156:20]
  wire  MMIO_io_out_waddr_req_ready; // @[CoreTop.scala 156:20]
  wire  MMIO_io_out_waddr_req_valid; // @[CoreTop.scala 156:20]
  wire [63:0] MMIO_io_out_waddr_req_bits_addr; // @[CoreTop.scala 156:20]
  wire [7:0] MMIO_io_out_waddr_req_bits_len; // @[CoreTop.scala 156:20]
  wire  MMIO_io_out_rdata_rep_ready; // @[CoreTop.scala 156:20]
  wire  MMIO_io_out_rdata_rep_valid; // @[CoreTop.scala 156:20]
  wire [63:0] MMIO_io_out_rdata_rep_bits_data; // @[CoreTop.scala 156:20]
  wire  MMIO_io_out_rdata_rep_bits_last; // @[CoreTop.scala 156:20]
  wire  MMIO_io_out_wdata_req_ready; // @[CoreTop.scala 156:20]
  wire  MMIO_io_out_wdata_req_valid; // @[CoreTop.scala 156:20]
  wire [63:0] MMIO_io_out_wdata_req_bits_data; // @[CoreTop.scala 156:20]
  wire [7:0] MMIO_io_out_wdata_req_bits_wstrb; // @[CoreTop.scala 156:20]
  wire  MMIO_io_out_wdata_req_bits_last; // @[CoreTop.scala 156:20]
  wire  MMIO_io_out_wb_ready; // @[CoreTop.scala 156:20]
  wire  MMIO_io_out_wb_valid; // @[CoreTop.scala 156:20]
  wire [1:0] MMIO_io_out_wb_bits_breap; // @[CoreTop.scala 156:20]
  wire  CSR_clock; // @[CoreTop.scala 158:19]
  wire  CSR_reset; // @[CoreTop.scala 158:19]
  wire [63:0] CSR_io_rd_rd_data; // @[CoreTop.scala 158:19]
  wire [11:0] CSR_io_rd_csr_addr; // @[CoreTop.scala 158:19]
  wire [63:0] CSR_io_wr_csr_data; // @[CoreTop.scala 158:19]
  wire  CSR_io_wr_csr_en; // @[CoreTop.scala 158:19]
  wire [11:0] CSR_io_wr_csr_idx; // @[CoreTop.scala 158:19]
  wire  CSR_io_excp_flush; // @[CoreTop.scala 158:19]
  wire  CSR_io_mert_flush; // @[CoreTop.scala 158:19]
  wire [63:0] CSR_io_epc; // @[CoreTop.scala 158:19]
  wire [63:0] CSR_io_mtvec_o; // @[CoreTop.scala 158:19]
  wire [63:0] CSR_io_mepc_o; // @[CoreTop.scala 158:19]
  wire  _T = ID_io_out_ready & ID_io_out_valid; // @[Decoupled.scala 52:35]
  wire  _T_3 = EX_io_is_flush | WB_io_out_bits_ctrl_signal_excp_flush | WB_io_out_bits_ctrl_signal_ertn_flush |
    WB_io_stall; // @[CoreTop.scala 235:93]
  wire  _T_5 = EX_io_is_flush | WB_io_out_bits_ctrl_signal_excp_flush | WB_io_out_bits_ctrl_signal_ertn_flush |
    WB_io_stall | EX_io_stall | WB_io_stall; // @[CoreTop.scala 235:121]
  reg [5:0] head; // @[Pipline.scala 29:23]
  reg [5:0] tail; // @[Pipline.scala 30:23]
  wire  empty = head == tail; // @[Pipline.scala 31:22]
  wire  full = head[4:0] == tail[4:0] & (head[5] ^ tail[5]); // @[Pipline.scala 32:43]
  reg [63:0] buffer_0_PC; // @[Pipline.scala 34:21]
  reg [31:0] buffer_0_Inst; // @[Pipline.scala 34:21]
  reg [63:0] buffer_1_PC; // @[Pipline.scala 34:21]
  reg [31:0] buffer_1_Inst; // @[Pipline.scala 34:21]
  reg [63:0] buffer_2_PC; // @[Pipline.scala 34:21]
  reg [31:0] buffer_2_Inst; // @[Pipline.scala 34:21]
  reg [63:0] buffer_3_PC; // @[Pipline.scala 34:21]
  reg [31:0] buffer_3_Inst; // @[Pipline.scala 34:21]
  reg [63:0] buffer_4_PC; // @[Pipline.scala 34:21]
  reg [31:0] buffer_4_Inst; // @[Pipline.scala 34:21]
  reg [63:0] buffer_5_PC; // @[Pipline.scala 34:21]
  reg [31:0] buffer_5_Inst; // @[Pipline.scala 34:21]
  reg [63:0] buffer_6_PC; // @[Pipline.scala 34:21]
  reg [31:0] buffer_6_Inst; // @[Pipline.scala 34:21]
  reg [63:0] buffer_7_PC; // @[Pipline.scala 34:21]
  reg [31:0] buffer_7_Inst; // @[Pipline.scala 34:21]
  reg [63:0] buffer_8_PC; // @[Pipline.scala 34:21]
  reg [31:0] buffer_8_Inst; // @[Pipline.scala 34:21]
  reg [63:0] buffer_9_PC; // @[Pipline.scala 34:21]
  reg [31:0] buffer_9_Inst; // @[Pipline.scala 34:21]
  reg [63:0] buffer_10_PC; // @[Pipline.scala 34:21]
  reg [31:0] buffer_10_Inst; // @[Pipline.scala 34:21]
  reg [63:0] buffer_11_PC; // @[Pipline.scala 34:21]
  reg [31:0] buffer_11_Inst; // @[Pipline.scala 34:21]
  reg [63:0] buffer_12_PC; // @[Pipline.scala 34:21]
  reg [31:0] buffer_12_Inst; // @[Pipline.scala 34:21]
  reg [63:0] buffer_13_PC; // @[Pipline.scala 34:21]
  reg [31:0] buffer_13_Inst; // @[Pipline.scala 34:21]
  reg [63:0] buffer_14_PC; // @[Pipline.scala 34:21]
  reg [31:0] buffer_14_Inst; // @[Pipline.scala 34:21]
  reg [63:0] buffer_15_PC; // @[Pipline.scala 34:21]
  reg [31:0] buffer_15_Inst; // @[Pipline.scala 34:21]
  reg [63:0] buffer_16_PC; // @[Pipline.scala 34:21]
  reg [31:0] buffer_16_Inst; // @[Pipline.scala 34:21]
  reg [63:0] buffer_17_PC; // @[Pipline.scala 34:21]
  reg [31:0] buffer_17_Inst; // @[Pipline.scala 34:21]
  reg [63:0] buffer_18_PC; // @[Pipline.scala 34:21]
  reg [31:0] buffer_18_Inst; // @[Pipline.scala 34:21]
  reg [63:0] buffer_19_PC; // @[Pipline.scala 34:21]
  reg [31:0] buffer_19_Inst; // @[Pipline.scala 34:21]
  reg [63:0] buffer_20_PC; // @[Pipline.scala 34:21]
  reg [31:0] buffer_20_Inst; // @[Pipline.scala 34:21]
  reg [63:0] buffer_21_PC; // @[Pipline.scala 34:21]
  reg [31:0] buffer_21_Inst; // @[Pipline.scala 34:21]
  reg [63:0] buffer_22_PC; // @[Pipline.scala 34:21]
  reg [31:0] buffer_22_Inst; // @[Pipline.scala 34:21]
  reg [63:0] buffer_23_PC; // @[Pipline.scala 34:21]
  reg [31:0] buffer_23_Inst; // @[Pipline.scala 34:21]
  reg [63:0] buffer_24_PC; // @[Pipline.scala 34:21]
  reg [31:0] buffer_24_Inst; // @[Pipline.scala 34:21]
  reg [63:0] buffer_25_PC; // @[Pipline.scala 34:21]
  reg [31:0] buffer_25_Inst; // @[Pipline.scala 34:21]
  reg [63:0] buffer_26_PC; // @[Pipline.scala 34:21]
  reg [31:0] buffer_26_Inst; // @[Pipline.scala 34:21]
  reg [63:0] buffer_27_PC; // @[Pipline.scala 34:21]
  reg [31:0] buffer_27_Inst; // @[Pipline.scala 34:21]
  reg [63:0] buffer_28_PC; // @[Pipline.scala 34:21]
  reg [31:0] buffer_28_Inst; // @[Pipline.scala 34:21]
  reg [63:0] buffer_29_PC; // @[Pipline.scala 34:21]
  reg [31:0] buffer_29_Inst; // @[Pipline.scala 34:21]
  reg [63:0] buffer_30_PC; // @[Pipline.scala 34:21]
  reg [31:0] buffer_30_Inst; // @[Pipline.scala 34:21]
  reg [63:0] buffer_31_PC; // @[Pipline.scala 34:21]
  reg [31:0] buffer_31_Inst; // @[Pipline.scala 34:21]
  wire [5:0] _tail_T_1 = tail + 6'h1; // @[Pipline.scala 37:20]
  wire [5:0] _head_T_1 = head + 6'h1; // @[Pipline.scala 40:20]
  wire [63:0] _buffer_T_8_PC = IF_io_out_bits_PC; // @[Pipline.scala 41:{25,25}]
  wire [31:0] _buffer_T_8_Inst = IF_io_out_bits_Inst; // @[Pipline.scala 41:{25,25}]
  wire [31:0] _GEN_133 = 5'h1 == tail[4:0] ? buffer_1_Inst : buffer_0_Inst; // @[Pipline.scala 47:{16,16}]
  wire [31:0] _GEN_134 = 5'h2 == tail[4:0] ? buffer_2_Inst : _GEN_133; // @[Pipline.scala 47:{16,16}]
  wire [31:0] _GEN_135 = 5'h3 == tail[4:0] ? buffer_3_Inst : _GEN_134; // @[Pipline.scala 47:{16,16}]
  wire [31:0] _GEN_136 = 5'h4 == tail[4:0] ? buffer_4_Inst : _GEN_135; // @[Pipline.scala 47:{16,16}]
  wire [31:0] _GEN_137 = 5'h5 == tail[4:0] ? buffer_5_Inst : _GEN_136; // @[Pipline.scala 47:{16,16}]
  wire [31:0] _GEN_138 = 5'h6 == tail[4:0] ? buffer_6_Inst : _GEN_137; // @[Pipline.scala 47:{16,16}]
  wire [31:0] _GEN_139 = 5'h7 == tail[4:0] ? buffer_7_Inst : _GEN_138; // @[Pipline.scala 47:{16,16}]
  wire [31:0] _GEN_140 = 5'h8 == tail[4:0] ? buffer_8_Inst : _GEN_139; // @[Pipline.scala 47:{16,16}]
  wire [31:0] _GEN_141 = 5'h9 == tail[4:0] ? buffer_9_Inst : _GEN_140; // @[Pipline.scala 47:{16,16}]
  wire [31:0] _GEN_142 = 5'ha == tail[4:0] ? buffer_10_Inst : _GEN_141; // @[Pipline.scala 47:{16,16}]
  wire [31:0] _GEN_143 = 5'hb == tail[4:0] ? buffer_11_Inst : _GEN_142; // @[Pipline.scala 47:{16,16}]
  wire [31:0] _GEN_144 = 5'hc == tail[4:0] ? buffer_12_Inst : _GEN_143; // @[Pipline.scala 47:{16,16}]
  wire [31:0] _GEN_145 = 5'hd == tail[4:0] ? buffer_13_Inst : _GEN_144; // @[Pipline.scala 47:{16,16}]
  wire [31:0] _GEN_146 = 5'he == tail[4:0] ? buffer_14_Inst : _GEN_145; // @[Pipline.scala 47:{16,16}]
  wire [31:0] _GEN_147 = 5'hf == tail[4:0] ? buffer_15_Inst : _GEN_146; // @[Pipline.scala 47:{16,16}]
  wire [31:0] _GEN_148 = 5'h10 == tail[4:0] ? buffer_16_Inst : _GEN_147; // @[Pipline.scala 47:{16,16}]
  wire [31:0] _GEN_149 = 5'h11 == tail[4:0] ? buffer_17_Inst : _GEN_148; // @[Pipline.scala 47:{16,16}]
  wire [31:0] _GEN_150 = 5'h12 == tail[4:0] ? buffer_18_Inst : _GEN_149; // @[Pipline.scala 47:{16,16}]
  wire [31:0] _GEN_151 = 5'h13 == tail[4:0] ? buffer_19_Inst : _GEN_150; // @[Pipline.scala 47:{16,16}]
  wire [31:0] _GEN_152 = 5'h14 == tail[4:0] ? buffer_20_Inst : _GEN_151; // @[Pipline.scala 47:{16,16}]
  wire [31:0] _GEN_153 = 5'h15 == tail[4:0] ? buffer_21_Inst : _GEN_152; // @[Pipline.scala 47:{16,16}]
  wire [31:0] _GEN_154 = 5'h16 == tail[4:0] ? buffer_22_Inst : _GEN_153; // @[Pipline.scala 47:{16,16}]
  wire [31:0] _GEN_155 = 5'h17 == tail[4:0] ? buffer_23_Inst : _GEN_154; // @[Pipline.scala 47:{16,16}]
  wire [31:0] _GEN_156 = 5'h18 == tail[4:0] ? buffer_24_Inst : _GEN_155; // @[Pipline.scala 47:{16,16}]
  wire [31:0] _GEN_157 = 5'h19 == tail[4:0] ? buffer_25_Inst : _GEN_156; // @[Pipline.scala 47:{16,16}]
  wire [31:0] _GEN_158 = 5'h1a == tail[4:0] ? buffer_26_Inst : _GEN_157; // @[Pipline.scala 47:{16,16}]
  wire [31:0] _GEN_159 = 5'h1b == tail[4:0] ? buffer_27_Inst : _GEN_158; // @[Pipline.scala 47:{16,16}]
  wire [31:0] _GEN_160 = 5'h1c == tail[4:0] ? buffer_28_Inst : _GEN_159; // @[Pipline.scala 47:{16,16}]
  wire [31:0] _GEN_161 = 5'h1d == tail[4:0] ? buffer_29_Inst : _GEN_160; // @[Pipline.scala 47:{16,16}]
  wire [31:0] _GEN_162 = 5'h1e == tail[4:0] ? buffer_30_Inst : _GEN_161; // @[Pipline.scala 47:{16,16}]
  wire [63:0] _GEN_165 = 5'h1 == tail[4:0] ? buffer_1_PC : buffer_0_PC; // @[Pipline.scala 47:{16,16}]
  wire [63:0] _GEN_166 = 5'h2 == tail[4:0] ? buffer_2_PC : _GEN_165; // @[Pipline.scala 47:{16,16}]
  wire [63:0] _GEN_167 = 5'h3 == tail[4:0] ? buffer_3_PC : _GEN_166; // @[Pipline.scala 47:{16,16}]
  wire [63:0] _GEN_168 = 5'h4 == tail[4:0] ? buffer_4_PC : _GEN_167; // @[Pipline.scala 47:{16,16}]
  wire [63:0] _GEN_169 = 5'h5 == tail[4:0] ? buffer_5_PC : _GEN_168; // @[Pipline.scala 47:{16,16}]
  wire [63:0] _GEN_170 = 5'h6 == tail[4:0] ? buffer_6_PC : _GEN_169; // @[Pipline.scala 47:{16,16}]
  wire [63:0] _GEN_171 = 5'h7 == tail[4:0] ? buffer_7_PC : _GEN_170; // @[Pipline.scala 47:{16,16}]
  wire [63:0] _GEN_172 = 5'h8 == tail[4:0] ? buffer_8_PC : _GEN_171; // @[Pipline.scala 47:{16,16}]
  wire [63:0] _GEN_173 = 5'h9 == tail[4:0] ? buffer_9_PC : _GEN_172; // @[Pipline.scala 47:{16,16}]
  wire [63:0] _GEN_174 = 5'ha == tail[4:0] ? buffer_10_PC : _GEN_173; // @[Pipline.scala 47:{16,16}]
  wire [63:0] _GEN_175 = 5'hb == tail[4:0] ? buffer_11_PC : _GEN_174; // @[Pipline.scala 47:{16,16}]
  wire [63:0] _GEN_176 = 5'hc == tail[4:0] ? buffer_12_PC : _GEN_175; // @[Pipline.scala 47:{16,16}]
  wire [63:0] _GEN_177 = 5'hd == tail[4:0] ? buffer_13_PC : _GEN_176; // @[Pipline.scala 47:{16,16}]
  wire [63:0] _GEN_178 = 5'he == tail[4:0] ? buffer_14_PC : _GEN_177; // @[Pipline.scala 47:{16,16}]
  wire [63:0] _GEN_179 = 5'hf == tail[4:0] ? buffer_15_PC : _GEN_178; // @[Pipline.scala 47:{16,16}]
  wire [63:0] _GEN_180 = 5'h10 == tail[4:0] ? buffer_16_PC : _GEN_179; // @[Pipline.scala 47:{16,16}]
  wire [63:0] _GEN_181 = 5'h11 == tail[4:0] ? buffer_17_PC : _GEN_180; // @[Pipline.scala 47:{16,16}]
  wire [63:0] _GEN_182 = 5'h12 == tail[4:0] ? buffer_18_PC : _GEN_181; // @[Pipline.scala 47:{16,16}]
  wire [63:0] _GEN_183 = 5'h13 == tail[4:0] ? buffer_19_PC : _GEN_182; // @[Pipline.scala 47:{16,16}]
  wire [63:0] _GEN_184 = 5'h14 == tail[4:0] ? buffer_20_PC : _GEN_183; // @[Pipline.scala 47:{16,16}]
  wire [63:0] _GEN_185 = 5'h15 == tail[4:0] ? buffer_21_PC : _GEN_184; // @[Pipline.scala 47:{16,16}]
  wire [63:0] _GEN_186 = 5'h16 == tail[4:0] ? buffer_22_PC : _GEN_185; // @[Pipline.scala 47:{16,16}]
  wire [63:0] _GEN_187 = 5'h17 == tail[4:0] ? buffer_23_PC : _GEN_186; // @[Pipline.scala 47:{16,16}]
  wire [63:0] _GEN_188 = 5'h18 == tail[4:0] ? buffer_24_PC : _GEN_187; // @[Pipline.scala 47:{16,16}]
  wire [63:0] _GEN_189 = 5'h19 == tail[4:0] ? buffer_25_PC : _GEN_188; // @[Pipline.scala 47:{16,16}]
  wire [63:0] _GEN_190 = 5'h1a == tail[4:0] ? buffer_26_PC : _GEN_189; // @[Pipline.scala 47:{16,16}]
  wire [63:0] _GEN_191 = 5'h1b == tail[4:0] ? buffer_27_PC : _GEN_190; // @[Pipline.scala 47:{16,16}]
  wire [63:0] _GEN_192 = 5'h1c == tail[4:0] ? buffer_28_PC : _GEN_191; // @[Pipline.scala 47:{16,16}]
  wire [63:0] _GEN_193 = 5'h1d == tail[4:0] ? buffer_29_PC : _GEN_192; // @[Pipline.scala 47:{16,16}]
  wire [63:0] _GEN_194 = 5'h1e == tail[4:0] ? buffer_30_PC : _GEN_193; // @[Pipline.scala 47:{16,16}]
  wire  _T_9 = EX_io_out_ready & EX_io_out_valid; // @[Decoupled.scala 52:35]
  reg  valid; // @[Pipline.scala 8:24]
  wire  _GEN_196 = _T_9 ? 1'h0 : valid; // @[Pipline.scala 10:22 11:13 8:24]
  wire  _T_13 = ID_io_out_valid & EX_io_in_ready; // @[Pipline.scala 13:21]
  wire  _GEN_197 = ID_io_out_valid & EX_io_in_ready | _GEN_196; // @[Pipline.scala 13:37 14:13]
  reg [2:0] EX_io_in_bits_r_ctrl_signal_src1Type; // @[Reg.scala 19:16]
  reg [2:0] EX_io_in_bits_r_ctrl_signal_src2Type; // @[Reg.scala 19:16]
  reg [2:0] EX_io_in_bits_r_ctrl_signal_fuType; // @[Reg.scala 19:16]
  reg  EX_io_in_bits_r_ctrl_signal_inst_valid; // @[Reg.scala 19:16]
  reg  EX_io_in_bits_r_ctrl_signal_rfWen; // @[Reg.scala 19:16]
  reg [6:0] EX_io_in_bits_r_ctrl_signal_aluoptype; // @[Reg.scala 19:16]
  reg [4:0] EX_io_in_bits_r_ctrl_signal_rfDest; // @[Reg.scala 19:16]
  reg  EX_io_in_bits_r_ctrl_signal_ertn_flush; // @[Reg.scala 19:16]
  reg  EX_io_in_bits_r_ctrl_signal_excp_flush; // @[Reg.scala 19:16]
  reg [63:0] EX_io_in_bits_r_ctrl_data_src1; // @[Reg.scala 19:16]
  reg [63:0] EX_io_in_bits_r_ctrl_data_src2; // @[Reg.scala 19:16]
  reg [63:0] EX_io_in_bits_r_ctrl_data_Imm; // @[Reg.scala 19:16]
  reg [63:0] EX_io_in_bits_r_ctrl_flow_PC; // @[Reg.scala 19:16]
  reg [31:0] EX_io_in_bits_r_ctrl_flow_inst; // @[Reg.scala 19:16]
  reg [11:0] EX_io_in_bits_r_ctrl_csr_csr_idx; // @[Reg.scala 19:16]
  wire  _T_15 = MEM_io_out_ready & MEM_io_out_valid; // @[Decoupled.scala 52:35]
  wire  _T_16 = WB_io_out_bits_ctrl_signal_excp_flush | WB_io_out_bits_ctrl_signal_ertn_flush; // @[CoreTop.scala 264:66]
  wire  _T_17 = WB_io_out_bits_ctrl_signal_excp_flush | WB_io_out_bits_ctrl_signal_ertn_flush | WB_io_stall; // @[CoreTop.scala 264:79]
  reg  valid_1; // @[Pipline.scala 8:24]
  wire  _GEN_220 = _T_15 ? 1'h0 : valid_1; // @[Pipline.scala 10:22 11:13 8:24]
  wire  _T_18 = EX_io_out_valid & MEM_io_in_ready; // @[Pipline.scala 13:21]
  wire  _GEN_221 = EX_io_out_valid & MEM_io_in_ready | _GEN_220; // @[Pipline.scala 13:37 14:13]
  reg [2:0] MEM_io_in_bits_r_ctrl_signal_fuType; // @[Reg.scala 19:16]
  reg  MEM_io_in_bits_r_ctrl_signal_inst_valid; // @[Reg.scala 19:16]
  reg  MEM_io_in_bits_r_ctrl_signal_rfWen; // @[Reg.scala 19:16]
  reg [6:0] MEM_io_in_bits_r_ctrl_signal_aluoptype; // @[Reg.scala 19:16]
  reg  MEM_io_in_bits_r_ctrl_signal_ertn_flush; // @[Reg.scala 19:16]
  reg  MEM_io_in_bits_r_ctrl_signal_excp_flush; // @[Reg.scala 19:16]
  reg [63:0] MEM_io_in_bits_r_ctrl_flow_PC; // @[Reg.scala 19:16]
  reg [31:0] MEM_io_in_bits_r_ctrl_flow_inst; // @[Reg.scala 19:16]
  reg [63:0] MEM_io_in_bits_r_ctrl_flow_Dnpc; // @[Reg.scala 19:16]
  reg [4:0] MEM_io_in_bits_r_ctrl_rf_rfDest; // @[Reg.scala 19:16]
  reg [63:0] MEM_io_in_bits_r_ctrl_rf_rfData; // @[Reg.scala 19:16]
  reg [63:0] MEM_io_in_bits_r_ctrl_data_src1; // @[Reg.scala 19:16]
  reg [63:0] MEM_io_in_bits_r_ctrl_data_src2; // @[Reg.scala 19:16]
  reg [63:0] MEM_io_in_bits_r_ctrl_data_Imm; // @[Reg.scala 19:16]
  reg [63:0] MEM_io_in_bits_r_ctrl_csr_csr_data; // @[Reg.scala 19:16]
  reg  MEM_io_in_bits_r_ctrl_csr_csr_en; // @[Reg.scala 19:16]
  reg [11:0] MEM_io_in_bits_r_ctrl_csr_csr_idx; // @[Reg.scala 19:16]
  wire  _T_20 = WB_io_out_ready & WB_io_out_valid; // @[Decoupled.scala 52:35]
  reg  valid_2; // @[Pipline.scala 8:24]
  wire  _GEN_247 = _T_20 ? 1'h0 : valid_2; // @[Pipline.scala 10:22 11:13 8:24]
  wire  _T_22 = MEM_io_out_valid & WB_io_in_ready; // @[Pipline.scala 13:21]
  wire  _GEN_248 = MEM_io_out_valid & WB_io_in_ready | _GEN_247; // @[Pipline.scala 13:37 14:13]
  reg  WB_io_in_bits_r_ctrl_signal_inst_valid; // @[Reg.scala 19:16]
  reg  WB_io_in_bits_r_ctrl_signal_rfWen; // @[Reg.scala 19:16]
  reg  WB_io_in_bits_r_ctrl_signal_ertn_flush; // @[Reg.scala 19:16]
  reg  WB_io_in_bits_r_ctrl_signal_excp_flush; // @[Reg.scala 19:16]
  reg [63:0] WB_io_in_bits_r_ctrl_flow_PC; // @[Reg.scala 19:16]
  reg [31:0] WB_io_in_bits_r_ctrl_flow_inst; // @[Reg.scala 19:16]
  reg [63:0] WB_io_in_bits_r_ctrl_flow_Dnpc; // @[Reg.scala 19:16]
  reg  WB_io_in_bits_r_ctrl_flow_skip; // @[Reg.scala 19:16]
  reg [4:0] WB_io_in_bits_r_ctrl_rf_rfDest; // @[Reg.scala 19:16]
  reg [63:0] WB_io_in_bits_r_ctrl_rf_rfData; // @[Reg.scala 19:16]
  reg [63:0] WB_io_in_bits_r_ctrl_csr_csr_data; // @[Reg.scala 19:16]
  reg  WB_io_in_bits_r_ctrl_csr_csr_en; // @[Reg.scala 19:16]
  reg [11:0] WB_io_in_bits_r_ctrl_csr_csr_idx; // @[Reg.scala 19:16]
  wire  _T_25 = WB_io_out_bits_ctrl_rf_rfDest == 5'h0; // @[RF.scala 9:61]
  wire [63:0] _T_26 = WB_io_out_bits_ctrl_rf_rfData; // @[RF.scala 9:78]
  reg  DIP_io_is_break_REG; // @[CoreTop.scala 291:37]
  reg  DIP_io_is_break_REG_1; // @[CoreTop.scala 291:29]
  reg [31:0] DIP_io_inst_REG; // @[CoreTop.scala 295:25]
  reg  DIP_io_is_skip_REG; // @[CoreTop.scala 296:28]
  reg  DIP_io_inst_valid_REG; // @[CoreTop.scala 297:31]
  reg [63:0] DIP_io_pc_REG; // @[CoreTop.scala 298:23]
  reg [63:0] DIP_io_dnpc_REG; // @[CoreTop.scala 299:25]
  ysyx_22050321_IF IF ( // @[CoreTop.scala 123:18]
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
    .io_flush(IF_io_flush),
    .io_mret_flush(IF_io_mret_flush),
    .io_excp_flush(IF_io_excp_flush),
    .io_mtvec(IF_io_mtvec),
    .io_mret(IF_io_mret),
    .io_wb_stall(IF_io_wb_stall),
    .io_ex_stall(IF_io_ex_stall)
  );
  ysyx_22050321_ID ID ( // @[CoreTop.scala 128:18]
    .io_in_valid(ID_io_in_valid),
    .io_in_bits_PC(ID_io_in_bits_PC),
    .io_in_bits_Inst(ID_io_in_bits_Inst),
    .io_REG1(ID_io_REG1),
    .io_REG2(ID_io_REG2),
    .io_flush(ID_io_flush),
    .io_ex_is_mem(ID_io_ex_is_mem),
    .io_ex_reg_rfDest(ID_io_ex_reg_rfDest),
    .io_ex_reg_rfWen(ID_io_ex_reg_rfWen),
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
    .io_out_bits_ctrl_signal_ertn_flush(ID_io_out_bits_ctrl_signal_ertn_flush),
    .io_out_bits_ctrl_signal_excp_flush(ID_io_out_bits_ctrl_signal_excp_flush),
    .io_out_bits_ctrl_data_src1(ID_io_out_bits_ctrl_data_src1),
    .io_out_bits_ctrl_data_src2(ID_io_out_bits_ctrl_data_src2),
    .io_out_bits_ctrl_data_Imm(ID_io_out_bits_ctrl_data_Imm),
    .io_out_bits_ctrl_flow_PC(ID_io_out_bits_ctrl_flow_PC),
    .io_out_bits_ctrl_flow_inst(ID_io_out_bits_ctrl_flow_inst),
    .io_out_bits_ctrl_csr_csr_idx(ID_io_out_bits_ctrl_csr_csr_idx)
  );
  ysyx_22050321_EXE EX ( // @[CoreTop.scala 130:18]
    .clock(EX_clock),
    .reset(EX_reset),
    .io_in_ready(EX_io_in_ready),
    .io_in_valid(EX_io_in_valid),
    .io_in_bits_ctrl_signal_src1Type(EX_io_in_bits_ctrl_signal_src1Type),
    .io_in_bits_ctrl_signal_src2Type(EX_io_in_bits_ctrl_signal_src2Type),
    .io_in_bits_ctrl_signal_fuType(EX_io_in_bits_ctrl_signal_fuType),
    .io_in_bits_ctrl_signal_inst_valid(EX_io_in_bits_ctrl_signal_inst_valid),
    .io_in_bits_ctrl_signal_rfWen(EX_io_in_bits_ctrl_signal_rfWen),
    .io_in_bits_ctrl_signal_aluoptype(EX_io_in_bits_ctrl_signal_aluoptype),
    .io_in_bits_ctrl_signal_rfDest(EX_io_in_bits_ctrl_signal_rfDest),
    .io_in_bits_ctrl_signal_ertn_flush(EX_io_in_bits_ctrl_signal_ertn_flush),
    .io_in_bits_ctrl_signal_excp_flush(EX_io_in_bits_ctrl_signal_excp_flush),
    .io_in_bits_ctrl_data_src1(EX_io_in_bits_ctrl_data_src1),
    .io_in_bits_ctrl_data_src2(EX_io_in_bits_ctrl_data_src2),
    .io_in_bits_ctrl_data_Imm(EX_io_in_bits_ctrl_data_Imm),
    .io_in_bits_ctrl_flow_PC(EX_io_in_bits_ctrl_flow_PC),
    .io_in_bits_ctrl_flow_inst(EX_io_in_bits_ctrl_flow_inst),
    .io_in_bits_ctrl_csr_csr_idx(EX_io_in_bits_ctrl_csr_csr_idx),
    .io_is_mem(EX_io_is_mem),
    .io_branchIO_is_branch(EX_io_branchIO_is_branch),
    .io_branchIO_is_jump(EX_io_branchIO_is_jump),
    .io_branchIO_dnpc(EX_io_branchIO_dnpc),
    .io_out_ready(EX_io_out_ready),
    .io_out_valid(EX_io_out_valid),
    .io_out_bits_ctrl_signal_fuType(EX_io_out_bits_ctrl_signal_fuType),
    .io_out_bits_ctrl_signal_inst_valid(EX_io_out_bits_ctrl_signal_inst_valid),
    .io_out_bits_ctrl_signal_rfWen(EX_io_out_bits_ctrl_signal_rfWen),
    .io_out_bits_ctrl_signal_aluoptype(EX_io_out_bits_ctrl_signal_aluoptype),
    .io_out_bits_ctrl_signal_ertn_flush(EX_io_out_bits_ctrl_signal_ertn_flush),
    .io_out_bits_ctrl_signal_excp_flush(EX_io_out_bits_ctrl_signal_excp_flush),
    .io_out_bits_ctrl_flow_PC(EX_io_out_bits_ctrl_flow_PC),
    .io_out_bits_ctrl_flow_inst(EX_io_out_bits_ctrl_flow_inst),
    .io_out_bits_ctrl_flow_Dnpc(EX_io_out_bits_ctrl_flow_Dnpc),
    .io_out_bits_ctrl_rf_rfDest(EX_io_out_bits_ctrl_rf_rfDest),
    .io_out_bits_ctrl_rf_rfWen(EX_io_out_bits_ctrl_rf_rfWen),
    .io_out_bits_ctrl_rf_rfData(EX_io_out_bits_ctrl_rf_rfData),
    .io_out_bits_ctrl_data_src1(EX_io_out_bits_ctrl_data_src1),
    .io_out_bits_ctrl_data_src2(EX_io_out_bits_ctrl_data_src2),
    .io_out_bits_ctrl_data_Imm(EX_io_out_bits_ctrl_data_Imm),
    .io_out_bits_ctrl_csr_csr_data(EX_io_out_bits_ctrl_csr_csr_data),
    .io_out_bits_ctrl_csr_csr_en(EX_io_out_bits_ctrl_csr_csr_en),
    .io_out_bits_ctrl_csr_csr_idx(EX_io_out_bits_ctrl_csr_csr_idx),
    .io_is_break(EX_io_is_break),
    .io_is_flush(EX_io_is_flush),
    .io_icache_busy(EX_io_icache_busy),
    .io_csr_rd_io_rd_data(EX_io_csr_rd_io_rd_data),
    .io_csr_rd_io_csr_addr(EX_io_csr_rd_io_csr_addr),
    .io_stall(EX_io_stall)
  );
  DIP_model DIP ( // @[CoreTop.scala 132:19]
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
  ysyx_22050321_MEM_stage MEM ( // @[CoreTop.scala 138:19]
    .io_in_ready(MEM_io_in_ready),
    .io_in_valid(MEM_io_in_valid),
    .io_in_bits_ctrl_signal_fuType(MEM_io_in_bits_ctrl_signal_fuType),
    .io_in_bits_ctrl_signal_inst_valid(MEM_io_in_bits_ctrl_signal_inst_valid),
    .io_in_bits_ctrl_signal_rfWen(MEM_io_in_bits_ctrl_signal_rfWen),
    .io_in_bits_ctrl_signal_aluoptype(MEM_io_in_bits_ctrl_signal_aluoptype),
    .io_in_bits_ctrl_signal_ertn_flush(MEM_io_in_bits_ctrl_signal_ertn_flush),
    .io_in_bits_ctrl_signal_excp_flush(MEM_io_in_bits_ctrl_signal_excp_flush),
    .io_in_bits_ctrl_flow_PC(MEM_io_in_bits_ctrl_flow_PC),
    .io_in_bits_ctrl_flow_inst(MEM_io_in_bits_ctrl_flow_inst),
    .io_in_bits_ctrl_flow_Dnpc(MEM_io_in_bits_ctrl_flow_Dnpc),
    .io_in_bits_ctrl_rf_rfDest(MEM_io_in_bits_ctrl_rf_rfDest),
    .io_in_bits_ctrl_rf_rfData(MEM_io_in_bits_ctrl_rf_rfData),
    .io_in_bits_ctrl_data_src1(MEM_io_in_bits_ctrl_data_src1),
    .io_in_bits_ctrl_data_src2(MEM_io_in_bits_ctrl_data_src2),
    .io_in_bits_ctrl_data_Imm(MEM_io_in_bits_ctrl_data_Imm),
    .io_in_bits_ctrl_csr_csr_data(MEM_io_in_bits_ctrl_csr_csr_data),
    .io_in_bits_ctrl_csr_csr_en(MEM_io_in_bits_ctrl_csr_csr_en),
    .io_in_bits_ctrl_csr_csr_idx(MEM_io_in_bits_ctrl_csr_csr_idx),
    .io_out_ready(MEM_io_out_ready),
    .io_out_valid(MEM_io_out_valid),
    .io_out_bits_ctrl_signal_inst_valid(MEM_io_out_bits_ctrl_signal_inst_valid),
    .io_out_bits_ctrl_signal_rfWen(MEM_io_out_bits_ctrl_signal_rfWen),
    .io_out_bits_ctrl_signal_ertn_flush(MEM_io_out_bits_ctrl_signal_ertn_flush),
    .io_out_bits_ctrl_signal_excp_flush(MEM_io_out_bits_ctrl_signal_excp_flush),
    .io_out_bits_ctrl_flow_PC(MEM_io_out_bits_ctrl_flow_PC),
    .io_out_bits_ctrl_flow_inst(MEM_io_out_bits_ctrl_flow_inst),
    .io_out_bits_ctrl_flow_Dnpc(MEM_io_out_bits_ctrl_flow_Dnpc),
    .io_out_bits_ctrl_flow_skip(MEM_io_out_bits_ctrl_flow_skip),
    .io_out_bits_ctrl_rf_rfDest(MEM_io_out_bits_ctrl_rf_rfDest),
    .io_out_bits_ctrl_rf_rfWen(MEM_io_out_bits_ctrl_rf_rfWen),
    .io_out_bits_ctrl_rf_rfData(MEM_io_out_bits_ctrl_rf_rfData),
    .io_out_bits_ctrl_csr_csr_data(MEM_io_out_bits_ctrl_csr_csr_data),
    .io_out_bits_ctrl_csr_csr_en(MEM_io_out_bits_ctrl_csr_csr_en),
    .io_out_bits_ctrl_csr_csr_idx(MEM_io_out_bits_ctrl_csr_csr_idx),
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
  ysyx_22050321_WB WB ( // @[CoreTop.scala 140:18]
    .io_in_ready(WB_io_in_ready),
    .io_in_valid(WB_io_in_valid),
    .io_in_bits_ctrl_signal_inst_valid(WB_io_in_bits_ctrl_signal_inst_valid),
    .io_in_bits_ctrl_signal_rfWen(WB_io_in_bits_ctrl_signal_rfWen),
    .io_in_bits_ctrl_signal_ertn_flush(WB_io_in_bits_ctrl_signal_ertn_flush),
    .io_in_bits_ctrl_signal_excp_flush(WB_io_in_bits_ctrl_signal_excp_flush),
    .io_in_bits_ctrl_flow_PC(WB_io_in_bits_ctrl_flow_PC),
    .io_in_bits_ctrl_flow_inst(WB_io_in_bits_ctrl_flow_inst),
    .io_in_bits_ctrl_flow_Dnpc(WB_io_in_bits_ctrl_flow_Dnpc),
    .io_in_bits_ctrl_flow_skip(WB_io_in_bits_ctrl_flow_skip),
    .io_in_bits_ctrl_rf_rfDest(WB_io_in_bits_ctrl_rf_rfDest),
    .io_in_bits_ctrl_rf_rfData(WB_io_in_bits_ctrl_rf_rfData),
    .io_in_bits_ctrl_csr_csr_data(WB_io_in_bits_ctrl_csr_csr_data),
    .io_in_bits_ctrl_csr_csr_en(WB_io_in_bits_ctrl_csr_csr_en),
    .io_in_bits_ctrl_csr_csr_idx(WB_io_in_bits_ctrl_csr_csr_idx),
    .io_out_ready(WB_io_out_ready),
    .io_out_valid(WB_io_out_valid),
    .io_out_bits_ctrl_signal_inst_valid(WB_io_out_bits_ctrl_signal_inst_valid),
    .io_out_bits_ctrl_signal_ertn_flush(WB_io_out_bits_ctrl_signal_ertn_flush),
    .io_out_bits_ctrl_signal_excp_flush(WB_io_out_bits_ctrl_signal_excp_flush),
    .io_out_bits_ctrl_flow_PC(WB_io_out_bits_ctrl_flow_PC),
    .io_out_bits_ctrl_flow_inst(WB_io_out_bits_ctrl_flow_inst),
    .io_out_bits_ctrl_flow_Dnpc(WB_io_out_bits_ctrl_flow_Dnpc),
    .io_out_bits_ctrl_flow_skip(WB_io_out_bits_ctrl_flow_skip),
    .io_out_bits_ctrl_rf_rfDest(WB_io_out_bits_ctrl_rf_rfDest),
    .io_out_bits_ctrl_rf_rfWen(WB_io_out_bits_ctrl_rf_rfWen),
    .io_out_bits_ctrl_rf_rfData(WB_io_out_bits_ctrl_rf_rfData),
    .io_out_bits_ctrl_csr_csr_data(WB_io_out_bits_ctrl_csr_csr_data),
    .io_out_bits_ctrl_csr_csr_en(WB_io_out_bits_ctrl_csr_csr_en),
    .io_out_bits_ctrl_csr_csr_idx(WB_io_out_bits_ctrl_csr_csr_idx),
    .io_icache_busy(WB_io_icache_busy),
    .io_stall(WB_io_stall)
  );
  ysyx_22050321_Bypass bypass ( // @[CoreTop.scala 142:22]
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
  ysyx_22050321_Cache_Axi ICACHE ( // @[CoreTop.scala 146:22]
    .clock(ICACHE_clock),
    .reset(ICACHE_reset),
    .io_in_addr_req_valid(ICACHE_io_in_addr_req_valid),
    .io_in_addr_req_bits_addr(ICACHE_io_in_addr_req_bits_addr),
    .io_in_rdata_rep_ready(ICACHE_io_in_rdata_rep_ready),
    .io_in_rdata_rep_valid(ICACHE_io_in_rdata_rep_valid),
    .io_in_rdata_rep_bits_rdata(ICACHE_io_in_rdata_rep_bits_rdata),
    .io_cache_busy(ICACHE_io_cache_busy),
    .io_out_raddr_req_ready(ICACHE_io_out_raddr_req_ready),
    .io_out_raddr_req_valid(ICACHE_io_out_raddr_req_valid),
    .io_out_raddr_req_bits_addr(ICACHE_io_out_raddr_req_bits_addr),
    .io_out_rdata_rep_valid(ICACHE_io_out_rdata_rep_valid),
    .io_out_rdata_rep_bits_data(ICACHE_io_out_rdata_rep_bits_data),
    .io_out_rdata_rep_bits_last(ICACHE_io_out_rdata_rep_bits_last),
    .io_out_wb_valid(ICACHE_io_out_wb_valid),
    .io_out_wb_bits_breap(ICACHE_io_out_wb_bits_breap)
  );
  SRAM_AXI MMEM ( // @[CoreTop.scala 152:20]
    .reset(MMEM_reset),
    .clk(MMEM_clk),
    .ar_valid(MMEM_ar_valid),
    .ar_ready(MMEM_ar_ready),
    .ar_addr(MMEM_ar_addr),
    .ar_id(MMEM_ar_id),
    .ar_len(MMEM_ar_len),
    .ar_size(MMEM_ar_size),
    .ar_prot(MMEM_ar_prot),
    .ar_burst(MMEM_ar_burst),
    .ar_lock(MMEM_ar_lock),
    .ar_cache(MMEM_ar_cache),
    .rd_valid(MMEM_rd_valid),
    .rd_ready(MMEM_rd_ready),
    .rd_data(MMEM_rd_data),
    .rd_id(MMEM_rd_id),
    .rd_resp(MMEM_rd_resp),
    .rd_last(MMEM_rd_last),
    .aw_valid(MMEM_aw_valid),
    .aw_ready(MMEM_aw_ready),
    .aw_addr(MMEM_aw_addr),
    .aw_id(MMEM_aw_id),
    .aw_len(MMEM_aw_len),
    .aw_size(MMEM_aw_size),
    .aw_prot(MMEM_aw_prot),
    .aw_burst(MMEM_aw_burst),
    .aw_lock(MMEM_aw_lock),
    .aw_cache(MMEM_aw_cache),
    .wd_valid(MMEM_wd_valid),
    .wd_ready(MMEM_wd_ready),
    .wd_data(MMEM_wd_data),
    .wstrb(MMEM_wstrb),
    .wd_id(MMEM_wd_id),
    .wd_last(MMEM_wd_last),
    .wr_valid(MMEM_wr_valid),
    .wr_ready(MMEM_wr_ready),
    .wr_breap(MMEM_wr_breap),
    .wr_id(MMEM_wr_id)
  );
  ysyx_22050321_Axi_FULLArbiter ARBITER ( // @[CoreTop.scala 154:23]
    .clock(ARBITER_clock),
    .reset(ARBITER_reset),
    .io_in1_raddr_req_ready(ARBITER_io_in1_raddr_req_ready),
    .io_in1_raddr_req_valid(ARBITER_io_in1_raddr_req_valid),
    .io_in1_raddr_req_bits_addr(ARBITER_io_in1_raddr_req_bits_addr),
    .io_in1_raddr_req_bits_len(ARBITER_io_in1_raddr_req_bits_len),
    .io_in1_waddr_req_ready(ARBITER_io_in1_waddr_req_ready),
    .io_in1_waddr_req_valid(ARBITER_io_in1_waddr_req_valid),
    .io_in1_waddr_req_bits_addr(ARBITER_io_in1_waddr_req_bits_addr),
    .io_in1_waddr_req_bits_len(ARBITER_io_in1_waddr_req_bits_len),
    .io_in1_rdata_rep_ready(ARBITER_io_in1_rdata_rep_ready),
    .io_in1_rdata_rep_valid(ARBITER_io_in1_rdata_rep_valid),
    .io_in1_rdata_rep_bits_data(ARBITER_io_in1_rdata_rep_bits_data),
    .io_in1_rdata_rep_bits_last(ARBITER_io_in1_rdata_rep_bits_last),
    .io_in1_wdata_req_ready(ARBITER_io_in1_wdata_req_ready),
    .io_in1_wdata_req_valid(ARBITER_io_in1_wdata_req_valid),
    .io_in1_wdata_req_bits_data(ARBITER_io_in1_wdata_req_bits_data),
    .io_in1_wdata_req_bits_wstrb(ARBITER_io_in1_wdata_req_bits_wstrb),
    .io_in1_wdata_req_bits_last(ARBITER_io_in1_wdata_req_bits_last),
    .io_in1_wb_ready(ARBITER_io_in1_wb_ready),
    .io_in1_wb_valid(ARBITER_io_in1_wb_valid),
    .io_in1_wb_bits_breap(ARBITER_io_in1_wb_bits_breap),
    .io_in2_raddr_req_ready(ARBITER_io_in2_raddr_req_ready),
    .io_in2_raddr_req_valid(ARBITER_io_in2_raddr_req_valid),
    .io_in2_raddr_req_bits_addr(ARBITER_io_in2_raddr_req_bits_addr),
    .io_in2_rdata_rep_valid(ARBITER_io_in2_rdata_rep_valid),
    .io_in2_rdata_rep_bits_data(ARBITER_io_in2_rdata_rep_bits_data),
    .io_in2_rdata_rep_bits_last(ARBITER_io_in2_rdata_rep_bits_last),
    .io_in2_wb_valid(ARBITER_io_in2_wb_valid),
    .io_in2_wb_bits_breap(ARBITER_io_in2_wb_bits_breap),
    .io_out_raddr_req_ready(ARBITER_io_out_raddr_req_ready),
    .io_out_raddr_req_valid(ARBITER_io_out_raddr_req_valid),
    .io_out_raddr_req_bits_addr(ARBITER_io_out_raddr_req_bits_addr),
    .io_out_raddr_req_bits_len(ARBITER_io_out_raddr_req_bits_len),
    .io_out_waddr_req_ready(ARBITER_io_out_waddr_req_ready),
    .io_out_waddr_req_valid(ARBITER_io_out_waddr_req_valid),
    .io_out_waddr_req_bits_addr(ARBITER_io_out_waddr_req_bits_addr),
    .io_out_waddr_req_bits_len(ARBITER_io_out_waddr_req_bits_len),
    .io_out_rdata_rep_ready(ARBITER_io_out_rdata_rep_ready),
    .io_out_rdata_rep_valid(ARBITER_io_out_rdata_rep_valid),
    .io_out_rdata_rep_bits_data(ARBITER_io_out_rdata_rep_bits_data),
    .io_out_rdata_rep_bits_last(ARBITER_io_out_rdata_rep_bits_last),
    .io_out_wdata_req_ready(ARBITER_io_out_wdata_req_ready),
    .io_out_wdata_req_valid(ARBITER_io_out_wdata_req_valid),
    .io_out_wdata_req_bits_data(ARBITER_io_out_wdata_req_bits_data),
    .io_out_wdata_req_bits_wstrb(ARBITER_io_out_wdata_req_bits_wstrb),
    .io_out_wdata_req_bits_last(ARBITER_io_out_wdata_req_bits_last),
    .io_out_wb_ready(ARBITER_io_out_wb_ready),
    .io_out_wb_valid(ARBITER_io_out_wb_valid),
    .io_out_wb_bits_breap(ARBITER_io_out_wb_bits_breap)
  );
  ysyx_22050321_MMIO MMIO ( // @[CoreTop.scala 156:20]
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
    .io_out_raddr_req_ready(MMIO_io_out_raddr_req_ready),
    .io_out_raddr_req_valid(MMIO_io_out_raddr_req_valid),
    .io_out_raddr_req_bits_addr(MMIO_io_out_raddr_req_bits_addr),
    .io_out_raddr_req_bits_len(MMIO_io_out_raddr_req_bits_len),
    .io_out_waddr_req_ready(MMIO_io_out_waddr_req_ready),
    .io_out_waddr_req_valid(MMIO_io_out_waddr_req_valid),
    .io_out_waddr_req_bits_addr(MMIO_io_out_waddr_req_bits_addr),
    .io_out_waddr_req_bits_len(MMIO_io_out_waddr_req_bits_len),
    .io_out_rdata_rep_ready(MMIO_io_out_rdata_rep_ready),
    .io_out_rdata_rep_valid(MMIO_io_out_rdata_rep_valid),
    .io_out_rdata_rep_bits_data(MMIO_io_out_rdata_rep_bits_data),
    .io_out_rdata_rep_bits_last(MMIO_io_out_rdata_rep_bits_last),
    .io_out_wdata_req_ready(MMIO_io_out_wdata_req_ready),
    .io_out_wdata_req_valid(MMIO_io_out_wdata_req_valid),
    .io_out_wdata_req_bits_data(MMIO_io_out_wdata_req_bits_data),
    .io_out_wdata_req_bits_wstrb(MMIO_io_out_wdata_req_bits_wstrb),
    .io_out_wdata_req_bits_last(MMIO_io_out_wdata_req_bits_last),
    .io_out_wb_ready(MMIO_io_out_wb_ready),
    .io_out_wb_valid(MMIO_io_out_wb_valid),
    .io_out_wb_bits_breap(MMIO_io_out_wb_bits_breap)
  );
  ysyx_22050321_CSR_ CSR ( // @[CoreTop.scala 158:19]
    .clock(CSR_clock),
    .reset(CSR_reset),
    .io_rd_rd_data(CSR_io_rd_rd_data),
    .io_rd_csr_addr(CSR_io_rd_csr_addr),
    .io_wr_csr_data(CSR_io_wr_csr_data),
    .io_wr_csr_en(CSR_io_wr_csr_en),
    .io_wr_csr_idx(CSR_io_wr_csr_idx),
    .io_excp_flush(CSR_io_excp_flush),
    .io_mert_flush(CSR_io_mert_flush),
    .io_epc(CSR_io_epc),
    .io_mtvec_o(CSR_io_mtvec_o),
    .io_mepc_o(CSR_io_mepc_o)
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
  assign rf_MPORT_data = _T_25 ? 64'h0 : _T_26;
  assign rf_MPORT_addr = WB_io_out_bits_ctrl_rf_rfDest;
  assign rf_MPORT_mask = 1'h1;
  assign rf_MPORT_en = WB_io_out_bits_ctrl_rf_rfWen;
  assign io_pc = IF_io_out_bits_PC; // @[CoreTop.scala 302:9]
  assign io_inst = WB_io_out_bits_ctrl_flow_inst; // @[CoreTop.scala 301:11]
  assign IF_clock = clock;
  assign IF_reset = reset;
  assign IF_io_branch_io_is_branch = EX_io_branchIO_is_branch; // @[CoreTop.scala 248:19]
  assign IF_io_branch_io_is_jump = EX_io_branchIO_is_jump; // @[CoreTop.scala 248:19]
  assign IF_io_branch_io_dnpc = EX_io_branchIO_dnpc; // @[CoreTop.scala 248:19]
  assign IF_io_cache_req_rdata_rep_valid = ICACHE_io_in_rdata_rep_valid; // @[CoreTop.scala 175:29]
  assign IF_io_cache_req_rdata_rep_bits_rdata = ICACHE_io_in_rdata_rep_bits_rdata; // @[CoreTop.scala 175:29]
  assign IF_io_out_ready = ~full; // @[Pipline.scala 48:19]
  assign IF_io_flush = EX_io_is_flush; // @[CoreTop.scala 225:15]
  assign IF_io_mret_flush = WB_io_out_bits_ctrl_signal_ertn_flush; // @[CoreTop.scala 227:20]
  assign IF_io_excp_flush = WB_io_out_bits_ctrl_signal_excp_flush; // @[CoreTop.scala 226:20]
  assign IF_io_mtvec = CSR_io_mtvec_o; // @[CoreTop.scala 229:15]
  assign IF_io_mret = CSR_io_mepc_o; // @[CoreTop.scala 228:14]
  assign IF_io_wb_stall = WB_io_stall; // @[CoreTop.scala 231:18]
  assign IF_io_ex_stall = EX_io_stall; // @[CoreTop.scala 232:18]
  assign ID_io_in_valid = ~empty; // @[Pipline.scala 49:20]
  assign ID_io_in_bits_PC = 5'h1f == tail[4:0] ? buffer_31_PC : _GEN_194; // @[Pipline.scala 47:{16,16}]
  assign ID_io_in_bits_Inst = 5'h1f == tail[4:0] ? buffer_31_Inst : _GEN_162; // @[Pipline.scala 47:{16,16}]
  assign ID_io_REG1 = bypass_io_Bypass_REG1; // @[CoreTop.scala 239:14]
  assign ID_io_REG2 = bypass_io_Bypass_REG2; // @[CoreTop.scala 240:14]
  assign ID_io_flush = EX_io_is_flush; // @[CoreTop.scala 241:15]
  assign ID_io_ex_is_mem = EX_io_is_mem; // @[CoreTop.scala 242:19]
  assign ID_io_ex_reg_rfDest = EX_io_out_bits_ctrl_rf_rfDest; // @[CoreTop.scala 243:16]
  assign ID_io_ex_reg_rfWen = EX_io_out_bits_ctrl_rf_rfWen; // @[CoreTop.scala 243:16]
  assign ID_io_out_ready = EX_io_in_ready; // @[Pipline.scala 20:16]
  assign EX_clock = clock;
  assign EX_reset = reset;
  assign EX_io_in_valid = valid; // @[Pipline.scala 23:17]
  assign EX_io_in_bits_ctrl_signal_src1Type = EX_io_in_bits_r_ctrl_signal_src1Type; // @[Pipline.scala 21:16]
  assign EX_io_in_bits_ctrl_signal_src2Type = EX_io_in_bits_r_ctrl_signal_src2Type; // @[Pipline.scala 21:16]
  assign EX_io_in_bits_ctrl_signal_fuType = EX_io_in_bits_r_ctrl_signal_fuType; // @[Pipline.scala 21:16]
  assign EX_io_in_bits_ctrl_signal_inst_valid = EX_io_in_bits_r_ctrl_signal_inst_valid; // @[Pipline.scala 21:16]
  assign EX_io_in_bits_ctrl_signal_rfWen = EX_io_in_bits_r_ctrl_signal_rfWen; // @[Pipline.scala 21:16]
  assign EX_io_in_bits_ctrl_signal_aluoptype = EX_io_in_bits_r_ctrl_signal_aluoptype; // @[Pipline.scala 21:16]
  assign EX_io_in_bits_ctrl_signal_rfDest = EX_io_in_bits_r_ctrl_signal_rfDest; // @[Pipline.scala 21:16]
  assign EX_io_in_bits_ctrl_signal_ertn_flush = EX_io_in_bits_r_ctrl_signal_ertn_flush; // @[Pipline.scala 21:16]
  assign EX_io_in_bits_ctrl_signal_excp_flush = EX_io_in_bits_r_ctrl_signal_excp_flush; // @[Pipline.scala 21:16]
  assign EX_io_in_bits_ctrl_data_src1 = EX_io_in_bits_r_ctrl_data_src1; // @[Pipline.scala 21:16]
  assign EX_io_in_bits_ctrl_data_src2 = EX_io_in_bits_r_ctrl_data_src2; // @[Pipline.scala 21:16]
  assign EX_io_in_bits_ctrl_data_Imm = EX_io_in_bits_r_ctrl_data_Imm; // @[Pipline.scala 21:16]
  assign EX_io_in_bits_ctrl_flow_PC = EX_io_in_bits_r_ctrl_flow_PC; // @[Pipline.scala 21:16]
  assign EX_io_in_bits_ctrl_flow_inst = EX_io_in_bits_r_ctrl_flow_inst; // @[Pipline.scala 21:16]
  assign EX_io_in_bits_ctrl_csr_csr_idx = EX_io_in_bits_r_ctrl_csr_csr_idx; // @[Pipline.scala 21:16]
  assign EX_io_out_ready = MEM_io_in_ready; // @[Pipline.scala 20:16]
  assign EX_io_icache_busy = ICACHE_io_cache_busy; // @[CoreTop.scala 260:21]
  assign EX_io_csr_rd_io_rd_data = CSR_io_rd_rd_data; // @[CoreTop.scala 250:27]
  assign DIP_is_break = DIP_io_is_break_REG_1; // @[CoreTop.scala 291:19]
  assign DIP_rf_0 = rf_DIP_io_rf_0_MPORT_data; // @[CoreTop.scala 293:18]
  assign DIP_rf_1 = rf_DIP_io_rf_1_MPORT_data; // @[CoreTop.scala 293:18]
  assign DIP_rf_2 = rf_DIP_io_rf_2_MPORT_data; // @[CoreTop.scala 293:18]
  assign DIP_rf_3 = rf_DIP_io_rf_3_MPORT_data; // @[CoreTop.scala 293:18]
  assign DIP_rf_4 = rf_DIP_io_rf_4_MPORT_data; // @[CoreTop.scala 293:18]
  assign DIP_rf_5 = rf_DIP_io_rf_5_MPORT_data; // @[CoreTop.scala 293:18]
  assign DIP_rf_6 = rf_DIP_io_rf_6_MPORT_data; // @[CoreTop.scala 293:18]
  assign DIP_rf_7 = rf_DIP_io_rf_7_MPORT_data; // @[CoreTop.scala 293:18]
  assign DIP_rf_8 = rf_DIP_io_rf_8_MPORT_data; // @[CoreTop.scala 293:18]
  assign DIP_rf_9 = rf_DIP_io_rf_9_MPORT_data; // @[CoreTop.scala 293:18]
  assign DIP_rf_10 = rf_DIP_io_rf_10_MPORT_data; // @[CoreTop.scala 293:18]
  assign DIP_rf_11 = rf_DIP_io_rf_11_MPORT_data; // @[CoreTop.scala 293:18]
  assign DIP_rf_12 = rf_DIP_io_rf_12_MPORT_data; // @[CoreTop.scala 293:18]
  assign DIP_rf_13 = rf_DIP_io_rf_13_MPORT_data; // @[CoreTop.scala 293:18]
  assign DIP_rf_14 = rf_DIP_io_rf_14_MPORT_data; // @[CoreTop.scala 293:18]
  assign DIP_rf_15 = rf_DIP_io_rf_15_MPORT_data; // @[CoreTop.scala 293:18]
  assign DIP_rf_16 = rf_DIP_io_rf_16_MPORT_data; // @[CoreTop.scala 293:18]
  assign DIP_rf_17 = rf_DIP_io_rf_17_MPORT_data; // @[CoreTop.scala 293:18]
  assign DIP_rf_18 = rf_DIP_io_rf_18_MPORT_data; // @[CoreTop.scala 293:18]
  assign DIP_rf_19 = rf_DIP_io_rf_19_MPORT_data; // @[CoreTop.scala 293:18]
  assign DIP_rf_20 = rf_DIP_io_rf_20_MPORT_data; // @[CoreTop.scala 293:18]
  assign DIP_rf_21 = rf_DIP_io_rf_21_MPORT_data; // @[CoreTop.scala 293:18]
  assign DIP_rf_22 = rf_DIP_io_rf_22_MPORT_data; // @[CoreTop.scala 293:18]
  assign DIP_rf_23 = rf_DIP_io_rf_23_MPORT_data; // @[CoreTop.scala 293:18]
  assign DIP_rf_24 = rf_DIP_io_rf_24_MPORT_data; // @[CoreTop.scala 293:18]
  assign DIP_rf_25 = rf_DIP_io_rf_25_MPORT_data; // @[CoreTop.scala 293:18]
  assign DIP_rf_26 = rf_DIP_io_rf_26_MPORT_data; // @[CoreTop.scala 293:18]
  assign DIP_rf_27 = rf_DIP_io_rf_27_MPORT_data; // @[CoreTop.scala 293:18]
  assign DIP_rf_28 = rf_DIP_io_rf_28_MPORT_data; // @[CoreTop.scala 293:18]
  assign DIP_rf_29 = rf_DIP_io_rf_29_MPORT_data; // @[CoreTop.scala 293:18]
  assign DIP_rf_30 = rf_DIP_io_rf_30_MPORT_data; // @[CoreTop.scala 293:18]
  assign DIP_rf_31 = rf_DIP_io_rf_31_MPORT_data; // @[CoreTop.scala 293:18]
  assign DIP_inst = DIP_io_inst_REG; // @[CoreTop.scala 295:15]
  assign DIP_pc = DIP_io_pc_REG; // @[CoreTop.scala 298:13]
  assign DIP_inst_valid = DIP_io_inst_valid_REG; // @[CoreTop.scala 297:21]
  assign DIP_dnpc = DIP_io_dnpc_REG; // @[CoreTop.scala 299:15]
  assign DIP_is_skip = DIP_io_is_skip_REG; // @[CoreTop.scala 296:18]
  assign MEM_io_in_valid = valid_1; // @[Pipline.scala 23:17]
  assign MEM_io_in_bits_ctrl_signal_fuType = MEM_io_in_bits_r_ctrl_signal_fuType; // @[Pipline.scala 21:16]
  assign MEM_io_in_bits_ctrl_signal_inst_valid = MEM_io_in_bits_r_ctrl_signal_inst_valid; // @[Pipline.scala 21:16]
  assign MEM_io_in_bits_ctrl_signal_rfWen = MEM_io_in_bits_r_ctrl_signal_rfWen; // @[Pipline.scala 21:16]
  assign MEM_io_in_bits_ctrl_signal_aluoptype = MEM_io_in_bits_r_ctrl_signal_aluoptype; // @[Pipline.scala 21:16]
  assign MEM_io_in_bits_ctrl_signal_ertn_flush = MEM_io_in_bits_r_ctrl_signal_ertn_flush; // @[Pipline.scala 21:16]
  assign MEM_io_in_bits_ctrl_signal_excp_flush = MEM_io_in_bits_r_ctrl_signal_excp_flush; // @[Pipline.scala 21:16]
  assign MEM_io_in_bits_ctrl_flow_PC = MEM_io_in_bits_r_ctrl_flow_PC; // @[Pipline.scala 21:16]
  assign MEM_io_in_bits_ctrl_flow_inst = MEM_io_in_bits_r_ctrl_flow_inst; // @[Pipline.scala 21:16]
  assign MEM_io_in_bits_ctrl_flow_Dnpc = MEM_io_in_bits_r_ctrl_flow_Dnpc; // @[Pipline.scala 21:16]
  assign MEM_io_in_bits_ctrl_rf_rfDest = MEM_io_in_bits_r_ctrl_rf_rfDest; // @[Pipline.scala 21:16]
  assign MEM_io_in_bits_ctrl_rf_rfData = MEM_io_in_bits_r_ctrl_rf_rfData; // @[Pipline.scala 21:16]
  assign MEM_io_in_bits_ctrl_data_src1 = MEM_io_in_bits_r_ctrl_data_src1; // @[Pipline.scala 21:16]
  assign MEM_io_in_bits_ctrl_data_src2 = MEM_io_in_bits_r_ctrl_data_src2; // @[Pipline.scala 21:16]
  assign MEM_io_in_bits_ctrl_data_Imm = MEM_io_in_bits_r_ctrl_data_Imm; // @[Pipline.scala 21:16]
  assign MEM_io_in_bits_ctrl_csr_csr_data = MEM_io_in_bits_r_ctrl_csr_csr_data; // @[Pipline.scala 21:16]
  assign MEM_io_in_bits_ctrl_csr_csr_en = MEM_io_in_bits_r_ctrl_csr_csr_en; // @[Pipline.scala 21:16]
  assign MEM_io_in_bits_ctrl_csr_csr_idx = MEM_io_in_bits_r_ctrl_csr_csr_idx; // @[Pipline.scala 21:16]
  assign MEM_io_out_ready = WB_io_in_ready; // @[Pipline.scala 20:16]
  assign MEM_io_cache_io_rdata_rep_valid = MMIO_io_in_rdata_rep_valid; // @[CoreTop.scala 268:19]
  assign MEM_io_cache_io_rdata_rep_bits_rdata = MMIO_io_in_rdata_rep_bits_rdata; // @[CoreTop.scala 268:19]
  assign MEM_io_cache_io_wdata_rep = MMIO_io_in_wdata_rep; // @[CoreTop.scala 268:19]
  assign WB_io_in_valid = valid_2; // @[Pipline.scala 23:17]
  assign WB_io_in_bits_ctrl_signal_inst_valid = WB_io_in_bits_r_ctrl_signal_inst_valid; // @[Pipline.scala 21:16]
  assign WB_io_in_bits_ctrl_signal_rfWen = WB_io_in_bits_r_ctrl_signal_rfWen; // @[Pipline.scala 21:16]
  assign WB_io_in_bits_ctrl_signal_ertn_flush = WB_io_in_bits_r_ctrl_signal_ertn_flush; // @[Pipline.scala 21:16]
  assign WB_io_in_bits_ctrl_signal_excp_flush = WB_io_in_bits_r_ctrl_signal_excp_flush; // @[Pipline.scala 21:16]
  assign WB_io_in_bits_ctrl_flow_PC = WB_io_in_bits_r_ctrl_flow_PC; // @[Pipline.scala 21:16]
  assign WB_io_in_bits_ctrl_flow_inst = WB_io_in_bits_r_ctrl_flow_inst; // @[Pipline.scala 21:16]
  assign WB_io_in_bits_ctrl_flow_Dnpc = WB_io_in_bits_r_ctrl_flow_Dnpc; // @[Pipline.scala 21:16]
  assign WB_io_in_bits_ctrl_flow_skip = WB_io_in_bits_r_ctrl_flow_skip; // @[Pipline.scala 21:16]
  assign WB_io_in_bits_ctrl_rf_rfDest = WB_io_in_bits_r_ctrl_rf_rfDest; // @[Pipline.scala 21:16]
  assign WB_io_in_bits_ctrl_rf_rfData = WB_io_in_bits_r_ctrl_rf_rfData; // @[Pipline.scala 21:16]
  assign WB_io_in_bits_ctrl_csr_csr_data = WB_io_in_bits_r_ctrl_csr_csr_data; // @[Pipline.scala 21:16]
  assign WB_io_in_bits_ctrl_csr_csr_en = WB_io_in_bits_r_ctrl_csr_csr_en; // @[Pipline.scala 21:16]
  assign WB_io_in_bits_ctrl_csr_csr_idx = WB_io_in_bits_r_ctrl_csr_csr_idx; // @[Pipline.scala 21:16]
  assign WB_io_out_ready = 1'h1; // @[CoreTop.scala 281:19]
  assign WB_io_icache_busy = ICACHE_io_cache_busy; // @[CoreTop.scala 271:21]
  assign bypass_io_EX_rf_rfDest = EX_io_out_bits_ctrl_rf_rfDest; // @[CoreTop.scala 249:19]
  assign bypass_io_EX_rf_rfWen = EX_io_out_bits_ctrl_rf_rfWen; // @[CoreTop.scala 249:19]
  assign bypass_io_EX_rf_rfData = EX_io_out_bits_ctrl_rf_rfData; // @[CoreTop.scala 249:19]
  assign bypass_io_MEM_rf_rfDest = MEM_io_out_bits_ctrl_rf_rfDest; // @[CoreTop.scala 270:20]
  assign bypass_io_MEM_rf_rfWen = MEM_io_out_bits_ctrl_rf_rfWen; // @[CoreTop.scala 270:20]
  assign bypass_io_MEM_rf_rfData = MEM_io_out_bits_ctrl_rf_rfData; // @[CoreTop.scala 270:20]
  assign bypass_io_WB_rf_rfDest = WB_io_out_bits_ctrl_rf_rfDest; // @[CoreTop.scala 282:19]
  assign bypass_io_WB_rf_rfWen = WB_io_out_bits_ctrl_rf_rfWen; // @[CoreTop.scala 282:19]
  assign bypass_io_WB_rf_rfData = WB_io_out_bits_ctrl_rf_rfData; // @[CoreTop.scala 282:19]
  assign bypass_io_Reg1 = ID_io_out_bits_ctrl_signal_rfSrc1 == 5'h0 ? 64'h0 : rf_bypass_io_Reg1_MPORT_data; // @[RF.scala 8:37]
  assign bypass_io_reg_index1 = ID_io_out_bits_ctrl_signal_rfSrc1; // @[CoreTop.scala 168:24]
  assign bypass_io_Reg2 = ID_io_out_bits_ctrl_signal_rfSrc2 == 5'h0 ? 64'h0 : rf_bypass_io_Reg2_MPORT_data; // @[RF.scala 8:37]
  assign bypass_io_reg_index2 = ID_io_out_bits_ctrl_signal_rfSrc2; // @[CoreTop.scala 169:24]
  assign ICACHE_clock = clock;
  assign ICACHE_reset = reset;
  assign ICACHE_io_in_addr_req_valid = IF_io_cache_req_addr_req_valid; // @[CoreTop.scala 174:28]
  assign ICACHE_io_in_addr_req_bits_addr = IF_io_cache_req_addr_req_bits_addr; // @[CoreTop.scala 174:28]
  assign ICACHE_io_in_rdata_rep_ready = IF_io_cache_req_rdata_rep_ready; // @[CoreTop.scala 175:29]
  assign ICACHE_io_out_raddr_req_ready = ARBITER_io_in2_raddr_req_ready; // @[CoreTop.scala 178:18]
  assign ICACHE_io_out_rdata_rep_valid = ARBITER_io_in2_rdata_rep_valid; // @[CoreTop.scala 178:18]
  assign ICACHE_io_out_rdata_rep_bits_data = ARBITER_io_in2_rdata_rep_bits_data; // @[CoreTop.scala 178:18]
  assign ICACHE_io_out_rdata_rep_bits_last = ARBITER_io_in2_rdata_rep_bits_last; // @[CoreTop.scala 178:18]
  assign ICACHE_io_out_wb_valid = ARBITER_io_in2_wb_valid; // @[CoreTop.scala 178:18]
  assign ICACHE_io_out_wb_bits_breap = ARBITER_io_in2_wb_bits_breap; // @[CoreTop.scala 178:18]
  assign MMEM_reset = reset; // @[CoreTop.scala 181:17]
  assign MMEM_clk = clock; // @[CoreTop.scala 182:15]
  assign MMEM_ar_valid = ARBITER_io_out_raddr_req_valid; // @[CoreTop.scala 185:20]
  assign MMEM_ar_addr = ARBITER_io_out_raddr_req_bits_addr; // @[CoreTop.scala 186:19]
  assign MMEM_ar_id = 4'h1; // @[CoreTop.scala 187:17]
  assign MMEM_ar_len = ARBITER_io_out_raddr_req_bits_len; // @[CoreTop.scala 189:18]
  assign MMEM_ar_size = 3'h3; // @[CoreTop.scala 188:19]
  assign MMEM_ar_prot = 3'h0; // @[CoreTop.scala 193:19]
  assign MMEM_ar_burst = 2'h1; // @[CoreTop.scala 192:20]
  assign MMEM_ar_lock = 2'h0; // @[CoreTop.scala 190:19]
  assign MMEM_ar_cache = 4'h0; // @[CoreTop.scala 191:20]
  assign MMEM_rd_ready = ARBITER_io_out_rdata_rep_ready; // @[CoreTop.scala 213:20]
  assign MMEM_aw_valid = ARBITER_io_out_waddr_req_valid; // @[CoreTop.scala 196:20]
  assign MMEM_aw_addr = ARBITER_io_out_waddr_req_bits_addr; // @[CoreTop.scala 197:19]
  assign MMEM_aw_id = 4'h1; // @[CoreTop.scala 198:17]
  assign MMEM_aw_len = ARBITER_io_out_waddr_req_bits_len; // @[CoreTop.scala 200:18]
  assign MMEM_aw_size = 3'h3; // @[CoreTop.scala 199:19]
  assign MMEM_aw_prot = 3'h0; // @[CoreTop.scala 204:19]
  assign MMEM_aw_burst = 2'h1; // @[CoreTop.scala 203:20]
  assign MMEM_aw_lock = 2'h0; // @[CoreTop.scala 201:19]
  assign MMEM_aw_cache = 4'h0; // @[CoreTop.scala 202:20]
  assign MMEM_wd_valid = ARBITER_io_out_wdata_req_valid; // @[CoreTop.scala 209:20]
  assign MMEM_wd_data = ARBITER_io_out_wdata_req_bits_data; // @[CoreTop.scala 207:19]
  assign MMEM_wstrb = ARBITER_io_out_wdata_req_bits_wstrb; // @[CoreTop.scala 208:17]
  assign MMEM_wd_id = 4'h1; // @[CoreTop.scala 210:17]
  assign MMEM_wd_last = ARBITER_io_out_wdata_req_bits_last; // @[CoreTop.scala 211:19]
  assign MMEM_wr_ready = ARBITER_io_out_wb_ready; // @[CoreTop.scala 223:20]
  assign ARBITER_clock = clock;
  assign ARBITER_reset = reset;
  assign ARBITER_io_in1_raddr_req_valid = MMIO_io_out_raddr_req_valid; // @[CoreTop.scala 179:18]
  assign ARBITER_io_in1_raddr_req_bits_addr = MMIO_io_out_raddr_req_bits_addr; // @[CoreTop.scala 179:18]
  assign ARBITER_io_in1_raddr_req_bits_len = MMIO_io_out_raddr_req_bits_len; // @[CoreTop.scala 179:18]
  assign ARBITER_io_in1_waddr_req_valid = MMIO_io_out_waddr_req_valid; // @[CoreTop.scala 179:18]
  assign ARBITER_io_in1_waddr_req_bits_addr = MMIO_io_out_waddr_req_bits_addr; // @[CoreTop.scala 179:18]
  assign ARBITER_io_in1_waddr_req_bits_len = MMIO_io_out_waddr_req_bits_len; // @[CoreTop.scala 179:18]
  assign ARBITER_io_in1_rdata_rep_ready = MMIO_io_out_rdata_rep_ready; // @[CoreTop.scala 179:18]
  assign ARBITER_io_in1_wdata_req_valid = MMIO_io_out_wdata_req_valid; // @[CoreTop.scala 179:18]
  assign ARBITER_io_in1_wdata_req_bits_data = MMIO_io_out_wdata_req_bits_data; // @[CoreTop.scala 179:18]
  assign ARBITER_io_in1_wdata_req_bits_wstrb = MMIO_io_out_wdata_req_bits_wstrb; // @[CoreTop.scala 179:18]
  assign ARBITER_io_in1_wdata_req_bits_last = MMIO_io_out_wdata_req_bits_last; // @[CoreTop.scala 179:18]
  assign ARBITER_io_in1_wb_ready = MMIO_io_out_wb_ready; // @[CoreTop.scala 179:18]
  assign ARBITER_io_in2_raddr_req_valid = ICACHE_io_out_raddr_req_valid; // @[CoreTop.scala 178:18]
  assign ARBITER_io_in2_raddr_req_bits_addr = ICACHE_io_out_raddr_req_bits_addr; // @[CoreTop.scala 178:18]
  assign ARBITER_io_out_raddr_req_ready = MMEM_ar_ready; // @[CoreTop.scala 184:34]
  assign ARBITER_io_out_waddr_req_ready = MMEM_aw_ready; // @[CoreTop.scala 195:34]
  assign ARBITER_io_out_rdata_rep_valid = MMEM_rd_valid; // @[CoreTop.scala 214:34]
  assign ARBITER_io_out_rdata_rep_bits_data = MMEM_rd_data; // @[CoreTop.scala 215:38]
  assign ARBITER_io_out_rdata_rep_bits_last = MMEM_rd_last; // @[CoreTop.scala 217:38]
  assign ARBITER_io_out_wdata_req_ready = MMEM_wd_ready; // @[CoreTop.scala 206:34]
  assign ARBITER_io_out_wb_valid = MMEM_wr_valid; // @[CoreTop.scala 220:27]
  assign ARBITER_io_out_wb_bits_breap = MMEM_wr_breap; // @[CoreTop.scala 221:32]
  assign MMIO_clock = clock;
  assign MMIO_reset = reset;
  assign MMIO_io_in_addr_req_valid = MEM_io_cache_io_addr_req_valid; // @[CoreTop.scala 268:19]
  assign MMIO_io_in_addr_req_bits_addr = MEM_io_cache_io_addr_req_bits_addr; // @[CoreTop.scala 268:19]
  assign MMIO_io_in_addr_req_bits_ce = MEM_io_cache_io_addr_req_bits_ce; // @[CoreTop.scala 268:19]
  assign MMIO_io_in_addr_req_bits_we = MEM_io_cache_io_addr_req_bits_we; // @[CoreTop.scala 268:19]
  assign MMIO_io_in_wdata_req_bits_wdata = MEM_io_cache_io_wdata_req_bits_wdata; // @[CoreTop.scala 268:19]
  assign MMIO_io_in_wdata_req_bits_wmask = MEM_io_cache_io_wdata_req_bits_wmask; // @[CoreTop.scala 268:19]
  assign MMIO_io_out_raddr_req_ready = ARBITER_io_in1_raddr_req_ready; // @[CoreTop.scala 179:18]
  assign MMIO_io_out_waddr_req_ready = ARBITER_io_in1_waddr_req_ready; // @[CoreTop.scala 179:18]
  assign MMIO_io_out_rdata_rep_valid = ARBITER_io_in1_rdata_rep_valid; // @[CoreTop.scala 179:18]
  assign MMIO_io_out_rdata_rep_bits_data = ARBITER_io_in1_rdata_rep_bits_data; // @[CoreTop.scala 179:18]
  assign MMIO_io_out_rdata_rep_bits_last = ARBITER_io_in1_rdata_rep_bits_last; // @[CoreTop.scala 179:18]
  assign MMIO_io_out_wdata_req_ready = ARBITER_io_in1_wdata_req_ready; // @[CoreTop.scala 179:18]
  assign MMIO_io_out_wb_valid = ARBITER_io_in1_wb_valid; // @[CoreTop.scala 179:18]
  assign MMIO_io_out_wb_bits_breap = ARBITER_io_in1_wb_bits_breap; // @[CoreTop.scala 179:18]
  assign CSR_clock = clock;
  assign CSR_reset = reset;
  assign CSR_io_rd_csr_addr = EX_io_csr_rd_io_csr_addr; // @[CoreTop.scala 251:22]
  assign CSR_io_wr_csr_data = WB_io_out_bits_ctrl_csr_csr_data; // @[CoreTop.scala 285:13]
  assign CSR_io_wr_csr_en = WB_io_out_bits_ctrl_csr_csr_en; // @[CoreTop.scala 285:13]
  assign CSR_io_wr_csr_idx = WB_io_out_bits_ctrl_csr_csr_idx; // @[CoreTop.scala 285:13]
  assign CSR_io_excp_flush = WB_io_out_bits_ctrl_signal_excp_flush; // @[CoreTop.scala 286:21]
  assign CSR_io_mert_flush = WB_io_out_bits_ctrl_signal_ertn_flush; // @[CoreTop.scala 287:21]
  assign CSR_io_epc = WB_io_out_bits_ctrl_flow_PC; // @[CoreTop.scala 288:14]
  always @(posedge clock) begin
    if (rf_MPORT_en & rf_MPORT_mask) begin
      rf[rf_MPORT_addr] <= rf_MPORT_data; // @[RF.scala 7:15]
    end
    if (reset) begin // @[Pipline.scala 29:23]
      head <= 6'h0; // @[Pipline.scala 29:23]
    end else if (_T_5) begin // @[Pipline.scala 43:16]
      head <= 6'h0; // @[Pipline.scala 44:12]
    end else if (IF_io_out_valid & ~full) begin // @[Pipline.scala 39:30]
      head <= _head_T_1; // @[Pipline.scala 40:12]
    end
    if (reset) begin // @[Pipline.scala 30:23]
      tail <= 6'h0; // @[Pipline.scala 30:23]
    end else if (_T_5) begin // @[Pipline.scala 43:16]
      tail <= 6'h0; // @[Pipline.scala 45:12]
    end else if (_T) begin // @[Pipline.scala 36:21]
      tail <= _tail_T_1; // @[Pipline.scala 37:12]
    end
    if (IF_io_out_valid & ~full) begin // @[Pipline.scala 39:30]
      if (5'h0 == head[4:0]) begin // @[Pipline.scala 41:25]
        buffer_0_PC <= _buffer_T_8_PC; // @[Pipline.scala 41:25]
      end
    end
    if (IF_io_out_valid & ~full) begin // @[Pipline.scala 39:30]
      if (5'h0 == head[4:0]) begin // @[Pipline.scala 41:25]
        buffer_0_Inst <= _buffer_T_8_Inst; // @[Pipline.scala 41:25]
      end
    end
    if (IF_io_out_valid & ~full) begin // @[Pipline.scala 39:30]
      if (5'h1 == head[4:0]) begin // @[Pipline.scala 41:25]
        buffer_1_PC <= _buffer_T_8_PC; // @[Pipline.scala 41:25]
      end
    end
    if (IF_io_out_valid & ~full) begin // @[Pipline.scala 39:30]
      if (5'h1 == head[4:0]) begin // @[Pipline.scala 41:25]
        buffer_1_Inst <= _buffer_T_8_Inst; // @[Pipline.scala 41:25]
      end
    end
    if (IF_io_out_valid & ~full) begin // @[Pipline.scala 39:30]
      if (5'h2 == head[4:0]) begin // @[Pipline.scala 41:25]
        buffer_2_PC <= _buffer_T_8_PC; // @[Pipline.scala 41:25]
      end
    end
    if (IF_io_out_valid & ~full) begin // @[Pipline.scala 39:30]
      if (5'h2 == head[4:0]) begin // @[Pipline.scala 41:25]
        buffer_2_Inst <= _buffer_T_8_Inst; // @[Pipline.scala 41:25]
      end
    end
    if (IF_io_out_valid & ~full) begin // @[Pipline.scala 39:30]
      if (5'h3 == head[4:0]) begin // @[Pipline.scala 41:25]
        buffer_3_PC <= _buffer_T_8_PC; // @[Pipline.scala 41:25]
      end
    end
    if (IF_io_out_valid & ~full) begin // @[Pipline.scala 39:30]
      if (5'h3 == head[4:0]) begin // @[Pipline.scala 41:25]
        buffer_3_Inst <= _buffer_T_8_Inst; // @[Pipline.scala 41:25]
      end
    end
    if (IF_io_out_valid & ~full) begin // @[Pipline.scala 39:30]
      if (5'h4 == head[4:0]) begin // @[Pipline.scala 41:25]
        buffer_4_PC <= _buffer_T_8_PC; // @[Pipline.scala 41:25]
      end
    end
    if (IF_io_out_valid & ~full) begin // @[Pipline.scala 39:30]
      if (5'h4 == head[4:0]) begin // @[Pipline.scala 41:25]
        buffer_4_Inst <= _buffer_T_8_Inst; // @[Pipline.scala 41:25]
      end
    end
    if (IF_io_out_valid & ~full) begin // @[Pipline.scala 39:30]
      if (5'h5 == head[4:0]) begin // @[Pipline.scala 41:25]
        buffer_5_PC <= _buffer_T_8_PC; // @[Pipline.scala 41:25]
      end
    end
    if (IF_io_out_valid & ~full) begin // @[Pipline.scala 39:30]
      if (5'h5 == head[4:0]) begin // @[Pipline.scala 41:25]
        buffer_5_Inst <= _buffer_T_8_Inst; // @[Pipline.scala 41:25]
      end
    end
    if (IF_io_out_valid & ~full) begin // @[Pipline.scala 39:30]
      if (5'h6 == head[4:0]) begin // @[Pipline.scala 41:25]
        buffer_6_PC <= _buffer_T_8_PC; // @[Pipline.scala 41:25]
      end
    end
    if (IF_io_out_valid & ~full) begin // @[Pipline.scala 39:30]
      if (5'h6 == head[4:0]) begin // @[Pipline.scala 41:25]
        buffer_6_Inst <= _buffer_T_8_Inst; // @[Pipline.scala 41:25]
      end
    end
    if (IF_io_out_valid & ~full) begin // @[Pipline.scala 39:30]
      if (5'h7 == head[4:0]) begin // @[Pipline.scala 41:25]
        buffer_7_PC <= _buffer_T_8_PC; // @[Pipline.scala 41:25]
      end
    end
    if (IF_io_out_valid & ~full) begin // @[Pipline.scala 39:30]
      if (5'h7 == head[4:0]) begin // @[Pipline.scala 41:25]
        buffer_7_Inst <= _buffer_T_8_Inst; // @[Pipline.scala 41:25]
      end
    end
    if (IF_io_out_valid & ~full) begin // @[Pipline.scala 39:30]
      if (5'h8 == head[4:0]) begin // @[Pipline.scala 41:25]
        buffer_8_PC <= _buffer_T_8_PC; // @[Pipline.scala 41:25]
      end
    end
    if (IF_io_out_valid & ~full) begin // @[Pipline.scala 39:30]
      if (5'h8 == head[4:0]) begin // @[Pipline.scala 41:25]
        buffer_8_Inst <= _buffer_T_8_Inst; // @[Pipline.scala 41:25]
      end
    end
    if (IF_io_out_valid & ~full) begin // @[Pipline.scala 39:30]
      if (5'h9 == head[4:0]) begin // @[Pipline.scala 41:25]
        buffer_9_PC <= _buffer_T_8_PC; // @[Pipline.scala 41:25]
      end
    end
    if (IF_io_out_valid & ~full) begin // @[Pipline.scala 39:30]
      if (5'h9 == head[4:0]) begin // @[Pipline.scala 41:25]
        buffer_9_Inst <= _buffer_T_8_Inst; // @[Pipline.scala 41:25]
      end
    end
    if (IF_io_out_valid & ~full) begin // @[Pipline.scala 39:30]
      if (5'ha == head[4:0]) begin // @[Pipline.scala 41:25]
        buffer_10_PC <= _buffer_T_8_PC; // @[Pipline.scala 41:25]
      end
    end
    if (IF_io_out_valid & ~full) begin // @[Pipline.scala 39:30]
      if (5'ha == head[4:0]) begin // @[Pipline.scala 41:25]
        buffer_10_Inst <= _buffer_T_8_Inst; // @[Pipline.scala 41:25]
      end
    end
    if (IF_io_out_valid & ~full) begin // @[Pipline.scala 39:30]
      if (5'hb == head[4:0]) begin // @[Pipline.scala 41:25]
        buffer_11_PC <= _buffer_T_8_PC; // @[Pipline.scala 41:25]
      end
    end
    if (IF_io_out_valid & ~full) begin // @[Pipline.scala 39:30]
      if (5'hb == head[4:0]) begin // @[Pipline.scala 41:25]
        buffer_11_Inst <= _buffer_T_8_Inst; // @[Pipline.scala 41:25]
      end
    end
    if (IF_io_out_valid & ~full) begin // @[Pipline.scala 39:30]
      if (5'hc == head[4:0]) begin // @[Pipline.scala 41:25]
        buffer_12_PC <= _buffer_T_8_PC; // @[Pipline.scala 41:25]
      end
    end
    if (IF_io_out_valid & ~full) begin // @[Pipline.scala 39:30]
      if (5'hc == head[4:0]) begin // @[Pipline.scala 41:25]
        buffer_12_Inst <= _buffer_T_8_Inst; // @[Pipline.scala 41:25]
      end
    end
    if (IF_io_out_valid & ~full) begin // @[Pipline.scala 39:30]
      if (5'hd == head[4:0]) begin // @[Pipline.scala 41:25]
        buffer_13_PC <= _buffer_T_8_PC; // @[Pipline.scala 41:25]
      end
    end
    if (IF_io_out_valid & ~full) begin // @[Pipline.scala 39:30]
      if (5'hd == head[4:0]) begin // @[Pipline.scala 41:25]
        buffer_13_Inst <= _buffer_T_8_Inst; // @[Pipline.scala 41:25]
      end
    end
    if (IF_io_out_valid & ~full) begin // @[Pipline.scala 39:30]
      if (5'he == head[4:0]) begin // @[Pipline.scala 41:25]
        buffer_14_PC <= _buffer_T_8_PC; // @[Pipline.scala 41:25]
      end
    end
    if (IF_io_out_valid & ~full) begin // @[Pipline.scala 39:30]
      if (5'he == head[4:0]) begin // @[Pipline.scala 41:25]
        buffer_14_Inst <= _buffer_T_8_Inst; // @[Pipline.scala 41:25]
      end
    end
    if (IF_io_out_valid & ~full) begin // @[Pipline.scala 39:30]
      if (5'hf == head[4:0]) begin // @[Pipline.scala 41:25]
        buffer_15_PC <= _buffer_T_8_PC; // @[Pipline.scala 41:25]
      end
    end
    if (IF_io_out_valid & ~full) begin // @[Pipline.scala 39:30]
      if (5'hf == head[4:0]) begin // @[Pipline.scala 41:25]
        buffer_15_Inst <= _buffer_T_8_Inst; // @[Pipline.scala 41:25]
      end
    end
    if (IF_io_out_valid & ~full) begin // @[Pipline.scala 39:30]
      if (5'h10 == head[4:0]) begin // @[Pipline.scala 41:25]
        buffer_16_PC <= _buffer_T_8_PC; // @[Pipline.scala 41:25]
      end
    end
    if (IF_io_out_valid & ~full) begin // @[Pipline.scala 39:30]
      if (5'h10 == head[4:0]) begin // @[Pipline.scala 41:25]
        buffer_16_Inst <= _buffer_T_8_Inst; // @[Pipline.scala 41:25]
      end
    end
    if (IF_io_out_valid & ~full) begin // @[Pipline.scala 39:30]
      if (5'h11 == head[4:0]) begin // @[Pipline.scala 41:25]
        buffer_17_PC <= _buffer_T_8_PC; // @[Pipline.scala 41:25]
      end
    end
    if (IF_io_out_valid & ~full) begin // @[Pipline.scala 39:30]
      if (5'h11 == head[4:0]) begin // @[Pipline.scala 41:25]
        buffer_17_Inst <= _buffer_T_8_Inst; // @[Pipline.scala 41:25]
      end
    end
    if (IF_io_out_valid & ~full) begin // @[Pipline.scala 39:30]
      if (5'h12 == head[4:0]) begin // @[Pipline.scala 41:25]
        buffer_18_PC <= _buffer_T_8_PC; // @[Pipline.scala 41:25]
      end
    end
    if (IF_io_out_valid & ~full) begin // @[Pipline.scala 39:30]
      if (5'h12 == head[4:0]) begin // @[Pipline.scala 41:25]
        buffer_18_Inst <= _buffer_T_8_Inst; // @[Pipline.scala 41:25]
      end
    end
    if (IF_io_out_valid & ~full) begin // @[Pipline.scala 39:30]
      if (5'h13 == head[4:0]) begin // @[Pipline.scala 41:25]
        buffer_19_PC <= _buffer_T_8_PC; // @[Pipline.scala 41:25]
      end
    end
    if (IF_io_out_valid & ~full) begin // @[Pipline.scala 39:30]
      if (5'h13 == head[4:0]) begin // @[Pipline.scala 41:25]
        buffer_19_Inst <= _buffer_T_8_Inst; // @[Pipline.scala 41:25]
      end
    end
    if (IF_io_out_valid & ~full) begin // @[Pipline.scala 39:30]
      if (5'h14 == head[4:0]) begin // @[Pipline.scala 41:25]
        buffer_20_PC <= _buffer_T_8_PC; // @[Pipline.scala 41:25]
      end
    end
    if (IF_io_out_valid & ~full) begin // @[Pipline.scala 39:30]
      if (5'h14 == head[4:0]) begin // @[Pipline.scala 41:25]
        buffer_20_Inst <= _buffer_T_8_Inst; // @[Pipline.scala 41:25]
      end
    end
    if (IF_io_out_valid & ~full) begin // @[Pipline.scala 39:30]
      if (5'h15 == head[4:0]) begin // @[Pipline.scala 41:25]
        buffer_21_PC <= _buffer_T_8_PC; // @[Pipline.scala 41:25]
      end
    end
    if (IF_io_out_valid & ~full) begin // @[Pipline.scala 39:30]
      if (5'h15 == head[4:0]) begin // @[Pipline.scala 41:25]
        buffer_21_Inst <= _buffer_T_8_Inst; // @[Pipline.scala 41:25]
      end
    end
    if (IF_io_out_valid & ~full) begin // @[Pipline.scala 39:30]
      if (5'h16 == head[4:0]) begin // @[Pipline.scala 41:25]
        buffer_22_PC <= _buffer_T_8_PC; // @[Pipline.scala 41:25]
      end
    end
    if (IF_io_out_valid & ~full) begin // @[Pipline.scala 39:30]
      if (5'h16 == head[4:0]) begin // @[Pipline.scala 41:25]
        buffer_22_Inst <= _buffer_T_8_Inst; // @[Pipline.scala 41:25]
      end
    end
    if (IF_io_out_valid & ~full) begin // @[Pipline.scala 39:30]
      if (5'h17 == head[4:0]) begin // @[Pipline.scala 41:25]
        buffer_23_PC <= _buffer_T_8_PC; // @[Pipline.scala 41:25]
      end
    end
    if (IF_io_out_valid & ~full) begin // @[Pipline.scala 39:30]
      if (5'h17 == head[4:0]) begin // @[Pipline.scala 41:25]
        buffer_23_Inst <= _buffer_T_8_Inst; // @[Pipline.scala 41:25]
      end
    end
    if (IF_io_out_valid & ~full) begin // @[Pipline.scala 39:30]
      if (5'h18 == head[4:0]) begin // @[Pipline.scala 41:25]
        buffer_24_PC <= _buffer_T_8_PC; // @[Pipline.scala 41:25]
      end
    end
    if (IF_io_out_valid & ~full) begin // @[Pipline.scala 39:30]
      if (5'h18 == head[4:0]) begin // @[Pipline.scala 41:25]
        buffer_24_Inst <= _buffer_T_8_Inst; // @[Pipline.scala 41:25]
      end
    end
    if (IF_io_out_valid & ~full) begin // @[Pipline.scala 39:30]
      if (5'h19 == head[4:0]) begin // @[Pipline.scala 41:25]
        buffer_25_PC <= _buffer_T_8_PC; // @[Pipline.scala 41:25]
      end
    end
    if (IF_io_out_valid & ~full) begin // @[Pipline.scala 39:30]
      if (5'h19 == head[4:0]) begin // @[Pipline.scala 41:25]
        buffer_25_Inst <= _buffer_T_8_Inst; // @[Pipline.scala 41:25]
      end
    end
    if (IF_io_out_valid & ~full) begin // @[Pipline.scala 39:30]
      if (5'h1a == head[4:0]) begin // @[Pipline.scala 41:25]
        buffer_26_PC <= _buffer_T_8_PC; // @[Pipline.scala 41:25]
      end
    end
    if (IF_io_out_valid & ~full) begin // @[Pipline.scala 39:30]
      if (5'h1a == head[4:0]) begin // @[Pipline.scala 41:25]
        buffer_26_Inst <= _buffer_T_8_Inst; // @[Pipline.scala 41:25]
      end
    end
    if (IF_io_out_valid & ~full) begin // @[Pipline.scala 39:30]
      if (5'h1b == head[4:0]) begin // @[Pipline.scala 41:25]
        buffer_27_PC <= _buffer_T_8_PC; // @[Pipline.scala 41:25]
      end
    end
    if (IF_io_out_valid & ~full) begin // @[Pipline.scala 39:30]
      if (5'h1b == head[4:0]) begin // @[Pipline.scala 41:25]
        buffer_27_Inst <= _buffer_T_8_Inst; // @[Pipline.scala 41:25]
      end
    end
    if (IF_io_out_valid & ~full) begin // @[Pipline.scala 39:30]
      if (5'h1c == head[4:0]) begin // @[Pipline.scala 41:25]
        buffer_28_PC <= _buffer_T_8_PC; // @[Pipline.scala 41:25]
      end
    end
    if (IF_io_out_valid & ~full) begin // @[Pipline.scala 39:30]
      if (5'h1c == head[4:0]) begin // @[Pipline.scala 41:25]
        buffer_28_Inst <= _buffer_T_8_Inst; // @[Pipline.scala 41:25]
      end
    end
    if (IF_io_out_valid & ~full) begin // @[Pipline.scala 39:30]
      if (5'h1d == head[4:0]) begin // @[Pipline.scala 41:25]
        buffer_29_PC <= _buffer_T_8_PC; // @[Pipline.scala 41:25]
      end
    end
    if (IF_io_out_valid & ~full) begin // @[Pipline.scala 39:30]
      if (5'h1d == head[4:0]) begin // @[Pipline.scala 41:25]
        buffer_29_Inst <= _buffer_T_8_Inst; // @[Pipline.scala 41:25]
      end
    end
    if (IF_io_out_valid & ~full) begin // @[Pipline.scala 39:30]
      if (5'h1e == head[4:0]) begin // @[Pipline.scala 41:25]
        buffer_30_PC <= _buffer_T_8_PC; // @[Pipline.scala 41:25]
      end
    end
    if (IF_io_out_valid & ~full) begin // @[Pipline.scala 39:30]
      if (5'h1e == head[4:0]) begin // @[Pipline.scala 41:25]
        buffer_30_Inst <= _buffer_T_8_Inst; // @[Pipline.scala 41:25]
      end
    end
    if (IF_io_out_valid & ~full) begin // @[Pipline.scala 39:30]
      if (5'h1f == head[4:0]) begin // @[Pipline.scala 41:25]
        buffer_31_PC <= _buffer_T_8_PC; // @[Pipline.scala 41:25]
      end
    end
    if (IF_io_out_valid & ~full) begin // @[Pipline.scala 39:30]
      if (5'h1f == head[4:0]) begin // @[Pipline.scala 41:25]
        buffer_31_Inst <= _buffer_T_8_Inst; // @[Pipline.scala 41:25]
      end
    end
    if (reset) begin // @[Pipline.scala 8:24]
      valid <= 1'h0; // @[Pipline.scala 8:24]
    end else if (_T_3) begin // @[Pipline.scala 16:25]
      valid <= 1'h0; // @[Pipline.scala 17:13]
    end else begin
      valid <= _GEN_197;
    end
    if (_T_13) begin // @[Reg.scala 20:18]
      EX_io_in_bits_r_ctrl_signal_src1Type <= ID_io_out_bits_ctrl_signal_src1Type; // @[Reg.scala 20:22]
    end
    if (_T_13) begin // @[Reg.scala 20:18]
      EX_io_in_bits_r_ctrl_signal_src2Type <= ID_io_out_bits_ctrl_signal_src2Type; // @[Reg.scala 20:22]
    end
    if (_T_13) begin // @[Reg.scala 20:18]
      EX_io_in_bits_r_ctrl_signal_fuType <= ID_io_out_bits_ctrl_signal_fuType; // @[Reg.scala 20:22]
    end
    if (_T_13) begin // @[Reg.scala 20:18]
      EX_io_in_bits_r_ctrl_signal_inst_valid <= ID_io_out_bits_ctrl_signal_inst_valid; // @[Reg.scala 20:22]
    end
    if (_T_13) begin // @[Reg.scala 20:18]
      EX_io_in_bits_r_ctrl_signal_rfWen <= ID_io_out_bits_ctrl_signal_rfWen; // @[Reg.scala 20:22]
    end
    if (_T_13) begin // @[Reg.scala 20:18]
      EX_io_in_bits_r_ctrl_signal_aluoptype <= ID_io_out_bits_ctrl_signal_aluoptype; // @[Reg.scala 20:22]
    end
    if (_T_13) begin // @[Reg.scala 20:18]
      EX_io_in_bits_r_ctrl_signal_rfDest <= ID_io_out_bits_ctrl_signal_rfDest; // @[Reg.scala 20:22]
    end
    if (_T_13) begin // @[Reg.scala 20:18]
      EX_io_in_bits_r_ctrl_signal_ertn_flush <= ID_io_out_bits_ctrl_signal_ertn_flush; // @[Reg.scala 20:22]
    end
    if (_T_13) begin // @[Reg.scala 20:18]
      EX_io_in_bits_r_ctrl_signal_excp_flush <= ID_io_out_bits_ctrl_signal_excp_flush; // @[Reg.scala 20:22]
    end
    if (_T_13) begin // @[Reg.scala 20:18]
      EX_io_in_bits_r_ctrl_data_src1 <= ID_io_out_bits_ctrl_data_src1; // @[Reg.scala 20:22]
    end
    if (_T_13) begin // @[Reg.scala 20:18]
      EX_io_in_bits_r_ctrl_data_src2 <= ID_io_out_bits_ctrl_data_src2; // @[Reg.scala 20:22]
    end
    if (_T_13) begin // @[Reg.scala 20:18]
      EX_io_in_bits_r_ctrl_data_Imm <= ID_io_out_bits_ctrl_data_Imm; // @[Reg.scala 20:22]
    end
    if (_T_13) begin // @[Reg.scala 20:18]
      EX_io_in_bits_r_ctrl_flow_PC <= ID_io_out_bits_ctrl_flow_PC; // @[Reg.scala 20:22]
    end
    if (_T_13) begin // @[Reg.scala 20:18]
      EX_io_in_bits_r_ctrl_flow_inst <= ID_io_out_bits_ctrl_flow_inst; // @[Reg.scala 20:22]
    end
    if (_T_13) begin // @[Reg.scala 20:18]
      EX_io_in_bits_r_ctrl_csr_csr_idx <= ID_io_out_bits_ctrl_csr_csr_idx; // @[Reg.scala 20:22]
    end
    if (reset) begin // @[Pipline.scala 8:24]
      valid_1 <= 1'h0; // @[Pipline.scala 8:24]
    end else if (_T_17) begin // @[Pipline.scala 16:25]
      valid_1 <= 1'h0; // @[Pipline.scala 17:13]
    end else begin
      valid_1 <= _GEN_221;
    end
    if (_T_18) begin // @[Reg.scala 20:18]
      MEM_io_in_bits_r_ctrl_signal_fuType <= EX_io_out_bits_ctrl_signal_fuType; // @[Reg.scala 20:22]
    end
    if (_T_18) begin // @[Reg.scala 20:18]
      MEM_io_in_bits_r_ctrl_signal_inst_valid <= EX_io_out_bits_ctrl_signal_inst_valid; // @[Reg.scala 20:22]
    end
    if (_T_18) begin // @[Reg.scala 20:18]
      MEM_io_in_bits_r_ctrl_signal_rfWen <= EX_io_out_bits_ctrl_signal_rfWen; // @[Reg.scala 20:22]
    end
    if (_T_18) begin // @[Reg.scala 20:18]
      MEM_io_in_bits_r_ctrl_signal_aluoptype <= EX_io_out_bits_ctrl_signal_aluoptype; // @[Reg.scala 20:22]
    end
    if (_T_18) begin // @[Reg.scala 20:18]
      MEM_io_in_bits_r_ctrl_signal_ertn_flush <= EX_io_out_bits_ctrl_signal_ertn_flush; // @[Reg.scala 20:22]
    end
    if (_T_18) begin // @[Reg.scala 20:18]
      MEM_io_in_bits_r_ctrl_signal_excp_flush <= EX_io_out_bits_ctrl_signal_excp_flush; // @[Reg.scala 20:22]
    end
    if (_T_18) begin // @[Reg.scala 20:18]
      MEM_io_in_bits_r_ctrl_flow_PC <= EX_io_out_bits_ctrl_flow_PC; // @[Reg.scala 20:22]
    end
    if (_T_18) begin // @[Reg.scala 20:18]
      MEM_io_in_bits_r_ctrl_flow_inst <= EX_io_out_bits_ctrl_flow_inst; // @[Reg.scala 20:22]
    end
    if (_T_18) begin // @[Reg.scala 20:18]
      MEM_io_in_bits_r_ctrl_flow_Dnpc <= EX_io_out_bits_ctrl_flow_Dnpc; // @[Reg.scala 20:22]
    end
    if (_T_18) begin // @[Reg.scala 20:18]
      MEM_io_in_bits_r_ctrl_rf_rfDest <= EX_io_out_bits_ctrl_rf_rfDest; // @[Reg.scala 20:22]
    end
    if (_T_18) begin // @[Reg.scala 20:18]
      MEM_io_in_bits_r_ctrl_rf_rfData <= EX_io_out_bits_ctrl_rf_rfData; // @[Reg.scala 20:22]
    end
    if (_T_18) begin // @[Reg.scala 20:18]
      MEM_io_in_bits_r_ctrl_data_src1 <= EX_io_out_bits_ctrl_data_src1; // @[Reg.scala 20:22]
    end
    if (_T_18) begin // @[Reg.scala 20:18]
      MEM_io_in_bits_r_ctrl_data_src2 <= EX_io_out_bits_ctrl_data_src2; // @[Reg.scala 20:22]
    end
    if (_T_18) begin // @[Reg.scala 20:18]
      MEM_io_in_bits_r_ctrl_data_Imm <= EX_io_out_bits_ctrl_data_Imm; // @[Reg.scala 20:22]
    end
    if (_T_18) begin // @[Reg.scala 20:18]
      MEM_io_in_bits_r_ctrl_csr_csr_data <= EX_io_out_bits_ctrl_csr_csr_data; // @[Reg.scala 20:22]
    end
    if (_T_18) begin // @[Reg.scala 20:18]
      MEM_io_in_bits_r_ctrl_csr_csr_en <= EX_io_out_bits_ctrl_csr_csr_en; // @[Reg.scala 20:22]
    end
    if (_T_18) begin // @[Reg.scala 20:18]
      MEM_io_in_bits_r_ctrl_csr_csr_idx <= EX_io_out_bits_ctrl_csr_csr_idx; // @[Reg.scala 20:22]
    end
    if (reset) begin // @[Pipline.scala 8:24]
      valid_2 <= 1'h0; // @[Pipline.scala 8:24]
    end else if (_T_16) begin // @[Pipline.scala 16:25]
      valid_2 <= 1'h0; // @[Pipline.scala 17:13]
    end else begin
      valid_2 <= _GEN_248;
    end
    if (_T_22) begin // @[Reg.scala 20:18]
      WB_io_in_bits_r_ctrl_signal_inst_valid <= MEM_io_out_bits_ctrl_signal_inst_valid; // @[Reg.scala 20:22]
    end
    if (_T_22) begin // @[Reg.scala 20:18]
      WB_io_in_bits_r_ctrl_signal_rfWen <= MEM_io_out_bits_ctrl_signal_rfWen; // @[Reg.scala 20:22]
    end
    if (_T_22) begin // @[Reg.scala 20:18]
      WB_io_in_bits_r_ctrl_signal_ertn_flush <= MEM_io_out_bits_ctrl_signal_ertn_flush; // @[Reg.scala 20:22]
    end
    if (_T_22) begin // @[Reg.scala 20:18]
      WB_io_in_bits_r_ctrl_signal_excp_flush <= MEM_io_out_bits_ctrl_signal_excp_flush; // @[Reg.scala 20:22]
    end
    if (_T_22) begin // @[Reg.scala 20:18]
      WB_io_in_bits_r_ctrl_flow_PC <= MEM_io_out_bits_ctrl_flow_PC; // @[Reg.scala 20:22]
    end
    if (_T_22) begin // @[Reg.scala 20:18]
      WB_io_in_bits_r_ctrl_flow_inst <= MEM_io_out_bits_ctrl_flow_inst; // @[Reg.scala 20:22]
    end
    if (_T_22) begin // @[Reg.scala 20:18]
      WB_io_in_bits_r_ctrl_flow_Dnpc <= MEM_io_out_bits_ctrl_flow_Dnpc; // @[Reg.scala 20:22]
    end
    if (_T_22) begin // @[Reg.scala 20:18]
      WB_io_in_bits_r_ctrl_flow_skip <= MEM_io_out_bits_ctrl_flow_skip; // @[Reg.scala 20:22]
    end
    if (_T_22) begin // @[Reg.scala 20:18]
      WB_io_in_bits_r_ctrl_rf_rfDest <= MEM_io_out_bits_ctrl_rf_rfDest; // @[Reg.scala 20:22]
    end
    if (_T_22) begin // @[Reg.scala 20:18]
      WB_io_in_bits_r_ctrl_rf_rfData <= MEM_io_out_bits_ctrl_rf_rfData; // @[Reg.scala 20:22]
    end
    if (_T_22) begin // @[Reg.scala 20:18]
      WB_io_in_bits_r_ctrl_csr_csr_data <= MEM_io_out_bits_ctrl_csr_csr_data; // @[Reg.scala 20:22]
    end
    if (_T_22) begin // @[Reg.scala 20:18]
      WB_io_in_bits_r_ctrl_csr_csr_en <= MEM_io_out_bits_ctrl_csr_csr_en; // @[Reg.scala 20:22]
    end
    if (_T_22) begin // @[Reg.scala 20:18]
      WB_io_in_bits_r_ctrl_csr_csr_idx <= MEM_io_out_bits_ctrl_csr_csr_idx; // @[Reg.scala 20:22]
    end
    DIP_io_is_break_REG <= EX_io_is_break; // @[CoreTop.scala 291:37]
    DIP_io_is_break_REG_1 <= DIP_io_is_break_REG; // @[CoreTop.scala 291:29]
    DIP_io_inst_REG <= WB_io_out_bits_ctrl_flow_inst; // @[CoreTop.scala 295:25]
    DIP_io_is_skip_REG <= WB_io_out_bits_ctrl_flow_skip; // @[CoreTop.scala 296:28]
    DIP_io_inst_valid_REG <= WB_io_out_valid & WB_io_out_bits_ctrl_signal_inst_valid; // @[CoreTop.scala 297:35]
    DIP_io_pc_REG <= WB_io_out_bits_ctrl_flow_PC; // @[CoreTop.scala 298:23]
    if (WB_io_out_bits_ctrl_signal_excp_flush) begin // @[CoreTop.scala 299:29]
      DIP_io_dnpc_REG <= CSR_io_mtvec_o;
    end else if (WB_io_out_bits_ctrl_signal_ertn_flush) begin // @[CoreTop.scala 299:86]
      DIP_io_dnpc_REG <= CSR_io_mepc_o;
    end else begin
      DIP_io_dnpc_REG <= WB_io_out_bits_ctrl_flow_Dnpc;
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
`ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  head = _RAND_1[5:0];
  _RAND_2 = {1{`RANDOM}};
  tail = _RAND_2[5:0];
  _RAND_3 = {2{`RANDOM}};
  buffer_0_PC = _RAND_3[63:0];
  _RAND_4 = {1{`RANDOM}};
  buffer_0_Inst = _RAND_4[31:0];
  _RAND_5 = {2{`RANDOM}};
  buffer_1_PC = _RAND_5[63:0];
  _RAND_6 = {1{`RANDOM}};
  buffer_1_Inst = _RAND_6[31:0];
  _RAND_7 = {2{`RANDOM}};
  buffer_2_PC = _RAND_7[63:0];
  _RAND_8 = {1{`RANDOM}};
  buffer_2_Inst = _RAND_8[31:0];
  _RAND_9 = {2{`RANDOM}};
  buffer_3_PC = _RAND_9[63:0];
  _RAND_10 = {1{`RANDOM}};
  buffer_3_Inst = _RAND_10[31:0];
  _RAND_11 = {2{`RANDOM}};
  buffer_4_PC = _RAND_11[63:0];
  _RAND_12 = {1{`RANDOM}};
  buffer_4_Inst = _RAND_12[31:0];
  _RAND_13 = {2{`RANDOM}};
  buffer_5_PC = _RAND_13[63:0];
  _RAND_14 = {1{`RANDOM}};
  buffer_5_Inst = _RAND_14[31:0];
  _RAND_15 = {2{`RANDOM}};
  buffer_6_PC = _RAND_15[63:0];
  _RAND_16 = {1{`RANDOM}};
  buffer_6_Inst = _RAND_16[31:0];
  _RAND_17 = {2{`RANDOM}};
  buffer_7_PC = _RAND_17[63:0];
  _RAND_18 = {1{`RANDOM}};
  buffer_7_Inst = _RAND_18[31:0];
  _RAND_19 = {2{`RANDOM}};
  buffer_8_PC = _RAND_19[63:0];
  _RAND_20 = {1{`RANDOM}};
  buffer_8_Inst = _RAND_20[31:0];
  _RAND_21 = {2{`RANDOM}};
  buffer_9_PC = _RAND_21[63:0];
  _RAND_22 = {1{`RANDOM}};
  buffer_9_Inst = _RAND_22[31:0];
  _RAND_23 = {2{`RANDOM}};
  buffer_10_PC = _RAND_23[63:0];
  _RAND_24 = {1{`RANDOM}};
  buffer_10_Inst = _RAND_24[31:0];
  _RAND_25 = {2{`RANDOM}};
  buffer_11_PC = _RAND_25[63:0];
  _RAND_26 = {1{`RANDOM}};
  buffer_11_Inst = _RAND_26[31:0];
  _RAND_27 = {2{`RANDOM}};
  buffer_12_PC = _RAND_27[63:0];
  _RAND_28 = {1{`RANDOM}};
  buffer_12_Inst = _RAND_28[31:0];
  _RAND_29 = {2{`RANDOM}};
  buffer_13_PC = _RAND_29[63:0];
  _RAND_30 = {1{`RANDOM}};
  buffer_13_Inst = _RAND_30[31:0];
  _RAND_31 = {2{`RANDOM}};
  buffer_14_PC = _RAND_31[63:0];
  _RAND_32 = {1{`RANDOM}};
  buffer_14_Inst = _RAND_32[31:0];
  _RAND_33 = {2{`RANDOM}};
  buffer_15_PC = _RAND_33[63:0];
  _RAND_34 = {1{`RANDOM}};
  buffer_15_Inst = _RAND_34[31:0];
  _RAND_35 = {2{`RANDOM}};
  buffer_16_PC = _RAND_35[63:0];
  _RAND_36 = {1{`RANDOM}};
  buffer_16_Inst = _RAND_36[31:0];
  _RAND_37 = {2{`RANDOM}};
  buffer_17_PC = _RAND_37[63:0];
  _RAND_38 = {1{`RANDOM}};
  buffer_17_Inst = _RAND_38[31:0];
  _RAND_39 = {2{`RANDOM}};
  buffer_18_PC = _RAND_39[63:0];
  _RAND_40 = {1{`RANDOM}};
  buffer_18_Inst = _RAND_40[31:0];
  _RAND_41 = {2{`RANDOM}};
  buffer_19_PC = _RAND_41[63:0];
  _RAND_42 = {1{`RANDOM}};
  buffer_19_Inst = _RAND_42[31:0];
  _RAND_43 = {2{`RANDOM}};
  buffer_20_PC = _RAND_43[63:0];
  _RAND_44 = {1{`RANDOM}};
  buffer_20_Inst = _RAND_44[31:0];
  _RAND_45 = {2{`RANDOM}};
  buffer_21_PC = _RAND_45[63:0];
  _RAND_46 = {1{`RANDOM}};
  buffer_21_Inst = _RAND_46[31:0];
  _RAND_47 = {2{`RANDOM}};
  buffer_22_PC = _RAND_47[63:0];
  _RAND_48 = {1{`RANDOM}};
  buffer_22_Inst = _RAND_48[31:0];
  _RAND_49 = {2{`RANDOM}};
  buffer_23_PC = _RAND_49[63:0];
  _RAND_50 = {1{`RANDOM}};
  buffer_23_Inst = _RAND_50[31:0];
  _RAND_51 = {2{`RANDOM}};
  buffer_24_PC = _RAND_51[63:0];
  _RAND_52 = {1{`RANDOM}};
  buffer_24_Inst = _RAND_52[31:0];
  _RAND_53 = {2{`RANDOM}};
  buffer_25_PC = _RAND_53[63:0];
  _RAND_54 = {1{`RANDOM}};
  buffer_25_Inst = _RAND_54[31:0];
  _RAND_55 = {2{`RANDOM}};
  buffer_26_PC = _RAND_55[63:0];
  _RAND_56 = {1{`RANDOM}};
  buffer_26_Inst = _RAND_56[31:0];
  _RAND_57 = {2{`RANDOM}};
  buffer_27_PC = _RAND_57[63:0];
  _RAND_58 = {1{`RANDOM}};
  buffer_27_Inst = _RAND_58[31:0];
  _RAND_59 = {2{`RANDOM}};
  buffer_28_PC = _RAND_59[63:0];
  _RAND_60 = {1{`RANDOM}};
  buffer_28_Inst = _RAND_60[31:0];
  _RAND_61 = {2{`RANDOM}};
  buffer_29_PC = _RAND_61[63:0];
  _RAND_62 = {1{`RANDOM}};
  buffer_29_Inst = _RAND_62[31:0];
  _RAND_63 = {2{`RANDOM}};
  buffer_30_PC = _RAND_63[63:0];
  _RAND_64 = {1{`RANDOM}};
  buffer_30_Inst = _RAND_64[31:0];
  _RAND_65 = {2{`RANDOM}};
  buffer_31_PC = _RAND_65[63:0];
  _RAND_66 = {1{`RANDOM}};
  buffer_31_Inst = _RAND_66[31:0];
  _RAND_67 = {1{`RANDOM}};
  valid = _RAND_67[0:0];
  _RAND_68 = {1{`RANDOM}};
  EX_io_in_bits_r_ctrl_signal_src1Type = _RAND_68[2:0];
  _RAND_69 = {1{`RANDOM}};
  EX_io_in_bits_r_ctrl_signal_src2Type = _RAND_69[2:0];
  _RAND_70 = {1{`RANDOM}};
  EX_io_in_bits_r_ctrl_signal_fuType = _RAND_70[2:0];
  _RAND_71 = {1{`RANDOM}};
  EX_io_in_bits_r_ctrl_signal_inst_valid = _RAND_71[0:0];
  _RAND_72 = {1{`RANDOM}};
  EX_io_in_bits_r_ctrl_signal_rfWen = _RAND_72[0:0];
  _RAND_73 = {1{`RANDOM}};
  EX_io_in_bits_r_ctrl_signal_aluoptype = _RAND_73[6:0];
  _RAND_74 = {1{`RANDOM}};
  EX_io_in_bits_r_ctrl_signal_rfDest = _RAND_74[4:0];
  _RAND_75 = {1{`RANDOM}};
  EX_io_in_bits_r_ctrl_signal_ertn_flush = _RAND_75[0:0];
  _RAND_76 = {1{`RANDOM}};
  EX_io_in_bits_r_ctrl_signal_excp_flush = _RAND_76[0:0];
  _RAND_77 = {2{`RANDOM}};
  EX_io_in_bits_r_ctrl_data_src1 = _RAND_77[63:0];
  _RAND_78 = {2{`RANDOM}};
  EX_io_in_bits_r_ctrl_data_src2 = _RAND_78[63:0];
  _RAND_79 = {2{`RANDOM}};
  EX_io_in_bits_r_ctrl_data_Imm = _RAND_79[63:0];
  _RAND_80 = {2{`RANDOM}};
  EX_io_in_bits_r_ctrl_flow_PC = _RAND_80[63:0];
  _RAND_81 = {1{`RANDOM}};
  EX_io_in_bits_r_ctrl_flow_inst = _RAND_81[31:0];
  _RAND_82 = {1{`RANDOM}};
  EX_io_in_bits_r_ctrl_csr_csr_idx = _RAND_82[11:0];
  _RAND_83 = {1{`RANDOM}};
  valid_1 = _RAND_83[0:0];
  _RAND_84 = {1{`RANDOM}};
  MEM_io_in_bits_r_ctrl_signal_fuType = _RAND_84[2:0];
  _RAND_85 = {1{`RANDOM}};
  MEM_io_in_bits_r_ctrl_signal_inst_valid = _RAND_85[0:0];
  _RAND_86 = {1{`RANDOM}};
  MEM_io_in_bits_r_ctrl_signal_rfWen = _RAND_86[0:0];
  _RAND_87 = {1{`RANDOM}};
  MEM_io_in_bits_r_ctrl_signal_aluoptype = _RAND_87[6:0];
  _RAND_88 = {1{`RANDOM}};
  MEM_io_in_bits_r_ctrl_signal_ertn_flush = _RAND_88[0:0];
  _RAND_89 = {1{`RANDOM}};
  MEM_io_in_bits_r_ctrl_signal_excp_flush = _RAND_89[0:0];
  _RAND_90 = {2{`RANDOM}};
  MEM_io_in_bits_r_ctrl_flow_PC = _RAND_90[63:0];
  _RAND_91 = {1{`RANDOM}};
  MEM_io_in_bits_r_ctrl_flow_inst = _RAND_91[31:0];
  _RAND_92 = {2{`RANDOM}};
  MEM_io_in_bits_r_ctrl_flow_Dnpc = _RAND_92[63:0];
  _RAND_93 = {1{`RANDOM}};
  MEM_io_in_bits_r_ctrl_rf_rfDest = _RAND_93[4:0];
  _RAND_94 = {2{`RANDOM}};
  MEM_io_in_bits_r_ctrl_rf_rfData = _RAND_94[63:0];
  _RAND_95 = {2{`RANDOM}};
  MEM_io_in_bits_r_ctrl_data_src1 = _RAND_95[63:0];
  _RAND_96 = {2{`RANDOM}};
  MEM_io_in_bits_r_ctrl_data_src2 = _RAND_96[63:0];
  _RAND_97 = {2{`RANDOM}};
  MEM_io_in_bits_r_ctrl_data_Imm = _RAND_97[63:0];
  _RAND_98 = {2{`RANDOM}};
  MEM_io_in_bits_r_ctrl_csr_csr_data = _RAND_98[63:0];
  _RAND_99 = {1{`RANDOM}};
  MEM_io_in_bits_r_ctrl_csr_csr_en = _RAND_99[0:0];
  _RAND_100 = {1{`RANDOM}};
  MEM_io_in_bits_r_ctrl_csr_csr_idx = _RAND_100[11:0];
  _RAND_101 = {1{`RANDOM}};
  valid_2 = _RAND_101[0:0];
  _RAND_102 = {1{`RANDOM}};
  WB_io_in_bits_r_ctrl_signal_inst_valid = _RAND_102[0:0];
  _RAND_103 = {1{`RANDOM}};
  WB_io_in_bits_r_ctrl_signal_rfWen = _RAND_103[0:0];
  _RAND_104 = {1{`RANDOM}};
  WB_io_in_bits_r_ctrl_signal_ertn_flush = _RAND_104[0:0];
  _RAND_105 = {1{`RANDOM}};
  WB_io_in_bits_r_ctrl_signal_excp_flush = _RAND_105[0:0];
  _RAND_106 = {2{`RANDOM}};
  WB_io_in_bits_r_ctrl_flow_PC = _RAND_106[63:0];
  _RAND_107 = {1{`RANDOM}};
  WB_io_in_bits_r_ctrl_flow_inst = _RAND_107[31:0];
  _RAND_108 = {2{`RANDOM}};
  WB_io_in_bits_r_ctrl_flow_Dnpc = _RAND_108[63:0];
  _RAND_109 = {1{`RANDOM}};
  WB_io_in_bits_r_ctrl_flow_skip = _RAND_109[0:0];
  _RAND_110 = {1{`RANDOM}};
  WB_io_in_bits_r_ctrl_rf_rfDest = _RAND_110[4:0];
  _RAND_111 = {2{`RANDOM}};
  WB_io_in_bits_r_ctrl_rf_rfData = _RAND_111[63:0];
  _RAND_112 = {2{`RANDOM}};
  WB_io_in_bits_r_ctrl_csr_csr_data = _RAND_112[63:0];
  _RAND_113 = {1{`RANDOM}};
  WB_io_in_bits_r_ctrl_csr_csr_en = _RAND_113[0:0];
  _RAND_114 = {1{`RANDOM}};
  WB_io_in_bits_r_ctrl_csr_csr_idx = _RAND_114[11:0];
  _RAND_115 = {1{`RANDOM}};
  DIP_io_is_break_REG = _RAND_115[0:0];
  _RAND_116 = {1{`RANDOM}};
  DIP_io_is_break_REG_1 = _RAND_116[0:0];
  _RAND_117 = {1{`RANDOM}};
  DIP_io_inst_REG = _RAND_117[31:0];
  _RAND_118 = {1{`RANDOM}};
  DIP_io_is_skip_REG = _RAND_118[0:0];
  _RAND_119 = {1{`RANDOM}};
  DIP_io_inst_valid_REG = _RAND_119[0:0];
  _RAND_120 = {2{`RANDOM}};
  DIP_io_pc_REG = _RAND_120[63:0];
  _RAND_121 = {2{`RANDOM}};
  DIP_io_dnpc_REG = _RAND_121[63:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
