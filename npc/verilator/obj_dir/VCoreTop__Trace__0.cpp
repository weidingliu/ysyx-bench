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
    VlWide<5>/*159:0*/ __Vtemp_h97a9be20__0;
    VlWide<5>/*159:0*/ __Vtemp_h97a9be20__1;
    VlWide<5>/*159:0*/ __Vtemp_h1a657afd__0;
    VlWide<5>/*159:0*/ __Vtemp_h7a662728__0;
    VlWide<5>/*159:0*/ __Vtemp_h791e8ef8__0;
    VlWide<16>/*511:0*/ __Vtemp_hf989eec7__0;
    VlWide<16>/*511:0*/ __Vtemp_h4453b49e__0;
    VlWide<16>/*511:0*/ __Vtemp_hc2882e76__0;
    VlWide<4>/*127:0*/ __Vtemp_hb5acfd9b__0;
    VlWide<4>/*127:0*/ __Vtemp_h8248920c__0;
    VlWide<4>/*127:0*/ __Vtemp_h32213b7b__0;
    VlWide<4>/*127:0*/ __Vtemp_hf98c7323__0;
    VlWide<4>/*127:0*/ __Vtemp_h9a785a5b__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->CoreTop__DOT__EX_io_branchIO_is_jump));
        bufp->chgBit(oldp+1,(vlSelf->CoreTop__DOT__EX_io_in_ready));
        bufp->chgQData(oldp+2,(vlSelf->CoreTop__DOT__IF__DOT__temp),64);
        bufp->chgQData(oldp+4,((((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                 & (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit))
                                 ? vlSelf->CoreTop__DOT__ICACHE__DOT__hit_data
                                 : vlSelf->CoreTop__DOT__ICACHE__DOT__mem_data)),64);
        bufp->chgBit(oldp+6,(vlSelf->CoreTop__DOT__valid));
        bufp->chgQData(oldp+7,(vlSelf->CoreTop__DOT__ID_io_in_bits_r_PC),64);
        bufp->chgIData(oldp+9,(vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst),32);
        bufp->chgCData(oldp+10,((((7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                   ? 2U : 0U) | ((3U 
                                                  == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                                  ? 2U
                                                  : 0U))),3);
        bufp->chgCData(oldp+11,((((8U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)) 
                                  | (7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))) 
                                 | (3U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)))),3);
        bufp->chgCData(oldp+12,(((0x13U == (0x707fU 
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
        bufp->chgCData(oldp+13,((0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+14,((0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                          >> 0x14U))),5);
        bufp->chgBit(oldp+15,(((IData)(vlSelf->CoreTop__DOT__valid) 
                               & (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_3))));
        bufp->chgCData(oldp+16,(((0x13U == (0x707fU 
                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                  ? 0x40U : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_316))),7);
        bufp->chgCData(oldp+17,((0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                          >> 7U))),5);
        bufp->chgQData(oldp+18,(((((((8U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
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
        bufp->chgBit(oldp+20,(vlSelf->CoreTop__DOT__valid_1));
        bufp->chgCData(oldp+21,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src1Type),3);
        bufp->chgCData(oldp+22,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src2Type),3);
        bufp->chgCData(oldp+23,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType),3);
        bufp->chgBit(oldp+24,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_inst_valid));
        bufp->chgCData(oldp+25,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfSrc1),5);
        bufp->chgCData(oldp+26,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfSrc2),5);
        bufp->chgBit(oldp+27,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfWen));
        bufp->chgCData(oldp+28,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype),7);
        bufp->chgCData(oldp+29,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest),5);
        bufp->chgQData(oldp+30,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_src1),64);
        bufp->chgQData(oldp+32,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_src2),64);
        bufp->chgQData(oldp+34,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm),64);
        bufp->chgQData(oldp+36,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC),64);
        bufp->chgIData(oldp+38,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_inst),32);
        bufp->chgBit(oldp+39,((1U & (~ (IData)(vlSelf->CoreTop__DOT__MEM__DOT___io_out_valid_T_6)))));
        bufp->chgBit(oldp+40,(vlSelf->CoreTop__DOT__EX_io_out_valid));
        bufp->chgBit(oldp+41,(vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfWen));
        bufp->chgBit(oldp+42,(((0x42U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                               & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_inst_valid))));
        bufp->chgBit(oldp+43,(vlSelf->CoreTop__DOT__DIP_io_is_break_REG_1));
        bufp->chgQData(oldp+44,(vlSelf->CoreTop__DOT__rf
                                [0U]),64);
        bufp->chgQData(oldp+46,(vlSelf->CoreTop__DOT__rf
                                [1U]),64);
        bufp->chgQData(oldp+48,(vlSelf->CoreTop__DOT__rf
                                [2U]),64);
        bufp->chgQData(oldp+50,(vlSelf->CoreTop__DOT__rf
                                [3U]),64);
        bufp->chgQData(oldp+52,(vlSelf->CoreTop__DOT__rf
                                [4U]),64);
        bufp->chgQData(oldp+54,(vlSelf->CoreTop__DOT__rf
                                [5U]),64);
        bufp->chgQData(oldp+56,(vlSelf->CoreTop__DOT__rf
                                [6U]),64);
        bufp->chgQData(oldp+58,(vlSelf->CoreTop__DOT__rf
                                [7U]),64);
        bufp->chgQData(oldp+60,(vlSelf->CoreTop__DOT__rf
                                [8U]),64);
        bufp->chgQData(oldp+62,(vlSelf->CoreTop__DOT__rf
                                [9U]),64);
        bufp->chgQData(oldp+64,(vlSelf->CoreTop__DOT__rf
                                [0xaU]),64);
        bufp->chgQData(oldp+66,(vlSelf->CoreTop__DOT__rf
                                [0xbU]),64);
        bufp->chgQData(oldp+68,(vlSelf->CoreTop__DOT__rf
                                [0xcU]),64);
        bufp->chgQData(oldp+70,(vlSelf->CoreTop__DOT__rf
                                [0xdU]),64);
        bufp->chgQData(oldp+72,(vlSelf->CoreTop__DOT__rf
                                [0xeU]),64);
        bufp->chgQData(oldp+74,(vlSelf->CoreTop__DOT__rf
                                [0xfU]),64);
        bufp->chgQData(oldp+76,(vlSelf->CoreTop__DOT__rf
                                [0x10U]),64);
        bufp->chgQData(oldp+78,(vlSelf->CoreTop__DOT__rf
                                [0x11U]),64);
        bufp->chgQData(oldp+80,(vlSelf->CoreTop__DOT__rf
                                [0x12U]),64);
        bufp->chgQData(oldp+82,(vlSelf->CoreTop__DOT__rf
                                [0x13U]),64);
        bufp->chgQData(oldp+84,(vlSelf->CoreTop__DOT__rf
                                [0x14U]),64);
        bufp->chgQData(oldp+86,(vlSelf->CoreTop__DOT__rf
                                [0x15U]),64);
        bufp->chgQData(oldp+88,(vlSelf->CoreTop__DOT__rf
                                [0x16U]),64);
        bufp->chgQData(oldp+90,(vlSelf->CoreTop__DOT__rf
                                [0x17U]),64);
        bufp->chgQData(oldp+92,(vlSelf->CoreTop__DOT__rf
                                [0x18U]),64);
        bufp->chgQData(oldp+94,(vlSelf->CoreTop__DOT__rf
                                [0x19U]),64);
        bufp->chgQData(oldp+96,(vlSelf->CoreTop__DOT__rf
                                [0x1aU]),64);
        bufp->chgQData(oldp+98,(vlSelf->CoreTop__DOT__rf
                                [0x1bU]),64);
        bufp->chgQData(oldp+100,(vlSelf->CoreTop__DOT__rf
                                 [0x1cU]),64);
        bufp->chgQData(oldp+102,(vlSelf->CoreTop__DOT__rf
                                 [0x1dU]),64);
        bufp->chgQData(oldp+104,(vlSelf->CoreTop__DOT__rf
                                 [0x1eU]),64);
        bufp->chgQData(oldp+106,(vlSelf->CoreTop__DOT__rf
                                 [0x1fU]),64);
        bufp->chgIData(oldp+108,(vlSelf->CoreTop__DOT__DIP_io_inst_REG),32);
        bufp->chgQData(oldp+109,(vlSelf->CoreTop__DOT__DIP_io_pc_REG),64);
        bufp->chgBit(oldp+111,(vlSelf->CoreTop__DOT__DIP_io_inst_valid_REG));
        bufp->chgQData(oldp+112,(vlSelf->CoreTop__DOT__DIP_io_dnpc_REG),64);
        bufp->chgBit(oldp+114,(vlSelf->CoreTop__DOT__DIP_io_is_skip_REG));
        bufp->chgQData(oldp+115,(vlSelf->CoreTop__DOT__rf[0]),64);
        bufp->chgQData(oldp+117,(vlSelf->CoreTop__DOT__rf[1]),64);
        bufp->chgQData(oldp+119,(vlSelf->CoreTop__DOT__rf[2]),64);
        bufp->chgQData(oldp+121,(vlSelf->CoreTop__DOT__rf[3]),64);
        bufp->chgQData(oldp+123,(vlSelf->CoreTop__DOT__rf[4]),64);
        bufp->chgQData(oldp+125,(vlSelf->CoreTop__DOT__rf[5]),64);
        bufp->chgQData(oldp+127,(vlSelf->CoreTop__DOT__rf[6]),64);
        bufp->chgQData(oldp+129,(vlSelf->CoreTop__DOT__rf[7]),64);
        bufp->chgQData(oldp+131,(vlSelf->CoreTop__DOT__rf[8]),64);
        bufp->chgQData(oldp+133,(vlSelf->CoreTop__DOT__rf[9]),64);
        bufp->chgQData(oldp+135,(vlSelf->CoreTop__DOT__rf[10]),64);
        bufp->chgQData(oldp+137,(vlSelf->CoreTop__DOT__rf[11]),64);
        bufp->chgQData(oldp+139,(vlSelf->CoreTop__DOT__rf[12]),64);
        bufp->chgQData(oldp+141,(vlSelf->CoreTop__DOT__rf[13]),64);
        bufp->chgQData(oldp+143,(vlSelf->CoreTop__DOT__rf[14]),64);
        bufp->chgQData(oldp+145,(vlSelf->CoreTop__DOT__rf[15]),64);
        bufp->chgQData(oldp+147,(vlSelf->CoreTop__DOT__rf[16]),64);
        bufp->chgQData(oldp+149,(vlSelf->CoreTop__DOT__rf[17]),64);
        bufp->chgQData(oldp+151,(vlSelf->CoreTop__DOT__rf[18]),64);
        bufp->chgQData(oldp+153,(vlSelf->CoreTop__DOT__rf[19]),64);
        bufp->chgQData(oldp+155,(vlSelf->CoreTop__DOT__rf[20]),64);
        bufp->chgQData(oldp+157,(vlSelf->CoreTop__DOT__rf[21]),64);
        bufp->chgQData(oldp+159,(vlSelf->CoreTop__DOT__rf[22]),64);
        bufp->chgQData(oldp+161,(vlSelf->CoreTop__DOT__rf[23]),64);
        bufp->chgQData(oldp+163,(vlSelf->CoreTop__DOT__rf[24]),64);
        bufp->chgQData(oldp+165,(vlSelf->CoreTop__DOT__rf[25]),64);
        bufp->chgQData(oldp+167,(vlSelf->CoreTop__DOT__rf[26]),64);
        bufp->chgQData(oldp+169,(vlSelf->CoreTop__DOT__rf[27]),64);
        bufp->chgQData(oldp+171,(vlSelf->CoreTop__DOT__rf[28]),64);
        bufp->chgQData(oldp+173,(vlSelf->CoreTop__DOT__rf[29]),64);
        bufp->chgQData(oldp+175,(vlSelf->CoreTop__DOT__rf[30]),64);
        bufp->chgQData(oldp+177,(vlSelf->CoreTop__DOT__rf[31]),64);
        bufp->chgQData(oldp+179,(vlSelf->CoreTop__DOT__rf
                                 [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                            >> 0xfU))]),64);
        bufp->chgQData(oldp+181,(vlSelf->CoreTop__DOT__rf
                                 [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                            >> 0x14U))]),64);
        bufp->chgQData(oldp+183,(((0U == (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest))
                                   ? 0ULL : vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfData)),64);
        bufp->chgCData(oldp+185,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest),5);
        bufp->chgBit(oldp+186,(vlSelf->CoreTop__DOT__WB_io_out_bits_ctrl_rf_rfWen));
        bufp->chgQData(oldp+187,(((IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_valid)
                                   ? (((0xa0000000ULL 
                                        <= vlSelf->CoreTop__DOT__MEM__DOT__addr_temp) 
                                       & (0xa2000000ULL 
                                          >= vlSelf->CoreTop__DOT__MEM__DOT__addr_temp))
                                       ? vlSelf->CoreTop__DOT__MEM__DOT__addr_temp
                                       : vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_addr_req_bits_addr)
                                   : vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_addr_req_bits_addr)),64);
        bufp->chgBit(oldp+189,(((IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_valid)
                                 ? (((0xa0000000ULL 
                                      <= vlSelf->CoreTop__DOT__MEM__DOT__addr_temp) 
                                     & (0xa2000000ULL 
                                        >= vlSelf->CoreTop__DOT__MEM__DOT__addr_temp))
                                     ? (IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_we)
                                     : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_addr_req_bits_we))
                                 : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_addr_req_bits_we))));
        bufp->chgBit(oldp+190,(((IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_valid)
                                 ? (((0xa0000000ULL 
                                      <= vlSelf->CoreTop__DOT__MEM__DOT__addr_temp) 
                                     & (0xa2000000ULL 
                                        >= vlSelf->CoreTop__DOT__MEM__DOT__addr_temp))
                                     ? (((4U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_fuType)) 
                                         & (IData)(vlSelf->CoreTop__DOT__valid_2)) 
                                        & (IData)(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_signal_inst_valid))
                                     : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_addr_req_bits_ce))
                                 : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_addr_req_bits_ce))));
        bufp->chgQData(oldp+191,(((IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_valid)
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
        bufp->chgCData(oldp+193,(((IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_valid)
                                   ? (((0xa0000000ULL 
                                        <= vlSelf->CoreTop__DOT__MEM__DOT__addr_temp) 
                                       & (0xa2000000ULL 
                                          >= vlSelf->CoreTop__DOT__MEM__DOT__addr_temp))
                                       ? (IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wmask)
                                       : 0xffU) : 0xffU)),8);
        bufp->chgBit(oldp+194,(vlSelf->CoreTop__DOT__valid_2));
        bufp->chgCData(oldp+195,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_fuType),3);
        bufp->chgBit(oldp+196,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_inst_valid));
        bufp->chgBit(oldp+197,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_rfWen));
        bufp->chgCData(oldp+198,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype),7);
        bufp->chgQData(oldp+199,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_PC),64);
        bufp->chgIData(oldp+201,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_inst),32);
        bufp->chgQData(oldp+202,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_Dnpc),64);
        bufp->chgCData(oldp+204,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest),5);
        bufp->chgQData(oldp+205,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfData),64);
        bufp->chgQData(oldp+207,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src1),64);
        bufp->chgQData(oldp+209,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2),64);
        bufp->chgQData(oldp+211,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_Imm),64);
        bufp->chgBit(oldp+213,(vlSelf->CoreTop__DOT__MEM_io_out_valid));
        bufp->chgBit(oldp+214,(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_signal_inst_valid));
        bufp->chgBit(oldp+215,((((0xa0000048ULL == vlSelf->CoreTop__DOT__MEM__DOT__addr_temp) 
                                 | (0xa00003f8ULL == vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)) 
                                | ((0xa0000000ULL <= vlSelf->CoreTop__DOT__MEM__DOT__addr_temp) 
                                   & (0xa1200000ULL 
                                      >= vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))));
        bufp->chgBit(oldp+216,(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfWen));
        bufp->chgBit(oldp+217,(vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_valid));
        bufp->chgQData(oldp+218,(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp),64);
        bufp->chgBit(oldp+220,((((4U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_fuType)) 
                                 & (IData)(vlSelf->CoreTop__DOT__valid_2)) 
                                & (IData)(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_signal_inst_valid))));
        bufp->chgBit(oldp+221,(vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_we));
        bufp->chgBit(oldp+222,(vlSelf->CoreTop__DOT__MMIO_io_in_rdata_rep_valid));
        bufp->chgQData(oldp+223,(vlSelf->CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wdata),64);
        bufp->chgCData(oldp+225,(vlSelf->CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wmask),8);
        bufp->chgBit(oldp+226,(vlSelf->CoreTop__DOT__MMIO_io_in_wdata_rep));
        bufp->chgBit(oldp+227,(vlSelf->CoreTop__DOT__valid_3));
        bufp->chgBit(oldp+228,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_inst_valid));
        bufp->chgBit(oldp+229,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_rfWen));
        bufp->chgQData(oldp+230,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_PC),64);
        bufp->chgIData(oldp+232,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_inst),32);
        bufp->chgQData(oldp+233,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_Dnpc),64);
        bufp->chgBit(oldp+235,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_skip));
        bufp->chgQData(oldp+236,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfData),64);
        bufp->chgBit(oldp+238,(((IData)(vlSelf->CoreTop__DOT__valid_3) 
                                & (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_inst_valid))));
        bufp->chgQData(oldp+239,(((0U == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                   >> 0xfU)))
                                   ? 0ULL : vlSelf->CoreTop__DOT__rf
                                  [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                             >> 0xfU))])),64);
        bufp->chgQData(oldp+241,(((0U == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                   >> 0x14U)))
                                   ? 0ULL : vlSelf->CoreTop__DOT__rf
                                  [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                             >> 0x14U))])),64);
        bufp->chgBit(oldp+243,((0U == (IData)(vlSelf->CoreTop__DOT__If_axi_birdge__DOT__state))));
        bufp->chgBit(oldp+244,((2U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state))));
        bufp->chgQData(oldp+245,(vlSelf->CoreTop__DOT__ICACHE__DOT__mem_addr_reg),64);
        bufp->chgBit(oldp+247,(vlSelf->CoreTop__DOT__If_axi_birdge_io_in_rdata_rep_valid));
        bufp->chgQData(oldp+248,(vlSelf->CoreTop__DOT__IFMEM_rdata),64);
        bufp->chgBit(oldp+250,(vlSelf->CoreTop__DOT__If_axi_birdge_io_out_raddr_req_valid));
        bufp->chgBit(oldp+251,(vlSelf->CoreTop__DOT__IFMEM_r_valid));
        bufp->chgBit(oldp+252,((2U == (IData)(vlSelf->CoreTop__DOT__If_axi_birdge__DOT__state))));
        bufp->chgBit(oldp+253,(vlSelf->CoreTop__DOT__IFMEM_bvalid));
        bufp->chgBit(oldp+254,((0U == (IData)(vlSelf->CoreTop__DOT__IFMEM__DOT__state))));
        bufp->chgBit(oldp+255,(vlSelf->CoreTop__DOT__DIP_io_is_break_REG));
        bufp->chgQData(oldp+256,(vlSelf->CoreTop__DOT__DIP__DOT__rf[0]),64);
        bufp->chgQData(oldp+258,(vlSelf->CoreTop__DOT__DIP__DOT__rf[1]),64);
        bufp->chgQData(oldp+260,(vlSelf->CoreTop__DOT__DIP__DOT__rf[2]),64);
        bufp->chgQData(oldp+262,(vlSelf->CoreTop__DOT__DIP__DOT__rf[3]),64);
        bufp->chgQData(oldp+264,(vlSelf->CoreTop__DOT__DIP__DOT__rf[4]),64);
        bufp->chgQData(oldp+266,(vlSelf->CoreTop__DOT__DIP__DOT__rf[5]),64);
        bufp->chgQData(oldp+268,(vlSelf->CoreTop__DOT__DIP__DOT__rf[6]),64);
        bufp->chgQData(oldp+270,(vlSelf->CoreTop__DOT__DIP__DOT__rf[7]),64);
        bufp->chgQData(oldp+272,(vlSelf->CoreTop__DOT__DIP__DOT__rf[8]),64);
        bufp->chgQData(oldp+274,(vlSelf->CoreTop__DOT__DIP__DOT__rf[9]),64);
        bufp->chgQData(oldp+276,(vlSelf->CoreTop__DOT__DIP__DOT__rf[10]),64);
        bufp->chgQData(oldp+278,(vlSelf->CoreTop__DOT__DIP__DOT__rf[11]),64);
        bufp->chgQData(oldp+280,(vlSelf->CoreTop__DOT__DIP__DOT__rf[12]),64);
        bufp->chgQData(oldp+282,(vlSelf->CoreTop__DOT__DIP__DOT__rf[13]),64);
        bufp->chgQData(oldp+284,(vlSelf->CoreTop__DOT__DIP__DOT__rf[14]),64);
        bufp->chgQData(oldp+286,(vlSelf->CoreTop__DOT__DIP__DOT__rf[15]),64);
        bufp->chgQData(oldp+288,(vlSelf->CoreTop__DOT__DIP__DOT__rf[16]),64);
        bufp->chgQData(oldp+290,(vlSelf->CoreTop__DOT__DIP__DOT__rf[17]),64);
        bufp->chgQData(oldp+292,(vlSelf->CoreTop__DOT__DIP__DOT__rf[18]),64);
        bufp->chgQData(oldp+294,(vlSelf->CoreTop__DOT__DIP__DOT__rf[19]),64);
        bufp->chgQData(oldp+296,(vlSelf->CoreTop__DOT__DIP__DOT__rf[20]),64);
        bufp->chgQData(oldp+298,(vlSelf->CoreTop__DOT__DIP__DOT__rf[21]),64);
        bufp->chgQData(oldp+300,(vlSelf->CoreTop__DOT__DIP__DOT__rf[22]),64);
        bufp->chgQData(oldp+302,(vlSelf->CoreTop__DOT__DIP__DOT__rf[23]),64);
        bufp->chgQData(oldp+304,(vlSelf->CoreTop__DOT__DIP__DOT__rf[24]),64);
        bufp->chgQData(oldp+306,(vlSelf->CoreTop__DOT__DIP__DOT__rf[25]),64);
        bufp->chgQData(oldp+308,(vlSelf->CoreTop__DOT__DIP__DOT__rf[26]),64);
        bufp->chgQData(oldp+310,(vlSelf->CoreTop__DOT__DIP__DOT__rf[27]),64);
        bufp->chgQData(oldp+312,(vlSelf->CoreTop__DOT__DIP__DOT__rf[28]),64);
        bufp->chgQData(oldp+314,(vlSelf->CoreTop__DOT__DIP__DOT__rf[29]),64);
        bufp->chgQData(oldp+316,(vlSelf->CoreTop__DOT__DIP__DOT__rf[30]),64);
        bufp->chgQData(oldp+318,(vlSelf->CoreTop__DOT__DIP__DOT__rf[31]),64);
        bufp->chgIData(oldp+320,(vlSelf->CoreTop__DOT__DIP__DOT__IN[0]),32);
        bufp->chgIData(oldp+321,(vlSelf->CoreTop__DOT__DIP__DOT__IN[1]),32);
        bufp->chgIData(oldp+322,(vlSelf->CoreTop__DOT__DIP__DOT__IN[2]),32);
        bufp->chgIData(oldp+323,(vlSelf->CoreTop__DOT__DIP__DOT__IN[3]),32);
        bufp->chgIData(oldp+324,(vlSelf->CoreTop__DOT__DIP__DOT__IN[4]),32);
        bufp->chgIData(oldp+325,(vlSelf->CoreTop__DOT__DIP__DOT__IN[5]),32);
        bufp->chgIData(oldp+326,(vlSelf->CoreTop__DOT__DIP__DOT__IN[6]),32);
        bufp->chgQData(oldp+327,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mepc_REG_1),64);
        bufp->chgQData(oldp+329,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mcause_REG_1),64);
        bufp->chgQData(oldp+331,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mstatus_REG_1),64);
        bufp->chgQData(oldp+333,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mtvec_REG_1),64);
        bufp->chgBit(oldp+335,(vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_valid));
        bufp->chgBit(oldp+336,((0x44U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count))));
        bufp->chgQData(oldp+337,((((QData)((IData)(
                                                   vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[0U])))),64);
        bufp->chgBit(oldp+339,(((IData)(vlSelf->CoreTop__DOT__EX__DOT__is_div) 
                                & (2U != (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state)))));
        bufp->chgBit(oldp+340,(vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_flow_div_signed));
        bufp->chgBit(oldp+341,((2U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state))));
        bufp->chgBit(oldp+342,(vlSelf->CoreTop__DOT__EX__DOT__is_mul));
        bufp->chgBit(oldp+343,(vlSelf->CoreTop__DOT__EX__DOT__is_div));
        bufp->chgBit(oldp+344,(vlSelf->CoreTop__DOT__EX__DOT__is_divw));
        bufp->chgQData(oldp+345,(vlSelf->CoreTop__DOT__EX__DOT__mepc),64);
        bufp->chgQData(oldp+347,(vlSelf->CoreTop__DOT__EX__DOT__mcause),64);
        bufp->chgQData(oldp+349,(vlSelf->CoreTop__DOT__EX__DOT__mstatus),64);
        bufp->chgQData(oldp+351,(vlSelf->CoreTop__DOT__EX__DOT__mtvec),64);
        bufp->chgQData(oldp+353,(vlSelf->CoreTop__DOT__EX__DOT__mie),64);
        bufp->chgQData(oldp+355,(vlSelf->CoreTop__DOT__EX__DOT__mip),64);
        bufp->chgBit(oldp+357,((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[0U] 
                                >> 0x1fU)));
        bufp->chgQData(oldp+358,(((3U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType))
                                   ? (4ULL + vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC)
                                   : 0ULL)),64);
        bufp->chgQData(oldp+360,(((0x6bU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
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
        bufp->chgQData(oldp+362,(vlSelf->CoreTop__DOT__EX__DOT__csr_data),64);
        bufp->chgQData(oldp+364,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mtvec_REG),64);
        bufp->chgQData(oldp+366,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mcause_REG),64);
        bufp->chgQData(oldp+368,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mepc_REG),64);
        bufp->chgQData(oldp+370,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mstatus_REG),64);
        bufp->chgQData(oldp+372,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[0]),64);
        bufp->chgQData(oldp+374,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[1]),64);
        bufp->chgQData(oldp+376,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[2]),64);
        bufp->chgQData(oldp+378,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[3]),64);
        bufp->chgQData(oldp+380,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[4]),64);
        bufp->chgQData(oldp+382,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[5]),64);
        bufp->chgWData(oldp+384,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend),128);
        bufp->chgQData(oldp+388,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divisor),64);
        bufp->chgQData(oldp+390,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S),64);
        bufp->chgCData(oldp+392,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state),2);
        bufp->chgCData(oldp+393,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__count),6);
        bufp->chgBit(oldp+394,((0x3fU == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__count))));
        bufp->chgBit(oldp+395,(((1U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state)) 
                                & (0x3fU == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__count)))));
        bufp->chgWData(oldp+396,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div),65);
        bufp->chgQData(oldp+399,((- vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S)),64);
        bufp->chgQData(oldp+401,((- (((QData)((IData)(
                                                      vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[2U]))))),64);
        bufp->chgCData(oldp+403,((7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U])),3);
        bufp->chgWData(oldp+404,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand),132);
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
        bufp->chgWData(oldp+409,(__Vtemp_h791e8ef8__0),132);
        bufp->chgBit(oldp+414,(((0U != (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U])) 
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
        bufp->chgWData(oldp+415,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier),66);
        bufp->chgWData(oldp+418,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p),132);
        bufp->chgCData(oldp+423,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count),7);
        bufp->chgWData(oldp+424,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__temp),132);
        bufp->chgBit(oldp+429,((1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__temp[4U] 
                                      >> 3U))));
        bufp->chgBit(oldp+430,(((IData)(vlSelf->CoreTop__DOT__EX_io_in_ready) 
                                & (0U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)))));
        bufp->chgQData(oldp+431,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data_io_write_bus_addr),64);
        bufp->chgBit(oldp+433,((8U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__count))));
        bufp->chgCData(oldp+434,(((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r)
                                   ? 2U : 1U)),2);
        bufp->chgWData(oldp+435,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data_io_write_bus_wdata),512);
        bufp->chgQData(oldp+451,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_tag_w_data),53);
        bufp->chgQData(oldp+453,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_data),53);
        bufp->chgBit(oldp+455,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0
                               [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0]));
        bufp->chgBit(oldp+456,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1
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
        bufp->chgWData(oldp+457,(__Vtemp_hf989eec7__0),512);
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
        bufp->chgWData(oldp+473,(__Vtemp_h4453b49e__0),512);
        bufp->chgQData(oldp+489,((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                  >> 0xbU)),53);
        bufp->chgCData(oldp+491,((0x1fU & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                   >> 6U)))),5);
        bufp->chgCData(oldp+492,((0x3fU & (IData)(vlSelf->CoreTop__DOT__IF__DOT__temp))),6);
        bufp->chgBit(oldp+493,(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_in_valid_REG));
        bufp->chgBit(oldp+494,(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit));
        bufp->chgWData(oldp+495,(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data),512);
        bufp->chgBit(oldp+511,(((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT___hit_way_0_T) 
                                & ((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                    >> 0xbU) == vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_tag_w_data))));
        bufp->chgBit(oldp+512,(((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT___hit_way_1_T) 
                                & ((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                    >> 0xbU) == vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_data))));
        bufp->chgBit(oldp+513,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[0]));
        bufp->chgBit(oldp+514,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[1]));
        bufp->chgBit(oldp+515,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[2]));
        bufp->chgBit(oldp+516,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[3]));
        bufp->chgBit(oldp+517,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[4]));
        bufp->chgBit(oldp+518,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[5]));
        bufp->chgBit(oldp+519,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[6]));
        bufp->chgBit(oldp+520,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[7]));
        bufp->chgBit(oldp+521,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[8]));
        bufp->chgBit(oldp+522,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[9]));
        bufp->chgBit(oldp+523,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[10]));
        bufp->chgBit(oldp+524,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[11]));
        bufp->chgBit(oldp+525,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[12]));
        bufp->chgBit(oldp+526,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[13]));
        bufp->chgBit(oldp+527,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[14]));
        bufp->chgBit(oldp+528,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[15]));
        bufp->chgBit(oldp+529,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[16]));
        bufp->chgBit(oldp+530,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[17]));
        bufp->chgBit(oldp+531,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[18]));
        bufp->chgBit(oldp+532,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[19]));
        bufp->chgBit(oldp+533,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[20]));
        bufp->chgBit(oldp+534,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[21]));
        bufp->chgBit(oldp+535,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[22]));
        bufp->chgBit(oldp+536,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[23]));
        bufp->chgBit(oldp+537,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[24]));
        bufp->chgBit(oldp+538,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[25]));
        bufp->chgBit(oldp+539,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[26]));
        bufp->chgBit(oldp+540,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[27]));
        bufp->chgBit(oldp+541,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[28]));
        bufp->chgBit(oldp+542,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[29]));
        bufp->chgBit(oldp+543,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[30]));
        bufp->chgBit(oldp+544,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[31]));
        bufp->chgBit(oldp+545,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_lru_w_MPORT_en_pipe_0));
        bufp->chgCData(oldp+546,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_lru_w_MPORT_addr_pipe_0),5);
        bufp->chgBit(oldp+547,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru
                               [vlSelf->CoreTop__DOT__ICACHE__DOT__lru_lru_w_MPORT_addr_pipe_0]));
        bufp->chgBit(oldp+548,(((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                & ((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                   & ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit) 
                                      & ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT___hit_way_0_T) 
                                         & ((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                             >> 0xbU) 
                                            == vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_tag_w_data)))))));
        bufp->chgBit(oldp+549,(((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                & ((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                   & ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit) 
                                      & ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT___hit_way_1_T) 
                                         & ((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                             >> 0xbU) 
                                            == vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_data)))))));
        bufp->chgBit(oldp+550,(((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                & ((1U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                   & ((2U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                      & (((IData)(vlSelf->CoreTop__DOT__EX_io_in_ready) 
                                          & (8U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__count))) 
                                         & (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r)))))));
        bufp->chgBit(oldp+551,(((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                & ((1U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                   & ((2U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                      & (((IData)(vlSelf->CoreTop__DOT__EX_io_in_ready) 
                                          & (8U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__count))) 
                                         & (~ (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r))))))));
        bufp->chgCData(oldp+552,(vlSelf->CoreTop__DOT__ICACHE__DOT__state),2);
        bufp->chgWData(oldp+553,(vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg),512);
        bufp->chgBit(oldp+569,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r));
        bufp->chgCData(oldp+570,(vlSelf->CoreTop__DOT__ICACHE__DOT__count),4);
        bufp->chgQData(oldp+571,(vlSelf->CoreTop__DOT__ICACHE__DOT__hit_data),64);
        bufp->chgQData(oldp+573,(vlSelf->CoreTop__DOT__ICACHE__DOT__mem_data),64);
        bufp->chgWData(oldp+575,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[0]),512);
        bufp->chgWData(oldp+591,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[1]),512);
        bufp->chgWData(oldp+607,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[2]),512);
        bufp->chgWData(oldp+623,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[3]),512);
        bufp->chgWData(oldp+639,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[4]),512);
        bufp->chgWData(oldp+655,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[5]),512);
        bufp->chgWData(oldp+671,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[6]),512);
        bufp->chgWData(oldp+687,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[7]),512);
        bufp->chgWData(oldp+703,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[8]),512);
        bufp->chgWData(oldp+719,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[9]),512);
        bufp->chgWData(oldp+735,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[10]),512);
        bufp->chgWData(oldp+751,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[11]),512);
        bufp->chgWData(oldp+767,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[12]),512);
        bufp->chgWData(oldp+783,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[13]),512);
        bufp->chgWData(oldp+799,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[14]),512);
        bufp->chgWData(oldp+815,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[15]),512);
        bufp->chgWData(oldp+831,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[16]),512);
        bufp->chgWData(oldp+847,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[17]),512);
        bufp->chgWData(oldp+863,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[18]),512);
        bufp->chgWData(oldp+879,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[19]),512);
        bufp->chgWData(oldp+895,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[20]),512);
        bufp->chgWData(oldp+911,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[21]),512);
        bufp->chgWData(oldp+927,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[22]),512);
        bufp->chgWData(oldp+943,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[23]),512);
        bufp->chgWData(oldp+959,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[24]),512);
        bufp->chgWData(oldp+975,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[25]),512);
        bufp->chgWData(oldp+991,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[26]),512);
        bufp->chgWData(oldp+1007,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[27]),512);
        bufp->chgWData(oldp+1023,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[28]),512);
        bufp->chgWData(oldp+1039,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[29]),512);
        bufp->chgWData(oldp+1055,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[30]),512);
        bufp->chgWData(oldp+1071,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[31]),512);
        bufp->chgBit(oldp+1087,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_en_pipe_0));
        bufp->chgCData(oldp+1088,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0),5);
        bufp->chgCData(oldp+1089,((0x1fU & (IData)(
                                                   (vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data_io_write_bus_addr 
                                                    >> 6U)))),5);
        bufp->chgBit(oldp+1090,(((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r)
                                  ? 0U : 1U)));
        bufp->chgWData(oldp+1091,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[0]),512);
        bufp->chgWData(oldp+1107,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[1]),512);
        bufp->chgWData(oldp+1123,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[2]),512);
        bufp->chgWData(oldp+1139,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[3]),512);
        bufp->chgWData(oldp+1155,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[4]),512);
        bufp->chgWData(oldp+1171,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[5]),512);
        bufp->chgWData(oldp+1187,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[6]),512);
        bufp->chgWData(oldp+1203,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[7]),512);
        bufp->chgWData(oldp+1219,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[8]),512);
        bufp->chgWData(oldp+1235,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[9]),512);
        bufp->chgWData(oldp+1251,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[10]),512);
        bufp->chgWData(oldp+1267,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[11]),512);
        bufp->chgWData(oldp+1283,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[12]),512);
        bufp->chgWData(oldp+1299,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[13]),512);
        bufp->chgWData(oldp+1315,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[14]),512);
        bufp->chgWData(oldp+1331,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[15]),512);
        bufp->chgWData(oldp+1347,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[16]),512);
        bufp->chgWData(oldp+1363,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[17]),512);
        bufp->chgWData(oldp+1379,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[18]),512);
        bufp->chgWData(oldp+1395,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[19]),512);
        bufp->chgWData(oldp+1411,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[20]),512);
        bufp->chgWData(oldp+1427,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[21]),512);
        bufp->chgWData(oldp+1443,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[22]),512);
        bufp->chgWData(oldp+1459,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[23]),512);
        bufp->chgWData(oldp+1475,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[24]),512);
        bufp->chgWData(oldp+1491,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[25]),512);
        bufp->chgWData(oldp+1507,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[26]),512);
        bufp->chgWData(oldp+1523,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[27]),512);
        bufp->chgWData(oldp+1539,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[28]),512);
        bufp->chgWData(oldp+1555,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[29]),512);
        bufp->chgWData(oldp+1571,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[30]),512);
        bufp->chgWData(oldp+1587,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[31]),512);
        bufp->chgBit(oldp+1603,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_en_pipe_0));
        bufp->chgBit(oldp+1604,((1U & (((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r)
                                         ? 2U : 1U) 
                                       >> 1U))));
        bufp->chgQData(oldp+1605,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[0]),53);
        bufp->chgQData(oldp+1607,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[1]),53);
        bufp->chgQData(oldp+1609,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[2]),53);
        bufp->chgQData(oldp+1611,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[3]),53);
        bufp->chgQData(oldp+1613,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[4]),53);
        bufp->chgQData(oldp+1615,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[5]),53);
        bufp->chgQData(oldp+1617,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[6]),53);
        bufp->chgQData(oldp+1619,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[7]),53);
        bufp->chgQData(oldp+1621,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[8]),53);
        bufp->chgQData(oldp+1623,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[9]),53);
        bufp->chgQData(oldp+1625,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[10]),53);
        bufp->chgQData(oldp+1627,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[11]),53);
        bufp->chgQData(oldp+1629,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[12]),53);
        bufp->chgQData(oldp+1631,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[13]),53);
        bufp->chgQData(oldp+1633,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[14]),53);
        bufp->chgQData(oldp+1635,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[15]),53);
        bufp->chgQData(oldp+1637,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[16]),53);
        bufp->chgQData(oldp+1639,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[17]),53);
        bufp->chgQData(oldp+1641,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[18]),53);
        bufp->chgQData(oldp+1643,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[19]),53);
        bufp->chgQData(oldp+1645,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[20]),53);
        bufp->chgQData(oldp+1647,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[21]),53);
        bufp->chgQData(oldp+1649,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[22]),53);
        bufp->chgQData(oldp+1651,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[23]),53);
        bufp->chgQData(oldp+1653,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[24]),53);
        bufp->chgQData(oldp+1655,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[25]),53);
        bufp->chgQData(oldp+1657,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[26]),53);
        bufp->chgQData(oldp+1659,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[27]),53);
        bufp->chgQData(oldp+1661,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[28]),53);
        bufp->chgQData(oldp+1663,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[29]),53);
        bufp->chgQData(oldp+1665,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[30]),53);
        bufp->chgQData(oldp+1667,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[31]),53);
        bufp->chgBit(oldp+1669,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_tag_w_en_pipe_0));
        bufp->chgCData(oldp+1670,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_tag_w_addr_pipe_0),5);
        bufp->chgQData(oldp+1671,((vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data_io_write_bus_addr 
                                   >> 0xbU)),53);
        bufp->chgQData(oldp+1673,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[0]),53);
        bufp->chgQData(oldp+1675,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[1]),53);
        bufp->chgQData(oldp+1677,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[2]),53);
        bufp->chgQData(oldp+1679,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[3]),53);
        bufp->chgQData(oldp+1681,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[4]),53);
        bufp->chgQData(oldp+1683,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[5]),53);
        bufp->chgQData(oldp+1685,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[6]),53);
        bufp->chgQData(oldp+1687,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[7]),53);
        bufp->chgQData(oldp+1689,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[8]),53);
        bufp->chgQData(oldp+1691,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[9]),53);
        bufp->chgQData(oldp+1693,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[10]),53);
        bufp->chgQData(oldp+1695,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[11]),53);
        bufp->chgQData(oldp+1697,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[12]),53);
        bufp->chgQData(oldp+1699,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[13]),53);
        bufp->chgQData(oldp+1701,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[14]),53);
        bufp->chgQData(oldp+1703,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[15]),53);
        bufp->chgQData(oldp+1705,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[16]),53);
        bufp->chgQData(oldp+1707,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[17]),53);
        bufp->chgQData(oldp+1709,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[18]),53);
        bufp->chgQData(oldp+1711,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[19]),53);
        bufp->chgQData(oldp+1713,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[20]),53);
        bufp->chgQData(oldp+1715,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[21]),53);
        bufp->chgQData(oldp+1717,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[22]),53);
        bufp->chgQData(oldp+1719,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[23]),53);
        bufp->chgQData(oldp+1721,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[24]),53);
        bufp->chgQData(oldp+1723,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[25]),53);
        bufp->chgQData(oldp+1725,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[26]),53);
        bufp->chgQData(oldp+1727,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[27]),53);
        bufp->chgQData(oldp+1729,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[28]),53);
        bufp->chgQData(oldp+1731,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[29]),53);
        bufp->chgQData(oldp+1733,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[30]),53);
        bufp->chgQData(oldp+1735,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[31]),53);
        bufp->chgBit(oldp+1737,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_en_pipe_0));
        bufp->chgCData(oldp+1738,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0),5);
        bufp->chgBit(oldp+1739,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[0]));
        bufp->chgBit(oldp+1740,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[1]));
        bufp->chgBit(oldp+1741,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[2]));
        bufp->chgBit(oldp+1742,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[3]));
        bufp->chgBit(oldp+1743,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[4]));
        bufp->chgBit(oldp+1744,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[5]));
        bufp->chgBit(oldp+1745,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[6]));
        bufp->chgBit(oldp+1746,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[7]));
        bufp->chgBit(oldp+1747,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[8]));
        bufp->chgBit(oldp+1748,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[9]));
        bufp->chgBit(oldp+1749,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[10]));
        bufp->chgBit(oldp+1750,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[11]));
        bufp->chgBit(oldp+1751,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[12]));
        bufp->chgBit(oldp+1752,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[13]));
        bufp->chgBit(oldp+1753,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[14]));
        bufp->chgBit(oldp+1754,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[15]));
        bufp->chgBit(oldp+1755,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[16]));
        bufp->chgBit(oldp+1756,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[17]));
        bufp->chgBit(oldp+1757,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[18]));
        bufp->chgBit(oldp+1758,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[19]));
        bufp->chgBit(oldp+1759,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[20]));
        bufp->chgBit(oldp+1760,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[21]));
        bufp->chgBit(oldp+1761,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[22]));
        bufp->chgBit(oldp+1762,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[23]));
        bufp->chgBit(oldp+1763,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[24]));
        bufp->chgBit(oldp+1764,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[25]));
        bufp->chgBit(oldp+1765,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[26]));
        bufp->chgBit(oldp+1766,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[27]));
        bufp->chgBit(oldp+1767,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[28]));
        bufp->chgBit(oldp+1768,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[29]));
        bufp->chgBit(oldp+1769,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[30]));
        bufp->chgBit(oldp+1770,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[31]));
        bufp->chgBit(oldp+1771,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_en_pipe_0));
        bufp->chgCData(oldp+1772,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0),5);
        bufp->chgBit(oldp+1773,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[0]));
        bufp->chgBit(oldp+1774,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[1]));
        bufp->chgBit(oldp+1775,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[2]));
        bufp->chgBit(oldp+1776,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[3]));
        bufp->chgBit(oldp+1777,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[4]));
        bufp->chgBit(oldp+1778,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[5]));
        bufp->chgBit(oldp+1779,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[6]));
        bufp->chgBit(oldp+1780,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[7]));
        bufp->chgBit(oldp+1781,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[8]));
        bufp->chgBit(oldp+1782,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[9]));
        bufp->chgBit(oldp+1783,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[10]));
        bufp->chgBit(oldp+1784,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[11]));
        bufp->chgBit(oldp+1785,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[12]));
        bufp->chgBit(oldp+1786,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[13]));
        bufp->chgBit(oldp+1787,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[14]));
        bufp->chgBit(oldp+1788,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[15]));
        bufp->chgBit(oldp+1789,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[16]));
        bufp->chgBit(oldp+1790,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[17]));
        bufp->chgBit(oldp+1791,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[18]));
        bufp->chgBit(oldp+1792,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[19]));
        bufp->chgBit(oldp+1793,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[20]));
        bufp->chgBit(oldp+1794,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[21]));
        bufp->chgBit(oldp+1795,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[22]));
        bufp->chgBit(oldp+1796,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[23]));
        bufp->chgBit(oldp+1797,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[24]));
        bufp->chgBit(oldp+1798,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[25]));
        bufp->chgBit(oldp+1799,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[26]));
        bufp->chgBit(oldp+1800,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[27]));
        bufp->chgBit(oldp+1801,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[28]));
        bufp->chgBit(oldp+1802,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[29]));
        bufp->chgBit(oldp+1803,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[30]));
        bufp->chgBit(oldp+1804,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[31]));
        bufp->chgBit(oldp+1805,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_en_pipe_0));
        bufp->chgCData(oldp+1806,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_addr_pipe_0),5);
        bufp->chgBit(oldp+1807,(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_0_result));
        bufp->chgBit(oldp+1808,(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_1_result));
        bufp->chgCData(oldp+1809,(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0),4);
        bufp->chgBit(oldp+1810,(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_3));
        bufp->chgCData(oldp+1811,((((7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                     ? 2U : 0U) | (
                                                   (3U 
                                                    == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                                    ? 2U
                                                    : 0U))),2);
        bufp->chgBit(oldp+1812,((((8U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)) 
                                  | (7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))) 
                                 | (3U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)))));
        bufp->chgBit(oldp+1813,((vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                 >> 0x1fU)));
        bufp->chgBit(oldp+1814,((1U & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                       >> 0x13U))));
        bufp->chgBit(oldp+1815,((vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                 >> 0x1fU)));
        bufp->chgIData(oldp+1816,(((1U & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
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
        bufp->chgCData(oldp+1817,(vlSelf->CoreTop__DOT__IFMEM__DOT__state),2);
        bufp->chgCData(oldp+1818,(vlSelf->CoreTop__DOT__If_axi_birdge__DOT__state),2);
        bufp->chgBit(oldp+1819,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_valid));
        bufp->chgBit(oldp+1820,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_rdata_rep_valid));
        bufp->chgQData(oldp+1821,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_rdata_rep_bits_rdata),64);
        bufp->chgBit(oldp+1823,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_rep));
        bufp->chgQData(oldp+1824,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_addr_req_bits_addr),64);
        bufp->chgBit(oldp+1826,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_addr_req_bits_ce));
        bufp->chgBit(oldp+1827,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_addr_req_bits_we));
        bufp->chgQData(oldp+1828,((((QData)((IData)(
                                                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0U])))),64);
        bufp->chgBit(oldp+1830,(((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_valid) 
                                 & (0U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)))));
        bufp->chgQData(oldp+1831,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_addr),64);
        bufp->chgBit(oldp+1833,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_valid));
        bufp->chgCData(oldp+1834,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_waymask),2);
        bufp->chgWData(oldp+1835,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_wdata),512);
        bufp->chgQData(oldp+1851,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_tag_w_data),53);
        bufp->chgQData(oldp+1853,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1_tag_w_data),53);
        bufp->chgBit(oldp+1855,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0
                                [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0]));
        bufp->chgBit(oldp+1856,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1
                                [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_addr_pipe_0]));
        bufp->chgWData(oldp+1857,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data),512);
        bufp->chgWData(oldp+1873,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data),512);
        bufp->chgQData(oldp+1889,((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                   >> 0xbU)),53);
        bufp->chgCData(oldp+1891,((0x1fU & (IData)(
                                                   (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                    >> 6U)))),5);
        bufp->chgCData(oldp+1892,((0x3fU & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp))),6);
        bufp->chgBit(oldp+1893,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_in_valid_REG));
        bufp->chgBit(oldp+1894,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit));
        bufp->chgWData(oldp+1895,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data),512);
        bufp->chgBit(oldp+1911,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit_way_0));
        bufp->chgBit(oldp+1912,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit_way_1));
        bufp->chgBit(oldp+1913,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[0]));
        bufp->chgBit(oldp+1914,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[1]));
        bufp->chgBit(oldp+1915,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[2]));
        bufp->chgBit(oldp+1916,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[3]));
        bufp->chgBit(oldp+1917,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[4]));
        bufp->chgBit(oldp+1918,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[5]));
        bufp->chgBit(oldp+1919,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[6]));
        bufp->chgBit(oldp+1920,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[7]));
        bufp->chgBit(oldp+1921,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[8]));
        bufp->chgBit(oldp+1922,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[9]));
        bufp->chgBit(oldp+1923,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[10]));
        bufp->chgBit(oldp+1924,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[11]));
        bufp->chgBit(oldp+1925,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[12]));
        bufp->chgBit(oldp+1926,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[13]));
        bufp->chgBit(oldp+1927,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[14]));
        bufp->chgBit(oldp+1928,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[15]));
        bufp->chgBit(oldp+1929,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[16]));
        bufp->chgBit(oldp+1930,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[17]));
        bufp->chgBit(oldp+1931,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[18]));
        bufp->chgBit(oldp+1932,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[19]));
        bufp->chgBit(oldp+1933,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[20]));
        bufp->chgBit(oldp+1934,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[21]));
        bufp->chgBit(oldp+1935,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[22]));
        bufp->chgBit(oldp+1936,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[23]));
        bufp->chgBit(oldp+1937,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[24]));
        bufp->chgBit(oldp+1938,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[25]));
        bufp->chgBit(oldp+1939,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[26]));
        bufp->chgBit(oldp+1940,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[27]));
        bufp->chgBit(oldp+1941,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[28]));
        bufp->chgBit(oldp+1942,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[29]));
        bufp->chgBit(oldp+1943,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[30]));
        bufp->chgBit(oldp+1944,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[31]));
        bufp->chgBit(oldp+1945,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_en_pipe_0));
        bufp->chgCData(oldp+1946,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_addr_pipe_0),5);
        bufp->chgBit(oldp+1947,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_data));
        bufp->chgBit(oldp+1948,(((0U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                 & ((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                    & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit) 
                                       & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit_way_0))))));
        bufp->chgBit(oldp+1949,(((0U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                 & ((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                    & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit) 
                                       & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit_way_1))))));
        bufp->chgBit(oldp+1950,(((0U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                 & ((1U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                    & ((2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                       & ((8U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count)) 
                                          & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_r)))))));
        bufp->chgBit(oldp+1951,(((0U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                 & ((1U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                    & ((2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                       & ((8U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count)) 
                                          & (~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_r))))))));
        bufp->chgBit(oldp+1952,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[0]));
        bufp->chgBit(oldp+1953,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[1]));
        bufp->chgBit(oldp+1954,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[2]));
        bufp->chgBit(oldp+1955,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[3]));
        bufp->chgBit(oldp+1956,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[4]));
        bufp->chgBit(oldp+1957,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[5]));
        bufp->chgBit(oldp+1958,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[6]));
        bufp->chgBit(oldp+1959,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[7]));
        bufp->chgBit(oldp+1960,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[8]));
        bufp->chgBit(oldp+1961,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[9]));
        bufp->chgBit(oldp+1962,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[10]));
        bufp->chgBit(oldp+1963,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[11]));
        bufp->chgBit(oldp+1964,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[12]));
        bufp->chgBit(oldp+1965,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[13]));
        bufp->chgBit(oldp+1966,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[14]));
        bufp->chgBit(oldp+1967,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[15]));
        bufp->chgBit(oldp+1968,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[16]));
        bufp->chgBit(oldp+1969,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[17]));
        bufp->chgBit(oldp+1970,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[18]));
        bufp->chgBit(oldp+1971,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[19]));
        bufp->chgBit(oldp+1972,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[20]));
        bufp->chgBit(oldp+1973,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[21]));
        bufp->chgBit(oldp+1974,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[22]));
        bufp->chgBit(oldp+1975,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[23]));
        bufp->chgBit(oldp+1976,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[24]));
        bufp->chgBit(oldp+1977,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[25]));
        bufp->chgBit(oldp+1978,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[26]));
        bufp->chgBit(oldp+1979,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[27]));
        bufp->chgBit(oldp+1980,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[28]));
        bufp->chgBit(oldp+1981,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[29]));
        bufp->chgBit(oldp+1982,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[30]));
        bufp->chgBit(oldp+1983,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[31]));
        bufp->chgBit(oldp+1984,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0_dirt_w_en_pipe_0));
        bufp->chgBit(oldp+1985,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0
                                [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_addr_pipe_0]));
        bufp->chgBit(oldp+1986,((1U & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__waymask))));
        bufp->chgBit(oldp+1987,(((IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_we) 
                                 & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_valid_T_5))));
        bufp->chgBit(oldp+1988,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[0]));
        bufp->chgBit(oldp+1989,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[1]));
        bufp->chgBit(oldp+1990,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[2]));
        bufp->chgBit(oldp+1991,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[3]));
        bufp->chgBit(oldp+1992,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[4]));
        bufp->chgBit(oldp+1993,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[5]));
        bufp->chgBit(oldp+1994,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[6]));
        bufp->chgBit(oldp+1995,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[7]));
        bufp->chgBit(oldp+1996,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[8]));
        bufp->chgBit(oldp+1997,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[9]));
        bufp->chgBit(oldp+1998,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[10]));
        bufp->chgBit(oldp+1999,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[11]));
        bufp->chgBit(oldp+2000,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[12]));
        bufp->chgBit(oldp+2001,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[13]));
        bufp->chgBit(oldp+2002,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[14]));
        bufp->chgBit(oldp+2003,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[15]));
        bufp->chgBit(oldp+2004,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[16]));
        bufp->chgBit(oldp+2005,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[17]));
        bufp->chgBit(oldp+2006,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[18]));
        bufp->chgBit(oldp+2007,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[19]));
        bufp->chgBit(oldp+2008,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[20]));
        bufp->chgBit(oldp+2009,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[21]));
        bufp->chgBit(oldp+2010,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[22]));
        bufp->chgBit(oldp+2011,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[23]));
        bufp->chgBit(oldp+2012,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[24]));
        bufp->chgBit(oldp+2013,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[25]));
        bufp->chgBit(oldp+2014,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[26]));
        bufp->chgBit(oldp+2015,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[27]));
        bufp->chgBit(oldp+2016,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[28]));
        bufp->chgBit(oldp+2017,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[29]));
        bufp->chgBit(oldp+2018,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[30]));
        bufp->chgBit(oldp+2019,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[31]));
        bufp->chgBit(oldp+2020,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1_dirt_w_en_pipe_0));
        bufp->chgBit(oldp+2021,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1
                                [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_addr_pipe_0]));
        bufp->chgBit(oldp+2022,((1U & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__waymask) 
                                       >> 1U))));
        bufp->chgCData(oldp+2023,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state),2);
        bufp->chgWData(oldp+2024,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg),512);
        bufp->chgQData(oldp+2040,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_addr_reg),64);
        bufp->chgBit(oldp+2042,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_r));
        bufp->chgCData(oldp+2043,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count),4);
        bufp->chgBit(oldp+2044,((8U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count))));
        bufp->chgCData(oldp+2045,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count_write),4);
        bufp->chgBit(oldp+2046,((8U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count_write))));
        bufp->chgQData(oldp+2047,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_addr_reg),64);
        bufp->chgWData(oldp+2049,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg),512);
        bufp->chgQData(oldp+2065,(((0U == (7U & (IData)(
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
        bufp->chgQData(oldp+2067,(((0U == (7U & (IData)(
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
        bufp->chgQData(oldp+2069,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask),64);
        bufp->chgQData(oldp+2071,((((QData)((IData)(
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
        bufp->chgWData(oldp+2073,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo_lo),128);
        bufp->chgQData(oldp+2077,((((QData)((IData)(
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
        bufp->chgWData(oldp+2079,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo),256);
        bufp->chgQData(oldp+2087,((((QData)((IData)(
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
        bufp->chgWData(oldp+2089,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi_lo),128);
        bufp->chgQData(oldp+2093,((((QData)((IData)(
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
        bufp->chgWData(oldp+2095,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi),256);
        bufp->chgWData(oldp+2103,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend),512);
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
        bufp->chgWData(oldp+2119,(__Vtemp_hc2882e76__0),512);
        bufp->chgCData(oldp+2135,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__waymask),2);
        bufp->chgWData(oldp+2136,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[0]),512);
        bufp->chgWData(oldp+2152,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[1]),512);
        bufp->chgWData(oldp+2168,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[2]),512);
        bufp->chgWData(oldp+2184,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[3]),512);
        bufp->chgWData(oldp+2200,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[4]),512);
        bufp->chgWData(oldp+2216,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[5]),512);
        bufp->chgWData(oldp+2232,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[6]),512);
        bufp->chgWData(oldp+2248,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[7]),512);
        bufp->chgWData(oldp+2264,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[8]),512);
        bufp->chgWData(oldp+2280,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[9]),512);
        bufp->chgWData(oldp+2296,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[10]),512);
        bufp->chgWData(oldp+2312,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[11]),512);
        bufp->chgWData(oldp+2328,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[12]),512);
        bufp->chgWData(oldp+2344,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[13]),512);
        bufp->chgWData(oldp+2360,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[14]),512);
        bufp->chgWData(oldp+2376,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[15]),512);
        bufp->chgWData(oldp+2392,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[16]),512);
        bufp->chgWData(oldp+2408,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[17]),512);
        bufp->chgWData(oldp+2424,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[18]),512);
        bufp->chgWData(oldp+2440,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[19]),512);
        bufp->chgWData(oldp+2456,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[20]),512);
        bufp->chgWData(oldp+2472,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[21]),512);
        bufp->chgWData(oldp+2488,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[22]),512);
        bufp->chgWData(oldp+2504,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[23]),512);
        bufp->chgWData(oldp+2520,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[24]),512);
        bufp->chgWData(oldp+2536,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[25]),512);
        bufp->chgWData(oldp+2552,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[26]),512);
        bufp->chgWData(oldp+2568,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[27]),512);
        bufp->chgWData(oldp+2584,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[28]),512);
        bufp->chgWData(oldp+2600,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[29]),512);
        bufp->chgWData(oldp+2616,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[30]),512);
        bufp->chgWData(oldp+2632,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[31]),512);
        bufp->chgBit(oldp+2648,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_en_pipe_0));
        bufp->chgCData(oldp+2649,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0),5);
        bufp->chgCData(oldp+2650,((0x1fU & (IData)(
                                                   (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_addr 
                                                    >> 6U)))),5);
        bufp->chgBit(oldp+2651,((1U & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_waymask))));
        bufp->chgWData(oldp+2652,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[0]),512);
        bufp->chgWData(oldp+2668,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[1]),512);
        bufp->chgWData(oldp+2684,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[2]),512);
        bufp->chgWData(oldp+2700,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[3]),512);
        bufp->chgWData(oldp+2716,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[4]),512);
        bufp->chgWData(oldp+2732,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[5]),512);
        bufp->chgWData(oldp+2748,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[6]),512);
        bufp->chgWData(oldp+2764,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[7]),512);
        bufp->chgWData(oldp+2780,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[8]),512);
        bufp->chgWData(oldp+2796,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[9]),512);
        bufp->chgWData(oldp+2812,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[10]),512);
        bufp->chgWData(oldp+2828,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[11]),512);
        bufp->chgWData(oldp+2844,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[12]),512);
        bufp->chgWData(oldp+2860,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[13]),512);
        bufp->chgWData(oldp+2876,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[14]),512);
        bufp->chgWData(oldp+2892,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[15]),512);
        bufp->chgWData(oldp+2908,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[16]),512);
        bufp->chgWData(oldp+2924,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[17]),512);
        bufp->chgWData(oldp+2940,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[18]),512);
        bufp->chgWData(oldp+2956,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[19]),512);
        bufp->chgWData(oldp+2972,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[20]),512);
        bufp->chgWData(oldp+2988,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[21]),512);
        bufp->chgWData(oldp+3004,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[22]),512);
        bufp->chgWData(oldp+3020,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[23]),512);
        bufp->chgWData(oldp+3036,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[24]),512);
        bufp->chgWData(oldp+3052,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[25]),512);
        bufp->chgWData(oldp+3068,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[26]),512);
        bufp->chgWData(oldp+3084,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[27]),512);
        bufp->chgWData(oldp+3100,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[28]),512);
        bufp->chgWData(oldp+3116,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[29]),512);
        bufp->chgWData(oldp+3132,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[30]),512);
        bufp->chgWData(oldp+3148,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[31]),512);
        bufp->chgBit(oldp+3164,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_en_pipe_0));
        bufp->chgCData(oldp+3165,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0),5);
        bufp->chgBit(oldp+3166,((1U & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_waymask) 
                                       >> 1U))));
        bufp->chgQData(oldp+3167,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[0]),53);
        bufp->chgQData(oldp+3169,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[1]),53);
        bufp->chgQData(oldp+3171,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[2]),53);
        bufp->chgQData(oldp+3173,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[3]),53);
        bufp->chgQData(oldp+3175,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[4]),53);
        bufp->chgQData(oldp+3177,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[5]),53);
        bufp->chgQData(oldp+3179,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[6]),53);
        bufp->chgQData(oldp+3181,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[7]),53);
        bufp->chgQData(oldp+3183,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[8]),53);
        bufp->chgQData(oldp+3185,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[9]),53);
        bufp->chgQData(oldp+3187,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[10]),53);
        bufp->chgQData(oldp+3189,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[11]),53);
        bufp->chgQData(oldp+3191,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[12]),53);
        bufp->chgQData(oldp+3193,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[13]),53);
        bufp->chgQData(oldp+3195,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[14]),53);
        bufp->chgQData(oldp+3197,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[15]),53);
        bufp->chgQData(oldp+3199,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[16]),53);
        bufp->chgQData(oldp+3201,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[17]),53);
        bufp->chgQData(oldp+3203,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[18]),53);
        bufp->chgQData(oldp+3205,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[19]),53);
        bufp->chgQData(oldp+3207,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[20]),53);
        bufp->chgQData(oldp+3209,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[21]),53);
        bufp->chgQData(oldp+3211,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[22]),53);
        bufp->chgQData(oldp+3213,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[23]),53);
        bufp->chgQData(oldp+3215,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[24]),53);
        bufp->chgQData(oldp+3217,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[25]),53);
        bufp->chgQData(oldp+3219,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[26]),53);
        bufp->chgQData(oldp+3221,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[27]),53);
        bufp->chgQData(oldp+3223,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[28]),53);
        bufp->chgQData(oldp+3225,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[29]),53);
        bufp->chgQData(oldp+3227,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[30]),53);
        bufp->chgQData(oldp+3229,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[31]),53);
        bufp->chgBit(oldp+3231,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_tag_w_en_pipe_0));
        bufp->chgCData(oldp+3232,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_tag_w_addr_pipe_0),5);
        bufp->chgQData(oldp+3233,((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_addr 
                                   >> 0xbU)),53);
        bufp->chgQData(oldp+3235,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[0]),53);
        bufp->chgQData(oldp+3237,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[1]),53);
        bufp->chgQData(oldp+3239,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[2]),53);
        bufp->chgQData(oldp+3241,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[3]),53);
        bufp->chgQData(oldp+3243,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[4]),53);
        bufp->chgQData(oldp+3245,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[5]),53);
        bufp->chgQData(oldp+3247,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[6]),53);
        bufp->chgQData(oldp+3249,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[7]),53);
        bufp->chgQData(oldp+3251,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[8]),53);
        bufp->chgQData(oldp+3253,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[9]),53);
        bufp->chgQData(oldp+3255,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[10]),53);
        bufp->chgQData(oldp+3257,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[11]),53);
        bufp->chgQData(oldp+3259,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[12]),53);
        bufp->chgQData(oldp+3261,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[13]),53);
        bufp->chgQData(oldp+3263,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[14]),53);
        bufp->chgQData(oldp+3265,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[15]),53);
        bufp->chgQData(oldp+3267,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[16]),53);
        bufp->chgQData(oldp+3269,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[17]),53);
        bufp->chgQData(oldp+3271,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[18]),53);
        bufp->chgQData(oldp+3273,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[19]),53);
        bufp->chgQData(oldp+3275,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[20]),53);
        bufp->chgQData(oldp+3277,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[21]),53);
        bufp->chgQData(oldp+3279,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[22]),53);
        bufp->chgQData(oldp+3281,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[23]),53);
        bufp->chgQData(oldp+3283,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[24]),53);
        bufp->chgQData(oldp+3285,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[25]),53);
        bufp->chgQData(oldp+3287,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[26]),53);
        bufp->chgQData(oldp+3289,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[27]),53);
        bufp->chgQData(oldp+3291,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[28]),53);
        bufp->chgQData(oldp+3293,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[29]),53);
        bufp->chgQData(oldp+3295,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[30]),53);
        bufp->chgQData(oldp+3297,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[31]),53);
        bufp->chgBit(oldp+3299,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1_tag_w_en_pipe_0));
        bufp->chgCData(oldp+3300,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0),5);
        bufp->chgBit(oldp+3301,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[0]));
        bufp->chgBit(oldp+3302,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[1]));
        bufp->chgBit(oldp+3303,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[2]));
        bufp->chgBit(oldp+3304,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[3]));
        bufp->chgBit(oldp+3305,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[4]));
        bufp->chgBit(oldp+3306,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[5]));
        bufp->chgBit(oldp+3307,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[6]));
        bufp->chgBit(oldp+3308,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[7]));
        bufp->chgBit(oldp+3309,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[8]));
        bufp->chgBit(oldp+3310,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[9]));
        bufp->chgBit(oldp+3311,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[10]));
        bufp->chgBit(oldp+3312,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[11]));
        bufp->chgBit(oldp+3313,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[12]));
        bufp->chgBit(oldp+3314,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[13]));
        bufp->chgBit(oldp+3315,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[14]));
        bufp->chgBit(oldp+3316,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[15]));
        bufp->chgBit(oldp+3317,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[16]));
        bufp->chgBit(oldp+3318,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[17]));
        bufp->chgBit(oldp+3319,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[18]));
        bufp->chgBit(oldp+3320,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[19]));
        bufp->chgBit(oldp+3321,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[20]));
        bufp->chgBit(oldp+3322,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[21]));
        bufp->chgBit(oldp+3323,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[22]));
        bufp->chgBit(oldp+3324,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[23]));
        bufp->chgBit(oldp+3325,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[24]));
        bufp->chgBit(oldp+3326,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[25]));
        bufp->chgBit(oldp+3327,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[26]));
        bufp->chgBit(oldp+3328,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[27]));
        bufp->chgBit(oldp+3329,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[28]));
        bufp->chgBit(oldp+3330,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[29]));
        bufp->chgBit(oldp+3331,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[30]));
        bufp->chgBit(oldp+3332,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[31]));
        bufp->chgBit(oldp+3333,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_en_pipe_0));
        bufp->chgCData(oldp+3334,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0),5);
        bufp->chgBit(oldp+3335,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[0]));
        bufp->chgBit(oldp+3336,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[1]));
        bufp->chgBit(oldp+3337,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[2]));
        bufp->chgBit(oldp+3338,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[3]));
        bufp->chgBit(oldp+3339,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[4]));
        bufp->chgBit(oldp+3340,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[5]));
        bufp->chgBit(oldp+3341,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[6]));
        bufp->chgBit(oldp+3342,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[7]));
        bufp->chgBit(oldp+3343,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[8]));
        bufp->chgBit(oldp+3344,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[9]));
        bufp->chgBit(oldp+3345,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[10]));
        bufp->chgBit(oldp+3346,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[11]));
        bufp->chgBit(oldp+3347,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[12]));
        bufp->chgBit(oldp+3348,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[13]));
        bufp->chgBit(oldp+3349,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[14]));
        bufp->chgBit(oldp+3350,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[15]));
        bufp->chgBit(oldp+3351,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[16]));
        bufp->chgBit(oldp+3352,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[17]));
        bufp->chgBit(oldp+3353,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[18]));
        bufp->chgBit(oldp+3354,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[19]));
        bufp->chgBit(oldp+3355,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[20]));
        bufp->chgBit(oldp+3356,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[21]));
        bufp->chgBit(oldp+3357,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[22]));
        bufp->chgBit(oldp+3358,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[23]));
        bufp->chgBit(oldp+3359,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[24]));
        bufp->chgBit(oldp+3360,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[25]));
        bufp->chgBit(oldp+3361,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[26]));
        bufp->chgBit(oldp+3362,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[27]));
        bufp->chgBit(oldp+3363,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[28]));
        bufp->chgBit(oldp+3364,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[29]));
        bufp->chgBit(oldp+3365,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[30]));
        bufp->chgBit(oldp+3366,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[31]));
        bufp->chgBit(oldp+3367,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_en_pipe_0));
        bufp->chgCData(oldp+3368,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_addr_pipe_0),5);
        bufp->chgBit(oldp+3369,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_0_result));
        bufp->chgBit(oldp+3370,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_1_result));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+3371,((((IData)(vlSelf->CoreTop__DOT__EX__DOT__branch_flag) 
                                  & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_inst_valid)) 
                                 & (IData)(vlSelf->CoreTop__DOT__valid_1))));
        bufp->chgQData(oldp+3372,(((0x19U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                    ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1
                                    : vlSelf->CoreTop__DOT__EX__DOT___GEN_289)),64);
        bufp->chgIData(oldp+3374,(((IData)(vlSelf->CoreTop__DOT__EX_io_is_flush)
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
        bufp->chgQData(oldp+3375,(((((IData)(vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfWen) 
                                     & ((IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest) 
                                        == (0x1fU & 
                                            (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
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
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                    >> 0xfU)))) 
                                            & (0U != (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest)))
                                            ? vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfData
                                            : ((0U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                    >> 0xfU)))
                                                ? 0ULL
                                                : vlSelf->CoreTop__DOT__rf
                                               [(0x1fU 
                                                 & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                    >> 0xfU))]))))),64);
        bufp->chgQData(oldp+3377,(((((IData)(vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfWen) 
                                     & ((IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest) 
                                        == (0x1fU & 
                                            (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
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
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                    >> 0x14U)))) 
                                            & (0U != (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest)))
                                            ? vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfData
                                            : ((0U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                    >> 0x14U)))
                                                ? 0ULL
                                                : vlSelf->CoreTop__DOT__rf
                                               [(0x1fU 
                                                 & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                    >> 0x14U))]))))),64);
        bufp->chgBit(oldp+3379,((1U & (~ (((0U == (
                                                   (0x13U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                    ? 0x40U
                                                    : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_316))) 
                                           | (IData)(vlSelf->CoreTop__DOT__EX_io_is_flush)) 
                                          | (~ (IData)(vlSelf->CoreTop__DOT__valid)))))));
        bufp->chgQData(oldp+3380,(((0U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src1Type))
                                    ? vlSelf->CoreTop__DOT__mem_bypass_io_Bypass_REG1
                                    : vlSelf->CoreTop__DOT__EX__DOT___GEN_1)),64);
        bufp->chgQData(oldp+3382,(((0U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src2Type))
                                    ? vlSelf->CoreTop__DOT__mem_bypass_io_Bypass_REG2
                                    : vlSelf->CoreTop__DOT__EX__DOT___GEN_3)),64);
        bufp->chgQData(oldp+3384,(((IData)(vlSelf->CoreTop__DOT__EX__DOT__is_mul)
                                    ? vlSelf->CoreTop__DOT__EX__DOT__src1
                                    : (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__src1)))),64);
        bufp->chgQData(oldp+3386,(((IData)(vlSelf->CoreTop__DOT__EX__DOT__is_mul)
                                    ? vlSelf->CoreTop__DOT__EX__DOT__src2
                                    : (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)))),64);
        bufp->chgQData(oldp+3388,(((0x40U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                    ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1
                                    : ((0x1aU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                        ? vlSelf->CoreTop__DOT__EX__DOT__src2
                                        : ((0x68U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                            ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_7
                                            : ((0x44U 
                                                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                ? (vlSelf->CoreTop__DOT__EX__DOT__src1 
                                                   | vlSelf->CoreTop__DOT__EX__DOT__src2)
                                                : (
                                                   (0x69U 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_10
                                                    : 
                                                   ((0x71U 
                                                     == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                     ? 
                                                    (vlSelf->CoreTop__DOT__EX__DOT__src1 
                                                     & vlSelf->CoreTop__DOT__EX__DOT__src2)
                                                     : vlSelf->CoreTop__DOT__EX__DOT___GEN_145))))))),64);
        bufp->chgQData(oldp+3390,(((0x6aU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                    ? ((vlSelf->CoreTop__DOT__EX__DOT__src1 
                                        < vlSelf->CoreTop__DOT__EX__DOT__src2)
                                        ? 1ULL : 0ULL)
                                    : ((2U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                        ? (VL_LTS_IQQ(64, vlSelf->CoreTop__DOT__EX__DOT__src1, vlSelf->CoreTop__DOT__EX__DOT__src2)
                                            ? 1ULL : 0ULL)
                                        : 0ULL))),64);
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
        bufp->chgQData(oldp+3392,((((QData)((IData)(
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
        bufp->chgQData(oldp+3394,((((((0U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                                       ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_13
                                       : 0ULL) | ((1U 
                                                   == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                                                   ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_18
                                                   : 0ULL)) 
                                    | ((2U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                                        ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_18
                                        : 0ULL)) | 
                                   ((3U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                                     ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_13
                                     : 0ULL))),64);
        bufp->chgQData(oldp+3396,((((((0U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                                       ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_16
                                       : 0ULL) | ((1U 
                                                   == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                                                   ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_16
                                                   : 0ULL)) 
                                    | ((2U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                                        ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_26
                                        : 0ULL)) | 
                                   ((3U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                                     ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_26
                                     : 0ULL))),64);
        bufp->chgQData(oldp+3398,(((0x45U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
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
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+3400,(vlSelf->CoreTop__DOT__ICACHE_io_in_rdata_rep_valid));
        bufp->chgBit(oldp+3401,(vlSelf->CoreTop__DOT__EX_io_is_flush));
        bufp->chgQData(oldp+3402,(vlSelf->CoreTop__DOT__mem_bypass_io_Bypass_REG1),64);
        bufp->chgQData(oldp+3404,(vlSelf->CoreTop__DOT__mem_bypass_io_Bypass_REG2),64);
        bufp->chgQData(oldp+3406,(vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfData),64);
        bufp->chgQData(oldp+3408,(vlSelf->CoreTop__DOT__mem_rdata),64);
        bufp->chgQData(oldp+3410,(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfData),64);
        bufp->chgQData(oldp+3412,(vlSelf->CoreTop__DOT__MMIO_io_in_rdata_rep_bits_rdata),64);
        bufp->chgQData(oldp+3414,(vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src1),64);
        bufp->chgQData(oldp+3416,(vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src2),64);
        bufp->chgQData(oldp+3418,(vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_quotient),64);
        bufp->chgQData(oldp+3420,(vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_remainder),64);
        bufp->chgQData(oldp+3422,(vlSelf->CoreTop__DOT__EX__DOT__src1),64);
        bufp->chgQData(oldp+3424,(vlSelf->CoreTop__DOT__EX__DOT__src2),64);
        bufp->chgBit(oldp+3426,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+3427,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_quotient 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+3428,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_remainder 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+3429,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_10 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+3430,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_5[0U] 
                                 >> 0x1fU)));
        bufp->chgBit(oldp+3431,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_16[0U] 
                                 >> 0x1fU)));
        bufp->chgBit(oldp+3432,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_25 
                                 >> 0x1fU)));
        bufp->chgBit(oldp+3433,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_31 
                                 >> 0x1fU)));
        bufp->chgBit(oldp+3434,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__src1 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+3435,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__src2 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+3436,(vlSelf->CoreTop__DOT__EX__DOT__branch_flag));
        bufp->chgCData(oldp+3437,(vlSelf->CoreTop__DOT__IFMEM__DOT__next_state),2);
        bufp->chgBit(oldp+3438,((1U & (IData)((vlSelf->CoreTop__DOT__MMIO_io_in_rdata_rep_bits_rdata 
                                               >> 0x3fU)))));
        bufp->chgBit(oldp+3439,((1U & (IData)((vlSelf->CoreTop__DOT__MMIO_io_in_rdata_rep_bits_rdata 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+3440,((1U & ((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_27) 
                                       >> 7U))));
        bufp->chgBit(oldp+3441,((1U & ((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_44) 
                                       >> 0xfU))));
    }
    bufp->chgBit(oldp+3442,(vlSelf->clock));
    bufp->chgBit(oldp+3443,(vlSelf->reset));
    bufp->chgQData(oldp+3444,(vlSelf->io_pc),64);
    bufp->chgIData(oldp+3446,(vlSelf->io_inst),32);
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
