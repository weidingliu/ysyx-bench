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
    if ((0x13U == (0x707fU & vlSelf->io_inst))) {
        vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_1 = 0U;
        vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype = 0x40U;
        vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0 = 8U;
    } else if ((0x1013U == (0xfc00707fU & vlSelf->io_inst))) {
        vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_1 = 0U;
        vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype = 0x41U;
        vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0 = 8U;
    } else if ((0x17U == (0x7fU & vlSelf->io_inst))) {
        vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_1 = 0U;
        vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype = 0x40U;
        vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0 = 3U;
    } else if ((0x37U == (0x7fU & vlSelf->io_inst))) {
        vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_1 = 0U;
        vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype = 0x40U;
        vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0 = 3U;
    } else if ((0x6013U == (0x707fU & vlSelf->io_inst))) {
        vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_1 = 0U;
        vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype = 0x44U;
        vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0 = 8U;
    } else if ((0x6fU == (0x7fU & vlSelf->io_inst))) {
        vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_1 = 3U;
        vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype = 0U;
        vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0 = 7U;
    } else {
        vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_1 = 0U;
        vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype 
            = ((0x100073U == vlSelf->io_inst) ? 0x42U
                : 0U);
        vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0 = 0U;
    }
    vlSelf->io_pc = vlSelf->CPUTop__DOT__IF__DOT__temp;
    vlSelf->CPUTop__DOT__IF__DOT___temp_T_2 = (4ULL 
                                               + vlSelf->CPUTop__DOT__IF__DOT__temp);
    if (VL_UNLIKELY((0x42U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype)))) {
        VL_FINISH_MT("DIP_model.v", 7, "");
    }
    vlSelf->CPUTop__DOT__ID__DOT__srctype_1 = ((8U 
                                                == (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0)) 
                                               | ((7U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0))) 
                                                  | (3U 
                                                     == 
                                                     (3U 
                                                      & (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0)))));
    vlSelf->CPUTop__DOT__ID__DOT___io_ctrlIO_src1type_T_2 
        = ((0x37U == (0x7fU & vlSelf->io_inst)) ? 3U
            : ((8U == (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0))
                ? 0U : ((7U == (7U & (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0)))
                         ? 2U : ((3U == (3U & (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0)))
                                  ? 2U : 0U))));
    vlSelf->CPUTop__DOT__EX__DOT__src2 = ((IData)(vlSelf->CPUTop__DOT__ID__DOT__srctype_1)
                                           ? ((IData)(vlSelf->CPUTop__DOT__ID__DOT__srctype_1)
                                               ? ((8U 
                                                   == (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0))
                                                   ? 
                                                  ((((vlSelf->io_inst 
                                                      >> 0x1fU)
                                                      ? 0xfffffffffffffULL
                                                      : 0ULL) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(
                                                                     (vlSelf->io_inst 
                                                                      >> 0x14U))))
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0)))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     ((vlSelf->io_inst 
                                                                       >> 0x1fU)
                                                                       ? 0xffffffffU
                                                                       : 0U))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      (0xfffff000U 
                                                                       & vlSelf->io_inst))))
                                                    : 
                                                   ((7U 
                                                     == 
                                                     (7U 
                                                      & (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0)))
                                                     ? 
                                                    ((((vlSelf->io_inst 
                                                        >> 0x1fU)
                                                        ? 0x7ffffffffffULL
                                                        : 0ULL) 
                                                      << 0x15U) 
                                                     | (QData)((IData)(
                                                                       ((0x100000U 
                                                                         & (vlSelf->io_inst 
                                                                            >> 0xbU)) 
                                                                        | ((0xff000U 
                                                                            & vlSelf->io_inst) 
                                                                           | ((0x800U 
                                                                               & (vlSelf->io_inst 
                                                                                >> 9U)) 
                                                                              | (0x7feU 
                                                                                & (vlSelf->io_inst 
                                                                                >> 0x14U))))))))
                                                     : 0ULL)))
                                               : 0ULL)
                                           : ((0U == 
                                               (0x1fU 
                                                & (vlSelf->io_inst 
                                                   >> 0x14U)))
                                               ? 0ULL
                                               : vlSelf->CPUTop__DOT__rf
                                              [(0x1fU 
                                                & (vlSelf->io_inst 
                                                   >> 0x14U))]));
    vlSelf->CPUTop__DOT__EX__DOT__src1 = ((0U == (IData)(vlSelf->CPUTop__DOT__ID__DOT___io_ctrlIO_src1type_T_2))
                                           ? ((0U == 
                                               (0x1fU 
                                                & (vlSelf->io_inst 
                                                   >> 0xfU)))
                                               ? 0ULL
                                               : vlSelf->CPUTop__DOT__rf
                                              [(0x1fU 
                                                & (vlSelf->io_inst 
                                                   >> 0xfU))])
                                           : ((2U == (IData)(vlSelf->CPUTop__DOT__ID__DOT___io_ctrlIO_src1type_T_2))
                                               ? vlSelf->CPUTop__DOT__IF__DOT__temp
                                               : 0ULL));
    vlSelf->CPUTop__DOT__EX_io1_result = ((0U == (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_1))
                                           ? ((0x40U 
                                               == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                               ? (vlSelf->CPUTop__DOT__EX__DOT__src1 
                                                  + vlSelf->CPUTop__DOT__EX__DOT__src2)
                                               : ((0x44U 
                                                   == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                   ? 
                                                  (vlSelf->CPUTop__DOT__EX__DOT__src1 
                                                   | vlSelf->CPUTop__DOT__EX__DOT__src2)
                                                   : 0ULL))
                                           : ((3U == (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_1))
                                               ? ((3U 
                                                   == (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_1))
                                                   ? 
                                                  (4ULL 
                                                   + vlSelf->CPUTop__DOT__IF__DOT__temp)
                                                   : 0ULL)
                                               : 0ULL));
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
    vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype = VL_RAND_RESET_I(7);
    vlSelf->CPUTop__DOT__EX_io1_result = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->CPUTop__DOT__rf[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->CPUTop__DOT__IF__DOT__temp = VL_RAND_RESET_Q(64);
    vlSelf->CPUTop__DOT__IF__DOT___temp_T_2 = VL_RAND_RESET_Q(64);
    vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0 = VL_RAND_RESET_I(4);
    vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_1 = VL_RAND_RESET_I(2);
    vlSelf->CPUTop__DOT__ID__DOT__srctype_1 = VL_RAND_RESET_I(1);
    vlSelf->CPUTop__DOT__ID__DOT___io_ctrlIO_src1type_T_2 = VL_RAND_RESET_I(2);
    vlSelf->CPUTop__DOT__EX__DOT__src1 = VL_RAND_RESET_Q(64);
    vlSelf->CPUTop__DOT__EX__DOT__src2 = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
