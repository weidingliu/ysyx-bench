// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPUTop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VCPUTop__Syms.h"
#include "VCPUTop___024root.h"

void VCPUTop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &rdata);
void VCPUTop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask);

VL_INLINE_OPT void VCPUTop___024root___combo__TOP__0(VCPUTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPUTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUTop___024root___combo__TOP__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_hb04a9c46__0;
    VlWide<3>/*95:0*/ __Vtemp_h6d2d15ff__0;
    VlWide<3>/*95:0*/ __Vtemp_h34da3607__0;
    VlWide<3>/*95:0*/ __Vtemp_h19e34a40__0;
    VlWide<4>/*127:0*/ __Vtemp_hb125646c__0;
    VlWide<4>/*127:0*/ __Vtemp_haf3290ac__0;
    VlWide<4>/*127:0*/ __Vtemp_h7944d02d__0;
    VlWide<3>/*95:0*/ __Vtemp_hb04aac35__0;
    VlWide<3>/*95:0*/ __Vtemp_h50a54222__0;
    VlWide<3>/*95:0*/ __Vtemp_haf1887f5__0;
    VlWide<3>/*95:0*/ __Vtemp_h00d1789c__0;
    VlWide<3>/*95:0*/ __Vtemp_h8f84d91f__0;
    VlWide<4>/*127:0*/ __Vtemp_h7548e965__0;
    VlWide<4>/*127:0*/ __Vtemp_hd83d5fe3__0;
    VlWide<4>/*127:0*/ __Vtemp_hb125646c__1;
    VlWide<4>/*127:0*/ __Vtemp_h53a40c04__0;
    VlWide<4>/*127:0*/ __Vtemp_hdc10468f__0;
    // Body
    if ((1U & (~ ((IData)(vlSelf->reset) | (IData)(vlSelf->clock))))) {
        VCPUTop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->CPUTop__DOT__IF__DOT__temp, vlSelf->__Vtask_pmem_read__0__rdata);
        vlSelf->CPUTop__DOT__IFM__DOT__rdata = vlSelf->__Vtask_pmem_read__0__rdata;
    }
    vlSelf->CPUTop__DOT__IFM_inst = ((1U & (IData)(
                                                   (vlSelf->CPUTop__DOT__IF__DOT__temp 
                                                    >> 2U)))
                                      ? (IData)((vlSelf->CPUTop__DOT__IFM__DOT__rdata 
                                                 >> 0x20U))
                                      : (IData)(vlSelf->CPUTop__DOT__IFM__DOT__rdata));
    vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_346 
        = ((0x4063U != (0x707fU & vlSelf->CPUTop__DOT__IFM_inst)) 
           & ((0x4000003bU == (0xfe00707fU & vlSelf->CPUTop__DOT__IFM_inst)) 
              | ((0x2033U == (0xfe00707fU & vlSelf->CPUTop__DOT__IFM_inst)) 
                 | ((0x1003U == (0x707fU & vlSelf->CPUTop__DOT__IFM_inst)) 
                    | ((0x5003U == (0x707fU & vlSelf->CPUTop__DOT__IFM_inst)) 
                       | ((0x101bU == (0xfc00707fU 
                                       & vlSelf->CPUTop__DOT__IFM_inst)) 
                          | ((0x4000501bU == (0xfc00707fU 
                                              & vlSelf->CPUTop__DOT__IFM_inst)) 
                             | ((0x2000033U == (0xfe00707fU 
                                                & vlSelf->CPUTop__DOT__IFM_inst)) 
                                | ((0x501bU == (0xfc00707fU 
                                                & vlSelf->CPUTop__DOT__IFM_inst)) 
                                   | ((0x4000503bU 
                                       == (0xfe00707fU 
                                           & vlSelf->CPUTop__DOT__IFM_inst)) 
                                      | ((0x503bU == 
                                          (0xfe00707fU 
                                           & vlSelf->CPUTop__DOT__IFM_inst)) 
                                         | ((0x6063U 
                                             != (0x707fU 
                                                 & vlSelf->CPUTop__DOT__IFM_inst)) 
                                            & ((0x7063U 
                                                != 
                                                (0x707fU 
                                                 & vlSelf->CPUTop__DOT__IFM_inst)) 
                                               & ((0x4033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->CPUTop__DOT__IFM_inst)) 
                                                  | ((0x200703bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->CPUTop__DOT__IFM_inst)) 
                                                     | ((0x1033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->CPUTop__DOT__IFM_inst)) 
                                                        | ((0x2007033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->CPUTop__DOT__IFM_inst)) 
                                                           | ((0x200503bU 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->CPUTop__DOT__IFM_inst)) 
                                                              | ((0x2013U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlSelf->CPUTop__DOT__IFM_inst)) 
                                                                 | ((0x6003U 
                                                                     == 
                                                                     (0x707fU 
                                                                      & vlSelf->CPUTop__DOT__IFM_inst)) 
                                                                    | ((0x2006033U 
                                                                        == 
                                                                        (0xfe00707fU 
                                                                         & vlSelf->CPUTop__DOT__IFM_inst)) 
                                                                       | ((0x5033U 
                                                                           == 
                                                                           (0xfe00707fU 
                                                                            & vlSelf->CPUTop__DOT__IFM_inst)) 
                                                                          | ((0x2005033U 
                                                                              == 
                                                                              (0xfe00707fU 
                                                                               & vlSelf->CPUTop__DOT__IFM_inst)) 
                                                                             | ((0x2004033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->CPUTop__DOT__IFM_inst)) 
                                                                                | ((0x40005033U 
                                                                                == 
                                                                                (0xfc00707fU 
                                                                                & vlSelf->CPUTop__DOT__IFM_inst)) 
                                                                                | ((0x100073U 
                                                                                != vlSelf->CPUTop__DOT__IFM_inst) 
                                                                                & ((0x2073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->CPUTop__DOT__IFM_inst)) 
                                                                                | (0x1073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->CPUTop__DOT__IFM_inst)))))))))))))))))))))))))))));
    vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_213 
        = ((0x2000033U == (0xfe00707fU & vlSelf->CPUTop__DOT__IFM_inst))
            ? 0U : ((0x501bU == (0xfc00707fU & vlSelf->CPUTop__DOT__IFM_inst))
                     ? 1U : ((0x4000503bU == (0xfe00707fU 
                                              & vlSelf->CPUTop__DOT__IFM_inst))
                              ? 1U : ((0x503bU == (0xfe00707fU 
                                                   & vlSelf->CPUTop__DOT__IFM_inst))
                                       ? 1U : ((0x6063U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->CPUTop__DOT__IFM_inst))
                                                ? 2U
                                                : (
                                                   (0x7063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->CPUTop__DOT__IFM_inst))
                                                    ? 2U
                                                    : 
                                                   ((0x4033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->CPUTop__DOT__IFM_inst))
                                                     ? 0U
                                                     : 
                                                    ((0x200703bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->CPUTop__DOT__IFM_inst))
                                                      ? 0U
                                                      : 
                                                     ((0x1033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->CPUTop__DOT__IFM_inst))
                                                       ? 1U
                                                       : 
                                                      ((0x2007033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->CPUTop__DOT__IFM_inst))
                                                        ? 0U
                                                        : 
                                                       ((0x200503bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->CPUTop__DOT__IFM_inst))
                                                         ? 0U
                                                         : 
                                                        ((0x2013U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->CPUTop__DOT__IFM_inst))
                                                          ? 5U
                                                          : 
                                                         ((0x6003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->CPUTop__DOT__IFM_inst))
                                                           ? 4U
                                                           : 
                                                          ((0x2006033U 
                                                            != 
                                                            (0xfe00707fU 
                                                             & vlSelf->CPUTop__DOT__IFM_inst)) 
                                                           & (0x5033U 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->CPUTop__DOT__IFM_inst))))))))))))))));
    vlSelf->CPUTop__DOT__EX_io1_REG2 = ((0U == (0x1fU 
                                                & (vlSelf->CPUTop__DOT__IFM_inst 
                                                   >> 0x14U)))
                                         ? 0ULL : vlSelf->CPUTop__DOT__rf
                                        [(0x1fU & (vlSelf->CPUTop__DOT__IFM_inst 
                                                   >> 0x14U))]);
    vlSelf->CPUTop__DOT__EX_io1_REG1 = ((0U == (0x1fU 
                                                & (vlSelf->CPUTop__DOT__IFM_inst 
                                                   >> 0xfU)))
                                         ? 0ULL : vlSelf->CPUTop__DOT__rf
                                        [(0x1fU & (vlSelf->CPUTop__DOT__IFM_inst 
                                                   >> 0xfU))]);
    vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_268 
        = ((0x1033U == (0xfe00707fU & vlSelf->CPUTop__DOT__IFM_inst))
            ? 0x41U : ((0x2007033U == (0xfe00707fU 
                                       & vlSelf->CPUTop__DOT__IFM_inst))
                        ? 0xfU : ((0x200503bU == (0xfe00707fU 
                                                  & vlSelf->CPUTop__DOT__IFM_inst))
                                   ? 0x10U : ((0x2013U 
                                               == (0x707fU 
                                                   & vlSelf->CPUTop__DOT__IFM_inst))
                                               ? 2U
                                               : ((0x6003U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->CPUTop__DOT__IFM_inst))
                                                   ? 0x11U
                                                   : 
                                                  ((0x2006033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->CPUTop__DOT__IFM_inst))
                                                    ? 0x12U
                                                    : 
                                                   ((0x5033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->CPUTop__DOT__IFM_inst))
                                                     ? 0x75U
                                                     : 
                                                    ((0x2005033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->CPUTop__DOT__IFM_inst))
                                                      ? 0x13U
                                                      : 
                                                     ((0x2004033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->CPUTop__DOT__IFM_inst))
                                                       ? 0x43U
                                                       : 
                                                      ((0x40005033U 
                                                        == 
                                                        (0xfc00707fU 
                                                         & vlSelf->CPUTop__DOT__IFM_inst))
                                                        ? 0x14U
                                                        : 
                                                       ((0x100073U 
                                                         == vlSelf->CPUTop__DOT__IFM_inst)
                                                         ? 0x42U
                                                         : 
                                                        ((0x2073U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->CPUTop__DOT__IFM_inst))
                                                          ? 0x15U
                                                          : 
                                                         ((0x1073U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->CPUTop__DOT__IFM_inst))
                                                           ? 0x16U
                                                           : 
                                                          ((0x73U 
                                                            == vlSelf->CPUTop__DOT__IFM_inst)
                                                            ? 0x17U
                                                            : 
                                                           ((0x30200073U 
                                                             == vlSelf->CPUTop__DOT__IFM_inst)
                                                             ? 0x18U
                                                             : 0U)))))))))))))));
    vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_144 
        = ((0x4033U == (0xfe00707fU & vlSelf->CPUTop__DOT__IFM_inst))
            ? 5U : ((0x200703bU == (0xfe00707fU & vlSelf->CPUTop__DOT__IFM_inst))
                     ? 5U : ((0x1033U == (0xfe00707fU 
                                          & vlSelf->CPUTop__DOT__IFM_inst))
                              ? 5U : ((0x2007033U == 
                                       (0xfe00707fU 
                                        & vlSelf->CPUTop__DOT__IFM_inst))
                                       ? 5U : ((0x200503bU 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->CPUTop__DOT__IFM_inst))
                                                ? 5U
                                                : (
                                                   (0x2013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->CPUTop__DOT__IFM_inst))
                                                    ? 8U
                                                    : 
                                                   ((0x6003U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->CPUTop__DOT__IFM_inst))
                                                     ? 8U
                                                     : 
                                                    ((0x2006033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->CPUTop__DOT__IFM_inst))
                                                      ? 5U
                                                      : 
                                                     ((0x5033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->CPUTop__DOT__IFM_inst))
                                                       ? 5U
                                                       : 
                                                      ((0x2005033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->CPUTop__DOT__IFM_inst))
                                                        ? 5U
                                                        : 
                                                       ((0x2004033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->CPUTop__DOT__IFM_inst))
                                                         ? 5U
                                                         : 
                                                        ((0x40005033U 
                                                          == 
                                                          (0xfc00707fU 
                                                           & vlSelf->CPUTop__DOT__IFM_inst))
                                                          ? 5U
                                                          : 
                                                         ((0x100073U 
                                                           == vlSelf->CPUTop__DOT__IFM_inst)
                                                           ? 0U
                                                           : 
                                                          ((0x2073U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->CPUTop__DOT__IFM_inst))
                                                            ? 8U
                                                            : 
                                                           ((0x1073U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->CPUTop__DOT__IFM_inst))
                                                             ? 8U
                                                             : 0U)))))))))))))));
    vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_366 
        = ((0x1063U != (0x707fU & vlSelf->CPUTop__DOT__IFM_inst)) 
           & ((0x1bU == (0x707fU & vlSelf->CPUTop__DOT__IFM_inst)) 
              | ((0x33U == (0xfe00707fU & vlSelf->CPUTop__DOT__IFM_inst)) 
                 | ((0x40005013U == (0xfc00707fU & vlSelf->CPUTop__DOT__IFM_inst)) 
                    | ((0x4003U == (0x707fU & vlSelf->CPUTop__DOT__IFM_inst)) 
                       | ((3U == (0x707fU & vlSelf->CPUTop__DOT__IFM_inst)) 
                          | ((0x1023U != (0x707fU & vlSelf->CPUTop__DOT__IFM_inst)) 
                             & ((0x7033U == (0xfe00707fU 
                                             & vlSelf->CPUTop__DOT__IFM_inst)) 
                                | ((0x3033U == (0xfe00707fU 
                                                & vlSelf->CPUTop__DOT__IFM_inst)) 
                                   | ((0x4013U == (0x707fU 
                                                   & vlSelf->CPUTop__DOT__IFM_inst)) 
                                      | ((0x103bU == 
                                          (0xfe00707fU 
                                           & vlSelf->CPUTop__DOT__IFM_inst)) 
                                         | ((0x7013U 
                                             == (0x707fU 
                                                 & vlSelf->CPUTop__DOT__IFM_inst)) 
                                            | ((0x6033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->CPUTop__DOT__IFM_inst)) 
                                               | ((0x23U 
                                                   != 
                                                   (0x707fU 
                                                    & vlSelf->CPUTop__DOT__IFM_inst)) 
                                                  & ((0x5013U 
                                                      == 
                                                      (0xfc00707fU 
                                                       & vlSelf->CPUTop__DOT__IFM_inst)) 
                                                     | ((0x5063U 
                                                         != 
                                                         (0x707fU 
                                                          & vlSelf->CPUTop__DOT__IFM_inst)) 
                                                        & ((0x2023U 
                                                            != 
                                                            (0x707fU 
                                                             & vlSelf->CPUTop__DOT__IFM_inst)) 
                                                           & ((0x200003bU 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->CPUTop__DOT__IFM_inst)) 
                                                              | ((0x200403bU 
                                                                  == 
                                                                  (0xfe00707fU 
                                                                   & vlSelf->CPUTop__DOT__IFM_inst)) 
                                                                 | ((0x200603bU 
                                                                     == 
                                                                     (0xfe00707fU 
                                                                      & vlSelf->CPUTop__DOT__IFM_inst)) 
                                                                    | (IData)(vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_346)))))))))))))))))))));
    vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_228 
        = ((0x6033U == (0xfe00707fU & vlSelf->CPUTop__DOT__IFM_inst))
            ? 0U : ((0x23U == (0x707fU & vlSelf->CPUTop__DOT__IFM_inst))
                     ? 4U : ((0x5013U == (0xfc00707fU 
                                          & vlSelf->CPUTop__DOT__IFM_inst))
                              ? 1U : ((0x5063U == (0x707fU 
                                                   & vlSelf->CPUTop__DOT__IFM_inst))
                                       ? 2U : ((0x2023U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->CPUTop__DOT__IFM_inst))
                                                ? 4U
                                                : (
                                                   (0x200003bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->CPUTop__DOT__IFM_inst))
                                                    ? 0U
                                                    : 
                                                   ((0x200403bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->CPUTop__DOT__IFM_inst))
                                                     ? 0U
                                                     : 
                                                    ((0x200603bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->CPUTop__DOT__IFM_inst))
                                                      ? 0U
                                                      : 
                                                     ((0x4063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->CPUTop__DOT__IFM_inst))
                                                       ? 2U
                                                       : 
                                                      ((0x4000003bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->CPUTop__DOT__IFM_inst))
                                                        ? 0U
                                                        : 
                                                       ((0x2033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->CPUTop__DOT__IFM_inst))
                                                         ? 5U
                                                         : 
                                                        ((0x1003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->CPUTop__DOT__IFM_inst))
                                                          ? 4U
                                                          : 
                                                         ((0x5003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->CPUTop__DOT__IFM_inst))
                                                           ? 4U
                                                           : 
                                                          ((0x101bU 
                                                            == 
                                                            (0xfc00707fU 
                                                             & vlSelf->CPUTop__DOT__IFM_inst))
                                                            ? 1U
                                                            : 
                                                           ((0x4000501bU 
                                                             == 
                                                             (0xfc00707fU 
                                                              & vlSelf->CPUTop__DOT__IFM_inst))
                                                             ? 1U
                                                             : (IData)(vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_213))))))))))))))));
    vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_283 
        = ((0x4063U == (0x707fU & vlSelf->CPUTop__DOT__IFM_inst))
            ? 0x7bU : ((0x4000003bU == (0xfe00707fU 
                                        & vlSelf->CPUTop__DOT__IFM_inst))
                        ? 1U : ((0x2033U == (0xfe00707fU 
                                             & vlSelf->CPUTop__DOT__IFM_inst))
                                 ? 2U : ((0x1003U == 
                                          (0x707fU 
                                           & vlSelf->CPUTop__DOT__IFM_inst))
                                          ? 3U : ((0x5003U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->CPUTop__DOT__IFM_inst))
                                                   ? 4U
                                                   : 
                                                  ((0x101bU 
                                                    == 
                                                    (0xfc00707fU 
                                                     & vlSelf->CPUTop__DOT__IFM_inst))
                                                    ? 5U
                                                    : 
                                                   ((0x4000501bU 
                                                     == 
                                                     (0xfc00707fU 
                                                      & vlSelf->CPUTop__DOT__IFM_inst))
                                                     ? 6U
                                                     : 
                                                    ((0x2000033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->CPUTop__DOT__IFM_inst))
                                                      ? 7U
                                                      : 
                                                     ((0x501bU 
                                                       == 
                                                       (0xfc00707fU 
                                                        & vlSelf->CPUTop__DOT__IFM_inst))
                                                       ? 8U
                                                       : 
                                                      ((0x4000503bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->CPUTop__DOT__IFM_inst))
                                                        ? 9U
                                                        : 
                                                       ((0x503bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->CPUTop__DOT__IFM_inst))
                                                         ? 0xaU
                                                         : 
                                                        ((0x6063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->CPUTop__DOT__IFM_inst))
                                                          ? 0xbU
                                                          : 
                                                         ((0x7063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->CPUTop__DOT__IFM_inst))
                                                           ? 0xcU
                                                           : 
                                                          ((0x4033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->CPUTop__DOT__IFM_inst))
                                                            ? 0x72U
                                                            : 
                                                           ((0x200703bU 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->CPUTop__DOT__IFM_inst))
                                                             ? 0xdU
                                                             : (IData)(vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_268))))))))))))))));
    vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_159 
        = ((0x200403bU == (0xfe00707fU & vlSelf->CPUTop__DOT__IFM_inst))
            ? 5U : ((0x200603bU == (0xfe00707fU & vlSelf->CPUTop__DOT__IFM_inst))
                     ? 5U : ((0x4063U == (0x707fU & vlSelf->CPUTop__DOT__IFM_inst))
                              ? 0xbU : ((0x4000003bU 
                                         == (0xfe00707fU 
                                             & vlSelf->CPUTop__DOT__IFM_inst))
                                         ? 5U : ((0x2033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->CPUTop__DOT__IFM_inst))
                                                  ? 5U
                                                  : 
                                                 ((0x1003U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->CPUTop__DOT__IFM_inst))
                                                   ? 8U
                                                   : 
                                                  ((0x5003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->CPUTop__DOT__IFM_inst))
                                                    ? 8U
                                                    : 
                                                   ((0x101bU 
                                                     == 
                                                     (0xfc00707fU 
                                                      & vlSelf->CPUTop__DOT__IFM_inst))
                                                     ? 8U
                                                     : 
                                                    ((0x4000501bU 
                                                      == 
                                                      (0xfc00707fU 
                                                       & vlSelf->CPUTop__DOT__IFM_inst))
                                                      ? 8U
                                                      : 
                                                     ((0x2000033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->CPUTop__DOT__IFM_inst))
                                                       ? 5U
                                                       : 
                                                      ((0x501bU 
                                                        == 
                                                        (0xfc00707fU 
                                                         & vlSelf->CPUTop__DOT__IFM_inst))
                                                        ? 8U
                                                        : 
                                                       ((0x4000503bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->CPUTop__DOT__IFM_inst))
                                                         ? 5U
                                                         : 
                                                        ((0x503bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->CPUTop__DOT__IFM_inst))
                                                          ? 5U
                                                          : 
                                                         ((0x6063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->CPUTop__DOT__IFM_inst))
                                                           ? 0xbU
                                                           : 
                                                          ((0x7063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->CPUTop__DOT__IFM_inst))
                                                            ? 0xbU
                                                            : (IData)(vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_144))))))))))))))));
    vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_243 
        = ((0x40000033U == (0xfe00707fU & vlSelf->CPUTop__DOT__IFM_inst))
            ? 0U : ((0x3013U == (0x707fU & vlSelf->CPUTop__DOT__IFM_inst))
                     ? 5U : ((0x63U == (0x707fU & vlSelf->CPUTop__DOT__IFM_inst))
                              ? 2U : ((0x1063U == (0x707fU 
                                                   & vlSelf->CPUTop__DOT__IFM_inst))
                                       ? 2U : ((0x1bU 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->CPUTop__DOT__IFM_inst))
                                                ? 0U
                                                : (
                                                   (0x33U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->CPUTop__DOT__IFM_inst))
                                                    ? 0U
                                                    : 
                                                   ((0x40005013U 
                                                     == 
                                                     (0xfc00707fU 
                                                      & vlSelf->CPUTop__DOT__IFM_inst))
                                                     ? 1U
                                                     : 
                                                    ((0x4003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->CPUTop__DOT__IFM_inst))
                                                      ? 4U
                                                      : 
                                                     ((3U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->CPUTop__DOT__IFM_inst))
                                                       ? 4U
                                                       : 
                                                      ((0x1023U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->CPUTop__DOT__IFM_inst))
                                                        ? 4U
                                                        : 
                                                       ((0x7033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->CPUTop__DOT__IFM_inst))
                                                         ? 0U
                                                         : 
                                                        ((0x3033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->CPUTop__DOT__IFM_inst))
                                                          ? 5U
                                                          : 
                                                         ((0x4013U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->CPUTop__DOT__IFM_inst))
                                                           ? 0U
                                                           : 
                                                          ((0x103bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->CPUTop__DOT__IFM_inst))
                                                            ? 1U
                                                            : 
                                                           ((0x7013U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->CPUTop__DOT__IFM_inst))
                                                             ? 0U
                                                             : (IData)(vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_228))))))))))))))));
    vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_298 
        = ((3U == (0x707fU & vlSelf->CPUTop__DOT__IFM_inst))
            ? 0xeU : ((0x1023U == (0x707fU & vlSelf->CPUTop__DOT__IFM_inst))
                       ? 0x70U : ((0x7033U == (0xfe00707fU 
                                               & vlSelf->CPUTop__DOT__IFM_inst))
                                   ? 0x71U : ((0x3033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->CPUTop__DOT__IFM_inst))
                                               ? 0x6aU
                                               : ((0x4013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->CPUTop__DOT__IFM_inst))
                                                   ? 0x72U
                                                   : 
                                                  ((0x103bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->CPUTop__DOT__IFM_inst))
                                                    ? 0x73U
                                                    : 
                                                   ((0x7013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->CPUTop__DOT__IFM_inst))
                                                     ? 0x71U
                                                     : 
                                                    ((0x6033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->CPUTop__DOT__IFM_inst))
                                                      ? 0x44U
                                                      : 
                                                     ((0x23U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->CPUTop__DOT__IFM_inst))
                                                       ? 0x74U
                                                       : 
                                                      ((0x5013U 
                                                        == 
                                                        (0xfc00707fU 
                                                         & vlSelf->CPUTop__DOT__IFM_inst))
                                                        ? 0x75U
                                                        : 
                                                       ((0x5063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->CPUTop__DOT__IFM_inst))
                                                         ? 0x76U
                                                         : 
                                                        ((0x2023U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->CPUTop__DOT__IFM_inst))
                                                          ? 0x77U
                                                          : 
                                                         ((0x200003bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->CPUTop__DOT__IFM_inst))
                                                           ? 0x78U
                                                           : 
                                                          ((0x200403bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->CPUTop__DOT__IFM_inst))
                                                            ? 0x79U
                                                            : 
                                                           ((0x200603bU 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->CPUTop__DOT__IFM_inst))
                                                             ? 0x7aU
                                                             : (IData)(vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_283))))))))))))))));
    vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_174 
        = ((0x40005013U == (0xfc00707fU & vlSelf->CPUTop__DOT__IFM_inst))
            ? 8U : ((0x4003U == (0x707fU & vlSelf->CPUTop__DOT__IFM_inst))
                     ? 8U : ((3U == (0x707fU & vlSelf->CPUTop__DOT__IFM_inst))
                              ? 8U : ((0x1023U == (0x707fU 
                                                   & vlSelf->CPUTop__DOT__IFM_inst))
                                       ? 9U : ((0x7033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->CPUTop__DOT__IFM_inst))
                                                ? 5U
                                                : (
                                                   (0x3033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->CPUTop__DOT__IFM_inst))
                                                    ? 5U
                                                    : 
                                                   ((0x4013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->CPUTop__DOT__IFM_inst))
                                                     ? 8U
                                                     : 
                                                    ((0x103bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->CPUTop__DOT__IFM_inst))
                                                      ? 5U
                                                      : 
                                                     ((0x7013U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->CPUTop__DOT__IFM_inst))
                                                       ? 8U
                                                       : 
                                                      ((0x6033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->CPUTop__DOT__IFM_inst))
                                                        ? 5U
                                                        : 
                                                       ((0x23U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->CPUTop__DOT__IFM_inst))
                                                         ? 9U
                                                         : 
                                                        ((0x5013U 
                                                          == 
                                                          (0xfc00707fU 
                                                           & vlSelf->CPUTop__DOT__IFM_inst))
                                                          ? 8U
                                                          : 
                                                         ((0x5063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->CPUTop__DOT__IFM_inst))
                                                           ? 0xbU
                                                           : 
                                                          ((0x2023U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->CPUTop__DOT__IFM_inst))
                                                            ? 9U
                                                            : 
                                                           ((0x200003bU 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->CPUTop__DOT__IFM_inst))
                                                             ? 5U
                                                             : (IData)(vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_159))))))))))))))));
    vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_313 
        = ((0x6013U == (0x707fU & vlSelf->CPUTop__DOT__IFM_inst))
            ? 0x44U : ((0x6fU == (0x7fU & vlSelf->CPUTop__DOT__IFM_inst))
                        ? 0x19U : ((0x67U == (0x707fU 
                                              & vlSelf->CPUTop__DOT__IFM_inst))
                                    ? 0x48U : ((0x3003U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->CPUTop__DOT__IFM_inst))
                                                ? 0x45U
                                                : (
                                                   (0x3023U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->CPUTop__DOT__IFM_inst))
                                                    ? 0x46U
                                                    : 
                                                   ((0x2003U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->CPUTop__DOT__IFM_inst))
                                                     ? 0x47U
                                                     : 
                                                    ((0x3bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->CPUTop__DOT__IFM_inst))
                                                      ? 0x68U
                                                      : 
                                                     ((0x40000033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->CPUTop__DOT__IFM_inst))
                                                       ? 0x69U
                                                       : 
                                                      ((0x3013U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->CPUTop__DOT__IFM_inst))
                                                        ? 0x6aU
                                                        : 
                                                       ((0x63U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->CPUTop__DOT__IFM_inst))
                                                         ? 0x6bU
                                                         : 
                                                        ((0x1063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->CPUTop__DOT__IFM_inst))
                                                          ? 0x6cU
                                                          : 
                                                         ((0x1bU 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->CPUTop__DOT__IFM_inst))
                                                           ? 0x6dU
                                                           : 
                                                          ((0x33U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->CPUTop__DOT__IFM_inst))
                                                            ? 0x40U
                                                            : 
                                                           ((0x40005013U 
                                                             == 
                                                             (0xfc00707fU 
                                                              & vlSelf->CPUTop__DOT__IFM_inst))
                                                             ? 0x6eU
                                                             : 
                                                            ((0x4003U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->CPUTop__DOT__IFM_inst))
                                                              ? 0x6fU
                                                              : (IData)(vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_298))))))))))))))));
    vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_189 
        = ((0x17U == (0x7fU & vlSelf->CPUTop__DOT__IFM_inst))
            ? 3U : ((0x37U == (0x7fU & vlSelf->CPUTop__DOT__IFM_inst))
                     ? 3U : ((0x6013U == (0x707fU & vlSelf->CPUTop__DOT__IFM_inst))
                              ? 8U : ((0x6fU == (0x7fU 
                                                 & vlSelf->CPUTop__DOT__IFM_inst))
                                       ? 7U : ((0x67U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->CPUTop__DOT__IFM_inst))
                                                ? 8U
                                                : (
                                                   (0x3003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->CPUTop__DOT__IFM_inst))
                                                    ? 8U
                                                    : 
                                                   ((0x3023U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->CPUTop__DOT__IFM_inst))
                                                     ? 9U
                                                     : 
                                                    ((0x2003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->CPUTop__DOT__IFM_inst))
                                                      ? 8U
                                                      : 
                                                     ((0x3bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->CPUTop__DOT__IFM_inst))
                                                       ? 5U
                                                       : 
                                                      ((0x40000033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->CPUTop__DOT__IFM_inst))
                                                        ? 5U
                                                        : 
                                                       ((0x3013U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->CPUTop__DOT__IFM_inst))
                                                         ? 8U
                                                         : 
                                                        ((0x63U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->CPUTop__DOT__IFM_inst))
                                                          ? 0xbU
                                                          : 
                                                         ((0x1063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->CPUTop__DOT__IFM_inst))
                                                           ? 0xbU
                                                           : 
                                                          ((0x1bU 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->CPUTop__DOT__IFM_inst))
                                                            ? 8U
                                                            : 
                                                           ((0x33U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->CPUTop__DOT__IFM_inst))
                                                             ? 5U
                                                             : (IData)(vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_174))))))))))))))));
    vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_316 
        = ((0x1013U == (0xfc00707fU & vlSelf->CPUTop__DOT__IFM_inst))
            ? 0x41U : ((0x17U == (0x7fU & vlSelf->CPUTop__DOT__IFM_inst))
                        ? 0x40U : ((0x37U == (0x7fU 
                                              & vlSelf->CPUTop__DOT__IFM_inst))
                                    ? 0x40U : (IData)(vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_313))));
    if ((0x13U == (0x707fU & vlSelf->CPUTop__DOT__IFM_inst))) {
        vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype = 0U;
        vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0 = 8U;
        vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype = 0x40U;
    } else {
        if ((0x1013U == (0xfc00707fU & vlSelf->CPUTop__DOT__IFM_inst))) {
            vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype = 1U;
            vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0 = 8U;
        } else {
            vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype 
                = ((0x17U == (0x7fU & vlSelf->CPUTop__DOT__IFM_inst))
                    ? 0U : ((0x37U == (0x7fU & vlSelf->CPUTop__DOT__IFM_inst))
                             ? 0U : ((0x6013U == (0x707fU 
                                                  & vlSelf->CPUTop__DOT__IFM_inst))
                                      ? 0U : ((0x6fU 
                                               == (0x7fU 
                                                   & vlSelf->CPUTop__DOT__IFM_inst))
                                               ? 3U
                                               : ((0x67U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->CPUTop__DOT__IFM_inst))
                                                   ? 3U
                                                   : 
                                                  ((0x3003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->CPUTop__DOT__IFM_inst))
                                                    ? 4U
                                                    : 
                                                   ((0x3023U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->CPUTop__DOT__IFM_inst))
                                                     ? 4U
                                                     : 
                                                    ((0x2003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->CPUTop__DOT__IFM_inst))
                                                      ? 4U
                                                      : 
                                                     ((0x3bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->CPUTop__DOT__IFM_inst))
                                                       ? 0U
                                                       : (IData)(vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_243))))))))));
            vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0 
                = vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_189;
        }
        vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype 
            = vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_316;
    }
    vlSelf->CPUTop__DOT__ID_io_ctrlIO_Imm = ((((((8U 
                                                  == (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0))
                                                  ? 
                                                 ((((vlSelf->CPUTop__DOT__IFM_inst 
                                                     >> 0x1fU)
                                                     ? 0xfffffffffffffULL
                                                     : 0ULL) 
                                                   << 0xcU) 
                                                  | (QData)((IData)(
                                                                    (vlSelf->CPUTop__DOT__IFM_inst 
                                                                     >> 0x14U))))
                                                  : 0ULL) 
                                                | ((7U 
                                                    == (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0))
                                                    ? 
                                                   ((((0x80000U 
                                                       & vlSelf->CPUTop__DOT__IFM_inst)
                                                       ? 0xfffffffffffULL
                                                       : 0ULL) 
                                                     << 0x14U) 
                                                    | (QData)((IData)(
                                                                      ((0xff000U 
                                                                        & vlSelf->CPUTop__DOT__IFM_inst) 
                                                                       | ((0x800U 
                                                                           & (vlSelf->CPUTop__DOT__IFM_inst 
                                                                              >> 9U)) 
                                                                          | (0x7feU 
                                                                             & (vlSelf->CPUTop__DOT__IFM_inst 
                                                                                >> 0x14U)))))))
                                                    : 0ULL)) 
                                               | ((3U 
                                                   == (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    ((vlSelf->CPUTop__DOT__IFM_inst 
                                                                      >> 0x1fU)
                                                                      ? 0xffffffffU
                                                                      : 0U))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     (0xfffff000U 
                                                                      & vlSelf->CPUTop__DOT__IFM_inst))))
                                                   : 0ULL)) 
                                              | ((9U 
                                                  == (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0))
                                                  ? 
                                                 ((((vlSelf->CPUTop__DOT__IFM_inst 
                                                     >> 0x1fU)
                                                     ? 0xfffffffffffffULL
                                                     : 0ULL) 
                                                   << 0xcU) 
                                                  | (QData)((IData)(
                                                                    ((0xfe0U 
                                                                      & (vlSelf->CPUTop__DOT__IFM_inst 
                                                                         >> 0x14U)) 
                                                                     | (0x1fU 
                                                                        & (vlSelf->CPUTop__DOT__IFM_inst 
                                                                           >> 7U))))))
                                                  : 0ULL)) 
                                             | ((0xbU 
                                                 == (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0))
                                                 ? 
                                                ((((vlSelf->CPUTop__DOT__IFM_inst 
                                                    >> 0x1fU)
                                                    ? 0x7ffffffffffffULL
                                                    : 0ULL) 
                                                  << 0xdU) 
                                                 | (QData)((IData)(
                                                                   ((0x1000U 
                                                                     & (vlSelf->CPUTop__DOT__IFM_inst 
                                                                        >> 0x13U)) 
                                                                    | ((0x800U 
                                                                        & (vlSelf->CPUTop__DOT__IFM_inst 
                                                                           << 4U)) 
                                                                       | ((0x7e0U 
                                                                           & (vlSelf->CPUTop__DOT__IFM_inst 
                                                                              >> 0x14U)) 
                                                                          | (0x1eU 
                                                                             & (vlSelf->CPUTop__DOT__IFM_inst 
                                                                                >> 7U))))))))
                                                 : 0ULL));
    vlSelf->CPUTop__DOT__ID__DOT__srctype2 = (((8U 
                                                == (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0)) 
                                               | (7U 
                                                  == (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0))) 
                                              | (3U 
                                                 == (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0)));
    vlSelf->CPUTop__DOT__ID__DOT___io_ctrlIO_src1type_T_2 
        = ((0x37U == (0x7fU & vlSelf->CPUTop__DOT__IFM_inst))
            ? 3U : (((7U == (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0))
                      ? 2U : 0U) | ((3U == (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0))
                                     ? 2U : 0U)));
    if (VL_UNLIKELY((0x42U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype)))) {
        VL_FINISH_MT("vsrc/DIP_model.v", 47, "");
    }
    vlSelf->CPUTop__DOT__EX__DOT__csr_data = ((0x17U 
                                               == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                               ? vlSelf->CPUTop__DOT__EX__DOT__mtvec
                                               : ((0x18U 
                                                   == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                   ? vlSelf->CPUTop__DOT__EX__DOT__mepc
                                                   : 0ULL));
    vlSelf->CPUTop__DOT__ID__DOT___io_mem_we_T_12 = 
        (((((((0x45U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype)) 
              | (0x47U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))) 
             | (0x6fU == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))) 
            | (3U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))) 
           | (4U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))) 
          | (0xeU == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))) 
         | (0x11U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype)));
    vlSelf->CPUTop__DOT__EX__DOT___branch_result_T_1 
        = (vlSelf->CPUTop__DOT__IF__DOT__temp + vlSelf->CPUTop__DOT__ID_io_ctrlIO_Imm);
    vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_86 
        = ((0x300U == (0xfffU & (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_Imm)))
            ? vlSelf->CPUTop__DOT__EX__DOT__mstatus
            : ((0x305U == (0xfffU & (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_Imm)))
                ? vlSelf->CPUTop__DOT__EX__DOT__mtvec
                : ((0x341U == (0xfffU & (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_Imm)))
                    ? vlSelf->CPUTop__DOT__EX__DOT__mepc
                    : ((0x342U == (0xfffU & (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_Imm)))
                        ? vlSelf->CPUTop__DOT__EX__DOT__mcause
                        : ((0x304U == (0xfffU & (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_Imm)))
                            ? vlSelf->CPUTop__DOT__EX__DOT__mie
                            : ((0x344U == (0xfffU & (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_Imm)))
                                ? vlSelf->CPUTop__DOT__EX__DOT__mip
                                : 0ULL))))));
    if (vlSelf->CPUTop__DOT__ID__DOT__srctype2) {
        vlSelf->CPUTop__DOT__EX__DOT___GEN_3 = vlSelf->CPUTop__DOT__ID_io_ctrlIO_Imm;
        vlSelf->CPUTop__DOT__EX__DOT__src2 = vlSelf->CPUTop__DOT__EX__DOT___GEN_3;
    } else {
        vlSelf->CPUTop__DOT__EX__DOT___GEN_3 = 0ULL;
        vlSelf->CPUTop__DOT__EX__DOT__src2 = vlSelf->CPUTop__DOT__EX_io1_REG2;
    }
    vlSelf->CPUTop__DOT__EX__DOT___GEN_1 = ((2U == (IData)(vlSelf->CPUTop__DOT__ID__DOT___io_ctrlIO_src1type_T_2))
                                             ? vlSelf->CPUTop__DOT__IF__DOT__temp
                                             : 0ULL);
    vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_58 
        = ((0U == (IData)(vlSelf->CPUTop__DOT__ID__DOT___io_ctrlIO_src1type_T_2))
            ? vlSelf->CPUTop__DOT__EX_io1_REG1 : vlSelf->CPUTop__DOT__EX__DOT___GEN_1);
    vlSelf->CPUTop__DOT__EX__DOT___GEN_250 = ((0x6cU 
                                               == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                               ? (vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_58 
                                                  != vlSelf->CPUTop__DOT__EX__DOT__src2)
                                               : ((0x76U 
                                                   == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                   ? 
                                                  VL_GTES_IQQ(64, vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_58, vlSelf->CPUTop__DOT__EX__DOT__src2)
                                                   : 
                                                  ((0x7bU 
                                                    == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                    ? 
                                                   VL_LTS_IQQ(64, vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_58, vlSelf->CPUTop__DOT__EX__DOT__src2)
                                                    : 
                                                   ((0xbU 
                                                     == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                     ? 
                                                    (vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_58 
                                                     < vlSelf->CPUTop__DOT__EX__DOT__src2)
                                                     : 
                                                    ((0xcU 
                                                      == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                      ? 
                                                     (vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_58 
                                                      >= vlSelf->CPUTop__DOT__EX__DOT__src2)
                                                      : 
                                                     ((0x17U 
                                                       == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype)) 
                                                      | (0x18U 
                                                         == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))))))));
    vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_28 
        = (0x1ffffffffULL & VL_DIVS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,32, (IData)(vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_58))), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,32, (IData)(vlSelf->CPUTop__DOT__EX__DOT__src2)))));
    vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_38 
        = VL_MODDIVS_III(32, (IData)(vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_58), (IData)(vlSelf->CPUTop__DOT__EX__DOT__src2));
    vlSelf->CPUTop__DOT__EX__DOT___GEN_15 = VL_MODDIV_III(32, (IData)(vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_58), (IData)(vlSelf->CPUTop__DOT__EX__DOT__src2));
    vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_64 
        = VL_DIV_III(32, (IData)(vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_58), (IData)(vlSelf->CPUTop__DOT__EX__DOT__src2));
    VL_EXTEND_WQ(95,64, __Vtemp_hb04a9c46__0, vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_58);
    VL_SHIFTL_WWI(95,95,5, __Vtemp_h6d2d15ff__0, __Vtemp_hb04a9c46__0, 
                  (0x1fU & (IData)(vlSelf->CPUTop__DOT__EX__DOT__src2)));
    vlSelf->CPUTop__DOT__EX__DOT___shift_result_T_5[0U] 
        = __Vtemp_h6d2d15ff__0[0U];
    vlSelf->CPUTop__DOT__EX__DOT___shift_result_T_5[1U] 
        = __Vtemp_h6d2d15ff__0[1U];
    vlSelf->CPUTop__DOT__EX__DOT___shift_result_T_5[2U] 
        = (0x7fffffffU & __Vtemp_h6d2d15ff__0[2U]);
    VL_EXTEND_WI(95,32, __Vtemp_h34da3607__0, (IData)(vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_58));
    VL_SHIFTL_WWI(95,95,6, __Vtemp_h19e34a40__0, __Vtemp_h34da3607__0, 
                  (0x3fU & (IData)(vlSelf->CPUTop__DOT__EX__DOT__src2)));
    vlSelf->CPUTop__DOT__EX__DOT___shift_result_T_16[0U] 
        = __Vtemp_h19e34a40__0[0U];
    vlSelf->CPUTop__DOT__EX__DOT___shift_result_T_16[1U] 
        = __Vtemp_h19e34a40__0[1U];
    vlSelf->CPUTop__DOT__EX__DOT___shift_result_T_16[2U] 
        = (0x7fffffffU & __Vtemp_h19e34a40__0[2U]);
    vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_10 
        = (vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_58 
           - vlSelf->CPUTop__DOT__EX__DOT__src2);
    VL_EXTEND_WQ(128,64, __Vtemp_hb125646c__0, vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_58);
    VL_EXTEND_WQ(128,64, __Vtemp_haf3290ac__0, vlSelf->CPUTop__DOT__EX__DOT__src2);
    VL_MUL_W(4, __Vtemp_h7944d02d__0, __Vtemp_hb125646c__0, __Vtemp_haf3290ac__0);
    vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_19[0U] 
        = __Vtemp_h7944d02d__0[0U];
    vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_19[1U] 
        = __Vtemp_h7944d02d__0[1U];
    vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_19[2U] 
        = __Vtemp_h7944d02d__0[2U];
    vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_19[3U] 
        = __Vtemp_h7944d02d__0[3U];
    vlSelf->CPUTop__DOT__EX__DOT___T_163 = (vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_86 
                                            | vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_58);
    vlSelf->CPUTop__DOT__EX__DOT___shift_result_T_25 
        = VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_58), 
                         (0x1fU & (IData)(vlSelf->CPUTop__DOT__EX__DOT__src2)));
    vlSelf->CPUTop__DOT__EX__DOT___shift_result_T_31 
        = ((IData)(vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_58) 
           >> (0x1fU & (IData)(vlSelf->CPUTop__DOT__EX__DOT__src2)));
    vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_1 = 
        (vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_58 
         + vlSelf->CPUTop__DOT__EX__DOT__src2);
    vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_3 = 
        (vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_58 
         + vlSelf->CPUTop__DOT__ID_io_ctrlIO_Imm);
    vlSelf->CPUTop__DOT__EX__DOT___dnpc_T_9 = (((0x6bU 
                                                 == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                 ? 
                                                (vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_58 
                                                 == vlSelf->CPUTop__DOT__EX__DOT__src2)
                                                 : (IData)(vlSelf->CPUTop__DOT__EX__DOT___GEN_250))
                                                ? (
                                                   (0x6bU 
                                                    == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                    ? vlSelf->CPUTop__DOT__EX__DOT___branch_result_T_1
                                                    : 
                                                   ((0x6cU 
                                                     == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                     ? vlSelf->CPUTop__DOT__EX__DOT___branch_result_T_1
                                                     : 
                                                    ((0x76U 
                                                      == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                      ? vlSelf->CPUTop__DOT__EX__DOT___branch_result_T_1
                                                      : 
                                                     ((0x7bU 
                                                       == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                       ? vlSelf->CPUTop__DOT__EX__DOT___branch_result_T_1
                                                       : 
                                                      ((0xbU 
                                                        == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                        ? vlSelf->CPUTop__DOT__EX__DOT___branch_result_T_1
                                                        : 
                                                       ((0xcU 
                                                         == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                         ? vlSelf->CPUTop__DOT__EX__DOT___branch_result_T_1
                                                         : 0ULL))))))
                                                : (4ULL 
                                                   + vlSelf->CPUTop__DOT__IF__DOT__temp));
    VL_EXTENDS_WQ(65,64, __Vtemp_hb04aac35__0, vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_58);
    __Vtemp_h50a54222__0[0U] = __Vtemp_hb04aac35__0[0U];
    __Vtemp_h50a54222__0[1U] = __Vtemp_hb04aac35__0[1U];
    __Vtemp_h50a54222__0[2U] = (1U & __Vtemp_hb04aac35__0[2U]);
    VL_EXTENDS_WQ(65,64, __Vtemp_haf1887f5__0, vlSelf->CPUTop__DOT__EX__DOT__src2);
    __Vtemp_h00d1789c__0[0U] = __Vtemp_haf1887f5__0[0U];
    __Vtemp_h00d1789c__0[1U] = __Vtemp_haf1887f5__0[1U];
    __Vtemp_h00d1789c__0[2U] = (1U & __Vtemp_haf1887f5__0[2U]);
    VL_DIVS_WWW(65, __Vtemp_h8f84d91f__0, __Vtemp_h50a54222__0, __Vtemp_h00d1789c__0);
    if ((0x7aU == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))) {
        vlSelf->CPUTop__DOT__EX__DOT___GEN_151 = (((QData)((IData)(
                                                                   ((vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_38 
                                                                     >> 0x1fU)
                                                                     ? 0xffffffffU
                                                                     : 0U))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_38)));
        vlSelf->CPUTop__DOT__EX__DOT___GEN_154 = vlSelf->CPUTop__DOT__EX__DOT__mepc;
    } else if ((0xdU == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))) {
        vlSelf->CPUTop__DOT__EX__DOT___GEN_151 = (((QData)((IData)(
                                                                   ((vlSelf->CPUTop__DOT__EX__DOT___GEN_15 
                                                                     >> 0x1fU)
                                                                     ? 0xffffffffU
                                                                     : 0U))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelf->CPUTop__DOT__EX__DOT___GEN_15)));
        vlSelf->CPUTop__DOT__EX__DOT___GEN_154 = vlSelf->CPUTop__DOT__EX__DOT__mepc;
    } else if ((1U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))) {
        vlSelf->CPUTop__DOT__EX__DOT___GEN_151 = (((QData)((IData)(
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_10 
                                                                                >> 0x1fU)))
                                                                     ? 0xffffffffU
                                                                     : 0U))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_10)));
        vlSelf->CPUTop__DOT__EX__DOT___GEN_154 = vlSelf->CPUTop__DOT__EX__DOT__mepc;
    } else if ((7U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))) {
        vlSelf->CPUTop__DOT__EX__DOT___GEN_151 = (((QData)((IData)(
                                                                   vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_19[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_19[0U])));
        vlSelf->CPUTop__DOT__EX__DOT___GEN_154 = vlSelf->CPUTop__DOT__EX__DOT__mepc;
    } else if ((0xfU == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))) {
        vlSelf->CPUTop__DOT__EX__DOT___GEN_151 = VL_MODDIV_QQQ(64, vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_58, vlSelf->CPUTop__DOT__EX__DOT__src2);
        vlSelf->CPUTop__DOT__EX__DOT___GEN_154 = vlSelf->CPUTop__DOT__EX__DOT__mepc;
    } else if ((0x12U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))) {
        vlSelf->CPUTop__DOT__EX__DOT___GEN_151 = VL_MODDIVS_QQQ(64, vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_58, vlSelf->CPUTop__DOT__EX__DOT__src2);
        vlSelf->CPUTop__DOT__EX__DOT___GEN_154 = vlSelf->CPUTop__DOT__EX__DOT__mepc;
    } else if ((0x10U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))) {
        vlSelf->CPUTop__DOT__EX__DOT___GEN_151 = (((QData)((IData)(
                                                                   ((vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_64 
                                                                     >> 0x1fU)
                                                                     ? 0xffffffffU
                                                                     : 0U))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_64)));
        vlSelf->CPUTop__DOT__EX__DOT___GEN_154 = vlSelf->CPUTop__DOT__EX__DOT__mepc;
    } else if ((0x13U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))) {
        vlSelf->CPUTop__DOT__EX__DOT___GEN_151 = VL_DIV_QQQ(64, vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_58, vlSelf->CPUTop__DOT__EX__DOT__src2);
        vlSelf->CPUTop__DOT__EX__DOT___GEN_154 = vlSelf->CPUTop__DOT__EX__DOT__mepc;
    } else if ((0x43U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))) {
        vlSelf->CPUTop__DOT__EX__DOT___GEN_151 = (((QData)((IData)(
                                                                   __Vtemp_h8f84d91f__0[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    __Vtemp_h8f84d91f__0[0U])));
        vlSelf->CPUTop__DOT__EX__DOT___GEN_154 = vlSelf->CPUTop__DOT__EX__DOT__mepc;
    } else if ((0x15U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))) {
        vlSelf->CPUTop__DOT__EX__DOT___GEN_151 = vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_86;
        vlSelf->CPUTop__DOT__EX__DOT___GEN_154 = ((0x300U 
                                                   == 
                                                   (0xfffU 
                                                    & (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_Imm)))
                                                   ? vlSelf->CPUTop__DOT__EX__DOT__mepc
                                                   : 
                                                  ((0x305U 
                                                    == 
                                                    (0xfffU 
                                                     & (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_Imm)))
                                                    ? vlSelf->CPUTop__DOT__EX__DOT__mepc
                                                    : 
                                                   ((0x341U 
                                                     == 
                                                     (0xfffU 
                                                      & (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_Imm)))
                                                     ? vlSelf->CPUTop__DOT__EX__DOT___T_163
                                                     : vlSelf->CPUTop__DOT__EX__DOT__mepc)));
    } else if ((0x16U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))) {
        vlSelf->CPUTop__DOT__EX__DOT___GEN_151 = vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_86;
        vlSelf->CPUTop__DOT__EX__DOT___GEN_154 = ((0x300U 
                                                   == 
                                                   (0xfffU 
                                                    & (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_Imm)))
                                                   ? vlSelf->CPUTop__DOT__EX__DOT__mepc
                                                   : 
                                                  ((0x305U 
                                                    == 
                                                    (0xfffU 
                                                     & (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_Imm)))
                                                    ? vlSelf->CPUTop__DOT__EX__DOT__mepc
                                                    : 
                                                   ((0x341U 
                                                     == 
                                                     (0xfffU 
                                                      & (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_Imm)))
                                                     ? vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_58
                                                     : vlSelf->CPUTop__DOT__EX__DOT__mepc)));
    } else {
        vlSelf->CPUTop__DOT__EX__DOT___GEN_151 = 0ULL;
        vlSelf->CPUTop__DOT__EX__DOT___GEN_154 = vlSelf->CPUTop__DOT__EX__DOT__mepc;
    }
    vlSelf->CPUTop__DOT__EX__DOT___GEN_94 = ((0x15U 
                                              == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                              ? ((0x300U 
                                                  == 
                                                  (0xfffU 
                                                   & (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_Imm)))
                                                  ? vlSelf->CPUTop__DOT__EX__DOT__mip
                                                  : 
                                                 ((0x305U 
                                                   == 
                                                   (0xfffU 
                                                    & (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_Imm)))
                                                   ? vlSelf->CPUTop__DOT__EX__DOT__mip
                                                   : 
                                                  ((0x341U 
                                                    == 
                                                    (0xfffU 
                                                     & (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_Imm)))
                                                    ? vlSelf->CPUTop__DOT__EX__DOT__mip
                                                    : 
                                                   ((0x342U 
                                                     == 
                                                     (0xfffU 
                                                      & (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_Imm)))
                                                     ? vlSelf->CPUTop__DOT__EX__DOT__mip
                                                     : 
                                                    ((0x304U 
                                                      == 
                                                      (0xfffU 
                                                       & (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_Imm)))
                                                      ? vlSelf->CPUTop__DOT__EX__DOT__mip
                                                      : 
                                                     ((0x344U 
                                                       == 
                                                       (0xfffU 
                                                        & (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_Imm)))
                                                       ? vlSelf->CPUTop__DOT__EX__DOT___T_163
                                                       : vlSelf->CPUTop__DOT__EX__DOT__mip))))))
                                              : ((0x16U 
                                                  == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                  ? 
                                                 ((0x300U 
                                                   == 
                                                   (0xfffU 
                                                    & (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_Imm)))
                                                   ? vlSelf->CPUTop__DOT__EX__DOT__mip
                                                   : 
                                                  ((0x305U 
                                                    == 
                                                    (0xfffU 
                                                     & (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_Imm)))
                                                    ? vlSelf->CPUTop__DOT__EX__DOT__mip
                                                    : 
                                                   ((0x341U 
                                                     == 
                                                     (0xfffU 
                                                      & (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_Imm)))
                                                     ? vlSelf->CPUTop__DOT__EX__DOT__mip
                                                     : 
                                                    ((0x342U 
                                                      == 
                                                      (0xfffU 
                                                       & (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_Imm)))
                                                      ? vlSelf->CPUTop__DOT__EX__DOT__mip
                                                      : 
                                                     ((0x304U 
                                                       == 
                                                       (0xfffU 
                                                        & (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_Imm)))
                                                       ? vlSelf->CPUTop__DOT__EX__DOT__mip
                                                       : 
                                                      ((0x344U 
                                                        == 
                                                        (0xfffU 
                                                         & (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_Imm)))
                                                        ? vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_58
                                                        : vlSelf->CPUTop__DOT__EX__DOT__mip))))))
                                                  : vlSelf->CPUTop__DOT__EX__DOT__mip));
    vlSelf->CPUTop__DOT__EX__DOT___GEN_114 = ((0x10U 
                                               == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                               ? vlSelf->CPUTop__DOT__EX__DOT__mie
                                               : ((0x13U 
                                                   == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                   ? vlSelf->CPUTop__DOT__EX__DOT__mie
                                                   : 
                                                  ((0x43U 
                                                    == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                    ? vlSelf->CPUTop__DOT__EX__DOT__mie
                                                    : 
                                                   ((0x15U 
                                                     == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                     ? 
                                                    ((0x300U 
                                                      == 
                                                      (0xfffU 
                                                       & (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_Imm)))
                                                      ? vlSelf->CPUTop__DOT__EX__DOT__mie
                                                      : 
                                                     ((0x305U 
                                                       == 
                                                       (0xfffU 
                                                        & (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_Imm)))
                                                       ? vlSelf->CPUTop__DOT__EX__DOT__mie
                                                       : 
                                                      ((0x341U 
                                                        == 
                                                        (0xfffU 
                                                         & (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_Imm)))
                                                        ? vlSelf->CPUTop__DOT__EX__DOT__mie
                                                        : 
                                                       ((0x342U 
                                                         == 
                                                         (0xfffU 
                                                          & (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_Imm)))
                                                         ? vlSelf->CPUTop__DOT__EX__DOT__mie
                                                         : 
                                                        ((0x304U 
                                                          == 
                                                          (0xfffU 
                                                           & (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_Imm)))
                                                          ? vlSelf->CPUTop__DOT__EX__DOT___T_163
                                                          : vlSelf->CPUTop__DOT__EX__DOT__mie)))))
                                                     : 
                                                    ((0x16U 
                                                      == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                      ? 
                                                     ((0x300U 
                                                       == 
                                                       (0xfffU 
                                                        & (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_Imm)))
                                                       ? vlSelf->CPUTop__DOT__EX__DOT__mie
                                                       : 
                                                      ((0x305U 
                                                        == 
                                                        (0xfffU 
                                                         & (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_Imm)))
                                                        ? vlSelf->CPUTop__DOT__EX__DOT__mie
                                                        : 
                                                       ((0x341U 
                                                         == 
                                                         (0xfffU 
                                                          & (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_Imm)))
                                                         ? vlSelf->CPUTop__DOT__EX__DOT__mie
                                                         : 
                                                        ((0x342U 
                                                          == 
                                                          (0xfffU 
                                                           & (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_Imm)))
                                                          ? vlSelf->CPUTop__DOT__EX__DOT__mie
                                                          : 
                                                         ((0x304U 
                                                           == 
                                                           (0xfffU 
                                                            & (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_Imm)))
                                                           ? vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_58
                                                           : vlSelf->CPUTop__DOT__EX__DOT__mie)))))
                                                      : vlSelf->CPUTop__DOT__EX__DOT__mie)))));
    vlSelf->CPUTop__DOT__EX__DOT___GEN_134 = ((7U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                               ? vlSelf->CPUTop__DOT__EX__DOT__mcause
                                               : ((0xfU 
                                                   == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                   ? vlSelf->CPUTop__DOT__EX__DOT__mcause
                                                   : 
                                                  ((0x12U 
                                                    == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                    ? vlSelf->CPUTop__DOT__EX__DOT__mcause
                                                    : 
                                                   ((0x10U 
                                                     == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                     ? vlSelf->CPUTop__DOT__EX__DOT__mcause
                                                     : 
                                                    ((0x13U 
                                                      == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                      ? vlSelf->CPUTop__DOT__EX__DOT__mcause
                                                      : 
                                                     ((0x43U 
                                                       == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                       ? vlSelf->CPUTop__DOT__EX__DOT__mcause
                                                       : 
                                                      ((0x15U 
                                                        == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                        ? 
                                                       ((0x300U 
                                                         == 
                                                         (0xfffU 
                                                          & (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_Imm)))
                                                         ? vlSelf->CPUTop__DOT__EX__DOT__mcause
                                                         : 
                                                        ((0x305U 
                                                          == 
                                                          (0xfffU 
                                                           & (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_Imm)))
                                                          ? vlSelf->CPUTop__DOT__EX__DOT__mcause
                                                          : 
                                                         ((0x341U 
                                                           == 
                                                           (0xfffU 
                                                            & (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_Imm)))
                                                           ? vlSelf->CPUTop__DOT__EX__DOT__mcause
                                                           : 
                                                          ((0x342U 
                                                            == 
                                                            (0xfffU 
                                                             & (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_Imm)))
                                                            ? vlSelf->CPUTop__DOT__EX__DOT___T_163
                                                            : vlSelf->CPUTop__DOT__EX__DOT__mcause))))
                                                        : 
                                                       ((0x16U 
                                                         == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                         ? 
                                                        ((0x300U 
                                                          == 
                                                          (0xfffU 
                                                           & (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_Imm)))
                                                          ? vlSelf->CPUTop__DOT__EX__DOT__mcause
                                                          : 
                                                         ((0x305U 
                                                           == 
                                                           (0xfffU 
                                                            & (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_Imm)))
                                                           ? vlSelf->CPUTop__DOT__EX__DOT__mcause
                                                           : 
                                                          ((0x341U 
                                                            == 
                                                            (0xfffU 
                                                             & (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_Imm)))
                                                            ? vlSelf->CPUTop__DOT__EX__DOT__mcause
                                                            : 
                                                           ((0x342U 
                                                             == 
                                                             (0xfffU 
                                                              & (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_Imm)))
                                                             ? vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_58
                                                             : vlSelf->CPUTop__DOT__EX__DOT__mcause))))
                                                         : vlSelf->CPUTop__DOT__EX__DOT__mcause))))))));
    vlSelf->CPUTop__DOT__EX__DOT___GEN_181 = ((0x72U 
                                               == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                               ? vlSelf->CPUTop__DOT__EX__DOT__mtvec
                                               : ((0x6dU 
                                                   == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                   ? vlSelf->CPUTop__DOT__EX__DOT__mtvec
                                                   : 
                                                  ((0x78U 
                                                    == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                    ? vlSelf->CPUTop__DOT__EX__DOT__mtvec
                                                    : 
                                                   ((0x79U 
                                                     == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                     ? vlSelf->CPUTop__DOT__EX__DOT__mtvec
                                                     : 
                                                    ((0x7aU 
                                                      == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                      ? vlSelf->CPUTop__DOT__EX__DOT__mtvec
                                                      : 
                                                     ((0xdU 
                                                       == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                       ? vlSelf->CPUTop__DOT__EX__DOT__mtvec
                                                       : 
                                                      ((1U 
                                                        == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                        ? vlSelf->CPUTop__DOT__EX__DOT__mtvec
                                                        : 
                                                       ((7U 
                                                         == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                         ? vlSelf->CPUTop__DOT__EX__DOT__mtvec
                                                         : 
                                                        ((0xfU 
                                                          == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                          ? vlSelf->CPUTop__DOT__EX__DOT__mtvec
                                                          : 
                                                         ((0x12U 
                                                           == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                           ? vlSelf->CPUTop__DOT__EX__DOT__mtvec
                                                           : 
                                                          ((0x10U 
                                                            == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                            ? vlSelf->CPUTop__DOT__EX__DOT__mtvec
                                                            : 
                                                           ((0x13U 
                                                             == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                             ? vlSelf->CPUTop__DOT__EX__DOT__mtvec
                                                             : 
                                                            ((0x43U 
                                                              == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                              ? vlSelf->CPUTop__DOT__EX__DOT__mtvec
                                                              : 
                                                             ((0x15U 
                                                               == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                               ? 
                                                              ((0x300U 
                                                                == 
                                                                (0xfffU 
                                                                 & (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_Imm)))
                                                                ? vlSelf->CPUTop__DOT__EX__DOT__mtvec
                                                                : 
                                                               ((0x305U 
                                                                 == 
                                                                 (0xfffU 
                                                                  & (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_Imm)))
                                                                 ? vlSelf->CPUTop__DOT__EX__DOT___T_163
                                                                 : vlSelf->CPUTop__DOT__EX__DOT__mtvec))
                                                               : 
                                                              ((0x16U 
                                                                == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                                ? 
                                                               ((0x300U 
                                                                 == 
                                                                 (0xfffU 
                                                                  & (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_Imm)))
                                                                 ? vlSelf->CPUTop__DOT__EX__DOT__mtvec
                                                                 : 
                                                                ((0x305U 
                                                                  == 
                                                                  (0xfffU 
                                                                   & (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_Imm)))
                                                                  ? vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_58
                                                                  : vlSelf->CPUTop__DOT__EX__DOT__mtvec))
                                                                : vlSelf->CPUTop__DOT__EX__DOT__mtvec)))))))))))))));
    if ((0x69U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))) {
        vlSelf->CPUTop__DOT__EX__DOT___GEN_194 = vlSelf->CPUTop__DOT__EX__DOT__mstatus;
        vlSelf->CPUTop__DOT__EX__DOT___GEN_198 = vlSelf->CPUTop__DOT__EX__DOT__mie;
        vlSelf->CPUTop__DOT__EX__DOT___GEN_195 = vlSelf->CPUTop__DOT__EX__DOT__mtvec;
    } else if ((0x71U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))) {
        vlSelf->CPUTop__DOT__EX__DOT___GEN_194 = vlSelf->CPUTop__DOT__EX__DOT__mstatus;
        vlSelf->CPUTop__DOT__EX__DOT___GEN_198 = vlSelf->CPUTop__DOT__EX__DOT__mie;
        vlSelf->CPUTop__DOT__EX__DOT___GEN_195 = vlSelf->CPUTop__DOT__EX__DOT__mtvec;
    } else {
        if ((0x72U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))) {
            vlSelf->CPUTop__DOT__EX__DOT___GEN_194 
                = vlSelf->CPUTop__DOT__EX__DOT__mstatus;
            vlSelf->CPUTop__DOT__EX__DOT___GEN_198 
                = vlSelf->CPUTop__DOT__EX__DOT__mie;
        } else if ((0x6dU == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))) {
            vlSelf->CPUTop__DOT__EX__DOT___GEN_194 
                = vlSelf->CPUTop__DOT__EX__DOT__mstatus;
            vlSelf->CPUTop__DOT__EX__DOT___GEN_198 
                = vlSelf->CPUTop__DOT__EX__DOT__mie;
        } else if ((0x78U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))) {
            vlSelf->CPUTop__DOT__EX__DOT___GEN_194 
                = vlSelf->CPUTop__DOT__EX__DOT__mstatus;
            vlSelf->CPUTop__DOT__EX__DOT___GEN_198 
                = vlSelf->CPUTop__DOT__EX__DOT__mie;
        } else if ((0x79U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))) {
            vlSelf->CPUTop__DOT__EX__DOT___GEN_194 
                = vlSelf->CPUTop__DOT__EX__DOT__mstatus;
            vlSelf->CPUTop__DOT__EX__DOT___GEN_198 
                = vlSelf->CPUTop__DOT__EX__DOT__mie;
        } else if ((0x7aU == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))) {
            vlSelf->CPUTop__DOT__EX__DOT___GEN_194 
                = vlSelf->CPUTop__DOT__EX__DOT__mstatus;
            vlSelf->CPUTop__DOT__EX__DOT___GEN_198 
                = vlSelf->CPUTop__DOT__EX__DOT__mie;
        } else if ((0xdU == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))) {
            vlSelf->CPUTop__DOT__EX__DOT___GEN_194 
                = vlSelf->CPUTop__DOT__EX__DOT__mstatus;
            vlSelf->CPUTop__DOT__EX__DOT___GEN_198 
                = vlSelf->CPUTop__DOT__EX__DOT__mie;
        } else if ((1U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))) {
            vlSelf->CPUTop__DOT__EX__DOT___GEN_194 
                = vlSelf->CPUTop__DOT__EX__DOT__mstatus;
            vlSelf->CPUTop__DOT__EX__DOT___GEN_198 
                = vlSelf->CPUTop__DOT__EX__DOT__mie;
        } else if ((7U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))) {
            vlSelf->CPUTop__DOT__EX__DOT___GEN_194 
                = vlSelf->CPUTop__DOT__EX__DOT__mstatus;
            vlSelf->CPUTop__DOT__EX__DOT___GEN_198 
                = vlSelf->CPUTop__DOT__EX__DOT__mie;
        } else if ((0xfU == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))) {
            vlSelf->CPUTop__DOT__EX__DOT___GEN_194 
                = vlSelf->CPUTop__DOT__EX__DOT__mstatus;
            vlSelf->CPUTop__DOT__EX__DOT___GEN_198 
                = vlSelf->CPUTop__DOT__EX__DOT__mie;
        } else if ((0x12U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))) {
            vlSelf->CPUTop__DOT__EX__DOT___GEN_194 
                = vlSelf->CPUTop__DOT__EX__DOT__mstatus;
            vlSelf->CPUTop__DOT__EX__DOT___GEN_198 
                = vlSelf->CPUTop__DOT__EX__DOT__mie;
        } else {
            vlSelf->CPUTop__DOT__EX__DOT___GEN_194 
                = ((0x10U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                    ? vlSelf->CPUTop__DOT__EX__DOT__mstatus
                    : ((0x13U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                        ? vlSelf->CPUTop__DOT__EX__DOT__mstatus
                        : ((0x43U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                            ? vlSelf->CPUTop__DOT__EX__DOT__mstatus
                            : ((0x15U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                ? ((0x300U == (0xfffU 
                                               & (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_Imm)))
                                    ? vlSelf->CPUTop__DOT__EX__DOT___T_163
                                    : vlSelf->CPUTop__DOT__EX__DOT__mstatus)
                                : ((0x16U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                    ? ((0x300U == (0xfffU 
                                                   & (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_Imm)))
                                        ? vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_58
                                        : vlSelf->CPUTop__DOT__EX__DOT__mstatus)
                                    : vlSelf->CPUTop__DOT__EX__DOT__mstatus)))));
            vlSelf->CPUTop__DOT__EX__DOT___GEN_198 
                = vlSelf->CPUTop__DOT__EX__DOT___GEN_114;
        }
        vlSelf->CPUTop__DOT__EX__DOT___GEN_195 = vlSelf->CPUTop__DOT__EX__DOT___GEN_181;
    }
    vlSelf->CPUTop__DOT__EX__DOT___shift_result_T_28 
        = (((QData)((IData)(((vlSelf->CPUTop__DOT__EX__DOT___shift_result_T_25 
                              >> 0x1fU) ? 0xffffffffU
                              : 0U))) << 0x20U) | (QData)((IData)(vlSelf->CPUTop__DOT__EX__DOT___shift_result_T_25)));
    vlSelf->CPUTop__DOT__EX__DOT___shift_result_T_35 
        = (((QData)((IData)(((vlSelf->CPUTop__DOT__EX__DOT___shift_result_T_31 
                              >> 0x1fU) ? 0xffffffffU
                              : 0U))) << 0x20U) | (QData)((IData)(vlSelf->CPUTop__DOT__EX__DOT___shift_result_T_31)));
    vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_7 = 
        (((QData)((IData)(((1U & (IData)((vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_1 
                                          >> 0x1fU)))
                            ? 0xffffffffU : 0U))) << 0x20U) 
         | (QData)((IData)(vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_1)));
    if ((0x44U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))) {
        vlSelf->CPUTop__DOT__EX__DOT___GEN_206 = vlSelf->CPUTop__DOT__EX__DOT__mip;
        vlSelf->CPUTop__DOT__EX__DOT___GEN_203 = vlSelf->CPUTop__DOT__EX__DOT__mepc;
    } else if ((0x69U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))) {
        vlSelf->CPUTop__DOT__EX__DOT___GEN_206 = vlSelf->CPUTop__DOT__EX__DOT__mip;
        vlSelf->CPUTop__DOT__EX__DOT___GEN_203 = vlSelf->CPUTop__DOT__EX__DOT__mepc;
    } else if ((0x71U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))) {
        vlSelf->CPUTop__DOT__EX__DOT___GEN_206 = vlSelf->CPUTop__DOT__EX__DOT__mip;
        vlSelf->CPUTop__DOT__EX__DOT___GEN_203 = vlSelf->CPUTop__DOT__EX__DOT__mepc;
    } else if ((0x72U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))) {
        vlSelf->CPUTop__DOT__EX__DOT___GEN_206 = vlSelf->CPUTop__DOT__EX__DOT__mip;
        vlSelf->CPUTop__DOT__EX__DOT___GEN_203 = vlSelf->CPUTop__DOT__EX__DOT__mepc;
    } else if ((0x6dU == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))) {
        vlSelf->CPUTop__DOT__EX__DOT___GEN_206 = vlSelf->CPUTop__DOT__EX__DOT__mip;
        vlSelf->CPUTop__DOT__EX__DOT___GEN_203 = vlSelf->CPUTop__DOT__EX__DOT__mepc;
    } else if ((0x78U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))) {
        vlSelf->CPUTop__DOT__EX__DOT___GEN_206 = vlSelf->CPUTop__DOT__EX__DOT__mip;
        vlSelf->CPUTop__DOT__EX__DOT___GEN_203 = vlSelf->CPUTop__DOT__EX__DOT__mepc;
    } else if ((0x79U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))) {
        vlSelf->CPUTop__DOT__EX__DOT___GEN_206 = vlSelf->CPUTop__DOT__EX__DOT__mip;
        vlSelf->CPUTop__DOT__EX__DOT___GEN_203 = vlSelf->CPUTop__DOT__EX__DOT__mepc;
    } else {
        vlSelf->CPUTop__DOT__EX__DOT___GEN_206 = ((0x7aU 
                                                   == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                   ? vlSelf->CPUTop__DOT__EX__DOT__mip
                                                   : 
                                                  ((0xdU 
                                                    == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                    ? vlSelf->CPUTop__DOT__EX__DOT__mip
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                     ? vlSelf->CPUTop__DOT__EX__DOT__mip
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                      ? vlSelf->CPUTop__DOT__EX__DOT__mip
                                                      : 
                                                     ((0xfU 
                                                       == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                       ? vlSelf->CPUTop__DOT__EX__DOT__mip
                                                       : 
                                                      ((0x12U 
                                                        == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                        ? vlSelf->CPUTop__DOT__EX__DOT__mip
                                                        : 
                                                       ((0x10U 
                                                         == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                         ? vlSelf->CPUTop__DOT__EX__DOT__mip
                                                         : 
                                                        ((0x13U 
                                                          == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                          ? vlSelf->CPUTop__DOT__EX__DOT__mip
                                                          : 
                                                         ((0x43U 
                                                           == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                           ? vlSelf->CPUTop__DOT__EX__DOT__mip
                                                           : vlSelf->CPUTop__DOT__EX__DOT___GEN_94)))))))));
        vlSelf->CPUTop__DOT__EX__DOT___GEN_203 = vlSelf->CPUTop__DOT__EX__DOT___GEN_154;
    }
    vlSelf->CPUTop__DOT__EX__DOT___GEN_211 = ((0x68U 
                                               == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                               ? vlSelf->CPUTop__DOT__EX__DOT__mcause
                                               : ((0x44U 
                                                   == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                   ? vlSelf->CPUTop__DOT__EX__DOT__mcause
                                                   : 
                                                  ((0x69U 
                                                    == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                    ? vlSelf->CPUTop__DOT__EX__DOT__mcause
                                                    : 
                                                   ((0x71U 
                                                     == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                     ? vlSelf->CPUTop__DOT__EX__DOT__mcause
                                                     : 
                                                    ((0x72U 
                                                      == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                      ? vlSelf->CPUTop__DOT__EX__DOT__mcause
                                                      : 
                                                     ((0x6dU 
                                                       == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                       ? vlSelf->CPUTop__DOT__EX__DOT__mcause
                                                       : 
                                                      ((0x78U 
                                                        == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                        ? vlSelf->CPUTop__DOT__EX__DOT__mcause
                                                        : 
                                                       ((0x79U 
                                                         == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                         ? vlSelf->CPUTop__DOT__EX__DOT__mcause
                                                         : 
                                                        ((0x7aU 
                                                          == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                          ? vlSelf->CPUTop__DOT__EX__DOT__mcause
                                                          : 
                                                         ((0xdU 
                                                           == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                           ? vlSelf->CPUTop__DOT__EX__DOT__mcause
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                            ? vlSelf->CPUTop__DOT__EX__DOT__mcause
                                                            : vlSelf->CPUTop__DOT__EX__DOT___GEN_134)))))))))));
    vlSelf->CPUTop__DOT__EX__DOT___GEN_14 = ((0x46U 
                                              == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                              ? vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_3
                                              : ((0x70U 
                                                  == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                  ? vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_3
                                                  : 
                                                 ((0x47U 
                                                   == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                   ? vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_3
                                                   : 
                                                  ((0x11U 
                                                    == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                    ? vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_3
                                                    : 
                                                   ((0x6fU 
                                                     == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                     ? vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_3
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                      ? vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_3
                                                      : 
                                                     ((0x74U 
                                                       == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                       ? vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_3
                                                       : 
                                                      ((0x77U 
                                                        == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                        ? vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_3
                                                        : 
                                                       ((3U 
                                                         == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                         ? vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_3
                                                         : 
                                                        ((4U 
                                                          == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                          ? vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_3
                                                          : 0ULL))))))))));
    vlSelf->CPUTop__DOT__EX_io1_addr = ((0x45U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                         ? vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_1
                                         : vlSelf->CPUTop__DOT__EX__DOT___GEN_14);
    vlSelf->CPUTop__DOT__mmio__DOT__flag = ((0x4000U 
                                             == (0xffffU 
                                                 & (IData)(
                                                           (vlSelf->CPUTop__DOT__EX_io1_addr 
                                                            >> 0x30U)))) 
                                            | (0xbff8U 
                                               == (0xffffU 
                                                   & (IData)(
                                                             (vlSelf->CPUTop__DOT__EX_io1_addr 
                                                              >> 0x30U)))));
    vlSelf->CPUTop__DOT__EX__DOT___GEN_28 = ((0x70U 
                                              == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                              ? ((0U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelf->CPUTop__DOT__EX_io1_addr 
                                                              >> 1U))))
                                                  ? 3U
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelf->CPUTop__DOT__EX_io1_addr 
                                                               >> 1U))))
                                                   ? 0xcU
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelf->CPUTop__DOT__EX_io1_addr 
                                                                >> 1U))))
                                                    ? 0x30U
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (3U 
                                                      & (IData)(
                                                                (vlSelf->CPUTop__DOT__EX_io1_addr 
                                                                 >> 1U))))
                                                     ? 0xc0U
                                                     : 0U))))
                                              : ((0x74U 
                                                  == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                  ? 
                                                 ((0U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelf->CPUTop__DOT__EX_io1_addr)))
                                                   ? 1U
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelf->CPUTop__DOT__EX_io1_addr)))
                                                    ? 2U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & (IData)(vlSelf->CPUTop__DOT__EX_io1_addr)))
                                                     ? 4U
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (7U 
                                                       & (IData)(vlSelf->CPUTop__DOT__EX_io1_addr)))
                                                      ? 8U
                                                      : 
                                                     ((4U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSelf->CPUTop__DOT__EX_io1_addr)))
                                                       ? 0x10U
                                                       : 
                                                      ((5U 
                                                        == 
                                                        (7U 
                                                         & (IData)(vlSelf->CPUTop__DOT__EX_io1_addr)))
                                                        ? 0x20U
                                                        : 
                                                       ((6U 
                                                         == 
                                                         (7U 
                                                          & (IData)(vlSelf->CPUTop__DOT__EX_io1_addr)))
                                                         ? 0x40U
                                                         : 
                                                        ((7U 
                                                          == 
                                                          (7U 
                                                           & (IData)(vlSelf->CPUTop__DOT__EX_io1_addr)))
                                                          ? 0x80U
                                                          : 0U))))))))
                                                  : 
                                                 ((0x77U 
                                                   == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->CPUTop__DOT__EX_io1_addr 
                                                               >> 2U)))
                                                    ? 0xf0U
                                                    : 0xfU)
                                                   : 0U)));
    vlSelf->CPUTop__DOT__EX__DOT___wdata_temp_T_21 
        = ((0U == (7U & (IData)(vlSelf->CPUTop__DOT__EX_io1_addr)))
            ? (QData)((IData)((0xffU & (IData)(vlSelf->CPUTop__DOT__EX__DOT__src2))))
            : ((1U == (7U & (IData)(vlSelf->CPUTop__DOT__EX_io1_addr)))
                ? ((QData)((IData)((0xffU & (IData)(vlSelf->CPUTop__DOT__EX__DOT__src2)))) 
                   << 8U) : ((2U == (7U & (IData)(vlSelf->CPUTop__DOT__EX_io1_addr)))
                              ? ((QData)((IData)((0xffU 
                                                  & (IData)(vlSelf->CPUTop__DOT__EX__DOT__src2)))) 
                                 << 0x10U) : ((3U == 
                                               (7U 
                                                & (IData)(vlSelf->CPUTop__DOT__EX_io1_addr)))
                                               ? ((QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(vlSelf->CPUTop__DOT__EX__DOT__src2)))) 
                                                  << 0x18U)
                                               : ((4U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelf->CPUTop__DOT__EX_io1_addr)))
                                                   ? 
                                                  ((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->CPUTop__DOT__EX__DOT__src2)))) 
                                                   << 0x20U)
                                                   : 
                                                  ((5U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelf->CPUTop__DOT__EX_io1_addr)))
                                                    ? 
                                                   ((QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(vlSelf->CPUTop__DOT__EX__DOT__src2)))) 
                                                    << 0x28U)
                                                    : 
                                                   ((6U 
                                                     == 
                                                     (7U 
                                                      & (IData)(vlSelf->CPUTop__DOT__EX_io1_addr)))
                                                     ? 
                                                    ((QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(vlSelf->CPUTop__DOT__EX__DOT__src2)))) 
                                                     << 0x30U)
                                                     : 
                                                    ((7U 
                                                      == 
                                                      (7U 
                                                       & (IData)(vlSelf->CPUTop__DOT__EX_io1_addr)))
                                                      ? 
                                                     ((QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(vlSelf->CPUTop__DOT__EX__DOT__src2)))) 
                                                      << 0x38U)
                                                      : 0ULL))))))));
    vlSelf->CPUTop__DOT__EX_io1_wdata = ((0x46U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                          ? vlSelf->CPUTop__DOT__EX__DOT__src2
                                          : ((0x70U 
                                              == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                              ? ((0U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelf->CPUTop__DOT__EX_io1_addr 
                                                              >> 1U))))
                                                  ? (QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->CPUTop__DOT__EX__DOT__src2))))
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelf->CPUTop__DOT__EX_io1_addr 
                                                               >> 1U))))
                                                   ? 
                                                  ((QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->CPUTop__DOT__EX__DOT__src2)))) 
                                                   << 0x10U)
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelf->CPUTop__DOT__EX_io1_addr 
                                                                >> 1U))))
                                                    ? 
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->CPUTop__DOT__EX__DOT__src2)))) 
                                                    << 0x20U)
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (3U 
                                                      & (IData)(
                                                                (vlSelf->CPUTop__DOT__EX_io1_addr 
                                                                 >> 1U))))
                                                     ? 
                                                    ((QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(vlSelf->CPUTop__DOT__EX__DOT__src2)))) 
                                                     << 0x30U)
                                                     : 0ULL))))
                                              : ((0x74U 
                                                  == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                  ? vlSelf->CPUTop__DOT__EX__DOT___wdata_temp_T_21
                                                  : 
                                                 ((0x77U 
                                                   == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->CPUTop__DOT__EX_io1_addr 
                                                               >> 2U)))
                                                    ? 
                                                   ((QData)((IData)(vlSelf->CPUTop__DOT__EX__DOT__src2)) 
                                                    << 0x20U)
                                                    : (QData)((IData)(vlSelf->CPUTop__DOT__EX__DOT__src2)))
                                                   : 0ULL))));
    if ((1U & ((IData)(vlSelf->reset) | (~ (IData)(vlSelf->clock))))) {
        vlSelf->CPUTop__DOT__mem_rdata = 0ULL;
    } else if (((0x4000U != (0xffffU & (IData)((vlSelf->CPUTop__DOT__EX_io1_addr 
                                                >> 0x30U)))) 
                & ((0xbff8U != (0xffffU & (IData)((vlSelf->CPUTop__DOT__EX_io1_addr 
                                                   >> 0x30U)))) 
                   & (4U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype))))) {
        if (vlSelf->CPUTop__DOT__ID__DOT___io_mem_we_T_12) {
            VCPUTop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->CPUTop__DOT__EX_io1_addr, vlSelf->__Vtask_pmem_read__5__rdata);
            vlSelf->CPUTop__DOT__mem_rdata = vlSelf->__Vtask_pmem_read__5__rdata;
        } else {
            VCPUTop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(vlSelf->CPUTop__DOT__EX_io1_addr, vlSelf->CPUTop__DOT__EX_io1_wdata, 
                                                                      ((0x46U 
                                                                        == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                                        ? 0xffU
                                                                        : (IData)(vlSelf->CPUTop__DOT__EX__DOT___GEN_28)));
            vlSelf->CPUTop__DOT__mem_rdata = 0ULL;
        }
    } else {
        vlSelf->CPUTop__DOT__mem_rdata = 0ULL;
    }
    vlSelf->CPUTop__DOT__mmio_io_rdata = ((IData)(vlSelf->CPUTop__DOT__mmio__DOT__flag)
                                           ? ((0x4000U 
                                               == (0xffffU 
                                                   & (IData)(
                                                             (vlSelf->CPUTop__DOT__EX_io1_addr 
                                                              >> 0x30U))))
                                               ? vlSelf->CPUTop__DOT__mmio__DOT__mtimecmp
                                               : ((0xbff8U 
                                                   == 
                                                   (0xffffU 
                                                    & (IData)(
                                                              (vlSelf->CPUTop__DOT__EX_io1_addr 
                                                               >> 0x30U))))
                                                   ? vlSelf->CPUTop__DOT__mmio__DOT__mtime
                                                   : 0ULL))
                                           : vlSelf->CPUTop__DOT__mem_rdata);
    vlSelf->CPUTop__DOT__EX__DOT___mem_result_T_28 
        = (0xffU & ((0U == (7U & (IData)(vlSelf->CPUTop__DOT__EX_io1_addr)))
                     ? (IData)(vlSelf->CPUTop__DOT__mmio_io_rdata)
                     : ((1U == (7U & (IData)(vlSelf->CPUTop__DOT__EX_io1_addr)))
                         ? (IData)((vlSelf->CPUTop__DOT__mmio_io_rdata 
                                    >> 8U)) : ((2U 
                                                == 
                                                (7U 
                                                 & (IData)(vlSelf->CPUTop__DOT__EX_io1_addr)))
                                                ? (IData)(
                                                          (vlSelf->CPUTop__DOT__mmio_io_rdata 
                                                           >> 0x10U))
                                                : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelf->CPUTop__DOT__EX_io1_addr)))
                                                    ? (IData)(
                                                              (vlSelf->CPUTop__DOT__mmio_io_rdata 
                                                               >> 0x18U))
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (7U 
                                                      & (IData)(vlSelf->CPUTop__DOT__EX_io1_addr)))
                                                     ? (IData)(
                                                               (vlSelf->CPUTop__DOT__mmio_io_rdata 
                                                                >> 0x20U))
                                                     : 
                                                    ((5U 
                                                      == 
                                                      (7U 
                                                       & (IData)(vlSelf->CPUTop__DOT__EX_io1_addr)))
                                                      ? (IData)(
                                                                (vlSelf->CPUTop__DOT__mmio_io_rdata 
                                                                 >> 0x28U))
                                                      : 
                                                     ((6U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSelf->CPUTop__DOT__EX_io1_addr)))
                                                       ? (IData)(
                                                                 (vlSelf->CPUTop__DOT__mmio_io_rdata 
                                                                  >> 0x30U))
                                                       : 
                                                      ((7U 
                                                        == 
                                                        (7U 
                                                         & (IData)(vlSelf->CPUTop__DOT__EX_io1_addr)))
                                                        ? (IData)(
                                                                  (vlSelf->CPUTop__DOT__mmio_io_rdata 
                                                                   >> 0x38U))
                                                        : 0U)))))))));
    vlSelf->CPUTop__DOT__EX__DOT___mem_result_T_9 = 
        (((QData)((IData)(((1U & (IData)((vlSelf->CPUTop__DOT__mmio_io_rdata 
                                          >> 0x1fU)))
                            ? 0xffffffffU : 0U))) << 0x20U) 
         | (QData)((IData)(vlSelf->CPUTop__DOT__mmio_io_rdata)));
    vlSelf->CPUTop__DOT__EX__DOT___mem_result_T_45 
        = (0xffffU & ((0U == (3U & (IData)((vlSelf->CPUTop__DOT__EX_io1_addr 
                                            >> 1U))))
                       ? (IData)(vlSelf->CPUTop__DOT__mmio_io_rdata)
                       : ((1U == (3U & (IData)((vlSelf->CPUTop__DOT__EX_io1_addr 
                                                >> 1U))))
                           ? (IData)((vlSelf->CPUTop__DOT__mmio_io_rdata 
                                      >> 0x10U)) : 
                          ((2U == (3U & (IData)((vlSelf->CPUTop__DOT__EX_io1_addr 
                                                 >> 1U))))
                            ? (IData)((vlSelf->CPUTop__DOT__mmio_io_rdata 
                                       >> 0x20U)) : 
                           ((3U == (3U & (IData)((vlSelf->CPUTop__DOT__EX_io1_addr 
                                                  >> 1U))))
                             ? (IData)((vlSelf->CPUTop__DOT__mmio_io_rdata 
                                        >> 0x30U)) : 0U)))));
    vlSelf->CPUTop__DOT__EX__DOT___GEN_234 = ((4U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype))
                                               ? ((0x45U 
                                                   == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                   ? vlSelf->CPUTop__DOT__mmio_io_rdata
                                                   : 
                                                  ((0x47U 
                                                    == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->CPUTop__DOT__EX_io1_addr 
                                                                >> 2U)))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      ((1U 
                                                                        & (IData)(
                                                                                (vlSelf->CPUTop__DOT__mmio_io_rdata 
                                                                                >> 0x3fU)))
                                                                        ? 0xffffffffU
                                                                        : 0U))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       (vlSelf->CPUTop__DOT__mmio_io_rdata 
                                                                        >> 0x20U))))
                                                     : vlSelf->CPUTop__DOT__EX__DOT___mem_result_T_9)
                                                    : 
                                                   ((0x11U 
                                                     == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->CPUTop__DOT__EX_io1_addr 
                                                                 >> 2U)))
                                                      ? (QData)((IData)(
                                                                        (vlSelf->CPUTop__DOT__mmio_io_rdata 
                                                                         >> 0x20U)))
                                                      : vlSelf->CPUTop__DOT__EX__DOT___mem_result_T_9)
                                                     : 
                                                    ((0x6fU 
                                                      == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                      ? (QData)((IData)(vlSelf->CPUTop__DOT__EX__DOT___mem_result_T_28))
                                                      : 
                                                     ((0xeU 
                                                       == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                       ? 
                                                      ((((0x80U 
                                                          & (IData)(vlSelf->CPUTop__DOT__EX__DOT___mem_result_T_28))
                                                          ? 0xffffffffffffffULL
                                                          : 0ULL) 
                                                        << 8U) 
                                                       | (QData)((IData)(vlSelf->CPUTop__DOT__EX__DOT___mem_result_T_28)))
                                                       : 
                                                      ((3U 
                                                        == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                        ? 
                                                       ((((0x8000U 
                                                           & (IData)(vlSelf->CPUTop__DOT__EX__DOT___mem_result_T_45))
                                                           ? 0xffffffffffffULL
                                                           : 0ULL) 
                                                         << 0x10U) 
                                                        | (QData)((IData)(vlSelf->CPUTop__DOT__EX__DOT___mem_result_T_45)))
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                         ? (QData)((IData)(vlSelf->CPUTop__DOT__EX__DOT___mem_result_T_45))
                                                         : 0ULL)))))))
                                               : ((5U 
                                                   == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype))
                                                   ? 
                                                  ((0x6aU 
                                                    == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                    ? 
                                                   ((vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_58 
                                                     < vlSelf->CPUTop__DOT__EX__DOT__src2)
                                                     ? 1ULL
                                                     : 0ULL)
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                     ? 
                                                    (VL_LTS_IQQ(64, vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_58, vlSelf->CPUTop__DOT__EX__DOT__src2)
                                                      ? 1ULL
                                                      : 0ULL)
                                                     : 0ULL))
                                                   : 0ULL));
    VL_EXTEND_WQ(127,64, __Vtemp_h7548e965__0, VL_SHIFTRS_QQI(64,64,5, vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_58, 
                                                              (0x1fU 
                                                               & (IData)(vlSelf->CPUTop__DOT__EX__DOT__src2))));
    VL_EXTEND_WQ(127,64, __Vtemp_hd83d5fe3__0, (((QData)((IData)(
                                                                 ((vlSelf->CPUTop__DOT__EX__DOT___shift_result_T_5[0U] 
                                                                   >> 0x1fU)
                                                                   ? 0xffffffffU
                                                                   : 0U))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->CPUTop__DOT__EX__DOT___shift_result_T_5[0U]))));
    VL_EXTEND_WQ(127,64, __Vtemp_hb125646c__1, vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_58);
    VL_SHIFTL_WWI(127,127,6, __Vtemp_h53a40c04__0, __Vtemp_hb125646c__1, 
                  (0x3fU & (IData)(vlSelf->CPUTop__DOT__EX__DOT__src2)));
    VL_EXTEND_WQ(127,64, __Vtemp_hdc10468f__0, ((0x75U 
                                                 == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                 ? 
                                                (vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_58 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(vlSelf->CPUTop__DOT__EX__DOT__src2)))
                                                 : 
                                                ((5U 
                                                  == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   ((vlSelf->CPUTop__DOT__EX__DOT___shift_result_T_16[0U] 
                                                                     >> 0x1fU)
                                                                     ? 0xffffffffU
                                                                     : 0U))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->CPUTop__DOT__EX__DOT___shift_result_T_16[0U])))
                                                  : 
                                                 ((6U 
                                                   == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                   ? vlSelf->CPUTop__DOT__EX__DOT___shift_result_T_28
                                                   : 
                                                  ((8U 
                                                    == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                    ? vlSelf->CPUTop__DOT__EX__DOT___shift_result_T_35
                                                    : 
                                                   ((9U 
                                                     == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                     ? vlSelf->CPUTop__DOT__EX__DOT___shift_result_T_28
                                                     : 
                                                    ((0xaU 
                                                      == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                      ? vlSelf->CPUTop__DOT__EX__DOT___shift_result_T_35
                                                      : 
                                                     ((0x14U 
                                                       == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                       ? 
                                                      VL_SHIFTRS_QQI(64,64,6, vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_58, 
                                                                     (0x3fU 
                                                                      & (IData)(vlSelf->CPUTop__DOT__EX__DOT__src2)))
                                                       : 0ULL))))))));
    vlSelf->CPUTop__DOT__EX__DOT___GEN_235 = ((1U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype))
                                               ? (((QData)((IData)(
                                                                   ((0x6eU 
                                                                     == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                                     ? 
                                                                    __Vtemp_h7548e965__0[1U]
                                                                     : 
                                                                    ((0x73U 
                                                                      == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                                      ? 
                                                                     __Vtemp_hd83d5fe3__0[1U]
                                                                      : 
                                                                     ((0x41U 
                                                                       == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                                       ? 
                                                                      __Vtemp_h53a40c04__0[1U]
                                                                       : 
                                                                      __Vtemp_hdc10468f__0[1U]))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((0x6eU 
                                                                      == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                                      ? 
                                                                     __Vtemp_h7548e965__0[0U]
                                                                      : 
                                                                     ((0x73U 
                                                                       == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                                       ? 
                                                                      __Vtemp_hd83d5fe3__0[0U]
                                                                       : 
                                                                      ((0x41U 
                                                                        == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                                        ? 
                                                                       __Vtemp_h53a40c04__0[0U]
                                                                        : 
                                                                       __Vtemp_hdc10468f__0[0U]))))))
                                               : vlSelf->CPUTop__DOT__EX__DOT___GEN_234);
    vlSelf->CPUTop__DOT__EX_io1_result = ((0U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype))
                                           ? ((0x40U 
                                               == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                               ? vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_1
                                               : ((0x68U 
                                                   == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                   ? vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_7
                                                   : 
                                                  ((0x44U 
                                                    == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                    ? 
                                                   (vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_58 
                                                    | vlSelf->CPUTop__DOT__EX__DOT__src2)
                                                    : 
                                                   ((0x69U 
                                                     == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                     ? vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_10
                                                     : 
                                                    ((0x71U 
                                                      == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                      ? 
                                                     (vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_58 
                                                      & vlSelf->CPUTop__DOT__EX__DOT__src2)
                                                      : 
                                                     ((0x72U 
                                                       == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                       ? 
                                                      (vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_58 
                                                       ^ vlSelf->CPUTop__DOT__EX__DOT__src2)
                                                       : 
                                                      ((0x6dU 
                                                        == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                        ? vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_7
                                                        : 
                                                       ((0x78U 
                                                         == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                         ? 
                                                        (((QData)((IData)(
                                                                          ((vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_19[0U] 
                                                                            >> 0x1fU)
                                                                            ? 0xffffffffU
                                                                            : 0U))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_19[0U])))
                                                         : 
                                                        ((0x79U 
                                                          == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                          ? 
                                                         (((QData)((IData)(
                                                                           ((1U 
                                                                             & (IData)(
                                                                                (vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_28 
                                                                                >> 0x1fU)))
                                                                             ? 0xffffffffU
                                                                             : 0U))) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_28)))
                                                          : vlSelf->CPUTop__DOT__EX__DOT___GEN_151)))))))))
                                           : ((3U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype))
                                               ? ((3U 
                                                   == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype))
                                                   ? 
                                                  (4ULL 
                                                   + vlSelf->CPUTop__DOT__IF__DOT__temp)
                                                   : 0ULL)
                                               : ((2U 
                                                   == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype))
                                                   ? 0ULL
                                                   : vlSelf->CPUTop__DOT__EX__DOT___GEN_235)));
    vlSelf->io_result = vlSelf->CPUTop__DOT__EX_io1_result;
}
