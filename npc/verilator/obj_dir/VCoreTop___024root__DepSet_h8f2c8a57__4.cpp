// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCoreTop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VCoreTop___024root.h"

VL_INLINE_OPT void VCoreTop___024root___sequent__TOP__63(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___sequent__TOP__63\n"); );
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

VL_INLINE_OPT void VCoreTop___024root___combo__TOP__15(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___combo__TOP__15\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_h5943c197__0;
    VlWide<5>/*159:0*/ __Vtemp_h97a97068__0;
    // Body
    VL_EXTEND_WQ(129,64, __Vtemp_h5943c197__0, (((IData)(vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_flow_div_signed) 
                                                 & (IData)(
                                                           (vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src1 
                                                            >> 0x3fU)))
                                                 ? 
                                                (- vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src1)
                                                 : vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src1));
    VL_EXTEND_WW(129,128, __Vtemp_h97a97068__0, vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend);
    if (vlSelf->reset) {
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_12[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_12[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_12[2U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_12[3U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_12[4U] = 0U;
    } else if ((0U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state))) {
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_12[0U] 
            = __Vtemp_h5943c197__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_12[1U] 
            = __Vtemp_h5943c197__0[1U];
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_12[2U] 
            = __Vtemp_h5943c197__0[2U];
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_12[3U] 
            = __Vtemp_h5943c197__0[3U];
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_12[4U] 
            = __Vtemp_h5943c197__0[4U];
    } else if ((1U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state))) {
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_12[0U] 
            = (((1U & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div[2U])
                 ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[0U]
                 : (IData)((0x7fffffffffffffffULL & 
                            (((QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[1U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[0U])))))) 
               << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_12[1U] 
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
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_12[2U] 
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
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_12[3U] 
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
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_12[4U] 
            = (((1U & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div[2U])
                 ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[3U]
                 : ((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div[1U] 
                     >> 1U) | (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div[2U] 
                               << 0x1fU))) >> 0x1fU);
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_12[0U] 
            = __Vtemp_h97a97068__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_12[1U] 
            = __Vtemp_h97a97068__0[1U];
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_12[2U] 
            = __Vtemp_h97a97068__0[2U];
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_12[3U] 
            = __Vtemp_h97a97068__0[3U];
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_12[4U] 
            = __Vtemp_h97a97068__0[4U];
    }
}

VL_INLINE_OPT void VCoreTop___024root___sequent__TOP__64(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___sequent__TOP__64\n"); );
    // Init
    CData/*3:0*/ CoreTop__DOT__ID__DOT___Inst_decode_T_189;
    // Body
    CoreTop__DOT__ID__DOT___Inst_decode_T_189 = ((0x6013U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                  ? 8U
                                                  : 
                                                 ((0x3003U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                   ? 8U
                                                   : 
                                                  ((0x2003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                    ? 8U
                                                    : 
                                                   ((0x3013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                     ? 8U
                                                     : 
                                                    ((0x1bU 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                      ? 8U
                                                      : 
                                                     ((0x40005013U 
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
    vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0 = 
        ((0x13U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
          ? 8U : ((0x1013U == (0xfc00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                   ? 8U : (IData)(CoreTop__DOT__ID__DOT___Inst_decode_T_189)));
}

VL_INLINE_OPT void VCoreTop___024root___combo__TOP__16(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___combo__TOP__16\n"); );
    // Init
    QData/*63:0*/ CoreTop__DOT__EX__DOT___GEN_80;
    QData/*63:0*/ CoreTop__DOT__EX__DOT___GEN_100;
    QData/*63:0*/ CoreTop__DOT__EX__DOT___GEN_120;
    QData/*63:0*/ CoreTop__DOT__EX__DOT___GEN_147;
    QData/*63:0*/ CoreTop__DOT__EX__DOT___GEN_167;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__0;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__1;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__0;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__2;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__1;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__3;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__2;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__4;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__3;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__5;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__4;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__6;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__5;
    VlWide<3>/*95:0*/ __Vtemp_hf09ee039__0;
    VlWide<3>/*95:0*/ __Vtemp_h09e423f6__0;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__7;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__8;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__6;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__9;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__7;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__10;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__8;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__11;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__9;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__12;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__10;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__13;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__11;
    VlWide<3>/*95:0*/ __Vtemp_h5876c34e__0;
    VlWide<3>/*95:0*/ __Vtemp_h9b318812__0;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__14;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__15;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__12;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__16;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__13;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__17;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__14;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__18;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__15;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__19;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__16;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__20;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__17;
    VlWide<3>/*95:0*/ __Vtemp_hfac90b87__0;
    VlWide<3>/*95:0*/ __Vtemp_h022c6a7e__0;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__21;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__22;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__18;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__23;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__19;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__24;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__20;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__25;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__21;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__26;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__22;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__27;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__23;
    VlWide<3>/*95:0*/ __Vtemp_h1a805788__0;
    VlWide<3>/*95:0*/ __Vtemp_h8f6feebc__0;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__28;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__29;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__24;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__30;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__25;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__31;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__26;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__32;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__27;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__33;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__28;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__34;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__29;
    VlWide<3>/*95:0*/ __Vtemp_ha8000f9d__0;
    VlWide<3>/*95:0*/ __Vtemp_h56f0b06f__0;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__35;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__36;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__30;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__37;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__31;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__38;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__32;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__39;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__33;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__40;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__34;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__41;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__35;
    VlWide<3>/*95:0*/ __Vtemp_h7f4c7730__0;
    VlWide<3>/*95:0*/ __Vtemp_h93301bf7__0;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__42;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__43;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__36;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__44;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__37;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__45;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__38;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__46;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__39;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__47;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__40;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__48;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__41;
    VlWide<3>/*95:0*/ __Vtemp_hc2d447cb__0;
    VlWide<3>/*95:0*/ __Vtemp_h99fdb1da__0;
    VlWide<3>/*95:0*/ __Vtemp_h68cf1ac2__0;
    VlWide<3>/*95:0*/ __Vtemp_hf006aaeb__0;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__49;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__50;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__42;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__51;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__43;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__52;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__44;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__53;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__45;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__54;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__46;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__55;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__47;
    VlWide<3>/*95:0*/ __Vtemp_h17160295__0;
    VlWide<3>/*95:0*/ __Vtemp_hf062032d__0;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__56;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__57;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__48;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__58;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__49;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__59;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__50;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__60;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__51;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__61;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__52;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__62;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__53;
    VlWide<3>/*95:0*/ __Vtemp_h8c6574e6__0;
    VlWide<3>/*95:0*/ __Vtemp_he3a0cca8__0;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__63;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__64;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__54;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__65;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__55;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__66;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__56;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__67;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__57;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__68;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__58;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__69;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__59;
    VlWide<3>/*95:0*/ __Vtemp_h54c35206__0;
    VlWide<3>/*95:0*/ __Vtemp_ha9fc49cf__0;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__70;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__71;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__60;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__72;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__61;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__73;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__62;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__74;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__63;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__75;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__64;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__76;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__65;
    VlWide<3>/*95:0*/ __Vtemp_hb1c3ad2c__0;
    VlWide<3>/*95:0*/ __Vtemp_h7daf5e2d__0;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__77;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__78;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__66;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__79;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__67;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__80;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__68;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__81;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__69;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__82;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__70;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__83;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__71;
    VlWide<3>/*95:0*/ __Vtemp_h134fd92d__0;
    VlWide<3>/*95:0*/ __Vtemp_h4cb22a7a__0;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__84;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__85;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__72;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__86;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__73;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__87;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__74;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__88;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__75;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__89;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__76;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__90;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__77;
    VlWide<3>/*95:0*/ __Vtemp_ha6353e94__0;
    VlWide<3>/*95:0*/ __Vtemp_hf5b92271__0;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__91;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__92;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__78;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__93;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__79;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__94;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__80;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__95;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__81;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__96;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__82;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__97;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__83;
    VlWide<3>/*95:0*/ __Vtemp_h2849d3ad__0;
    VlWide<3>/*95:0*/ __Vtemp_haf2e61eb__0;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__98;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__99;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__84;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__100;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__85;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__101;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__86;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__102;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__87;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__103;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__88;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__104;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__89;
    VlWide<3>/*95:0*/ __Vtemp_he72fa7c0__0;
    VlWide<3>/*95:0*/ __Vtemp_ha7b9d30d__0;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__105;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__106;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__90;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__107;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__91;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__108;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__92;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__109;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__93;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__110;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__94;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__111;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__95;
    VlWide<3>/*95:0*/ __Vtemp_h05e7506e__0;
    VlWide<3>/*95:0*/ __Vtemp_h3389439a__0;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__112;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__113;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__96;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__114;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__97;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__115;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__98;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__116;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__99;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__117;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__100;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__118;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__101;
    VlWide<3>/*95:0*/ __Vtemp_h4760be10__0;
    VlWide<3>/*95:0*/ __Vtemp_h96440e8b__0;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__119;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__120;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__102;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__121;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__103;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__122;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__104;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__123;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__105;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__124;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__106;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__125;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__107;
    VlWide<3>/*95:0*/ __Vtemp_ha5a04398__0;
    VlWide<3>/*95:0*/ __Vtemp_hd65347c2__0;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__126;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__127;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__108;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__128;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__109;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__129;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__110;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__130;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__111;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__131;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__112;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__132;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__113;
    VlWide<3>/*95:0*/ __Vtemp_hceb56c78__0;
    VlWide<3>/*95:0*/ __Vtemp_h27340d70__0;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__133;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__134;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__114;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__135;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__115;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__136;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__116;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__137;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__117;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__138;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__118;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__139;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__119;
    VlWide<3>/*95:0*/ __Vtemp_h3cb9dba1__0;
    VlWide<3>/*95:0*/ __Vtemp_hd97683d1__0;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__140;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__141;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__120;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__142;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__121;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__143;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__122;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__144;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__123;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__145;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__124;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__146;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__125;
    VlWide<3>/*95:0*/ __Vtemp_hf34b4877__0;
    VlWide<3>/*95:0*/ __Vtemp_h7abefef2__0;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__147;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__148;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__126;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__149;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__127;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__150;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__128;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__151;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__129;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__152;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__130;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__153;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__131;
    VlWide<3>/*95:0*/ __Vtemp_hc58d3b51__0;
    VlWide<3>/*95:0*/ __Vtemp_h22431de6__0;
    VlWide<3>/*95:0*/ __Vtemp_h976962e2__0;
    VlWide<3>/*95:0*/ __Vtemp_hddcf52fb__0;
    // Body
    CoreTop__DOT__EX__DOT___GEN_80 = ((0x10U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                       ? vlSelf->CoreTop__DOT__EX__DOT__mie
                                       : ((0x13U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                           ? vlSelf->CoreTop__DOT__EX__DOT__mie
                                           : ((0x43U 
                                               == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                               ? vlSelf->CoreTop__DOT__EX__DOT__mie
                                               : ((0x15U 
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
                                                         ? vlSelf->CoreTop__DOT__EX__DOT___shift_result_T
                                                         : vlSelf->CoreTop__DOT__EX__DOT__mie)))))
                                                    : vlSelf->CoreTop__DOT__EX__DOT__mie)))));
    CoreTop__DOT__EX__DOT___GEN_100 = ((7U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                        ? vlSelf->CoreTop__DOT__EX__DOT__mcause
                                        : ((0xfU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                            ? vlSelf->CoreTop__DOT__EX__DOT__mcause
                                            : ((0x12U 
                                                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                ? vlSelf->CoreTop__DOT__EX__DOT__mcause
                                                : (
                                                   (0x10U 
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
                                                            ? vlSelf->CoreTop__DOT__EX__DOT___shift_result_T
                                                            : vlSelf->CoreTop__DOT__EX__DOT__mcause))))
                                                        : vlSelf->CoreTop__DOT__EX__DOT__mcause))))))));
    CoreTop__DOT__EX__DOT___GEN_120 = ((0x7aU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                        ? vlSelf->CoreTop__DOT__EX__DOT__mepc
                                        : ((0xdU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                            ? vlSelf->CoreTop__DOT__EX__DOT__mepc
                                            : ((1U 
                                                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                ? vlSelf->CoreTop__DOT__EX__DOT__mepc
                                                : (
                                                   (7U 
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
                                                              ? vlSelf->CoreTop__DOT__EX__DOT___shift_result_T
                                                              : vlSelf->CoreTop__DOT__EX__DOT__mepc)))
                                                           : vlSelf->CoreTop__DOT__EX__DOT__mepc)))))))))));
    CoreTop__DOT__EX__DOT___GEN_147 = ((0x72U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                        ? vlSelf->CoreTop__DOT__EX__DOT__mtvec
                                        : ((0x6dU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                            ? vlSelf->CoreTop__DOT__EX__DOT__mtvec
                                            : ((0x78U 
                                                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                ? vlSelf->CoreTop__DOT__EX__DOT__mtvec
                                                : (
                                                   (0x79U 
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
                                                                 ? vlSelf->CoreTop__DOT__EX__DOT___shift_result_T
                                                                 : vlSelf->CoreTop__DOT__EX__DOT__mtvec))
                                                               : vlSelf->CoreTop__DOT__EX__DOT__mtvec)))))))))))))));
    if ((0x44U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
        CoreTop__DOT__EX__DOT___GEN_167 = vlSelf->CoreTop__DOT__EX__DOT__mstatus;
        vlSelf->CoreTop__DOT__EX__DOT___GEN_168 = vlSelf->CoreTop__DOT__EX__DOT__mtvec;
        vlSelf->CoreTop__DOT__EX__DOT___GEN_169 = vlSelf->CoreTop__DOT__EX__DOT__mepc;
        vlSelf->CoreTop__DOT__EX__DOT___GEN_171 = vlSelf->CoreTop__DOT__EX__DOT__mie;
    } else if ((0x69U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
        CoreTop__DOT__EX__DOT___GEN_167 = vlSelf->CoreTop__DOT__EX__DOT__mstatus;
        vlSelf->CoreTop__DOT__EX__DOT___GEN_168 = vlSelf->CoreTop__DOT__EX__DOT__mtvec;
        vlSelf->CoreTop__DOT__EX__DOT___GEN_169 = vlSelf->CoreTop__DOT__EX__DOT__mepc;
        vlSelf->CoreTop__DOT__EX__DOT___GEN_171 = vlSelf->CoreTop__DOT__EX__DOT__mie;
    } else if ((0x71U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
        CoreTop__DOT__EX__DOT___GEN_167 = vlSelf->CoreTop__DOT__EX__DOT__mstatus;
        vlSelf->CoreTop__DOT__EX__DOT___GEN_168 = vlSelf->CoreTop__DOT__EX__DOT__mtvec;
        vlSelf->CoreTop__DOT__EX__DOT___GEN_169 = vlSelf->CoreTop__DOT__EX__DOT__mepc;
        vlSelf->CoreTop__DOT__EX__DOT___GEN_171 = vlSelf->CoreTop__DOT__EX__DOT__mie;
    } else {
        if ((0x72U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
            CoreTop__DOT__EX__DOT___GEN_167 = vlSelf->CoreTop__DOT__EX__DOT__mstatus;
            vlSelf->CoreTop__DOT__EX__DOT___GEN_169 
                = vlSelf->CoreTop__DOT__EX__DOT__mepc;
            vlSelf->CoreTop__DOT__EX__DOT___GEN_171 
                = vlSelf->CoreTop__DOT__EX__DOT__mie;
        } else if ((0x6dU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
            CoreTop__DOT__EX__DOT___GEN_167 = vlSelf->CoreTop__DOT__EX__DOT__mstatus;
            vlSelf->CoreTop__DOT__EX__DOT___GEN_169 
                = vlSelf->CoreTop__DOT__EX__DOT__mepc;
            vlSelf->CoreTop__DOT__EX__DOT___GEN_171 
                = vlSelf->CoreTop__DOT__EX__DOT__mie;
        } else if ((0x78U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
            CoreTop__DOT__EX__DOT___GEN_167 = vlSelf->CoreTop__DOT__EX__DOT__mstatus;
            vlSelf->CoreTop__DOT__EX__DOT___GEN_169 
                = vlSelf->CoreTop__DOT__EX__DOT__mepc;
            vlSelf->CoreTop__DOT__EX__DOT___GEN_171 
                = vlSelf->CoreTop__DOT__EX__DOT__mie;
        } else if ((0x79U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
            CoreTop__DOT__EX__DOT___GEN_167 = vlSelf->CoreTop__DOT__EX__DOT__mstatus;
            vlSelf->CoreTop__DOT__EX__DOT___GEN_169 
                = vlSelf->CoreTop__DOT__EX__DOT__mepc;
            vlSelf->CoreTop__DOT__EX__DOT___GEN_171 
                = vlSelf->CoreTop__DOT__EX__DOT__mie;
        } else {
            if ((0x7aU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
                CoreTop__DOT__EX__DOT___GEN_167 = vlSelf->CoreTop__DOT__EX__DOT__mstatus;
                vlSelf->CoreTop__DOT__EX__DOT___GEN_171 
                    = vlSelf->CoreTop__DOT__EX__DOT__mie;
            } else if ((0xdU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
                CoreTop__DOT__EX__DOT___GEN_167 = vlSelf->CoreTop__DOT__EX__DOT__mstatus;
                vlSelf->CoreTop__DOT__EX__DOT___GEN_171 
                    = vlSelf->CoreTop__DOT__EX__DOT__mie;
            } else if ((1U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
                CoreTop__DOT__EX__DOT___GEN_167 = vlSelf->CoreTop__DOT__EX__DOT__mstatus;
                vlSelf->CoreTop__DOT__EX__DOT___GEN_171 
                    = vlSelf->CoreTop__DOT__EX__DOT__mie;
            } else if ((7U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
                CoreTop__DOT__EX__DOT___GEN_167 = vlSelf->CoreTop__DOT__EX__DOT__mstatus;
                vlSelf->CoreTop__DOT__EX__DOT___GEN_171 
                    = vlSelf->CoreTop__DOT__EX__DOT__mie;
            } else if ((0xfU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
                CoreTop__DOT__EX__DOT___GEN_167 = vlSelf->CoreTop__DOT__EX__DOT__mstatus;
                vlSelf->CoreTop__DOT__EX__DOT___GEN_171 
                    = vlSelf->CoreTop__DOT__EX__DOT__mie;
            } else if ((0x12U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
                CoreTop__DOT__EX__DOT___GEN_167 = vlSelf->CoreTop__DOT__EX__DOT__mstatus;
                vlSelf->CoreTop__DOT__EX__DOT___GEN_171 
                    = vlSelf->CoreTop__DOT__EX__DOT__mie;
            } else {
                CoreTop__DOT__EX__DOT___GEN_167 = (
                                                   (0x10U 
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
                                                         ? vlSelf->CoreTop__DOT__EX__DOT___shift_result_T
                                                         : vlSelf->CoreTop__DOT__EX__DOT__mstatus)
                                                        : vlSelf->CoreTop__DOT__EX__DOT__mstatus)))));
                vlSelf->CoreTop__DOT__EX__DOT___GEN_171 
                    = CoreTop__DOT__EX__DOT___GEN_80;
            }
            vlSelf->CoreTop__DOT__EX__DOT___GEN_169 
                = CoreTop__DOT__EX__DOT___GEN_120;
        }
        vlSelf->CoreTop__DOT__EX__DOT___GEN_168 = CoreTop__DOT__EX__DOT___GEN_147;
    }
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__0, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__1, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__0, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__2, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__1, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__3, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__2, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__4, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__3, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__5, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__4, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__6, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__5, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    if ((5U == (7U & (__Vtemp_h3d097fd2__5[0U] >> 0x13U)))) {
        __Vtemp_hf09ee039__0[0U] = (~ __Vtemp_h858419c6__4[0U]);
        __Vtemp_hf09ee039__0[1U] = (~ __Vtemp_h858419c6__4[1U]);
        __Vtemp_hf09ee039__0[2U] = (3U & (~ __Vtemp_h858419c6__4[2U]));
    } else if ((6U == (7U & (__Vtemp_h3d097fd2__6[0U] 
                             >> 0x13U)))) {
        __Vtemp_hf09ee039__0[0U] = (~ __Vtemp_h858419c6__5[0U]);
        __Vtemp_hf09ee039__0[1U] = (~ __Vtemp_h858419c6__5[1U]);
        __Vtemp_hf09ee039__0[2U] = (3U & (~ __Vtemp_h858419c6__5[2U]));
    } else {
        __Vtemp_hf09ee039__0[0U] = 0U;
        __Vtemp_hf09ee039__0[1U] = 0U;
        __Vtemp_hf09ee039__0[2U] = (3U & 0U);
    }
    VL_EXTEND_WW(67,66, __Vtemp_h09e423f6__0, __Vtemp_hf09ee039__0);
    if ((0U == (7U & (__Vtemp_h3d097fd2__0[0U] >> 0x13U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_10__DOT___io_p_T_20[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_10__DOT___io_p_T_20[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_10__DOT___io_p_T_20[2U] = 0U;
    } else if ((1U == (7U & (__Vtemp_h3d097fd2__1[0U] 
                             >> 0x13U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_10__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_10__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__0[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_10__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__0[2U];
    } else if ((2U == (7U & (__Vtemp_h3d097fd2__2[0U] 
                             >> 0x13U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_10__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__1[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_10__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__1[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_10__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__1[2U];
    } else if ((3U == (7U & (__Vtemp_h3d097fd2__3[0U] 
                             >> 0x13U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_10__DOT___io_p_T_20[0U] 
            = (__Vtemp_h858419c6__2[0U] << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_10__DOT___io_p_T_20[1U] 
            = ((__Vtemp_h858419c6__2[0U] >> 0x1fU) 
               | (__Vtemp_h858419c6__2[1U] << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_10__DOT___io_p_T_20[2U] 
            = ((__Vtemp_h858419c6__2[1U] >> 0x1fU) 
               | (__Vtemp_h858419c6__2[2U] << 1U));
    } else if ((4U == (7U & (__Vtemp_h3d097fd2__4[0U] 
                             >> 0x13U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_10__DOT___io_p_T_20[0U] 
            = ((~ __Vtemp_h858419c6__3[0U]) << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_10__DOT___io_p_T_20[1U] 
            = (((~ __Vtemp_h858419c6__3[0U]) >> 0x1fU) 
               | ((~ __Vtemp_h858419c6__3[1U]) << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_10__DOT___io_p_T_20[2U] 
            = (((~ __Vtemp_h858419c6__3[1U]) >> 0x1fU) 
               | (6U & ((~ __Vtemp_h858419c6__3[2U]) 
                        << 1U)));
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_10__DOT___io_p_T_20[0U] 
            = __Vtemp_h09e423f6__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_10__DOT___io_p_T_20[1U] 
            = __Vtemp_h09e423f6__0[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_10__DOT___io_p_T_20[2U] 
            = __Vtemp_h09e423f6__0[2U];
    }
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__7, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__8, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__6, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__9, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__7, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__10, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__8, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__11, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__9, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__12, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__10, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__13, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__11, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    if ((5U == (7U & (__Vtemp_h3d097fd2__12[0U] >> 0x15U)))) {
        __Vtemp_h5876c34e__0[0U] = (~ __Vtemp_h858419c6__10[0U]);
        __Vtemp_h5876c34e__0[1U] = (~ __Vtemp_h858419c6__10[1U]);
        __Vtemp_h5876c34e__0[2U] = (3U & (~ __Vtemp_h858419c6__10[2U]));
    } else if ((6U == (7U & (__Vtemp_h3d097fd2__13[0U] 
                             >> 0x15U)))) {
        __Vtemp_h5876c34e__0[0U] = (~ __Vtemp_h858419c6__11[0U]);
        __Vtemp_h5876c34e__0[1U] = (~ __Vtemp_h858419c6__11[1U]);
        __Vtemp_h5876c34e__0[2U] = (3U & (~ __Vtemp_h858419c6__11[2U]));
    } else {
        __Vtemp_h5876c34e__0[0U] = 0U;
        __Vtemp_h5876c34e__0[1U] = 0U;
        __Vtemp_h5876c34e__0[2U] = (3U & 0U);
    }
    VL_EXTEND_WW(67,66, __Vtemp_h9b318812__0, __Vtemp_h5876c34e__0);
    if ((0U == (7U & (__Vtemp_h3d097fd2__7[0U] >> 0x15U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11__DOT___io_p_T_20[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11__DOT___io_p_T_20[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11__DOT___io_p_T_20[2U] = 0U;
    } else if ((1U == (7U & (__Vtemp_h3d097fd2__8[0U] 
                             >> 0x15U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__6[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__6[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__6[2U];
    } else if ((2U == (7U & (__Vtemp_h3d097fd2__9[0U] 
                             >> 0x15U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__7[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__7[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__7[2U];
    } else if ((3U == (7U & (__Vtemp_h3d097fd2__10[0U] 
                             >> 0x15U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11__DOT___io_p_T_20[0U] 
            = (__Vtemp_h858419c6__8[0U] << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11__DOT___io_p_T_20[1U] 
            = ((__Vtemp_h858419c6__8[0U] >> 0x1fU) 
               | (__Vtemp_h858419c6__8[1U] << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11__DOT___io_p_T_20[2U] 
            = ((__Vtemp_h858419c6__8[1U] >> 0x1fU) 
               | (__Vtemp_h858419c6__8[2U] << 1U));
    } else if ((4U == (7U & (__Vtemp_h3d097fd2__11[0U] 
                             >> 0x15U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11__DOT___io_p_T_20[0U] 
            = ((~ __Vtemp_h858419c6__9[0U]) << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11__DOT___io_p_T_20[1U] 
            = (((~ __Vtemp_h858419c6__9[0U]) >> 0x1fU) 
               | ((~ __Vtemp_h858419c6__9[1U]) << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11__DOT___io_p_T_20[2U] 
            = (((~ __Vtemp_h858419c6__9[1U]) >> 0x1fU) 
               | (6U & ((~ __Vtemp_h858419c6__9[2U]) 
                        << 1U)));
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11__DOT___io_p_T_20[0U] 
            = __Vtemp_h9b318812__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11__DOT___io_p_T_20[1U] 
            = __Vtemp_h9b318812__0[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11__DOT___io_p_T_20[2U] 
            = __Vtemp_h9b318812__0[2U];
    }
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__14, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__15, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__12, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__16, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__13, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__17, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__14, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__18, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__15, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__19, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__16, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__20, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__17, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    if ((5U == (7U & (__Vtemp_h3d097fd2__19[0U] >> 0x17U)))) {
        __Vtemp_hfac90b87__0[0U] = (~ __Vtemp_h858419c6__16[0U]);
        __Vtemp_hfac90b87__0[1U] = (~ __Vtemp_h858419c6__16[1U]);
        __Vtemp_hfac90b87__0[2U] = (3U & (~ __Vtemp_h858419c6__16[2U]));
    } else if ((6U == (7U & (__Vtemp_h3d097fd2__20[0U] 
                             >> 0x17U)))) {
        __Vtemp_hfac90b87__0[0U] = (~ __Vtemp_h858419c6__17[0U]);
        __Vtemp_hfac90b87__0[1U] = (~ __Vtemp_h858419c6__17[1U]);
        __Vtemp_hfac90b87__0[2U] = (3U & (~ __Vtemp_h858419c6__17[2U]));
    } else {
        __Vtemp_hfac90b87__0[0U] = 0U;
        __Vtemp_hfac90b87__0[1U] = 0U;
        __Vtemp_hfac90b87__0[2U] = (3U & 0U);
    }
    VL_EXTEND_WW(67,66, __Vtemp_h022c6a7e__0, __Vtemp_hfac90b87__0);
    if ((0U == (7U & (__Vtemp_h3d097fd2__14[0U] >> 0x17U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12__DOT___io_p_T_20[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12__DOT___io_p_T_20[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12__DOT___io_p_T_20[2U] = 0U;
    } else if ((1U == (7U & (__Vtemp_h3d097fd2__15[0U] 
                             >> 0x17U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__12[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__12[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__12[2U];
    } else if ((2U == (7U & (__Vtemp_h3d097fd2__16[0U] 
                             >> 0x17U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__13[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__13[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__13[2U];
    } else if ((3U == (7U & (__Vtemp_h3d097fd2__17[0U] 
                             >> 0x17U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12__DOT___io_p_T_20[0U] 
            = (__Vtemp_h858419c6__14[0U] << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12__DOT___io_p_T_20[1U] 
            = ((__Vtemp_h858419c6__14[0U] >> 0x1fU) 
               | (__Vtemp_h858419c6__14[1U] << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12__DOT___io_p_T_20[2U] 
            = ((__Vtemp_h858419c6__14[1U] >> 0x1fU) 
               | (__Vtemp_h858419c6__14[2U] << 1U));
    } else if ((4U == (7U & (__Vtemp_h3d097fd2__18[0U] 
                             >> 0x17U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12__DOT___io_p_T_20[0U] 
            = ((~ __Vtemp_h858419c6__15[0U]) << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12__DOT___io_p_T_20[1U] 
            = (((~ __Vtemp_h858419c6__15[0U]) >> 0x1fU) 
               | ((~ __Vtemp_h858419c6__15[1U]) << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12__DOT___io_p_T_20[2U] 
            = (((~ __Vtemp_h858419c6__15[1U]) >> 0x1fU) 
               | (6U & ((~ __Vtemp_h858419c6__15[2U]) 
                        << 1U)));
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12__DOT___io_p_T_20[0U] 
            = __Vtemp_h022c6a7e__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12__DOT___io_p_T_20[1U] 
            = __Vtemp_h022c6a7e__0[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12__DOT___io_p_T_20[2U] 
            = __Vtemp_h022c6a7e__0[2U];
    }
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__21, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__22, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__18, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__23, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__19, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__24, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__20, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__25, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__21, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__26, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__22, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__27, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__23, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    if ((5U == (7U & (__Vtemp_h3d097fd2__26[0U] >> 0x19U)))) {
        __Vtemp_h1a805788__0[0U] = (~ __Vtemp_h858419c6__22[0U]);
        __Vtemp_h1a805788__0[1U] = (~ __Vtemp_h858419c6__22[1U]);
        __Vtemp_h1a805788__0[2U] = (3U & (~ __Vtemp_h858419c6__22[2U]));
    } else if ((6U == (7U & (__Vtemp_h3d097fd2__27[0U] 
                             >> 0x19U)))) {
        __Vtemp_h1a805788__0[0U] = (~ __Vtemp_h858419c6__23[0U]);
        __Vtemp_h1a805788__0[1U] = (~ __Vtemp_h858419c6__23[1U]);
        __Vtemp_h1a805788__0[2U] = (3U & (~ __Vtemp_h858419c6__23[2U]));
    } else {
        __Vtemp_h1a805788__0[0U] = 0U;
        __Vtemp_h1a805788__0[1U] = 0U;
        __Vtemp_h1a805788__0[2U] = (3U & 0U);
    }
    VL_EXTEND_WW(67,66, __Vtemp_h8f6feebc__0, __Vtemp_h1a805788__0);
    if ((0U == (7U & (__Vtemp_h3d097fd2__21[0U] >> 0x19U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13__DOT___io_p_T_20[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13__DOT___io_p_T_20[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13__DOT___io_p_T_20[2U] = 0U;
    } else if ((1U == (7U & (__Vtemp_h3d097fd2__22[0U] 
                             >> 0x19U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__18[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__18[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__18[2U];
    } else if ((2U == (7U & (__Vtemp_h3d097fd2__23[0U] 
                             >> 0x19U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__19[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__19[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__19[2U];
    } else if ((3U == (7U & (__Vtemp_h3d097fd2__24[0U] 
                             >> 0x19U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13__DOT___io_p_T_20[0U] 
            = (__Vtemp_h858419c6__20[0U] << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13__DOT___io_p_T_20[1U] 
            = ((__Vtemp_h858419c6__20[0U] >> 0x1fU) 
               | (__Vtemp_h858419c6__20[1U] << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13__DOT___io_p_T_20[2U] 
            = ((__Vtemp_h858419c6__20[1U] >> 0x1fU) 
               | (__Vtemp_h858419c6__20[2U] << 1U));
    } else if ((4U == (7U & (__Vtemp_h3d097fd2__25[0U] 
                             >> 0x19U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13__DOT___io_p_T_20[0U] 
            = ((~ __Vtemp_h858419c6__21[0U]) << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13__DOT___io_p_T_20[1U] 
            = (((~ __Vtemp_h858419c6__21[0U]) >> 0x1fU) 
               | ((~ __Vtemp_h858419c6__21[1U]) << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13__DOT___io_p_T_20[2U] 
            = (((~ __Vtemp_h858419c6__21[1U]) >> 0x1fU) 
               | (6U & ((~ __Vtemp_h858419c6__21[2U]) 
                        << 1U)));
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13__DOT___io_p_T_20[0U] 
            = __Vtemp_h8f6feebc__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13__DOT___io_p_T_20[1U] 
            = __Vtemp_h8f6feebc__0[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13__DOT___io_p_T_20[2U] 
            = __Vtemp_h8f6feebc__0[2U];
    }
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__28, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__29, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__24, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__30, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__25, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__31, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__26, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__32, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__27, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__33, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__28, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__34, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__29, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    if ((5U == (7U & (__Vtemp_h3d097fd2__33[0U] >> 0x1bU)))) {
        __Vtemp_ha8000f9d__0[0U] = (~ __Vtemp_h858419c6__28[0U]);
        __Vtemp_ha8000f9d__0[1U] = (~ __Vtemp_h858419c6__28[1U]);
        __Vtemp_ha8000f9d__0[2U] = (3U & (~ __Vtemp_h858419c6__28[2U]));
    } else if ((6U == (7U & (__Vtemp_h3d097fd2__34[0U] 
                             >> 0x1bU)))) {
        __Vtemp_ha8000f9d__0[0U] = (~ __Vtemp_h858419c6__29[0U]);
        __Vtemp_ha8000f9d__0[1U] = (~ __Vtemp_h858419c6__29[1U]);
        __Vtemp_ha8000f9d__0[2U] = (3U & (~ __Vtemp_h858419c6__29[2U]));
    } else {
        __Vtemp_ha8000f9d__0[0U] = 0U;
        __Vtemp_ha8000f9d__0[1U] = 0U;
        __Vtemp_ha8000f9d__0[2U] = (3U & 0U);
    }
    VL_EXTEND_WW(67,66, __Vtemp_h56f0b06f__0, __Vtemp_ha8000f9d__0);
    if ((0U == (7U & (__Vtemp_h3d097fd2__28[0U] >> 0x1bU)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_20[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_20[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_20[2U] = 0U;
    } else if ((1U == (7U & (__Vtemp_h3d097fd2__29[0U] 
                             >> 0x1bU)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__24[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__24[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__24[2U];
    } else if ((2U == (7U & (__Vtemp_h3d097fd2__30[0U] 
                             >> 0x1bU)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__25[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__25[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__25[2U];
    } else if ((3U == (7U & (__Vtemp_h3d097fd2__31[0U] 
                             >> 0x1bU)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_20[0U] 
            = (__Vtemp_h858419c6__26[0U] << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_20[1U] 
            = ((__Vtemp_h858419c6__26[0U] >> 0x1fU) 
               | (__Vtemp_h858419c6__26[1U] << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_20[2U] 
            = ((__Vtemp_h858419c6__26[1U] >> 0x1fU) 
               | (__Vtemp_h858419c6__26[2U] << 1U));
    } else if ((4U == (7U & (__Vtemp_h3d097fd2__32[0U] 
                             >> 0x1bU)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_20[0U] 
            = ((~ __Vtemp_h858419c6__27[0U]) << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_20[1U] 
            = (((~ __Vtemp_h858419c6__27[0U]) >> 0x1fU) 
               | ((~ __Vtemp_h858419c6__27[1U]) << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_20[2U] 
            = (((~ __Vtemp_h858419c6__27[1U]) >> 0x1fU) 
               | (6U & ((~ __Vtemp_h858419c6__27[2U]) 
                        << 1U)));
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_20[0U] 
            = __Vtemp_h56f0b06f__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_20[1U] 
            = __Vtemp_h56f0b06f__0[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_20[2U] 
            = __Vtemp_h56f0b06f__0[2U];
    }
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__35, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__36, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__30, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__37, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__31, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__38, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__32, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__39, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__33, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__40, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__34, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__41, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__35, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    if ((5U == (__Vtemp_h3d097fd2__40[0U] >> 0x1dU))) {
        __Vtemp_h7f4c7730__0[0U] = (~ __Vtemp_h858419c6__34[0U]);
        __Vtemp_h7f4c7730__0[1U] = (~ __Vtemp_h858419c6__34[1U]);
        __Vtemp_h7f4c7730__0[2U] = (3U & (~ __Vtemp_h858419c6__34[2U]));
    } else if ((6U == (__Vtemp_h3d097fd2__41[0U] >> 0x1dU))) {
        __Vtemp_h7f4c7730__0[0U] = (~ __Vtemp_h858419c6__35[0U]);
        __Vtemp_h7f4c7730__0[1U] = (~ __Vtemp_h858419c6__35[1U]);
        __Vtemp_h7f4c7730__0[2U] = (3U & (~ __Vtemp_h858419c6__35[2U]));
    } else {
        __Vtemp_h7f4c7730__0[0U] = 0U;
        __Vtemp_h7f4c7730__0[1U] = 0U;
        __Vtemp_h7f4c7730__0[2U] = (3U & 0U);
    }
    VL_EXTEND_WW(67,66, __Vtemp_h93301bf7__0, __Vtemp_h7f4c7730__0);
    if ((0U == (__Vtemp_h3d097fd2__35[0U] >> 0x1dU))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_20[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_20[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_20[2U] = 0U;
    } else if ((1U == (__Vtemp_h3d097fd2__36[0U] >> 0x1dU))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__30[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__30[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__30[2U];
    } else if ((2U == (__Vtemp_h3d097fd2__37[0U] >> 0x1dU))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__31[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__31[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__31[2U];
    } else if ((3U == (__Vtemp_h3d097fd2__38[0U] >> 0x1dU))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_20[0U] 
            = (__Vtemp_h858419c6__32[0U] << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_20[1U] 
            = ((__Vtemp_h858419c6__32[0U] >> 0x1fU) 
               | (__Vtemp_h858419c6__32[1U] << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_20[2U] 
            = ((__Vtemp_h858419c6__32[1U] >> 0x1fU) 
               | (__Vtemp_h858419c6__32[2U] << 1U));
    } else if ((4U == (__Vtemp_h3d097fd2__39[0U] >> 0x1dU))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_20[0U] 
            = ((~ __Vtemp_h858419c6__33[0U]) << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_20[1U] 
            = (((~ __Vtemp_h858419c6__33[0U]) >> 0x1fU) 
               | ((~ __Vtemp_h858419c6__33[1U]) << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_20[2U] 
            = (((~ __Vtemp_h858419c6__33[1U]) >> 0x1fU) 
               | (6U & ((~ __Vtemp_h858419c6__33[2U]) 
                        << 1U)));
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_20[0U] 
            = __Vtemp_h93301bf7__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_20[1U] 
            = __Vtemp_h93301bf7__0[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_20[2U] 
            = __Vtemp_h93301bf7__0[2U];
    }
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__42, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__43, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__36, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__44, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__37, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__45, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__38, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__46, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__39, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__47, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__40, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__48, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__41, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    if ((5U == (7U & ((__Vtemp_h3d097fd2__47[1U] << 1U) 
                      | (__Vtemp_h3d097fd2__47[0U] 
                         >> 0x1fU))))) {
        __Vtemp_hc2d447cb__0[0U] = (~ __Vtemp_h858419c6__40[0U]);
        __Vtemp_hc2d447cb__0[1U] = (~ __Vtemp_h858419c6__40[1U]);
        __Vtemp_hc2d447cb__0[2U] = (3U & (~ __Vtemp_h858419c6__40[2U]));
    } else if ((6U == (7U & ((__Vtemp_h3d097fd2__48[1U] 
                              << 1U) | (__Vtemp_h3d097fd2__48[0U] 
                                        >> 0x1fU))))) {
        __Vtemp_hc2d447cb__0[0U] = (~ __Vtemp_h858419c6__41[0U]);
        __Vtemp_hc2d447cb__0[1U] = (~ __Vtemp_h858419c6__41[1U]);
        __Vtemp_hc2d447cb__0[2U] = (3U & (~ __Vtemp_h858419c6__41[2U]));
    } else {
        __Vtemp_hc2d447cb__0[0U] = 0U;
        __Vtemp_hc2d447cb__0[1U] = 0U;
        __Vtemp_hc2d447cb__0[2U] = (3U & 0U);
    }
    VL_EXTEND_WW(67,66, __Vtemp_h99fdb1da__0, __Vtemp_hc2d447cb__0);
    if ((1U == (7U & ((__Vtemp_h3d097fd2__43[1U] << 1U) 
                      | (__Vtemp_h3d097fd2__43[0U] 
                         >> 0x1fU))))) {
        __Vtemp_h68cf1ac2__0[1U] = __Vtemp_h858419c6__36[1U];
        __Vtemp_h68cf1ac2__0[2U] = __Vtemp_h858419c6__36[2U];
    } else if ((2U == (7U & ((__Vtemp_h3d097fd2__44[1U] 
                              << 1U) | (__Vtemp_h3d097fd2__44[0U] 
                                        >> 0x1fU))))) {
        __Vtemp_h68cf1ac2__0[1U] = __Vtemp_h858419c6__37[1U];
        __Vtemp_h68cf1ac2__0[2U] = __Vtemp_h858419c6__37[2U];
    } else if ((3U == (7U & ((__Vtemp_h3d097fd2__45[1U] 
                              << 1U) | (__Vtemp_h3d097fd2__45[0U] 
                                        >> 0x1fU))))) {
        __Vtemp_h68cf1ac2__0[1U] = ((__Vtemp_h858419c6__38[0U] 
                                     >> 0x1fU) | (__Vtemp_h858419c6__38[1U] 
                                                  << 1U));
        __Vtemp_h68cf1ac2__0[2U] = ((__Vtemp_h858419c6__38[1U] 
                                     >> 0x1fU) | (__Vtemp_h858419c6__38[2U] 
                                                  << 1U));
    } else if ((4U == (7U & ((__Vtemp_h3d097fd2__46[1U] 
                              << 1U) | (__Vtemp_h3d097fd2__46[0U] 
                                        >> 0x1fU))))) {
        __Vtemp_h68cf1ac2__0[1U] = (((~ __Vtemp_h858419c6__39[0U]) 
                                     >> 0x1fU) | ((~ 
                                                   __Vtemp_h858419c6__39[1U]) 
                                                  << 1U));
        __Vtemp_h68cf1ac2__0[2U] = (((~ __Vtemp_h858419c6__39[1U]) 
                                     >> 0x1fU) | (6U 
                                                  & ((~ 
                                                      __Vtemp_h858419c6__39[2U]) 
                                                     << 1U)));
    } else {
        __Vtemp_h68cf1ac2__0[1U] = __Vtemp_h99fdb1da__0[1U];
        __Vtemp_h68cf1ac2__0[2U] = __Vtemp_h99fdb1da__0[2U];
    }
    if ((0U == (7U & ((__Vtemp_h3d097fd2__42[1U] << 1U) 
                      | (__Vtemp_h3d097fd2__42[0U] 
                         >> 0x1fU))))) {
        __Vtemp_hf006aaeb__0[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_16__DOT___io_p_T_20[0U] 
            = __Vtemp_hf006aaeb__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_16__DOT___io_p_T_20[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_16__DOT___io_p_T_20[2U] = 0U;
    } else {
        __Vtemp_hf006aaeb__0[0U] = ((1U == (7U & ((
                                                   __Vtemp_h3d097fd2__43[1U] 
                                                   << 1U) 
                                                  | (__Vtemp_h3d097fd2__43[0U] 
                                                     >> 0x1fU))))
                                     ? __Vtemp_h858419c6__36[0U]
                                     : ((2U == (7U 
                                                & ((__Vtemp_h3d097fd2__44[1U] 
                                                    << 1U) 
                                                   | (__Vtemp_h3d097fd2__44[0U] 
                                                      >> 0x1fU))))
                                         ? __Vtemp_h858419c6__37[0U]
                                         : ((3U == 
                                             (7U & 
                                              ((__Vtemp_h3d097fd2__45[1U] 
                                                << 1U) 
                                               | (__Vtemp_h3d097fd2__45[0U] 
                                                  >> 0x1fU))))
                                             ? (__Vtemp_h858419c6__38[0U] 
                                                << 1U)
                                             : ((4U 
                                                 == 
                                                 (7U 
                                                  & ((__Vtemp_h3d097fd2__46[1U] 
                                                      << 1U) 
                                                     | (__Vtemp_h3d097fd2__46[0U] 
                                                        >> 0x1fU))))
                                                 ? 
                                                ((~ 
                                                  __Vtemp_h858419c6__39[0U]) 
                                                 << 1U)
                                                 : 
                                                __Vtemp_h99fdb1da__0[0U]))));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_16__DOT___io_p_T_20[0U] 
            = __Vtemp_hf006aaeb__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_16__DOT___io_p_T_20[1U] 
            = __Vtemp_h68cf1ac2__0[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_16__DOT___io_p_T_20[2U] 
            = __Vtemp_h68cf1ac2__0[2U];
    }
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__49, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__50, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__42, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__51, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__43, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__52, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__44, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__53, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__45, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__54, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__46, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__55, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__47, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    if ((5U == (7U & (__Vtemp_h3d097fd2__54[1U] >> 1U)))) {
        __Vtemp_h17160295__0[0U] = (~ __Vtemp_h858419c6__46[0U]);
        __Vtemp_h17160295__0[1U] = (~ __Vtemp_h858419c6__46[1U]);
        __Vtemp_h17160295__0[2U] = (3U & (~ __Vtemp_h858419c6__46[2U]));
    } else if ((6U == (7U & (__Vtemp_h3d097fd2__55[1U] 
                             >> 1U)))) {
        __Vtemp_h17160295__0[0U] = (~ __Vtemp_h858419c6__47[0U]);
        __Vtemp_h17160295__0[1U] = (~ __Vtemp_h858419c6__47[1U]);
        __Vtemp_h17160295__0[2U] = (3U & (~ __Vtemp_h858419c6__47[2U]));
    } else {
        __Vtemp_h17160295__0[0U] = 0U;
        __Vtemp_h17160295__0[1U] = 0U;
        __Vtemp_h17160295__0[2U] = (3U & 0U);
    }
    VL_EXTEND_WW(67,66, __Vtemp_hf062032d__0, __Vtemp_h17160295__0);
    if ((0U == (7U & (__Vtemp_h3d097fd2__49[1U] >> 1U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_20[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_20[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_20[2U] = 0U;
    } else if ((1U == (7U & (__Vtemp_h3d097fd2__50[1U] 
                             >> 1U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__42[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__42[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__42[2U];
    } else if ((2U == (7U & (__Vtemp_h3d097fd2__51[1U] 
                             >> 1U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__43[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__43[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__43[2U];
    } else if ((3U == (7U & (__Vtemp_h3d097fd2__52[1U] 
                             >> 1U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_20[0U] 
            = (__Vtemp_h858419c6__44[0U] << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_20[1U] 
            = ((__Vtemp_h858419c6__44[0U] >> 0x1fU) 
               | (__Vtemp_h858419c6__44[1U] << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_20[2U] 
            = ((__Vtemp_h858419c6__44[1U] >> 0x1fU) 
               | (__Vtemp_h858419c6__44[2U] << 1U));
    } else if ((4U == (7U & (__Vtemp_h3d097fd2__53[1U] 
                             >> 1U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_20[0U] 
            = ((~ __Vtemp_h858419c6__45[0U]) << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_20[1U] 
            = (((~ __Vtemp_h858419c6__45[0U]) >> 0x1fU) 
               | ((~ __Vtemp_h858419c6__45[1U]) << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_20[2U] 
            = (((~ __Vtemp_h858419c6__45[1U]) >> 0x1fU) 
               | (6U & ((~ __Vtemp_h858419c6__45[2U]) 
                        << 1U)));
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_20[0U] 
            = __Vtemp_hf062032d__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_20[1U] 
            = __Vtemp_hf062032d__0[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_20[2U] 
            = __Vtemp_hf062032d__0[2U];
    }
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__56, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__57, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__48, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__58, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__49, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__59, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__50, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__60, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__51, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__61, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__52, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__62, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__53, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    if ((5U == (7U & (__Vtemp_h3d097fd2__61[1U] >> 3U)))) {
        __Vtemp_h8c6574e6__0[0U] = (~ __Vtemp_h858419c6__52[0U]);
        __Vtemp_h8c6574e6__0[1U] = (~ __Vtemp_h858419c6__52[1U]);
        __Vtemp_h8c6574e6__0[2U] = (3U & (~ __Vtemp_h858419c6__52[2U]));
    } else if ((6U == (7U & (__Vtemp_h3d097fd2__62[1U] 
                             >> 3U)))) {
        __Vtemp_h8c6574e6__0[0U] = (~ __Vtemp_h858419c6__53[0U]);
        __Vtemp_h8c6574e6__0[1U] = (~ __Vtemp_h858419c6__53[1U]);
        __Vtemp_h8c6574e6__0[2U] = (3U & (~ __Vtemp_h858419c6__53[2U]));
    } else {
        __Vtemp_h8c6574e6__0[0U] = 0U;
        __Vtemp_h8c6574e6__0[1U] = 0U;
        __Vtemp_h8c6574e6__0[2U] = (3U & 0U);
    }
    VL_EXTEND_WW(67,66, __Vtemp_he3a0cca8__0, __Vtemp_h8c6574e6__0);
    if ((0U == (7U & (__Vtemp_h3d097fd2__56[1U] >> 3U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18__DOT___io_p_T_20[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18__DOT___io_p_T_20[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18__DOT___io_p_T_20[2U] = 0U;
    } else if ((1U == (7U & (__Vtemp_h3d097fd2__57[1U] 
                             >> 3U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__48[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__48[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__48[2U];
    } else if ((2U == (7U & (__Vtemp_h3d097fd2__58[1U] 
                             >> 3U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__49[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__49[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__49[2U];
    } else if ((3U == (7U & (__Vtemp_h3d097fd2__59[1U] 
                             >> 3U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18__DOT___io_p_T_20[0U] 
            = (__Vtemp_h858419c6__50[0U] << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18__DOT___io_p_T_20[1U] 
            = ((__Vtemp_h858419c6__50[0U] >> 0x1fU) 
               | (__Vtemp_h858419c6__50[1U] << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18__DOT___io_p_T_20[2U] 
            = ((__Vtemp_h858419c6__50[1U] >> 0x1fU) 
               | (__Vtemp_h858419c6__50[2U] << 1U));
    } else if ((4U == (7U & (__Vtemp_h3d097fd2__60[1U] 
                             >> 3U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18__DOT___io_p_T_20[0U] 
            = ((~ __Vtemp_h858419c6__51[0U]) << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18__DOT___io_p_T_20[1U] 
            = (((~ __Vtemp_h858419c6__51[0U]) >> 0x1fU) 
               | ((~ __Vtemp_h858419c6__51[1U]) << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18__DOT___io_p_T_20[2U] 
            = (((~ __Vtemp_h858419c6__51[1U]) >> 0x1fU) 
               | (6U & ((~ __Vtemp_h858419c6__51[2U]) 
                        << 1U)));
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18__DOT___io_p_T_20[0U] 
            = __Vtemp_he3a0cca8__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18__DOT___io_p_T_20[1U] 
            = __Vtemp_he3a0cca8__0[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18__DOT___io_p_T_20[2U] 
            = __Vtemp_he3a0cca8__0[2U];
    }
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__63, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__64, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__54, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__65, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__55, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__66, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__56, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__67, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__57, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__68, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__58, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__69, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__59, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    if ((5U == (7U & (__Vtemp_h3d097fd2__68[1U] >> 5U)))) {
        __Vtemp_h54c35206__0[0U] = (~ __Vtemp_h858419c6__58[0U]);
        __Vtemp_h54c35206__0[1U] = (~ __Vtemp_h858419c6__58[1U]);
        __Vtemp_h54c35206__0[2U] = (3U & (~ __Vtemp_h858419c6__58[2U]));
    } else if ((6U == (7U & (__Vtemp_h3d097fd2__69[1U] 
                             >> 5U)))) {
        __Vtemp_h54c35206__0[0U] = (~ __Vtemp_h858419c6__59[0U]);
        __Vtemp_h54c35206__0[1U] = (~ __Vtemp_h858419c6__59[1U]);
        __Vtemp_h54c35206__0[2U] = (3U & (~ __Vtemp_h858419c6__59[2U]));
    } else {
        __Vtemp_h54c35206__0[0U] = 0U;
        __Vtemp_h54c35206__0[1U] = 0U;
        __Vtemp_h54c35206__0[2U] = (3U & 0U);
    }
    VL_EXTEND_WW(67,66, __Vtemp_ha9fc49cf__0, __Vtemp_h54c35206__0);
    if ((0U == (7U & (__Vtemp_h3d097fd2__63[1U] >> 5U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19__DOT___io_p_T_20[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19__DOT___io_p_T_20[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19__DOT___io_p_T_20[2U] = 0U;
    } else if ((1U == (7U & (__Vtemp_h3d097fd2__64[1U] 
                             >> 5U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__54[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__54[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__54[2U];
    } else if ((2U == (7U & (__Vtemp_h3d097fd2__65[1U] 
                             >> 5U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__55[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__55[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__55[2U];
    } else if ((3U == (7U & (__Vtemp_h3d097fd2__66[1U] 
                             >> 5U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19__DOT___io_p_T_20[0U] 
            = (__Vtemp_h858419c6__56[0U] << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19__DOT___io_p_T_20[1U] 
            = ((__Vtemp_h858419c6__56[0U] >> 0x1fU) 
               | (__Vtemp_h858419c6__56[1U] << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19__DOT___io_p_T_20[2U] 
            = ((__Vtemp_h858419c6__56[1U] >> 0x1fU) 
               | (__Vtemp_h858419c6__56[2U] << 1U));
    } else if ((4U == (7U & (__Vtemp_h3d097fd2__67[1U] 
                             >> 5U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19__DOT___io_p_T_20[0U] 
            = ((~ __Vtemp_h858419c6__57[0U]) << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19__DOT___io_p_T_20[1U] 
            = (((~ __Vtemp_h858419c6__57[0U]) >> 0x1fU) 
               | ((~ __Vtemp_h858419c6__57[1U]) << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19__DOT___io_p_T_20[2U] 
            = (((~ __Vtemp_h858419c6__57[1U]) >> 0x1fU) 
               | (6U & ((~ __Vtemp_h858419c6__57[2U]) 
                        << 1U)));
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19__DOT___io_p_T_20[0U] 
            = __Vtemp_ha9fc49cf__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19__DOT___io_p_T_20[1U] 
            = __Vtemp_ha9fc49cf__0[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19__DOT___io_p_T_20[2U] 
            = __Vtemp_ha9fc49cf__0[2U];
    }
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__70, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__71, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__60, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__72, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__61, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__73, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__62, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__74, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__63, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__75, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__64, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__76, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__65, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    if ((5U == (7U & (__Vtemp_h3d097fd2__75[1U] >> 7U)))) {
        __Vtemp_hb1c3ad2c__0[0U] = (~ __Vtemp_h858419c6__64[0U]);
        __Vtemp_hb1c3ad2c__0[1U] = (~ __Vtemp_h858419c6__64[1U]);
        __Vtemp_hb1c3ad2c__0[2U] = (3U & (~ __Vtemp_h858419c6__64[2U]));
    } else if ((6U == (7U & (__Vtemp_h3d097fd2__76[1U] 
                             >> 7U)))) {
        __Vtemp_hb1c3ad2c__0[0U] = (~ __Vtemp_h858419c6__65[0U]);
        __Vtemp_hb1c3ad2c__0[1U] = (~ __Vtemp_h858419c6__65[1U]);
        __Vtemp_hb1c3ad2c__0[2U] = (3U & (~ __Vtemp_h858419c6__65[2U]));
    } else {
        __Vtemp_hb1c3ad2c__0[0U] = 0U;
        __Vtemp_hb1c3ad2c__0[1U] = 0U;
        __Vtemp_hb1c3ad2c__0[2U] = (3U & 0U);
    }
    VL_EXTEND_WW(67,66, __Vtemp_h7daf5e2d__0, __Vtemp_hb1c3ad2c__0);
    if ((0U == (7U & (__Vtemp_h3d097fd2__70[1U] >> 7U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_20__DOT___io_p_T_20[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_20__DOT___io_p_T_20[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_20__DOT___io_p_T_20[2U] = 0U;
    } else if ((1U == (7U & (__Vtemp_h3d097fd2__71[1U] 
                             >> 7U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_20__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__60[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_20__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__60[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_20__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__60[2U];
    } else if ((2U == (7U & (__Vtemp_h3d097fd2__72[1U] 
                             >> 7U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_20__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__61[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_20__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__61[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_20__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__61[2U];
    } else if ((3U == (7U & (__Vtemp_h3d097fd2__73[1U] 
                             >> 7U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_20__DOT___io_p_T_20[0U] 
            = (__Vtemp_h858419c6__62[0U] << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_20__DOT___io_p_T_20[1U] 
            = ((__Vtemp_h858419c6__62[0U] >> 0x1fU) 
               | (__Vtemp_h858419c6__62[1U] << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_20__DOT___io_p_T_20[2U] 
            = ((__Vtemp_h858419c6__62[1U] >> 0x1fU) 
               | (__Vtemp_h858419c6__62[2U] << 1U));
    } else if ((4U == (7U & (__Vtemp_h3d097fd2__74[1U] 
                             >> 7U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_20__DOT___io_p_T_20[0U] 
            = ((~ __Vtemp_h858419c6__63[0U]) << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_20__DOT___io_p_T_20[1U] 
            = (((~ __Vtemp_h858419c6__63[0U]) >> 0x1fU) 
               | ((~ __Vtemp_h858419c6__63[1U]) << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_20__DOT___io_p_T_20[2U] 
            = (((~ __Vtemp_h858419c6__63[1U]) >> 0x1fU) 
               | (6U & ((~ __Vtemp_h858419c6__63[2U]) 
                        << 1U)));
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_20__DOT___io_p_T_20[0U] 
            = __Vtemp_h7daf5e2d__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_20__DOT___io_p_T_20[1U] 
            = __Vtemp_h7daf5e2d__0[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_20__DOT___io_p_T_20[2U] 
            = __Vtemp_h7daf5e2d__0[2U];
    }
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__77, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__78, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__66, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__79, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__67, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__80, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__68, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__81, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__69, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__82, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__70, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__83, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__71, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    if ((5U == (7U & (__Vtemp_h3d097fd2__82[1U] >> 9U)))) {
        __Vtemp_h134fd92d__0[0U] = (~ __Vtemp_h858419c6__70[0U]);
        __Vtemp_h134fd92d__0[1U] = (~ __Vtemp_h858419c6__70[1U]);
        __Vtemp_h134fd92d__0[2U] = (3U & (~ __Vtemp_h858419c6__70[2U]));
    } else if ((6U == (7U & (__Vtemp_h3d097fd2__83[1U] 
                             >> 9U)))) {
        __Vtemp_h134fd92d__0[0U] = (~ __Vtemp_h858419c6__71[0U]);
        __Vtemp_h134fd92d__0[1U] = (~ __Vtemp_h858419c6__71[1U]);
        __Vtemp_h134fd92d__0[2U] = (3U & (~ __Vtemp_h858419c6__71[2U]));
    } else {
        __Vtemp_h134fd92d__0[0U] = 0U;
        __Vtemp_h134fd92d__0[1U] = 0U;
        __Vtemp_h134fd92d__0[2U] = (3U & 0U);
    }
    VL_EXTEND_WW(67,66, __Vtemp_h4cb22a7a__0, __Vtemp_h134fd92d__0);
    if ((0U == (7U & (__Vtemp_h3d097fd2__77[1U] >> 9U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_21__DOT___io_p_T_20[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_21__DOT___io_p_T_20[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_21__DOT___io_p_T_20[2U] = 0U;
    } else if ((1U == (7U & (__Vtemp_h3d097fd2__78[1U] 
                             >> 9U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_21__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__66[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_21__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__66[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_21__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__66[2U];
    } else if ((2U == (7U & (__Vtemp_h3d097fd2__79[1U] 
                             >> 9U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_21__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__67[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_21__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__67[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_21__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__67[2U];
    } else if ((3U == (7U & (__Vtemp_h3d097fd2__80[1U] 
                             >> 9U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_21__DOT___io_p_T_20[0U] 
            = (__Vtemp_h858419c6__68[0U] << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_21__DOT___io_p_T_20[1U] 
            = ((__Vtemp_h858419c6__68[0U] >> 0x1fU) 
               | (__Vtemp_h858419c6__68[1U] << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_21__DOT___io_p_T_20[2U] 
            = ((__Vtemp_h858419c6__68[1U] >> 0x1fU) 
               | (__Vtemp_h858419c6__68[2U] << 1U));
    } else if ((4U == (7U & (__Vtemp_h3d097fd2__81[1U] 
                             >> 9U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_21__DOT___io_p_T_20[0U] 
            = ((~ __Vtemp_h858419c6__69[0U]) << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_21__DOT___io_p_T_20[1U] 
            = (((~ __Vtemp_h858419c6__69[0U]) >> 0x1fU) 
               | ((~ __Vtemp_h858419c6__69[1U]) << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_21__DOT___io_p_T_20[2U] 
            = (((~ __Vtemp_h858419c6__69[1U]) >> 0x1fU) 
               | (6U & ((~ __Vtemp_h858419c6__69[2U]) 
                        << 1U)));
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_21__DOT___io_p_T_20[0U] 
            = __Vtemp_h4cb22a7a__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_21__DOT___io_p_T_20[1U] 
            = __Vtemp_h4cb22a7a__0[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_21__DOT___io_p_T_20[2U] 
            = __Vtemp_h4cb22a7a__0[2U];
    }
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__84, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__85, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__72, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__86, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__73, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__87, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__74, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__88, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__75, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__89, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__76, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__90, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__77, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    if ((5U == (7U & (__Vtemp_h3d097fd2__89[1U] >> 0xbU)))) {
        __Vtemp_ha6353e94__0[0U] = (~ __Vtemp_h858419c6__76[0U]);
        __Vtemp_ha6353e94__0[1U] = (~ __Vtemp_h858419c6__76[1U]);
        __Vtemp_ha6353e94__0[2U] = (3U & (~ __Vtemp_h858419c6__76[2U]));
    } else if ((6U == (7U & (__Vtemp_h3d097fd2__90[1U] 
                             >> 0xbU)))) {
        __Vtemp_ha6353e94__0[0U] = (~ __Vtemp_h858419c6__77[0U]);
        __Vtemp_ha6353e94__0[1U] = (~ __Vtemp_h858419c6__77[1U]);
        __Vtemp_ha6353e94__0[2U] = (3U & (~ __Vtemp_h858419c6__77[2U]));
    } else {
        __Vtemp_ha6353e94__0[0U] = 0U;
        __Vtemp_ha6353e94__0[1U] = 0U;
        __Vtemp_ha6353e94__0[2U] = (3U & 0U);
    }
    VL_EXTEND_WW(67,66, __Vtemp_hf5b92271__0, __Vtemp_ha6353e94__0);
    if ((0U == (7U & (__Vtemp_h3d097fd2__84[1U] >> 0xbU)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_22__DOT___io_p_T_20[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_22__DOT___io_p_T_20[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_22__DOT___io_p_T_20[2U] = 0U;
    } else if ((1U == (7U & (__Vtemp_h3d097fd2__85[1U] 
                             >> 0xbU)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_22__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__72[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_22__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__72[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_22__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__72[2U];
    } else if ((2U == (7U & (__Vtemp_h3d097fd2__86[1U] 
                             >> 0xbU)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_22__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__73[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_22__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__73[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_22__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__73[2U];
    } else if ((3U == (7U & (__Vtemp_h3d097fd2__87[1U] 
                             >> 0xbU)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_22__DOT___io_p_T_20[0U] 
            = (__Vtemp_h858419c6__74[0U] << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_22__DOT___io_p_T_20[1U] 
            = ((__Vtemp_h858419c6__74[0U] >> 0x1fU) 
               | (__Vtemp_h858419c6__74[1U] << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_22__DOT___io_p_T_20[2U] 
            = ((__Vtemp_h858419c6__74[1U] >> 0x1fU) 
               | (__Vtemp_h858419c6__74[2U] << 1U));
    } else if ((4U == (7U & (__Vtemp_h3d097fd2__88[1U] 
                             >> 0xbU)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_22__DOT___io_p_T_20[0U] 
            = ((~ __Vtemp_h858419c6__75[0U]) << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_22__DOT___io_p_T_20[1U] 
            = (((~ __Vtemp_h858419c6__75[0U]) >> 0x1fU) 
               | ((~ __Vtemp_h858419c6__75[1U]) << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_22__DOT___io_p_T_20[2U] 
            = (((~ __Vtemp_h858419c6__75[1U]) >> 0x1fU) 
               | (6U & ((~ __Vtemp_h858419c6__75[2U]) 
                        << 1U)));
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_22__DOT___io_p_T_20[0U] 
            = __Vtemp_hf5b92271__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_22__DOT___io_p_T_20[1U] 
            = __Vtemp_hf5b92271__0[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_22__DOT___io_p_T_20[2U] 
            = __Vtemp_hf5b92271__0[2U];
    }
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__91, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__92, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__78, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__93, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__79, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__94, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__80, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__95, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__81, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__96, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__82, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__97, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__83, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    if ((5U == (7U & (__Vtemp_h3d097fd2__96[1U] >> 0xdU)))) {
        __Vtemp_h2849d3ad__0[0U] = (~ __Vtemp_h858419c6__82[0U]);
        __Vtemp_h2849d3ad__0[1U] = (~ __Vtemp_h858419c6__82[1U]);
        __Vtemp_h2849d3ad__0[2U] = (3U & (~ __Vtemp_h858419c6__82[2U]));
    } else if ((6U == (7U & (__Vtemp_h3d097fd2__97[1U] 
                             >> 0xdU)))) {
        __Vtemp_h2849d3ad__0[0U] = (~ __Vtemp_h858419c6__83[0U]);
        __Vtemp_h2849d3ad__0[1U] = (~ __Vtemp_h858419c6__83[1U]);
        __Vtemp_h2849d3ad__0[2U] = (3U & (~ __Vtemp_h858419c6__83[2U]));
    } else {
        __Vtemp_h2849d3ad__0[0U] = 0U;
        __Vtemp_h2849d3ad__0[1U] = 0U;
        __Vtemp_h2849d3ad__0[2U] = (3U & 0U);
    }
    VL_EXTEND_WW(67,66, __Vtemp_haf2e61eb__0, __Vtemp_h2849d3ad__0);
    if ((0U == (7U & (__Vtemp_h3d097fd2__91[1U] >> 0xdU)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_23__DOT___io_p_T_20[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_23__DOT___io_p_T_20[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_23__DOT___io_p_T_20[2U] = 0U;
    } else if ((1U == (7U & (__Vtemp_h3d097fd2__92[1U] 
                             >> 0xdU)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_23__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__78[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_23__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__78[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_23__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__78[2U];
    } else if ((2U == (7U & (__Vtemp_h3d097fd2__93[1U] 
                             >> 0xdU)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_23__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__79[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_23__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__79[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_23__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__79[2U];
    } else if ((3U == (7U & (__Vtemp_h3d097fd2__94[1U] 
                             >> 0xdU)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_23__DOT___io_p_T_20[0U] 
            = (__Vtemp_h858419c6__80[0U] << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_23__DOT___io_p_T_20[1U] 
            = ((__Vtemp_h858419c6__80[0U] >> 0x1fU) 
               | (__Vtemp_h858419c6__80[1U] << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_23__DOT___io_p_T_20[2U] 
            = ((__Vtemp_h858419c6__80[1U] >> 0x1fU) 
               | (__Vtemp_h858419c6__80[2U] << 1U));
    } else if ((4U == (7U & (__Vtemp_h3d097fd2__95[1U] 
                             >> 0xdU)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_23__DOT___io_p_T_20[0U] 
            = ((~ __Vtemp_h858419c6__81[0U]) << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_23__DOT___io_p_T_20[1U] 
            = (((~ __Vtemp_h858419c6__81[0U]) >> 0x1fU) 
               | ((~ __Vtemp_h858419c6__81[1U]) << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_23__DOT___io_p_T_20[2U] 
            = (((~ __Vtemp_h858419c6__81[1U]) >> 0x1fU) 
               | (6U & ((~ __Vtemp_h858419c6__81[2U]) 
                        << 1U)));
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_23__DOT___io_p_T_20[0U] 
            = __Vtemp_haf2e61eb__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_23__DOT___io_p_T_20[1U] 
            = __Vtemp_haf2e61eb__0[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_23__DOT___io_p_T_20[2U] 
            = __Vtemp_haf2e61eb__0[2U];
    }
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__98, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__99, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__84, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__100, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__85, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__101, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__86, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__102, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__87, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__103, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__88, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__104, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__89, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    if ((5U == (7U & (__Vtemp_h3d097fd2__103[1U] >> 0xfU)))) {
        __Vtemp_he72fa7c0__0[0U] = (~ __Vtemp_h858419c6__88[0U]);
        __Vtemp_he72fa7c0__0[1U] = (~ __Vtemp_h858419c6__88[1U]);
        __Vtemp_he72fa7c0__0[2U] = (3U & (~ __Vtemp_h858419c6__88[2U]));
    } else if ((6U == (7U & (__Vtemp_h3d097fd2__104[1U] 
                             >> 0xfU)))) {
        __Vtemp_he72fa7c0__0[0U] = (~ __Vtemp_h858419c6__89[0U]);
        __Vtemp_he72fa7c0__0[1U] = (~ __Vtemp_h858419c6__89[1U]);
        __Vtemp_he72fa7c0__0[2U] = (3U & (~ __Vtemp_h858419c6__89[2U]));
    } else {
        __Vtemp_he72fa7c0__0[0U] = 0U;
        __Vtemp_he72fa7c0__0[1U] = 0U;
        __Vtemp_he72fa7c0__0[2U] = (3U & 0U);
    }
    VL_EXTEND_WW(67,66, __Vtemp_ha7b9d30d__0, __Vtemp_he72fa7c0__0);
    if ((0U == (7U & (__Vtemp_h3d097fd2__98[1U] >> 0xfU)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24__DOT___io_p_T_20[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24__DOT___io_p_T_20[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24__DOT___io_p_T_20[2U] = 0U;
    } else if ((1U == (7U & (__Vtemp_h3d097fd2__99[1U] 
                             >> 0xfU)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__84[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__84[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__84[2U];
    } else if ((2U == (7U & (__Vtemp_h3d097fd2__100[1U] 
                             >> 0xfU)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__85[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__85[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__85[2U];
    } else if ((3U == (7U & (__Vtemp_h3d097fd2__101[1U] 
                             >> 0xfU)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24__DOT___io_p_T_20[0U] 
            = (__Vtemp_h858419c6__86[0U] << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24__DOT___io_p_T_20[1U] 
            = ((__Vtemp_h858419c6__86[0U] >> 0x1fU) 
               | (__Vtemp_h858419c6__86[1U] << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24__DOT___io_p_T_20[2U] 
            = ((__Vtemp_h858419c6__86[1U] >> 0x1fU) 
               | (__Vtemp_h858419c6__86[2U] << 1U));
    } else if ((4U == (7U & (__Vtemp_h3d097fd2__102[1U] 
                             >> 0xfU)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24__DOT___io_p_T_20[0U] 
            = ((~ __Vtemp_h858419c6__87[0U]) << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24__DOT___io_p_T_20[1U] 
            = (((~ __Vtemp_h858419c6__87[0U]) >> 0x1fU) 
               | ((~ __Vtemp_h858419c6__87[1U]) << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24__DOT___io_p_T_20[2U] 
            = (((~ __Vtemp_h858419c6__87[1U]) >> 0x1fU) 
               | (6U & ((~ __Vtemp_h858419c6__87[2U]) 
                        << 1U)));
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24__DOT___io_p_T_20[0U] 
            = __Vtemp_ha7b9d30d__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24__DOT___io_p_T_20[1U] 
            = __Vtemp_ha7b9d30d__0[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24__DOT___io_p_T_20[2U] 
            = __Vtemp_ha7b9d30d__0[2U];
    }
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__105, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__106, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__90, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__107, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__91, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__108, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__92, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__109, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__93, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__110, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__94, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__111, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__95, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    if ((5U == (7U & (__Vtemp_h3d097fd2__110[1U] >> 0x11U)))) {
        __Vtemp_h05e7506e__0[0U] = (~ __Vtemp_h858419c6__94[0U]);
        __Vtemp_h05e7506e__0[1U] = (~ __Vtemp_h858419c6__94[1U]);
        __Vtemp_h05e7506e__0[2U] = (3U & (~ __Vtemp_h858419c6__94[2U]));
    } else if ((6U == (7U & (__Vtemp_h3d097fd2__111[1U] 
                             >> 0x11U)))) {
        __Vtemp_h05e7506e__0[0U] = (~ __Vtemp_h858419c6__95[0U]);
        __Vtemp_h05e7506e__0[1U] = (~ __Vtemp_h858419c6__95[1U]);
        __Vtemp_h05e7506e__0[2U] = (3U & (~ __Vtemp_h858419c6__95[2U]));
    } else {
        __Vtemp_h05e7506e__0[0U] = 0U;
        __Vtemp_h05e7506e__0[1U] = 0U;
        __Vtemp_h05e7506e__0[2U] = (3U & 0U);
    }
    VL_EXTEND_WW(67,66, __Vtemp_h3389439a__0, __Vtemp_h05e7506e__0);
    if ((0U == (7U & (__Vtemp_h3d097fd2__105[1U] >> 0x11U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_25__DOT___io_p_T_20[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_25__DOT___io_p_T_20[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_25__DOT___io_p_T_20[2U] = 0U;
    } else if ((1U == (7U & (__Vtemp_h3d097fd2__106[1U] 
                             >> 0x11U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_25__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__90[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_25__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__90[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_25__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__90[2U];
    } else if ((2U == (7U & (__Vtemp_h3d097fd2__107[1U] 
                             >> 0x11U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_25__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__91[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_25__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__91[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_25__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__91[2U];
    } else if ((3U == (7U & (__Vtemp_h3d097fd2__108[1U] 
                             >> 0x11U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_25__DOT___io_p_T_20[0U] 
            = (__Vtemp_h858419c6__92[0U] << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_25__DOT___io_p_T_20[1U] 
            = ((__Vtemp_h858419c6__92[0U] >> 0x1fU) 
               | (__Vtemp_h858419c6__92[1U] << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_25__DOT___io_p_T_20[2U] 
            = ((__Vtemp_h858419c6__92[1U] >> 0x1fU) 
               | (__Vtemp_h858419c6__92[2U] << 1U));
    } else if ((4U == (7U & (__Vtemp_h3d097fd2__109[1U] 
                             >> 0x11U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_25__DOT___io_p_T_20[0U] 
            = ((~ __Vtemp_h858419c6__93[0U]) << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_25__DOT___io_p_T_20[1U] 
            = (((~ __Vtemp_h858419c6__93[0U]) >> 0x1fU) 
               | ((~ __Vtemp_h858419c6__93[1U]) << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_25__DOT___io_p_T_20[2U] 
            = (((~ __Vtemp_h858419c6__93[1U]) >> 0x1fU) 
               | (6U & ((~ __Vtemp_h858419c6__93[2U]) 
                        << 1U)));
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_25__DOT___io_p_T_20[0U] 
            = __Vtemp_h3389439a__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_25__DOT___io_p_T_20[1U] 
            = __Vtemp_h3389439a__0[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_25__DOT___io_p_T_20[2U] 
            = __Vtemp_h3389439a__0[2U];
    }
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__112, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__113, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__96, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__114, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__97, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__115, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__98, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__116, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__99, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__117, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__100, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__118, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__101, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    if ((5U == (7U & (__Vtemp_h3d097fd2__117[1U] >> 0x13U)))) {
        __Vtemp_h4760be10__0[0U] = (~ __Vtemp_h858419c6__100[0U]);
        __Vtemp_h4760be10__0[1U] = (~ __Vtemp_h858419c6__100[1U]);
        __Vtemp_h4760be10__0[2U] = (3U & (~ __Vtemp_h858419c6__100[2U]));
    } else if ((6U == (7U & (__Vtemp_h3d097fd2__118[1U] 
                             >> 0x13U)))) {
        __Vtemp_h4760be10__0[0U] = (~ __Vtemp_h858419c6__101[0U]);
        __Vtemp_h4760be10__0[1U] = (~ __Vtemp_h858419c6__101[1U]);
        __Vtemp_h4760be10__0[2U] = (3U & (~ __Vtemp_h858419c6__101[2U]));
    } else {
        __Vtemp_h4760be10__0[0U] = 0U;
        __Vtemp_h4760be10__0[1U] = 0U;
        __Vtemp_h4760be10__0[2U] = (3U & 0U);
    }
    VL_EXTEND_WW(67,66, __Vtemp_h96440e8b__0, __Vtemp_h4760be10__0);
    if ((0U == (7U & (__Vtemp_h3d097fd2__112[1U] >> 0x13U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_26__DOT___io_p_T_20[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_26__DOT___io_p_T_20[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_26__DOT___io_p_T_20[2U] = 0U;
    } else if ((1U == (7U & (__Vtemp_h3d097fd2__113[1U] 
                             >> 0x13U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_26__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__96[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_26__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__96[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_26__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__96[2U];
    } else if ((2U == (7U & (__Vtemp_h3d097fd2__114[1U] 
                             >> 0x13U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_26__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__97[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_26__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__97[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_26__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__97[2U];
    } else if ((3U == (7U & (__Vtemp_h3d097fd2__115[1U] 
                             >> 0x13U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_26__DOT___io_p_T_20[0U] 
            = (__Vtemp_h858419c6__98[0U] << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_26__DOT___io_p_T_20[1U] 
            = ((__Vtemp_h858419c6__98[0U] >> 0x1fU) 
               | (__Vtemp_h858419c6__98[1U] << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_26__DOT___io_p_T_20[2U] 
            = ((__Vtemp_h858419c6__98[1U] >> 0x1fU) 
               | (__Vtemp_h858419c6__98[2U] << 1U));
    } else if ((4U == (7U & (__Vtemp_h3d097fd2__116[1U] 
                             >> 0x13U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_26__DOT___io_p_T_20[0U] 
            = ((~ __Vtemp_h858419c6__99[0U]) << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_26__DOT___io_p_T_20[1U] 
            = (((~ __Vtemp_h858419c6__99[0U]) >> 0x1fU) 
               | ((~ __Vtemp_h858419c6__99[1U]) << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_26__DOT___io_p_T_20[2U] 
            = (((~ __Vtemp_h858419c6__99[1U]) >> 0x1fU) 
               | (6U & ((~ __Vtemp_h858419c6__99[2U]) 
                        << 1U)));
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_26__DOT___io_p_T_20[0U] 
            = __Vtemp_h96440e8b__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_26__DOT___io_p_T_20[1U] 
            = __Vtemp_h96440e8b__0[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_26__DOT___io_p_T_20[2U] 
            = __Vtemp_h96440e8b__0[2U];
    }
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__119, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__120, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__102, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__121, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__103, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__122, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__104, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__123, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__105, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__124, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__106, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__125, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__107, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    if ((5U == (7U & (__Vtemp_h3d097fd2__124[1U] >> 0x15U)))) {
        __Vtemp_ha5a04398__0[0U] = (~ __Vtemp_h858419c6__106[0U]);
        __Vtemp_ha5a04398__0[1U] = (~ __Vtemp_h858419c6__106[1U]);
        __Vtemp_ha5a04398__0[2U] = (3U & (~ __Vtemp_h858419c6__106[2U]));
    } else if ((6U == (7U & (__Vtemp_h3d097fd2__125[1U] 
                             >> 0x15U)))) {
        __Vtemp_ha5a04398__0[0U] = (~ __Vtemp_h858419c6__107[0U]);
        __Vtemp_ha5a04398__0[1U] = (~ __Vtemp_h858419c6__107[1U]);
        __Vtemp_ha5a04398__0[2U] = (3U & (~ __Vtemp_h858419c6__107[2U]));
    } else {
        __Vtemp_ha5a04398__0[0U] = 0U;
        __Vtemp_ha5a04398__0[1U] = 0U;
        __Vtemp_ha5a04398__0[2U] = (3U & 0U);
    }
    VL_EXTEND_WW(67,66, __Vtemp_hd65347c2__0, __Vtemp_ha5a04398__0);
    if ((0U == (7U & (__Vtemp_h3d097fd2__119[1U] >> 0x15U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_27__DOT___io_p_T_20[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_27__DOT___io_p_T_20[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_27__DOT___io_p_T_20[2U] = 0U;
    } else if ((1U == (7U & (__Vtemp_h3d097fd2__120[1U] 
                             >> 0x15U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_27__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__102[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_27__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__102[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_27__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__102[2U];
    } else if ((2U == (7U & (__Vtemp_h3d097fd2__121[1U] 
                             >> 0x15U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_27__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__103[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_27__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__103[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_27__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__103[2U];
    } else if ((3U == (7U & (__Vtemp_h3d097fd2__122[1U] 
                             >> 0x15U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_27__DOT___io_p_T_20[0U] 
            = (__Vtemp_h858419c6__104[0U] << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_27__DOT___io_p_T_20[1U] 
            = ((__Vtemp_h858419c6__104[0U] >> 0x1fU) 
               | (__Vtemp_h858419c6__104[1U] << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_27__DOT___io_p_T_20[2U] 
            = ((__Vtemp_h858419c6__104[1U] >> 0x1fU) 
               | (__Vtemp_h858419c6__104[2U] << 1U));
    } else if ((4U == (7U & (__Vtemp_h3d097fd2__123[1U] 
                             >> 0x15U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_27__DOT___io_p_T_20[0U] 
            = ((~ __Vtemp_h858419c6__105[0U]) << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_27__DOT___io_p_T_20[1U] 
            = (((~ __Vtemp_h858419c6__105[0U]) >> 0x1fU) 
               | ((~ __Vtemp_h858419c6__105[1U]) << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_27__DOT___io_p_T_20[2U] 
            = (((~ __Vtemp_h858419c6__105[1U]) >> 0x1fU) 
               | (6U & ((~ __Vtemp_h858419c6__105[2U]) 
                        << 1U)));
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_27__DOT___io_p_T_20[0U] 
            = __Vtemp_hd65347c2__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_27__DOT___io_p_T_20[1U] 
            = __Vtemp_hd65347c2__0[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_27__DOT___io_p_T_20[2U] 
            = __Vtemp_hd65347c2__0[2U];
    }
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__126, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__127, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__108, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__128, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__109, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__129, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__110, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__130, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__111, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__131, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__112, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__132, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__113, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    if ((5U == (7U & (__Vtemp_h3d097fd2__131[1U] >> 0x17U)))) {
        __Vtemp_hceb56c78__0[0U] = (~ __Vtemp_h858419c6__112[0U]);
        __Vtemp_hceb56c78__0[1U] = (~ __Vtemp_h858419c6__112[1U]);
        __Vtemp_hceb56c78__0[2U] = (3U & (~ __Vtemp_h858419c6__112[2U]));
    } else if ((6U == (7U & (__Vtemp_h3d097fd2__132[1U] 
                             >> 0x17U)))) {
        __Vtemp_hceb56c78__0[0U] = (~ __Vtemp_h858419c6__113[0U]);
        __Vtemp_hceb56c78__0[1U] = (~ __Vtemp_h858419c6__113[1U]);
        __Vtemp_hceb56c78__0[2U] = (3U & (~ __Vtemp_h858419c6__113[2U]));
    } else {
        __Vtemp_hceb56c78__0[0U] = 0U;
        __Vtemp_hceb56c78__0[1U] = 0U;
        __Vtemp_hceb56c78__0[2U] = (3U & 0U);
    }
    VL_EXTEND_WW(67,66, __Vtemp_h27340d70__0, __Vtemp_hceb56c78__0);
    if ((0U == (7U & (__Vtemp_h3d097fd2__126[1U] >> 0x17U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_28__DOT___io_p_T_20[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_28__DOT___io_p_T_20[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_28__DOT___io_p_T_20[2U] = 0U;
    } else if ((1U == (7U & (__Vtemp_h3d097fd2__127[1U] 
                             >> 0x17U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_28__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__108[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_28__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__108[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_28__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__108[2U];
    } else if ((2U == (7U & (__Vtemp_h3d097fd2__128[1U] 
                             >> 0x17U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_28__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__109[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_28__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__109[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_28__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__109[2U];
    } else if ((3U == (7U & (__Vtemp_h3d097fd2__129[1U] 
                             >> 0x17U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_28__DOT___io_p_T_20[0U] 
            = (__Vtemp_h858419c6__110[0U] << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_28__DOT___io_p_T_20[1U] 
            = ((__Vtemp_h858419c6__110[0U] >> 0x1fU) 
               | (__Vtemp_h858419c6__110[1U] << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_28__DOT___io_p_T_20[2U] 
            = ((__Vtemp_h858419c6__110[1U] >> 0x1fU) 
               | (__Vtemp_h858419c6__110[2U] << 1U));
    } else if ((4U == (7U & (__Vtemp_h3d097fd2__130[1U] 
                             >> 0x17U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_28__DOT___io_p_T_20[0U] 
            = ((~ __Vtemp_h858419c6__111[0U]) << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_28__DOT___io_p_T_20[1U] 
            = (((~ __Vtemp_h858419c6__111[0U]) >> 0x1fU) 
               | ((~ __Vtemp_h858419c6__111[1U]) << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_28__DOT___io_p_T_20[2U] 
            = (((~ __Vtemp_h858419c6__111[1U]) >> 0x1fU) 
               | (6U & ((~ __Vtemp_h858419c6__111[2U]) 
                        << 1U)));
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_28__DOT___io_p_T_20[0U] 
            = __Vtemp_h27340d70__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_28__DOT___io_p_T_20[1U] 
            = __Vtemp_h27340d70__0[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_28__DOT___io_p_T_20[2U] 
            = __Vtemp_h27340d70__0[2U];
    }
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__133, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__134, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__114, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__135, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__115, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__136, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__116, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__137, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__117, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__138, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__118, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__139, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__119, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    if ((5U == (7U & (__Vtemp_h3d097fd2__138[1U] >> 0x19U)))) {
        __Vtemp_h3cb9dba1__0[0U] = (~ __Vtemp_h858419c6__118[0U]);
        __Vtemp_h3cb9dba1__0[1U] = (~ __Vtemp_h858419c6__118[1U]);
        __Vtemp_h3cb9dba1__0[2U] = (3U & (~ __Vtemp_h858419c6__118[2U]));
    } else if ((6U == (7U & (__Vtemp_h3d097fd2__139[1U] 
                             >> 0x19U)))) {
        __Vtemp_h3cb9dba1__0[0U] = (~ __Vtemp_h858419c6__119[0U]);
        __Vtemp_h3cb9dba1__0[1U] = (~ __Vtemp_h858419c6__119[1U]);
        __Vtemp_h3cb9dba1__0[2U] = (3U & (~ __Vtemp_h858419c6__119[2U]));
    } else {
        __Vtemp_h3cb9dba1__0[0U] = 0U;
        __Vtemp_h3cb9dba1__0[1U] = 0U;
        __Vtemp_h3cb9dba1__0[2U] = (3U & 0U);
    }
    VL_EXTEND_WW(67,66, __Vtemp_hd97683d1__0, __Vtemp_h3cb9dba1__0);
    if ((0U == (7U & (__Vtemp_h3d097fd2__133[1U] >> 0x19U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_29__DOT___io_p_T_20[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_29__DOT___io_p_T_20[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_29__DOT___io_p_T_20[2U] = 0U;
    } else if ((1U == (7U & (__Vtemp_h3d097fd2__134[1U] 
                             >> 0x19U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_29__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__114[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_29__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__114[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_29__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__114[2U];
    } else if ((2U == (7U & (__Vtemp_h3d097fd2__135[1U] 
                             >> 0x19U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_29__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__115[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_29__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__115[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_29__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__115[2U];
    } else if ((3U == (7U & (__Vtemp_h3d097fd2__136[1U] 
                             >> 0x19U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_29__DOT___io_p_T_20[0U] 
            = (__Vtemp_h858419c6__116[0U] << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_29__DOT___io_p_T_20[1U] 
            = ((__Vtemp_h858419c6__116[0U] >> 0x1fU) 
               | (__Vtemp_h858419c6__116[1U] << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_29__DOT___io_p_T_20[2U] 
            = ((__Vtemp_h858419c6__116[1U] >> 0x1fU) 
               | (__Vtemp_h858419c6__116[2U] << 1U));
    } else if ((4U == (7U & (__Vtemp_h3d097fd2__137[1U] 
                             >> 0x19U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_29__DOT___io_p_T_20[0U] 
            = ((~ __Vtemp_h858419c6__117[0U]) << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_29__DOT___io_p_T_20[1U] 
            = (((~ __Vtemp_h858419c6__117[0U]) >> 0x1fU) 
               | ((~ __Vtemp_h858419c6__117[1U]) << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_29__DOT___io_p_T_20[2U] 
            = (((~ __Vtemp_h858419c6__117[1U]) >> 0x1fU) 
               | (6U & ((~ __Vtemp_h858419c6__117[2U]) 
                        << 1U)));
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_29__DOT___io_p_T_20[0U] 
            = __Vtemp_hd97683d1__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_29__DOT___io_p_T_20[1U] 
            = __Vtemp_hd97683d1__0[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_29__DOT___io_p_T_20[2U] 
            = __Vtemp_hd97683d1__0[2U];
    }
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__140, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__141, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__120, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__142, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__121, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__143, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__122, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__144, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__123, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__145, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__124, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__146, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__125, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    if ((5U == (__Vtemp_h3d097fd2__145[1U] >> 0x1dU))) {
        __Vtemp_hf34b4877__0[0U] = (~ __Vtemp_h858419c6__124[0U]);
        __Vtemp_hf34b4877__0[1U] = (~ __Vtemp_h858419c6__124[1U]);
        __Vtemp_hf34b4877__0[2U] = (3U & (~ __Vtemp_h858419c6__124[2U]));
    } else if ((6U == (__Vtemp_h3d097fd2__146[1U] >> 0x1dU))) {
        __Vtemp_hf34b4877__0[0U] = (~ __Vtemp_h858419c6__125[0U]);
        __Vtemp_hf34b4877__0[1U] = (~ __Vtemp_h858419c6__125[1U]);
        __Vtemp_hf34b4877__0[2U] = (3U & (~ __Vtemp_h858419c6__125[2U]));
    } else {
        __Vtemp_hf34b4877__0[0U] = 0U;
        __Vtemp_hf34b4877__0[1U] = 0U;
        __Vtemp_hf34b4877__0[2U] = (3U & 0U);
    }
    VL_EXTEND_WW(67,66, __Vtemp_h7abefef2__0, __Vtemp_hf34b4877__0);
    if ((0U == (__Vtemp_h3d097fd2__140[1U] >> 0x1dU))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_31__DOT___io_p_T_20[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_31__DOT___io_p_T_20[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_31__DOT___io_p_T_20[2U] = 0U;
    } else if ((1U == (__Vtemp_h3d097fd2__141[1U] >> 0x1dU))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_31__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__120[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_31__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__120[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_31__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__120[2U];
    } else if ((2U == (__Vtemp_h3d097fd2__142[1U] >> 0x1dU))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_31__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__121[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_31__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__121[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_31__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__121[2U];
    } else if ((3U == (__Vtemp_h3d097fd2__143[1U] >> 0x1dU))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_31__DOT___io_p_T_20[0U] 
            = (__Vtemp_h858419c6__122[0U] << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_31__DOT___io_p_T_20[1U] 
            = ((__Vtemp_h858419c6__122[0U] >> 0x1fU) 
               | (__Vtemp_h858419c6__122[1U] << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_31__DOT___io_p_T_20[2U] 
            = ((__Vtemp_h858419c6__122[1U] >> 0x1fU) 
               | (__Vtemp_h858419c6__122[2U] << 1U));
    } else if ((4U == (__Vtemp_h3d097fd2__144[1U] >> 0x1dU))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_31__DOT___io_p_T_20[0U] 
            = ((~ __Vtemp_h858419c6__123[0U]) << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_31__DOT___io_p_T_20[1U] 
            = (((~ __Vtemp_h858419c6__123[0U]) >> 0x1fU) 
               | ((~ __Vtemp_h858419c6__123[1U]) << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_31__DOT___io_p_T_20[2U] 
            = (((~ __Vtemp_h858419c6__123[1U]) >> 0x1fU) 
               | (6U & ((~ __Vtemp_h858419c6__123[2U]) 
                        << 1U)));
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_31__DOT___io_p_T_20[0U] 
            = __Vtemp_h7abefef2__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_31__DOT___io_p_T_20[1U] 
            = __Vtemp_h7abefef2__0[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_31__DOT___io_p_T_20[2U] 
            = __Vtemp_h7abefef2__0[2U];
    }
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__147, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__148, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__126, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__149, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__127, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__150, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__128, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__151, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__129, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__152, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__130, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__153, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__131, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    if ((5U == (7U & ((__Vtemp_h3d097fd2__152[2U] << 1U) 
                      | (__Vtemp_h3d097fd2__152[1U] 
                         >> 0x1fU))))) {
        __Vtemp_hc58d3b51__0[0U] = (~ __Vtemp_h858419c6__130[0U]);
        __Vtemp_hc58d3b51__0[1U] = (~ __Vtemp_h858419c6__130[1U]);
        __Vtemp_hc58d3b51__0[2U] = (3U & (~ __Vtemp_h858419c6__130[2U]));
    } else if ((6U == (7U & ((__Vtemp_h3d097fd2__153[2U] 
                              << 1U) | (__Vtemp_h3d097fd2__153[1U] 
                                        >> 0x1fU))))) {
        __Vtemp_hc58d3b51__0[0U] = (~ __Vtemp_h858419c6__131[0U]);
        __Vtemp_hc58d3b51__0[1U] = (~ __Vtemp_h858419c6__131[1U]);
        __Vtemp_hc58d3b51__0[2U] = (3U & (~ __Vtemp_h858419c6__131[2U]));
    } else {
        __Vtemp_hc58d3b51__0[0U] = 0U;
        __Vtemp_hc58d3b51__0[1U] = 0U;
        __Vtemp_hc58d3b51__0[2U] = (3U & 0U);
    }
    VL_EXTEND_WW(67,66, __Vtemp_h22431de6__0, __Vtemp_hc58d3b51__0);
    if ((1U == (7U & ((__Vtemp_h3d097fd2__148[2U] << 1U) 
                      | (__Vtemp_h3d097fd2__148[1U] 
                         >> 0x1fU))))) {
        __Vtemp_h976962e2__0[1U] = __Vtemp_h858419c6__126[1U];
        __Vtemp_h976962e2__0[2U] = __Vtemp_h858419c6__126[2U];
    } else if ((2U == (7U & ((__Vtemp_h3d097fd2__149[2U] 
                              << 1U) | (__Vtemp_h3d097fd2__149[1U] 
                                        >> 0x1fU))))) {
        __Vtemp_h976962e2__0[1U] = __Vtemp_h858419c6__127[1U];
        __Vtemp_h976962e2__0[2U] = __Vtemp_h858419c6__127[2U];
    } else if ((3U == (7U & ((__Vtemp_h3d097fd2__150[2U] 
                              << 1U) | (__Vtemp_h3d097fd2__150[1U] 
                                        >> 0x1fU))))) {
        __Vtemp_h976962e2__0[1U] = ((__Vtemp_h858419c6__128[0U] 
                                     >> 0x1fU) | (__Vtemp_h858419c6__128[1U] 
                                                  << 1U));
        __Vtemp_h976962e2__0[2U] = ((__Vtemp_h858419c6__128[1U] 
                                     >> 0x1fU) | (__Vtemp_h858419c6__128[2U] 
                                                  << 1U));
    } else if ((4U == (7U & ((__Vtemp_h3d097fd2__151[2U] 
                              << 1U) | (__Vtemp_h3d097fd2__151[1U] 
                                        >> 0x1fU))))) {
        __Vtemp_h976962e2__0[1U] = (((~ __Vtemp_h858419c6__129[0U]) 
                                     >> 0x1fU) | ((~ 
                                                   __Vtemp_h858419c6__129[1U]) 
                                                  << 1U));
        __Vtemp_h976962e2__0[2U] = (((~ __Vtemp_h858419c6__129[1U]) 
                                     >> 0x1fU) | (6U 
                                                  & ((~ 
                                                      __Vtemp_h858419c6__129[2U]) 
                                                     << 1U)));
    } else {
        __Vtemp_h976962e2__0[1U] = __Vtemp_h22431de6__0[1U];
        __Vtemp_h976962e2__0[2U] = __Vtemp_h22431de6__0[2U];
    }
    if ((0U == (7U & ((__Vtemp_h3d097fd2__147[2U] << 1U) 
                      | (__Vtemp_h3d097fd2__147[1U] 
                         >> 0x1fU))))) {
        __Vtemp_hddcf52fb__0[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_32__DOT___io_p_T_20[0U] 
            = __Vtemp_hddcf52fb__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_32__DOT___io_p_T_20[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_32__DOT___io_p_T_20[2U] = 0U;
    } else {
        __Vtemp_hddcf52fb__0[0U] = ((1U == (7U & ((
                                                   __Vtemp_h3d097fd2__148[2U] 
                                                   << 1U) 
                                                  | (__Vtemp_h3d097fd2__148[1U] 
                                                     >> 0x1fU))))
                                     ? __Vtemp_h858419c6__126[0U]
                                     : ((2U == (7U 
                                                & ((__Vtemp_h3d097fd2__149[2U] 
                                                    << 1U) 
                                                   | (__Vtemp_h3d097fd2__149[1U] 
                                                      >> 0x1fU))))
                                         ? __Vtemp_h858419c6__127[0U]
                                         : ((3U == 
                                             (7U & 
                                              ((__Vtemp_h3d097fd2__150[2U] 
                                                << 1U) 
                                               | (__Vtemp_h3d097fd2__150[1U] 
                                                  >> 0x1fU))))
                                             ? (__Vtemp_h858419c6__128[0U] 
                                                << 1U)
                                             : ((4U 
                                                 == 
                                                 (7U 
                                                  & ((__Vtemp_h3d097fd2__151[2U] 
                                                      << 1U) 
                                                     | (__Vtemp_h3d097fd2__151[1U] 
                                                        >> 0x1fU))))
                                                 ? 
                                                ((~ 
                                                  __Vtemp_h858419c6__129[0U]) 
                                                 << 1U)
                                                 : 
                                                __Vtemp_h22431de6__0[0U]))));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_32__DOT___io_p_T_20[0U] 
            = __Vtemp_hddcf52fb__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_32__DOT___io_p_T_20[1U] 
            = __Vtemp_h976962e2__0[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_32__DOT___io_p_T_20[2U] 
            = __Vtemp_h976962e2__0[2U];
    }
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
                                                             : CoreTop__DOT__EX__DOT___GEN_100)))))))))));
    vlSelf->CoreTop__DOT__EX__DOT___GEN_181 = ((0x1aU 
                                                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                ? vlSelf->CoreTop__DOT__EX__DOT__mstatus
                                                : (
                                                   (0x68U 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? vlSelf->CoreTop__DOT__EX__DOT__mstatus
                                                    : CoreTop__DOT__EX__DOT___GEN_167));
}

VL_INLINE_OPT void VCoreTop___024root___sequent__TOP__65(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___sequent__TOP__65\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_h9adabb3e__0;
    VlWide<4>/*127:0*/ __Vtemp_hcd274e34__0;
    VlWide<5>/*159:0*/ __Vtemp_h191a1987__0;
    VlWide<5>/*159:0*/ __Vtemp_h0851328a__0;
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_81_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_142) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_143) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_144))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_143) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_144)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_85_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_154) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_155)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_156));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_86_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_157) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_158)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_159));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_86_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_157) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_158) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_159))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_158) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_159)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_194_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_482) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_483) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_484))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_483) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_484)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_195_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_485) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_486) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_487))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_486) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_487)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_201_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_504) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_505)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_506));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_201_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_504) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_505) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_506))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_505) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_506)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_202_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_507) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_508)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_509));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_202_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_507) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_508) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_509))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_508) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_509)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_203_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_510) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_511)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_512));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_209_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_527) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_528)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_529));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_209_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_527) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_528) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_529))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_528) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_529)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_210_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_530) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_531)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_532));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_210_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_530) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_531) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_532))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_531) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_532)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_211_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_533) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_534)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_535));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_211_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_533) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_534) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_535))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_534) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_535)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_217_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_550) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_551)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_552));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_218_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_553) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_554)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_555));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_218_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_553) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_554) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_555))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_554) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_555)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_219_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_556) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_557)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_558));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_227_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_580) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_581)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_582));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_249_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_648) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_649) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_650))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_649) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_650)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_258_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_674) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_675)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_676));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_258_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_674) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_675) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_676))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_675) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_676)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_259_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_677) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_678)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_679));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_259_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_677) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_678) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_679))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_678) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_679)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_267_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_700) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_701)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_702));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_267_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_700) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_701) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_702))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_701) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_702)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_268_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_703) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_704)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_705));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_269_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_706) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_707)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_708));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_276_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_727) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_728)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_729));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_276_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_727) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_728) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_729))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_728) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_729)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_277_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_730) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_731)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_732));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_285_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_754) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_755)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_756));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_285_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_754) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_755) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_756))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_755) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_756)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_286_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_757) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_758)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_759));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_286_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_757) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_758) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_759))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_758) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_759)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_294_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_782) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_783)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_784));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_294_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_782) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_783) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_784))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_783) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_784)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_295_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_785) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_786)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_787));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_295_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_785) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_786) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_787))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_786) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_787)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_296_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_788) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_789)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_790));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_303_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_810) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_811)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_812));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_303_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_810) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_811) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_812))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_811) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_812)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_304_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_813) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_814)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_815));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_304_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_813) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_814) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_815))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_814) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_815)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_305_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_816) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_817)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_818));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_313_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_839) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_840)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_841));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_314_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_842) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_843)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_844));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_314_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_842) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_843) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_844))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_843) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_844)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_315_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_845) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_846)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_847));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_325_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_874) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_875)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_876));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_839_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_85_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_81_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_86_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_81_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_86_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_843_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_86_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_91_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_87_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_91_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_87_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_844_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_92_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_88_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_179))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_88_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_179)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_846_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_90_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_95_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_91_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_95_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_91_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_918_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_201_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_194_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_202_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_918_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_201_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_194_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_202_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_194_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_202_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_919_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_195_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_203_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_196_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_919_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_195_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_203_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_196_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_203_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_196_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_923_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_209_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_201_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_210_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_923_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_209_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_201_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_210_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_201_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_210_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_924_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_202_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_211_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_203_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_924_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_202_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_211_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_203_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_211_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_203_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_928_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_217_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_209_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_218_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_928_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_217_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_209_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_218_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_209_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_218_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_929_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_210_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_219_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_211_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_929_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_210_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_219_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_211_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_219_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_211_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_933_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_225_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_217_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_226_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_933_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_225_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_217_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_226_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_217_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_226_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_934_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_218_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_227_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_219_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_934_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_218_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_227_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_219_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_227_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_219_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_938_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_233_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_225_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_234_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_938_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_233_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_225_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_234_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_225_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_234_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_939_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_226_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_235_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_227_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_944_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_241_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_233_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_242_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_945_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_234_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_243_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_235_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_950_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_249_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_241_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_250_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_951_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_242_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_251_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_243_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_956_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_258_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_249_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_259_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_956_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_258_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_249_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_259_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_249_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_259_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_957_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_250_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_260_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_251_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_962_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_267_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_258_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_268_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_962_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_267_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_258_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_268_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_258_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_268_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_963_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_259_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_269_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_260_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_963_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_259_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_269_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_260_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_269_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_260_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_968_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_276_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_267_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_277_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_968_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_276_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_267_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_277_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_267_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_277_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_969_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_268_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_278_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_269_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_974_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_285_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_276_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_286_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_974_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_285_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_276_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_286_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_276_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_286_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_975_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_277_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_287_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_278_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_980_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_294_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_285_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_295_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_980_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_294_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_285_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_295_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_285_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_295_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_981_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_286_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_296_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_287_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_981_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_286_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_296_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_287_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_296_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_287_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_986_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_303_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_294_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_304_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_986_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_303_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_294_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_304_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_294_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_304_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_987_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_295_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_305_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_296_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_987_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_295_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_305_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_296_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_305_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_296_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_992_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_313_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_303_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_314_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_992_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_313_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_303_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_314_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_303_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_314_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_993_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_304_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_315_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_305_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_993_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_304_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_315_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_305_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_315_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_305_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_999_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_323_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_313_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_324_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1000_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_314_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_325_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_315_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1000_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_314_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_325_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_315_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_325_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_315_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__carry_hi_lo_lo 
        = ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2362_io_s) 
             & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2361_io_cout)) 
            << 0xeU) | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2361_io_s) 
                          & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2360_io_cout)) 
                         << 0xdU) | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2360_io_s) 
                                       & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2359_io_cout)) 
                                      << 0xcU) | ((
                                                   ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2359_io_s) 
                                                    & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2358_io_cout)) 
                                                   << 0xbU) 
                                                  | (((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2358_io_s) 
                                                        & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2357_io_cout) 
                                                           | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2232_io_out_1))) 
                                                       | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2357_io_cout) 
                                                          & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2232_io_out_1))) 
                                                      << 0xaU) 
                                                     | (((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2357_io_s) 
                                                           & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2356_io_cout) 
                                                              | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2230_io_out_1))) 
                                                          | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2356_io_cout) 
                                                             & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2230_io_out_1))) 
                                                         << 9U) 
                                                        | (((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2356_io_s) 
                                                              & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2355_io_cout) 
                                                                 | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2228_io_out_1))) 
                                                             | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2355_io_cout) 
                                                                & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2228_io_out_1))) 
                                                            << 8U) 
                                                           | (((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2355_io_s) 
                                                                 & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2354_io_cout) 
                                                                    | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2226_io_out_1))) 
                                                                | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2354_io_cout) 
                                                                   & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2226_io_out_1))) 
                                                               << 7U) 
                                                              | (((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2354_io_s) 
                                                                    & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2353_io_cout) 
                                                                       | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2224_io_out_1))) 
                                                                   | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2353_io_cout) 
                                                                      & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2224_io_out_1))) 
                                                                  << 6U) 
                                                                 | (((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2353_io_s) 
                                                                       & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2352_io_cout) 
                                                                          | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2222_io_out_1))) 
                                                                      | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2352_io_cout) 
                                                                         & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2222_io_out_1))) 
                                                                     << 5U) 
                                                                    | (((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2352_io_s) 
                                                                          & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2351_io_cout) 
                                                                             | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2220_io_out_1))) 
                                                                         | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2351_io_cout) 
                                                                            & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2220_io_out_1))) 
                                                                        << 4U) 
                                                                       | (((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2351_io_s) 
                                                                             & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2350_io_cout) 
                                                                                | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2218_io_out_1))) 
                                                                            | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2350_io_cout) 
                                                                               & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2218_io_out_1))) 
                                                                           << 3U) 
                                                                          | (((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2350_io_s) 
                                                                                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2349_io_cout) 
                                                                                | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2216_io_out_1))) 
                                                                               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2349_io_cout) 
                                                                                & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2216_io_out_1))) 
                                                                              << 2U) 
                                                                             | (((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2349_io_s) 
                                                                                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2348_io_cout) 
                                                                                | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2214_io_out_1))) 
                                                                                | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2348_io_cout) 
                                                                                & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2214_io_out_1))) 
                                                                                << 1U) 
                                                                                | (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2348_io_s) 
                                                                                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2347_io_cout) 
                                                                                | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2212_io_out_1))) 
                                                                                | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2347_io_cout) 
                                                                                & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2212_io_out_1)))))))))))))))));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__sum_lo_lo 
        = ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2311_io_out_0) 
             ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2310_io_out_1)) 
            << 0x1fU) | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2310_io_out_0) 
                           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2309_io_out_1)) 
                          << 0x1eU) | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2309_io_out_0) 
                                         ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2308_io_out_1)) 
                                        << 0x1dU) | 
                                       ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2308_io_out_0) 
                                          ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2307_io_out_1)) 
                                         << 0x1cU) 
                                        | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2307_io_out_0) 
                                             ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2306_io_out_1)) 
                                            << 0x1bU) 
                                           | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2306_io_out_0) 
                                                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2305_io_out_1)) 
                                               << 0x1aU) 
                                              | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2305_io_out_0) 
                                                   ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2304_io_out_1)) 
                                                  << 0x19U) 
                                                 | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2304_io_out_0) 
                                                      ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2303_io_out_1)) 
                                                     << 0x18U) 
                                                    | (((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2303_io_out_0) 
                                                          ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2302_io_out_1)) 
                                                         << 0x17U) 
                                                        | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2302_io_out_0) 
                                                             ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2301_io_out_1)) 
                                                            << 0x16U) 
                                                           | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2301_io_out_0) 
                                                                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2300_io_out_1)) 
                                                               << 0x15U) 
                                                              | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2300_io_out_0) 
                                                                   ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2299_io_out_1)) 
                                                                  << 0x14U) 
                                                                 | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2299_io_out_0) 
                                                                      ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2298_io_out_1)) 
                                                                     << 0x13U) 
                                                                    | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2298_io_out_0) 
                                                                         ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2297_io_out_1)) 
                                                                        << 0x12U) 
                                                                       | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2297_io_out_0) 
                                                                            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2296_io_out_1)) 
                                                                           << 0x11U) 
                                                                          | (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2296_io_out_0) 
                                                                              ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2295_io_out_1)) 
                                                                             << 0x10U)))))))) 
                                                       | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2295_io_out_0) 
                                                            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2294_io_out_1)) 
                                                           << 0xfU) 
                                                          | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2294_io_out_0) 
                                                               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2293_io_out_1)) 
                                                              << 0xeU) 
                                                             | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2293_io_out_0) 
                                                                  ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2292_io_out_1)) 
                                                                 << 0xdU) 
                                                                | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2292_io_out_0) 
                                                                     ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2291_io_out_1)) 
                                                                    << 0xcU) 
                                                                   | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2291_io_out_0) 
                                                                        ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2290_io_out_1)) 
                                                                       << 0xbU) 
                                                                      | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2290_io_out_0) 
                                                                           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2289_io_out_1)) 
                                                                          << 0xaU) 
                                                                         | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2289_io_out_0) 
                                                                              ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2288_io_out_1)) 
                                                                             << 9U) 
                                                                            | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2288_io_out_0) 
                                                                                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2287_io_out_1)) 
                                                                                << 8U) 
                                                                               | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2287_io_out_0) 
                                                                                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2286_io_out_1)) 
                                                                                << 7U) 
                                                                                | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2140_io_out_0) 
                                                                                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2139_io_out_1)) 
                                                                                << 6U) 
                                                                                | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1955_io_out_0) 
                                                                                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1954_io_out_1)) 
                                                                                << 5U) 
                                                                                | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2312) 
                                                                                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2313)) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2311) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2310) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2309) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2308)))))))))))))))))))))))));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__carry_lo_lo 
        = ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2316_io_out_0) 
             & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2315_io_out_1)) 
            << 0x1dU) | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2315_io_out_0) 
                           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2314_io_out_1)) 
                          << 0x1cU) | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2314_io_out_0) 
                                         & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2313_io_out_1)) 
                                        << 0x1bU) | 
                                       ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2313_io_out_0) 
                                          & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2312_io_out_1)) 
                                         << 0x1aU) 
                                        | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2312_io_out_0) 
                                             & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2311_io_out_1)) 
                                            << 0x19U) 
                                           | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2311_io_out_0) 
                                                & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2310_io_out_1)) 
                                               << 0x18U) 
                                              | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2310_io_out_0) 
                                                   & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2309_io_out_1)) 
                                                  << 0x17U) 
                                                 | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2309_io_out_0) 
                                                      & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2308_io_out_1)) 
                                                     << 0x16U) 
                                                    | (((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2308_io_out_0) 
                                                          & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2307_io_out_1)) 
                                                         << 0x15U) 
                                                        | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2307_io_out_0) 
                                                             & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2306_io_out_1)) 
                                                            << 0x14U) 
                                                           | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2306_io_out_0) 
                                                                & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2305_io_out_1)) 
                                                               << 0x13U) 
                                                              | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2305_io_out_0) 
                                                                   & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2304_io_out_1)) 
                                                                  << 0x12U) 
                                                                 | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2304_io_out_0) 
                                                                      & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2303_io_out_1)) 
                                                                     << 0x11U) 
                                                                    | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2303_io_out_0) 
                                                                         & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2302_io_out_1)) 
                                                                        << 0x10U) 
                                                                       | (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2302_io_out_0) 
                                                                           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2301_io_out_1)) 
                                                                          << 0xfU))))))) 
                                                       | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2301_io_out_0) 
                                                            & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2300_io_out_1)) 
                                                           << 0xeU) 
                                                          | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2300_io_out_0) 
                                                               & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2299_io_out_1)) 
                                                              << 0xdU) 
                                                             | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2299_io_out_0) 
                                                                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2298_io_out_1)) 
                                                                 << 0xcU) 
                                                                | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2298_io_out_0) 
                                                                     & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2297_io_out_1)) 
                                                                    << 0xbU) 
                                                                   | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2297_io_out_0) 
                                                                        & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2296_io_out_1)) 
                                                                       << 0xaU) 
                                                                      | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2296_io_out_0) 
                                                                           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2295_io_out_1)) 
                                                                          << 9U) 
                                                                         | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2295_io_out_0) 
                                                                              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2294_io_out_1)) 
                                                                             << 8U) 
                                                                            | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2294_io_out_0) 
                                                                                & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2293_io_out_1)) 
                                                                                << 7U) 
                                                                               | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2293_io_out_0) 
                                                                                & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2292_io_out_1)) 
                                                                                << 6U) 
                                                                                | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2292_io_out_0) 
                                                                                & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2291_io_out_1)) 
                                                                                << 5U) 
                                                                                | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2291_io_out_0) 
                                                                                & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2290_io_out_1)) 
                                                                                << 4U) 
                                                                                | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2290_io_out_0) 
                                                                                & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2289_io_out_1)) 
                                                                                << 3U) 
                                                                                | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2289_io_out_0) 
                                                                                & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2288_io_out_1)) 
                                                                                << 2U) 
                                                                                | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2288_io_out_0) 
                                                                                & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2287_io_out_1)) 
                                                                                << 1U) 
                                                                                | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2287_io_out_0) 
                                                                                & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2286_io_out_1)))))))))))))))))))))))));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__carry_hi_hi 
        = ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2409_io_out_0) 
             & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2408_io_out_1)) 
            << 0x1eU) | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2408_io_out_0) 
                           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2407_io_out_1)) 
                          << 0x1dU) | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2407_io_out_0) 
                                         & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2406_io_out_1)) 
                                        << 0x1cU) | 
                                       ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2406_io_out_0) 
                                          & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2405_io_out_1)) 
                                         << 0x1bU) 
                                        | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2405_io_out_0) 
                                             & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2404_io_out_1)) 
                                            << 0x1aU) 
                                           | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2404_io_out_0) 
                                                & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2403_io_out_1)) 
                                               << 0x19U) 
                                              | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2403_io_out_0) 
                                                   & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2402_io_out_1)) 
                                                  << 0x18U) 
                                                 | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2402_io_out_0) 
                                                      & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2401_io_out_1)) 
                                                     << 0x17U) 
                                                    | (((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2401_io_out_0) 
                                                          & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2400_io_out_1)) 
                                                         << 0x16U) 
                                                        | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2400_io_out_0) 
                                                             & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2399_io_out_1)) 
                                                            << 0x15U) 
                                                           | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2399_io_out_0) 
                                                                & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2398_io_out_1)) 
                                                               << 0x14U) 
                                                              | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2398_io_out_0) 
                                                                   & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2397_io_out_1)) 
                                                                  << 0x13U) 
                                                                 | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2397_io_out_0) 
                                                                      & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2396_io_out_1)) 
                                                                     << 0x12U) 
                                                                    | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2396_io_out_0) 
                                                                         & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2395_io_out_1)) 
                                                                        << 0x11U) 
                                                                       | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2395_io_out_0) 
                                                                            & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2394_io_out_1)) 
                                                                           << 0x10U) 
                                                                          | (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2394_io_out_0) 
                                                                              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2393_io_out_1)) 
                                                                             << 0xfU)))))))) 
                                                       | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2393_io_out_0) 
                                                            & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2392_io_out_1)) 
                                                           << 0xeU) 
                                                          | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2392_io_out_0) 
                                                               & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2391_io_out_1)) 
                                                              << 0xdU) 
                                                             | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2391_io_out_0) 
                                                                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2390_io_out_1)) 
                                                                 << 0xcU) 
                                                                | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2390_io_out_0) 
                                                                     & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2389_io_out_1)) 
                                                                    << 0xbU) 
                                                                   | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2389_io_out_0) 
                                                                        & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2388_io_out_1)) 
                                                                       << 0xaU) 
                                                                      | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2388_io_out_0) 
                                                                           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2387_io_out_1)) 
                                                                          << 9U) 
                                                                         | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2387_io_out_0) 
                                                                              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2386_io_out_1)) 
                                                                             << 8U) 
                                                                            | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2386_io_out_0) 
                                                                                & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2385_io_out_1)) 
                                                                                << 7U) 
                                                                               | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2385_io_out_0) 
                                                                                & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2384_io_out_1)) 
                                                                                << 6U) 
                                                                                | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2384_io_out_0) 
                                                                                & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2383_io_out_1)) 
                                                                                << 5U) 
                                                                                | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2383_io_out_0) 
                                                                                & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2382_io_out_1)) 
                                                                                << 4U) 
                                                                                | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2382_io_out_0) 
                                                                                & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2381_io_out_1)) 
                                                                                << 3U) 
                                                                                | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2381_io_out_0) 
                                                                                & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2380_io_out_1)) 
                                                                                << 2U) 
                                                                                | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2380_io_out_0) 
                                                                                & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2379_io_out_1)) 
                                                                                << 1U) 
                                                                                | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2379_io_out_0) 
                                                                                & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2378_io_out_1)))))))))))))))))))))))));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__sum_hi_hi 
        = (((QData)((IData)(((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2410_io_out_0) 
                               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2409_io_out_1)) 
                              << 0x10U) | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2409_io_out_0) 
                                             ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2408_io_out_1)) 
                                            << 0xfU) 
                                           | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2408_io_out_0) 
                                                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2407_io_out_1)) 
                                               << 0xeU) 
                                              | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2407_io_out_0) 
                                                   ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2406_io_out_1)) 
                                                  << 0xdU) 
                                                 | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2406_io_out_0) 
                                                      ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2405_io_out_1)) 
                                                     << 0xcU) 
                                                    | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2405_io_out_0) 
                                                         ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2404_io_out_1)) 
                                                        << 0xbU) 
                                                       | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2404_io_out_0) 
                                                            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2403_io_out_1)) 
                                                           << 0xaU) 
                                                          | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2403_io_out_0) 
                                                               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2402_io_out_1)) 
                                                              << 9U) 
                                                             | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2402_io_out_0) 
                                                                  ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2401_io_out_1)) 
                                                                 << 8U) 
                                                                | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2401_io_out_0) 
                                                                     ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2400_io_out_1)) 
                                                                    << 7U) 
                                                                   | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2400_io_out_0) 
                                                                        ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2399_io_out_1)) 
                                                                       << 6U) 
                                                                      | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2399_io_out_0) 
                                                                           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2398_io_out_1)) 
                                                                          << 5U) 
                                                                         | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2398_io_out_0) 
                                                                              ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2397_io_out_1)) 
                                                                             << 4U) 
                                                                            | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2397_io_out_0) 
                                                                                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2396_io_out_1)) 
                                                                                << 3U) 
                                                                               | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2396_io_out_0) 
                                                                                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2395_io_out_1)) 
                                                                                << 2U) 
                                                                                | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2395_io_out_0) 
                                                                                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2394_io_out_1)) 
                                                                                << 1U) 
                                                                                | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2394_io_out_0) 
                                                                                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2393_io_out_1)))))))))))))))))))) 
            << 0x10U) | (QData)((IData)(((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2393_io_out_0) 
                                           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2392_io_out_1)) 
                                          << 0xfU) 
                                         | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2392_io_out_0) 
                                              ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2391_io_out_1)) 
                                             << 0xeU) 
                                            | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2391_io_out_0) 
                                                 ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2390_io_out_1)) 
                                                << 0xdU) 
                                               | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2390_io_out_0) 
                                                    ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2389_io_out_1)) 
                                                   << 0xcU) 
                                                  | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2389_io_out_0) 
                                                       ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2388_io_out_1)) 
                                                      << 0xbU) 
                                                     | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2388_io_out_0) 
                                                          ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2387_io_out_1)) 
                                                         << 0xaU) 
                                                        | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2387_io_out_0) 
                                                             ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2386_io_out_1)) 
                                                            << 9U) 
                                                           | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2386_io_out_0) 
                                                                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2385_io_out_1)) 
                                                               << 8U) 
                                                              | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2385_io_out_0) 
                                                                   ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2384_io_out_1)) 
                                                                  << 7U) 
                                                                 | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2384_io_out_0) 
                                                                      ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2383_io_out_1)) 
                                                                     << 6U) 
                                                                    | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2383_io_out_0) 
                                                                         ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2382_io_out_1)) 
                                                                        << 5U) 
                                                                       | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2382_io_out_0) 
                                                                            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2381_io_out_1)) 
                                                                           << 4U) 
                                                                          | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2381_io_out_0) 
                                                                               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2380_io_out_1)) 
                                                                              << 3U) 
                                                                             | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2380_io_out_0) 
                                                                                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2379_io_out_1)) 
                                                                                << 2U) 
                                                                                | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2379_io_out_0) 
                                                                                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2378_io_out_1)) 
                                                                                << 1U) 
                                                                                | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2378_io_out_0) 
                                                                                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2377_io_out_1))))))))))))))))))));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__carry_lo_hi 
        = (((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2347_io_s) 
              & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2346_io_cout) 
                 | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2210_io_out_1))) 
             | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2346_io_cout) 
                & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2210_io_out_1))) 
            << 0x1eU) | (((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2346_io_s) 
                            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2345_io_cout) 
                               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2208_io_out_1))) 
                           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2345_io_cout) 
                              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2208_io_out_1))) 
                          << 0x1dU) | (((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2345_io_s) 
                                          & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2344_io_cout) 
                                             | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2206_io_out_1))) 
                                         | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2344_io_cout) 
                                            & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2206_io_out_1))) 
                                        << 0x1cU) | 
                                       (((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2344_io_s) 
                                           & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2343_io_cout) 
                                              | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2204_io_out_1))) 
                                          | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2343_io_cout) 
                                             & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2204_io_out_1))) 
                                         << 0x1bU) 
                                        | (((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2343_io_s) 
                                              & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2342_io_cout) 
                                                 | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2202_io_out_1))) 
                                             | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2342_io_cout) 
                                                & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2202_io_out_1))) 
                                            << 0x1aU) 
                                           | (((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2342_io_s) 
                                                 & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2341_io_cout) 
                                                    | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2200_io_out_1))) 
                                                | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2341_io_cout) 
                                                   & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2200_io_out_1))) 
                                               << 0x19U) 
                                              | (((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2341_io_s) 
                                                    & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2340_io_cout) 
                                                       | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2198_io_out_1))) 
                                                   | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2340_io_cout) 
                                                      & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2198_io_out_1))) 
                                                  << 0x18U) 
                                                 | (((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2340_io_s) 
                                                       & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2339_io_cout) 
                                                          | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2196_io_out_1))) 
                                                      | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2339_io_cout) 
                                                         & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2196_io_out_1))) 
                                                     << 0x17U) 
                                                    | ((((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2339_io_s) 
                                                           & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2338_io_cout) 
                                                              | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2194_io_out_1))) 
                                                          | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2338_io_cout) 
                                                             & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2194_io_out_1))) 
                                                         << 0x16U) 
                                                        | (((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2338_io_s) 
                                                              & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2337_io_cout) 
                                                                 | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2192_io_out_1))) 
                                                             | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2337_io_cout) 
                                                                & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2192_io_out_1))) 
                                                            << 0x15U) 
                                                           | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2337_io_s) 
                                                                & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2336_io_cout)) 
                                                               << 0x14U) 
                                                              | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2336_io_s) 
                                                                   & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2335_io_cout)) 
                                                                  << 0x13U) 
                                                                 | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2335_io_s) 
                                                                      & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2334_io_cout)) 
                                                                     << 0x12U) 
                                                                    | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2334_io_s) 
                                                                         & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2333_io_cout)) 
                                                                        << 0x11U) 
                                                                       | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2333_io_s) 
                                                                            & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2332_io_cout)) 
                                                                           << 0x10U) 
                                                                          | (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2332_io_s) 
                                                                              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2331_io_cout)) 
                                                                             << 0xfU)))))))) 
                                                       | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2331_io_s) 
                                                            & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2330_io_cout)) 
                                                           << 0xeU) 
                                                          | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2330_io_s) 
                                                               & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2329_io_cout)) 
                                                              << 0xdU) 
                                                             | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2329_io_s) 
                                                                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2328_io_cout)) 
                                                                 << 0xcU) 
                                                                | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2328_io_s) 
                                                                     & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2327_io_cout)) 
                                                                    << 0xbU) 
                                                                   | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2327_io_s) 
                                                                        & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2326_io_cout)) 
                                                                       << 0xaU) 
                                                                      | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2326_io_s) 
                                                                           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2325_io_cout)) 
                                                                          << 9U) 
                                                                         | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2325_io_s) 
                                                                              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2324_io_cout)) 
                                                                             << 8U) 
                                                                            | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2324_io_s) 
                                                                                & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2323_io_cout)) 
                                                                                << 7U) 
                                                                               | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2323_io_s) 
                                                                                & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2322_io_cout)) 
                                                                                << 6U) 
                                                                                | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2322_io_s) 
                                                                                & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2321_io_cout)) 
                                                                                << 5U) 
                                                                                | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2321_io_s) 
                                                                                & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2320_io_cout)) 
                                                                                << 4U) 
                                                                                | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2320_io_s) 
                                                                                & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2319_io_cout)) 
                                                                                << 3U) 
                                                                                | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2319_io_s) 
                                                                                & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2318_io_out_1)) 
                                                                                << 2U) 
                                                                                | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2318_io_out_0) 
                                                                                & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2317_io_out_1)) 
                                                                                << 1U) 
                                                                                | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2317_io_out_0) 
                                                                                & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2316_io_out_1)))))))))))))))))))))))));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__sum_lo_hi 
        = (((QData)((IData)((((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2344_io_s) 
                                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2343_io_cout)) 
                               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2204_io_out_1)) 
                              << 0x10U) | (((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2343_io_s) 
                                              ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2342_io_cout)) 
                                             ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2202_io_out_1)) 
                                            << 0xfU) 
                                           | (((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2342_io_s) 
                                                 ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2341_io_cout)) 
                                                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2200_io_out_1)) 
                                               << 0xeU) 
                                              | (((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2341_io_s) 
                                                    ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2340_io_cout)) 
                                                   ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2198_io_out_1)) 
                                                  << 0xdU) 
                                                 | (((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2340_io_s) 
                                                       ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2339_io_cout)) 
                                                      ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2196_io_out_1)) 
                                                     << 0xcU) 
                                                    | (((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2339_io_s) 
                                                          ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2338_io_cout)) 
                                                         ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2194_io_out_1)) 
                                                        << 0xbU) 
                                                       | (((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2338_io_s) 
                                                             ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2337_io_cout)) 
                                                            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2192_io_out_1)) 
                                                           << 0xaU) 
                                                          | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2337_io_s) 
                                                               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2336_io_cout)) 
                                                              << 9U) 
                                                             | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2336_io_s) 
                                                                  ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2335_io_cout)) 
                                                                 << 8U) 
                                                                | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2335_io_s) 
                                                                     ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2334_io_cout)) 
                                                                    << 7U) 
                                                                   | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2334_io_s) 
                                                                        ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2333_io_cout)) 
                                                                       << 6U) 
                                                                      | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2333_io_s) 
                                                                           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2332_io_cout)) 
                                                                          << 5U) 
                                                                         | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2332_io_s) 
                                                                              ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2331_io_cout)) 
                                                                             << 4U) 
                                                                            | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2331_io_s) 
                                                                                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2330_io_cout)) 
                                                                                << 3U) 
                                                                               | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2330_io_s) 
                                                                                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2329_io_cout)) 
                                                                                << 2U) 
                                                                                | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2329_io_s) 
                                                                                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2328_io_cout)) 
                                                                                << 1U) 
                                                                                | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2328_io_s) 
                                                                                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2327_io_cout)))))))))))))))))))) 
            << 0x10U) | (QData)((IData)(((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2327_io_s) 
                                           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2326_io_cout)) 
                                          << 0xfU) 
                                         | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2326_io_s) 
                                              ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2325_io_cout)) 
                                             << 0xeU) 
                                            | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2325_io_s) 
                                                 ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2324_io_cout)) 
                                                << 0xdU) 
                                               | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2324_io_s) 
                                                    ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2323_io_cout)) 
                                                   << 0xcU) 
                                                  | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2323_io_s) 
                                                       ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2322_io_cout)) 
                                                      << 0xbU) 
                                                     | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2322_io_s) 
                                                          ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2321_io_cout)) 
                                                         << 0xaU) 
                                                        | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2321_io_s) 
                                                             ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2320_io_cout)) 
                                                            << 9U) 
                                                           | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2320_io_s) 
                                                                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2319_io_cout)) 
                                                               << 8U) 
                                                              | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2319_io_s) 
                                                                   ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2318_io_out_1)) 
                                                                  << 7U) 
                                                                 | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2318_io_out_0) 
                                                                      ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2317_io_out_1)) 
                                                                     << 6U) 
                                                                    | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2317_io_out_0) 
                                                                         ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2316_io_out_1)) 
                                                                        << 5U) 
                                                                       | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2316_io_out_0) 
                                                                            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2315_io_out_1)) 
                                                                           << 4U) 
                                                                          | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2315_io_out_0) 
                                                                               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2314_io_out_1)) 
                                                                              << 3U) 
                                                                             | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2314_io_out_0) 
                                                                                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2313_io_out_1)) 
                                                                                << 2U) 
                                                                                | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2313_io_out_0) 
                                                                                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2312_io_out_1)) 
                                                                                << 1U) 
                                                                                | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2312_io_out_0) 
                                                                                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2311_io_out_1))))))))))))))))))));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__sum_hi_lo 
        = (((QData)((IData)(((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2377_io_out_0) 
                               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2376_io_cout)) 
                              << 0x10U) | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2376_io_s) 
                                             ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2375_io_cout)) 
                                            << 0xfU) 
                                           | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2375_io_s) 
                                                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2374_io_cout)) 
                                               << 0xeU) 
                                              | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2374_io_s) 
                                                   ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2373_io_cout)) 
                                                  << 0xdU) 
                                                 | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2373_io_s) 
                                                      ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2372_io_cout)) 
                                                     << 0xcU) 
                                                    | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2372_io_s) 
                                                         ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2371_io_cout)) 
                                                        << 0xbU) 
                                                       | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2371_io_s) 
                                                            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2370_io_cout)) 
                                                           << 0xaU) 
                                                          | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2370_io_s) 
                                                               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2369_io_cout)) 
                                                              << 9U) 
                                                             | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2369_io_s) 
                                                                  ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2368_io_cout)) 
                                                                 << 8U) 
                                                                | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2368_io_s) 
                                                                     ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2367_io_cout)) 
                                                                    << 7U) 
                                                                   | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2367_io_s) 
                                                                        ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2366_io_cout)) 
                                                                       << 6U) 
                                                                      | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2366_io_s) 
                                                                           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2365_io_cout)) 
                                                                          << 5U) 
                                                                         | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2365_io_s) 
                                                                              ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2364_io_cout)) 
                                                                             << 4U) 
                                                                            | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2364_io_s) 
                                                                                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2363_io_cout)) 
                                                                                << 3U) 
                                                                               | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2363_io_s) 
                                                                                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2362_io_cout)) 
                                                                                << 2U) 
                                                                                | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2362_io_s) 
                                                                                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2361_io_cout)) 
                                                                                << 1U) 
                                                                                | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2361_io_s) 
                                                                                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2360_io_cout)))))))))))))))))))) 
            << 0x10U) | (QData)((IData)(((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2360_io_s) 
                                           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2359_io_cout)) 
                                          << 0xfU) 
                                         | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2359_io_s) 
                                              ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2358_io_cout)) 
                                             << 0xeU) 
                                            | (((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2358_io_s) 
                                                  ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2357_io_cout)) 
                                                 ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2232_io_out_1)) 
                                                << 0xdU) 
                                               | (((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2357_io_s) 
                                                     ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2356_io_cout)) 
                                                    ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2230_io_out_1)) 
                                                   << 0xcU) 
                                                  | (((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2356_io_s) 
                                                        ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2355_io_cout)) 
                                                       ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2228_io_out_1)) 
                                                      << 0xbU) 
                                                     | (((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2355_io_s) 
                                                           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2354_io_cout)) 
                                                          ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2226_io_out_1)) 
                                                         << 0xaU) 
                                                        | (((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2354_io_s) 
                                                              ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2353_io_cout)) 
                                                             ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2224_io_out_1)) 
                                                            << 9U) 
                                                           | (((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2353_io_s) 
                                                                 ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2352_io_cout)) 
                                                                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2222_io_out_1)) 
                                                               << 8U) 
                                                              | (((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2352_io_s) 
                                                                    ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2351_io_cout)) 
                                                                   ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2220_io_out_1)) 
                                                                  << 7U) 
                                                                 | (((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2351_io_s) 
                                                                       ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2350_io_cout)) 
                                                                      ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2218_io_out_1)) 
                                                                     << 6U) 
                                                                    | (((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2350_io_s) 
                                                                          ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2349_io_cout)) 
                                                                         ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2216_io_out_1)) 
                                                                        << 5U) 
                                                                       | (((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2349_io_s) 
                                                                             ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2348_io_cout)) 
                                                                            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2214_io_out_1)) 
                                                                           << 4U) 
                                                                          | (((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2348_io_s) 
                                                                                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2347_io_cout)) 
                                                                               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2212_io_out_1)) 
                                                                              << 3U) 
                                                                             | (((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2347_io_s) 
                                                                                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2346_io_cout)) 
                                                                                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2210_io_out_1)) 
                                                                                << 2U) 
                                                                                | (((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2346_io_s) 
                                                                                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2345_io_cout)) 
                                                                                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2208_io_out_1)) 
                                                                                << 1U) 
                                                                                | (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2345_io_s) 
                                                                                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2344_io_cout)) 
                                                                                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2206_io_out_1))))))))))))))))))));
    __Vtemp_h9adabb3e__0[0U] = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__sum_lo_lo;
    __Vtemp_h9adabb3e__0[1U] = (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__sum_lo_hi);
    __Vtemp_h9adabb3e__0[2U] = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__sum_hi_lo) 
                                 << 1U) | (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__sum_lo_hi 
                                                   >> 0x20U)));
    __Vtemp_h9adabb3e__0[3U] = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__sum_hi_hi) 
                                 << 2U) | (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__sum_hi_lo) 
                                            >> 0x1fU) 
                                           | ((IData)(
                                                      (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__sum_hi_lo 
                                                       >> 0x20U)) 
                                              << 1U)));
    __Vtemp_h9adabb3e__0[4U] = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__sum_hi_hi) 
                                 >> 0x1eU) | ((IData)(
                                                      (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__sum_hi_hi 
                                                       >> 0x20U)) 
                                              << 2U));
    __Vtemp_hcd274e34__0[2U] = ((0xffffffe0U & ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2374_io_s) 
                                                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2373_io_cout)) 
                                                 << 0x1fU) 
                                                | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2373_io_s) 
                                                     & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2372_io_cout)) 
                                                    << 0x1eU) 
                                                   | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2372_io_s) 
                                                        & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2371_io_cout)) 
                                                       << 0x1dU) 
                                                      | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2371_io_s) 
                                                           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2370_io_cout)) 
                                                          << 0x1cU) 
                                                         | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2370_io_s) 
                                                              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2369_io_cout)) 
                                                             << 0x1bU) 
                                                            | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2369_io_s) 
                                                                 & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2368_io_cout)) 
                                                                << 0x1aU) 
                                                               | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2368_io_s) 
                                                                    & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2367_io_cout)) 
                                                                   << 0x19U) 
                                                                  | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2367_io_s) 
                                                                       & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2366_io_cout)) 
                                                                      << 0x18U) 
                                                                     | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2366_io_s) 
                                                                          & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2365_io_cout)) 
                                                                         << 0x17U) 
                                                                        | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2365_io_s) 
                                                                             & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2364_io_cout)) 
                                                                            << 0x16U) 
                                                                           | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2364_io_s) 
                                                                                & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2363_io_cout)) 
                                                                               << 0x15U) 
                                                                              | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2363_io_s) 
                                                                                & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2362_io_cout)) 
                                                                                << 0x14U) 
                                                                                | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__carry_hi_lo_lo) 
                                                                                << 5U)))))))))))))) 
                                | (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__carry_lo_hi 
                                   >> 0x1aU));
    __Vtemp_hcd274e34__0[3U] = (0x1fU & ((0x18U & (
                                                   ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2378_io_out_0) 
                                                    & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2377_io_out_1)) 
                                                   << 3U)) 
                                         | ((0x1cU 
                                             & (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2377_io_out_0) 
                                                 & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2376_io_cout)) 
                                                << 2U)) 
                                            | ((0x1eU 
                                                & (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2376_io_s) 
                                                    & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2375_io_cout)) 
                                                   << 1U)) 
                                               | ((0x1fU 
                                                   & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2375_io_s) 
                                                      & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2374_io_cout))) 
                                                  | ((0x1fU 
                                                      & (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2374_io_s) 
                                                          & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2373_io_cout)) 
                                                         >> 1U)) 
                                                     | ((0x1fU 
                                                         & (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2373_io_s) 
                                                             & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2372_io_cout)) 
                                                            >> 2U)) 
                                                        | ((0x1fU 
                                                            & (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2372_io_s) 
                                                                & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2371_io_cout)) 
                                                               >> 3U)) 
                                                           | ((0x1fU 
                                                               & (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2371_io_s) 
                                                                   & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2370_io_cout)) 
                                                                  >> 4U)) 
                                                              | ((0x1fU 
                                                                  & (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2370_io_s) 
                                                                      & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2369_io_cout)) 
                                                                     >> 5U)) 
                                                                 | ((0x1fU 
                                                                     & (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2369_io_s) 
                                                                         & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2368_io_cout)) 
                                                                        >> 6U)) 
                                                                    | ((0x1fU 
                                                                        & (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2368_io_s) 
                                                                            & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2367_io_cout)) 
                                                                           >> 7U)) 
                                                                       | ((0x1fU 
                                                                           & (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2367_io_s) 
                                                                               & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2366_io_cout)) 
                                                                              >> 8U)) 
                                                                          | ((0x1fU 
                                                                              & (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2366_io_s) 
                                                                                & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2365_io_cout)) 
                                                                                >> 9U)) 
                                                                             | ((0x1fU 
                                                                                & (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2365_io_s) 
                                                                                & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2364_io_cout)) 
                                                                                >> 0xaU)) 
                                                                                | ((0x1fU 
                                                                                & (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2364_io_s) 
                                                                                & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2363_io_cout)) 
                                                                                >> 0xbU)) 
                                                                                | ((0x1fU 
                                                                                & (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2363_io_s) 
                                                                                & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2362_io_cout)) 
                                                                                >> 0xcU)) 
                                                                                | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__carry_hi_lo_lo) 
                                                                                >> 0x1bU))))))))))))))))));
    __Vtemp_h191a1987__0[0U] = (IData)(((QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__carry_lo_lo)) 
                                        << 8U));
    __Vtemp_h191a1987__0[1U] = ((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__carry_lo_hi 
                                 << 6U) | (IData)((
                                                   ((QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__carry_lo_lo)) 
                                                    << 8U) 
                                                   >> 0x20U)));
    __Vtemp_h191a1987__0[2U] = __Vtemp_hcd274e34__0[2U];
    __Vtemp_h191a1987__0[3U] = ((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__carry_hi_hi 
                                 << 4U) | __Vtemp_hcd274e34__0[3U]);
    __Vtemp_h191a1987__0[4U] = (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__carry_hi_hi 
                                >> 0x1cU);
    VL_ADD_W(5, __Vtemp_h0851328a__0, __Vtemp_h9adabb3e__0, __Vtemp_h191a1987__0);
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__result[0U] 
        = __Vtemp_h0851328a__0[0U];
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__result[1U] 
        = __Vtemp_h0851328a__0[1U];
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__result[2U] 
        = __Vtemp_h0851328a__0[2U];
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__result[3U] 
        = __Vtemp_h0851328a__0[3U];
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__result[4U] 
        = (7U & __Vtemp_h0851328a__0[4U]);
}

