// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCoreTop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VCoreTop__Syms.h"
#include "VCoreTop___024root.h"

void VCoreTop___024unit____Vdpiimwrap_set_csr__Vdpioc2_TOP____024unit(const VlUnpacked<QData/*63:0*/, 6> &inst);

VL_ATTR_COLD void VCoreTop___024root___initial__TOP__0(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___initial__TOP__0\n"); );
    // Body
    VCoreTop___024unit____Vdpiimwrap_set_csr__Vdpioc2_TOP____024unit(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr);
}
