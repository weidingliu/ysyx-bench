// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPUTop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VCPUTop__Syms.h"
#include "VCPUTop___024root.h"

void VCPUTop___024unit____Vdpiimwrap_ebreak_TOP____024unit();

VL_ATTR_COLD void VCPUTop___024root___settle__TOP__0(VCPUTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPUTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUTop___024root___settle__TOP__0\n"); );
    // Body
    if ((0x42U == ((0x13U == (0x707fU & vlSelf->io_inst))
                    ? 0x40U : ((0x1013U == (0xfc00707fU 
                                            & vlSelf->io_inst))
                                ? 0x41U : ((0x100073U 
                                            == vlSelf->io_inst)
                                            ? 0x42U
                                            : 0U))))) {
        VCPUTop___024unit____Vdpiimwrap_ebreak_TOP____024unit();
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