VL_INLINE_OPT void VCoreTop___024root___sequent__TOP__66(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___sequent__TOP__66\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_737_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2111) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2112));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_732_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2096) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2097) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2098))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2097) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2098)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_441_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1222) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1223) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1224))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1223) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1224)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_442_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1225) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1226)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1227));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_444_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1231) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1232) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1233))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1232) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1233)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_446_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1237) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1238) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1239))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1238) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1239)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_454_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1261) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1262) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1263))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1262) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1263)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_455_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1264) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1265) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1266))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1265) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1266)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_457_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1270) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1271)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1272));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_457_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1270) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1271) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1272))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1271) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1272)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_458_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1273) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1274)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1275));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_465_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1294) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1295)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1296));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_466_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1297) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1298)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1299));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_467_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1300) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1301)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1302));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_468_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1303) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1304)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1305));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_469_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1306) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1307)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1308));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_564_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1592) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1593) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1594))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1593) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1594)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_732_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2096) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2097)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2098));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1033_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_372_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_362_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_373_io_out_0));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1033_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_372_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_362_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_373_io_out_0))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_362_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_373_io_out_0)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1040_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_383_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_372_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_384_io_out_0));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1040_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_383_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_372_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_384_io_out_0))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_372_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_384_io_out_0)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1047_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_394_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_383_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_395_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1054_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_405_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_394_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_406_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1054_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_405_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_394_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_406_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_394_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_406_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1061_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_416_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_405_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_417_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1061_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_416_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_405_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_417_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_405_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_417_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1068_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_427_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_416_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_428_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1068_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_427_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_416_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_428_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_416_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_428_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1075_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_438_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_427_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_439_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1075_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_438_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_427_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_439_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_427_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_439_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1082_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_449_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_438_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_450_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1089_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_460_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_449_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_461_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1089_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_460_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_449_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_461_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_449_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_461_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1282_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_741_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_736_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_742_io_out_0))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_736_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_742_io_out_0)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1285_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_746_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_741_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2139))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_741_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2139)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_892_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_157_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_164_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_158_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_892_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_157_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_164_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_158_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_164_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_158_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_896_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_163_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_171_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_164_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_896_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_163_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_171_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_164_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_171_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_164_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_901_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_170_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_178_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_171_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_906_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_177_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_185_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_178_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1006_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_333_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_323_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_334_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1007_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_324_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_335_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_325_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1013_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_343_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_333_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_344_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1014_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_334_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_345_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_335_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1020_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_353_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_343_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_354_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1021_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_344_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_355_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_345_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1027_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_363_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_353_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_364_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1028_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_354_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_365_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_355_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1034_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_374_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_363_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_375_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1035_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_364_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_376_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_365_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1041_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_385_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_374_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_386_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1042_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_375_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_387_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_376_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1048_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_396_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_385_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_397_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1049_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_386_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_398_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_387_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1055_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_407_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_396_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_408_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1055_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_407_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_396_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_408_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_396_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_408_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1056_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_397_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_409_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_398_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1062_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_418_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_407_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_419_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1062_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_418_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_407_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_419_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_407_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_419_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1063_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_408_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_420_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_409_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1069_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_429_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_418_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_430_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1069_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_429_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_418_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_430_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_418_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_430_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1070_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_419_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_431_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_420_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1076_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_440_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_429_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_441_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1076_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_440_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_429_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_441_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_429_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_441_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1077_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_430_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_442_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_431_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1077_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_430_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_442_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_431_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_442_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_431_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1083_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_451_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_440_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_452_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1084_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_441_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_453_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_442_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1084_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_441_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_453_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_442_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_453_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_442_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1086_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_444_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_456_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_445_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1086_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_444_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_456_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_445_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_456_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_445_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1087_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_457_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_446_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_458_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1092_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_465_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_454_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_466_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1092_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_465_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_454_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_466_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_454_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_466_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1093_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_455_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_467_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_456_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1093_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_455_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_467_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_456_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_467_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_456_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1094_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_468_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_457_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_469_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1094_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_468_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_457_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_469_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_457_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_469_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1100_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_466_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_478_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_467_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1100_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_466_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_478_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_467_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_478_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_467_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1101_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_479_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_468_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_480_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1101_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_479_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_468_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_480_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_468_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_480_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1107_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_477_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_488_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_478_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1107_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_477_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_488_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_478_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_488_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_478_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1108_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_489_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_479_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_490_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1108_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_489_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_479_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_490_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_479_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_490_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1114_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_487_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_498_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_488_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_498_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_488_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1167_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_564_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_574_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_565_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1167_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_564_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_574_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_565_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_574_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_565_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1168_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_575_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_566_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_576_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1169_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_567_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_577_io_out_0) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_568_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_577_io_out_0) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_568_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1173_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_573_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_583_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_574_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1173_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_573_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_583_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_574_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_583_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_574_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1174_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_584_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_575_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_585_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1175_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_576_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_586_io_out_0) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_577_io_out_1))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_586_io_out_0) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_577_io_out_1)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1274_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_728_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_723_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_729_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1275_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_724_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_730_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_725_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1275_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_724_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_730_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_725_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_730_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_725_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1276_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_731_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_726_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_732_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1276_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_731_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_726_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_732_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_726_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_732_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1277_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_733_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_728_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_734_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1277_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_733_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_728_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_734_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_728_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_734_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1278_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_729_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_735_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_730_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1278_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_729_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_735_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_730_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_735_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_730_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1279_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_736_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_731_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_737_io_out_0));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1279_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_736_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_731_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_737_io_out_0))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_731_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_737_io_out_0)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1280_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_738_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_733_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_739_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_733_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_739_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1282_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_741_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_736_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_742_io_out_0));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1588_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1168_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1175_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1169_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1588_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1168_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1175_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1169_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1175_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1169_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1592_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1174_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1181_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1175_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1592_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1174_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1181_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1175_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1181_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1175_io_cout)));
}

