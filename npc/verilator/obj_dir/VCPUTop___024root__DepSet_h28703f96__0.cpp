// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPUTop.h for the primary calling header

#include "verilated.h"

#include "VCPUTop___024root.h"

VL_INLINE_OPT void VCPUTop___024root___combo__TOP__0(VCPUTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPUTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUTop___024root___combo__TOP__0\n"); );
    // Body
    if ((0x13U == (0x707fU & vlSelf->io_inst))) {
        vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype = 0x40U;
        vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0 = 0U;
    } else if ((0x1013U == (0xfc00707fU & vlSelf->io_inst))) {
        vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype = 0x41U;
        vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0 = 0U;
    } else if ((0x17U == (0x7fU & vlSelf->io_inst))) {
        vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype = 0x40U;
        vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0 = 3U;
    } else if ((0x37U == (0x7fU & vlSelf->io_inst))) {
        vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype = 0x40U;
        vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0 = 3U;
    } else if ((0x6013U == (0x707fU & vlSelf->io_inst))) {
        vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype = 0x44U;
        vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0 = 0U;
    } else {
        vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype 
            = ((0x100073U == vlSelf->io_inst) ? 0x42U
                : 0U);
        vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0 = 2U;
    }
    if (VL_UNLIKELY((0x42U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype)))) {
        VL_FINISH_MT("DIP_model.v", 7, "");
    }
    vlSelf->CPUTop__DOT__ID__DOT__srctype2 = ((0U == 
                                               (1U 
                                                & (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0))) 
                                              | (3U 
                                                 == (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0)));
    vlSelf->CPUTop__DOT__ID__DOT___io_ctrlIO_src1type_T_2 
        = ((0x37U == (0x7fU & vlSelf->io_inst)) ? 3U
            : ((0U == (1U & (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0)))
                ? 0U : ((3U == (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0))
                         ? 2U : 0U)));
}

VL_INLINE_OPT void VCPUTop___024root___sequent__TOP__0(VCPUTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPUTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUTop___024root___sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__CPUTop__DOT__rf__v0;
    QData/*63:0*/ __Vdlyvval__CPUTop__DOT__rf__v0;
    // Body
    vlSelf->CPUTop__DOT__IF__DOT__temp = ((IData)(vlSelf->reset)
                                           ? 0x80000000ULL
                                           : vlSelf->CPUTop__DOT__IF__DOT___temp_T_1);
    __Vdlyvval__CPUTop__DOT__rf__v0 = vlSelf->CPUTop__DOT__EX_io1_result;
    __Vdlyvdim0__CPUTop__DOT__rf__v0 = (0x1fU & (vlSelf->io_inst 
                                                 >> 7U));
    vlSelf->CPUTop__DOT__rf[__Vdlyvdim0__CPUTop__DOT__rf__v0] 
        = __Vdlyvval__CPUTop__DOT__rf__v0;
    vlSelf->io_pc = vlSelf->CPUTop__DOT__IF__DOT__temp;
    vlSelf->CPUTop__DOT__IF__DOT___temp_T_1 = (4ULL 
                                               + vlSelf->CPUTop__DOT__IF__DOT__temp);
}

VL_INLINE_OPT void VCPUTop___024root___combo__TOP__1(VCPUTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPUTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUTop___024root___combo__TOP__1\n"); );
    // Body
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
    vlSelf->CPUTop__DOT__EX__DOT__src2 = ((IData)(vlSelf->CPUTop__DOT__ID__DOT__srctype2)
                                           ? ((IData)(vlSelf->CPUTop__DOT__ID__DOT__srctype2)
                                               ? ((0U 
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
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0))
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
                                                    : 0ULL))
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
    vlSelf->CPUTop__DOT__EX_io1_result = ((0x40U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                           ? (vlSelf->CPUTop__DOT__EX__DOT__src1 
                                              + vlSelf->CPUTop__DOT__EX__DOT__src2)
                                           : ((0x44U 
                                               == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                               ? (vlSelf->CPUTop__DOT__EX__DOT__src1 
                                                  | vlSelf->CPUTop__DOT__EX__DOT__src2)
                                               : 0ULL));
    vlSelf->io_result = vlSelf->CPUTop__DOT__EX_io1_result;
}

void VCPUTop___024root___eval(VCPUTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPUTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUTop___024root___eval\n"); );
    // Body
    VCPUTop___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VCPUTop___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    VCPUTop___024root___combo__TOP__1(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

#ifdef VL_DEBUG
void VCPUTop___024root___eval_debug_assertions(VCPUTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPUTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUTop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
