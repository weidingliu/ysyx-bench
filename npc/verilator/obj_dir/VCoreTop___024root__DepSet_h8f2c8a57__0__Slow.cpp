// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCoreTop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VCoreTop___024root.h"

VL_ATTR_COLD void VCoreTop___024root___initial__TOP__0(VCoreTop___024root* vlSelf);

VL_ATTR_COLD void VCoreTop___024root___eval_initial(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
    VCoreTop___024root___initial__TOP__0(vlSelf);
}

VL_ATTR_COLD void VCoreTop___024root___settle__TOP__0(VCoreTop___024root* vlSelf);

VL_ATTR_COLD void VCoreTop___024root___eval_settle(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___eval_settle\n"); );
    // Body
    VCoreTop___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void VCoreTop___024root___final(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___final\n"); );
}

VL_ATTR_COLD void VCoreTop___024root___ctor_var_reset(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_pc = VL_RAND_RESET_Q(64);
    vlSelf->io_inst = VL_RAND_RESET_I(32);
    vlSelf->CoreTop__DOT__EX_io_in_ready = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__EX_io_branchIO_is_jump = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__EX_io_out_valid = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfWen = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfData = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX_io_is_flush = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->CoreTop__DOT__rf[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->CoreTop__DOT__MEM_io_out_valid = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_signal_inst_valid = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfWen = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfData = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_valid = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_we = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wdata = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wmask = VL_RAND_RESET_I(8);
    vlSelf->CoreTop__DOT__WB_io_out_bits_ctrl_rf_rfWen = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__mem_bypass_io_Bypass_REG1 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__mem_bypass_io_Bypass_REG2 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__ICACHE_io_in_rdata_rep_valid = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__If_axi_birdge_io_in_rdata_rep_valid = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__If_axi_birdge_io_out_raddr_req_valid = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__If_axi_birdge_io_out_wb_ready = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MEM_axi_birdge_io_in_rdata_rep_valid = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MEM_axi_birdge_io_out_raddr_req_valid = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MEM_axi_birdge_io_out_waddr_req_valid = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MEM_axi_birdge_io_out_wb_ready = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MMEM_r_valid = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MMEM_rdata = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__MMEM_bvalid = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__ARBITER_io_in1_rdata_rep_valid = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__ARBITER_io_in1_wb_valid = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__ARBITER_io_in2_rdata_rep_valid = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__ARBITER_io_out_raddr_req_valid = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__ARBITER_io_out_waddr_req_valid = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MMIO_io_in_rdata_rep_valid = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MMIO_io_in_rdata_rep_bits_rdata = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__MMIO_io_in_wdata_rep = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MMIO_io_out_addr_req_valid = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MMIO_io_out_addr_req_bits_addr = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__MMIO_io_out_addr_req_bits_ce = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MMIO_io_out_addr_req_bits_we = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MMIO_io_out_wdata_req_bits_wdata = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__MMIO_io_out_wdata_req_bits_wmask = VL_RAND_RESET_I(8);
    vlSelf->CoreTop__DOT__valid = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT___T_1 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__ID_io_in_bits_r_PC = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst = VL_RAND_RESET_I(32);
    vlSelf->CoreTop__DOT__valid_1 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT___T_4 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT___GEN_6 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src1Type = VL_RAND_RESET_I(3);
    vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src2Type = VL_RAND_RESET_I(3);
    vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType = VL_RAND_RESET_I(3);
    vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_inst_valid = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfSrc1 = VL_RAND_RESET_I(5);
    vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfSrc2 = VL_RAND_RESET_I(5);
    vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfWen = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype = VL_RAND_RESET_I(7);
    vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest = VL_RAND_RESET_I(5);
    vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_src1 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_src2 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_inst = VL_RAND_RESET_I(32);
    vlSelf->CoreTop__DOT__valid_2 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT___T_7 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT___GEN_25 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_fuType = VL_RAND_RESET_I(3);
    vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_inst_valid = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_rfWen = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype = VL_RAND_RESET_I(7);
    vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_PC = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_inst = VL_RAND_RESET_I(32);
    vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_Dnpc = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest = VL_RAND_RESET_I(5);
    vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfData = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src1 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_Imm = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__valid_3 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT___GEN_47 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_inst_valid = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_rfWen = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_PC = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_inst = VL_RAND_RESET_I(32);
    vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_Dnpc = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_skip = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest = VL_RAND_RESET_I(5);
    vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfData = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__DIP_io_is_break_REG = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__DIP_io_is_break_REG_1 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__DIP_io_inst_REG = VL_RAND_RESET_I(32);
    vlSelf->CoreTop__DOT__DIP_io_is_skip_REG = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__DIP_io_inst_valid_REG = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__DIP_io_pc_REG = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__DIP_io_dnpc_REG = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__IF__DOT__temp = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__IF__DOT___temp_T_3 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_144 = VL_RAND_RESET_I(4);
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_159 = VL_RAND_RESET_I(4);
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_174 = VL_RAND_RESET_I(4);
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_189 = VL_RAND_RESET_I(4);
    vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0 = VL_RAND_RESET_I(4);
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_209 = VL_RAND_RESET_I(3);
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_224 = VL_RAND_RESET_I(3);
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_239 = VL_RAND_RESET_I(3);
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_268 = VL_RAND_RESET_I(7);
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_283 = VL_RAND_RESET_I(7);
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_298 = VL_RAND_RESET_I(7);
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_313 = VL_RAND_RESET_I(7);
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_316 = VL_RAND_RESET_I(7);
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_363 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_3 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_valid = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__EX__DOT__div_io_in_valid = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_flow_div_signed = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src1 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src2 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_quotient = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_remainder = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT__is_mul = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__EX__DOT__is_div = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__EX__DOT__is_divw = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__EX__DOT___is_div_sign_T_2 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__EX__DOT__mepc = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT__mcause = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT__mstatus = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT__mtvec = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT__mie = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT__mip = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT___GEN_1 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT___GEN_3 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT__src2 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_7 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_10 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_26 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_30 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_57 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT___T_39 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT___GEN_60 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT___GEN_80 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT___GEN_100 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT___GEN_120 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT___GEN_145 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT___GEN_147 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT___GEN_167 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT___GEN_168 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT___GEN_169 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT___GEN_171 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT___GEN_172 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT___GEN_177 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT___GEN_181 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT___shift_result_T = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(95, vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_5);
    VL_RAND_RESET_W(95, vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_16);
    vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_25 = VL_RAND_RESET_I(32);
    vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_28 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_31 = VL_RAND_RESET_I(32);
    vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_35 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT___GEN_207 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT___branch_result_T_1 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT__branch_flag = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__EX__DOT___T_92 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT___T_112 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT__csr_data = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT___dnpc_T_11 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT___GEN_289 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mtvec_REG = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mtvec_REG_1 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mcause_REG = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mcause_REG_1 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mepc_REG = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mepc_REG_1 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mstatus_REG = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mstatus_REG_1 = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<6; ++__Vi0) {
        vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_out_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(66, vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier);
    VL_RAND_RESET_W(132, vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand);
    VL_RAND_RESET_W(132, vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p);
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count = VL_RAND_RESET_I(7);
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT___count_T_5 = VL_RAND_RESET_I(7);
    VL_RAND_RESET_W(132, vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__temp);
    VL_RAND_RESET_W(128, vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend);
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divisor = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__count = VL_RAND_RESET_I(6);
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT___wrap_value_T_1 = VL_RAND_RESET_I(6);
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__s = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div);
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_2 = VL_RAND_RESET_I(2);
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT___S_T_6 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_13 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_16 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_18 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_26 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2 = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(129, vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_12);
    VL_RAND_RESET_W(65, vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_13);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->CoreTop__DOT__DIP__DOT__rf[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<7; ++__Vi0) {
        vlSelf->CoreTop__DOT__DIP__DOT__IN[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->CoreTop__DOT__MEM__DOT___addr_temp_T_1 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__MEM__DOT___GEN_16 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__MEM__DOT__addr_temp = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__MEM__DOT___wdata_temp_T_21 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__MEM__DOT___GEN_32 = VL_RAND_RESET_I(8);
    vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_27 = VL_RAND_RESET_I(8);
    vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_44 = VL_RAND_RESET_I(16);
    vlSelf->CoreTop__DOT__MEM__DOT___io_out_valid_T_6 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data_io_write_bus_addr = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(512, vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data_io_write_bus_wdata);
    vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(512, vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->CoreTop__DOT__ICACHE__DOT__lru[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->CoreTop__DOT__ICACHE__DOT__lru_lru_w_MPORT_en_pipe_0 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__ICACHE__DOT__lru_lru_w_MPORT_addr_pipe_0 = VL_RAND_RESET_I(5);
    vlSelf->CoreTop__DOT__ICACHE__DOT__state = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(512, vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg);
    vlSelf->CoreTop__DOT__ICACHE__DOT__mem_addr_reg = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__ICACHE__DOT__count = VL_RAND_RESET_I(4);
    vlSelf->CoreTop__DOT__ICACHE__DOT___T = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__ICACHE__DOT___T_1 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_25 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(512, vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_26);
    vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_45 = VL_RAND_RESET_I(4);
    vlSelf->CoreTop__DOT__ICACHE__DOT__hit_data = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__ICACHE__DOT__mem_data = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_121 = VL_RAND_RESET_I(2);
    vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_in_valid_REG = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__ICACHE__DOT___io_in_rdata_rep_valid_T_4 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        VL_RAND_RESET_W(512, vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[__Vi0]);
    }
    vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_en_pipe_0 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0 = VL_RAND_RESET_I(5);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        VL_RAND_RESET_W(512, vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[__Vi0]);
    }
    vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_en_pipe_0 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0 = VL_RAND_RESET_I(5);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[__Vi0] = VL_RAND_RESET_Q(53);
    }
    vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_tag_w_data = VL_RAND_RESET_Q(53);
    vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_tag_w_en_pipe_0 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_tag_w_addr_pipe_0 = VL_RAND_RESET_I(5);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[__Vi0] = VL_RAND_RESET_Q(53);
    }
    vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_data = VL_RAND_RESET_Q(53);
    vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_en_pipe_0 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0 = VL_RAND_RESET_I(5);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_en_pipe_0 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0 = VL_RAND_RESET_I(5);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_en_pipe_0 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_addr_pipe_0 = VL_RAND_RESET_I(5);
    vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT___hit_way_0_T = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_0_result = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT___hit_way_1_T = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_1_result = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__If_axi_birdge__DOT__ar_state = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__If_axi_birdge__DOT__aw_state = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__If_axi_birdge__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__If_axi_birdge__DOT___GEN_4 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MEM_axi_birdge__DOT__ar_state = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MEM_axi_birdge__DOT__aw_state = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MEM_axi_birdge__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MEM_axi_birdge__DOT___GEN_4 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MMEM__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->CoreTop__DOT__MMEM__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->CoreTop__DOT__ARBITER__DOT__state = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__ARBITER__DOT___T_5 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__ARBITER__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__ARBITER__DOT___GEN_20 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_valid = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_rdata_rep_valid = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_rdata_rep_bits_rdata = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_rep = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_addr_req_valid = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_addr_req_bits_addr = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_addr_req_bits_ce = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_addr_req_bits_we = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_addr = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_valid = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_waymask = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(512, vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_wdata);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(512, vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit_way_0 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit_way_1 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_data = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_en_pipe_0 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_addr_pipe_0 = VL_RAND_RESET_I(5);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0_dirt_w_en_pipe_0 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0_dirt_w_addr_pipe_0 = VL_RAND_RESET_I(5);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1_dirt_w_en_pipe_0 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1_dirt_w_addr_pipe_0 = VL_RAND_RESET_I(5);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(512, vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_addr_reg = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_r = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count = VL_RAND_RESET_I(4);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count_write = VL_RAND_RESET_I(4);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_addr_reg = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(512, vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___T = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___T_1 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___T_5 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_37 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(512, vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_38);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_57 = VL_RAND_RESET_I(4);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_62 = VL_RAND_RESET_I(4);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_63 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(512, vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_64);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_159 = VL_RAND_RESET_I(2);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_161 = VL_RAND_RESET_I(2);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_bits_rdata_T_1 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_in_valid_REG = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_valid_T_4 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_valid_T_5 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wmaskextend_T_3 = VL_RAND_RESET_I(8);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo_lo);
    VL_RAND_RESET_W(256, vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo);
    VL_RAND_RESET_W(128, vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi_lo);
    VL_RAND_RESET_W(256, vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi);
    VL_RAND_RESET_W(512, vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend);
    VL_RAND_RESET_W(512, vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_6);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___Cache_data_io_write_bus_valid_T_2 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___waymask_T_3 = VL_RAND_RESET_I(2);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__waymask = VL_RAND_RESET_I(2);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        VL_RAND_RESET_W(512, vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[__Vi0]);
    }
    VL_RAND_RESET_W(512, vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_en_pipe_0 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0 = VL_RAND_RESET_I(5);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        VL_RAND_RESET_W(512, vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[__Vi0]);
    }
    VL_RAND_RESET_W(512, vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_en_pipe_0 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0 = VL_RAND_RESET_I(5);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[__Vi0] = VL_RAND_RESET_Q(53);
    }
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_tag_w_data = VL_RAND_RESET_Q(53);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_tag_w_en_pipe_0 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_tag_w_addr_pipe_0 = VL_RAND_RESET_I(5);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[__Vi0] = VL_RAND_RESET_Q(53);
    }
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1_tag_w_data = VL_RAND_RESET_Q(53);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1_tag_w_en_pipe_0 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0 = VL_RAND_RESET_I(5);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_en_pipe_0 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0 = VL_RAND_RESET_I(5);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_en_pipe_0 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_addr_pipe_0 = VL_RAND_RESET_I(5);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT___hit_way_0_T = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_0_result = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT___hit_way_1_T = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_1_result = VL_RAND_RESET_I(1);
    vlSelf->__Vtableidx3 = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
