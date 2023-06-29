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
        bufp->chgBit(oldp+0,(((IData)(vlSelf->CoreTop__DOT__EX__DOT__branch_flag) 
                              & (IData)(vlSelf->CoreTop__DOT__EX__DOT____VdfgTmp_hcef3c28f__0))));
        bufp->chgQData(oldp+1,(vlSelf->CoreTop__DOT__IF_io_branch_io_dnpc),64);
        bufp->chgBit(oldp+3,(vlSelf->CoreTop__DOT__IF_io_cache_req_rdata_rep_valid));
        bufp->chgIData(oldp+4,(((IData)(vlSelf->CoreTop__DOT__IF_io_flush)
                                 ? 0U : ((1U & (IData)(
                                                       (vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                        >> 2U)))
                                          ? (IData)(
                                                    (vlSelf->CoreTop__DOT__IF_io_cache_req_rdata_rep_bits_rdata 
                                                     >> 0x20U))
                                          : (IData)(vlSelf->CoreTop__DOT__IF_io_cache_req_rdata_rep_bits_rdata)))),32);
        bufp->chgBit(oldp+5,(vlSelf->CoreTop__DOT__IF_io_flush));
        bufp->chgQData(oldp+6,((((IData)(vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfWen) 
                                 & (((IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest) 
                                     == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                  >> 0xfU))) 
                                    & (0U != (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest))))
                                 ? vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfData
                                 : (((IData)(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfWen) 
                                     & (((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest) 
                                         == (0x1fU 
                                             & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                >> 0xfU))) 
                                        & (0U != (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest))))
                                     ? vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfData
                                     : (((IData)(vlSelf->CoreTop__DOT__rf_MPORT_en) 
                                         & (((IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest) 
                                             == (0x1fU 
                                                 & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                    >> 0xfU))) 
                                            & (0U != (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest))))
                                         ? vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfData
                                         : ((0U == 
                                             (0x1fU 
                                              & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                 >> 0xfU)))
                                             ? 0ULL
                                             : vlSelf->CoreTop__DOT__rf
                                            [(0x1fU 
                                              & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                 >> 0xfU))]))))),64);
        bufp->chgQData(oldp+8,((((IData)(vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfWen) 
                                 & (((IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest) 
                                     == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                  >> 0x14U))) 
                                    & (0U != (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest))))
                                 ? vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfData
                                 : (((IData)(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfWen) 
                                     & (((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest) 
                                         == (0x1fU 
                                             & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                >> 0x14U))) 
                                        & (0U != (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest))))
                                     ? vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfData
                                     : (((IData)(vlSelf->CoreTop__DOT__rf_MPORT_en) 
                                         & (((IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest) 
                                             == (0x1fU 
                                                 & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                    >> 0x14U))) 
                                            & (0U != (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest))))
                                         ? vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfData
                                         : ((0U == 
                                             (0x1fU 
                                              & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                 >> 0x14U)))
                                             ? 0ULL
                                             : vlSelf->CoreTop__DOT__rf
                                            [(0x1fU 
                                              & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                 >> 0x14U))]))))),64);
        bufp->chgBit(oldp+10,((1U & (~ ((0U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_2)) 
                                        | ((~ (IData)(vlSelf->CoreTop__DOT__valid)) 
                                           | (IData)(vlSelf->CoreTop__DOT__IF_io_flush)))))));
        bufp->chgQData(oldp+11,((((IData)(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfWen) 
                                  & (((IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfSrc1) 
                                      == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest)) 
                                     & (0U != (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest))))
                                  ? vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfData
                                  : vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_src1)),64);
        bufp->chgQData(oldp+13,((((IData)(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfWen) 
                                  & (((IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfSrc2) 
                                      == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest)) 
                                     & (0U != (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest))))
                                  ? vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfData
                                  : vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_src2)),64);
        bufp->chgQData(oldp+15,(vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfData),64);
        bufp->chgQData(oldp+17,(vlSelf->CoreTop__DOT__EX__DOT__src1),64);
        bufp->chgQData(oldp+19,(vlSelf->CoreTop__DOT__EX__DOT__src2),64);
        bufp->chgQData(oldp+21,(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfData),64);
        bufp->chgQData(oldp+23,(vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata),64);
        bufp->chgQData(oldp+25,(vlSelf->CoreTop__DOT__MMEM__DOT__rdata),64);
        bufp->chgQData(oldp+27,(((IData)(vlSelf->CoreTop__DOT__EX__DOT__is_mul)
                                  ? vlSelf->CoreTop__DOT__EX__DOT__src1
                                  : (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__src1)))),64);
        bufp->chgQData(oldp+29,(((IData)(vlSelf->CoreTop__DOT__EX__DOT__is_mul)
                                  ? vlSelf->CoreTop__DOT__EX__DOT__src2
                                  : (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)))),64);
        bufp->chgQData(oldp+31,(vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src1),64);
        bufp->chgQData(oldp+33,(vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src2),64);
        bufp->chgQData(oldp+35,(vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_quotient),64);
        bufp->chgQData(oldp+37,(vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_remainder),64);
        bufp->chgBit(oldp+39,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1 
                                             >> 0x1fU)))));
        bufp->chgBit(oldp+40,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_quotient 
                                             >> 0x1fU)))));
        bufp->chgBit(oldp+41,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_remainder 
                                             >> 0x1fU)))));
        bufp->chgBit(oldp+42,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_10 
                                             >> 0x1fU)))));
        bufp->chgQData(oldp+43,(((0x40U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
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
        bufp->chgBit(oldp+45,((__Vtemp_h0fbea1b2__0[0U] 
                               >> 0x1fU)));
        __Vtemp_h8004274a__0[0U] = (IData)(vlSelf->CoreTop__DOT__EX__DOT__src1);
        __Vtemp_h8004274a__0[1U] = 0U;
        __Vtemp_h8004274a__0[2U] = 0U;
        VL_SHIFTL_WWI(95,95,6, __Vtemp_h29cbf8c2__0, __Vtemp_h8004274a__0, 
                      (0x3fU & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)));
        bufp->chgBit(oldp+46,((__Vtemp_h29cbf8c2__0[0U] 
                               >> 0x1fU)));
        bufp->chgBit(oldp+47,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_25 
                               >> 0x1fU)));
        bufp->chgBit(oldp+48,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_31 
                               >> 0x1fU)));
        bufp->chgBit(oldp+49,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__src1 
                                             >> 0x1fU)))));
        bufp->chgBit(oldp+50,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__src2 
                                             >> 0x1fU)))));
        bufp->chgQData(oldp+51,(((0x6aU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                  ? ((IData)(vlSelf->CoreTop__DOT__EX__DOT___compar_result_T)
                                      ? 1ULL : 0ULL)
                                  : ((2U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                      ? ((IData)(vlSelf->CoreTop__DOT__EX__DOT___compar_result_T_4)
                                          ? 1ULL : 0ULL)
                                      : 0ULL))),64);
        bufp->chgQData(oldp+53,((((QData)((IData)((
                                                   (0x6eU 
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
        bufp->chgBit(oldp+55,(vlSelf->CoreTop__DOT__EX__DOT__branch_flag));
        bufp->chgQData(oldp+56,((((((0U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                                     ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_13
                                     : 0ULL) | ((1U 
                                                 == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                                                 ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_18
                                                 : 0ULL)) 
                                  | ((2U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                                      ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_18
                                      : 0ULL)) | ((3U 
                                                   == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                                                   ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_13
                                                   : 0ULL))),64);
        bufp->chgQData(oldp+58,((((((0U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                                     ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_16
                                     : 0ULL) | ((1U 
                                                 == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                                                 ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_16
                                                 : 0ULL)) 
                                  | ((2U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                                      ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_26
                                      : 0ULL)) | ((3U 
                                                   == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                                                   ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_26
                                                   : 0ULL))),64);
        bufp->chgBit(oldp+60,((1U & (IData)((vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata 
                                             >> 0x3fU)))));
        bufp->chgBit(oldp+61,((1U & (IData)((vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata 
                                             >> 0x1fU)))));
        bufp->chgBit(oldp+62,((1U & ((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_27) 
                                     >> 7U))));
        bufp->chgBit(oldp+63,((1U & ((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_44) 
                                     >> 0xfU))));
        bufp->chgQData(oldp+64,(((0x45U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
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
        bufp->chgBit(oldp+66,(vlSelf->CoreTop__DOT__IF_io_branch_io_is_jump));
        bufp->chgBit(oldp+67,(vlSelf->CoreTop__DOT__IF_io_cache_req_addr_req_valid));
        bufp->chgQData(oldp+68,(vlSelf->CoreTop__DOT__IF_io_cache_req_rdata_rep_bits_rdata),64);
        bufp->chgBit(oldp+70,(vlSelf->CoreTop__DOT__valid));
        bufp->chgQData(oldp+71,(vlSelf->CoreTop__DOT__ID_io_in_bits_r_PC),64);
        bufp->chgIData(oldp+73,(vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst),32);
        bufp->chgCData(oldp+74,((((7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                   ? 2U : 0U) | ((3U 
                                                  == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                                  ? 2U
                                                  : 0U))),3);
        bufp->chgCData(oldp+75,(((8U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)) 
                                 | ((7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)) 
                                    | (3U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))))),3);
        bufp->chgCData(oldp+76,(((0x13U == (0x707fU 
                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                  ? 0U : ((0x1013U 
                                           == (0xfc00707fU 
                                               & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                           ? 1U : (
                                                   (0x6013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                    ? 0U
                                                    : 
                                                   ((0x3003U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                     ? 4U
                                                     : 
                                                    ((0x2003U 
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
                                                                : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_239))))))))))))))))),3);
        bufp->chgCData(oldp+77,((0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+78,((0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                          >> 0x14U))),5);
        bufp->chgBit(oldp+79,(((IData)(vlSelf->CoreTop__DOT__valid) 
                               & (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_3))));
        bufp->chgCData(oldp+80,(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_2),7);
        bufp->chgCData(oldp+81,((0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                          >> 7U))),5);
        bufp->chgQData(oldp+82,(((((((8U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                      ? ((((vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                            >> 0x1fU)
                                            ? 0xfffffffffffffULL
                                            : 0ULL) 
                                          << 0xcU) 
                                         | (QData)((IData)(
                                                           (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                            >> 0x14U))))
                                      : 0ULL) | ((7U 
                                                  == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                                  ? 
                                                 ((((0x80000U 
                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)
                                                     ? 0xfffffffffffULL
                                                     : 0ULL) 
                                                   << 0x14U) 
                                                  | (QData)((IData)(
                                                                    ((0xff000U 
                                                                      & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst) 
                                                                     | ((0x800U 
                                                                         & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                                            >> 9U)) 
                                                                        | (0x7feU 
                                                                           & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                                              >> 0x14U)))))))
                                                  : 0ULL)) 
                                   | ((3U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                       ? (((QData)((IData)(
                                                           ((vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                             >> 0x1fU)
                                                             ? 0xffffffffU
                                                             : 0U))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            (0xfffff000U 
                                                             & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))))
                                       : 0ULL)) | (
                                                   (9U 
                                                    == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                                    ? 
                                                   ((((vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                       >> 0x1fU)
                                                       ? 0xfffffffffffffULL
                                                       : 0ULL) 
                                                     << 0xcU) 
                                                    | (QData)((IData)(
                                                                      ((0xfe0U 
                                                                        & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                                           >> 0x14U)) 
                                                                       | (0x1fU 
                                                                          & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                                             >> 7U))))))
                                                    : 0ULL)) 
                                 | ((0xbU == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                     ? ((((vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                           >> 0x1fU)
                                           ? 0x7ffffffffffffULL
                                           : 0ULL) 
                                         << 0xdU) | (QData)((IData)(
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
                                     : 0ULL))),64);
        bufp->chgBit(oldp+84,(vlSelf->CoreTop__DOT__valid_1));
        bufp->chgCData(oldp+85,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src1Type),3);
        bufp->chgCData(oldp+86,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src2Type),3);
        bufp->chgCData(oldp+87,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType),3);
        bufp->chgBit(oldp+88,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_inst_valid));
        bufp->chgCData(oldp+89,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfSrc1),5);
        bufp->chgCData(oldp+90,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfSrc2),5);
        bufp->chgBit(oldp+91,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfWen));
        bufp->chgCData(oldp+92,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype),7);
        bufp->chgCData(oldp+93,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest),5);
        bufp->chgQData(oldp+94,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_src1),64);
        bufp->chgQData(oldp+96,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_src2),64);
        bufp->chgQData(oldp+98,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm),64);
        bufp->chgQData(oldp+100,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC),64);
        bufp->chgIData(oldp+102,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_inst),32);
        bufp->chgBit(oldp+103,((1U & (~ (IData)(vlSelf->CoreTop__DOT__MEM__DOT___io_out_valid_T_6)))));
        bufp->chgBit(oldp+104,(((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_valid)) 
                                & ((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__div_io_in_valid)) 
                                   & (IData)(vlSelf->CoreTop__DOT__valid_1)))));
        bufp->chgBit(oldp+105,(vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfWen));
        bufp->chgBit(oldp+106,(((0x42U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                                & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_inst_valid))));
        bufp->chgBit(oldp+107,(vlSelf->CoreTop__DOT__DIP_io_is_break_REG_1));
        bufp->chgQData(oldp+108,(vlSelf->CoreTop__DOT__rf
                                 [0U]),64);
        bufp->chgQData(oldp+110,(vlSelf->CoreTop__DOT__rf
                                 [1U]),64);
        bufp->chgQData(oldp+112,(vlSelf->CoreTop__DOT__rf
                                 [2U]),64);
        bufp->chgQData(oldp+114,(vlSelf->CoreTop__DOT__rf
                                 [3U]),64);
        bufp->chgQData(oldp+116,(vlSelf->CoreTop__DOT__rf
                                 [4U]),64);
        bufp->chgQData(oldp+118,(vlSelf->CoreTop__DOT__rf
                                 [5U]),64);
        bufp->chgQData(oldp+120,(vlSelf->CoreTop__DOT__rf
                                 [6U]),64);
        bufp->chgQData(oldp+122,(vlSelf->CoreTop__DOT__rf
                                 [7U]),64);
        bufp->chgQData(oldp+124,(vlSelf->CoreTop__DOT__rf
                                 [8U]),64);
        bufp->chgQData(oldp+126,(vlSelf->CoreTop__DOT__rf
                                 [9U]),64);
        bufp->chgQData(oldp+128,(vlSelf->CoreTop__DOT__rf
                                 [0xaU]),64);
        bufp->chgQData(oldp+130,(vlSelf->CoreTop__DOT__rf
                                 [0xbU]),64);
        bufp->chgQData(oldp+132,(vlSelf->CoreTop__DOT__rf
                                 [0xcU]),64);
        bufp->chgQData(oldp+134,(vlSelf->CoreTop__DOT__rf
                                 [0xdU]),64);
        bufp->chgQData(oldp+136,(vlSelf->CoreTop__DOT__rf
                                 [0xeU]),64);
        bufp->chgQData(oldp+138,(vlSelf->CoreTop__DOT__rf
                                 [0xfU]),64);
        bufp->chgQData(oldp+140,(vlSelf->CoreTop__DOT__rf
                                 [0x10U]),64);
        bufp->chgQData(oldp+142,(vlSelf->CoreTop__DOT__rf
                                 [0x11U]),64);
        bufp->chgQData(oldp+144,(vlSelf->CoreTop__DOT__rf
                                 [0x12U]),64);
        bufp->chgQData(oldp+146,(vlSelf->CoreTop__DOT__rf
                                 [0x13U]),64);
        bufp->chgQData(oldp+148,(vlSelf->CoreTop__DOT__rf
                                 [0x14U]),64);
        bufp->chgQData(oldp+150,(vlSelf->CoreTop__DOT__rf
                                 [0x15U]),64);
        bufp->chgQData(oldp+152,(vlSelf->CoreTop__DOT__rf
                                 [0x16U]),64);
        bufp->chgQData(oldp+154,(vlSelf->CoreTop__DOT__rf
                                 [0x17U]),64);
        bufp->chgQData(oldp+156,(vlSelf->CoreTop__DOT__rf
                                 [0x18U]),64);
        bufp->chgQData(oldp+158,(vlSelf->CoreTop__DOT__rf
                                 [0x19U]),64);
        bufp->chgQData(oldp+160,(vlSelf->CoreTop__DOT__rf
                                 [0x1aU]),64);
        bufp->chgQData(oldp+162,(vlSelf->CoreTop__DOT__rf
                                 [0x1bU]),64);
        bufp->chgQData(oldp+164,(vlSelf->CoreTop__DOT__rf
                                 [0x1cU]),64);
        bufp->chgQData(oldp+166,(vlSelf->CoreTop__DOT__rf
                                 [0x1dU]),64);
        bufp->chgQData(oldp+168,(vlSelf->CoreTop__DOT__rf
                                 [0x1eU]),64);
        bufp->chgQData(oldp+170,(vlSelf->CoreTop__DOT__rf
                                 [0x1fU]),64);
        bufp->chgIData(oldp+172,(vlSelf->CoreTop__DOT__DIP_io_inst_REG),32);
        bufp->chgQData(oldp+173,(vlSelf->CoreTop__DOT__DIP_io_pc_REG),64);
        bufp->chgBit(oldp+175,(vlSelf->CoreTop__DOT__DIP_io_inst_valid_REG));
        bufp->chgQData(oldp+176,(vlSelf->CoreTop__DOT__DIP_io_dnpc_REG),64);
        bufp->chgBit(oldp+178,(vlSelf->CoreTop__DOT__DIP_io_is_skip_REG));
        bufp->chgQData(oldp+179,(vlSelf->CoreTop__DOT__rf[0]),64);
        bufp->chgQData(oldp+181,(vlSelf->CoreTop__DOT__rf[1]),64);
        bufp->chgQData(oldp+183,(vlSelf->CoreTop__DOT__rf[2]),64);
        bufp->chgQData(oldp+185,(vlSelf->CoreTop__DOT__rf[3]),64);
        bufp->chgQData(oldp+187,(vlSelf->CoreTop__DOT__rf[4]),64);
        bufp->chgQData(oldp+189,(vlSelf->CoreTop__DOT__rf[5]),64);
        bufp->chgQData(oldp+191,(vlSelf->CoreTop__DOT__rf[6]),64);
        bufp->chgQData(oldp+193,(vlSelf->CoreTop__DOT__rf[7]),64);
        bufp->chgQData(oldp+195,(vlSelf->CoreTop__DOT__rf[8]),64);
        bufp->chgQData(oldp+197,(vlSelf->CoreTop__DOT__rf[9]),64);
        bufp->chgQData(oldp+199,(vlSelf->CoreTop__DOT__rf[10]),64);
        bufp->chgQData(oldp+201,(vlSelf->CoreTop__DOT__rf[11]),64);
        bufp->chgQData(oldp+203,(vlSelf->CoreTop__DOT__rf[12]),64);
        bufp->chgQData(oldp+205,(vlSelf->CoreTop__DOT__rf[13]),64);
        bufp->chgQData(oldp+207,(vlSelf->CoreTop__DOT__rf[14]),64);
        bufp->chgQData(oldp+209,(vlSelf->CoreTop__DOT__rf[15]),64);
        bufp->chgQData(oldp+211,(vlSelf->CoreTop__DOT__rf[16]),64);
        bufp->chgQData(oldp+213,(vlSelf->CoreTop__DOT__rf[17]),64);
        bufp->chgQData(oldp+215,(vlSelf->CoreTop__DOT__rf[18]),64);
        bufp->chgQData(oldp+217,(vlSelf->CoreTop__DOT__rf[19]),64);
        bufp->chgQData(oldp+219,(vlSelf->CoreTop__DOT__rf[20]),64);
        bufp->chgQData(oldp+221,(vlSelf->CoreTop__DOT__rf[21]),64);
        bufp->chgQData(oldp+223,(vlSelf->CoreTop__DOT__rf[22]),64);
        bufp->chgQData(oldp+225,(vlSelf->CoreTop__DOT__rf[23]),64);
        bufp->chgQData(oldp+227,(vlSelf->CoreTop__DOT__rf[24]),64);
        bufp->chgQData(oldp+229,(vlSelf->CoreTop__DOT__rf[25]),64);
        bufp->chgQData(oldp+231,(vlSelf->CoreTop__DOT__rf[26]),64);
        bufp->chgQData(oldp+233,(vlSelf->CoreTop__DOT__rf[27]),64);
        bufp->chgQData(oldp+235,(vlSelf->CoreTop__DOT__rf[28]),64);
        bufp->chgQData(oldp+237,(vlSelf->CoreTop__DOT__rf[29]),64);
        bufp->chgQData(oldp+239,(vlSelf->CoreTop__DOT__rf[30]),64);
        bufp->chgQData(oldp+241,(vlSelf->CoreTop__DOT__rf[31]),64);
        bufp->chgQData(oldp+243,(vlSelf->CoreTop__DOT__rf
                                 [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                            >> 0xfU))]),64);
        bufp->chgQData(oldp+245,(vlSelf->CoreTop__DOT__rf
                                 [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                            >> 0x14U))]),64);
        bufp->chgQData(oldp+247,(((0U == (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest))
                                   ? 0ULL : vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfData)),64);
        bufp->chgCData(oldp+249,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest),5);
        bufp->chgBit(oldp+250,(vlSelf->CoreTop__DOT__rf_MPORT_en));
        bufp->chgBit(oldp+251,(vlSelf->CoreTop__DOT__valid_2));
        bufp->chgCData(oldp+252,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_fuType),3);
        bufp->chgBit(oldp+253,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_inst_valid));
        bufp->chgBit(oldp+254,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_rfWen));
        bufp->chgCData(oldp+255,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype),7);
        bufp->chgQData(oldp+256,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_PC),64);
        bufp->chgIData(oldp+258,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_inst),32);
        bufp->chgQData(oldp+259,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_Dnpc),64);
        bufp->chgCData(oldp+261,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest),5);
        bufp->chgQData(oldp+262,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfData),64);
        bufp->chgQData(oldp+264,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src1),64);
        bufp->chgQData(oldp+266,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2),64);
        bufp->chgQData(oldp+268,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_Imm),64);
        bufp->chgBit(oldp+270,(vlSelf->CoreTop__DOT__MEM_io_out_valid));
        bufp->chgBit(oldp+271,(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_signal_inst_valid));
        bufp->chgBit(oldp+272,(((0xa0000048ULL == vlSelf->CoreTop__DOT__MEM__DOT__addr_temp) 
                                | ((0xa00003f8ULL == vlSelf->CoreTop__DOT__MEM__DOT__addr_temp) 
                                   | ((0xa0000000ULL 
                                       <= vlSelf->CoreTop__DOT__MEM__DOT__addr_temp) 
                                      & (0xa1200000ULL 
                                         >= vlSelf->CoreTop__DOT__MEM__DOT__addr_temp))))));
        bufp->chgBit(oldp+273,(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfWen));
        bufp->chgBit(oldp+274,(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_addr_req_bits_ce));
        bufp->chgQData(oldp+275,(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp),64);
        bufp->chgBit(oldp+277,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_bits_we));
        bufp->chgBit(oldp+278,(((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)
                                 ? (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_valid)
                                 : ((~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_bits_we)) 
                                    & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_bits_rdata_T_1) 
                                       | (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_valid_T_4))))));
        bufp->chgQData(oldp+279,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata),64);
        bufp->chgCData(oldp+281,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wmask),8);
        bufp->chgBit(oldp+282,(((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)
                                 ? (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_out_wb_valid)
                                 : ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___Cache_data_io_write_bus_valid_T_3) 
                                    | ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_valid_T_4) 
                                       & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_bits_we))))));
        bufp->chgBit(oldp+283,(vlSelf->CoreTop__DOT__valid_3));
        bufp->chgBit(oldp+284,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_inst_valid));
        bufp->chgBit(oldp+285,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_rfWen));
        bufp->chgQData(oldp+286,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_PC),64);
        bufp->chgQData(oldp+288,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_Dnpc),64);
        bufp->chgBit(oldp+290,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_skip));
        bufp->chgQData(oldp+291,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfData),64);
        bufp->chgBit(oldp+293,(((IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_inst_valid) 
                                & (IData)(vlSelf->CoreTop__DOT__valid_3))));
        bufp->chgQData(oldp+294,(((0U == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                   >> 0xfU)))
                                   ? 0ULL : vlSelf->CoreTop__DOT__rf
                                  [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                             >> 0xfU))])),64);
        bufp->chgQData(oldp+296,(((0U == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                   >> 0x14U)))
                                   ? 0ULL : vlSelf->CoreTop__DOT__rf
                                  [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                             >> 0x14U))])),64);
        bufp->chgBit(oldp+298,(((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)) 
                                & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)
                                    ? (0U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state))
                                    : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state) 
                                       & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r) 
                                          & (0U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state))))))));
        bufp->chgBit(oldp+299,((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state))));
        bufp->chgQData(oldp+300,(vlSelf->CoreTop__DOT__ICACHE_io_out_raddr_req_bits_addr),64);
        bufp->chgBit(oldp+302,(vlSelf->CoreTop__DOT__ICACHE_io_out_rdata_rep_valid));
        bufp->chgBit(oldp+303,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_rdata_rep_bits_last));
        bufp->chgBit(oldp+304,(((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)) 
                                & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)
                                    ? (1U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_state))
                                    : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state) 
                                       & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r) 
                                          & (1U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_state))))))));
        bufp->chgBit(oldp+305,(((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)
                                 ? (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_valid)
                                 : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)
                                     ? (1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state))
                                     : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                                         ? ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)
                                             ? (1U 
                                                == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state))
                                             : (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_valid))
                                         : (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_valid))))));
        bufp->chgBit(oldp+306,((0U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state))));
        bufp->chgQData(oldp+307,(((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)
                                   ? vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_bits_addr
                                   : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)
                                       ? vlSelf->CoreTop__DOT__ICACHE_io_out_raddr_req_bits_addr
                                       : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                                           ? ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)
                                               ? vlSelf->CoreTop__DOT__ICACHE_io_out_raddr_req_bits_addr
                                               : vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_bits_addr)
                                           : vlSelf->CoreTop__DOT__ICACHE_io_out_raddr_req_bits_addr)))),64);
        bufp->chgCData(oldp+309,(((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)
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
        bufp->chgBit(oldp+310,((2U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state))));
        bufp->chgBit(oldp+311,(((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)
                                 ? (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_valid)
                                 : ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)) 
                                    & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                                        ? ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)) 
                                           & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_valid))
                                        : (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_valid))))));
        bufp->chgBit(oldp+312,((0U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_state))));
        bufp->chgQData(oldp+313,(((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)
                                   ? vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_bits_addr
                                   : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)
                                       ? 0ULL : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                                                  ? 
                                                 ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)
                                                   ? 0ULL
                                                   : vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_bits_addr)
                                                  : 0ULL)))),64);
        bufp->chgBit(oldp+315,(((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)
                                 ? (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_valid)
                                 : ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)) 
                                    & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                                        ? ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)) 
                                           & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_valid))
                                        : (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_valid))))));
        bufp->chgBit(oldp+316,(vlSelf->CoreTop__DOT__MMEM_wd_ready));
        bufp->chgQData(oldp+317,(((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)
                                   ? vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_data
                                   : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)
                                       ? 0ULL : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                                                  ? 
                                                 ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)
                                                   ? 0ULL
                                                   : vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_data)
                                                  : 0ULL)))),64);
        bufp->chgCData(oldp+319,(((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)
                                   ? (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_wstrb)
                                   : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)
                                       ? 0U : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                                                ? ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)
                                                    ? 0U
                                                    : (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_wstrb))
                                                : 0U)))),8);
        bufp->chgBit(oldp+320,(vlSelf->CoreTop__DOT__MMEM_wd_last));
        bufp->chgBit(oldp+321,((1U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_state))));
        bufp->chgBit(oldp+322,(((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)
                                 ? (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wb_ready)
                                 : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0) 
                                    | ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                                        ? ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r) 
                                           | (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wb_ready))
                                        : (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wb_ready))))));
        bufp->chgBit(oldp+323,(vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_ready));
        bufp->chgBit(oldp+324,(vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_valid));
        bufp->chgQData(oldp+325,(vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_bits_addr),64);
        bufp->chgCData(oldp+327,(((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)
                                   ? 0U : 7U)),8);
        bufp->chgBit(oldp+328,(vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_ready));
        bufp->chgBit(oldp+329,(vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_valid));
        bufp->chgQData(oldp+330,(vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_bits_addr),64);
        bufp->chgBit(oldp+332,(vlSelf->CoreTop__DOT__ARBITER_io_in1_rdata_rep_valid));
        bufp->chgBit(oldp+333,(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_ready));
        bufp->chgBit(oldp+334,(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_valid));
        bufp->chgQData(oldp+335,(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_data),64);
        bufp->chgCData(oldp+337,(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_wstrb),8);
        bufp->chgBit(oldp+338,(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_last));
        bufp->chgBit(oldp+339,(vlSelf->CoreTop__DOT__ARBITER_io_in1_wb_ready));
        bufp->chgBit(oldp+340,(vlSelf->CoreTop__DOT__ARBITER_io_in1_wb_valid));
        bufp->chgIData(oldp+341,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_inst),32);
        bufp->chgBit(oldp+342,(vlSelf->CoreTop__DOT__DIP_io_is_break_REG));
        bufp->chgBit(oldp+343,(vlSelf->CoreTop__DOT__ARBITER__DOT__state));
        bufp->chgBit(oldp+344,(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r));
        bufp->chgQData(oldp+345,(vlSelf->CoreTop__DOT__DIP__DOT__rf[0]),64);
        bufp->chgQData(oldp+347,(vlSelf->CoreTop__DOT__DIP__DOT__rf[1]),64);
        bufp->chgQData(oldp+349,(vlSelf->CoreTop__DOT__DIP__DOT__rf[2]),64);
        bufp->chgQData(oldp+351,(vlSelf->CoreTop__DOT__DIP__DOT__rf[3]),64);
        bufp->chgQData(oldp+353,(vlSelf->CoreTop__DOT__DIP__DOT__rf[4]),64);
        bufp->chgQData(oldp+355,(vlSelf->CoreTop__DOT__DIP__DOT__rf[5]),64);
        bufp->chgQData(oldp+357,(vlSelf->CoreTop__DOT__DIP__DOT__rf[6]),64);
        bufp->chgQData(oldp+359,(vlSelf->CoreTop__DOT__DIP__DOT__rf[7]),64);
        bufp->chgQData(oldp+361,(vlSelf->CoreTop__DOT__DIP__DOT__rf[8]),64);
        bufp->chgQData(oldp+363,(vlSelf->CoreTop__DOT__DIP__DOT__rf[9]),64);
        bufp->chgQData(oldp+365,(vlSelf->CoreTop__DOT__DIP__DOT__rf[10]),64);
        bufp->chgQData(oldp+367,(vlSelf->CoreTop__DOT__DIP__DOT__rf[11]),64);
        bufp->chgQData(oldp+369,(vlSelf->CoreTop__DOT__DIP__DOT__rf[12]),64);
        bufp->chgQData(oldp+371,(vlSelf->CoreTop__DOT__DIP__DOT__rf[13]),64);
        bufp->chgQData(oldp+373,(vlSelf->CoreTop__DOT__DIP__DOT__rf[14]),64);
        bufp->chgQData(oldp+375,(vlSelf->CoreTop__DOT__DIP__DOT__rf[15]),64);
        bufp->chgQData(oldp+377,(vlSelf->CoreTop__DOT__DIP__DOT__rf[16]),64);
        bufp->chgQData(oldp+379,(vlSelf->CoreTop__DOT__DIP__DOT__rf[17]),64);
        bufp->chgQData(oldp+381,(vlSelf->CoreTop__DOT__DIP__DOT__rf[18]),64);
        bufp->chgQData(oldp+383,(vlSelf->CoreTop__DOT__DIP__DOT__rf[19]),64);
        bufp->chgQData(oldp+385,(vlSelf->CoreTop__DOT__DIP__DOT__rf[20]),64);
        bufp->chgQData(oldp+387,(vlSelf->CoreTop__DOT__DIP__DOT__rf[21]),64);
        bufp->chgQData(oldp+389,(vlSelf->CoreTop__DOT__DIP__DOT__rf[22]),64);
        bufp->chgQData(oldp+391,(vlSelf->CoreTop__DOT__DIP__DOT__rf[23]),64);
        bufp->chgQData(oldp+393,(vlSelf->CoreTop__DOT__DIP__DOT__rf[24]),64);
        bufp->chgQData(oldp+395,(vlSelf->CoreTop__DOT__DIP__DOT__rf[25]),64);
        bufp->chgQData(oldp+397,(vlSelf->CoreTop__DOT__DIP__DOT__rf[26]),64);
        bufp->chgQData(oldp+399,(vlSelf->CoreTop__DOT__DIP__DOT__rf[27]),64);
        bufp->chgQData(oldp+401,(vlSelf->CoreTop__DOT__DIP__DOT__rf[28]),64);
        bufp->chgQData(oldp+403,(vlSelf->CoreTop__DOT__DIP__DOT__rf[29]),64);
        bufp->chgQData(oldp+405,(vlSelf->CoreTop__DOT__DIP__DOT__rf[30]),64);
        bufp->chgQData(oldp+407,(vlSelf->CoreTop__DOT__DIP__DOT__rf[31]),64);
        bufp->chgIData(oldp+409,(vlSelf->CoreTop__DOT__DIP__DOT__IN[0]),32);
        bufp->chgIData(oldp+410,(vlSelf->CoreTop__DOT__DIP__DOT__IN[1]),32);
        bufp->chgIData(oldp+411,(vlSelf->CoreTop__DOT__DIP__DOT__IN[2]),32);
        bufp->chgIData(oldp+412,(vlSelf->CoreTop__DOT__DIP__DOT__IN[3]),32);
        bufp->chgIData(oldp+413,(vlSelf->CoreTop__DOT__DIP__DOT__IN[4]),32);
        bufp->chgIData(oldp+414,(vlSelf->CoreTop__DOT__DIP__DOT__IN[5]),32);
        bufp->chgIData(oldp+415,(vlSelf->CoreTop__DOT__DIP__DOT__IN[6]),32);
        bufp->chgQData(oldp+416,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mepc_REG_1),64);
        bufp->chgQData(oldp+418,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mcause_REG_1),64);
        bufp->chgQData(oldp+420,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mstatus_REG_1),64);
        bufp->chgQData(oldp+422,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mtvec_REG_1),64);
        bufp->chgBit(oldp+424,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_valid));
        bufp->chgBit(oldp+425,((0x44U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count))));
        bufp->chgQData(oldp+426,((((QData)((IData)(
                                                   vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[0U])))),64);
        bufp->chgBit(oldp+428,(vlSelf->CoreTop__DOT__EX__DOT__div_io_in_valid));
        bufp->chgBit(oldp+429,(vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_flow_div_signed));
        bufp->chgBit(oldp+430,((2U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state))));
        bufp->chgBit(oldp+431,(vlSelf->CoreTop__DOT__EX__DOT__is_mul));
        bufp->chgBit(oldp+432,(((((((0x43U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                                    | (0x13U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) 
                                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT___is_divw_T_2)) 
                                  | ((0x12U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                                     | (0xfU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)))) 
                                 | (IData)(vlSelf->CoreTop__DOT__EX__DOT____VdfgTmp_h08208b49__0)) 
                                & (IData)(vlSelf->CoreTop__DOT__EX__DOT____VdfgTmp_h1a4c5317__0))));
        bufp->chgBit(oldp+433,(vlSelf->CoreTop__DOT__EX__DOT__is_divw));
        bufp->chgQData(oldp+434,(vlSelf->CoreTop__DOT__EX__DOT__mepc),64);
        bufp->chgQData(oldp+436,(vlSelf->CoreTop__DOT__EX__DOT__mcause),64);
        bufp->chgQData(oldp+438,(vlSelf->CoreTop__DOT__EX__DOT__mstatus),64);
        bufp->chgQData(oldp+440,(vlSelf->CoreTop__DOT__EX__DOT__mtvec),64);
        bufp->chgQData(oldp+442,(vlSelf->CoreTop__DOT__EX__DOT__mie),64);
        bufp->chgQData(oldp+444,(vlSelf->CoreTop__DOT__EX__DOT__mip),64);
        bufp->chgBit(oldp+446,((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[0U] 
                                >> 0x1fU)));
        bufp->chgQData(oldp+447,(((3U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType))
                                   ? (4ULL + vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC)
                                   : 0ULL)),64);
        bufp->chgQData(oldp+449,(((0x6bU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
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
        bufp->chgQData(oldp+451,(vlSelf->CoreTop__DOT__EX__DOT__csr_data),64);
        bufp->chgQData(oldp+453,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mtvec_REG),64);
        bufp->chgQData(oldp+455,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mcause_REG),64);
        bufp->chgQData(oldp+457,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mepc_REG),64);
        bufp->chgQData(oldp+459,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mstatus_REG),64);
        bufp->chgQData(oldp+461,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[0]),64);
        bufp->chgQData(oldp+463,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[1]),64);
        bufp->chgQData(oldp+465,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[2]),64);
        bufp->chgQData(oldp+467,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[3]),64);
        bufp->chgQData(oldp+469,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[4]),64);
        bufp->chgQData(oldp+471,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[5]),64);
        bufp->chgWData(oldp+473,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend),128);
        bufp->chgQData(oldp+477,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divisor),64);
        bufp->chgQData(oldp+479,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S),64);
        bufp->chgCData(oldp+481,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state),2);
        bufp->chgCData(oldp+482,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__count),6);
        bufp->chgBit(oldp+483,((0x3fU == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__count))));
        bufp->chgBit(oldp+484,(((1U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state)) 
                                & (0x3fU == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__count)))));
        bufp->chgWData(oldp+485,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div),65);
        bufp->chgQData(oldp+488,((- vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S)),64);
        bufp->chgQData(oldp+490,((- (((QData)((IData)(
                                                      vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[2U]))))),64);
        bufp->chgCData(oldp+492,((7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U])),3);
        bufp->chgWData(oldp+493,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand),132);
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
        bufp->chgWData(oldp+498,(__Vtemp_h559cd7fe__0),132);
        bufp->chgBit(oldp+503,(((0U != (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U])) 
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
        bufp->chgWData(oldp+504,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier),66);
        bufp->chgWData(oldp+507,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p),132);
        bufp->chgCData(oldp+512,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count),7);
        bufp->chgWData(oldp+513,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__temp),132);
        bufp->chgBit(oldp+518,((1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__temp[4U] 
                                      >> 3U))));
        bufp->chgBit(oldp+519,(((IData)(vlSelf->CoreTop__DOT__IF_io_cache_req_addr_req_valid) 
                                & (0U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)))));
        bufp->chgQData(oldp+520,(((3U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state))
                                   ? vlSelf->CoreTop__DOT__IF__DOT__temp
                                   : 0ULL)),64);
        bufp->chgBit(oldp+522,((3U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state))));
        bufp->chgCData(oldp+523,(((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r)
                                   ? 2U : 1U)),2);
        bufp->chgWData(oldp+524,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data),512);
        bufp->chgQData(oldp+540,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0
                                 [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0]),53);
        bufp->chgQData(oldp+542,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1
                                 [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0]),53);
        bufp->chgBit(oldp+544,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0
                               [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0]));
        bufp->chgBit(oldp+545,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1
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
        bufp->chgWData(oldp+546,(__Vtemp_h6ff33a25__0),512);
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
        bufp->chgWData(oldp+562,(__Vtemp_he7310ca3__0),512);
        bufp->chgQData(oldp+578,((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                  >> 0xbU)),53);
        bufp->chgCData(oldp+580,((0x1fU & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                   >> 6U)))),5);
        bufp->chgCData(oldp+581,((0x3fU & (IData)(vlSelf->CoreTop__DOT__IF__DOT__temp))),6);
        bufp->chgBit(oldp+582,(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_in_valid_REG));
        bufp->chgBit(oldp+583,(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit));
        bufp->chgWData(oldp+584,(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data),512);
        bufp->chgBit(oldp+600,(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_0_result));
        bufp->chgBit(oldp+601,(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_1_result));
        bufp->chgBit(oldp+602,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[0]));
        bufp->chgBit(oldp+603,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[1]));
        bufp->chgBit(oldp+604,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[2]));
        bufp->chgBit(oldp+605,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[3]));
        bufp->chgBit(oldp+606,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[4]));
        bufp->chgBit(oldp+607,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[5]));
        bufp->chgBit(oldp+608,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[6]));
        bufp->chgBit(oldp+609,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[7]));
        bufp->chgBit(oldp+610,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[8]));
        bufp->chgBit(oldp+611,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[9]));
        bufp->chgBit(oldp+612,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[10]));
        bufp->chgBit(oldp+613,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[11]));
        bufp->chgBit(oldp+614,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[12]));
        bufp->chgBit(oldp+615,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[13]));
        bufp->chgBit(oldp+616,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[14]));
        bufp->chgBit(oldp+617,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[15]));
        bufp->chgBit(oldp+618,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[16]));
        bufp->chgBit(oldp+619,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[17]));
        bufp->chgBit(oldp+620,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[18]));
        bufp->chgBit(oldp+621,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[19]));
        bufp->chgBit(oldp+622,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[20]));
        bufp->chgBit(oldp+623,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[21]));
        bufp->chgBit(oldp+624,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[22]));
        bufp->chgBit(oldp+625,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[23]));
        bufp->chgBit(oldp+626,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[24]));
        bufp->chgBit(oldp+627,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[25]));
        bufp->chgBit(oldp+628,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[26]));
        bufp->chgBit(oldp+629,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[27]));
        bufp->chgBit(oldp+630,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[28]));
        bufp->chgBit(oldp+631,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[29]));
        bufp->chgBit(oldp+632,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[30]));
        bufp->chgBit(oldp+633,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[31]));
        bufp->chgBit(oldp+634,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_lru_w_MPORT_en_pipe_0));
        bufp->chgCData(oldp+635,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_lru_w_MPORT_addr_pipe_0),5);
        bufp->chgBit(oldp+636,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru
                               [vlSelf->CoreTop__DOT__ICACHE__DOT__lru_lru_w_MPORT_addr_pipe_0]));
        bufp->chgBit(oldp+637,(((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                & ((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                   & ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit) 
                                      & (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_0_result))))));
        bufp->chgBit(oldp+638,(((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                & ((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                   & ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit) 
                                      & (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_1_result))))));
        bufp->chgBit(oldp+639,(((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                & ((1U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                   & ((2U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                      & ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT___T_5) 
                                         & (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r)))))));
        bufp->chgBit(oldp+640,(((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                & ((1U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                   & ((2U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                      & ((~ (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r)) 
                                         & (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT___T_5)))))));
        bufp->chgCData(oldp+641,(vlSelf->CoreTop__DOT__ICACHE__DOT__state),3);
        bufp->chgCData(oldp+642,(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state),2);
        bufp->chgWData(oldp+643,(vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg),512);
        bufp->chgQData(oldp+659,(vlSelf->CoreTop__DOT__ICACHE__DOT__mem_addr_reg),64);
        bufp->chgBit(oldp+661,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r));
        bufp->chgQData(oldp+662,(((0U == (7U & (IData)(
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
        bufp->chgQData(oldp+664,(((0U == (7U & (IData)(
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
        bufp->chgWData(oldp+666,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[0]),512);
        bufp->chgWData(oldp+682,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[1]),512);
        bufp->chgWData(oldp+698,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[2]),512);
        bufp->chgWData(oldp+714,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[3]),512);
        bufp->chgWData(oldp+730,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[4]),512);
        bufp->chgWData(oldp+746,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[5]),512);
        bufp->chgWData(oldp+762,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[6]),512);
        bufp->chgWData(oldp+778,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[7]),512);
        bufp->chgWData(oldp+794,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[8]),512);
        bufp->chgWData(oldp+810,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[9]),512);
        bufp->chgWData(oldp+826,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[10]),512);
        bufp->chgWData(oldp+842,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[11]),512);
        bufp->chgWData(oldp+858,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[12]),512);
        bufp->chgWData(oldp+874,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[13]),512);
        bufp->chgWData(oldp+890,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[14]),512);
        bufp->chgWData(oldp+906,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[15]),512);
        bufp->chgWData(oldp+922,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[16]),512);
        bufp->chgWData(oldp+938,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[17]),512);
        bufp->chgWData(oldp+954,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[18]),512);
        bufp->chgWData(oldp+970,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[19]),512);
        bufp->chgWData(oldp+986,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[20]),512);
        bufp->chgWData(oldp+1002,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[21]),512);
        bufp->chgWData(oldp+1018,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[22]),512);
        bufp->chgWData(oldp+1034,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[23]),512);
        bufp->chgWData(oldp+1050,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[24]),512);
        bufp->chgWData(oldp+1066,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[25]),512);
        bufp->chgWData(oldp+1082,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[26]),512);
        bufp->chgWData(oldp+1098,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[27]),512);
        bufp->chgWData(oldp+1114,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[28]),512);
        bufp->chgWData(oldp+1130,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[29]),512);
        bufp->chgWData(oldp+1146,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[30]),512);
        bufp->chgWData(oldp+1162,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[31]),512);
        bufp->chgBit(oldp+1178,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_en_pipe_0));
        bufp->chgCData(oldp+1179,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0),5);
        bufp->chgCData(oldp+1180,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_addr),5);
        bufp->chgBit(oldp+1181,((1U & (~ (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r)))));
        bufp->chgWData(oldp+1182,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[0]),512);
        bufp->chgWData(oldp+1198,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[1]),512);
        bufp->chgWData(oldp+1214,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[2]),512);
        bufp->chgWData(oldp+1230,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[3]),512);
        bufp->chgWData(oldp+1246,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[4]),512);
        bufp->chgWData(oldp+1262,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[5]),512);
        bufp->chgWData(oldp+1278,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[6]),512);
        bufp->chgWData(oldp+1294,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[7]),512);
        bufp->chgWData(oldp+1310,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[8]),512);
        bufp->chgWData(oldp+1326,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[9]),512);
        bufp->chgWData(oldp+1342,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[10]),512);
        bufp->chgWData(oldp+1358,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[11]),512);
        bufp->chgWData(oldp+1374,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[12]),512);
        bufp->chgWData(oldp+1390,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[13]),512);
        bufp->chgWData(oldp+1406,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[14]),512);
        bufp->chgWData(oldp+1422,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[15]),512);
        bufp->chgWData(oldp+1438,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[16]),512);
        bufp->chgWData(oldp+1454,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[17]),512);
        bufp->chgWData(oldp+1470,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[18]),512);
        bufp->chgWData(oldp+1486,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[19]),512);
        bufp->chgWData(oldp+1502,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[20]),512);
        bufp->chgWData(oldp+1518,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[21]),512);
        bufp->chgWData(oldp+1534,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[22]),512);
        bufp->chgWData(oldp+1550,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[23]),512);
        bufp->chgWData(oldp+1566,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[24]),512);
        bufp->chgWData(oldp+1582,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[25]),512);
        bufp->chgWData(oldp+1598,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[26]),512);
        bufp->chgWData(oldp+1614,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[27]),512);
        bufp->chgWData(oldp+1630,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[28]),512);
        bufp->chgWData(oldp+1646,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[29]),512);
        bufp->chgWData(oldp+1662,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[30]),512);
        bufp->chgWData(oldp+1678,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[31]),512);
        bufp->chgBit(oldp+1694,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_en_pipe_0));
        bufp->chgQData(oldp+1695,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[0]),53);
        bufp->chgQData(oldp+1697,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[1]),53);
        bufp->chgQData(oldp+1699,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[2]),53);
        bufp->chgQData(oldp+1701,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[3]),53);
        bufp->chgQData(oldp+1703,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[4]),53);
        bufp->chgQData(oldp+1705,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[5]),53);
        bufp->chgQData(oldp+1707,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[6]),53);
        bufp->chgQData(oldp+1709,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[7]),53);
        bufp->chgQData(oldp+1711,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[8]),53);
        bufp->chgQData(oldp+1713,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[9]),53);
        bufp->chgQData(oldp+1715,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[10]),53);
        bufp->chgQData(oldp+1717,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[11]),53);
        bufp->chgQData(oldp+1719,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[12]),53);
        bufp->chgQData(oldp+1721,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[13]),53);
        bufp->chgQData(oldp+1723,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[14]),53);
        bufp->chgQData(oldp+1725,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[15]),53);
        bufp->chgQData(oldp+1727,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[16]),53);
        bufp->chgQData(oldp+1729,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[17]),53);
        bufp->chgQData(oldp+1731,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[18]),53);
        bufp->chgQData(oldp+1733,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[19]),53);
        bufp->chgQData(oldp+1735,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[20]),53);
        bufp->chgQData(oldp+1737,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[21]),53);
        bufp->chgQData(oldp+1739,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[22]),53);
        bufp->chgQData(oldp+1741,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[23]),53);
        bufp->chgQData(oldp+1743,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[24]),53);
        bufp->chgQData(oldp+1745,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[25]),53);
        bufp->chgQData(oldp+1747,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[26]),53);
        bufp->chgQData(oldp+1749,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[27]),53);
        bufp->chgQData(oldp+1751,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[28]),53);
        bufp->chgQData(oldp+1753,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[29]),53);
        bufp->chgQData(oldp+1755,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[30]),53);
        bufp->chgQData(oldp+1757,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[31]),53);
        bufp->chgBit(oldp+1759,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_tag_w_en_pipe_0));
        bufp->chgQData(oldp+1760,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_MPORT_1_data),53);
        bufp->chgQData(oldp+1762,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[0]),53);
        bufp->chgQData(oldp+1764,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[1]),53);
        bufp->chgQData(oldp+1766,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[2]),53);
        bufp->chgQData(oldp+1768,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[3]),53);
        bufp->chgQData(oldp+1770,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[4]),53);
        bufp->chgQData(oldp+1772,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[5]),53);
        bufp->chgQData(oldp+1774,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[6]),53);
        bufp->chgQData(oldp+1776,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[7]),53);
        bufp->chgQData(oldp+1778,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[8]),53);
        bufp->chgQData(oldp+1780,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[9]),53);
        bufp->chgQData(oldp+1782,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[10]),53);
        bufp->chgQData(oldp+1784,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[11]),53);
        bufp->chgQData(oldp+1786,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[12]),53);
        bufp->chgQData(oldp+1788,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[13]),53);
        bufp->chgQData(oldp+1790,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[14]),53);
        bufp->chgQData(oldp+1792,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[15]),53);
        bufp->chgQData(oldp+1794,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[16]),53);
        bufp->chgQData(oldp+1796,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[17]),53);
        bufp->chgQData(oldp+1798,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[18]),53);
        bufp->chgQData(oldp+1800,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[19]),53);
        bufp->chgQData(oldp+1802,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[20]),53);
        bufp->chgQData(oldp+1804,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[21]),53);
        bufp->chgQData(oldp+1806,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[22]),53);
        bufp->chgQData(oldp+1808,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[23]),53);
        bufp->chgQData(oldp+1810,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[24]),53);
        bufp->chgQData(oldp+1812,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[25]),53);
        bufp->chgQData(oldp+1814,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[26]),53);
        bufp->chgQData(oldp+1816,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[27]),53);
        bufp->chgQData(oldp+1818,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[28]),53);
        bufp->chgQData(oldp+1820,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[29]),53);
        bufp->chgQData(oldp+1822,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[30]),53);
        bufp->chgQData(oldp+1824,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[31]),53);
        bufp->chgBit(oldp+1826,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_en_pipe_0));
        bufp->chgBit(oldp+1827,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[0]));
        bufp->chgBit(oldp+1828,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[1]));
        bufp->chgBit(oldp+1829,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[2]));
        bufp->chgBit(oldp+1830,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[3]));
        bufp->chgBit(oldp+1831,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[4]));
        bufp->chgBit(oldp+1832,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[5]));
        bufp->chgBit(oldp+1833,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[6]));
        bufp->chgBit(oldp+1834,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[7]));
        bufp->chgBit(oldp+1835,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[8]));
        bufp->chgBit(oldp+1836,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[9]));
        bufp->chgBit(oldp+1837,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[10]));
        bufp->chgBit(oldp+1838,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[11]));
        bufp->chgBit(oldp+1839,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[12]));
        bufp->chgBit(oldp+1840,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[13]));
        bufp->chgBit(oldp+1841,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[14]));
        bufp->chgBit(oldp+1842,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[15]));
        bufp->chgBit(oldp+1843,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[16]));
        bufp->chgBit(oldp+1844,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[17]));
        bufp->chgBit(oldp+1845,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[18]));
        bufp->chgBit(oldp+1846,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[19]));
        bufp->chgBit(oldp+1847,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[20]));
        bufp->chgBit(oldp+1848,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[21]));
        bufp->chgBit(oldp+1849,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[22]));
        bufp->chgBit(oldp+1850,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[23]));
        bufp->chgBit(oldp+1851,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[24]));
        bufp->chgBit(oldp+1852,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[25]));
        bufp->chgBit(oldp+1853,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[26]));
        bufp->chgBit(oldp+1854,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[27]));
        bufp->chgBit(oldp+1855,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[28]));
        bufp->chgBit(oldp+1856,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[29]));
        bufp->chgBit(oldp+1857,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[30]));
        bufp->chgBit(oldp+1858,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[31]));
        bufp->chgBit(oldp+1859,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_en_pipe_0));
        bufp->chgBit(oldp+1860,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[0]));
        bufp->chgBit(oldp+1861,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[1]));
        bufp->chgBit(oldp+1862,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[2]));
        bufp->chgBit(oldp+1863,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[3]));
        bufp->chgBit(oldp+1864,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[4]));
        bufp->chgBit(oldp+1865,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[5]));
        bufp->chgBit(oldp+1866,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[6]));
        bufp->chgBit(oldp+1867,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[7]));
        bufp->chgBit(oldp+1868,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[8]));
        bufp->chgBit(oldp+1869,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[9]));
        bufp->chgBit(oldp+1870,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[10]));
        bufp->chgBit(oldp+1871,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[11]));
        bufp->chgBit(oldp+1872,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[12]));
        bufp->chgBit(oldp+1873,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[13]));
        bufp->chgBit(oldp+1874,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[14]));
        bufp->chgBit(oldp+1875,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[15]));
        bufp->chgBit(oldp+1876,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[16]));
        bufp->chgBit(oldp+1877,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[17]));
        bufp->chgBit(oldp+1878,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[18]));
        bufp->chgBit(oldp+1879,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[19]));
        bufp->chgBit(oldp+1880,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[20]));
        bufp->chgBit(oldp+1881,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[21]));
        bufp->chgBit(oldp+1882,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[22]));
        bufp->chgBit(oldp+1883,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[23]));
        bufp->chgBit(oldp+1884,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[24]));
        bufp->chgBit(oldp+1885,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[25]));
        bufp->chgBit(oldp+1886,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[26]));
        bufp->chgBit(oldp+1887,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[27]));
        bufp->chgBit(oldp+1888,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[28]));
        bufp->chgBit(oldp+1889,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[29]));
        bufp->chgBit(oldp+1890,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[30]));
        bufp->chgBit(oldp+1891,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[31]));
        bufp->chgBit(oldp+1892,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_en_pipe_0));
        bufp->chgCData(oldp+1893,(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0),4);
        bufp->chgBit(oldp+1894,(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_3));
        bufp->chgCData(oldp+1895,((((7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                     ? 2U : 0U) | (
                                                   (3U 
                                                    == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                                    ? 2U
                                                    : 0U))),2);
        bufp->chgBit(oldp+1896,(((8U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)) 
                                 | ((7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)) 
                                    | (3U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))))));
        bufp->chgBit(oldp+1897,((vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                 >> 0x1fU)));
        bufp->chgBit(oldp+1898,((1U & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                       >> 0x13U))));
        bufp->chgQData(oldp+1899,(vlSelf->CoreTop__DOT__IF__DOT__temp),64);
        bufp->chgIData(oldp+1901,(((1U & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                  >> 2U)))
                                    ? (IData)((vlSelf->CoreTop__DOT__IF_io_cache_req_rdata_rep_bits_rdata 
                                               >> 0x20U))
                                    : (IData)(vlSelf->CoreTop__DOT__IF_io_cache_req_rdata_rep_bits_rdata))),32);
        bufp->chgCData(oldp+1902,(vlSelf->CoreTop__DOT__MMEM__DOT__read_state),2);
        bufp->chgCData(oldp+1903,(vlSelf->CoreTop__DOT__MMEM__DOT__write_state),2);
        bufp->chgCData(oldp+1904,(vlSelf->CoreTop__DOT__MMEM__DOT__read_next_state),2);
        bufp->chgCData(oldp+1905,(vlSelf->CoreTop__DOT__MMEM__DOT__write_next_state),2);
        bufp->chgQData(oldp+1906,(vlSelf->CoreTop__DOT__MMEM__DOT__write_addr_buffer),64);
        bufp->chgQData(oldp+1908,(vlSelf->CoreTop__DOT__MMEM__DOT__read_addr_buffer),64);
        bufp->chgCData(oldp+1910,(vlSelf->CoreTop__DOT__MMEM__DOT__read_count),8);
        bufp->chgBit(oldp+1911,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_valid));
        bufp->chgBit(oldp+1912,((1U & (~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)))));
        bufp->chgBit(oldp+1913,(((~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_bits_we)) 
                                 & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_bits_rdata_T_1) 
                                    | (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_valid_T_4)))));
        bufp->chgQData(oldp+1914,(((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_bits_rdata_T_1)
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
        bufp->chgBit(oldp+1916,(((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___Cache_data_io_write_bus_valid_T_3) 
                                 | ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_valid_T_4) 
                                    & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_bits_we)))));
        bufp->chgBit(oldp+1917,(((~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)) 
                                 & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_ready))));
        bufp->chgBit(oldp+1918,((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state))));
        bufp->chgQData(oldp+1919,(((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state))
                                    ? vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_addr_reg
                                    : 0ULL)),64);
        bufp->chgBit(oldp+1921,(((~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)) 
                                 & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_ready))));
        bufp->chgBit(oldp+1922,((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state))));
        bufp->chgQData(oldp+1923,(((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state))
                                    ? vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_addr_reg
                                    : 0ULL)),64);
        bufp->chgBit(oldp+1925,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_rdata_rep_valid));
        bufp->chgBit(oldp+1926,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_wdata_req_ready));
        bufp->chgBit(oldp+1927,((2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state))));
        bufp->chgQData(oldp+1928,((((QData)((IData)(
                                                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0U])))),64);
        bufp->chgBit(oldp+1930,((7U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count_write))));
        bufp->chgBit(oldp+1931,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_wb_valid));
        bufp->chgBit(oldp+1932,(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_addr_req_valid));
        bufp->chgBit(oldp+1933,(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready));
        bufp->chgBit(oldp+1934,(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_valid));
        bufp->chgBit(oldp+1935,(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_out_wb_valid));
        bufp->chgBit(oldp+1936,(((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready) 
                                 & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_ready))));
        bufp->chgBit(oldp+1937,((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__read_state))));
        bufp->chgBit(oldp+1938,(((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready) 
                                 & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_ready))));
        bufp->chgBit(oldp+1939,((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state))));
        bufp->chgBit(oldp+1940,(((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready) 
                                 & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_ready))));
        bufp->chgBit(oldp+1941,((2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state))));
        bufp->chgBit(oldp+1942,((3U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state))));
        bufp->chgBit(oldp+1943,(((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_valid) 
                                 & (0U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)))));
        bufp->chgQData(oldp+1944,(((IData)(vlSelf->__VdfgTmp_h5a5a8c61__0)
                                    ? vlSelf->CoreTop__DOT__MEM__DOT__addr_temp
                                    : 0ULL)),64);
        bufp->chgBit(oldp+1946,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_en));
        bufp->chgCData(oldp+1947,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_waymask),2);
        bufp->chgWData(oldp+1948,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data),512);
        bufp->chgQData(oldp+1964,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_tag_w_data),53);
        bufp->chgQData(oldp+1966,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1_tag_w_data),53);
        bufp->chgBit(oldp+1968,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0
                                [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0]));
        bufp->chgBit(oldp+1969,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1
                                [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_addr_pipe_0]));
        bufp->chgWData(oldp+1970,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data),512);
        bufp->chgWData(oldp+1986,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data),512);
        bufp->chgQData(oldp+2002,((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                   >> 0xbU)),53);
        bufp->chgCData(oldp+2004,((0x1fU & (IData)(
                                                   (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                    >> 6U)))),5);
        bufp->chgCData(oldp+2005,((0x3fU & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp))),6);
        bufp->chgBit(oldp+2006,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_in_valid_REG));
        bufp->chgBit(oldp+2007,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit));
        bufp->chgWData(oldp+2008,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data),512);
        bufp->chgBit(oldp+2024,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_0_result));
        bufp->chgBit(oldp+2025,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_1_result));
        bufp->chgBit(oldp+2026,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[0]));
        bufp->chgBit(oldp+2027,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[1]));
        bufp->chgBit(oldp+2028,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[2]));
        bufp->chgBit(oldp+2029,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[3]));
        bufp->chgBit(oldp+2030,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[4]));
        bufp->chgBit(oldp+2031,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[5]));
        bufp->chgBit(oldp+2032,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[6]));
        bufp->chgBit(oldp+2033,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[7]));
        bufp->chgBit(oldp+2034,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[8]));
        bufp->chgBit(oldp+2035,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[9]));
        bufp->chgBit(oldp+2036,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[10]));
        bufp->chgBit(oldp+2037,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[11]));
        bufp->chgBit(oldp+2038,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[12]));
        bufp->chgBit(oldp+2039,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[13]));
        bufp->chgBit(oldp+2040,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[14]));
        bufp->chgBit(oldp+2041,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[15]));
        bufp->chgBit(oldp+2042,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[16]));
        bufp->chgBit(oldp+2043,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[17]));
        bufp->chgBit(oldp+2044,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[18]));
        bufp->chgBit(oldp+2045,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[19]));
        bufp->chgBit(oldp+2046,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[20]));
        bufp->chgBit(oldp+2047,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[21]));
        bufp->chgBit(oldp+2048,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[22]));
        bufp->chgBit(oldp+2049,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[23]));
        bufp->chgBit(oldp+2050,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[24]));
        bufp->chgBit(oldp+2051,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[25]));
        bufp->chgBit(oldp+2052,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[26]));
        bufp->chgBit(oldp+2053,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[27]));
        bufp->chgBit(oldp+2054,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[28]));
        bufp->chgBit(oldp+2055,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[29]));
        bufp->chgBit(oldp+2056,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[30]));
        bufp->chgBit(oldp+2057,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[31]));
        bufp->chgBit(oldp+2058,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_en_pipe_0));
        bufp->chgCData(oldp+2059,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_addr_pipe_0),5);
        bufp->chgBit(oldp+2060,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_data));
        bufp->chgBit(oldp+2061,(((0U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                 & ((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                    & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit) 
                                       & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_0_result))))));
        bufp->chgBit(oldp+2062,(((0U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                 & ((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                    & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit) 
                                       & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_1_result))))));
        bufp->chgBit(oldp+2063,(((0U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                 & ((1U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                    & ((2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                       & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___T_8) 
                                          & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_r)))))));
        bufp->chgBit(oldp+2064,(((0U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                 & ((1U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                    & ((2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                       & ((~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_r)) 
                                          & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___T_8)))))));
        bufp->chgBit(oldp+2065,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[0]));
        bufp->chgBit(oldp+2066,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[1]));
        bufp->chgBit(oldp+2067,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[2]));
        bufp->chgBit(oldp+2068,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[3]));
        bufp->chgBit(oldp+2069,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[4]));
        bufp->chgBit(oldp+2070,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[5]));
        bufp->chgBit(oldp+2071,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[6]));
        bufp->chgBit(oldp+2072,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[7]));
        bufp->chgBit(oldp+2073,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[8]));
        bufp->chgBit(oldp+2074,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[9]));
        bufp->chgBit(oldp+2075,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[10]));
        bufp->chgBit(oldp+2076,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[11]));
        bufp->chgBit(oldp+2077,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[12]));
        bufp->chgBit(oldp+2078,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[13]));
        bufp->chgBit(oldp+2079,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[14]));
        bufp->chgBit(oldp+2080,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[15]));
        bufp->chgBit(oldp+2081,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[16]));
        bufp->chgBit(oldp+2082,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[17]));
        bufp->chgBit(oldp+2083,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[18]));
        bufp->chgBit(oldp+2084,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[19]));
        bufp->chgBit(oldp+2085,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[20]));
        bufp->chgBit(oldp+2086,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[21]));
        bufp->chgBit(oldp+2087,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[22]));
        bufp->chgBit(oldp+2088,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[23]));
        bufp->chgBit(oldp+2089,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[24]));
        bufp->chgBit(oldp+2090,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[25]));
        bufp->chgBit(oldp+2091,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[26]));
        bufp->chgBit(oldp+2092,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[27]));
        bufp->chgBit(oldp+2093,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[28]));
        bufp->chgBit(oldp+2094,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[29]));
        bufp->chgBit(oldp+2095,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[30]));
        bufp->chgBit(oldp+2096,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[31]));
        bufp->chgBit(oldp+2097,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0_dirt_w_en_pipe_0));
        bufp->chgCData(oldp+2098,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1_dirt_w_addr_pipe_0),5);
        bufp->chgBit(oldp+2099,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0
                                [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1_dirt_w_addr_pipe_0]));
        bufp->chgBit(oldp+2100,((1U & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_waymask))));
        bufp->chgBit(oldp+2101,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0_MPORT_4_en));
        bufp->chgBit(oldp+2102,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[0]));
        bufp->chgBit(oldp+2103,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[1]));
        bufp->chgBit(oldp+2104,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[2]));
        bufp->chgBit(oldp+2105,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[3]));
        bufp->chgBit(oldp+2106,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[4]));
        bufp->chgBit(oldp+2107,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[5]));
        bufp->chgBit(oldp+2108,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[6]));
        bufp->chgBit(oldp+2109,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[7]));
        bufp->chgBit(oldp+2110,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[8]));
        bufp->chgBit(oldp+2111,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[9]));
        bufp->chgBit(oldp+2112,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[10]));
        bufp->chgBit(oldp+2113,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[11]));
        bufp->chgBit(oldp+2114,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[12]));
        bufp->chgBit(oldp+2115,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[13]));
        bufp->chgBit(oldp+2116,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[14]));
        bufp->chgBit(oldp+2117,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[15]));
        bufp->chgBit(oldp+2118,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[16]));
        bufp->chgBit(oldp+2119,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[17]));
        bufp->chgBit(oldp+2120,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[18]));
        bufp->chgBit(oldp+2121,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[19]));
        bufp->chgBit(oldp+2122,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[20]));
        bufp->chgBit(oldp+2123,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[21]));
        bufp->chgBit(oldp+2124,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[22]));
        bufp->chgBit(oldp+2125,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[23]));
        bufp->chgBit(oldp+2126,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[24]));
        bufp->chgBit(oldp+2127,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[25]));
        bufp->chgBit(oldp+2128,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[26]));
        bufp->chgBit(oldp+2129,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[27]));
        bufp->chgBit(oldp+2130,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[28]));
        bufp->chgBit(oldp+2131,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[29]));
        bufp->chgBit(oldp+2132,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[30]));
        bufp->chgBit(oldp+2133,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[31]));
        bufp->chgBit(oldp+2134,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1_dirt_w_en_pipe_0));
        bufp->chgBit(oldp+2135,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1
                                [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1_dirt_w_addr_pipe_0]));
        bufp->chgBit(oldp+2136,((1U & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_waymask) 
                                       >> 1U))));
        bufp->chgCData(oldp+2137,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state),3);
        bufp->chgCData(oldp+2138,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state),2);
        bufp->chgCData(oldp+2139,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state),2);
        bufp->chgWData(oldp+2140,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg),512);
        bufp->chgQData(oldp+2156,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_addr_reg),64);
        bufp->chgBit(oldp+2158,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_r));
        bufp->chgCData(oldp+2159,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count_write),4);
        bufp->chgQData(oldp+2160,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_addr_reg),64);
        bufp->chgWData(oldp+2162,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg),512);
        bufp->chgQData(oldp+2178,(((0U == (7U & (IData)(
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
        bufp->chgQData(oldp+2180,(((0U == (7U & (IData)(
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
        bufp->chgQData(oldp+2182,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask),64);
        bufp->chgQData(oldp+2184,((((QData)((IData)(
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
        bufp->chgWData(oldp+2186,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo_lo),128);
        bufp->chgQData(oldp+2190,((((QData)((IData)(
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
        bufp->chgWData(oldp+2192,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo),256);
        bufp->chgQData(oldp+2200,((((QData)((IData)(
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
        bufp->chgWData(oldp+2202,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi_lo),128);
        bufp->chgQData(oldp+2206,((((QData)((IData)(
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
        bufp->chgWData(oldp+2208,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi),256);
        bufp->chgWData(oldp+2216,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend),512);
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
        bufp->chgWData(oldp+2232,(__Vtemp_hc34456c3__0),512);
        bufp->chgWData(oldp+2248,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[0]),512);
        bufp->chgWData(oldp+2264,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[1]),512);
        bufp->chgWData(oldp+2280,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[2]),512);
        bufp->chgWData(oldp+2296,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[3]),512);
        bufp->chgWData(oldp+2312,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[4]),512);
        bufp->chgWData(oldp+2328,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[5]),512);
        bufp->chgWData(oldp+2344,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[6]),512);
        bufp->chgWData(oldp+2360,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[7]),512);
        bufp->chgWData(oldp+2376,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[8]),512);
        bufp->chgWData(oldp+2392,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[9]),512);
        bufp->chgWData(oldp+2408,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[10]),512);
        bufp->chgWData(oldp+2424,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[11]),512);
        bufp->chgWData(oldp+2440,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[12]),512);
        bufp->chgWData(oldp+2456,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[13]),512);
        bufp->chgWData(oldp+2472,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[14]),512);
        bufp->chgWData(oldp+2488,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[15]),512);
        bufp->chgWData(oldp+2504,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[16]),512);
        bufp->chgWData(oldp+2520,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[17]),512);
        bufp->chgWData(oldp+2536,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[18]),512);
        bufp->chgWData(oldp+2552,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[19]),512);
        bufp->chgWData(oldp+2568,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[20]),512);
        bufp->chgWData(oldp+2584,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[21]),512);
        bufp->chgWData(oldp+2600,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[22]),512);
        bufp->chgWData(oldp+2616,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[23]),512);
        bufp->chgWData(oldp+2632,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[24]),512);
        bufp->chgWData(oldp+2648,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[25]),512);
        bufp->chgWData(oldp+2664,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[26]),512);
        bufp->chgWData(oldp+2680,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[27]),512);
        bufp->chgWData(oldp+2696,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[28]),512);
        bufp->chgWData(oldp+2712,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[29]),512);
        bufp->chgWData(oldp+2728,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[30]),512);
        bufp->chgWData(oldp+2744,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[31]),512);
        bufp->chgBit(oldp+2760,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_en_pipe_0));
        bufp->chgCData(oldp+2761,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0),5);
        bufp->chgCData(oldp+2762,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_addr),5);
        bufp->chgWData(oldp+2763,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[0]),512);
        bufp->chgWData(oldp+2779,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[1]),512);
        bufp->chgWData(oldp+2795,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[2]),512);
        bufp->chgWData(oldp+2811,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[3]),512);
        bufp->chgWData(oldp+2827,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[4]),512);
        bufp->chgWData(oldp+2843,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[5]),512);
        bufp->chgWData(oldp+2859,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[6]),512);
        bufp->chgWData(oldp+2875,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[7]),512);
        bufp->chgWData(oldp+2891,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[8]),512);
        bufp->chgWData(oldp+2907,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[9]),512);
        bufp->chgWData(oldp+2923,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[10]),512);
        bufp->chgWData(oldp+2939,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[11]),512);
        bufp->chgWData(oldp+2955,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[12]),512);
        bufp->chgWData(oldp+2971,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[13]),512);
        bufp->chgWData(oldp+2987,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[14]),512);
        bufp->chgWData(oldp+3003,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[15]),512);
        bufp->chgWData(oldp+3019,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[16]),512);
        bufp->chgWData(oldp+3035,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[17]),512);
        bufp->chgWData(oldp+3051,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[18]),512);
        bufp->chgWData(oldp+3067,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[19]),512);
        bufp->chgWData(oldp+3083,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[20]),512);
        bufp->chgWData(oldp+3099,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[21]),512);
        bufp->chgWData(oldp+3115,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[22]),512);
        bufp->chgWData(oldp+3131,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[23]),512);
        bufp->chgWData(oldp+3147,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[24]),512);
        bufp->chgWData(oldp+3163,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[25]),512);
        bufp->chgWData(oldp+3179,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[26]),512);
        bufp->chgWData(oldp+3195,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[27]),512);
        bufp->chgWData(oldp+3211,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[28]),512);
        bufp->chgWData(oldp+3227,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[29]),512);
        bufp->chgWData(oldp+3243,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[30]),512);
        bufp->chgWData(oldp+3259,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[31]),512);
        bufp->chgBit(oldp+3275,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_en_pipe_0));
        bufp->chgQData(oldp+3276,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[0]),53);
        bufp->chgQData(oldp+3278,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[1]),53);
        bufp->chgQData(oldp+3280,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[2]),53);
        bufp->chgQData(oldp+3282,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[3]),53);
        bufp->chgQData(oldp+3284,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[4]),53);
        bufp->chgQData(oldp+3286,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[5]),53);
        bufp->chgQData(oldp+3288,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[6]),53);
        bufp->chgQData(oldp+3290,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[7]),53);
        bufp->chgQData(oldp+3292,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[8]),53);
        bufp->chgQData(oldp+3294,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[9]),53);
        bufp->chgQData(oldp+3296,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[10]),53);
        bufp->chgQData(oldp+3298,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[11]),53);
        bufp->chgQData(oldp+3300,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[12]),53);
        bufp->chgQData(oldp+3302,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[13]),53);
        bufp->chgQData(oldp+3304,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[14]),53);
        bufp->chgQData(oldp+3306,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[15]),53);
        bufp->chgQData(oldp+3308,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[16]),53);
        bufp->chgQData(oldp+3310,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[17]),53);
        bufp->chgQData(oldp+3312,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[18]),53);
        bufp->chgQData(oldp+3314,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[19]),53);
        bufp->chgQData(oldp+3316,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[20]),53);
        bufp->chgQData(oldp+3318,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[21]),53);
        bufp->chgQData(oldp+3320,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[22]),53);
        bufp->chgQData(oldp+3322,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[23]),53);
        bufp->chgQData(oldp+3324,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[24]),53);
        bufp->chgQData(oldp+3326,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[25]),53);
        bufp->chgQData(oldp+3328,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[26]),53);
        bufp->chgQData(oldp+3330,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[27]),53);
        bufp->chgQData(oldp+3332,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[28]),53);
        bufp->chgQData(oldp+3334,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[29]),53);
        bufp->chgQData(oldp+3336,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[30]),53);
        bufp->chgQData(oldp+3338,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[31]),53);
        bufp->chgBit(oldp+3340,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_tag_w_en_pipe_0));
        bufp->chgCData(oldp+3341,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_tag_w_addr_pipe_0),5);
        bufp->chgQData(oldp+3342,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_MPORT_1_data),53);
        bufp->chgQData(oldp+3344,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[0]),53);
        bufp->chgQData(oldp+3346,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[1]),53);
        bufp->chgQData(oldp+3348,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[2]),53);
        bufp->chgQData(oldp+3350,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[3]),53);
        bufp->chgQData(oldp+3352,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[4]),53);
        bufp->chgQData(oldp+3354,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[5]),53);
        bufp->chgQData(oldp+3356,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[6]),53);
        bufp->chgQData(oldp+3358,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[7]),53);
        bufp->chgQData(oldp+3360,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[8]),53);
        bufp->chgQData(oldp+3362,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[9]),53);
        bufp->chgQData(oldp+3364,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[10]),53);
        bufp->chgQData(oldp+3366,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[11]),53);
        bufp->chgQData(oldp+3368,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[12]),53);
        bufp->chgQData(oldp+3370,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[13]),53);
        bufp->chgQData(oldp+3372,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[14]),53);
        bufp->chgQData(oldp+3374,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[15]),53);
        bufp->chgQData(oldp+3376,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[16]),53);
        bufp->chgQData(oldp+3378,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[17]),53);
        bufp->chgQData(oldp+3380,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[18]),53);
        bufp->chgQData(oldp+3382,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[19]),53);
        bufp->chgQData(oldp+3384,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[20]),53);
        bufp->chgQData(oldp+3386,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[21]),53);
        bufp->chgQData(oldp+3388,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[22]),53);
        bufp->chgQData(oldp+3390,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[23]),53);
        bufp->chgQData(oldp+3392,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[24]),53);
        bufp->chgQData(oldp+3394,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[25]),53);
        bufp->chgQData(oldp+3396,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[26]),53);
        bufp->chgQData(oldp+3398,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[27]),53);
        bufp->chgQData(oldp+3400,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[28]),53);
        bufp->chgQData(oldp+3402,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[29]),53);
        bufp->chgQData(oldp+3404,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[30]),53);
        bufp->chgQData(oldp+3406,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[31]),53);
        bufp->chgBit(oldp+3408,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1_tag_w_en_pipe_0));
        bufp->chgCData(oldp+3409,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0),5);
        bufp->chgBit(oldp+3410,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[0]));
        bufp->chgBit(oldp+3411,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[1]));
        bufp->chgBit(oldp+3412,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[2]));
        bufp->chgBit(oldp+3413,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[3]));
        bufp->chgBit(oldp+3414,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[4]));
        bufp->chgBit(oldp+3415,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[5]));
        bufp->chgBit(oldp+3416,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[6]));
        bufp->chgBit(oldp+3417,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[7]));
        bufp->chgBit(oldp+3418,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[8]));
        bufp->chgBit(oldp+3419,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[9]));
        bufp->chgBit(oldp+3420,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[10]));
        bufp->chgBit(oldp+3421,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[11]));
        bufp->chgBit(oldp+3422,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[12]));
        bufp->chgBit(oldp+3423,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[13]));
        bufp->chgBit(oldp+3424,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[14]));
        bufp->chgBit(oldp+3425,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[15]));
        bufp->chgBit(oldp+3426,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[16]));
        bufp->chgBit(oldp+3427,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[17]));
        bufp->chgBit(oldp+3428,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[18]));
        bufp->chgBit(oldp+3429,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[19]));
        bufp->chgBit(oldp+3430,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[20]));
        bufp->chgBit(oldp+3431,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[21]));
        bufp->chgBit(oldp+3432,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[22]));
        bufp->chgBit(oldp+3433,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[23]));
        bufp->chgBit(oldp+3434,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[24]));
        bufp->chgBit(oldp+3435,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[25]));
        bufp->chgBit(oldp+3436,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[26]));
        bufp->chgBit(oldp+3437,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[27]));
        bufp->chgBit(oldp+3438,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[28]));
        bufp->chgBit(oldp+3439,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[29]));
        bufp->chgBit(oldp+3440,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[30]));
        bufp->chgBit(oldp+3441,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[31]));
        bufp->chgBit(oldp+3442,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_en_pipe_0));
        bufp->chgCData(oldp+3443,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0),5);
        bufp->chgBit(oldp+3444,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[0]));
        bufp->chgBit(oldp+3445,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[1]));
        bufp->chgBit(oldp+3446,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[2]));
        bufp->chgBit(oldp+3447,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[3]));
        bufp->chgBit(oldp+3448,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[4]));
        bufp->chgBit(oldp+3449,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[5]));
        bufp->chgBit(oldp+3450,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[6]));
        bufp->chgBit(oldp+3451,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[7]));
        bufp->chgBit(oldp+3452,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[8]));
        bufp->chgBit(oldp+3453,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[9]));
        bufp->chgBit(oldp+3454,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[10]));
        bufp->chgBit(oldp+3455,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[11]));
        bufp->chgBit(oldp+3456,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[12]));
        bufp->chgBit(oldp+3457,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[13]));
        bufp->chgBit(oldp+3458,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[14]));
        bufp->chgBit(oldp+3459,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[15]));
        bufp->chgBit(oldp+3460,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[16]));
        bufp->chgBit(oldp+3461,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[17]));
        bufp->chgBit(oldp+3462,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[18]));
        bufp->chgBit(oldp+3463,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[19]));
        bufp->chgBit(oldp+3464,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[20]));
        bufp->chgBit(oldp+3465,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[21]));
        bufp->chgBit(oldp+3466,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[22]));
        bufp->chgBit(oldp+3467,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[23]));
        bufp->chgBit(oldp+3468,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[24]));
        bufp->chgBit(oldp+3469,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[25]));
        bufp->chgBit(oldp+3470,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[26]));
        bufp->chgBit(oldp+3471,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[27]));
        bufp->chgBit(oldp+3472,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[28]));
        bufp->chgBit(oldp+3473,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[29]));
        bufp->chgBit(oldp+3474,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[30]));
        bufp->chgBit(oldp+3475,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[31]));
        bufp->chgBit(oldp+3476,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_en_pipe_0));
        bufp->chgCData(oldp+3477,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_addr_pipe_0),5);
        bufp->chgCData(oldp+3478,(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__read_state),2);
        bufp->chgCData(oldp+3479,(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state),2);
    }
    bufp->chgBit(oldp+3480,(vlSelf->clock));
    bufp->chgBit(oldp+3481,(vlSelf->reset));
    bufp->chgQData(oldp+3482,(vlSelf->io_pc),64);
    bufp->chgIData(oldp+3484,(vlSelf->io_inst),32);
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
