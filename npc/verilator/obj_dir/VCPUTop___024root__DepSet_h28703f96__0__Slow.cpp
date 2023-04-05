// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPUTop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VCPUTop___024root.h"

VL_ATTR_COLD void VCPUTop___024root___initial__TOP__0(VCPUTop___024root* vlSelf);

VL_ATTR_COLD void VCPUTop___024root___eval_initial(VCPUTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPUTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUTop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
    VCPUTop___024root___initial__TOP__0(vlSelf);
}

VL_ATTR_COLD void VCPUTop___024root___settle__TOP__0(VCPUTop___024root* vlSelf);

VL_ATTR_COLD void VCPUTop___024root___eval_settle(VCPUTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPUTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUTop___024root___eval_settle\n"); );
    // Body
    VCPUTop___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void VCPUTop___024root___final(VCPUTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPUTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUTop___024root___final\n"); );
}

VL_ATTR_COLD void VCPUTop___024root___ctor_var_reset(VCPUTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPUTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUTop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_pc = VL_RAND_RESET_Q(64);
    vlSelf->io_inst = VL_RAND_RESET_I(32);
    vlSelf->io_result = VL_RAND_RESET_Q(64);
    vlSelf->io_time_int = VL_RAND_RESET_I(1);
    vlSelf->CPUTop__DOT__IFM_inst = VL_RAND_RESET_I(32);
    vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype = VL_RAND_RESET_I(3);
    vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype = VL_RAND_RESET_I(7);
    vlSelf->CPUTop__DOT__ID_io_ctrlIO_Imm = VL_RAND_RESET_Q(64);
    vlSelf->CPUTop__DOT__EX_io1_REG1 = VL_RAND_RESET_Q(64);
    vlSelf->CPUTop__DOT__EX_io1_REG2 = VL_RAND_RESET_Q(64);
    vlSelf->CPUTop__DOT__EX_io1_result = VL_RAND_RESET_Q(64);
    vlSelf->CPUTop__DOT__EX_io1_addr = VL_RAND_RESET_Q(64);
    vlSelf->CPUTop__DOT__EX_io1_wdata = VL_RAND_RESET_Q(64);
    vlSelf->CPUTop__DOT__EX_io1_time_int = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->CPUTop__DOT__rf[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->CPUTop__DOT__mem_rdata = VL_RAND_RESET_Q(64);
    vlSelf->CPUTop__DOT__mmio_io_rdata = VL_RAND_RESET_Q(64);
    vlSelf->CPUTop__DOT__io_time_int_REG = VL_RAND_RESET_I(1);
    vlSelf->CPUTop__DOT__IF__DOT__temp = VL_RAND_RESET_Q(64);
    vlSelf->CPUTop__DOT__IF__DOT___temp_T_2 = VL_RAND_RESET_Q(64);
    vlSelf->CPUTop__DOT__IFM__DOT__rdata = VL_RAND_RESET_Q(64);
    vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_144 = VL_RAND_RESET_I(4);
    vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_159 = VL_RAND_RESET_I(4);
    vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_174 = VL_RAND_RESET_I(4);
    vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_189 = VL_RAND_RESET_I(4);
    vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0 = VL_RAND_RESET_I(4);
    vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_213 = VL_RAND_RESET_I(3);
    vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_228 = VL_RAND_RESET_I(3);
    vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_243 = VL_RAND_RESET_I(3);
    vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_268 = VL_RAND_RESET_I(7);
    vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_283 = VL_RAND_RESET_I(7);
    vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_298 = VL_RAND_RESET_I(7);
    vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_313 = VL_RAND_RESET_I(7);
    vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_316 = VL_RAND_RESET_I(7);
    vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_2 = VL_RAND_RESET_I(7);
    vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_346 = VL_RAND_RESET_I(1);
    vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_366 = VL_RAND_RESET_I(1);
    vlSelf->CPUTop__DOT__ID__DOT__srctype2 = VL_RAND_RESET_I(1);
    vlSelf->CPUTop__DOT__ID__DOT___io_ctrlIO_src1type_T_2 = VL_RAND_RESET_I(2);
    vlSelf->CPUTop__DOT__ID__DOT___io_mem_we_T_12 = VL_RAND_RESET_I(1);
    vlSelf->CPUTop__DOT__EX__DOT__mepc = VL_RAND_RESET_Q(64);
    vlSelf->CPUTop__DOT__EX__DOT__mcause = VL_RAND_RESET_Q(64);
    vlSelf->CPUTop__DOT__EX__DOT__mstatus = VL_RAND_RESET_Q(64);
    vlSelf->CPUTop__DOT__EX__DOT__mtvec = VL_RAND_RESET_Q(64);
    vlSelf->CPUTop__DOT__EX__DOT__mie = VL_RAND_RESET_Q(64);
    vlSelf->CPUTop__DOT__EX__DOT__mip = VL_RAND_RESET_Q(64);
    vlSelf->CPUTop__DOT__EX__DOT___GEN_1 = VL_RAND_RESET_Q(64);
    vlSelf->CPUTop__DOT__EX__DOT___GEN_3 = VL_RAND_RESET_Q(64);
    vlSelf->CPUTop__DOT__EX__DOT__src2 = VL_RAND_RESET_Q(64);
    vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_1 = VL_RAND_RESET_Q(64);
    vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_3 = VL_RAND_RESET_Q(64);
    vlSelf->CPUTop__DOT__EX__DOT___GEN_14 = VL_RAND_RESET_Q(64);
    vlSelf->CPUTop__DOT__EX__DOT___wdata_temp_T_21 = VL_RAND_RESET_Q(64);
    vlSelf->CPUTop__DOT__EX__DOT___GEN_28 = VL_RAND_RESET_I(8);
    vlSelf->CPUTop__DOT__EX__DOT___mem_result_T_9 = VL_RAND_RESET_Q(64);
    vlSelf->CPUTop__DOT__EX__DOT___mem_result_T_28 = VL_RAND_RESET_I(8);
    vlSelf->CPUTop__DOT__EX__DOT___mem_result_T_45 = VL_RAND_RESET_I(16);
    vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_7 = VL_RAND_RESET_Q(64);
    vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_10 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_19);
    vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_28 = VL_RAND_RESET_Q(33);
    vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_38 = VL_RAND_RESET_I(32);
    vlSelf->CPUTop__DOT__EX__DOT___GEN_15 = VL_RAND_RESET_I(32);
    vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_58 = VL_RAND_RESET_Q(64);
    vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_64 = VL_RAND_RESET_I(32);
    vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_86 = VL_RAND_RESET_Q(64);
    vlSelf->CPUTop__DOT__EX__DOT___T_163 = VL_RAND_RESET_Q(64);
    vlSelf->CPUTop__DOT__EX__DOT___GEN_94 = VL_RAND_RESET_Q(64);
    vlSelf->CPUTop__DOT__EX__DOT___GEN_114 = VL_RAND_RESET_Q(64);
    vlSelf->CPUTop__DOT__EX__DOT___GEN_134 = VL_RAND_RESET_Q(64);
    vlSelf->CPUTop__DOT__EX__DOT___GEN_151 = VL_RAND_RESET_Q(64);
    vlSelf->CPUTop__DOT__EX__DOT___GEN_154 = VL_RAND_RESET_Q(64);
    vlSelf->CPUTop__DOT__EX__DOT___GEN_181 = VL_RAND_RESET_Q(64);
    vlSelf->CPUTop__DOT__EX__DOT___GEN_195 = VL_RAND_RESET_Q(64);
    vlSelf->CPUTop__DOT__EX__DOT___GEN_198 = VL_RAND_RESET_Q(64);
    vlSelf->CPUTop__DOT__EX__DOT___GEN_201 = VL_RAND_RESET_Q(64);
    vlSelf->CPUTop__DOT__EX__DOT___GEN_203 = VL_RAND_RESET_Q(64);
    vlSelf->CPUTop__DOT__EX__DOT___GEN_206 = VL_RAND_RESET_Q(64);
    vlSelf->CPUTop__DOT__EX__DOT___GEN_211 = VL_RAND_RESET_Q(64);
    vlSelf->CPUTop__DOT__EX__DOT___GEN_215 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(95, vlSelf->CPUTop__DOT__EX__DOT___shift_result_T_5);
    VL_RAND_RESET_W(95, vlSelf->CPUTop__DOT__EX__DOT___shift_result_T_16);
    vlSelf->CPUTop__DOT__EX__DOT___shift_result_T_25 = VL_RAND_RESET_I(32);
    vlSelf->CPUTop__DOT__EX__DOT___shift_result_T_28 = VL_RAND_RESET_Q(64);
    vlSelf->CPUTop__DOT__EX__DOT___shift_result_T_31 = VL_RAND_RESET_I(32);
    vlSelf->CPUTop__DOT__EX__DOT___shift_result_T_35 = VL_RAND_RESET_Q(64);
    vlSelf->CPUTop__DOT__EX__DOT___GEN_234 = VL_RAND_RESET_Q(64);
    vlSelf->CPUTop__DOT__EX__DOT___GEN_235 = VL_RAND_RESET_Q(64);
    vlSelf->CPUTop__DOT__EX__DOT___branch_result_T_1 = VL_RAND_RESET_Q(64);
    vlSelf->CPUTop__DOT__EX__DOT__branch_flag = VL_RAND_RESET_I(1);
    vlSelf->CPUTop__DOT__EX__DOT___T_217 = VL_RAND_RESET_Q(64);
    vlSelf->CPUTop__DOT__EX__DOT___T_237 = VL_RAND_RESET_Q(64);
    vlSelf->CPUTop__DOT__EX__DOT__csr_data = VL_RAND_RESET_Q(64);
    vlSelf->CPUTop__DOT__EX__DOT___dnpc_T_9 = VL_RAND_RESET_Q(64);
    vlSelf->CPUTop__DOT__EX__DOT___T_280 = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<6; ++__Vi0) {
        vlSelf->CPUTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->CPUTop__DOT__DIP__DOT__rf[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->CPUTop__DOT__mmio__DOT__mtime = VL_RAND_RESET_Q(64);
    vlSelf->CPUTop__DOT__mmio__DOT__mtimecmp = VL_RAND_RESET_Q(64);
    vlSelf->CPUTop__DOT__mmio__DOT___mtime_T_1 = VL_RAND_RESET_Q(64);
    vlSelf->CPUTop__DOT__mmio__DOT__flag = VL_RAND_RESET_I(1);
    vlSelf->CPUTop__DOT__mmio__DOT___T_11 = VL_RAND_RESET_Q(64);
    vlSelf->__Vtask_pmem_read__0__rdata = 0;
    vlSelf->__Vtask_pmem_read__5__rdata = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
