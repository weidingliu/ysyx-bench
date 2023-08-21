// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCoreTop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VCoreTop___024root.h"

VL_INLINE_OPT void VCoreTop___024root___ico_sequent__TOP__0__PROF__CoreTop__l930(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___ico_sequent__TOP__0__PROF__CoreTop__l930\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___GEN_19 
        = ((IData)(vlSelf->reset) ? 0U : ((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__NewReq)
                                           ? (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__value)
                                           : ((1U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__state))
                                               ? ((0x3fU 
                                                   <= (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__cntShift))
                                                   ? 0x3fU
                                                   : (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__cntShift))
                                               : (0x3fU 
                                                  & ((2U 
                                                      == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__state))
                                                      ? (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__value)
                                                      : 
                                                     ((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__value) 
                                                      + 
                                                      (3U 
                                                       == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__state))))))));
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

VL_INLINE_OPT void VCoreTop___024root___ico_sequent__TOP__3__PROF__CoreTop__l2759(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___ico_sequent__TOP__3__PROF__CoreTop__l2759\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___ico_sequent__TOP__4__PROF__CoreTop__l5224(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___ico_sequent__TOP__4__PROF__CoreTop__l5224\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___ico_sequent__TOP__5__PROF__CoreTop__l1551(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___ico_sequent__TOP__5__PROF__CoreTop__l1551\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___ico_sequent__TOP__6__PROF__CoreTop__l1559(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___ico_sequent__TOP__6__PROF__CoreTop__l1559\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___ico_sequent__TOP__7__PROF__CoreTop__l1589(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___ico_sequent__TOP__7__PROF__CoreTop__l1589\n"); );
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
        VCoreTop___024root___ico_sequent__TOP__0__PROF__CoreTop__l930(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        VCoreTop___024root___ico_sequent__TOP__1__PROF__SRAMTemp__l301(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__2__PROF__CoreTop__l2112(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__3__PROF__CoreTop__l2759(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__4__PROF__CoreTop__l5224(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__5__PROF__CoreTop__l1551(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__6__PROF__CoreTop__l1559(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__7__PROF__CoreTop__l1589(vlSelf);
    }
}

void VCoreTop___024root___eval_act(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___eval_act\n"); );
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__0__PROF__CoreTop__l1840(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__0__PROF__CoreTop__l1840\n"); );
    // Body
    vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0 = 0U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__1__PROF__CoreTop__l1847(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__1__PROF__CoreTop__l1847\n"); );
    // Body
    vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0 = 0U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__2__PROF__CoreTop__l936(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__2__PROF__CoreTop__l936\n"); );
    // Body
    vlSelf->__Vdly__CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__state 
        = vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__state;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__3__PROF__CoreTop__l2235(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__3__PROF__CoreTop__l2235\n"); );
    // Body
    vlSelf->__Vdly__CoreTop__DOT__ICACHE__DOT__state 
        = vlSelf->CoreTop__DOT__ICACHE__DOT__state;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__4__PROF__CoreTop__l1868(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__4__PROF__CoreTop__l1868\n"); );
    // Body
    vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0__v0 = 0U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__5__PROF__CoreTop__l1875(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__5__PROF__CoreTop__l1875\n"); );
    // Body
    vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1__v0 = 0U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__6__PROF__CoreTop__l1861(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__6__PROF__CoreTop__l1861\n"); );
    // Body
    vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1__v0 = 0U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__7__PROF__CoreTop__l1854(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__7__PROF__CoreTop__l1854\n"); );
    // Body
    vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0__v0 = 0U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__8__PROF__CoreTop__l540(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__8__PROF__CoreTop__l540\n"); );
    // Body
    vlSelf->__Vdly__CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U] 
        = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U];
    vlSelf->__Vdly__CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[1U] 
        = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[1U];
    vlSelf->__Vdly__CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[2U] 
        = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[2U];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__9__PROF__CoreTop__l3048(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__9__PROF__CoreTop__l3048\n"); );
    // Body
    vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1__v0 = 0U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__10__PROF__CoreTop__l3041(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__10__PROF__CoreTop__l3041\n"); );
    // Body
    vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0__v0 = 0U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__11__PROF__CoreTop__l5344(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__11__PROF__CoreTop__l5344\n"); );
    // Body
    vlSelf->__Vdlyvset__CoreTop__DOT__rf__v0 = 0U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__12__PROF__CoreTop__l3089(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__12__PROF__CoreTop__l3089\n"); );
    // Body
    vlSelf->__Vdly__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__13__PROF__CoreTop__l3074(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__13__PROF__CoreTop__l3074\n"); );
    // Body
    vlSelf->__Vdly__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__14__PROF__CoreTop__l3310(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__14__PROF__CoreTop__l3310\n"); );
    // Body
    vlSelf->__Vdly__CoreTop__DOT__MMIO__DOT__birdge__DOT__read_state 
        = vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__read_state;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__15__PROF__CoreTop__l3323(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__15__PROF__CoreTop__l3323\n"); );
    // Body
    vlSelf->__Vdly__CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state 
        = vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__16__PROF__CoreTop__l3025(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__16__PROF__CoreTop__l3025\n"); );
    // Body
    vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru__v0 = 0U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__17__PROF__CoreTop__l3028(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__17__PROF__CoreTop__l3028\n"); );
    // Body
    vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru__v1 = 0U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__18__PROF__CoreTop__l3031(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__18__PROF__CoreTop__l3031\n"); );
    // Body
    vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru__v2 = 0U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__19__PROF__CoreTop__l3034(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__19__PROF__CoreTop__l3034\n"); );
    // Body
    vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru__v3 = 0U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__20__PROF__CoreTop__l3055(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__20__PROF__CoreTop__l3055\n"); );
    // Body
    vlSelf->__Vdly__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__21__PROF__CoreTop__l1840(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__21__PROF__CoreTop__l1840\n"); );
    // Body
    vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0 = 0U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__22__PROF__CoreTop__l1847(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__22__PROF__CoreTop__l1847\n"); );
    // Body
    vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0 = 0U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__23__PROF__CoreTop__l1868(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__23__PROF__CoreTop__l1868\n"); );
    // Body
    vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0__v0 = 0U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__24__PROF__CoreTop__l1875(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__24__PROF__CoreTop__l1875\n"); );
    // Body
    vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1__v0 = 0U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__25__PROF__CoreTop__l1861(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__25__PROF__CoreTop__l1861\n"); );
    // Body
    vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1__v0 = 0U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__26__PROF__CoreTop__l1854(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__26__PROF__CoreTop__l1854\n"); );
    // Body
    vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0__v0 = 0U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__27__PROF__SRAMTemp__l223(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__27__PROF__SRAMTemp__l223\n"); );
    // Body
    vlSelf->__Vdly__CoreTop__DOT__MMEM__DOT__read_addr_buffer 
        = vlSelf->CoreTop__DOT__MMEM__DOT__read_addr_buffer;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__28__PROF__SRAMTemp__l224(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__28__PROF__SRAMTemp__l224\n"); );
    // Body
    vlSelf->__Vdly__CoreTop__DOT__MMEM__DOT__write_addr_buffer 
        = vlSelf->CoreTop__DOT__MMEM__DOT__write_addr_buffer;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__29__PROF__SRAMTemp__l222(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__29__PROF__SRAMTemp__l222\n"); );
    // Body
    vlSelf->__Vdly__CoreTop__DOT__MMEM__DOT__read_count 
        = vlSelf->CoreTop__DOT__MMEM__DOT__read_count;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__30__PROF__CoreTop__l2254(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__30__PROF__CoreTop__l2254\n"); );
    // Body
    vlSelf->__Vdly__CoreTop__DOT__ICACHE__DOT__read_state 
        = vlSelf->CoreTop__DOT__ICACHE__DOT__read_state;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__31__PROF__CoreTop__l2219(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__31__PROF__CoreTop__l2219\n"); );
    // Body
    vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__lru__v0 = 0U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__32__PROF__CoreTop__l2222(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__32__PROF__CoreTop__l2222\n"); );
    // Body
    vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__lru__v1 = 0U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__33__PROF__CoreTop__l2225(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__33__PROF__CoreTop__l2225\n"); );
    // Body
    vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__lru__v2 = 0U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__34__PROF__CoreTop__l2228(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__34__PROF__CoreTop__l2228\n"); );
    // Body
    vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__lru__v3 = 0U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__158__PROF__CoreTop__l1839(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__158__PROF__CoreTop__l1839\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__159__PROF__CoreTop__l1846(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__159__PROF__CoreTop__l1846\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__160__PROF__CoreTop__l2235(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__160__PROF__CoreTop__l2235\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__161__PROF__CoreTop__l1867(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__161__PROF__CoreTop__l1867\n"); );
    // Body
    if (((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_en) 
         & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_waymask))) {
        vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0__v0 = 1U;
        vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0__v0 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_addr;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__162__PROF__CoreTop__l1874(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__162__PROF__CoreTop__l1874\n"); );
    // Body
    if (((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_en) 
         & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_waymask) 
            >> 1U))) {
        vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1__v0 = 1U;
        vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1__v0 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_addr;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__163__PROF__CoreTop__l1860(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__163__PROF__CoreTop__l1860\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__164__PROF__CoreTop__l1853(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__164__PROF__CoreTop__l1853\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__165__PROF__CoreTop__l3047(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__165__PROF__CoreTop__l3047\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__166__PROF__CoreTop__l3040(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__166__PROF__CoreTop__l3040\n"); );
    // Body
    if (((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0_MPORT_4_en) 
         & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_waymask))) {
        vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0__v0 = 1U;
        vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0__v0 
            = (0x1fU & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                >> 6U)));
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__167__PROF__CoreTop__l5343(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__167__PROF__CoreTop__l5343\n"); );
    // Body
    if (vlSelf->CoreTop__DOT__rf_MPORT_en) {
        vlSelf->__Vdlyvval__CoreTop__DOT__rf__v0 = 
            ((0U == (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest))
              ? 0ULL : vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfData);
        vlSelf->__Vdlyvset__CoreTop__DOT__rf__v0 = 1U;
        vlSelf->__Vdlyvdim0__CoreTop__DOT__rf__v0 = vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__168__PROF__CoreTop__l3088(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__168__PROF__CoreTop__l3088\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__169__PROF__CoreTop__l3073(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__169__PROF__CoreTop__l3073\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__170__PROF__CoreTop__l3309(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__170__PROF__CoreTop__l3309\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__171__PROF__CoreTop__l3322(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__171__PROF__CoreTop__l3322\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__172__PROF__CoreTop__l3024(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__172__PROF__CoreTop__l3024\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__173__PROF__CoreTop__l3055(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__173__PROF__CoreTop__l3055\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__174__PROF__CoreTop__l1839(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__174__PROF__CoreTop__l1839\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__175__PROF__CoreTop__l1846(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__175__PROF__CoreTop__l1846\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__176__PROF__CoreTop__l1867(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__176__PROF__CoreTop__l1867\n"); );
    // Body
    if (((3U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state)) 
         & (~ (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r)))) {
        vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0__v0 = 1U;
        vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0__v0 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_addr;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__177__PROF__CoreTop__l1874(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__177__PROF__CoreTop__l1874\n"); );
    // Body
    if (((3U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state)) 
         & (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r))) {
        vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1__v0 = 1U;
        vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1__v0 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_addr;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__178__PROF__CoreTop__l1860(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__178__PROF__CoreTop__l1860\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__179__PROF__CoreTop__l1853(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__179__PROF__CoreTop__l1853\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__180__PROF__SRAMTemp__l221(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__180__PROF__SRAMTemp__l221\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__181__PROF__SRAMTemp__l221(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__181__PROF__SRAMTemp__l221\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__182__PROF__SRAMTemp__l221(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__182__PROF__SRAMTemp__l221\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__183__PROF__CoreTop__l2253(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__183__PROF__CoreTop__l2253\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__184__PROF__CoreTop__l2218(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__184__PROF__CoreTop__l2218\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__185__PROF__CoreTop__l1870(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__185__PROF__CoreTop__l1870\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_en_pipe_0 = 1U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__186__PROF__CoreTop__l1863(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__186__PROF__CoreTop__l1863\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1_tag_w_en_pipe_0 = 1U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__187__PROF__CoreTop__l1877(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__187__PROF__CoreTop__l1877\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_en_pipe_0 = 1U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__188__PROF__CoreTop__l1842(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__188__PROF__CoreTop__l1842\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_en_pipe_0 = 1U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__189__PROF__CoreTop__l1849(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__189__PROF__CoreTop__l1849\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_en_pipe_0 = 1U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__190__PROF__CoreTop__l1856(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__190__PROF__CoreTop__l1856\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_tag_w_en_pipe_0 = 1U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__191__PROF__CoreTop__l3043(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__191__PROF__CoreTop__l3043\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0_dirt_w_en_pipe_0 = 1U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__192__PROF__CoreTop__l3050(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__192__PROF__CoreTop__l3050\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1_dirt_w_en_pipe_0 = 1U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__193__PROF__CoreTop__l3036(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__193__PROF__CoreTop__l3036\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_en_pipe_0 = 1U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__194__PROF__CoreTop__l1870(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__194__PROF__CoreTop__l1870\n"); );
    // Body
    vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_en_pipe_0 = 1U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__195__PROF__CoreTop__l1863(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__195__PROF__CoreTop__l1863\n"); );
    // Body
    vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_en_pipe_0 = 1U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__196__PROF__CoreTop__l1877(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__196__PROF__CoreTop__l1877\n"); );
    // Body
    vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_en_pipe_0 = 1U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__197__PROF__CoreTop__l1842(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__197__PROF__CoreTop__l1842\n"); );
    // Body
    vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_en_pipe_0 = 1U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__198__PROF__CoreTop__l1849(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__198__PROF__CoreTop__l1849\n"); );
    // Body
    vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_en_pipe_0 = 1U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__199__PROF__CoreTop__l1856(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__199__PROF__CoreTop__l1856\n"); );
    // Body
    vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_tag_w_en_pipe_0 = 1U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__200__PROF__CoreTop__l2230(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__200__PROF__CoreTop__l2230\n"); );
    // Body
    vlSelf->CoreTop__DOT__ICACHE__DOT__lru_lru_w_MPORT_en_pipe_0 = 1U;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__201__PROF__CoreTop__l5838(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__201__PROF__CoreTop__l5838\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP_io_inst_REG = vlSelf->io_inst;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__202__PROF__CoreTop__l1844(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__202__PROF__CoreTop__l1844\n"); );
    // Body
    vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0 
        = (0x1fU & (IData)((vlSelf->io_pc >> 6U)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__203__PROF__CoreTop__l1851(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__203__PROF__CoreTop__l1851\n"); );
    // Body
    vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0 
        = (0x1fU & (IData)((vlSelf->io_pc >> 6U)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__204__PROF__CoreTop__l5769(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__204__PROF__CoreTop__l5769\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T_8) {
        vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfData 
            = vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfData;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__205__PROF__CoreTop__l5729(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__205__PROF__CoreTop__l5729\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T) {
        vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_csr_csr_idx 
            = (0xfffU & (IData)(vlSelf->CoreTop__DOT__ID__DOT__imm));
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__206__PROF__CoreTop__l1865(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__206__PROF__CoreTop__l1865\n"); );
    // Body
    vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0 
        = (0x1fU & (IData)((vlSelf->io_pc >> 6U)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__207__PROF__CoreTop__l5800(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__207__PROF__CoreTop__l5800\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T_13) {
        vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_rfWen 
            = vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_rfWen;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__208__PROF__CoreTop__l5812(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__208__PROF__CoreTop__l5812\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T_13) {
        vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_inst 
            = vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_inst;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__209__PROF__CoreTop__l3720(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__209__PROF__CoreTop__l3720\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->CoreTop__DOT__CSR__DOT__mie = 0ULL;
    } else if ((1U & (~ ((0x300U == (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_csr_csr_idx)) 
                         & (IData)(vlSelf->CoreTop__DOT__WB_io_out_bits_ctrl_csr_csr_en))))) {
        if ((1U & (~ ((0x305U == (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_csr_csr_idx)) 
                      & (IData)(vlSelf->CoreTop__DOT__WB_io_out_bits_ctrl_csr_csr_en))))) {
            if ((1U & (~ ((0x341U == (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_csr_csr_idx)) 
                          & (IData)(vlSelf->CoreTop__DOT__WB_io_out_bits_ctrl_csr_csr_en))))) {
                vlSelf->CoreTop__DOT__CSR__DOT__mie 
                    = vlSelf->CoreTop__DOT__CSR__DOT___GEN_8;
            }
        }
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__210__PROF__CoreTop__l3729(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__210__PROF__CoreTop__l3729\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->CoreTop__DOT__CSR__DOT__mip = 0ULL;
    } else if ((1U & (~ ((0x300U == (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_csr_csr_idx)) 
                         & (IData)(vlSelf->CoreTop__DOT__WB_io_out_bits_ctrl_csr_csr_en))))) {
        if ((1U & (~ ((0x305U == (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_csr_csr_idx)) 
                      & (IData)(vlSelf->CoreTop__DOT__WB_io_out_bits_ctrl_csr_csr_en))))) {
            if ((1U & (~ ((0x341U == (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_csr_csr_idx)) 
                          & (IData)(vlSelf->CoreTop__DOT__WB_io_out_bits_ctrl_csr_csr_en))))) {
                vlSelf->CoreTop__DOT__CSR__DOT__mip 
                    = vlSelf->CoreTop__DOT__CSR__DOT___GEN_9;
            }
        }
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__211__PROF__CoreTop__l2268(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__211__PROF__CoreTop__l2268\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__212__PROF__CoreTop__l2295(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__212__PROF__CoreTop__l2295\n"); );
    // Body
    vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_in_valid_REG 
        = ((IData)(vlSelf->CoreTop__DOT__IF_io_cache_req_addr_req_valid) 
           & (0U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__213__PROF__CoreTop__l5803(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__213__PROF__CoreTop__l5803\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T_13) {
        vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_ertn_flush 
            = vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_ertn_flush;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__214__PROF__CoreTop__l5806(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__214__PROF__CoreTop__l5806\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T_13) {
        vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_excp_flush 
            = vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_excp_flush;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__215__PROF__CoreTop__l3103(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__215__PROF__CoreTop__l3103\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__216__PROF__CoreTop__l936(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__216__PROF__CoreTop__l936\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_h19a5b938__0;
    VlWide<4>/*127:0*/ __Vtemp_he837eb31__0;
    // Body
    vlSelf->__Vdly__CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__state 
        = ((IData)(vlSelf->reset) ? 0U : ((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__NewReq)
                                           ? 1U : (
                                                   (1U 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__state))
                                                    ? 2U
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__state))
                                                     ? 3U
                                                     : (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___GEN_6)))));
    if ((1U & (~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__NewReq)))) {
        if ((1U != (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__state))) {
            if ((2U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__state))) {
                __Vtemp_h19a5b938__0[0U] = vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U];
                __Vtemp_h19a5b938__0[1U] = vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U];
                __Vtemp_h19a5b938__0[2U] = vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[2U];
                __Vtemp_h19a5b938__0[3U] = 0U;
                VL_SHIFTL_WWI(128,128,6, __Vtemp_he837eb31__0, __Vtemp_h19a5b938__0, (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__value));
                vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[0U] 
                    = __Vtemp_he837eb31__0[0U];
                vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[1U] 
                    = __Vtemp_he837eb31__0[1U];
                vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[2U] 
                    = __Vtemp_he837eb31__0[2U];
                vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[3U] 
                    = __Vtemp_he837eb31__0[3U];
                vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[4U] = 0U;
            } else if ((3U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__state))) {
                vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[0U] 
                    = vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___shiftReg_T_5[0U];
                vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[1U] 
                    = vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___shiftReg_T_5[1U];
                vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[2U] 
                    = vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___shiftReg_T_5[2U];
                vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[3U] 
                    = vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___shiftReg_T_5[3U];
                vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[4U] 
                    = vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___shiftReg_T_5[4U];
            }
        }
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__217__PROF__CoreTop__l5681(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__217__PROF__CoreTop__l5681\n"); );
    // Body
    vlSelf->CoreTop__DOT__valid = ((~ (IData)(vlSelf->reset)) 
                                   & ((~ (IData)(vlSelf->CoreTop__DOT___T_2)) 
                                      & (IData)(vlSelf->CoreTop__DOT___GEN_197)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__218__PROF__CoreTop__l3130(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__218__PROF__CoreTop__l3130\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__219__PROF__CoreTop__l5775(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__219__PROF__CoreTop__l5775\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T_8) {
        vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2 
            = vlSelf->CoreTop__DOT__EX__DOT__src2;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__220__PROF__CoreTop__l3150(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__220__PROF__CoreTop__l3150\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__221__PROF__CoreTop__l5687(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__221__PROF__CoreTop__l5687\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T) {
        vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src1Type 
            = (((7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                 ? 2U : 0U) | ((3U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                ? 2U : 0U));
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__222__PROF__CoreTop__l5690(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__222__PROF__CoreTop__l5690\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T) {
        vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src2Type 
            = ((8U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)) 
               | ((7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)) 
                  | (3U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))));
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__223__PROF__CoreTop__l539(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__223__PROF__CoreTop__l539\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__224__PROF__CoreTop__l3161(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__224__PROF__CoreTop__l3161\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_in_valid_REG 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_valid) 
           & (0U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__225__PROF__CoreTop__l5840(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__225__PROF__CoreTop__l5840\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP_io_inst_valid_REG = ((IData)(vlSelf->CoreTop__DOT__WB_io_out_valid) 
                                                   & ((IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_inst_valid) 
                                                      & (IData)(vlSelf->CoreTop__DOT__valid_2)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__226__PROF__CoreTop__l3038(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__226__PROF__CoreTop__l3038\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_addr_pipe_0 
        = (0x1fU & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                            >> 6U)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__227__PROF__CoreTop__l5839(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__227__PROF__CoreTop__l5839\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP_io_is_skip_REG = vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_skip;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__228__PROF__CoreTop__l1844(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__228__PROF__CoreTop__l1844\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0 
        = (0x1fU & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                            >> 6U)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__229__PROF__CoreTop__l1851(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__229__PROF__CoreTop__l1851\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0 
        = (0x1fU & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                            >> 6U)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__230__PROF__CoreTop__l5714(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__230__PROF__CoreTop__l5714\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__231__PROF__CoreTop__l1858(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__231__PROF__CoreTop__l1858\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_tag_w_addr_pipe_0 
        = (0x1fU & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                            >> 6U)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__232__PROF__CoreTop__l5717(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__232__PROF__CoreTop__l5717\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__233__PROF__CoreTop__l3112(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__233__PROF__CoreTop__l3112\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__234__PROF__CoreTop__l5739(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__234__PROF__CoreTop__l5739\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T_8) {
        vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_fuType 
            = vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__235__PROF__CoreTop__l5742(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__235__PROF__CoreTop__l5742\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T_8) {
        vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_inst_valid 
            = vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_inst_valid;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__236__PROF__CoreTop__l3141(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__236__PROF__CoreTop__l3141\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__237__PROF__CoreTop__l1872(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__237__PROF__CoreTop__l1872\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0 
        = (0x1fU & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                            >> 6U)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__238__PROF__CoreTop__l5837(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__238__PROF__CoreTop__l5837\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP_io_is_break_REG_1 = vlSelf->CoreTop__DOT__DIP_io_is_break_REG;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__239__PROF__CoreTop__l3694(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__239__PROF__CoreTop__l3694\n"); );
    // Body
    vlSelf->CoreTop__DOT__CSR__DOT__mcause = ((IData)(vlSelf->reset)
                                               ? 0ULL
                                               : ((
                                                   (0x300U 
                                                    == (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_csr_csr_idx)) 
                                                   & (IData)(vlSelf->CoreTop__DOT__WB_io_out_bits_ctrl_csr_csr_en))
                                                   ? vlSelf->CoreTop__DOT__CSR__DOT___GEN_1
                                                   : 
                                                  (((0x305U 
                                                     == (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_csr_csr_idx)) 
                                                    & (IData)(vlSelf->CoreTop__DOT__WB_io_out_bits_ctrl_csr_csr_en))
                                                    ? vlSelf->CoreTop__DOT__CSR__DOT___GEN_1
                                                    : 
                                                   (((0x341U 
                                                      == (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_csr_csr_idx)) 
                                                     & (IData)(vlSelf->CoreTop__DOT__WB_io_out_bits_ctrl_csr_csr_en))
                                                     ? vlSelf->CoreTop__DOT__CSR__DOT___GEN_1
                                                     : 
                                                    ((IData)(vlSelf->CoreTop__DOT__CSR__DOT____VdfgTmp_had87db98__0)
                                                      ? vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_csr_csr_data
                                                      : vlSelf->CoreTop__DOT__CSR__DOT___GEN_1)))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__240__PROF__CoreTop__l3704(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__240__PROF__CoreTop__l3704\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->CoreTop__DOT__CSR__DOT__mstatus = 0ULL;
    } else if (((0x300U == (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_csr_csr_idx)) 
                & (IData)(vlSelf->CoreTop__DOT__WB_io_out_bits_ctrl_csr_csr_en))) {
        vlSelf->CoreTop__DOT__CSR__DOT__mstatus = vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_csr_csr_data;
    } else if (vlSelf->CoreTop__DOT__IF_io_mret_flush) {
        vlSelf->CoreTop__DOT__CSR__DOT__mstatus = vlSelf->CoreTop__DOT__CSR__DOT___mstatus_T_1;
    } else if (vlSelf->CoreTop__DOT__IF_io_excp_flush) {
        vlSelf->CoreTop__DOT__CSR__DOT__mstatus = vlSelf->CoreTop__DOT__CSR__DOT___mstatus_T;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__241__PROF__CoreTop__l5772(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__241__PROF__CoreTop__l5772\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T_8) {
        vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src1 
            = vlSelf->CoreTop__DOT__EX__DOT__src1;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__242__PROF__CoreTop__l5778(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__242__PROF__CoreTop__l5778\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T_8) {
        vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_Imm 
            = vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__243__PROF__CoreTop__l5748(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__243__PROF__CoreTop__l5748\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T_8) {
        vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype 
            = vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__244__PROF__CoreTop__l5843(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__244__PROF__CoreTop__l5843\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP_io_dnpc_REG = ((IData)(vlSelf->CoreTop__DOT__IF_io_excp_flush)
                                              ? vlSelf->CoreTop__DOT__CSR__DOT__mtvec
                                              : ((IData)(vlSelf->CoreTop__DOT__IF_io_mret_flush)
                                                  ? vlSelf->CoreTop__DOT__CSR__DOT__mepc
                                                  : vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_Dnpc));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__245__PROF__CoreTop__l2277(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__245__PROF__CoreTop__l2277\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__246__PROF__CoreTop__l5830(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__246__PROF__CoreTop__l5830\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T_13) {
        vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_csr_csr_en 
            = ((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_csr_csr_en) 
               & (IData)(vlSelf->CoreTop__DOT__valid_1));
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__247__PROF__CoreTop__l5841(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__247__PROF__CoreTop__l5841\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP_io_pc_REG = vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_PC;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__248__PROF__CoreTop__l1840(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__248__PROF__CoreTop__l1840\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__249__PROF__CoreTop__l1847(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__249__PROF__CoreTop__l1847\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__250__PROF__CoreTop__l1868(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__250__PROF__CoreTop__l1868\n"); );
    // Body
    if (vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0__v0) {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0__v0] = 1U;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__251__PROF__CoreTop__l1875(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__251__PROF__CoreTop__l1875\n"); );
    // Body
    if (vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1__v0) {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1__v0] = 1U;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__252__PROF__CoreTop__l1861(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__252__PROF__CoreTop__l1861\n"); );
    // Body
    if (vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1__v0) {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1__v0] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1__v0;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__253__PROF__CoreTop__l1854(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__253__PROF__CoreTop__l1854\n"); );
    // Body
    if (vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0__v0) {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0__v0] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0__v0;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__254__PROF__CoreTop__l3089(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__254__PROF__CoreTop__l3089\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state 
        = vlSelf->__Vdly__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__255__PROF__CoreTop__l3074(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__255__PROF__CoreTop__l3074\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state 
        = vlSelf->__Vdly__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__256__PROF__CoreTop__l3310(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__256__PROF__CoreTop__l3310\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__read_state 
        = vlSelf->__Vdly__CoreTop__DOT__MMIO__DOT__birdge__DOT__read_state;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__257__PROF__CoreTop__l3323(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__257__PROF__CoreTop__l3323\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state 
        = vlSelf->__Vdly__CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__258__PROF__CoreTop__l3025(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__258__PROF__CoreTop__l3025\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__260__PROF__CoreTop__l3048(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__260__PROF__CoreTop__l3048\n"); );
    // Body
    if (vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1__v0) {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1__v0] = 1U;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__261__PROF__CoreTop__l3041(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__261__PROF__CoreTop__l3041\n"); );
    // Body
    if (vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0__v0) {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0__v0] = 1U;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__264__PROF__CoreTop__l1840(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__264__PROF__CoreTop__l1840\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__265__PROF__CoreTop__l1847(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__265__PROF__CoreTop__l1847\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__266__PROF__CoreTop__l1868(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__266__PROF__CoreTop__l1868\n"); );
    // Body
    if (vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0__v0) {
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0__v0] = 1U;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__267__PROF__CoreTop__l1875(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__267__PROF__CoreTop__l1875\n"); );
    // Body
    if (vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1__v0) {
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1__v0] = 1U;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__268__PROF__CoreTop__l1861(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__268__PROF__CoreTop__l1861\n"); );
    // Body
    if (vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1__v0) {
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1__v0] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1__v0;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__269__PROF__CoreTop__l1854(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__269__PROF__CoreTop__l1854\n"); );
    // Body
    if (vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0__v0) {
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0__v0] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0__v0;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__270__PROF__SRAMTemp__l223(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__270__PROF__SRAMTemp__l223\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMEM__DOT__read_addr_buffer 
        = vlSelf->__Vdly__CoreTop__DOT__MMEM__DOT__read_addr_buffer;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__271__PROF__SRAMTemp__l224(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__271__PROF__SRAMTemp__l224\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMEM__DOT__write_addr_buffer 
        = vlSelf->__Vdly__CoreTop__DOT__MMEM__DOT__write_addr_buffer;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__273__PROF__SRAMTemp__l222(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__273__PROF__SRAMTemp__l222\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMEM__DOT__read_count = vlSelf->__Vdly__CoreTop__DOT__MMEM__DOT__read_count;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__274__PROF__CoreTop__l2254(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__274__PROF__CoreTop__l2254\n"); );
    // Body
    vlSelf->CoreTop__DOT__ICACHE__DOT__read_state = vlSelf->__Vdly__CoreTop__DOT__ICACHE__DOT__read_state;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__314__PROF__CoreTop__l936(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__314__PROF__CoreTop__l936\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__state 
        = vlSelf->__Vdly__CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__state;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__324__PROF__CoreTop__l540(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__324__PROF__CoreTop__l540\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U] 
        = vlSelf->__Vdly__CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U];
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[1U] 
        = vlSelf->__Vdly__CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[1U];
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[2U] 
        = vlSelf->__Vdly__CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[2U];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__340__PROF__CoreTop__l5344(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__340__PROF__CoreTop__l5344\n"); );
    // Body
    if (vlSelf->__Vdlyvset__CoreTop__DOT__rf__v0) {
        vlSelf->CoreTop__DOT__rf[vlSelf->__Vdlyvdim0__CoreTop__DOT__rf__v0] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__rf__v0;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__364__PROF__CoreTop__l3298(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__364__PROF__CoreTop__l3298\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_out_raddr_req_valid 
        = (1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__read_state));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__365__PROF__CoreTop__l3300(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__365__PROF__CoreTop__l3300\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_out_waddr_req_valid 
        = (1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__366__PROF__CoreTop__l3121(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__366__PROF__CoreTop__l3121\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__367__PROF__CoreTop__l3052(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__367__PROF__CoreTop__l3052\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1_dirt_w_addr_pipe_0 
        = (0x1fU & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                            >> 6U)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__368__PROF__CoreTop__l3045(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__368__PROF__CoreTop__l3045\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0_dirt_w_addr_pipe_0 
        = (0x1fU & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                            >> 6U)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__369__PROF__SRAMTemp__l213(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__369__PROF__SRAMTemp__l213\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMEM__DOT__write_state = 
        ((IData)(vlSelf->reset) ? 0U : (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_next_state));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__370__PROF__SRAMTemp__l212(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__370__PROF__SRAMTemp__l212\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMEM__DOT__read_state = ((IData)(vlSelf->reset)
                                                    ? 0U
                                                    : (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_next_state));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__371__PROF__CoreTop__l2535(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__371__PROF__CoreTop__l2535\n"); );
    // Body
    vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r = 
        ((~ (IData)(vlSelf->reset)) & ((~ (((IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_valid) 
                                            | (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_valid)) 
                                           & (~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)))) 
                                       & (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT___GEN_98)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__372__PROF__CoreTop__l2286(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__372__PROF__CoreTop__l2286\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__373__PROF__DIP_model__l85(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__373__PROF__DIP_model__l85\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__IN[0U] = vlSelf->CoreTop__DOT__DIP_io_inst_REG;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__374__PROF__CoreTop__l5745(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__374__PROF__CoreTop__l5745\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T_8) {
        vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_rfWen 
            = vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfWen;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__375__PROF__CoreTop__l5119(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__375__PROF__CoreTop__l5119\n"); );
    // Body
    vlSelf->io_inst = vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_inst;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__376__PROF__CoreTop__l5760(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__376__PROF__CoreTop__l5760\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T_8) {
        vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_inst 
            = vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_inst;
    }
}

extern const VlWide<16>/*511:0*/ VCoreTop__ConstPool__CONST_h93e1b771_0;

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__377__PROF__CoreTop__l1789(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__377__PROF__CoreTop__l1789\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__378__PROF__CoreTop__l5751(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__378__PROF__CoreTop__l5751\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T_8) {
        vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_ertn_flush 
            = vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_ertn_flush;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__379__PROF__CoreTop__l5754(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__379__PROF__CoreTop__l5754\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T_8) {
        vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_excp_flush 
            = vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_excp_flush;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__380__PROF__CoreTop__l958(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__380__PROF__CoreTop__l958\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__value 
        = (0x3fU & (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___GEN_19));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__381__PROF__CoreTop__l955(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__381__PROF__CoreTop__l955\n"); );
    // Body
    if (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__NewReq) {
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U] 
            = ((IData)(((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aSign)
                         ? (- vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_in_bits_ctrl_data_src1)
                         : vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_in_bits_ctrl_data_src1)) 
               << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U] 
            = (((IData)(((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aSign)
                          ? (- vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_in_bits_ctrl_data_src1)
                          : vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_in_bits_ctrl_data_src1)) 
                >> 0x1fU) | ((IData)((((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aSign)
                                        ? (- vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_in_bits_ctrl_data_src1)
                                        : vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_in_bits_ctrl_data_src1) 
                                      >> 0x20U)) << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[2U] 
            = ((IData)((((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aSign)
                          ? (- vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_in_bits_ctrl_data_src1)
                          : vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_in_bits_ctrl_data_src1) 
                        >> 0x20U)) >> 0x1fU);
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__382__PROF__CoreTop__l488(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__382__PROF__CoreTop__l488\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__383__PROF__CoreTop__l565(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__383__PROF__CoreTop__l565\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count 
        = ((IData)(vlSelf->reset) ? 0U : (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_valid) 
                                           & (~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_out_valid)))
                                           ? (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT___count_T_5)
                                           : 0U));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__384__PROF__DIP_model__l88(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__384__PROF__DIP_model__l88\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__IN[3U] = vlSelf->CoreTop__DOT__DIP_io_inst_valid_REG;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__385__PROF__CoreTop__l5791(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__385__PROF__CoreTop__l5791\n"); );
    // Body
    vlSelf->CoreTop__DOT__valid_2 = ((~ (IData)(vlSelf->reset)) 
                                     & ((~ (IData)(vlSelf->CoreTop__DOT___T_14)) 
                                        & (IData)(vlSelf->CoreTop__DOT___GEN_248)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__386__PROF__CoreTop__l5797(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__386__PROF__CoreTop__l5797\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T_13) {
        vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_inst_valid 
            = vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_signal_inst_valid;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__387__PROF__DIP_model__l91(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__387__PROF__DIP_model__l91\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__IN[6U] = vlSelf->CoreTop__DOT__DIP_io_is_skip_REG;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__388__PROF__CoreTop__l5818(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__388__PROF__CoreTop__l5818\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T_13) {
        vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_skip 
            = ((0xa0000048ULL == vlSelf->CoreTop__DOT__MEM__DOT__addr_temp) 
               | ((0xa00003f8ULL == vlSelf->CoreTop__DOT__MEM__DOT__addr_temp) 
                  | ((0xa0000000ULL <= vlSelf->CoreTop__DOT__MEM__DOT__addr_temp) 
                     & (0xa1200000ULL >= vlSelf->CoreTop__DOT__MEM__DOT__addr_temp))));
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__389__PROF__CoreTop__l1788(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__389__PROF__CoreTop__l1788\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[0U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][0U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[1U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][1U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[2U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][2U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[3U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][3U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[4U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][4U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[5U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][5U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[6U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][6U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[7U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][7U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[8U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][8U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[9U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][9U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[0xaU] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][0xaU];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[0xbU] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][0xbU];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[0xcU] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][0xcU];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[0xdU] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][0xdU];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[0xeU] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][0xeU];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[0xfU] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][0xfU];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__390__PROF__CoreTop__l1795(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__390__PROF__CoreTop__l1795\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__391__PROF__CoreTop__l1802(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__391__PROF__CoreTop__l1802\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_tag_w_data 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_tag_w_addr_pipe_0];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__392__PROF__CoreTop__l5824(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__392__PROF__CoreTop__l5824\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T_13) {
        vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfData 
            = vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfData;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__393__PROF__CoreTop__l5821(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__393__PROF__CoreTop__l5821\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T_13) {
        vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest 
            = vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__394__PROF__DIP_model__l52(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__394__PROF__DIP_model__l52\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0U] = vlSelf->CoreTop__DOT__rf
        [0U];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__395__PROF__DIP_model__l53(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__395__PROF__DIP_model__l53\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[1U] = vlSelf->CoreTop__DOT__rf
        [1U];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__396__PROF__DIP_model__l54(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__396__PROF__DIP_model__l54\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[2U] = vlSelf->CoreTop__DOT__rf
        [2U];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__397__PROF__DIP_model__l55(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__397__PROF__DIP_model__l55\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[3U] = vlSelf->CoreTop__DOT__rf
        [3U];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__398__PROF__DIP_model__l56(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__398__PROF__DIP_model__l56\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[4U] = vlSelf->CoreTop__DOT__rf
        [4U];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__399__PROF__DIP_model__l57(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__399__PROF__DIP_model__l57\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[5U] = vlSelf->CoreTop__DOT__rf
        [5U];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__400__PROF__DIP_model__l58(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__400__PROF__DIP_model__l58\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[6U] = vlSelf->CoreTop__DOT__rf
        [6U];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__401__PROF__DIP_model__l59(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__401__PROF__DIP_model__l59\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[7U] = vlSelf->CoreTop__DOT__rf
        [7U];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__402__PROF__DIP_model__l60(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__402__PROF__DIP_model__l60\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[8U] = vlSelf->CoreTop__DOT__rf
        [8U];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__403__PROF__DIP_model__l61(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__403__PROF__DIP_model__l61\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[9U] = vlSelf->CoreTop__DOT__rf
        [9U];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__404__PROF__DIP_model__l62(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__404__PROF__DIP_model__l62\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0xaU] = vlSelf->CoreTop__DOT__rf
        [0xaU];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__405__PROF__DIP_model__l63(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__405__PROF__DIP_model__l63\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0xbU] = vlSelf->CoreTop__DOT__rf
        [0xbU];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__406__PROF__DIP_model__l64(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__406__PROF__DIP_model__l64\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0xcU] = vlSelf->CoreTop__DOT__rf
        [0xcU];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__407__PROF__DIP_model__l65(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__407__PROF__DIP_model__l65\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0xdU] = vlSelf->CoreTop__DOT__rf
        [0xdU];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__408__PROF__DIP_model__l66(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__408__PROF__DIP_model__l66\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0xeU] = vlSelf->CoreTop__DOT__rf
        [0xeU];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__409__PROF__DIP_model__l67(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__409__PROF__DIP_model__l67\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0xfU] = vlSelf->CoreTop__DOT__rf
        [0xfU];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__410__PROF__DIP_model__l68(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__410__PROF__DIP_model__l68\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0x10U] = vlSelf->CoreTop__DOT__rf
        [0x10U];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__411__PROF__DIP_model__l69(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__411__PROF__DIP_model__l69\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0x11U] = vlSelf->CoreTop__DOT__rf
        [0x11U];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__412__PROF__DIP_model__l70(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__412__PROF__DIP_model__l70\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0x12U] = vlSelf->CoreTop__DOT__rf
        [0x12U];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__413__PROF__DIP_model__l71(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__413__PROF__DIP_model__l71\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0x13U] = vlSelf->CoreTop__DOT__rf
        [0x13U];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__414__PROF__DIP_model__l72(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__414__PROF__DIP_model__l72\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0x14U] = vlSelf->CoreTop__DOT__rf
        [0x14U];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__415__PROF__DIP_model__l73(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__415__PROF__DIP_model__l73\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0x15U] = vlSelf->CoreTop__DOT__rf
        [0x15U];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__416__PROF__DIP_model__l74(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__416__PROF__DIP_model__l74\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0x16U] = vlSelf->CoreTop__DOT__rf
        [0x16U];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__417__PROF__DIP_model__l75(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__417__PROF__DIP_model__l75\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0x17U] = vlSelf->CoreTop__DOT__rf
        [0x17U];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__418__PROF__DIP_model__l76(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__418__PROF__DIP_model__l76\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0x18U] = vlSelf->CoreTop__DOT__rf
        [0x18U];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__419__PROF__DIP_model__l77(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__419__PROF__DIP_model__l77\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0x19U] = vlSelf->CoreTop__DOT__rf
        [0x19U];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__420__PROF__DIP_model__l78(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__420__PROF__DIP_model__l78\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0x1aU] = vlSelf->CoreTop__DOT__rf
        [0x1aU];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__421__PROF__DIP_model__l79(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__421__PROF__DIP_model__l79\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0x1bU] = vlSelf->CoreTop__DOT__rf
        [0x1bU];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__422__PROF__DIP_model__l80(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__422__PROF__DIP_model__l80\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0x1cU] = vlSelf->CoreTop__DOT__rf
        [0x1cU];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__423__PROF__DIP_model__l81(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__423__PROF__DIP_model__l81\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0x1dU] = vlSelf->CoreTop__DOT__rf
        [0x1dU];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__424__PROF__DIP_model__l82(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__424__PROF__DIP_model__l82\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0x1eU] = vlSelf->CoreTop__DOT__rf
        [0x1eU];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__425__PROF__DIP_model__l83(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__425__PROF__DIP_model__l83\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0x1fU] = vlSelf->CoreTop__DOT__rf
        [0x1fU];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__426__PROF__CoreTop__l5693(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__426__PROF__CoreTop__l5693\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__427__PROF__CoreTop__l1809(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__427__PROF__CoreTop__l1809\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1_tag_w_data 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__428__PROF__CoreTop__l5836(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__428__PROF__CoreTop__l5836\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP_io_is_break_REG = ((0x42U 
                                                  == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                                                 & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_inst_valid));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__429__PROF__CSR_DIFF__l11(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__429__PROF__CSR_DIFF__l11\n"); );
    // Body
    vlSelf->CoreTop__DOT__CSR__DOT__CSRDIFF__DOT__inst_csr[1U] 
        = vlSelf->CoreTop__DOT__CSR__DOT__mcause;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__430__PROF__CoreTop__l3663(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__430__PROF__CoreTop__l3663\n"); );
    // Body
    vlSelf->CoreTop__DOT__CSR__DOT___mstatus_T_1 = 
        (8ULL | vlSelf->CoreTop__DOT__CSR__DOT__mstatus);
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__431__PROF__CoreTop__l3660(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__431__PROF__CoreTop__l3660\n"); );
    // Body
    vlSelf->CoreTop__DOT__CSR__DOT___mstatus_T = (0xfffffffffffffff7ULL 
                                                  & vlSelf->CoreTop__DOT__CSR__DOT__mstatus);
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__432__PROF__CSR_DIFF__l12(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__432__PROF__CSR_DIFF__l12\n"); );
    // Body
    vlSelf->CoreTop__DOT__CSR__DOT__CSRDIFF__DOT__inst_csr[2U] 
        = vlSelf->CoreTop__DOT__CSR__DOT__mstatus;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__433__PROF__CoreTop__l5720(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__433__PROF__CoreTop__l5720\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T) {
        vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm 
            = vlSelf->CoreTop__DOT__ID__DOT__imm;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__434__PROF__CoreTop__l1447(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__434__PROF__CoreTop__l1447\n"); );
    // Body
    vlSelf->CoreTop__DOT__MEM__DOT___addr_temp_T_1 
        = (vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_Imm 
           + vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src1);
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__435__PROF__CoreTop__l3572(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__435__PROF__CoreTop__l3572\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__436__PROF__DIP_model__l89(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__436__PROF__DIP_model__l89\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__IN[4U] = (IData)(vlSelf->CoreTop__DOT__DIP_io_dnpc_REG);
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__437__PROF__DIP_model__l90(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__437__PROF__DIP_model__l90\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__IN[5U] = (IData)(
                                                     (vlSelf->CoreTop__DOT__DIP_io_dnpc_REG 
                                                      >> 0x20U));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__438__PROF__CoreTop__l5815(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__438__PROF__CoreTop__l5815\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T_13) {
        vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_Dnpc 
            = vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_Dnpc;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__439__PROF__CoreTop__l2200(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__439__PROF__CoreTop__l2200\n"); );
    // Body
    vlSelf->CoreTop__DOT__ICACHE_io_out_raddr_req_bits_addr 
        = ((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state))
            ? vlSelf->CoreTop__DOT__ICACHE__DOT__mem_addr_reg
            : 0ULL);
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__440__PROF__CoreTop__l5784(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__440__PROF__CoreTop__l5784\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T_8) {
        vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_csr_csr_en 
            = ((0x18U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
               | ((0x15U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                  | (0x16U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))));
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__441__PROF__CoreTop__l5733(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__441__PROF__CoreTop__l5733\n"); );
    // Body
    vlSelf->CoreTop__DOT__valid_1 = ((~ (IData)(vlSelf->reset)) 
                                     & ((~ (IData)(vlSelf->CoreTop__DOT___T_14)) 
                                        & (IData)(vlSelf->CoreTop__DOT___GEN_221)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__442__PROF__DIP_model__l86(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__442__PROF__DIP_model__l86\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__IN[1U] = (IData)(vlSelf->CoreTop__DOT__DIP_io_pc_REG);
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__443__PROF__DIP_model__l87(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__443__PROF__DIP_model__l87\n"); );
    // Body
    vlSelf->CoreTop__DOT__DIP__DOT__IN[2U] = (IData)(
                                                     (vlSelf->CoreTop__DOT__DIP_io_pc_REG 
                                                      >> 0x20U));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__444__PROF__CoreTop__l5809(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__444__PROF__CoreTop__l5809\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T_13) {
        vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_PC 
            = vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_PC;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__445__PROF__CoreTop__l2963(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__445__PROF__CoreTop__l2963\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_data 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_addr_pipe_0];
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__447__PROF__CoreTop__l3055(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__447__PROF__CoreTop__l3055\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state 
        = vlSelf->__Vdly__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__455__PROF__CoreTop__l2219(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__455__PROF__CoreTop__l2219\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__456__PROF__CoreTop__l2235(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__456__PROF__CoreTop__l2235\n"); );
    // Body
    vlSelf->CoreTop__DOT__ICACHE__DOT__state = vlSelf->__Vdly__CoreTop__DOT__ICACHE__DOT__state;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__468__PROF__CoreTop__l524(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__468__PROF__CoreTop__l524\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__480__PROF__CoreTop__l1468(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__480__PROF__CoreTop__l1468\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__488__PROF__CoreTop__l2795(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__488__PROF__CoreTop__l2795\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_valid_T_4 
        = ((2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
           & (3U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__489__PROF__SRAMTemp__l320(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__489__PROF__SRAMTemp__l320\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMEM_wd_ready = ((0U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_state)) 
                                           | (2U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_state)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__490__PROF__CoreTop__l3584(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__490__PROF__CoreTop__l3584\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_rdata_rep_bits_last 
        = ((0U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_count)) 
           & (2U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__491__PROF__CoreTop__l2530(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__491__PROF__CoreTop__l2530\n"); );
    // Body
    vlSelf->CoreTop__DOT__ARBITER__DOT__state = ((~ (IData)(vlSelf->reset)) 
                                                 & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0) 
                                                    | ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0) 
                                                       | (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT___GEN_55))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__492__PROF__CoreTop__l2232(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__492__PROF__CoreTop__l2232\n"); );
    // Body
    vlSelf->CoreTop__DOT__ICACHE__DOT__lru_lru_w_MPORT_addr_pipe_0 
        = (0x1fU & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
                            >> 6U)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__493__PROF__CoreTop__l5699(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__493__PROF__CoreTop__l5699\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T) {
        vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfWen 
            = ((~ (IData)(vlSelf->CoreTop__DOT__empty)) 
               & (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_3));
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__494__PROF__CoreTop__l5726(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__494__PROF__CoreTop__l5726\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T) {
        vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_inst 
            = vlSelf->CoreTop__DOT__ID_io_in_bits_Inst;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__495__PROF__CoreTop__l5708(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__495__PROF__CoreTop__l5708\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T) {
        vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_ertn_flush 
            = (0x18U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_2));
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__496__PROF__CoreTop__l5711(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__496__PROF__CoreTop__l5711\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T) {
        vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_excp_flush 
            = (0x17U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_2));
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__497__PROF__CoreTop__l924(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__497__PROF__CoreTop__l924\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___GEN_6 
        = ((3U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__state))
            ? ((0x3fU == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__value))
                ? 4U : (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__state))
            : ((4U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__state))
                ? 0U : (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__state)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__498__PROF__CoreTop__l828(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__498__PROF__CoreTop__l828\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___cntShift_T_136 
        = (((IData)((0U != (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U] 
                            >> 0x18U))) << 3U) | ((0U 
                                                   != 
                                                   (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U] 
                                                    >> 0x18U))
                                                   ? 
                                                  (((IData)(
                                                            (0U 
                                                             != 
                                                             (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U] 
                                                              >> 0x1cU))) 
                                                    << 2U) 
                                                   | ((0U 
                                                       != 
                                                       (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U] 
                                                        >> 0x1cU))
                                                       ? 
                                                      ((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U] 
                                                        >> 0x1fU)
                                                        ? 3U
                                                        : 
                                                       ((0x40000000U 
                                                         & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U])
                                                         ? 2U
                                                         : 
                                                        (1U 
                                                         & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U] 
                                                            >> 0x1dU))))
                                                       : 
                                                      ((0x8000000U 
                                                        & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U])
                                                        ? 3U
                                                        : 
                                                       ((0x4000000U 
                                                         & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U])
                                                         ? 2U
                                                         : 
                                                        (1U 
                                                         & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U] 
                                                            >> 0x19U))))))
                                                   : 
                                                  (((IData)(
                                                            (0U 
                                                             != 
                                                             (0xfU 
                                                              & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U] 
                                                                 >> 0x14U)))) 
                                                    << 2U) 
                                                   | ((0U 
                                                       != 
                                                       (0xfU 
                                                        & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U] 
                                                           >> 0x14U)))
                                                       ? 
                                                      ((0x800000U 
                                                        & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U])
                                                        ? 3U
                                                        : 
                                                       ((0x400000U 
                                                         & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U])
                                                         ? 2U
                                                         : 
                                                        (1U 
                                                         & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U] 
                                                            >> 0x15U))))
                                                       : 
                                                      ((0x80000U 
                                                        & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U])
                                                        ? 3U
                                                        : 
                                                       ((0x40000U 
                                                         & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U])
                                                         ? 2U
                                                         : 
                                                        (1U 
                                                         & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U] 
                                                            >> 0x11U))))))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__499__PROF__CoreTop__l851(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__499__PROF__CoreTop__l851\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___cntShift_T_162 
        = (((IData)((0U != (0xffU & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U] 
                                     >> 8U)))) << 3U) 
           | ((0U != (0xffU & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U] 
                               >> 8U))) ? (((IData)(
                                                    (0U 
                                                     != 
                                                     (0xfU 
                                                      & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U] 
                                                         >> 0xcU)))) 
                                            << 2U) 
                                           | ((0U != 
                                               (0xfU 
                                                & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U] 
                                                   >> 0xcU)))
                                               ? ((0x8000U 
                                                   & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U])
                                                   ? 3U
                                                   : 
                                                  ((0x4000U 
                                                    & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U])
                                                    ? 2U
                                                    : 
                                                   (1U 
                                                    & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U] 
                                                       >> 0xdU))))
                                               : ((0x800U 
                                                   & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U])
                                                   ? 3U
                                                   : 
                                                  ((0x400U 
                                                    & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U])
                                                    ? 2U
                                                    : 
                                                   (1U 
                                                    & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U] 
                                                       >> 9U))))))
               : (((IData)((0U != (0xfU & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U] 
                                           >> 4U)))) 
                   << 2U) | ((0U != (0xfU & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U] 
                                             >> 4U)))
                              ? ((0x80U & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U])
                                  ? 3U : ((0x40U & 
                                           vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U])
                                           ? 2U : (1U 
                                                   & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U] 
                                                      >> 5U))))
                              : ((8U & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U])
                                  ? 3U : ((4U & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U])
                                           ? 2U : (1U 
                                                   & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U] 
                                                      >> 1U))))))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__500__PROF__CoreTop__l879(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__500__PROF__CoreTop__l879\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___cntShift_T_190 
        = (((IData)((0U != (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U] 
                            >> 0x18U))) << 3U) | ((0U 
                                                   != 
                                                   (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U] 
                                                    >> 0x18U))
                                                   ? 
                                                  (((IData)(
                                                            (0U 
                                                             != 
                                                             (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U] 
                                                              >> 0x1cU))) 
                                                    << 2U) 
                                                   | ((0U 
                                                       != 
                                                       (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U] 
                                                        >> 0x1cU))
                                                       ? 
                                                      ((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U] 
                                                        >> 0x1fU)
                                                        ? 3U
                                                        : 
                                                       ((0x40000000U 
                                                         & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U])
                                                         ? 2U
                                                         : 
                                                        (1U 
                                                         & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U] 
                                                            >> 0x1dU))))
                                                       : 
                                                      ((0x8000000U 
                                                        & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U])
                                                        ? 3U
                                                        : 
                                                       ((0x4000000U 
                                                         & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U])
                                                         ? 2U
                                                         : 
                                                        (1U 
                                                         & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U] 
                                                            >> 0x19U))))))
                                                   : 
                                                  (((IData)(
                                                            (0U 
                                                             != 
                                                             (0xfU 
                                                              & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U] 
                                                                 >> 0x14U)))) 
                                                    << 2U) 
                                                   | ((0U 
                                                       != 
                                                       (0xfU 
                                                        & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U] 
                                                           >> 0x14U)))
                                                       ? 
                                                      ((0x800000U 
                                                        & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U])
                                                        ? 3U
                                                        : 
                                                       ((0x400000U 
                                                         & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U])
                                                         ? 2U
                                                         : 
                                                        (1U 
                                                         & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U] 
                                                            >> 0x15U))))
                                                       : 
                                                      ((0x80000U 
                                                        & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U])
                                                        ? 3U
                                                        : 
                                                       ((0x40000U 
                                                         & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U])
                                                         ? 2U
                                                         : 
                                                        (1U 
                                                         & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U] 
                                                            >> 0x11U))))))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__501__PROF__CoreTop__l902(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__501__PROF__CoreTop__l902\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___cntShift_T_216 
        = (((IData)((0U != (0xffU & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U] 
                                     >> 8U)))) << 3U) 
           | ((0U != (0xffU & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U] 
                               >> 8U))) ? (((IData)(
                                                    (0U 
                                                     != 
                                                     (0xfU 
                                                      & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U] 
                                                         >> 0xcU)))) 
                                            << 2U) 
                                           | ((0U != 
                                               (0xfU 
                                                & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U] 
                                                   >> 0xcU)))
                                               ? ((0x8000U 
                                                   & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U])
                                                   ? 3U
                                                   : 
                                                  ((0x4000U 
                                                    & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U])
                                                    ? 2U
                                                    : 
                                                   (1U 
                                                    & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U] 
                                                       >> 0xdU))))
                                               : ((0x800U 
                                                   & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U])
                                                   ? 3U
                                                   : 
                                                  ((0x400U 
                                                    & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U])
                                                    ? 2U
                                                    : 
                                                   (1U 
                                                    & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U] 
                                                       >> 9U))))))
               : (((IData)((0U != (0xfU & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U] 
                                           >> 4U)))) 
                   << 2U) | ((0U != (0xfU & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U] 
                                             >> 4U)))
                              ? ((0x80U & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U])
                                  ? 3U : ((0x40U & 
                                           vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U])
                                           ? 2U : (1U 
                                                   & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U] 
                                                      >> 5U))))
                              : ((8U & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U])
                                  ? 3U : ((4U & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U])
                                           ? 2U : (1U 
                                                   & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U] 
                                                      >> 1U))))))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__502__PROF__CoreTop__l534(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__502__PROF__CoreTop__l534\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_out_valid 
        = (0x44U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__503__PROF__CoreTop__l519(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__503__PROF__CoreTop__l519\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT___count_T_5 
        = (0x7fU & ((IData)(2U) + (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__504__PROF__CoreTop__l5117(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__504__PROF__CoreTop__l5117\n"); );
    // Body
    vlSelf->CoreTop__DOT__rf_MPORT_en = ((IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_rfWen) 
                                         & (IData)(vlSelf->CoreTop__DOT__valid_2));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__505__PROF__CoreTop__l5766(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__505__PROF__CoreTop__l5766\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T_8) {
        vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest 
            = vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__506__PROF__CoreTop__l5696(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__506__PROF__CoreTop__l5696\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T) {
        vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_inst_valid 
            = (1U & (~ ((0U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_2)) 
                        | ((IData)(vlSelf->CoreTop__DOT__empty) 
                           | (IData)(vlSelf->CoreTop__DOT__IF_io_flush)))));
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__507__PROF__CoreTop__l1151(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__507__PROF__CoreTop__l1151\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__src2 = ((0U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src2Type))
                                            ? vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_src2
                                            : ((1U 
                                                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src2Type))
                                                ? vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm
                                                : 0ULL));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__508__PROF__CoreTop__l1519(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__508__PROF__CoreTop__l1519\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__509__PROF__CoreTop__l3576(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__509__PROF__CoreTop__l3576\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__510__PROF__CoreTop__l1989(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__510__PROF__CoreTop__l1989\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_0_result 
        = ((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0
            [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0] 
            & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_in_valid_REG)) 
           & ((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
               >> 0xbU) == vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_tag_w_data));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__511__PROF__CoreTop__l1991(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__511__PROF__CoreTop__l1991\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_1_result 
        = ((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1
            [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0] 
            & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_in_valid_REG)) 
           & ((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
               >> 0xbU) == vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1_tag_w_data));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__512__PROF__CoreTop__l5763(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__512__PROF__CoreTop__l5763\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T_8) {
        vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_Dnpc 
            = vlSelf->CoreTop__DOT__IF_io_branch_io_dnpc;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__513__PROF__CoreTop__l1588(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__513__PROF__CoreTop__l1588\n"); );
    // Body
    vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfWen 
        = ((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_rfWen) 
           & (IData)(vlSelf->CoreTop__DOT__valid_1));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__514__PROF__CoreTop__l1578(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__514__PROF__CoreTop__l1578\n"); );
    // Body
    vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_signal_inst_valid 
        = ((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_inst_valid) 
           & (IData)(vlSelf->CoreTop__DOT__valid_1));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__515__PROF__CoreTop__l5757(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__515__PROF__CoreTop__l5757\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T_8) {
        vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_PC 
            = vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__526__PROF__CoreTop__l3575(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__526__PROF__CoreTop__l3575\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__527__PROF__CoreTop__l2797(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__527__PROF__CoreTop__l2797\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wmaskextend_T_3 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wmask) 
           & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_bits_we)
               ? 0xffU : 0U));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__528__PROF__CoreTop__l1994(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__528__PROF__CoreTop__l1994\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__529__PROF__CoreTop__l1993(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__529__PROF__CoreTop__l1993\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_1_result) 
           | (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_0_result));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__531__PROF__CoreTop__l3595(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__531__PROF__CoreTop__l3595\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_addr_req_bits_ce 
        = (((4U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_fuType)) 
            & (IData)(vlSelf->CoreTop__DOT__valid_1)) 
           & (IData)(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_signal_inst_valid));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__534__PROF__CoreTop__l2448(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__534__PROF__CoreTop__l2448\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__535__PROF__CoreTop__l2464(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__535__PROF__CoreTop__l2464\n"); );
    // Body
    vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0 
        = ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)) 
           & (1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__536__PROF__CoreTop__l42(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__536__PROF__CoreTop__l42\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->CoreTop__DOT__IF__DOT__temp = 0x80000000ULL;
    } else if ((1U & ((((~ (IData)(vlSelf->CoreTop__DOT__IF_io_wb_stall)) 
                        & (~ (IData)(vlSelf->CoreTop__DOT__IF_io_ex_stall))) 
                       & (~ (IData)(vlSelf->CoreTop__DOT__IF_io_excp_flush))) 
                      & (~ (IData)(vlSelf->CoreTop__DOT__IF_io_mret_flush))))) {
        if (((IData)(vlSelf->CoreTop__DOT__IF_io_branch_io_is_jump) 
             | (IData)(vlSelf->CoreTop__DOT__IF_io_branch_io_is_branch))) {
            vlSelf->CoreTop__DOT__IF__DOT__temp = vlSelf->CoreTop__DOT__IF_io_branch_io_dnpc;
        } else if (((~ (IData)(vlSelf->CoreTop__DOT__full)) 
                    & (IData)(vlSelf->CoreTop__DOT__IF_io_cache_req_rdata_rep_valid))) {
            vlSelf->CoreTop__DOT__IF__DOT__temp = vlSelf->CoreTop__DOT__IF__DOT___temp_T_10;
        }
    } else if (vlSelf->CoreTop__DOT__IF_io_excp_flush) {
        vlSelf->CoreTop__DOT__IF__DOT__temp = vlSelf->CoreTop__DOT__CSR__DOT__mtvec;
    } else if (vlSelf->CoreTop__DOT__IF_io_mret_flush) {
        vlSelf->CoreTop__DOT__IF__DOT__temp = vlSelf->CoreTop__DOT__CSR__DOT__mepc;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__537__PROF__CoreTop__l5143(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__537__PROF__CoreTop__l5143\n"); );
    // Body
    vlSelf->CoreTop__DOT__ID_io_ex_reg_rfWen = ((IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfWen) 
                                                & (IData)(vlSelf->CoreTop__DOT__valid));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__538__PROF__CoreTop__l5705(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__538__PROF__CoreTop__l5705\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T) {
        vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest 
            = (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                        >> 7U));
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__539__PROF__CoreTop__l1123(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__539__PROF__CoreTop__l1123\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT____VdfgTmp_h1a4c5317__0 
        = ((IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_inst_valid) 
           & (IData)(vlSelf->CoreTop__DOT__valid));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__540__PROF__CoreTop__l2827(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__540__PROF__CoreTop__l2827\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__541__PROF__CoreTop__l2918(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__541__PROF__CoreTop__l2918\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___Cache_data_io_write_bus_valid_T_3 
        = ((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
           & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit) 
              & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_bits_we)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__542__PROF__CoreTop__l2791(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__542__PROF__CoreTop__l2791\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_bits_rdata_T_1 
        = ((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
           & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__543__PROF__CoreTop__l3597(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__543__PROF__CoreTop__l3597\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_addr_req_bits_ce) 
           & ((0xa0000000ULL <= vlSelf->CoreTop__DOT__MEM__DOT__addr_temp) 
              & (0xa2000000ULL >= vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__544__PROF__CoreTop__l5723(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__544__PROF__CoreTop__l5723\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__545__PROF__CoreTop__l2464(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__545__PROF__CoreTop__l2464\n"); );
    // Body
    vlSelf->CoreTop__DOT__ARBITER__DOT___GEN_98 = ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0) 
                                                   | (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__546__PROF__CoreTop__l5129(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__546__PROF__CoreTop__l5129\n"); );
    // Body
    vlSelf->CoreTop__DOT__IF_io_mret_flush = ((0U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                              & ((IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_ertn_flush) 
                                                 & (IData)(vlSelf->CoreTop__DOT__valid_2)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__547__PROF__CoreTop__l5130(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__547__PROF__CoreTop__l5130\n"); );
    // Body
    vlSelf->CoreTop__DOT__IF_io_excp_flush = ((0U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                              & ((IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_excp_flush) 
                                                 & (IData)(vlSelf->CoreTop__DOT__valid_2)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__549__PROF__CoreTop__l5133(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__549__PROF__CoreTop__l5133\n"); );
    // Body
    vlSelf->CoreTop__DOT__IF_io_wb_stall = ((IData)(vlSelf->CoreTop__DOT__valid_2) 
                                            & ((0U 
                                                != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                               & ((IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_ertn_flush) 
                                                  | (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_excp_flush))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__553__PROF__CoreTop__l1328(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__553__PROF__CoreTop__l1328\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__is_jump = ((3U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType)) 
                                              & (IData)(vlSelf->CoreTop__DOT__EX__DOT____VdfgTmp_h1a4c5317__0));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__554__PROF__CoreTop__l2892(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__554__PROF__CoreTop__l2892\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__555__PROF__CoreTop__l2900(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__555__PROF__CoreTop__l2900\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__556__PROF__CoreTop__l1792(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__556__PROF__CoreTop__l1792\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_en 
        = ((3U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state)) 
           | (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___Cache_data_io_write_bus_valid_T_3));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__557__PROF__CoreTop__l3007(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__557__PROF__CoreTop__l3007\n"); );
    // Body
    vlSelf->__VdfgTmp_h5a5a8c61__0 = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_valid_T_4) 
                                      | (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___Cache_data_io_write_bus_valid_T_3));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__558__PROF__CoreTop__l2986(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__558__PROF__CoreTop__l2986\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0_MPORT_4_en 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_bits_we) 
           & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_bits_rdata_T_1) 
              | (3U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__559__PROF__CoreTop__l3011(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__559__PROF__CoreTop__l3011\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_waymask 
        = (((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_bits_rdata_T_1) 
            & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_bits_we))
            ? (((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_1_result) 
                << 1U) | (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_0_result))
            : ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_r)
                ? 2U : 1U));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__560__PROF__CoreTop__l5302(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__560__PROF__CoreTop__l5302\n"); );
    // Body
    vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_valid 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)
            ? (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)
            : (2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__561__PROF__CoreTop__l3569(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__561__PROF__CoreTop__l3569\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_valid 
        = ((~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)) 
           & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_addr_req_bits_ce));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__562__PROF__CoreTop__l3592(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__562__PROF__CoreTop__l3592\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_addr_req_valid 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready) 
           & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_addr_req_bits_ce));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__563__PROF__CoreTop__l2744(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__563__PROF__CoreTop__l2744\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_24 
        = ((3U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state))
            ? ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)
                ? (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state)
                : 0U) : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__564__PROF__CoreTop__l5296(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__564__PROF__CoreTop__l5296\n"); );
    // Body
    vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_bits_addr 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)
            ? vlSelf->CoreTop__DOT__MEM__DOT__addr_temp
            : ((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state))
                ? vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_addr_reg
                : 0ULL));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__565__PROF__CoreTop__l5299(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__565__PROF__CoreTop__l5299\n"); );
    // Body
    vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_bits_addr 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)
            ? vlSelf->CoreTop__DOT__MEM__DOT__addr_temp
            : ((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state))
                ? vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_addr_reg
                : 0ULL));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__566__PROF__CoreTop__l2732(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__566__PROF__CoreTop__l2732\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___T_8 
        = ((~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)) 
           & (3U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__567__PROF__CoreTop__l5306(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__567__PROF__CoreTop__l5306\n"); );
    // Body
    vlSelf->CoreTop__DOT__ARBITER_io_in1_wb_ready = 
        (1U & ((~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)) 
               | (3U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__568__PROF__CoreTop__l5305(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__568__PROF__CoreTop__l5305\n"); );
    // Body
    vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_last 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)
            ? (2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state))
            : (7U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count_write)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__569__PROF__CoreTop__l5304(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__569__PROF__CoreTop__l5304\n"); );
    // Body
    vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_wstrb 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)
            ? (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wmask)
            : 0xffU);
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__570__PROF__CoreTop__l5303(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__570__PROF__CoreTop__l5303\n"); );
    // Body
    vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_data 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)
            ? vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata
            : (((QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0U]))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__571__PROF__CoreTop__l5295(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__571__PROF__CoreTop__l5295\n"); );
    // Body
    vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_valid 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)
            ? (1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__read_state))
            : (1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__572__PROF__CoreTop__l5298(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__572__PROF__CoreTop__l5298\n"); );
    // Body
    vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_valid 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)
            ? (1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state))
            : (1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__580__PROF__CoreTop__l3661(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__580__PROF__CoreTop__l3661\n"); );
    // Body
    vlSelf->CoreTop__DOT__CSR__DOT___GEN_1 = ((IData)(vlSelf->CoreTop__DOT__IF_io_excp_flush)
                                               ? 0xbULL
                                               : vlSelf->CoreTop__DOT__CSR__DOT__mcause);
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__581__PROF__CoreTop__l4565(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__581__PROF__CoreTop__l4565\n"); );
    // Body
    vlSelf->CoreTop__DOT___T_14 = ((IData)(vlSelf->CoreTop__DOT__IF_io_mret_flush) 
                                   | (IData)(vlSelf->CoreTop__DOT__IF_io_excp_flush));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__582__PROF__CoreTop__l32(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__582__PROF__CoreTop__l32\n"); );
    // Body
    vlSelf->CoreTop__DOT__IF__DOT___temp_T_10 = (4ULL 
                                                 + vlSelf->CoreTop__DOT__IF__DOT__temp);
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__583__PROF__CoreTop__l1790(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__583__PROF__CoreTop__l1790\n"); );
    // Body
    vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_addr 
        = ((3U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state))
            ? (0x1fU & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                >> 6U))) : 0U);
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__584__PROF__CoreTop__l1803(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__584__PROF__CoreTop__l1803\n"); );
    // Body
    vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_MPORT_1_data 
        = ((3U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state))
            ? (vlSelf->CoreTop__DOT__IF__DOT__temp 
               >> 0xbU) : 0ULL);
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__585__PROF__CoreTop__l1989(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__585__PROF__CoreTop__l1989\n"); );
    // Body
    vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_0_result 
        = ((vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0] 
            & (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_in_valid_REG)) 
           & ((vlSelf->CoreTop__DOT__IF__DOT__temp 
               >> 0xbU) == vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0
              [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0]));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__586__PROF__CoreTop__l1991(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__586__PROF__CoreTop__l1991\n"); );
    // Body
    vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_1_result 
        = ((vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0] 
            & (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_in_valid_REG)) 
           & ((vlSelf->CoreTop__DOT__IF__DOT__temp 
               >> 0xbU) == vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1
              [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0]));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__587__PROF__CoreTop__l1635(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__587__PROF__CoreTop__l1635\n"); );
    // Body
    vlSelf->CoreTop__DOT__WB_io_out_valid = ((~ (IData)(vlSelf->CoreTop__DOT__IF_io_wb_stall)) 
                                             & (IData)(vlSelf->CoreTop__DOT__valid_2));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__588__PROF__CoreTop__l3685(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__588__PROF__CoreTop__l3685\n"); );
    // Body
    vlSelf->CoreTop__DOT__CSR__DOT__mepc = (((0x300U 
                                              == (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_csr_csr_idx)) 
                                             & (IData)(vlSelf->CoreTop__DOT__WB_io_out_bits_ctrl_csr_csr_en))
                                             ? vlSelf->CoreTop__DOT__CSR__DOT___GEN_2
                                             : (((0x305U 
                                                  == (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_csr_csr_idx)) 
                                                 & (IData)(vlSelf->CoreTop__DOT__WB_io_out_bits_ctrl_csr_csr_en))
                                                 ? vlSelf->CoreTop__DOT__CSR__DOT___GEN_2
                                                 : 
                                                (((0x341U 
                                                   == (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_csr_csr_idx)) 
                                                  & (IData)(vlSelf->CoreTop__DOT__WB_io_out_bits_ctrl_csr_csr_en))
                                                  ? vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_csr_csr_data
                                                  : vlSelf->CoreTop__DOT__CSR__DOT___GEN_2)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__589__PROF__CoreTop__l3713(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__589__PROF__CoreTop__l3713\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->CoreTop__DOT__CSR__DOT__mtvec = 0ULL;
    } else if ((1U & (~ ((0x300U == (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_csr_csr_idx)) 
                         & (IData)(vlSelf->CoreTop__DOT__WB_io_out_bits_ctrl_csr_csr_en))))) {
        if (((0x305U == (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_csr_csr_idx)) 
             & (IData)(vlSelf->CoreTop__DOT__WB_io_out_bits_ctrl_csr_csr_en))) {
            vlSelf->CoreTop__DOT__CSR__DOT__mtvec = vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_csr_csr_data;
        }
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__590__PROF__CoreTop__l2894(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__590__PROF__CoreTop__l2894\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__591__PROF__CoreTop__l2902(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__591__PROF__CoreTop__l2902\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__592__PROF__CoreTop__l1790(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__592__PROF__CoreTop__l1790\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_addr 
        = ((IData)(vlSelf->__VdfgTmp_h5a5a8c61__0) ? 
           (0x1fU & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                             >> 6U))) : 0U);
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__593__PROF__CoreTop__l1803(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__593__PROF__CoreTop__l1803\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_MPORT_1_data 
        = ((IData)(vlSelf->__VdfgTmp_h5a5a8c61__0) ? 
           (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
            >> 0xbU) : 0ULL);
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__594__PROF__CoreTop__l2733(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__594__PROF__CoreTop__l2733\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_10 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___T_8)
            ? 0U : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__595__PROF__CoreTop__l2486(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__595__PROF__CoreTop__l2486\n"); );
    // Body
    vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0 
        = ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)) 
           & ((IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_valid) 
              | (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_valid)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__596__PROF__CoreTop__l1299(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__596__PROF__CoreTop__l1299\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT___branch_result_T_1 
        = (vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm 
           + vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC);
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__597__PROF__CoreTop__l5353(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__597__PROF__CoreTop__l5353\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->CoreTop__DOT__tail = 0U;
    } else if (vlSelf->CoreTop__DOT___T_4) {
        vlSelf->CoreTop__DOT__tail = 0U;
    } else if (vlSelf->CoreTop__DOT___T) {
        vlSelf->CoreTop__DOT__tail = vlSelf->CoreTop__DOT___tail_T_1;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__598__PROF__CoreTop__l5360(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__598__PROF__CoreTop__l5360\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__599__PROF__CoreTop__l1994(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__599__PROF__CoreTop__l1994\n"); );
    // Body
    if (vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_1_result) {
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[1U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][1U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[2U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][2U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[3U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][3U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[4U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][4U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[5U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][5U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[6U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][6U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[7U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][7U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[8U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][8U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[9U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][9U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xaU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0xaU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xbU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0xbU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xcU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0xcU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xdU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0xdU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xeU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0xeU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xfU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0xfU];
    } else if (vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_0_result) {
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][0U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[1U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][1U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[2U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][2U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[3U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][3U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[4U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][4U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[5U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][5U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[6U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][6U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[7U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][7U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[8U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][8U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[9U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][9U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xaU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][0xaU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xbU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][0xbU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xcU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][0xcU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xdU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][0xdU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xeU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][0xeU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xfU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][0xfU];
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__600__PROF__CoreTop__l1993(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__600__PROF__CoreTop__l1993\n"); );
    // Body
    vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit 
        = ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_1_result) 
           | (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_0_result));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__603__PROF__CoreTop__l1647(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__603__PROF__CoreTop__l1647\n"); );
    // Body
    vlSelf->CoreTop__DOT__WB_io_out_bits_ctrl_csr_csr_en 
        = ((IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_csr_csr_en) 
           & (IData)(vlSelf->CoreTop__DOT__valid_2));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__606__PROF__CoreTop__l2898(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__606__PROF__CoreTop__l2898\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__607__PROF__CoreTop__l2487(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__607__PROF__CoreTop__l2487\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__608__PROF__CoreTop__l2489(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__608__PROF__CoreTop__l2489\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__609__PROF__SRAMTemp__l248(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__609__PROF__SRAMTemp__l248\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__610__PROF__CoreTop__l5261(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__610__PROF__CoreTop__l5261\n"); );
    // Body
    vlSelf->CoreTop__DOT__ICACHE_io_out_rdata_rep_valid 
        = ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)) 
           & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)
               ? (2U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state))
               : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state) 
                  & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r) 
                     & (2U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state))))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__611__PROF__CoreTop__l5291(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__611__PROF__CoreTop__l5291\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMEM_wd_last = ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)
                                           ? (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_last)
                                           : ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)) 
                                              & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state) 
                                                 & ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)) 
                                                    & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_last)))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__612__PROF__CoreTop__l2495(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__612__PROF__CoreTop__l2495\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__614__PROF__CoreTop__l2497(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__614__PROF__CoreTop__l2497\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__615__PROF__CoreTop__l2491(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__615__PROF__CoreTop__l2491\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__622__PROF__CoreTop__l5118(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__622__PROF__CoreTop__l5118\n"); );
    // Body
    vlSelf->io_pc = vlSelf->CoreTop__DOT__IF__DOT__temp;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__683__PROF__CoreTop__l2136(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__683__PROF__CoreTop__l2136\n"); );
    // Body
    vlSelf->CoreTop__DOT__ICACHE__DOT___io_in_rdata_rep_bits_rdata_T_1 
        = ((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
           & (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__684__PROF__CoreTop__l3662(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__684__PROF__CoreTop__l3662\n"); );
    // Body
    vlSelf->CoreTop__DOT__CSR__DOT___GEN_2 = ((IData)(vlSelf->CoreTop__DOT__IF_io_excp_flush)
                                               ? vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_PC
                                               : vlSelf->CoreTop__DOT__CSR__DOT__mepc);
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__685__PROF__CSR_DIFF__l10(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__685__PROF__CSR_DIFF__l10\n"); );
    // Body
    vlSelf->CoreTop__DOT__CSR__DOT__CSRDIFF__DOT__inst_csr[0U] 
        = vlSelf->CoreTop__DOT__CSR__DOT__mepc;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__686__PROF__CSR_DIFF__l13(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__686__PROF__CSR_DIFF__l13\n"); );
    // Body
    vlSelf->CoreTop__DOT__CSR__DOT__CSRDIFF__DOT__inst_csr[3U] 
        = vlSelf->CoreTop__DOT__CSR__DOT__mtvec;
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__687__PROF__CoreTop__l5833(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__687__PROF__CoreTop__l5833\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T_13) {
        vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_csr_csr_idx 
            = vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_csr_csr_idx;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__688__PROF__CoreTop__l5827(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__688__PROF__CoreTop__l5827\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T_13) {
        vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_csr_csr_data 
            = vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_csr_csr_data;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__689__PROF__CoreTop__l2914(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__689__PROF__CoreTop__l2914\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__690__PROF__CoreTop__l2102(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__690__PROF__CoreTop__l2102\n"); );
    // Body
    vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_17 = (((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_rdata_rep_bits_last) 
                                                   & (IData)(vlSelf->CoreTop__DOT__ICACHE_io_out_rdata_rep_valid))
                                                   ? 3U
                                                   : (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state));
}

extern const VlUnpacked<CData/*0:0*/, 64> VCoreTop__ConstPool__TABLE_h1d315e1c_0;
extern const VlUnpacked<CData/*1:0*/, 64> VCoreTop__ConstPool__TABLE_h2941df74_0;

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__691__PROF__SRAMTemp__l270(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__691__PROF__SRAMTemp__l270\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__692__PROF__CoreTop__l3291(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__692__PROF__CoreTop__l3291\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT___GEN_8 
        = ((((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready) 
             & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_ready)) 
            & (2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state)))
            ? 3U : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__693__PROF__CoreTop__l3585(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__693__PROF__CoreTop__l3585\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_wdata_req_ready 
        = ((~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)) 
           & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_ready));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__696__PROF__CoreTop__l3587(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__696__PROF__CoreTop__l3587\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_wb_valid 
        = ((~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)) 
           & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wb_valid));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__697__PROF__CoreTop__l3613(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__697__PROF__CoreTop__l3613\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_out_wb_valid 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready) 
           & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wb_valid));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__698__PROF__CoreTop__l3581(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__698__PROF__CoreTop__l3581\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_rdata_rep_valid 
        = ((~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)) 
           & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_rdata_rep_valid));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__699__PROF__CoreTop__l3295(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__699__PROF__CoreTop__l3295\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_valid 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready) 
           & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_rdata_rep_valid));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__700__PROF__CoreTop__l4480(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__700__PROF__CoreTop__l4480\n"); );
    // Body
    vlSelf->CoreTop__DOT___tail_T_1 = (0x3fU & ((IData)(1U) 
                                                + (IData)(vlSelf->CoreTop__DOT__tail)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__701__PROF__CoreTop__l4526(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__701__PROF__CoreTop__l4526\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__702__PROF__CoreTop__l4496(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__702__PROF__CoreTop__l4496\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__703__PROF__CoreTop__l5346(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__703__PROF__CoreTop__l5346\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->CoreTop__DOT__head = 0U;
    } else if (vlSelf->CoreTop__DOT___T_4) {
        vlSelf->CoreTop__DOT__head = 0U;
    } else if (((IData)(vlSelf->CoreTop__DOT__IF_io_cache_req_rdata_rep_valid) 
                & (~ (IData)(vlSelf->CoreTop__DOT__full)))) {
        vlSelf->CoreTop__DOT__head = vlSelf->CoreTop__DOT___head_T_1;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__704__PROF__CoreTop__l5126(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__704__PROF__CoreTop__l5126\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__709__PROF__CoreTop__l1789(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__709__PROF__CoreTop__l1789\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__710__PROF__CoreTop__l2745(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__710__PROF__CoreTop__l2745\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_30 
        = (((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_wdata_req_ready) 
            & (7U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count_write)))
            ? 3U : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__711__PROF__CoreTop__l2765(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__711__PROF__CoreTop__l2765\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT____VdfgTmp_h9d851aea__0 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_wdata_req_ready) 
           & (2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__714__PROF__CoreTop__l2747(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__714__PROF__CoreTop__l2747\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_32 
        = ((3U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state))
            ? ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_wb_valid)
                ? 0U : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state))
            : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__715__PROF__CoreTop__l2739(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__715__PROF__CoreTop__l2739\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__716__PROF__CoreTop__l3294(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__716__PROF__CoreTop__l3294\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT___GEN_10 
        = ((3U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state))
            ? (((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_out_wb_valid) 
                & (3U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state)))
                ? 0U : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state))
            : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__717__PROF__CoreTop__l2742(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__717__PROF__CoreTop__l2742\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_22 
        = (((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_rdata_rep_bits_last) 
            & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_rdata_rep_valid))
            ? 3U : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__719__PROF__CoreTop__l3290(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__719__PROF__CoreTop__l3290\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT___GEN_2 
        = (((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_valid) 
            & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready) 
               & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_rdata_rep_bits_last)))
            ? 0U : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__read_state));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__720__PROF__CoreTop__l1573(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__720__PROF__CoreTop__l1573\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__721__PROF__CoreTop__l4539(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__721__PROF__CoreTop__l4539\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__722__PROF__CoreTop__l4509(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__722__PROF__CoreTop__l4509\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__723__PROF__CoreTop__l5125(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__723__PROF__CoreTop__l5125\n"); );
    // Body
    vlSelf->CoreTop__DOT__IF_io_cache_req_rdata_rep_valid 
        = ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT___io_in_rdata_rep_bits_rdata_T_1) 
           | ((2U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
              & (3U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__725__PROF__CoreTop__l3665(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__725__PROF__CoreTop__l3665\n"); );
    // Body
    vlSelf->CoreTop__DOT__CSR__DOT____VdfgTmp_h0abbaf32__0 
        = ((0x304U == (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_csr_csr_idx)) 
           & (IData)(vlSelf->CoreTop__DOT__WB_io_out_bits_ctrl_csr_csr_en));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__726__PROF__CoreTop__l3667(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__726__PROF__CoreTop__l3667\n"); );
    // Body
    vlSelf->CoreTop__DOT__CSR__DOT____VdfgTmp_had87db98__0 
        = ((0x342U == (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_csr_csr_idx)) 
           & (IData)(vlSelf->CoreTop__DOT__WB_io_out_bits_ctrl_csr_csr_en));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__727__PROF__CoreTop__l5787(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__727__PROF__CoreTop__l5787\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T_8) {
        vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_csr_csr_idx 
            = vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_csr_csr_idx;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__728__PROF__CoreTop__l5781(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__728__PROF__CoreTop__l5781\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T_8) {
        vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_csr_csr_data 
            = ((0x40U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                ? 0ULL : ((0x1aU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                           ? 0ULL : ((0x68U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                      ? 0ULL : ((0x44U 
                                                 == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                 ? 0ULL
                                                 : 
                                                ((0x69U 
                                                  == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                  ? 0ULL
                                                  : 
                                                 ((0x71U 
                                                   == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                   ? 0ULL
                                                   : 
                                                  ((0x72U 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? 0ULL
                                                    : 
                                                   ((0x6dU 
                                                     == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                     ? 0ULL
                                                     : 
                                                    ((0x78U 
                                                      == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                      ? 0ULL
                                                      : 
                                                     ((0x79U 
                                                       == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                       ? 0ULL
                                                       : 
                                                      ((0x7aU 
                                                        == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                        ? 0ULL
                                                        : 
                                                       ((0xdU 
                                                         == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                         ? 0ULL
                                                         : 
                                                        ((1U 
                                                          == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                          ? 0ULL
                                                          : 
                                                         ((7U 
                                                           == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                           ? 0ULL
                                                           : 
                                                          ((0xfU 
                                                            == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                            ? 0ULL
                                                            : 
                                                           ((0x12U 
                                                             == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                             ? 0ULL
                                                             : 
                                                            ((0x10U 
                                                              == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                              ? 0ULL
                                                              : 
                                                             ((0x13U 
                                                               == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                               ? 0ULL
                                                               : 
                                                              ((0x43U 
                                                                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                                ? 0ULL
                                                                : 
                                                               ((0x15U 
                                                                 == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                                 ? 
                                                                (vlSelf->CoreTop__DOT__EX_io_csr_rd_io_rd_data 
                                                                 | vlSelf->CoreTop__DOT__EX__DOT__src1)
                                                                 : 
                                                                ((0x16U 
                                                                  == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                                  ? vlSelf->CoreTop__DOT__EX__DOT__src1
                                                                  : 0ULL)))))))))))))))))))));
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__729__PROF__CoreTop__l2768(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__729__PROF__CoreTop__l2768\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_89 
        = (0xfU & ((3U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state))
                    ? ((7U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count_write))
                        ? 0U : ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count_write) 
                                + (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT____VdfgTmp_h9d851aea__0)))
                    : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count_write)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__730__PROF__CoreTop__l2769(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__730__PROF__CoreTop__l2769\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__732__PROF__CoreTop__l4564(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__732__PROF__CoreTop__l4564\n"); );
    // Body
    vlSelf->CoreTop__DOT___T_13 = (1U & ((~ ((~ (IData)(vlSelf->CoreTop__DOT__valid_1)) 
                                             | (IData)(vlSelf->CoreTop__DOT__MEM__DOT___io_out_valid_T_6))) 
                                         & (~ (IData)(vlSelf->CoreTop__DOT__IF_io_wb_stall))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__733__PROF__CoreTop__l5163(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__733__PROF__CoreTop__l5163\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX_io_out_ready = (1U & (
                                                   (~ (IData)(vlSelf->CoreTop__DOT__MEM__DOT___io_out_valid_T_6)) 
                                                   & (~ (IData)(vlSelf->CoreTop__DOT__IF_io_wb_stall))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__734__PROF__CoreTop__l5137(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__734__PROF__CoreTop__l5137\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__735__PROF__CoreTop__l4481(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__735__PROF__CoreTop__l4481\n"); );
    // Body
    vlSelf->CoreTop__DOT___head_T_1 = (0x3fU & ((IData)(1U) 
                                                + (IData)(vlSelf->CoreTop__DOT__head)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__736__PROF__CoreTop__l4414(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__736__PROF__CoreTop__l4414\n"); );
    // Body
    vlSelf->CoreTop__DOT__empty = ((IData)(vlSelf->CoreTop__DOT__head) 
                                   == (IData)(vlSelf->CoreTop__DOT__tail));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__737__PROF__CoreTop__l4415(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__737__PROF__CoreTop__l4415\n"); );
    // Body
    vlSelf->CoreTop__DOT__full = (((0x1fU & (IData)(vlSelf->CoreTop__DOT__head)) 
                                   == (0x1fU & (IData)(vlSelf->CoreTop__DOT__tail))) 
                                  & (((IData)(vlSelf->CoreTop__DOT__head) 
                                      ^ (IData)(vlSelf->CoreTop__DOT__tail)) 
                                     >> 5U));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__738__PROF__CoreTop__l3668(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__738__PROF__CoreTop__l3668\n"); );
    // Body
    vlSelf->CoreTop__DOT__CSR__DOT___GEN_8 = ((IData)(vlSelf->CoreTop__DOT__CSR__DOT____VdfgTmp_had87db98__0)
                                               ? vlSelf->CoreTop__DOT__CSR__DOT__mie
                                               : ((IData)(vlSelf->CoreTop__DOT__CSR__DOT____VdfgTmp_h0abbaf32__0)
                                                   ? vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_csr_csr_data
                                                   : vlSelf->CoreTop__DOT__CSR__DOT__mie));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__739__PROF__CoreTop__l3669(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__739__PROF__CoreTop__l3669\n"); );
    // Body
    vlSelf->CoreTop__DOT__CSR__DOT___GEN_9 = ((IData)(vlSelf->CoreTop__DOT__CSR__DOT____VdfgTmp_had87db98__0)
                                               ? vlSelf->CoreTop__DOT__CSR__DOT__mip
                                               : ((IData)(vlSelf->CoreTop__DOT__CSR__DOT____VdfgTmp_h0abbaf32__0)
                                                   ? vlSelf->CoreTop__DOT__CSR__DOT__mip
                                                   : 
                                                  (((0x344U 
                                                     == (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_csr_csr_idx)) 
                                                    & (IData)(vlSelf->CoreTop__DOT__WB_io_out_bits_ctrl_csr_csr_en))
                                                    ? vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_csr_csr_data
                                                    : vlSelf->CoreTop__DOT__CSR__DOT__mip)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__742__PROF__CoreTop__l1149(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__742__PROF__CoreTop__l1149\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__src1 = ((0U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src1Type))
                                            ? vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_src1
                                            : ((2U 
                                                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src1Type))
                                                ? vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC
                                                : 0ULL));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__744__PROF__CoreTop__l4591(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__744__PROF__CoreTop__l4591\n"); );
    // Body
    vlSelf->CoreTop__DOT___GEN_248 = ((IData)(vlSelf->CoreTop__DOT___T_13) 
                                      | ((~ (IData)(vlSelf->CoreTop__DOT__WB_io_out_valid)) 
                                         & (IData)(vlSelf->CoreTop__DOT__valid_2)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__745__PROF__CoreTop__l1360(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__745__PROF__CoreTop__l1360\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT____VdfgTmp_h37196788__0 
        = ((0U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
           & (IData)(vlSelf->CoreTop__DOT__EX_io_out_ready));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__746__PROF__CoreTop__l399(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__746__PROF__CoreTop__l399\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__747__PROF__CoreTop__l279(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__747__PROF__CoreTop__l279\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__748__PROF__CoreTop__l338(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__748__PROF__CoreTop__l338\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__749__PROF__CoreTop__l447(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__749__PROF__CoreTop__l447\n"); );
    // Body
    vlSelf->__VdfgTmp_ha116befc__0 = ((IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest) 
                                      == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                   >> 0xfU)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__750__PROF__CoreTop__l447(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__750__PROF__CoreTop__l447\n"); );
    // Body
    vlSelf->__VdfgTmp_ha248cb35__0 = ((IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest) 
                                      == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                   >> 0x14U)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__751__PROF__CoreTop__l217(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__751__PROF__CoreTop__l217\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__752__PROF__CoreTop__l2104(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__752__PROF__CoreTop__l2104\n"); );
    // Body
    vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_19 = ((3U 
                                                   == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state))
                                                   ? 
                                                  ((IData)(vlSelf->CoreTop__DOT__full)
                                                    ? (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state)
                                                    : 0U)
                                                   : (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__753__PROF__CoreTop__l2096(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__753__PROF__CoreTop__l2096\n"); );
    // Body
    vlSelf->CoreTop__DOT__ICACHE__DOT___T_5 = ((~ (IData)(vlSelf->CoreTop__DOT__full)) 
                                               & (3U 
                                                  == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__754__PROF__CoreTop__l1251(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__754__PROF__CoreTop__l1251\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_25 
        = VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->CoreTop__DOT__EX__DOT__src1), 
                         (0x1fU & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__755__PROF__CoreTop__l1255(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__755__PROF__CoreTop__l1255\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_31 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__src1) 
           >> (0x1fU & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__756__PROF__CoreTop__l1158(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__756__PROF__CoreTop__l1158\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_10 
        = (vlSelf->CoreTop__DOT__EX__DOT__src1 - vlSelf->CoreTop__DOT__EX__DOT__src2);
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__757__PROF__CoreTop__l1153(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__757__PROF__CoreTop__l1153\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1 
        = (vlSelf->CoreTop__DOT__EX__DOT__src1 + vlSelf->CoreTop__DOT__EX__DOT__src2);
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__758__PROF__CoreTop__l1284(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__758__PROF__CoreTop__l1284\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT___compar_result_T 
        = (vlSelf->CoreTop__DOT__EX__DOT__src1 < vlSelf->CoreTop__DOT__EX__DOT__src2);
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__759__PROF__CoreTop__l1287(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__759__PROF__CoreTop__l1287\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT___compar_result_T_4 
        = VL_LTS_IQQ(64, vlSelf->CoreTop__DOT__EX__DOT__src1, vlSelf->CoreTop__DOT__EX__DOT__src2);
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__760__PROF__CoreTop__l5702(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__760__PROF__CoreTop__l5702\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T) {
        vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype 
            = vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_2;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__761__PROF__CoreTop__l5123(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__761__PROF__CoreTop__l5123\n"); );
    // Body
    vlSelf->CoreTop__DOT__IF_io_branch_io_is_jump = 
        ((IData)(vlSelf->CoreTop__DOT__EX__DOT__is_jump) 
         & (IData)(vlSelf->CoreTop__DOT__EX__DOT____VdfgTmp_h37196788__0));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__762__PROF__CoreTop__l406(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__762__PROF__CoreTop__l406\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__763__PROF__CoreTop__l294(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__763__PROF__CoreTop__l294\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__764__PROF__CoreTop__l353(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__764__PROF__CoreTop__l353\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__765__PROF__CoreTop__l232(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__765__PROF__CoreTop__l232\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__766__PROF__CoreTop__l2097(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__766__PROF__CoreTop__l2097\n"); );
    // Body
    vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_6 = ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT___T_5)
                                                  ? 0U
                                                  : (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__767__PROF__CoreTop__l2100(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__767__PROF__CoreTop__l2100\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__768__PROF__CoreTop__l1251(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__768__PROF__CoreTop__l1251\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_28 
        = (((QData)((IData)(((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_25 
                              >> 0x1fU) ? 0xffffffffU
                              : 0U))) << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_25)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__769__PROF__CoreTop__l1255(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__769__PROF__CoreTop__l1255\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_35 
        = (((QData)((IData)(((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_31 
                              >> 0x1fU) ? 0xffffffffU
                              : 0U))) << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_31)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__770__PROF__CoreTop__l1156(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__770__PROF__CoreTop__l1156\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_7 
        = (((QData)((IData)(((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1 
                                            >> 0x1fU)))
                              ? 0xffffffffU : 0U))) 
            << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__772__PROF__CoreTop__l309(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__772__PROF__CoreTop__l309\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__773__PROF__CoreTop__l368(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__773__PROF__CoreTop__l368\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__774__PROF__CoreTop__l247(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__774__PROF__CoreTop__l247\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__775__PROF__CoreTop__l1268(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__775__PROF__CoreTop__l1268\n"); );
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
        vlSelf->CoreTop__DOT__EX__DOT___GEN_76[0U] 
            = (IData)((((QData)((IData)(((__Vtemp_h0fbea1b2__0[0U] 
                                          >> 0x1fU)
                                          ? 0xffffffffU
                                          : 0U))) << 0x20U) 
                       | (QData)((IData)(((IData)(vlSelf->CoreTop__DOT__EX__DOT__src1) 
                                          << (0x1fU 
                                              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)))))));
        vlSelf->CoreTop__DOT__EX__DOT___GEN_76[1U] 
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
        vlSelf->CoreTop__DOT__EX__DOT___GEN_76[2U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT___GEN_76[3U] = 0U;
    } else if ((0x41U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
        vlSelf->CoreTop__DOT__EX__DOT___GEN_76[0U] 
            = __Vtemp_h97f32683__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT___GEN_76[1U] 
            = __Vtemp_h97f32683__0[1U];
        vlSelf->CoreTop__DOT__EX__DOT___GEN_76[2U] 
            = __Vtemp_h97f32683__0[2U];
        vlSelf->CoreTop__DOT__EX__DOT___GEN_76[3U] 
            = (0x7fffffffU & __Vtemp_h97f32683__0[3U]);
    } else {
        vlSelf->CoreTop__DOT__EX__DOT___GEN_76[0U] 
            = __Vtemp_hb23900ce__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT___GEN_76[1U] 
            = __Vtemp_hb23900ce__0[1U];
        vlSelf->CoreTop__DOT__EX__DOT___GEN_76[2U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT___GEN_76[3U] = 0U;
    }
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__776__PROF__CoreTop__l1383(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__776__PROF__CoreTop__l1383\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_csr_csr_idx 
        = ((0x40U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
            ? 0U : ((0x1aU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                     ? 0U : ((0x68U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                              ? 0U : ((0x44U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                       ? 0U : ((0x69U 
                                                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                ? 0U
                                                : (
                                                   (0x71U 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? 0U
                                                    : 
                                                   ((0x72U 
                                                     == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                     ? 0U
                                                     : 
                                                    ((0x6dU 
                                                      == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                      ? 0U
                                                      : 
                                                     ((0x78U 
                                                       == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                       ? 0U
                                                       : 
                                                      ((0x79U 
                                                        == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                        ? 0U
                                                        : 
                                                       ((0x7aU 
                                                         == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                         ? 0U
                                                         : 
                                                        ((0xdU 
                                                          == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                          ? 0U
                                                          : 
                                                         ((1U 
                                                           == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                           ? 0U
                                                           : 
                                                          ((7U 
                                                            == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                            ? 0U
                                                            : 
                                                           ((0xfU 
                                                             == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                             ? 0U
                                                             : 
                                                            ((0x12U 
                                                              == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                              ? 0U
                                                              : 
                                                             ((0x10U 
                                                               == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                               ? 0U
                                                               : 
                                                              ((0x13U 
                                                                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                                ? 0U
                                                                : 
                                                               ((0x43U 
                                                                 == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                                 ? 0U
                                                                 : 
                                                                ((0x15U 
                                                                  == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                                  ? (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_csr_csr_idx)
                                                                  : 
                                                                 ((0x16U 
                                                                   == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                                   ? (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_csr_csr_idx)
                                                                   : 0U)))))))))))))))))))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__777__PROF__CoreTop__l1122(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__777__PROF__CoreTop__l1122\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__is_mul = (((0x78U 
                                               == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                                              | (7U 
                                                 == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) 
                                             & (IData)(vlSelf->CoreTop__DOT__EX__DOT____VdfgTmp_h1a4c5317__0));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__778__PROF__CoreTop__l1317(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__778__PROF__CoreTop__l1317\n"); );
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
                                                       & (vlSelf->CoreTop__DOT__EX__DOT__src1 
                                                          >= vlSelf->CoreTop__DOT__EX__DOT__src2)))))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__779__PROF__CoreTop__l1137(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__779__PROF__CoreTop__l1137\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT___is_divw_T_2 = (
                                                   (0x79U 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                                                   | (0x10U 
                                                      == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__780__PROF__CoreTop__l1135(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__780__PROF__CoreTop__l1135\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT____VdfgTmp_h08208b49__0 
        = ((0x7aU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
           | (0xdU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__781__PROF__CoreTop__l1049(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__781__PROF__CoreTop__l1049\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_in_bits_ctrl_flow_div_signed 
        = (((0x43U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
            | (0x79U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) 
           | ((0x12U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
              | (0x7aU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__782__PROF__CoreTop__l383(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__782__PROF__CoreTop__l383\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__783__PROF__CoreTop__l262(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__783__PROF__CoreTop__l262\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__784__PROF__CoreTop__l5165(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__784__PROF__CoreTop__l5165\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX_io_csr_rd_io_rd_data = 
        ((0x300U == (IData)(vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_csr_csr_idx))
          ? vlSelf->CoreTop__DOT__CSR__DOT__mstatus
          : ((0x305U == (IData)(vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_csr_csr_idx))
              ? vlSelf->CoreTop__DOT__CSR__DOT__mtvec
              : ((0x341U == (IData)(vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_csr_csr_idx))
                  ? vlSelf->CoreTop__DOT__CSR__DOT__mepc
                  : ((0x342U == (IData)(vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_csr_csr_idx))
                      ? vlSelf->CoreTop__DOT__CSR__DOT__mcause
                      : ((0x304U == (IData)(vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_csr_csr_idx))
                          ? vlSelf->CoreTop__DOT__CSR__DOT__mie
                          : ((0x344U == (IData)(vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_csr_csr_idx))
                              ? vlSelf->CoreTop__DOT__CSR__DOT__mip
                              : 0ULL))))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__785__PROF__CoreTop__l653(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__785__PROF__CoreTop__l653\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_valid 
        = ((0x44U != (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count)) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__is_mul));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__786__PROF__CoreTop__l1319(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__786__PROF__CoreTop__l1319\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__787__PROF__CoreTop__l1327(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__787__PROF__CoreTop__l1327\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__is_branch = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__branch_flag) 
                                                & (IData)(vlSelf->CoreTop__DOT__EX__DOT____VdfgTmp_h1a4c5317__0));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__788__PROF__CoreTop__l1048(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__788__PROF__CoreTop__l1048\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_in_valid 
        = ((4U != (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__state)) 
           & ((((((0x43U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                  | (0x13U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) 
                 | (IData)(vlSelf->CoreTop__DOT__EX__DOT___is_divw_T_2)) 
                | ((0x12U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                   | (0xfU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)))) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT____VdfgTmp_h08208b49__0)) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT____VdfgTmp_h1a4c5317__0)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__789__PROF__CoreTop__l1138(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__789__PROF__CoreTop__l1138\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__is_divw = ((IData)(vlSelf->CoreTop__DOT__EX__DOT___is_divw_T_2) 
                                              | (IData)(vlSelf->CoreTop__DOT__EX__DOT____VdfgTmp_h08208b49__0));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__790__PROF__CoreTop__l387(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__790__PROF__CoreTop__l387\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__791__PROF__CoreTop__l264(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__791__PROF__CoreTop__l264\n"); );
    // Body
    vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0 = 
        ((0x13U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
          ? 8U : ((0x1013U == (0xfc00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                   ? 8U : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_189)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__792__PROF__CoreTop__l5124(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__792__PROF__CoreTop__l5124\n"); );
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
                                                         (4ULL 
                                                          + vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC)))))))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__793__PROF__CoreTop__l5122(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__793__PROF__CoreTop__l5122\n"); );
    // Body
    vlSelf->CoreTop__DOT__IF_io_branch_io_is_branch 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__is_branch) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT____VdfgTmp_h37196788__0));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__794__PROF__CoreTop__l1330(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__794__PROF__CoreTop__l1330\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT___io_is_flush_T_2 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__is_branch) 
           | (IData)(vlSelf->CoreTop__DOT__EX__DOT__is_jump));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__795__PROF__CoreTop__l675(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__795__PROF__CoreTop__l675\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__NewReq 
        = ((0U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__state)) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_in_valid));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__796__PROF__CoreTop__l1050(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__796__PROF__CoreTop__l1050\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_in_bits_ctrl_data_src1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__is_divw)
            ? ((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_in_bits_ctrl_flow_div_signed)
                ? (((QData)((IData)(((1U & (IData)(
                                                   (vlSelf->CoreTop__DOT__EX__DOT__src1 
                                                    >> 0x1fU)))
                                      ? 0xffffffffU
                                      : 0U))) << 0x20U) 
                   | (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__src1)))
                : (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__src1)))
            : vlSelf->CoreTop__DOT__EX__DOT__src1);
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__797__PROF__CoreTop__l1051(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__797__PROF__CoreTop__l1051\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_in_bits_ctrl_data_src2 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__is_divw)
            ? ((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_in_bits_ctrl_flow_div_signed)
                ? (((QData)((IData)(((1U & (IData)(
                                                   (vlSelf->CoreTop__DOT__EX__DOT__src2 
                                                    >> 0x1fU)))
                                      ? 0xffffffffU
                                      : 0U))) << 0x20U) 
                   | (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)))
                : (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)))
            : vlSelf->CoreTop__DOT__EX__DOT__src2);
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__798__PROF__CoreTop__l446(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__798__PROF__CoreTop__l446\n"); );
    // Body
    vlSelf->CoreTop__DOT__ID__DOT__imm = ((((((8U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                               ? ((
                                                   ((vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                     >> 0x1fU)
                                                     ? 0xfffffffffffffULL
                                                     : 0ULL) 
                                                   << 0xcU) 
                                                  | (QData)((IData)(
                                                                    (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                                     >> 0x14U))))
                                               : 0ULL) 
                                             | ((7U 
                                                 == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                                 ? 
                                                ((((0x80000U 
                                                    & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)
                                                    ? 0xfffffffffffULL
                                                    : 0ULL) 
                                                  << 0x14U) 
                                                 | (QData)((IData)(
                                                                   ((0xff000U 
                                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst) 
                                                                    | ((0x800U 
                                                                        & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                                           >> 9U)) 
                                                                       | (0x7feU 
                                                                          & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                                             >> 0x14U)))))))
                                                 : 0ULL)) 
                                            | ((3U 
                                                == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                                ? (
                                                   ((QData)((IData)(
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
                                               ? ((
                                                   ((vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                     >> 0x1fU)
                                                     ? 0xfffffffffffffULL
                                                     : 0ULL) 
                                                   << 0xcU) 
                                                  | (QData)((IData)(
                                                                    ((0xfe0U 
                                                                      & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                                         >> 0x14U)) 
                                                                     | (0x1fU 
                                                                        & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                                           >> 7U))))))
                                               : 0ULL)) 
                                          | ((0xbU 
                                              == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                              ? (((
                                                   (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                    >> 0x1fU)
                                                    ? 0x7ffffffffffffULL
                                                    : 0ULL) 
                                                  << 0xdU) 
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__799__PROF__CoreTop__l1331(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__799__PROF__CoreTop__l1331\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT___io_is_flush_T_4 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT___io_is_flush_T_2) 
           & ((IData)(vlSelf->CoreTop__DOT__valid) 
              & (IData)(vlSelf->CoreTop__DOT__EX_io_out_ready)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__800__PROF__CoreTop__l679(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__800__PROF__CoreTop__l679\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aSign 
        = ((IData)((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_in_bits_ctrl_data_src1 
                    >> 0x3fU)) & (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_in_bits_ctrl_flow_div_signed));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__801__PROF__CoreTop__l682(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__801__PROF__CoreTop__l682\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bSign 
        = ((IData)((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_in_bits_ctrl_data_src2 
                    >> 0x3fU)) & (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_in_bits_ctrl_flow_div_signed));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__802__PROF__CoreTop__l5128(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__802__PROF__CoreTop__l5128\n"); );
    // Body
    vlSelf->CoreTop__DOT__IF_io_flush = ((0U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                         & (IData)(vlSelf->CoreTop__DOT__EX__DOT___io_is_flush_T_4));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__803__PROF__CoreTop__l933(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__803__PROF__CoreTop__l933\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_out_bits_result_remainder 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aSign)
            ? (- (((QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[4U])) 
                   << 0x3fU) | (((QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[3U])) 
                                 << 0x1fU) | ((QData)((IData)(
                                                              vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[2U])) 
                                              >> 1U))))
            : (((QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[4U])) 
                << 0x3fU) | (((QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[3U])) 
                              << 0x1fU) | ((QData)((IData)(
                                                           vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[2U])) 
                                           >> 1U))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__804__PROF__CoreTop__l932(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__804__PROF__CoreTop__l932\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_out_bits_result_quotient 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aSign) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bSign))
            ? (- (((QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[1U])) 
                   << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[0U]))))
            : (((QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[0U]))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__805__PROF__CoreTop__l684(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__805__PROF__CoreTop__l684\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bSign)
            ? (- vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_in_bits_ctrl_data_src2)
            : vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_in_bits_ctrl_data_src2);
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__806__PROF__CoreTop__l40(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__806__PROF__CoreTop__l40\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__807__PROF__CoreTop__l4409(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__807__PROF__CoreTop__l4409\n"); );
    // Body
    vlSelf->CoreTop__DOT___T_2 = ((IData)(vlSelf->CoreTop__DOT__IF_io_flush) 
                                  | (IData)(vlSelf->CoreTop__DOT___T_14));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__808__PROF__CoreTop__l5134(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__808__PROF__CoreTop__l5134\n"); );
    // Body
    vlSelf->CoreTop__DOT__IF_io_ex_stall = ((~ (IData)(vlSelf->CoreTop__DOT__IF_io_flush)) 
                                            & (IData)(vlSelf->CoreTop__DOT__EX__DOT___io_is_flush_T_4));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__809__PROF__CoreTop__l1169(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__809__PROF__CoreTop__l1169\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_30 
        = (((QData)((IData)(((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_out_bits_result_remainder 
                                            >> 0x1fU)))
                              ? 0xffffffffU : 0U))) 
            << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_out_bits_result_remainder)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__810__PROF__CoreTop__l1166(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__810__PROF__CoreTop__l1166\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_26 
        = (((QData)((IData)(((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_out_bits_result_quotient 
                                            >> 0x1fU)))
                              ? 0xffffffffU : 0U))) 
            << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_out_bits_result_quotient)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__811__PROF__CoreTop__l915(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__811__PROF__CoreTop__l915\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h890baa9f__0;
    VlWide<3>/*95:0*/ __Vtemp_h2bd4ab01__0;
    // Body
    __Vtemp_h890baa9f__0[0U] = vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[2U];
    __Vtemp_h890baa9f__0[1U] = vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[3U];
    __Vtemp_h890baa9f__0[2U] = (1U & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[4U]);
    __Vtemp_h2bd4ab01__0[0U] = (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal);
    __Vtemp_h2bd4ab01__0[1U] = (IData)((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                        >> 0x20U));
    __Vtemp_h2bd4ab01__0[2U] = 0U;
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__enough 
        = VL_GTE_W(3, __Vtemp_h890baa9f__0, __Vtemp_h2bd4ab01__0);
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__812__PROF__CoreTop__l716(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__812__PROF__CoreTop__l716\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___cntShift_T_25 
        = (((IData)((0U != (0xffU & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                             >> 0x38U))))) 
            << 3U) | ((0U != (0xffU & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                               >> 0x38U))))
                       ? (((IData)((0U != (0xfU & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                           >> 0x3cU))))) 
                           << 2U) | ((0U != (0xfU & (IData)(
                                                            (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                             >> 0x3cU))))
                                      ? ((1U & (IData)(
                                                       (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                        >> 0x3fU)))
                                          ? 3U : ((1U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                              >> 0x3eU)))
                                                   ? 2U
                                                   : 
                                                  (1U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                              >> 0x3dU)))))
                                      : ((1U & (IData)(
                                                       (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                        >> 0x3bU)))
                                          ? 3U : ((1U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                              >> 0x3aU)))
                                                   ? 2U
                                                   : 
                                                  (1U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                              >> 0x39U)))))))
                       : (((IData)((0U != (0xfU & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                           >> 0x34U))))) 
                           << 2U) | ((0U != (0xfU & (IData)(
                                                            (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                             >> 0x34U))))
                                      ? ((1U & (IData)(
                                                       (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                        >> 0x37U)))
                                          ? 3U : ((1U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                              >> 0x36U)))
                                                   ? 2U
                                                   : 
                                                  (1U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                              >> 0x35U)))))
                                      : ((1U & (IData)(
                                                       (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                        >> 0x33U)))
                                          ? 3U : ((1U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                              >> 0x32U)))
                                                   ? 2U
                                                   : 
                                                  (1U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                              >> 0x31U)))))))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__813__PROF__CoreTop__l739(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__813__PROF__CoreTop__l739\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___cntShift_T_51 
        = (((IData)((0U != (0xffU & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                             >> 0x28U))))) 
            << 3U) | ((0U != (0xffU & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                               >> 0x28U))))
                       ? (((IData)((0U != (0xfU & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                           >> 0x2cU))))) 
                           << 2U) | ((0U != (0xfU & (IData)(
                                                            (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                             >> 0x2cU))))
                                      ? ((1U & (IData)(
                                                       (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                        >> 0x2fU)))
                                          ? 3U : ((1U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                              >> 0x2eU)))
                                                   ? 2U
                                                   : 
                                                  (1U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                              >> 0x2dU)))))
                                      : ((1U & (IData)(
                                                       (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                        >> 0x2bU)))
                                          ? 3U : ((1U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                              >> 0x2aU)))
                                                   ? 2U
                                                   : 
                                                  (1U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                              >> 0x29U)))))))
                       : (((IData)((0U != (0xfU & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                           >> 0x24U))))) 
                           << 2U) | ((0U != (0xfU & (IData)(
                                                            (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                             >> 0x24U))))
                                      ? ((1U & (IData)(
                                                       (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                        >> 0x27U)))
                                          ? 3U : ((1U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                              >> 0x26U)))
                                                   ? 2U
                                                   : 
                                                  (1U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                              >> 0x25U)))))
                                      : ((1U & (IData)(
                                                       (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                        >> 0x23U)))
                                          ? 3U : ((1U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                              >> 0x22U)))
                                                   ? 2U
                                                   : 
                                                  (1U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                              >> 0x21U)))))))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__814__PROF__CoreTop__l767(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__814__PROF__CoreTop__l767\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___cntShift_T_79 
        = (((IData)((0U != (0xffU & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                             >> 0x18U))))) 
            << 3U) | ((0U != (0xffU & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                               >> 0x18U))))
                       ? (((IData)((0U != (0xfU & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                           >> 0x1cU))))) 
                           << 2U) | ((0U != (0xfU & (IData)(
                                                            (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                             >> 0x1cU))))
                                      ? ((1U & (IData)(
                                                       (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                        >> 0x1fU)))
                                          ? 3U : ((1U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                              >> 0x1eU)))
                                                   ? 2U
                                                   : 
                                                  (1U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                              >> 0x1dU)))))
                                      : ((1U & (IData)(
                                                       (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                        >> 0x1bU)))
                                          ? 3U : ((1U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                              >> 0x1aU)))
                                                   ? 2U
                                                   : 
                                                  (1U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                              >> 0x19U)))))))
                       : (((IData)((0U != (0xfU & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                           >> 0x14U))))) 
                           << 2U) | ((0U != (0xfU & (IData)(
                                                            (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                             >> 0x14U))))
                                      ? ((1U & (IData)(
                                                       (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                        >> 0x17U)))
                                          ? 3U : ((1U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                              >> 0x16U)))
                                                   ? 2U
                                                   : 
                                                  (1U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                              >> 0x15U)))))
                                      : ((1U & (IData)(
                                                       (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                        >> 0x13U)))
                                          ? 3U : ((1U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                              >> 0x12U)))
                                                   ? 2U
                                                   : 
                                                  (1U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                              >> 0x11U)))))))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__815__PROF__CoreTop__l790(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__815__PROF__CoreTop__l790\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___cntShift_T_105 
        = (((IData)((0U != (0xffU & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                             >> 8U))))) 
            << 3U) | ((0U != (0xffU & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                               >> 8U))))
                       ? (((IData)((0U != (0xfU & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                           >> 0xcU))))) 
                           << 2U) | ((0U != (0xfU & (IData)(
                                                            (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                             >> 0xcU))))
                                      ? ((1U & (IData)(
                                                       (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                        >> 0xfU)))
                                          ? 3U : ((1U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                              >> 0xeU)))
                                                   ? 2U
                                                   : 
                                                  (1U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                              >> 0xdU)))))
                                      : ((1U & (IData)(
                                                       (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                        >> 0xbU)))
                                          ? 3U : ((1U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                              >> 0xaU)))
                                                   ? 2U
                                                   : 
                                                  (1U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                              >> 9U)))))))
                       : (((IData)((0U != (0xfU & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                           >> 4U))))) 
                           << 2U) | ((0U != (0xfU & (IData)(
                                                            (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                             >> 4U))))
                                      ? ((1U & (IData)(
                                                       (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                        >> 7U)))
                                          ? 3U : ((1U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                              >> 6U)))
                                                   ? 2U
                                                   : 
                                                  (1U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                              >> 5U)))))
                                      : ((1U & (IData)(
                                                       (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                        >> 3U)))
                                          ? 3U : ((1U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                              >> 2U)))
                                                   ? 2U
                                                   : 
                                                  (1U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                              >> 1U)))))))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__816__PROF__CoreTop__l4410(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__816__PROF__CoreTop__l4410\n"); );
    // Body
    vlSelf->CoreTop__DOT___T_4 = ((IData)(vlSelf->CoreTop__DOT___T_2) 
                                  | ((IData)(vlSelf->CoreTop__DOT__IF_io_ex_stall) 
                                     | (IData)(vlSelf->CoreTop__DOT__IF_io_wb_stall)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__817__PROF__CoreTop__l34(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__817__PROF__CoreTop__l34\n"); );
    // Body
    vlSelf->CoreTop__DOT__IF_io_cache_req_addr_req_valid 
        = (1U & ((~ (IData)(vlSelf->CoreTop__DOT__full)) 
                 & ((~ (IData)(vlSelf->CoreTop__DOT__IF_io_branch_io_is_jump)) 
                    & ((~ (IData)(vlSelf->CoreTop__DOT__IF_io_branch_io_is_branch)) 
                       & ((~ (IData)(vlSelf->CoreTop__DOT__IF_io_wb_stall)) 
                          & ((~ (IData)(vlSelf->CoreTop__DOT__IF_io_ex_stall)) 
                             & ((~ (IData)(vlSelf->CoreTop__DOT__IF_io_excp_flush)) 
                                & (~ (IData)(vlSelf->CoreTop__DOT__IF_io_mret_flush)))))))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__818__PROF__CoreTop__l1357(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__818__PROF__CoreTop__l1357\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT____VdfgTmp_hd56c994a__0 
        = (((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
            & (IData)(vlSelf->CoreTop__DOT__EX__DOT___io_is_flush_T_2)) 
           | (IData)(vlSelf->CoreTop__DOT__IF_io_ex_stall));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__819__PROF__CoreTop__l1216(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__819__PROF__CoreTop__l1216\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT___GEN_47 = ((0x72U 
                                               == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                               ? (vlSelf->CoreTop__DOT__EX__DOT__src1 
                                                  ^ vlSelf->CoreTop__DOT__EX__DOT__src2)
                                               : ((0x6dU 
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
                                                          ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_out_bits_result_remainder
                                                          : 
                                                         ((0x12U 
                                                           == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                           ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_out_bits_result_remainder
                                                           : 
                                                          ((0x10U 
                                                            == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                            ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_26
                                                            : 
                                                           ((0x13U 
                                                             == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                             ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_out_bits_result_quotient
                                                             : 
                                                            ((0x43U 
                                                              == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                              ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_out_bits_result_quotient
                                                              : 
                                                             ((0x15U 
                                                               == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                               ? vlSelf->CoreTop__DOT__EX_io_csr_rd_io_rd_data
                                                               : 
                                                              ((0x16U 
                                                                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                                ? vlSelf->CoreTop__DOT__EX_io_csr_rd_io_rd_data
                                                                : 0ULL)))))))))))))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__820__PROF__CoreTop__l915(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__820__PROF__CoreTop__l915\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_hf71b6c6a__0;
    VlWide<3>/*95:0*/ __Vtemp_h2bd4ab01__0;
    VlWide<3>/*95:0*/ __Vtemp_h8a35bad2__0;
    // Body
    __Vtemp_hf71b6c6a__0[0U] = vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[2U];
    __Vtemp_hf71b6c6a__0[1U] = vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[3U];
    __Vtemp_hf71b6c6a__0[2U] = vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[4U];
    __Vtemp_h2bd4ab01__0[0U] = (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal);
    __Vtemp_h2bd4ab01__0[1U] = (IData)((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                        >> 0x20U));
    __Vtemp_h2bd4ab01__0[2U] = 0U;
    VL_SUB_W(3, __Vtemp_h8a35bad2__0, __Vtemp_hf71b6c6a__0, __Vtemp_h2bd4ab01__0);
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___shiftReg_T_5[0U] 
        = (((IData)((((QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[0U])))) 
            << 1U) | (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__enough));
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___shiftReg_T_5[1U] 
        = (((IData)((((QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[0U])))) 
            >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[0U]))) 
                                  >> 0x20U)) << 1U));
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___shiftReg_T_5[2U] 
        = (((IData)(((((QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[1U])) 
                       << 0x20U) | (QData)((IData)(
                                                   vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[0U]))) 
                     >> 0x20U)) >> 0x1fU) | ((IData)(
                                                     (((QData)((IData)(
                                                                       ((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__enough)
                                                                         ? 
                                                                        __Vtemp_h8a35bad2__0[1U]
                                                                         : 
                                                                        vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[3U]))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        ((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__enough)
                                                                          ? 
                                                                         __Vtemp_h8a35bad2__0[0U]
                                                                          : 
                                                                         vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[2U]))))) 
                                             << 1U));
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___shiftReg_T_5[3U] 
        = (((IData)((((QData)((IData)(((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__enough)
                                        ? __Vtemp_h8a35bad2__0[1U]
                                        : vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[3U]))) 
                      << 0x20U) | (QData)((IData)(((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__enough)
                                                    ? 
                                                   __Vtemp_h8a35bad2__0[0U]
                                                    : 
                                                   vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[2U]))))) 
            >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                    ((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__enough)
                                                      ? 
                                                     __Vtemp_h8a35bad2__0[1U]
                                                      : 
                                                     vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[3U]))) 
                                    << 0x20U) | (QData)((IData)(
                                                                ((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__enough)
                                                                  ? 
                                                                 __Vtemp_h8a35bad2__0[0U]
                                                                  : 
                                                                 vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[2U])))) 
                                  >> 0x20U)) << 1U));
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___shiftReg_T_5[4U] 
        = ((IData)(((((QData)((IData)(((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__enough)
                                        ? __Vtemp_h8a35bad2__0[1U]
                                        : vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[3U]))) 
                      << 0x20U) | (QData)((IData)(((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__enough)
                                                    ? 
                                                   __Vtemp_h8a35bad2__0[0U]
                                                    : 
                                                   vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[2U])))) 
                    >> 0x20U)) >> 0x1fU);
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__821__PROF__CoreTop__l910(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__821__PROF__CoreTop__l910\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__cntShift 
        = (0x7fU & ((0x40U | (((IData)((0U != (IData)(
                                                      (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                       >> 0x20U)))) 
                               << 5U) | ((0U != (IData)(
                                                        (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                         >> 0x20U)))
                                          ? (((IData)(
                                                      (0U 
                                                       != 
                                                       (0xffffU 
                                                        & (IData)(
                                                                  (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                                   >> 0x30U))))) 
                                              << 4U) 
                                             | ((0U 
                                                 != 
                                                 (0xffffU 
                                                  & (IData)(
                                                            (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                             >> 0x30U))))
                                                 ? (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___cntShift_T_25)
                                                 : (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___cntShift_T_51)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (0xffffU 
                                                        & (IData)(
                                                                  (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                                   >> 0x10U))))) 
                                              << 4U) 
                                             | ((0U 
                                                 != 
                                                 (0xffffU 
                                                  & (IData)(
                                                            (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                             >> 0x10U))))
                                                 ? (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___cntShift_T_79)
                                                 : (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___cntShift_T_105)))))) 
                    - ((0x40U & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[2U] 
                                 << 6U)) | ((1U & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[2U])
                                             ? 0U : 
                                            (((IData)(
                                                      (0U 
                                                       != 
                                                       vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U])) 
                                              << 5U) 
                                             | ((0U 
                                                 != 
                                                 vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U])
                                                 ? 
                                                (((IData)(
                                                          (0U 
                                                           != 
                                                           (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U] 
                                                            >> 0x10U))) 
                                                  << 4U) 
                                                 | ((0U 
                                                     != 
                                                     (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U] 
                                                      >> 0x10U))
                                                     ? (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___cntShift_T_136)
                                                     : (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___cntShift_T_162)))
                                                 : 
                                                (((IData)(
                                                          (0U 
                                                           != 
                                                           (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U] 
                                                            >> 0x10U))) 
                                                  << 4U) 
                                                 | ((0U 
                                                     != 
                                                     (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U] 
                                                      >> 0x10U))
                                                     ? (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___cntShift_T_190)
                                                     : (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___cntShift_T_216)))))))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__822__PROF__CoreTop__l4544(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__822__PROF__CoreTop__l4544\n"); );
    // Body
    vlSelf->CoreTop__DOT___T_8 = (((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_valid)) 
                                   & ((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_in_valid)) 
                                      & ((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT____VdfgTmp_hd56c994a__0)) 
                                         & (IData)(vlSelf->CoreTop__DOT__valid)))) 
                                  & (IData)(vlSelf->CoreTop__DOT__EX_io_out_ready));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__823__PROF__CoreTop__l4408(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__823__PROF__CoreTop__l4408\n"); );
    // Body
    vlSelf->CoreTop__DOT___T = (((~ ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_valid) 
                                       | (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_in_valid)) 
                                      & (IData)(vlSelf->CoreTop__DOT__valid)) 
                                     | (IData)(vlSelf->CoreTop__DOT__EX__DOT____VdfgTmp_hd56c994a__0))) 
                                 & (IData)(vlSelf->CoreTop__DOT__EX_io_out_ready)) 
                                & ((~ (((IData)(vlSelf->CoreTop__DOT__valid) 
                                        & ((4U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType)) 
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
                                   & (~ (IData)(vlSelf->CoreTop__DOT__empty))));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__824__PROF__CoreTop__l1376(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__824__PROF__CoreTop__l1376\n"); );
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
                                    : vlSelf->CoreTop__DOT__EX__DOT___GEN_47))))))
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
                                                                vlSelf->CoreTop__DOT__EX__DOT___GEN_76[1U]))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                ((0x6eU 
                                                                  == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                                  ? (IData)(
                                                                            VL_SHIFTRS_QQI(64,64,5, vlSelf->CoreTop__DOT__EX__DOT__src1, 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2))))
                                                                  : 
                                                                 vlSelf->CoreTop__DOT__EX__DOT___GEN_76[0U]))))
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

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__826__PROF__CoreTop__l4569(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__826__PROF__CoreTop__l4569\n"); );
    // Body
    vlSelf->CoreTop__DOT___GEN_221 = ((IData)(vlSelf->CoreTop__DOT___T_8) 
                                      | ((~ (IData)(vlSelf->CoreTop__DOT___T_13)) 
                                         & (IData)(vlSelf->CoreTop__DOT__valid_1)));
}

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__827__PROF__CoreTop__l4548(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__827__PROF__CoreTop__l4548\n"); );
    // Body
    vlSelf->CoreTop__DOT___GEN_197 = ((IData)(vlSelf->CoreTop__DOT___T) 
                                      | ((~ (IData)(vlSelf->CoreTop__DOT___T_8)) 
                                         & (IData)(vlSelf->CoreTop__DOT__valid)));
}

void VCoreTop___024root___nba_sequent__TOP__485__PROF__DIP_model__l93(VCoreTop___024root* vlSelf);

void VCoreTop___024root___eval_nba(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VCoreTop___024root___nba_sequent__TOP__0__PROF__CoreTop__l1840(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        VCoreTop___024root___nba_sequent__TOP__1__PROF__CoreTop__l1847(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__2__PROF__CoreTop__l936(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__3__PROF__CoreTop__l2235(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__4__PROF__CoreTop__l1868(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__5__PROF__CoreTop__l1875(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__6__PROF__CoreTop__l1861(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__7__PROF__CoreTop__l1854(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__8__PROF__CoreTop__l540(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__9__PROF__CoreTop__l3048(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__10__PROF__CoreTop__l3041(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__11__PROF__CoreTop__l5344(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__12__PROF__CoreTop__l3089(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__13__PROF__CoreTop__l3074(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__14__PROF__CoreTop__l3310(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__15__PROF__CoreTop__l3323(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__16__PROF__CoreTop__l3025(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__17__PROF__CoreTop__l3028(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__18__PROF__CoreTop__l3031(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__19__PROF__CoreTop__l3034(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__20__PROF__CoreTop__l3055(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__21__PROF__CoreTop__l1840(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__22__PROF__CoreTop__l1847(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__23__PROF__CoreTop__l1868(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__24__PROF__CoreTop__l1875(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__25__PROF__CoreTop__l1861(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__26__PROF__CoreTop__l1854(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__27__PROF__SRAMTemp__l223(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__28__PROF__SRAMTemp__l224(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__29__PROF__SRAMTemp__l222(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__30__PROF__CoreTop__l2254(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__31__PROF__CoreTop__l2219(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__32__PROF__CoreTop__l2222(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__33__PROF__CoreTop__l2225(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__34__PROF__CoreTop__l2228(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__158__PROF__CoreTop__l1839(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__159__PROF__CoreTop__l1846(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__160__PROF__CoreTop__l2235(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__161__PROF__CoreTop__l1867(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__162__PROF__CoreTop__l1874(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__163__PROF__CoreTop__l1860(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__164__PROF__CoreTop__l1853(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__165__PROF__CoreTop__l3047(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__166__PROF__CoreTop__l3040(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__167__PROF__CoreTop__l5343(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__168__PROF__CoreTop__l3088(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__169__PROF__CoreTop__l3073(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__170__PROF__CoreTop__l3309(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__171__PROF__CoreTop__l3322(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__172__PROF__CoreTop__l3024(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__173__PROF__CoreTop__l3055(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__174__PROF__CoreTop__l1839(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__175__PROF__CoreTop__l1846(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__176__PROF__CoreTop__l1867(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__177__PROF__CoreTop__l1874(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__178__PROF__CoreTop__l1860(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__179__PROF__CoreTop__l1853(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__180__PROF__SRAMTemp__l221(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__181__PROF__SRAMTemp__l221(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__182__PROF__SRAMTemp__l221(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__183__PROF__CoreTop__l2253(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__184__PROF__CoreTop__l2218(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__185__PROF__CoreTop__l1870(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__186__PROF__CoreTop__l1863(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__187__PROF__CoreTop__l1877(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__188__PROF__CoreTop__l1842(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__189__PROF__CoreTop__l1849(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__190__PROF__CoreTop__l1856(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__191__PROF__CoreTop__l3043(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__192__PROF__CoreTop__l3050(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__193__PROF__CoreTop__l3036(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__194__PROF__CoreTop__l1870(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__195__PROF__CoreTop__l1863(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__196__PROF__CoreTop__l1877(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__197__PROF__CoreTop__l1842(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__198__PROF__CoreTop__l1849(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__199__PROF__CoreTop__l1856(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__200__PROF__CoreTop__l2230(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__201__PROF__CoreTop__l5838(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__202__PROF__CoreTop__l1844(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__203__PROF__CoreTop__l1851(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__204__PROF__CoreTop__l5769(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__205__PROF__CoreTop__l5729(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__206__PROF__CoreTop__l1865(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__207__PROF__CoreTop__l5800(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__208__PROF__CoreTop__l5812(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__209__PROF__CoreTop__l3720(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__210__PROF__CoreTop__l3729(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__211__PROF__CoreTop__l2268(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__212__PROF__CoreTop__l2295(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__213__PROF__CoreTop__l5803(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__214__PROF__CoreTop__l5806(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__215__PROF__CoreTop__l3103(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__216__PROF__CoreTop__l936(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__217__PROF__CoreTop__l5681(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__218__PROF__CoreTop__l3130(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__219__PROF__CoreTop__l5775(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__220__PROF__CoreTop__l3150(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__221__PROF__CoreTop__l5687(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__222__PROF__CoreTop__l5690(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__223__PROF__CoreTop__l539(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__224__PROF__CoreTop__l3161(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__225__PROF__CoreTop__l5840(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__226__PROF__CoreTop__l3038(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__227__PROF__CoreTop__l5839(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__228__PROF__CoreTop__l1844(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__229__PROF__CoreTop__l1851(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__230__PROF__CoreTop__l5714(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__231__PROF__CoreTop__l1858(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__232__PROF__CoreTop__l5717(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__233__PROF__CoreTop__l3112(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__234__PROF__CoreTop__l5739(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__235__PROF__CoreTop__l5742(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__236__PROF__CoreTop__l3141(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__237__PROF__CoreTop__l1872(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__238__PROF__CoreTop__l5837(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__239__PROF__CoreTop__l3694(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__240__PROF__CoreTop__l3704(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__241__PROF__CoreTop__l5772(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__242__PROF__CoreTop__l5778(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__243__PROF__CoreTop__l5748(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__244__PROF__CoreTop__l5843(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__245__PROF__CoreTop__l2277(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__246__PROF__CoreTop__l5830(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__247__PROF__CoreTop__l5841(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__248__PROF__CoreTop__l1840(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__249__PROF__CoreTop__l1847(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__250__PROF__CoreTop__l1868(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__251__PROF__CoreTop__l1875(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__252__PROF__CoreTop__l1861(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__253__PROF__CoreTop__l1854(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__254__PROF__CoreTop__l3089(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__255__PROF__CoreTop__l3074(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__256__PROF__CoreTop__l3310(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__257__PROF__CoreTop__l3323(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__258__PROF__CoreTop__l3025(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__260__PROF__CoreTop__l3048(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__261__PROF__CoreTop__l3041(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__264__PROF__CoreTop__l1840(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__265__PROF__CoreTop__l1847(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__266__PROF__CoreTop__l1868(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__267__PROF__CoreTop__l1875(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__268__PROF__CoreTop__l1861(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__269__PROF__CoreTop__l1854(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__270__PROF__SRAMTemp__l223(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__271__PROF__SRAMTemp__l224(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__273__PROF__SRAMTemp__l222(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__274__PROF__CoreTop__l2254(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__314__PROF__CoreTop__l936(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__324__PROF__CoreTop__l540(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__340__PROF__CoreTop__l5344(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__364__PROF__CoreTop__l3298(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__365__PROF__CoreTop__l3300(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__366__PROF__CoreTop__l3121(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__367__PROF__CoreTop__l3052(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__368__PROF__CoreTop__l3045(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__369__PROF__SRAMTemp__l213(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__370__PROF__SRAMTemp__l212(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__371__PROF__CoreTop__l2535(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__372__PROF__CoreTop__l2286(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__373__PROF__DIP_model__l85(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__374__PROF__CoreTop__l5745(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__375__PROF__CoreTop__l5119(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__376__PROF__CoreTop__l5760(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__377__PROF__CoreTop__l1789(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__378__PROF__CoreTop__l5751(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__379__PROF__CoreTop__l5754(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__380__PROF__CoreTop__l958(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__381__PROF__CoreTop__l955(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__382__PROF__CoreTop__l488(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__383__PROF__CoreTop__l565(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__384__PROF__DIP_model__l88(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__385__PROF__CoreTop__l5791(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__386__PROF__CoreTop__l5797(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__387__PROF__DIP_model__l91(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__388__PROF__CoreTop__l5818(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__389__PROF__CoreTop__l1788(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__390__PROF__CoreTop__l1795(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__391__PROF__CoreTop__l1802(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__392__PROF__CoreTop__l5824(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__393__PROF__CoreTop__l5821(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__394__PROF__DIP_model__l52(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__395__PROF__DIP_model__l53(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__396__PROF__DIP_model__l54(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__397__PROF__DIP_model__l55(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__398__PROF__DIP_model__l56(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__399__PROF__DIP_model__l57(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__400__PROF__DIP_model__l58(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__401__PROF__DIP_model__l59(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__402__PROF__DIP_model__l60(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__403__PROF__DIP_model__l61(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__404__PROF__DIP_model__l62(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__405__PROF__DIP_model__l63(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__406__PROF__DIP_model__l64(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__407__PROF__DIP_model__l65(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__408__PROF__DIP_model__l66(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__409__PROF__DIP_model__l67(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__410__PROF__DIP_model__l68(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__411__PROF__DIP_model__l69(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__412__PROF__DIP_model__l70(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__413__PROF__DIP_model__l71(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__414__PROF__DIP_model__l72(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__415__PROF__DIP_model__l73(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__416__PROF__DIP_model__l74(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__417__PROF__DIP_model__l75(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__418__PROF__DIP_model__l76(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__419__PROF__DIP_model__l77(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__420__PROF__DIP_model__l78(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__421__PROF__DIP_model__l79(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__422__PROF__DIP_model__l80(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__423__PROF__DIP_model__l81(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__424__PROF__DIP_model__l82(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__425__PROF__DIP_model__l83(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__426__PROF__CoreTop__l5693(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__427__PROF__CoreTop__l1809(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__428__PROF__CoreTop__l5836(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__429__PROF__CSR_DIFF__l11(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__430__PROF__CoreTop__l3663(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__431__PROF__CoreTop__l3660(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__432__PROF__CSR_DIFF__l12(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__433__PROF__CoreTop__l5720(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__434__PROF__CoreTop__l1447(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__435__PROF__CoreTop__l3572(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__436__PROF__DIP_model__l89(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__437__PROF__DIP_model__l90(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__438__PROF__CoreTop__l5815(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__439__PROF__CoreTop__l2200(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__440__PROF__CoreTop__l5784(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__441__PROF__CoreTop__l5733(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__442__PROF__DIP_model__l86(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__443__PROF__DIP_model__l87(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__444__PROF__CoreTop__l5809(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__445__PROF__CoreTop__l2963(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__447__PROF__CoreTop__l3055(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__455__PROF__CoreTop__l2219(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__456__PROF__CoreTop__l2235(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__468__PROF__CoreTop__l524(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__480__PROF__CoreTop__l1468(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__485__PROF__DIP_model__l93(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__488__PROF__CoreTop__l2795(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__489__PROF__SRAMTemp__l320(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__490__PROF__CoreTop__l3584(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__491__PROF__CoreTop__l2530(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__492__PROF__CoreTop__l2232(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__493__PROF__CoreTop__l5699(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__494__PROF__CoreTop__l5726(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__495__PROF__CoreTop__l5708(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__496__PROF__CoreTop__l5711(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__497__PROF__CoreTop__l924(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__498__PROF__CoreTop__l828(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__499__PROF__CoreTop__l851(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__500__PROF__CoreTop__l879(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__501__PROF__CoreTop__l902(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__502__PROF__CoreTop__l534(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__503__PROF__CoreTop__l519(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__504__PROF__CoreTop__l5117(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__505__PROF__CoreTop__l5766(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__506__PROF__CoreTop__l5696(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__507__PROF__CoreTop__l1151(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__508__PROF__CoreTop__l1519(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__509__PROF__CoreTop__l3576(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__510__PROF__CoreTop__l1989(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__511__PROF__CoreTop__l1991(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__512__PROF__CoreTop__l5763(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__513__PROF__CoreTop__l1588(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__514__PROF__CoreTop__l1578(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__515__PROF__CoreTop__l5757(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__526__PROF__CoreTop__l3575(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__527__PROF__CoreTop__l2797(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__528__PROF__CoreTop__l1994(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__529__PROF__CoreTop__l1993(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__531__PROF__CoreTop__l3595(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__534__PROF__CoreTop__l2448(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__535__PROF__CoreTop__l2464(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__536__PROF__CoreTop__l42(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__537__PROF__CoreTop__l5143(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__538__PROF__CoreTop__l5705(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__539__PROF__CoreTop__l1123(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__540__PROF__CoreTop__l2827(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__541__PROF__CoreTop__l2918(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__542__PROF__CoreTop__l2791(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__543__PROF__CoreTop__l3597(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__544__PROF__CoreTop__l5723(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__545__PROF__CoreTop__l2464(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__546__PROF__CoreTop__l5129(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__547__PROF__CoreTop__l5130(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__549__PROF__CoreTop__l5133(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__553__PROF__CoreTop__l1328(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__554__PROF__CoreTop__l2892(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__555__PROF__CoreTop__l2900(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__556__PROF__CoreTop__l1792(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__557__PROF__CoreTop__l3007(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__558__PROF__CoreTop__l2986(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__559__PROF__CoreTop__l3011(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__560__PROF__CoreTop__l5302(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__561__PROF__CoreTop__l3569(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__562__PROF__CoreTop__l3592(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__563__PROF__CoreTop__l2744(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__564__PROF__CoreTop__l5296(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__565__PROF__CoreTop__l5299(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__566__PROF__CoreTop__l2732(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__567__PROF__CoreTop__l5306(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__568__PROF__CoreTop__l5305(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__569__PROF__CoreTop__l5304(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__570__PROF__CoreTop__l5303(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__571__PROF__CoreTop__l5295(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__572__PROF__CoreTop__l5298(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__580__PROF__CoreTop__l3661(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__581__PROF__CoreTop__l4565(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__582__PROF__CoreTop__l32(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__583__PROF__CoreTop__l1790(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__584__PROF__CoreTop__l1803(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__585__PROF__CoreTop__l1989(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__586__PROF__CoreTop__l1991(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__587__PROF__CoreTop__l1635(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__588__PROF__CoreTop__l3685(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__589__PROF__CoreTop__l3713(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__590__PROF__CoreTop__l2894(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__591__PROF__CoreTop__l2902(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__592__PROF__CoreTop__l1790(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__593__PROF__CoreTop__l1803(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__594__PROF__CoreTop__l2733(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__595__PROF__CoreTop__l2486(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__596__PROF__CoreTop__l1299(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__597__PROF__CoreTop__l5353(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__598__PROF__CoreTop__l5360(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__599__PROF__CoreTop__l1994(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__600__PROF__CoreTop__l1993(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__603__PROF__CoreTop__l1647(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__606__PROF__CoreTop__l2898(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__607__PROF__CoreTop__l2487(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__608__PROF__CoreTop__l2489(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__609__PROF__SRAMTemp__l248(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__610__PROF__CoreTop__l5261(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__611__PROF__CoreTop__l5291(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__612__PROF__CoreTop__l2495(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__1__PROF__SRAMTemp__l301(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__614__PROF__CoreTop__l2497(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__615__PROF__CoreTop__l2491(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__622__PROF__CoreTop__l5118(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__683__PROF__CoreTop__l2136(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__684__PROF__CoreTop__l3662(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__685__PROF__CSR_DIFF__l10(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__686__PROF__CSR_DIFF__l13(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__687__PROF__CoreTop__l5833(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__688__PROF__CoreTop__l5827(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__689__PROF__CoreTop__l2914(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__690__PROF__CoreTop__l2102(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__691__PROF__SRAMTemp__l270(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__692__PROF__CoreTop__l3291(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__693__PROF__CoreTop__l3585(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__2__PROF__CoreTop__l2112(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__4__PROF__CoreTop__l5224(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__696__PROF__CoreTop__l3587(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__697__PROF__CoreTop__l3613(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__698__PROF__CoreTop__l3581(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__699__PROF__CoreTop__l3295(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__700__PROF__CoreTop__l4480(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__701__PROF__CoreTop__l4526(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__702__PROF__CoreTop__l4496(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__703__PROF__CoreTop__l5346(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__704__PROF__CoreTop__l5126(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__709__PROF__CoreTop__l1789(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__710__PROF__CoreTop__l2745(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__711__PROF__CoreTop__l2765(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__5__PROF__CoreTop__l1551(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__6__PROF__CoreTop__l1559(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__714__PROF__CoreTop__l2747(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__715__PROF__CoreTop__l2739(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__716__PROF__CoreTop__l3294(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__717__PROF__CoreTop__l2742(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__3__PROF__CoreTop__l2759(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__719__PROF__CoreTop__l3290(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__720__PROF__CoreTop__l1573(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__721__PROF__CoreTop__l4539(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__722__PROF__CoreTop__l4509(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__723__PROF__CoreTop__l5125(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__725__PROF__CoreTop__l3665(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__726__PROF__CoreTop__l3667(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__727__PROF__CoreTop__l5787(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__728__PROF__CoreTop__l5781(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__729__PROF__CoreTop__l2768(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__730__PROF__CoreTop__l2769(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__7__PROF__CoreTop__l1589(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__732__PROF__CoreTop__l4564(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__733__PROF__CoreTop__l5163(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__734__PROF__CoreTop__l5137(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__735__PROF__CoreTop__l4481(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__736__PROF__CoreTop__l4414(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__737__PROF__CoreTop__l4415(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__738__PROF__CoreTop__l3668(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__739__PROF__CoreTop__l3669(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__742__PROF__CoreTop__l1149(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__744__PROF__CoreTop__l4591(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__745__PROF__CoreTop__l1360(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__746__PROF__CoreTop__l399(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__747__PROF__CoreTop__l279(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__748__PROF__CoreTop__l338(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__749__PROF__CoreTop__l447(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__750__PROF__CoreTop__l447(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__751__PROF__CoreTop__l217(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__752__PROF__CoreTop__l2104(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__753__PROF__CoreTop__l2096(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__754__PROF__CoreTop__l1251(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__755__PROF__CoreTop__l1255(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__756__PROF__CoreTop__l1158(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__757__PROF__CoreTop__l1153(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__758__PROF__CoreTop__l1284(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__759__PROF__CoreTop__l1287(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__760__PROF__CoreTop__l5702(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__761__PROF__CoreTop__l5123(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__762__PROF__CoreTop__l406(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__763__PROF__CoreTop__l294(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__764__PROF__CoreTop__l353(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__765__PROF__CoreTop__l232(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__766__PROF__CoreTop__l2097(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__767__PROF__CoreTop__l2100(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__768__PROF__CoreTop__l1251(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__769__PROF__CoreTop__l1255(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__770__PROF__CoreTop__l1156(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__772__PROF__CoreTop__l309(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__773__PROF__CoreTop__l368(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__774__PROF__CoreTop__l247(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__775__PROF__CoreTop__l1268(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__776__PROF__CoreTop__l1383(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__777__PROF__CoreTop__l1122(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__778__PROF__CoreTop__l1317(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__779__PROF__CoreTop__l1137(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__780__PROF__CoreTop__l1135(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__781__PROF__CoreTop__l1049(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__782__PROF__CoreTop__l383(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__783__PROF__CoreTop__l262(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__784__PROF__CoreTop__l5165(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__785__PROF__CoreTop__l653(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__786__PROF__CoreTop__l1319(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__787__PROF__CoreTop__l1327(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__788__PROF__CoreTop__l1048(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__789__PROF__CoreTop__l1138(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__790__PROF__CoreTop__l387(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__791__PROF__CoreTop__l264(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__792__PROF__CoreTop__l5124(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__793__PROF__CoreTop__l5122(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__794__PROF__CoreTop__l1330(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__795__PROF__CoreTop__l675(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__796__PROF__CoreTop__l1050(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__797__PROF__CoreTop__l1051(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__798__PROF__CoreTop__l446(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__799__PROF__CoreTop__l1331(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__800__PROF__CoreTop__l679(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__801__PROF__CoreTop__l682(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__802__PROF__CoreTop__l5128(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__803__PROF__CoreTop__l933(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__804__PROF__CoreTop__l932(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__805__PROF__CoreTop__l684(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__806__PROF__CoreTop__l40(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__807__PROF__CoreTop__l4409(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__808__PROF__CoreTop__l5134(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__809__PROF__CoreTop__l1169(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__810__PROF__CoreTop__l1166(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__811__PROF__CoreTop__l915(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__812__PROF__CoreTop__l716(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__813__PROF__CoreTop__l739(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__814__PROF__CoreTop__l767(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__815__PROF__CoreTop__l790(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__816__PROF__CoreTop__l4410(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__817__PROF__CoreTop__l34(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__818__PROF__CoreTop__l1357(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__819__PROF__CoreTop__l1216(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__820__PROF__CoreTop__l915(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__821__PROF__CoreTop__l910(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__822__PROF__CoreTop__l4544(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__823__PROF__CoreTop__l4408(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__824__PROF__CoreTop__l1376(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__0__PROF__CoreTop__l930(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__826__PROF__CoreTop__l4569(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__827__PROF__CoreTop__l4548(vlSelf);
    }
}
