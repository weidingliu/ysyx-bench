// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPUTop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VCPUTop__Syms.h"
#include "VCPUTop___024root.h"

void VCPUTop___024unit____Vdpiimwrap_ebreak_TOP____024unit();

VL_INLINE_OPT void VCPUTop___024root___combo__TOP__0(VCPUTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPUTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUTop___024root___combo__TOP__0\n"); );
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
}
