// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPUTop.h for the primary calling header

#include "verilated.h"

#include "VCPUTop___024root.h"

VL_ATTR_COLD void VCPUTop___024root___settle__TOP__0(VCPUTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPUTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUTop___024root___settle__TOP__0\n"); );
    // Body
    if (VL_UNLIKELY((0x42U == ((0x13U == (0x707fU & vlSelf->io_inst))
                                ? 0x40U : ((0x1013U 
                                            == (0xfc00707fU 
                                                & vlSelf->io_inst))
                                            ? 0x41U
                                            : ((0x100073U 
                                                == vlSelf->io_inst)
                                                ? 0x42U
                                                : 0U)))))) {
        VL_FINISH_MT("DIP_model.v", 7, "");
    }
    vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0 = (
                                                   (0x13U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 0U
                                                    : 
                                                   ((0x1013U 
                                                     == 
                                                     (0xfc00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 0U
                                                     : 2U));
    vlSelf->io_pc = vlSelf->CPUTop__DOT__IF__DOT__temp;
    vlSelf->CPUTop__DOT__IF__DOT___temp_T_1 = (4ULL 
                                               + vlSelf->CPUTop__DOT__IF__DOT__temp);
    vlSelf->CPUTop__DOT__EX_io1_result = ((0x40U == 
                                           ((0x13U 
                                             == (0x707fU 
                                                 & vlSelf->io_inst))
                                             ? 0x40U
                                             : ((0x1013U 
                                                 == 
                                                 (0xfc00707fU 
                                                  & vlSelf->io_inst))
                                                 ? 0x41U
                                                 : 
                                                ((0x100073U 
                                                  == vlSelf->io_inst)
                                                  ? 0x42U
                                                  : 0U))))
                                           ? (((0U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->io_inst 
                                                    >> 0xfU)))
                                                ? 0ULL
                                                : vlSelf->CPUTop__DOT__rf
                                               [(0x1fU 
                                                 & (vlSelf->io_inst 
                                                    >> 0xfU))]) 
                                              + ((0U 
                                                  == (IData)(
                                                             (0U 
                                                              == 
                                                              (1U 
                                                               & (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0)))))
                                                  ? 
                                                 ((0U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->io_inst 
                                                       >> 0x14U)))
                                                   ? 0ULL
                                                   : 
                                                  vlSelf->CPUTop__DOT__rf
                                                  [
                                                  (0x1fU 
                                                   & (vlSelf->io_inst 
                                                      >> 0x14U))])
                                                  : 
                                                 ((1U 
                                                   == (IData)(
                                                              (0U 
                                                               == 
                                                               (1U 
                                                                & (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0)))))
                                                   ? 
                                                  ((0U 
                                                    == 
                                                    (1U 
                                                     & (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0)))
                                                    ? 
                                                   ((((vlSelf->io_inst 
                                                       >> 0x1fU)
                                                       ? 0xfffffffffffffULL
                                                       : 0ULL) 
                                                     << 0xcU) 
                                                    | (QData)((IData)(
                                                                      (vlSelf->io_inst 
                                                                       >> 0x14U))))
                                                    : 0ULL)
                                                   : 0ULL)))
                                           : 0ULL);
    vlSelf->io_result = vlSelf->CPUTop__DOT__EX_io1_result;
}

VL_ATTR_COLD void VCPUTop___024root___eval_initial(VCPUTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPUTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUTop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

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
    vlSelf->CPUTop__DOT__EX_io1_result = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->CPUTop__DOT__rf[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->CPUTop__DOT__IF__DOT__temp = VL_RAND_RESET_Q(64);
    vlSelf->CPUTop__DOT__IF__DOT___temp_T_1 = VL_RAND_RESET_Q(64);
    vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0 = VL_RAND_RESET_I(2);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
