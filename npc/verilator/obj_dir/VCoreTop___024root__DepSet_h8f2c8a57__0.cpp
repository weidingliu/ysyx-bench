// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCoreTop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VCoreTop___024root.h"

VL_INLINE_OPT void VCoreTop___024root___ico_sequent__TOP__0__PROF__CoreTop__l703(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___ico_sequent__TOP__0__PROF__CoreTop__l703\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_13[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_13[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_13[2U] = 0U;
    } else if ((0U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state))) {
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_13[0U] 
            = (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S);
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_13[1U] 
            = (IData)((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S 
                       >> 0x20U));
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_13[2U] = 0U;
    } else if ((1U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state))) {
        if ((0x3fU == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__count))) {
            vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_13[0U] 
                = (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___S_T_6);
            vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_13[1U] 
                = (IData)((vlSelf->CoreTop__DOT__EX__DOT__div__DOT___S_T_6 
                           >> 0x20U));
            vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_13[2U] = 0U;
        } else {
            vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_13[0U] 
                = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___S_T_6) 
                   << 1U);
            vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_13[1U] 
                = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___S_T_6) 
                    >> 0x1fU) | ((IData)((vlSelf->CoreTop__DOT__EX__DOT__div__DOT___S_T_6 
                                          >> 0x20U)) 
                                 << 1U));
            vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_13[2U] 
                = ((IData)((vlSelf->CoreTop__DOT__EX__DOT__div__DOT___S_T_6 
                            >> 0x20U)) >> 0x1fU);
        }
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_13[0U] 
            = (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S);
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_13[1U] 
            = (IData)((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S 
                       >> 0x20U));
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_13[2U] = 0U;
    }
}

VL_INLINE_OPT void VCoreTop___024root___ico_sequent__TOP__2__PROF__CoreTop__l2112(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___ico_sequent__TOP__2__PROF__CoreTop__l2112\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___ico_sequent__TOP__3__PROF__CoreTop__l2757(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___ico_sequent__TOP__3__PROF__CoreTop__l2757\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___ico_sequent__TOP__4__PROF__CoreTop__l4722(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___ico_sequent__TOP__4__PROF__CoreTop__l4722\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___ico_sequent__TOP__5__PROF__CoreTop__l1558(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___ico_sequent__TOP__5__PROF__CoreTop__l1558\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___ico_sequent__TOP__6__PROF__CoreTop__l1566(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___ico_sequent__TOP__6__PROF__CoreTop__l1566\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___ico_sequent__TOP__7__PROF__CoreTop__l1594(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___ico_sequent__TOP__7__PROF__CoreTop__l1594\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___ico_sequent__TOP__8__PROF__CoreTop__l900(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___ico_sequent__TOP__8__PROF__CoreTop__l900\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__src2 = ((0U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src2Type))
                                            ? (((IData)(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfWen) 
                                                & (((IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfSrc2) 
                                                    == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest)) 
                                                   & (0U 
                                                      != (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest))))
                                                ? vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfData
                                                : vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_src2)
                                            : ((1U 
                                                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src2Type))
                                                ? vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm
                                                : 0ULL));
}

VL_INLINE_OPT void VCoreTop___024root___ico_sequent__TOP__9__PROF__CoreTop__l898(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___ico_sequent__TOP__9__PROF__CoreTop__l898\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__src1 = ((0U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src1Type))
                                            ? (((IData)(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfWen) 
                                                & (((IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfSrc1) 
                                                    == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest)) 
                                                   & (0U 
                                                      != (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest))))
                                                ? vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfData
                                                : vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_src1)
                                            : ((2U 
                                                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src1Type))
                                                ? vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC
                                                : 0ULL));
}

VL_INLINE_OPT void VCoreTop___024root___ico_sequent__TOP__10__PROF__CoreTop__l1280(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___ico_sequent__TOP__10__PROF__CoreTop__l1280\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___ico_sequent__TOP__11__PROF__CoreTop__l1125(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___ico_sequent__TOP__11__PROF__CoreTop__l1125\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_25 
        = VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->CoreTop__DOT__EX__DOT__src1), 
                         (0x1fU & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)));
}

VL_INLINE_OPT void VCoreTop___024root___ico_sequent__TOP__12__PROF__CoreTop__l1129(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___ico_sequent__TOP__12__PROF__CoreTop__l1129\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_31 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__src1) 
           >> (0x1fU & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)));
}

VL_INLINE_OPT void VCoreTop___024root___ico_sequent__TOP__13__PROF__CoreTop__l907(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___ico_sequent__TOP__13__PROF__CoreTop__l907\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_10 
        = (vlSelf->CoreTop__DOT__EX__DOT__src1 - vlSelf->CoreTop__DOT__EX__DOT__src2);
}

VL_INLINE_OPT void VCoreTop___024root___ico_sequent__TOP__14__PROF__CoreTop__l1158(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___ico_sequent__TOP__14__PROF__CoreTop__l1158\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT___compar_result_T 
        = (vlSelf->CoreTop__DOT__EX__DOT__src1 < vlSelf->CoreTop__DOT__EX__DOT__src2);
}

VL_INLINE_OPT void VCoreTop___024root___ico_sequent__TOP__15__PROF__CoreTop__l1161(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___ico_sequent__TOP__15__PROF__CoreTop__l1161\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT___compar_result_T_4 
        = VL_LTS_IQQ(64, vlSelf->CoreTop__DOT__EX__DOT__src1, vlSelf->CoreTop__DOT__EX__DOT__src2);
}

VL_INLINE_OPT void VCoreTop___024root___ico_sequent__TOP__16__PROF__CoreTop__l902(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___ico_sequent__TOP__16__PROF__CoreTop__l902\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1 
        = (vlSelf->CoreTop__DOT__EX__DOT__src1 + vlSelf->CoreTop__DOT__EX__DOT__src2);
}

VL_INLINE_OPT void VCoreTop___024root___ico_sequent__TOP__17__PROF__CoreTop__l934(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___ico_sequent__TOP__17__PROF__CoreTop__l934\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT___T_39 = (vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_57 
                                            | vlSelf->CoreTop__DOT__EX__DOT__src1);
}

VL_INLINE_OPT void VCoreTop___024root___ico_sequent__TOP__18__PROF__CoreTop__l1279(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___ico_sequent__TOP__18__PROF__CoreTop__l1279\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___ico_sequent__TOP__19__PROF__CoreTop__l1125(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___ico_sequent__TOP__19__PROF__CoreTop__l1125\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_28 
        = (((QData)((IData)(((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_25 
                              >> 0x1fU) ? 0xffffffffU
                              : 0U))) << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_25)));
}

VL_INLINE_OPT void VCoreTop___024root___ico_sequent__TOP__20__PROF__CoreTop__l1129(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___ico_sequent__TOP__20__PROF__CoreTop__l1129\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_35 
        = (((QData)((IData)(((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_31 
                              >> 0x1fU) ? 0xffffffffU
                              : 0U))) << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_31)));
}

VL_INLINE_OPT void VCoreTop___024root___ico_sequent__TOP__21__PROF__CoreTop__l1194(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___ico_sequent__TOP__21__PROF__CoreTop__l1194\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___ico_sequent__TOP__22__PROF__CoreTop__l905(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___ico_sequent__TOP__22__PROF__CoreTop__l905\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_7 
        = (((QData)((IData)(((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1 
                                            >> 0x1fU)))
                              ? 0xffffffffU : 0U))) 
            << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1)));
}

