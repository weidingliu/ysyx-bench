// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCoreTop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VCoreTop___024root.h"

VL_INLINE_OPT void VCoreTop___024root___ico_sequent__TOP__0__PROF__CoreTop__l705(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___ico_sequent__TOP__0__PROF__CoreTop__l705\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_12[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_12[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_12[2U] = 0U;
    } else if ((0U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state))) {
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_12[0U] 
            = (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S);
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_12[1U] 
            = (IData)((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S 
                       >> 0x20U));
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_12[2U] = 0U;
    } else if ((1U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state))) {
        if ((1U & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div[2U])) {
            vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_12[0U] 
                = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S) 
                   << 1U);
            vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_12[1U] 
                = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S) 
                    >> 0x1fU) | ((IData)((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S 
                                          >> 0x20U)) 
                                 << 1U));
            vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_12[2U] 
                = ((IData)((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S 
                            >> 0x20U)) >> 0x1fU);
        } else {
            vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_12[0U] 
                = (1U | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S) 
                         << 1U));
            vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_12[1U] 
                = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S) 
                    >> 0x1fU) | ((IData)((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S 
                                          >> 0x20U)) 
                                 << 1U));
            vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_12[2U] 
                = ((IData)((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S 
                            >> 0x20U)) >> 0x1fU);
        }
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_12[0U] 
            = (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S);
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_12[1U] 
            = (IData)((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S 
                       >> 0x20U));
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_12[2U] = 0U;
    }
}

