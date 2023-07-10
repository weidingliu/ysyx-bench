// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCoreTop__Syms.h"


void VCoreTop___024root__trace_chg_sub_0(VCoreTop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VCoreTop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root__trace_chg_top_0\n"); );
    // Init
    VCoreTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCoreTop___024root*>(voidSelf);
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VCoreTop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VCoreTop___024root__trace_chg_sub_0(VCoreTop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<3>/*95:0*/ __Vtemp_h052dcc23__0;
    VlWide<3>/*95:0*/ __Vtemp_h0fbea1b2__0;
    VlWide<3>/*95:0*/ __Vtemp_h8004274a__0;
    VlWide<3>/*95:0*/ __Vtemp_h29cbf8c2__0;
    VlWide<5>/*159:0*/ __Vtemp_h559cd7fe__0;
    VlWide<16>/*511:0*/ __Vtemp_h6ff33a25__0;
    VlWide<16>/*511:0*/ __Vtemp_he7310ca3__0;
    VlWide<16>/*511:0*/ __Vtemp_hc34456c3__0;
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgQData(oldp+0,((((IData)(vlSelf->CoreTop__DOT__ID_io_ex_reg_rfWen) 
                                 & ((IData)(vlSelf->__VdfgTmp_ha116befc__0) 
                                    & (0U != (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest))))
                                 ? vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfData
                                 : (((IData)(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfWen) 
                                     & (((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest) 
                                         == (0x1fU 
                                             & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                >> 0xfU))) 
                                        & (0U != (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest))))
                                     ? vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfData
                                     : (((IData)(vlSelf->CoreTop__DOT__rf_MPORT_en) 
                                         & (((IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest) 
                                             == (0x1fU 
                                                 & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                    >> 0xfU))) 
                                            & (0U != (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest))))
                                         ? vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfData
                                         : ((0U == 
                                             (0x1fU 
                                              & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                 >> 0xfU)))
                                             ? 0ULL
                                             : vlSelf->CoreTop__DOT__rf
                                            [(0x1fU 
                                              & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                 >> 0xfU))]))))),64);
        bufp->chgQData(oldp+2,((((IData)(vlSelf->CoreTop__DOT__ID_io_ex_reg_rfWen) 
                                 & ((IData)(vlSelf->__VdfgTmp_ha248cb35__0) 
                                    & (0U != (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest))))
                                 ? vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfData
                                 : (((IData)(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfWen) 
                                     & (((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest) 
                                         == (0x1fU 
                                             & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                >> 0x14U))) 
                                        & (0U != (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest))))
                                     ? vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfData
                                     : (((IData)(vlSelf->CoreTop__DOT__rf_MPORT_en) 
                                         & (((IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest) 
                                             == (0x1fU 
                                                 & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                    >> 0x14U))) 
                                            & (0U != (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest))))
                                         ? vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfData
                                         : ((0U == 
                                             (0x1fU 
                                              & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                 >> 0x14U)))
                                             ? 0ULL
                                             : vlSelf->CoreTop__DOT__rf
                                            [(0x1fU 
                                              & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                 >> 0x14U))]))))),64);
        bufp->chgQData(oldp+4,(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfData),64);
        bufp->chgQData(oldp+6,(vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata),64);
        bufp->chgQData(oldp+8,(vlSelf->CoreTop__DOT__MMEM__DOT__rdata),64);
        bufp->chgBit(oldp+10,((1U & (IData)((vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata 
                                             >> 0x3fU)))));
        bufp->chgBit(oldp+11,((1U & (IData)((vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata 
                                             >> 0x1fU)))));
        bufp->chgBit(oldp+12,((1U & ((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_27) 
                                     >> 7U))));
        bufp->chgBit(oldp+13,((1U & ((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_44) 
                                     >> 0xfU))));
        bufp->chgQData(oldp+14,(((0x45U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                  ? vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata
                                  : ((0x47U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                      ? ((1U & (IData)(
                                                       (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                        >> 2U)))
                                          ? (((QData)((IData)(
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
                                          : (((QData)((IData)(
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata 
                                                                           >> 0x1fU)))
                                                                ? 0xffffffffU
                                                                : 0U))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata))))
                                      : ((0x11U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                          ? ((1U & (IData)(
                                                           (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                            >> 2U)))
                                              ? (vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata 
                                                 >> 0x20U)
                                              : (QData)((IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata)))
                                          : ((0x6fU 
                                              == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                              ? (QData)((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_27))
                                              : ((0xeU 
                                                  == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                                  ? 
                                                 ((((0x80U 
                                                     & (IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_27))
                                                     ? 0xffffffffffffffULL
                                                     : 0ULL) 
                                                   << 8U) 
                                                  | (QData)((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_27)))
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                                   ? 
                                                  ((((0x8000U 
                                                      & (IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_44))
                                                      ? 0xffffffffffffULL
                                                      : 0ULL) 
                                                    << 0x10U) 
                                                   | (QData)((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_44)))
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? (QData)((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_44))
                                                    : 0ULL)))))))),64);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+16,(vlSelf->CoreTop__DOT__IF_io_branch_io_is_branch));
        bufp->chgBit(oldp+17,(vlSelf->CoreTop__DOT__IF_io_branch_io_is_jump));
        bufp->chgQData(oldp+18,(vlSelf->CoreTop__DOT__IF_io_branch_io_dnpc),64);
        bufp->chgBit(oldp+20,(vlSelf->CoreTop__DOT__IF_io_cache_req_addr_req_valid));
        bufp->chgBit(oldp+21,((1U & (~ (IData)(vlSelf->CoreTop__DOT__full)))));
        bufp->chgBit(oldp+22,(vlSelf->CoreTop__DOT__IF_io_cache_req_rdata_rep_valid));
        bufp->chgQData(oldp+23,(vlSelf->CoreTop__DOT__IF_io_cache_req_rdata_rep_bits_rdata),64);
        bufp->chgIData(oldp+25,(vlSelf->CoreTop__DOT__IF_io_out_bits_Inst),32);
        bufp->chgBit(oldp+26,(vlSelf->CoreTop__DOT__IF_io_flush));
        bufp->chgBit(oldp+27,((1U & (~ (IData)(vlSelf->CoreTop__DOT__empty)))));
        bufp->chgQData(oldp+28,(((0x1fU == (0x1fU & (IData)(vlSelf->CoreTop__DOT__tail)))
                                  ? vlSelf->CoreTop__DOT__buffer_31_PC
                                  : ((0x1eU == (0x1fU 
                                                & (IData)(vlSelf->CoreTop__DOT__tail)))
                                      ? vlSelf->CoreTop__DOT__buffer_30_PC
                                      : ((0x1dU == 
                                          (0x1fU & (IData)(vlSelf->CoreTop__DOT__tail)))
                                          ? vlSelf->CoreTop__DOT__buffer_29_PC
                                          : ((0x1cU 
                                              == (0x1fU 
                                                  & (IData)(vlSelf->CoreTop__DOT__tail)))
                                              ? vlSelf->CoreTop__DOT__buffer_28_PC
                                              : ((0x1bU 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(vlSelf->CoreTop__DOT__tail)))
                                                  ? vlSelf->CoreTop__DOT__buffer_27_PC
                                                  : vlSelf->CoreTop__DOT___GEN_190)))))),64);
        bufp->chgIData(oldp+30,(vlSelf->CoreTop__DOT__ID_io_in_bits_Inst),32);
        bufp->chgBit(oldp+31,(((IData)(vlSelf->CoreTop__DOT__valid) 
                               & ((4U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType)) 
                                  & ((((0xeU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                                       | (0x6fU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) 
                                      | ((0x45U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                                         | ((3U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                                            | (4U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))))) 
                                     | ((0x47U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                                        | (0x11U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))))))));
        bufp->chgCData(oldp+32,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest),5);
        bufp->chgBit(oldp+33,(vlSelf->CoreTop__DOT__ID_io_ex_reg_rfWen));
        bufp->chgBit(oldp+34,((1U & ((~ ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_valid) 
                                           | (IData)(vlSelf->CoreTop__DOT__EX__DOT__div_io_in_valid)) 
                                          & (IData)(vlSelf->CoreTop__DOT__valid)) 
                                         | (IData)(vlSelf->CoreTop__DOT__EX__DOT___io_out_valid_T_11))) 
                                     & (~ (IData)(vlSelf->CoreTop__DOT__MEM__DOT___io_out_valid_T_6))))));
        bufp->chgBit(oldp+35,((1U & ((~ (((IData)(vlSelf->CoreTop__DOT__valid) 
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
                                     & (~ (IData)(vlSelf->CoreTop__DOT__empty))))));
        bufp->chgCData(oldp+36,((((7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                   ? 2U : 0U) | ((3U 
                                                  == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                                  ? 2U
                                                  : 0U))),3);
        bufp->chgCData(oldp+37,(((8U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)) 
                                 | ((7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)) 
                                    | (3U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))))),3);
        bufp->chgCData(oldp+38,(((0x13U == (0x707fU 
                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                  ? 0U : ((0x1013U 
                                           == (0xfc00707fU 
                                               & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                           ? 1U : (
                                                   (0x6013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                    ? 0U
                                                    : 
                                                   ((0x3003U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                     ? 4U
                                                     : 
                                                    ((0x2003U 
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
                                                                : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_239))))))))))))))))),3);
        bufp->chgBit(oldp+39,((1U & (~ ((0U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_2)) 
                                        | ((IData)(vlSelf->CoreTop__DOT__empty) 
                                           | (IData)(vlSelf->CoreTop__DOT__IF_io_flush)))))));
        bufp->chgCData(oldp+40,((0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+41,((0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                          >> 0x14U))),5);
        bufp->chgBit(oldp+42,(((~ (IData)(vlSelf->CoreTop__DOT__empty)) 
                               & (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_3))));
        bufp->chgCData(oldp+43,(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_2),7);
        bufp->chgCData(oldp+44,((0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                          >> 7U))),5);
        bufp->chgQData(oldp+45,(((((((8U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                      ? ((((vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                            >> 0x1fU)
                                            ? 0xfffffffffffffULL
                                            : 0ULL) 
                                          << 0xcU) 
                                         | (QData)((IData)(
                                                           (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                            >> 0x14U))))
                                      : 0ULL) | ((7U 
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
                                   | ((3U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                       ? (((QData)((IData)(
                                                           ((vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                             >> 0x1fU)
                                                             ? 0xffffffffU
                                                             : 0U))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            (0xfffff000U 
                                                             & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))))
                                       : 0ULL)) | (
                                                   (9U 
                                                    == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                                    ? 
                                                   ((((vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
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
                                 | ((0xbU == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                     ? ((((vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                           >> 0x1fU)
                                           ? 0x7ffffffffffffULL
                                           : 0ULL) 
                                         << 0xdU) | (QData)((IData)(
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
                                     : 0ULL))),64);
        bufp->chgBit(oldp+47,(vlSelf->CoreTop__DOT__valid));
        bufp->chgCData(oldp+48,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src1Type),3);
        bufp->chgCData(oldp+49,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src2Type),3);
        bufp->chgCData(oldp+50,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType),3);
        bufp->chgBit(oldp+51,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_inst_valid));
        bufp->chgBit(oldp+52,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfWen));
        bufp->chgCData(oldp+53,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype),7);
        bufp->chgQData(oldp+54,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_src1),64);
        bufp->chgQData(oldp+56,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_src2),64);
        bufp->chgQData(oldp+58,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm),64);
        bufp->chgQData(oldp+60,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC),64);
        bufp->chgIData(oldp+62,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_inst),32);
        bufp->chgBit(oldp+63,((1U & (~ (IData)(vlSelf->CoreTop__DOT__MEM__DOT___io_out_valid_T_6)))));
        bufp->chgBit(oldp+64,(((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_valid)) 
                               & ((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__div_io_in_valid)) 
                                  & ((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT___io_out_valid_T_11)) 
                                     & (IData)(vlSelf->CoreTop__DOT__valid))))));
        bufp->chgQData(oldp+65,(vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfData),64);
        bufp->chgQData(oldp+67,(vlSelf->CoreTop__DOT__EX__DOT__src1),64);
        bufp->chgQData(oldp+69,(vlSelf->CoreTop__DOT__EX__DOT__src2),64);
        bufp->chgBit(oldp+71,(((0x42U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                               & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_inst_valid))));
        bufp->chgBit(oldp+72,((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state))));
        bufp->chgBit(oldp+73,(vlSelf->CoreTop__DOT__DIP_io_is_break_REG_1));
        bufp->chgQData(oldp+74,(vlSelf->CoreTop__DOT__rf
                                [0U]),64);
        bufp->chgQData(oldp+76,(vlSelf->CoreTop__DOT__rf
                                [1U]),64);
        bufp->chgQData(oldp+78,(vlSelf->CoreTop__DOT__rf
                                [2U]),64);
        bufp->chgQData(oldp+80,(vlSelf->CoreTop__DOT__rf
                                [3U]),64);
        bufp->chgQData(oldp+82,(vlSelf->CoreTop__DOT__rf
                                [4U]),64);
        bufp->chgQData(oldp+84,(vlSelf->CoreTop__DOT__rf
                                [5U]),64);
        bufp->chgQData(oldp+86,(vlSelf->CoreTop__DOT__rf
                                [6U]),64);
        bufp->chgQData(oldp+88,(vlSelf->CoreTop__DOT__rf
                                [7U]),64);
        bufp->chgQData(oldp+90,(vlSelf->CoreTop__DOT__rf
                                [8U]),64);
        bufp->chgQData(oldp+92,(vlSelf->CoreTop__DOT__rf
                                [9U]),64);
        bufp->chgQData(oldp+94,(vlSelf->CoreTop__DOT__rf
                                [0xaU]),64);
        bufp->chgQData(oldp+96,(vlSelf->CoreTop__DOT__rf
                                [0xbU]),64);
        bufp->chgQData(oldp+98,(vlSelf->CoreTop__DOT__rf
                                [0xcU]),64);
        bufp->chgQData(oldp+100,(vlSelf->CoreTop__DOT__rf
                                 [0xdU]),64);
        bufp->chgQData(oldp+102,(vlSelf->CoreTop__DOT__rf
                                 [0xeU]),64);
        bufp->chgQData(oldp+104,(vlSelf->CoreTop__DOT__rf
                                 [0xfU]),64);
        bufp->chgQData(oldp+106,(vlSelf->CoreTop__DOT__rf
                                 [0x10U]),64);
        bufp->chgQData(oldp+108,(vlSelf->CoreTop__DOT__rf
                                 [0x11U]),64);
        bufp->chgQData(oldp+110,(vlSelf->CoreTop__DOT__rf
                                 [0x12U]),64);
        bufp->chgQData(oldp+112,(vlSelf->CoreTop__DOT__rf
                                 [0x13U]),64);
        bufp->chgQData(oldp+114,(vlSelf->CoreTop__DOT__rf
                                 [0x14U]),64);
        bufp->chgQData(oldp+116,(vlSelf->CoreTop__DOT__rf
                                 [0x15U]),64);
        bufp->chgQData(oldp+118,(vlSelf->CoreTop__DOT__rf
                                 [0x16U]),64);
        bufp->chgQData(oldp+120,(vlSelf->CoreTop__DOT__rf
                                 [0x17U]),64);
        bufp->chgQData(oldp+122,(vlSelf->CoreTop__DOT__rf
                                 [0x18U]),64);
        bufp->chgQData(oldp+124,(vlSelf->CoreTop__DOT__rf
                                 [0x19U]),64);
        bufp->chgQData(oldp+126,(vlSelf->CoreTop__DOT__rf
                                 [0x1aU]),64);
        bufp->chgQData(oldp+128,(vlSelf->CoreTop__DOT__rf
                                 [0x1bU]),64);
        bufp->chgQData(oldp+130,(vlSelf->CoreTop__DOT__rf
                                 [0x1cU]),64);
        bufp->chgQData(oldp+132,(vlSelf->CoreTop__DOT__rf
                                 [0x1dU]),64);
        bufp->chgQData(oldp+134,(vlSelf->CoreTop__DOT__rf
                                 [0x1eU]),64);
        bufp->chgQData(oldp+136,(vlSelf->CoreTop__DOT__rf
                                 [0x1fU]),64);
        bufp->chgIData(oldp+138,(vlSelf->CoreTop__DOT__DIP_io_inst_REG),32);
        bufp->chgQData(oldp+139,(vlSelf->CoreTop__DOT__DIP_io_pc_REG),64);
        bufp->chgBit(oldp+141,(vlSelf->CoreTop__DOT__DIP_io_inst_valid_REG));
        bufp->chgQData(oldp+142,(vlSelf->CoreTop__DOT__DIP_io_dnpc_REG),64);
        bufp->chgBit(oldp+144,(vlSelf->CoreTop__DOT__DIP_io_is_skip_REG));
        bufp->chgQData(oldp+145,(vlSelf->CoreTop__DOT__rf[0]),64);
        bufp->chgQData(oldp+147,(vlSelf->CoreTop__DOT__rf[1]),64);
        bufp->chgQData(oldp+149,(vlSelf->CoreTop__DOT__rf[2]),64);
        bufp->chgQData(oldp+151,(vlSelf->CoreTop__DOT__rf[3]),64);
        bufp->chgQData(oldp+153,(vlSelf->CoreTop__DOT__rf[4]),64);
        bufp->chgQData(oldp+155,(vlSelf->CoreTop__DOT__rf[5]),64);
        bufp->chgQData(oldp+157,(vlSelf->CoreTop__DOT__rf[6]),64);
        bufp->chgQData(oldp+159,(vlSelf->CoreTop__DOT__rf[7]),64);
        bufp->chgQData(oldp+161,(vlSelf->CoreTop__DOT__rf[8]),64);
        bufp->chgQData(oldp+163,(vlSelf->CoreTop__DOT__rf[9]),64);
        bufp->chgQData(oldp+165,(vlSelf->CoreTop__DOT__rf[10]),64);
        bufp->chgQData(oldp+167,(vlSelf->CoreTop__DOT__rf[11]),64);
        bufp->chgQData(oldp+169,(vlSelf->CoreTop__DOT__rf[12]),64);
        bufp->chgQData(oldp+171,(vlSelf->CoreTop__DOT__rf[13]),64);
        bufp->chgQData(oldp+173,(vlSelf->CoreTop__DOT__rf[14]),64);
        bufp->chgQData(oldp+175,(vlSelf->CoreTop__DOT__rf[15]),64);
        bufp->chgQData(oldp+177,(vlSelf->CoreTop__DOT__rf[16]),64);
        bufp->chgQData(oldp+179,(vlSelf->CoreTop__DOT__rf[17]),64);
        bufp->chgQData(oldp+181,(vlSelf->CoreTop__DOT__rf[18]),64);
        bufp->chgQData(oldp+183,(vlSelf->CoreTop__DOT__rf[19]),64);
        bufp->chgQData(oldp+185,(vlSelf->CoreTop__DOT__rf[20]),64);
        bufp->chgQData(oldp+187,(vlSelf->CoreTop__DOT__rf[21]),64);
        bufp->chgQData(oldp+189,(vlSelf->CoreTop__DOT__rf[22]),64);
        bufp->chgQData(oldp+191,(vlSelf->CoreTop__DOT__rf[23]),64);
        bufp->chgQData(oldp+193,(vlSelf->CoreTop__DOT__rf[24]),64);
        bufp->chgQData(oldp+195,(vlSelf->CoreTop__DOT__rf[25]),64);
        bufp->chgQData(oldp+197,(vlSelf->CoreTop__DOT__rf[26]),64);
        bufp->chgQData(oldp+199,(vlSelf->CoreTop__DOT__rf[27]),64);
        bufp->chgQData(oldp+201,(vlSelf->CoreTop__DOT__rf[28]),64);
        bufp->chgQData(oldp+203,(vlSelf->CoreTop__DOT__rf[29]),64);
        bufp->chgQData(oldp+205,(vlSelf->CoreTop__DOT__rf[30]),64);
        bufp->chgQData(oldp+207,(vlSelf->CoreTop__DOT__rf[31]),64);
        bufp->chgQData(oldp+209,(vlSelf->CoreTop__DOT__rf
                                 [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                            >> 0xfU))]),64);
        bufp->chgQData(oldp+211,(vlSelf->CoreTop__DOT__rf
                                 [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                            >> 0x14U))]),64);
        bufp->chgQData(oldp+213,(((0U == (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest))
                                   ? 0ULL : vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfData)),64);
        bufp->chgCData(oldp+215,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest),5);
        bufp->chgBit(oldp+216,(vlSelf->CoreTop__DOT__rf_MPORT_en));
        bufp->chgBit(oldp+217,(vlSelf->CoreTop__DOT__valid_1));
        bufp->chgCData(oldp+218,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_fuType),3);
        bufp->chgBit(oldp+219,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_inst_valid));
        bufp->chgBit(oldp+220,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_rfWen));
        bufp->chgCData(oldp+221,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype),7);
        bufp->chgQData(oldp+222,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_PC),64);
        bufp->chgIData(oldp+224,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_inst),32);
        bufp->chgQData(oldp+225,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_Dnpc),64);
        bufp->chgCData(oldp+227,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest),5);
        bufp->chgQData(oldp+228,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfData),64);
        bufp->chgQData(oldp+230,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src1),64);
        bufp->chgQData(oldp+232,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2),64);
        bufp->chgQData(oldp+234,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_Imm),64);
        bufp->chgBit(oldp+236,(vlSelf->CoreTop__DOT__MEM_io_out_valid));
        bufp->chgBit(oldp+237,(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_signal_inst_valid));
        bufp->chgBit(oldp+238,(((0xa0000048ULL == vlSelf->CoreTop__DOT__MEM__DOT__addr_temp) 
                                | ((0xa00003f8ULL == vlSelf->CoreTop__DOT__MEM__DOT__addr_temp) 
                                   | ((0xa0000000ULL 
                                       <= vlSelf->CoreTop__DOT__MEM__DOT__addr_temp) 
                                      & (0xa1200000ULL 
                                         >= vlSelf->CoreTop__DOT__MEM__DOT__addr_temp))))));
        bufp->chgBit(oldp+239,(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfWen));
        bufp->chgBit(oldp+240,(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_addr_req_bits_ce));
        bufp->chgQData(oldp+241,(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp),64);
        bufp->chgBit(oldp+243,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_bits_we));
        bufp->chgBit(oldp+244,(((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)
                                 ? (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_valid)
                                 : ((~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_bits_we)) 
                                    & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_bits_rdata_T_1) 
                                       | (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_valid_T_4))))));
        bufp->chgQData(oldp+245,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata),64);
        bufp->chgCData(oldp+247,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wmask),8);
        bufp->chgBit(oldp+248,(((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)
                                 ? (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_out_wb_valid)
                                 : ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___Cache_data_io_write_bus_valid_T_3) 
                                    | ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_valid_T_4) 
                                       & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_bits_we))))));
        bufp->chgBit(oldp+249,(vlSelf->CoreTop__DOT__valid_2));
        bufp->chgBit(oldp+250,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_inst_valid));
        bufp->chgBit(oldp+251,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_rfWen));
        bufp->chgQData(oldp+252,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_PC),64);
        bufp->chgQData(oldp+254,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_Dnpc),64);
        bufp->chgBit(oldp+256,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_skip));
        bufp->chgQData(oldp+257,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfData),64);
        bufp->chgBit(oldp+259,(((IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_inst_valid) 
                                & (IData)(vlSelf->CoreTop__DOT__valid_2))));
        bufp->chgQData(oldp+260,(((0U == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                   >> 0xfU)))
                                   ? 0ULL : vlSelf->CoreTop__DOT__rf
                                  [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                             >> 0xfU))])),64);
        bufp->chgQData(oldp+262,(((0U == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                   >> 0x14U)))
                                   ? 0ULL : vlSelf->CoreTop__DOT__rf
                                  [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                             >> 0x14U))])),64);
        bufp->chgBit(oldp+264,(((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)) 
                                & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)
                                    ? (0U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state))
                                    : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state) 
                                       & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r) 
                                          & (0U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state))))))));
        bufp->chgBit(oldp+265,((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state))));
        bufp->chgQData(oldp+266,(vlSelf->CoreTop__DOT__ICACHE_io_out_raddr_req_bits_addr),64);
        bufp->chgBit(oldp+268,(vlSelf->CoreTop__DOT__ICACHE_io_out_rdata_rep_valid));
        bufp->chgBit(oldp+269,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_rdata_rep_bits_last));
        bufp->chgBit(oldp+270,(((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)) 
                                & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)
                                    ? (1U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_state))
                                    : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state) 
                                       & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r) 
                                          & (1U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_state))))))));
        bufp->chgBit(oldp+271,(((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)
                                 ? (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_valid)
                                 : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)
                                     ? (1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state))
                                     : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                                         ? ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)
                                             ? (1U 
                                                == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state))
                                             : (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_valid))
                                         : (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_valid))))));
        bufp->chgBit(oldp+272,((0U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state))));
        bufp->chgQData(oldp+273,(((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)
                                   ? vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_bits_addr
                                   : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)
                                       ? vlSelf->CoreTop__DOT__ICACHE_io_out_raddr_req_bits_addr
                                       : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                                           ? ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)
                                               ? vlSelf->CoreTop__DOT__ICACHE_io_out_raddr_req_bits_addr
                                               : vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_bits_addr)
                                           : vlSelf->CoreTop__DOT__ICACHE_io_out_raddr_req_bits_addr)))),64);
        bufp->chgCData(oldp+275,(((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)
                                   ? ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)
                                       ? 0U : 7U) : 
                                  ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)
                                    ? 7U : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                                             ? ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)
                                                 ? 7U
                                                 : 
                                                ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)
                                                  ? 0U
                                                  : 7U))
                                             : 7U)))),8);
        bufp->chgBit(oldp+276,((2U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state))));
        bufp->chgBit(oldp+277,(((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)
                                 ? (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_valid)
                                 : ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)) 
                                    & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                                        ? ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)) 
                                           & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_valid))
                                        : (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_valid))))));
        bufp->chgBit(oldp+278,((0U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_state))));
        bufp->chgQData(oldp+279,(((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)
                                   ? vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_bits_addr
                                   : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)
                                       ? 0ULL : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                                                  ? 
                                                 ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)
                                                   ? 0ULL
                                                   : vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_bits_addr)
                                                  : 0ULL)))),64);
        bufp->chgBit(oldp+281,(((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)
                                 ? (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_valid)
                                 : ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)) 
                                    & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                                        ? ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)) 
                                           & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_valid))
                                        : (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_valid))))));
        bufp->chgBit(oldp+282,(vlSelf->CoreTop__DOT__MMEM_wd_ready));
        bufp->chgQData(oldp+283,(((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)
                                   ? vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_data
                                   : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)
                                       ? 0ULL : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                                                  ? 
                                                 ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)
                                                   ? 0ULL
                                                   : vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_data)
                                                  : 0ULL)))),64);
        bufp->chgCData(oldp+285,(((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)
                                   ? (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_wstrb)
                                   : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)
                                       ? 0U : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                                                ? ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)
                                                    ? 0U
                                                    : (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_wstrb))
                                                : 0U)))),8);
        bufp->chgBit(oldp+286,(vlSelf->CoreTop__DOT__MMEM_wd_last));
        bufp->chgBit(oldp+287,((1U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_state))));
        bufp->chgBit(oldp+288,(((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)
                                 ? (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wb_ready)
                                 : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0) 
                                    | ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                                        ? ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r) 
                                           | (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wb_ready))
                                        : (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wb_ready))))));
        bufp->chgBit(oldp+289,(vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_ready));
        bufp->chgBit(oldp+290,(vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_valid));
        bufp->chgQData(oldp+291,(vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_bits_addr),64);
        bufp->chgCData(oldp+293,(((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)
                                   ? 0U : 7U)),8);
        bufp->chgBit(oldp+294,(vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_ready));
        bufp->chgBit(oldp+295,(vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_valid));
        bufp->chgQData(oldp+296,(vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_bits_addr),64);
        bufp->chgBit(oldp+298,(vlSelf->CoreTop__DOT__ARBITER_io_in1_rdata_rep_valid));
        bufp->chgBit(oldp+299,(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_ready));
        bufp->chgBit(oldp+300,(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_valid));
        bufp->chgQData(oldp+301,(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_data),64);
        bufp->chgCData(oldp+303,(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_wstrb),8);
        bufp->chgBit(oldp+304,(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_last));
        bufp->chgBit(oldp+305,(vlSelf->CoreTop__DOT__ARBITER_io_in1_wb_ready));
        bufp->chgBit(oldp+306,(vlSelf->CoreTop__DOT__ARBITER_io_in1_wb_valid));
        bufp->chgCData(oldp+307,(vlSelf->CoreTop__DOT__head),6);
        bufp->chgCData(oldp+308,(vlSelf->CoreTop__DOT__tail),6);
        bufp->chgBit(oldp+309,(vlSelf->CoreTop__DOT__empty));
        bufp->chgBit(oldp+310,(vlSelf->CoreTop__DOT__full));
        bufp->chgQData(oldp+311,(vlSelf->CoreTop__DOT__buffer_0_PC),64);
        bufp->chgIData(oldp+313,(vlSelf->CoreTop__DOT__buffer_0_Inst),32);
        bufp->chgQData(oldp+314,(vlSelf->CoreTop__DOT__buffer_1_PC),64);
        bufp->chgIData(oldp+316,(vlSelf->CoreTop__DOT__buffer_1_Inst),32);
        bufp->chgQData(oldp+317,(vlSelf->CoreTop__DOT__buffer_2_PC),64);
        bufp->chgIData(oldp+319,(vlSelf->CoreTop__DOT__buffer_2_Inst),32);
        bufp->chgQData(oldp+320,(vlSelf->CoreTop__DOT__buffer_3_PC),64);
        bufp->chgIData(oldp+322,(vlSelf->CoreTop__DOT__buffer_3_Inst),32);
        bufp->chgQData(oldp+323,(vlSelf->CoreTop__DOT__buffer_4_PC),64);
        bufp->chgIData(oldp+325,(vlSelf->CoreTop__DOT__buffer_4_Inst),32);
        bufp->chgQData(oldp+326,(vlSelf->CoreTop__DOT__buffer_5_PC),64);
        bufp->chgIData(oldp+328,(vlSelf->CoreTop__DOT__buffer_5_Inst),32);
        bufp->chgQData(oldp+329,(vlSelf->CoreTop__DOT__buffer_6_PC),64);
        bufp->chgIData(oldp+331,(vlSelf->CoreTop__DOT__buffer_6_Inst),32);
        bufp->chgQData(oldp+332,(vlSelf->CoreTop__DOT__buffer_7_PC),64);
        bufp->chgIData(oldp+334,(vlSelf->CoreTop__DOT__buffer_7_Inst),32);
        bufp->chgQData(oldp+335,(vlSelf->CoreTop__DOT__buffer_8_PC),64);
        bufp->chgIData(oldp+337,(vlSelf->CoreTop__DOT__buffer_8_Inst),32);
        bufp->chgQData(oldp+338,(vlSelf->CoreTop__DOT__buffer_9_PC),64);
        bufp->chgIData(oldp+340,(vlSelf->CoreTop__DOT__buffer_9_Inst),32);
        bufp->chgQData(oldp+341,(vlSelf->CoreTop__DOT__buffer_10_PC),64);
        bufp->chgIData(oldp+343,(vlSelf->CoreTop__DOT__buffer_10_Inst),32);
        bufp->chgQData(oldp+344,(vlSelf->CoreTop__DOT__buffer_11_PC),64);
        bufp->chgIData(oldp+346,(vlSelf->CoreTop__DOT__buffer_11_Inst),32);
        bufp->chgQData(oldp+347,(vlSelf->CoreTop__DOT__buffer_12_PC),64);
        bufp->chgIData(oldp+349,(vlSelf->CoreTop__DOT__buffer_12_Inst),32);
        bufp->chgQData(oldp+350,(vlSelf->CoreTop__DOT__buffer_13_PC),64);
        bufp->chgIData(oldp+352,(vlSelf->CoreTop__DOT__buffer_13_Inst),32);
        bufp->chgQData(oldp+353,(vlSelf->CoreTop__DOT__buffer_14_PC),64);
        bufp->chgIData(oldp+355,(vlSelf->CoreTop__DOT__buffer_14_Inst),32);
        bufp->chgQData(oldp+356,(vlSelf->CoreTop__DOT__buffer_15_PC),64);
        bufp->chgIData(oldp+358,(vlSelf->CoreTop__DOT__buffer_15_Inst),32);
        bufp->chgQData(oldp+359,(vlSelf->CoreTop__DOT__buffer_16_PC),64);
        bufp->chgIData(oldp+361,(vlSelf->CoreTop__DOT__buffer_16_Inst),32);
        bufp->chgQData(oldp+362,(vlSelf->CoreTop__DOT__buffer_17_PC),64);
        bufp->chgIData(oldp+364,(vlSelf->CoreTop__DOT__buffer_17_Inst),32);
        bufp->chgQData(oldp+365,(vlSelf->CoreTop__DOT__buffer_18_PC),64);
        bufp->chgIData(oldp+367,(vlSelf->CoreTop__DOT__buffer_18_Inst),32);
        bufp->chgQData(oldp+368,(vlSelf->CoreTop__DOT__buffer_19_PC),64);
        bufp->chgIData(oldp+370,(vlSelf->CoreTop__DOT__buffer_19_Inst),32);
        bufp->chgQData(oldp+371,(vlSelf->CoreTop__DOT__buffer_20_PC),64);
        bufp->chgIData(oldp+373,(vlSelf->CoreTop__DOT__buffer_20_Inst),32);
        bufp->chgQData(oldp+374,(vlSelf->CoreTop__DOT__buffer_21_PC),64);
        bufp->chgIData(oldp+376,(vlSelf->CoreTop__DOT__buffer_21_Inst),32);
        bufp->chgQData(oldp+377,(vlSelf->CoreTop__DOT__buffer_22_PC),64);
        bufp->chgIData(oldp+379,(vlSelf->CoreTop__DOT__buffer_22_Inst),32);
        bufp->chgQData(oldp+380,(vlSelf->CoreTop__DOT__buffer_23_PC),64);
        bufp->chgIData(oldp+382,(vlSelf->CoreTop__DOT__buffer_23_Inst),32);
        bufp->chgQData(oldp+383,(vlSelf->CoreTop__DOT__buffer_24_PC),64);
        bufp->chgIData(oldp+385,(vlSelf->CoreTop__DOT__buffer_24_Inst),32);
        bufp->chgQData(oldp+386,(vlSelf->CoreTop__DOT__buffer_25_PC),64);
        bufp->chgIData(oldp+388,(vlSelf->CoreTop__DOT__buffer_25_Inst),32);
        bufp->chgQData(oldp+389,(vlSelf->CoreTop__DOT__buffer_26_PC),64);
        bufp->chgIData(oldp+391,(vlSelf->CoreTop__DOT__buffer_26_Inst),32);
        bufp->chgQData(oldp+392,(vlSelf->CoreTop__DOT__buffer_27_PC),64);
        bufp->chgIData(oldp+394,(vlSelf->CoreTop__DOT__buffer_27_Inst),32);
        bufp->chgQData(oldp+395,(vlSelf->CoreTop__DOT__buffer_28_PC),64);
        bufp->chgIData(oldp+397,(vlSelf->CoreTop__DOT__buffer_28_Inst),32);
        bufp->chgQData(oldp+398,(vlSelf->CoreTop__DOT__buffer_29_PC),64);
        bufp->chgIData(oldp+400,(vlSelf->CoreTop__DOT__buffer_29_Inst),32);
        bufp->chgQData(oldp+401,(vlSelf->CoreTop__DOT__buffer_30_PC),64);
        bufp->chgIData(oldp+403,(vlSelf->CoreTop__DOT__buffer_30_Inst),32);
        bufp->chgQData(oldp+404,(vlSelf->CoreTop__DOT__buffer_31_PC),64);
        bufp->chgIData(oldp+406,(vlSelf->CoreTop__DOT__buffer_31_Inst),32);
        bufp->chgIData(oldp+407,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_inst),32);
        bufp->chgBit(oldp+408,(vlSelf->CoreTop__DOT__DIP_io_is_break_REG));
        bufp->chgBit(oldp+409,(vlSelf->CoreTop__DOT__ARBITER__DOT__state));
        bufp->chgBit(oldp+410,(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r));
        bufp->chgQData(oldp+411,(vlSelf->CoreTop__DOT__DIP__DOT__rf[0]),64);
        bufp->chgQData(oldp+413,(vlSelf->CoreTop__DOT__DIP__DOT__rf[1]),64);
        bufp->chgQData(oldp+415,(vlSelf->CoreTop__DOT__DIP__DOT__rf[2]),64);
        bufp->chgQData(oldp+417,(vlSelf->CoreTop__DOT__DIP__DOT__rf[3]),64);
        bufp->chgQData(oldp+419,(vlSelf->CoreTop__DOT__DIP__DOT__rf[4]),64);
        bufp->chgQData(oldp+421,(vlSelf->CoreTop__DOT__DIP__DOT__rf[5]),64);
        bufp->chgQData(oldp+423,(vlSelf->CoreTop__DOT__DIP__DOT__rf[6]),64);
        bufp->chgQData(oldp+425,(vlSelf->CoreTop__DOT__DIP__DOT__rf[7]),64);
        bufp->chgQData(oldp+427,(vlSelf->CoreTop__DOT__DIP__DOT__rf[8]),64);
        bufp->chgQData(oldp+429,(vlSelf->CoreTop__DOT__DIP__DOT__rf[9]),64);
        bufp->chgQData(oldp+431,(vlSelf->CoreTop__DOT__DIP__DOT__rf[10]),64);
        bufp->chgQData(oldp+433,(vlSelf->CoreTop__DOT__DIP__DOT__rf[11]),64);
        bufp->chgQData(oldp+435,(vlSelf->CoreTop__DOT__DIP__DOT__rf[12]),64);
        bufp->chgQData(oldp+437,(vlSelf->CoreTop__DOT__DIP__DOT__rf[13]),64);
        bufp->chgQData(oldp+439,(vlSelf->CoreTop__DOT__DIP__DOT__rf[14]),64);
        bufp->chgQData(oldp+441,(vlSelf->CoreTop__DOT__DIP__DOT__rf[15]),64);
        bufp->chgQData(oldp+443,(vlSelf->CoreTop__DOT__DIP__DOT__rf[16]),64);
        bufp->chgQData(oldp+445,(vlSelf->CoreTop__DOT__DIP__DOT__rf[17]),64);
        bufp->chgQData(oldp+447,(vlSelf->CoreTop__DOT__DIP__DOT__rf[18]),64);
        bufp->chgQData(oldp+449,(vlSelf->CoreTop__DOT__DIP__DOT__rf[19]),64);
        bufp->chgQData(oldp+451,(vlSelf->CoreTop__DOT__DIP__DOT__rf[20]),64);
        bufp->chgQData(oldp+453,(vlSelf->CoreTop__DOT__DIP__DOT__rf[21]),64);
        bufp->chgQData(oldp+455,(vlSelf->CoreTop__DOT__DIP__DOT__rf[22]),64);
        bufp->chgQData(oldp+457,(vlSelf->CoreTop__DOT__DIP__DOT__rf[23]),64);
        bufp->chgQData(oldp+459,(vlSelf->CoreTop__DOT__DIP__DOT__rf[24]),64);
        bufp->chgQData(oldp+461,(vlSelf->CoreTop__DOT__DIP__DOT__rf[25]),64);
        bufp->chgQData(oldp+463,(vlSelf->CoreTop__DOT__DIP__DOT__rf[26]),64);
        bufp->chgQData(oldp+465,(vlSelf->CoreTop__DOT__DIP__DOT__rf[27]),64);
        bufp->chgQData(oldp+467,(vlSelf->CoreTop__DOT__DIP__DOT__rf[28]),64);
        bufp->chgQData(oldp+469,(vlSelf->CoreTop__DOT__DIP__DOT__rf[29]),64);
        bufp->chgQData(oldp+471,(vlSelf->CoreTop__DOT__DIP__DOT__rf[30]),64);
        bufp->chgQData(oldp+473,(vlSelf->CoreTop__DOT__DIP__DOT__rf[31]),64);
        bufp->chgIData(oldp+475,(vlSelf->CoreTop__DOT__DIP__DOT__IN[0]),32);
        bufp->chgIData(oldp+476,(vlSelf->CoreTop__DOT__DIP__DOT__IN[1]),32);
        bufp->chgIData(oldp+477,(vlSelf->CoreTop__DOT__DIP__DOT__IN[2]),32);
        bufp->chgIData(oldp+478,(vlSelf->CoreTop__DOT__DIP__DOT__IN[3]),32);
        bufp->chgIData(oldp+479,(vlSelf->CoreTop__DOT__DIP__DOT__IN[4]),32);
        bufp->chgIData(oldp+480,(vlSelf->CoreTop__DOT__DIP__DOT__IN[5]),32);
        bufp->chgIData(oldp+481,(vlSelf->CoreTop__DOT__DIP__DOT__IN[6]),32);
        bufp->chgQData(oldp+482,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mepc_REG_1),64);
        bufp->chgQData(oldp+484,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mcause_REG_1),64);
        bufp->chgQData(oldp+486,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mstatus_REG_1),64);
        bufp->chgQData(oldp+488,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mtvec_REG_1),64);
        bufp->chgBit(oldp+490,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_valid));
        bufp->chgQData(oldp+491,(((IData)(vlSelf->CoreTop__DOT__EX__DOT__is_mul)
                                   ? vlSelf->CoreTop__DOT__EX__DOT__src1
                                   : (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__src1)))),64);
        bufp->chgQData(oldp+493,(((IData)(vlSelf->CoreTop__DOT__EX__DOT__is_mul)
                                   ? vlSelf->CoreTop__DOT__EX__DOT__src2
                                   : (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)))),64);
        bufp->chgBit(oldp+495,((0x44U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count))));
        bufp->chgQData(oldp+496,((((QData)((IData)(
                                                   vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[0U])))),64);
        bufp->chgBit(oldp+498,(vlSelf->CoreTop__DOT__EX__DOT__div_io_in_valid));
        bufp->chgBit(oldp+499,(vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_flow_div_signed));
        bufp->chgQData(oldp+500,(vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src1),64);
        bufp->chgQData(oldp+502,(vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src2),64);
        bufp->chgBit(oldp+504,((2U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state))));
        bufp->chgQData(oldp+505,(vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_quotient),64);
        bufp->chgQData(oldp+507,(vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_remainder),64);
        bufp->chgBit(oldp+509,(vlSelf->CoreTop__DOT__EX__DOT__is_mul));
        bufp->chgBit(oldp+510,(((((((0x43U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                                    | (0x13U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) 
                                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT___is_divw_T_2)) 
                                  | ((0x12U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                                     | (0xfU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)))) 
                                 | (IData)(vlSelf->CoreTop__DOT__EX__DOT____VdfgTmp_h08208b49__0)) 
                                & (IData)(vlSelf->CoreTop__DOT__EX__DOT____VdfgTmp_h1a4c5317__0))));
        bufp->chgBit(oldp+511,(vlSelf->CoreTop__DOT__EX__DOT__is_divw));
        bufp->chgQData(oldp+512,(vlSelf->CoreTop__DOT__EX__DOT__mepc),64);
        bufp->chgQData(oldp+514,(vlSelf->CoreTop__DOT__EX__DOT__mcause),64);
        bufp->chgQData(oldp+516,(vlSelf->CoreTop__DOT__EX__DOT__mstatus),64);
        bufp->chgQData(oldp+518,(vlSelf->CoreTop__DOT__EX__DOT__mtvec),64);
        bufp->chgQData(oldp+520,(vlSelf->CoreTop__DOT__EX__DOT__mie),64);
        bufp->chgQData(oldp+522,(vlSelf->CoreTop__DOT__EX__DOT__mip),64);
        bufp->chgBit(oldp+524,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+525,((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[0U] 
                                >> 0x1fU)));
        bufp->chgBit(oldp+526,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_quotient 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+527,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_remainder 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+528,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_10 
                                              >> 0x1fU)))));
        bufp->chgQData(oldp+529,(((0x40U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                   ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1
                                   : ((0x1aU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                       ? vlSelf->CoreTop__DOT__EX__DOT__src2
                                       : ((0x68U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                           ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_7
                                           : ((0x44U 
                                               == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                               ? (vlSelf->CoreTop__DOT__EX__DOT__src1 
                                                  | vlSelf->CoreTop__DOT__EX__DOT__src2)
                                               : ((0x69U 
                                                   == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                   ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_10
                                                   : 
                                                  ((0x71U 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? 
                                                   (vlSelf->CoreTop__DOT__EX__DOT__src1 
                                                    & vlSelf->CoreTop__DOT__EX__DOT__src2)
                                                    : vlSelf->CoreTop__DOT__EX__DOT___GEN_145))))))),64);
        __Vtemp_h052dcc23__0[0U] = (IData)(vlSelf->CoreTop__DOT__EX__DOT__src1);
        __Vtemp_h052dcc23__0[1U] = (IData)((vlSelf->CoreTop__DOT__EX__DOT__src1 
                                            >> 0x20U));
        __Vtemp_h052dcc23__0[2U] = 0U;
        VL_SHIFTL_WWI(95,95,5, __Vtemp_h0fbea1b2__0, __Vtemp_h052dcc23__0, 
                      (0x1fU & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)));
        bufp->chgBit(oldp+531,((__Vtemp_h0fbea1b2__0[0U] 
                                >> 0x1fU)));
        __Vtemp_h8004274a__0[0U] = (IData)(vlSelf->CoreTop__DOT__EX__DOT__src1);
        __Vtemp_h8004274a__0[1U] = 0U;
        __Vtemp_h8004274a__0[2U] = 0U;
        VL_SHIFTL_WWI(95,95,6, __Vtemp_h29cbf8c2__0, __Vtemp_h8004274a__0, 
                      (0x3fU & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)));
        bufp->chgBit(oldp+532,((__Vtemp_h29cbf8c2__0[0U] 
                                >> 0x1fU)));
        bufp->chgBit(oldp+533,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_25 
                                >> 0x1fU)));
        bufp->chgBit(oldp+534,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_31 
                                >> 0x1fU)));
        bufp->chgBit(oldp+535,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__src1 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+536,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__src2 
                                              >> 0x1fU)))));
        bufp->chgQData(oldp+537,(((0x6aU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                   ? ((IData)(vlSelf->CoreTop__DOT__EX__DOT___compar_result_T)
                                       ? 1ULL : 0ULL)
                                   : ((2U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                       ? ((IData)(vlSelf->CoreTop__DOT__EX__DOT___compar_result_T_4)
                                           ? 1ULL : 0ULL)
                                       : 0ULL))),64);
        bufp->chgQData(oldp+539,(((3U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType))
                                   ? (4ULL + vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC)
                                   : 0ULL)),64);
        bufp->chgQData(oldp+541,((((QData)((IData)(
                                                   ((0x6eU 
                                                     == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                     ? (IData)(
                                                               (VL_SHIFTRS_QQI(64,64,5, vlSelf->CoreTop__DOT__EX__DOT__src1, 
                                                                               (0x1fU 
                                                                                & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2))) 
                                                                >> 0x20U))
                                                     : 
                                                    vlSelf->CoreTop__DOT__EX__DOT___GEN_202[1U]))) 
                                   << 0x20U) | (QData)((IData)(
                                                               ((0x6eU 
                                                                 == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                                 ? (IData)(
                                                                           VL_SHIFTRS_QQI(64,64,5, vlSelf->CoreTop__DOT__EX__DOT__src1, 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2))))
                                                                 : 
                                                                vlSelf->CoreTop__DOT__EX__DOT___GEN_202[0U]))))),64);
        bufp->chgQData(oldp+543,(((0x6bU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                   ? vlSelf->CoreTop__DOT__EX__DOT___branch_result_T_1
                                   : ((0x6cU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                       ? vlSelf->CoreTop__DOT__EX__DOT___branch_result_T_1
                                       : ((0x76U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                           ? vlSelf->CoreTop__DOT__EX__DOT___branch_result_T_1
                                           : ((0x7bU 
                                               == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                               ? vlSelf->CoreTop__DOT__EX__DOT___branch_result_T_1
                                               : ((0xbU 
                                                   == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                   ? vlSelf->CoreTop__DOT__EX__DOT___branch_result_T_1
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? vlSelf->CoreTop__DOT__EX__DOT___branch_result_T_1
                                                    : 0ULL))))))),64);
        bufp->chgBit(oldp+545,(vlSelf->CoreTop__DOT__EX__DOT__branch_flag));
        bufp->chgQData(oldp+546,(vlSelf->CoreTop__DOT__EX__DOT__csr_data),64);
        bufp->chgQData(oldp+548,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mtvec_REG),64);
        bufp->chgQData(oldp+550,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mcause_REG),64);
        bufp->chgQData(oldp+552,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mepc_REG),64);
        bufp->chgQData(oldp+554,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mstatus_REG),64);
        bufp->chgBit(oldp+556,(vlSelf->CoreTop__DOT__EX__DOT__is_branch));
        bufp->chgBit(oldp+557,(vlSelf->CoreTop__DOT__EX__DOT__is_jump));
        bufp->chgQData(oldp+558,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[0]),64);
        bufp->chgQData(oldp+560,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[1]),64);
        bufp->chgQData(oldp+562,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[2]),64);
        bufp->chgQData(oldp+564,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[3]),64);
        bufp->chgQData(oldp+566,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[4]),64);
        bufp->chgQData(oldp+568,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[5]),64);
        bufp->chgWData(oldp+570,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend),128);
        bufp->chgQData(oldp+574,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divisor),64);
        bufp->chgQData(oldp+576,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S),64);
        bufp->chgCData(oldp+578,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state),2);
        bufp->chgCData(oldp+579,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__count),6);
        bufp->chgBit(oldp+580,((0x3fU == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__count))));
        bufp->chgBit(oldp+581,(((1U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state)) 
                                & (0x3fU == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__count)))));
        bufp->chgWData(oldp+582,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div),65);
        bufp->chgQData(oldp+585,((- vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S)),64);
        bufp->chgQData(oldp+587,((- (((QData)((IData)(
                                                      vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[2U]))))),64);
        bufp->chgQData(oldp+589,((((((0U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                                      ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_12
                                      : 0ULL) | ((1U 
                                                  == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                                                  ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_17
                                                  : 0ULL)) 
                                   | ((2U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                                       ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_17
                                       : 0ULL)) | (
                                                   (3U 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                                                    ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_12
                                                    : 0ULL))),64);
        bufp->chgQData(oldp+591,((((((0U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                                      ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_15
                                      : 0ULL) | ((1U 
                                                  == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                                                  ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_15
                                                  : 0ULL)) 
                                   | ((2U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                                       ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_25
                                       : 0ULL)) | (
                                                   (3U 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                                                    ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_25
                                                    : 0ULL))),64);
        bufp->chgCData(oldp+593,((7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U])),3);
        bufp->chgWData(oldp+594,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand),132);
        if ((0U == (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))) {
            __Vtemp_h559cd7fe__0[0U] = 0U;
            __Vtemp_h559cd7fe__0[1U] = 0U;
            __Vtemp_h559cd7fe__0[2U] = 0U;
            __Vtemp_h559cd7fe__0[3U] = 0U;
            __Vtemp_h559cd7fe__0[4U] = 0U;
        } else {
            __Vtemp_h559cd7fe__0[0U] = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[0U];
            __Vtemp_h559cd7fe__0[1U] = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[1U];
            __Vtemp_h559cd7fe__0[2U] = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[2U];
            __Vtemp_h559cd7fe__0[3U] = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[3U];
            __Vtemp_h559cd7fe__0[4U] = (0xfU & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[4U]);
        }
        bufp->chgWData(oldp+599,(__Vtemp_h559cd7fe__0),132);
        bufp->chgBit(oldp+604,(((0U != (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U])) 
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
                                                   & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))))))))));
        bufp->chgWData(oldp+605,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier),66);
        bufp->chgWData(oldp+608,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p),132);
        bufp->chgCData(oldp+613,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count),7);
        bufp->chgWData(oldp+614,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__temp),132);
        bufp->chgBit(oldp+619,((1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__temp[4U] 
                                      >> 3U))));
        bufp->chgBit(oldp+620,(((IData)(vlSelf->CoreTop__DOT__IF_io_cache_req_addr_req_valid) 
                                & (0U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)))));
        bufp->chgQData(oldp+621,(((3U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state))
                                   ? vlSelf->CoreTop__DOT__IF__DOT__temp
                                   : 0ULL)),64);
        bufp->chgBit(oldp+623,((3U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state))));
        bufp->chgCData(oldp+624,(((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r)
                                   ? 2U : 1U)),2);
        bufp->chgWData(oldp+625,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data),512);
        bufp->chgQData(oldp+641,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0
                                 [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_tag_w_addr_pipe_0]),53);
        bufp->chgQData(oldp+643,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1
                                 [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0]),53);
        bufp->chgBit(oldp+645,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0
                               [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0]));
        bufp->chgBit(oldp+646,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1
                               [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0]));
        __Vtemp_h6ff33a25__0[0U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][0U];
        __Vtemp_h6ff33a25__0[1U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][1U];
        __Vtemp_h6ff33a25__0[2U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][2U];
        __Vtemp_h6ff33a25__0[3U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][3U];
        __Vtemp_h6ff33a25__0[4U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][4U];
        __Vtemp_h6ff33a25__0[5U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][5U];
        __Vtemp_h6ff33a25__0[6U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][6U];
        __Vtemp_h6ff33a25__0[7U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][7U];
        __Vtemp_h6ff33a25__0[8U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][8U];
        __Vtemp_h6ff33a25__0[9U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][9U];
        __Vtemp_h6ff33a25__0[0xaU] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][0xaU];
        __Vtemp_h6ff33a25__0[0xbU] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][0xbU];
        __Vtemp_h6ff33a25__0[0xcU] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][0xcU];
        __Vtemp_h6ff33a25__0[0xdU] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][0xdU];
        __Vtemp_h6ff33a25__0[0xeU] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][0xeU];
        __Vtemp_h6ff33a25__0[0xfU] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][0xfU];
        bufp->chgWData(oldp+647,(__Vtemp_h6ff33a25__0),512);
        __Vtemp_he7310ca3__0[0U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][0U];
        __Vtemp_he7310ca3__0[1U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][1U];
        __Vtemp_he7310ca3__0[2U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][2U];
        __Vtemp_he7310ca3__0[3U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][3U];
        __Vtemp_he7310ca3__0[4U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][4U];
        __Vtemp_he7310ca3__0[5U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][5U];
        __Vtemp_he7310ca3__0[6U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][6U];
        __Vtemp_he7310ca3__0[7U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][7U];
        __Vtemp_he7310ca3__0[8U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][8U];
        __Vtemp_he7310ca3__0[9U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][9U];
        __Vtemp_he7310ca3__0[0xaU] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][0xaU];
        __Vtemp_he7310ca3__0[0xbU] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][0xbU];
        __Vtemp_he7310ca3__0[0xcU] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][0xcU];
        __Vtemp_he7310ca3__0[0xdU] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][0xdU];
        __Vtemp_he7310ca3__0[0xeU] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][0xeU];
        __Vtemp_he7310ca3__0[0xfU] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][0xfU];
        bufp->chgWData(oldp+663,(__Vtemp_he7310ca3__0),512);
        bufp->chgQData(oldp+679,((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                  >> 0xbU)),53);
        bufp->chgCData(oldp+681,((0x1fU & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                   >> 6U)))),5);
        bufp->chgCData(oldp+682,((0x3fU & (IData)(vlSelf->CoreTop__DOT__IF__DOT__temp))),6);
        bufp->chgBit(oldp+683,(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_in_valid_REG));
        bufp->chgBit(oldp+684,(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit));
        bufp->chgWData(oldp+685,(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data),512);
        bufp->chgBit(oldp+701,(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_0_result));
        bufp->chgBit(oldp+702,(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_1_result));
        bufp->chgBit(oldp+703,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[0]));
        bufp->chgBit(oldp+704,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[1]));
        bufp->chgBit(oldp+705,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[2]));
        bufp->chgBit(oldp+706,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[3]));
        bufp->chgBit(oldp+707,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[4]));
        bufp->chgBit(oldp+708,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[5]));
        bufp->chgBit(oldp+709,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[6]));
        bufp->chgBit(oldp+710,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[7]));
        bufp->chgBit(oldp+711,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[8]));
        bufp->chgBit(oldp+712,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[9]));
        bufp->chgBit(oldp+713,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[10]));
        bufp->chgBit(oldp+714,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[11]));
        bufp->chgBit(oldp+715,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[12]));
        bufp->chgBit(oldp+716,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[13]));
        bufp->chgBit(oldp+717,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[14]));
        bufp->chgBit(oldp+718,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[15]));
        bufp->chgBit(oldp+719,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[16]));
        bufp->chgBit(oldp+720,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[17]));
        bufp->chgBit(oldp+721,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[18]));
        bufp->chgBit(oldp+722,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[19]));
        bufp->chgBit(oldp+723,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[20]));
        bufp->chgBit(oldp+724,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[21]));
        bufp->chgBit(oldp+725,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[22]));
        bufp->chgBit(oldp+726,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[23]));
        bufp->chgBit(oldp+727,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[24]));
        bufp->chgBit(oldp+728,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[25]));
        bufp->chgBit(oldp+729,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[26]));
        bufp->chgBit(oldp+730,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[27]));
        bufp->chgBit(oldp+731,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[28]));
        bufp->chgBit(oldp+732,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[29]));
        bufp->chgBit(oldp+733,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[30]));
        bufp->chgBit(oldp+734,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[31]));
        bufp->chgBit(oldp+735,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_lru_w_MPORT_en_pipe_0));
        bufp->chgCData(oldp+736,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_lru_w_MPORT_addr_pipe_0),5);
        bufp->chgBit(oldp+737,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru
                               [vlSelf->CoreTop__DOT__ICACHE__DOT__lru_lru_w_MPORT_addr_pipe_0]));
        bufp->chgBit(oldp+738,(((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                & ((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                   & ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit) 
                                      & (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_0_result))))));
        bufp->chgBit(oldp+739,(((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                & ((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                   & ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit) 
                                      & (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_1_result))))));
        bufp->chgBit(oldp+740,(((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                & ((1U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                   & ((2U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                      & ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT___T_5) 
                                         & (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r)))))));
        bufp->chgBit(oldp+741,(((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                & ((1U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                   & ((2U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                      & ((~ (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r)) 
                                         & (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT___T_5)))))));
        bufp->chgCData(oldp+742,(vlSelf->CoreTop__DOT__ICACHE__DOT__state),3);
        bufp->chgCData(oldp+743,(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state),2);
        bufp->chgWData(oldp+744,(vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg),512);
        bufp->chgQData(oldp+760,(vlSelf->CoreTop__DOT__ICACHE__DOT__mem_addr_reg),64);
        bufp->chgBit(oldp+762,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r));
        bufp->chgQData(oldp+763,(((0U == (7U & (IData)(
                                                       (vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                        >> 3U))))
                                   ? (((QData)((IData)(
                                                       vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0U])))
                                   : ((1U == (7U & (IData)(
                                                           (vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                            >> 3U))))
                                       ? (((QData)((IData)(
                                                           vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[3U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[2U])))
                                       : ((2U == (7U 
                                                  & (IData)(
                                                            (vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                             >> 3U))))
                                           ? (((QData)((IData)(
                                                               vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[5U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[4U])))
                                           : ((3U == 
                                               (7U 
                                                & (IData)(
                                                          (vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                           >> 3U))))
                                               ? (((QData)((IData)(
                                                                   vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[7U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[6U])))
                                               : ((4U 
                                                   == 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                               >> 3U))))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[9U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[8U])))
                                                   : 
                                                  ((5U 
                                                    == 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                                >> 3U))))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xbU])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xaU])))
                                                    : 
                                                   ((6U 
                                                     == 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                                 >> 3U))))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xdU])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xcU])))
                                                     : 
                                                    ((7U 
                                                      == 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                                  >> 3U))))
                                                      ? 
                                                     (((QData)((IData)(
                                                                       vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xfU])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xeU])))
                                                      : 0ULL))))))))),64);
        bufp->chgQData(oldp+765,(((0U == (7U & (IData)(
                                                       (vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                        >> 3U))))
                                   ? (((QData)((IData)(
                                                       vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0U])))
                                   : ((1U == (7U & (IData)(
                                                           (vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                            >> 3U))))
                                       ? (((QData)((IData)(
                                                           vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[3U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[2U])))
                                       : ((2U == (7U 
                                                  & (IData)(
                                                            (vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                             >> 3U))))
                                           ? (((QData)((IData)(
                                                               vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[5U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[4U])))
                                           : ((3U == 
                                               (7U 
                                                & (IData)(
                                                          (vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                           >> 3U))))
                                               ? (((QData)((IData)(
                                                                   vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[7U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[6U])))
                                               : ((4U 
                                                   == 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                               >> 3U))))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[9U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[8U])))
                                                   : 
                                                  ((5U 
                                                    == 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                                >> 3U))))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xbU])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xaU])))
                                                    : 
                                                   ((6U 
                                                     == 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                                 >> 3U))))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xdU])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xcU])))
                                                     : 
                                                    ((7U 
                                                      == 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                                  >> 3U))))
                                                      ? 
                                                     (((QData)((IData)(
                                                                       vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xfU])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xeU])))
                                                      : 0ULL))))))))),64);
        bufp->chgWData(oldp+767,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[0]),512);
        bufp->chgWData(oldp+783,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[1]),512);
        bufp->chgWData(oldp+799,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[2]),512);
        bufp->chgWData(oldp+815,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[3]),512);
        bufp->chgWData(oldp+831,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[4]),512);
        bufp->chgWData(oldp+847,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[5]),512);
        bufp->chgWData(oldp+863,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[6]),512);
        bufp->chgWData(oldp+879,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[7]),512);
        bufp->chgWData(oldp+895,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[8]),512);
        bufp->chgWData(oldp+911,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[9]),512);
        bufp->chgWData(oldp+927,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[10]),512);
        bufp->chgWData(oldp+943,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[11]),512);
        bufp->chgWData(oldp+959,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[12]),512);
        bufp->chgWData(oldp+975,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[13]),512);
        bufp->chgWData(oldp+991,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[14]),512);
        bufp->chgWData(oldp+1007,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[15]),512);
        bufp->chgWData(oldp+1023,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[16]),512);
        bufp->chgWData(oldp+1039,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[17]),512);
        bufp->chgWData(oldp+1055,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[18]),512);
        bufp->chgWData(oldp+1071,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[19]),512);
        bufp->chgWData(oldp+1087,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[20]),512);
        bufp->chgWData(oldp+1103,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[21]),512);
        bufp->chgWData(oldp+1119,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[22]),512);
        bufp->chgWData(oldp+1135,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[23]),512);
        bufp->chgWData(oldp+1151,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[24]),512);
        bufp->chgWData(oldp+1167,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[25]),512);
        bufp->chgWData(oldp+1183,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[26]),512);
        bufp->chgWData(oldp+1199,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[27]),512);
        bufp->chgWData(oldp+1215,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[28]),512);
        bufp->chgWData(oldp+1231,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[29]),512);
        bufp->chgWData(oldp+1247,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[30]),512);
        bufp->chgWData(oldp+1263,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[31]),512);
        bufp->chgBit(oldp+1279,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_en_pipe_0));
        bufp->chgCData(oldp+1280,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0),5);
        bufp->chgCData(oldp+1281,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_addr),5);
        bufp->chgBit(oldp+1282,((1U & (~ (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r)))));
        bufp->chgWData(oldp+1283,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[0]),512);
        bufp->chgWData(oldp+1299,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[1]),512);
        bufp->chgWData(oldp+1315,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[2]),512);
        bufp->chgWData(oldp+1331,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[3]),512);
        bufp->chgWData(oldp+1347,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[4]),512);
        bufp->chgWData(oldp+1363,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[5]),512);
        bufp->chgWData(oldp+1379,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[6]),512);
        bufp->chgWData(oldp+1395,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[7]),512);
        bufp->chgWData(oldp+1411,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[8]),512);
        bufp->chgWData(oldp+1427,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[9]),512);
        bufp->chgWData(oldp+1443,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[10]),512);
        bufp->chgWData(oldp+1459,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[11]),512);
        bufp->chgWData(oldp+1475,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[12]),512);
        bufp->chgWData(oldp+1491,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[13]),512);
        bufp->chgWData(oldp+1507,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[14]),512);
        bufp->chgWData(oldp+1523,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[15]),512);
        bufp->chgWData(oldp+1539,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[16]),512);
        bufp->chgWData(oldp+1555,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[17]),512);
        bufp->chgWData(oldp+1571,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[18]),512);
        bufp->chgWData(oldp+1587,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[19]),512);
        bufp->chgWData(oldp+1603,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[20]),512);
        bufp->chgWData(oldp+1619,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[21]),512);
        bufp->chgWData(oldp+1635,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[22]),512);
        bufp->chgWData(oldp+1651,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[23]),512);
        bufp->chgWData(oldp+1667,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[24]),512);
        bufp->chgWData(oldp+1683,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[25]),512);
        bufp->chgWData(oldp+1699,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[26]),512);
        bufp->chgWData(oldp+1715,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[27]),512);
        bufp->chgWData(oldp+1731,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[28]),512);
        bufp->chgWData(oldp+1747,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[29]),512);
        bufp->chgWData(oldp+1763,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[30]),512);
        bufp->chgWData(oldp+1779,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[31]),512);
        bufp->chgBit(oldp+1795,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_en_pipe_0));
        bufp->chgQData(oldp+1796,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[0]),53);
        bufp->chgQData(oldp+1798,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[1]),53);
        bufp->chgQData(oldp+1800,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[2]),53);
        bufp->chgQData(oldp+1802,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[3]),53);
        bufp->chgQData(oldp+1804,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[4]),53);
        bufp->chgQData(oldp+1806,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[5]),53);
        bufp->chgQData(oldp+1808,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[6]),53);
        bufp->chgQData(oldp+1810,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[7]),53);
        bufp->chgQData(oldp+1812,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[8]),53);
        bufp->chgQData(oldp+1814,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[9]),53);
        bufp->chgQData(oldp+1816,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[10]),53);
        bufp->chgQData(oldp+1818,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[11]),53);
        bufp->chgQData(oldp+1820,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[12]),53);
        bufp->chgQData(oldp+1822,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[13]),53);
        bufp->chgQData(oldp+1824,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[14]),53);
        bufp->chgQData(oldp+1826,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[15]),53);
        bufp->chgQData(oldp+1828,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[16]),53);
        bufp->chgQData(oldp+1830,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[17]),53);
        bufp->chgQData(oldp+1832,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[18]),53);
        bufp->chgQData(oldp+1834,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[19]),53);
        bufp->chgQData(oldp+1836,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[20]),53);
        bufp->chgQData(oldp+1838,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[21]),53);
        bufp->chgQData(oldp+1840,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[22]),53);
        bufp->chgQData(oldp+1842,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[23]),53);
        bufp->chgQData(oldp+1844,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[24]),53);
        bufp->chgQData(oldp+1846,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[25]),53);
        bufp->chgQData(oldp+1848,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[26]),53);
        bufp->chgQData(oldp+1850,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[27]),53);
        bufp->chgQData(oldp+1852,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[28]),53);
        bufp->chgQData(oldp+1854,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[29]),53);
        bufp->chgQData(oldp+1856,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[30]),53);
        bufp->chgQData(oldp+1858,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[31]),53);
        bufp->chgBit(oldp+1860,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_tag_w_en_pipe_0));
        bufp->chgCData(oldp+1861,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_tag_w_addr_pipe_0),5);
        bufp->chgQData(oldp+1862,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_MPORT_1_data),53);
        bufp->chgQData(oldp+1864,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[0]),53);
        bufp->chgQData(oldp+1866,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[1]),53);
        bufp->chgQData(oldp+1868,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[2]),53);
        bufp->chgQData(oldp+1870,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[3]),53);
        bufp->chgQData(oldp+1872,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[4]),53);
        bufp->chgQData(oldp+1874,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[5]),53);
        bufp->chgQData(oldp+1876,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[6]),53);
        bufp->chgQData(oldp+1878,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[7]),53);
        bufp->chgQData(oldp+1880,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[8]),53);
        bufp->chgQData(oldp+1882,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[9]),53);
        bufp->chgQData(oldp+1884,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[10]),53);
        bufp->chgQData(oldp+1886,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[11]),53);
        bufp->chgQData(oldp+1888,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[12]),53);
        bufp->chgQData(oldp+1890,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[13]),53);
        bufp->chgQData(oldp+1892,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[14]),53);
        bufp->chgQData(oldp+1894,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[15]),53);
        bufp->chgQData(oldp+1896,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[16]),53);
        bufp->chgQData(oldp+1898,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[17]),53);
        bufp->chgQData(oldp+1900,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[18]),53);
        bufp->chgQData(oldp+1902,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[19]),53);
        bufp->chgQData(oldp+1904,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[20]),53);
        bufp->chgQData(oldp+1906,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[21]),53);
        bufp->chgQData(oldp+1908,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[22]),53);
        bufp->chgQData(oldp+1910,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[23]),53);
        bufp->chgQData(oldp+1912,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[24]),53);
        bufp->chgQData(oldp+1914,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[25]),53);
        bufp->chgQData(oldp+1916,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[26]),53);
        bufp->chgQData(oldp+1918,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[27]),53);
        bufp->chgQData(oldp+1920,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[28]),53);
        bufp->chgQData(oldp+1922,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[29]),53);
        bufp->chgQData(oldp+1924,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[30]),53);
        bufp->chgQData(oldp+1926,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[31]),53);
        bufp->chgBit(oldp+1928,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_en_pipe_0));
        bufp->chgBit(oldp+1929,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[0]));
        bufp->chgBit(oldp+1930,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[1]));
        bufp->chgBit(oldp+1931,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[2]));
        bufp->chgBit(oldp+1932,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[3]));
        bufp->chgBit(oldp+1933,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[4]));
        bufp->chgBit(oldp+1934,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[5]));
        bufp->chgBit(oldp+1935,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[6]));
        bufp->chgBit(oldp+1936,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[7]));
        bufp->chgBit(oldp+1937,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[8]));
        bufp->chgBit(oldp+1938,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[9]));
        bufp->chgBit(oldp+1939,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[10]));
        bufp->chgBit(oldp+1940,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[11]));
        bufp->chgBit(oldp+1941,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[12]));
        bufp->chgBit(oldp+1942,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[13]));
        bufp->chgBit(oldp+1943,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[14]));
        bufp->chgBit(oldp+1944,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[15]));
        bufp->chgBit(oldp+1945,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[16]));
        bufp->chgBit(oldp+1946,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[17]));
        bufp->chgBit(oldp+1947,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[18]));
        bufp->chgBit(oldp+1948,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[19]));
        bufp->chgBit(oldp+1949,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[20]));
        bufp->chgBit(oldp+1950,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[21]));
        bufp->chgBit(oldp+1951,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[22]));
        bufp->chgBit(oldp+1952,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[23]));
        bufp->chgBit(oldp+1953,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[24]));
        bufp->chgBit(oldp+1954,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[25]));
        bufp->chgBit(oldp+1955,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[26]));
        bufp->chgBit(oldp+1956,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[27]));
        bufp->chgBit(oldp+1957,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[28]));
        bufp->chgBit(oldp+1958,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[29]));
        bufp->chgBit(oldp+1959,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[30]));
        bufp->chgBit(oldp+1960,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[31]));
        bufp->chgBit(oldp+1961,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_en_pipe_0));
        bufp->chgCData(oldp+1962,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0),5);
        bufp->chgBit(oldp+1963,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[0]));
        bufp->chgBit(oldp+1964,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[1]));
        bufp->chgBit(oldp+1965,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[2]));
        bufp->chgBit(oldp+1966,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[3]));
        bufp->chgBit(oldp+1967,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[4]));
        bufp->chgBit(oldp+1968,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[5]));
        bufp->chgBit(oldp+1969,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[6]));
        bufp->chgBit(oldp+1970,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[7]));
        bufp->chgBit(oldp+1971,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[8]));
        bufp->chgBit(oldp+1972,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[9]));
        bufp->chgBit(oldp+1973,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[10]));
        bufp->chgBit(oldp+1974,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[11]));
        bufp->chgBit(oldp+1975,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[12]));
        bufp->chgBit(oldp+1976,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[13]));
        bufp->chgBit(oldp+1977,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[14]));
        bufp->chgBit(oldp+1978,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[15]));
        bufp->chgBit(oldp+1979,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[16]));
        bufp->chgBit(oldp+1980,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[17]));
        bufp->chgBit(oldp+1981,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[18]));
        bufp->chgBit(oldp+1982,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[19]));
        bufp->chgBit(oldp+1983,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[20]));
        bufp->chgBit(oldp+1984,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[21]));
        bufp->chgBit(oldp+1985,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[22]));
        bufp->chgBit(oldp+1986,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[23]));
        bufp->chgBit(oldp+1987,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[24]));
        bufp->chgBit(oldp+1988,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[25]));
        bufp->chgBit(oldp+1989,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[26]));
        bufp->chgBit(oldp+1990,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[27]));
        bufp->chgBit(oldp+1991,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[28]));
        bufp->chgBit(oldp+1992,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[29]));
        bufp->chgBit(oldp+1993,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[30]));
        bufp->chgBit(oldp+1994,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[31]));
        bufp->chgBit(oldp+1995,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_en_pipe_0));
        bufp->chgCData(oldp+1996,(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0),4);
        bufp->chgBit(oldp+1997,(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_3));
        bufp->chgCData(oldp+1998,((((7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                     ? 2U : 0U) | (
                                                   (3U 
                                                    == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                                    ? 2U
                                                    : 0U))),2);
        bufp->chgBit(oldp+1999,(((8U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)) 
                                 | ((7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)) 
                                    | (3U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))))));
        bufp->chgBit(oldp+2000,((vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                 >> 0x1fU)));
        bufp->chgBit(oldp+2001,((1U & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                       >> 0x13U))));
        bufp->chgBit(oldp+2002,((((IData)(vlSelf->CoreTop__DOT__valid) 
                                  & ((4U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType)) 
                                     & ((((0xeU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                                          | (0x6fU 
                                             == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) 
                                         | ((0x45U 
                                             == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                                            | ((3U 
                                                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                                               | (4U 
                                                  == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))))) 
                                        | ((0x47U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                                           | (0x11U 
                                              == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)))))) 
                                 & ((IData)(vlSelf->CoreTop__DOT__ID_io_ex_reg_rfWen) 
                                    & ((IData)(vlSelf->__VdfgTmp_ha116befc__0) 
                                       | (IData)(vlSelf->__VdfgTmp_ha248cb35__0))))));
        bufp->chgQData(oldp+2003,(vlSelf->CoreTop__DOT__IF__DOT__temp),64);
        bufp->chgIData(oldp+2005,(((1U & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                  >> 2U)))
                                    ? (IData)((vlSelf->CoreTop__DOT__IF_io_cache_req_rdata_rep_bits_rdata 
                                               >> 0x20U))
                                    : (IData)(vlSelf->CoreTop__DOT__IF_io_cache_req_rdata_rep_bits_rdata))),32);
        bufp->chgCData(oldp+2006,(vlSelf->CoreTop__DOT__MMEM__DOT__read_state),2);
        bufp->chgCData(oldp+2007,(vlSelf->CoreTop__DOT__MMEM__DOT__write_state),2);
        bufp->chgCData(oldp+2008,(vlSelf->CoreTop__DOT__MMEM__DOT__read_next_state),2);
        bufp->chgCData(oldp+2009,(vlSelf->CoreTop__DOT__MMEM__DOT__write_next_state),2);
        bufp->chgQData(oldp+2010,(vlSelf->CoreTop__DOT__MMEM__DOT__write_addr_buffer),64);
        bufp->chgQData(oldp+2012,(vlSelf->CoreTop__DOT__MMEM__DOT__read_addr_buffer),64);
        bufp->chgCData(oldp+2014,(vlSelf->CoreTop__DOT__MMEM__DOT__read_count),8);
        bufp->chgBit(oldp+2015,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_valid));
        bufp->chgBit(oldp+2016,((1U & (~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)))));
        bufp->chgBit(oldp+2017,(((~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_bits_we)) 
                                 & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_bits_rdata_T_1) 
                                    | (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_valid_T_4)))));
        bufp->chgQData(oldp+2018,(((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_bits_rdata_T_1)
                                    ? ((0U == (7U & (IData)(
                                                            (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                             >> 3U))))
                                        ? (((QData)((IData)(
                                                            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0U])))
                                        : ((1U == (7U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                              >> 3U))))
                                            ? (((QData)((IData)(
                                                                vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[2U])))
                                            : ((2U 
                                                == 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                            >> 3U))))
                                                ? (
                                                   ((QData)((IData)(
                                                                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[5U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[4U])))
                                                : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                                >> 3U))))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[7U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[6U])))
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                                 >> 3U))))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[9U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[8U])))
                                                     : 
                                                    ((5U 
                                                      == 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                                  >> 3U))))
                                                      ? 
                                                     (((QData)((IData)(
                                                                       vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xbU])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xaU])))
                                                      : 
                                                     ((6U 
                                                       == 
                                                       (7U 
                                                        & (IData)(
                                                                  (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                                   >> 3U))))
                                                       ? 
                                                      (((QData)((IData)(
                                                                        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xdU])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xcU])))
                                                       : 
                                                      ((7U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                                    >> 3U))))
                                                        ? 
                                                       (((QData)((IData)(
                                                                         vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xfU])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xeU])))
                                                        : 0ULL))))))))
                                    : ((0U == (7U & (IData)(
                                                            (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                             >> 3U))))
                                        ? (((QData)((IData)(
                                                            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0U])))
                                        : ((1U == (7U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                              >> 3U))))
                                            ? (((QData)((IData)(
                                                                vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[2U])))
                                            : ((2U 
                                                == 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                            >> 3U))))
                                                ? (
                                                   ((QData)((IData)(
                                                                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[5U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[4U])))
                                                : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                                >> 3U))))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[7U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[6U])))
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                                 >> 3U))))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[9U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[8U])))
                                                     : 
                                                    ((5U 
                                                      == 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                                  >> 3U))))
                                                      ? 
                                                     (((QData)((IData)(
                                                                       vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xbU])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xaU])))
                                                      : 
                                                     ((6U 
                                                       == 
                                                       (7U 
                                                        & (IData)(
                                                                  (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                                   >> 3U))))
                                                       ? 
                                                      (((QData)((IData)(
                                                                        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xdU])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xcU])))
                                                       : 
                                                      ((7U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                                    >> 3U))))
                                                        ? 
                                                       (((QData)((IData)(
                                                                         vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xfU])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xeU])))
                                                        : 0ULL)))))))))),64);
        bufp->chgBit(oldp+2020,(((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___Cache_data_io_write_bus_valid_T_3) 
                                 | ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_valid_T_4) 
                                    & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_bits_we)))));
        bufp->chgBit(oldp+2021,(((~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)) 
                                 & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_ready))));
        bufp->chgBit(oldp+2022,((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state))));
        bufp->chgQData(oldp+2023,(((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state))
                                    ? vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_addr_reg
                                    : 0ULL)),64);
        bufp->chgBit(oldp+2025,(((~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)) 
                                 & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_ready))));
        bufp->chgBit(oldp+2026,((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state))));
        bufp->chgQData(oldp+2027,(((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state))
                                    ? vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_addr_reg
                                    : 0ULL)),64);
        bufp->chgBit(oldp+2029,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_rdata_rep_valid));
        bufp->chgBit(oldp+2030,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_wdata_req_ready));
        bufp->chgBit(oldp+2031,((2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state))));
        bufp->chgQData(oldp+2032,((((QData)((IData)(
                                                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0U])))),64);
        bufp->chgBit(oldp+2034,((7U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count_write))));
        bufp->chgBit(oldp+2035,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_wb_valid));
        bufp->chgBit(oldp+2036,(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_addr_req_valid));
        bufp->chgBit(oldp+2037,(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready));
        bufp->chgBit(oldp+2038,(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_valid));
        bufp->chgBit(oldp+2039,(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_out_wb_valid));
        bufp->chgBit(oldp+2040,(((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready) 
                                 & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_ready))));
        bufp->chgBit(oldp+2041,((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__read_state))));
        bufp->chgBit(oldp+2042,(((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready) 
                                 & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_ready))));
        bufp->chgBit(oldp+2043,((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state))));
        bufp->chgBit(oldp+2044,(((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready) 
                                 & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_ready))));
        bufp->chgBit(oldp+2045,((2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state))));
        bufp->chgBit(oldp+2046,((3U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state))));
        bufp->chgBit(oldp+2047,(((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_valid) 
                                 & (0U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)))));
        bufp->chgQData(oldp+2048,(((IData)(vlSelf->__VdfgTmp_h5a5a8c61__0)
                                    ? vlSelf->CoreTop__DOT__MEM__DOT__addr_temp
                                    : 0ULL)),64);
        bufp->chgBit(oldp+2050,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_en));
        bufp->chgCData(oldp+2051,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_waymask),2);
        bufp->chgWData(oldp+2052,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data),512);
        bufp->chgQData(oldp+2068,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_tag_w_data),53);
        bufp->chgQData(oldp+2070,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1_tag_w_data),53);
        bufp->chgBit(oldp+2072,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0
                                [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0]));
        bufp->chgBit(oldp+2073,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1
                                [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0]));
        bufp->chgWData(oldp+2074,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data),512);
        bufp->chgWData(oldp+2090,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data),512);
        bufp->chgQData(oldp+2106,((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                   >> 0xbU)),53);
        bufp->chgCData(oldp+2108,((0x1fU & (IData)(
                                                   (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                    >> 6U)))),5);
        bufp->chgCData(oldp+2109,((0x3fU & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp))),6);
        bufp->chgBit(oldp+2110,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_in_valid_REG));
        bufp->chgBit(oldp+2111,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit));
        bufp->chgWData(oldp+2112,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data),512);
        bufp->chgBit(oldp+2128,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_0_result));
        bufp->chgBit(oldp+2129,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_1_result));
        bufp->chgBit(oldp+2130,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[0]));
        bufp->chgBit(oldp+2131,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[1]));
        bufp->chgBit(oldp+2132,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[2]));
        bufp->chgBit(oldp+2133,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[3]));
        bufp->chgBit(oldp+2134,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[4]));
        bufp->chgBit(oldp+2135,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[5]));
        bufp->chgBit(oldp+2136,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[6]));
        bufp->chgBit(oldp+2137,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[7]));
        bufp->chgBit(oldp+2138,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[8]));
        bufp->chgBit(oldp+2139,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[9]));
        bufp->chgBit(oldp+2140,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[10]));
        bufp->chgBit(oldp+2141,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[11]));
        bufp->chgBit(oldp+2142,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[12]));
        bufp->chgBit(oldp+2143,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[13]));
        bufp->chgBit(oldp+2144,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[14]));
        bufp->chgBit(oldp+2145,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[15]));
        bufp->chgBit(oldp+2146,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[16]));
        bufp->chgBit(oldp+2147,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[17]));
        bufp->chgBit(oldp+2148,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[18]));
        bufp->chgBit(oldp+2149,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[19]));
        bufp->chgBit(oldp+2150,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[20]));
        bufp->chgBit(oldp+2151,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[21]));
        bufp->chgBit(oldp+2152,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[22]));
        bufp->chgBit(oldp+2153,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[23]));
        bufp->chgBit(oldp+2154,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[24]));
        bufp->chgBit(oldp+2155,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[25]));
        bufp->chgBit(oldp+2156,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[26]));
        bufp->chgBit(oldp+2157,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[27]));
        bufp->chgBit(oldp+2158,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[28]));
        bufp->chgBit(oldp+2159,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[29]));
        bufp->chgBit(oldp+2160,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[30]));
        bufp->chgBit(oldp+2161,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[31]));
        bufp->chgBit(oldp+2162,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_en_pipe_0));
        bufp->chgCData(oldp+2163,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_addr_pipe_0),5);
        bufp->chgBit(oldp+2164,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_data));
        bufp->chgBit(oldp+2165,(((0U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                 & ((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                    & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit) 
                                       & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_0_result))))));
        bufp->chgBit(oldp+2166,(((0U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                 & ((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                    & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit) 
                                       & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_1_result))))));
        bufp->chgBit(oldp+2167,(((0U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                 & ((1U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                    & ((2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                       & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___T_8) 
                                          & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_r)))))));
        bufp->chgBit(oldp+2168,(((0U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                 & ((1U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                    & ((2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                       & ((~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_r)) 
                                          & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___T_8)))))));
        bufp->chgBit(oldp+2169,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[0]));
        bufp->chgBit(oldp+2170,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[1]));
        bufp->chgBit(oldp+2171,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[2]));
        bufp->chgBit(oldp+2172,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[3]));
        bufp->chgBit(oldp+2173,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[4]));
        bufp->chgBit(oldp+2174,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[5]));
        bufp->chgBit(oldp+2175,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[6]));
        bufp->chgBit(oldp+2176,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[7]));
        bufp->chgBit(oldp+2177,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[8]));
        bufp->chgBit(oldp+2178,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[9]));
        bufp->chgBit(oldp+2179,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[10]));
        bufp->chgBit(oldp+2180,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[11]));
        bufp->chgBit(oldp+2181,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[12]));
        bufp->chgBit(oldp+2182,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[13]));
        bufp->chgBit(oldp+2183,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[14]));
        bufp->chgBit(oldp+2184,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[15]));
        bufp->chgBit(oldp+2185,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[16]));
        bufp->chgBit(oldp+2186,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[17]));
        bufp->chgBit(oldp+2187,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[18]));
        bufp->chgBit(oldp+2188,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[19]));
        bufp->chgBit(oldp+2189,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[20]));
        bufp->chgBit(oldp+2190,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[21]));
        bufp->chgBit(oldp+2191,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[22]));
        bufp->chgBit(oldp+2192,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[23]));
        bufp->chgBit(oldp+2193,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[24]));
        bufp->chgBit(oldp+2194,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[25]));
        bufp->chgBit(oldp+2195,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[26]));
        bufp->chgBit(oldp+2196,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[27]));
        bufp->chgBit(oldp+2197,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[28]));
        bufp->chgBit(oldp+2198,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[29]));
        bufp->chgBit(oldp+2199,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[30]));
        bufp->chgBit(oldp+2200,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[31]));
        bufp->chgBit(oldp+2201,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0_dirt_w_en_pipe_0));
        bufp->chgCData(oldp+2202,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0_dirt_w_addr_pipe_0),5);
        bufp->chgBit(oldp+2203,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0
                                [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0_dirt_w_addr_pipe_0]));
        bufp->chgBit(oldp+2204,((1U & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_waymask))));
        bufp->chgBit(oldp+2205,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0_MPORT_4_en));
        bufp->chgBit(oldp+2206,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[0]));
        bufp->chgBit(oldp+2207,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[1]));
        bufp->chgBit(oldp+2208,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[2]));
        bufp->chgBit(oldp+2209,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[3]));
        bufp->chgBit(oldp+2210,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[4]));
        bufp->chgBit(oldp+2211,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[5]));
        bufp->chgBit(oldp+2212,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[6]));
        bufp->chgBit(oldp+2213,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[7]));
        bufp->chgBit(oldp+2214,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[8]));
        bufp->chgBit(oldp+2215,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[9]));
        bufp->chgBit(oldp+2216,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[10]));
        bufp->chgBit(oldp+2217,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[11]));
        bufp->chgBit(oldp+2218,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[12]));
        bufp->chgBit(oldp+2219,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[13]));
        bufp->chgBit(oldp+2220,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[14]));
        bufp->chgBit(oldp+2221,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[15]));
        bufp->chgBit(oldp+2222,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[16]));
        bufp->chgBit(oldp+2223,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[17]));
        bufp->chgBit(oldp+2224,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[18]));
        bufp->chgBit(oldp+2225,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[19]));
        bufp->chgBit(oldp+2226,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[20]));
        bufp->chgBit(oldp+2227,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[21]));
        bufp->chgBit(oldp+2228,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[22]));
        bufp->chgBit(oldp+2229,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[23]));
        bufp->chgBit(oldp+2230,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[24]));
        bufp->chgBit(oldp+2231,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[25]));
        bufp->chgBit(oldp+2232,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[26]));
        bufp->chgBit(oldp+2233,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[27]));
        bufp->chgBit(oldp+2234,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[28]));
        bufp->chgBit(oldp+2235,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[29]));
        bufp->chgBit(oldp+2236,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[30]));
        bufp->chgBit(oldp+2237,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[31]));
        bufp->chgBit(oldp+2238,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1_dirt_w_en_pipe_0));
        bufp->chgCData(oldp+2239,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1_dirt_w_addr_pipe_0),5);
        bufp->chgBit(oldp+2240,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1
                                [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1_dirt_w_addr_pipe_0]));
        bufp->chgBit(oldp+2241,((1U & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_waymask) 
                                       >> 1U))));
        bufp->chgCData(oldp+2242,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state),3);
        bufp->chgCData(oldp+2243,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state),2);
        bufp->chgCData(oldp+2244,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state),2);
        bufp->chgWData(oldp+2245,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg),512);
        bufp->chgQData(oldp+2261,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_addr_reg),64);
        bufp->chgBit(oldp+2263,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_r));
        bufp->chgCData(oldp+2264,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count_write),4);
        bufp->chgQData(oldp+2265,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_addr_reg),64);
        bufp->chgWData(oldp+2267,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg),512);
        bufp->chgQData(oldp+2283,(((0U == (7U & (IData)(
                                                        (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                         >> 3U))))
                                    ? (((QData)((IData)(
                                                        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0U])))
                                    : ((1U == (7U & (IData)(
                                                            (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                             >> 3U))))
                                        ? (((QData)((IData)(
                                                            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[3U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[2U])))
                                        : ((2U == (7U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                              >> 3U))))
                                            ? (((QData)((IData)(
                                                                vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[5U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[4U])))
                                            : ((3U 
                                                == 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                            >> 3U))))
                                                ? (
                                                   ((QData)((IData)(
                                                                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[7U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[6U])))
                                                : (
                                                   (4U 
                                                    == 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                                >> 3U))))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[9U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[8U])))
                                                    : 
                                                   ((5U 
                                                     == 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                                 >> 3U))))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xbU])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xaU])))
                                                     : 
                                                    ((6U 
                                                      == 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                                  >> 3U))))
                                                      ? 
                                                     (((QData)((IData)(
                                                                       vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xdU])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xcU])))
                                                      : 
                                                     ((7U 
                                                       == 
                                                       (7U 
                                                        & (IData)(
                                                                  (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                                   >> 3U))))
                                                       ? 
                                                      (((QData)((IData)(
                                                                        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xfU])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xeU])))
                                                       : 0ULL))))))))),64);
        bufp->chgQData(oldp+2285,(((0U == (7U & (IData)(
                                                        (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                         >> 3U))))
                                    ? (((QData)((IData)(
                                                        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0U])))
                                    : ((1U == (7U & (IData)(
                                                            (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                             >> 3U))))
                                        ? (((QData)((IData)(
                                                            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[3U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[2U])))
                                        : ((2U == (7U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                              >> 3U))))
                                            ? (((QData)((IData)(
                                                                vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[5U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[4U])))
                                            : ((3U 
                                                == 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                            >> 3U))))
                                                ? (
                                                   ((QData)((IData)(
                                                                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[7U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[6U])))
                                                : (
                                                   (4U 
                                                    == 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                                >> 3U))))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[9U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[8U])))
                                                    : 
                                                   ((5U 
                                                     == 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                                 >> 3U))))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xbU])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xaU])))
                                                     : 
                                                    ((6U 
                                                      == 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                                  >> 3U))))
                                                      ? 
                                                     (((QData)((IData)(
                                                                       vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xdU])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xcU])))
                                                      : 
                                                     ((7U 
                                                       == 
                                                       (7U 
                                                        & (IData)(
                                                                  (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                                   >> 3U))))
                                                       ? 
                                                      (((QData)((IData)(
                                                                        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xfU])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xeU])))
                                                       : 0ULL))))))))),64);
        bufp->chgQData(oldp+2287,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask),64);
        bufp->chgQData(oldp+2289,((((QData)((IData)(
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                 >> 7U)))
                                                      ? 0xffU
                                                      : 0U))) 
                                    << 0x38U) | (((QData)((IData)(
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
                                                                                 : 0U))))))))))),64);
        bufp->chgWData(oldp+2291,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo_lo),128);
        bufp->chgQData(oldp+2295,((((QData)((IData)(
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                 >> 0x17U)))
                                                      ? 0xffU
                                                      : 0U))) 
                                    << 0x38U) | (((QData)((IData)(
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
                                                                                 : 0U))))))))))),64);
        bufp->chgWData(oldp+2297,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo),256);
        bufp->chgQData(oldp+2305,((((QData)((IData)(
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                 >> 0x27U)))
                                                      ? 0xffU
                                                      : 0U))) 
                                    << 0x38U) | (((QData)((IData)(
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
                                                                                 : 0U))))))))))),64);
        bufp->chgWData(oldp+2307,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi_lo),128);
        bufp->chgQData(oldp+2311,((((QData)((IData)(
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                 >> 0x37U)))
                                                      ? 0xffU
                                                      : 0U))) 
                                    << 0x38U) | (((QData)((IData)(
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
                                                                                 : 0U))))))))))),64);
        bufp->chgWData(oldp+2313,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi),256);
        bufp->chgWData(oldp+2321,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend),512);
        __Vtemp_hc34456c3__0[0U] = (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata);
        __Vtemp_hc34456c3__0[1U] = (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata 
                                            >> 0x20U));
        __Vtemp_hc34456c3__0[2U] = (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata);
        __Vtemp_hc34456c3__0[3U] = (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata 
                                            >> 0x20U));
        __Vtemp_hc34456c3__0[4U] = (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata);
        __Vtemp_hc34456c3__0[5U] = (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata 
                                            >> 0x20U));
        __Vtemp_hc34456c3__0[6U] = (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata);
        __Vtemp_hc34456c3__0[7U] = (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata 
                                            >> 0x20U));
        __Vtemp_hc34456c3__0[8U] = (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata);
        __Vtemp_hc34456c3__0[9U] = (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata 
                                            >> 0x20U));
        __Vtemp_hc34456c3__0[0xaU] = (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata);
        __Vtemp_hc34456c3__0[0xbU] = (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata 
                                              >> 0x20U));
        __Vtemp_hc34456c3__0[0xcU] = (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata);
        __Vtemp_hc34456c3__0[0xdU] = (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata 
                                              >> 0x20U));
        __Vtemp_hc34456c3__0[0xeU] = (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata);
        __Vtemp_hc34456c3__0[0xfU] = (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata 
                                              >> 0x20U));
        bufp->chgWData(oldp+2337,(__Vtemp_hc34456c3__0),512);
        bufp->chgWData(oldp+2353,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[0]),512);
        bufp->chgWData(oldp+2369,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[1]),512);
        bufp->chgWData(oldp+2385,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[2]),512);
        bufp->chgWData(oldp+2401,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[3]),512);
        bufp->chgWData(oldp+2417,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[4]),512);
        bufp->chgWData(oldp+2433,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[5]),512);
        bufp->chgWData(oldp+2449,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[6]),512);
        bufp->chgWData(oldp+2465,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[7]),512);
        bufp->chgWData(oldp+2481,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[8]),512);
        bufp->chgWData(oldp+2497,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[9]),512);
        bufp->chgWData(oldp+2513,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[10]),512);
        bufp->chgWData(oldp+2529,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[11]),512);
        bufp->chgWData(oldp+2545,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[12]),512);
        bufp->chgWData(oldp+2561,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[13]),512);
        bufp->chgWData(oldp+2577,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[14]),512);
        bufp->chgWData(oldp+2593,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[15]),512);
        bufp->chgWData(oldp+2609,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[16]),512);
        bufp->chgWData(oldp+2625,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[17]),512);
        bufp->chgWData(oldp+2641,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[18]),512);
        bufp->chgWData(oldp+2657,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[19]),512);
        bufp->chgWData(oldp+2673,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[20]),512);
        bufp->chgWData(oldp+2689,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[21]),512);
        bufp->chgWData(oldp+2705,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[22]),512);
        bufp->chgWData(oldp+2721,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[23]),512);
        bufp->chgWData(oldp+2737,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[24]),512);
        bufp->chgWData(oldp+2753,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[25]),512);
        bufp->chgWData(oldp+2769,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[26]),512);
        bufp->chgWData(oldp+2785,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[27]),512);
        bufp->chgWData(oldp+2801,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[28]),512);
        bufp->chgWData(oldp+2817,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[29]),512);
        bufp->chgWData(oldp+2833,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[30]),512);
        bufp->chgWData(oldp+2849,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[31]),512);
        bufp->chgBit(oldp+2865,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_en_pipe_0));
        bufp->chgCData(oldp+2866,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0),5);
        bufp->chgCData(oldp+2867,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_addr),5);
        bufp->chgWData(oldp+2868,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[0]),512);
        bufp->chgWData(oldp+2884,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[1]),512);
        bufp->chgWData(oldp+2900,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[2]),512);
        bufp->chgWData(oldp+2916,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[3]),512);
        bufp->chgWData(oldp+2932,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[4]),512);
        bufp->chgWData(oldp+2948,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[5]),512);
        bufp->chgWData(oldp+2964,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[6]),512);
        bufp->chgWData(oldp+2980,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[7]),512);
        bufp->chgWData(oldp+2996,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[8]),512);
        bufp->chgWData(oldp+3012,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[9]),512);
        bufp->chgWData(oldp+3028,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[10]),512);
        bufp->chgWData(oldp+3044,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[11]),512);
        bufp->chgWData(oldp+3060,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[12]),512);
        bufp->chgWData(oldp+3076,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[13]),512);
        bufp->chgWData(oldp+3092,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[14]),512);
        bufp->chgWData(oldp+3108,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[15]),512);
        bufp->chgWData(oldp+3124,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[16]),512);
        bufp->chgWData(oldp+3140,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[17]),512);
        bufp->chgWData(oldp+3156,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[18]),512);
        bufp->chgWData(oldp+3172,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[19]),512);
        bufp->chgWData(oldp+3188,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[20]),512);
        bufp->chgWData(oldp+3204,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[21]),512);
        bufp->chgWData(oldp+3220,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[22]),512);
        bufp->chgWData(oldp+3236,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[23]),512);
        bufp->chgWData(oldp+3252,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[24]),512);
        bufp->chgWData(oldp+3268,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[25]),512);
        bufp->chgWData(oldp+3284,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[26]),512);
        bufp->chgWData(oldp+3300,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[27]),512);
        bufp->chgWData(oldp+3316,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[28]),512);
        bufp->chgWData(oldp+3332,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[29]),512);
        bufp->chgWData(oldp+3348,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[30]),512);
        bufp->chgWData(oldp+3364,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[31]),512);
        bufp->chgBit(oldp+3380,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_en_pipe_0));
        bufp->chgQData(oldp+3381,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[0]),53);
        bufp->chgQData(oldp+3383,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[1]),53);
        bufp->chgQData(oldp+3385,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[2]),53);
        bufp->chgQData(oldp+3387,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[3]),53);
        bufp->chgQData(oldp+3389,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[4]),53);
        bufp->chgQData(oldp+3391,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[5]),53);
        bufp->chgQData(oldp+3393,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[6]),53);
        bufp->chgQData(oldp+3395,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[7]),53);
        bufp->chgQData(oldp+3397,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[8]),53);
        bufp->chgQData(oldp+3399,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[9]),53);
        bufp->chgQData(oldp+3401,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[10]),53);
        bufp->chgQData(oldp+3403,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[11]),53);
        bufp->chgQData(oldp+3405,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[12]),53);
        bufp->chgQData(oldp+3407,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[13]),53);
        bufp->chgQData(oldp+3409,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[14]),53);
        bufp->chgQData(oldp+3411,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[15]),53);
        bufp->chgQData(oldp+3413,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[16]),53);
        bufp->chgQData(oldp+3415,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[17]),53);
        bufp->chgQData(oldp+3417,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[18]),53);
        bufp->chgQData(oldp+3419,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[19]),53);
        bufp->chgQData(oldp+3421,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[20]),53);
        bufp->chgQData(oldp+3423,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[21]),53);
        bufp->chgQData(oldp+3425,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[22]),53);
        bufp->chgQData(oldp+3427,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[23]),53);
        bufp->chgQData(oldp+3429,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[24]),53);
        bufp->chgQData(oldp+3431,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[25]),53);
        bufp->chgQData(oldp+3433,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[26]),53);
        bufp->chgQData(oldp+3435,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[27]),53);
        bufp->chgQData(oldp+3437,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[28]),53);
        bufp->chgQData(oldp+3439,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[29]),53);
        bufp->chgQData(oldp+3441,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[30]),53);
        bufp->chgQData(oldp+3443,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[31]),53);
        bufp->chgBit(oldp+3445,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_tag_w_en_pipe_0));
        bufp->chgCData(oldp+3446,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_tag_w_addr_pipe_0),5);
        bufp->chgQData(oldp+3447,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_MPORT_1_data),53);
        bufp->chgQData(oldp+3449,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[0]),53);
        bufp->chgQData(oldp+3451,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[1]),53);
        bufp->chgQData(oldp+3453,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[2]),53);
        bufp->chgQData(oldp+3455,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[3]),53);
        bufp->chgQData(oldp+3457,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[4]),53);
        bufp->chgQData(oldp+3459,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[5]),53);
        bufp->chgQData(oldp+3461,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[6]),53);
        bufp->chgQData(oldp+3463,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[7]),53);
        bufp->chgQData(oldp+3465,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[8]),53);
        bufp->chgQData(oldp+3467,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[9]),53);
        bufp->chgQData(oldp+3469,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[10]),53);
        bufp->chgQData(oldp+3471,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[11]),53);
        bufp->chgQData(oldp+3473,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[12]),53);
        bufp->chgQData(oldp+3475,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[13]),53);
        bufp->chgQData(oldp+3477,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[14]),53);
        bufp->chgQData(oldp+3479,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[15]),53);
        bufp->chgQData(oldp+3481,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[16]),53);
        bufp->chgQData(oldp+3483,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[17]),53);
        bufp->chgQData(oldp+3485,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[18]),53);
        bufp->chgQData(oldp+3487,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[19]),53);
        bufp->chgQData(oldp+3489,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[20]),53);
        bufp->chgQData(oldp+3491,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[21]),53);
        bufp->chgQData(oldp+3493,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[22]),53);
        bufp->chgQData(oldp+3495,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[23]),53);
        bufp->chgQData(oldp+3497,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[24]),53);
        bufp->chgQData(oldp+3499,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[25]),53);
        bufp->chgQData(oldp+3501,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[26]),53);
        bufp->chgQData(oldp+3503,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[27]),53);
        bufp->chgQData(oldp+3505,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[28]),53);
        bufp->chgQData(oldp+3507,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[29]),53);
        bufp->chgQData(oldp+3509,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[30]),53);
        bufp->chgQData(oldp+3511,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[31]),53);
        bufp->chgBit(oldp+3513,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1_tag_w_en_pipe_0));
        bufp->chgBit(oldp+3514,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[0]));
        bufp->chgBit(oldp+3515,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[1]));
        bufp->chgBit(oldp+3516,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[2]));
        bufp->chgBit(oldp+3517,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[3]));
        bufp->chgBit(oldp+3518,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[4]));
        bufp->chgBit(oldp+3519,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[5]));
        bufp->chgBit(oldp+3520,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[6]));
        bufp->chgBit(oldp+3521,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[7]));
        bufp->chgBit(oldp+3522,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[8]));
        bufp->chgBit(oldp+3523,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[9]));
        bufp->chgBit(oldp+3524,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[10]));
        bufp->chgBit(oldp+3525,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[11]));
        bufp->chgBit(oldp+3526,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[12]));
        bufp->chgBit(oldp+3527,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[13]));
        bufp->chgBit(oldp+3528,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[14]));
        bufp->chgBit(oldp+3529,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[15]));
        bufp->chgBit(oldp+3530,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[16]));
        bufp->chgBit(oldp+3531,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[17]));
        bufp->chgBit(oldp+3532,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[18]));
        bufp->chgBit(oldp+3533,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[19]));
        bufp->chgBit(oldp+3534,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[20]));
        bufp->chgBit(oldp+3535,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[21]));
        bufp->chgBit(oldp+3536,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[22]));
        bufp->chgBit(oldp+3537,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[23]));
        bufp->chgBit(oldp+3538,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[24]));
        bufp->chgBit(oldp+3539,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[25]));
        bufp->chgBit(oldp+3540,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[26]));
        bufp->chgBit(oldp+3541,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[27]));
        bufp->chgBit(oldp+3542,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[28]));
        bufp->chgBit(oldp+3543,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[29]));
        bufp->chgBit(oldp+3544,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[30]));
        bufp->chgBit(oldp+3545,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[31]));
        bufp->chgBit(oldp+3546,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_en_pipe_0));
        bufp->chgBit(oldp+3547,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[0]));
        bufp->chgBit(oldp+3548,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[1]));
        bufp->chgBit(oldp+3549,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[2]));
        bufp->chgBit(oldp+3550,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[3]));
        bufp->chgBit(oldp+3551,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[4]));
        bufp->chgBit(oldp+3552,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[5]));
        bufp->chgBit(oldp+3553,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[6]));
        bufp->chgBit(oldp+3554,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[7]));
        bufp->chgBit(oldp+3555,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[8]));
        bufp->chgBit(oldp+3556,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[9]));
        bufp->chgBit(oldp+3557,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[10]));
        bufp->chgBit(oldp+3558,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[11]));
        bufp->chgBit(oldp+3559,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[12]));
        bufp->chgBit(oldp+3560,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[13]));
        bufp->chgBit(oldp+3561,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[14]));
        bufp->chgBit(oldp+3562,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[15]));
        bufp->chgBit(oldp+3563,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[16]));
        bufp->chgBit(oldp+3564,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[17]));
        bufp->chgBit(oldp+3565,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[18]));
        bufp->chgBit(oldp+3566,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[19]));
        bufp->chgBit(oldp+3567,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[20]));
        bufp->chgBit(oldp+3568,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[21]));
        bufp->chgBit(oldp+3569,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[22]));
        bufp->chgBit(oldp+3570,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[23]));
        bufp->chgBit(oldp+3571,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[24]));
        bufp->chgBit(oldp+3572,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[25]));
        bufp->chgBit(oldp+3573,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[26]));
        bufp->chgBit(oldp+3574,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[27]));
        bufp->chgBit(oldp+3575,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[28]));
        bufp->chgBit(oldp+3576,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[29]));
        bufp->chgBit(oldp+3577,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[30]));
        bufp->chgBit(oldp+3578,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[31]));
        bufp->chgBit(oldp+3579,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_en_pipe_0));
        bufp->chgCData(oldp+3580,(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__read_state),2);
        bufp->chgCData(oldp+3581,(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state),2);
    }
    bufp->chgBit(oldp+3582,(vlSelf->clock));
    bufp->chgBit(oldp+3583,(vlSelf->reset));
    bufp->chgQData(oldp+3584,(vlSelf->io_pc),64);
    bufp->chgIData(oldp+3586,(vlSelf->io_inst),32);
}

void VCoreTop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root__trace_cleanup\n"); );
    // Init
    VCoreTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCoreTop___024root*>(voidSelf);
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
