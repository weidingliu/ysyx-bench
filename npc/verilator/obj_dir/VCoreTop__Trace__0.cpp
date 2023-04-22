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
    VlWide<4>/*127:0*/ __Vtemp_h05cc7cb3__0;
    VlWide<4>/*127:0*/ __Vtemp_h8248920c__0;
    VlWide<4>/*127:0*/ __Vtemp_hcdf2309e__0;
    VlWide<4>/*127:0*/ __Vtemp_h400e05cb__0;
    VlWide<4>/*127:0*/ __Vtemp_h47580cf4__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->CoreTop__DOT__EX_io_branchIO_is_jump));
        bufp->chgQData(oldp+1,(vlSelf->CoreTop__DOT__IF__DOT__temp),64);
        bufp->chgBit(oldp+3,(vlSelf->CoreTop__DOT__valid));
        bufp->chgQData(oldp+4,(vlSelf->CoreTop__DOT__ID_io_in_bits_r_PC),64);
        bufp->chgIData(oldp+6,(vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst),32);
        bufp->chgCData(oldp+7,((((7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                  ? 2U : 0U) | ((3U 
                                                 == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                                 ? 2U
                                                 : 0U))),3);
        bufp->chgCData(oldp+8,((((8U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)) 
                                 | (7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))) 
                                | (3U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)))),3);
        bufp->chgCData(oldp+9,(((0x13U == (0x707fU 
                                           & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                 ? 0U : ((0x1013U == 
                                          (0xfc00707fU 
                                           & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                          ? 1U : ((0x6013U 
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
        bufp->chgBit(oldp+10,((1U & (~ ((0U == ((0x13U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                 ? 0x40U
                                                 : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_316))) 
                                        | (~ (IData)(vlSelf->CoreTop__DOT__valid)))))));
        bufp->chgCData(oldp+11,((0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+12,((0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                          >> 0x14U))),5);
        bufp->chgBit(oldp+13,(((IData)(vlSelf->CoreTop__DOT__valid) 
                               & (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_3))));
        bufp->chgCData(oldp+14,(((0x13U == (0x707fU 
                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                  ? 0x40U : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_316))),7);
        bufp->chgCData(oldp+15,((0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                          >> 7U))),5);
        bufp->chgQData(oldp+16,(((((((8U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
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
        bufp->chgBit(oldp+18,(vlSelf->CoreTop__DOT__valid_1));
        bufp->chgCData(oldp+19,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src1Type),3);
        bufp->chgCData(oldp+20,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src2Type),3);
        bufp->chgCData(oldp+21,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType),3);
        bufp->chgBit(oldp+22,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_inst_valid));
        bufp->chgCData(oldp+23,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfSrc1),5);
        bufp->chgCData(oldp+24,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfSrc2),5);
        bufp->chgBit(oldp+25,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfWen));
        bufp->chgCData(oldp+26,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype),7);
        bufp->chgCData(oldp+27,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest),5);
        bufp->chgQData(oldp+28,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_src1),64);
        bufp->chgQData(oldp+30,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_src2),64);
        bufp->chgQData(oldp+32,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm),64);
        bufp->chgQData(oldp+34,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC),64);
        bufp->chgIData(oldp+36,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_inst),32);
        bufp->chgBit(oldp+37,(((IData)(vlSelf->CoreTop__DOT__valid_1) 
                               & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_inst_valid))));
        bufp->chgBit(oldp+38,(vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfWen));
        bufp->chgBit(oldp+39,((0x42U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))));
        bufp->chgQData(oldp+40,(vlSelf->CoreTop__DOT__rf
                                [0U]),64);
        bufp->chgQData(oldp+42,(vlSelf->CoreTop__DOT__rf
                                [1U]),64);
        bufp->chgQData(oldp+44,(vlSelf->CoreTop__DOT__rf
                                [2U]),64);
        bufp->chgQData(oldp+46,(vlSelf->CoreTop__DOT__rf
                                [3U]),64);
        bufp->chgQData(oldp+48,(vlSelf->CoreTop__DOT__rf
                                [4U]),64);
        bufp->chgQData(oldp+50,(vlSelf->CoreTop__DOT__rf
                                [5U]),64);
        bufp->chgQData(oldp+52,(vlSelf->CoreTop__DOT__rf
                                [6U]),64);
        bufp->chgQData(oldp+54,(vlSelf->CoreTop__DOT__rf
                                [7U]),64);
        bufp->chgQData(oldp+56,(vlSelf->CoreTop__DOT__rf
                                [8U]),64);
        bufp->chgQData(oldp+58,(vlSelf->CoreTop__DOT__rf
                                [9U]),64);
        bufp->chgQData(oldp+60,(vlSelf->CoreTop__DOT__rf
                                [0xaU]),64);
        bufp->chgQData(oldp+62,(vlSelf->CoreTop__DOT__rf
                                [0xbU]),64);
        bufp->chgQData(oldp+64,(vlSelf->CoreTop__DOT__rf
                                [0xcU]),64);
        bufp->chgQData(oldp+66,(vlSelf->CoreTop__DOT__rf
                                [0xdU]),64);
        bufp->chgQData(oldp+68,(vlSelf->CoreTop__DOT__rf
                                [0xeU]),64);
        bufp->chgQData(oldp+70,(vlSelf->CoreTop__DOT__rf
                                [0xfU]),64);
        bufp->chgQData(oldp+72,(vlSelf->CoreTop__DOT__rf
                                [0x10U]),64);
        bufp->chgQData(oldp+74,(vlSelf->CoreTop__DOT__rf
                                [0x11U]),64);
        bufp->chgQData(oldp+76,(vlSelf->CoreTop__DOT__rf
                                [0x12U]),64);
        bufp->chgQData(oldp+78,(vlSelf->CoreTop__DOT__rf
                                [0x13U]),64);
        bufp->chgQData(oldp+80,(vlSelf->CoreTop__DOT__rf
                                [0x14U]),64);
        bufp->chgQData(oldp+82,(vlSelf->CoreTop__DOT__rf
                                [0x15U]),64);
        bufp->chgQData(oldp+84,(vlSelf->CoreTop__DOT__rf
                                [0x16U]),64);
        bufp->chgQData(oldp+86,(vlSelf->CoreTop__DOT__rf
                                [0x17U]),64);
        bufp->chgQData(oldp+88,(vlSelf->CoreTop__DOT__rf
                                [0x18U]),64);
        bufp->chgQData(oldp+90,(vlSelf->CoreTop__DOT__rf
                                [0x19U]),64);
        bufp->chgQData(oldp+92,(vlSelf->CoreTop__DOT__rf
                                [0x1aU]),64);
        bufp->chgQData(oldp+94,(vlSelf->CoreTop__DOT__rf
                                [0x1bU]),64);
        bufp->chgQData(oldp+96,(vlSelf->CoreTop__DOT__rf
                                [0x1cU]),64);
        bufp->chgQData(oldp+98,(vlSelf->CoreTop__DOT__rf
                                [0x1dU]),64);
        bufp->chgQData(oldp+100,(vlSelf->CoreTop__DOT__rf
                                 [0x1eU]),64);
        bufp->chgQData(oldp+102,(vlSelf->CoreTop__DOT__rf
                                 [0x1fU]),64);
        bufp->chgIData(oldp+104,(vlSelf->CoreTop__DOT__DIP_io_inst_REG),32);
        bufp->chgQData(oldp+105,(vlSelf->CoreTop__DOT__DIP_io_pc_REG),64);
        bufp->chgBit(oldp+107,(vlSelf->CoreTop__DOT__DIP_io_inst_valid_REG));
        bufp->chgQData(oldp+108,(vlSelf->CoreTop__DOT__DIP_io_dnpc_REG),64);
        bufp->chgBit(oldp+110,(vlSelf->CoreTop__DOT__DIP_io_is_skip_REG));
        bufp->chgQData(oldp+111,(vlSelf->CoreTop__DOT__rf[0]),64);
        bufp->chgQData(oldp+113,(vlSelf->CoreTop__DOT__rf[1]),64);
        bufp->chgQData(oldp+115,(vlSelf->CoreTop__DOT__rf[2]),64);
        bufp->chgQData(oldp+117,(vlSelf->CoreTop__DOT__rf[3]),64);
        bufp->chgQData(oldp+119,(vlSelf->CoreTop__DOT__rf[4]),64);
        bufp->chgQData(oldp+121,(vlSelf->CoreTop__DOT__rf[5]),64);
        bufp->chgQData(oldp+123,(vlSelf->CoreTop__DOT__rf[6]),64);
        bufp->chgQData(oldp+125,(vlSelf->CoreTop__DOT__rf[7]),64);
        bufp->chgQData(oldp+127,(vlSelf->CoreTop__DOT__rf[8]),64);
        bufp->chgQData(oldp+129,(vlSelf->CoreTop__DOT__rf[9]),64);
        bufp->chgQData(oldp+131,(vlSelf->CoreTop__DOT__rf[10]),64);
        bufp->chgQData(oldp+133,(vlSelf->CoreTop__DOT__rf[11]),64);
        bufp->chgQData(oldp+135,(vlSelf->CoreTop__DOT__rf[12]),64);
        bufp->chgQData(oldp+137,(vlSelf->CoreTop__DOT__rf[13]),64);
        bufp->chgQData(oldp+139,(vlSelf->CoreTop__DOT__rf[14]),64);
        bufp->chgQData(oldp+141,(vlSelf->CoreTop__DOT__rf[15]),64);
        bufp->chgQData(oldp+143,(vlSelf->CoreTop__DOT__rf[16]),64);
        bufp->chgQData(oldp+145,(vlSelf->CoreTop__DOT__rf[17]),64);
        bufp->chgQData(oldp+147,(vlSelf->CoreTop__DOT__rf[18]),64);
        bufp->chgQData(oldp+149,(vlSelf->CoreTop__DOT__rf[19]),64);
        bufp->chgQData(oldp+151,(vlSelf->CoreTop__DOT__rf[20]),64);
        bufp->chgQData(oldp+153,(vlSelf->CoreTop__DOT__rf[21]),64);
        bufp->chgQData(oldp+155,(vlSelf->CoreTop__DOT__rf[22]),64);
        bufp->chgQData(oldp+157,(vlSelf->CoreTop__DOT__rf[23]),64);
        bufp->chgQData(oldp+159,(vlSelf->CoreTop__DOT__rf[24]),64);
        bufp->chgQData(oldp+161,(vlSelf->CoreTop__DOT__rf[25]),64);
        bufp->chgQData(oldp+163,(vlSelf->CoreTop__DOT__rf[26]),64);
        bufp->chgQData(oldp+165,(vlSelf->CoreTop__DOT__rf[27]),64);
        bufp->chgQData(oldp+167,(vlSelf->CoreTop__DOT__rf[28]),64);
        bufp->chgQData(oldp+169,(vlSelf->CoreTop__DOT__rf[29]),64);
        bufp->chgQData(oldp+171,(vlSelf->CoreTop__DOT__rf[30]),64);
        bufp->chgQData(oldp+173,(vlSelf->CoreTop__DOT__rf[31]),64);
        bufp->chgQData(oldp+175,(vlSelf->CoreTop__DOT__rf
                                 [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                            >> 0xfU))]),64);
        bufp->chgQData(oldp+177,(vlSelf->CoreTop__DOT__rf
                                 [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                            >> 0x14U))]),64);
        bufp->chgQData(oldp+179,(((0U == (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest))
                                   ? 0ULL : vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfData)),64);
        bufp->chgCData(oldp+181,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest),5);
        bufp->chgBit(oldp+182,(vlSelf->CoreTop__DOT__WB_io_out_bits_ctrl_rf_rfWen));
        bufp->chgQData(oldp+183,(((0x45U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                   ? vlSelf->CoreTop__DOT__MEM__DOT___addr_temp_T_1
                                   : vlSelf->CoreTop__DOT__MEM__DOT___GEN_16)),64);
        bufp->chgBit(oldp+185,(((0x45U != (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype)) 
                                & ((0x46U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype)) 
                                   | ((0x70U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype)) 
                                      | ((0x47U != (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype)) 
                                         & ((0x11U 
                                             != (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype)) 
                                            & ((0x6fU 
                                                != (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype)) 
                                               & ((0xeU 
                                                   != (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype)) 
                                                  & ((0x74U 
                                                      == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype)) 
                                                     | (0x77U 
                                                        == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))))))))))));
        bufp->chgBit(oldp+186,(((4U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_fuType)) 
                                & (IData)(vlSelf->CoreTop__DOT__valid_2))));
        bufp->chgQData(oldp+187,(((0x46U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                   ? vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2
                                   : ((0x70U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                       ? ((0U == (3U 
                                                  & (IData)(
                                                            (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                             >> 1U))))
                                           ? (QData)((IData)(
                                                             (0xffffU 
                                                              & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2))))
                                           : ((1U == 
                                               (3U 
                                                & (IData)(
                                                          (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                           >> 1U))))
                                               ? ((QData)((IData)(
                                                                  (0xffffU 
                                                                   & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)))) 
                                                  << 0x10U)
                                               : ((2U 
                                                   == 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                               >> 1U))))
                                                   ? 
                                                  ((QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)))) 
                                                   << 0x20U)
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                                >> 1U))))
                                                    ? 
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)))) 
                                                    << 0x30U)
                                                    : 0ULL))))
                                       : ((0x74U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                           ? vlSelf->CoreTop__DOT__MEM__DOT___wdata_temp_T_21
                                           : ((0x77U 
                                               == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                               ? ((1U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                              >> 2U)))
                                                   ? 
                                                  ((QData)((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)) 
                                                   << 0x20U)
                                                   : (QData)((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)))
                                               : 0ULL))))),64);
        bufp->chgCData(oldp+189,(((0x46U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                   ? 0xffU : (IData)(vlSelf->CoreTop__DOT__MEM__DOT___GEN_32))),8);
        bufp->chgBit(oldp+190,(vlSelf->CoreTop__DOT__valid_2));
        bufp->chgCData(oldp+191,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_fuType),3);
        bufp->chgBit(oldp+192,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_inst_valid));
        bufp->chgBit(oldp+193,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_rfWen));
        bufp->chgCData(oldp+194,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype),7);
        bufp->chgQData(oldp+195,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_PC),64);
        bufp->chgIData(oldp+197,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_inst),32);
        bufp->chgQData(oldp+198,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_Dnpc),64);
        bufp->chgCData(oldp+200,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest),5);
        bufp->chgQData(oldp+201,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfData),64);
        bufp->chgQData(oldp+203,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src1),64);
        bufp->chgQData(oldp+205,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2),64);
        bufp->chgQData(oldp+207,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_Imm),64);
        bufp->chgBit(oldp+209,(((IData)(vlSelf->CoreTop__DOT__valid_2) 
                                & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_inst_valid))));
        bufp->chgBit(oldp+210,((((0xa0000048ULL == vlSelf->CoreTop__DOT__MEM__DOT__addr_temp) 
                                 | (0xa00003f8ULL == vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)) 
                                | ((0xa0000000ULL <= vlSelf->CoreTop__DOT__MEM__DOT__addr_temp) 
                                   & (0xa1200000ULL 
                                      >= vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))));
        bufp->chgBit(oldp+211,(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfWen));
        bufp->chgBit(oldp+212,(vlSelf->CoreTop__DOT__valid_3));
        bufp->chgBit(oldp+213,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_inst_valid));
        bufp->chgBit(oldp+214,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_rfWen));
        bufp->chgQData(oldp+215,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_PC),64);
        bufp->chgIData(oldp+217,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_inst),32);
        bufp->chgQData(oldp+218,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_Dnpc),64);
        bufp->chgBit(oldp+220,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_skip));
        bufp->chgQData(oldp+221,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfData),64);
        bufp->chgBit(oldp+223,(((IData)(vlSelf->CoreTop__DOT__valid_3) 
                                & (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_inst_valid))));
        bufp->chgQData(oldp+224,(((0U == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                   >> 0xfU)))
                                   ? 0ULL : vlSelf->CoreTop__DOT__rf
                                  [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                             >> 0xfU))])),64);
        bufp->chgQData(oldp+226,(((0U == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                   >> 0x14U)))
                                   ? 0ULL : vlSelf->CoreTop__DOT__rf
                                  [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                             >> 0x14U))])),64);
        bufp->chgQData(oldp+228,(vlSelf->CoreTop__DOT__DIP__DOT__rf[0]),64);
        bufp->chgQData(oldp+230,(vlSelf->CoreTop__DOT__DIP__DOT__rf[1]),64);
        bufp->chgQData(oldp+232,(vlSelf->CoreTop__DOT__DIP__DOT__rf[2]),64);
        bufp->chgQData(oldp+234,(vlSelf->CoreTop__DOT__DIP__DOT__rf[3]),64);
        bufp->chgQData(oldp+236,(vlSelf->CoreTop__DOT__DIP__DOT__rf[4]),64);
        bufp->chgQData(oldp+238,(vlSelf->CoreTop__DOT__DIP__DOT__rf[5]),64);
        bufp->chgQData(oldp+240,(vlSelf->CoreTop__DOT__DIP__DOT__rf[6]),64);
        bufp->chgQData(oldp+242,(vlSelf->CoreTop__DOT__DIP__DOT__rf[7]),64);
        bufp->chgQData(oldp+244,(vlSelf->CoreTop__DOT__DIP__DOT__rf[8]),64);
        bufp->chgQData(oldp+246,(vlSelf->CoreTop__DOT__DIP__DOT__rf[9]),64);
        bufp->chgQData(oldp+248,(vlSelf->CoreTop__DOT__DIP__DOT__rf[10]),64);
        bufp->chgQData(oldp+250,(vlSelf->CoreTop__DOT__DIP__DOT__rf[11]),64);
        bufp->chgQData(oldp+252,(vlSelf->CoreTop__DOT__DIP__DOT__rf[12]),64);
        bufp->chgQData(oldp+254,(vlSelf->CoreTop__DOT__DIP__DOT__rf[13]),64);
        bufp->chgQData(oldp+256,(vlSelf->CoreTop__DOT__DIP__DOT__rf[14]),64);
        bufp->chgQData(oldp+258,(vlSelf->CoreTop__DOT__DIP__DOT__rf[15]),64);
        bufp->chgQData(oldp+260,(vlSelf->CoreTop__DOT__DIP__DOT__rf[16]),64);
        bufp->chgQData(oldp+262,(vlSelf->CoreTop__DOT__DIP__DOT__rf[17]),64);
        bufp->chgQData(oldp+264,(vlSelf->CoreTop__DOT__DIP__DOT__rf[18]),64);
        bufp->chgQData(oldp+266,(vlSelf->CoreTop__DOT__DIP__DOT__rf[19]),64);
        bufp->chgQData(oldp+268,(vlSelf->CoreTop__DOT__DIP__DOT__rf[20]),64);
        bufp->chgQData(oldp+270,(vlSelf->CoreTop__DOT__DIP__DOT__rf[21]),64);
        bufp->chgQData(oldp+272,(vlSelf->CoreTop__DOT__DIP__DOT__rf[22]),64);
        bufp->chgQData(oldp+274,(vlSelf->CoreTop__DOT__DIP__DOT__rf[23]),64);
        bufp->chgQData(oldp+276,(vlSelf->CoreTop__DOT__DIP__DOT__rf[24]),64);
        bufp->chgQData(oldp+278,(vlSelf->CoreTop__DOT__DIP__DOT__rf[25]),64);
        bufp->chgQData(oldp+280,(vlSelf->CoreTop__DOT__DIP__DOT__rf[26]),64);
        bufp->chgQData(oldp+282,(vlSelf->CoreTop__DOT__DIP__DOT__rf[27]),64);
        bufp->chgQData(oldp+284,(vlSelf->CoreTop__DOT__DIP__DOT__rf[28]),64);
        bufp->chgQData(oldp+286,(vlSelf->CoreTop__DOT__DIP__DOT__rf[29]),64);
        bufp->chgQData(oldp+288,(vlSelf->CoreTop__DOT__DIP__DOT__rf[30]),64);
        bufp->chgQData(oldp+290,(vlSelf->CoreTop__DOT__DIP__DOT__rf[31]),64);
        bufp->chgIData(oldp+292,(vlSelf->CoreTop__DOT__DIP__DOT__IN[0]),32);
        bufp->chgIData(oldp+293,(vlSelf->CoreTop__DOT__DIP__DOT__IN[1]),32);
        bufp->chgIData(oldp+294,(vlSelf->CoreTop__DOT__DIP__DOT__IN[2]),32);
        bufp->chgIData(oldp+295,(vlSelf->CoreTop__DOT__DIP__DOT__IN[3]),32);
        bufp->chgIData(oldp+296,(vlSelf->CoreTop__DOT__DIP__DOT__IN[4]),32);
        bufp->chgIData(oldp+297,(vlSelf->CoreTop__DOT__DIP__DOT__IN[5]),32);
        bufp->chgIData(oldp+298,(vlSelf->CoreTop__DOT__DIP__DOT__IN[6]),32);
        bufp->chgQData(oldp+299,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mepc_REG_1),64);
        bufp->chgQData(oldp+301,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mcause_REG_1),64);
        bufp->chgQData(oldp+303,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mstatus_REG_1),64);
        bufp->chgQData(oldp+305,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mtvec_REG_1),64);
        bufp->chgQData(oldp+307,(vlSelf->CoreTop__DOT__EX__DOT__mepc),64);
        bufp->chgQData(oldp+309,(vlSelf->CoreTop__DOT__EX__DOT__mcause),64);
        bufp->chgQData(oldp+311,(vlSelf->CoreTop__DOT__EX__DOT__mstatus),64);
        bufp->chgQData(oldp+313,(vlSelf->CoreTop__DOT__EX__DOT__mtvec),64);
        bufp->chgQData(oldp+315,(vlSelf->CoreTop__DOT__EX__DOT__mie),64);
        bufp->chgQData(oldp+317,(vlSelf->CoreTop__DOT__EX__DOT__mip),64);
        bufp->chgQData(oldp+319,(((3U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType))
                                   ? (4ULL + vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC)
                                   : 0ULL)),64);
        bufp->chgQData(oldp+321,(((0x6bU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
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
        bufp->chgQData(oldp+323,(vlSelf->CoreTop__DOT__EX__DOT__csr_data),64);
        bufp->chgQData(oldp+325,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mtvec_REG),64);
        bufp->chgQData(oldp+327,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mcause_REG),64);
        bufp->chgQData(oldp+329,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mepc_REG),64);
        bufp->chgQData(oldp+331,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mstatus_REG),64);
        bufp->chgQData(oldp+333,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[0]),64);
        bufp->chgQData(oldp+335,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[1]),64);
        bufp->chgQData(oldp+337,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[2]),64);
        bufp->chgQData(oldp+339,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[3]),64);
        bufp->chgQData(oldp+341,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[4]),64);
        bufp->chgQData(oldp+343,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[5]),64);
        bufp->chgCData(oldp+345,(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0),4);
        bufp->chgBit(oldp+346,(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_3));
        bufp->chgCData(oldp+347,((((7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                    ? 2U : 0U) | ((3U 
                                                   == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                                   ? 2U
                                                   : 0U))),2);
        bufp->chgBit(oldp+348,((((8U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)) 
                                 | (7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))) 
                                | (3U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)))));
        bufp->chgBit(oldp+349,((vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                >> 0x1fU)));
        bufp->chgBit(oldp+350,((1U & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                      >> 0x13U))));
        bufp->chgBit(oldp+351,((vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                >> 0x1fU)));
        bufp->chgQData(oldp+352,(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp),64);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+354,(((IData)(vlSelf->CoreTop__DOT__EX__DOT__branch_flag) 
                                & (IData)(vlSelf->CoreTop__DOT__valid_1))));
        bufp->chgQData(oldp+355,(((0x19U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                   ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1
                                   : vlSelf->CoreTop__DOT__EX__DOT___GEN_289)),64);
        bufp->chgIData(oldp+357,(((1U & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                 >> 2U)))
                                   ? (IData)((vlSelf->CoreTop__DOT__IFM__DOT__rdata 
                                              >> 0x20U))
                                   : (IData)(vlSelf->CoreTop__DOT__IFM__DOT__rdata))),32);
        bufp->chgQData(oldp+358,(((((IData)(vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfWen) 
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
        bufp->chgQData(oldp+360,(((((IData)(vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfWen) 
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
        bufp->chgQData(oldp+362,(((0U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src1Type))
                                   ? vlSelf->CoreTop__DOT__mem_bypass_io_Bypass_REG1
                                   : vlSelf->CoreTop__DOT__EX__DOT___GEN_1)),64);
        bufp->chgQData(oldp+364,(((0U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src2Type))
                                   ? vlSelf->CoreTop__DOT__mem_bypass_io_Bypass_REG2
                                   : vlSelf->CoreTop__DOT__EX__DOT___GEN_3)),64);
        bufp->chgQData(oldp+366,(((0x40U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                   ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1
                                   : ((0x1aU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                       ? vlSelf->CoreTop__DOT__EX__DOT__src2
                                       : ((0x68U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                           ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_7
                                           : ((0x44U 
                                               == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                               ? (vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_58 
                                                  | vlSelf->CoreTop__DOT__EX__DOT__src2)
                                               : ((0x69U 
                                                   == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                   ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_10
                                                   : 
                                                  ((0x71U 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? 
                                                   (vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_58 
                                                    & vlSelf->CoreTop__DOT__EX__DOT__src2)
                                                    : 
                                                   ((0x72U 
                                                     == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                     ? 
                                                    (vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_58 
                                                     ^ vlSelf->CoreTop__DOT__EX__DOT__src2)
                                                     : 
                                                    ((0x6dU 
                                                      == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                      ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_7
                                                      : 
                                                     ((0x78U 
                                                       == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                       ? 
                                                      (((QData)((IData)(
                                                                        ((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_19[0U] 
                                                                          >> 0x1fU)
                                                                          ? 0xffffffffU
                                                                          : 0U))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_19[0U])))
                                                       : 
                                                      ((0x79U 
                                                        == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                        ? 
                                                       (((QData)((IData)(
                                                                         ((1U 
                                                                           & (IData)(
                                                                                (vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_28 
                                                                                >> 0x1fU)))
                                                                           ? 0xffffffffU
                                                                           : 0U))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_28)))
                                                        : vlSelf->CoreTop__DOT__EX__DOT___GEN_117))))))))))),64);
        bufp->chgQData(oldp+368,(((0x6aU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                   ? ((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_58 
                                       < vlSelf->CoreTop__DOT__EX__DOT__src2)
                                       ? 1ULL : 0ULL)
                                   : ((2U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                       ? (VL_LTS_IQQ(64, vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_58, vlSelf->CoreTop__DOT__EX__DOT__src2)
                                           ? 1ULL : 0ULL)
                                       : 0ULL))),64);
        VL_EXTEND_WQ(127,64, __Vtemp_h05cc7cb3__0, 
                     VL_SHIFTRS_QQI(64,64,5, vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_58, 
                                    (0x1fU & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2))));
        VL_EXTEND_WQ(127,64, __Vtemp_h8248920c__0, 
                     (((QData)((IData)(((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_5[0U] 
                                         >> 0x1fU) ? 0xffffffffU
                                         : 0U))) << 0x20U) 
                      | (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_5[0U]))));
        VL_EXTEND_WQ(127,64, __Vtemp_hcdf2309e__0, vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_58);
        VL_SHIFTL_WWI(127,127,6, __Vtemp_h400e05cb__0, __Vtemp_hcdf2309e__0, 
                      (0x3fU & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)));
        VL_EXTEND_WQ(127,64, __Vtemp_h47580cf4__0, 
                     ((0x75U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                       ? (vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_58 
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
                                               ? VL_SHIFTRS_QQI(64,64,6, vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_58, 
                                                                (0x3fU 
                                                                 & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)))
                                               : 0ULL))))))));
        bufp->chgQData(oldp+370,((((QData)((IData)(
                                                   ((0x6eU 
                                                     == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                     ? 
                                                    __Vtemp_h05cc7cb3__0[1U]
                                                     : 
                                                    ((0x73U 
                                                      == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                      ? 
                                                     __Vtemp_h8248920c__0[1U]
                                                      : 
                                                     ((0x41U 
                                                       == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                       ? 
                                                      __Vtemp_h400e05cb__0[1U]
                                                       : 
                                                      __Vtemp_h47580cf4__0[1U]))))) 
                                   << 0x20U) | (QData)((IData)(
                                                               ((0x6eU 
                                                                 == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                                 ? 
                                                                __Vtemp_h05cc7cb3__0[0U]
                                                                 : 
                                                                ((0x73U 
                                                                  == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                                  ? 
                                                                 __Vtemp_h8248920c__0[0U]
                                                                  : 
                                                                 ((0x41U 
                                                                   == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                                   ? 
                                                                  __Vtemp_h400e05cb__0[0U]
                                                                   : 
                                                                  __Vtemp_h47580cf4__0[0U]))))))),64);
        bufp->chgQData(oldp+372,(((0x45U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                   ? vlSelf->CoreTop__DOT__mem_rdata
                                   : ((0x47U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                       ? ((1U & (IData)(
                                                        (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                         >> 2U)))
                                           ? (((QData)((IData)(
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlSelf->CoreTop__DOT__mem_rdata 
                                                                            >> 0x3fU)))
                                                                 ? 0xffffffffU
                                                                 : 0U))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                (vlSelf->CoreTop__DOT__mem_rdata 
                                                                 >> 0x20U))))
                                           : (((QData)((IData)(
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlSelf->CoreTop__DOT__mem_rdata 
                                                                            >> 0x1fU)))
                                                                 ? 0xffffffffU
                                                                 : 0U))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->CoreTop__DOT__mem_rdata))))
                                       : ((0x11U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                           ? ((1U & (IData)(
                                                            (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                             >> 2U)))
                                               ? (QData)((IData)(
                                                                 (vlSelf->CoreTop__DOT__mem_rdata 
                                                                  >> 0x20U)))
                                               : (QData)((IData)(vlSelf->CoreTop__DOT__mem_rdata)))
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
        bufp->chgQData(oldp+374,(vlSelf->CoreTop__DOT__mem_bypass_io_Bypass_REG1),64);
        bufp->chgQData(oldp+376,(vlSelf->CoreTop__DOT__mem_bypass_io_Bypass_REG2),64);
        bufp->chgQData(oldp+378,(vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfData),64);
        bufp->chgBit(oldp+380,(vlSelf->CoreTop__DOT__EX_io_is_flush));
        bufp->chgQData(oldp+381,(vlSelf->CoreTop__DOT__mem_rdata),64);
        bufp->chgQData(oldp+383,(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfData),64);
        bufp->chgQData(oldp+385,(vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_58),64);
        bufp->chgQData(oldp+387,(vlSelf->CoreTop__DOT__EX__DOT__src2),64);
        bufp->chgBit(oldp+389,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+390,((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_19[0U] 
                                >> 0x1fU)));
        bufp->chgBit(oldp+391,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_28 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+392,((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_38 
                                >> 0x1fU)));
        bufp->chgBit(oldp+393,((vlSelf->CoreTop__DOT__EX__DOT___GEN_175 
                                >> 0x1fU)));
        bufp->chgBit(oldp+394,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_10 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+395,((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_64 
                                >> 0x1fU)));
        bufp->chgBit(oldp+396,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_5[0U] 
                                >> 0x1fU)));
        bufp->chgBit(oldp+397,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_16[0U] 
                                >> 0x1fU)));
        bufp->chgBit(oldp+398,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_25 
                                >> 0x1fU)));
        bufp->chgBit(oldp+399,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_31 
                                >> 0x1fU)));
        bufp->chgBit(oldp+400,(vlSelf->CoreTop__DOT__EX__DOT__branch_flag));
        bufp->chgQData(oldp+401,(vlSelf->CoreTop__DOT__IFM__DOT__rdata),64);
        bufp->chgBit(oldp+403,((1U & (IData)((vlSelf->CoreTop__DOT__mem_rdata 
                                              >> 0x3fU)))));
        bufp->chgBit(oldp+404,((1U & (IData)((vlSelf->CoreTop__DOT__mem_rdata 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+405,((1U & ((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_27) 
                                      >> 7U))));
        bufp->chgBit(oldp+406,((1U & ((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_44) 
                                      >> 0xfU))));
    }
    bufp->chgBit(oldp+407,(vlSelf->clock));
    bufp->chgBit(oldp+408,(vlSelf->reset));
    bufp->chgQData(oldp+409,(vlSelf->io_pc),64);
    bufp->chgIData(oldp+411,(vlSelf->io_inst),32);
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