VL_INLINE_OPT void VCoreTop___024root___ico_sequent__TOP__2__PROF__CoreTop__l2107(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___ico_sequent__TOP__2__PROF__CoreTop__l2107\n"); );
    // Body
    if (((2U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state)) 
         & (IData)(vlSelf->CoreTop__DOT__ICACHE_io_out_rdata_rep_valid))) {
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[0U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[2U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[1U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[3U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[2U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[4U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[3U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[5U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[4U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[6U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[5U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[7U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[6U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[8U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[7U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[9U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[8U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xaU];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[9U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xbU];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[0xaU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xcU];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[0xbU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xdU];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[0xcU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xeU];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[0xdU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xfU];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[0xeU] 
            = (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__rdata);
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[0xfU] 
            = (IData)((vlSelf->CoreTop__DOT__MMEM__DOT__rdata 
                       >> 0x20U));
    } else {
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[0U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[1U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[1U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[2U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[2U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[3U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[3U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[4U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[4U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[5U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[5U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[6U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[6U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[7U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[7U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[8U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[8U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[9U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[9U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[0xaU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xaU];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[0xbU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xbU];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[0xcU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xcU];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[0xdU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xdU];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[0xeU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xeU];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[0xfU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xfU];
    }
}

VL_INLINE_OPT void VCoreTop___024root___ico_sequent__TOP__3__PROF__CoreTop__l2754(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___ico_sequent__TOP__3__PROF__CoreTop__l2754\n"); );
    // Body
    if (((2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state)) 
         & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_rdata_rep_valid))) {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[0U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[2U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[1U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[3U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[2U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[4U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[3U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[5U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[4U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[6U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[5U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[7U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[6U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[8U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[7U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[9U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[8U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xaU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[9U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xbU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[0xaU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xcU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[0xbU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xdU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[0xcU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xeU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[0xdU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xfU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[0xeU] 
            = (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__rdata);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[0xfU] 
            = (IData)((vlSelf->CoreTop__DOT__MMEM__DOT__rdata 
                       >> 0x20U));
    } else {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[0U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[1U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[1U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[2U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[2U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[3U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[3U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[4U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[4U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[5U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[5U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[6U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[6U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[7U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[7U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[8U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[8U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[9U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[9U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[0xaU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xaU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[0xbU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xbU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[0xcU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xcU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[0xdU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xdU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[0xeU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xeU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[0xfU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xfU];
    }
}

VL_INLINE_OPT void VCoreTop___024root___ico_sequent__TOP__4__PROF__CoreTop__l4884(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___ico_sequent__TOP__4__PROF__CoreTop__l4884\n"); );
    // Body
    vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)
            ? vlSelf->CoreTop__DOT__MMEM__DOT__rdata
            : ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_bits_rdata_T_1)
                ? ((0U == (7U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                         >> 3U)))) ? 
                   (((QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[1U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0U])))
                    : ((1U == (7U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                             >> 3U))))
                        ? (((QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[2U])))
                        : ((2U == (7U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                 >> 3U))))
                            ? (((QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[5U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[4U])))
                            : ((3U == (7U & (IData)(
                                                    (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                     >> 3U))))
                                ? (((QData)((IData)(
                                                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[7U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[6U])))
                                : ((4U == (7U & (IData)(
                                                        (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                         >> 3U))))
                                    ? (((QData)((IData)(
                                                        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[9U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[8U])))
                                    : ((5U == (7U & (IData)(
                                                            (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                             >> 3U))))
                                        ? (((QData)((IData)(
                                                            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xbU])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xaU])))
                                        : ((6U == (7U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                              >> 3U))))
                                            ? (((QData)((IData)(
                                                                vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xdU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xcU])))
                                            : ((7U 
                                                == 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                            >> 3U))))
                                                ? (
                                                   ((QData)((IData)(
                                                                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xfU])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xeU])))
                                                : 0ULL))))))))
                : ((0U == (7U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                         >> 3U)))) ? 
                   (((QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[1U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0U])))
                    : ((1U == (7U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                             >> 3U))))
                        ? (((QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[2U])))
                        : ((2U == (7U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                 >> 3U))))
                            ? (((QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[5U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[4U])))
                            : ((3U == (7U & (IData)(
                                                    (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                     >> 3U))))
                                ? (((QData)((IData)(
                                                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[7U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[6U])))
                                : ((4U == (7U & (IData)(
                                                        (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                         >> 3U))))
                                    ? (((QData)((IData)(
                                                        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[9U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[8U])))
                                    : ((5U == (7U & (IData)(
                                                            (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                             >> 3U))))
                                        ? (((QData)((IData)(
                                                            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xbU])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xaU])))
                                        : ((6U == (7U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                              >> 3U))))
                                            ? (((QData)((IData)(
                                                                vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xdU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xcU])))
                                            : ((7U 
                                                == 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                            >> 3U))))
                                                ? (
                                                   ((QData)((IData)(
                                                                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xfU])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xeU])))
                                                : 0ULL))))))))));
}

VL_INLINE_OPT void VCoreTop___024root___ico_sequent__TOP__5__PROF__CoreTop__l1572(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___ico_sequent__TOP__5__PROF__CoreTop__l1572\n"); );
    // Body
    vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_27 
        = (0xffU & ((0U == (7U & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                     ? (IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata)
                     : ((1U == (7U & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                         ? (IData)((vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata 
                                    >> 8U)) : ((2U 
                                                == 
                                                (7U 
                                                 & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                                                ? (IData)(
                                                          (vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata 
                                                           >> 0x10U))
                                                : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                                                    ? (IData)(
                                                              (vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata 
                                                               >> 0x18U))
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (7U 
                                                      & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                                                     ? (IData)(
                                                               (vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata 
                                                                >> 0x20U))
                                                     : 
                                                    ((5U 
                                                      == 
                                                      (7U 
                                                       & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                                                      ? (IData)(
                                                                (vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata 
                                                                 >> 0x28U))
                                                      : 
                                                     ((6U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                                                       ? (IData)(
                                                                 (vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata 
                                                                  >> 0x30U))
                                                       : 
                                                      ((7U 
                                                        == 
                                                        (7U 
                                                         & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                                                        ? (IData)(
                                                                  (vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata 
                                                                   >> 0x38U))
                                                        : 0U)))))))));
}

VL_INLINE_OPT void VCoreTop___024root___ico_sequent__TOP__6__PROF__CoreTop__l1580(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___ico_sequent__TOP__6__PROF__CoreTop__l1580\n"); );
    // Body
    vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_44 
        = (0xffffU & ((0U == (3U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                            >> 1U))))
                       ? (IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata)
                       : ((1U == (3U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                >> 1U))))
                           ? (IData)((vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata 
                                      >> 0x10U)) : 
                          ((2U == (3U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                 >> 1U))))
                            ? (IData)((vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata 
                                       >> 0x20U)) : 
                           ((3U == (3U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                  >> 1U))))
                             ? (IData)((vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata 
                                        >> 0x30U)) : 0U)))));
}

VL_INLINE_OPT void VCoreTop___024root___ico_sequent__TOP__7__PROF__CoreTop__l1608(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___ico_sequent__TOP__7__PROF__CoreTop__l1608\n"); );
    // Body
    vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfData 
        = ((4U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_fuType))
            ? ((0x45U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                ? vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata
                : ((0x47U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                    ? ((1U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                      >> 2U))) ? (((QData)((IData)(
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata 
                                                                                >> 0x3fU)))
                                                                     ? 0xffffffffU
                                                                     : 0U))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    (vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata 
                                                                     >> 0x20U))))
                        : (((QData)((IData)(((1U & (IData)(
                                                           (vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata 
                                                            >> 0x1fU)))
                                              ? 0xffffffffU
                                              : 0U))) 
                            << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata))))
                    : ((0x11U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                        ? ((1U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                          >> 2U))) ? 
                           (vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata 
                            >> 0x20U) : (QData)((IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata)))
                        : ((0x6fU == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                            ? (QData)((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_27))
                            : ((0xeU == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                ? ((((0x80U & (IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_27))
                                      ? 0xffffffffffffffULL
                                      : 0ULL) << 8U) 
                                   | (QData)((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_27)))
                                : ((3U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                    ? ((((0x8000U & (IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_44))
                                          ? 0xffffffffffffULL
                                          : 0ULL) << 0x10U) 
                                       | (QData)((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_44)))
                                    : ((4U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                        ? (QData)((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_44))
                                        : 0ULL)))))))
            : vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfData);
}

void VCoreTop___024root___ico_sequent__TOP__1__PROF__SRAMTemp__l301(VCoreTop___024root* vlSelf);

void VCoreTop___024root___eval_ico(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        VCoreTop___024root___ico_sequent__TOP__0__PROF__CoreTop__l705(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        VCoreTop___024root___ico_sequent__TOP__1__PROF__SRAMTemp__l301(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__2__PROF__CoreTop__l2107(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__3__PROF__CoreTop__l2754(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__4__PROF__CoreTop__l4884(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__5__PROF__CoreTop__l1572(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__6__PROF__CoreTop__l1580(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__7__PROF__CoreTop__l1608(vlSelf);
    }
}

void VCoreTop___024root___eval_act(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___eval_act\n"); );
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__0__PROF__CoreTop__l1835(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__0__PROF__CoreTop__l1835\n"); );
    // Body
    vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0 = 0U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__1__PROF__CoreTop__l1842(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__1__PROF__CoreTop__l1842\n"); );
    // Body
    vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0 = 0U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__2__PROF__CoreTop__l2230(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__2__PROF__CoreTop__l2230\n"); );
    // Body
    vlSelf->__Vdly__CoreTop__DOT__ICACHE__DOT__state 
        = vlSelf->CoreTop__DOT__ICACHE__DOT__state;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__3__PROF__CoreTop__l722(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__3__PROF__CoreTop__l722\n"); );
    // Body
    vlSelf->__Vdly__CoreTop__DOT__EX__DOT__div__DOT__state 
        = vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__4__PROF__CoreTop__l1863(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__4__PROF__CoreTop__l1863\n"); );
    // Body
    vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0__v0 = 0U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__5__PROF__CoreTop__l1870(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__5__PROF__CoreTop__l1870\n"); );
    // Body
    vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1__v0 = 0U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__6__PROF__CoreTop__l1856(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__6__PROF__CoreTop__l1856\n"); );
    // Body
    vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1__v0 = 0U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__7__PROF__CoreTop__l1849(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__7__PROF__CoreTop__l1849\n"); );
    // Body
    vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0__v0 = 0U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__8__PROF__CoreTop__l1835(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__8__PROF__CoreTop__l1835\n"); );
    // Body
    vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0 = 0U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__9__PROF__CoreTop__l1842(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__9__PROF__CoreTop__l1842\n"); );
    // Body
    vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0 = 0U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__10__PROF__CoreTop__l1870(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__10__PROF__CoreTop__l1870\n"); );
    // Body
    vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1__v0 = 0U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__11__PROF__CoreTop__l1863(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__11__PROF__CoreTop__l1863\n"); );
    // Body
    vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0__v0 = 0U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__12__PROF__CoreTop__l1856(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__12__PROF__CoreTop__l1856\n"); );
    // Body
    vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1__v0 = 0U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__13__PROF__CoreTop__l1849(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__13__PROF__CoreTop__l1849\n"); );
    // Body
    vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0__v0 = 0U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__14__PROF__CoreTop__l2214(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__14__PROF__CoreTop__l2214\n"); );
    // Body
    vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__lru__v0 = 0U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__15__PROF__CoreTop__l2217(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__15__PROF__CoreTop__l2217\n"); );
    // Body
    vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__lru__v1 = 0U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__16__PROF__CoreTop__l2220(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__16__PROF__CoreTop__l2220\n"); );
    // Body
    vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__lru__v2 = 0U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__17__PROF__CoreTop__l2223(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__17__PROF__CoreTop__l2223\n"); );
    // Body
    vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__lru__v3 = 0U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__18__PROF__CoreTop__l516(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__18__PROF__CoreTop__l516\n"); );
    // Body
    vlSelf->__Vdly__CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U] 
        = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U];
    vlSelf->__Vdly__CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[1U] 
        = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[1U];
    vlSelf->__Vdly__CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[2U] 
        = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[2U];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__19__PROF__CoreTop__l3043(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__19__PROF__CoreTop__l3043\n"); );
    // Body
    vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1__v0 = 0U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__20__PROF__CoreTop__l3036(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__20__PROF__CoreTop__l3036\n"); );
    // Body
    vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0__v0 = 0U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__21__PROF__CoreTop__l3084(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__21__PROF__CoreTop__l3084\n"); );
    // Body
    vlSelf->__Vdly__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__22__PROF__CoreTop__l3069(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__22__PROF__CoreTop__l3069\n"); );
    // Body
    vlSelf->__Vdly__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__23__PROF__CoreTop__l3305(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__23__PROF__CoreTop__l3305\n"); );
    // Body
    vlSelf->__Vdly__CoreTop__DOT__MMIO__DOT__birdge__DOT__read_state 
        = vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__read_state;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__24__PROF__CoreTop__l3318(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__24__PROF__CoreTop__l3318\n"); );
    // Body
    vlSelf->__Vdly__CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state 
        = vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__25__PROF__CoreTop__l3020(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__25__PROF__CoreTop__l3020\n"); );
    // Body
    vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru__v0 = 0U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__26__PROF__CoreTop__l3023(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__26__PROF__CoreTop__l3023\n"); );
    // Body
    vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru__v1 = 0U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__27__PROF__CoreTop__l3026(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__27__PROF__CoreTop__l3026\n"); );
    // Body
    vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru__v2 = 0U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__28__PROF__CoreTop__l3029(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__28__PROF__CoreTop__l3029\n"); );
    // Body
    vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru__v3 = 0U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__29__PROF__CoreTop__l4989(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__29__PROF__CoreTop__l4989\n"); );
    // Body
    vlSelf->__Vdlyvset__CoreTop__DOT__rf__v0 = 0U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__30__PROF__CoreTop__l3050(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__30__PROF__CoreTop__l3050\n"); );
    // Body
    vlSelf->__Vdly__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__31__PROF__SRAMTemp__l223(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__31__PROF__SRAMTemp__l223\n"); );
    // Body
    vlSelf->__Vdly__CoreTop__DOT__MMEM__DOT__read_addr_buffer 
        = vlSelf->CoreTop__DOT__MMEM__DOT__read_addr_buffer;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__32__PROF__SRAMTemp__l224(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__32__PROF__SRAMTemp__l224\n"); );
    // Body
    vlSelf->__Vdly__CoreTop__DOT__MMEM__DOT__write_addr_buffer 
        = vlSelf->CoreTop__DOT__MMEM__DOT__write_addr_buffer;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__33__PROF__CoreTop__l2249(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__33__PROF__CoreTop__l2249\n"); );
    // Body
    vlSelf->__Vdly__CoreTop__DOT__ICACHE__DOT__read_state 
        = vlSelf->CoreTop__DOT__ICACHE__DOT__read_state;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__34__PROF__SRAMTemp__l222(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__34__PROF__SRAMTemp__l222\n"); );
    // Body
    vlSelf->__Vdly__CoreTop__DOT__MMEM__DOT__read_count 
        = vlSelf->CoreTop__DOT__MMEM__DOT__read_count;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__158__PROF__CoreTop__l1834(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__158__PROF__CoreTop__l1834\n"); );
    // Body
    if (((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_en) 
         & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_waymask))) {
        vlSelf->__Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0[0U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0U];
        vlSelf->__Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0[1U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[1U];
        vlSelf->__Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0[2U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[2U];
        vlSelf->__Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0[3U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[3U];
        vlSelf->__Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0[4U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[4U];
        vlSelf->__Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0[5U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[5U];
        vlSelf->__Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0[6U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[6U];
        vlSelf->__Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0[7U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[7U];
        vlSelf->__Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0[8U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[8U];
        vlSelf->__Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0[9U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[9U];
        vlSelf->__Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0[0xaU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xaU];
        vlSelf->__Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0[0xbU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xbU];
        vlSelf->__Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0[0xcU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xcU];
        vlSelf->__Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0[0xdU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xdU];
        vlSelf->__Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0[0xeU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xeU];
        vlSelf->__Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0[0xfU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xfU];
        vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0 = 1U;
        vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_addr;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__159__PROF__CoreTop__l1841(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__159__PROF__CoreTop__l1841\n"); );
    // Body
    if (((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_en) 
         & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_waymask) 
            >> 1U))) {
        vlSelf->__Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0[0U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0U];
        vlSelf->__Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0[1U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[1U];
        vlSelf->__Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0[2U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[2U];
        vlSelf->__Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0[3U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[3U];
        vlSelf->__Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0[4U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[4U];
        vlSelf->__Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0[5U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[5U];
        vlSelf->__Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0[6U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[6U];
        vlSelf->__Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0[7U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[7U];
        vlSelf->__Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0[8U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[8U];
        vlSelf->__Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0[9U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[9U];
        vlSelf->__Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0[0xaU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xaU];
        vlSelf->__Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0[0xbU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xbU];
        vlSelf->__Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0[0xcU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xcU];
        vlSelf->__Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0[0xdU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xdU];
        vlSelf->__Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0[0xeU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xeU];
        vlSelf->__Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0[0xfU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xfU];
        vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0 = 1U;
        vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_addr;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__160__PROF__CoreTop__l2230(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__160__PROF__CoreTop__l2230\n"); );
    // Body
    vlSelf->__Vdly__CoreTop__DOT__ICACHE__DOT__state 
        = ((IData)(vlSelf->reset) ? 0U : ((0U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state))
                                           ? ((IData)(vlSelf->CoreTop__DOT__IF_io_cache_req_addr_req_valid)
                                               ? 1U
                                               : 0U)
                                           : ((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state))
                                               ? ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit)
                                                   ? 0U
                                                   : 2U)
                                               : ((2U 
                                                   == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state))
                                                   ? (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_6)
                                                   : (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_9)))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__161__PROF__CoreTop__l1862(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__161__PROF__CoreTop__l1862\n"); );
    // Body
    if (((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_en) 
         & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_waymask))) {
        vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0__v0 = 1U;
        vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0__v0 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_addr;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__162__PROF__CoreTop__l1869(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__162__PROF__CoreTop__l1869\n"); );
    // Body
    if (((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_en) 
         & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_waymask) 
            >> 1U))) {
        vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1__v0 = 1U;
        vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1__v0 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_addr;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__163__PROF__CoreTop__l1855(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__163__PROF__CoreTop__l1855\n"); );
    // Body
    if (((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_en) 
         & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_waymask) 
            >> 1U))) {
        vlSelf->__Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1__v0 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_MPORT_1_data;
        vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1__v0 = 1U;
        vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1__v0 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_addr;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__164__PROF__CoreTop__l1848(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__164__PROF__CoreTop__l1848\n"); );
    // Body
    if (((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_en) 
         & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_waymask))) {
        vlSelf->__Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0__v0 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_MPORT_1_data;
        vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0__v0 = 1U;
        vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0__v0 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_addr;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__165__PROF__CoreTop__l1834(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__165__PROF__CoreTop__l1834\n"); );
    // Body
    if (((3U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state)) 
         & (~ (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r)))) {
        vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0[0U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0U];
        vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0[1U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[1U];
        vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0[2U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[2U];
        vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0[3U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[3U];
        vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0[4U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[4U];
        vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0[5U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[5U];
        vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0[6U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[6U];
        vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0[7U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[7U];
        vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0[8U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[8U];
        vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0[9U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[9U];
        vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0[0xaU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xaU];
        vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0[0xbU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xbU];
        vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0[0xcU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xcU];
        vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0[0xdU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xdU];
        vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0[0xeU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xeU];
        vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0[0xfU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xfU];
        vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0 = 1U;
        vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_addr;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__166__PROF__CoreTop__l1841(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__166__PROF__CoreTop__l1841\n"); );
    // Body
    if (((3U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state)) 
         & (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r))) {
        vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0[0U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0U];
        vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0[1U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[1U];
        vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0[2U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[2U];
        vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0[3U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[3U];
        vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0[4U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[4U];
        vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0[5U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[5U];
        vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0[6U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[6U];
        vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0[7U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[7U];
        vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0[8U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[8U];
        vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0[9U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[9U];
        vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0[0xaU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xaU];
        vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0[0xbU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xbU];
        vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0[0xcU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xcU];
        vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0[0xdU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xdU];
        vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0[0xeU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xeU];
        vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0[0xfU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xfU];
        vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0 = 1U;
        vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_addr;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__167__PROF__CoreTop__l1869(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__167__PROF__CoreTop__l1869\n"); );
    // Body
    if (((3U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state)) 
         & (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r))) {
        vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1__v0 = 1U;
        vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1__v0 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_addr;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__168__PROF__CoreTop__l1862(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__168__PROF__CoreTop__l1862\n"); );
    // Body
    if (((3U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state)) 
         & (~ (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r)))) {
        vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0__v0 = 1U;
        vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0__v0 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_addr;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__169__PROF__CoreTop__l1855(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__169__PROF__CoreTop__l1855\n"); );
    // Body
    if (((3U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state)) 
         & (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r))) {
        vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1__v0 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_MPORT_1_data;
        vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1__v0 = 1U;
        vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1__v0 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_addr;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__170__PROF__CoreTop__l1848(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__170__PROF__CoreTop__l1848\n"); );
    // Body
    if (((3U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state)) 
         & (~ (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r)))) {
        vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0__v0 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_MPORT_1_data;
        vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0__v0 = 1U;
        vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0__v0 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_addr;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__171__PROF__CoreTop__l2213(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__171__PROF__CoreTop__l2213\n"); );
    // Body
    if (((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
         & ((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
            & ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit) 
               & (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_0_result))))) {
        vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__lru__v0 = 1U;
        vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__lru__v0 
            = (0x1fU & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                >> 6U)));
    }
    if (((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
         & ((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
            & ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit) 
               & (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_1_result))))) {
        vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__lru__v1 = 1U;
        vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__lru__v1 
            = (0x1fU & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                >> 6U)));
    }
    if (((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
         & ((1U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
            & ((2U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
               & ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT___T_5) 
                  & (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r)))))) {
        vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__lru__v2 = 1U;
        vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__lru__v2 
            = (0x1fU & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                >> 6U)));
    }
    if (((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
         & ((1U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
            & ((2U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
               & ((~ (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r)) 
                  & (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT___T_5)))))) {
        vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__lru__v3 = 1U;
        vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__lru__v3 
            = (0x1fU & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                >> 6U)));
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__172__PROF__CoreTop__l3042(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__172__PROF__CoreTop__l3042\n"); );
    // Body
    if (((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0_MPORT_4_en) 
         & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_waymask) 
            >> 1U))) {
        vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1__v0 = 1U;
        vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1__v0 
            = (0x1fU & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                >> 6U)));
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__173__PROF__CoreTop__l3035(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__173__PROF__CoreTop__l3035\n"); );
    // Body
    if (((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0_MPORT_4_en) 
         & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_waymask))) {
        vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0__v0 = 1U;
        vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0__v0 
            = (0x1fU & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                >> 6U)));
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__174__PROF__CoreTop__l3083(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__174__PROF__CoreTop__l3083\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->__Vdly__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state = 0U;
    } else if ((0U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state))) {
        if ((3U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state))) {
            vlSelf->__Vdly__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state = 1U;
        }
    } else if ((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state))) {
        if (((~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)) 
             & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_ready))) {
            vlSelf->__Vdly__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state = 2U;
        }
    } else {
        vlSelf->__Vdly__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state 
            = ((2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state))
                ? (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_30)
                : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_32));
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__175__PROF__CoreTop__l3068(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__175__PROF__CoreTop__l3068\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->__Vdly__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state = 0U;
    } else if ((0U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state))) {
        if ((2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state))) {
            vlSelf->__Vdly__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state = 1U;
        }
    } else if ((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state))) {
        if (((~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)) 
             & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_ready))) {
            vlSelf->__Vdly__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state = 2U;
        }
    } else {
        vlSelf->__Vdly__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state 
            = ((2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state))
                ? (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_22)
                : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_24));
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__176__PROF__CoreTop__l3304(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__176__PROF__CoreTop__l3304\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->__Vdly__CoreTop__DOT__MMIO__DOT__birdge__DOT__read_state = 0U;
    } else if ((0U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__read_state))) {
        if ((((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_addr_req_valid) 
              & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_addr_req_bits_ce)) 
             & (~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_bits_we)))) {
            vlSelf->__Vdly__CoreTop__DOT__MMIO__DOT__birdge__DOT__read_state = 1U;
        }
    } else if ((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__read_state))) {
        if (((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_out_raddr_req_valid) 
             & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready) 
                & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_ready)))) {
            vlSelf->__Vdly__CoreTop__DOT__MMIO__DOT__birdge__DOT__read_state = 2U;
        }
    } else if ((2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__read_state))) {
        vlSelf->__Vdly__CoreTop__DOT__MMIO__DOT__birdge__DOT__read_state 
            = vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT___GEN_2;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__177__PROF__CoreTop__l3317(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__177__PROF__CoreTop__l3317\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->__Vdly__CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state = 0U;
    } else if ((0U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state))) {
        if ((((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_addr_req_bits_ce) 
              & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_addr_req_valid)) 
             & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_bits_we))) {
            vlSelf->__Vdly__CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state = 1U;
        }
    } else if ((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state))) {
        if ((((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready) 
              & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_ready)) 
             & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_out_waddr_req_valid))) {
            vlSelf->__Vdly__CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state = 2U;
        }
    } else {
        vlSelf->__Vdly__CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state 
            = ((2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state))
                ? (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT___GEN_8)
                : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT___GEN_10));
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__178__PROF__CoreTop__l3019(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__178__PROF__CoreTop__l3019\n"); );
    // Body
    if (((0U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
         & ((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
            & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit) 
               & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_0_result))))) {
        vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru__v0 = 1U;
        vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru__v0 
            = (0x1fU & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                >> 6U)));
    }
    if (((0U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
         & ((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
            & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit) 
               & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_1_result))))) {
        vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru__v1 = 1U;
        vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru__v1 
            = (0x1fU & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                >> 6U)));
    }
    if (((0U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
         & ((1U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
            & ((2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
               & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___T_8) 
                  & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_r)))))) {
        vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru__v2 = 1U;
        vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru__v2 
            = (0x1fU & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                >> 6U)));
    }
    if (((0U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
         & ((1U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
            & ((2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
               & ((~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_r)) 
                  & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___T_8)))))) {
        vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru__v3 = 1U;
        vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru__v3 
            = (0x1fU & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                >> 6U)));
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__179__PROF__CoreTop__l4988(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__179__PROF__CoreTop__l4988\n"); );
    // Body
    if (vlSelf->CoreTop__DOT__rf_MPORT_en) {
        vlSelf->__Vdlyvval__CoreTop__DOT__rf__v0 = 
            ((0U == (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest))
              ? 0ULL : vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfData);
        vlSelf->__Vdlyvset__CoreTop__DOT__rf__v0 = 1U;
        vlSelf->__Vdlyvdim0__CoreTop__DOT__rf__v0 = vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__180__PROF__CoreTop__l3050(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__180__PROF__CoreTop__l3050\n"); );
    // Body
    vlSelf->__Vdly__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state 
        = ((IData)(vlSelf->reset) ? 0U : ((0U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state))
                                           ? ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_valid)
                                               ? 1U
                                               : 0U)
                                           : ((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state))
                                               ? ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit)
                                                   ? 0U
                                                   : 
                                                  (((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_data)
                                                     ? 
                                                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1
                                                    [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1_dirt_w_addr_pipe_0]
                                                     : 
                                                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0
                                                    [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0_dirt_w_addr_pipe_0])
                                                    ? 3U
                                                    : 2U))
                                               : ((2U 
                                                   == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state))
                                                   ? (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_10)
                                                   : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_14)))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__181__PROF__SRAMTemp__l221(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__181__PROF__SRAMTemp__l221\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->__Vdly__CoreTop__DOT__MMEM__DOT__read_addr_buffer = 0ULL;
    } else {
        if (((0U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state)) 
             & (2U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_next_state)))) {
            vlSelf->__Vdly__CoreTop__DOT__MMEM__DOT__read_addr_buffer 
                = ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)
                    ? vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_bits_addr
                    : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)
                        ? vlSelf->CoreTop__DOT__ICACHE_io_out_raddr_req_bits_addr
                        : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                            ? ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)
                                ? vlSelf->CoreTop__DOT__ICACHE_io_out_raddr_req_bits_addr
                                : vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_bits_addr)
                            : vlSelf->CoreTop__DOT__ICACHE_io_out_raddr_req_bits_addr)));
        }
        if (((IData)((2U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state))) 
             & (~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_rdata_rep_bits_last)))) {
            vlSelf->__Vdly__CoreTop__DOT__MMEM__DOT__read_addr_buffer 
                = (8ULL + vlSelf->CoreTop__DOT__MMEM__DOT__read_addr_buffer);
        }
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__182__PROF__SRAMTemp__l221(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__182__PROF__SRAMTemp__l221\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->__Vdly__CoreTop__DOT__MMEM__DOT__write_addr_buffer = 0ULL;
    } else {
        if (((0U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_state)) 
             & (2U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_next_state)))) {
            vlSelf->__Vdly__CoreTop__DOT__MMEM__DOT__write_addr_buffer 
                = ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)
                    ? vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_bits_addr
                    : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)
                        ? 0ULL : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                                   ? ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)
                                       ? 0ULL : vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_bits_addr)
                                   : 0ULL)));
        }
        if (((((2U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_state)) 
               & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)
                   ? (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_valid)
                   : ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)) 
                      & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                          ? ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)) 
                             & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_valid))
                          : (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_valid))))) 
              & (IData)(vlSelf->CoreTop__DOT__MMEM_wd_ready)) 
             & (~ (IData)(vlSelf->CoreTop__DOT__MMEM_wd_last)))) {
            vlSelf->__Vdly__CoreTop__DOT__MMEM__DOT__write_addr_buffer 
                = (8ULL + vlSelf->CoreTop__DOT__MMEM__DOT__write_addr_buffer);
        }
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__183__PROF__CoreTop__l2248(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__183__PROF__CoreTop__l2248\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->__Vdly__CoreTop__DOT__ICACHE__DOT__read_state = 0U;
    } else if ((0U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state))) {
        if ((2U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state))) {
            vlSelf->__Vdly__CoreTop__DOT__ICACHE__DOT__read_state = 1U;
        }
    } else if ((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state))) {
        if (((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)) 
             & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)
                 ? (0U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state))
                 : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state) 
                    & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r) 
                       & (0U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state))))))) {
            vlSelf->__Vdly__CoreTop__DOT__ICACHE__DOT__read_state = 2U;
        }
    } else {
        vlSelf->__Vdly__CoreTop__DOT__ICACHE__DOT__read_state 
            = ((2U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state))
                ? (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_17)
                : (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_19));
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__184__PROF__SRAMTemp__l221(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__184__PROF__SRAMTemp__l221\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->__Vdly__CoreTop__DOT__MMEM__DOT__read_count = 0U;
    } else {
        if (((0U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state)) 
             & (2U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_next_state)))) {
            vlSelf->__Vdly__CoreTop__DOT__MMEM__DOT__read_count 
                = ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)
                    ? ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)
                        ? 0U : 7U) : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)
                                       ? 7U : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                                                ? ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)
                                                    ? 7U
                                                    : 
                                                   ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)
                                                     ? 0U
                                                     : 7U))
                                                : 7U)));
        }
        if (((IData)((2U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state))) 
             & (~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_rdata_rep_bits_last)))) {
            vlSelf->__Vdly__CoreTop__DOT__MMEM__DOT__read_count 
                = (0xffU & ((IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_count) 
                            - (IData)(1U)));
        }
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__185__PROF__CoreTop__l1865(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__185__PROF__CoreTop__l1865\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_en_pipe_0 = 1U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__186__PROF__CoreTop__l1858(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__186__PROF__CoreTop__l1858\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1_tag_w_en_pipe_0 = 1U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__187__PROF__CoreTop__l1872(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__187__PROF__CoreTop__l1872\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_en_pipe_0 = 1U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__188__PROF__CoreTop__l1837(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__188__PROF__CoreTop__l1837\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_en_pipe_0 = 1U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__189__PROF__CoreTop__l1844(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__189__PROF__CoreTop__l1844\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_en_pipe_0 = 1U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__190__PROF__CoreTop__l1851(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__190__PROF__CoreTop__l1851\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_tag_w_en_pipe_0 = 1U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__191__PROF__CoreTop__l3038(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__191__PROF__CoreTop__l3038\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0_dirt_w_en_pipe_0 = 1U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__192__PROF__CoreTop__l3045(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__192__PROF__CoreTop__l3045\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1_dirt_w_en_pipe_0 = 1U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__193__PROF__CoreTop__l3031(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__193__PROF__CoreTop__l3031\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_en_pipe_0 = 1U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__194__PROF__CoreTop__l1865(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__194__PROF__CoreTop__l1865\n"); );
    // Body
    vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_en_pipe_0 = 1U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__195__PROF__CoreTop__l1858(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__195__PROF__CoreTop__l1858\n"); );
    // Body
    vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_en_pipe_0 = 1U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__196__PROF__CoreTop__l1872(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__196__PROF__CoreTop__l1872\n"); );
    // Body
    vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_en_pipe_0 = 1U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__197__PROF__CoreTop__l1837(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__197__PROF__CoreTop__l1837\n"); );
    // Body
    vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_en_pipe_0 = 1U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__198__PROF__CoreTop__l1844(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__198__PROF__CoreTop__l1844\n"); );
    // Body
    vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_en_pipe_0 = 1U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__199__PROF__CoreTop__l1851(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__199__PROF__CoreTop__l1851\n"); );
    // Body
    vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_tag_w_en_pipe_0 = 1U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__200__PROF__CoreTop__l2225(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__200__PROF__CoreTop__l2225\n"); );
    // Body
    vlSelf->CoreTop__DOT__ICACHE__DOT__lru_lru_w_MPORT_en_pipe_0 = 1U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__201__PROF__CoreTop__l5440(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__201__PROF__CoreTop__l5440\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP_io_inst_REG = vlSelf->io_inst;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__202__PROF__CoreTop__l5397(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__202__PROF__CoreTop__l5397\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T_4) {
        vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfData 
            = vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfData;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__203__PROF__CoreTop__l1867(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__203__PROF__CoreTop__l1867\n"); );
    // Body
    vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0 
        = (0x1fU & (IData)((vlSelf->io_pc >> 6U)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__204__PROF__CoreTop__l1853(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__204__PROF__CoreTop__l1853\n"); );
    // Body
    vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_tag_w_addr_pipe_0 
        = (0x1fU & (IData)((vlSelf->io_pc >> 6U)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__205__PROF__CoreTop__l1860(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__205__PROF__CoreTop__l1860\n"); );
    // Body
    vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0 
        = (0x1fU & (IData)((vlSelf->io_pc >> 6U)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__206__PROF__CoreTop__l5444(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__206__PROF__CoreTop__l5444\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP_io_dnpc_REG = vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_Dnpc;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__207__PROF__CoreTop__l734(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__207__PROF__CoreTop__l734\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT__count = 0U;
    } else if ((1U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state))) {
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT__count 
            = vlSelf->CoreTop__DOT__EX__DOT__div__DOT___wrap_value_T_1;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__208__PROF__CoreTop__l2263(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__208__PROF__CoreTop__l2263\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0U] = 0U;
        vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[1U] = 0U;
        vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[2U] = 0U;
        vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[3U] = 0U;
        vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[4U] = 0U;
        vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[5U] = 0U;
        vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[6U] = 0U;
        vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[7U] = 0U;
        vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[8U] = 0U;
        vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[9U] = 0U;
        vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xaU] = 0U;
        vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xbU] = 0U;
        vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xcU] = 0U;
        vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xdU] = 0U;
        vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xeU] = 0U;
        vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xfU] = 0U;
    } else if ((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state))) {
        if ((1U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state))) {
            if ((2U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state))) {
                vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0U] 
                    = vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[0U];
                vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[1U] 
                    = vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[1U];
                vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[2U] 
                    = vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[2U];
                vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[3U] 
                    = vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[3U];
                vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[4U] 
                    = vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[4U];
                vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[5U] 
                    = vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[5U];
                vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[6U] 
                    = vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[6U];
                vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[7U] 
                    = vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[7U];
                vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[8U] 
                    = vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[8U];
                vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[9U] 
                    = vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[9U];
                vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xaU] 
                    = vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[0xaU];
                vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xbU] 
                    = vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[0xbU];
                vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xcU] 
                    = vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[0xcU];
                vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xdU] 
                    = vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[0xdU];
                vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xeU] 
                    = vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[0xeU];
                vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xfU] 
                    = vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[0xfU];
            }
        }
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__209__PROF__CoreTop__l5417(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__209__PROF__CoreTop__l5417\n"); );
    // Body
    if (vlSelf->CoreTop__DOT__MEM_io_out_valid) {
        vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_rfWen 
            = vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_rfWen;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__210__PROF__CoreTop__l2290(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__210__PROF__CoreTop__l2290\n"); );
    // Body
    vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_in_valid_REG 
        = ((IData)(vlSelf->CoreTop__DOT__IF_io_cache_req_addr_req_valid) 
           & (0U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__211__PROF__CoreTop__l5423(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__211__PROF__CoreTop__l5423\n"); );
    // Body
    if (vlSelf->CoreTop__DOT__MEM_io_out_valid) {
        vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_inst 
            = vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_inst;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__212__PROF__CoreTop__l720(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__212__PROF__CoreTop__l720\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S = (((QData)((IData)(
                                                                   vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_12[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_12[0U])));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__213__PROF__CoreTop__l3098(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__213__PROF__CoreTop__l3098\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0U] = 0U;
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[1U] = 0U;
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[2U] = 0U;
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[3U] = 0U;
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[4U] = 0U;
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[5U] = 0U;
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[6U] = 0U;
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[7U] = 0U;
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[8U] = 0U;
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[9U] = 0U;
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xaU] = 0U;
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xbU] = 0U;
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xcU] = 0U;
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xdU] = 0U;
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xeU] = 0U;
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xfU] = 0U;
    } else if ((0U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state))) {
        if ((1U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state))) {
            if ((2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state))) {
                vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0U] 
                    = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[0U];
                vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[1U] 
                    = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[1U];
                vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[2U] 
                    = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[2U];
                vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[3U] 
                    = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[3U];
                vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[4U] 
                    = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[4U];
                vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[5U] 
                    = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[5U];
                vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[6U] 
                    = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[6U];
                vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[7U] 
                    = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[7U];
                vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[8U] 
                    = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[8U];
                vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[9U] 
                    = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[9U];
                vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xaU] 
                    = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[0xaU];
                vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xbU] 
                    = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[0xbU];
                vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xcU] 
                    = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[0xcU];
                vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xdU] 
                    = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[0xdU];
                vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xeU] 
                    = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[0xeU];
                vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xfU] 
                    = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[0xfU];
            }
        }
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__214__PROF__CoreTop__l5326(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__214__PROF__CoreTop__l5326\n"); );
    // Body
    vlSelf->CoreTop__DOT__valid = ((~ (IData)(vlSelf->reset)) 
                                   & ((~ (IData)(vlSelf->CoreTop__DOT__IF_io_flush)) 
                                      & (IData)(vlSelf->CoreTop__DOT___GEN_197)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__215__PROF__CoreTop__l2272(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__215__PROF__CoreTop__l2272\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->CoreTop__DOT__ICACHE__DOT__mem_addr_reg = 0ULL;
    } else if ((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state))) {
        if ((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state))) {
            if ((1U & (~ (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit)))) {
                vlSelf->CoreTop__DOT__ICACHE__DOT__mem_addr_reg 
                    = (0xffffffffffffffc0ULL & vlSelf->CoreTop__DOT__IF__DOT__temp);
            }
        }
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__216__PROF__CoreTop__l3125(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__216__PROF__CoreTop__l3125\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count_write = 0U;
    } else if ((0U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state))) {
        if ((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state))) {
            if ((1U & (~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit)))) {
                vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count_write = 0U;
            }
        } else if ((2U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state))) {
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count_write 
                = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_89;
        }
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__217__PROF__CoreTop__l711(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__217__PROF__CoreTop__l711\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divisor = 0ULL;
        vlSelf->__Vdly__CoreTop__DOT__EX__DOT__div__DOT__state = 0U;
    } else {
        if ((0U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state))) {
            vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divisor 
                = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_flow_div_signed) 
                    & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src2 
                               >> 0x3fU))) ? (- vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src2)
                    : vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src2);
        }
        vlSelf->__Vdly__CoreTop__DOT__EX__DOT__div__DOT__state 
            = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__div_io_in_valid)
                ? ((2U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state))
                    ? 0U : (((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T) 
                             & (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__s))
                             ? 2U : (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_2)))
                : 0U);
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__218__PROF__CoreTop__l3145(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__218__PROF__CoreTop__l3145\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0U] = 0U;
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[1U] = 0U;
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[2U] = 0U;
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[3U] = 0U;
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[4U] = 0U;
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[5U] = 0U;
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[6U] = 0U;
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[7U] = 0U;
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[8U] = 0U;
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[9U] = 0U;
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xaU] = 0U;
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xbU] = 0U;
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xcU] = 0U;
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xdU] = 0U;
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xeU] = 0U;
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xfU] = 0U;
    } else if ((0U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state))) {
        if ((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state))) {
            if ((1U & (~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit)))) {
                if (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_data) {
                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0U] 
                        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[0U];
                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[1U] 
                        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[1U];
                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[2U] 
                        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[2U];
                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[3U] 
                        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[3U];
                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[4U] 
                        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[4U];
                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[5U] 
                        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[5U];
                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[6U] 
                        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[6U];
                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[7U] 
                        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[7U];
                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[8U] 
                        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[8U];
                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[9U] 
                        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[9U];
                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xaU] 
                        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[0xaU];
                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xbU] 
                        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[0xbU];
                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xcU] 
                        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[0xcU];
                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xdU] 
                        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[0xdU];
                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xeU] 
                        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[0xeU];
                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xfU] 
                        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[0xfU];
                } else {
                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0U] 
                        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[0U];
                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[1U] 
                        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[1U];
                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[2U] 
                        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[2U];
                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[3U] 
                        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[3U];
                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[4U] 
                        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[4U];
                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[5U] 
                        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[5U];
                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[6U] 
                        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[6U];
                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[7U] 
                        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[7U];
                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[8U] 
                        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[8U];
                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[9U] 
                        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[9U];
                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xaU] 
                        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[0xaU];
                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xbU] 
                        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[0xbU];
                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xcU] 
                        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[0xcU];
                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xdU] 
                        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[0xdU];
                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xeU] 
                        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[0xeU];
                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xfU] 
                        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[0xfU];
                }
            }
        } else if ((2U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state))) {
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0U] 
                = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0U];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[1U] 
                = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[1U];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[2U] 
                = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[2U];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[3U] 
                = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[3U];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[4U] 
                = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[4U];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[5U] 
                = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[5U];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[6U] 
                = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[6U];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[7U] 
                = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[7U];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[8U] 
                = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[8U];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[9U] 
                = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[9U];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xaU] 
                = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0xaU];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xbU] 
                = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0xbU];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xcU] 
                = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0xcU];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xdU] 
                = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0xdU];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xeU] 
                = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0xeU];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xfU] 
                = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0xfU];
        }
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__219__PROF__CoreTop__l5403(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__219__PROF__CoreTop__l5403\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T_4) {
        vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2 
            = vlSelf->CoreTop__DOT__EX__DOT__src2;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__220__PROF__CoreTop__l710(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__220__PROF__CoreTop__l710\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[2U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[3U] = 0U;
    } else if ((0U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state))) {
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[0U] 
            = (IData)((((IData)(vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_flow_div_signed) 
                        & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src1 
                                   >> 0x3fU))) ? (- vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src1)
                        : vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src1));
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[1U] 
            = (IData)(((((IData)(vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_flow_div_signed) 
                         & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src1 
                                    >> 0x3fU))) ? (- vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src1)
                         : vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src1) 
                       >> 0x20U));
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[2U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[3U] = 0U;
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[0U] 
            = vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_7[0U];
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[1U] 
            = vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_7[1U];
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[2U] 
            = vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_7[2U];
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[3U] 
            = vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_7[3U];
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__221__PROF__CoreTop__l5335(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__221__PROF__CoreTop__l5335\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T) {
        vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src2Type 
            = ((8U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)) 
               | ((7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)) 
                  | (3U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))));
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__222__PROF__CoreTop__l5332(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__222__PROF__CoreTop__l5332\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T) {
        vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src1Type 
            = (((7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                 ? 2U : 0U) | ((3U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                ? 2U : 0U));
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__223__PROF__CoreTop__l5442(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__223__PROF__CoreTop__l5442\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP_io_inst_valid_REG = ((IData)(vlSelf->CoreTop__DOT__valid_2) 
                                                   & (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_inst_valid));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__224__PROF__CoreTop__l3156(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__224__PROF__CoreTop__l3156\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_in_valid_REG 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_valid) 
           & (0U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__225__PROF__CoreTop__l515(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__225__PROF__CoreTop__l515\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->__Vdly__CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U] = 0U;
        vlSelf->__Vdly__CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[1U] = 0U;
        vlSelf->__Vdly__CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[2U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[2U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[3U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[4U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[2U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[3U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[4U] = 0U;
    } else if (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_valid) {
        if ((0U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count))) {
            vlSelf->__Vdly__CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U] 
                = ((IData)(((IData)(vlSelf->CoreTop__DOT__EX__DOT__is_mul)
                             ? vlSelf->CoreTop__DOT__EX__DOT__src2
                             : (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)))) 
                   << 1U);
            vlSelf->__Vdly__CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[1U] 
                = (((IData)(((IData)(vlSelf->CoreTop__DOT__EX__DOT__is_mul)
                              ? vlSelf->CoreTop__DOT__EX__DOT__src2
                              : (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)))) 
                    >> 0x1fU) | ((IData)((((IData)(vlSelf->CoreTop__DOT__EX__DOT__is_mul)
                                            ? vlSelf->CoreTop__DOT__EX__DOT__src2
                                            : (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__src2))) 
                                          >> 0x20U)) 
                                 << 1U));
            vlSelf->__Vdly__CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[2U] 
                = ((IData)((((IData)(vlSelf->CoreTop__DOT__EX__DOT__is_mul)
                              ? vlSelf->CoreTop__DOT__EX__DOT__src2
                              : (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__src2))) 
                            >> 0x20U)) >> 0x1fU);
            vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[0U] = 0U;
            vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[1U] = 0U;
            vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[2U] 
                = ((IData)(((IData)(vlSelf->CoreTop__DOT__EX__DOT__is_mul)
                             ? vlSelf->CoreTop__DOT__EX__DOT__src1
                             : (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__src1)))) 
                   << 2U);
            vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[3U] 
                = (((IData)(((IData)(vlSelf->CoreTop__DOT__EX__DOT__is_mul)
                              ? vlSelf->CoreTop__DOT__EX__DOT__src1
                              : (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__src1)))) 
                    >> 0x1eU) | ((IData)((((IData)(vlSelf->CoreTop__DOT__EX__DOT__is_mul)
                                            ? vlSelf->CoreTop__DOT__EX__DOT__src1
                                            : (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__src1))) 
                                          >> 0x20U)) 
                                 << 2U));
            vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[4U] 
                = ((IData)((((IData)(vlSelf->CoreTop__DOT__EX__DOT__is_mul)
                              ? vlSelf->CoreTop__DOT__EX__DOT__src1
                              : (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__src1))) 
                            >> 0x20U)) >> 0x1eU);
            vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[0U] = 0U;
            vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[1U] = 0U;
            vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[2U] = 0U;
            vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[3U] = 0U;
            vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[4U] = 0U;
        } else {
            vlSelf->__Vdly__CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U] 
                = (IData)((((QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[2U])) 
                            << 0x3eU) | (((QData)((IData)(
                                                          vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[1U])) 
                                          << 0x1eU) 
                                         | ((QData)((IData)(
                                                            vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U])) 
                                            >> 2U))));
            vlSelf->__Vdly__CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[1U] 
                = (IData)(((((QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[2U])) 
                             << 0x3eU) | (((QData)((IData)(
                                                           vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[1U])) 
                                           << 0x1eU) 
                                          | ((QData)((IData)(
                                                             vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U])) 
                                             >> 2U))) 
                           >> 0x20U));
            vlSelf->__Vdly__CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[2U] = 0U;
            vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[0U] 
                = ((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__temp[1U] 
                    << 0x1eU) | (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__temp[0U] 
                                 >> 2U));
            vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[1U] 
                = ((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__temp[2U] 
                    << 0x1eU) | (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__temp[1U] 
                                 >> 2U));
            vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[2U] 
                = ((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__temp[3U] 
                    << 0x1eU) | (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__temp[2U] 
                                 >> 2U));
            vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[3U] 
                = ((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__temp[4U] 
                    << 0x1eU) | (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__temp[3U] 
                                 >> 2U));
            vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[4U] 
                = ((((8U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__temp[4U])
                      ? 3U : 0U) << 2U) | (3U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__temp[4U] 
                                                 >> 2U)));
        }
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__226__PROF__CoreTop__l3033(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__226__PROF__CoreTop__l3033\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_addr_pipe_0 
        = (0x1fU & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                            >> 6U)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__227__PROF__CoreTop__l5441(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__227__PROF__CoreTop__l5441\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP_io_is_skip_REG = vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_skip;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__228__PROF__CoreTop__l1853(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__228__PROF__CoreTop__l1853\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_tag_w_addr_pipe_0 
        = (0x1fU & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                            >> 6U)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__229__PROF__CoreTop__l3107(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__229__PROF__CoreTop__l3107\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_addr_reg = 0ULL;
    } else if ((0U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state))) {
        if ((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state))) {
            if ((1U & (~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit)))) {
                vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_addr_reg 
                    = (0xffffffffffffffc0ULL & vlSelf->CoreTop__DOT__MEM__DOT__addr_temp);
            }
        }
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__230__PROF__CoreTop__l5373(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__230__PROF__CoreTop__l5373\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T_4) {
        vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_fuType 
            = vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__231__PROF__CoreTop__l5376(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__231__PROF__CoreTop__l5376\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T_4) {
        vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_inst_valid 
            = vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_inst_valid;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__232__PROF__CoreTop__l3136(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__232__PROF__CoreTop__l3136\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_addr_reg = 0ULL;
    } else if ((0U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state))) {
        if ((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state))) {
            if ((1U & (~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit)))) {
                vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_addr_reg 
                    = ((((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_data)
                          ? vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1_tag_w_data
                          : vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_tag_w_data) 
                        << 0xbU) | (QData)((IData)(
                                                   (0x7c0U 
                                                    & ((IData)(
                                                               (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                                >> 6U)) 
                                                       << 6U)))));
            }
        }
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__233__PROF__CoreTop__l5356(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__233__PROF__CoreTop__l5356\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T) {
        vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_src2 
            = (((IData)(vlSelf->CoreTop__DOT__ID_io_ex_reg_rfWen) 
                & ((IData)(vlSelf->__VdfgTmp_ha248cb35__0) 
                   & (0U != (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest))))
                ? vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfData
                : (((IData)(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfWen) 
                    & (((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest) 
                        == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                     >> 0x14U))) & 
                       (0U != (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest))))
                    ? vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfData
                    : (((IData)(vlSelf->CoreTop__DOT__rf_MPORT_en) 
                        & (((IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest) 
                            == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                         >> 0x14U))) 
                           & (0U != (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest))))
                        ? vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfData
                        : ((0U == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                            >> 0x14U)))
                            ? 0ULL : vlSelf->CoreTop__DOT__rf
                           [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                      >> 0x14U))]))));
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__234__PROF__CoreTop__l5353(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__234__PROF__CoreTop__l5353\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T) {
        vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_src1 
            = (((IData)(vlSelf->CoreTop__DOT__ID_io_ex_reg_rfWen) 
                & ((IData)(vlSelf->__VdfgTmp_ha116befc__0) 
                   & (0U != (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest))))
                ? vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfData
                : (((IData)(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfWen) 
                    & (((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest) 
                        == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                     >> 0xfU))) & (0U 
                                                   != (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest))))
                    ? vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfData
                    : (((IData)(vlSelf->CoreTop__DOT__rf_MPORT_en) 
                        & (((IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest) 
                            == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                         >> 0xfU))) 
                           & (0U != (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest))))
                        ? vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfData
                        : ((0U == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                            >> 0xfU)))
                            ? 0ULL : vlSelf->CoreTop__DOT__rf
                           [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                      >> 0xfU))]))));
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__235__PROF__CoreTop__l1341(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__235__PROF__CoreTop__l1341\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->CoreTop__DOT__EX__DOT__mip = 0ULL;
    } else if ((0x40U != (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
        if ((0x1aU != (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
            if ((0x68U != (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
                vlSelf->CoreTop__DOT__EX__DOT__mip 
                    = vlSelf->CoreTop__DOT__EX__DOT___GEN_172;
            }
        }
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__236__PROF__CoreTop__l1332(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__236__PROF__CoreTop__l1332\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->CoreTop__DOT__EX__DOT__mie = 0ULL;
    } else if ((0x40U != (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
        if ((0x1aU != (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
            if ((0x68U != (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
                vlSelf->CoreTop__DOT__EX__DOT__mie 
                    = vlSelf->CoreTop__DOT__EX__DOT___GEN_171;
            }
        }
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__237__PROF__CoreTop__l1353(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__237__PROF__CoreTop__l1353\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mcause_REG_1 
        = vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mcause_REG;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__238__PROF__CoreTop__l1357(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__238__PROF__CoreTop__l1357\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mstatus_REG_1 
        = vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mstatus_REG;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__239__PROF__CoreTop__l1351(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__239__PROF__CoreTop__l1351\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mtvec_REG_1 
        = vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mtvec_REG;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__240__PROF__CoreTop__l1867(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__240__PROF__CoreTop__l1867\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0 
        = (0x1fU & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                            >> 6U)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__241__PROF__CoreTop__l5439(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__241__PROF__CoreTop__l5439\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP_io_is_break_REG_1 = vlSelf->CoreTop__DOT__DIP_io_is_break_REG;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__242__PROF__CoreTop__l5400(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__242__PROF__CoreTop__l5400\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T_4) {
        vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src1 
            = vlSelf->CoreTop__DOT__EX__DOT__src1;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__243__PROF__CoreTop__l5369(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__243__PROF__CoreTop__l5369\n"); );
    // Body
    vlSelf->CoreTop__DOT__valid_1 = ((~ (IData)(vlSelf->reset)) 
                                     & (IData)(vlSelf->CoreTop__DOT___GEN_216));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__244__PROF__CoreTop__l5406(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__244__PROF__CoreTop__l5406\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T_4) {
        vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_Imm 
            = vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__245__PROF__CoreTop__l5382(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__245__PROF__CoreTop__l5382\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T_4) {
        vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype 
            = vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__246__PROF__CoreTop__l5443(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__246__PROF__CoreTop__l5443\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP_io_pc_REG = vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_PC;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__247__PROF__CoreTop__l1355(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__247__PROF__CoreTop__l1355\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mepc_REG_1 
        = vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mepc_REG;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__248__PROF__CoreTop__l1835(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__248__PROF__CoreTop__l1835\n"); );
    // Body
    if (vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0) {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0][0U] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0[0U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0][1U] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0[1U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0][2U] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0[2U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0][3U] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0[3U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0][4U] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0[4U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0][5U] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0[5U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0][6U] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0[6U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0][7U] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0[7U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0][8U] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0[8U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0][9U] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0[9U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0][0xaU] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0[0xaU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0][0xbU] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0[0xbU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0][0xcU] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0[0xcU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0][0xdU] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0[0xdU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0][0xeU] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0[0xeU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0][0xfU] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0[0xfU];
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__249__PROF__CoreTop__l1842(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__249__PROF__CoreTop__l1842\n"); );
    // Body
    if (vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0) {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0][0U] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0[0U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0][1U] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0[1U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0][2U] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0[2U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0][3U] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0[3U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0][4U] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0[4U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0][5U] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0[5U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0][6U] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0[6U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0][7U] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0[7U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0][8U] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0[8U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0][9U] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0[9U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0][0xaU] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0[0xaU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0][0xbU] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0[0xbU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0][0xcU] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0[0xcU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0][0xdU] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0[0xdU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0][0xeU] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0[0xeU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0][0xfU] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0[0xfU];
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__250__PROF__CoreTop__l1863(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__250__PROF__CoreTop__l1863\n"); );
    // Body
    if (vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0__v0) {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0__v0] = 1U;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__251__PROF__CoreTop__l1870(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__251__PROF__CoreTop__l1870\n"); );
    // Body
    if (vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1__v0) {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1__v0] = 1U;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__252__PROF__CoreTop__l1856(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__252__PROF__CoreTop__l1856\n"); );
    // Body
    if (vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1__v0) {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1__v0] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1__v0;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__253__PROF__CoreTop__l1849(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__253__PROF__CoreTop__l1849\n"); );
    // Body
    if (vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0__v0) {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0__v0] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0__v0;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__254__PROF__CoreTop__l1835(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__254__PROF__CoreTop__l1835\n"); );
    // Body
    if (vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0) {
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0][0U] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0[0U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0][1U] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0[1U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0][2U] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0[2U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0][3U] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0[3U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0][4U] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0[4U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0][5U] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0[5U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0][6U] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0[6U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0][7U] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0[7U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0][8U] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0[8U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0][9U] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0[9U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0][0xaU] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0[0xaU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0][0xbU] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0[0xbU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0][0xcU] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0[0xcU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0][0xdU] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0[0xdU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0][0xeU] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0[0xeU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0][0xfU] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0[0xfU];
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__255__PROF__CoreTop__l1842(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__255__PROF__CoreTop__l1842\n"); );
    // Body
    if (vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0) {
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0][0U] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0[0U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0][1U] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0[1U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0][2U] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0[2U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0][3U] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0[3U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0][4U] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0[4U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0][5U] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0[5U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0][6U] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0[6U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0][7U] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0[7U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0][8U] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0[8U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0][9U] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0[9U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0][0xaU] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0[0xaU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0][0xbU] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0[0xbU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0][0xcU] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0[0xcU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0][0xdU] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0[0xdU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0][0xeU] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0[0xeU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0][0xfU] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0[0xfU];
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__256__PROF__CoreTop__l1870(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__256__PROF__CoreTop__l1870\n"); );
    // Body
    if (vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1__v0) {
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1__v0] = 1U;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__257__PROF__CoreTop__l1863(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__257__PROF__CoreTop__l1863\n"); );
    // Body
    if (vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0__v0) {
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0__v0] = 1U;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__258__PROF__CoreTop__l1856(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__258__PROF__CoreTop__l1856\n"); );
    // Body
    if (vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1__v0) {
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1__v0] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1__v0;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__259__PROF__CoreTop__l1849(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__259__PROF__CoreTop__l1849\n"); );
    // Body
    if (vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0__v0) {
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0__v0] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0__v0;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__261__PROF__CoreTop__l3084(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__261__PROF__CoreTop__l3084\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state 
        = vlSelf->__Vdly__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__262__PROF__CoreTop__l3069(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__262__PROF__CoreTop__l3069\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state 
        = vlSelf->__Vdly__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__263__PROF__CoreTop__l3305(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__263__PROF__CoreTop__l3305\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__read_state 
        = vlSelf->__Vdly__CoreTop__DOT__MMIO__DOT__birdge__DOT__read_state;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__264__PROF__CoreTop__l3318(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__264__PROF__CoreTop__l3318\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state 
        = vlSelf->__Vdly__CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__265__PROF__CoreTop__l3020(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__265__PROF__CoreTop__l3020\n"); );
    // Body
    if (vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru__v0) {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru__v0] = 1U;
    }
    if (vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru__v1) {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru__v1] = 0U;
    }
    if (vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru__v2) {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru__v2] = 0U;
    }
    if (vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru__v3) {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru__v3] = 1U;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__267__PROF__CoreTop__l3043(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__267__PROF__CoreTop__l3043\n"); );
    // Body
    if (vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1__v0) {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1__v0] = 1U;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__268__PROF__CoreTop__l3036(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__268__PROF__CoreTop__l3036\n"); );
    // Body
    if (vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0__v0) {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0__v0] = 1U;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__271__PROF__SRAMTemp__l223(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__271__PROF__SRAMTemp__l223\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMEM__DOT__read_addr_buffer 
        = vlSelf->__Vdly__CoreTop__DOT__MMEM__DOT__read_addr_buffer;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__272__PROF__SRAMTemp__l224(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__272__PROF__SRAMTemp__l224\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMEM__DOT__write_addr_buffer 
        = vlSelf->__Vdly__CoreTop__DOT__MMEM__DOT__write_addr_buffer;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__274__PROF__CoreTop__l2249(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__274__PROF__CoreTop__l2249\n"); );
    // Body
    vlSelf->CoreTop__DOT__ICACHE__DOT__read_state = vlSelf->__Vdly__CoreTop__DOT__ICACHE__DOT__read_state;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__275__PROF__SRAMTemp__l222(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__275__PROF__SRAMTemp__l222\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMEM__DOT__read_count = vlSelf->__Vdly__CoreTop__DOT__MMEM__DOT__read_count;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__316__PROF__CoreTop__l722(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__316__PROF__CoreTop__l722\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state 
        = vlSelf->__Vdly__CoreTop__DOT__EX__DOT__div__DOT__state;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__325__PROF__CoreTop__l516(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__325__PROF__CoreTop__l516\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U] 
        = vlSelf->__Vdly__CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U];
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[1U] 
        = vlSelf->__Vdly__CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[1U];
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[2U] 
        = vlSelf->__Vdly__CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[2U];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__341__PROF__CoreTop__l4989(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__341__PROF__CoreTop__l4989\n"); );
    // Body
    if (vlSelf->__Vdlyvset__CoreTop__DOT__rf__v0) {
        vlSelf->CoreTop__DOT__rf[vlSelf->__Vdlyvdim0__CoreTop__DOT__rf__v0] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__rf__v0;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__362__PROF__CoreTop__l2281(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__362__PROF__CoreTop__l2281\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r = 0U;
    } else if ((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state))) {
        if ((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state))) {
            if ((1U & (~ (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit)))) {
                vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r 
                    = vlSelf->CoreTop__DOT__ICACHE__DOT__lru
                    [vlSelf->CoreTop__DOT__ICACHE__DOT__lru_lru_w_MPORT_addr_pipe_0];
            }
        }
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__363__PROF__CoreTop__l3293(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__363__PROF__CoreTop__l3293\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_out_raddr_req_valid 
        = (1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__read_state));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__364__PROF__CoreTop__l3295(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__364__PROF__CoreTop__l3295\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_out_waddr_req_valid 
        = (1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__365__PROF__CoreTop__l3116(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__365__PROF__CoreTop__l3116\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_r = 0U;
    } else if ((0U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state))) {
        if ((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state))) {
            if ((1U & (~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit)))) {
                vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_r 
                    = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_data;
            }
        }
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__366__PROF__CoreTop__l3047(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__366__PROF__CoreTop__l3047\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1_dirt_w_addr_pipe_0 
        = (0x1fU & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                            >> 6U)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__367__PROF__CoreTop__l3040(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__367__PROF__CoreTop__l3040\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0_dirt_w_addr_pipe_0 
        = (0x1fU & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                            >> 6U)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__368__PROF__SRAMTemp__l213(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__368__PROF__SRAMTemp__l213\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMEM__DOT__write_state = 
        ((IData)(vlSelf->reset) ? 0U : (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_next_state));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__369__PROF__SRAMTemp__l212(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__369__PROF__SRAMTemp__l212\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMEM__DOT__read_state = ((IData)(vlSelf->reset)
                                                    ? 0U
                                                    : (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_next_state));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__370__PROF__CoreTop__l2530(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__370__PROF__CoreTop__l2530\n"); );
    // Body
    vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r = 
        ((~ (IData)(vlSelf->reset)) & ((~ (((IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_valid) 
                                            | (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_valid)) 
                                           & (~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)))) 
                                       & (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT___GEN_98)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__371__PROF__DIP_model__l85(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__371__PROF__DIP_model__l85\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__IN[0U] = vlSelf->CoreTop__DOT__DIP_io_inst_REG;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__372__PROF__DIP_model__l89(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__372__PROF__DIP_model__l89\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__IN[4U] = (IData)(vlSelf->CoreTop__DOT__DIP_io_dnpc_REG);
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__373__PROF__DIP_model__l90(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__373__PROF__DIP_model__l90\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__IN[5U] = (IData)(
                                                     (vlSelf->CoreTop__DOT__DIP_io_dnpc_REG 
                                                      >> 0x20U));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__374__PROF__CoreTop__l5426(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__374__PROF__CoreTop__l5426\n"); );
    // Body
    if (vlSelf->CoreTop__DOT__MEM_io_out_valid) {
        vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_Dnpc 
            = vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_Dnpc;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__375__PROF__CoreTop__l658(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__375__PROF__CoreTop__l658\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT___wrap_value_T_1 
        = (0x3fU & ((IData)(1U) + (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__count)));
}

extern const VlWide<16>/*511:0*/ VCoreTop__ConstPool__CONST_h93e1b771_0;

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__376__PROF__CoreTop__l1784(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__376__PROF__CoreTop__l1784\n"); );
    // Body
    if ((3U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state))) {
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[1U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[1U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[2U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[2U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[3U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[3U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[4U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[4U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[5U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[5U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[6U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[6U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[7U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[7U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[8U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[8U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[9U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[9U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xaU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xaU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xbU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xbU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xcU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xcU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xdU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xdU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xeU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xeU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xfU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xfU];
    } else {
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[1U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[2U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[3U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[4U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[5U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[6U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[7U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[8U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[9U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xaU] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xbU] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xcU] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xdU] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xeU] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xfU] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[0xfU];
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__377__PROF__CoreTop__l5379(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__377__PROF__CoreTop__l5379\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T_4) {
        vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_rfWen 
            = vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfWen;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__378__PROF__CoreTop__l4794(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__378__PROF__CoreTop__l4794\n"); );
    // Body
    vlSelf->io_inst = vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_inst;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__379__PROF__CoreTop__l5388(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__379__PROF__CoreTop__l5388\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T_4) {
        vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_inst 
            = vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_inst;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__380__PROF__CoreTop__l681(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__380__PROF__CoreTop__l681\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_12 
        = ((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S 
                          >> 0x3fU))) ? (- vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S)
            : vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S);
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__381__PROF__CoreTop__l683(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__381__PROF__CoreTop__l683\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_17 
        = ((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S 
                          >> 0x3fU))) ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S
            : (- vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__382__PROF__CoreTop__l2195(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__382__PROF__CoreTop__l2195\n"); );
    // Body
    vlSelf->CoreTop__DOT__ICACHE_io_out_raddr_req_bits_addr 
        = ((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state))
            ? vlSelf->CoreTop__DOT__ICACHE__DOT__mem_addr_reg
            : 0ULL);
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__383__PROF__CoreTop__l655(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__383__PROF__CoreTop__l655\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T = (1U 
                                                   == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__384__PROF__CoreTop__l660(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__384__PROF__CoreTop__l660\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_2 
        = ((0U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state))
            ? 1U : (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__385__PROF__CoreTop__l659(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__385__PROF__CoreTop__l659\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__s = ((1U 
                                                   == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state)) 
                                                  & (0x3fU 
                                                     == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__count)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__386__PROF__CoreTop__l667(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__386__PROF__CoreTop__l667\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h6e9a4fab__0;
    VlWide<3>/*95:0*/ __Vtemp_h9411da29__0;
    VlWide<3>/*95:0*/ __Vtemp_h342aced3__0;
    // Body
    __Vtemp_h6e9a4fab__0[0U] = ((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[2U] 
                                 << 1U) | (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[1U] 
                                           >> 0x1fU));
    __Vtemp_h6e9a4fab__0[1U] = ((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[3U] 
                                 << 1U) | (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[2U] 
                                           >> 0x1fU));
    __Vtemp_h6e9a4fab__0[2U] = (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[3U] 
                                >> 0x1fU);
    __Vtemp_h9411da29__0[0U] = (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divisor);
    __Vtemp_h9411da29__0[1U] = (IData)((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divisor 
                                        >> 0x20U));
    __Vtemp_h9411da29__0[2U] = 0U;
    VL_SUB_W(3, __Vtemp_h342aced3__0, __Vtemp_h6e9a4fab__0, __Vtemp_h9411da29__0);
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div[0U] 
        = __Vtemp_h342aced3__0[0U];
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div[1U] 
        = __Vtemp_h342aced3__0[1U];
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div[2U] 
        = (1U & __Vtemp_h342aced3__0[2U]);
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__387__PROF__CoreTop__l682(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__387__PROF__CoreTop__l682\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_15 
        = ((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[3U] 
            >> 0x1fU) ? (- (((QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[3U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[2U]))))
            : (((QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[3U])) 
                << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[2U]))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__388__PROF__CoreTop__l684(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__388__PROF__CoreTop__l684\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_25 
        = ((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[3U] 
            >> 0x1fU) ? (((QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[3U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[2U])))
            : (- (((QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[3U])) 
                   << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[2U])))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__389__PROF__DIP_model__l88(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__389__PROF__DIP_model__l88\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__IN[3U] = vlSelf->CoreTop__DOT__DIP_io_inst_valid_REG;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__390__PROF__CoreTop__l5410(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__390__PROF__CoreTop__l5410\n"); );
    // Body
    vlSelf->CoreTop__DOT__valid_2 = ((~ (IData)(vlSelf->reset)) 
                                     & (IData)(vlSelf->CoreTop__DOT___GEN_238));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__391__PROF__CoreTop__l5414(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__391__PROF__CoreTop__l5414\n"); );
    // Body
    if (vlSelf->CoreTop__DOT__MEM_io_out_valid) {
        vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_inst_valid 
            = vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_signal_inst_valid;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__392__PROF__CoreTop__l464(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__392__PROF__CoreTop__l464\n"); );
    // Body
    if ((1U == (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[0U] 
            = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[1U] 
            = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[2U] 
            = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[2U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[3U] 
            = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[3U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[4U] 
            = (0x1fU & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[4U]);
    } else if ((2U == (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[0U] 
            = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[1U] 
            = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[2U] 
            = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[2U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[3U] 
            = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[3U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[4U] 
            = (0x1fU & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[4U]);
    } else if ((3U == (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[0U] 
            = (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[0U] 
               << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[1U] 
            = ((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[0U] 
                >> 0x1fU) | (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[1U] 
                             << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[2U] 
            = ((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[1U] 
                >> 0x1fU) | (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[2U] 
                             << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[3U] 
            = ((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[2U] 
                >> 0x1fU) | (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[3U] 
                             << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[4U] 
            = (0x1fU & ((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[3U] 
                         >> 0x1fU) | (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[4U] 
                                      << 1U)));
    } else if ((4U == (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[0U] 
            = (~ (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[0U] 
                  << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[1U] 
            = (~ ((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[0U] 
                   >> 0x1fU) | (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[1U] 
                                << 1U)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[2U] 
            = (~ ((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[1U] 
                   >> 0x1fU) | (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[2U] 
                                << 1U)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[3U] 
            = (~ ((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[2U] 
                   >> 0x1fU) | (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[3U] 
                                << 1U)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[4U] 
            = (0x1fU & (~ ((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[3U] 
                            >> 0x1fU) | (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[4U] 
                                         << 1U))));
    } else {
        if ((5U == (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))) {
            vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[0U] 
                = (~ vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[0U]);
            vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[1U] 
                = (~ vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[1U]);
            vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[2U] 
                = (~ vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[2U]);
            vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[3U] 
                = (~ vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[3U]);
        } else if ((6U == (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))) {
            vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[0U] 
                = (~ vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[0U]);
            vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[1U] 
                = (~ vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[1U]);
            vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[2U] 
                = (~ vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[2U]);
            vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[3U] 
                = (~ vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[3U]);
        } else {
            vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[0U] = 0U;
            vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[1U] = 0U;
            vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[2U] = 0U;
            vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[3U] = 0U;
        }
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[4U] 
            = (0x1fU & (0xfU & ((5U == (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                 ? (~ vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[4U])
                                 : ((6U == (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                     ? (~ vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[4U])
                                     : 0U))));
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__393__PROF__CoreTop__l541(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__393__PROF__CoreTop__l541\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count 
        = ((IData)(vlSelf->reset) ? 0U : (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_valid) 
                                           & (~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_out_valid)))
                                           ? (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT___count_T_5)
                                           : 0U));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__394__PROF__DIP_model__l91(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__394__PROF__DIP_model__l91\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__IN[6U] = vlSelf->CoreTop__DOT__DIP_io_is_skip_REG;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__395__PROF__CoreTop__l5429(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__395__PROF__CoreTop__l5429\n"); );
    // Body
    if (vlSelf->CoreTop__DOT__MEM_io_out_valid) {
        vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_skip 
            = ((0xa0000048ULL == vlSelf->CoreTop__DOT__MEM__DOT__addr_temp) 
               | ((0xa00003f8ULL == vlSelf->CoreTop__DOT__MEM__DOT__addr_temp) 
                  | ((0xa0000000ULL <= vlSelf->CoreTop__DOT__MEM__DOT__addr_temp) 
                     & (0xa1200000ULL >= vlSelf->CoreTop__DOT__MEM__DOT__addr_temp))));
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__396__PROF__CoreTop__l1797(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__396__PROF__CoreTop__l1797\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_tag_w_data 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_tag_w_addr_pipe_0];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__397__PROF__CoreTop__l5338(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__397__PROF__CoreTop__l5338\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T) {
        vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType 
            = ((0x13U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                ? 0U : ((0x1013U == (0xfc00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                         ? 1U : ((0x6013U == (0x707fU 
                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                  ? 0U : ((0x3003U 
                                           == (0x707fU 
                                               & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                           ? 4U : (
                                                   (0x2003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                    ? 4U
                                                    : 
                                                   ((0x3013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                     ? 5U
                                                     : 
                                                    ((0x1bU 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                      ? 0U
                                                      : 
                                                     ((0x40005013U 
                                                       == 
                                                       (0xfc00707fU 
                                                        & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                       ? 1U
                                                       : 
                                                      ((0x4003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                        ? 4U
                                                        : 
                                                       ((3U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                         ? 4U
                                                         : 
                                                        ((0x4013U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                          ? 0U
                                                          : 
                                                         ((0x7013U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                           ? 0U
                                                           : 
                                                          ((0x5013U 
                                                            == 
                                                            (0xfc00707fU 
                                                             & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                            ? 1U
                                                            : 
                                                           ((0x1003U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                             ? 4U
                                                             : 
                                                            ((0x5003U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                              ? 4U
                                                              : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_239))))))))))))))));
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__398__PROF__CoreTop__l5435(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__398__PROF__CoreTop__l5435\n"); );
    // Body
    if (vlSelf->CoreTop__DOT__MEM_io_out_valid) {
        vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfData 
            = vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfData;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__399__PROF__CoreTop__l5432(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__399__PROF__CoreTop__l5432\n"); );
    // Body
    if (vlSelf->CoreTop__DOT__MEM_io_out_valid) {
        vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest 
            = vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__400__PROF__DIP_model__l52(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__400__PROF__DIP_model__l52\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0U] = vlSelf->CoreTop__DOT__rf
        [0U];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__401__PROF__DIP_model__l53(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__401__PROF__DIP_model__l53\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[1U] = vlSelf->CoreTop__DOT__rf
        [1U];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__402__PROF__DIP_model__l54(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__402__PROF__DIP_model__l54\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[2U] = vlSelf->CoreTop__DOT__rf
        [2U];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__403__PROF__DIP_model__l55(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__403__PROF__DIP_model__l55\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[3U] = vlSelf->CoreTop__DOT__rf
        [3U];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__404__PROF__DIP_model__l56(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__404__PROF__DIP_model__l56\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[4U] = vlSelf->CoreTop__DOT__rf
        [4U];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__405__PROF__DIP_model__l57(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__405__PROF__DIP_model__l57\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[5U] = vlSelf->CoreTop__DOT__rf
        [5U];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__406__PROF__DIP_model__l58(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__406__PROF__DIP_model__l58\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[6U] = vlSelf->CoreTop__DOT__rf
        [6U];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__407__PROF__DIP_model__l59(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__407__PROF__DIP_model__l59\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[7U] = vlSelf->CoreTop__DOT__rf
        [7U];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__408__PROF__DIP_model__l60(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__408__PROF__DIP_model__l60\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[8U] = vlSelf->CoreTop__DOT__rf
        [8U];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__409__PROF__DIP_model__l61(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__409__PROF__DIP_model__l61\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[9U] = vlSelf->CoreTop__DOT__rf
        [9U];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__410__PROF__DIP_model__l62(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__410__PROF__DIP_model__l62\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0xaU] = vlSelf->CoreTop__DOT__rf
        [0xaU];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__411__PROF__DIP_model__l63(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__411__PROF__DIP_model__l63\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0xbU] = vlSelf->CoreTop__DOT__rf
        [0xbU];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__412__PROF__DIP_model__l64(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__412__PROF__DIP_model__l64\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0xcU] = vlSelf->CoreTop__DOT__rf
        [0xcU];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__413__PROF__DIP_model__l65(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__413__PROF__DIP_model__l65\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0xdU] = vlSelf->CoreTop__DOT__rf
        [0xdU];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__414__PROF__DIP_model__l66(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__414__PROF__DIP_model__l66\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0xeU] = vlSelf->CoreTop__DOT__rf
        [0xeU];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__415__PROF__DIP_model__l67(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__415__PROF__DIP_model__l67\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0xfU] = vlSelf->CoreTop__DOT__rf
        [0xfU];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__416__PROF__DIP_model__l68(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__416__PROF__DIP_model__l68\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0x10U] = vlSelf->CoreTop__DOT__rf
        [0x10U];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__417__PROF__DIP_model__l69(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__417__PROF__DIP_model__l69\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0x11U] = vlSelf->CoreTop__DOT__rf
        [0x11U];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__418__PROF__DIP_model__l70(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__418__PROF__DIP_model__l70\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0x12U] = vlSelf->CoreTop__DOT__rf
        [0x12U];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__419__PROF__DIP_model__l71(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__419__PROF__DIP_model__l71\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0x13U] = vlSelf->CoreTop__DOT__rf
        [0x13U];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__420__PROF__DIP_model__l72(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__420__PROF__DIP_model__l72\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0x14U] = vlSelf->CoreTop__DOT__rf
        [0x14U];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__421__PROF__DIP_model__l73(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__421__PROF__DIP_model__l73\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0x15U] = vlSelf->CoreTop__DOT__rf
        [0x15U];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__422__PROF__DIP_model__l74(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__422__PROF__DIP_model__l74\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0x16U] = vlSelf->CoreTop__DOT__rf
        [0x16U];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__423__PROF__DIP_model__l75(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__423__PROF__DIP_model__l75\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0x17U] = vlSelf->CoreTop__DOT__rf
        [0x17U];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__424__PROF__DIP_model__l76(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__424__PROF__DIP_model__l76\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0x18U] = vlSelf->CoreTop__DOT__rf
        [0x18U];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__425__PROF__DIP_model__l77(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__425__PROF__DIP_model__l77\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0x19U] = vlSelf->CoreTop__DOT__rf
        [0x19U];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__426__PROF__DIP_model__l78(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__426__PROF__DIP_model__l78\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0x1aU] = vlSelf->CoreTop__DOT__rf
        [0x1aU];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__427__PROF__DIP_model__l79(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__427__PROF__DIP_model__l79\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0x1bU] = vlSelf->CoreTop__DOT__rf
        [0x1bU];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__428__PROF__DIP_model__l80(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__428__PROF__DIP_model__l80\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0x1cU] = vlSelf->CoreTop__DOT__rf
        [0x1cU];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__429__PROF__DIP_model__l81(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__429__PROF__DIP_model__l81\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0x1dU] = vlSelf->CoreTop__DOT__rf
        [0x1dU];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__430__PROF__DIP_model__l82(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__430__PROF__DIP_model__l82\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0x1eU] = vlSelf->CoreTop__DOT__rf
        [0x1eU];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__431__PROF__DIP_model__l83(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__431__PROF__DIP_model__l83\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0x1fU] = vlSelf->CoreTop__DOT__rf
        [0x1fU];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__432__PROF__CSR_DIFF__l11(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__432__PROF__CSR_DIFF__l11\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[1U] 
        = vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mcause_REG_1;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__433__PROF__CoreTop__l1352(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__433__PROF__CoreTop__l1352\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mcause_REG 
        = vlSelf->CoreTop__DOT__EX__DOT__mcause;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__434__PROF__CSR_DIFF__l12(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__434__PROF__CSR_DIFF__l12\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[2U] 
        = vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mstatus_REG_1;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__435__PROF__CoreTop__l1356(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__435__PROF__CoreTop__l1356\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mstatus_REG 
        = vlSelf->CoreTop__DOT__EX__DOT__mstatus;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__436__PROF__CSR_DIFF__l13(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__436__PROF__CSR_DIFF__l13\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[3U] 
        = vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mtvec_REG_1;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__437__PROF__CoreTop__l1350(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__437__PROF__CoreTop__l1350\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mtvec_REG 
        = vlSelf->CoreTop__DOT__EX__DOT__mtvec;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__438__PROF__CoreTop__l1783(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__438__PROF__CoreTop__l1783\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[0U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0][0U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[1U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0][1U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[2U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0][2U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[3U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0][3U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[4U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0][4U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[5U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0][5U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[6U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0][6U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[7U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0][7U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[8U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0][8U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[9U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0][9U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[0xaU] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0][0xaU];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[0xbU] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0][0xbU];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[0xcU] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0][0xcU];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[0xdU] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0][0xdU];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[0xeU] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0][0xeU];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[0xfU] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0][0xfU];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__439__PROF__CoreTop__l1790(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__439__PROF__CoreTop__l1790\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[0U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0][0U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[1U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0][1U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[2U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0][2U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[3U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0][3U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[4U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0][4U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[5U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0][5U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[6U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0][6U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[7U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0][7U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[8U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0][8U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[9U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0][9U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[0xaU] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0][0xaU];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[0xbU] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0][0xbU];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[0xcU] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0][0xcU];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[0xdU] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0][0xdU];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[0xeU] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0][0xeU];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[0xfU] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0][0xfU];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__440__PROF__CoreTop__l1804(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__440__PROF__CoreTop__l1804\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1_tag_w_data 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__441__PROF__CoreTop__l5438(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__441__PROF__CoreTop__l5438\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP_io_is_break_REG = ((0x42U 
                                                  == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                                                 & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_inst_valid));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__442__PROF__CoreTop__l5359(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__442__PROF__CoreTop__l5359\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T) {
        vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm 
            = ((((((8U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                    ? ((((vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                          >> 0x1fU) ? 0xfffffffffffffULL
                          : 0ULL) << 0xcU) | (QData)((IData)(
                                                             (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                              >> 0x14U))))
                    : 0ULL) | ((7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                ? ((((0x80000U & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)
                                      ? 0xfffffffffffULL
                                      : 0ULL) << 0x14U) 
                                   | (QData)((IData)(
                                                     ((0xff000U 
                                                       & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst) 
                                                      | ((0x800U 
                                                          & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                             >> 9U)) 
                                                         | (0x7feU 
                                                            & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                               >> 0x14U)))))))
                                : 0ULL)) | ((3U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                             ? (((QData)((IData)(
                                                                 ((vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                                   >> 0x1fU)
                                                                   ? 0xffffffffU
                                                                   : 0U))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  (0xfffff000U 
                                                                   & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))))
                                             : 0ULL)) 
                | ((9U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                    ? ((((vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                          >> 0x1fU) ? 0xfffffffffffffULL
                          : 0ULL) << 0xcU) | (QData)((IData)(
                                                             ((0xfe0U 
                                                               & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                                  >> 0x14U)) 
                                                              | (0x1fU 
                                                                 & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                                    >> 7U))))))
                    : 0ULL)) | ((0xbU == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                 ? ((((vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                       >> 0x1fU) ? 0x7ffffffffffffULL
                                       : 0ULL) << 0xdU) 
                                    | (QData)((IData)(
                                                      ((0x1000U 
                                                        & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                           >> 0x13U)) 
                                                       | ((0x800U 
                                                           & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                              << 4U)) 
                                                          | ((0x7e0U 
                                                              & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                                 >> 0x14U)) 
                                                             | (0x1eU 
                                                                & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                                   >> 7U))))))))
                                 : 0ULL));
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__443__PROF__CoreTop__l1468(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__443__PROF__CoreTop__l1468\n"); );
    // Body
    vlSelf->CoreTop__DOT__MEM__DOT___addr_temp_T_1 
        = (vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_Imm 
           + vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src1);
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__444__PROF__CoreTop__l3567(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__444__PROF__CoreTop__l3567\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_bits_we 
        = ((0x45U != (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype)) 
           & ((0x46U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype)) 
              | ((0x70U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype)) 
                 | ((0x47U != (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype)) 
                    & ((0x11U != (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype)) 
                       & ((0x6fU != (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype)) 
                          & ((0xeU != (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype)) 
                             & ((0x74U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype)) 
                                | (0x77U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))))))))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__445__PROF__DIP_model__l86(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__445__PROF__DIP_model__l86\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__IN[1U] = (IData)(vlSelf->CoreTop__DOT__DIP_io_pc_REG);
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__446__PROF__DIP_model__l87(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__446__PROF__DIP_model__l87\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__IN[2U] = (IData)(
                                                     (vlSelf->CoreTop__DOT__DIP_io_pc_REG 
                                                      >> 0x20U));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__447__PROF__CoreTop__l5420(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__447__PROF__CoreTop__l5420\n"); );
    // Body
    if (vlSelf->CoreTop__DOT__MEM_io_out_valid) {
        vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_PC 
            = vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_PC;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__448__PROF__CSR_DIFF__l10(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__448__PROF__CSR_DIFF__l10\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[0U] 
        = vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mepc_REG_1;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__449__PROF__CoreTop__l1354(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__449__PROF__CoreTop__l1354\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mepc_REG 
        = vlSelf->CoreTop__DOT__EX__DOT__mepc;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__451__PROF__CoreTop__l2214(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__451__PROF__CoreTop__l2214\n"); );
    // Body
    if (vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__lru__v0) {
        vlSelf->CoreTop__DOT__ICACHE__DOT__lru[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__lru__v0] = 1U;
    }
    if (vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__lru__v1) {
        vlSelf->CoreTop__DOT__ICACHE__DOT__lru[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__lru__v1] = 0U;
    }
    if (vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__lru__v2) {
        vlSelf->CoreTop__DOT__ICACHE__DOT__lru[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__lru__v2] = 0U;
    }
    if (vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__lru__v3) {
        vlSelf->CoreTop__DOT__ICACHE__DOT__lru[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__lru__v3] = 1U;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__452__PROF__CoreTop__l2230(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__452__PROF__CoreTop__l2230\n"); );
    // Body
    vlSelf->CoreTop__DOT__ICACHE__DOT__state = vlSelf->__Vdly__CoreTop__DOT__ICACHE__DOT__state;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__454__PROF__CoreTop__l2958(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__454__PROF__CoreTop__l2958\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_data 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_addr_pipe_0];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__456__PROF__CoreTop__l3050(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__456__PROF__CoreTop__l3050\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state 
        = vlSelf->__Vdly__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__469__PROF__CoreTop__l676(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__469__PROF__CoreTop__l676\n"); );
    // Body
    if ((1U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state))) {
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_7[0U] 
            = (((1U & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div[2U])
                 ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[0U]
                 : (IData)((0x7fffffffffffffffULL & 
                            (((QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[1U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[0U])))))) 
               << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_7[1U] 
            = ((((1U & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div[2U])
                  ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[0U]
                  : (IData)((0x7fffffffffffffffULL 
                             & (((QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[0U])))))) 
                >> 0x1fU) | (((1U & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div[2U])
                               ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[1U]
                               : ((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div[0U] 
                                   << 0x1fU) | (IData)(
                                                       ((0x7fffffffffffffffULL 
                                                         & (((QData)((IData)(
                                                                             vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[1U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[0U])))) 
                                                        >> 0x20U)))) 
                             << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_7[2U] 
            = ((((1U & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div[2U])
                  ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[1U]
                  : ((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div[0U] 
                      << 0x1fU) | (IData)(((0x7fffffffffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[0U])))) 
                                           >> 0x20U)))) 
                >> 0x1fU) | (((1U & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div[2U])
                               ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[2U]
                               : ((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div[0U] 
                                   >> 1U) | (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div[1U] 
                                             << 0x1fU))) 
                             << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_7[3U] 
            = ((((1U & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div[2U])
                  ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[2U]
                  : ((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div[0U] 
                      >> 1U) | (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div[1U] 
                                << 0x1fU))) >> 0x1fU) 
               | (((1U & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div[2U])
                    ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[3U]
                    : ((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div[1U] 
                        >> 1U) | (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div[2U] 
                                  << 0x1fU))) << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_7[4U] 
            = (((1U & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div[2U])
                 ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[3U]
                 : ((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div[1U] 
                     >> 1U) | (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div[2U] 
                               << 0x1fU))) >> 0x1fU);
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_7[0U] 
            = vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[0U];
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_7[1U] 
            = vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[1U];
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_7[2U] 
            = vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[2U];
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_7[3U] 
            = vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[3U];
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_7[4U] = 0U;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__473__PROF__CoreTop__l1599(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__473__PROF__CoreTop__l1599\n"); );
    // Body
    vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_signal_inst_valid 
        = ((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_inst_valid) 
           & (IData)(vlSelf->CoreTop__DOT__valid_1));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__474__PROF__CoreTop__l500(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__474__PROF__CoreTop__l500\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_hc438024b__0;
    VlWide<5>/*159:0*/ __Vtemp_h7d113eac__0;
    VlWide<5>/*159:0*/ __Vtemp_h19b35859__0;
    VlWide<5>/*159:0*/ __Vtemp_h22bb4134__0;
    // Body
    if ((0U == (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))) {
        __Vtemp_hc438024b__0[0U] = 0U;
        __Vtemp_hc438024b__0[1U] = 0U;
        __Vtemp_hc438024b__0[2U] = 0U;
        __Vtemp_hc438024b__0[3U] = 0U;
        __Vtemp_hc438024b__0[4U] = 0U;
    } else {
        __Vtemp_hc438024b__0[0U] = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[0U];
        __Vtemp_hc438024b__0[1U] = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[1U];
        __Vtemp_hc438024b__0[2U] = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[2U];
        __Vtemp_hc438024b__0[3U] = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[3U];
        __Vtemp_hc438024b__0[4U] = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[4U];
    }
    VL_ADD_W(5, __Vtemp_h7d113eac__0, vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p, __Vtemp_hc438024b__0);
    __Vtemp_h19b35859__0[0U] = ((0U != (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U])) 
                                & ((1U != (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U])) 
                                   & ((2U != (7U & 
                                              vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U])) 
                                      & ((3U != (7U 
                                                 & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U])) 
                                         & ((4U == 
                                             (7U & 
                                              vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U])) 
                                            | ((5U 
                                                == 
                                                (7U 
                                                 & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U])) 
                                               | (6U 
                                                  == 
                                                  (7U 
                                                   & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))))))));
    __Vtemp_h19b35859__0[1U] = 0U;
    __Vtemp_h19b35859__0[2U] = 0U;
    __Vtemp_h19b35859__0[3U] = 0U;
    __Vtemp_h19b35859__0[4U] = 0U;
    VL_ADD_W(5, __Vtemp_h22bb4134__0, __Vtemp_h7d113eac__0, __Vtemp_h19b35859__0);
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__temp[0U] 
        = __Vtemp_h22bb4134__0[0U];
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__temp[1U] 
        = __Vtemp_h22bb4134__0[1U];
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__temp[2U] 
        = __Vtemp_h22bb4134__0[2U];
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__temp[3U] 
        = __Vtemp_h22bb4134__0[3U];
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__temp[4U] 
        = (0xfU & __Vtemp_h22bb4134__0[4U]);
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__490__PROF__CoreTop__l1489(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__490__PROF__CoreTop__l1489\n"); );
    // Body
    vlSelf->CoreTop__DOT__MEM__DOT__addr_temp = ((0x45U 
                                                  == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                                  ? vlSelf->CoreTop__DOT__MEM__DOT___addr_temp_T_1
                                                  : 
                                                 ((0x46U 
                                                   == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                                   ? vlSelf->CoreTop__DOT__MEM__DOT___addr_temp_T_1
                                                   : 
                                                  ((0x70U 
                                                    == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? vlSelf->CoreTop__DOT__MEM__DOT___addr_temp_T_1
                                                    : 
                                                   ((0x47U 
                                                     == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                                     ? vlSelf->CoreTop__DOT__MEM__DOT___addr_temp_T_1
                                                     : 
                                                    ((0x11U 
                                                      == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                                      ? vlSelf->CoreTop__DOT__MEM__DOT___addr_temp_T_1
                                                      : 
                                                     ((0x6fU 
                                                       == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                                       ? vlSelf->CoreTop__DOT__MEM__DOT___addr_temp_T_1
                                                       : 
                                                      ((0xeU 
                                                        == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                                        ? vlSelf->CoreTop__DOT__MEM__DOT___addr_temp_T_1
                                                        : 
                                                       ((0x74U 
                                                         == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                                         ? vlSelf->CoreTop__DOT__MEM__DOT___addr_temp_T_1
                                                         : 
                                                        ((0x77U 
                                                          == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                                          ? vlSelf->CoreTop__DOT__MEM__DOT___addr_temp_T_1
                                                          : 
                                                         ((3U 
                                                           == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                                           ? vlSelf->CoreTop__DOT__MEM__DOT___addr_temp_T_1
                                                           : 
                                                          ((4U 
                                                            == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                                            ? vlSelf->CoreTop__DOT__MEM__DOT___addr_temp_T_1
                                                            : 0ULL)))))))))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__496__PROF__CoreTop__l2227(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__496__PROF__CoreTop__l2227\n"); );
    // Body
    vlSelf->CoreTop__DOT__ICACHE__DOT__lru_lru_w_MPORT_addr_pipe_0 
        = (0x1fU & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
                            >> 6U)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__497__PROF__CoreTop__l2790(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__497__PROF__CoreTop__l2790\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_valid_T_4 
        = ((2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
           & (3U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__498__PROF__SRAMTemp__l320(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__498__PROF__SRAMTemp__l320\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMEM_wd_ready = ((0U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_state)) 
                                           | (2U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_state)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__499__PROF__CoreTop__l3579(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__499__PROF__CoreTop__l3579\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_rdata_rep_bits_last 
        = ((0U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_count)) 
           & (2U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__500__PROF__CoreTop__l2525(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__500__PROF__CoreTop__l2525\n"); );
    // Body
    vlSelf->CoreTop__DOT__ARBITER__DOT__state = ((~ (IData)(vlSelf->reset)) 
                                                 & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0) 
                                                    | ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0) 
                                                       | (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT___GEN_55))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__501__PROF__CoreTop__l5391(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__501__PROF__CoreTop__l5391\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T_4) {
        vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_Dnpc 
            = vlSelf->CoreTop__DOT__IF_io_branch_io_dnpc;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__502__PROF__CoreTop__l1607(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__502__PROF__CoreTop__l1607\n"); );
    // Body
    vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfWen 
        = ((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_rfWen) 
           & (IData)(vlSelf->CoreTop__DOT__valid_1));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__503__PROF__CoreTop__l5344(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__503__PROF__CoreTop__l5344\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T) {
        vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfWen 
            = ((~ (IData)(vlSelf->CoreTop__DOT__empty)) 
               & (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_3));
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__504__PROF__CoreTop__l5365(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__504__PROF__CoreTop__l5365\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T) {
        vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_inst 
            = vlSelf->CoreTop__DOT__ID_io_in_bits_Inst;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__505__PROF__CoreTop__l4792(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__505__PROF__CoreTop__l4792\n"); );
    // Body
    vlSelf->CoreTop__DOT__rf_MPORT_en = ((IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_rfWen) 
                                         & (IData)(vlSelf->CoreTop__DOT__valid_2));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__506__PROF__CoreTop__l3590(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__506__PROF__CoreTop__l3590\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_addr_req_bits_ce 
        = (((4U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_fuType)) 
            & (IData)(vlSelf->CoreTop__DOT__valid_1)) 
           & (IData)(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_signal_inst_valid));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__507__PROF__CoreTop__l510(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__507__PROF__CoreTop__l510\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_out_valid 
        = (0x44U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__508__PROF__CoreTop__l495(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__508__PROF__CoreTop__l495\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT___count_T_5 
        = (0x7fU & ((IData)(2U) + (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__509__PROF__CoreTop__l5394(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__509__PROF__CoreTop__l5394\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T_4) {
        vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest 
            = vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__510__PROF__CoreTop__l1305(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__510__PROF__CoreTop__l1305\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->CoreTop__DOT__EX__DOT__mcause = 0ULL;
    } else if ((0x17U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
        vlSelf->CoreTop__DOT__EX__DOT__mcause = 0xbULL;
    } else if ((0x40U != (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
        if ((0x1aU != (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
            vlSelf->CoreTop__DOT__EX__DOT__mcause = vlSelf->CoreTop__DOT__EX__DOT___GEN_177;
        }
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__511__PROF__CoreTop__l1314(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__511__PROF__CoreTop__l1314\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->CoreTop__DOT__EX__DOT__mstatus = 0ULL;
    } else if ((0x17U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
        vlSelf->CoreTop__DOT__EX__DOT__mstatus = vlSelf->CoreTop__DOT__EX__DOT___T_92;
    } else if ((0x18U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
        vlSelf->CoreTop__DOT__EX__DOT__mstatus = vlSelf->CoreTop__DOT__EX__DOT___T_112;
    } else if ((0x40U != (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
        vlSelf->CoreTop__DOT__EX__DOT__mstatus = vlSelf->CoreTop__DOT__EX__DOT___GEN_181;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__512__PROF__CoreTop__l1323(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__512__PROF__CoreTop__l1323\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->CoreTop__DOT__EX__DOT__mtvec = 0ULL;
    } else if ((0x40U != (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
        if ((0x1aU != (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
            if ((0x68U != (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
                vlSelf->CoreTop__DOT__EX__DOT__mtvec 
                    = vlSelf->CoreTop__DOT__EX__DOT___GEN_168;
            }
        }
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__513__PROF__CoreTop__l5341(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__513__PROF__CoreTop__l5341\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T) {
        vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_inst_valid 
            = (1U & (~ ((0U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_2)) 
                        | ((IData)(vlSelf->CoreTop__DOT__empty) 
                           | (IData)(vlSelf->CoreTop__DOT__IF_io_flush)))));
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__514__PROF__CoreTop__l907(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__514__PROF__CoreTop__l907\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__src2 = ((0U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src2Type))
                                            ? vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_src2
                                            : ((1U 
                                                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src2Type))
                                                ? vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm
                                                : 0ULL));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__515__PROF__CoreTop__l1540(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__515__PROF__CoreTop__l1540\n"); );
    // Body
    vlSelf->CoreTop__DOT__MEM__DOT___wdata_temp_T_21 
        = ((0U == (7U & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
            ? (QData)((IData)((0xffU & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2))))
            : ((1U == (7U & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                ? (QData)((IData)((0xff00U & ((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2) 
                                              << 8U))))
                : ((2U == (7U & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                    ? (QData)((IData)((0xff0000U & 
                                       ((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2) 
                                        << 0x10U))))
                    : ((3U == (7U & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                        ? (QData)((IData)(((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2) 
                                           << 0x18U)))
                        : ((4U == (7U & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                            ? ((QData)((IData)((0xffU 
                                                & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)))) 
                               << 0x20U) : ((5U == 
                                             (7U & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                                             ? ((QData)((IData)(
                                                                (0xffU 
                                                                 & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)))) 
                                                << 0x28U)
                                             : ((6U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                                                 ? 
                                                ((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)))) 
                                                 << 0x30U)
                                                 : 
                                                ((7U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                                                  ? 
                                                 (vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2 
                                                  << 0x38U)
                                                  : 0ULL))))))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__516__PROF__CoreTop__l3571(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__516__PROF__CoreTop__l3571\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wmask 
        = ((0x46U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
            ? 0xffU : ((0x70U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                        ? ((0U == (3U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                 >> 1U))))
                            ? 3U : ((1U == (3U & (IData)(
                                                         (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                          >> 1U))))
                                     ? 0xcU : ((2U 
                                                == 
                                                (3U 
                                                 & (IData)(
                                                           (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                            >> 1U))))
                                                ? 0x30U
                                                : (
                                                   (3U 
                                                    == 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                                >> 1U))))
                                                    ? 0xc0U
                                                    : 0U))))
                        : ((0x74U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                            ? ((0U == (7U & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                                ? 1U : ((1U == (7U 
                                                & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                                         ? 2U : ((2U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                                                  ? 4U
                                                  : 
                                                 ((3U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                                                   ? 8U
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                                                    ? 0x10U
                                                    : 
                                                   ((5U 
                                                     == 
                                                     (7U 
                                                      & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                                                     ? 0x20U
                                                     : 
                                                    ((6U 
                                                      == 
                                                      (7U 
                                                       & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                                                      ? 0x40U
                                                      : 
                                                     ((7U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                                                       ? 0x80U
                                                       : 0U))))))))
                            : ((0x77U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                ? ((1U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                  >> 2U)))
                                    ? 0xf0U : 0xfU)
                                : 0U))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__517__PROF__CoreTop__l1984(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__517__PROF__CoreTop__l1984\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_0_result 
        = ((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0
            [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0] 
            & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_in_valid_REG)) 
           & ((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
               >> 0xbU) == vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_tag_w_data));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__518__PROF__CoreTop__l1986(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__518__PROF__CoreTop__l1986\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_1_result 
        = ((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1
            [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0] 
            & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_in_valid_REG)) 
           & ((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
               >> 0xbU) == vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1_tag_w_data));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__519__PROF__CoreTop__l5385(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__519__PROF__CoreTop__l5385\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T_4) {
        vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_PC 
            = vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__520__PROF__CoreTop__l1296(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__520__PROF__CoreTop__l1296\n"); );
    // Body
    if ((0x17U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
        vlSelf->CoreTop__DOT__EX__DOT__mepc = vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC;
    } else if ((0x40U != (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
        if ((0x1aU != (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
            if ((0x68U != (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
                vlSelf->CoreTop__DOT__EX__DOT__mepc 
                    = vlSelf->CoreTop__DOT__EX__DOT___GEN_169;
            }
        }
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__527__PROF__CoreTop__l3592(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__527__PROF__CoreTop__l3592\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_addr_req_bits_ce) 
           & ((0xa0000000ULL <= vlSelf->CoreTop__DOT__MEM__DOT__addr_temp) 
              & (0xa2000000ULL >= vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__534__PROF__CoreTop__l3570(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__534__PROF__CoreTop__l3570\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata 
        = ((0x46U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
            ? vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2
            : ((0x70U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                ? ((0U == (3U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                         >> 1U)))) ? (QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2))))
                    : ((1U == (3U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                             >> 1U))))
                        ? (QData)((IData)(((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2) 
                                           << 0x10U)))
                        : ((2U == (3U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                 >> 1U))))
                            ? ((QData)((IData)((0xffffU 
                                                & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)))) 
                               << 0x20U) : ((3U == 
                                             (3U & (IData)(
                                                           (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                            >> 1U))))
                                             ? (vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2 
                                                << 0x30U)
                                             : 0ULL))))
                : ((0x74U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                    ? vlSelf->CoreTop__DOT__MEM__DOT___wdata_temp_T_21
                    : ((0x77U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                        ? ((1U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                          >> 2U))) ? 
                           (vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2 
                            << 0x20U) : (QData)((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)))
                        : 0ULL))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__535__PROF__CoreTop__l2792(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__535__PROF__CoreTop__l2792\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wmaskextend_T_3 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wmask) 
           & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_bits_we)
               ? 0xffU : 0U));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__536__PROF__CoreTop__l1989(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__536__PROF__CoreTop__l1989\n"); );
    // Body
    if (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_1_result) {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[0U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[1U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[1U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[2U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[2U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[3U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[3U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[4U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[4U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[5U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[5U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[6U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[6U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[7U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[7U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[8U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[8U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[9U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[9U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xaU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[0xaU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xbU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[0xbU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xcU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[0xcU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xdU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[0xdU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xeU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[0xeU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xfU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[0xfU];
    } else if (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_0_result) {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[0U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[1U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[1U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[2U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[2U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[3U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[3U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[4U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[4U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[5U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[5U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[6U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[6U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[7U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[7U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[8U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[8U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[9U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[9U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xaU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[0xaU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xbU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[0xbU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xcU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[0xcU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xdU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[0xdU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xeU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[0xeU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xfU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[0xfU];
    } else {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[1U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[2U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[3U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[4U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[5U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[6U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[7U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[8U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[9U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xaU] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xbU] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xcU] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xdU] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xeU] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xfU] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[0xfU];
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__537__PROF__CoreTop__l1988(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__537__PROF__CoreTop__l1988\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_1_result) 
           | (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_0_result));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__542__PROF__CoreTop__l31(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__542__PROF__CoreTop__l31\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->CoreTop__DOT__IF__DOT__temp = 0x80000000ULL;
    } else if (((IData)(vlSelf->CoreTop__DOT__IF_io_branch_io_is_jump) 
                | (IData)(vlSelf->CoreTop__DOT__IF_io_branch_io_is_branch))) {
        vlSelf->CoreTop__DOT__IF__DOT__temp = vlSelf->CoreTop__DOT__IF_io_branch_io_dnpc;
    } else if (((~ (IData)(vlSelf->CoreTop__DOT__full)) 
                & (IData)(vlSelf->CoreTop__DOT__IF_io_cache_req_rdata_rep_valid))) {
        vlSelf->CoreTop__DOT__IF__DOT__temp = vlSelf->CoreTop__DOT__IF__DOT___temp_T_3;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__543__PROF__CoreTop__l2443(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__543__PROF__CoreTop__l2443\n"); );
    // Body
    vlSelf->CoreTop__DOT__ARBITER__DOT___GEN_55 = ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                                                    ? 
                                                   ((~ 
                                                     (((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_rdata_rep_bits_last) 
                                                       & (2U 
                                                          == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state))) 
                                                      | (1U 
                                                         == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_state)))) 
                                                    & (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state))
                                                    : (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__544__PROF__CoreTop__l2459(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__544__PROF__CoreTop__l2459\n"); );
    // Body
    vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0 
        = ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)) 
           & (1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__545__PROF__CoreTop__l4812(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__545__PROF__CoreTop__l4812\n"); );
    // Body
    vlSelf->CoreTop__DOT__ID_io_ex_reg_rfWen = ((IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfWen) 
                                                & (IData)(vlSelf->CoreTop__DOT__valid));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__546__PROF__CoreTop__l4956(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__546__PROF__CoreTop__l4956\n"); );
    // Body
    vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_valid 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)
            ? (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)
            : (2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__547__PROF__CoreTop__l3564(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__547__PROF__CoreTop__l3564\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_valid 
        = ((~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)) 
           & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_addr_req_bits_ce));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__548__PROF__CoreTop__l3587(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__548__PROF__CoreTop__l3587\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_addr_req_valid 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready) 
           & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_addr_req_bits_ce));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__549__PROF__CoreTop__l2739(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__549__PROF__CoreTop__l2739\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_24 
        = ((3U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state))
            ? ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)
                ? (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state)
                : 0U) : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__550__PROF__CoreTop__l4950(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__550__PROF__CoreTop__l4950\n"); );
    // Body
    vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_bits_addr 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)
            ? vlSelf->CoreTop__DOT__MEM__DOT__addr_temp
            : ((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state))
                ? vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_addr_reg
                : 0ULL));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__551__PROF__CoreTop__l4953(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__551__PROF__CoreTop__l4953\n"); );
    // Body
    vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_bits_addr 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)
            ? vlSelf->CoreTop__DOT__MEM__DOT__addr_temp
            : ((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state))
                ? vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_addr_reg
                : 0ULL));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__552__PROF__CoreTop__l2727(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__552__PROF__CoreTop__l2727\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___T_8 
        = ((~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)) 
           & (3U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__553__PROF__CoreTop__l4960(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__553__PROF__CoreTop__l4960\n"); );
    // Body
    vlSelf->CoreTop__DOT__ARBITER_io_in1_wb_ready = 
        (1U & ((~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)) 
               | (3U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__554__PROF__CoreTop__l4959(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__554__PROF__CoreTop__l4959\n"); );
    // Body
    vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_last 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)
            ? (2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state))
            : (7U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count_write)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__555__PROF__CoreTop__l4958(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__555__PROF__CoreTop__l4958\n"); );
    // Body
    vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_wstrb 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)
            ? (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wmask)
            : 0xffU);
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__556__PROF__CoreTop__l4949(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__556__PROF__CoreTop__l4949\n"); );
    // Body
    vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_valid 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)
            ? (1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__read_state))
            : (1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__557__PROF__CoreTop__l4952(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__557__PROF__CoreTop__l4952\n"); );
    // Body
    vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_valid 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)
            ? (1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state))
            : (1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__558__PROF__CoreTop__l5350(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__558__PROF__CoreTop__l5350\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T) {
        vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest 
            = (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                        >> 7U));
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__559__PROF__CoreTop__l1202(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__559__PROF__CoreTop__l1202\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT___T_92 = (0xfffffffffffffff7ULL 
                                            & vlSelf->CoreTop__DOT__EX__DOT__mstatus);
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__560__PROF__CoreTop__l1203(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__560__PROF__CoreTop__l1203\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT___T_112 = (8ULL | vlSelf->CoreTop__DOT__EX__DOT__mstatus);
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__561__PROF__CoreTop__l873(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__561__PROF__CoreTop__l873\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT____VdfgTmp_h1a4c5317__0 
        = ((IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_inst_valid) 
           & (IData)(vlSelf->CoreTop__DOT__valid));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__562__PROF__CoreTop__l4957(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__562__PROF__CoreTop__l4957\n"); );
    // Body
    vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_data 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)
            ? vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata
            : (((QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0U]))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__563__PROF__CoreTop__l2822(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__563__PROF__CoreTop__l2822\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
        = ((0U == (7U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                 >> 3U)))) ? (QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wmaskextend_T_3))
            : ((1U == (7U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                     >> 3U)))) ? (QData)((IData)(
                                                                 ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wmaskextend_T_3) 
                                                                  << 8U)))
                : ((2U == (7U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                         >> 3U)))) ? (QData)((IData)(
                                                                     ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wmaskextend_T_3) 
                                                                      << 0x10U)))
                    : ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                             >> 3U))))
                        ? (QData)((IData)(((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wmaskextend_T_3) 
                                           << 0x18U)))
                        : ((4U == (7U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                 >> 3U))))
                            ? ((QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wmaskextend_T_3)) 
                               << 0x20U) : ((5U == 
                                             (7U & (IData)(
                                                           (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                            >> 3U))))
                                             ? ((QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wmaskextend_T_3)) 
                                                << 0x28U)
                                             : ((6U 
                                                 == 
                                                 (7U 
                                                  & (IData)(
                                                            (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                             >> 3U))))
                                                 ? 
                                                ((QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wmaskextend_T_3)) 
                                                 << 0x30U)
                                                 : 
                                                ((7U 
                                                  == 
                                                  (7U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                              >> 3U))))
                                                  ? 
                                                 ((QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wmaskextend_T_3)) 
                                                  << 0x38U)
                                                  : 0ULL))))))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__564__PROF__CoreTop__l2913(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__564__PROF__CoreTop__l2913\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___Cache_data_io_write_bus_valid_T_3 
        = ((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
           & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit) 
              & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_bits_we)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__565__PROF__CoreTop__l2786(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__565__PROF__CoreTop__l2786\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_bits_rdata_T_1 
        = ((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
           & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__566__PROF__CoreTop__l940(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__566__PROF__CoreTop__l940\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_57 
        = ((0x300U == (0xfffU & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
            ? vlSelf->CoreTop__DOT__EX__DOT__mstatus
            : ((0x305U == (0xfffU & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                ? vlSelf->CoreTop__DOT__EX__DOT__mtvec
                : ((0x341U == (0xfffU & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                    ? vlSelf->CoreTop__DOT__EX__DOT__mepc
                    : ((0x342U == (0xfffU & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                        ? vlSelf->CoreTop__DOT__EX__DOT__mcause
                        : ((0x304U == (0xfffU & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                            ? vlSelf->CoreTop__DOT__EX__DOT__mie
                            : ((0x344U == (0xfffU & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                ? vlSelf->CoreTop__DOT__EX__DOT__mip
                                : 0ULL))))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__567__PROF__CoreTop__l5347(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__567__PROF__CoreTop__l5347\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T) {
        vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype 
            = vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_2;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__568__PROF__CoreTop__l5362(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__568__PROF__CoreTop__l5362\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T) {
        vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC 
            = ((0x1fU == (0x1fU & (IData)(vlSelf->CoreTop__DOT__tail)))
                ? vlSelf->CoreTop__DOT__buffer_31_PC
                : ((0x1eU == (0x1fU & (IData)(vlSelf->CoreTop__DOT__tail)))
                    ? vlSelf->CoreTop__DOT__buffer_30_PC
                    : ((0x1dU == (0x1fU & (IData)(vlSelf->CoreTop__DOT__tail)))
                        ? vlSelf->CoreTop__DOT__buffer_29_PC
                        : ((0x1cU == (0x1fU & (IData)(vlSelf->CoreTop__DOT__tail)))
                            ? vlSelf->CoreTop__DOT__buffer_28_PC
                            : ((0x1bU == (0x1fU & (IData)(vlSelf->CoreTop__DOT__tail)))
                                ? vlSelf->CoreTop__DOT__buffer_27_PC
                                : vlSelf->CoreTop__DOT___GEN_190)))));
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__570__PROF__CoreTop__l2459(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__570__PROF__CoreTop__l2459\n"); );
    // Body
    vlSelf->CoreTop__DOT__ARBITER__DOT___GEN_98 = ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0) 
                                                   | (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__571__PROF__CoreTop__l2728(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__571__PROF__CoreTop__l2728\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_10 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___T_8)
            ? 0U : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__572__PROF__CoreTop__l2481(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__572__PROF__CoreTop__l2481\n"); );
    // Body
    vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0 
        = ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)) 
           & ((IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_valid) 
              | (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_valid)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__574__PROF__CoreTop__l1226(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__574__PROF__CoreTop__l1226\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__is_jump = ((3U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType)) 
                                              & (IData)(vlSelf->CoreTop__DOT__EX__DOT____VdfgTmp_h1a4c5317__0));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__575__PROF__CoreTop__l2887(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__575__PROF__CoreTop__l2887\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_hfc1d42bd__0;
    // Body
    __Vtemp_hfc1d42bd__0[0U] = (IData)((((QData)((IData)(
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                      >> 7U)))
                                                           ? 0xffU
                                                           : 0U))) 
                                         << 0x38U) 
                                        | (((QData)((IData)(
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                         >> 6U)))
                                                              ? 0xffU
                                                              : 0U))) 
                                            << 0x30U) 
                                           | (((QData)((IData)(
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                            >> 5U)))
                                                                 ? 0xffU
                                                                 : 0U))) 
                                               << 0x28U) 
                                              | (((QData)((IData)(
                                                                  ((1U 
                                                                    & (IData)(
                                                                              (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                               >> 4U)))
                                                                    ? 0xffU
                                                                    : 0U))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((((1U 
                                                                       & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 3U)))
                                                                       ? 0xffU
                                                                       : 0U) 
                                                                     << 0x18U) 
                                                                    | ((((1U 
                                                                          & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 2U)))
                                                                          ? 0xffU
                                                                          : 0U) 
                                                                        << 0x10U) 
                                                                       | ((((1U 
                                                                             & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 1U)))
                                                                             ? 0xffU
                                                                             : 0U) 
                                                                           << 8U) 
                                                                          | ((1U 
                                                                              & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask))
                                                                              ? 0xffU
                                                                              : 0U)))))))))));
    __Vtemp_hfc1d42bd__0[1U] = (IData)(((((QData)((IData)(
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                       >> 7U)))
                                                            ? 0xffU
                                                            : 0U))) 
                                          << 0x38U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                          >> 6U)))
                                                               ? 0xffU
                                                               : 0U))) 
                                             << 0x30U) 
                                            | (((QData)((IData)(
                                                                ((1U 
                                                                  & (IData)(
                                                                            (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                             >> 5U)))
                                                                  ? 0xffU
                                                                  : 0U))) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 4U)))
                                                                     ? 0xffU
                                                                     : 0U))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((((1U 
                                                                        & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 3U)))
                                                                        ? 0xffU
                                                                        : 0U) 
                                                                      << 0x18U) 
                                                                     | ((((1U 
                                                                           & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 2U)))
                                                                           ? 0xffU
                                                                           : 0U) 
                                                                         << 0x10U) 
                                                                        | ((((1U 
                                                                              & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 1U)))
                                                                              ? 0xffU
                                                                              : 0U) 
                                                                            << 8U) 
                                                                           | ((1U 
                                                                               & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask))
                                                                               ? 0xffU
                                                                               : 0U)))))))))) 
                                        >> 0x20U));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo_lo[0U] 
        = __Vtemp_hfc1d42bd__0[0U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo_lo[1U] 
        = __Vtemp_hfc1d42bd__0[1U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo_lo[2U] 
        = ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                            >> 0xbU))) ? 0xffU : 0U) 
            << 0x18U) | ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                          >> 0xaU)))
                            ? 0xffU : 0U) << 0x10U) 
                         | ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                             >> 9U)))
                               ? 0xffU : 0U) << 8U) 
                            | ((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                              >> 8U)))
                                ? 0xffU : 0U))));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo_lo[3U] 
        = ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                            >> 0xfU))) ? 0xffU : 0U) 
            << 0x18U) | ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                          >> 0xeU)))
                            ? 0xffU : 0U) << 0x10U) 
                         | ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                             >> 0xdU)))
                               ? 0xffU : 0U) << 8U) 
                            | ((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                              >> 0xcU)))
                                ? 0xffU : 0U))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__576__PROF__CoreTop__l2895(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__576__PROF__CoreTop__l2895\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_had48ed99__0;
    // Body
    __Vtemp_had48ed99__0[0U] = (IData)((((QData)((IData)(
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                      >> 0x27U)))
                                                           ? 0xffU
                                                           : 0U))) 
                                         << 0x38U) 
                                        | (((QData)((IData)(
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                         >> 0x26U)))
                                                              ? 0xffU
                                                              : 0U))) 
                                            << 0x30U) 
                                           | (((QData)((IData)(
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                            >> 0x25U)))
                                                                 ? 0xffU
                                                                 : 0U))) 
                                               << 0x28U) 
                                              | (((QData)((IData)(
                                                                  ((1U 
                                                                    & (IData)(
                                                                              (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                               >> 0x24U)))
                                                                    ? 0xffU
                                                                    : 0U))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((((1U 
                                                                       & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x23U)))
                                                                       ? 0xffU
                                                                       : 0U) 
                                                                     << 0x18U) 
                                                                    | ((((1U 
                                                                          & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x22U)))
                                                                          ? 0xffU
                                                                          : 0U) 
                                                                        << 0x10U) 
                                                                       | ((((1U 
                                                                             & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x21U)))
                                                                             ? 0xffU
                                                                             : 0U) 
                                                                           << 8U) 
                                                                          | ((1U 
                                                                              & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x20U)))
                                                                              ? 0xffU
                                                                              : 0U)))))))))));
    __Vtemp_had48ed99__0[1U] = (IData)(((((QData)((IData)(
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                       >> 0x27U)))
                                                            ? 0xffU
                                                            : 0U))) 
                                          << 0x38U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                          >> 0x26U)))
                                                               ? 0xffU
                                                               : 0U))) 
                                             << 0x30U) 
                                            | (((QData)((IData)(
                                                                ((1U 
                                                                  & (IData)(
                                                                            (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                             >> 0x25U)))
                                                                  ? 0xffU
                                                                  : 0U))) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x24U)))
                                                                     ? 0xffU
                                                                     : 0U))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((((1U 
                                                                        & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x23U)))
                                                                        ? 0xffU
                                                                        : 0U) 
                                                                      << 0x18U) 
                                                                     | ((((1U 
                                                                           & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x22U)))
                                                                           ? 0xffU
                                                                           : 0U) 
                                                                         << 0x10U) 
                                                                        | ((((1U 
                                                                              & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x21U)))
                                                                              ? 0xffU
                                                                              : 0U) 
                                                                            << 8U) 
                                                                           | ((1U 
                                                                               & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x20U)))
                                                                               ? 0xffU
                                                                               : 0U)))))))))) 
                                        >> 0x20U));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi_lo[0U] 
        = __Vtemp_had48ed99__0[0U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi_lo[1U] 
        = __Vtemp_had48ed99__0[1U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi_lo[2U] 
        = ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                            >> 0x2bU))) ? 0xffU : 0U) 
            << 0x18U) | ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                          >> 0x2aU)))
                            ? 0xffU : 0U) << 0x10U) 
                         | ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                             >> 0x29U)))
                               ? 0xffU : 0U) << 8U) 
                            | ((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                              >> 0x28U)))
                                ? 0xffU : 0U))));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi_lo[3U] 
        = ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                            >> 0x2fU))) ? 0xffU : 0U) 
            << 0x18U) | ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                          >> 0x2eU)))
                            ? 0xffU : 0U) << 0x10U) 
                         | ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                             >> 0x2dU)))
                               ? 0xffU : 0U) << 8U) 
                            | ((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                              >> 0x2cU)))
                                ? 0xffU : 0U))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__577__PROF__CoreTop__l1787(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__577__PROF__CoreTop__l1787\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_en 
        = ((3U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state)) 
           | (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___Cache_data_io_write_bus_valid_T_3));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__578__PROF__CoreTop__l3002(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__578__PROF__CoreTop__l3002\n"); );
    // Body
    vlSelf->__VdfgTmp_h5a5a8c61__0 = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_valid_T_4) 
                                      | (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___Cache_data_io_write_bus_valid_T_3));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__579__PROF__CoreTop__l2981(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__579__PROF__CoreTop__l2981\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0_MPORT_4_en 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_bits_we) 
           & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_bits_rdata_T_1) 
              | (3U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__580__PROF__CoreTop__l3006(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__580__PROF__CoreTop__l3006\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_waymask 
        = (((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_bits_rdata_T_1) 
            & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_bits_we))
            ? (((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_1_result) 
                << 1U) | (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_0_result))
            : ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_r)
                ? 2U : 1U));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__589__PROF__CoreTop__l22(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__589__PROF__CoreTop__l22\n"); );
    // Body
    vlSelf->CoreTop__DOT__IF__DOT___temp_T_3 = (4ULL 
                                                + vlSelf->CoreTop__DOT__IF__DOT__temp);
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__590__PROF__CoreTop__l1785(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__590__PROF__CoreTop__l1785\n"); );
    // Body
    vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_addr 
        = ((3U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state))
            ? (0x1fU & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                >> 6U))) : 0U);
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__591__PROF__CoreTop__l1798(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__591__PROF__CoreTop__l1798\n"); );
    // Body
    vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_MPORT_1_data 
        = ((3U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state))
            ? (vlSelf->CoreTop__DOT__IF__DOT__temp 
               >> 0xbU) : 0ULL);
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__592__PROF__CoreTop__l1986(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__592__PROF__CoreTop__l1986\n"); );
    // Body
    vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_1_result 
        = ((vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0] 
            & (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_in_valid_REG)) 
           & ((vlSelf->CoreTop__DOT__IF__DOT__temp 
               >> 0xbU) == vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1
              [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0]));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__593__PROF__CoreTop__l1984(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__593__PROF__CoreTop__l1984\n"); );
    // Body
    vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_0_result 
        = ((vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0] 
            & (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_in_valid_REG)) 
           & ((vlSelf->CoreTop__DOT__IF__DOT__temp 
               >> 0xbU) == vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0
              [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_tag_w_addr_pipe_0]));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__594__PROF__CoreTop__l2482(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__594__PROF__CoreTop__l2482\n"); );
    // Body
    vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_ready 
        = ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)
            ? (0U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state))
            : ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)) 
               & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                   ? ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)) 
                      & (0U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state)))
                   : (0U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state)))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__595__PROF__CoreTop__l2484(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__595__PROF__CoreTop__l2484\n"); );
    // Body
    vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_ready 
        = ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)
            ? (0U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_state))
            : ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)) 
               & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                   ? ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)) 
                      & (0U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_state)))
                   : (0U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_state)))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__596__PROF__SRAMTemp__l248(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__596__PROF__SRAMTemp__l248\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMEM__DOT__read_next_state 
        = ((0U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state))
            ? (((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)
                 ? (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_valid)
                 : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)
                     ? (1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state))
                     : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                         ? ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)
                             ? (1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state))
                             : (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_valid))
                         : (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_valid))))
                ? 2U : 0U) : ((2U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state))
                               ? (((2U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state)) 
                                   & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_rdata_rep_bits_last))
                                   ? 0U : 2U) : 0U));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__597__PROF__CoreTop__l4915(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__597__PROF__CoreTop__l4915\n"); );
    // Body
    vlSelf->CoreTop__DOT__ICACHE_io_out_rdata_rep_valid 
        = ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)) 
           & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)
               ? (2U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state))
               : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state) 
                  & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r) 
                     & (2U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state))))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__598__PROF__CoreTop__l4945(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__598__PROF__CoreTop__l4945\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMEM_wd_last = ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)
                                           ? (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_last)
                                           : ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)) 
                                              & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state) 
                                                 & ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)) 
                                                    & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_last)))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__599__PROF__CoreTop__l2490(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__599__PROF__CoreTop__l2490\n"); );
    // Body
    vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_ready 
        = ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)
            ? (IData)(vlSelf->CoreTop__DOT__MMEM_wd_ready)
            : ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)) 
               & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                   ? ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)) 
                      & (IData)(vlSelf->CoreTop__DOT__MMEM_wd_ready))
                   : (IData)(vlSelf->CoreTop__DOT__MMEM_wd_ready))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__601__PROF__CoreTop__l2492(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__601__PROF__CoreTop__l2492\n"); );
    // Body
    vlSelf->CoreTop__DOT__ARBITER_io_in1_wb_valid = 
        ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)
          ? (1U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_state))
          : ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)) 
             & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                 ? ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)) 
                    & (1U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_state)))
                 : (1U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_state)))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__602__PROF__CoreTop__l2486(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__602__PROF__CoreTop__l2486\n"); );
    // Body
    vlSelf->CoreTop__DOT__ARBITER_io_in1_rdata_rep_valid 
        = ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)
            ? (2U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state))
            : ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)) 
               & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                   ? ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)) 
                      & (2U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state)))
                   : (2U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state)))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__603__PROF__CoreTop__l2889(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__603__PROF__CoreTop__l2889\n"); );
    // Init
    VlWide<6>/*191:0*/ __Vtemp_hc8cf7fd9__0;
    // Body
    __Vtemp_hc8cf7fd9__0[4U] = (IData)((((QData)((IData)(
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                      >> 0x17U)))
                                                           ? 0xffU
                                                           : 0U))) 
                                         << 0x38U) 
                                        | (((QData)((IData)(
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                         >> 0x16U)))
                                                              ? 0xffU
                                                              : 0U))) 
                                            << 0x30U) 
                                           | (((QData)((IData)(
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                            >> 0x15U)))
                                                                 ? 0xffU
                                                                 : 0U))) 
                                               << 0x28U) 
                                              | (((QData)((IData)(
                                                                  ((1U 
                                                                    & (IData)(
                                                                              (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                               >> 0x14U)))
                                                                    ? 0xffU
                                                                    : 0U))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((((1U 
                                                                       & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x13U)))
                                                                       ? 0xffU
                                                                       : 0U) 
                                                                     << 0x18U) 
                                                                    | ((((1U 
                                                                          & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x12U)))
                                                                          ? 0xffU
                                                                          : 0U) 
                                                                        << 0x10U) 
                                                                       | ((((1U 
                                                                             & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x11U)))
                                                                             ? 0xffU
                                                                             : 0U) 
                                                                           << 8U) 
                                                                          | ((1U 
                                                                              & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x10U)))
                                                                              ? 0xffU
                                                                              : 0U)))))))))));
    __Vtemp_hc8cf7fd9__0[5U] = (IData)(((((QData)((IData)(
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                       >> 0x17U)))
                                                            ? 0xffU
                                                            : 0U))) 
                                          << 0x38U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                          >> 0x16U)))
                                                               ? 0xffU
                                                               : 0U))) 
                                             << 0x30U) 
                                            | (((QData)((IData)(
                                                                ((1U 
                                                                  & (IData)(
                                                                            (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                             >> 0x15U)))
                                                                  ? 0xffU
                                                                  : 0U))) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x14U)))
                                                                     ? 0xffU
                                                                     : 0U))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((((1U 
                                                                        & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x13U)))
                                                                        ? 0xffU
                                                                        : 0U) 
                                                                      << 0x18U) 
                                                                     | ((((1U 
                                                                           & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x12U)))
                                                                           ? 0xffU
                                                                           : 0U) 
                                                                         << 0x10U) 
                                                                        | ((((1U 
                                                                              & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x11U)))
                                                                              ? 0xffU
                                                                              : 0U) 
                                                                            << 8U) 
                                                                           | ((1U 
                                                                               & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x10U)))
                                                                               ? 0xffU
                                                                               : 0U)))))))))) 
                                        >> 0x20U));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo[0U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo_lo[0U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo[1U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo_lo[1U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo[2U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo_lo[2U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo[3U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo_lo[3U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo[4U] 
        = __Vtemp_hc8cf7fd9__0[4U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo[5U] 
        = __Vtemp_hc8cf7fd9__0[5U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo[6U] 
        = ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                            >> 0x1bU))) ? 0xffU : 0U) 
            << 0x18U) | ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                          >> 0x1aU)))
                            ? 0xffU : 0U) << 0x10U) 
                         | ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                             >> 0x19U)))
                               ? 0xffU : 0U) << 8U) 
                            | ((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                              >> 0x18U)))
                                ? 0xffU : 0U))));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo[7U] 
        = ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                            >> 0x1fU))) ? 0xffU : 0U) 
            << 0x18U) | ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                          >> 0x1eU)))
                            ? 0xffU : 0U) << 0x10U) 
                         | ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                             >> 0x1dU)))
                               ? 0xffU : 0U) << 8U) 
                            | ((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                              >> 0x1cU)))
                                ? 0xffU : 0U))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__604__PROF__CoreTop__l2897(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__604__PROF__CoreTop__l2897\n"); );
    // Init
    VlWide<6>/*191:0*/ __Vtemp_hdf433f48__0;
    // Body
    __Vtemp_hdf433f48__0[4U] = (IData)((((QData)((IData)(
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                      >> 0x37U)))
                                                           ? 0xffU
                                                           : 0U))) 
                                         << 0x38U) 
                                        | (((QData)((IData)(
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                         >> 0x36U)))
                                                              ? 0xffU
                                                              : 0U))) 
                                            << 0x30U) 
                                           | (((QData)((IData)(
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                            >> 0x35U)))
                                                                 ? 0xffU
                                                                 : 0U))) 
                                               << 0x28U) 
                                              | (((QData)((IData)(
                                                                  ((1U 
                                                                    & (IData)(
                                                                              (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                               >> 0x34U)))
                                                                    ? 0xffU
                                                                    : 0U))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((((1U 
                                                                       & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x33U)))
                                                                       ? 0xffU
                                                                       : 0U) 
                                                                     << 0x18U) 
                                                                    | ((((1U 
                                                                          & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x32U)))
                                                                          ? 0xffU
                                                                          : 0U) 
                                                                        << 0x10U) 
                                                                       | ((((1U 
                                                                             & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x31U)))
                                                                             ? 0xffU
                                                                             : 0U) 
                                                                           << 8U) 
                                                                          | ((1U 
                                                                              & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x30U)))
                                                                              ? 0xffU
                                                                              : 0U)))))))))));
    __Vtemp_hdf433f48__0[5U] = (IData)(((((QData)((IData)(
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                       >> 0x37U)))
                                                            ? 0xffU
                                                            : 0U))) 
                                          << 0x38U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                          >> 0x36U)))
                                                               ? 0xffU
                                                               : 0U))) 
                                             << 0x30U) 
                                            | (((QData)((IData)(
                                                                ((1U 
                                                                  & (IData)(
                                                                            (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                             >> 0x35U)))
                                                                  ? 0xffU
                                                                  : 0U))) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x34U)))
                                                                     ? 0xffU
                                                                     : 0U))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((((1U 
                                                                        & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x33U)))
                                                                        ? 0xffU
                                                                        : 0U) 
                                                                      << 0x18U) 
                                                                     | ((((1U 
                                                                           & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x32U)))
                                                                           ? 0xffU
                                                                           : 0U) 
                                                                         << 0x10U) 
                                                                        | ((((1U 
                                                                              & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x31U)))
                                                                              ? 0xffU
                                                                              : 0U) 
                                                                            << 8U) 
                                                                           | ((1U 
                                                                               & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x30U)))
                                                                               ? 0xffU
                                                                               : 0U)))))))))) 
                                        >> 0x20U));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi[0U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi_lo[0U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi[1U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi_lo[1U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi[2U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi_lo[2U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi[3U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi_lo[3U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi[4U] 
        = __Vtemp_hdf433f48__0[4U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi[5U] 
        = __Vtemp_hdf433f48__0[5U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi[6U] 
        = ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                            >> 0x3bU))) ? 0xffU : 0U) 
            << 0x18U) | ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                          >> 0x3aU)))
                            ? 0xffU : 0U) << 0x10U) 
                         | ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                             >> 0x39U)))
                               ? 0xffU : 0U) << 8U) 
                            | ((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                              >> 0x38U)))
                                ? 0xffU : 0U))));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi[7U] 
        = ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                            >> 0x3fU))) ? 0xffU : 0U) 
            << 0x18U) | ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                          >> 0x3eU)))
                            ? 0xffU : 0U) << 0x10U) 
                         | ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                             >> 0x3dU)))
                               ? 0xffU : 0U) << 8U) 
                            | ((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                              >> 0x3cU)))
                                ? 0xffU : 0U))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__605__PROF__CoreTop__l1785(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__605__PROF__CoreTop__l1785\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_addr 
        = ((IData)(vlSelf->__VdfgTmp_h5a5a8c61__0) ? 
           (0x1fU & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                             >> 6U))) : 0U);
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__606__PROF__CoreTop__l1798(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__606__PROF__CoreTop__l1798\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_MPORT_1_data 
        = ((IData)(vlSelf->__VdfgTmp_h5a5a8c61__0) ? 
           (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
            >> 0xbU) : 0ULL);
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__607__PROF__CoreTop__l1205(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__607__PROF__CoreTop__l1205\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__csr_data = ((0x17U 
                                                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                ? vlSelf->CoreTop__DOT__EX__DOT__mtvec
                                                : (
                                                   (0x18U 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? vlSelf->CoreTop__DOT__EX__DOT__mepc
                                                    : 0ULL));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__608__PROF__CoreTop__l872(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__608__PROF__CoreTop__l872\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__is_mul = (((0x78U 
                                               == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                                              | (7U 
                                                 == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) 
                                             & (IData)(vlSelf->CoreTop__DOT__EX__DOT____VdfgTmp_h1a4c5317__0));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__609__PROF__CoreTop__l887(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__609__PROF__CoreTop__l887\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT___is_divw_T_2 = (
                                                   (0x79U 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                                                   | (0x10U 
                                                      == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__610__PROF__CoreTop__l885(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__610__PROF__CoreTop__l885\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT____VdfgTmp_h08208b49__0 
        = ((0x7aU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
           | (0xdU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__611__PROF__CoreTop__l1292(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__611__PROF__CoreTop__l1292\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_flow_div_signed 
        = (((0x43U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
            | (0x79U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) 
           | ((0x12U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
              | (0x7aU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__612__PROF__CoreTop__l1180(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__612__PROF__CoreTop__l1180\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT___branch_result_T_1 
        = (vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm 
           + vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC);
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__613__PROF__CoreTop__l905(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__613__PROF__CoreTop__l905\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__src1 = ((0U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src1Type))
                                            ? vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_src1
                                            : ((2U 
                                                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src1Type))
                                                ? vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC
                                                : 0ULL));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__614__PROF__CoreTop__l4998(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__614__PROF__CoreTop__l4998\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->CoreTop__DOT__tail = 0U;
    } else if (vlSelf->CoreTop__DOT__IF_io_flush) {
        vlSelf->CoreTop__DOT__tail = 0U;
    } else if (vlSelf->CoreTop__DOT___T) {
        vlSelf->CoreTop__DOT__tail = vlSelf->CoreTop__DOT___tail_T_1;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__615__PROF__CoreTop__l5005(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__615__PROF__CoreTop__l5005\n"); );
    // Body
    if (((IData)(vlSelf->CoreTop__DOT__IF_io_cache_req_rdata_rep_valid) 
         & (~ (IData)(vlSelf->CoreTop__DOT__full)))) {
        if ((0U == (0x1fU & (IData)(vlSelf->CoreTop__DOT__head)))) {
            vlSelf->CoreTop__DOT__buffer_0_PC = vlSelf->io_pc;
            vlSelf->CoreTop__DOT__buffer_0_Inst = vlSelf->CoreTop__DOT__IF_io_out_bits_Inst;
        }
        if ((1U == (0x1fU & (IData)(vlSelf->CoreTop__DOT__head)))) {
            vlSelf->CoreTop__DOT__buffer_1_PC = vlSelf->io_pc;
            vlSelf->CoreTop__DOT__buffer_1_Inst = vlSelf->CoreTop__DOT__IF_io_out_bits_Inst;
        }
        if ((2U == (0x1fU & (IData)(vlSelf->CoreTop__DOT__head)))) {
            vlSelf->CoreTop__DOT__buffer_2_PC = vlSelf->io_pc;
            vlSelf->CoreTop__DOT__buffer_2_Inst = vlSelf->CoreTop__DOT__IF_io_out_bits_Inst;
        }
        if ((3U == (0x1fU & (IData)(vlSelf->CoreTop__DOT__head)))) {
            vlSelf->CoreTop__DOT__buffer_3_PC = vlSelf->io_pc;
            vlSelf->CoreTop__DOT__buffer_3_Inst = vlSelf->CoreTop__DOT__IF_io_out_bits_Inst;
        }
        if ((4U == (0x1fU & (IData)(vlSelf->CoreTop__DOT__head)))) {
            vlSelf->CoreTop__DOT__buffer_4_PC = vlSelf->io_pc;
            vlSelf->CoreTop__DOT__buffer_4_Inst = vlSelf->CoreTop__DOT__IF_io_out_bits_Inst;
        }
        if ((5U == (0x1fU & (IData)(vlSelf->CoreTop__DOT__head)))) {
            vlSelf->CoreTop__DOT__buffer_5_PC = vlSelf->io_pc;
            vlSelf->CoreTop__DOT__buffer_5_Inst = vlSelf->CoreTop__DOT__IF_io_out_bits_Inst;
        }
        if ((6U == (0x1fU & (IData)(vlSelf->CoreTop__DOT__head)))) {
            vlSelf->CoreTop__DOT__buffer_6_PC = vlSelf->io_pc;
            vlSelf->CoreTop__DOT__buffer_6_Inst = vlSelf->CoreTop__DOT__IF_io_out_bits_Inst;
        }
        if ((7U == (0x1fU & (IData)(vlSelf->CoreTop__DOT__head)))) {
            vlSelf->CoreTop__DOT__buffer_7_PC = vlSelf->io_pc;
            vlSelf->CoreTop__DOT__buffer_7_Inst = vlSelf->CoreTop__DOT__IF_io_out_bits_Inst;
        }
        if ((8U == (0x1fU & (IData)(vlSelf->CoreTop__DOT__head)))) {
            vlSelf->CoreTop__DOT__buffer_8_PC = vlSelf->io_pc;
            vlSelf->CoreTop__DOT__buffer_8_Inst = vlSelf->CoreTop__DOT__IF_io_out_bits_Inst;
        }
        if ((9U == (0x1fU & (IData)(vlSelf->CoreTop__DOT__head)))) {
            vlSelf->CoreTop__DOT__buffer_9_PC = vlSelf->io_pc;
            vlSelf->CoreTop__DOT__buffer_9_Inst = vlSelf->CoreTop__DOT__IF_io_out_bits_Inst;
        }
        if ((0xaU == (0x1fU & (IData)(vlSelf->CoreTop__DOT__head)))) {
            vlSelf->CoreTop__DOT__buffer_10_PC = vlSelf->io_pc;
            vlSelf->CoreTop__DOT__buffer_10_Inst = vlSelf->CoreTop__DOT__IF_io_out_bits_Inst;
        }
        if ((0xbU == (0x1fU & (IData)(vlSelf->CoreTop__DOT__head)))) {
            vlSelf->CoreTop__DOT__buffer_11_PC = vlSelf->io_pc;
            vlSelf->CoreTop__DOT__buffer_11_Inst = vlSelf->CoreTop__DOT__IF_io_out_bits_Inst;
        }
        if ((0xcU == (0x1fU & (IData)(vlSelf->CoreTop__DOT__head)))) {
            vlSelf->CoreTop__DOT__buffer_12_PC = vlSelf->io_pc;
            vlSelf->CoreTop__DOT__buffer_12_Inst = vlSelf->CoreTop__DOT__IF_io_out_bits_Inst;
        }
        if ((0xdU == (0x1fU & (IData)(vlSelf->CoreTop__DOT__head)))) {
            vlSelf->CoreTop__DOT__buffer_13_PC = vlSelf->io_pc;
            vlSelf->CoreTop__DOT__buffer_13_Inst = vlSelf->CoreTop__DOT__IF_io_out_bits_Inst;
        }
        if ((0xeU == (0x1fU & (IData)(vlSelf->CoreTop__DOT__head)))) {
            vlSelf->CoreTop__DOT__buffer_14_PC = vlSelf->io_pc;
            vlSelf->CoreTop__DOT__buffer_14_Inst = vlSelf->CoreTop__DOT__IF_io_out_bits_Inst;
        }
        if ((0xfU == (0x1fU & (IData)(vlSelf->CoreTop__DOT__head)))) {
            vlSelf->CoreTop__DOT__buffer_15_PC = vlSelf->io_pc;
            vlSelf->CoreTop__DOT__buffer_15_Inst = vlSelf->CoreTop__DOT__IF_io_out_bits_Inst;
        }
        if ((0x10U == (0x1fU & (IData)(vlSelf->CoreTop__DOT__head)))) {
            vlSelf->CoreTop__DOT__buffer_16_PC = vlSelf->io_pc;
            vlSelf->CoreTop__DOT__buffer_16_Inst = vlSelf->CoreTop__DOT__IF_io_out_bits_Inst;
        }
        if ((0x11U == (0x1fU & (IData)(vlSelf->CoreTop__DOT__head)))) {
            vlSelf->CoreTop__DOT__buffer_17_PC = vlSelf->io_pc;
            vlSelf->CoreTop__DOT__buffer_17_Inst = vlSelf->CoreTop__DOT__IF_io_out_bits_Inst;
        }
        if ((0x12U == (0x1fU & (IData)(vlSelf->CoreTop__DOT__head)))) {
            vlSelf->CoreTop__DOT__buffer_18_PC = vlSelf->io_pc;
            vlSelf->CoreTop__DOT__buffer_18_Inst = vlSelf->CoreTop__DOT__IF_io_out_bits_Inst;
        }
        if ((0x13U == (0x1fU & (IData)(vlSelf->CoreTop__DOT__head)))) {
            vlSelf->CoreTop__DOT__buffer_19_PC = vlSelf->io_pc;
            vlSelf->CoreTop__DOT__buffer_19_Inst = vlSelf->CoreTop__DOT__IF_io_out_bits_Inst;
        }
        if ((0x14U == (0x1fU & (IData)(vlSelf->CoreTop__DOT__head)))) {
            vlSelf->CoreTop__DOT__buffer_20_PC = vlSelf->io_pc;
            vlSelf->CoreTop__DOT__buffer_20_Inst = vlSelf->CoreTop__DOT__IF_io_out_bits_Inst;
        }
        if ((0x15U == (0x1fU & (IData)(vlSelf->CoreTop__DOT__head)))) {
            vlSelf->CoreTop__DOT__buffer_21_PC = vlSelf->io_pc;
            vlSelf->CoreTop__DOT__buffer_21_Inst = vlSelf->CoreTop__DOT__IF_io_out_bits_Inst;
        }
        if ((0x16U == (0x1fU & (IData)(vlSelf->CoreTop__DOT__head)))) {
            vlSelf->CoreTop__DOT__buffer_22_PC = vlSelf->io_pc;
            vlSelf->CoreTop__DOT__buffer_22_Inst = vlSelf->CoreTop__DOT__IF_io_out_bits_Inst;
        }
        if ((0x17U == (0x1fU & (IData)(vlSelf->CoreTop__DOT__head)))) {
            vlSelf->CoreTop__DOT__buffer_23_PC = vlSelf->io_pc;
            vlSelf->CoreTop__DOT__buffer_23_Inst = vlSelf->CoreTop__DOT__IF_io_out_bits_Inst;
        }
        if ((0x18U == (0x1fU & (IData)(vlSelf->CoreTop__DOT__head)))) {
            vlSelf->CoreTop__DOT__buffer_24_PC = vlSelf->io_pc;
            vlSelf->CoreTop__DOT__buffer_24_Inst = vlSelf->CoreTop__DOT__IF_io_out_bits_Inst;
        }
        if ((0x19U == (0x1fU & (IData)(vlSelf->CoreTop__DOT__head)))) {
            vlSelf->CoreTop__DOT__buffer_25_PC = vlSelf->io_pc;
            vlSelf->CoreTop__DOT__buffer_25_Inst = vlSelf->CoreTop__DOT__IF_io_out_bits_Inst;
        }
        if ((0x1aU == (0x1fU & (IData)(vlSelf->CoreTop__DOT__head)))) {
            vlSelf->CoreTop__DOT__buffer_26_PC = vlSelf->io_pc;
            vlSelf->CoreTop__DOT__buffer_26_Inst = vlSelf->CoreTop__DOT__IF_io_out_bits_Inst;
        }
        if ((0x1bU == (0x1fU & (IData)(vlSelf->CoreTop__DOT__head)))) {
            vlSelf->CoreTop__DOT__buffer_27_PC = vlSelf->io_pc;
            vlSelf->CoreTop__DOT__buffer_27_Inst = vlSelf->CoreTop__DOT__IF_io_out_bits_Inst;
        }
        if ((0x1cU == (0x1fU & (IData)(vlSelf->CoreTop__DOT__head)))) {
            vlSelf->CoreTop__DOT__buffer_28_PC = vlSelf->io_pc;
            vlSelf->CoreTop__DOT__buffer_28_Inst = vlSelf->CoreTop__DOT__IF_io_out_bits_Inst;
        }
        if ((0x1dU == (0x1fU & (IData)(vlSelf->CoreTop__DOT__head)))) {
            vlSelf->CoreTop__DOT__buffer_29_PC = vlSelf->io_pc;
            vlSelf->CoreTop__DOT__buffer_29_Inst = vlSelf->CoreTop__DOT__IF_io_out_bits_Inst;
        }
        if ((0x1eU == (0x1fU & (IData)(vlSelf->CoreTop__DOT__head)))) {
            vlSelf->CoreTop__DOT__buffer_30_PC = vlSelf->io_pc;
            vlSelf->CoreTop__DOT__buffer_30_Inst = vlSelf->CoreTop__DOT__IF_io_out_bits_Inst;
        }
        if ((0x1fU == (0x1fU & (IData)(vlSelf->CoreTop__DOT__head)))) {
            vlSelf->CoreTop__DOT__buffer_31_PC = vlSelf->io_pc;
            vlSelf->CoreTop__DOT__buffer_31_Inst = vlSelf->CoreTop__DOT__IF_io_out_bits_Inst;
        }
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__616__PROF__CoreTop__l1989(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__616__PROF__CoreTop__l1989\n"); );
    // Body
    if (vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_1_result) {
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][0U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[1U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][1U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[2U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][2U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[3U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][3U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[4U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][4U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[5U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][5U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[6U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][6U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[7U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][7U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[8U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][8U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[9U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][9U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xaU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][0xaU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xbU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][0xbU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xcU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][0xcU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xdU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][0xdU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xeU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][0xeU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xfU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][0xfU];
    } else if (vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_0_result) {
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][0U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[1U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][1U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[2U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][2U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[3U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][3U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[4U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][4U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[5U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][5U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[6U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][6U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[7U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][7U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[8U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][8U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[9U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][9U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xaU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][0xaU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xbU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][0xbU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xcU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][0xcU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xdU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][0xdU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xeU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][0xeU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xfU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][0xfU];
    } else {
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[1U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[2U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[3U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[4U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[5U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[6U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[7U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[8U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[9U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xaU] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xbU] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xcU] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xdU] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xeU] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xfU] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[0xfU];
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__617__PROF__CoreTop__l1988(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__617__PROF__CoreTop__l1988\n"); );
    // Body
    vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit 
        = ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_1_result) 
           | (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_0_result));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__618__PROF__CoreTop__l2097(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__618__PROF__CoreTop__l2097\n"); );
    // Body
    vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_17 = (((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_rdata_rep_bits_last) 
                                                   & (IData)(vlSelf->CoreTop__DOT__ICACHE_io_out_rdata_rep_valid))
                                                   ? 3U
                                                   : (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state));
}

extern const VlUnpacked<CData/*0:0*/, 64> VCoreTop__ConstPool__TABLE_h1d315e1c_0;
extern const VlUnpacked<CData/*1:0*/, 64> VCoreTop__ConstPool__TABLE_h2941df74_0;

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__619__PROF__SRAMTemp__l270(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__619__PROF__SRAMTemp__l270\n"); );
    // Init
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->CoreTop__DOT__MMEM_wd_last) 
                     << 5U) | ((((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)
                                  ? (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wb_ready)
                                  : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0) 
                                     | ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                                         ? ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r) 
                                            | (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wb_ready))
                                         : (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wb_ready)))) 
                                << 4U) | (((1U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_state)) 
                                           << 3U) | 
                                          ((((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)
                                              ? (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_valid)
                                              : ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)) 
                                                 & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                                                     ? 
                                                    ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)) 
                                                     & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_valid))
                                                     : (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_valid)))) 
                                            << 2U) 
                                           | (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_state)))));
    if (VCoreTop__ConstPool__TABLE_h1d315e1c_0[__Vtableidx1]) {
        vlSelf->CoreTop__DOT__MMEM__DOT__write_next_state 
            = VCoreTop__ConstPool__TABLE_h2941df74_0
            [__Vtableidx1];
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__620__PROF__CoreTop__l3286(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__620__PROF__CoreTop__l3286\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT___GEN_8 
        = ((((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready) 
             & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_ready)) 
            & (2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state)))
            ? 3U : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__621__PROF__CoreTop__l3580(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__621__PROF__CoreTop__l3580\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_wdata_req_ready 
        = ((~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)) 
           & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_ready));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__624__PROF__CoreTop__l3582(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__624__PROF__CoreTop__l3582\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_wb_valid 
        = ((~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)) 
           & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wb_valid));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__625__PROF__CoreTop__l3608(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__625__PROF__CoreTop__l3608\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_out_wb_valid 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready) 
           & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wb_valid));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__626__PROF__CoreTop__l3576(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__626__PROF__CoreTop__l3576\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_rdata_rep_valid 
        = ((~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)) 
           & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_rdata_rep_valid));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__627__PROF__CoreTop__l3290(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__627__PROF__CoreTop__l3290\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_valid 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready) 
           & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_rdata_rep_valid));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__628__PROF__CoreTop__l2893(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__628__PROF__CoreTop__l2893\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo[0U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[1U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo[1U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[2U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo[2U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[3U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo[3U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[4U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo[4U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[5U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo[5U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[6U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo[6U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[7U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo[7U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[8U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi[0U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[9U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi[1U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xaU] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi[2U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xbU] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi[3U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xcU] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi[4U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xdU] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi[5U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xeU] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi[6U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xfU] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi[7U];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__629__PROF__CoreTop__l629(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__629__PROF__CoreTop__l629\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_valid 
        = ((0x44U != (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count)) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__is_mul));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__630__PROF__CoreTop__l1291(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__630__PROF__CoreTop__l1291\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__div_io_in_valid 
        = ((2U != (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state)) 
           & ((((((0x43U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                  | (0x13U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) 
                 | (IData)(vlSelf->CoreTop__DOT__EX__DOT___is_divw_T_2)) 
                | ((0x12U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                   | (0xfU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)))) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT____VdfgTmp_h08208b49__0)) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT____VdfgTmp_h1a4c5317__0)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__631__PROF__CoreTop__l888(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__631__PROF__CoreTop__l888\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__is_divw = ((IData)(vlSelf->CoreTop__DOT__EX__DOT___is_divw_T_2) 
                                              | (IData)(vlSelf->CoreTop__DOT__EX__DOT____VdfgTmp_h08208b49__0));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__632__PROF__CoreTop__l1132(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__632__PROF__CoreTop__l1132\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_25 
        = VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->CoreTop__DOT__EX__DOT__src1), 
                         (0x1fU & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__633__PROF__CoreTop__l1136(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__633__PROF__CoreTop__l1136\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_31 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__src1) 
           >> (0x1fU & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__634__PROF__CoreTop__l914(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__634__PROF__CoreTop__l914\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_10 
        = (vlSelf->CoreTop__DOT__EX__DOT__src1 - vlSelf->CoreTop__DOT__EX__DOT__src2);
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__635__PROF__CoreTop__l909(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__635__PROF__CoreTop__l909\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1 
        = (vlSelf->CoreTop__DOT__EX__DOT__src1 + vlSelf->CoreTop__DOT__EX__DOT__src2);
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__636__PROF__CoreTop__l941(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__636__PROF__CoreTop__l941\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT___T_39 = (vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_57 
                                            | vlSelf->CoreTop__DOT__EX__DOT__src1);
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__637__PROF__CoreTop__l1165(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__637__PROF__CoreTop__l1165\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT___compar_result_T 
        = (vlSelf->CoreTop__DOT__EX__DOT__src1 < vlSelf->CoreTop__DOT__EX__DOT__src2);
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__638__PROF__CoreTop__l1168(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__638__PROF__CoreTop__l1168\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT___compar_result_T_4 
        = VL_LTS_IQQ(64, vlSelf->CoreTop__DOT__EX__DOT__src1, vlSelf->CoreTop__DOT__EX__DOT__src2);
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__645__PROF__CoreTop__l4793(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__645__PROF__CoreTop__l4793\n"); );
    // Body
    vlSelf->io_pc = vlSelf->CoreTop__DOT__IF__DOT__temp;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__706__PROF__CoreTop__l2131(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__706__PROF__CoreTop__l2131\n"); );
    // Body
    vlSelf->CoreTop__DOT__ICACHE__DOT___io_in_rdata_rep_bits_rdata_T_1 
        = ((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
           & (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__707__PROF__CoreTop__l2740(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__707__PROF__CoreTop__l2740\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_30 
        = (((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_wdata_req_ready) 
            & (7U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count_write)))
            ? 3U : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__708__PROF__CoreTop__l2760(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__708__PROF__CoreTop__l2760\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT____VdfgTmp_h9d851aea__0 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_wdata_req_ready) 
           & (2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__711__PROF__CoreTop__l2742(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__711__PROF__CoreTop__l2742\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_32 
        = ((3U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state))
            ? ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_wb_valid)
                ? 0U : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state))
            : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__712__PROF__CoreTop__l2734(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__712__PROF__CoreTop__l2734\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_14 
        = ((3U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state))
            ? ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_wb_valid)
                ? 2U : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state))
            : ((4U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state))
                ? (((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___T_8) 
                    | (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_wb_valid))
                    ? 0U : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state))
                : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__713__PROF__CoreTop__l3289(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__713__PROF__CoreTop__l3289\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT___GEN_10 
        = ((3U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state))
            ? (((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_out_wb_valid) 
                & (3U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state)))
                ? 0U : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state))
            : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__714__PROF__CoreTop__l2737(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__714__PROF__CoreTop__l2737\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_22 
        = (((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_rdata_rep_bits_last) 
            & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_rdata_rep_valid))
            ? 3U : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__716__PROF__CoreTop__l3285(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__716__PROF__CoreTop__l3285\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT___GEN_2 
        = (((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_valid) 
            & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready) 
               & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_rdata_rep_bits_last)))
            ? 0U : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__read_state));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__717__PROF__CoreTop__l1594(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__717__PROF__CoreTop__l1594\n"); );
    // Body
    vlSelf->CoreTop__DOT__MEM__DOT___io_out_valid_T_6 
        = ((IData)(vlSelf->CoreTop__DOT__valid_1) & 
           ((~ (((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)
                  ? (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_valid)
                  : ((~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_bits_we)) 
                     & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_bits_rdata_T_1) 
                        | (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_valid_T_4)))) 
                | ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)
                    ? (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_out_wb_valid)
                    : ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___Cache_data_io_write_bus_valid_T_3) 
                       | ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_valid_T_4) 
                          & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_bits_we)))))) 
            & (4U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_fuType))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__718__PROF__CoreTop__l2909(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__718__PROF__CoreTop__l2909\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0U] 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata) 
           & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0U]);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[1U] 
        = ((IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata 
                    >> 0x20U)) & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[1U]);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[2U] 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata) 
           & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[2U]);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[3U] 
        = ((IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata 
                    >> 0x20U)) & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[3U]);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[4U] 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata) 
           & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[4U]);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[5U] 
        = ((IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata 
                    >> 0x20U)) & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[5U]);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[6U] 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata) 
           & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[6U]);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[7U] 
        = ((IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata 
                    >> 0x20U)) & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[7U]);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[8U] 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata) 
           & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[8U]);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[9U] 
        = ((IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata 
                    >> 0x20U)) & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[9U]);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0xaU] 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata) 
           & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xaU]);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0xbU] 
        = ((IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata 
                    >> 0x20U)) & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xbU]);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0xcU] 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata) 
           & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xcU]);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0xdU] 
        = ((IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata 
                    >> 0x20U)) & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xdU]);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0xeU] 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata) 
           & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xeU]);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0xfU] 
        = ((IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata 
                    >> 0x20U)) & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xfU]);
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__719__PROF__CoreTop__l1293(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__719__PROF__CoreTop__l1293\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__is_divw)
            ? ((IData)(vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_flow_div_signed)
                ? (((QData)((IData)(((1U & (IData)(
                                                   (vlSelf->CoreTop__DOT__EX__DOT__src1 
                                                    >> 0x1fU)))
                                      ? 0xffffffffU
                                      : 0U))) << 0x20U) 
                   | (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__src1)))
                : (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__src1)))
            : vlSelf->CoreTop__DOT__EX__DOT__src1);
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__720__PROF__CoreTop__l1294(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__720__PROF__CoreTop__l1294\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src2 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__is_divw)
            ? ((IData)(vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_flow_div_signed)
                ? (((QData)((IData)(((1U & (IData)(
                                                   (vlSelf->CoreTop__DOT__EX__DOT__src2 
                                                    >> 0x1fU)))
                                      ? 0xffffffffU
                                      : 0U))) << 0x20U) 
                   | (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)))
                : (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)))
            : vlSelf->CoreTop__DOT__EX__DOT__src2);
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__721__PROF__CoreTop__l1132(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__721__PROF__CoreTop__l1132\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_28 
        = (((QData)((IData)(((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_25 
                              >> 0x1fU) ? 0xffffffffU
                              : 0U))) << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_25)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__722__PROF__CoreTop__l1136(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__722__PROF__CoreTop__l1136\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_35 
        = (((QData)((IData)(((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_31 
                              >> 0x1fU) ? 0xffffffffU
                              : 0U))) << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_31)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__723__PROF__CoreTop__l912(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__723__PROF__CoreTop__l912\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_7 
        = (((QData)((IData)(((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1 
                                            >> 0x1fU)))
                              ? 0xffffffffU : 0U))) 
            << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__724__PROF__CoreTop__l997(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__724__PROF__CoreTop__l997\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT___GEN_60 = ((0x15U 
                                               == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                               ? ((0x300U 
                                                   == 
                                                   (0xfffU 
                                                    & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                   ? vlSelf->CoreTop__DOT__EX__DOT__mip
                                                   : 
                                                  ((0x305U 
                                                    == 
                                                    (0xfffU 
                                                     & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                    ? vlSelf->CoreTop__DOT__EX__DOT__mip
                                                    : 
                                                   ((0x341U 
                                                     == 
                                                     (0xfffU 
                                                      & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                     ? vlSelf->CoreTop__DOT__EX__DOT__mip
                                                     : 
                                                    ((0x342U 
                                                      == 
                                                      (0xfffU 
                                                       & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                      ? vlSelf->CoreTop__DOT__EX__DOT__mip
                                                      : 
                                                     ((0x304U 
                                                       == 
                                                       (0xfffU 
                                                        & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                       ? vlSelf->CoreTop__DOT__EX__DOT__mip
                                                       : 
                                                      ((0x344U 
                                                        == 
                                                        (0xfffU 
                                                         & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                        ? vlSelf->CoreTop__DOT__EX__DOT___T_39
                                                        : vlSelf->CoreTop__DOT__EX__DOT__mip))))))
                                               : ((0x16U 
                                                   == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                   ? 
                                                  ((0x300U 
                                                    == 
                                                    (0xfffU 
                                                     & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                    ? vlSelf->CoreTop__DOT__EX__DOT__mip
                                                    : 
                                                   ((0x305U 
                                                     == 
                                                     (0xfffU 
                                                      & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                     ? vlSelf->CoreTop__DOT__EX__DOT__mip
                                                     : 
                                                    ((0x341U 
                                                      == 
                                                      (0xfffU 
                                                       & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                      ? vlSelf->CoreTop__DOT__EX__DOT__mip
                                                      : 
                                                     ((0x342U 
                                                       == 
                                                       (0xfffU 
                                                        & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                       ? vlSelf->CoreTop__DOT__EX__DOT__mip
                                                       : 
                                                      ((0x304U 
                                                        == 
                                                        (0xfffU 
                                                         & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                        ? vlSelf->CoreTop__DOT__EX__DOT__mip
                                                        : 
                                                       ((0x344U 
                                                         == 
                                                         (0xfffU 
                                                          & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                         ? vlSelf->CoreTop__DOT__EX__DOT__src1
                                                         : vlSelf->CoreTop__DOT__EX__DOT__mip))))))
                                                   : vlSelf->CoreTop__DOT__EX__DOT__mip));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__725__PROF__CoreTop__l1017(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__725__PROF__CoreTop__l1017\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT___GEN_80 = ((0x10U 
                                               == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                               ? vlSelf->CoreTop__DOT__EX__DOT__mie
                                               : ((0x13U 
                                                   == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                   ? vlSelf->CoreTop__DOT__EX__DOT__mie
                                                   : 
                                                  ((0x43U 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? vlSelf->CoreTop__DOT__EX__DOT__mie
                                                    : 
                                                   ((0x15U 
                                                     == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                     ? 
                                                    ((0x300U 
                                                      == 
                                                      (0xfffU 
                                                       & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                      ? vlSelf->CoreTop__DOT__EX__DOT__mie
                                                      : 
                                                     ((0x305U 
                                                       == 
                                                       (0xfffU 
                                                        & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                       ? vlSelf->CoreTop__DOT__EX__DOT__mie
                                                       : 
                                                      ((0x341U 
                                                        == 
                                                        (0xfffU 
                                                         & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                        ? vlSelf->CoreTop__DOT__EX__DOT__mie
                                                        : 
                                                       ((0x342U 
                                                         == 
                                                         (0xfffU 
                                                          & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                         ? vlSelf->CoreTop__DOT__EX__DOT__mie
                                                         : 
                                                        ((0x304U 
                                                          == 
                                                          (0xfffU 
                                                           & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                          ? vlSelf->CoreTop__DOT__EX__DOT___T_39
                                                          : vlSelf->CoreTop__DOT__EX__DOT__mie)))))
                                                     : 
                                                    ((0x16U 
                                                      == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                      ? 
                                                     ((0x300U 
                                                       == 
                                                       (0xfffU 
                                                        & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                       ? vlSelf->CoreTop__DOT__EX__DOT__mie
                                                       : 
                                                      ((0x305U 
                                                        == 
                                                        (0xfffU 
                                                         & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                        ? vlSelf->CoreTop__DOT__EX__DOT__mie
                                                        : 
                                                       ((0x341U 
                                                         == 
                                                         (0xfffU 
                                                          & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                         ? vlSelf->CoreTop__DOT__EX__DOT__mie
                                                         : 
                                                        ((0x342U 
                                                          == 
                                                          (0xfffU 
                                                           & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                          ? vlSelf->CoreTop__DOT__EX__DOT__mie
                                                          : 
                                                         ((0x304U 
                                                           == 
                                                           (0xfffU 
                                                            & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                           ? vlSelf->CoreTop__DOT__EX__DOT__src1
                                                           : vlSelf->CoreTop__DOT__EX__DOT__mie)))))
                                                      : vlSelf->CoreTop__DOT__EX__DOT__mie)))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__726__PROF__CoreTop__l1037(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__726__PROF__CoreTop__l1037\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT___GEN_100 = ((7U 
                                                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                ? vlSelf->CoreTop__DOT__EX__DOT__mcause
                                                : (
                                                   (0xfU 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? vlSelf->CoreTop__DOT__EX__DOT__mcause
                                                    : 
                                                   ((0x12U 
                                                     == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                     ? vlSelf->CoreTop__DOT__EX__DOT__mcause
                                                     : 
                                                    ((0x10U 
                                                      == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                      ? vlSelf->CoreTop__DOT__EX__DOT__mcause
                                                      : 
                                                     ((0x13U 
                                                       == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                       ? vlSelf->CoreTop__DOT__EX__DOT__mcause
                                                       : 
                                                      ((0x43U 
                                                        == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                        ? vlSelf->CoreTop__DOT__EX__DOT__mcause
                                                        : 
                                                       ((0x15U 
                                                         == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                         ? 
                                                        ((0x300U 
                                                          == 
                                                          (0xfffU 
                                                           & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                          ? vlSelf->CoreTop__DOT__EX__DOT__mcause
                                                          : 
                                                         ((0x305U 
                                                           == 
                                                           (0xfffU 
                                                            & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                           ? vlSelf->CoreTop__DOT__EX__DOT__mcause
                                                           : 
                                                          ((0x341U 
                                                            == 
                                                            (0xfffU 
                                                             & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                            ? vlSelf->CoreTop__DOT__EX__DOT__mcause
                                                            : 
                                                           ((0x342U 
                                                             == 
                                                             (0xfffU 
                                                              & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                             ? vlSelf->CoreTop__DOT__EX__DOT___T_39
                                                             : vlSelf->CoreTop__DOT__EX__DOT__mcause))))
                                                         : 
                                                        ((0x16U 
                                                          == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                          ? 
                                                         ((0x300U 
                                                           == 
                                                           (0xfffU 
                                                            & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                           ? vlSelf->CoreTop__DOT__EX__DOT__mcause
                                                           : 
                                                          ((0x305U 
                                                            == 
                                                            (0xfffU 
                                                             & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                            ? vlSelf->CoreTop__DOT__EX__DOT__mcause
                                                            : 
                                                           ((0x341U 
                                                             == 
                                                             (0xfffU 
                                                              & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                             ? vlSelf->CoreTop__DOT__EX__DOT__mcause
                                                             : 
                                                            ((0x342U 
                                                              == 
                                                              (0xfffU 
                                                               & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                              ? vlSelf->CoreTop__DOT__EX__DOT__src1
                                                              : vlSelf->CoreTop__DOT__EX__DOT__mcause))))
                                                          : vlSelf->CoreTop__DOT__EX__DOT__mcause))))))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__727__PROF__CoreTop__l1057(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__727__PROF__CoreTop__l1057\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT___GEN_120 = ((0x7aU 
                                                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                ? vlSelf->CoreTop__DOT__EX__DOT__mepc
                                                : (
                                                   (0xdU 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? vlSelf->CoreTop__DOT__EX__DOT__mepc
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                     ? vlSelf->CoreTop__DOT__EX__DOT__mepc
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                      ? vlSelf->CoreTop__DOT__EX__DOT__mepc
                                                      : 
                                                     ((0xfU 
                                                       == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                       ? vlSelf->CoreTop__DOT__EX__DOT__mepc
                                                       : 
                                                      ((0x12U 
                                                        == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                        ? vlSelf->CoreTop__DOT__EX__DOT__mepc
                                                        : 
                                                       ((0x10U 
                                                         == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                         ? vlSelf->CoreTop__DOT__EX__DOT__mepc
                                                         : 
                                                        ((0x13U 
                                                          == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                          ? vlSelf->CoreTop__DOT__EX__DOT__mepc
                                                          : 
                                                         ((0x43U 
                                                           == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                           ? vlSelf->CoreTop__DOT__EX__DOT__mepc
                                                           : 
                                                          ((0x15U 
                                                            == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                            ? 
                                                           ((0x300U 
                                                             == 
                                                             (0xfffU 
                                                              & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                             ? vlSelf->CoreTop__DOT__EX__DOT__mepc
                                                             : 
                                                            ((0x305U 
                                                              == 
                                                              (0xfffU 
                                                               & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                              ? vlSelf->CoreTop__DOT__EX__DOT__mepc
                                                              : 
                                                             ((0x341U 
                                                               == 
                                                               (0xfffU 
                                                                & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                               ? vlSelf->CoreTop__DOT__EX__DOT___T_39
                                                               : vlSelf->CoreTop__DOT__EX__DOT__mepc)))
                                                            : 
                                                           ((0x16U 
                                                             == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                             ? 
                                                            ((0x300U 
                                                              == 
                                                              (0xfffU 
                                                               & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                              ? vlSelf->CoreTop__DOT__EX__DOT__mepc
                                                              : 
                                                             ((0x305U 
                                                               == 
                                                               (0xfffU 
                                                                & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                               ? vlSelf->CoreTop__DOT__EX__DOT__mepc
                                                               : 
                                                              ((0x341U 
                                                                == 
                                                                (0xfffU 
                                                                 & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                                ? vlSelf->CoreTop__DOT__EX__DOT__src1
                                                                : vlSelf->CoreTop__DOT__EX__DOT__mepc)))
                                                             : vlSelf->CoreTop__DOT__EX__DOT__mepc)))))))))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__728__PROF__CoreTop__l1084(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__728__PROF__CoreTop__l1084\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT___GEN_147 = ((0x72U 
                                                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                ? vlSelf->CoreTop__DOT__EX__DOT__mtvec
                                                : (
                                                   (0x6dU 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? vlSelf->CoreTop__DOT__EX__DOT__mtvec
                                                    : 
                                                   ((0x78U 
                                                     == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                     ? vlSelf->CoreTop__DOT__EX__DOT__mtvec
                                                     : 
                                                    ((0x79U 
                                                      == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                      ? vlSelf->CoreTop__DOT__EX__DOT__mtvec
                                                      : 
                                                     ((0x7aU 
                                                       == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                       ? vlSelf->CoreTop__DOT__EX__DOT__mtvec
                                                       : 
                                                      ((0xdU 
                                                        == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                        ? vlSelf->CoreTop__DOT__EX__DOT__mtvec
                                                        : 
                                                       ((1U 
                                                         == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                         ? vlSelf->CoreTop__DOT__EX__DOT__mtvec
                                                         : 
                                                        ((7U 
                                                          == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                          ? vlSelf->CoreTop__DOT__EX__DOT__mtvec
                                                          : 
                                                         ((0xfU 
                                                           == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                           ? vlSelf->CoreTop__DOT__EX__DOT__mtvec
                                                           : 
                                                          ((0x12U 
                                                            == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                            ? vlSelf->CoreTop__DOT__EX__DOT__mtvec
                                                            : 
                                                           ((0x10U 
                                                             == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                             ? vlSelf->CoreTop__DOT__EX__DOT__mtvec
                                                             : 
                                                            ((0x13U 
                                                              == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                              ? vlSelf->CoreTop__DOT__EX__DOT__mtvec
                                                              : 
                                                             ((0x43U 
                                                               == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                               ? vlSelf->CoreTop__DOT__EX__DOT__mtvec
                                                               : 
                                                              ((0x15U 
                                                                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                                ? 
                                                               ((0x300U 
                                                                 == 
                                                                 (0xfffU 
                                                                  & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                                 ? vlSelf->CoreTop__DOT__EX__DOT__mtvec
                                                                 : 
                                                                ((0x305U 
                                                                  == 
                                                                  (0xfffU 
                                                                   & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                                  ? vlSelf->CoreTop__DOT__EX__DOT___T_39
                                                                  : vlSelf->CoreTop__DOT__EX__DOT__mtvec))
                                                                : 
                                                               ((0x16U 
                                                                 == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                                 ? 
                                                                ((0x300U 
                                                                  == 
                                                                  (0xfffU 
                                                                   & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                                  ? vlSelf->CoreTop__DOT__EX__DOT__mtvec
                                                                  : 
                                                                 ((0x305U 
                                                                   == 
                                                                   (0xfffU 
                                                                    & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                                   ? vlSelf->CoreTop__DOT__EX__DOT__src1
                                                                   : vlSelf->CoreTop__DOT__EX__DOT__mtvec))
                                                                 : vlSelf->CoreTop__DOT__EX__DOT__mtvec)))))))))))))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__729__PROF__CoreTop__l1104(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__729__PROF__CoreTop__l1104\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT___GEN_167 = ((0x44U 
                                                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                ? vlSelf->CoreTop__DOT__EX__DOT__mstatus
                                                : (
                                                   (0x69U 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? vlSelf->CoreTop__DOT__EX__DOT__mstatus
                                                    : 
                                                   ((0x71U 
                                                     == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                     ? vlSelf->CoreTop__DOT__EX__DOT__mstatus
                                                     : 
                                                    ((0x72U 
                                                      == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                      ? vlSelf->CoreTop__DOT__EX__DOT__mstatus
                                                      : 
                                                     ((0x6dU 
                                                       == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                       ? vlSelf->CoreTop__DOT__EX__DOT__mstatus
                                                       : 
                                                      ((0x78U 
                                                        == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                        ? vlSelf->CoreTop__DOT__EX__DOT__mstatus
                                                        : 
                                                       ((0x79U 
                                                         == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                         ? vlSelf->CoreTop__DOT__EX__DOT__mstatus
                                                         : 
                                                        ((0x7aU 
                                                          == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                          ? vlSelf->CoreTop__DOT__EX__DOT__mstatus
                                                          : 
                                                         ((0xdU 
                                                           == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                           ? vlSelf->CoreTop__DOT__EX__DOT__mstatus
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                            ? vlSelf->CoreTop__DOT__EX__DOT__mstatus
                                                            : 
                                                           ((7U 
                                                             == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                             ? vlSelf->CoreTop__DOT__EX__DOT__mstatus
                                                             : 
                                                            ((0xfU 
                                                              == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                              ? vlSelf->CoreTop__DOT__EX__DOT__mstatus
                                                              : 
                                                             ((0x12U 
                                                               == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                               ? vlSelf->CoreTop__DOT__EX__DOT__mstatus
                                                               : 
                                                              ((0x10U 
                                                                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                                ? vlSelf->CoreTop__DOT__EX__DOT__mstatus
                                                                : 
                                                               ((0x13U 
                                                                 == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                                 ? vlSelf->CoreTop__DOT__EX__DOT__mstatus
                                                                 : 
                                                                ((0x43U 
                                                                  == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                                  ? vlSelf->CoreTop__DOT__EX__DOT__mstatus
                                                                  : 
                                                                 ((0x15U 
                                                                   == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                                   ? 
                                                                  ((0x300U 
                                                                    == 
                                                                    (0xfffU 
                                                                     & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                                    ? vlSelf->CoreTop__DOT__EX__DOT___T_39
                                                                    : vlSelf->CoreTop__DOT__EX__DOT__mstatus)
                                                                   : 
                                                                  ((0x16U 
                                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                                    ? 
                                                                   ((0x300U 
                                                                     == 
                                                                     (0xfffU 
                                                                      & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                                     ? vlSelf->CoreTop__DOT__EX__DOT__src1
                                                                     : vlSelf->CoreTop__DOT__EX__DOT__mstatus)
                                                                    : vlSelf->CoreTop__DOT__EX__DOT__mstatus))))))))))))))))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__730__PROF__CoreTop__l1201(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__730__PROF__CoreTop__l1201\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__branch_flag = ((0x6bU 
                                                   == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                   ? 
                                                  (vlSelf->CoreTop__DOT__EX__DOT__src1 
                                                   == vlSelf->CoreTop__DOT__EX__DOT__src2)
                                                   : 
                                                  ((0x6cU 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? 
                                                   (vlSelf->CoreTop__DOT__EX__DOT__src1 
                                                    != vlSelf->CoreTop__DOT__EX__DOT__src2)
                                                    : 
                                                   ((0x76U 
                                                     == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                     ? 
                                                    VL_GTES_IQQ(64, vlSelf->CoreTop__DOT__EX__DOT__src1, vlSelf->CoreTop__DOT__EX__DOT__src2)
                                                     : 
                                                    ((0x7bU 
                                                      == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                      ? (IData)(vlSelf->CoreTop__DOT__EX__DOT___compar_result_T_4)
                                                      : 
                                                     ((0xbU 
                                                       == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                       ? (IData)(vlSelf->CoreTop__DOT__EX__DOT___compar_result_T)
                                                       : 
                                                      ((0xcU 
                                                        == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                        ? 
                                                       (vlSelf->CoreTop__DOT__EX__DOT__src1 
                                                        >= vlSelf->CoreTop__DOT__EX__DOT__src2)
                                                        : 
                                                       ((0x17U 
                                                         == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                                                        | (0x18U 
                                                           == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)))))))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__731__PROF__CoreTop__l4226(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__731__PROF__CoreTop__l4226\n"); );
    // Body
    vlSelf->CoreTop__DOT___tail_T_1 = (0x3fU & ((IData)(1U) 
                                                + (IData)(vlSelf->CoreTop__DOT__tail)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__732__PROF__CoreTop__l4272(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__732__PROF__CoreTop__l4272\n"); );
    // Body
    vlSelf->CoreTop__DOT___GEN_177 = ((0xdU == (0x1fU 
                                                & (IData)(vlSelf->CoreTop__DOT__tail)))
                                       ? vlSelf->CoreTop__DOT__buffer_13_PC
                                       : ((0xcU == 
                                           (0x1fU & (IData)(vlSelf->CoreTop__DOT__tail)))
                                           ? vlSelf->CoreTop__DOT__buffer_12_PC
                                           : ((0xbU 
                                               == (0x1fU 
                                                   & (IData)(vlSelf->CoreTop__DOT__tail)))
                                               ? vlSelf->CoreTop__DOT__buffer_11_PC
                                               : ((0xaU 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(vlSelf->CoreTop__DOT__tail)))
                                                   ? vlSelf->CoreTop__DOT__buffer_10_PC
                                                   : 
                                                  ((9U 
                                                    == 
                                                    (0x1fU 
                                                     & (IData)(vlSelf->CoreTop__DOT__tail)))
                                                    ? vlSelf->CoreTop__DOT__buffer_9_PC
                                                    : 
                                                   ((8U 
                                                     == 
                                                     (0x1fU 
                                                      & (IData)(vlSelf->CoreTop__DOT__tail)))
                                                     ? vlSelf->CoreTop__DOT__buffer_8_PC
                                                     : 
                                                    ((7U 
                                                      == 
                                                      (0x1fU 
                                                       & (IData)(vlSelf->CoreTop__DOT__tail)))
                                                      ? vlSelf->CoreTop__DOT__buffer_7_PC
                                                      : 
                                                     ((6U 
                                                       == 
                                                       (0x1fU 
                                                        & (IData)(vlSelf->CoreTop__DOT__tail)))
                                                       ? vlSelf->CoreTop__DOT__buffer_6_PC
                                                       : 
                                                      ((5U 
                                                        == 
                                                        (0x1fU 
                                                         & (IData)(vlSelf->CoreTop__DOT__tail)))
                                                        ? vlSelf->CoreTop__DOT__buffer_5_PC
                                                        : 
                                                       ((4U 
                                                         == 
                                                         (0x1fU 
                                                          & (IData)(vlSelf->CoreTop__DOT__tail)))
                                                         ? vlSelf->CoreTop__DOT__buffer_4_PC
                                                         : 
                                                        ((3U 
                                                          == 
                                                          (0x1fU 
                                                           & (IData)(vlSelf->CoreTop__DOT__tail)))
                                                          ? vlSelf->CoreTop__DOT__buffer_3_PC
                                                          : 
                                                         ((2U 
                                                           == 
                                                           (0x1fU 
                                                            & (IData)(vlSelf->CoreTop__DOT__tail)))
                                                           ? vlSelf->CoreTop__DOT__buffer_2_PC
                                                           : 
                                                          ((1U 
                                                            == 
                                                            (0x1fU 
                                                             & (IData)(vlSelf->CoreTop__DOT__tail)))
                                                            ? vlSelf->CoreTop__DOT__buffer_1_PC
                                                            : vlSelf->CoreTop__DOT__buffer_0_PC)))))))))))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__733__PROF__CoreTop__l4242(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__733__PROF__CoreTop__l4242\n"); );
    // Body
    vlSelf->CoreTop__DOT___GEN_145 = ((0xdU == (0x1fU 
                                                & (IData)(vlSelf->CoreTop__DOT__tail)))
                                       ? vlSelf->CoreTop__DOT__buffer_13_Inst
                                       : ((0xcU == 
                                           (0x1fU & (IData)(vlSelf->CoreTop__DOT__tail)))
                                           ? vlSelf->CoreTop__DOT__buffer_12_Inst
                                           : ((0xbU 
                                               == (0x1fU 
                                                   & (IData)(vlSelf->CoreTop__DOT__tail)))
                                               ? vlSelf->CoreTop__DOT__buffer_11_Inst
                                               : ((0xaU 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(vlSelf->CoreTop__DOT__tail)))
                                                   ? vlSelf->CoreTop__DOT__buffer_10_Inst
                                                   : 
                                                  ((9U 
                                                    == 
                                                    (0x1fU 
                                                     & (IData)(vlSelf->CoreTop__DOT__tail)))
                                                    ? vlSelf->CoreTop__DOT__buffer_9_Inst
                                                    : 
                                                   ((8U 
                                                     == 
                                                     (0x1fU 
                                                      & (IData)(vlSelf->CoreTop__DOT__tail)))
                                                     ? vlSelf->CoreTop__DOT__buffer_8_Inst
                                                     : 
                                                    ((7U 
                                                      == 
                                                      (0x1fU 
                                                       & (IData)(vlSelf->CoreTop__DOT__tail)))
                                                      ? vlSelf->CoreTop__DOT__buffer_7_Inst
                                                      : 
                                                     ((6U 
                                                       == 
                                                       (0x1fU 
                                                        & (IData)(vlSelf->CoreTop__DOT__tail)))
                                                       ? vlSelf->CoreTop__DOT__buffer_6_Inst
                                                       : 
                                                      ((5U 
                                                        == 
                                                        (0x1fU 
                                                         & (IData)(vlSelf->CoreTop__DOT__tail)))
                                                        ? vlSelf->CoreTop__DOT__buffer_5_Inst
                                                        : 
                                                       ((4U 
                                                         == 
                                                         (0x1fU 
                                                          & (IData)(vlSelf->CoreTop__DOT__tail)))
                                                         ? vlSelf->CoreTop__DOT__buffer_4_Inst
                                                         : 
                                                        ((3U 
                                                          == 
                                                          (0x1fU 
                                                           & (IData)(vlSelf->CoreTop__DOT__tail)))
                                                          ? vlSelf->CoreTop__DOT__buffer_3_Inst
                                                          : 
                                                         ((2U 
                                                           == 
                                                           (0x1fU 
                                                            & (IData)(vlSelf->CoreTop__DOT__tail)))
                                                           ? vlSelf->CoreTop__DOT__buffer_2_Inst
                                                           : 
                                                          ((1U 
                                                            == 
                                                            (0x1fU 
                                                             & (IData)(vlSelf->CoreTop__DOT__tail)))
                                                            ? vlSelf->CoreTop__DOT__buffer_1_Inst
                                                            : vlSelf->CoreTop__DOT__buffer_0_Inst)))))))))))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__734__PROF__CoreTop__l4991(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__734__PROF__CoreTop__l4991\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->CoreTop__DOT__head = 0U;
    } else if (vlSelf->CoreTop__DOT__IF_io_flush) {
        vlSelf->CoreTop__DOT__head = 0U;
    } else if (((IData)(vlSelf->CoreTop__DOT__IF_io_cache_req_rdata_rep_valid) 
                & (~ (IData)(vlSelf->CoreTop__DOT__full)))) {
        vlSelf->CoreTop__DOT__head = vlSelf->CoreTop__DOT___head_T_1;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__735__PROF__CoreTop__l4801(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__735__PROF__CoreTop__l4801\n"); );
    // Body
    vlSelf->CoreTop__DOT__IF_io_cache_req_rdata_rep_bits_rdata 
        = ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT___io_in_rdata_rep_bits_rdata_T_1)
            ? ((0U == (7U & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                     >> 3U)))) ? (((QData)((IData)(
                                                                   vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0U])))
                : ((1U == (7U & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                         >> 3U)))) ? 
                   (((QData)((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[3U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[2U])))
                    : ((2U == (7U & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                             >> 3U))))
                        ? (((QData)((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[5U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[4U])))
                        : ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                 >> 3U))))
                            ? (((QData)((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[7U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[6U])))
                            : ((4U == (7U & (IData)(
                                                    (vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                     >> 3U))))
                                ? (((QData)((IData)(
                                                    vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[9U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[8U])))
                                : ((5U == (7U & (IData)(
                                                        (vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                         >> 3U))))
                                    ? (((QData)((IData)(
                                                        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xbU])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xaU])))
                                    : ((6U == (7U & (IData)(
                                                            (vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                             >> 3U))))
                                        ? (((QData)((IData)(
                                                            vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xdU])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xcU])))
                                        : ((7U == (7U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                              >> 3U))))
                                            ? (((QData)((IData)(
                                                                vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xfU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xeU])))
                                            : 0ULL))))))))
            : ((0U == (7U & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                     >> 3U)))) ? (((QData)((IData)(
                                                                   vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0U])))
                : ((1U == (7U & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                         >> 3U)))) ? 
                   (((QData)((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[3U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[2U])))
                    : ((2U == (7U & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                             >> 3U))))
                        ? (((QData)((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[5U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[4U])))
                        : ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                 >> 3U))))
                            ? (((QData)((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[7U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[6U])))
                            : ((4U == (7U & (IData)(
                                                    (vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                     >> 3U))))
                                ? (((QData)((IData)(
                                                    vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[9U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[8U])))
                                : ((5U == (7U & (IData)(
                                                        (vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                         >> 3U))))
                                    ? (((QData)((IData)(
                                                        vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xbU])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xaU])))
                                    : ((6U == (7U & (IData)(
                                                            (vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                             >> 3U))))
                                        ? (((QData)((IData)(
                                                            vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xdU])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xcU])))
                                        : ((7U == (7U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                              >> 3U))))
                                            ? (((QData)((IData)(
                                                                vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xfU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xeU])))
                                            : 0ULL)))))))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__736__PROF__CoreTop__l2763(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__736__PROF__CoreTop__l2763\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_89 
        = (0xfU & ((3U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state))
                    ? ((7U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count_write))
                        ? 0U : ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count_write) 
                                + (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT____VdfgTmp_h9d851aea__0)))
                    : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count_write)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__737__PROF__CoreTop__l2764(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__737__PROF__CoreTop__l2764\n"); );
    // Init
    VlWide<16>/*511:0*/ __Vtemp_h902130f5__0;
    // Body
    VL_SHIFTR_WWI(512,512,32, __Vtemp_h902130f5__0, vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg, 0x40U);
    if ((3U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state))) {
        if (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT____VdfgTmp_h9d851aea__0) {
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0U] 
                = __Vtemp_h902130f5__0[0U];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[1U] 
                = __Vtemp_h902130f5__0[1U];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[2U] 
                = __Vtemp_h902130f5__0[2U];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[3U] 
                = __Vtemp_h902130f5__0[3U];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[4U] 
                = __Vtemp_h902130f5__0[4U];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[5U] 
                = __Vtemp_h902130f5__0[5U];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[6U] 
                = __Vtemp_h902130f5__0[6U];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[7U] 
                = __Vtemp_h902130f5__0[7U];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[8U] 
                = __Vtemp_h902130f5__0[8U];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[9U] 
                = __Vtemp_h902130f5__0[9U];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0xaU] 
                = __Vtemp_h902130f5__0[0xaU];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0xbU] 
                = __Vtemp_h902130f5__0[0xbU];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0xcU] 
                = __Vtemp_h902130f5__0[0xcU];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0xdU] 
                = __Vtemp_h902130f5__0[0xdU];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0xeU] 
                = __Vtemp_h902130f5__0[0xeU];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0xfU] 
                = __Vtemp_h902130f5__0[0xfU];
        } else {
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0U] 
                = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0U];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[1U] 
                = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[1U];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[2U] 
                = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[2U];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[3U] 
                = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[3U];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[4U] 
                = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[4U];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[5U] 
                = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[5U];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[6U] 
                = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[6U];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[7U] 
                = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[7U];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[8U] 
                = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[8U];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[9U] 
                = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[9U];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0xaU] 
                = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xaU];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0xbU] 
                = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xbU];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0xcU] 
                = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xcU];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0xdU] 
                = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xdU];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0xeU] 
                = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xeU];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0xfU] 
                = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xfU];
        }
    } else {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[1U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[1U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[2U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[2U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[3U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[3U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[4U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[4U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[5U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[5U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[6U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[6U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[7U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[7U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[8U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[8U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[9U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[9U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0xaU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xaU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0xbU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xbU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0xcU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xcU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0xdU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xdU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0xeU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xeU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0xfU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xfU];
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__739__PROF__CoreTop__l1597(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__739__PROF__CoreTop__l1597\n"); );
    // Body
    vlSelf->CoreTop__DOT__MEM_io_out_valid = (1U & 
                                              (~ ((~ (IData)(vlSelf->CoreTop__DOT__valid_1)) 
                                                  | (IData)(vlSelf->CoreTop__DOT__MEM__DOT___io_out_valid_T_6))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__740__PROF__CoreTop__l1260(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__740__PROF__CoreTop__l1260\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT____VdfgTmp_h37196788__0 
        = ((~ (IData)(vlSelf->CoreTop__DOT__MEM__DOT___io_out_valid_T_6)) 
           & (0U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__741__PROF__CoreTop__l1784(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__741__PROF__CoreTop__l1784\n"); );
    // Body
    if ((3U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state))) {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0U] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0U]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0U]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[1U] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[1U]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[1U]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[1U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[2U] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[2U]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[2U]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[2U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[3U] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[3U]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[3U]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[3U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[4U] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[4U]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[4U]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[4U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[5U] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[5U]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[5U]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[5U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[6U] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[6U]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[6U]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[6U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[7U] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[7U]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[7U]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[7U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[8U] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[8U]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[8U]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[8U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[9U] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[9U]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[9U]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[9U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xaU] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xaU]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xaU]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0xaU]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xbU] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xbU]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xbU]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0xbU]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xcU] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xcU]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xcU]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0xcU]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xdU] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xdU]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xdU]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0xdU]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xeU] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xeU]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xeU]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0xeU]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xfU] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xfU]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xfU]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0xfU]);
    } else {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0U] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0U]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0U]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[1U] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[1U]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[1U]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[1U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[2U] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[2U]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[2U]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[2U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[3U] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[3U]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[3U]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[3U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[4U] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[4U]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[4U]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[4U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[5U] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[5U]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[5U]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[5U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[6U] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[6U]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[6U]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[6U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[7U] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[7U]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[7U]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[7U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[8U] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[8U]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[8U]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[8U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[9U] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[9U]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[9U]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[9U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xaU] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xaU]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xaU]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0xaU]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xbU] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xbU]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xbU]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0xbU]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xcU] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xcU]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xcU]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0xcU]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xdU] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xdU]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xdU]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0xdU]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xeU] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xeU]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xeU]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0xeU]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xfU] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xfU]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xfU]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0xfU]);
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__742__PROF__CoreTop__l685(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__742__PROF__CoreTop__l685\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2 
        = ((2U & ((IData)((vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src1 
                           >> 0x3fU)) << 1U)) | (1U 
                                                 & (IData)(
                                                           (vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src2 
                                                            >> 0x3fU))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__743__PROF__CoreTop__l1149(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__743__PROF__CoreTop__l1149\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h052dcc23__0;
    VlWide<3>/*95:0*/ __Vtemp_h0fbea1b2__0;
    VlWide<4>/*127:0*/ __Vtemp_h0533a6ed__0;
    VlWide<4>/*127:0*/ __Vtemp_h97f32683__0;
    VlWide<3>/*95:0*/ __Vtemp_h8004274a__0;
    VlWide<3>/*95:0*/ __Vtemp_h29cbf8c2__0;
    VlWide<4>/*127:0*/ __Vtemp_hb23900ce__0;
    // Body
    __Vtemp_h052dcc23__0[0U] = (IData)(vlSelf->CoreTop__DOT__EX__DOT__src1);
    __Vtemp_h052dcc23__0[1U] = (IData)((vlSelf->CoreTop__DOT__EX__DOT__src1 
                                        >> 0x20U));
    __Vtemp_h052dcc23__0[2U] = 0U;
    VL_SHIFTL_WWI(95,95,5, __Vtemp_h0fbea1b2__0, __Vtemp_h052dcc23__0, 
                  (0x1fU & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)));
    __Vtemp_h0533a6ed__0[0U] = (IData)(vlSelf->CoreTop__DOT__EX__DOT__src1);
    __Vtemp_h0533a6ed__0[1U] = (IData)((vlSelf->CoreTop__DOT__EX__DOT__src1 
                                        >> 0x20U));
    __Vtemp_h0533a6ed__0[2U] = 0U;
    __Vtemp_h0533a6ed__0[3U] = 0U;
    VL_SHIFTL_WWI(127,127,6, __Vtemp_h97f32683__0, __Vtemp_h0533a6ed__0, 
                  (0x3fU & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)));
    __Vtemp_h8004274a__0[0U] = (IData)(vlSelf->CoreTop__DOT__EX__DOT__src1);
    __Vtemp_h8004274a__0[1U] = 0U;
    __Vtemp_h8004274a__0[2U] = 0U;
    VL_SHIFTL_WWI(95,95,6, __Vtemp_h29cbf8c2__0, __Vtemp_h8004274a__0, 
                  (0x3fU & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)));
    __Vtemp_hb23900ce__0[0U] = (IData)(((0x75U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                         ? (vlSelf->CoreTop__DOT__EX__DOT__src1 
                                            >> (0x3fU 
                                                & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)))
                                         : ((5U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                             ? (((QData)((IData)(
                                                                 ((__Vtemp_h29cbf8c2__0[0U] 
                                                                   >> 0x1fU)
                                                                   ? 0xffffffffU
                                                                   : 0U))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((0x1fU 
                                                                    >= 
                                                                    (0x3fU 
                                                                     & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)))
                                                                    ? 
                                                                   ((IData)(vlSelf->CoreTop__DOT__EX__DOT__src1) 
                                                                    << 
                                                                    (0x3fU 
                                                                     & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)))
                                                                    : 0U))))
                                             : ((6U 
                                                 == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                 ? vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_28
                                                 : 
                                                ((8U 
                                                  == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                  ? vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_35
                                                  : 
                                                 ((9U 
                                                   == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                   ? vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_28
                                                   : 
                                                  ((0xaU 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_35
                                                    : 
                                                   ((0x14U 
                                                     == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                     ? 
                                                    VL_SHIFTRS_QQI(64,64,6, vlSelf->CoreTop__DOT__EX__DOT__src1, 
                                                                   (0x3fU 
                                                                    & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)))
                                                     : 0ULL))))))));
    __Vtemp_hb23900ce__0[1U] = (IData)((((0x75U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                          ? (vlSelf->CoreTop__DOT__EX__DOT__src1 
                                             >> (0x3fU 
                                                 & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)))
                                          : ((5U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                              ? (((QData)((IData)(
                                                                  ((__Vtemp_h29cbf8c2__0[0U] 
                                                                    >> 0x1fU)
                                                                    ? 0xffffffffU
                                                                    : 0U))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((0x1fU 
                                                                     >= 
                                                                     (0x3fU 
                                                                      & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)))
                                                                     ? 
                                                                    ((IData)(vlSelf->CoreTop__DOT__EX__DOT__src1) 
                                                                     << 
                                                                     (0x3fU 
                                                                      & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)))
                                                                     : 0U))))
                                              : ((6U 
                                                  == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                  ? vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_28
                                                  : 
                                                 ((8U 
                                                   == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                   ? vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_35
                                                   : 
                                                  ((9U 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_28
                                                    : 
                                                   ((0xaU 
                                                     == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                     ? vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_35
                                                     : 
                                                    ((0x14U 
                                                      == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                      ? 
                                                     VL_SHIFTRS_QQI(64,64,6, vlSelf->CoreTop__DOT__EX__DOT__src1, 
                                                                    (0x3fU 
                                                                     & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)))
                                                      : 0ULL))))))) 
                                        >> 0x20U));
    if ((0x73U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
        vlSelf->CoreTop__DOT__EX__DOT___GEN_202[0U] 
            = (IData)((((QData)((IData)(((__Vtemp_h0fbea1b2__0[0U] 
                                          >> 0x1fU)
                                          ? 0xffffffffU
                                          : 0U))) << 0x20U) 
                       | (QData)((IData)(((IData)(vlSelf->CoreTop__DOT__EX__DOT__src1) 
                                          << (0x1fU 
                                              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)))))));
        vlSelf->CoreTop__DOT__EX__DOT___GEN_202[1U] 
            = (IData)(((((QData)((IData)(((__Vtemp_h0fbea1b2__0[0U] 
                                           >> 0x1fU)
                                           ? 0xffffffffU
                                           : 0U))) 
                         << 0x20U) | (QData)((IData)(
                                                     ((IData)(vlSelf->CoreTop__DOT__EX__DOT__src1) 
                                                      << 
                                                      (0x1fU 
                                                       & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)))))) 
                       >> 0x20U));
        vlSelf->CoreTop__DOT__EX__DOT___GEN_202[2U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT___GEN_202[3U] = 0U;
    } else if ((0x41U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
        vlSelf->CoreTop__DOT__EX__DOT___GEN_202[0U] 
            = __Vtemp_h97f32683__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT___GEN_202[1U] 
            = __Vtemp_h97f32683__0[1U];
        vlSelf->CoreTop__DOT__EX__DOT___GEN_202[2U] 
            = __Vtemp_h97f32683__0[2U];
        vlSelf->CoreTop__DOT__EX__DOT___GEN_202[3U] 
            = (0x7fffffffU & __Vtemp_h97f32683__0[3U]);
    } else {
        vlSelf->CoreTop__DOT__EX__DOT___GEN_202[0U] 
            = __Vtemp_hb23900ce__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT___GEN_202[1U] 
            = __Vtemp_hb23900ce__0[1U];
        vlSelf->CoreTop__DOT__EX__DOT___GEN_202[2U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT___GEN_202[3U] = 0U;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__744__PROF__CoreTop__l1109(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__744__PROF__CoreTop__l1109\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT___GEN_172 = ((0x44U 
                                                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                ? vlSelf->CoreTop__DOT__EX__DOT__mip
                                                : (
                                                   (0x69U 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? vlSelf->CoreTop__DOT__EX__DOT__mip
                                                    : 
                                                   ((0x71U 
                                                     == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                     ? vlSelf->CoreTop__DOT__EX__DOT__mip
                                                     : 
                                                    ((0x72U 
                                                      == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                      ? vlSelf->CoreTop__DOT__EX__DOT__mip
                                                      : 
                                                     ((0x6dU 
                                                       == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                       ? vlSelf->CoreTop__DOT__EX__DOT__mip
                                                       : 
                                                      ((0x78U 
                                                        == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                        ? vlSelf->CoreTop__DOT__EX__DOT__mip
                                                        : 
                                                       ((0x79U 
                                                         == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                         ? vlSelf->CoreTop__DOT__EX__DOT__mip
                                                         : 
                                                        ((0x7aU 
                                                          == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                          ? vlSelf->CoreTop__DOT__EX__DOT__mip
                                                          : 
                                                         ((0xdU 
                                                           == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                           ? vlSelf->CoreTop__DOT__EX__DOT__mip
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                            ? vlSelf->CoreTop__DOT__EX__DOT__mip
                                                            : 
                                                           ((7U 
                                                             == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                             ? vlSelf->CoreTop__DOT__EX__DOT__mip
                                                             : 
                                                            ((0xfU 
                                                              == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                              ? vlSelf->CoreTop__DOT__EX__DOT__mip
                                                              : 
                                                             ((0x12U 
                                                               == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                               ? vlSelf->CoreTop__DOT__EX__DOT__mip
                                                               : 
                                                              ((0x10U 
                                                                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                                ? vlSelf->CoreTop__DOT__EX__DOT__mip
                                                                : 
                                                               ((0x13U 
                                                                 == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                                 ? vlSelf->CoreTop__DOT__EX__DOT__mip
                                                                 : 
                                                                ((0x43U 
                                                                  == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                                  ? vlSelf->CoreTop__DOT__EX__DOT__mip
                                                                  : vlSelf->CoreTop__DOT__EX__DOT___GEN_60))))))))))))))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__745__PROF__CoreTop__l1108(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__745__PROF__CoreTop__l1108\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT___GEN_171 = ((0x44U 
                                                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                ? vlSelf->CoreTop__DOT__EX__DOT__mie
                                                : (
                                                   (0x69U 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? vlSelf->CoreTop__DOT__EX__DOT__mie
                                                    : 
                                                   ((0x71U 
                                                     == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                     ? vlSelf->CoreTop__DOT__EX__DOT__mie
                                                     : 
                                                    ((0x72U 
                                                      == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                      ? vlSelf->CoreTop__DOT__EX__DOT__mie
                                                      : 
                                                     ((0x6dU 
                                                       == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                       ? vlSelf->CoreTop__DOT__EX__DOT__mie
                                                       : 
                                                      ((0x78U 
                                                        == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                        ? vlSelf->CoreTop__DOT__EX__DOT__mie
                                                        : 
                                                       ((0x79U 
                                                         == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                         ? vlSelf->CoreTop__DOT__EX__DOT__mie
                                                         : 
                                                        ((0x7aU 
                                                          == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                          ? vlSelf->CoreTop__DOT__EX__DOT__mie
                                                          : 
                                                         ((0xdU 
                                                           == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                           ? vlSelf->CoreTop__DOT__EX__DOT__mie
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                            ? vlSelf->CoreTop__DOT__EX__DOT__mie
                                                            : 
                                                           ((7U 
                                                             == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                             ? vlSelf->CoreTop__DOT__EX__DOT__mie
                                                             : 
                                                            ((0xfU 
                                                              == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                              ? vlSelf->CoreTop__DOT__EX__DOT__mie
                                                              : 
                                                             ((0x12U 
                                                               == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                               ? vlSelf->CoreTop__DOT__EX__DOT__mie
                                                               : vlSelf->CoreTop__DOT__EX__DOT___GEN_80)))))))))))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__746__PROF__CoreTop__l1112(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__746__PROF__CoreTop__l1112\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT___GEN_177 = ((0x68U 
                                                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                ? vlSelf->CoreTop__DOT__EX__DOT__mcause
                                                : (
                                                   (0x44U 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? vlSelf->CoreTop__DOT__EX__DOT__mcause
                                                    : 
                                                   ((0x69U 
                                                     == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                     ? vlSelf->CoreTop__DOT__EX__DOT__mcause
                                                     : 
                                                    ((0x71U 
                                                      == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                      ? vlSelf->CoreTop__DOT__EX__DOT__mcause
                                                      : 
                                                     ((0x72U 
                                                       == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                       ? vlSelf->CoreTop__DOT__EX__DOT__mcause
                                                       : 
                                                      ((0x6dU 
                                                        == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                        ? vlSelf->CoreTop__DOT__EX__DOT__mcause
                                                        : 
                                                       ((0x78U 
                                                         == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                         ? vlSelf->CoreTop__DOT__EX__DOT__mcause
                                                         : 
                                                        ((0x79U 
                                                          == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                          ? vlSelf->CoreTop__DOT__EX__DOT__mcause
                                                          : 
                                                         ((0x7aU 
                                                           == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                           ? vlSelf->CoreTop__DOT__EX__DOT__mcause
                                                           : 
                                                          ((0xdU 
                                                            == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                            ? vlSelf->CoreTop__DOT__EX__DOT__mcause
                                                            : 
                                                           ((1U 
                                                             == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                             ? vlSelf->CoreTop__DOT__EX__DOT__mcause
                                                             : vlSelf->CoreTop__DOT__EX__DOT___GEN_100)))))))))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__747__PROF__CoreTop__l1106(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__747__PROF__CoreTop__l1106\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT___GEN_169 = ((0x44U 
                                                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                ? vlSelf->CoreTop__DOT__EX__DOT__mepc
                                                : (
                                                   (0x69U 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? vlSelf->CoreTop__DOT__EX__DOT__mepc
                                                    : 
                                                   ((0x71U 
                                                     == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                     ? vlSelf->CoreTop__DOT__EX__DOT__mepc
                                                     : 
                                                    ((0x72U 
                                                      == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                      ? vlSelf->CoreTop__DOT__EX__DOT__mepc
                                                      : 
                                                     ((0x6dU 
                                                       == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                       ? vlSelf->CoreTop__DOT__EX__DOT__mepc
                                                       : 
                                                      ((0x78U 
                                                        == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                        ? vlSelf->CoreTop__DOT__EX__DOT__mepc
                                                        : 
                                                       ((0x79U 
                                                         == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                         ? vlSelf->CoreTop__DOT__EX__DOT__mepc
                                                         : vlSelf->CoreTop__DOT__EX__DOT___GEN_120)))))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__748__PROF__CoreTop__l1105(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__748__PROF__CoreTop__l1105\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT___GEN_168 = ((0x44U 
                                                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                ? vlSelf->CoreTop__DOT__EX__DOT__mtvec
                                                : (
                                                   (0x69U 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? vlSelf->CoreTop__DOT__EX__DOT__mtvec
                                                    : 
                                                   ((0x71U 
                                                     == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                     ? vlSelf->CoreTop__DOT__EX__DOT__mtvec
                                                     : vlSelf->CoreTop__DOT__EX__DOT___GEN_147)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__749__PROF__CoreTop__l1114(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__749__PROF__CoreTop__l1114\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT___GEN_181 = ((0x1aU 
                                                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                ? vlSelf->CoreTop__DOT__EX__DOT__mstatus
                                                : (
                                                   (0x68U 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? vlSelf->CoreTop__DOT__EX__DOT__mstatus
                                                    : vlSelf->CoreTop__DOT__EX__DOT___GEN_167));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__750__PROF__CoreTop__l1207(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__750__PROF__CoreTop__l1207\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT___dnpc_T_11 = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__branch_flag)
                                                  ? 
                                                 ((0x6bU 
                                                   == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                   ? vlSelf->CoreTop__DOT__EX__DOT___branch_result_T_1
                                                   : 
                                                  ((0x6cU 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? vlSelf->CoreTop__DOT__EX__DOT___branch_result_T_1
                                                    : 
                                                   ((0x76U 
                                                     == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                     ? vlSelf->CoreTop__DOT__EX__DOT___branch_result_T_1
                                                     : 
                                                    ((0x7bU 
                                                      == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                      ? vlSelf->CoreTop__DOT__EX__DOT___branch_result_T_1
                                                      : 
                                                     ((0xbU 
                                                       == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                       ? vlSelf->CoreTop__DOT__EX__DOT___branch_result_T_1
                                                       : 
                                                      ((0xcU 
                                                        == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                        ? vlSelf->CoreTop__DOT__EX__DOT___branch_result_T_1
                                                        : 0ULL))))))
                                                  : 
                                                 (4ULL 
                                                  + vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__751__PROF__CoreTop__l1225(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__751__PROF__CoreTop__l1225\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__is_branch = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__branch_flag) 
                                                & (IData)(vlSelf->CoreTop__DOT__EX__DOT____VdfgTmp_h1a4c5317__0));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__752__PROF__CoreTop__l4285(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__752__PROF__CoreTop__l4285\n"); );
    // Body
    vlSelf->CoreTop__DOT___GEN_190 = ((0x1aU == (0x1fU 
                                                 & (IData)(vlSelf->CoreTop__DOT__tail)))
                                       ? vlSelf->CoreTop__DOT__buffer_26_PC
                                       : ((0x19U == 
                                           (0x1fU & (IData)(vlSelf->CoreTop__DOT__tail)))
                                           ? vlSelf->CoreTop__DOT__buffer_25_PC
                                           : ((0x18U 
                                               == (0x1fU 
                                                   & (IData)(vlSelf->CoreTop__DOT__tail)))
                                               ? vlSelf->CoreTop__DOT__buffer_24_PC
                                               : ((0x17U 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(vlSelf->CoreTop__DOT__tail)))
                                                   ? vlSelf->CoreTop__DOT__buffer_23_PC
                                                   : 
                                                  ((0x16U 
                                                    == 
                                                    (0x1fU 
                                                     & (IData)(vlSelf->CoreTop__DOT__tail)))
                                                    ? vlSelf->CoreTop__DOT__buffer_22_PC
                                                    : 
                                                   ((0x15U 
                                                     == 
                                                     (0x1fU 
                                                      & (IData)(vlSelf->CoreTop__DOT__tail)))
                                                     ? vlSelf->CoreTop__DOT__buffer_21_PC
                                                     : 
                                                    ((0x14U 
                                                      == 
                                                      (0x1fU 
                                                       & (IData)(vlSelf->CoreTop__DOT__tail)))
                                                      ? vlSelf->CoreTop__DOT__buffer_20_PC
                                                      : 
                                                     ((0x13U 
                                                       == 
                                                       (0x1fU 
                                                        & (IData)(vlSelf->CoreTop__DOT__tail)))
                                                       ? vlSelf->CoreTop__DOT__buffer_19_PC
                                                       : 
                                                      ((0x12U 
                                                        == 
                                                        (0x1fU 
                                                         & (IData)(vlSelf->CoreTop__DOT__tail)))
                                                        ? vlSelf->CoreTop__DOT__buffer_18_PC
                                                        : 
                                                       ((0x11U 
                                                         == 
                                                         (0x1fU 
                                                          & (IData)(vlSelf->CoreTop__DOT__tail)))
                                                         ? vlSelf->CoreTop__DOT__buffer_17_PC
                                                         : 
                                                        ((0x10U 
                                                          == 
                                                          (0x1fU 
                                                           & (IData)(vlSelf->CoreTop__DOT__tail)))
                                                          ? vlSelf->CoreTop__DOT__buffer_16_PC
                                                          : 
                                                         ((0xfU 
                                                           == 
                                                           (0x1fU 
                                                            & (IData)(vlSelf->CoreTop__DOT__tail)))
                                                           ? vlSelf->CoreTop__DOT__buffer_15_PC
                                                           : 
                                                          ((0xeU 
                                                            == 
                                                            (0x1fU 
                                                             & (IData)(vlSelf->CoreTop__DOT__tail)))
                                                            ? vlSelf->CoreTop__DOT__buffer_14_PC
                                                            : vlSelf->CoreTop__DOT___GEN_177)))))))))))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__753__PROF__CoreTop__l4255(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__753__PROF__CoreTop__l4255\n"); );
    // Body
    vlSelf->CoreTop__DOT___GEN_158 = ((0x1aU == (0x1fU 
                                                 & (IData)(vlSelf->CoreTop__DOT__tail)))
                                       ? vlSelf->CoreTop__DOT__buffer_26_Inst
                                       : ((0x19U == 
                                           (0x1fU & (IData)(vlSelf->CoreTop__DOT__tail)))
                                           ? vlSelf->CoreTop__DOT__buffer_25_Inst
                                           : ((0x18U 
                                               == (0x1fU 
                                                   & (IData)(vlSelf->CoreTop__DOT__tail)))
                                               ? vlSelf->CoreTop__DOT__buffer_24_Inst
                                               : ((0x17U 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(vlSelf->CoreTop__DOT__tail)))
                                                   ? vlSelf->CoreTop__DOT__buffer_23_Inst
                                                   : 
                                                  ((0x16U 
                                                    == 
                                                    (0x1fU 
                                                     & (IData)(vlSelf->CoreTop__DOT__tail)))
                                                    ? vlSelf->CoreTop__DOT__buffer_22_Inst
                                                    : 
                                                   ((0x15U 
                                                     == 
                                                     (0x1fU 
                                                      & (IData)(vlSelf->CoreTop__DOT__tail)))
                                                     ? vlSelf->CoreTop__DOT__buffer_21_Inst
                                                     : 
                                                    ((0x14U 
                                                      == 
                                                      (0x1fU 
                                                       & (IData)(vlSelf->CoreTop__DOT__tail)))
                                                      ? vlSelf->CoreTop__DOT__buffer_20_Inst
                                                      : 
                                                     ((0x13U 
                                                       == 
                                                       (0x1fU 
                                                        & (IData)(vlSelf->CoreTop__DOT__tail)))
                                                       ? vlSelf->CoreTop__DOT__buffer_19_Inst
                                                       : 
                                                      ((0x12U 
                                                        == 
                                                        (0x1fU 
                                                         & (IData)(vlSelf->CoreTop__DOT__tail)))
                                                        ? vlSelf->CoreTop__DOT__buffer_18_Inst
                                                        : 
                                                       ((0x11U 
                                                         == 
                                                         (0x1fU 
                                                          & (IData)(vlSelf->CoreTop__DOT__tail)))
                                                         ? vlSelf->CoreTop__DOT__buffer_17_Inst
                                                         : 
                                                        ((0x10U 
                                                          == 
                                                          (0x1fU 
                                                           & (IData)(vlSelf->CoreTop__DOT__tail)))
                                                          ? vlSelf->CoreTop__DOT__buffer_16_Inst
                                                          : 
                                                         ((0xfU 
                                                           == 
                                                           (0x1fU 
                                                            & (IData)(vlSelf->CoreTop__DOT__tail)))
                                                           ? vlSelf->CoreTop__DOT__buffer_15_Inst
                                                           : 
                                                          ((0xeU 
                                                            == 
                                                            (0x1fU 
                                                             & (IData)(vlSelf->CoreTop__DOT__tail)))
                                                            ? vlSelf->CoreTop__DOT__buffer_14_Inst
                                                            : vlSelf->CoreTop__DOT___GEN_145)))))))))))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__754__PROF__CoreTop__l4800(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__754__PROF__CoreTop__l4800\n"); );
    // Body
    vlSelf->CoreTop__DOT__IF_io_cache_req_rdata_rep_valid 
        = ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT___io_in_rdata_rep_bits_rdata_T_1) 
           | ((2U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
              & (3U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__756__PROF__CoreTop__l4328(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__756__PROF__CoreTop__l4328\n"); );
    // Body
    vlSelf->CoreTop__DOT___GEN_238 = vlSelf->CoreTop__DOT__MEM_io_out_valid;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__757__PROF__CoreTop__l4798(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__757__PROF__CoreTop__l4798\n"); );
    // Body
    vlSelf->CoreTop__DOT__IF_io_branch_io_is_jump = 
        ((IData)(vlSelf->CoreTop__DOT__EX__DOT__is_jump) 
         & (IData)(vlSelf->CoreTop__DOT__EX__DOT____VdfgTmp_h37196788__0));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__758__PROF__CoreTop__l707(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__758__PROF__CoreTop__l707\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_quotient 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_flow_div_signed)
            ? (((((0U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                   ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_12
                   : 0ULL) | ((1U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                               ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_17
                               : 0ULL)) | ((2U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                                            ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_17
                                            : 0ULL)) 
               | ((3U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                   ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_12
                   : 0ULL)) : vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S);
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__759__PROF__CoreTop__l708(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__759__PROF__CoreTop__l708\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_remainder 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_flow_div_signed)
            ? (((((0U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                   ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_15
                   : 0ULL) | ((1U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                               ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_15
                               : 0ULL)) | ((2U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                                            ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_25
                                            : 0ULL)) 
               | ((3U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                   ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_25
                   : 0ULL)) : (((QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[3U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[2U]))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__760__PROF__CoreTop__l4799(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__760__PROF__CoreTop__l4799\n"); );
    // Body
    vlSelf->CoreTop__DOT__IF_io_branch_io_dnpc = ((0x19U 
                                                   == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                   ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1
                                                   : 
                                                  ((0x48U 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? 
                                                   (0xfffffffffffffffeULL 
                                                    & vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1)
                                                    : 
                                                   ((0x6bU 
                                                     == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                     ? vlSelf->CoreTop__DOT__EX__DOT___dnpc_T_11
                                                     : 
                                                    ((0x6cU 
                                                      == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                      ? vlSelf->CoreTop__DOT__EX__DOT___dnpc_T_11
                                                      : 
                                                     ((0x76U 
                                                       == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                       ? vlSelf->CoreTop__DOT__EX__DOT___dnpc_T_11
                                                       : 
                                                      ((0xcU 
                                                        == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                        ? vlSelf->CoreTop__DOT__EX__DOT___dnpc_T_11
                                                        : 
                                                       ((0x7bU 
                                                         == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                         ? vlSelf->CoreTop__DOT__EX__DOT___dnpc_T_11
                                                         : 
                                                        ((0xbU 
                                                          == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                          ? vlSelf->CoreTop__DOT__EX__DOT___dnpc_T_11
                                                          : 
                                                         ((0x17U 
                                                           == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                           ? vlSelf->CoreTop__DOT__EX__DOT__csr_data
                                                           : 
                                                          ((0x18U 
                                                            == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                            ? vlSelf->CoreTop__DOT__EX__DOT__csr_data
                                                            : 
                                                           (4ULL 
                                                            + vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC)))))))))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__761__PROF__CoreTop__l4797(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__761__PROF__CoreTop__l4797\n"); );
    // Body
    vlSelf->CoreTop__DOT__IF_io_branch_io_is_branch 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__is_branch) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT____VdfgTmp_h37196788__0));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__762__PROF__CoreTop__l1228(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__762__PROF__CoreTop__l1228\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT___io_is_flush_T_2 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__is_branch) 
           | (IData)(vlSelf->CoreTop__DOT__EX__DOT__is_jump));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__763__PROF__CoreTop__l4806(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__763__PROF__CoreTop__l4806\n"); );
    // Body
    vlSelf->CoreTop__DOT__ID_io_in_bits_Inst = ((0x1fU 
                                                 == 
                                                 (0x1fU 
                                                  & (IData)(vlSelf->CoreTop__DOT__tail)))
                                                 ? vlSelf->CoreTop__DOT__buffer_31_Inst
                                                 : 
                                                ((0x1eU 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(vlSelf->CoreTop__DOT__tail)))
                                                  ? vlSelf->CoreTop__DOT__buffer_30_Inst
                                                  : 
                                                 ((0x1dU 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(vlSelf->CoreTop__DOT__tail)))
                                                   ? vlSelf->CoreTop__DOT__buffer_29_Inst
                                                   : 
                                                  ((0x1cU 
                                                    == 
                                                    (0x1fU 
                                                     & (IData)(vlSelf->CoreTop__DOT__tail)))
                                                    ? vlSelf->CoreTop__DOT__buffer_28_Inst
                                                    : 
                                                   ((0x1bU 
                                                     == 
                                                     (0x1fU 
                                                      & (IData)(vlSelf->CoreTop__DOT__tail)))
                                                     ? vlSelf->CoreTop__DOT__buffer_27_Inst
                                                     : vlSelf->CoreTop__DOT___GEN_158)))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__764__PROF__CoreTop__l4227(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__764__PROF__CoreTop__l4227\n"); );
    // Body
    vlSelf->CoreTop__DOT___head_T_1 = (0x3fU & ((IData)(1U) 
                                                + (IData)(vlSelf->CoreTop__DOT__head)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__765__PROF__CoreTop__l4160(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__765__PROF__CoreTop__l4160\n"); );
    // Body
    vlSelf->CoreTop__DOT__empty = ((IData)(vlSelf->CoreTop__DOT__head) 
                                   == (IData)(vlSelf->CoreTop__DOT__tail));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__766__PROF__CoreTop__l4161(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__766__PROF__CoreTop__l4161\n"); );
    // Body
    vlSelf->CoreTop__DOT__full = (((0x1fU & (IData)(vlSelf->CoreTop__DOT__head)) 
                                   == (0x1fU & (IData)(vlSelf->CoreTop__DOT__tail))) 
                                  & (((IData)(vlSelf->CoreTop__DOT__head) 
                                      ^ (IData)(vlSelf->CoreTop__DOT__tail)) 
                                     >> 5U));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__767__PROF__CoreTop__l922(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__767__PROF__CoreTop__l922\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_26 
        = (((QData)((IData)(((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_quotient 
                                            >> 0x1fU)))
                              ? 0xffffffffU : 0U))) 
            << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_quotient)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__768__PROF__CoreTop__l925(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__768__PROF__CoreTop__l925\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_30 
        = (((QData)((IData)(((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_remainder 
                                            >> 0x1fU)))
                              ? 0xffffffffU : 0U))) 
            << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_remainder)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__769__PROF__CoreTop__l4803(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__769__PROF__CoreTop__l4803\n"); );
    // Body
    vlSelf->CoreTop__DOT__IF_io_flush = ((IData)(vlSelf->CoreTop__DOT__EX__DOT___io_is_flush_T_2) 
                                         & ((IData)(vlSelf->CoreTop__DOT__valid) 
                                            & (IData)(vlSelf->CoreTop__DOT__EX__DOT____VdfgTmp_h37196788__0)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__770__PROF__CoreTop__l1231(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__770__PROF__CoreTop__l1231\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT___io_out_valid_T_11 
        = ((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT___io_is_flush_T_2));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__771__PROF__CoreTop__l379(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__771__PROF__CoreTop__l379\n"); );
    // Body
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_363 
        = ((0x501bU == (0xfc00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
           | ((0x2013U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
              | ((0x6003U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                 | ((0x3bU == (0xfe00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                    | ((0x40000033U == (0xfe00707fU 
                                        & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                       | ((0x33U == (0xfe00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                          | ((0x7033U == (0xfe00707fU 
                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                             | ((0x3033U == (0xfe00707fU 
                                             & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                | ((0x103bU == (0xfe00707fU 
                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                   | ((0x6033U == (0xfe00707fU 
                                                   & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                      | ((0x200003bU 
                                          == (0xfe00707fU 
                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                         | ((0x200403bU 
                                             == (0xfe00707fU 
                                                 & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                            | ((0x200603bU 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                               | ((0x4000003bU 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                                  | ((0x2033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                                     | ((0x4000503bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                                        | ((0x503bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                                           | ((0x4033U 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                                              | ((0x200703bU 
                                                                  == 
                                                                  (0xfe00707fU 
                                                                   & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                                                 | ((0x1033U 
                                                                     == 
                                                                     (0xfe00707fU 
                                                                      & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                                                    | ((0x2007033U 
                                                                        == 
                                                                        (0xfe00707fU 
                                                                         & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                                                       | ((0x200503bU 
                                                                           == 
                                                                           (0xfe00707fU 
                                                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                                                          | ((0x2006033U 
                                                                              == 
                                                                              (0xfe00707fU 
                                                                               & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                                                             | ((0x5033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                                                                | ((0x2005033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                                                                | ((0x2004033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                                                                | ((0x40005033U 
                                                                                == 
                                                                                (0xfc00707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                                                                | ((0x2000033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                                                                | ((0x17U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                                                                | ((0x37U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                                                                | ((0x3023U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                                                                & ((0x1023U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                                                                & ((0x23U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                                                                & ((0x2023U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                                                                & ((0x100073U 
                                                                                != vlSelf->CoreTop__DOT__ID_io_in_bits_Inst) 
                                                                                & ((0x6fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                                                                | ((0x67U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                                                                | ((0x63U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                                                                & ((0x1063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                                                                & ((0x5063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                                                                & ((0x4063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                                                                & ((0x6063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                                                                & ((0x7063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                                                                & ((0x2073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                                                                | (0x1073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))))))))))))))))))))))))))))))))))))))))))))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__772__PROF__CoreTop__l259(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__772__PROF__CoreTop__l259\n"); );
    // Body
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_209 
        = ((0x17U == (0x7fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
            ? 0U : ((0x37U == (0x7fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                     ? 0U : ((0x3023U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                              ? 4U : ((0x1023U == (0x707fU 
                                                   & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                       ? 4U : ((0x23U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                ? 4U
                                                : (
                                                   (0x2023U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                    ? 4U
                                                    : 
                                                   ((0x100073U 
                                                     == vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)
                                                     ? 0U
                                                     : 
                                                    ((0x6fU 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                      ? 3U
                                                      : 
                                                     ((0x67U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                       ? 3U
                                                       : 
                                                      ((0x63U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                        ? 2U
                                                        : 
                                                       ((0x1063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                         ? 2U
                                                         : 
                                                        ((0x5063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                          ? 2U
                                                          : 
                                                         ((0x4063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                           ? 2U
                                                           : 
                                                          ((0x6063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                            ? 2U
                                                            : 
                                                           ((0x7063U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                             ? 2U
                                                             : 0U)))))))))))))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__773__PROF__CoreTop__l197(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__773__PROF__CoreTop__l197\n"); );
    // Body
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_144 
        = ((0x3023U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
            ? 9U : ((0x1023U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                     ? 9U : ((0x23U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                              ? 9U : ((0x2023U == (0x707fU 
                                                   & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                       ? 9U : ((0x100073U 
                                                == vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)
                                                ? 0U
                                                : (
                                                   (0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                    ? 7U
                                                    : 
                                                   ((0x67U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                     ? 8U
                                                     : 
                                                    ((0x63U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                      ? 0xbU
                                                      : 
                                                     ((0x1063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                       ? 0xbU
                                                       : 
                                                      ((0x5063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                        ? 0xbU
                                                        : 
                                                       ((0x4063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                         ? 0xbU
                                                         : 
                                                        ((0x6063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                          ? 0xbU
                                                          : 
                                                         ((0x7063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                           ? 0xbU
                                                           : 
                                                          ((0x2073U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                            ? 8U
                                                            : 
                                                           ((0x1073U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                             ? 8U
                                                             : 0U)))))))))))))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__774__PROF__CoreTop__l318(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__774__PROF__CoreTop__l318\n"); );
    // Body
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_268 
        = ((0x23U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
            ? 0x74U : ((0x2023U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                        ? 0x77U : ((0x100073U == vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)
                                    ? 0x42U : ((0x6fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                ? 0x19U
                                                : (
                                                   (0x67U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                    ? 0x48U
                                                    : 
                                                   ((0x63U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                     ? 0x6bU
                                                     : 
                                                    ((0x1063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                      ? 0x6cU
                                                      : 
                                                     ((0x5063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                       ? 0x76U
                                                       : 
                                                      ((0x4063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                        ? 0x7bU
                                                        : 
                                                       ((0x6063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                         ? 0xbU
                                                         : 
                                                        ((0x7063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                          ? 0xcU
                                                          : 
                                                         ((0x2073U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                           ? 0x15U
                                                           : 
                                                          ((0x1073U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                            ? 0x16U
                                                            : 
                                                           ((0x73U 
                                                             == vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)
                                                             ? 0x17U
                                                             : 
                                                            ((0x30200073U 
                                                              == vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)
                                                              ? 0x18U
                                                              : 0U)))))))))))))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__775__PROF__CoreTop__l426(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__775__PROF__CoreTop__l426\n"); );
    // Body
    vlSelf->__VdfgTmp_ha116befc__0 = ((IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest) 
                                      == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                   >> 0xfU)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__776__PROF__CoreTop__l426(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__776__PROF__CoreTop__l426\n"); );
    // Body
    vlSelf->__VdfgTmp_ha248cb35__0 = ((IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest) 
                                      == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                   >> 0x14U)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__777__PROF__CoreTop__l2099(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__777__PROF__CoreTop__l2099\n"); );
    // Body
    vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_19 = ((3U 
                                                   == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state))
                                                   ? 
                                                  ((IData)(vlSelf->CoreTop__DOT__full)
                                                    ? (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state)
                                                    : 0U)
                                                   : (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__778__PROF__CoreTop__l24(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__778__PROF__CoreTop__l24\n"); );
    // Body
    vlSelf->CoreTop__DOT__IF_io_cache_req_addr_req_valid 
        = (1U & ((~ ((IData)(vlSelf->CoreTop__DOT__IF_io_branch_io_is_branch) 
                     | (IData)(vlSelf->CoreTop__DOT__IF_io_branch_io_is_jump))) 
                 & (~ (IData)(vlSelf->CoreTop__DOT__full))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__779__PROF__CoreTop__l2091(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__779__PROF__CoreTop__l2091\n"); );
    // Body
    vlSelf->CoreTop__DOT__ICACHE__DOT___T_5 = ((~ (IData)(vlSelf->CoreTop__DOT__full)) 
                                               & (3U 
                                                  == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__780__PROF__CoreTop__l1082(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__780__PROF__CoreTop__l1082\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT___GEN_145 = ((0x72U 
                                                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                ? (vlSelf->CoreTop__DOT__EX__DOT__src1 
                                                   ^ vlSelf->CoreTop__DOT__EX__DOT__src2)
                                                : (
                                                   (0x6dU 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_7
                                                    : 
                                                   ((0x78U 
                                                     == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      ((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[0U] 
                                                                        >> 0x1fU)
                                                                        ? 0xffffffffU
                                                                        : 0U))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[0U])))
                                                     : 
                                                    ((0x79U 
                                                      == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                      ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_26
                                                      : 
                                                     ((0x7aU 
                                                       == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                       ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_30
                                                       : 
                                                      ((0xdU 
                                                        == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                        ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_30
                                                        : 
                                                       ((1U 
                                                         == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                         ? 
                                                        (((QData)((IData)(
                                                                          ((1U 
                                                                            & (IData)(
                                                                                (vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_10 
                                                                                >> 0x1fU)))
                                                                            ? 0xffffffffU
                                                                            : 0U))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_10)))
                                                         : 
                                                        ((7U 
                                                          == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                          ? 
                                                         (((QData)((IData)(
                                                                           vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[1U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[0U])))
                                                          : 
                                                         ((0xfU 
                                                           == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                           ? vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_remainder
                                                           : 
                                                          ((0x12U 
                                                            == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                            ? vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_remainder
                                                            : 
                                                           ((0x10U 
                                                             == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                             ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_26
                                                             : 
                                                            ((0x13U 
                                                              == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                              ? vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_quotient
                                                              : 
                                                             ((0x43U 
                                                               == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                               ? vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_quotient
                                                               : 
                                                              ((0x15U 
                                                                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                                ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_57
                                                                : 
                                                               ((0x16U 
                                                                 == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                                 ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_57
                                                                 : 0ULL)))))))))))))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__781__PROF__CoreTop__l29(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__781__PROF__CoreTop__l29\n"); );
    // Body
    vlSelf->CoreTop__DOT__IF_io_out_bits_Inst = ((IData)(vlSelf->CoreTop__DOT__IF_io_flush)
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                              >> 2U)))
                                                   ? (IData)(
                                                             (vlSelf->CoreTop__DOT__IF_io_cache_req_rdata_rep_bits_rdata 
                                                              >> 0x20U))
                                                   : (IData)(vlSelf->CoreTop__DOT__IF_io_cache_req_rdata_rep_bits_rdata)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__782__PROF__CoreTop__l4290(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__782__PROF__CoreTop__l4290\n"); );
    // Body
    vlSelf->CoreTop__DOT___T_4 = ((~ (IData)(vlSelf->CoreTop__DOT__MEM__DOT___io_out_valid_T_6)) 
                                  & ((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_valid)) 
                                     & ((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__div_io_in_valid)) 
                                        & ((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT___io_out_valid_T_11)) 
                                           & (IData)(vlSelf->CoreTop__DOT__valid)))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__783__PROF__CoreTop__l386(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__783__PROF__CoreTop__l386\n"); );
    // Body
    vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_3 = 
        ((0x13U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
         | ((0x1013U == (0xfc00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
            | ((0x6013U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
               | ((0x3003U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                  | ((0x2003U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                     | ((0x3013U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                        | ((0x1bU == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                           | ((0x40005013U == (0xfc00707fU 
                                               & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                              | ((0x4003U == (0x707fU 
                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                 | ((3U == (0x707fU 
                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                    | ((0x4013U == 
                                        (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                       | ((0x7013U 
                                           == (0x707fU 
                                               & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                          | ((0x5013U 
                                              == (0xfc00707fU 
                                                  & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                             | ((0x1003U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                                | ((0x5003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                                   | ((0x101bU 
                                                       == 
                                                       (0xfc00707fU 
                                                        & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                                      | ((0x4000501bU 
                                                          == 
                                                          (0xfc00707fU 
                                                           & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                                         | (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_363))))))))))))))))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__784__PROF__CoreTop__l274(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__784__PROF__CoreTop__l274\n"); );
    // Body
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_224 
        = ((0x4000003bU == (0xfe00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
            ? 0U : ((0x2033U == (0xfe00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                     ? 5U : ((0x4000503bU == (0xfe00707fU 
                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                              ? 1U : ((0x503bU == (0xfe00707fU 
                                                   & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                       ? 1U : ((0x4033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                ? 0U
                                                : (
                                                   (0x200703bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                    ? 0U
                                                    : 
                                                   ((0x1033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                     ? 1U
                                                     : 
                                                    ((0x2007033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                      ? 0U
                                                      : 
                                                     ((0x200503bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                       ? 0U
                                                       : 
                                                      ((0x2006033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                        ? 0U
                                                        : 
                                                       ((0x5033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                         ? 1U
                                                         : 
                                                        ((0x2005033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                          ? 0U
                                                          : 
                                                         ((0x2004033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                           ? 0U
                                                           : 
                                                          ((0x40005033U 
                                                            == 
                                                            (0xfc00707fU 
                                                             & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                            ? 0U
                                                            : 
                                                           ((0x2000033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                             ? 0U
                                                             : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_209))))))))))))))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__785__PROF__CoreTop__l212(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__785__PROF__CoreTop__l212\n"); );
    // Body
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_159 
        = ((0x4000503bU == (0xfe00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
            ? 5U : ((0x503bU == (0xfe00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                     ? 5U : ((0x4033U == (0xfe00707fU 
                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                              ? 5U : ((0x200703bU == 
                                       (0xfe00707fU 
                                        & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                       ? 5U : ((0x1033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                ? 5U
                                                : (
                                                   (0x2007033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                    ? 5U
                                                    : 
                                                   ((0x200503bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                     ? 5U
                                                     : 
                                                    ((0x2006033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                      ? 5U
                                                      : 
                                                     ((0x5033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                       ? 5U
                                                       : 
                                                      ((0x2005033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                        ? 5U
                                                        : 
                                                       ((0x2004033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                         ? 5U
                                                         : 
                                                        ((0x40005033U 
                                                          == 
                                                          (0xfc00707fU 
                                                           & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                          ? 5U
                                                          : 
                                                         ((0x2000033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                           ? 5U
                                                           : 
                                                          ((0x17U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                            ? 3U
                                                            : 
                                                           ((0x37U 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                             ? 3U
                                                             : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_144))))))))))))))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__786__PROF__CoreTop__l333(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__786__PROF__CoreTop__l333\n"); );
    // Body
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_283 
        = ((0x4033U == (0xfe00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
            ? 0x72U : ((0x200703bU == (0xfe00707fU 
                                       & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                        ? 0xdU : ((0x1033U == (0xfe00707fU 
                                               & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                   ? 0x41U : ((0x2007033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                               ? 0xfU
                                               : ((0x200503bU 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                   ? 0x10U
                                                   : 
                                                  ((0x2006033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                    ? 0x12U
                                                    : 
                                                   ((0x5033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                     ? 0x75U
                                                     : 
                                                    ((0x2005033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                      ? 0x13U
                                                      : 
                                                     ((0x2004033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                       ? 0x43U
                                                       : 
                                                      ((0x40005033U 
                                                        == 
                                                        (0xfc00707fU 
                                                         & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                        ? 0x14U
                                                        : 
                                                       ((0x2000033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                         ? 7U
                                                         : 
                                                        ((0x17U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                          ? 0x40U
                                                          : 
                                                         ((0x37U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                           ? 0x1aU
                                                           : 
                                                          ((0x3023U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                            ? 0x46U
                                                            : 
                                                           ((0x1023U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                             ? 0x70U
                                                             : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_268))))))))))))))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__787__PROF__CoreTop__l4157(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__787__PROF__CoreTop__l4157\n"); );
    // Body
    vlSelf->CoreTop__DOT___T = (1U & (((~ ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_valid) 
                                             | (IData)(vlSelf->CoreTop__DOT__EX__DOT__div_io_in_valid)) 
                                            & (IData)(vlSelf->CoreTop__DOT__valid)) 
                                           | (IData)(vlSelf->CoreTop__DOT__EX__DOT___io_out_valid_T_11))) 
                                       & (~ (IData)(vlSelf->CoreTop__DOT__MEM__DOT___io_out_valid_T_6))) 
                                      & ((~ (((IData)(vlSelf->CoreTop__DOT__valid) 
                                              & ((4U 
                                                  == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType)) 
                                                 & ((((0xeU 
                                                       == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                                                      | (0x6fU 
                                                         == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) 
                                                     | ((0x45U 
                                                         == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                                                        | ((3U 
                                                            == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                                                           | (4U 
                                                              == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))))) 
                                                    | ((0x47U 
                                                        == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                                                       | (0x11U 
                                                          == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)))))) 
                                             & ((IData)(vlSelf->CoreTop__DOT__ID_io_ex_reg_rfWen) 
                                                & ((IData)(vlSelf->__VdfgTmp_ha116befc__0) 
                                                   | (IData)(vlSelf->__VdfgTmp_ha248cb35__0))))) 
                                         & (~ (IData)(vlSelf->CoreTop__DOT__empty)))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__788__PROF__CoreTop__l2092(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__788__PROF__CoreTop__l2092\n"); );
    // Body
    vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_6 = ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT___T_5)
                                                  ? 0U
                                                  : (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__789__PROF__CoreTop__l2095(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__789__PROF__CoreTop__l2095\n"); );
    // Body
    vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_9 = ((3U 
                                                  == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state))
                                                  ? (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state))
                                                   ? 
                                                  (((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT___T_5) 
                                                    | ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)) 
                                                       & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)
                                                           ? 
                                                          (1U 
                                                           == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_state))
                                                           : 
                                                          ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state) 
                                                           & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r) 
                                                              & (1U 
                                                                 == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_state)))))))
                                                    ? 0U
                                                    : (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state))
                                                   : (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__790__PROF__CoreTop__l1274(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__790__PROF__CoreTop__l1274\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfData 
        = ((0U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType))
            ? ((0x40U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1
                : ((0x1aU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                    ? vlSelf->CoreTop__DOT__EX__DOT__src2
                    : ((0x68U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                        ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_7
                        : ((0x44U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                            ? (vlSelf->CoreTop__DOT__EX__DOT__src1 
                               | vlSelf->CoreTop__DOT__EX__DOT__src2)
                            : ((0x69U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_10
                                : ((0x71U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                    ? (vlSelf->CoreTop__DOT__EX__DOT__src1 
                                       & vlSelf->CoreTop__DOT__EX__DOT__src2)
                                    : vlSelf->CoreTop__DOT__EX__DOT___GEN_145))))))
            : ((3U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType))
                ? ((3U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType))
                    ? (4ULL + vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC)
                    : 0ULL) : ((2U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType))
                                ? 0ULL : ((1U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType))
                                           ? (((QData)((IData)(
                                                               ((0x6eU 
                                                                 == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                                 ? (IData)(
                                                                           (VL_SHIFTRS_QQI(64,64,5, vlSelf->CoreTop__DOT__EX__DOT__src1, 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2))) 
                                                                            >> 0x20U))
                                                                 : 
                                                                vlSelf->CoreTop__DOT__EX__DOT___GEN_202[1U]))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                ((0x6eU 
                                                                  == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                                  ? (IData)(
                                                                            VL_SHIFTRS_QQI(64,64,5, vlSelf->CoreTop__DOT__EX__DOT__src1, 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2))))
                                                                  : 
                                                                 vlSelf->CoreTop__DOT__EX__DOT___GEN_202[0U]))))
                                           : ((5U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType))
                                               ? ((0x6aU 
                                                   == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                   ? 
                                                  ((IData)(vlSelf->CoreTop__DOT__EX__DOT___compar_result_T)
                                                    ? 1ULL
                                                    : 0ULL)
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? 
                                                   ((IData)(vlSelf->CoreTop__DOT__EX__DOT___compar_result_T_4)
                                                     ? 1ULL
                                                     : 0ULL)
                                                    : 0ULL))
                                               : 0ULL)))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__791__PROF__CoreTop__l4311(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__791__PROF__CoreTop__l4311\n"); );
    // Body
    vlSelf->CoreTop__DOT___GEN_216 = ((IData)(vlSelf->CoreTop__DOT___T_4) 
                                      | ((~ (IData)(vlSelf->CoreTop__DOT__MEM_io_out_valid)) 
                                         & (IData)(vlSelf->CoreTop__DOT__valid_1)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__792__PROF__CoreTop__l289(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__792__PROF__CoreTop__l289\n"); );
    // Body
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_239 
        = ((0x101bU == (0xfc00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
            ? 1U : ((0x4000501bU == (0xfc00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                     ? 1U : ((0x501bU == (0xfc00707fU 
                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                              ? 1U : ((0x2013U == (0x707fU 
                                                   & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                       ? 5U : ((0x6003U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                ? 4U
                                                : (
                                                   (0x3bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                    ? 0U
                                                    : 
                                                   ((0x40000033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                     ? 0U
                                                     : 
                                                    ((0x33U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                      ? 0U
                                                      : 
                                                     ((0x7033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                       ? 0U
                                                       : 
                                                      ((0x3033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                        ? 5U
                                                        : 
                                                       ((0x103bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                         ? 1U
                                                         : 
                                                        ((0x6033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                          ? 0U
                                                          : 
                                                         ((0x200003bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                           ? 0U
                                                           : 
                                                          ((0x200403bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                            ? 0U
                                                            : 
                                                           ((0x200603bU 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                             ? 0U
                                                             : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_224))))))))))))))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__793__PROF__CoreTop__l227(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__793__PROF__CoreTop__l227\n"); );
    // Body
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_174 
        = ((0x501bU == (0xfc00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
            ? 8U : ((0x2013U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                     ? 8U : ((0x6003U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                              ? 8U : ((0x3bU == (0xfe00707fU 
                                                 & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                       ? 5U : ((0x40000033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                ? 5U
                                                : (
                                                   (0x33U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                    ? 5U
                                                    : 
                                                   ((0x7033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                     ? 5U
                                                     : 
                                                    ((0x3033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                      ? 5U
                                                      : 
                                                     ((0x103bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                       ? 5U
                                                       : 
                                                      ((0x6033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                        ? 5U
                                                        : 
                                                       ((0x200003bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                         ? 5U
                                                         : 
                                                        ((0x200403bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                          ? 5U
                                                          : 
                                                         ((0x200603bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                           ? 5U
                                                           : 
                                                          ((0x4000003bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                            ? 5U
                                                            : 
                                                           ((0x2033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                             ? 5U
                                                             : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_159))))))))))))))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__794__PROF__CoreTop__l348(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__794__PROF__CoreTop__l348\n"); );
    // Body
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_298 
        = ((0x6003U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
            ? 0x11U : ((0x3bU == (0xfe00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                        ? 0x68U : ((0x40000033U == 
                                    (0xfe00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                    ? 0x69U : ((0x33U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                ? 0x40U
                                                : (
                                                   (0x7033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                    ? 0x71U
                                                    : 
                                                   ((0x3033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                     ? 0x6aU
                                                     : 
                                                    ((0x103bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                      ? 0x73U
                                                      : 
                                                     ((0x6033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                       ? 0x44U
                                                       : 
                                                      ((0x200003bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                        ? 0x78U
                                                        : 
                                                       ((0x200403bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                         ? 0x79U
                                                         : 
                                                        ((0x200603bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                          ? 0x7aU
                                                          : 
                                                         ((0x4000003bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                           ? 1U
                                                           : 
                                                          ((0x2033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                            ? 2U
                                                            : 
                                                           ((0x4000503bU 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                             ? 9U
                                                             : 
                                                            ((0x503bU 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                              ? 0xaU
                                                              : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_283))))))))))))))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__795__PROF__CoreTop__l4294(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__795__PROF__CoreTop__l4294\n"); );
    // Body
    vlSelf->CoreTop__DOT___GEN_197 = ((IData)(vlSelf->CoreTop__DOT___T) 
                                      | ((~ (IData)(vlSelf->CoreTop__DOT___T_4)) 
                                         & (IData)(vlSelf->CoreTop__DOT__valid)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__796__PROF__CoreTop__l242(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__796__PROF__CoreTop__l242\n"); );
    // Body
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_189 
        = ((0x6013U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
            ? 8U : ((0x3003U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                     ? 8U : ((0x2003U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                              ? 8U : ((0x3013U == (0x707fU 
                                                   & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                       ? 8U : ((0x1bU 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                ? 8U
                                                : (
                                                   (0x40005013U 
                                                    == 
                                                    (0xfc00707fU 
                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                    ? 8U
                                                    : 
                                                   ((0x4003U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                     ? 8U
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                      ? 8U
                                                      : 
                                                     ((0x4013U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                       ? 8U
                                                       : 
                                                      ((0x7013U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                        ? 8U
                                                        : 
                                                       ((0x5013U 
                                                         == 
                                                         (0xfc00707fU 
                                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                         ? 8U
                                                         : 
                                                        ((0x1003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                          ? 8U
                                                          : 
                                                         ((0x5003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                           ? 8U
                                                           : 
                                                          ((0x101bU 
                                                            == 
                                                            (0xfc00707fU 
                                                             & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                            ? 8U
                                                            : 
                                                           ((0x4000501bU 
                                                             == 
                                                             (0xfc00707fU 
                                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                             ? 8U
                                                             : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_174))))))))))))))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__797__PROF__CoreTop__l363(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__797__PROF__CoreTop__l363\n"); );
    // Body
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_313 
        = ((0x2003U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
            ? 0x47U : ((0x3013U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                        ? 0x6aU : ((0x1bU == (0x707fU 
                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                    ? 0x6dU : ((0x40005013U 
                                                == 
                                                (0xfc00707fU 
                                                 & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                ? 0x6eU
                                                : (
                                                   (0x4003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                    ? 0x6fU
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                     ? 0xeU
                                                     : 
                                                    ((0x4013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                      ? 0x72U
                                                      : 
                                                     ((0x7013U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                       ? 0x71U
                                                       : 
                                                      ((0x5013U 
                                                        == 
                                                        (0xfc00707fU 
                                                         & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                        ? 0x75U
                                                        : 
                                                       ((0x1003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                         ? 3U
                                                         : 
                                                        ((0x5003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                          ? 4U
                                                          : 
                                                         ((0x101bU 
                                                           == 
                                                           (0xfc00707fU 
                                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                           ? 5U
                                                           : 
                                                          ((0x4000501bU 
                                                            == 
                                                            (0xfc00707fU 
                                                             & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                            ? 6U
                                                            : 
                                                           ((0x501bU 
                                                             == 
                                                             (0xfc00707fU 
                                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                             ? 8U
                                                             : 
                                                            ((0x2013U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                              ? 2U
                                                              : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_298))))))))))))))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__798__PROF__CoreTop__l244(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__798__PROF__CoreTop__l244\n"); );
    // Body
    vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0 = 
        ((0x13U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
          ? 8U : ((0x1013U == (0xfc00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                   ? 8U : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_189)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__799__PROF__CoreTop__l367(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__799__PROF__CoreTop__l367\n"); );
    // Body
    vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_2 = 
        ((0x13U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
          ? 0x40U : ((0x1013U == (0xfc00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                      ? 0x41U : ((0x6013U == (0x707fU 
                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                  ? 0x44U : ((0x3003U 
                                              == (0x707fU 
                                                  & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                              ? 0x45U
                                              : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_313)))));
}

void VCoreTop___024root___nba_sequent__TOP__491__PROF__DIP_model__l93(VCoreTop___024root* vlSelf);

void VCoreTop___024root___eval_nba(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VCoreTop___024root___nba_sequent__TOP__0__PROF__CoreTop__l1835(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        VCoreTop___024root___nba_sequent__TOP__1__PROF__CoreTop__l1842(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__2__PROF__CoreTop__l2230(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__3__PROF__CoreTop__l722(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__4__PROF__CoreTop__l1863(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__5__PROF__CoreTop__l1870(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__6__PROF__CoreTop__l1856(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__7__PROF__CoreTop__l1849(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__8__PROF__CoreTop__l1835(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__9__PROF__CoreTop__l1842(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__10__PROF__CoreTop__l1870(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__11__PROF__CoreTop__l1863(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__12__PROF__CoreTop__l1856(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__13__PROF__CoreTop__l1849(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__14__PROF__CoreTop__l2214(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__15__PROF__CoreTop__l2217(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__16__PROF__CoreTop__l2220(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__17__PROF__CoreTop__l2223(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__18__PROF__CoreTop__l516(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__19__PROF__CoreTop__l3043(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__20__PROF__CoreTop__l3036(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__21__PROF__CoreTop__l3084(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__22__PROF__CoreTop__l3069(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__23__PROF__CoreTop__l3305(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__24__PROF__CoreTop__l3318(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__25__PROF__CoreTop__l3020(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__26__PROF__CoreTop__l3023(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__27__PROF__CoreTop__l3026(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__28__PROF__CoreTop__l3029(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__29__PROF__CoreTop__l4989(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__30__PROF__CoreTop__l3050(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__31__PROF__SRAMTemp__l223(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__32__PROF__SRAMTemp__l224(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__33__PROF__CoreTop__l2249(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__34__PROF__SRAMTemp__l222(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__158__PROF__CoreTop__l1834(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__159__PROF__CoreTop__l1841(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__160__PROF__CoreTop__l2230(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__161__PROF__CoreTop__l1862(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__162__PROF__CoreTop__l1869(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__163__PROF__CoreTop__l1855(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__164__PROF__CoreTop__l1848(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__165__PROF__CoreTop__l1834(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__166__PROF__CoreTop__l1841(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__167__PROF__CoreTop__l1869(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__168__PROF__CoreTop__l1862(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__169__PROF__CoreTop__l1855(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__170__PROF__CoreTop__l1848(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__171__PROF__CoreTop__l2213(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__172__PROF__CoreTop__l3042(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__173__PROF__CoreTop__l3035(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__174__PROF__CoreTop__l3083(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__175__PROF__CoreTop__l3068(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__176__PROF__CoreTop__l3304(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__177__PROF__CoreTop__l3317(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__178__PROF__CoreTop__l3019(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__179__PROF__CoreTop__l4988(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__180__PROF__CoreTop__l3050(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__181__PROF__SRAMTemp__l221(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__182__PROF__SRAMTemp__l221(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__183__PROF__CoreTop__l2248(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__184__PROF__SRAMTemp__l221(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__185__PROF__CoreTop__l1865(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__186__PROF__CoreTop__l1858(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__187__PROF__CoreTop__l1872(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__188__PROF__CoreTop__l1837(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__189__PROF__CoreTop__l1844(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__190__PROF__CoreTop__l1851(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__191__PROF__CoreTop__l3038(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__192__PROF__CoreTop__l3045(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__193__PROF__CoreTop__l3031(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__194__PROF__CoreTop__l1865(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__195__PROF__CoreTop__l1858(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__196__PROF__CoreTop__l1872(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__197__PROF__CoreTop__l1837(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__198__PROF__CoreTop__l1844(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__199__PROF__CoreTop__l1851(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__200__PROF__CoreTop__l2225(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__201__PROF__CoreTop__l5440(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__202__PROF__CoreTop__l5397(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__203__PROF__CoreTop__l1867(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__204__PROF__CoreTop__l1853(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__205__PROF__CoreTop__l1860(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__206__PROF__CoreTop__l5444(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__207__PROF__CoreTop__l734(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__208__PROF__CoreTop__l2263(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__209__PROF__CoreTop__l5417(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__210__PROF__CoreTop__l2290(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__211__PROF__CoreTop__l5423(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__212__PROF__CoreTop__l720(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__213__PROF__CoreTop__l3098(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__214__PROF__CoreTop__l5326(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__215__PROF__CoreTop__l2272(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__216__PROF__CoreTop__l3125(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__217__PROF__CoreTop__l711(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__218__PROF__CoreTop__l3145(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__219__PROF__CoreTop__l5403(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__220__PROF__CoreTop__l710(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__221__PROF__CoreTop__l5335(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__222__PROF__CoreTop__l5332(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__223__PROF__CoreTop__l5442(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__224__PROF__CoreTop__l3156(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__225__PROF__CoreTop__l515(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__226__PROF__CoreTop__l3033(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__227__PROF__CoreTop__l5441(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__228__PROF__CoreTop__l1853(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__229__PROF__CoreTop__l3107(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__230__PROF__CoreTop__l5373(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__231__PROF__CoreTop__l5376(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__232__PROF__CoreTop__l3136(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__233__PROF__CoreTop__l5356(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__234__PROF__CoreTop__l5353(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__235__PROF__CoreTop__l1341(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__236__PROF__CoreTop__l1332(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__237__PROF__CoreTop__l1353(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__238__PROF__CoreTop__l1357(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__239__PROF__CoreTop__l1351(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__240__PROF__CoreTop__l1867(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__241__PROF__CoreTop__l5439(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__242__PROF__CoreTop__l5400(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__243__PROF__CoreTop__l5369(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__244__PROF__CoreTop__l5406(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__245__PROF__CoreTop__l5382(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__246__PROF__CoreTop__l5443(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__247__PROF__CoreTop__l1355(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__248__PROF__CoreTop__l1835(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__249__PROF__CoreTop__l1842(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__250__PROF__CoreTop__l1863(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__251__PROF__CoreTop__l1870(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__252__PROF__CoreTop__l1856(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__253__PROF__CoreTop__l1849(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__254__PROF__CoreTop__l1835(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__255__PROF__CoreTop__l1842(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__256__PROF__CoreTop__l1870(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__257__PROF__CoreTop__l1863(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__258__PROF__CoreTop__l1856(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__259__PROF__CoreTop__l1849(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__261__PROF__CoreTop__l3084(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__262__PROF__CoreTop__l3069(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__263__PROF__CoreTop__l3305(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__264__PROF__CoreTop__l3318(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__265__PROF__CoreTop__l3020(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__267__PROF__CoreTop__l3043(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__268__PROF__CoreTop__l3036(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__271__PROF__SRAMTemp__l223(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__272__PROF__SRAMTemp__l224(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__274__PROF__CoreTop__l2249(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__275__PROF__SRAMTemp__l222(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__316__PROF__CoreTop__l722(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__325__PROF__CoreTop__l516(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__341__PROF__CoreTop__l4989(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__362__PROF__CoreTop__l2281(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__363__PROF__CoreTop__l3293(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__364__PROF__CoreTop__l3295(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__365__PROF__CoreTop__l3116(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__366__PROF__CoreTop__l3047(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__367__PROF__CoreTop__l3040(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__368__PROF__SRAMTemp__l213(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__369__PROF__SRAMTemp__l212(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__370__PROF__CoreTop__l2530(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__371__PROF__DIP_model__l85(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__372__PROF__DIP_model__l89(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__373__PROF__DIP_model__l90(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__374__PROF__CoreTop__l5426(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__375__PROF__CoreTop__l658(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__376__PROF__CoreTop__l1784(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__377__PROF__CoreTop__l5379(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__378__PROF__CoreTop__l4794(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__379__PROF__CoreTop__l5388(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__380__PROF__CoreTop__l681(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__381__PROF__CoreTop__l683(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__382__PROF__CoreTop__l2195(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__383__PROF__CoreTop__l655(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__384__PROF__CoreTop__l660(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__385__PROF__CoreTop__l659(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__386__PROF__CoreTop__l667(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__387__PROF__CoreTop__l682(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__388__PROF__CoreTop__l684(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__389__PROF__DIP_model__l88(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__390__PROF__CoreTop__l5410(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__391__PROF__CoreTop__l5414(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__392__PROF__CoreTop__l464(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__393__PROF__CoreTop__l541(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__394__PROF__DIP_model__l91(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__395__PROF__CoreTop__l5429(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__396__PROF__CoreTop__l1797(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__397__PROF__CoreTop__l5338(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__398__PROF__CoreTop__l5435(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__399__PROF__CoreTop__l5432(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__400__PROF__DIP_model__l52(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__401__PROF__DIP_model__l53(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__402__PROF__DIP_model__l54(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__403__PROF__DIP_model__l55(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__404__PROF__DIP_model__l56(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__405__PROF__DIP_model__l57(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__406__PROF__DIP_model__l58(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__407__PROF__DIP_model__l59(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__408__PROF__DIP_model__l60(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__409__PROF__DIP_model__l61(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__410__PROF__DIP_model__l62(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__411__PROF__DIP_model__l63(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__412__PROF__DIP_model__l64(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__413__PROF__DIP_model__l65(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__414__PROF__DIP_model__l66(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__415__PROF__DIP_model__l67(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__416__PROF__DIP_model__l68(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__417__PROF__DIP_model__l69(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__418__PROF__DIP_model__l70(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__419__PROF__DIP_model__l71(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__420__PROF__DIP_model__l72(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__421__PROF__DIP_model__l73(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__422__PROF__DIP_model__l74(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__423__PROF__DIP_model__l75(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__424__PROF__DIP_model__l76(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__425__PROF__DIP_model__l77(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__426__PROF__DIP_model__l78(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__427__PROF__DIP_model__l79(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__428__PROF__DIP_model__l80(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__429__PROF__DIP_model__l81(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__430__PROF__DIP_model__l82(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__431__PROF__DIP_model__l83(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__432__PROF__CSR_DIFF__l11(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__433__PROF__CoreTop__l1352(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__434__PROF__CSR_DIFF__l12(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__435__PROF__CoreTop__l1356(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__436__PROF__CSR_DIFF__l13(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__437__PROF__CoreTop__l1350(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__438__PROF__CoreTop__l1783(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__439__PROF__CoreTop__l1790(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__440__PROF__CoreTop__l1804(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__441__PROF__CoreTop__l5438(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__442__PROF__CoreTop__l5359(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__443__PROF__CoreTop__l1468(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__444__PROF__CoreTop__l3567(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__445__PROF__DIP_model__l86(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__446__PROF__DIP_model__l87(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__447__PROF__CoreTop__l5420(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__448__PROF__CSR_DIFF__l10(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__449__PROF__CoreTop__l1354(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__451__PROF__CoreTop__l2214(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__452__PROF__CoreTop__l2230(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__454__PROF__CoreTop__l2958(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__456__PROF__CoreTop__l3050(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__469__PROF__CoreTop__l676(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__0__PROF__CoreTop__l705(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__473__PROF__CoreTop__l1599(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__474__PROF__CoreTop__l500(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__490__PROF__CoreTop__l1489(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__491__PROF__DIP_model__l93(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__496__PROF__CoreTop__l2227(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__497__PROF__CoreTop__l2790(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__498__PROF__SRAMTemp__l320(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__499__PROF__CoreTop__l3579(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__500__PROF__CoreTop__l2525(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__501__PROF__CoreTop__l5391(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__502__PROF__CoreTop__l1607(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__503__PROF__CoreTop__l5344(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__504__PROF__CoreTop__l5365(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__505__PROF__CoreTop__l4792(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__506__PROF__CoreTop__l3590(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__507__PROF__CoreTop__l510(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__508__PROF__CoreTop__l495(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__509__PROF__CoreTop__l5394(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__510__PROF__CoreTop__l1305(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__511__PROF__CoreTop__l1314(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__512__PROF__CoreTop__l1323(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__513__PROF__CoreTop__l5341(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__514__PROF__CoreTop__l907(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__515__PROF__CoreTop__l1540(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__516__PROF__CoreTop__l3571(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__517__PROF__CoreTop__l1984(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__518__PROF__CoreTop__l1986(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__519__PROF__CoreTop__l5385(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__520__PROF__CoreTop__l1296(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__527__PROF__CoreTop__l3592(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__534__PROF__CoreTop__l3570(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__535__PROF__CoreTop__l2792(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__536__PROF__CoreTop__l1989(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__537__PROF__CoreTop__l1988(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__542__PROF__CoreTop__l31(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__543__PROF__CoreTop__l2443(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__544__PROF__CoreTop__l2459(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__545__PROF__CoreTop__l4812(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__546__PROF__CoreTop__l4956(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__547__PROF__CoreTop__l3564(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__548__PROF__CoreTop__l3587(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__549__PROF__CoreTop__l2739(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__550__PROF__CoreTop__l4950(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__551__PROF__CoreTop__l4953(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__552__PROF__CoreTop__l2727(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__553__PROF__CoreTop__l4960(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__554__PROF__CoreTop__l4959(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__555__PROF__CoreTop__l4958(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__556__PROF__CoreTop__l4949(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__557__PROF__CoreTop__l4952(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__558__PROF__CoreTop__l5350(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__559__PROF__CoreTop__l1202(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__560__PROF__CoreTop__l1203(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__561__PROF__CoreTop__l873(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__562__PROF__CoreTop__l4957(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__563__PROF__CoreTop__l2822(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__564__PROF__CoreTop__l2913(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__565__PROF__CoreTop__l2786(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__566__PROF__CoreTop__l940(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__567__PROF__CoreTop__l5347(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__568__PROF__CoreTop__l5362(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__570__PROF__CoreTop__l2459(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__571__PROF__CoreTop__l2728(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__572__PROF__CoreTop__l2481(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__574__PROF__CoreTop__l1226(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__575__PROF__CoreTop__l2887(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__576__PROF__CoreTop__l2895(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__577__PROF__CoreTop__l1787(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__578__PROF__CoreTop__l3002(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__579__PROF__CoreTop__l2981(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__580__PROF__CoreTop__l3006(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__589__PROF__CoreTop__l22(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__590__PROF__CoreTop__l1785(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__591__PROF__CoreTop__l1798(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__592__PROF__CoreTop__l1986(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__593__PROF__CoreTop__l1984(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__594__PROF__CoreTop__l2482(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__595__PROF__CoreTop__l2484(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__596__PROF__SRAMTemp__l248(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__597__PROF__CoreTop__l4915(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__598__PROF__CoreTop__l4945(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__599__PROF__CoreTop__l2490(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__1__PROF__SRAMTemp__l301(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__601__PROF__CoreTop__l2492(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__602__PROF__CoreTop__l2486(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__603__PROF__CoreTop__l2889(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__604__PROF__CoreTop__l2897(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__605__PROF__CoreTop__l1785(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__606__PROF__CoreTop__l1798(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__607__PROF__CoreTop__l1205(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__608__PROF__CoreTop__l872(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__609__PROF__CoreTop__l887(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__610__PROF__CoreTop__l885(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__611__PROF__CoreTop__l1292(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__612__PROF__CoreTop__l1180(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__613__PROF__CoreTop__l905(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__614__PROF__CoreTop__l4998(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__615__PROF__CoreTop__l5005(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__616__PROF__CoreTop__l1989(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__617__PROF__CoreTop__l1988(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__618__PROF__CoreTop__l2097(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__619__PROF__SRAMTemp__l270(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__620__PROF__CoreTop__l3286(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__621__PROF__CoreTop__l3580(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__2__PROF__CoreTop__l2107(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__4__PROF__CoreTop__l4884(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__624__PROF__CoreTop__l3582(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__625__PROF__CoreTop__l3608(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__626__PROF__CoreTop__l3576(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__627__PROF__CoreTop__l3290(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__628__PROF__CoreTop__l2893(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__629__PROF__CoreTop__l629(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__630__PROF__CoreTop__l1291(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__631__PROF__CoreTop__l888(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__632__PROF__CoreTop__l1132(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__633__PROF__CoreTop__l1136(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__634__PROF__CoreTop__l914(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__635__PROF__CoreTop__l909(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__636__PROF__CoreTop__l941(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__637__PROF__CoreTop__l1165(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__638__PROF__CoreTop__l1168(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__645__PROF__CoreTop__l4793(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__706__PROF__CoreTop__l2131(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__707__PROF__CoreTop__l2740(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__708__PROF__CoreTop__l2760(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__5__PROF__CoreTop__l1572(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__6__PROF__CoreTop__l1580(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__711__PROF__CoreTop__l2742(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__712__PROF__CoreTop__l2734(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__713__PROF__CoreTop__l3289(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__714__PROF__CoreTop__l2737(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__3__PROF__CoreTop__l2754(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__716__PROF__CoreTop__l3285(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__717__PROF__CoreTop__l1594(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__718__PROF__CoreTop__l2909(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__719__PROF__CoreTop__l1293(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__720__PROF__CoreTop__l1294(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__721__PROF__CoreTop__l1132(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__722__PROF__CoreTop__l1136(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__723__PROF__CoreTop__l912(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__724__PROF__CoreTop__l997(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__725__PROF__CoreTop__l1017(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__726__PROF__CoreTop__l1037(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__727__PROF__CoreTop__l1057(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__728__PROF__CoreTop__l1084(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__729__PROF__CoreTop__l1104(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__730__PROF__CoreTop__l1201(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__731__PROF__CoreTop__l4226(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__732__PROF__CoreTop__l4272(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__733__PROF__CoreTop__l4242(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__734__PROF__CoreTop__l4991(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__735__PROF__CoreTop__l4801(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__736__PROF__CoreTop__l2763(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__737__PROF__CoreTop__l2764(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__7__PROF__CoreTop__l1608(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__739__PROF__CoreTop__l1597(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__740__PROF__CoreTop__l1260(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__741__PROF__CoreTop__l1784(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__742__PROF__CoreTop__l685(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__743__PROF__CoreTop__l1149(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__744__PROF__CoreTop__l1109(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__745__PROF__CoreTop__l1108(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__746__PROF__CoreTop__l1112(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__747__PROF__CoreTop__l1106(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__748__PROF__CoreTop__l1105(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__749__PROF__CoreTop__l1114(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__750__PROF__CoreTop__l1207(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__751__PROF__CoreTop__l1225(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__752__PROF__CoreTop__l4285(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__753__PROF__CoreTop__l4255(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__754__PROF__CoreTop__l4800(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__756__PROF__CoreTop__l4328(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__757__PROF__CoreTop__l4798(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__758__PROF__CoreTop__l707(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__759__PROF__CoreTop__l708(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__760__PROF__CoreTop__l4799(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__761__PROF__CoreTop__l4797(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__762__PROF__CoreTop__l1228(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__763__PROF__CoreTop__l4806(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__764__PROF__CoreTop__l4227(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__765__PROF__CoreTop__l4160(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__766__PROF__CoreTop__l4161(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__767__PROF__CoreTop__l922(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__768__PROF__CoreTop__l925(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__769__PROF__CoreTop__l4803(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__770__PROF__CoreTop__l1231(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__771__PROF__CoreTop__l379(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__772__PROF__CoreTop__l259(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__773__PROF__CoreTop__l197(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__774__PROF__CoreTop__l318(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__775__PROF__CoreTop__l426(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__776__PROF__CoreTop__l426(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__777__PROF__CoreTop__l2099(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__778__PROF__CoreTop__l24(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__779__PROF__CoreTop__l2091(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__780__PROF__CoreTop__l1082(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__781__PROF__CoreTop__l29(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__782__PROF__CoreTop__l4290(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__783__PROF__CoreTop__l386(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__784__PROF__CoreTop__l274(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__785__PROF__CoreTop__l212(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__786__PROF__CoreTop__l333(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__787__PROF__CoreTop__l4157(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__788__PROF__CoreTop__l2092(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__789__PROF__CoreTop__l2095(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__790__PROF__CoreTop__l1274(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__791__PROF__CoreTop__l4311(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__792__PROF__CoreTop__l289(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__793__PROF__CoreTop__l227(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__794__PROF__CoreTop__l348(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__795__PROF__CoreTop__l4294(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__796__PROF__CoreTop__l242(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__797__PROF__CoreTop__l363(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__798__PROF__CoreTop__l244(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__799__PROF__CoreTop__l367(vlSelf);
    }
}