VL_INLINE_OPT void VCoreTop___024root___sequent__TOP__67(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___sequent__TOP__67\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1413_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_926_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_921_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_927_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_921_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_927_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1421_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_936_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_931_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_937_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_931_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_937_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1445_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_971_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_965_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_972_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_965_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_972_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1449_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_977_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_971_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_978_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_971_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_978_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1453_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_983_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_977_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_984_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_977_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_984_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1457_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_989_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_983_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_990_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_983_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_990_io_s)));
}

VL_INLINE_OPT void VCoreTop___024root___sequent__TOP__68(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___sequent__TOP__68\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_492_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1375) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1376) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1377))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1376) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1377)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_502_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1406) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1407)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1408));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_502_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1406) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1407) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1408))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1407) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1408)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_512_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1436) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1437)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1438));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_512_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1436) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1437) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1438))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1437) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1438)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_482_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1344) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1345) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1346))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1345) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1346)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_492_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1375) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1376)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1377));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_482_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1344) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1345)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1346));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_240_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_619) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_620) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_621))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_620) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_621)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1117_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_502_io_s) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_492_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1117_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_502_io_s) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_492_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1124_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_512_io_s) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_502_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1124_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_512_io_s) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_502_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1131_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_522_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_512_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1131_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_522_io_out_0) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_512_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1138_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_532_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_522_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1138_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_532_io_out_0) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_522_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1145_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1524) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_532_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_922_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_207_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_200_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_208_io_out_0))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_200_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_208_io_out_0)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1103_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_482_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_471_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1347))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_471_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1347)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1110_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_492_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_482_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1378));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1110_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_492_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_482_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1378))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_482_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1378)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1096_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_471_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_460_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_472_io_out_0))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_460_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_472_io_out_0)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1103_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_482_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_471_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1347));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_927_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_215_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_207_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_216_io_out_0))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_207_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_216_io_out_0)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_932_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_223_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_215_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_224_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_215_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_224_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_937_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_231_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_223_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_232_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_223_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_232_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_949_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_240_io_cout) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_647));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_949_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_240_io_cout) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_647));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_948_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_247_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_239_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_248_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_239_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_248_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1152_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_551_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_542_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_552_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1153_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_543_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_553_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_544_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1153_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_543_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_553_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_544_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_553_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_544_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1158_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_560_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_551_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_561_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1159_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_552_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_562_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_553_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1163_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_558_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_568_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_559_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_568_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_559_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1169_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_567_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_577_io_out_0)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_568_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1177_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_579_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_589_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_580_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_589_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_580_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1178_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_590_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_581_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_591_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_581_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_591_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1414_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_922_io_cout) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_208_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1418_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_927_io_cout) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_216_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1418_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_927_io_cout) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_216_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1422_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_932_io_cout) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_224_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1422_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_932_io_cout) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_224_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1426_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_937_io_cout) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_943_io_out_0));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1426_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_937_io_cout) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_943_io_out_0));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1542_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1110_io_s) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1103_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1547_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1117_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1110_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1552_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1124_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1117_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1557_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1131_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1124_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1562_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1138_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1131_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1567_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1145_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1138_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1399_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_903_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_898_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_904_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1399_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_903_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_898_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_904_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_898_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_904_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1402_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_908_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_903_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_909_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1402_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_908_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_903_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_909_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_903_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_909_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1403_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_904_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_910_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_905_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1403_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_904_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_910_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_905_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_910_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_905_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1405_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_913_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_908_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_914_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1406_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_909_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_915_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_910_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1406_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_909_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_915_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_910_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_915_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_910_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1408_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_918_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_913_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_919_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1408_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_918_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_913_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_919_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_913_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_919_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1409_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_914_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_920_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_915_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1410_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_921_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_916_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_922_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1410_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_921_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_916_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_922_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_916_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_922_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1411_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_923_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_918_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_924_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1412_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_919_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_925_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_920_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1412_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_919_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_925_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_920_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_925_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_920_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1413_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_926_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_921_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_927_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1416_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_924_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_930_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_925_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1427_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_944_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_938_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_945_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_938_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_945_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1430_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_942_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_949_io_out_0)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_943_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1430_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_942_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_949_io_out_0) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_943_io_out_1))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_949_io_out_0) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_943_io_out_1)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1431_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_950_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_944_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_951_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_944_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_951_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1432_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_945_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_952_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_946_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_952_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_946_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1434_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_948_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_955_io_out_0)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_949_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1434_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_948_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_955_io_out_0) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_949_io_out_1))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_955_io_out_0) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_949_io_out_1)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1436_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_951_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_958_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_952_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_958_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_952_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1439_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_962_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_956_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_963_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1439_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_962_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_956_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_963_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_956_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_963_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1443_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_968_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_962_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_969_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1443_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_968_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_962_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_969_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_962_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_969_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1444_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_963_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_970_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_964_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1444_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_963_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_970_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_964_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_970_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_964_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1445_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_971_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_965_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_972_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1447_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_974_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_968_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_975_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_968_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_975_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1448_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_969_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_976_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_970_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1448_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_969_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_976_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_970_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_976_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_970_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1449_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_977_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_971_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_978_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1452_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_975_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_982_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_976_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_982_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_976_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1453_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_983_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_977_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_984_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1457_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_989_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_983_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_990_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1459_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_992_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_986_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_993_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_986_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_993_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1464_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_993_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1001_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_994_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1001_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_994_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1498_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1048_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1041_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1049_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1503_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1055_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1048_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1056_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1504_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1049_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1057_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1050_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1508_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1062_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1055_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1063_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1509_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1056_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1064_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1057_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1513_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1069_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1062_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1070_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1514_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1063_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1071_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1064_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1515_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1072_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1065_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1073_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1518_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1076_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1069_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1077_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1519_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1070_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1078_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1071_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1520_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1079_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1072_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1080_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1523_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1083_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1076_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1084_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1524_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1077_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1085_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1078_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1525_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1086_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1079_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1087_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1529_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1084_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1092_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1085_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1530_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1093_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1086_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1094_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1537_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1103_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1096_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_472_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1545_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1114_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1107_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1115_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1107_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1115_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1573_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1152_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1146_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1153_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1573_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1152_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1146_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1153_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1146_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1153_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1575_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1155_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1149_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1156_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1149_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1156_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1577_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1158_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1152_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1159_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1577_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1158_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1152_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1159_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1152_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1159_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1578_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1153_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1160_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1154_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1578_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1153_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1160_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1154_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1160_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1154_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1579_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1161_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1155_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1162_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1155_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1162_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1581_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1164_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1158_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1165_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1581_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1164_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1158_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1165_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1158_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1165_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1582_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1159_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1166_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1160_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1166_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1160_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1583_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1167_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1161_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1168_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1161_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1168_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1584_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1162_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1169_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1163_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1584_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1162_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1169_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1163_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1169_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1163_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1585_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1170_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1164_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1171_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1585_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1170_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1164_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1171_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1164_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1171_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1586_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1165_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1172_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1166_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1586_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1165_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1172_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1166_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1172_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1166_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1587_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1173_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1167_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1174_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1587_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1173_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1167_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1174_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1167_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1174_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1589_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1176_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1170_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1177_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1589_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1176_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1170_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1177_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1170_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1177_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1590_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1171_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1178_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1172_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1590_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1171_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1178_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1172_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1178_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1172_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1591_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1179_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1173_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1180_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1591_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1179_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1173_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1180_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1173_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1180_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1594_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1177_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1184_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1178_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1594_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1177_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1184_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1178_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1184_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1178_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1595_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1185_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1179_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1186_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1595_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1185_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1179_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1186_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1179_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1186_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1597_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1188_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1182_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1189_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1182_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1189_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1598_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1183_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1190_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1184_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1598_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1183_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1190_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1184_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1190_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1184_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1599_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1191_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1185_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1192_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1599_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1191_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1185_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1192_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1185_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1192_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1602_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1189_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1195_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1190_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1195_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1190_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1603_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1196_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1191_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1197_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1603_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1196_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1191_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1197_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1191_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1197_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1607_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1201_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1196_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1202_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1196_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1202_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1609_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1203_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1198_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1204_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1198_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1204_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1611_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1206_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1201_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1207_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1611_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1206_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1201_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1207_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1201_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1207_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1613_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1208_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1203_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1209_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1203_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1209_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1614_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1204_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1210_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1205_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1210_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1205_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1615_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1211_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1206_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1212_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1615_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1211_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1206_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1212_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1206_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1212_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1617_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1213_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1208_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1214_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1618_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1209_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1215_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1210_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1215_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1210_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1620_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1218_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1213_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1219_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1620_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1218_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1213_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1219_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1213_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1219_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1621_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1214_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1220_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1215_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1624_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1219_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1225_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1220_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1624_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1219_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1225_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1220_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1225_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1220_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1404_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_911_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_906_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_912_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1404_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_911_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_906_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_912_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_906_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_912_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1407_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_916_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_911_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_917_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1407_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_916_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_911_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_917_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_911_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_917_io_s)));
}

