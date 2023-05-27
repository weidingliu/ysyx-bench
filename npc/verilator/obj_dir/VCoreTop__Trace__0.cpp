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
    VlWide<4>/*127:0*/ __Vtemp_hb5acfd9b__0;
    VlWide<4>/*127:0*/ __Vtemp_h8248920c__0;
    VlWide<4>/*127:0*/ __Vtemp_h32213b7b__0;
    VlWide<4>/*127:0*/ __Vtemp_hf98c7323__0;
    VlWide<4>/*127:0*/ __Vtemp_h9a785a5b__0;
    VlWide<5>/*159:0*/ __Vtemp_h97a9be20__0;
    VlWide<5>/*159:0*/ __Vtemp_h97a9be20__1;
    VlWide<5>/*159:0*/ __Vtemp_h1a657afd__0;
    VlWide<5>/*159:0*/ __Vtemp_h7a662728__0;
    VlWide<5>/*159:0*/ __Vtemp_h791e8ef8__0;
    VlWide<16>/*511:0*/ __Vtemp_hf989eec7__0;
    VlWide<16>/*511:0*/ __Vtemp_h4453b49e__0;
    VlWide<16>/*511:0*/ __Vtemp_hc2882e76__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,((((IData)(vlSelf->CoreTop__DOT__EX__DOT__branch_flag) 
                               & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_inst_valid)) 
                              & (IData)(vlSelf->CoreTop__DOT__valid_1))));
        bufp->chgBit(oldp+1,(vlSelf->CoreTop__DOT__EX_io_branchIO_is_jump));
        bufp->chgQData(oldp+2,(((0x19U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                 ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1
                                 : vlSelf->CoreTop__DOT__EX__DOT___GEN_289)),64);
        bufp->chgBit(oldp+4,(vlSelf->CoreTop__DOT__EX_io_in_ready));
        bufp->chgQData(oldp+5,(vlSelf->CoreTop__DOT__IF__DOT__temp),64);
        bufp->chgBit(oldp+7,(vlSelf->CoreTop__DOT__ICACHE_io_in_rdata_rep_valid));
        bufp->chgQData(oldp+8,((((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                 & (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit))
                                 ? vlSelf->CoreTop__DOT__ICACHE__DOT__hit_data
                                 : vlSelf->CoreTop__DOT__ICACHE__DOT__mem_data)),64);
        bufp->chgIData(oldp+10,(((IData)(vlSelf->CoreTop__DOT__EX_io_is_flush)
                                  ? 0U : ((1U & (IData)(
                                                        (vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                         >> 2U)))
                                           ? (IData)(
                                                     ((((1U 
                                                         == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                                        & (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit))
                                                        ? vlSelf->CoreTop__DOT__ICACHE__DOT__hit_data
                                                        : vlSelf->CoreTop__DOT__ICACHE__DOT__mem_data) 
                                                      >> 0x20U))
                                           : (IData)(
                                                     (((1U 
                                                        == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                                       & (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit))
                                                       ? vlSelf->CoreTop__DOT__ICACHE__DOT__hit_data
                                                       : vlSelf->CoreTop__DOT__ICACHE__DOT__mem_data))))),32);
        bufp->chgBit(oldp+11,(vlSelf->CoreTop__DOT__EX_io_is_flush));
        bufp->chgBit(oldp+12,(vlSelf->CoreTop__DOT__valid));
        bufp->chgQData(oldp+13,(vlSelf->CoreTop__DOT__ID_io_in_bits_r_PC),64);
        bufp->chgIData(oldp+15,(vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst),32);
        bufp->chgQData(oldp+16,(((((IData)(vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfWen) 
                                   & ((IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest) 
                                      == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                   >> 0xfU)))) 
                                  & (0U != (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest)))
                                  ? vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfData
                                  : ((((IData)(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfWen) 
                                       & ((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest) 
                                          == (0x1fU 
                                              & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                 >> 0xfU)))) 
                                      & (0U != (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest)))
                                      ? vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfData
                                      : ((((IData)(vlSelf->CoreTop__DOT__WB_io_out_bits_ctrl_rf_rfWen) 
                                           & ((IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest) 
                                              == (0x1fU 
                                                  & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                     >> 0xfU)))) 
                                          & (0U != (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest)))
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
        bufp->chgQData(oldp+18,(((((IData)(vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfWen) 
                                   & ((IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest) 
                                      == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                   >> 0x14U)))) 
                                  & (0U != (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest)))
                                  ? vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfData
                                  : ((((IData)(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfWen) 
                                       & ((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest) 
                                          == (0x1fU 
                                              & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                 >> 0x14U)))) 
                                      & (0U != (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest)))
                                      ? vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfData
                                      : ((((IData)(vlSelf->CoreTop__DOT__WB_io_out_bits_ctrl_rf_rfWen) 
                                           & ((IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest) 
                                              == (0x1fU 
                                                  & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                     >> 0x14U)))) 
                                          & (0U != (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest)))
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
        bufp->chgCData(oldp+20,((((7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                   ? 2U : 0U) | ((3U 
                                                  == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                                  ? 2U
                                                  : 0U))),3);
        bufp->chgCData(oldp+21,((((8U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)) 
                                  | (7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))) 
                                 | (3U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)))),3);
        bufp->chgCData(oldp+22,(((0x13U == (0x707fU 
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
        bufp->chgBit(oldp+23,((1U & (~ (((0U == ((0x13U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                  ? 0x40U
                                                  : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_316))) 
                                         | (IData)(vlSelf->CoreTop__DOT__EX_io_is_flush)) 
                                        | (~ (IData)(vlSelf->CoreTop__DOT__valid)))))));
        bufp->chgCData(oldp+24,((0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+25,((0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                          >> 0x14U))),5);
        bufp->chgBit(oldp+26,(((IData)(vlSelf->CoreTop__DOT__valid) 
                               & (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_3))));
        bufp->chgCData(oldp+27,(((0x13U == (0x707fU 
                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                  ? 0x40U : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_316))),7);
        bufp->chgCData(oldp+28,((0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                          >> 7U))),5);
        bufp->chgQData(oldp+29,(((((((8U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
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
        bufp->chgBit(oldp+31,(vlSelf->CoreTop__DOT__valid_1));
        bufp->chgCData(oldp+32,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src1Type),3);
        bufp->chgCData(oldp+33,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src2Type),3);
        bufp->chgCData(oldp+34,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType),3);
        bufp->chgBit(oldp+35,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_inst_valid));
        bufp->chgCData(oldp+36,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfSrc1),5);
        bufp->chgCData(oldp+37,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfSrc2),5);
        bufp->chgBit(oldp+38,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfWen));
        bufp->chgCData(oldp+39,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype),7);
        bufp->chgCData(oldp+40,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest),5);
        bufp->chgQData(oldp+41,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_src1),64);
        bufp->chgQData(oldp+43,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_src2),64);
        bufp->chgQData(oldp+45,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm),64);
        bufp->chgQData(oldp+47,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC),64);
        bufp->chgIData(oldp+49,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_inst),32);
        bufp->chgQData(oldp+50,(vlSelf->CoreTop__DOT__mem_bypass_io_Bypass_REG1),64);
        bufp->chgQData(oldp+52,(vlSelf->CoreTop__DOT__mem_bypass_io_Bypass_REG2),64);
        bufp->chgBit(oldp+54,((1U & (~ (IData)(vlSelf->CoreTop__DOT__MEM__DOT___io_out_valid_T_6)))));
        bufp->chgBit(oldp+55,(vlSelf->CoreTop__DOT__EX_io_out_valid));
        bufp->chgBit(oldp+56,(vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfWen));
        bufp->chgQData(oldp+57,(vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfData),64);
        bufp->chgQData(oldp+59,(((0U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src1Type))
                                  ? vlSelf->CoreTop__DOT__mem_bypass_io_Bypass_REG1
                                  : vlSelf->CoreTop__DOT__EX__DOT___GEN_1)),64);
        bufp->chgQData(oldp+61,(((0U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src2Type))
                                  ? vlSelf->CoreTop__DOT__mem_bypass_io_Bypass_REG2
                                  : vlSelf->CoreTop__DOT__EX__DOT___GEN_3)),64);
        bufp->chgBit(oldp+63,(((0x42U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                               & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_inst_valid))));
        bufp->chgBit(oldp+64,(vlSelf->CoreTop__DOT__DIP_io_is_break_REG_1));
        bufp->chgQData(oldp+65,(vlSelf->CoreTop__DOT__rf
                                [0U]),64);
        bufp->chgQData(oldp+67,(vlSelf->CoreTop__DOT__rf
                                [1U]),64);
        bufp->chgQData(oldp+69,(vlSelf->CoreTop__DOT__rf
                                [2U]),64);
        bufp->chgQData(oldp+71,(vlSelf->CoreTop__DOT__rf
                                [3U]),64);
        bufp->chgQData(oldp+73,(vlSelf->CoreTop__DOT__rf
                                [4U]),64);
        bufp->chgQData(oldp+75,(vlSelf->CoreTop__DOT__rf
                                [5U]),64);
        bufp->chgQData(oldp+77,(vlSelf->CoreTop__DOT__rf
                                [6U]),64);
        bufp->chgQData(oldp+79,(vlSelf->CoreTop__DOT__rf
                                [7U]),64);
        bufp->chgQData(oldp+81,(vlSelf->CoreTop__DOT__rf
                                [8U]),64);
        bufp->chgQData(oldp+83,(vlSelf->CoreTop__DOT__rf
                                [9U]),64);
        bufp->chgQData(oldp+85,(vlSelf->CoreTop__DOT__rf
                                [0xaU]),64);
        bufp->chgQData(oldp+87,(vlSelf->CoreTop__DOT__rf
                                [0xbU]),64);
        bufp->chgQData(oldp+89,(vlSelf->CoreTop__DOT__rf
                                [0xcU]),64);
        bufp->chgQData(oldp+91,(vlSelf->CoreTop__DOT__rf
                                [0xdU]),64);
        bufp->chgQData(oldp+93,(vlSelf->CoreTop__DOT__rf
                                [0xeU]),64);
        bufp->chgQData(oldp+95,(vlSelf->CoreTop__DOT__rf
                                [0xfU]),64);
        bufp->chgQData(oldp+97,(vlSelf->CoreTop__DOT__rf
                                [0x10U]),64);
        bufp->chgQData(oldp+99,(vlSelf->CoreTop__DOT__rf
                                [0x11U]),64);
        bufp->chgQData(oldp+101,(vlSelf->CoreTop__DOT__rf
                                 [0x12U]),64);
        bufp->chgQData(oldp+103,(vlSelf->CoreTop__DOT__rf
                                 [0x13U]),64);
        bufp->chgQData(oldp+105,(vlSelf->CoreTop__DOT__rf
                                 [0x14U]),64);
        bufp->chgQData(oldp+107,(vlSelf->CoreTop__DOT__rf
                                 [0x15U]),64);
        bufp->chgQData(oldp+109,(vlSelf->CoreTop__DOT__rf
                                 [0x16U]),64);
        bufp->chgQData(oldp+111,(vlSelf->CoreTop__DOT__rf
                                 [0x17U]),64);
        bufp->chgQData(oldp+113,(vlSelf->CoreTop__DOT__rf
                                 [0x18U]),64);
        bufp->chgQData(oldp+115,(vlSelf->CoreTop__DOT__rf
                                 [0x19U]),64);
        bufp->chgQData(oldp+117,(vlSelf->CoreTop__DOT__rf
                                 [0x1aU]),64);
        bufp->chgQData(oldp+119,(vlSelf->CoreTop__DOT__rf
                                 [0x1bU]),64);
        bufp->chgQData(oldp+121,(vlSelf->CoreTop__DOT__rf
                                 [0x1cU]),64);
        bufp->chgQData(oldp+123,(vlSelf->CoreTop__DOT__rf
                                 [0x1dU]),64);
        bufp->chgQData(oldp+125,(vlSelf->CoreTop__DOT__rf
                                 [0x1eU]),64);
        bufp->chgQData(oldp+127,(vlSelf->CoreTop__DOT__rf
                                 [0x1fU]),64);
        bufp->chgIData(oldp+129,(vlSelf->CoreTop__DOT__DIP_io_inst_REG),32);
        bufp->chgQData(oldp+130,(vlSelf->CoreTop__DOT__DIP_io_pc_REG),64);
        bufp->chgBit(oldp+132,(vlSelf->CoreTop__DOT__DIP_io_inst_valid_REG));
        bufp->chgQData(oldp+133,(vlSelf->CoreTop__DOT__DIP_io_dnpc_REG),64);
        bufp->chgBit(oldp+135,(vlSelf->CoreTop__DOT__DIP_io_is_skip_REG));
        bufp->chgQData(oldp+136,(vlSelf->CoreTop__DOT__rf[0]),64);
        bufp->chgQData(oldp+138,(vlSelf->CoreTop__DOT__rf[1]),64);
        bufp->chgQData(oldp+140,(vlSelf->CoreTop__DOT__rf[2]),64);
        bufp->chgQData(oldp+142,(vlSelf->CoreTop__DOT__rf[3]),64);
        bufp->chgQData(oldp+144,(vlSelf->CoreTop__DOT__rf[4]),64);
        bufp->chgQData(oldp+146,(vlSelf->CoreTop__DOT__rf[5]),64);
        bufp->chgQData(oldp+148,(vlSelf->CoreTop__DOT__rf[6]),64);
        bufp->chgQData(oldp+150,(vlSelf->CoreTop__DOT__rf[7]),64);
        bufp->chgQData(oldp+152,(vlSelf->CoreTop__DOT__rf[8]),64);
        bufp->chgQData(oldp+154,(vlSelf->CoreTop__DOT__rf[9]),64);
        bufp->chgQData(oldp+156,(vlSelf->CoreTop__DOT__rf[10]),64);
        bufp->chgQData(oldp+158,(vlSelf->CoreTop__DOT__rf[11]),64);
        bufp->chgQData(oldp+160,(vlSelf->CoreTop__DOT__rf[12]),64);
        bufp->chgQData(oldp+162,(vlSelf->CoreTop__DOT__rf[13]),64);
        bufp->chgQData(oldp+164,(vlSelf->CoreTop__DOT__rf[14]),64);
        bufp->chgQData(oldp+166,(vlSelf->CoreTop__DOT__rf[15]),64);
        bufp->chgQData(oldp+168,(vlSelf->CoreTop__DOT__rf[16]),64);
        bufp->chgQData(oldp+170,(vlSelf->CoreTop__DOT__rf[17]),64);
        bufp->chgQData(oldp+172,(vlSelf->CoreTop__DOT__rf[18]),64);
        bufp->chgQData(oldp+174,(vlSelf->CoreTop__DOT__rf[19]),64);
        bufp->chgQData(oldp+176,(vlSelf->CoreTop__DOT__rf[20]),64);
        bufp->chgQData(oldp+178,(vlSelf->CoreTop__DOT__rf[21]),64);
        bufp->chgQData(oldp+180,(vlSelf->CoreTop__DOT__rf[22]),64);
        bufp->chgQData(oldp+182,(vlSelf->CoreTop__DOT__rf[23]),64);
        bufp->chgQData(oldp+184,(vlSelf->CoreTop__DOT__rf[24]),64);
        bufp->chgQData(oldp+186,(vlSelf->CoreTop__DOT__rf[25]),64);
        bufp->chgQData(oldp+188,(vlSelf->CoreTop__DOT__rf[26]),64);
        bufp->chgQData(oldp+190,(vlSelf->CoreTop__DOT__rf[27]),64);
        bufp->chgQData(oldp+192,(vlSelf->CoreTop__DOT__rf[28]),64);
        bufp->chgQData(oldp+194,(vlSelf->CoreTop__DOT__rf[29]),64);
        bufp->chgQData(oldp+196,(vlSelf->CoreTop__DOT__rf[30]),64);
        bufp->chgQData(oldp+198,(vlSelf->CoreTop__DOT__rf[31]),64);
        bufp->chgQData(oldp+200,(vlSelf->CoreTop__DOT__rf
                                 [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                            >> 0xfU))]),64);
        bufp->chgQData(oldp+202,(vlSelf->CoreTop__DOT__rf
                                 [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                            >> 0x14U))]),64);
        bufp->chgQData(oldp+204,(((0U == (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest))
                                   ? 0ULL : vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfData)),64);
        bufp->chgCData(oldp+206,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest),5);
        bufp->chgBit(oldp+207,(vlSelf->CoreTop__DOT__WB_io_out_bits_ctrl_rf_rfWen));
        bufp->chgBit(oldp+208,(vlSelf->CoreTop__DOT__valid_2));
        bufp->chgCData(oldp+209,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_fuType),3);
        bufp->chgBit(oldp+210,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_inst_valid));
        bufp->chgBit(oldp+211,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_rfWen));
        bufp->chgCData(oldp+212,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype),7);
        bufp->chgQData(oldp+213,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_PC),64);
        bufp->chgIData(oldp+215,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_inst),32);
        bufp->chgQData(oldp+216,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_Dnpc),64);
        bufp->chgCData(oldp+218,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest),5);
        bufp->chgQData(oldp+219,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfData),64);
        bufp->chgQData(oldp+221,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src1),64);
        bufp->chgQData(oldp+223,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2),64);
        bufp->chgQData(oldp+225,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_Imm),64);
        bufp->chgBit(oldp+227,(vlSelf->CoreTop__DOT__MEM_io_out_valid));
        bufp->chgBit(oldp+228,(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_signal_inst_valid));
        bufp->chgBit(oldp+229,((((0xa0000048ULL == vlSelf->CoreTop__DOT__MEM__DOT__addr_temp) 
                                 | (0xa00003f8ULL == vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)) 
                                | ((0xa0000000ULL <= vlSelf->CoreTop__DOT__MEM__DOT__addr_temp) 
                                   & (0xa1200000ULL 
                                      >= vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))));
        bufp->chgBit(oldp+230,(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfWen));
        bufp->chgQData(oldp+231,(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfData),64);
        bufp->chgBit(oldp+233,(vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_valid));
        bufp->chgQData(oldp+234,(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp),64);
        bufp->chgBit(oldp+236,((((4U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_fuType)) 
                                 & (IData)(vlSelf->CoreTop__DOT__valid_2)) 
                                & (IData)(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_signal_inst_valid))));
        bufp->chgBit(oldp+237,(vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_we));
        bufp->chgBit(oldp+238,(vlSelf->CoreTop__DOT__MMIO_io_in_rdata_rep_valid));
        bufp->chgQData(oldp+239,(vlSelf->CoreTop__DOT__MMIO_io_in_rdata_rep_bits_rdata),64);
        bufp->chgQData(oldp+241,(vlSelf->CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wdata),64);
        bufp->chgCData(oldp+243,(vlSelf->CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wmask),8);
        bufp->chgBit(oldp+244,(vlSelf->CoreTop__DOT__MMIO_io_in_wdata_rep));
        bufp->chgBit(oldp+245,(vlSelf->CoreTop__DOT__valid_3));
        bufp->chgBit(oldp+246,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_inst_valid));
        bufp->chgBit(oldp+247,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_rfWen));
        bufp->chgQData(oldp+248,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_PC),64);
        bufp->chgIData(oldp+250,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_inst),32);
        bufp->chgQData(oldp+251,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_Dnpc),64);
        bufp->chgBit(oldp+253,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_skip));
        bufp->chgQData(oldp+254,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfData),64);
        bufp->chgBit(oldp+256,(((IData)(vlSelf->CoreTop__DOT__valid_3) 
                                & (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_inst_valid))));
        bufp->chgQData(oldp+257,(((0U == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                   >> 0xfU)))
                                   ? 0ULL : vlSelf->CoreTop__DOT__rf
                                  [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                             >> 0xfU))])),64);
        bufp->chgQData(oldp+259,(((0U == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                   >> 0x14U)))
                                   ? 0ULL : vlSelf->CoreTop__DOT__rf
                                  [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                             >> 0x14U))])),64);
        bufp->chgBit(oldp+261,((2U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state))));
        bufp->chgQData(oldp+262,(vlSelf->CoreTop__DOT__ICACHE__DOT__mem_addr_reg),64);
        bufp->chgBit(oldp+264,(vlSelf->CoreTop__DOT__If_axi_birdge_io_in_rdata_rep_valid));
        bufp->chgQData(oldp+265,(vlSelf->CoreTop__DOT__IFMEM_rdata),64);
        bufp->chgBit(oldp+267,(vlSelf->CoreTop__DOT__IFMEM_bvalid));
        bufp->chgBit(oldp+268,((0U == (IData)(vlSelf->CoreTop__DOT__IFMEM__DOT__state))));
        bufp->chgBit(oldp+269,(vlSelf->CoreTop__DOT__If_axi_birdge_io_out_raddr_req_valid));
        bufp->chgBit(oldp+270,(vlSelf->CoreTop__DOT__IFMEM_r_valid));
        bufp->chgBit(oldp+271,(vlSelf->CoreTop__DOT__If_axi_birdge__DOT__aw_state));
        bufp->chgBit(oldp+272,(vlSelf->CoreTop__DOT__MMIO_io_out_addr_req_valid));
        bufp->chgQData(oldp+273,(vlSelf->CoreTop__DOT__MMIO_io_out_addr_req_bits_addr),64);
        bufp->chgBit(oldp+275,(vlSelf->CoreTop__DOT__MMIO_io_out_addr_req_bits_ce));
        bufp->chgBit(oldp+276,(vlSelf->CoreTop__DOT__MMIO_io_out_addr_req_bits_we));
        bufp->chgBit(oldp+277,(vlSelf->CoreTop__DOT__MEM_axi_birdge_io_in_rdata_rep_valid));
        bufp->chgQData(oldp+278,(vlSelf->CoreTop__DOT__MMEM_rdata),64);
        bufp->chgQData(oldp+280,(((IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_valid)
                                   ? (((0xa0000000ULL 
                                        <= vlSelf->CoreTop__DOT__MEM__DOT__addr_temp) 
                                       & (0xa2000000ULL 
                                          >= vlSelf->CoreTop__DOT__MEM__DOT__addr_temp))
                                       ? vlSelf->CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wdata
                                       : (((QData)((IData)(
                                                           vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0U]))))
                                   : (((QData)((IData)(
                                                       vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0U]))))),64);
        bufp->chgCData(oldp+282,(((IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_valid)
                                   ? (((0xa0000000ULL 
                                        <= vlSelf->CoreTop__DOT__MEM__DOT__addr_temp) 
                                       & (0xa2000000ULL 
                                          >= vlSelf->CoreTop__DOT__MEM__DOT__addr_temp))
                                       ? (IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wmask)
                                       : 0xffU) : 0xffU)),8);
        bufp->chgBit(oldp+283,(vlSelf->CoreTop__DOT__MMEM_bvalid));
        bufp->chgBit(oldp+284,((0U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__state))));
        bufp->chgBit(oldp+285,(vlSelf->CoreTop__DOT__MEM_axi_birdge_io_out_raddr_req_valid));
        bufp->chgBit(oldp+286,(vlSelf->CoreTop__DOT__MEM_axi_birdge_io_out_waddr_req_valid));
        bufp->chgBit(oldp+287,(vlSelf->CoreTop__DOT__MMEM_r_valid));
        bufp->chgBit(oldp+288,(((((~ (IData)(vlSelf->CoreTop__DOT__MEM_axi_birdge__DOT__aw_state)) 
                                  & (IData)(vlSelf->CoreTop__DOT__MMIO_io_out_addr_req_valid)) 
                                 & (IData)(vlSelf->CoreTop__DOT__MMIO_io_out_addr_req_bits_ce)) 
                                & (IData)(vlSelf->CoreTop__DOT__MMIO_io_out_addr_req_bits_we))));
        bufp->chgBit(oldp+289,(vlSelf->CoreTop__DOT__MEM_axi_birdge__DOT__aw_state));
        bufp->chgBit(oldp+290,(vlSelf->CoreTop__DOT__DIP_io_is_break_REG));
        bufp->chgQData(oldp+291,(vlSelf->CoreTop__DOT__DIP__DOT__rf[0]),64);
        bufp->chgQData(oldp+293,(vlSelf->CoreTop__DOT__DIP__DOT__rf[1]),64);
        bufp->chgQData(oldp+295,(vlSelf->CoreTop__DOT__DIP__DOT__rf[2]),64);
        bufp->chgQData(oldp+297,(vlSelf->CoreTop__DOT__DIP__DOT__rf[3]),64);
        bufp->chgQData(oldp+299,(vlSelf->CoreTop__DOT__DIP__DOT__rf[4]),64);
        bufp->chgQData(oldp+301,(vlSelf->CoreTop__DOT__DIP__DOT__rf[5]),64);
        bufp->chgQData(oldp+303,(vlSelf->CoreTop__DOT__DIP__DOT__rf[6]),64);
        bufp->chgQData(oldp+305,(vlSelf->CoreTop__DOT__DIP__DOT__rf[7]),64);
        bufp->chgQData(oldp+307,(vlSelf->CoreTop__DOT__DIP__DOT__rf[8]),64);
        bufp->chgQData(oldp+309,(vlSelf->CoreTop__DOT__DIP__DOT__rf[9]),64);
        bufp->chgQData(oldp+311,(vlSelf->CoreTop__DOT__DIP__DOT__rf[10]),64);
        bufp->chgQData(oldp+313,(vlSelf->CoreTop__DOT__DIP__DOT__rf[11]),64);
        bufp->chgQData(oldp+315,(vlSelf->CoreTop__DOT__DIP__DOT__rf[12]),64);
        bufp->chgQData(oldp+317,(vlSelf->CoreTop__DOT__DIP__DOT__rf[13]),64);
        bufp->chgQData(oldp+319,(vlSelf->CoreTop__DOT__DIP__DOT__rf[14]),64);
        bufp->chgQData(oldp+321,(vlSelf->CoreTop__DOT__DIP__DOT__rf[15]),64);
        bufp->chgQData(oldp+323,(vlSelf->CoreTop__DOT__DIP__DOT__rf[16]),64);
        bufp->chgQData(oldp+325,(vlSelf->CoreTop__DOT__DIP__DOT__rf[17]),64);
        bufp->chgQData(oldp+327,(vlSelf->CoreTop__DOT__DIP__DOT__rf[18]),64);
        bufp->chgQData(oldp+329,(vlSelf->CoreTop__DOT__DIP__DOT__rf[19]),64);
        bufp->chgQData(oldp+331,(vlSelf->CoreTop__DOT__DIP__DOT__rf[20]),64);
        bufp->chgQData(oldp+333,(vlSelf->CoreTop__DOT__DIP__DOT__rf[21]),64);
        bufp->chgQData(oldp+335,(vlSelf->CoreTop__DOT__DIP__DOT__rf[22]),64);
        bufp->chgQData(oldp+337,(vlSelf->CoreTop__DOT__DIP__DOT__rf[23]),64);
        bufp->chgQData(oldp+339,(vlSelf->CoreTop__DOT__DIP__DOT__rf[24]),64);
        bufp->chgQData(oldp+341,(vlSelf->CoreTop__DOT__DIP__DOT__rf[25]),64);
        bufp->chgQData(oldp+343,(vlSelf->CoreTop__DOT__DIP__DOT__rf[26]),64);
        bufp->chgQData(oldp+345,(vlSelf->CoreTop__DOT__DIP__DOT__rf[27]),64);
        bufp->chgQData(oldp+347,(vlSelf->CoreTop__DOT__DIP__DOT__rf[28]),64);
        bufp->chgQData(oldp+349,(vlSelf->CoreTop__DOT__DIP__DOT__rf[29]),64);
        bufp->chgQData(oldp+351,(vlSelf->CoreTop__DOT__DIP__DOT__rf[30]),64);
        bufp->chgQData(oldp+353,(vlSelf->CoreTop__DOT__DIP__DOT__rf[31]),64);
        bufp->chgIData(oldp+355,(vlSelf->CoreTop__DOT__DIP__DOT__IN[0]),32);
        bufp->chgIData(oldp+356,(vlSelf->CoreTop__DOT__DIP__DOT__IN[1]),32);
        bufp->chgIData(oldp+357,(vlSelf->CoreTop__DOT__DIP__DOT__IN[2]),32);
        bufp->chgIData(oldp+358,(vlSelf->CoreTop__DOT__DIP__DOT__IN[3]),32);
        bufp->chgIData(oldp+359,(vlSelf->CoreTop__DOT__DIP__DOT__IN[4]),32);
        bufp->chgIData(oldp+360,(vlSelf->CoreTop__DOT__DIP__DOT__IN[5]),32);
        bufp->chgIData(oldp+361,(vlSelf->CoreTop__DOT__DIP__DOT__IN[6]),32);
        bufp->chgQData(oldp+362,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mepc_REG_1),64);
        bufp->chgQData(oldp+364,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mcause_REG_1),64);
        bufp->chgQData(oldp+366,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mstatus_REG_1),64);
        bufp->chgQData(oldp+368,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mtvec_REG_1),64);
        bufp->chgBit(oldp+370,(vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_valid));
        bufp->chgQData(oldp+371,(((IData)(vlSelf->CoreTop__DOT__EX__DOT__is_mul)
                                   ? vlSelf->CoreTop__DOT__EX__DOT__src1
                                   : (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__src1)))),64);
        bufp->chgQData(oldp+373,(((IData)(vlSelf->CoreTop__DOT__EX__DOT__is_mul)
                                   ? vlSelf->CoreTop__DOT__EX__DOT__src2
                                   : (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)))),64);
        bufp->chgBit(oldp+375,((0x44U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count))));
        bufp->chgQData(oldp+376,((((QData)((IData)(
                                                   vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[0U])))),64);
        bufp->chgBit(oldp+378,(((IData)(vlSelf->CoreTop__DOT__EX__DOT__is_div) 
                                & (2U != (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state)))));
        bufp->chgBit(oldp+379,(vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_flow_div_signed));
        bufp->chgQData(oldp+380,(vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src1),64);
        bufp->chgQData(oldp+382,(vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src2),64);
        bufp->chgBit(oldp+384,((2U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state))));
        bufp->chgQData(oldp+385,(vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_quotient),64);
        bufp->chgQData(oldp+387,(vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_remainder),64);
        bufp->chgBit(oldp+389,(vlSelf->CoreTop__DOT__EX__DOT__is_mul));
        bufp->chgBit(oldp+390,(vlSelf->CoreTop__DOT__EX__DOT__is_div));
        bufp->chgBit(oldp+391,(vlSelf->CoreTop__DOT__EX__DOT__is_divw));
        bufp->chgQData(oldp+392,(vlSelf->CoreTop__DOT__EX__DOT__mepc),64);
        bufp->chgQData(oldp+394,(vlSelf->CoreTop__DOT__EX__DOT__mcause),64);
        bufp->chgQData(oldp+396,(vlSelf->CoreTop__DOT__EX__DOT__mstatus),64);
        bufp->chgQData(oldp+398,(vlSelf->CoreTop__DOT__EX__DOT__mtvec),64);
        bufp->chgQData(oldp+400,(vlSelf->CoreTop__DOT__EX__DOT__mie),64);
        bufp->chgQData(oldp+402,(vlSelf->CoreTop__DOT__EX__DOT__mip),64);
        bufp->chgQData(oldp+404,(vlSelf->CoreTop__DOT__EX__DOT__src1),64);
        bufp->chgQData(oldp+406,(vlSelf->CoreTop__DOT__EX__DOT__src2),64);
        bufp->chgBit(oldp+408,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+409,((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[0U] 
                                >> 0x1fU)));
        bufp->chgBit(oldp+410,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_quotient 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+411,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_remainder 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+412,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_10 
                                              >> 0x1fU)))));
        bufp->chgQData(oldp+413,(((0x40U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
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
        bufp->chgBit(oldp+415,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_5[0U] 
                                >> 0x1fU)));
        bufp->chgBit(oldp+416,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_16[0U] 
                                >> 0x1fU)));
        bufp->chgBit(oldp+417,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_25 
                                >> 0x1fU)));
        bufp->chgBit(oldp+418,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_31 
                                >> 0x1fU)));
        bufp->chgBit(oldp+419,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__src1 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+420,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__src2 
                                              >> 0x1fU)))));
        bufp->chgQData(oldp+421,(((0x6aU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                   ? ((vlSelf->CoreTop__DOT__EX__DOT__src1 
                                       < vlSelf->CoreTop__DOT__EX__DOT__src2)
                                       ? 1ULL : 0ULL)
                                   : ((2U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                       ? (VL_LTS_IQQ(64, vlSelf->CoreTop__DOT__EX__DOT__src1, vlSelf->CoreTop__DOT__EX__DOT__src2)
                                           ? 1ULL : 0ULL)
                                       : 0ULL))),64);
        bufp->chgQData(oldp+423,(((3U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType))
                                   ? (4ULL + vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC)
                                   : 0ULL)),64);
        VL_EXTEND_WQ(127,64, __Vtemp_hb5acfd9b__0, 
                     VL_SHIFTRS_QQI(64,64,5, vlSelf->CoreTop__DOT__EX__DOT__src1, 
                                    (0x1fU & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2))));
        VL_EXTEND_WQ(127,64, __Vtemp_h8248920c__0, 
                     (((QData)((IData)(((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_5[0U] 
                                         >> 0x1fU) ? 0xffffffffU
                                         : 0U))) << 0x20U) 
                      | (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_5[0U]))));
        VL_EXTEND_WQ(127,64, __Vtemp_h32213b7b__0, vlSelf->CoreTop__DOT__EX__DOT__src1);
        VL_SHIFTL_WWI(127,127,6, __Vtemp_hf98c7323__0, __Vtemp_h32213b7b__0, 
                      (0x3fU & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)));
        VL_EXTEND_WQ(127,64, __Vtemp_h9a785a5b__0, 
                     ((0x75U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                       ? (vlSelf->CoreTop__DOT__EX__DOT__src1 
                          >> (0x3fU & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)))
                       : ((5U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                           ? (((QData)((IData)(((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_16[0U] 
                                                 >> 0x1fU)
                                                 ? 0xffffffffU
                                                 : 0U))) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_16[0U])))
                           : ((6U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                               ? vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_28
                               : ((8U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                   ? vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_35
                                   : ((9U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                       ? vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_28
                                       : ((0xaU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                           ? vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_35
                                           : ((0x14U 
                                               == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                               ? VL_SHIFTRS_QQI(64,64,6, vlSelf->CoreTop__DOT__EX__DOT__src1, 
                                                                (0x3fU 
                                                                 & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)))
                                               : 0ULL))))))));
        bufp->chgQData(oldp+425,((((QData)((IData)(
                                                   ((0x6eU 
                                                     == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                     ? 
                                                    __Vtemp_hb5acfd9b__0[1U]
                                                     : 
                                                    ((0x73U 
                                                      == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                      ? 
                                                     __Vtemp_h8248920c__0[1U]
                                                      : 
                                                     ((0x41U 
                                                       == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                       ? 
                                                      __Vtemp_hf98c7323__0[1U]
                                                       : 
                                                      __Vtemp_h9a785a5b__0[1U]))))) 
                                   << 0x20U) | (QData)((IData)(
                                                               ((0x6eU 
                                                                 == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                                 ? 
                                                                __Vtemp_hb5acfd9b__0[0U]
                                                                 : 
                                                                ((0x73U 
                                                                  == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                                  ? 
                                                                 __Vtemp_h8248920c__0[0U]
                                                                  : 
                                                                 ((0x41U 
                                                                   == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                                   ? 
                                                                  __Vtemp_hf98c7323__0[0U]
                                                                   : 
                                                                  __Vtemp_h9a785a5b__0[0U]))))))),64);
        bufp->chgQData(oldp+427,(((0x6bU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
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
        bufp->chgBit(oldp+429,(vlSelf->CoreTop__DOT__EX__DOT__branch_flag));
        bufp->chgQData(oldp+430,(vlSelf->CoreTop__DOT__EX__DOT__csr_data),64);
        bufp->chgQData(oldp+432,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mtvec_REG),64);
        bufp->chgQData(oldp+434,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mcause_REG),64);
        bufp->chgQData(oldp+436,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mepc_REG),64);
        bufp->chgQData(oldp+438,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mstatus_REG),64);
        bufp->chgQData(oldp+440,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[0]),64);
        bufp->chgQData(oldp+442,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[1]),64);
        bufp->chgQData(oldp+444,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[2]),64);
        bufp->chgQData(oldp+446,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[3]),64);
        bufp->chgQData(oldp+448,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[4]),64);
        bufp->chgQData(oldp+450,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[5]),64);
        bufp->chgWData(oldp+452,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend),128);
        bufp->chgQData(oldp+456,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divisor),64);
        bufp->chgQData(oldp+458,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S),64);
        bufp->chgCData(oldp+460,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state),2);
        bufp->chgCData(oldp+461,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__count),6);
        bufp->chgBit(oldp+462,((0x3fU == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__count))));
        bufp->chgBit(oldp+463,(((1U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state)) 
                                & (0x3fU == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__count)))));
        bufp->chgWData(oldp+464,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div),65);
        bufp->chgQData(oldp+467,((- vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S)),64);
        bufp->chgQData(oldp+469,((- (((QData)((IData)(
                                                      vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[2U]))))),64);
        bufp->chgQData(oldp+471,((((((0U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                                      ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_13
                                      : 0ULL) | ((1U 
                                                  == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                                                  ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_18
                                                  : 0ULL)) 
                                   | ((2U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                                       ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_18
                                       : 0ULL)) | (
                                                   (3U 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                                                    ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_13
                                                    : 0ULL))),64);
        bufp->chgQData(oldp+473,((((((0U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                                      ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_16
                                      : 0ULL) | ((1U 
                                                  == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                                                  ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_16
                                                  : 0ULL)) 
                                   | ((2U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                                       ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_26
                                       : 0ULL)) | (
                                                   (3U 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                                                    ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_26
                                                    : 0ULL))),64);
        bufp->chgCData(oldp+475,((7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U])),3);
        bufp->chgWData(oldp+476,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand),132);
        VL_EXTEND_WW(133,132, __Vtemp_h97a9be20__0, vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand);
        VL_EXTEND_WW(133,132, __Vtemp_h97a9be20__1, vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand);
        if ((5U == (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))) {
            __Vtemp_h1a657afd__0[0U] = (~ vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[0U]);
            __Vtemp_h1a657afd__0[1U] = (~ vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[1U]);
            __Vtemp_h1a657afd__0[2U] = (~ vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[2U]);
            __Vtemp_h1a657afd__0[3U] = (~ vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[3U]);
            __Vtemp_h1a657afd__0[4U] = (0xfU & (~ vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[4U]));
        } else if ((6U == (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))) {
            __Vtemp_h1a657afd__0[0U] = (~ vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[0U]);
            __Vtemp_h1a657afd__0[1U] = (~ vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[1U]);
            __Vtemp_h1a657afd__0[2U] = (~ vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[2U]);
            __Vtemp_h1a657afd__0[3U] = (~ vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[3U]);
            __Vtemp_h1a657afd__0[4U] = (0xfU & (~ vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[4U]));
        } else {
            __Vtemp_h1a657afd__0[0U] = 0U;
            __Vtemp_h1a657afd__0[1U] = 0U;
            __Vtemp_h1a657afd__0[2U] = 0U;
            __Vtemp_h1a657afd__0[3U] = 0U;
            __Vtemp_h1a657afd__0[4U] = (0xfU & 0U);
        }
        VL_EXTEND_WW(133,132, __Vtemp_h7a662728__0, __Vtemp_h1a657afd__0);
        if ((0U == (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))) {
            __Vtemp_h791e8ef8__0[0U] = 0U;
            __Vtemp_h791e8ef8__0[1U] = 0U;
            __Vtemp_h791e8ef8__0[2U] = 0U;
            __Vtemp_h791e8ef8__0[3U] = 0U;
            __Vtemp_h791e8ef8__0[4U] = 0U;
        } else if ((1U == (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))) {
            __Vtemp_h791e8ef8__0[0U] = __Vtemp_h97a9be20__0[0U];
            __Vtemp_h791e8ef8__0[1U] = __Vtemp_h97a9be20__0[1U];
            __Vtemp_h791e8ef8__0[2U] = __Vtemp_h97a9be20__0[2U];
            __Vtemp_h791e8ef8__0[3U] = __Vtemp_h97a9be20__0[3U];
            __Vtemp_h791e8ef8__0[4U] = (0xfU & __Vtemp_h97a9be20__0[4U]);
        } else if ((2U == (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))) {
            __Vtemp_h791e8ef8__0[0U] = __Vtemp_h97a9be20__1[0U];
            __Vtemp_h791e8ef8__0[1U] = __Vtemp_h97a9be20__1[1U];
            __Vtemp_h791e8ef8__0[2U] = __Vtemp_h97a9be20__1[2U];
            __Vtemp_h791e8ef8__0[3U] = __Vtemp_h97a9be20__1[3U];
            __Vtemp_h791e8ef8__0[4U] = (0xfU & __Vtemp_h97a9be20__1[4U]);
        } else if ((3U == (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))) {
            __Vtemp_h791e8ef8__0[0U] = (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[0U] 
                                        << 1U);
            __Vtemp_h791e8ef8__0[1U] = ((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[0U] 
                                         >> 0x1fU) 
                                        | (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[1U] 
                                           << 1U));
            __Vtemp_h791e8ef8__0[2U] = ((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[1U] 
                                         >> 0x1fU) 
                                        | (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[2U] 
                                           << 1U));
            __Vtemp_h791e8ef8__0[3U] = ((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[2U] 
                                         >> 0x1fU) 
                                        | (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[3U] 
                                           << 1U));
            __Vtemp_h791e8ef8__0[4U] = (0xfU & ((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[3U] 
                                                 >> 0x1fU) 
                                                | (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[4U] 
                                                   << 1U)));
        } else if ((4U == (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))) {
            __Vtemp_h791e8ef8__0[0U] = (~ (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[0U] 
                                           << 1U));
            __Vtemp_h791e8ef8__0[1U] = (~ ((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[0U] 
                                            >> 0x1fU) 
                                           | (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[1U] 
                                              << 1U)));
            __Vtemp_h791e8ef8__0[2U] = (~ ((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[1U] 
                                            >> 0x1fU) 
                                           | (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[2U] 
                                              << 1U)));
            __Vtemp_h791e8ef8__0[3U] = (~ ((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[2U] 
                                            >> 0x1fU) 
                                           | (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[3U] 
                                              << 1U)));
            __Vtemp_h791e8ef8__0[4U] = (0xfU & (~ (
                                                   (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[3U] 
                                                    >> 0x1fU) 
                                                   | (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[4U] 
                                                      << 1U))));
        } else {
            __Vtemp_h791e8ef8__0[0U] = __Vtemp_h7a662728__0[0U];
            __Vtemp_h791e8ef8__0[1U] = __Vtemp_h7a662728__0[1U];
            __Vtemp_h791e8ef8__0[2U] = __Vtemp_h7a662728__0[2U];
            __Vtemp_h791e8ef8__0[3U] = __Vtemp_h7a662728__0[3U];
            __Vtemp_h791e8ef8__0[4U] = (0xfU & __Vtemp_h7a662728__0[4U]);
        }
        bufp->chgWData(oldp+481,(__Vtemp_h791e8ef8__0),132);
        bufp->chgBit(oldp+486,(((0U != (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U])) 
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
        bufp->chgWData(oldp+487,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier),66);
        bufp->chgWData(oldp+490,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p),132);
        bufp->chgCData(oldp+495,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count),7);
        bufp->chgWData(oldp+496,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__temp),132);
        bufp->chgBit(oldp+501,((1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__temp[4U] 
                                      >> 3U))));
        bufp->chgBit(oldp+502,(((IData)(vlSelf->CoreTop__DOT__EX_io_in_ready) 
                                & (0U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)))));
        bufp->chgQData(oldp+503,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data_io_write_bus_addr),64);
        bufp->chgBit(oldp+505,((8U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__count))));
        bufp->chgCData(oldp+506,(((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r)
                                   ? 2U : 1U)),2);
        bufp->chgWData(oldp+507,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data_io_write_bus_wdata),512);
        bufp->chgQData(oldp+523,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_tag_w_data),53);
        bufp->chgQData(oldp+525,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_data),53);
        bufp->chgBit(oldp+527,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0
                               [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0]));
        bufp->chgBit(oldp+528,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1
                               [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_addr_pipe_0]));
        __Vtemp_hf989eec7__0[0U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0U];
        __Vtemp_hf989eec7__0[1U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][1U];
        __Vtemp_hf989eec7__0[2U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][2U];
        __Vtemp_hf989eec7__0[3U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][3U];
        __Vtemp_hf989eec7__0[4U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][4U];
        __Vtemp_hf989eec7__0[5U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][5U];
        __Vtemp_hf989eec7__0[6U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][6U];
        __Vtemp_hf989eec7__0[7U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][7U];
        __Vtemp_hf989eec7__0[8U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][8U];
        __Vtemp_hf989eec7__0[9U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][9U];
        __Vtemp_hf989eec7__0[0xaU] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0xaU];
        __Vtemp_hf989eec7__0[0xbU] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0xbU];
        __Vtemp_hf989eec7__0[0xcU] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0xcU];
        __Vtemp_hf989eec7__0[0xdU] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0xdU];
        __Vtemp_hf989eec7__0[0xeU] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0xeU];
        __Vtemp_hf989eec7__0[0xfU] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0xfU];
        bufp->chgWData(oldp+529,(__Vtemp_hf989eec7__0),512);
        __Vtemp_h4453b49e__0[0U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0U];
        __Vtemp_h4453b49e__0[1U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][1U];
        __Vtemp_h4453b49e__0[2U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][2U];
        __Vtemp_h4453b49e__0[3U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][3U];
        __Vtemp_h4453b49e__0[4U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][4U];
        __Vtemp_h4453b49e__0[5U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][5U];
        __Vtemp_h4453b49e__0[6U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][6U];
        __Vtemp_h4453b49e__0[7U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][7U];
        __Vtemp_h4453b49e__0[8U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][8U];
        __Vtemp_h4453b49e__0[9U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][9U];
        __Vtemp_h4453b49e__0[0xaU] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0xaU];
        __Vtemp_h4453b49e__0[0xbU] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0xbU];
        __Vtemp_h4453b49e__0[0xcU] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0xcU];
        __Vtemp_h4453b49e__0[0xdU] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0xdU];
        __Vtemp_h4453b49e__0[0xeU] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0xeU];
        __Vtemp_h4453b49e__0[0xfU] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0xfU];
        bufp->chgWData(oldp+545,(__Vtemp_h4453b49e__0),512);
        bufp->chgQData(oldp+561,((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                  >> 0xbU)),53);
        bufp->chgCData(oldp+563,((0x1fU & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                   >> 6U)))),5);
        bufp->chgCData(oldp+564,((0x3fU & (IData)(vlSelf->CoreTop__DOT__IF__DOT__temp))),6);
        bufp->chgBit(oldp+565,(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_in_valid_REG));
        bufp->chgBit(oldp+566,(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit));
        bufp->chgWData(oldp+567,(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data),512);
        bufp->chgBit(oldp+583,(((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT___hit_way_0_T) 
                                & ((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                    >> 0xbU) == vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_tag_w_data))));
        bufp->chgBit(oldp+584,(((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT___hit_way_1_T) 
                                & ((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                    >> 0xbU) == vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_data))));
        bufp->chgBit(oldp+585,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[0]));
        bufp->chgBit(oldp+586,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[1]));
        bufp->chgBit(oldp+587,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[2]));
        bufp->chgBit(oldp+588,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[3]));
        bufp->chgBit(oldp+589,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[4]));
        bufp->chgBit(oldp+590,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[5]));
        bufp->chgBit(oldp+591,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[6]));
        bufp->chgBit(oldp+592,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[7]));
        bufp->chgBit(oldp+593,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[8]));
        bufp->chgBit(oldp+594,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[9]));
        bufp->chgBit(oldp+595,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[10]));
        bufp->chgBit(oldp+596,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[11]));
        bufp->chgBit(oldp+597,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[12]));
        bufp->chgBit(oldp+598,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[13]));
        bufp->chgBit(oldp+599,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[14]));
        bufp->chgBit(oldp+600,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[15]));
        bufp->chgBit(oldp+601,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[16]));
        bufp->chgBit(oldp+602,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[17]));
        bufp->chgBit(oldp+603,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[18]));
        bufp->chgBit(oldp+604,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[19]));
        bufp->chgBit(oldp+605,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[20]));
        bufp->chgBit(oldp+606,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[21]));
        bufp->chgBit(oldp+607,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[22]));
        bufp->chgBit(oldp+608,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[23]));
        bufp->chgBit(oldp+609,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[24]));
        bufp->chgBit(oldp+610,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[25]));
        bufp->chgBit(oldp+611,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[26]));
        bufp->chgBit(oldp+612,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[27]));
        bufp->chgBit(oldp+613,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[28]));
        bufp->chgBit(oldp+614,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[29]));
        bufp->chgBit(oldp+615,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[30]));
        bufp->chgBit(oldp+616,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[31]));
        bufp->chgBit(oldp+617,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_lru_w_MPORT_en_pipe_0));
        bufp->chgCData(oldp+618,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_lru_w_MPORT_addr_pipe_0),5);
        bufp->chgBit(oldp+619,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru
                               [vlSelf->CoreTop__DOT__ICACHE__DOT__lru_lru_w_MPORT_addr_pipe_0]));
        bufp->chgBit(oldp+620,(((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                & ((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                   & ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit) 
                                      & ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT___hit_way_0_T) 
                                         & ((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                             >> 0xbU) 
                                            == vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_tag_w_data)))))));
        bufp->chgBit(oldp+621,(((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                & ((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                   & ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit) 
                                      & ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT___hit_way_1_T) 
                                         & ((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                             >> 0xbU) 
                                            == vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_data)))))));
        bufp->chgBit(oldp+622,(((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                & ((1U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                   & ((2U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                      & (((IData)(vlSelf->CoreTop__DOT__EX_io_in_ready) 
                                          & (8U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__count))) 
                                         & (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r)))))));
        bufp->chgBit(oldp+623,(((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                & ((1U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                   & ((2U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                      & (((IData)(vlSelf->CoreTop__DOT__EX_io_in_ready) 
                                          & (8U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__count))) 
                                         & (~ (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r))))))));
        bufp->chgCData(oldp+624,(vlSelf->CoreTop__DOT__ICACHE__DOT__state),2);
        bufp->chgWData(oldp+625,(vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg),512);
        bufp->chgBit(oldp+641,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r));
        bufp->chgCData(oldp+642,(vlSelf->CoreTop__DOT__ICACHE__DOT__count),4);
        bufp->chgQData(oldp+643,(vlSelf->CoreTop__DOT__ICACHE__DOT__hit_data),64);
        bufp->chgQData(oldp+645,(vlSelf->CoreTop__DOT__ICACHE__DOT__mem_data),64);
        bufp->chgWData(oldp+647,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[0]),512);
        bufp->chgWData(oldp+663,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[1]),512);
        bufp->chgWData(oldp+679,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[2]),512);
        bufp->chgWData(oldp+695,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[3]),512);
        bufp->chgWData(oldp+711,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[4]),512);
        bufp->chgWData(oldp+727,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[5]),512);
        bufp->chgWData(oldp+743,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[6]),512);
        bufp->chgWData(oldp+759,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[7]),512);
        bufp->chgWData(oldp+775,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[8]),512);
        bufp->chgWData(oldp+791,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[9]),512);
        bufp->chgWData(oldp+807,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[10]),512);
        bufp->chgWData(oldp+823,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[11]),512);
        bufp->chgWData(oldp+839,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[12]),512);
        bufp->chgWData(oldp+855,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[13]),512);
        bufp->chgWData(oldp+871,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[14]),512);
        bufp->chgWData(oldp+887,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[15]),512);
        bufp->chgWData(oldp+903,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[16]),512);
        bufp->chgWData(oldp+919,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[17]),512);
        bufp->chgWData(oldp+935,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[18]),512);
        bufp->chgWData(oldp+951,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[19]),512);
        bufp->chgWData(oldp+967,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[20]),512);
        bufp->chgWData(oldp+983,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[21]),512);
        bufp->chgWData(oldp+999,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[22]),512);
        bufp->chgWData(oldp+1015,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[23]),512);
        bufp->chgWData(oldp+1031,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[24]),512);
        bufp->chgWData(oldp+1047,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[25]),512);
        bufp->chgWData(oldp+1063,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[26]),512);
        bufp->chgWData(oldp+1079,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[27]),512);
        bufp->chgWData(oldp+1095,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[28]),512);
        bufp->chgWData(oldp+1111,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[29]),512);
        bufp->chgWData(oldp+1127,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[30]),512);
        bufp->chgWData(oldp+1143,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[31]),512);
        bufp->chgBit(oldp+1159,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_en_pipe_0));
        bufp->chgCData(oldp+1160,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0),5);
        bufp->chgCData(oldp+1161,((0x1fU & (IData)(
                                                   (vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data_io_write_bus_addr 
                                                    >> 6U)))),5);
        bufp->chgBit(oldp+1162,(((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r)
                                  ? 0U : 1U)));
        bufp->chgWData(oldp+1163,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[0]),512);
        bufp->chgWData(oldp+1179,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[1]),512);
        bufp->chgWData(oldp+1195,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[2]),512);
        bufp->chgWData(oldp+1211,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[3]),512);
        bufp->chgWData(oldp+1227,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[4]),512);
        bufp->chgWData(oldp+1243,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[5]),512);
        bufp->chgWData(oldp+1259,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[6]),512);
        bufp->chgWData(oldp+1275,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[7]),512);
        bufp->chgWData(oldp+1291,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[8]),512);
        bufp->chgWData(oldp+1307,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[9]),512);
        bufp->chgWData(oldp+1323,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[10]),512);
        bufp->chgWData(oldp+1339,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[11]),512);
        bufp->chgWData(oldp+1355,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[12]),512);
        bufp->chgWData(oldp+1371,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[13]),512);
        bufp->chgWData(oldp+1387,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[14]),512);
        bufp->chgWData(oldp+1403,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[15]),512);
        bufp->chgWData(oldp+1419,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[16]),512);
        bufp->chgWData(oldp+1435,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[17]),512);
        bufp->chgWData(oldp+1451,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[18]),512);
        bufp->chgWData(oldp+1467,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[19]),512);
        bufp->chgWData(oldp+1483,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[20]),512);
        bufp->chgWData(oldp+1499,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[21]),512);
        bufp->chgWData(oldp+1515,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[22]),512);
        bufp->chgWData(oldp+1531,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[23]),512);
        bufp->chgWData(oldp+1547,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[24]),512);
        bufp->chgWData(oldp+1563,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[25]),512);
        bufp->chgWData(oldp+1579,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[26]),512);
        bufp->chgWData(oldp+1595,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[27]),512);
        bufp->chgWData(oldp+1611,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[28]),512);
        bufp->chgWData(oldp+1627,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[29]),512);
        bufp->chgWData(oldp+1643,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[30]),512);
        bufp->chgWData(oldp+1659,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[31]),512);
        bufp->chgBit(oldp+1675,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_en_pipe_0));
        bufp->chgBit(oldp+1676,((1U & (((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r)
                                         ? 2U : 1U) 
                                       >> 1U))));
        bufp->chgQData(oldp+1677,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[0]),53);
        bufp->chgQData(oldp+1679,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[1]),53);
        bufp->chgQData(oldp+1681,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[2]),53);
        bufp->chgQData(oldp+1683,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[3]),53);
        bufp->chgQData(oldp+1685,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[4]),53);
        bufp->chgQData(oldp+1687,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[5]),53);
        bufp->chgQData(oldp+1689,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[6]),53);
        bufp->chgQData(oldp+1691,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[7]),53);
        bufp->chgQData(oldp+1693,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[8]),53);
        bufp->chgQData(oldp+1695,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[9]),53);
        bufp->chgQData(oldp+1697,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[10]),53);
        bufp->chgQData(oldp+1699,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[11]),53);
        bufp->chgQData(oldp+1701,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[12]),53);
        bufp->chgQData(oldp+1703,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[13]),53);
        bufp->chgQData(oldp+1705,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[14]),53);
        bufp->chgQData(oldp+1707,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[15]),53);
        bufp->chgQData(oldp+1709,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[16]),53);
        bufp->chgQData(oldp+1711,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[17]),53);
        bufp->chgQData(oldp+1713,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[18]),53);
        bufp->chgQData(oldp+1715,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[19]),53);
        bufp->chgQData(oldp+1717,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[20]),53);
        bufp->chgQData(oldp+1719,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[21]),53);
        bufp->chgQData(oldp+1721,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[22]),53);
        bufp->chgQData(oldp+1723,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[23]),53);
        bufp->chgQData(oldp+1725,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[24]),53);
        bufp->chgQData(oldp+1727,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[25]),53);
        bufp->chgQData(oldp+1729,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[26]),53);
        bufp->chgQData(oldp+1731,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[27]),53);
        bufp->chgQData(oldp+1733,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[28]),53);
        bufp->chgQData(oldp+1735,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[29]),53);
        bufp->chgQData(oldp+1737,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[30]),53);
        bufp->chgQData(oldp+1739,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[31]),53);
        bufp->chgBit(oldp+1741,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_tag_w_en_pipe_0));
        bufp->chgCData(oldp+1742,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_tag_w_addr_pipe_0),5);
        bufp->chgQData(oldp+1743,((vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data_io_write_bus_addr 
                                   >> 0xbU)),53);
        bufp->chgQData(oldp+1745,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[0]),53);
        bufp->chgQData(oldp+1747,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[1]),53);
        bufp->chgQData(oldp+1749,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[2]),53);
        bufp->chgQData(oldp+1751,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[3]),53);
        bufp->chgQData(oldp+1753,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[4]),53);
        bufp->chgQData(oldp+1755,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[5]),53);
        bufp->chgQData(oldp+1757,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[6]),53);
        bufp->chgQData(oldp+1759,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[7]),53);
        bufp->chgQData(oldp+1761,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[8]),53);
        bufp->chgQData(oldp+1763,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[9]),53);
        bufp->chgQData(oldp+1765,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[10]),53);
        bufp->chgQData(oldp+1767,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[11]),53);
        bufp->chgQData(oldp+1769,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[12]),53);
        bufp->chgQData(oldp+1771,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[13]),53);
        bufp->chgQData(oldp+1773,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[14]),53);
        bufp->chgQData(oldp+1775,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[15]),53);
        bufp->chgQData(oldp+1777,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[16]),53);
        bufp->chgQData(oldp+1779,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[17]),53);
        bufp->chgQData(oldp+1781,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[18]),53);
        bufp->chgQData(oldp+1783,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[19]),53);
        bufp->chgQData(oldp+1785,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[20]),53);
        bufp->chgQData(oldp+1787,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[21]),53);
        bufp->chgQData(oldp+1789,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[22]),53);
        bufp->chgQData(oldp+1791,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[23]),53);
        bufp->chgQData(oldp+1793,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[24]),53);
        bufp->chgQData(oldp+1795,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[25]),53);
        bufp->chgQData(oldp+1797,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[26]),53);
        bufp->chgQData(oldp+1799,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[27]),53);
        bufp->chgQData(oldp+1801,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[28]),53);
        bufp->chgQData(oldp+1803,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[29]),53);
        bufp->chgQData(oldp+1805,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[30]),53);
        bufp->chgQData(oldp+1807,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[31]),53);
        bufp->chgBit(oldp+1809,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_en_pipe_0));
        bufp->chgCData(oldp+1810,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0),5);
        bufp->chgBit(oldp+1811,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[0]));
        bufp->chgBit(oldp+1812,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[1]));
        bufp->chgBit(oldp+1813,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[2]));
        bufp->chgBit(oldp+1814,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[3]));
        bufp->chgBit(oldp+1815,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[4]));
        bufp->chgBit(oldp+1816,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[5]));
        bufp->chgBit(oldp+1817,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[6]));
        bufp->chgBit(oldp+1818,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[7]));
        bufp->chgBit(oldp+1819,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[8]));
        bufp->chgBit(oldp+1820,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[9]));
        bufp->chgBit(oldp+1821,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[10]));
        bufp->chgBit(oldp+1822,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[11]));
        bufp->chgBit(oldp+1823,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[12]));
        bufp->chgBit(oldp+1824,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[13]));
        bufp->chgBit(oldp+1825,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[14]));
        bufp->chgBit(oldp+1826,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[15]));
        bufp->chgBit(oldp+1827,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[16]));
        bufp->chgBit(oldp+1828,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[17]));
        bufp->chgBit(oldp+1829,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[18]));
        bufp->chgBit(oldp+1830,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[19]));
        bufp->chgBit(oldp+1831,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[20]));
        bufp->chgBit(oldp+1832,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[21]));
        bufp->chgBit(oldp+1833,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[22]));
        bufp->chgBit(oldp+1834,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[23]));
        bufp->chgBit(oldp+1835,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[24]));
        bufp->chgBit(oldp+1836,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[25]));
        bufp->chgBit(oldp+1837,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[26]));
        bufp->chgBit(oldp+1838,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[27]));
        bufp->chgBit(oldp+1839,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[28]));
        bufp->chgBit(oldp+1840,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[29]));
        bufp->chgBit(oldp+1841,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[30]));
        bufp->chgBit(oldp+1842,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[31]));
        bufp->chgBit(oldp+1843,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_en_pipe_0));
        bufp->chgCData(oldp+1844,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0),5);
        bufp->chgBit(oldp+1845,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[0]));
        bufp->chgBit(oldp+1846,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[1]));
        bufp->chgBit(oldp+1847,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[2]));
        bufp->chgBit(oldp+1848,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[3]));
        bufp->chgBit(oldp+1849,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[4]));
        bufp->chgBit(oldp+1850,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[5]));
        bufp->chgBit(oldp+1851,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[6]));
        bufp->chgBit(oldp+1852,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[7]));
        bufp->chgBit(oldp+1853,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[8]));
        bufp->chgBit(oldp+1854,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[9]));
        bufp->chgBit(oldp+1855,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[10]));
        bufp->chgBit(oldp+1856,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[11]));
        bufp->chgBit(oldp+1857,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[12]));
        bufp->chgBit(oldp+1858,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[13]));
        bufp->chgBit(oldp+1859,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[14]));
        bufp->chgBit(oldp+1860,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[15]));
        bufp->chgBit(oldp+1861,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[16]));
        bufp->chgBit(oldp+1862,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[17]));
        bufp->chgBit(oldp+1863,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[18]));
        bufp->chgBit(oldp+1864,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[19]));
        bufp->chgBit(oldp+1865,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[20]));
        bufp->chgBit(oldp+1866,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[21]));
        bufp->chgBit(oldp+1867,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[22]));
        bufp->chgBit(oldp+1868,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[23]));
        bufp->chgBit(oldp+1869,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[24]));
        bufp->chgBit(oldp+1870,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[25]));
        bufp->chgBit(oldp+1871,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[26]));
        bufp->chgBit(oldp+1872,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[27]));
        bufp->chgBit(oldp+1873,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[28]));
        bufp->chgBit(oldp+1874,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[29]));
        bufp->chgBit(oldp+1875,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[30]));
        bufp->chgBit(oldp+1876,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[31]));
        bufp->chgBit(oldp+1877,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_en_pipe_0));
        bufp->chgCData(oldp+1878,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_addr_pipe_0),5);
        bufp->chgBit(oldp+1879,(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_0_result));
        bufp->chgBit(oldp+1880,(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_1_result));
        bufp->chgCData(oldp+1881,(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0),4);
        bufp->chgBit(oldp+1882,(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_3));
        bufp->chgCData(oldp+1883,((((7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                     ? 2U : 0U) | (
                                                   (3U 
                                                    == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                                    ? 2U
                                                    : 0U))),2);
        bufp->chgBit(oldp+1884,((((8U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)) 
                                  | (7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))) 
                                 | (3U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)))));
        bufp->chgBit(oldp+1885,((vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                 >> 0x1fU)));
        bufp->chgBit(oldp+1886,((1U & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                       >> 0x13U))));
        bufp->chgBit(oldp+1887,((vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                 >> 0x1fU)));
        bufp->chgIData(oldp+1888,(((1U & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                  >> 2U)))
                                    ? (IData)(((((1U 
                                                  == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                                 & (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit))
                                                 ? vlSelf->CoreTop__DOT__ICACHE__DOT__hit_data
                                                 : vlSelf->CoreTop__DOT__ICACHE__DOT__mem_data) 
                                               >> 0x20U))
                                    : (IData)((((1U 
                                                 == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                                & (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit))
                                                ? vlSelf->CoreTop__DOT__ICACHE__DOT__hit_data
                                                : vlSelf->CoreTop__DOT__ICACHE__DOT__mem_data)))),32);
        bufp->chgCData(oldp+1889,(vlSelf->CoreTop__DOT__IFMEM__DOT__state),2);
        bufp->chgBit(oldp+1890,(vlSelf->CoreTop__DOT__If_axi_birdge__DOT__ar_state));
        bufp->chgBit(oldp+1891,((1U & (IData)((vlSelf->CoreTop__DOT__MMIO_io_in_rdata_rep_bits_rdata 
                                               >> 0x3fU)))));
        bufp->chgBit(oldp+1892,((1U & (IData)((vlSelf->CoreTop__DOT__MMIO_io_in_rdata_rep_bits_rdata 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1893,((1U & ((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_27) 
                                       >> 7U))));
        bufp->chgBit(oldp+1894,((1U & ((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_44) 
                                       >> 0xfU))));
        bufp->chgQData(oldp+1895,(((0x45U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                    ? vlSelf->CoreTop__DOT__MMIO_io_in_rdata_rep_bits_rdata
                                    : ((0x47U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                        ? ((1U & (IData)(
                                                         (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                          >> 2U)))
                                            ? (((QData)((IData)(
                                                                ((1U 
                                                                  & (IData)(
                                                                            (vlSelf->CoreTop__DOT__MMIO_io_in_rdata_rep_bits_rdata 
                                                                             >> 0x3fU)))
                                                                  ? 0xffffffffU
                                                                  : 0U))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 (vlSelf->CoreTop__DOT__MMIO_io_in_rdata_rep_bits_rdata 
                                                                  >> 0x20U))))
                                            : (((QData)((IData)(
                                                                ((1U 
                                                                  & (IData)(
                                                                            (vlSelf->CoreTop__DOT__MMIO_io_in_rdata_rep_bits_rdata 
                                                                             >> 0x1fU)))
                                                                  ? 0xffffffffU
                                                                  : 0U))) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelf->CoreTop__DOT__MMIO_io_in_rdata_rep_bits_rdata))))
                                        : ((0x11U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                            ? ((1U 
                                                & (IData)(
                                                          (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                           >> 2U)))
                                                ? (QData)((IData)(
                                                                  (vlSelf->CoreTop__DOT__MMIO_io_in_rdata_rep_bits_rdata 
                                                                   >> 0x20U)))
                                                : (QData)((IData)(vlSelf->CoreTop__DOT__MMIO_io_in_rdata_rep_bits_rdata)))
                                            : ((0x6fU 
                                                == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                                ? (QData)((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_27))
                                                : (
                                                   (0xeU 
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
        bufp->chgBit(oldp+1897,(vlSelf->CoreTop__DOT__MEM_axi_birdge__DOT__ar_state));
        bufp->chgCData(oldp+1898,(vlSelf->CoreTop__DOT__MMEM__DOT__state),2);
        bufp->chgBit(oldp+1899,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_valid));
        bufp->chgBit(oldp+1900,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_rdata_rep_valid));
        bufp->chgQData(oldp+1901,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_rdata_rep_bits_rdata),64);
        bufp->chgBit(oldp+1903,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_rep));
        bufp->chgBit(oldp+1904,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_addr_req_valid));
        bufp->chgQData(oldp+1905,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_addr_req_bits_addr),64);
        bufp->chgBit(oldp+1907,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_addr_req_bits_ce));
        bufp->chgBit(oldp+1908,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_addr_req_bits_we));
        bufp->chgQData(oldp+1909,((((QData)((IData)(
                                                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0U])))),64);
        bufp->chgBit(oldp+1911,(((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_valid) 
                                 & (0U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)))));
        bufp->chgQData(oldp+1912,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_addr),64);
        bufp->chgBit(oldp+1914,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_valid));
        bufp->chgCData(oldp+1915,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_waymask),2);
        bufp->chgWData(oldp+1916,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_wdata),512);
        bufp->chgQData(oldp+1932,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_tag_w_data),53);
        bufp->chgQData(oldp+1934,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1_tag_w_data),53);
        bufp->chgBit(oldp+1936,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0
                                [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0]));
        bufp->chgBit(oldp+1937,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1
                                [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_addr_pipe_0]));
        bufp->chgWData(oldp+1938,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data),512);
        bufp->chgWData(oldp+1954,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data),512);
        bufp->chgQData(oldp+1970,((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                   >> 0xbU)),53);
        bufp->chgCData(oldp+1972,((0x1fU & (IData)(
                                                   (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                    >> 6U)))),5);
        bufp->chgCData(oldp+1973,((0x3fU & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp))),6);
        bufp->chgBit(oldp+1974,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_in_valid_REG));
        bufp->chgBit(oldp+1975,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit));
        bufp->chgWData(oldp+1976,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data),512);
        bufp->chgBit(oldp+1992,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit_way_0));
        bufp->chgBit(oldp+1993,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit_way_1));
        bufp->chgBit(oldp+1994,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[0]));
        bufp->chgBit(oldp+1995,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[1]));
        bufp->chgBit(oldp+1996,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[2]));
        bufp->chgBit(oldp+1997,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[3]));
        bufp->chgBit(oldp+1998,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[4]));
        bufp->chgBit(oldp+1999,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[5]));
        bufp->chgBit(oldp+2000,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[6]));
        bufp->chgBit(oldp+2001,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[7]));
        bufp->chgBit(oldp+2002,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[8]));
        bufp->chgBit(oldp+2003,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[9]));
        bufp->chgBit(oldp+2004,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[10]));
        bufp->chgBit(oldp+2005,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[11]));
        bufp->chgBit(oldp+2006,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[12]));
        bufp->chgBit(oldp+2007,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[13]));
        bufp->chgBit(oldp+2008,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[14]));
        bufp->chgBit(oldp+2009,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[15]));
        bufp->chgBit(oldp+2010,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[16]));
        bufp->chgBit(oldp+2011,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[17]));
        bufp->chgBit(oldp+2012,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[18]));
        bufp->chgBit(oldp+2013,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[19]));
        bufp->chgBit(oldp+2014,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[20]));
        bufp->chgBit(oldp+2015,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[21]));
        bufp->chgBit(oldp+2016,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[22]));
        bufp->chgBit(oldp+2017,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[23]));
        bufp->chgBit(oldp+2018,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[24]));
        bufp->chgBit(oldp+2019,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[25]));
        bufp->chgBit(oldp+2020,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[26]));
        bufp->chgBit(oldp+2021,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[27]));
        bufp->chgBit(oldp+2022,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[28]));
        bufp->chgBit(oldp+2023,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[29]));
        bufp->chgBit(oldp+2024,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[30]));
        bufp->chgBit(oldp+2025,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[31]));
        bufp->chgBit(oldp+2026,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_en_pipe_0));
        bufp->chgCData(oldp+2027,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_addr_pipe_0),5);
        bufp->chgBit(oldp+2028,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_data));
        bufp->chgBit(oldp+2029,(((0U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                 & ((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                    & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit) 
                                       & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit_way_0))))));
        bufp->chgBit(oldp+2030,(((0U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                 & ((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                    & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit) 
                                       & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit_way_1))))));
        bufp->chgBit(oldp+2031,(((0U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                 & ((1U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                    & ((2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                       & ((8U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count)) 
                                          & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_r)))))));
        bufp->chgBit(oldp+2032,(((0U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                 & ((1U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                    & ((2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                       & ((8U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count)) 
                                          & (~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_r))))))));
        bufp->chgBit(oldp+2033,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[0]));
        bufp->chgBit(oldp+2034,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[1]));
        bufp->chgBit(oldp+2035,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[2]));
        bufp->chgBit(oldp+2036,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[3]));
        bufp->chgBit(oldp+2037,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[4]));
        bufp->chgBit(oldp+2038,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[5]));
        bufp->chgBit(oldp+2039,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[6]));
        bufp->chgBit(oldp+2040,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[7]));
        bufp->chgBit(oldp+2041,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[8]));
        bufp->chgBit(oldp+2042,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[9]));
        bufp->chgBit(oldp+2043,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[10]));
        bufp->chgBit(oldp+2044,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[11]));
        bufp->chgBit(oldp+2045,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[12]));
        bufp->chgBit(oldp+2046,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[13]));
        bufp->chgBit(oldp+2047,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[14]));
        bufp->chgBit(oldp+2048,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[15]));
        bufp->chgBit(oldp+2049,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[16]));
        bufp->chgBit(oldp+2050,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[17]));
        bufp->chgBit(oldp+2051,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[18]));
        bufp->chgBit(oldp+2052,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[19]));
        bufp->chgBit(oldp+2053,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[20]));
        bufp->chgBit(oldp+2054,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[21]));
        bufp->chgBit(oldp+2055,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[22]));
        bufp->chgBit(oldp+2056,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[23]));
        bufp->chgBit(oldp+2057,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[24]));
        bufp->chgBit(oldp+2058,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[25]));
        bufp->chgBit(oldp+2059,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[26]));
        bufp->chgBit(oldp+2060,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[27]));
        bufp->chgBit(oldp+2061,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[28]));
        bufp->chgBit(oldp+2062,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[29]));
        bufp->chgBit(oldp+2063,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[30]));
        bufp->chgBit(oldp+2064,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[31]));
        bufp->chgBit(oldp+2065,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0_dirt_w_en_pipe_0));
        bufp->chgBit(oldp+2066,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0
                                [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_addr_pipe_0]));
        bufp->chgBit(oldp+2067,((1U & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__waymask))));
        bufp->chgBit(oldp+2068,(((IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_we) 
                                 & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_valid_T_5))));
        bufp->chgBit(oldp+2069,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[0]));
        bufp->chgBit(oldp+2070,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[1]));
        bufp->chgBit(oldp+2071,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[2]));
        bufp->chgBit(oldp+2072,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[3]));
        bufp->chgBit(oldp+2073,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[4]));
        bufp->chgBit(oldp+2074,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[5]));
        bufp->chgBit(oldp+2075,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[6]));
        bufp->chgBit(oldp+2076,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[7]));
        bufp->chgBit(oldp+2077,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[8]));
        bufp->chgBit(oldp+2078,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[9]));
        bufp->chgBit(oldp+2079,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[10]));
        bufp->chgBit(oldp+2080,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[11]));
        bufp->chgBit(oldp+2081,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[12]));
        bufp->chgBit(oldp+2082,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[13]));
        bufp->chgBit(oldp+2083,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[14]));
        bufp->chgBit(oldp+2084,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[15]));
        bufp->chgBit(oldp+2085,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[16]));
        bufp->chgBit(oldp+2086,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[17]));
        bufp->chgBit(oldp+2087,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[18]));
        bufp->chgBit(oldp+2088,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[19]));
        bufp->chgBit(oldp+2089,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[20]));
        bufp->chgBit(oldp+2090,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[21]));
        bufp->chgBit(oldp+2091,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[22]));
        bufp->chgBit(oldp+2092,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[23]));
        bufp->chgBit(oldp+2093,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[24]));
        bufp->chgBit(oldp+2094,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[25]));
        bufp->chgBit(oldp+2095,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[26]));
        bufp->chgBit(oldp+2096,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[27]));
        bufp->chgBit(oldp+2097,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[28]));
        bufp->chgBit(oldp+2098,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[29]));
        bufp->chgBit(oldp+2099,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[30]));
        bufp->chgBit(oldp+2100,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[31]));
        bufp->chgBit(oldp+2101,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1_dirt_w_en_pipe_0));
        bufp->chgBit(oldp+2102,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1
                                [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_addr_pipe_0]));
        bufp->chgBit(oldp+2103,((1U & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__waymask) 
                                       >> 1U))));
        bufp->chgCData(oldp+2104,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state),2);
        bufp->chgWData(oldp+2105,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg),512);
        bufp->chgQData(oldp+2121,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_addr_reg),64);
        bufp->chgBit(oldp+2123,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_r));
        bufp->chgCData(oldp+2124,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count),4);
        bufp->chgBit(oldp+2125,((8U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count))));
        bufp->chgCData(oldp+2126,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count_write),4);
        bufp->chgBit(oldp+2127,((8U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count_write))));
        bufp->chgQData(oldp+2128,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_addr_reg),64);
        bufp->chgWData(oldp+2130,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg),512);
        bufp->chgQData(oldp+2146,(((0U == (7U & (IData)(
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
        bufp->chgQData(oldp+2148,(((0U == (7U & (IData)(
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
        bufp->chgQData(oldp+2150,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask),64);
        bufp->chgQData(oldp+2152,((((QData)((IData)(
                                                    ((((1U 
                                                        & (IData)(
                                                                  (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                   >> 7U)))
                                                        ? 0xffU
                                                        : 0U) 
                                                      << 0x18U) 
                                                     | ((((1U 
                                                           & (IData)(
                                                                     (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                      >> 6U)))
                                                           ? 0xffU
                                                           : 0U) 
                                                         << 0x10U) 
                                                        | ((((1U 
                                                              & (IData)(
                                                                        (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                         >> 5U)))
                                                              ? 0xffU
                                                              : 0U) 
                                                            << 8U) 
                                                           | ((1U 
                                                               & (IData)(
                                                                         (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                          >> 4U)))
                                                               ? 0xffU
                                                               : 0U)))))) 
                                    << 0x20U) | (QData)((IData)(
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
                                                                           : 0U)))))))),64);
        bufp->chgWData(oldp+2154,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo_lo),128);
        bufp->chgQData(oldp+2158,((((QData)((IData)(
                                                    ((((1U 
                                                        & (IData)(
                                                                  (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                   >> 0x17U)))
                                                        ? 0xffU
                                                        : 0U) 
                                                      << 0x18U) 
                                                     | ((((1U 
                                                           & (IData)(
                                                                     (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                      >> 0x16U)))
                                                           ? 0xffU
                                                           : 0U) 
                                                         << 0x10U) 
                                                        | ((((1U 
                                                              & (IData)(
                                                                        (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                         >> 0x15U)))
                                                              ? 0xffU
                                                              : 0U) 
                                                            << 8U) 
                                                           | ((1U 
                                                               & (IData)(
                                                                         (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                          >> 0x14U)))
                                                               ? 0xffU
                                                               : 0U)))))) 
                                    << 0x20U) | (QData)((IData)(
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
                                                                           : 0U)))))))),64);
        bufp->chgWData(oldp+2160,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo),256);
        bufp->chgQData(oldp+2168,((((QData)((IData)(
                                                    ((((1U 
                                                        & (IData)(
                                                                  (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                   >> 0x27U)))
                                                        ? 0xffU
                                                        : 0U) 
                                                      << 0x18U) 
                                                     | ((((1U 
                                                           & (IData)(
                                                                     (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                      >> 0x26U)))
                                                           ? 0xffU
                                                           : 0U) 
                                                         << 0x10U) 
                                                        | ((((1U 
                                                              & (IData)(
                                                                        (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                         >> 0x25U)))
                                                              ? 0xffU
                                                              : 0U) 
                                                            << 8U) 
                                                           | ((1U 
                                                               & (IData)(
                                                                         (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                          >> 0x24U)))
                                                               ? 0xffU
                                                               : 0U)))))) 
                                    << 0x20U) | (QData)((IData)(
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
                                                                           : 0U)))))))),64);
        bufp->chgWData(oldp+2170,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi_lo),128);
        bufp->chgQData(oldp+2174,((((QData)((IData)(
                                                    ((((1U 
                                                        & (IData)(
                                                                  (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                   >> 0x37U)))
                                                        ? 0xffU
                                                        : 0U) 
                                                      << 0x18U) 
                                                     | ((((1U 
                                                           & (IData)(
                                                                     (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                      >> 0x36U)))
                                                           ? 0xffU
                                                           : 0U) 
                                                         << 0x10U) 
                                                        | ((((1U 
                                                              & (IData)(
                                                                        (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                         >> 0x35U)))
                                                              ? 0xffU
                                                              : 0U) 
                                                            << 8U) 
                                                           | ((1U 
                                                               & (IData)(
                                                                         (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                          >> 0x34U)))
                                                               ? 0xffU
                                                               : 0U)))))) 
                                    << 0x20U) | (QData)((IData)(
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
                                                                           : 0U)))))))),64);
        bufp->chgWData(oldp+2176,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi),256);
        bufp->chgWData(oldp+2184,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend),512);
        __Vtemp_hc2882e76__0[0U] = (IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wdata);
        __Vtemp_hc2882e76__0[1U] = (IData)((vlSelf->CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wdata 
                                            >> 0x20U));
        __Vtemp_hc2882e76__0[2U] = (IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wdata);
        __Vtemp_hc2882e76__0[3U] = (IData)((vlSelf->CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wdata 
                                            >> 0x20U));
        __Vtemp_hc2882e76__0[4U] = (IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wdata);
        __Vtemp_hc2882e76__0[5U] = (IData)((vlSelf->CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wdata 
                                            >> 0x20U));
        __Vtemp_hc2882e76__0[6U] = (IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wdata);
        __Vtemp_hc2882e76__0[7U] = (IData)((vlSelf->CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wdata 
                                            >> 0x20U));
        __Vtemp_hc2882e76__0[8U] = (IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wdata);
        __Vtemp_hc2882e76__0[9U] = (IData)((vlSelf->CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wdata 
                                            >> 0x20U));
        __Vtemp_hc2882e76__0[0xaU] = (IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wdata);
        __Vtemp_hc2882e76__0[0xbU] = (IData)((vlSelf->CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wdata 
                                              >> 0x20U));
        __Vtemp_hc2882e76__0[0xcU] = (IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wdata);
        __Vtemp_hc2882e76__0[0xdU] = (IData)((vlSelf->CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wdata 
                                              >> 0x20U));
        __Vtemp_hc2882e76__0[0xeU] = (IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wdata);
        __Vtemp_hc2882e76__0[0xfU] = (IData)((vlSelf->CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wdata 
                                              >> 0x20U));
        bufp->chgWData(oldp+2200,(__Vtemp_hc2882e76__0),512);
        bufp->chgCData(oldp+2216,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__waymask),2);
        bufp->chgWData(oldp+2217,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[0]),512);
        bufp->chgWData(oldp+2233,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[1]),512);
        bufp->chgWData(oldp+2249,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[2]),512);
        bufp->chgWData(oldp+2265,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[3]),512);
        bufp->chgWData(oldp+2281,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[4]),512);
        bufp->chgWData(oldp+2297,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[5]),512);
        bufp->chgWData(oldp+2313,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[6]),512);
        bufp->chgWData(oldp+2329,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[7]),512);
        bufp->chgWData(oldp+2345,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[8]),512);
        bufp->chgWData(oldp+2361,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[9]),512);
        bufp->chgWData(oldp+2377,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[10]),512);
        bufp->chgWData(oldp+2393,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[11]),512);
        bufp->chgWData(oldp+2409,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[12]),512);
        bufp->chgWData(oldp+2425,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[13]),512);
        bufp->chgWData(oldp+2441,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[14]),512);
        bufp->chgWData(oldp+2457,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[15]),512);
        bufp->chgWData(oldp+2473,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[16]),512);
        bufp->chgWData(oldp+2489,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[17]),512);
        bufp->chgWData(oldp+2505,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[18]),512);
        bufp->chgWData(oldp+2521,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[19]),512);
        bufp->chgWData(oldp+2537,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[20]),512);
        bufp->chgWData(oldp+2553,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[21]),512);
        bufp->chgWData(oldp+2569,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[22]),512);
        bufp->chgWData(oldp+2585,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[23]),512);
        bufp->chgWData(oldp+2601,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[24]),512);
        bufp->chgWData(oldp+2617,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[25]),512);
        bufp->chgWData(oldp+2633,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[26]),512);
        bufp->chgWData(oldp+2649,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[27]),512);
        bufp->chgWData(oldp+2665,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[28]),512);
        bufp->chgWData(oldp+2681,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[29]),512);
        bufp->chgWData(oldp+2697,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[30]),512);
        bufp->chgWData(oldp+2713,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[31]),512);
        bufp->chgBit(oldp+2729,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_en_pipe_0));
        bufp->chgCData(oldp+2730,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0),5);
        bufp->chgCData(oldp+2731,((0x1fU & (IData)(
                                                   (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_addr 
                                                    >> 6U)))),5);
        bufp->chgBit(oldp+2732,((1U & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_waymask))));
        bufp->chgWData(oldp+2733,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[0]),512);
        bufp->chgWData(oldp+2749,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[1]),512);
        bufp->chgWData(oldp+2765,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[2]),512);
        bufp->chgWData(oldp+2781,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[3]),512);
        bufp->chgWData(oldp+2797,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[4]),512);
        bufp->chgWData(oldp+2813,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[5]),512);
        bufp->chgWData(oldp+2829,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[6]),512);
        bufp->chgWData(oldp+2845,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[7]),512);
        bufp->chgWData(oldp+2861,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[8]),512);
        bufp->chgWData(oldp+2877,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[9]),512);
        bufp->chgWData(oldp+2893,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[10]),512);
        bufp->chgWData(oldp+2909,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[11]),512);
        bufp->chgWData(oldp+2925,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[12]),512);
        bufp->chgWData(oldp+2941,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[13]),512);
        bufp->chgWData(oldp+2957,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[14]),512);
        bufp->chgWData(oldp+2973,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[15]),512);
        bufp->chgWData(oldp+2989,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[16]),512);
        bufp->chgWData(oldp+3005,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[17]),512);
        bufp->chgWData(oldp+3021,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[18]),512);
        bufp->chgWData(oldp+3037,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[19]),512);
        bufp->chgWData(oldp+3053,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[20]),512);
        bufp->chgWData(oldp+3069,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[21]),512);
        bufp->chgWData(oldp+3085,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[22]),512);
        bufp->chgWData(oldp+3101,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[23]),512);
        bufp->chgWData(oldp+3117,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[24]),512);
        bufp->chgWData(oldp+3133,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[25]),512);
        bufp->chgWData(oldp+3149,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[26]),512);
        bufp->chgWData(oldp+3165,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[27]),512);
        bufp->chgWData(oldp+3181,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[28]),512);
        bufp->chgWData(oldp+3197,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[29]),512);
        bufp->chgWData(oldp+3213,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[30]),512);
        bufp->chgWData(oldp+3229,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[31]),512);
        bufp->chgBit(oldp+3245,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_en_pipe_0));
        bufp->chgCData(oldp+3246,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0),5);
        bufp->chgBit(oldp+3247,((1U & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_waymask) 
                                       >> 1U))));
        bufp->chgQData(oldp+3248,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[0]),53);
        bufp->chgQData(oldp+3250,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[1]),53);
        bufp->chgQData(oldp+3252,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[2]),53);
        bufp->chgQData(oldp+3254,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[3]),53);
        bufp->chgQData(oldp+3256,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[4]),53);
        bufp->chgQData(oldp+3258,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[5]),53);
        bufp->chgQData(oldp+3260,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[6]),53);
        bufp->chgQData(oldp+3262,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[7]),53);
        bufp->chgQData(oldp+3264,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[8]),53);
        bufp->chgQData(oldp+3266,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[9]),53);
        bufp->chgQData(oldp+3268,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[10]),53);
        bufp->chgQData(oldp+3270,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[11]),53);
        bufp->chgQData(oldp+3272,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[12]),53);
        bufp->chgQData(oldp+3274,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[13]),53);
        bufp->chgQData(oldp+3276,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[14]),53);
        bufp->chgQData(oldp+3278,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[15]),53);
        bufp->chgQData(oldp+3280,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[16]),53);
        bufp->chgQData(oldp+3282,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[17]),53);
        bufp->chgQData(oldp+3284,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[18]),53);
        bufp->chgQData(oldp+3286,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[19]),53);
        bufp->chgQData(oldp+3288,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[20]),53);
        bufp->chgQData(oldp+3290,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[21]),53);
        bufp->chgQData(oldp+3292,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[22]),53);
        bufp->chgQData(oldp+3294,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[23]),53);
        bufp->chgQData(oldp+3296,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[24]),53);
        bufp->chgQData(oldp+3298,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[25]),53);
        bufp->chgQData(oldp+3300,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[26]),53);
        bufp->chgQData(oldp+3302,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[27]),53);
        bufp->chgQData(oldp+3304,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[28]),53);
        bufp->chgQData(oldp+3306,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[29]),53);
        bufp->chgQData(oldp+3308,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[30]),53);
        bufp->chgQData(oldp+3310,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[31]),53);
        bufp->chgBit(oldp+3312,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_tag_w_en_pipe_0));
        bufp->chgCData(oldp+3313,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_tag_w_addr_pipe_0),5);
        bufp->chgQData(oldp+3314,((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_addr 
                                   >> 0xbU)),53);
        bufp->chgQData(oldp+3316,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[0]),53);
        bufp->chgQData(oldp+3318,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[1]),53);
        bufp->chgQData(oldp+3320,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[2]),53);
        bufp->chgQData(oldp+3322,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[3]),53);
        bufp->chgQData(oldp+3324,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[4]),53);
        bufp->chgQData(oldp+3326,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[5]),53);
        bufp->chgQData(oldp+3328,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[6]),53);
        bufp->chgQData(oldp+3330,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[7]),53);
        bufp->chgQData(oldp+3332,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[8]),53);
        bufp->chgQData(oldp+3334,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[9]),53);
        bufp->chgQData(oldp+3336,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[10]),53);
        bufp->chgQData(oldp+3338,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[11]),53);
        bufp->chgQData(oldp+3340,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[12]),53);
        bufp->chgQData(oldp+3342,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[13]),53);
        bufp->chgQData(oldp+3344,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[14]),53);
        bufp->chgQData(oldp+3346,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[15]),53);
        bufp->chgQData(oldp+3348,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[16]),53);
        bufp->chgQData(oldp+3350,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[17]),53);
        bufp->chgQData(oldp+3352,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[18]),53);
        bufp->chgQData(oldp+3354,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[19]),53);
        bufp->chgQData(oldp+3356,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[20]),53);
        bufp->chgQData(oldp+3358,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[21]),53);
        bufp->chgQData(oldp+3360,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[22]),53);
        bufp->chgQData(oldp+3362,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[23]),53);
        bufp->chgQData(oldp+3364,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[24]),53);
        bufp->chgQData(oldp+3366,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[25]),53);
        bufp->chgQData(oldp+3368,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[26]),53);
        bufp->chgQData(oldp+3370,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[27]),53);
        bufp->chgQData(oldp+3372,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[28]),53);
        bufp->chgQData(oldp+3374,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[29]),53);
        bufp->chgQData(oldp+3376,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[30]),53);
        bufp->chgQData(oldp+3378,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[31]),53);
        bufp->chgBit(oldp+3380,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1_tag_w_en_pipe_0));
        bufp->chgCData(oldp+3381,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0),5);
        bufp->chgBit(oldp+3382,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[0]));
        bufp->chgBit(oldp+3383,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[1]));
        bufp->chgBit(oldp+3384,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[2]));
        bufp->chgBit(oldp+3385,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[3]));
        bufp->chgBit(oldp+3386,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[4]));
        bufp->chgBit(oldp+3387,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[5]));
        bufp->chgBit(oldp+3388,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[6]));
        bufp->chgBit(oldp+3389,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[7]));
        bufp->chgBit(oldp+3390,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[8]));
        bufp->chgBit(oldp+3391,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[9]));
        bufp->chgBit(oldp+3392,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[10]));
        bufp->chgBit(oldp+3393,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[11]));
        bufp->chgBit(oldp+3394,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[12]));
        bufp->chgBit(oldp+3395,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[13]));
        bufp->chgBit(oldp+3396,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[14]));
        bufp->chgBit(oldp+3397,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[15]));
        bufp->chgBit(oldp+3398,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[16]));
        bufp->chgBit(oldp+3399,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[17]));
        bufp->chgBit(oldp+3400,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[18]));
        bufp->chgBit(oldp+3401,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[19]));
        bufp->chgBit(oldp+3402,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[20]));
        bufp->chgBit(oldp+3403,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[21]));
        bufp->chgBit(oldp+3404,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[22]));
        bufp->chgBit(oldp+3405,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[23]));
        bufp->chgBit(oldp+3406,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[24]));
        bufp->chgBit(oldp+3407,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[25]));
        bufp->chgBit(oldp+3408,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[26]));
        bufp->chgBit(oldp+3409,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[27]));
        bufp->chgBit(oldp+3410,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[28]));
        bufp->chgBit(oldp+3411,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[29]));
        bufp->chgBit(oldp+3412,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[30]));
        bufp->chgBit(oldp+3413,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[31]));
        bufp->chgBit(oldp+3414,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_en_pipe_0));
        bufp->chgCData(oldp+3415,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0),5);
        bufp->chgBit(oldp+3416,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[0]));
        bufp->chgBit(oldp+3417,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[1]));
        bufp->chgBit(oldp+3418,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[2]));
        bufp->chgBit(oldp+3419,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[3]));
        bufp->chgBit(oldp+3420,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[4]));
        bufp->chgBit(oldp+3421,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[5]));
        bufp->chgBit(oldp+3422,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[6]));
        bufp->chgBit(oldp+3423,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[7]));
        bufp->chgBit(oldp+3424,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[8]));
        bufp->chgBit(oldp+3425,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[9]));
        bufp->chgBit(oldp+3426,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[10]));
        bufp->chgBit(oldp+3427,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[11]));
        bufp->chgBit(oldp+3428,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[12]));
        bufp->chgBit(oldp+3429,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[13]));
        bufp->chgBit(oldp+3430,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[14]));
        bufp->chgBit(oldp+3431,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[15]));
        bufp->chgBit(oldp+3432,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[16]));
        bufp->chgBit(oldp+3433,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[17]));
        bufp->chgBit(oldp+3434,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[18]));
        bufp->chgBit(oldp+3435,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[19]));
        bufp->chgBit(oldp+3436,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[20]));
        bufp->chgBit(oldp+3437,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[21]));
        bufp->chgBit(oldp+3438,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[22]));
        bufp->chgBit(oldp+3439,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[23]));
        bufp->chgBit(oldp+3440,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[24]));
        bufp->chgBit(oldp+3441,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[25]));
        bufp->chgBit(oldp+3442,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[26]));
        bufp->chgBit(oldp+3443,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[27]));
        bufp->chgBit(oldp+3444,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[28]));
        bufp->chgBit(oldp+3445,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[29]));
        bufp->chgBit(oldp+3446,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[30]));
        bufp->chgBit(oldp+3447,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[31]));
        bufp->chgBit(oldp+3448,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_en_pipe_0));
        bufp->chgCData(oldp+3449,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_addr_pipe_0),5);
        bufp->chgBit(oldp+3450,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_0_result));
        bufp->chgBit(oldp+3451,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_1_result));
    }
    bufp->chgBit(oldp+3452,(vlSelf->clock));
    bufp->chgBit(oldp+3453,(vlSelf->reset));
    bufp->chgQData(oldp+3454,(vlSelf->io_pc),64);
    bufp->chgIData(oldp+3456,(vlSelf->io_inst),32);
    bufp->chgCData(oldp+3457,(vlSelf->CoreTop__DOT__IFMEM__DOT__next_state),2);
    bufp->chgCData(oldp+3458,(vlSelf->CoreTop__DOT__MMEM__DOT__next_state),2);
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
}
