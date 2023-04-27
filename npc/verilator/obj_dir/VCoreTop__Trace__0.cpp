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

extern const VlWide<9>/*287:0*/ VCoreTop__ConstPool__CONST_h5285eb67_0;
extern const VlWide<9>/*287:0*/ VCoreTop__ConstPool__CONST_hd571e6a2_0;
extern const VlWide<9>/*287:0*/ VCoreTop__ConstPool__CONST_h5285fb67_0;
extern const VlWide<9>/*287:0*/ VCoreTop__ConstPool__CONST_haaadcf73_0;

void VCoreTop___024root__trace_chg_sub_0(VCoreTop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<9>/*287:0*/ __Vtemp_h97b21e08__0;
    VlWide<9>/*287:0*/ __Vtemp_h97b21e08__1;
    VlWide<9>/*287:0*/ __Vtemp_h97b21e08__2;
    VlWide<9>/*287:0*/ __Vtemp_h97b21e08__3;
    VlWide<9>/*287:0*/ __Vtemp_h97b21e08__4;
    VlWide<9>/*287:0*/ __Vtemp_h97b21e08__5;
    VlWide<9>/*287:0*/ __Vtemp_h97b21e08__6;
    VlWide<9>/*287:0*/ __Vtemp_h3dd33073__0;
    VlWide<9>/*287:0*/ __Vtemp_hd8f1c71c__0;
    VlWide<9>/*287:0*/ __Vtemp_hc3908f57__0;
    VlWide<4>/*127:0*/ __Vtemp_h2bb631d5__0;
    VlWide<4>/*127:0*/ __Vtemp_h8248920c__0;
    VlWide<4>/*127:0*/ __Vtemp_hadcca096__0;
    VlWide<4>/*127:0*/ __Vtemp_h02dc50a1__0;
    VlWide<4>/*127:0*/ __Vtemp_hd1fea39f__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->CoreTop__DOT__EX_io_branchIO_is_jump));
        bufp->chgBit(oldp+1,((1U & (~ (IData)(vlSelf->CoreTop__DOT__EX__DOT___io_out_valid_T_1)))));
        bufp->chgQData(oldp+2,(vlSelf->CoreTop__DOT__IF__DOT__temp),64);
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
        bufp->chgCData(oldp+10,((0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+11,((0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+12,(((0x13U == (0x707fU 
                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                  ? 0x40U : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_316))),7);
        bufp->chgCData(oldp+13,((0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                          >> 7U))),5);
        bufp->chgQData(oldp+14,(((((((8U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
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
        bufp->chgBit(oldp+16,(vlSelf->CoreTop__DOT__valid_1));
        bufp->chgCData(oldp+17,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src1Type),3);
        bufp->chgCData(oldp+18,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src2Type),3);
        bufp->chgCData(oldp+19,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType),3);
        bufp->chgBit(oldp+20,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_inst_valid));
        bufp->chgCData(oldp+21,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfSrc1),5);
        bufp->chgCData(oldp+22,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfSrc2),5);
        bufp->chgBit(oldp+23,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfWen));
        bufp->chgCData(oldp+24,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype),7);
        bufp->chgCData(oldp+25,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest),5);
        bufp->chgQData(oldp+26,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_src1),64);
        bufp->chgQData(oldp+28,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_src2),64);
        bufp->chgQData(oldp+30,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm),64);
        bufp->chgQData(oldp+32,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC),64);
        bufp->chgIData(oldp+34,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_inst),32);
        bufp->chgBit(oldp+35,(vlSelf->CoreTop__DOT__EX_io_out_valid));
        bufp->chgBit(oldp+36,(vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfWen));
        bufp->chgBit(oldp+37,(((0x42U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                               & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_inst_valid))));
        bufp->chgBit(oldp+38,(vlSelf->CoreTop__DOT__DIP_io_is_break_REG_1));
        bufp->chgQData(oldp+39,(vlSelf->CoreTop__DOT__rf
                                [0U]),64);
        bufp->chgQData(oldp+41,(vlSelf->CoreTop__DOT__rf
                                [1U]),64);
        bufp->chgQData(oldp+43,(vlSelf->CoreTop__DOT__rf
                                [2U]),64);
        bufp->chgQData(oldp+45,(vlSelf->CoreTop__DOT__rf
                                [3U]),64);
        bufp->chgQData(oldp+47,(vlSelf->CoreTop__DOT__rf
                                [4U]),64);
        bufp->chgQData(oldp+49,(vlSelf->CoreTop__DOT__rf
                                [5U]),64);
        bufp->chgQData(oldp+51,(vlSelf->CoreTop__DOT__rf
                                [6U]),64);
        bufp->chgQData(oldp+53,(vlSelf->CoreTop__DOT__rf
                                [7U]),64);
        bufp->chgQData(oldp+55,(vlSelf->CoreTop__DOT__rf
                                [8U]),64);
        bufp->chgQData(oldp+57,(vlSelf->CoreTop__DOT__rf
                                [9U]),64);
        bufp->chgQData(oldp+59,(vlSelf->CoreTop__DOT__rf
                                [0xaU]),64);
        bufp->chgQData(oldp+61,(vlSelf->CoreTop__DOT__rf
                                [0xbU]),64);
        bufp->chgQData(oldp+63,(vlSelf->CoreTop__DOT__rf
                                [0xcU]),64);
        bufp->chgQData(oldp+65,(vlSelf->CoreTop__DOT__rf
                                [0xdU]),64);
        bufp->chgQData(oldp+67,(vlSelf->CoreTop__DOT__rf
                                [0xeU]),64);
        bufp->chgQData(oldp+69,(vlSelf->CoreTop__DOT__rf
                                [0xfU]),64);
        bufp->chgQData(oldp+71,(vlSelf->CoreTop__DOT__rf
                                [0x10U]),64);
        bufp->chgQData(oldp+73,(vlSelf->CoreTop__DOT__rf
                                [0x11U]),64);
        bufp->chgQData(oldp+75,(vlSelf->CoreTop__DOT__rf
                                [0x12U]),64);
        bufp->chgQData(oldp+77,(vlSelf->CoreTop__DOT__rf
                                [0x13U]),64);
        bufp->chgQData(oldp+79,(vlSelf->CoreTop__DOT__rf
                                [0x14U]),64);
        bufp->chgQData(oldp+81,(vlSelf->CoreTop__DOT__rf
                                [0x15U]),64);
        bufp->chgQData(oldp+83,(vlSelf->CoreTop__DOT__rf
                                [0x16U]),64);
        bufp->chgQData(oldp+85,(vlSelf->CoreTop__DOT__rf
                                [0x17U]),64);
        bufp->chgQData(oldp+87,(vlSelf->CoreTop__DOT__rf
                                [0x18U]),64);
        bufp->chgQData(oldp+89,(vlSelf->CoreTop__DOT__rf
                                [0x19U]),64);
        bufp->chgQData(oldp+91,(vlSelf->CoreTop__DOT__rf
                                [0x1aU]),64);
        bufp->chgQData(oldp+93,(vlSelf->CoreTop__DOT__rf
                                [0x1bU]),64);
        bufp->chgQData(oldp+95,(vlSelf->CoreTop__DOT__rf
                                [0x1cU]),64);
        bufp->chgQData(oldp+97,(vlSelf->CoreTop__DOT__rf
                                [0x1dU]),64);
        bufp->chgQData(oldp+99,(vlSelf->CoreTop__DOT__rf
                                [0x1eU]),64);
        bufp->chgQData(oldp+101,(vlSelf->CoreTop__DOT__rf
                                 [0x1fU]),64);
        bufp->chgIData(oldp+103,(vlSelf->CoreTop__DOT__DIP_io_inst_REG),32);
        bufp->chgQData(oldp+104,(vlSelf->CoreTop__DOT__DIP_io_pc_REG),64);
        bufp->chgBit(oldp+106,(vlSelf->CoreTop__DOT__DIP_io_inst_valid_REG));
        bufp->chgQData(oldp+107,(vlSelf->CoreTop__DOT__DIP_io_dnpc_REG),64);
        bufp->chgBit(oldp+109,(vlSelf->CoreTop__DOT__DIP_io_is_skip_REG));
        bufp->chgQData(oldp+110,(vlSelf->CoreTop__DOT__rf[0]),64);
        bufp->chgQData(oldp+112,(vlSelf->CoreTop__DOT__rf[1]),64);
        bufp->chgQData(oldp+114,(vlSelf->CoreTop__DOT__rf[2]),64);
        bufp->chgQData(oldp+116,(vlSelf->CoreTop__DOT__rf[3]),64);
        bufp->chgQData(oldp+118,(vlSelf->CoreTop__DOT__rf[4]),64);
        bufp->chgQData(oldp+120,(vlSelf->CoreTop__DOT__rf[5]),64);
        bufp->chgQData(oldp+122,(vlSelf->CoreTop__DOT__rf[6]),64);
        bufp->chgQData(oldp+124,(vlSelf->CoreTop__DOT__rf[7]),64);
        bufp->chgQData(oldp+126,(vlSelf->CoreTop__DOT__rf[8]),64);
        bufp->chgQData(oldp+128,(vlSelf->CoreTop__DOT__rf[9]),64);
        bufp->chgQData(oldp+130,(vlSelf->CoreTop__DOT__rf[10]),64);
        bufp->chgQData(oldp+132,(vlSelf->CoreTop__DOT__rf[11]),64);
        bufp->chgQData(oldp+134,(vlSelf->CoreTop__DOT__rf[12]),64);
        bufp->chgQData(oldp+136,(vlSelf->CoreTop__DOT__rf[13]),64);
        bufp->chgQData(oldp+138,(vlSelf->CoreTop__DOT__rf[14]),64);
        bufp->chgQData(oldp+140,(vlSelf->CoreTop__DOT__rf[15]),64);
        bufp->chgQData(oldp+142,(vlSelf->CoreTop__DOT__rf[16]),64);
        bufp->chgQData(oldp+144,(vlSelf->CoreTop__DOT__rf[17]),64);
        bufp->chgQData(oldp+146,(vlSelf->CoreTop__DOT__rf[18]),64);
        bufp->chgQData(oldp+148,(vlSelf->CoreTop__DOT__rf[19]),64);
        bufp->chgQData(oldp+150,(vlSelf->CoreTop__DOT__rf[20]),64);
        bufp->chgQData(oldp+152,(vlSelf->CoreTop__DOT__rf[21]),64);
        bufp->chgQData(oldp+154,(vlSelf->CoreTop__DOT__rf[22]),64);
        bufp->chgQData(oldp+156,(vlSelf->CoreTop__DOT__rf[23]),64);
        bufp->chgQData(oldp+158,(vlSelf->CoreTop__DOT__rf[24]),64);
        bufp->chgQData(oldp+160,(vlSelf->CoreTop__DOT__rf[25]),64);
        bufp->chgQData(oldp+162,(vlSelf->CoreTop__DOT__rf[26]),64);
        bufp->chgQData(oldp+164,(vlSelf->CoreTop__DOT__rf[27]),64);
        bufp->chgQData(oldp+166,(vlSelf->CoreTop__DOT__rf[28]),64);
        bufp->chgQData(oldp+168,(vlSelf->CoreTop__DOT__rf[29]),64);
        bufp->chgQData(oldp+170,(vlSelf->CoreTop__DOT__rf[30]),64);
        bufp->chgQData(oldp+172,(vlSelf->CoreTop__DOT__rf[31]),64);
        bufp->chgQData(oldp+174,(vlSelf->CoreTop__DOT__rf
                                 [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                            >> 0xfU))]),64);
        bufp->chgQData(oldp+176,(vlSelf->CoreTop__DOT__rf
                                 [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                            >> 0x14U))]),64);
        bufp->chgQData(oldp+178,(((0U == (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest))
                                   ? 0ULL : vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfData)),64);
        bufp->chgCData(oldp+180,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest),5);
        bufp->chgBit(oldp+181,(vlSelf->CoreTop__DOT__WB_io_out_bits_ctrl_rf_rfWen));
        bufp->chgQData(oldp+182,(((0x45U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                   ? vlSelf->CoreTop__DOT__MEM__DOT___addr_temp_T_1
                                   : vlSelf->CoreTop__DOT__MEM__DOT___GEN_16)),64);
        bufp->chgBit(oldp+184,(((0x45U != (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype)) 
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
        bufp->chgBit(oldp+185,((((4U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_fuType)) 
                                 & (IData)(vlSelf->CoreTop__DOT__valid_2)) 
                                & (IData)(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_signal_inst_valid))));
        bufp->chgQData(oldp+186,(((0x46U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
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
        bufp->chgCData(oldp+188,(((0x46U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                   ? 0xffU : (IData)(vlSelf->CoreTop__DOT__MEM__DOT___GEN_32))),8);
        bufp->chgBit(oldp+189,(vlSelf->CoreTop__DOT__valid_2));
        bufp->chgCData(oldp+190,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_fuType),3);
        bufp->chgBit(oldp+191,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_inst_valid));
        bufp->chgBit(oldp+192,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_rfWen));
        bufp->chgCData(oldp+193,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype),7);
        bufp->chgQData(oldp+194,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_PC),64);
        bufp->chgIData(oldp+196,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_inst),32);
        bufp->chgQData(oldp+197,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_Dnpc),64);
        bufp->chgCData(oldp+199,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest),5);
        bufp->chgQData(oldp+200,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfData),64);
        bufp->chgQData(oldp+202,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src1),64);
        bufp->chgQData(oldp+204,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2),64);
        bufp->chgQData(oldp+206,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_Imm),64);
        bufp->chgBit(oldp+208,(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_signal_inst_valid));
        bufp->chgBit(oldp+209,((((0xa0000048ULL == vlSelf->CoreTop__DOT__MEM__DOT__addr_temp) 
                                 | (0xa00003f8ULL == vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)) 
                                | ((0xa0000000ULL <= vlSelf->CoreTop__DOT__MEM__DOT__addr_temp) 
                                   & (0xa1200000ULL 
                                      >= vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))));
        bufp->chgBit(oldp+210,(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfWen));
        bufp->chgBit(oldp+211,(vlSelf->CoreTop__DOT__valid_3));
        bufp->chgBit(oldp+212,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_inst_valid));
        bufp->chgBit(oldp+213,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_rfWen));
        bufp->chgQData(oldp+214,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_PC),64);
        bufp->chgIData(oldp+216,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_inst),32);
        bufp->chgQData(oldp+217,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_Dnpc),64);
        bufp->chgBit(oldp+219,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_skip));
        bufp->chgQData(oldp+220,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfData),64);
        bufp->chgBit(oldp+222,(vlSelf->CoreTop__DOT__WB_io_out_bits_ctrl_signal_inst_valid));
        bufp->chgQData(oldp+223,(((0U == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                   >> 0xfU)))
                                   ? 0ULL : vlSelf->CoreTop__DOT__rf
                                  [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                             >> 0xfU))])),64);
        bufp->chgQData(oldp+225,(((0U == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                   >> 0x14U)))
                                   ? 0ULL : vlSelf->CoreTop__DOT__rf
                                  [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                             >> 0x14U))])),64);
        bufp->chgBit(oldp+227,(vlSelf->CoreTop__DOT__DIP_io_is_break_REG));
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
        bufp->chgBit(oldp+307,(vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_valid));
        bufp->chgBit(oldp+308,((0x44U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count))));
        bufp->chgQData(oldp+309,((((QData)((IData)(
                                                   vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[0U])))),64);
        bufp->chgBit(oldp+311,(vlSelf->CoreTop__DOT__EX__DOT__is_mul));
        bufp->chgQData(oldp+312,(vlSelf->CoreTop__DOT__EX__DOT__mepc),64);
        bufp->chgQData(oldp+314,(vlSelf->CoreTop__DOT__EX__DOT__mcause),64);
        bufp->chgQData(oldp+316,(vlSelf->CoreTop__DOT__EX__DOT__mstatus),64);
        bufp->chgQData(oldp+318,(vlSelf->CoreTop__DOT__EX__DOT__mtvec),64);
        bufp->chgQData(oldp+320,(vlSelf->CoreTop__DOT__EX__DOT__mie),64);
        bufp->chgQData(oldp+322,(vlSelf->CoreTop__DOT__EX__DOT__mip),64);
        bufp->chgBit(oldp+324,((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[0U] 
                                >> 0x1fU)));
        bufp->chgQData(oldp+325,(((3U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType))
                                   ? (4ULL + vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC)
                                   : 0ULL)),64);
        bufp->chgQData(oldp+327,(((0x6bU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
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
        bufp->chgQData(oldp+329,(vlSelf->CoreTop__DOT__EX__DOT__csr_data),64);
        bufp->chgQData(oldp+331,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mtvec_REG),64);
        bufp->chgQData(oldp+333,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mcause_REG),64);
        bufp->chgQData(oldp+335,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mepc_REG),64);
        bufp->chgQData(oldp+337,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mstatus_REG),64);
        bufp->chgQData(oldp+339,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[0]),64);
        bufp->chgQData(oldp+341,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[1]),64);
        bufp->chgQData(oldp+343,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[2]),64);
        bufp->chgQData(oldp+345,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[3]),64);
        bufp->chgQData(oldp+347,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[4]),64);
        bufp->chgQData(oldp+349,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[5]),64);
        bufp->chgCData(oldp+351,((7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U])),3);
        VL_EXTEND_WW(268,132, __Vtemp_h97b21e08__0, vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand);
        bufp->chgWData(oldp+352,(__Vtemp_h97b21e08__0),268);
        VL_EXTEND_WW(269,132, __Vtemp_h97b21e08__1, vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand);
        VL_EXTEND_WW(269,132, __Vtemp_h97b21e08__2, vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand);
        VL_EXTEND_WW(268,132, __Vtemp_h97b21e08__3, vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand);
        VL_EXTEND_WW(268,132, __Vtemp_h97b21e08__4, vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand);
        VL_EXTEND_WW(268,132, __Vtemp_h97b21e08__5, vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand);
        VL_EXTEND_WW(268,132, __Vtemp_h97b21e08__6, vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand);
        __Vtemp_h3dd33073__0[0U] = (VCoreTop__ConstPool__CONST_h5285eb67_0[0U] 
                                    & ((5U == (7U & 
                                               vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                        ? (~ __Vtemp_h97b21e08__5[0U])
                                        : ((6U == (7U 
                                                   & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                            ? (~ __Vtemp_h97b21e08__6[0U])
                                            : VCoreTop__ConstPool__CONST_hd571e6a2_0[0U])));
        __Vtemp_h3dd33073__0[1U] = (VCoreTop__ConstPool__CONST_h5285eb67_0[1U] 
                                    & ((5U == (7U & 
                                               vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                        ? (~ __Vtemp_h97b21e08__5[1U])
                                        : ((6U == (7U 
                                                   & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                            ? (~ __Vtemp_h97b21e08__6[1U])
                                            : VCoreTop__ConstPool__CONST_hd571e6a2_0[1U])));
        __Vtemp_h3dd33073__0[2U] = (VCoreTop__ConstPool__CONST_h5285eb67_0[2U] 
                                    & ((5U == (7U & 
                                               vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                        ? (~ __Vtemp_h97b21e08__5[2U])
                                        : ((6U == (7U 
                                                   & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                            ? (~ __Vtemp_h97b21e08__6[2U])
                                            : VCoreTop__ConstPool__CONST_hd571e6a2_0[2U])));
        __Vtemp_h3dd33073__0[3U] = (VCoreTop__ConstPool__CONST_h5285eb67_0[3U] 
                                    & ((5U == (7U & 
                                               vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                        ? (~ __Vtemp_h97b21e08__5[3U])
                                        : ((6U == (7U 
                                                   & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                            ? (~ __Vtemp_h97b21e08__6[3U])
                                            : VCoreTop__ConstPool__CONST_hd571e6a2_0[3U])));
        __Vtemp_h3dd33073__0[4U] = (VCoreTop__ConstPool__CONST_h5285eb67_0[4U] 
                                    & ((5U == (7U & 
                                               vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                        ? (~ __Vtemp_h97b21e08__5[4U])
                                        : ((6U == (7U 
                                                   & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                            ? (~ __Vtemp_h97b21e08__6[4U])
                                            : VCoreTop__ConstPool__CONST_hd571e6a2_0[4U])));
        __Vtemp_h3dd33073__0[5U] = (VCoreTop__ConstPool__CONST_h5285eb67_0[5U] 
                                    & ((5U == (7U & 
                                               vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                        ? (~ __Vtemp_h97b21e08__5[5U])
                                        : ((6U == (7U 
                                                   & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                            ? (~ __Vtemp_h97b21e08__6[5U])
                                            : VCoreTop__ConstPool__CONST_hd571e6a2_0[5U])));
        __Vtemp_h3dd33073__0[6U] = (VCoreTop__ConstPool__CONST_h5285eb67_0[6U] 
                                    & ((5U == (7U & 
                                               vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                        ? (~ __Vtemp_h97b21e08__5[6U])
                                        : ((6U == (7U 
                                                   & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                            ? (~ __Vtemp_h97b21e08__6[6U])
                                            : VCoreTop__ConstPool__CONST_hd571e6a2_0[6U])));
        __Vtemp_h3dd33073__0[7U] = (VCoreTop__ConstPool__CONST_h5285eb67_0[7U] 
                                    & ((5U == (7U & 
                                               vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                        ? (~ __Vtemp_h97b21e08__5[7U])
                                        : ((6U == (7U 
                                                   & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                            ? (~ __Vtemp_h97b21e08__6[7U])
                                            : VCoreTop__ConstPool__CONST_hd571e6a2_0[7U])));
        __Vtemp_h3dd33073__0[8U] = (VCoreTop__ConstPool__CONST_h5285eb67_0[8U] 
                                    & ((5U == (7U & 
                                               vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                        ? (~ __Vtemp_h97b21e08__5[8U])
                                        : ((6U == (7U 
                                                   & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                            ? (~ __Vtemp_h97b21e08__6[8U])
                                            : VCoreTop__ConstPool__CONST_hd571e6a2_0[8U])));
        VL_EXTEND_WW(269,268, __Vtemp_hd8f1c71c__0, __Vtemp_h3dd33073__0);
        __Vtemp_hc3908f57__0[0U] = (VCoreTop__ConstPool__CONST_h5285eb67_0[0U] 
                                    & (VCoreTop__ConstPool__CONST_h5285fb67_0[0U] 
                                       & ((0U == (7U 
                                                  & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                           ? VCoreTop__ConstPool__CONST_haaadcf73_0[0U]
                                           : ((1U == 
                                               (7U 
                                                & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                               ? __Vtemp_h97b21e08__1[0U]
                                               : ((2U 
                                                   == 
                                                   (7U 
                                                    & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                                   ? 
                                                  __Vtemp_h97b21e08__2[0U]
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                                    ? 
                                                   (__Vtemp_h97b21e08__3[0U] 
                                                    << 1U)
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (7U 
                                                      & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                                     ? 
                                                    (~ 
                                                     (__Vtemp_h97b21e08__4[0U] 
                                                      << 1U))
                                                     : 
                                                    __Vtemp_hd8f1c71c__0[0U])))))));
        __Vtemp_hc3908f57__0[1U] = (VCoreTop__ConstPool__CONST_h5285eb67_0[1U] 
                                    & (VCoreTop__ConstPool__CONST_h5285fb67_0[1U] 
                                       & ((0U == (7U 
                                                  & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                           ? VCoreTop__ConstPool__CONST_haaadcf73_0[1U]
                                           : ((1U == 
                                               (7U 
                                                & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                               ? __Vtemp_h97b21e08__1[1U]
                                               : ((2U 
                                                   == 
                                                   (7U 
                                                    & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                                   ? 
                                                  __Vtemp_h97b21e08__2[1U]
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                                    ? 
                                                   ((__Vtemp_h97b21e08__3[0U] 
                                                     >> 0x1fU) 
                                                    | (__Vtemp_h97b21e08__3[1U] 
                                                       << 1U))
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (7U 
                                                      & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                                     ? 
                                                    (~ 
                                                     ((__Vtemp_h97b21e08__4[0U] 
                                                       >> 0x1fU) 
                                                      | (__Vtemp_h97b21e08__4[1U] 
                                                         << 1U)))
                                                     : 
                                                    __Vtemp_hd8f1c71c__0[1U])))))));
        __Vtemp_hc3908f57__0[2U] = (VCoreTop__ConstPool__CONST_h5285eb67_0[2U] 
                                    & (VCoreTop__ConstPool__CONST_h5285fb67_0[2U] 
                                       & ((0U == (7U 
                                                  & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                           ? VCoreTop__ConstPool__CONST_haaadcf73_0[2U]
                                           : ((1U == 
                                               (7U 
                                                & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                               ? __Vtemp_h97b21e08__1[2U]
                                               : ((2U 
                                                   == 
                                                   (7U 
                                                    & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                                   ? 
                                                  __Vtemp_h97b21e08__2[2U]
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                                    ? 
                                                   ((__Vtemp_h97b21e08__3[1U] 
                                                     >> 0x1fU) 
                                                    | (__Vtemp_h97b21e08__3[2U] 
                                                       << 1U))
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (7U 
                                                      & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                                     ? 
                                                    (~ 
                                                     ((__Vtemp_h97b21e08__4[1U] 
                                                       >> 0x1fU) 
                                                      | (__Vtemp_h97b21e08__4[2U] 
                                                         << 1U)))
                                                     : 
                                                    __Vtemp_hd8f1c71c__0[2U])))))));
        __Vtemp_hc3908f57__0[3U] = (VCoreTop__ConstPool__CONST_h5285eb67_0[3U] 
                                    & (VCoreTop__ConstPool__CONST_h5285fb67_0[3U] 
                                       & ((0U == (7U 
                                                  & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                           ? VCoreTop__ConstPool__CONST_haaadcf73_0[3U]
                                           : ((1U == 
                                               (7U 
                                                & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                               ? __Vtemp_h97b21e08__1[3U]
                                               : ((2U 
                                                   == 
                                                   (7U 
                                                    & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                                   ? 
                                                  __Vtemp_h97b21e08__2[3U]
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                                    ? 
                                                   ((__Vtemp_h97b21e08__3[2U] 
                                                     >> 0x1fU) 
                                                    | (__Vtemp_h97b21e08__3[3U] 
                                                       << 1U))
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (7U 
                                                      & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                                     ? 
                                                    (~ 
                                                     ((__Vtemp_h97b21e08__4[2U] 
                                                       >> 0x1fU) 
                                                      | (__Vtemp_h97b21e08__4[3U] 
                                                         << 1U)))
                                                     : 
                                                    __Vtemp_hd8f1c71c__0[3U])))))));
        __Vtemp_hc3908f57__0[4U] = (VCoreTop__ConstPool__CONST_h5285eb67_0[4U] 
                                    & (VCoreTop__ConstPool__CONST_h5285fb67_0[4U] 
                                       & ((0U == (7U 
                                                  & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                           ? VCoreTop__ConstPool__CONST_haaadcf73_0[4U]
                                           : ((1U == 
                                               (7U 
                                                & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                               ? __Vtemp_h97b21e08__1[4U]
                                               : ((2U 
                                                   == 
                                                   (7U 
                                                    & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                                   ? 
                                                  __Vtemp_h97b21e08__2[4U]
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                                    ? 
                                                   ((__Vtemp_h97b21e08__3[3U] 
                                                     >> 0x1fU) 
                                                    | (__Vtemp_h97b21e08__3[4U] 
                                                       << 1U))
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (7U 
                                                      & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                                     ? 
                                                    (~ 
                                                     ((__Vtemp_h97b21e08__4[3U] 
                                                       >> 0x1fU) 
                                                      | (__Vtemp_h97b21e08__4[4U] 
                                                         << 1U)))
                                                     : 
                                                    __Vtemp_hd8f1c71c__0[4U])))))));
        __Vtemp_hc3908f57__0[5U] = (VCoreTop__ConstPool__CONST_h5285eb67_0[5U] 
                                    & (VCoreTop__ConstPool__CONST_h5285fb67_0[5U] 
                                       & ((0U == (7U 
                                                  & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                           ? VCoreTop__ConstPool__CONST_haaadcf73_0[5U]
                                           : ((1U == 
                                               (7U 
                                                & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                               ? __Vtemp_h97b21e08__1[5U]
                                               : ((2U 
                                                   == 
                                                   (7U 
                                                    & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                                   ? 
                                                  __Vtemp_h97b21e08__2[5U]
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                                    ? 
                                                   ((__Vtemp_h97b21e08__3[4U] 
                                                     >> 0x1fU) 
                                                    | (__Vtemp_h97b21e08__3[5U] 
                                                       << 1U))
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (7U 
                                                      & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                                     ? 
                                                    (~ 
                                                     ((__Vtemp_h97b21e08__4[4U] 
                                                       >> 0x1fU) 
                                                      | (__Vtemp_h97b21e08__4[5U] 
                                                         << 1U)))
                                                     : 
                                                    __Vtemp_hd8f1c71c__0[5U])))))));
        __Vtemp_hc3908f57__0[6U] = (VCoreTop__ConstPool__CONST_h5285eb67_0[6U] 
                                    & (VCoreTop__ConstPool__CONST_h5285fb67_0[6U] 
                                       & ((0U == (7U 
                                                  & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                           ? VCoreTop__ConstPool__CONST_haaadcf73_0[6U]
                                           : ((1U == 
                                               (7U 
                                                & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                               ? __Vtemp_h97b21e08__1[6U]
                                               : ((2U 
                                                   == 
                                                   (7U 
                                                    & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                                   ? 
                                                  __Vtemp_h97b21e08__2[6U]
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                                    ? 
                                                   ((__Vtemp_h97b21e08__3[5U] 
                                                     >> 0x1fU) 
                                                    | (__Vtemp_h97b21e08__3[6U] 
                                                       << 1U))
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (7U 
                                                      & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                                     ? 
                                                    (~ 
                                                     ((__Vtemp_h97b21e08__4[5U] 
                                                       >> 0x1fU) 
                                                      | (__Vtemp_h97b21e08__4[6U] 
                                                         << 1U)))
                                                     : 
                                                    __Vtemp_hd8f1c71c__0[6U])))))));
        __Vtemp_hc3908f57__0[7U] = (VCoreTop__ConstPool__CONST_h5285eb67_0[7U] 
                                    & (VCoreTop__ConstPool__CONST_h5285fb67_0[7U] 
                                       & ((0U == (7U 
                                                  & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                           ? VCoreTop__ConstPool__CONST_haaadcf73_0[7U]
                                           : ((1U == 
                                               (7U 
                                                & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                               ? __Vtemp_h97b21e08__1[7U]
                                               : ((2U 
                                                   == 
                                                   (7U 
                                                    & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                                   ? 
                                                  __Vtemp_h97b21e08__2[7U]
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                                    ? 
                                                   ((__Vtemp_h97b21e08__3[6U] 
                                                     >> 0x1fU) 
                                                    | (__Vtemp_h97b21e08__3[7U] 
                                                       << 1U))
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (7U 
                                                      & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                                     ? 
                                                    (~ 
                                                     ((__Vtemp_h97b21e08__4[6U] 
                                                       >> 0x1fU) 
                                                      | (__Vtemp_h97b21e08__4[7U] 
                                                         << 1U)))
                                                     : 
                                                    __Vtemp_hd8f1c71c__0[7U])))))));
        __Vtemp_hc3908f57__0[8U] = (VCoreTop__ConstPool__CONST_h5285eb67_0[8U] 
                                    & (VCoreTop__ConstPool__CONST_h5285fb67_0[8U] 
                                       & ((0U == (7U 
                                                  & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                           ? VCoreTop__ConstPool__CONST_haaadcf73_0[8U]
                                           : ((1U == 
                                               (7U 
                                                & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                               ? __Vtemp_h97b21e08__1[8U]
                                               : ((2U 
                                                   == 
                                                   (7U 
                                                    & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                                   ? 
                                                  __Vtemp_h97b21e08__2[8U]
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                                    ? 
                                                   ((__Vtemp_h97b21e08__3[7U] 
                                                     >> 0x1fU) 
                                                    | (__Vtemp_h97b21e08__3[8U] 
                                                       << 1U))
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (7U 
                                                      & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                                     ? 
                                                    (~ 
                                                     ((__Vtemp_h97b21e08__4[7U] 
                                                       >> 0x1fU) 
                                                      | (__Vtemp_h97b21e08__4[8U] 
                                                         << 1U)))
                                                     : 
                                                    __Vtemp_hd8f1c71c__0[8U])))))));
        bufp->chgWData(oldp+361,(__Vtemp_hc3908f57__0),268);
        bufp->chgBit(oldp+370,(((0U != (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U])) 
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
        bufp->chgWData(oldp+371,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier),66);
        bufp->chgWData(oldp+374,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand),132);
        bufp->chgWData(oldp+379,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p),132);
        bufp->chgCData(oldp+384,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count),7);
        bufp->chgCData(oldp+385,(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0),4);
        bufp->chgBit(oldp+386,(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_3));
        bufp->chgCData(oldp+387,((((7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                    ? 2U : 0U) | ((3U 
                                                   == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                                   ? 2U
                                                   : 0U))),2);
        bufp->chgBit(oldp+388,((((8U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)) 
                                 | (7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))) 
                                | (3U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)))));
        bufp->chgBit(oldp+389,((vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                >> 0x1fU)));
        bufp->chgBit(oldp+390,((1U & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                      >> 0x13U))));
        bufp->chgBit(oldp+391,((vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                >> 0x1fU)));
        bufp->chgQData(oldp+392,(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp),64);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+394,(((IData)(vlSelf->CoreTop__DOT__EX__DOT__branch_flag) 
                                & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_inst_valid))));
        bufp->chgQData(oldp+395,(((0x19U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                   ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1
                                   : vlSelf->CoreTop__DOT__EX__DOT___GEN_289)),64);
        bufp->chgIData(oldp+397,(((1U & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                 >> 2U)))
                                   ? (IData)((vlSelf->CoreTop__DOT__IFM__DOT__rdata 
                                              >> 0x20U))
                                   : (IData)(vlSelf->CoreTop__DOT__IFM__DOT__rdata))),32);
        bufp->chgIData(oldp+398,(((IData)(vlSelf->CoreTop__DOT__EX_io_is_flush)
                                   ? 0U : ((1U & (IData)(
                                                         (vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                          >> 2U)))
                                            ? (IData)(
                                                      (vlSelf->CoreTop__DOT__IFM__DOT__rdata 
                                                       >> 0x20U))
                                            : (IData)(vlSelf->CoreTop__DOT__IFM__DOT__rdata)))),32);
        bufp->chgQData(oldp+399,(((((IData)(vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfWen) 
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
        bufp->chgQData(oldp+401,(((((IData)(vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfWen) 
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
        bufp->chgBit(oldp+403,(((IData)(vlSelf->CoreTop__DOT__ID_io_out_bits_ctrl_signal_inst_valid) 
                                & (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_3))));
        bufp->chgQData(oldp+404,(((0U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src1Type))
                                   ? vlSelf->CoreTop__DOT__mem_bypass_io_Bypass_REG1
                                   : vlSelf->CoreTop__DOT__EX__DOT___GEN_1)),64);
        bufp->chgQData(oldp+406,(((0U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src2Type))
                                   ? vlSelf->CoreTop__DOT__mem_bypass_io_Bypass_REG2
                                   : vlSelf->CoreTop__DOT__EX__DOT___GEN_3)),64);
        bufp->chgQData(oldp+408,(((IData)(vlSelf->CoreTop__DOT__EX__DOT__is_mul)
                                   ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_55
                                   : (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_55)))),64);
        bufp->chgQData(oldp+410,(((IData)(vlSelf->CoreTop__DOT__EX__DOT__is_mul)
                                   ? vlSelf->CoreTop__DOT__EX__DOT__src2
                                   : (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)))),64);
        bufp->chgQData(oldp+412,(((0x40U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                   ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1
                                   : ((0x1aU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                       ? vlSelf->CoreTop__DOT__EX__DOT__src2
                                       : ((0x68U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                           ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_7
                                           : ((0x44U 
                                               == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                               ? (vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_55 
                                                  | vlSelf->CoreTop__DOT__EX__DOT__src2)
                                               : ((0x69U 
                                                   == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                   ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_10
                                                   : 
                                                  ((0x71U 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? 
                                                   (vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_55 
                                                    & vlSelf->CoreTop__DOT__EX__DOT__src2)
                                                    : 
                                                   ((0x72U 
                                                     == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                     ? 
                                                    (vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_55 
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
                                                        ? 
                                                       (((QData)((IData)(
                                                                         ((1U 
                                                                           & (IData)(
                                                                                (vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_27 
                                                                                >> 0x1fU)))
                                                                           ? 0xffffffffU
                                                                           : 0U))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_27)))
                                                        : vlSelf->CoreTop__DOT__EX__DOT___GEN_117))))))))))),64);
        bufp->chgQData(oldp+414,(((0x6aU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                   ? ((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_55 
                                       < vlSelf->CoreTop__DOT__EX__DOT__src2)
                                       ? 1ULL : 0ULL)
                                   : ((2U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                       ? (VL_LTS_IQQ(64, vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_55, vlSelf->CoreTop__DOT__EX__DOT__src2)
                                           ? 1ULL : 0ULL)
                                       : 0ULL))),64);
        VL_EXTEND_WQ(127,64, __Vtemp_h2bb631d5__0, 
                     VL_SHIFTRS_QQI(64,64,5, vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_55, 
                                    (0x1fU & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2))));
        VL_EXTEND_WQ(127,64, __Vtemp_h8248920c__0, 
                     (((QData)((IData)(((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_5[0U] 
                                         >> 0x1fU) ? 0xffffffffU
                                         : 0U))) << 0x20U) 
                      | (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_5[0U]))));
        VL_EXTEND_WQ(127,64, __Vtemp_hadcca096__0, vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_55);
        VL_SHIFTL_WWI(127,127,6, __Vtemp_h02dc50a1__0, __Vtemp_hadcca096__0, 
                      (0x3fU & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)));
        VL_EXTEND_WQ(127,64, __Vtemp_hd1fea39f__0, 
                     ((0x75U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                       ? (vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_55 
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
                                               ? VL_SHIFTRS_QQI(64,64,6, vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_55, 
                                                                (0x3fU 
                                                                 & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)))
                                               : 0ULL))))))));
        bufp->chgQData(oldp+416,((((QData)((IData)(
                                                   ((0x6eU 
                                                     == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                     ? 
                                                    __Vtemp_h2bb631d5__0[1U]
                                                     : 
                                                    ((0x73U 
                                                      == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                      ? 
                                                     __Vtemp_h8248920c__0[1U]
                                                      : 
                                                     ((0x41U 
                                                       == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                       ? 
                                                      __Vtemp_h02dc50a1__0[1U]
                                                       : 
                                                      __Vtemp_hd1fea39f__0[1U]))))) 
                                   << 0x20U) | (QData)((IData)(
                                                               ((0x6eU 
                                                                 == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                                 ? 
                                                                __Vtemp_h2bb631d5__0[0U]
                                                                 : 
                                                                ((0x73U 
                                                                  == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                                  ? 
                                                                 __Vtemp_h8248920c__0[0U]
                                                                  : 
                                                                 ((0x41U 
                                                                   == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                                   ? 
                                                                  __Vtemp_h02dc50a1__0[0U]
                                                                   : 
                                                                  __Vtemp_hd1fea39f__0[0U]))))))),64);
        bufp->chgQData(oldp+418,(((0x45U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
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
        bufp->chgBit(oldp+420,(vlSelf->CoreTop__DOT__EX_io_is_flush));
        bufp->chgBit(oldp+421,(vlSelf->CoreTop__DOT__ID_io_out_bits_ctrl_signal_inst_valid));
        bufp->chgQData(oldp+422,(vlSelf->CoreTop__DOT__mem_bypass_io_Bypass_REG1),64);
        bufp->chgQData(oldp+424,(vlSelf->CoreTop__DOT__mem_bypass_io_Bypass_REG2),64);
        bufp->chgQData(oldp+426,(vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfData),64);
        bufp->chgQData(oldp+428,(vlSelf->CoreTop__DOT__mem_rdata),64);
        bufp->chgQData(oldp+430,(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfData),64);
        bufp->chgQData(oldp+432,(vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_55),64);
        bufp->chgQData(oldp+434,(vlSelf->CoreTop__DOT__EX__DOT__src2),64);
        bufp->chgBit(oldp+436,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+437,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_27 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+438,((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_37 
                                >> 0x1fU)));
        bufp->chgBit(oldp+439,((vlSelf->CoreTop__DOT__EX__DOT___GEN_175 
                                >> 0x1fU)));
        bufp->chgBit(oldp+440,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_10 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+441,((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_61 
                                >> 0x1fU)));
        bufp->chgBit(oldp+442,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_5[0U] 
                                >> 0x1fU)));
        bufp->chgBit(oldp+443,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_16[0U] 
                                >> 0x1fU)));
        bufp->chgBit(oldp+444,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_25 
                                >> 0x1fU)));
        bufp->chgBit(oldp+445,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_31 
                                >> 0x1fU)));
        bufp->chgBit(oldp+446,(vlSelf->CoreTop__DOT__EX__DOT__branch_flag));
        bufp->chgQData(oldp+447,(vlSelf->CoreTop__DOT__IFM__DOT__rdata),64);
        bufp->chgBit(oldp+449,((1U & (IData)((vlSelf->CoreTop__DOT__mem_rdata 
                                              >> 0x3fU)))));
        bufp->chgBit(oldp+450,((1U & (IData)((vlSelf->CoreTop__DOT__mem_rdata 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+451,((1U & ((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_27) 
                                      >> 7U))));
        bufp->chgBit(oldp+452,((1U & ((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_44) 
                                      >> 0xfU))));
    }
    bufp->chgBit(oldp+453,(vlSelf->clock));
    bufp->chgBit(oldp+454,(vlSelf->reset));
    bufp->chgQData(oldp+455,(vlSelf->io_pc),64);
    bufp->chgIData(oldp+457,(vlSelf->io_inst),32);
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