VL_INLINE_OPT void VCoreTop___024root___ico_sequent__TOP__23__PROF__CoreTop__l990(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___ico_sequent__TOP__23__PROF__CoreTop__l990\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___ico_sequent__TOP__24__PROF__CoreTop__l1010(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___ico_sequent__TOP__24__PROF__CoreTop__l1010\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___ico_sequent__TOP__25__PROF__CoreTop__l1030(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___ico_sequent__TOP__25__PROF__CoreTop__l1030\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___ico_sequent__TOP__26__PROF__CoreTop__l1050(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___ico_sequent__TOP__26__PROF__CoreTop__l1050\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___ico_sequent__TOP__27__PROF__CoreTop__l1077(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___ico_sequent__TOP__27__PROF__CoreTop__l1077\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___ico_sequent__TOP__28__PROF__CoreTop__l1097(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___ico_sequent__TOP__28__PROF__CoreTop__l1097\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___ico_sequent__TOP__29__PROF__CoreTop__l683(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___ico_sequent__TOP__29__PROF__CoreTop__l683\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2 
        = ((2U & ((IData)((vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src1 
                           >> 0x3fU)) << 1U)) | (1U 
                                                 & (IData)(
                                                           (vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src2 
                                                            >> 0x3fU))));
}

VL_INLINE_OPT void VCoreTop___024root___ico_sequent__TOP__30__PROF__CoreTop__l1142(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___ico_sequent__TOP__30__PROF__CoreTop__l1142\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___ico_sequent__TOP__31__PROF__CoreTop__l1200(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___ico_sequent__TOP__31__PROF__CoreTop__l1200\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___ico_sequent__TOP__32__PROF__CoreTop__l4641(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___ico_sequent__TOP__32__PROF__CoreTop__l4641\n"); );
    // Body
    vlSelf->CoreTop__DOT__IF_io_flush = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__branch_flag) 
                                          | (IData)(vlSelf->CoreTop__DOT__IF_io_branch_io_is_jump)) 
                                         & (IData)(vlSelf->CoreTop__DOT__valid_1));
}

VL_INLINE_OPT void VCoreTop___024root___ico_sequent__TOP__33__PROF__CoreTop__l1102(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___ico_sequent__TOP__33__PROF__CoreTop__l1102\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___ico_sequent__TOP__34__PROF__CoreTop__l1101(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___ico_sequent__TOP__34__PROF__CoreTop__l1101\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___ico_sequent__TOP__35__PROF__CoreTop__l1105(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___ico_sequent__TOP__35__PROF__CoreTop__l1105\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___ico_sequent__TOP__36__PROF__CoreTop__l1099(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___ico_sequent__TOP__36__PROF__CoreTop__l1099\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___ico_sequent__TOP__37__PROF__CoreTop__l1098(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___ico_sequent__TOP__37__PROF__CoreTop__l1098\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___ico_sequent__TOP__38__PROF__CoreTop__l1107(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___ico_sequent__TOP__38__PROF__CoreTop__l1107\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___ico_sequent__TOP__39__PROF__CoreTop__l705(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___ico_sequent__TOP__39__PROF__CoreTop__l705\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_quotient 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_flow_div_signed)
            ? (((((0U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                   ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_13
                   : 0ULL) | ((1U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                               ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_18
                               : 0ULL)) | ((2U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                                            ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_18
                                            : 0ULL)) 
               | ((3U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                   ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_13
                   : 0ULL)) : vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S);
}

VL_INLINE_OPT void VCoreTop___024root___ico_sequent__TOP__40__PROF__CoreTop__l706(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___ico_sequent__TOP__40__PROF__CoreTop__l706\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_remainder 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_flow_div_signed)
            ? (((((0U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                   ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_16
                   : 0ULL) | ((1U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                               ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_16
                               : 0ULL)) | ((2U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                                            ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_26
                                            : 0ULL)) 
               | ((3U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                   ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_26
                   : 0ULL)) : (((QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[3U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[2U]))));
}

VL_INLINE_OPT void VCoreTop___024root___ico_sequent__TOP__41__PROF__CoreTop__l4637(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___ico_sequent__TOP__41__PROF__CoreTop__l4637\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___ico_sequent__TOP__42__PROF__CoreTop__l4638(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___ico_sequent__TOP__42__PROF__CoreTop__l4638\n"); );
    // Body
    vlSelf->CoreTop__DOT__IF_io_cache_req_rdata_rep_valid 
        = ((~ (IData)(vlSelf->CoreTop__DOT__IF_io_flush)) 
           & ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT___io_in_rdata_rep_bits_rdata_T_1) 
              | ((2U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                 & (3U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state)))));
}

VL_INLINE_OPT void VCoreTop___024root___ico_sequent__TOP__43__PROF__CoreTop__l915(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___ico_sequent__TOP__43__PROF__CoreTop__l915\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_26 
        = (((QData)((IData)(((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_quotient 
                                            >> 0x1fU)))
                              ? 0xffffffffU : 0U))) 
            << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_quotient)));
}

VL_INLINE_OPT void VCoreTop___024root___ico_sequent__TOP__44__PROF__CoreTop__l918(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___ico_sequent__TOP__44__PROF__CoreTop__l918\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_30 
        = (((QData)((IData)(((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_remainder 
                                            >> 0x1fU)))
                              ? 0xffffffffU : 0U))) 
            << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_remainder)));
}

VL_INLINE_OPT void VCoreTop___024root___ico_sequent__TOP__45__PROF__CoreTop__l4111(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___ico_sequent__TOP__45__PROF__CoreTop__l4111\n"); );
    // Body
    vlSelf->CoreTop__DOT___T_1 = ((IData)(vlSelf->CoreTop__DOT__IF_io_cache_req_addr_req_valid) 
                                  & (IData)(vlSelf->CoreTop__DOT__IF_io_cache_req_rdata_rep_valid));
}

VL_INLINE_OPT void VCoreTop___024root___ico_sequent__TOP__46__PROF__CoreTop__l1075(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___ico_sequent__TOP__46__PROF__CoreTop__l1075\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___ico_sequent__TOP__47__PROF__CoreTop__l4112(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___ico_sequent__TOP__47__PROF__CoreTop__l4112\n"); );
    // Body
    vlSelf->CoreTop__DOT___GEN_1 = ((IData)(vlSelf->CoreTop__DOT___T_1) 
                                    | ((~ (IData)(vlSelf->CoreTop__DOT___T)) 
                                       & (IData)(vlSelf->CoreTop__DOT__valid)));
}

VL_INLINE_OPT void VCoreTop___024root___ico_sequent__TOP__48__PROF__CoreTop__l1260(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___ico_sequent__TOP__48__PROF__CoreTop__l1260\n"); );
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

void VCoreTop___024root___ico_sequent__TOP__1__PROF__SRAMTemp__l301(VCoreTop___024root* vlSelf);

void VCoreTop___024root___eval_ico(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        VCoreTop___024root___ico_sequent__TOP__0__PROF__CoreTop__l703(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        VCoreTop___024root___ico_sequent__TOP__1__PROF__SRAMTemp__l301(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__2__PROF__CoreTop__l2112(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__3__PROF__CoreTop__l2757(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__4__PROF__CoreTop__l4722(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__5__PROF__CoreTop__l1558(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__6__PROF__CoreTop__l1566(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__7__PROF__CoreTop__l1594(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__8__PROF__CoreTop__l900(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__9__PROF__CoreTop__l898(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__10__PROF__CoreTop__l1280(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__11__PROF__CoreTop__l1125(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__12__PROF__CoreTop__l1129(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__13__PROF__CoreTop__l907(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__14__PROF__CoreTop__l1158(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__15__PROF__CoreTop__l1161(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__16__PROF__CoreTop__l902(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__17__PROF__CoreTop__l934(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__18__PROF__CoreTop__l1279(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__19__PROF__CoreTop__l1125(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__20__PROF__CoreTop__l1129(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__21__PROF__CoreTop__l1194(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__22__PROF__CoreTop__l905(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__23__PROF__CoreTop__l990(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__24__PROF__CoreTop__l1010(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__25__PROF__CoreTop__l1030(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__26__PROF__CoreTop__l1050(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__27__PROF__CoreTop__l1077(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__28__PROF__CoreTop__l1097(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__29__PROF__CoreTop__l683(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__30__PROF__CoreTop__l1142(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__31__PROF__CoreTop__l1200(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__32__PROF__CoreTop__l4641(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__33__PROF__CoreTop__l1102(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__34__PROF__CoreTop__l1101(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__35__PROF__CoreTop__l1105(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__36__PROF__CoreTop__l1099(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__37__PROF__CoreTop__l1098(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__38__PROF__CoreTop__l1107(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__39__PROF__CoreTop__l705(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__40__PROF__CoreTop__l706(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__41__PROF__CoreTop__l4637(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__42__PROF__CoreTop__l4638(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__43__PROF__CoreTop__l915(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__44__PROF__CoreTop__l918(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__45__PROF__CoreTop__l4111(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__46__PROF__CoreTop__l1075(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__47__PROF__CoreTop__l4112(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__48__PROF__CoreTop__l1260(vlSelf);
    }
}

void VCoreTop___024root___eval_act(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___eval_act\n"); );
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__0__PROF__CoreTop__l2233(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__0__PROF__CoreTop__l2233\n"); );
    // Body
    vlSelf->__Vdly__CoreTop__DOT__ICACHE__DOT__state 
        = vlSelf->CoreTop__DOT__ICACHE__DOT__state;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__1__PROF__CoreTop__l720(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__1__PROF__CoreTop__l720\n"); );
    // Body
    vlSelf->__Vdly__CoreTop__DOT__EX__DOT__div__DOT__state 
        = vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__2__PROF__CoreTop__l2217(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__2__PROF__CoreTop__l2217\n"); );
    // Body
    vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__lru__v0 = 0U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__3__PROF__CoreTop__l2220(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__3__PROF__CoreTop__l2220\n"); );
    // Body
    vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__lru__v1 = 0U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__4__PROF__CoreTop__l2223(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__4__PROF__CoreTop__l2223\n"); );
    // Body
    vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__lru__v2 = 0U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__5__PROF__CoreTop__l2226(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__5__PROF__CoreTop__l2226\n"); );
    // Body
    vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__lru__v3 = 0U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__6__PROF__CoreTop__l512(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__6__PROF__CoreTop__l512\n"); );
    // Body
    vlSelf->__Vdly__CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U] 
        = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U];
    vlSelf->__Vdly__CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[1U] 
        = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[1U];
    vlSelf->__Vdly__CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[2U] 
        = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[2U];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__7__PROF__CoreTop__l1838(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__7__PROF__CoreTop__l1838\n"); );
    // Body
    vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0 = 0U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__8__PROF__CoreTop__l1845(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__8__PROF__CoreTop__l1845\n"); );
    // Body
    vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0 = 0U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__9__PROF__CoreTop__l1866(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__9__PROF__CoreTop__l1866\n"); );
    // Body
    vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0__v0 = 0U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__10__PROF__CoreTop__l1873(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__10__PROF__CoreTop__l1873\n"); );
    // Body
    vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1__v0 = 0U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__11__PROF__CoreTop__l1859(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__11__PROF__CoreTop__l1859\n"); );
    // Body
    vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1__v0 = 0U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__12__PROF__CoreTop__l1852(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__12__PROF__CoreTop__l1852\n"); );
    // Body
    vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0__v0 = 0U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__13__PROF__CoreTop__l4835(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__13__PROF__CoreTop__l4835\n"); );
    // Body
    vlSelf->__Vdlyvset__CoreTop__DOT__rf__v0 = 0U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__14__PROF__CoreTop__l1838(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__14__PROF__CoreTop__l1838\n"); );
    // Body
    vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0 = 0U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__15__PROF__CoreTop__l1845(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__15__PROF__CoreTop__l1845\n"); );
    // Body
    vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0 = 0U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__16__PROF__CoreTop__l1866(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__16__PROF__CoreTop__l1866\n"); );
    // Body
    vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0__v0 = 0U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__17__PROF__CoreTop__l1873(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__17__PROF__CoreTop__l1873\n"); );
    // Body
    vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1__v0 = 0U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__18__PROF__CoreTop__l1859(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__18__PROF__CoreTop__l1859\n"); );
    // Body
    vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1__v0 = 0U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__19__PROF__CoreTop__l1852(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__19__PROF__CoreTop__l1852\n"); );
    // Body
    vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0__v0 = 0U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__20__PROF__CoreTop__l3087(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__20__PROF__CoreTop__l3087\n"); );
    // Body
    vlSelf->__Vdly__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__21__PROF__CoreTop__l3072(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__21__PROF__CoreTop__l3072\n"); );
    // Body
    vlSelf->__Vdly__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__22__PROF__CoreTop__l3308(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__22__PROF__CoreTop__l3308\n"); );
    // Body
    vlSelf->__Vdly__CoreTop__DOT__MMIO__DOT__birdge__DOT__read_state 
        = vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__read_state;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__23__PROF__CoreTop__l3321(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__23__PROF__CoreTop__l3321\n"); );
    // Body
    vlSelf->__Vdly__CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state 
        = vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__24__PROF__CoreTop__l3046(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__24__PROF__CoreTop__l3046\n"); );
    // Body
    vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1__v0 = 0U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__25__PROF__CoreTop__l3039(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__25__PROF__CoreTop__l3039\n"); );
    // Body
    vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0__v0 = 0U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__26__PROF__CoreTop__l3053(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__26__PROF__CoreTop__l3053\n"); );
    // Body
    vlSelf->__Vdly__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__27__PROF__CoreTop__l3023(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__27__PROF__CoreTop__l3023\n"); );
    // Body
    vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru__v0 = 0U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__28__PROF__CoreTop__l3026(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__28__PROF__CoreTop__l3026\n"); );
    // Body
    vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru__v1 = 0U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__29__PROF__CoreTop__l3029(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__29__PROF__CoreTop__l3029\n"); );
    // Body
    vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru__v2 = 0U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__30__PROF__CoreTop__l3032(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__30__PROF__CoreTop__l3032\n"); );
    // Body
    vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru__v3 = 0U;
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__33__PROF__CoreTop__l2252(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__33__PROF__CoreTop__l2252\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__102__PROF__CoreTop__l2233(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__102__PROF__CoreTop__l2233\n"); );
    // Body
    vlSelf->__Vdly__CoreTop__DOT__ICACHE__DOT__state 
        = ((IData)(vlSelf->reset) ? 0U : ((IData)(vlSelf->CoreTop__DOT__IF_io_flush)
                                           ? (((2U 
                                                == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                               | (3U 
                                                  == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)))
                                               ? 4U
                                               : 0U)
                                           : ((0U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state))
                                               ? ((IData)(vlSelf->CoreTop__DOT__IF_io_cache_req_addr_req_valid)
                                                   ? 1U
                                                   : 0U)
                                               : ((1U 
                                                   == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state))
                                                   ? 
                                                  ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit)
                                                    ? 0U
                                                    : 2U)
                                                   : (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_10)))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__103__PROF__CoreTop__l2216(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__103__PROF__CoreTop__l2216\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__104__PROF__CoreTop__l1837(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__104__PROF__CoreTop__l1837\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__105__PROF__CoreTop__l1844(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__105__PROF__CoreTop__l1844\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__106__PROF__CoreTop__l1865(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__106__PROF__CoreTop__l1865\n"); );
    // Body
    if (((3U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state)) 
         & (~ (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r)))) {
        vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0__v0 = 1U;
        vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0__v0 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_addr;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__107__PROF__CoreTop__l1872(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__107__PROF__CoreTop__l1872\n"); );
    // Body
    if (((3U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state)) 
         & (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r))) {
        vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1__v0 = 1U;
        vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1__v0 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_addr;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__108__PROF__CoreTop__l1858(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__108__PROF__CoreTop__l1858\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__109__PROF__CoreTop__l1851(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__109__PROF__CoreTop__l1851\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__110__PROF__CoreTop__l4834(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__110__PROF__CoreTop__l4834\n"); );
    // Body
    if (vlSelf->CoreTop__DOT__rf_MPORT_en) {
        vlSelf->__Vdlyvval__CoreTop__DOT__rf__v0 = 
            ((0U == (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest))
              ? 0ULL : vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfData);
        vlSelf->__Vdlyvset__CoreTop__DOT__rf__v0 = 1U;
        vlSelf->__Vdlyvdim0__CoreTop__DOT__rf__v0 = vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__111__PROF__CoreTop__l1837(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__111__PROF__CoreTop__l1837\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__112__PROF__CoreTop__l1844(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__112__PROF__CoreTop__l1844\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__113__PROF__CoreTop__l1865(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__113__PROF__CoreTop__l1865\n"); );
    // Body
    if (((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_en) 
         & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_waymask))) {
        vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0__v0 = 1U;
        vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0__v0 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_addr;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__114__PROF__CoreTop__l1872(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__114__PROF__CoreTop__l1872\n"); );
    // Body
    if (((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_en) 
         & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_waymask) 
            >> 1U))) {
        vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1__v0 = 1U;
        vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1__v0 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_addr;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__115__PROF__CoreTop__l1858(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__115__PROF__CoreTop__l1858\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__116__PROF__CoreTop__l1851(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__116__PROF__CoreTop__l1851\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__117__PROF__CoreTop__l3086(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__117__PROF__CoreTop__l3086\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__118__PROF__CoreTop__l3071(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__118__PROF__CoreTop__l3071\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__119__PROF__CoreTop__l3307(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__119__PROF__CoreTop__l3307\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__120__PROF__CoreTop__l3320(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__120__PROF__CoreTop__l3320\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__121__PROF__CoreTop__l3045(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__121__PROF__CoreTop__l3045\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__122__PROF__CoreTop__l3038(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__122__PROF__CoreTop__l3038\n"); );
    // Body
    if (((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0_MPORT_4_en) 
         & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_waymask))) {
        vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0__v0 = 1U;
        vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0__v0 
            = (0x1fU & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                >> 6U)));
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__123__PROF__CoreTop__l3053(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__123__PROF__CoreTop__l3053\n"); );
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
                                                    [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1_dirt_w_addr_pipe_0])
                                                    ? 3U
                                                    : 2U))
                                               : ((2U 
                                                   == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state))
                                                   ? (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_10)
                                                   : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_14)))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__124__PROF__CoreTop__l3022(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__124__PROF__CoreTop__l3022\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__125__PROF__SRAMTemp__l221(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__125__PROF__SRAMTemp__l221\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__126__PROF__SRAMTemp__l221(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__126__PROF__SRAMTemp__l221\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__127__PROF__CoreTop__l2251(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__127__PROF__CoreTop__l2251\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__128__PROF__SRAMTemp__l221(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__128__PROF__SRAMTemp__l221\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__129__PROF__CoreTop__l1868(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__129__PROF__CoreTop__l1868\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_en_pipe_0 = 1U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__130__PROF__CoreTop__l1861(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__130__PROF__CoreTop__l1861\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1_tag_w_en_pipe_0 = 1U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__131__PROF__CoreTop__l1875(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__131__PROF__CoreTop__l1875\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_en_pipe_0 = 1U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__132__PROF__CoreTop__l1840(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__132__PROF__CoreTop__l1840\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_en_pipe_0 = 1U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__133__PROF__CoreTop__l1847(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__133__PROF__CoreTop__l1847\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_en_pipe_0 = 1U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__134__PROF__CoreTop__l1854(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__134__PROF__CoreTop__l1854\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_tag_w_en_pipe_0 = 1U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__135__PROF__CoreTop__l3041(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__135__PROF__CoreTop__l3041\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0_dirt_w_en_pipe_0 = 1U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__136__PROF__CoreTop__l3048(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__136__PROF__CoreTop__l3048\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1_dirt_w_en_pipe_0 = 1U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__137__PROF__CoreTop__l3034(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__137__PROF__CoreTop__l3034\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_en_pipe_0 = 1U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__138__PROF__CoreTop__l1868(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__138__PROF__CoreTop__l1868\n"); );
    // Body
    vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_en_pipe_0 = 1U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__139__PROF__CoreTop__l1861(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__139__PROF__CoreTop__l1861\n"); );
    // Body
    vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_en_pipe_0 = 1U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__140__PROF__CoreTop__l1875(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__140__PROF__CoreTop__l1875\n"); );
    // Body
    vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_en_pipe_0 = 1U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__141__PROF__CoreTop__l1840(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__141__PROF__CoreTop__l1840\n"); );
    // Body
    vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_en_pipe_0 = 1U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__142__PROF__CoreTop__l1847(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__142__PROF__CoreTop__l1847\n"); );
    // Body
    vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_en_pipe_0 = 1U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__143__PROF__CoreTop__l1854(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__143__PROF__CoreTop__l1854\n"); );
    // Body
    vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_tag_w_en_pipe_0 = 1U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__144__PROF__CoreTop__l2228(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__144__PROF__CoreTop__l2228\n"); );
    // Body
    vlSelf->CoreTop__DOT__ICACHE__DOT__lru_lru_w_MPORT_en_pipe_0 = 1U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__145__PROF__CoreTop__l4971(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__145__PROF__CoreTop__l4971\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP_io_inst_REG = vlSelf->io_inst;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__146__PROF__CoreTop__l4975(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__146__PROF__CoreTop__l4975\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP_io_dnpc_REG = vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_Dnpc;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__147__PROF__CoreTop__l2266(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__147__PROF__CoreTop__l2266\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__148__PROF__CoreTop__l732(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__148__PROF__CoreTop__l732\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT__count = 0U;
    } else if ((1U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state))) {
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT__count 
            = vlSelf->CoreTop__DOT__EX__DOT__div__DOT___wrap_value_T_1;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__149__PROF__CoreTop__l1863(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__149__PROF__CoreTop__l1863\n"); );
    // Body
    vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0 
        = (0x1fU & (IData)((vlSelf->io_pc >> 6U)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__150__PROF__CoreTop__l2293(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__150__PROF__CoreTop__l2293\n"); );
    // Body
    vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_in_valid_REG 
        = ((IData)(vlSelf->CoreTop__DOT__IF_io_cache_req_addr_req_valid) 
           & (0U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__151__PROF__CoreTop__l718(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__151__PROF__CoreTop__l718\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S = (((QData)((IData)(
                                                                   vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_13[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_13[0U])));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__152__PROF__CoreTop__l4851(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__152__PROF__CoreTop__l4851\n"); );
    // Body
    vlSelf->CoreTop__DOT__valid_1 = ((~ (IData)(vlSelf->reset)) 
                                     & ((~ (IData)(vlSelf->CoreTop__DOT__IF_io_flush)) 
                                        & (IData)(vlSelf->CoreTop__DOT___GEN_6)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__153__PROF__CoreTop__l2275(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__153__PROF__CoreTop__l2275\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__154__PROF__CoreTop__l709(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__154__PROF__CoreTop__l709\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__155__PROF__CoreTop__l4860(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__155__PROF__CoreTop__l4860\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T) {
        vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src2Type 
            = ((8U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)) 
               | ((7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)) 
                  | (3U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))));
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__156__PROF__CoreTop__l708(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__156__PROF__CoreTop__l708\n"); );
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
            = vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_8[0U];
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[1U] 
            = vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_8[1U];
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[2U] 
            = vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_8[2U];
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[3U] 
            = vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_8[3U];
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__157__PROF__CoreTop__l4954(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__157__PROF__CoreTop__l4954\n"); );
    // Body
    if (vlSelf->CoreTop__DOT__MEM_io_out_valid) {
        vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_inst 
            = vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_inst;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__158__PROF__CoreTop__l4857(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__158__PROF__CoreTop__l4857\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T) {
        vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src1Type 
            = (((7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                 ? 2U : 0U) | ((3U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                ? 2U : 0U));
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__159__PROF__CoreTop__l511(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__159__PROF__CoreTop__l511\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__160__PROF__CoreTop__l4872(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__160__PROF__CoreTop__l4872\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T) {
        vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfSrc2 
            = (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                        >> 0x14U));
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__161__PROF__CoreTop__l4974(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__161__PROF__CoreTop__l4974\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP_io_pc_REG = vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_PC;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__162__PROF__CoreTop__l4928(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__162__PROF__CoreTop__l4928\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T_3) {
        vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfData 
            = vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfData;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__163__PROF__CoreTop__l4869(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__163__PROF__CoreTop__l4869\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T) {
        vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfSrc1 
            = (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                        >> 0xfU));
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__164__PROF__CoreTop__l4948(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__164__PROF__CoreTop__l4948\n"); );
    // Body
    if (vlSelf->CoreTop__DOT__MEM_io_out_valid) {
        vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_rfWen 
            = vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_rfWen;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__165__PROF__CoreTop__l1327(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__165__PROF__CoreTop__l1327\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__166__PROF__CoreTop__l1318(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__166__PROF__CoreTop__l1318\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__167__PROF__CoreTop__l1339(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__167__PROF__CoreTop__l1339\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mcause_REG_1 
        = vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mcause_REG;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__168__PROF__CoreTop__l1343(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__168__PROF__CoreTop__l1343\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mstatus_REG_1 
        = vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mstatus_REG;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__169__PROF__CoreTop__l1337(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__169__PROF__CoreTop__l1337\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mtvec_REG_1 
        = vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mtvec_REG;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__170__PROF__CoreTop__l4970(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__170__PROF__CoreTop__l4970\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP_io_is_break_REG_1 = vlSelf->CoreTop__DOT__DIP_io_is_break_REG;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__171__PROF__CoreTop__l1341(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__171__PROF__CoreTop__l1341\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mepc_REG_1 
        = vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mepc_REG;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__172__PROF__CoreTop__l3128(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__172__PROF__CoreTop__l3128\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__173__PROF__CoreTop__l3101(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__173__PROF__CoreTop__l3101\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__174__PROF__CoreTop__l4934(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__174__PROF__CoreTop__l4934\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T_3) {
        vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2 
            = vlSelf->CoreTop__DOT__EX__DOT__src2;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__175__PROF__CoreTop__l4887(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__175__PROF__CoreTop__l4887\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T) {
        vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_src2 
            = (((IData)(vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfWen) 
                & (((IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest) 
                    == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                 >> 0x14U))) & (0U 
                                                != (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest))))
                ? vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfData
                : (((IData)(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfWen) 
                    & (((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest) 
                        == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                     >> 0x14U))) & 
                       (0U != (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest))))
                    ? vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfData
                    : (((IData)(vlSelf->CoreTop__DOT__rf_MPORT_en) 
                        & (((IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest) 
                            == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                         >> 0x14U))) 
                           & (0U != (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest))))
                        ? vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfData
                        : ((0U == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                            >> 0x14U)))
                            ? 0ULL : vlSelf->CoreTop__DOT__rf
                           [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                      >> 0x14U))]))));
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__176__PROF__CoreTop__l4884(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__176__PROF__CoreTop__l4884\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T) {
        vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_src1 
            = (((IData)(vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfWen) 
                & (((IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest) 
                    == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                 >> 0xfU))) & (0U != (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest))))
                ? vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfData
                : (((IData)(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfWen) 
                    & (((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest) 
                        == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                     >> 0xfU))) & (0U 
                                                   != (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest))))
                    ? vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfData
                    : (((IData)(vlSelf->CoreTop__DOT__rf_MPORT_en) 
                        & (((IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest) 
                            == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                         >> 0xfU))) 
                           & (0U != (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest))))
                        ? vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfData
                        : ((0U == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                            >> 0xfU)))
                            ? 0ULL : vlSelf->CoreTop__DOT__rf
                           [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                      >> 0xfU))]))));
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__177__PROF__CoreTop__l4973(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__177__PROF__CoreTop__l4973\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP_io_inst_valid_REG = ((IData)(vlSelf->CoreTop__DOT__valid_3) 
                                                   & (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_inst_valid));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__178__PROF__CoreTop__l3148(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__178__PROF__CoreTop__l3148\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__179__PROF__CoreTop__l3159(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__179__PROF__CoreTop__l3159\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_in_valid_REG 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_valid) 
           & (0U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__180__PROF__CoreTop__l4907(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__180__PROF__CoreTop__l4907\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T_3) {
        vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_inst_valid 
            = vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_inst_valid;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__181__PROF__CoreTop__l4904(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__181__PROF__CoreTop__l4904\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T_3) {
        vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_fuType 
            = vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__182__PROF__CoreTop__l3036(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__182__PROF__CoreTop__l3036\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_addr_pipe_0 
        = (0x1fU & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                            >> 6U)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__183__PROF__CoreTop__l4972(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__183__PROF__CoreTop__l4972\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP_io_is_skip_REG = vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_skip;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__184__PROF__CoreTop__l3110(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__184__PROF__CoreTop__l3110\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__185__PROF__CoreTop__l1849(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__185__PROF__CoreTop__l1849\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0 
        = (0x1fU & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                            >> 6U)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__186__PROF__CoreTop__l1877(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__186__PROF__CoreTop__l1877\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_addr_pipe_0 
        = (0x1fU & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                            >> 6U)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__187__PROF__CoreTop__l1870(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__187__PROF__CoreTop__l1870\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0 
        = (0x1fU & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                            >> 6U)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__188__PROF__CoreTop__l1856(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__188__PROF__CoreTop__l1856\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_tag_w_addr_pipe_0 
        = (0x1fU & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                            >> 6U)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__189__PROF__CoreTop__l1863(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__189__PROF__CoreTop__l1863\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0 
        = (0x1fU & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                            >> 6U)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__190__PROF__CoreTop__l3139(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__190__PROF__CoreTop__l3139\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__191__PROF__CoreTop__l4900(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__191__PROF__CoreTop__l4900\n"); );
    // Body
    vlSelf->CoreTop__DOT__valid_2 = ((~ (IData)(vlSelf->reset)) 
                                     & (IData)(vlSelf->CoreTop__DOT___GEN_25));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__192__PROF__CoreTop__l4931(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__192__PROF__CoreTop__l4931\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T_3) {
        vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src1 
            = vlSelf->CoreTop__DOT__EX__DOT__src1;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__193__PROF__CoreTop__l4937(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__193__PROF__CoreTop__l4937\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T_3) {
        vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_Imm 
            = vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__194__PROF__CoreTop__l4913(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__194__PROF__CoreTop__l4913\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T_3) {
        vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype 
            = vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__195__PROF__CoreTop__l1838(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__195__PROF__CoreTop__l1838\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__196__PROF__CoreTop__l1845(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__196__PROF__CoreTop__l1845\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__197__PROF__CoreTop__l1866(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__197__PROF__CoreTop__l1866\n"); );
    // Body
    if (vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0__v0) {
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0__v0] = 1U;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__198__PROF__CoreTop__l1873(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__198__PROF__CoreTop__l1873\n"); );
    // Body
    if (vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1__v0) {
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1__v0] = 1U;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__199__PROF__CoreTop__l1859(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__199__PROF__CoreTop__l1859\n"); );
    // Body
    if (vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1__v0) {
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1__v0] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1__v0;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__200__PROF__CoreTop__l1852(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__200__PROF__CoreTop__l1852\n"); );
    // Body
    if (vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0__v0) {
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0__v0] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0__v0;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__202__PROF__CoreTop__l1838(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__202__PROF__CoreTop__l1838\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__203__PROF__CoreTop__l1845(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__203__PROF__CoreTop__l1845\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__204__PROF__CoreTop__l1866(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__204__PROF__CoreTop__l1866\n"); );
    // Body
    if (vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0__v0) {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0__v0] = 1U;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__205__PROF__CoreTop__l1873(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__205__PROF__CoreTop__l1873\n"); );
    // Body
    if (vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1__v0) {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1__v0] = 1U;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__206__PROF__CoreTop__l1859(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__206__PROF__CoreTop__l1859\n"); );
    // Body
    if (vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1__v0) {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1__v0] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1__v0;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__207__PROF__CoreTop__l1852(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__207__PROF__CoreTop__l1852\n"); );
    // Body
    if (vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0__v0) {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0__v0] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0__v0;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__208__PROF__CoreTop__l3087(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__208__PROF__CoreTop__l3087\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state 
        = vlSelf->__Vdly__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__209__PROF__CoreTop__l3072(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__209__PROF__CoreTop__l3072\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state 
        = vlSelf->__Vdly__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__210__PROF__CoreTop__l3308(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__210__PROF__CoreTop__l3308\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__read_state 
        = vlSelf->__Vdly__CoreTop__DOT__MMIO__DOT__birdge__DOT__read_state;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__211__PROF__CoreTop__l3321(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__211__PROF__CoreTop__l3321\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state 
        = vlSelf->__Vdly__CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__212__PROF__CoreTop__l3046(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__212__PROF__CoreTop__l3046\n"); );
    // Body
    if (vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1__v0) {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1__v0] = 1U;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__213__PROF__CoreTop__l3039(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__213__PROF__CoreTop__l3039\n"); );
    // Body
    if (vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0__v0) {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0__v0] = 1U;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__215__PROF__CoreTop__l3023(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__215__PROF__CoreTop__l3023\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__217__PROF__SRAMTemp__l223(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__217__PROF__SRAMTemp__l223\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMEM__DOT__read_addr_buffer 
        = vlSelf->__Vdly__CoreTop__DOT__MMEM__DOT__read_addr_buffer;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__218__PROF__SRAMTemp__l224(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__218__PROF__SRAMTemp__l224\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMEM__DOT__write_addr_buffer 
        = vlSelf->__Vdly__CoreTop__DOT__MMEM__DOT__write_addr_buffer;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__220__PROF__CoreTop__l2252(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__220__PROF__CoreTop__l2252\n"); );
    // Body
    vlSelf->CoreTop__DOT__ICACHE__DOT__read_state = vlSelf->__Vdly__CoreTop__DOT__ICACHE__DOT__read_state;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__221__PROF__SRAMTemp__l222(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__221__PROF__SRAMTemp__l222\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMEM__DOT__read_count = vlSelf->__Vdly__CoreTop__DOT__MMEM__DOT__read_count;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__252__PROF__CoreTop__l720(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__252__PROF__CoreTop__l720\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state 
        = vlSelf->__Vdly__CoreTop__DOT__EX__DOT__div__DOT__state;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__258__PROF__CoreTop__l512(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__258__PROF__CoreTop__l512\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U] 
        = vlSelf->__Vdly__CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U];
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[1U] 
        = vlSelf->__Vdly__CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[1U];
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[2U] 
        = vlSelf->__Vdly__CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[2U];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__285__PROF__CoreTop__l4835(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__285__PROF__CoreTop__l4835\n"); );
    // Body
    if (vlSelf->__Vdlyvset__CoreTop__DOT__rf__v0) {
        vlSelf->CoreTop__DOT__rf[vlSelf->__Vdlyvdim0__CoreTop__DOT__rf__v0] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__rf__v0;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__311__PROF__CoreTop__l2284(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__311__PROF__CoreTop__l2284\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__312__PROF__CoreTop__l3296(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__312__PROF__CoreTop__l3296\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_out_raddr_req_valid 
        = (1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__read_state));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__313__PROF__CoreTop__l3298(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__313__PROF__CoreTop__l3298\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_out_waddr_req_valid 
        = (1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__314__PROF__CoreTop__l3050(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__314__PROF__CoreTop__l3050\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1_dirt_w_addr_pipe_0 
        = (0x1fU & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                            >> 6U)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__315__PROF__CoreTop__l3119(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__315__PROF__CoreTop__l3119\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__316__PROF__SRAMTemp__l213(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__316__PROF__SRAMTemp__l213\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMEM__DOT__write_state = 
        ((IData)(vlSelf->reset) ? 0U : (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_next_state));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__317__PROF__SRAMTemp__l212(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__317__PROF__SRAMTemp__l212\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMEM__DOT__read_state = ((IData)(vlSelf->reset)
                                                    ? 0U
                                                    : (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_next_state));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__318__PROF__CoreTop__l2533(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__318__PROF__CoreTop__l2533\n"); );
    // Body
    vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r = 
        ((~ (IData)(vlSelf->reset)) & ((~ (((IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_valid) 
                                            | (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_valid)) 
                                           & (~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)))) 
                                       & (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT___GEN_98)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__319__PROF__DIP_model__l85(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__319__PROF__DIP_model__l85\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__IN[0U] = vlSelf->CoreTop__DOT__DIP_io_inst_REG;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__320__PROF__DIP_model__l89(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__320__PROF__DIP_model__l89\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__IN[4U] = (IData)(vlSelf->CoreTop__DOT__DIP_io_dnpc_REG);
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__321__PROF__DIP_model__l90(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__321__PROF__DIP_model__l90\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__IN[5U] = (IData)(
                                                     (vlSelf->CoreTop__DOT__DIP_io_dnpc_REG 
                                                      >> 0x20U));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__322__PROF__CoreTop__l4957(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__322__PROF__CoreTop__l4957\n"); );
    // Body
    if (vlSelf->CoreTop__DOT__MEM_io_out_valid) {
        vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_Dnpc 
            = vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_Dnpc;
    }
}

extern const VlWide<16>/*511:0*/ VCoreTop__ConstPool__CONST_h93e1b771_0;

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__323__PROF__CoreTop__l1787(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__323__PROF__CoreTop__l1787\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__324__PROF__CoreTop__l654(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__324__PROF__CoreTop__l654\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT___wrap_value_T_1 
        = (0x3fU & ((IData)(1U) + (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__count)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__325__PROF__CoreTop__l679(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__325__PROF__CoreTop__l679\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_13 
        = ((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S 
                          >> 0x3fU))) ? (- vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S)
            : vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S);
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__326__PROF__CoreTop__l681(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__326__PROF__CoreTop__l681\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_18 
        = ((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S 
                          >> 0x3fU))) ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S
            : (- vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__327__PROF__CoreTop__l2198(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__327__PROF__CoreTop__l2198\n"); );
    // Body
    vlSelf->CoreTop__DOT__ICACHE_io_out_raddr_req_bits_addr 
        = ((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state))
            ? vlSelf->CoreTop__DOT__ICACHE__DOT__mem_addr_reg
            : 0ULL);
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__328__PROF__CoreTop__l651(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__328__PROF__CoreTop__l651\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T = (1U 
                                                   == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__329__PROF__CoreTop__l658(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__329__PROF__CoreTop__l658\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_2 
        = ((0U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state))
            ? 1U : (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__330__PROF__CoreTop__l655(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__330__PROF__CoreTop__l655\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__s = ((1U 
                                                   == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state)) 
                                                  & (0x3fU 
                                                     == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__count)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__331__PROF__CoreTop__l657(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__331__PROF__CoreTop__l657\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__332__PROF__CoreTop__l680(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__332__PROF__CoreTop__l680\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_16 
        = ((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[3U] 
            >> 0x1fU) ? (- (((QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[3U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[2U]))))
            : (((QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[3U])) 
                << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[2U]))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__333__PROF__CoreTop__l682(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__333__PROF__CoreTop__l682\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_26 
        = ((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[3U] 
            >> 0x1fU) ? (((QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[3U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[2U])))
            : (- (((QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[3U])) 
                   << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[2U])))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__334__PROF__CoreTop__l4632(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__334__PROF__CoreTop__l4632\n"); );
    // Body
    vlSelf->io_inst = vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_inst;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__335__PROF__CoreTop__l4919(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__335__PROF__CoreTop__l4919\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T_3) {
        vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_inst 
            = vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_inst;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__336__PROF__CoreTop__l460(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__336__PROF__CoreTop__l460\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__337__PROF__CoreTop__l537(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__337__PROF__CoreTop__l537\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count 
        = ((IData)(vlSelf->reset) ? 0U : (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_valid) 
                                           & (~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_out_valid)))
                                           ? (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT___count_T_5)
                                           : 0U));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__338__PROF__DIP_model__l86(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__338__PROF__DIP_model__l86\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__IN[1U] = (IData)(vlSelf->CoreTop__DOT__DIP_io_pc_REG);
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__339__PROF__DIP_model__l87(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__339__PROF__DIP_model__l87\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__IN[2U] = (IData)(
                                                     (vlSelf->CoreTop__DOT__DIP_io_pc_REG 
                                                      >> 0x20U));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__340__PROF__CoreTop__l4951(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__340__PROF__CoreTop__l4951\n"); );
    // Body
    if (vlSelf->CoreTop__DOT__MEM_io_out_valid) {
        vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_PC 
            = vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_PC;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__341__PROF__CoreTop__l4910(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__341__PROF__CoreTop__l4910\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T_3) {
        vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_rfWen 
            = vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfWen;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__342__PROF__CSR_DIFF__l11(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__342__PROF__CSR_DIFF__l11\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[1U] 
        = vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mcause_REG_1;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__343__PROF__CoreTop__l1338(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__343__PROF__CoreTop__l1338\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mcause_REG 
        = vlSelf->CoreTop__DOT__EX__DOT__mcause;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__344__PROF__CSR_DIFF__l12(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__344__PROF__CSR_DIFF__l12\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[2U] 
        = vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mstatus_REG_1;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__345__PROF__CoreTop__l1342(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__345__PROF__CoreTop__l1342\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mstatus_REG 
        = vlSelf->CoreTop__DOT__EX__DOT__mstatus;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__346__PROF__CSR_DIFF__l13(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__346__PROF__CSR_DIFF__l13\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[3U] 
        = vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mtvec_REG_1;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__347__PROF__CoreTop__l1336(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__347__PROF__CoreTop__l1336\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mtvec_REG 
        = vlSelf->CoreTop__DOT__EX__DOT__mtvec;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__348__PROF__CoreTop__l4969(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__348__PROF__CoreTop__l4969\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP_io_is_break_REG = ((0x42U 
                                                  == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                                                 & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_inst_valid));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__349__PROF__CSR_DIFF__l10(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__349__PROF__CSR_DIFF__l10\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[0U] 
        = vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mepc_REG_1;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__350__PROF__CoreTop__l1340(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__350__PROF__CoreTop__l1340\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mepc_REG 
        = vlSelf->CoreTop__DOT__EX__DOT__mepc;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__351__PROF__DIP_model__l52(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__351__PROF__DIP_model__l52\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0U] = vlSelf->CoreTop__DOT__rf
        [0U];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__352__PROF__DIP_model__l53(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__352__PROF__DIP_model__l53\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[1U] = vlSelf->CoreTop__DOT__rf
        [1U];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__353__PROF__DIP_model__l54(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__353__PROF__DIP_model__l54\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[2U] = vlSelf->CoreTop__DOT__rf
        [2U];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__354__PROF__DIP_model__l55(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__354__PROF__DIP_model__l55\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[3U] = vlSelf->CoreTop__DOT__rf
        [3U];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__355__PROF__DIP_model__l56(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__355__PROF__DIP_model__l56\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[4U] = vlSelf->CoreTop__DOT__rf
        [4U];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__356__PROF__DIP_model__l57(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__356__PROF__DIP_model__l57\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[5U] = vlSelf->CoreTop__DOT__rf
        [5U];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__357__PROF__DIP_model__l58(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__357__PROF__DIP_model__l58\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[6U] = vlSelf->CoreTop__DOT__rf
        [6U];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__358__PROF__DIP_model__l59(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__358__PROF__DIP_model__l59\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[7U] = vlSelf->CoreTop__DOT__rf
        [7U];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__359__PROF__DIP_model__l60(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__359__PROF__DIP_model__l60\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[8U] = vlSelf->CoreTop__DOT__rf
        [8U];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__360__PROF__DIP_model__l61(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__360__PROF__DIP_model__l61\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[9U] = vlSelf->CoreTop__DOT__rf
        [9U];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__361__PROF__DIP_model__l62(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__361__PROF__DIP_model__l62\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0xaU] = vlSelf->CoreTop__DOT__rf
        [0xaU];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__362__PROF__DIP_model__l63(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__362__PROF__DIP_model__l63\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0xbU] = vlSelf->CoreTop__DOT__rf
        [0xbU];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__363__PROF__DIP_model__l64(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__363__PROF__DIP_model__l64\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0xcU] = vlSelf->CoreTop__DOT__rf
        [0xcU];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__364__PROF__DIP_model__l65(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__364__PROF__DIP_model__l65\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0xdU] = vlSelf->CoreTop__DOT__rf
        [0xdU];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__365__PROF__DIP_model__l66(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__365__PROF__DIP_model__l66\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0xeU] = vlSelf->CoreTop__DOT__rf
        [0xeU];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__366__PROF__DIP_model__l67(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__366__PROF__DIP_model__l67\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0xfU] = vlSelf->CoreTop__DOT__rf
        [0xfU];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__367__PROF__DIP_model__l68(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__367__PROF__DIP_model__l68\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0x10U] = vlSelf->CoreTop__DOT__rf
        [0x10U];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__368__PROF__DIP_model__l69(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__368__PROF__DIP_model__l69\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0x11U] = vlSelf->CoreTop__DOT__rf
        [0x11U];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__369__PROF__DIP_model__l70(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__369__PROF__DIP_model__l70\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0x12U] = vlSelf->CoreTop__DOT__rf
        [0x12U];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__370__PROF__DIP_model__l71(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__370__PROF__DIP_model__l71\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0x13U] = vlSelf->CoreTop__DOT__rf
        [0x13U];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__371__PROF__DIP_model__l72(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__371__PROF__DIP_model__l72\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0x14U] = vlSelf->CoreTop__DOT__rf
        [0x14U];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__372__PROF__DIP_model__l73(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__372__PROF__DIP_model__l73\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0x15U] = vlSelf->CoreTop__DOT__rf
        [0x15U];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__373__PROF__DIP_model__l74(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__373__PROF__DIP_model__l74\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0x16U] = vlSelf->CoreTop__DOT__rf
        [0x16U];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__374__PROF__DIP_model__l75(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__374__PROF__DIP_model__l75\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0x17U] = vlSelf->CoreTop__DOT__rf
        [0x17U];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__375__PROF__DIP_model__l76(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__375__PROF__DIP_model__l76\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0x18U] = vlSelf->CoreTop__DOT__rf
        [0x18U];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__376__PROF__DIP_model__l77(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__376__PROF__DIP_model__l77\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0x19U] = vlSelf->CoreTop__DOT__rf
        [0x19U];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__377__PROF__DIP_model__l78(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__377__PROF__DIP_model__l78\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0x1aU] = vlSelf->CoreTop__DOT__rf
        [0x1aU];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__378__PROF__DIP_model__l79(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__378__PROF__DIP_model__l79\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0x1bU] = vlSelf->CoreTop__DOT__rf
        [0x1bU];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__379__PROF__DIP_model__l80(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__379__PROF__DIP_model__l80\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0x1cU] = vlSelf->CoreTop__DOT__rf
        [0x1cU];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__380__PROF__DIP_model__l81(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__380__PROF__DIP_model__l81\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0x1dU] = vlSelf->CoreTop__DOT__rf
        [0x1dU];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__381__PROF__DIP_model__l82(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__381__PROF__DIP_model__l82\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0x1eU] = vlSelf->CoreTop__DOT__rf
        [0x1eU];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__382__PROF__DIP_model__l83(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__382__PROF__DIP_model__l83\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0x1fU] = vlSelf->CoreTop__DOT__rf
        [0x1fU];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__383__PROF__CoreTop__l4966(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__383__PROF__CoreTop__l4966\n"); );
    // Body
    if (vlSelf->CoreTop__DOT__MEM_io_out_valid) {
        vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfData 
            = vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfData;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__384__PROF__CoreTop__l4963(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__384__PROF__CoreTop__l4963\n"); );
    // Body
    if (vlSelf->CoreTop__DOT__MEM_io_out_valid) {
        vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest 
            = vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__385__PROF__DIP_model__l88(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__385__PROF__DIP_model__l88\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__IN[3U] = vlSelf->CoreTop__DOT__DIP_io_inst_valid_REG;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__386__PROF__CoreTop__l4941(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__386__PROF__CoreTop__l4941\n"); );
    // Body
    vlSelf->CoreTop__DOT__valid_3 = ((~ (IData)(vlSelf->reset)) 
                                     & (IData)(vlSelf->CoreTop__DOT___GEN_47));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__387__PROF__CoreTop__l4945(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__387__PROF__CoreTop__l4945\n"); );
    // Body
    if (vlSelf->CoreTop__DOT__MEM_io_out_valid) {
        vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_inst_valid 
            = vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_signal_inst_valid;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__388__PROF__CoreTop__l4863(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__388__PROF__CoreTop__l4863\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T) {
        vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType 
            = ((0x13U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                ? 0U : ((0x1013U == (0xfc00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                         ? 1U : ((0x6013U == (0x707fU 
                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                  ? 0U : ((0x3003U 
                                           == (0x707fU 
                                               & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                           ? 4U : (
                                                   (0x2003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                    ? 4U
                                                    : 
                                                   ((0x3013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                     ? 5U
                                                     : 
                                                    ((0x1bU 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                      ? 0U
                                                      : 
                                                     ((0x40005013U 
                                                       == 
                                                       (0xfc00707fU 
                                                        & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                       ? 1U
                                                       : 
                                                      ((0x4003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                        ? 4U
                                                        : 
                                                       ((3U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                         ? 4U
                                                         : 
                                                        ((0x4013U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                          ? 0U
                                                          : 
                                                         ((0x7013U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                           ? 0U
                                                           : 
                                                          ((0x5013U 
                                                            == 
                                                            (0xfc00707fU 
                                                             & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                            ? 1U
                                                            : 
                                                           ((0x1003U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                             ? 4U
                                                             : 
                                                            ((0x5003U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                              ? 4U
                                                              : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_239))))))))))))))));
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__389__PROF__DIP_model__l91(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__389__PROF__DIP_model__l91\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__IN[6U] = vlSelf->CoreTop__DOT__DIP_io_is_skip_REG;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__390__PROF__CoreTop__l4960(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__390__PROF__CoreTop__l4960\n"); );
    // Body
    if (vlSelf->CoreTop__DOT__MEM_io_out_valid) {
        vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_skip 
            = ((0xa0000048ULL == vlSelf->CoreTop__DOT__MEM__DOT__addr_temp) 
               | ((0xa00003f8ULL == vlSelf->CoreTop__DOT__MEM__DOT__addr_temp) 
                  | ((0xa0000000ULL <= vlSelf->CoreTop__DOT__MEM__DOT__addr_temp) 
                     & (0xa1200000ULL >= vlSelf->CoreTop__DOT__MEM__DOT__addr_temp))));
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__391__PROF__CoreTop__l1786(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__391__PROF__CoreTop__l1786\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[0U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[1U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][1U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[2U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][2U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[3U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][3U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[4U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][4U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[5U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][5U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[6U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][6U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[7U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][7U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[8U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][8U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[9U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][9U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[0xaU] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0xaU];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[0xbU] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0xbU];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[0xcU] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0xcU];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[0xdU] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0xdU];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[0xeU] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0xeU];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[0xfU] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0xfU];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__392__PROF__CoreTop__l1793(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__392__PROF__CoreTop__l1793\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[0U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[1U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][1U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[2U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][2U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[3U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][3U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[4U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][4U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[5U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][5U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[6U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][6U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[7U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][7U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[8U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][8U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[9U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][9U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[0xaU] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0xaU];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[0xbU] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0xbU];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[0xcU] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0xcU];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[0xdU] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0xdU];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[0xeU] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0xeU];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[0xfU] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0xfU];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__393__PROF__CoreTop__l1800(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__393__PROF__CoreTop__l1800\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_tag_w_data 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_tag_w_addr_pipe_0];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__394__PROF__CoreTop__l1807(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__394__PROF__CoreTop__l1807\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1_tag_w_data 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__395__PROF__CoreTop__l4890(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__395__PROF__CoreTop__l4890\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T) {
        vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm 
            = ((((((8U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                    ? ((((vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                          >> 0x1fU) ? 0xfffffffffffffULL
                          : 0ULL) << 0xcU) | (QData)((IData)(
                                                             (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                              >> 0x14U))))
                    : 0ULL) | ((7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                ? ((((0x80000U & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)
                                      ? 0xfffffffffffULL
                                      : 0ULL) << 0x14U) 
                                   | (QData)((IData)(
                                                     ((0xff000U 
                                                       & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst) 
                                                      | ((0x800U 
                                                          & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                             >> 9U)) 
                                                         | (0x7feU 
                                                            & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                               >> 0x14U)))))))
                                : 0ULL)) | ((3U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                             ? (((QData)((IData)(
                                                                 ((vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                                   >> 0x1fU)
                                                                   ? 0xffffffffU
                                                                   : 0U))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  (0xfffff000U 
                                                                   & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))))
                                             : 0ULL)) 
                | ((9U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                    ? ((((vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                          >> 0x1fU) ? 0xfffffffffffffULL
                          : 0ULL) << 0xcU) | (QData)((IData)(
                                                             ((0xfe0U 
                                                               & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                                  >> 0x14U)) 
                                                              | (0x1fU 
                                                                 & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                                    >> 7U))))))
                    : 0ULL)) | ((0xbU == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                 ? ((((vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                       >> 0x1fU) ? 0x7ffffffffffffULL
                                       : 0ULL) << 0xdU) 
                                    | (QData)((IData)(
                                                      ((0x1000U 
                                                        & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                           >> 0x13U)) 
                                                       | ((0x800U 
                                                           & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                              << 4U)) 
                                                          | ((0x7e0U 
                                                              & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                                 >> 0x14U)) 
                                                             | (0x1eU 
                                                                & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                                   >> 7U))))))))
                                 : 0ULL));
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__396__PROF__CoreTop__l1454(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__396__PROF__CoreTop__l1454\n"); );
    // Body
    vlSelf->CoreTop__DOT__MEM__DOT___addr_temp_T_1 
        = (vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_Imm 
           + vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src1);
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__397__PROF__CoreTop__l3570(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__397__PROF__CoreTop__l3570\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__399__PROF__CoreTop__l2217(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__399__PROF__CoreTop__l2217\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__400__PROF__CoreTop__l2233(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__400__PROF__CoreTop__l2233\n"); );
    // Body
    vlSelf->CoreTop__DOT__ICACHE__DOT__state = vlSelf->__Vdly__CoreTop__DOT__ICACHE__DOT__state;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__403__PROF__CoreTop__l2961(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__403__PROF__CoreTop__l2961\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_data 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_addr_pipe_0];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__405__PROF__CoreTop__l3053(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__405__PROF__CoreTop__l3053\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state 
        = vlSelf->__Vdly__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__412__PROF__CoreTop__l674(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__412__PROF__CoreTop__l674\n"); );
    // Body
    if ((1U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state))) {
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_8[0U] 
            = (((1U & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div[2U])
                 ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[0U]
                 : (IData)((0x7fffffffffffffffULL & 
                            (((QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[1U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[0U])))))) 
               << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_8[1U] 
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
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_8[2U] 
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
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_8[3U] 
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
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_8[4U] 
            = (((1U & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div[2U])
                 ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[3U]
                 : ((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div[1U] 
                     >> 1U) | (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div[2U] 
                               << 0x1fU))) >> 0x1fU);
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_8[0U] 
            = vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[0U];
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_8[1U] 
            = vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[1U];
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_8[2U] 
            = vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[2U];
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_8[3U] 
            = vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[3U];
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_8[4U] = 0U;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__413__PROF__CoreTop__l667(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__413__PROF__CoreTop__l667\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT___S_T_6 
        = ((1U & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div[2U])
            ? (0xfffffffffffffffeULL & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S)
            : (1ULL | (0xfffffffffffffffeULL & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__416__PROF__CoreTop__l496(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__416__PROF__CoreTop__l496\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__437__PROF__CoreTop__l1585(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__437__PROF__CoreTop__l1585\n"); );
    // Body
    vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_signal_inst_valid 
        = ((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_inst_valid) 
           & (IData)(vlSelf->CoreTop__DOT__valid_2));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__442__PROF__CoreTop__l1475(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__442__PROF__CoreTop__l1475\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__443__PROF__CoreTop__l2230(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__443__PROF__CoreTop__l2230\n"); );
    // Body
    vlSelf->CoreTop__DOT__ICACHE__DOT__lru_lru_w_MPORT_addr_pipe_0 
        = (0x1fU & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
                            >> 6U)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__444__PROF__CoreTop__l2793(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__444__PROF__CoreTop__l2793\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_valid_T_4 
        = ((2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
           & (3U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__445__PROF__SRAMTemp__l320(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__445__PROF__SRAMTemp__l320\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMEM_wd_ready = ((0U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_state)) 
                                           | (2U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_state)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__446__PROF__CoreTop__l3582(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__446__PROF__CoreTop__l3582\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_rdata_rep_bits_last 
        = ((0U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_count)) 
           & (2U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__447__PROF__CoreTop__l2528(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__447__PROF__CoreTop__l2528\n"); );
    // Body
    vlSelf->CoreTop__DOT__ARBITER__DOT__state = ((~ (IData)(vlSelf->reset)) 
                                                 & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0) 
                                                    | ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0) 
                                                       | (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT___GEN_55))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__448__PROF__CoreTop__l4922(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__448__PROF__CoreTop__l4922\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T_3) {
        vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_Dnpc 
            = vlSelf->CoreTop__DOT__IF_io_branch_io_dnpc;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__450__PROF__CoreTop__l4896(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__450__PROF__CoreTop__l4896\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T) {
        vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_inst 
            = vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__451__PROF__CoreTop__l506(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__451__PROF__CoreTop__l506\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_out_valid 
        = (0x44U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__452__PROF__CoreTop__l491(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__452__PROF__CoreTop__l491\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT___count_T_5 
        = (0x7fU & ((IData)(2U) + (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__453__PROF__CoreTop__l4916(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__453__PROF__CoreTop__l4916\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T_3) {
        vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_PC 
            = vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__454__PROF__CoreTop__l4875(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__454__PROF__CoreTop__l4875\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T) {
        vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfWen 
            = ((IData)(vlSelf->CoreTop__DOT__valid) 
               & (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_3));
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__455__PROF__CoreTop__l1593(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__455__PROF__CoreTop__l1593\n"); );
    // Body
    vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfWen 
        = ((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_rfWen) 
           & (IData)(vlSelf->CoreTop__DOT__valid_2));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__456__PROF__CoreTop__l1291(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__456__PROF__CoreTop__l1291\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__457__PROF__CoreTop__l1300(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__457__PROF__CoreTop__l1300\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__458__PROF__CoreTop__l1309(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__458__PROF__CoreTop__l1309\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__459__PROF__CoreTop__l4866(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__459__PROF__CoreTop__l4866\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T) {
        vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_inst_valid 
            = (1U & (~ ((0U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_2)) 
                        | ((~ (IData)(vlSelf->CoreTop__DOT__valid)) 
                           | (IData)(vlSelf->CoreTop__DOT__IF_io_flush)))));
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__460__PROF__CoreTop__l1282(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__460__PROF__CoreTop__l1282\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__461__PROF__CoreTop__l4925(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__461__PROF__CoreTop__l4925\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T_3) {
        vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest 
            = vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__462__PROF__CoreTop__l4630(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__462__PROF__CoreTop__l4630\n"); );
    // Body
    vlSelf->CoreTop__DOT__rf_MPORT_en = ((IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_rfWen) 
                                         & (IData)(vlSelf->CoreTop__DOT__valid_3));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__463__PROF__CoreTop__l3593(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__463__PROF__CoreTop__l3593\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_addr_req_bits_ce 
        = (((4U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_fuType)) 
            & (IData)(vlSelf->CoreTop__DOT__valid_2)) 
           & (IData)(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_signal_inst_valid));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__464__PROF__CoreTop__l1526(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__464__PROF__CoreTop__l1526\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__465__PROF__CoreTop__l3574(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__465__PROF__CoreTop__l3574\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__466__PROF__CoreTop__l1987(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__466__PROF__CoreTop__l1987\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_0_result 
        = ((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0
            [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0] 
            & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_in_valid_REG)) 
           & ((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
               >> 0xbU) == vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_tag_w_data));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__467__PROF__CoreTop__l1989(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__467__PROF__CoreTop__l1989\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_1_result 
        = ((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1
            [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_addr_pipe_0] 
            & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_in_valid_REG)) 
           & ((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
               >> 0xbU) == vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1_tag_w_data));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__484__PROF__CoreTop__l3595(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__484__PROF__CoreTop__l3595\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_addr_req_bits_ce) 
           & ((0xa0000000ULL <= vlSelf->CoreTop__DOT__MEM__DOT__addr_temp) 
              & (0xa2000000ULL >= vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__485__PROF__CoreTop__l3573(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__485__PROF__CoreTop__l3573\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__486__PROF__CoreTop__l2795(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__486__PROF__CoreTop__l2795\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wmaskextend_T_3 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wmask) 
           & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_bits_we)
               ? 0xffU : 0U));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__487__PROF__CoreTop__l1992(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__487__PROF__CoreTop__l1992\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__488__PROF__CoreTop__l1991(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__488__PROF__CoreTop__l1991\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_1_result) 
           | (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_0_result));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__489__PROF__CoreTop__l2446(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__489__PROF__CoreTop__l2446\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__490__PROF__CoreTop__l2462(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__490__PROF__CoreTop__l2462\n"); );
    // Body
    vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0 
        = ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)) 
           & (1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__491__PROF__CoreTop__l1259(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__491__PROF__CoreTop__l1259\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfWen 
        = ((IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfWen) 
           & (IData)(vlSelf->CoreTop__DOT__valid_1));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__492__PROF__CoreTop__l1195(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__492__PROF__CoreTop__l1195\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT___T_92 = (0xfffffffffffffff7ULL 
                                            & vlSelf->CoreTop__DOT__EX__DOT__mstatus);
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__493__PROF__CoreTop__l1196(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__493__PROF__CoreTop__l1196\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT___T_112 = (8ULL | vlSelf->CoreTop__DOT__EX__DOT__mstatus);
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__494__PROF__CoreTop__l4838(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__494__PROF__CoreTop__l4838\n"); );
    // Body
    vlSelf->CoreTop__DOT__valid = ((~ (IData)(vlSelf->reset)) 
                                   & ((~ (IData)(vlSelf->CoreTop__DOT__IF_io_flush)) 
                                      & (IData)(vlSelf->CoreTop__DOT___GEN_1)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__495__PROF__CoreTop__l873(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__495__PROF__CoreTop__l873\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT____VdfgTmp_h1a4c5317__0 
        = ((IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_inst_valid) 
           & (IData)(vlSelf->CoreTop__DOT__valid_1));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__496__PROF__CoreTop__l933(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__496__PROF__CoreTop__l933\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__497__PROF__CoreTop__l4893(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__497__PROF__CoreTop__l4893\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T) {
        vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC 
            = vlSelf->CoreTop__DOT__ID_io_in_bits_r_PC;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__498__PROF__CoreTop__l4878(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__498__PROF__CoreTop__l4878\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T) {
        vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype 
            = vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_2;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__499__PROF__CoreTop__l4881(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__499__PROF__CoreTop__l4881\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T) {
        vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest 
            = (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                        >> 7U));
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__500__PROF__CoreTop__l4802(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__500__PROF__CoreTop__l4802\n"); );
    // Body
    vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_valid 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)
            ? (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)
            : (2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__501__PROF__CoreTop__l3567(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__501__PROF__CoreTop__l3567\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_valid 
        = ((~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)) 
           & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_addr_req_bits_ce));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__502__PROF__CoreTop__l3590(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__502__PROF__CoreTop__l3590\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_addr_req_valid 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready) 
           & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_addr_req_bits_ce));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__503__PROF__CoreTop__l2742(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__503__PROF__CoreTop__l2742\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_24 
        = ((3U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state))
            ? ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)
                ? (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state)
                : 0U) : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__504__PROF__CoreTop__l4796(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__504__PROF__CoreTop__l4796\n"); );
    // Body
    vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_bits_addr 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)
            ? vlSelf->CoreTop__DOT__MEM__DOT__addr_temp
            : ((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state))
                ? vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_addr_reg
                : 0ULL));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__505__PROF__CoreTop__l4799(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__505__PROF__CoreTop__l4799\n"); );
    // Body
    vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_bits_addr 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)
            ? vlSelf->CoreTop__DOT__MEM__DOT__addr_temp
            : ((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state))
                ? vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_addr_reg
                : 0ULL));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__506__PROF__CoreTop__l2730(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__506__PROF__CoreTop__l2730\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___T_8 
        = ((~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)) 
           & (3U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__507__PROF__CoreTop__l4806(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__507__PROF__CoreTop__l4806\n"); );
    // Body
    vlSelf->CoreTop__DOT__ARBITER_io_in1_wb_ready = 
        (1U & ((~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)) 
               | (3U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__508__PROF__CoreTop__l4805(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__508__PROF__CoreTop__l4805\n"); );
    // Body
    vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_last 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)
            ? (2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state))
            : (7U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count_write)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__509__PROF__CoreTop__l4804(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__509__PROF__CoreTop__l4804\n"); );
    // Body
    vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_wstrb 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)
            ? (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wmask)
            : 0xffU);
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__510__PROF__CoreTop__l4795(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__510__PROF__CoreTop__l4795\n"); );
    // Body
    vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_valid 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)
            ? (1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__read_state))
            : (1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__511__PROF__CoreTop__l4798(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__511__PROF__CoreTop__l4798\n"); );
    // Body
    vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_valid 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)
            ? (1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state))
            : (1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__512__PROF__CoreTop__l4803(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__512__PROF__CoreTop__l4803\n"); );
    // Body
    vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_data 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)
            ? vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata
            : (((QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0U]))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__513__PROF__CoreTop__l2825(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__513__PROF__CoreTop__l2825\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__514__PROF__CoreTop__l2916(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__514__PROF__CoreTop__l2916\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___Cache_data_io_write_bus_valid_T_3 
        = ((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
           & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit) 
              & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_bits_we)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__515__PROF__CoreTop__l2789(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__515__PROF__CoreTop__l2789\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_bits_rdata_T_1 
        = ((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
           & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__516__PROF__CoreTop__l2462(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__516__PROF__CoreTop__l2462\n"); );
    // Body
    vlSelf->CoreTop__DOT__ARBITER__DOT___GEN_98 = ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0) 
                                                   | (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__523__PROF__CoreTop__l2731(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__523__PROF__CoreTop__l2731\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_10 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___T_8)
            ? 0U : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__524__PROF__CoreTop__l2484(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__524__PROF__CoreTop__l2484\n"); );
    // Body
    vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0 
        = ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)) 
           & ((IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_valid) 
              | (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_valid)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__525__PROF__CoreTop__l2890(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__525__PROF__CoreTop__l2890\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__526__PROF__CoreTop__l2898(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__526__PROF__CoreTop__l2898\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__527__PROF__CoreTop__l1790(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__527__PROF__CoreTop__l1790\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_en 
        = ((3U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state)) 
           | (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___Cache_data_io_write_bus_valid_T_3));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__528__PROF__CoreTop__l3005(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__528__PROF__CoreTop__l3005\n"); );
    // Body
    vlSelf->__VdfgTmp_h5a5a8c61__0 = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_valid_T_4) 
                                      | (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___Cache_data_io_write_bus_valid_T_3));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__529__PROF__CoreTop__l2984(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__529__PROF__CoreTop__l2984\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0_MPORT_4_en 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_bits_we) 
           & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_bits_rdata_T_1) 
              | (3U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__530__PROF__CoreTop__l3009(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__530__PROF__CoreTop__l3009\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_waymask 
        = (((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_bits_rdata_T_1) 
            & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_bits_we))
            ? (((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_1_result) 
                << 1U) | (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_0_result))
            : ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_r)
                ? 2U : 1U));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__531__PROF__CoreTop__l4844(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__531__PROF__CoreTop__l4844\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T_1) {
        vlSelf->CoreTop__DOT__ID_io_in_bits_r_PC = vlSelf->io_pc;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__532__PROF__CoreTop__l1173(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__532__PROF__CoreTop__l1173\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT___branch_result_T_1 
        = (vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm 
           + vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC);
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__533__PROF__CoreTop__l1198(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__533__PROF__CoreTop__l1198\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__534__PROF__CoreTop__l872(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__534__PROF__CoreTop__l872\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__is_mul = (((0x78U 
                                               == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                                              | (7U 
                                                 == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) 
                                             & (IData)(vlSelf->CoreTop__DOT__EX__DOT____VdfgTmp_h1a4c5317__0));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__535__PROF__CoreTop__l887(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__535__PROF__CoreTop__l887\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT___is_divw_T_2 = (
                                                   (0x79U 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                                                   | (0x10U 
                                                      == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__536__PROF__CoreTop__l885(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__536__PROF__CoreTop__l885\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT____VdfgTmp_h08208b49__0 
        = ((0x7aU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
           | (0xdU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__537__PROF__CoreTop__l1278(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__537__PROF__CoreTop__l1278\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_flow_div_signed 
        = (((0x43U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
            | (0x79U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) 
           | ((0x12U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
              | (0x7aU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__538__PROF__CoreTop__l4847(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__538__PROF__CoreTop__l4847\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T_1) {
        vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
            = ((IData)(vlSelf->CoreTop__DOT__IF_io_flush)
                ? 0U : ((1U & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                       >> 2U))) ? (IData)(
                                                          (vlSelf->CoreTop__DOT__IF_io_cache_req_rdata_rep_bits_rdata 
                                                           >> 0x20U))
                         : (IData)(vlSelf->CoreTop__DOT__IF_io_cache_req_rdata_rep_bits_rdata)));
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__539__PROF__CoreTop__l2485(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__539__PROF__CoreTop__l2485\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__540__PROF__CoreTop__l2487(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__540__PROF__CoreTop__l2487\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__541__PROF__SRAMTemp__l248(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__541__PROF__SRAMTemp__l248\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__542__PROF__CoreTop__l4761(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__542__PROF__CoreTop__l4761\n"); );
    // Body
    vlSelf->CoreTop__DOT__ICACHE_io_out_rdata_rep_valid 
        = ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)) 
           & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)
               ? (2U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state))
               : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state) 
                  & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r) 
                     & (2U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state))))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__543__PROF__CoreTop__l4791(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__543__PROF__CoreTop__l4791\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMEM_wd_last = ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)
                                           ? (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_last)
                                           : ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)) 
                                              & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state) 
                                                 & ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)) 
                                                    & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_last)))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__544__PROF__CoreTop__l2493(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__544__PROF__CoreTop__l2493\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__545__PROF__CoreTop__l2495(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__545__PROF__CoreTop__l2495\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__546__PROF__CoreTop__l2489(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__546__PROF__CoreTop__l2489\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__548__PROF__CoreTop__l2892(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__548__PROF__CoreTop__l2892\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__549__PROF__CoreTop__l2900(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__549__PROF__CoreTop__l2900\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__550__PROF__CoreTop__l1788(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__550__PROF__CoreTop__l1788\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_addr 
        = ((IData)(vlSelf->__VdfgTmp_h5a5a8c61__0) ? 
           (0x1fU & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                             >> 6U))) : 0U);
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__551__PROF__CoreTop__l1801(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__551__PROF__CoreTop__l1801\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_MPORT_1_data 
        = ((IData)(vlSelf->__VdfgTmp_h5a5a8c61__0) ? 
           (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
            >> 0xbU) : 0ULL);
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__553__PROF__CoreTop__l625(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__553__PROF__CoreTop__l625\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_valid 
        = ((0x44U != (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count)) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__is_mul));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__554__PROF__CoreTop__l1277(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__554__PROF__CoreTop__l1277\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__555__PROF__CoreTop__l888(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__555__PROF__CoreTop__l888\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__is_divw = ((IData)(vlSelf->CoreTop__DOT__EX__DOT___is_divw_T_2) 
                                              | (IData)(vlSelf->CoreTop__DOT__EX__DOT____VdfgTmp_h08208b49__0));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__558__PROF__CoreTop__l2102(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__558__PROF__CoreTop__l2102\n"); );
    // Body
    vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_17 = (((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_rdata_rep_bits_last) 
                                                   & (IData)(vlSelf->CoreTop__DOT__ICACHE_io_out_rdata_rep_valid))
                                                   ? 3U
                                                   : (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state));
}

extern const VlUnpacked<CData/*0:0*/, 64> VCoreTop__ConstPool__TABLE_h1d315e1c_0;
extern const VlUnpacked<CData/*1:0*/, 64> VCoreTop__ConstPool__TABLE_h2941df74_0;

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__559__PROF__SRAMTemp__l270(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__559__PROF__SRAMTemp__l270\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__560__PROF__CoreTop__l3289(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__560__PROF__CoreTop__l3289\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT___GEN_8 
        = ((((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready) 
             & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_ready)) 
            & (2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state)))
            ? 3U : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__561__PROF__CoreTop__l3583(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__561__PROF__CoreTop__l3583\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_wdata_req_ready 
        = ((~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)) 
           & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_ready));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__562__PROF__CoreTop__l3585(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__562__PROF__CoreTop__l3585\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_wb_valid 
        = ((~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)) 
           & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wb_valid));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__563__PROF__CoreTop__l3611(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__563__PROF__CoreTop__l3611\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_out_wb_valid 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready) 
           & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wb_valid));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__564__PROF__CoreTop__l3579(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__564__PROF__CoreTop__l3579\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_rdata_rep_valid 
        = ((~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)) 
           & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_rdata_rep_valid));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__565__PROF__CoreTop__l3293(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__565__PROF__CoreTop__l3293\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_valid 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready) 
           & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_rdata_rep_valid));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__568__PROF__CoreTop__l2896(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__568__PROF__CoreTop__l2896\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__569__PROF__CoreTop__l375(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__569__PROF__CoreTop__l375\n"); );
    // Body
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_363 
        = ((0x501bU == (0xfc00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
           | ((0x2013U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
              | ((0x6003U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                 | ((0x3bU == (0xfe00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                    | ((0x40000033U == (0xfe00707fU 
                                        & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                       | ((0x33U == (0xfe00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                          | ((0x7033U == (0xfe00707fU 
                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                             | ((0x3033U == (0xfe00707fU 
                                             & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                | ((0x103bU == (0xfe00707fU 
                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                   | ((0x6033U == (0xfe00707fU 
                                                   & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                      | ((0x200003bU 
                                          == (0xfe00707fU 
                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                         | ((0x200403bU 
                                             == (0xfe00707fU 
                                                 & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                            | ((0x200603bU 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                               | ((0x4000003bU 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                  | ((0x2033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                     | ((0x4000503bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                        | ((0x503bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                           | ((0x4033U 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                              | ((0x200703bU 
                                                                  == 
                                                                  (0xfe00707fU 
                                                                   & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                 | ((0x1033U 
                                                                     == 
                                                                     (0xfe00707fU 
                                                                      & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                    | ((0x2007033U 
                                                                        == 
                                                                        (0xfe00707fU 
                                                                         & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                       | ((0x200503bU 
                                                                           == 
                                                                           (0xfe00707fU 
                                                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                          | ((0x2006033U 
                                                                              == 
                                                                              (0xfe00707fU 
                                                                               & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                             | ((0x5033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                | ((0x2005033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                | ((0x2004033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                | ((0x40005033U 
                                                                                == 
                                                                                (0xfc00707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                | ((0x2000033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                | ((0x17U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                | ((0x37U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                | ((0x3023U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                & ((0x1023U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                & ((0x23U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                & ((0x2023U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                & ((0x100073U 
                                                                                != vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst) 
                                                                                & ((0x6fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                | ((0x67U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                | ((0x63U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                & ((0x1063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                & ((0x5063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                & ((0x4063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                & ((0x6063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                & ((0x7063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                & ((0x2073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                | (0x1073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))))))))))))))))))))))))))))))))))))))))))))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__570__PROF__CoreTop__l255(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__570__PROF__CoreTop__l255\n"); );
    // Body
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_209 
        = ((0x17U == (0x7fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
            ? 0U : ((0x37U == (0x7fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                     ? 0U : ((0x3023U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                              ? 4U : ((0x1023U == (0x707fU 
                                                   & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                       ? 4U : ((0x23U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                ? 4U
                                                : (
                                                   (0x2023U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                    ? 4U
                                                    : 
                                                   ((0x100073U 
                                                     == vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)
                                                     ? 0U
                                                     : 
                                                    ((0x6fU 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                      ? 3U
                                                      : 
                                                     ((0x67U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                       ? 3U
                                                       : 
                                                      ((0x63U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                        ? 2U
                                                        : 
                                                       ((0x1063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                         ? 2U
                                                         : 
                                                        ((0x5063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                          ? 2U
                                                          : 
                                                         ((0x4063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                           ? 2U
                                                           : 
                                                          ((0x6063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                            ? 2U
                                                            : 
                                                           ((0x7063U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                             ? 2U
                                                             : 0U)))))))))))))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__571__PROF__CoreTop__l193(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__571__PROF__CoreTop__l193\n"); );
    // Body
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_144 
        = ((0x3023U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
            ? 9U : ((0x1023U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                     ? 9U : ((0x23U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                              ? 9U : ((0x2023U == (0x707fU 
                                                   & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                       ? 9U : ((0x100073U 
                                                == vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)
                                                ? 0U
                                                : (
                                                   (0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                    ? 7U
                                                    : 
                                                   ((0x67U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                     ? 8U
                                                     : 
                                                    ((0x63U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                      ? 0xbU
                                                      : 
                                                     ((0x1063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                       ? 0xbU
                                                       : 
                                                      ((0x5063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                        ? 0xbU
                                                        : 
                                                       ((0x4063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                         ? 0xbU
                                                         : 
                                                        ((0x6063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                          ? 0xbU
                                                          : 
                                                         ((0x7063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                           ? 0xbU
                                                           : 
                                                          ((0x2073U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                            ? 8U
                                                            : 
                                                           ((0x1073U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                             ? 8U
                                                             : 0U)))))))))))))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__572__PROF__CoreTop__l314(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__572__PROF__CoreTop__l314\n"); );
    // Body
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_268 
        = ((0x23U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
            ? 0x74U : ((0x2023U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                        ? 0x77U : ((0x100073U == vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)
                                    ? 0x42U : ((0x6fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                ? 0x19U
                                                : (
                                                   (0x67U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                    ? 0x48U
                                                    : 
                                                   ((0x63U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                     ? 0x6bU
                                                     : 
                                                    ((0x1063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                      ? 0x6cU
                                                      : 
                                                     ((0x5063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                       ? 0x76U
                                                       : 
                                                      ((0x4063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                        ? 0x7bU
                                                        : 
                                                       ((0x6063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                         ? 0xbU
                                                         : 
                                                        ((0x7063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                          ? 0xcU
                                                          : 
                                                         ((0x2073U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                           ? 0x15U
                                                           : 
                                                          ((0x1073U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                            ? 0x16U
                                                            : 
                                                           ((0x73U 
                                                             == vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)
                                                             ? 0x17U
                                                             : 
                                                            ((0x30200073U 
                                                              == vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)
                                                              ? 0x18U
                                                              : 0U)))))))))))))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__573__PROF__CoreTop__l31(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__573__PROF__CoreTop__l31\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->CoreTop__DOT__IF__DOT__temp = 0x80000000ULL;
    } else if (((IData)(vlSelf->CoreTop__DOT__IF_io_branch_io_is_jump) 
                | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__branch_flag) 
                   & (IData)(vlSelf->CoreTop__DOT__EX__DOT____VdfgTmp_hcef3c28f__0)))) {
        vlSelf->CoreTop__DOT__IF__DOT__temp = vlSelf->CoreTop__DOT__IF_io_branch_io_dnpc;
    } else if (((IData)(vlSelf->CoreTop__DOT__IF_io_cache_req_addr_req_valid) 
                & (IData)(vlSelf->CoreTop__DOT__IF_io_cache_req_rdata_rep_valid))) {
        vlSelf->CoreTop__DOT__IF__DOT__temp = vlSelf->CoreTop__DOT__IF__DOT___temp_T_3;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__574__PROF__CoreTop__l2743(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__574__PROF__CoreTop__l2743\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_30 
        = (((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_wdata_req_ready) 
            & (7U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count_write)))
            ? 3U : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__575__PROF__CoreTop__l2763(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__575__PROF__CoreTop__l2763\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT____VdfgTmp_h9d851aea__0 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_wdata_req_ready) 
           & (2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__576__PROF__CoreTop__l2745(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__576__PROF__CoreTop__l2745\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_32 
        = ((3U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state))
            ? ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_wb_valid)
                ? 0U : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state))
            : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__577__PROF__CoreTop__l2737(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__577__PROF__CoreTop__l2737\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__578__PROF__CoreTop__l3292(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__578__PROF__CoreTop__l3292\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT___GEN_10 
        = ((3U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state))
            ? (((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_out_wb_valid) 
                & (3U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state)))
                ? 0U : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state))
            : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__579__PROF__CoreTop__l2740(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__579__PROF__CoreTop__l2740\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_22 
        = (((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_rdata_rep_bits_last) 
            & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_rdata_rep_valid))
            ? 3U : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__581__PROF__CoreTop__l3288(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__581__PROF__CoreTop__l3288\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT___GEN_2 
        = (((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_valid) 
            & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready) 
               & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_rdata_rep_bits_last)))
            ? 0U : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__read_state));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__582__PROF__CoreTop__l1580(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__582__PROF__CoreTop__l1580\n"); );
    // Body
    vlSelf->CoreTop__DOT__MEM__DOT___io_out_valid_T_6 
        = ((IData)(vlSelf->CoreTop__DOT__valid_2) & 
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__585__PROF__CoreTop__l2912(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__585__PROF__CoreTop__l2912\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__586__PROF__CoreTop__l382(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__586__PROF__CoreTop__l382\n"); );
    // Body
    vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_3 = 
        ((0x13U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
         | ((0x1013U == (0xfc00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
            | ((0x6013U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
               | ((0x3003U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                  | ((0x2003U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                     | ((0x3013U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                        | ((0x1bU == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                           | ((0x40005013U == (0xfc00707fU 
                                               & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                              | ((0x4003U == (0x707fU 
                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                 | ((3U == (0x707fU 
                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                    | ((0x4013U == 
                                        (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                       | ((0x7013U 
                                           == (0x707fU 
                                               & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                          | ((0x5013U 
                                              == (0xfc00707fU 
                                                  & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                             | ((0x1003U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                | ((0x5003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                   | ((0x101bU 
                                                       == 
                                                       (0xfc00707fU 
                                                        & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                      | ((0x4000501bU 
                                                          == 
                                                          (0xfc00707fU 
                                                           & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                         | (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_363))))))))))))))))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__587__PROF__CoreTop__l270(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__587__PROF__CoreTop__l270\n"); );
    // Body
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_224 
        = ((0x4000003bU == (0xfe00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
            ? 0U : ((0x2033U == (0xfe00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                     ? 5U : ((0x4000503bU == (0xfe00707fU 
                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                              ? 1U : ((0x503bU == (0xfe00707fU 
                                                   & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                       ? 1U : ((0x4033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                ? 0U
                                                : (
                                                   (0x200703bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                    ? 0U
                                                    : 
                                                   ((0x1033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                     ? 1U
                                                     : 
                                                    ((0x2007033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                      ? 0U
                                                      : 
                                                     ((0x200503bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                       ? 0U
                                                       : 
                                                      ((0x2006033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                        ? 0U
                                                        : 
                                                       ((0x5033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                         ? 1U
                                                         : 
                                                        ((0x2005033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                          ? 0U
                                                          : 
                                                         ((0x2004033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                           ? 0U
                                                           : 
                                                          ((0x40005033U 
                                                            == 
                                                            (0xfc00707fU 
                                                             & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                            ? 0U
                                                            : 
                                                           ((0x2000033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                             ? 0U
                                                             : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_209))))))))))))))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__588__PROF__CoreTop__l208(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__588__PROF__CoreTop__l208\n"); );
    // Body
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_159 
        = ((0x4000503bU == (0xfe00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
            ? 5U : ((0x503bU == (0xfe00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                     ? 5U : ((0x4033U == (0xfe00707fU 
                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                              ? 5U : ((0x200703bU == 
                                       (0xfe00707fU 
                                        & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                       ? 5U : ((0x1033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                ? 5U
                                                : (
                                                   (0x2007033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                    ? 5U
                                                    : 
                                                   ((0x200503bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                     ? 5U
                                                     : 
                                                    ((0x2006033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                      ? 5U
                                                      : 
                                                     ((0x5033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                       ? 5U
                                                       : 
                                                      ((0x2005033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                        ? 5U
                                                        : 
                                                       ((0x2004033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                         ? 5U
                                                         : 
                                                        ((0x40005033U 
                                                          == 
                                                          (0xfc00707fU 
                                                           & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                          ? 5U
                                                          : 
                                                         ((0x2000033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                           ? 5U
                                                           : 
                                                          ((0x17U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                            ? 3U
                                                            : 
                                                           ((0x37U 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                             ? 3U
                                                             : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_144))))))))))))))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__589__PROF__CoreTop__l329(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__589__PROF__CoreTop__l329\n"); );
    // Body
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_283 
        = ((0x4033U == (0xfe00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
            ? 0x72U : ((0x200703bU == (0xfe00707fU 
                                       & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                        ? 0xdU : ((0x1033U == (0xfe00707fU 
                                               & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                   ? 0x41U : ((0x2007033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                               ? 0xfU
                                               : ((0x200503bU 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                   ? 0x10U
                                                   : 
                                                  ((0x2006033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                    ? 0x12U
                                                    : 
                                                   ((0x5033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                     ? 0x75U
                                                     : 
                                                    ((0x2005033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                      ? 0x13U
                                                      : 
                                                     ((0x2004033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                       ? 0x43U
                                                       : 
                                                      ((0x40005033U 
                                                        == 
                                                        (0xfc00707fU 
                                                         & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                        ? 0x14U
                                                        : 
                                                       ((0x2000033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                         ? 7U
                                                         : 
                                                        ((0x17U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                          ? 0x40U
                                                          : 
                                                         ((0x37U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                           ? 0x1aU
                                                           : 
                                                          ((0x3023U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                            ? 0x46U
                                                            : 
                                                           ((0x1023U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                             ? 0x70U
                                                             : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_268))))))))))))))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__591__PROF__CoreTop__l2766(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__591__PROF__CoreTop__l2766\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_89 
        = (0xfU & ((3U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state))
                    ? ((7U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count_write))
                        ? 0U : ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count_write) 
                                + (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT____VdfgTmp_h9d851aea__0)))
                    : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count_write)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__592__PROF__CoreTop__l2767(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__592__PROF__CoreTop__l2767\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__593__PROF__CoreTop__l1583(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__593__PROF__CoreTop__l1583\n"); );
    // Body
    vlSelf->CoreTop__DOT__MEM_io_out_valid = (1U & 
                                              (~ ((~ (IData)(vlSelf->CoreTop__DOT__valid_2)) 
                                                  | (IData)(vlSelf->CoreTop__DOT__MEM__DOT___io_out_valid_T_6))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__594__PROF__CoreTop__l4115(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__594__PROF__CoreTop__l4115\n"); );
    // Body
    vlSelf->CoreTop__DOT___T_3 = ((~ (IData)(vlSelf->CoreTop__DOT__MEM__DOT___io_out_valid_T_6)) 
                                  & ((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_valid)) 
                                     & ((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__div_io_in_valid)) 
                                        & (IData)(vlSelf->CoreTop__DOT__valid_1))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__595__PROF__CoreTop__l1247(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__595__PROF__CoreTop__l1247\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT____VdfgTmp_hcef3c28f__0 
        = ((IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_inst_valid) 
           & ((~ (IData)(vlSelf->CoreTop__DOT__MEM__DOT___io_out_valid_T_6)) 
              & (IData)(vlSelf->CoreTop__DOT__valid_1)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__596__PROF__CoreTop__l24(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__596__PROF__CoreTop__l24\n"); );
    // Body
    vlSelf->CoreTop__DOT__IF_io_cache_req_addr_req_valid 
        = (1U & ((~ (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_valid) 
                      | (IData)(vlSelf->CoreTop__DOT__EX__DOT__div_io_in_valid)) 
                     & (IData)(vlSelf->CoreTop__DOT__valid_1))) 
                 & (~ (IData)(vlSelf->CoreTop__DOT__MEM__DOT___io_out_valid_T_6))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__598__PROF__CoreTop__l1787(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__598__PROF__CoreTop__l1787\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__599__PROF__CoreTop__l285(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__599__PROF__CoreTop__l285\n"); );
    // Body
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_239 
        = ((0x101bU == (0xfc00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
            ? 1U : ((0x4000501bU == (0xfc00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                     ? 1U : ((0x501bU == (0xfc00707fU 
                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                              ? 1U : ((0x2013U == (0x707fU 
                                                   & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                       ? 5U : ((0x6003U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                ? 4U
                                                : (
                                                   (0x3bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                    ? 0U
                                                    : 
                                                   ((0x40000033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                     ? 0U
                                                     : 
                                                    ((0x33U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                      ? 0U
                                                      : 
                                                     ((0x7033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                       ? 0U
                                                       : 
                                                      ((0x3033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                        ? 5U
                                                        : 
                                                       ((0x103bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                         ? 1U
                                                         : 
                                                        ((0x6033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                          ? 0U
                                                          : 
                                                         ((0x200003bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                           ? 0U
                                                           : 
                                                          ((0x200403bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                            ? 0U
                                                            : 
                                                           ((0x200603bU 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                             ? 0U
                                                             : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_224))))))))))))))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__600__PROF__CoreTop__l223(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__600__PROF__CoreTop__l223\n"); );
    // Body
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_174 
        = ((0x501bU == (0xfc00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
            ? 8U : ((0x2013U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                     ? 8U : ((0x6003U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                              ? 8U : ((0x3bU == (0xfe00707fU 
                                                 & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                       ? 5U : ((0x40000033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                ? 5U
                                                : (
                                                   (0x33U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                    ? 5U
                                                    : 
                                                   ((0x7033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                     ? 5U
                                                     : 
                                                    ((0x3033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                      ? 5U
                                                      : 
                                                     ((0x103bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                       ? 5U
                                                       : 
                                                      ((0x6033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                        ? 5U
                                                        : 
                                                       ((0x200003bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                         ? 5U
                                                         : 
                                                        ((0x200403bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                          ? 5U
                                                          : 
                                                         ((0x200603bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                           ? 5U
                                                           : 
                                                          ((0x4000003bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                            ? 5U
                                                            : 
                                                           ((0x2033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                             ? 5U
                                                             : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_159))))))))))))))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__601__PROF__CoreTop__l344(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__601__PROF__CoreTop__l344\n"); );
    // Body
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_298 
        = ((0x6003U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
            ? 0x11U : ((0x3bU == (0xfe00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                        ? 0x68U : ((0x40000033U == 
                                    (0xfe00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                    ? 0x69U : ((0x33U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                ? 0x40U
                                                : (
                                                   (0x7033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                    ? 0x71U
                                                    : 
                                                   ((0x3033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                     ? 0x6aU
                                                     : 
                                                    ((0x103bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                      ? 0x73U
                                                      : 
                                                     ((0x6033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                       ? 0x44U
                                                       : 
                                                      ((0x200003bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                        ? 0x78U
                                                        : 
                                                       ((0x200403bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                         ? 0x79U
                                                         : 
                                                        ((0x200603bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                          ? 0x7aU
                                                          : 
                                                         ((0x4000003bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                           ? 1U
                                                           : 
                                                          ((0x2033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                            ? 2U
                                                            : 
                                                           ((0x4000503bU 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                             ? 9U
                                                             : 
                                                            ((0x503bU 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                              ? 0xaU
                                                              : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_283))))))))))))))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__602__PROF__CoreTop__l4631(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__602__PROF__CoreTop__l4631\n"); );
    // Body
    vlSelf->io_pc = vlSelf->CoreTop__DOT__IF__DOT__temp;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__603__PROF__CoreTop__l22(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__603__PROF__CoreTop__l22\n"); );
    // Body
    vlSelf->CoreTop__DOT__IF__DOT___temp_T_3 = (4ULL 
                                                + vlSelf->CoreTop__DOT__IF__DOT__temp);
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__604__PROF__CoreTop__l1788(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__604__PROF__CoreTop__l1788\n"); );
    // Body
    vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_addr 
        = ((3U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state))
            ? (0x1fU & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                >> 6U))) : 0U);
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__605__PROF__CoreTop__l1801(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__605__PROF__CoreTop__l1801\n"); );
    // Body
    vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_MPORT_1_data 
        = ((3U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state))
            ? (vlSelf->CoreTop__DOT__IF__DOT__temp 
               >> 0xbU) : 0ULL);
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__606__PROF__CoreTop__l1987(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__606__PROF__CoreTop__l1987\n"); );
    // Body
    vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_0_result 
        = ((vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0] 
            & (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_in_valid_REG)) 
           & ((vlSelf->CoreTop__DOT__IF__DOT__temp 
               >> 0xbU) == vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0
              [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0]));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__607__PROF__CoreTop__l1989(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__607__PROF__CoreTop__l1989\n"); );
    // Body
    vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_1_result 
        = ((vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0] 
            & (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_in_valid_REG)) 
           & ((vlSelf->CoreTop__DOT__IF__DOT__temp 
               >> 0xbU) == vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1
              [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0]));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__608__PROF__CoreTop__l4155(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__608__PROF__CoreTop__l4155\n"); );
    // Body
    vlSelf->CoreTop__DOT___GEN_47 = vlSelf->CoreTop__DOT__MEM_io_out_valid;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__609__PROF__CoreTop__l4138(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__609__PROF__CoreTop__l4138\n"); );
    // Body
    vlSelf->CoreTop__DOT___GEN_25 = ((IData)(vlSelf->CoreTop__DOT___T_3) 
                                     | ((~ (IData)(vlSelf->CoreTop__DOT__MEM_io_out_valid)) 
                                        & (IData)(vlSelf->CoreTop__DOT__valid_2)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__610__PROF__CoreTop__l4636(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__610__PROF__CoreTop__l4636\n"); );
    // Body
    vlSelf->CoreTop__DOT__IF_io_branch_io_is_jump = 
        ((3U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType)) 
         & (IData)(vlSelf->CoreTop__DOT__EX__DOT____VdfgTmp_hcef3c28f__0));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__611__PROF__CoreTop__l2104(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__611__PROF__CoreTop__l2104\n"); );
    // Body
    vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_19 = ((3U 
                                                   == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state))
                                                   ? 
                                                  ((IData)(vlSelf->CoreTop__DOT__IF_io_cache_req_addr_req_valid)
                                                    ? 0U
                                                    : (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state))
                                                   : (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__612__PROF__CoreTop__l2095(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__612__PROF__CoreTop__l2095\n"); );
    // Body
    vlSelf->CoreTop__DOT__ICACHE__DOT___T_5 = ((IData)(vlSelf->CoreTop__DOT__IF_io_cache_req_addr_req_valid) 
                                               & (3U 
                                                  == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__613__PROF__CoreTop__l4108(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__613__PROF__CoreTop__l4108\n"); );
    // Body
    vlSelf->CoreTop__DOT___T = ((IData)(vlSelf->CoreTop__DOT__IF_io_cache_req_addr_req_valid) 
                                & (IData)(vlSelf->CoreTop__DOT__valid));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__616__PROF__CoreTop__l238(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__616__PROF__CoreTop__l238\n"); );
    // Body
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_189 
        = ((0x6013U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
            ? 8U : ((0x3003U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                     ? 8U : ((0x2003U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                              ? 8U : ((0x3013U == (0x707fU 
                                                   & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                       ? 8U : ((0x1bU 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                ? 8U
                                                : (
                                                   (0x40005013U 
                                                    == 
                                                    (0xfc00707fU 
                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                    ? 8U
                                                    : 
                                                   ((0x4003U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                     ? 8U
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                      ? 8U
                                                      : 
                                                     ((0x4013U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                       ? 8U
                                                       : 
                                                      ((0x7013U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                        ? 8U
                                                        : 
                                                       ((0x5013U 
                                                         == 
                                                         (0xfc00707fU 
                                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                         ? 8U
                                                         : 
                                                        ((0x1003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                          ? 8U
                                                          : 
                                                         ((0x5003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                           ? 8U
                                                           : 
                                                          ((0x101bU 
                                                            == 
                                                            (0xfc00707fU 
                                                             & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                            ? 8U
                                                            : 
                                                           ((0x4000501bU 
                                                             == 
                                                             (0xfc00707fU 
                                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                             ? 8U
                                                             : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_174))))))))))))))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__617__PROF__CoreTop__l359(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__617__PROF__CoreTop__l359\n"); );
    // Body
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_313 
        = ((0x2003U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
            ? 0x47U : ((0x3013U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                        ? 0x6aU : ((0x1bU == (0x707fU 
                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                    ? 0x6dU : ((0x40005013U 
                                                == 
                                                (0xfc00707fU 
                                                 & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                ? 0x6eU
                                                : (
                                                   (0x4003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                    ? 0x6fU
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                     ? 0xeU
                                                     : 
                                                    ((0x4013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                      ? 0x72U
                                                      : 
                                                     ((0x7013U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                       ? 0x71U
                                                       : 
                                                      ((0x5013U 
                                                        == 
                                                        (0xfc00707fU 
                                                         & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                        ? 0x75U
                                                        : 
                                                       ((0x1003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                         ? 3U
                                                         : 
                                                        ((0x5003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                          ? 4U
                                                          : 
                                                         ((0x101bU 
                                                           == 
                                                           (0xfc00707fU 
                                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                           ? 5U
                                                           : 
                                                          ((0x4000501bU 
                                                            == 
                                                            (0xfc00707fU 
                                                             & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                            ? 6U
                                                            : 
                                                           ((0x501bU 
                                                             == 
                                                             (0xfc00707fU 
                                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                             ? 8U
                                                             : 
                                                            ((0x2013U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                              ? 2U
                                                              : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_298))))))))))))))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__618__PROF__CoreTop__l1992(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__618__PROF__CoreTop__l1992\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__619__PROF__CoreTop__l1991(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__619__PROF__CoreTop__l1991\n"); );
    // Body
    vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit 
        = ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_1_result) 
           | (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_0_result));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__620__PROF__CoreTop__l2100(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__620__PROF__CoreTop__l2100\n"); );
    // Body
    vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_10 = ((2U 
                                                   == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state))
                                                   ? 
                                                  ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT___T_5)
                                                    ? 0U
                                                    : (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state))
                                                   : 
                                                  ((3U 
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
                                                     : (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__621__PROF__CoreTop__l4119(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__621__PROF__CoreTop__l4119\n"); );
    // Body
    vlSelf->CoreTop__DOT___GEN_6 = ((IData)(vlSelf->CoreTop__DOT___T) 
                                    | ((~ (IData)(vlSelf->CoreTop__DOT___T_3)) 
                                       & (IData)(vlSelf->CoreTop__DOT__valid_1)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__631__PROF__CoreTop__l240(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__631__PROF__CoreTop__l240\n"); );
    // Body
    vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0 = 
        ((0x13U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
          ? 8U : ((0x1013U == (0xfc00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                   ? 8U : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_189)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__632__PROF__CoreTop__l363(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__632__PROF__CoreTop__l363\n"); );
    // Body
    vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_2 = 
        ((0x13U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
          ? 0x40U : ((0x1013U == (0xfc00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                      ? 0x41U : ((0x6013U == (0x707fU 
                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                  ? 0x44U : ((0x3003U 
                                              == (0x707fU 
                                                  & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                              ? 0x45U
                                              : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_313)))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__633__PROF__CoreTop__l2136(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__633__PROF__CoreTop__l2136\n"); );
    // Body
    vlSelf->CoreTop__DOT__ICACHE__DOT___io_in_rdata_rep_bits_rdata_T_1 
        = ((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
           & (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__645__PROF__CoreTop__l4639(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__645__PROF__CoreTop__l4639\n"); );
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

void VCoreTop___024root___nba_sequent__TOP__439__PROF__DIP_model__l93(VCoreTop___024root* vlSelf);

void VCoreTop___024root___eval_nba(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VCoreTop___024root___nba_sequent__TOP__0__PROF__CoreTop__l2233(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        VCoreTop___024root___nba_sequent__TOP__1__PROF__CoreTop__l720(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__2__PROF__CoreTop__l2217(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__3__PROF__CoreTop__l2220(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__4__PROF__CoreTop__l2223(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__5__PROF__CoreTop__l2226(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__6__PROF__CoreTop__l512(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__7__PROF__CoreTop__l1838(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__8__PROF__CoreTop__l1845(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__9__PROF__CoreTop__l1866(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__10__PROF__CoreTop__l1873(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__11__PROF__CoreTop__l1859(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__12__PROF__CoreTop__l1852(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__13__PROF__CoreTop__l4835(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__14__PROF__CoreTop__l1838(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__15__PROF__CoreTop__l1845(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__16__PROF__CoreTop__l1866(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__17__PROF__CoreTop__l1873(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__18__PROF__CoreTop__l1859(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__19__PROF__CoreTop__l1852(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__20__PROF__CoreTop__l3087(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__21__PROF__CoreTop__l3072(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__22__PROF__CoreTop__l3308(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__23__PROF__CoreTop__l3321(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__24__PROF__CoreTop__l3046(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__25__PROF__CoreTop__l3039(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__26__PROF__CoreTop__l3053(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__27__PROF__CoreTop__l3023(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__28__PROF__CoreTop__l3026(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__29__PROF__CoreTop__l3029(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__30__PROF__CoreTop__l3032(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__31__PROF__SRAMTemp__l223(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__32__PROF__SRAMTemp__l224(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__33__PROF__CoreTop__l2252(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__34__PROF__SRAMTemp__l222(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__102__PROF__CoreTop__l2233(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__103__PROF__CoreTop__l2216(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__104__PROF__CoreTop__l1837(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__105__PROF__CoreTop__l1844(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__106__PROF__CoreTop__l1865(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__107__PROF__CoreTop__l1872(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__108__PROF__CoreTop__l1858(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__109__PROF__CoreTop__l1851(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__110__PROF__CoreTop__l4834(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__111__PROF__CoreTop__l1837(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__112__PROF__CoreTop__l1844(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__113__PROF__CoreTop__l1865(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__114__PROF__CoreTop__l1872(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__115__PROF__CoreTop__l1858(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__116__PROF__CoreTop__l1851(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__117__PROF__CoreTop__l3086(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__118__PROF__CoreTop__l3071(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__119__PROF__CoreTop__l3307(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__120__PROF__CoreTop__l3320(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__121__PROF__CoreTop__l3045(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__122__PROF__CoreTop__l3038(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__123__PROF__CoreTop__l3053(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__124__PROF__CoreTop__l3022(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__125__PROF__SRAMTemp__l221(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__126__PROF__SRAMTemp__l221(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__127__PROF__CoreTop__l2251(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__128__PROF__SRAMTemp__l221(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__129__PROF__CoreTop__l1868(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__130__PROF__CoreTop__l1861(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__131__PROF__CoreTop__l1875(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__132__PROF__CoreTop__l1840(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__133__PROF__CoreTop__l1847(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__134__PROF__CoreTop__l1854(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__135__PROF__CoreTop__l3041(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__136__PROF__CoreTop__l3048(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__137__PROF__CoreTop__l3034(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__138__PROF__CoreTop__l1868(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__139__PROF__CoreTop__l1861(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__140__PROF__CoreTop__l1875(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__141__PROF__CoreTop__l1840(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__142__PROF__CoreTop__l1847(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__143__PROF__CoreTop__l1854(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__144__PROF__CoreTop__l2228(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__145__PROF__CoreTop__l4971(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__146__PROF__CoreTop__l4975(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__147__PROF__CoreTop__l2266(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__148__PROF__CoreTop__l732(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__149__PROF__CoreTop__l1863(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__150__PROF__CoreTop__l2293(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__151__PROF__CoreTop__l718(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__152__PROF__CoreTop__l4851(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__153__PROF__CoreTop__l2275(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__154__PROF__CoreTop__l709(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__155__PROF__CoreTop__l4860(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__156__PROF__CoreTop__l708(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__157__PROF__CoreTop__l4954(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__158__PROF__CoreTop__l4857(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__159__PROF__CoreTop__l511(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__160__PROF__CoreTop__l4872(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__161__PROF__CoreTop__l4974(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__162__PROF__CoreTop__l4928(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__163__PROF__CoreTop__l4869(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__164__PROF__CoreTop__l4948(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__165__PROF__CoreTop__l1327(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__166__PROF__CoreTop__l1318(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__167__PROF__CoreTop__l1339(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__168__PROF__CoreTop__l1343(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__169__PROF__CoreTop__l1337(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__170__PROF__CoreTop__l4970(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__171__PROF__CoreTop__l1341(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__172__PROF__CoreTop__l3128(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__173__PROF__CoreTop__l3101(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__174__PROF__CoreTop__l4934(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__175__PROF__CoreTop__l4887(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__176__PROF__CoreTop__l4884(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__177__PROF__CoreTop__l4973(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__178__PROF__CoreTop__l3148(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__179__PROF__CoreTop__l3159(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__180__PROF__CoreTop__l4907(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__181__PROF__CoreTop__l4904(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__182__PROF__CoreTop__l3036(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__183__PROF__CoreTop__l4972(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__184__PROF__CoreTop__l3110(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__185__PROF__CoreTop__l1849(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__186__PROF__CoreTop__l1877(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__187__PROF__CoreTop__l1870(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__188__PROF__CoreTop__l1856(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__189__PROF__CoreTop__l1863(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__190__PROF__CoreTop__l3139(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__191__PROF__CoreTop__l4900(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__192__PROF__CoreTop__l4931(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__193__PROF__CoreTop__l4937(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__194__PROF__CoreTop__l4913(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__195__PROF__CoreTop__l1838(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__196__PROF__CoreTop__l1845(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__197__PROF__CoreTop__l1866(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__198__PROF__CoreTop__l1873(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__199__PROF__CoreTop__l1859(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__200__PROF__CoreTop__l1852(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__202__PROF__CoreTop__l1838(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__203__PROF__CoreTop__l1845(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__204__PROF__CoreTop__l1866(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__205__PROF__CoreTop__l1873(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__206__PROF__CoreTop__l1859(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__207__PROF__CoreTop__l1852(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__208__PROF__CoreTop__l3087(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__209__PROF__CoreTop__l3072(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__210__PROF__CoreTop__l3308(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__211__PROF__CoreTop__l3321(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__212__PROF__CoreTop__l3046(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__213__PROF__CoreTop__l3039(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__215__PROF__CoreTop__l3023(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__217__PROF__SRAMTemp__l223(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__218__PROF__SRAMTemp__l224(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__220__PROF__CoreTop__l2252(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__221__PROF__SRAMTemp__l222(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__252__PROF__CoreTop__l720(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__258__PROF__CoreTop__l512(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__285__PROF__CoreTop__l4835(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__311__PROF__CoreTop__l2284(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__312__PROF__CoreTop__l3296(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__313__PROF__CoreTop__l3298(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__314__PROF__CoreTop__l3050(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__315__PROF__CoreTop__l3119(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__316__PROF__SRAMTemp__l213(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__317__PROF__SRAMTemp__l212(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__318__PROF__CoreTop__l2533(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__319__PROF__DIP_model__l85(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__320__PROF__DIP_model__l89(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__321__PROF__DIP_model__l90(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__322__PROF__CoreTop__l4957(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__323__PROF__CoreTop__l1787(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__324__PROF__CoreTop__l654(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__325__PROF__CoreTop__l679(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__326__PROF__CoreTop__l681(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__327__PROF__CoreTop__l2198(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__328__PROF__CoreTop__l651(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__329__PROF__CoreTop__l658(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__330__PROF__CoreTop__l655(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__331__PROF__CoreTop__l657(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__332__PROF__CoreTop__l680(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__333__PROF__CoreTop__l682(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__334__PROF__CoreTop__l4632(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__335__PROF__CoreTop__l4919(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__336__PROF__CoreTop__l460(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__337__PROF__CoreTop__l537(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__338__PROF__DIP_model__l86(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__339__PROF__DIP_model__l87(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__340__PROF__CoreTop__l4951(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__341__PROF__CoreTop__l4910(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__342__PROF__CSR_DIFF__l11(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__343__PROF__CoreTop__l1338(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__344__PROF__CSR_DIFF__l12(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__345__PROF__CoreTop__l1342(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__346__PROF__CSR_DIFF__l13(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__347__PROF__CoreTop__l1336(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__348__PROF__CoreTop__l4969(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__349__PROF__CSR_DIFF__l10(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__350__PROF__CoreTop__l1340(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__351__PROF__DIP_model__l52(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__352__PROF__DIP_model__l53(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__353__PROF__DIP_model__l54(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__354__PROF__DIP_model__l55(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__355__PROF__DIP_model__l56(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__356__PROF__DIP_model__l57(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__357__PROF__DIP_model__l58(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__358__PROF__DIP_model__l59(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__359__PROF__DIP_model__l60(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__360__PROF__DIP_model__l61(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__361__PROF__DIP_model__l62(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__362__PROF__DIP_model__l63(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__363__PROF__DIP_model__l64(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__364__PROF__DIP_model__l65(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__365__PROF__DIP_model__l66(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__366__PROF__DIP_model__l67(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__367__PROF__DIP_model__l68(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__368__PROF__DIP_model__l69(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__369__PROF__DIP_model__l70(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__370__PROF__DIP_model__l71(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__371__PROF__DIP_model__l72(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__372__PROF__DIP_model__l73(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__373__PROF__DIP_model__l74(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__374__PROF__DIP_model__l75(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__375__PROF__DIP_model__l76(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__376__PROF__DIP_model__l77(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__377__PROF__DIP_model__l78(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__378__PROF__DIP_model__l79(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__379__PROF__DIP_model__l80(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__380__PROF__DIP_model__l81(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__381__PROF__DIP_model__l82(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__382__PROF__DIP_model__l83(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__383__PROF__CoreTop__l4966(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__384__PROF__CoreTop__l4963(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__385__PROF__DIP_model__l88(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__386__PROF__CoreTop__l4941(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__387__PROF__CoreTop__l4945(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__388__PROF__CoreTop__l4863(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__389__PROF__DIP_model__l91(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__390__PROF__CoreTop__l4960(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__391__PROF__CoreTop__l1786(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__392__PROF__CoreTop__l1793(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__393__PROF__CoreTop__l1800(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__394__PROF__CoreTop__l1807(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__395__PROF__CoreTop__l4890(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__396__PROF__CoreTop__l1454(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__397__PROF__CoreTop__l3570(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__399__PROF__CoreTop__l2217(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__400__PROF__CoreTop__l2233(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__403__PROF__CoreTop__l2961(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__405__PROF__CoreTop__l3053(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__412__PROF__CoreTop__l674(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__413__PROF__CoreTop__l667(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__416__PROF__CoreTop__l496(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__437__PROF__CoreTop__l1585(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__439__PROF__DIP_model__l93(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__442__PROF__CoreTop__l1475(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__443__PROF__CoreTop__l2230(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__444__PROF__CoreTop__l2793(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__445__PROF__SRAMTemp__l320(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__446__PROF__CoreTop__l3582(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__447__PROF__CoreTop__l2528(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__448__PROF__CoreTop__l4922(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__0__PROF__CoreTop__l703(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__450__PROF__CoreTop__l4896(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__451__PROF__CoreTop__l506(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__452__PROF__CoreTop__l491(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__453__PROF__CoreTop__l4916(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__454__PROF__CoreTop__l4875(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__455__PROF__CoreTop__l1593(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__456__PROF__CoreTop__l1291(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__457__PROF__CoreTop__l1300(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__458__PROF__CoreTop__l1309(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__459__PROF__CoreTop__l4866(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__460__PROF__CoreTop__l1282(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__461__PROF__CoreTop__l4925(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__462__PROF__CoreTop__l4630(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__463__PROF__CoreTop__l3593(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__464__PROF__CoreTop__l1526(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__465__PROF__CoreTop__l3574(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__466__PROF__CoreTop__l1987(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__467__PROF__CoreTop__l1989(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__484__PROF__CoreTop__l3595(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__485__PROF__CoreTop__l3573(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__486__PROF__CoreTop__l2795(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__487__PROF__CoreTop__l1992(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__488__PROF__CoreTop__l1991(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__489__PROF__CoreTop__l2446(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__490__PROF__CoreTop__l2462(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__491__PROF__CoreTop__l1259(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__492__PROF__CoreTop__l1195(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__493__PROF__CoreTop__l1196(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__494__PROF__CoreTop__l4838(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__495__PROF__CoreTop__l873(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__496__PROF__CoreTop__l933(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__497__PROF__CoreTop__l4893(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__498__PROF__CoreTop__l4878(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__499__PROF__CoreTop__l4881(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__500__PROF__CoreTop__l4802(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__501__PROF__CoreTop__l3567(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__502__PROF__CoreTop__l3590(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__503__PROF__CoreTop__l2742(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__504__PROF__CoreTop__l4796(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__505__PROF__CoreTop__l4799(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__506__PROF__CoreTop__l2730(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__507__PROF__CoreTop__l4806(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__508__PROF__CoreTop__l4805(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__509__PROF__CoreTop__l4804(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__510__PROF__CoreTop__l4795(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__511__PROF__CoreTop__l4798(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__512__PROF__CoreTop__l4803(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__513__PROF__CoreTop__l2825(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__514__PROF__CoreTop__l2916(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__515__PROF__CoreTop__l2789(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__516__PROF__CoreTop__l2462(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__523__PROF__CoreTop__l2731(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__524__PROF__CoreTop__l2484(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__525__PROF__CoreTop__l2890(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__526__PROF__CoreTop__l2898(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__527__PROF__CoreTop__l1790(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__528__PROF__CoreTop__l3005(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__529__PROF__CoreTop__l2984(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__530__PROF__CoreTop__l3009(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__531__PROF__CoreTop__l4844(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__532__PROF__CoreTop__l1173(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__533__PROF__CoreTop__l1198(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__534__PROF__CoreTop__l872(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__535__PROF__CoreTop__l887(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__536__PROF__CoreTop__l885(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__537__PROF__CoreTop__l1278(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__538__PROF__CoreTop__l4847(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__539__PROF__CoreTop__l2485(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__540__PROF__CoreTop__l2487(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__541__PROF__SRAMTemp__l248(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__542__PROF__CoreTop__l4761(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__543__PROF__CoreTop__l4791(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__544__PROF__CoreTop__l2493(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__545__PROF__CoreTop__l2495(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__546__PROF__CoreTop__l2489(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__1__PROF__SRAMTemp__l301(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__548__PROF__CoreTop__l2892(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__549__PROF__CoreTop__l2900(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__550__PROF__CoreTop__l1788(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__551__PROF__CoreTop__l1801(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__553__PROF__CoreTop__l625(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__554__PROF__CoreTop__l1277(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__555__PROF__CoreTop__l888(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__558__PROF__CoreTop__l2102(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__559__PROF__SRAMTemp__l270(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__560__PROF__CoreTop__l3289(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__561__PROF__CoreTop__l3583(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__562__PROF__CoreTop__l3585(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__563__PROF__CoreTop__l3611(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__564__PROF__CoreTop__l3579(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__565__PROF__CoreTop__l3293(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__2__PROF__CoreTop__l2112(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__4__PROF__CoreTop__l4722(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__568__PROF__CoreTop__l2896(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__569__PROF__CoreTop__l375(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__570__PROF__CoreTop__l255(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__571__PROF__CoreTop__l193(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__572__PROF__CoreTop__l314(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__573__PROF__CoreTop__l31(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__574__PROF__CoreTop__l2743(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__575__PROF__CoreTop__l2763(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__576__PROF__CoreTop__l2745(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__577__PROF__CoreTop__l2737(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__578__PROF__CoreTop__l3292(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__579__PROF__CoreTop__l2740(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__3__PROF__CoreTop__l2757(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__581__PROF__CoreTop__l3288(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__582__PROF__CoreTop__l1580(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__5__PROF__CoreTop__l1558(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__6__PROF__CoreTop__l1566(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__585__PROF__CoreTop__l2912(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__586__PROF__CoreTop__l382(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__587__PROF__CoreTop__l270(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__588__PROF__CoreTop__l208(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__589__PROF__CoreTop__l329(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__591__PROF__CoreTop__l2766(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__592__PROF__CoreTop__l2767(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__593__PROF__CoreTop__l1583(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__594__PROF__CoreTop__l4115(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__595__PROF__CoreTop__l1247(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__596__PROF__CoreTop__l24(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__7__PROF__CoreTop__l1594(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__598__PROF__CoreTop__l1787(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__599__PROF__CoreTop__l285(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__600__PROF__CoreTop__l223(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__601__PROF__CoreTop__l344(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__602__PROF__CoreTop__l4631(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__603__PROF__CoreTop__l22(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__604__PROF__CoreTop__l1788(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__605__PROF__CoreTop__l1801(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__606__PROF__CoreTop__l1987(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__607__PROF__CoreTop__l1989(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__608__PROF__CoreTop__l4155(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__609__PROF__CoreTop__l4138(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__610__PROF__CoreTop__l4636(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__611__PROF__CoreTop__l2104(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__612__PROF__CoreTop__l2095(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__613__PROF__CoreTop__l4108(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__8__PROF__CoreTop__l900(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__9__PROF__CoreTop__l898(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__616__PROF__CoreTop__l238(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__617__PROF__CoreTop__l359(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__618__PROF__CoreTop__l1992(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__619__PROF__CoreTop__l1991(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__620__PROF__CoreTop__l2100(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__621__PROF__CoreTop__l4119(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__10__PROF__CoreTop__l1280(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__11__PROF__CoreTop__l1125(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__12__PROF__CoreTop__l1129(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__13__PROF__CoreTop__l907(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__14__PROF__CoreTop__l1158(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__15__PROF__CoreTop__l1161(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__16__PROF__CoreTop__l902(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__17__PROF__CoreTop__l934(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__18__PROF__CoreTop__l1279(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__631__PROF__CoreTop__l240(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__632__PROF__CoreTop__l363(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__633__PROF__CoreTop__l2136(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__19__PROF__CoreTop__l1125(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__20__PROF__CoreTop__l1129(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__21__PROF__CoreTop__l1194(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__22__PROF__CoreTop__l905(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__23__PROF__CoreTop__l990(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__24__PROF__CoreTop__l1010(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__25__PROF__CoreTop__l1030(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__26__PROF__CoreTop__l1050(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__27__PROF__CoreTop__l1077(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__28__PROF__CoreTop__l1097(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__29__PROF__CoreTop__l683(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__645__PROF__CoreTop__l4639(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__30__PROF__CoreTop__l1142(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__31__PROF__CoreTop__l1200(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__32__PROF__CoreTop__l4641(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__33__PROF__CoreTop__l1102(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__34__PROF__CoreTop__l1101(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__35__PROF__CoreTop__l1105(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__36__PROF__CoreTop__l1099(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__37__PROF__CoreTop__l1098(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__38__PROF__CoreTop__l1107(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__39__PROF__CoreTop__l705(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__40__PROF__CoreTop__l706(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__41__PROF__CoreTop__l4637(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__42__PROF__CoreTop__l4638(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__43__PROF__CoreTop__l915(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__44__PROF__CoreTop__l918(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__45__PROF__CoreTop__l4111(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__46__PROF__CoreTop__l1075(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__47__PROF__CoreTop__l4112(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__48__PROF__CoreTop__l1260(vlSelf);
    }
}

void VCoreTop___024root___eval_triggers__ico(VCoreTop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VCoreTop___024root___dump_triggers__ico(VCoreTop___024root* vlSelf);
#endif  // VL_DEBUG
void VCoreTop___024root___eval_triggers__act(VCoreTop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VCoreTop___024root___dump_triggers__act(VCoreTop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VCoreTop___024root___dump_triggers__nba(VCoreTop___024root* vlSelf);
#endif  // VL_DEBUG

void VCoreTop___024root___eval(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        VCoreTop___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                VCoreTop___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("vsrc/CoreTop.v", 3615, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            VCoreTop___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            VCoreTop___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VCoreTop___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("vsrc/CoreTop.v", 3615, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VCoreTop___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VCoreTop___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("vsrc/CoreTop.v", 3615, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VCoreTop___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VCoreTop___024root___eval_debug_assertions(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