VL_INLINE_OPT void VCoreTop___024root___combo__TOP__17(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___combo__TOP__17\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__0;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__1;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__2;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__3;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__4;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__5;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__6;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__7;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__8;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__9;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__10;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__11;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__12;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__13;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__14;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__15;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__0;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__16;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__1;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__17;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__2;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__18;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__3;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__19;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__4;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__20;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__5;
    VlWide<3>/*95:0*/ __Vtemp_h72395646__0;
    VlWide<3>/*95:0*/ __Vtemp_h336a3074__0;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__21;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__22;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__6;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__23;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__7;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__24;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__8;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__25;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__9;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__26;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__10;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__27;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__11;
    VlWide<3>/*95:0*/ __Vtemp_ha63326bd__0;
    VlWide<3>/*95:0*/ __Vtemp_h4b64983f__0;
    // Body
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__0, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__1, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__2, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__3, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__4, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__5, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__6, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_io_carry 
        = ((0U == (6U & (__Vtemp_h3d097fd2__0[0U] << 1U)))
            ? 0U : ((1U == (6U & (__Vtemp_h3d097fd2__1[0U] 
                                  << 1U))) ? 0U : (
                                                   (2U 
                                                    == 
                                                    (6U 
                                                     & (__Vtemp_h3d097fd2__2[0U] 
                                                        << 1U)))
                                                    ? 0U
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (6U 
                                                      & (__Vtemp_h3d097fd2__3[0U] 
                                                         << 1U)))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      == 
                                                      (6U 
                                                       & (__Vtemp_h3d097fd2__4[0U] 
                                                          << 1U)))
                                                      ? 2U
                                                      : 
                                                     ((5U 
                                                       == 
                                                       (6U 
                                                        & (__Vtemp_h3d097fd2__5[0U] 
                                                           << 1U)))
                                                       ? 1U
                                                       : 
                                                      ((6U 
                                                        == 
                                                        (6U 
                                                         & (__Vtemp_h3d097fd2__6[0U] 
                                                            << 1U)))
                                                        ? 1U
                                                        : 0U)))))));
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__7, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__8, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__9, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__10, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__11, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__12, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__13, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1_io_carry 
        = ((0U == (7U & (__Vtemp_h3d097fd2__7[0U] >> 1U)))
            ? 0U : ((1U == (7U & (__Vtemp_h3d097fd2__8[0U] 
                                  >> 1U))) ? 0U : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (__Vtemp_h3d097fd2__9[0U] 
                                                        >> 1U)))
                                                    ? 0U
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (7U 
                                                      & (__Vtemp_h3d097fd2__10[0U] 
                                                         >> 1U)))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      == 
                                                      (7U 
                                                       & (__Vtemp_h3d097fd2__11[0U] 
                                                          >> 1U)))
                                                      ? 2U
                                                      : 
                                                     ((5U 
                                                       == 
                                                       (7U 
                                                        & (__Vtemp_h3d097fd2__12[0U] 
                                                           >> 1U)))
                                                       ? 1U
                                                       : 
                                                      ((6U 
                                                        == 
                                                        (7U 
                                                         & (__Vtemp_h3d097fd2__13[0U] 
                                                            >> 1U)))
                                                        ? 1U
                                                        : 0U)))))));
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__14, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__15, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__0, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__16, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__1, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__17, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__2, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__18, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__3, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__19, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__4, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__20, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__5, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    if ((5U == (6U & (__Vtemp_h3d097fd2__19[0U] << 1U)))) {
        __Vtemp_h72395646__0[0U] = (~ __Vtemp_h858419c6__4[0U]);
        __Vtemp_h72395646__0[1U] = (~ __Vtemp_h858419c6__4[1U]);
        __Vtemp_h72395646__0[2U] = (3U & (~ __Vtemp_h858419c6__4[2U]));
    } else if ((6U == (6U & (__Vtemp_h3d097fd2__20[0U] 
                             << 1U)))) {
        __Vtemp_h72395646__0[0U] = (~ __Vtemp_h858419c6__5[0U]);
        __Vtemp_h72395646__0[1U] = (~ __Vtemp_h858419c6__5[1U]);
        __Vtemp_h72395646__0[2U] = (3U & (~ __Vtemp_h858419c6__5[2U]));
    } else {
        __Vtemp_h72395646__0[0U] = 0U;
        __Vtemp_h72395646__0[1U] = 0U;
        __Vtemp_h72395646__0[2U] = (3U & 0U);
    }
    VL_EXTEND_WW(67,66, __Vtemp_h336a3074__0, __Vtemp_h72395646__0);
    if ((0U == (6U & (__Vtemp_h3d097fd2__14[0U] << 1U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[2U] = 0U;
    } else if ((1U == (6U & (__Vtemp_h3d097fd2__15[0U] 
                             << 1U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__0[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__0[2U];
    } else if ((2U == (6U & (__Vtemp_h3d097fd2__16[0U] 
                             << 1U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__1[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__1[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__1[2U];
    } else if ((3U == (6U & (__Vtemp_h3d097fd2__17[0U] 
                             << 1U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[0U] 
            = (__Vtemp_h858419c6__2[0U] << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[1U] 
            = ((__Vtemp_h858419c6__2[0U] >> 0x1fU) 
               | (__Vtemp_h858419c6__2[1U] << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[2U] 
            = ((__Vtemp_h858419c6__2[1U] >> 0x1fU) 
               | (__Vtemp_h858419c6__2[2U] << 1U));
    } else if ((4U == (6U & (__Vtemp_h3d097fd2__18[0U] 
                             << 1U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[0U] 
            = ((~ __Vtemp_h858419c6__3[0U]) << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[1U] 
            = (((~ __Vtemp_h858419c6__3[0U]) >> 0x1fU) 
               | ((~ __Vtemp_h858419c6__3[1U]) << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[2U] 
            = (((~ __Vtemp_h858419c6__3[1U]) >> 0x1fU) 
               | (6U & ((~ __Vtemp_h858419c6__3[2U]) 
                        << 1U)));
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[0U] 
            = __Vtemp_h336a3074__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[1U] 
            = __Vtemp_h336a3074__0[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[2U] 
            = __Vtemp_h336a3074__0[2U];
    }
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__21, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__22, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__6, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__23, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__7, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__24, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__8, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__25, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__9, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__26, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__10, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__27, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__11, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    if ((5U == (7U & (__Vtemp_h3d097fd2__26[0U] >> 1U)))) {
        __Vtemp_ha63326bd__0[0U] = (~ __Vtemp_h858419c6__10[0U]);
        __Vtemp_ha63326bd__0[1U] = (~ __Vtemp_h858419c6__10[1U]);
        __Vtemp_ha63326bd__0[2U] = (3U & (~ __Vtemp_h858419c6__10[2U]));
    } else if ((6U == (7U & (__Vtemp_h3d097fd2__27[0U] 
                             >> 1U)))) {
        __Vtemp_ha63326bd__0[0U] = (~ __Vtemp_h858419c6__11[0U]);
        __Vtemp_ha63326bd__0[1U] = (~ __Vtemp_h858419c6__11[1U]);
        __Vtemp_ha63326bd__0[2U] = (3U & (~ __Vtemp_h858419c6__11[2U]));
    } else {
        __Vtemp_ha63326bd__0[0U] = 0U;
        __Vtemp_ha63326bd__0[1U] = 0U;
        __Vtemp_ha63326bd__0[2U] = (3U & 0U);
    }
    VL_EXTEND_WW(67,66, __Vtemp_h4b64983f__0, __Vtemp_ha63326bd__0);
    if ((0U == (7U & (__Vtemp_h3d097fd2__21[0U] >> 1U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_20[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_20[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_20[2U] = 0U;
    } else if ((1U == (7U & (__Vtemp_h3d097fd2__22[0U] 
                             >> 1U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__6[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__6[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__6[2U];
    } else if ((2U == (7U & (__Vtemp_h3d097fd2__23[0U] 
                             >> 1U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__7[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__7[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__7[2U];
    } else if ((3U == (7U & (__Vtemp_h3d097fd2__24[0U] 
                             >> 1U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_20[0U] 
            = (__Vtemp_h858419c6__8[0U] << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_20[1U] 
            = ((__Vtemp_h858419c6__8[0U] >> 0x1fU) 
               | (__Vtemp_h858419c6__8[1U] << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_20[2U] 
            = ((__Vtemp_h858419c6__8[1U] >> 0x1fU) 
               | (__Vtemp_h858419c6__8[2U] << 1U));
    } else if ((4U == (7U & (__Vtemp_h3d097fd2__25[0U] 
                             >> 1U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_20[0U] 
            = ((~ __Vtemp_h858419c6__9[0U]) << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_20[1U] 
            = (((~ __Vtemp_h858419c6__9[0U]) >> 0x1fU) 
               | ((~ __Vtemp_h858419c6__9[1U]) << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_20[2U] 
            = (((~ __Vtemp_h858419c6__9[1U]) >> 0x1fU) 
               | (6U & ((~ __Vtemp_h858419c6__9[2U]) 
                        << 1U)));
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_20[0U] 
            = __Vtemp_h4b64983f__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_20[1U] 
            = __Vtemp_h4b64983f__0[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_20[2U] 
            = __Vtemp_h4b64983f__0[2U];
    }
}

VL_INLINE_OPT void VCoreTop___024root___sequent__TOP__69(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___sequent__TOP__69\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1317_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_786_io_cout) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2266));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1311_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_777_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_781_io_out_0) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_778_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_781_io_out_0) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_778_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1313_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_780_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_784_io_out_0) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_781_io_out_1))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_784_io_out_0) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_781_io_out_1)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1315_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_783_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2259) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_784_io_out_1))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2259) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_784_io_out_1)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1321_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_795_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_793_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_796_io_out_0))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_793_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_796_io_out_0)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1322_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_797_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_795_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2292));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1640_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1250_io_s) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1246_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1640_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1250_io_s) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1246_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1375_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_869_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_865_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_870_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_865_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_870_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1378_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_873_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_869_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_874_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_869_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_874_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1379_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_870_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_875_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_871_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_875_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_871_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1381_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_877_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_873_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_878_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_873_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_878_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1382_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_874_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_879_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_875_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_879_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_875_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1385_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_878_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_883_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_879_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_883_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_879_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1386_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_884_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_880_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_358))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_880_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_358)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1389_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_888_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_884_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_377))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_884_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_377)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1392_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_892_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_888_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_165_io_out_0));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1392_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_892_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_888_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_165_io_out_0))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_888_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_165_io_out_0)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1395_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_896_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_892_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_897_io_out_0));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1395_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_896_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_892_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_897_io_out_0))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_892_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_897_io_out_0)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1398_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_901_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_896_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_902_io_out_0));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1398_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_901_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_896_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_902_io_out_0))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_896_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_902_io_out_0)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1401_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_906_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_901_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_907_io_out_0));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1401_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_906_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_901_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_907_io_out_0))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_901_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_907_io_out_0)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1405_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_913_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_908_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_914_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_908_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_914_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1409_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_914_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_920_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_915_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_920_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_915_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1415_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_928_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_923_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_929_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1419_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_933_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_928_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_934_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1420_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_929_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_935_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_930_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1423_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_938_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_933_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_939_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1423_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_938_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_933_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_939_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_933_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_939_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1424_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_934_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_940_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_935_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1427_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_944_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_938_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_945_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1428_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_939_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_946_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_940_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1428_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_939_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_946_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_940_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_946_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_940_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1431_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_950_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_944_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_951_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1432_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_945_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_952_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_946_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1433_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_953_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_947_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_954_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_947_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_954_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1435_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_956_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_950_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_957_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1435_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_956_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_950_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_957_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_950_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_957_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1436_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_951_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_958_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_952_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1440_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_957_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_964_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_958_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1440_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_957_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_964_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_958_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_964_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_958_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1447_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_974_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_968_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_975_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1451_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_980_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_974_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_981_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1451_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_980_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_974_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_981_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_974_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_981_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1452_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_975_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_982_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_976_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1455_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_986_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_980_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_987_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1455_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_986_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_980_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_987_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_980_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_987_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1456_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_981_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_988_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_982_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1456_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_981_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_988_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_982_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_988_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_982_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1459_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_992_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_986_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_993_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1460_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_987_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_994_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_988_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1460_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_987_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_994_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_988_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_994_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_988_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1461_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_995_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_989_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_996_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1461_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_995_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_989_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_996_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_989_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_996_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1463_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_999_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_992_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1000_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1463_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_999_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_992_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1000_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_992_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1000_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1464_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_993_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1001_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_994_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1465_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1002_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_995_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1003_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1465_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1002_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_995_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1003_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_995_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1003_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1468_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1006_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_999_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1007_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1468_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1006_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_999_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1007_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_999_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1007_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1469_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1000_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1008_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1001_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1469_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1000_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1008_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1001_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1008_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1001_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1470_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1009_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1002_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1010_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1473_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1013_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1006_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1014_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1473_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1013_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1006_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1014_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1006_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1014_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1474_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1007_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1015_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1008_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1474_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1007_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1015_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1008_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1015_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1008_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1475_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1016_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1009_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1017_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1478_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1020_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1013_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1021_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1013_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1021_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1479_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1014_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1022_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1015_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1479_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1014_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1022_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1015_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1022_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1015_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1480_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1023_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1016_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1024_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1484_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1021_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1029_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1022_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1029_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1022_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1488_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1034_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1027_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1035_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1027_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1035_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1493_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1041_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1034_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1042_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1034_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1042_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1494_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1035_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1043_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1036_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1043_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1036_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1498_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1048_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1041_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1049_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1041_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1049_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1499_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1042_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1050_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1043_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1050_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1043_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1504_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1049_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1057_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1050_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1057_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1050_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1510_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1065_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1058_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1066_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1058_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1066_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1515_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1072_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1065_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1073_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1065_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1073_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1523_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1083_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1076_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1084_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1076_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1084_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1525_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1086_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1079_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1087_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1079_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1087_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1529_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1084_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1092_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1085_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1092_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1085_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1530_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1093_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1086_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1094_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1086_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1094_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1546_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1108_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1116_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1109_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1116_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1109_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1550_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1121_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1114_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1122_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1550_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1121_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1114_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1122_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1114_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1122_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1551_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1115_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1123_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1116_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1123_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1116_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1554_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1119_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1127_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1120_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1127_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1120_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1555_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1128_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1121_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1129_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1555_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1128_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1121_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1129_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1121_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1129_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1558_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1132_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1125_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1133_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1558_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1132_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1125_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1133_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1125_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1133_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1560_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1135_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1128_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1136_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1560_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1135_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1128_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1136_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1128_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1136_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1563_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1139_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1132_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1140_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1563_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1139_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1132_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1140_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1132_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1140_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1564_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1133_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1141_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1134_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1564_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1133_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1141_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1134_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1141_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1134_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1565_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1142_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1135_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1143_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1568_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1146_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1139_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1147_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1568_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1146_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1139_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1147_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1139_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1147_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1569_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1140_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1148_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1141_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1569_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1140_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1148_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1141_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1148_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1141_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1574_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1147_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1154_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1148_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1574_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1147_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1154_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1148_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1154_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1148_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1633_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1234_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1240_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1235_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1633_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1234_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1240_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1235_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1240_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1235_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1635_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1243_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1238_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1244_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1635_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1243_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1238_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1244_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1238_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1244_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1636_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1239_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1245_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1240_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1636_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1239_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1245_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1240_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1245_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1240_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1637_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1246_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1241_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1966))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1241_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1966)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1638_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1247_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1243_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1248_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1638_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1247_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1243_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1248_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1243_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1248_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1639_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1244_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1249_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1245_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1639_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1244_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1249_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1245_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1249_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1245_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1641_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1251_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1247_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1252_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1641_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1251_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1247_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1252_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1247_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1252_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1642_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1248_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1253_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1249_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1642_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1248_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1253_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1249_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1253_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1249_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1644_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1255_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1251_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1256_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1644_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1255_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1251_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1256_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1251_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1256_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1645_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1252_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1257_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1253_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1645_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1252_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1257_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1253_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1257_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1253_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1648_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1256_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1261_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1257_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1648_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1256_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1261_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1257_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1261_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1257_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1663_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1280_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1277_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1281_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1663_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1280_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1277_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1281_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1277_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1281_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1665_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1283_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1280_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1284_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1665_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1283_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1280_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1284_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1280_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1284_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1666_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1281_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1285_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1282_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1668_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1284_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1288_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1285_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1670_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1287_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1291_io_out_0)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1288_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1672_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1290_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1294_io_out_0)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1291_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1674_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1293_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1297_io_out_0)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1294_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1675_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1298_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1295_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1299_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1675_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1298_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1295_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1299_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1295_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1299_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1676_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1296_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1300_io_out_0)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1297_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1678_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1299_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1303_io_out_0)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1300_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1682_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1308_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1306_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1309_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1682_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1308_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1306_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1309_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1306_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1309_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1683_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1310_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1308_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1311_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1683_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1310_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1308_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1311_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1308_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1311_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1684_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1312_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1310_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1313_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1684_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1312_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1310_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1313_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1310_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1313_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1685_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1314_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1312_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1315_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1685_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1314_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1312_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1315_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1312_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1315_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1686_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1316_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1314_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1317_io_out_0));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1686_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1316_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1314_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1317_io_out_0))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1314_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1317_io_out_0)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1689_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1320_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1319_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_792_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1689_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1320_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1319_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_792_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1319_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_792_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1690_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1321_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1320_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_794_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1690_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1321_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1320_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_794_io_out_1))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1320_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_794_io_out_1)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1691_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1322_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1321_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_796_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1691_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1322_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1321_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_796_io_out_1))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1321_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_796_io_out_1)));
}
