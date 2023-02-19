// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCPUTop__Syms.h"


void VCPUTop___024root__trace_chg_sub_0(VCPUTop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VCPUTop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUTop___024root__trace_chg_top_0\n"); );
    // Init
    VCPUTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCPUTop___024root*>(voidSelf);
    VCPUTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VCPUTop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VCPUTop___024root__trace_chg_sub_0(VCPUTop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VCPUTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUTop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,((3U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype))));
        bufp->chgCData(oldp+1,(vlSelf->CPUTop__DOT__ID__DOT___io_ctrlIO_src1type_T_2),3);
        bufp->chgCData(oldp+2,(vlSelf->CPUTop__DOT__ID__DOT__srctype_1),3);
        bufp->chgCData(oldp+3,(vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype),3);
        bufp->chgCData(oldp+4,(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype),7);
        bufp->chgQData(oldp+5,(vlSelf->CPUTop__DOT__ID_io_ctrlIO_Imm),64);
        bufp->chgQData(oldp+7,(vlSelf->CPUTop__DOT__EX_io1_result),64);
        bufp->chgBit(oldp+9,((0x42U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))));
        bufp->chgQData(oldp+10,(((0x45U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                  ? vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_1
                                  : ((0x46U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                      ? vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_3
                                      : ((0x47U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                          ? vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_3
                                          : 0ULL)))),64);
        bufp->chgQData(oldp+12,(vlSelf->CPUTop__DOT__mem_rdata),64);
        bufp->chgQData(oldp+14,(((0x45U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                  ? 0ULL : ((0x47U 
                                             == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                             ? 0ULL
                                             : ((0x46U 
                                                 == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                 ? vlSelf->CPUTop__DOT__EX__DOT__src2
                                                 : 0ULL)))),64);
        bufp->chgCData(oldp+16,(((0x45U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                  ? 0U : ((0x47U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                           ? 0U : (
                                                   (0x46U 
                                                    == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                    ? 0xffU
                                                    : 0U)))),8);
        bufp->chgBit(oldp+17,((4U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype))));
        bufp->chgQData(oldp+18,(vlSelf->CPUTop__DOT__EX__DOT__src1),64);
        bufp->chgQData(oldp+20,(vlSelf->CPUTop__DOT__EX__DOT__src2),64);
        bufp->chgBit(oldp+22,((1U & (IData)((vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_1 
                                             >> 0x1fU)))));
        bufp->chgQData(oldp+23,(((0x40U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                  ? vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_1
                                  : ((0x68U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                      ? (((QData)((IData)(
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_1 
                                                                       >> 0x1fU)))
                                                            ? 0xffffffffU
                                                            : 0U))) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_1)))
                                      : ((0x44U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                          ? (vlSelf->CPUTop__DOT__EX__DOT__src1 
                                             | vlSelf->CPUTop__DOT__EX__DOT__src2)
                                          : ((0x69U 
                                              == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                              ? (vlSelf->CPUTop__DOT__EX__DOT__src1 
                                                 - vlSelf->CPUTop__DOT__EX__DOT__src2)
                                              : 0ULL))))),64);
        bufp->chgBit(oldp+25,((1U & (IData)((vlSelf->CPUTop__DOT__mem_rdata 
                                             >> 0x1fU)))));
        bufp->chgQData(oldp+26,(((0x45U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                  ? vlSelf->CPUTop__DOT__mem_rdata
                                  : ((0x47U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                      ? (((QData)((IData)(
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->CPUTop__DOT__mem_rdata 
                                                                       >> 0x1fU)))
                                                            ? 0xffffffffU
                                                            : 0U))) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->CPUTop__DOT__mem_rdata)))
                                      : 0ULL))),64);
        bufp->chgQData(oldp+28,(((0x6aU == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                  ? ((vlSelf->CPUTop__DOT__EX__DOT__src1 
                                      < vlSelf->CPUTop__DOT__EX__DOT__src2)
                                      ? 1ULL : 0ULL)
                                  : 0ULL)),64);
        bufp->chgCData(oldp+30,(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0),4);
        bufp->chgCData(oldp+31,(((8U == (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0))
                                  ? 0U : ((7U == (7U 
                                                  & (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0)))
                                           ? 2U : (
                                                   (3U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0)))
                                                    ? 2U
                                                    : 0U)))),2);
        bufp->chgBit(oldp+32,(vlSelf->CPUTop__DOT__ID__DOT__srctype_1));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgQData(oldp+33,(vlSelf->CPUTop__DOT__IF__DOT__temp),64);
        bufp->chgQData(oldp+35,(vlSelf->CPUTop__DOT__rf
                                [0U]),64);
        bufp->chgQData(oldp+37,(vlSelf->CPUTop__DOT__rf
                                [1U]),64);
        bufp->chgQData(oldp+39,(vlSelf->CPUTop__DOT__rf
                                [2U]),64);
        bufp->chgQData(oldp+41,(vlSelf->CPUTop__DOT__rf
                                [3U]),64);
        bufp->chgQData(oldp+43,(vlSelf->CPUTop__DOT__rf
                                [4U]),64);
        bufp->chgQData(oldp+45,(vlSelf->CPUTop__DOT__rf
                                [5U]),64);
        bufp->chgQData(oldp+47,(vlSelf->CPUTop__DOT__rf
                                [6U]),64);
        bufp->chgQData(oldp+49,(vlSelf->CPUTop__DOT__rf
                                [7U]),64);
        bufp->chgQData(oldp+51,(vlSelf->CPUTop__DOT__rf
                                [8U]),64);
        bufp->chgQData(oldp+53,(vlSelf->CPUTop__DOT__rf
                                [9U]),64);
        bufp->chgQData(oldp+55,(vlSelf->CPUTop__DOT__rf
                                [0xaU]),64);
        bufp->chgQData(oldp+57,(vlSelf->CPUTop__DOT__rf
                                [0xbU]),64);
        bufp->chgQData(oldp+59,(vlSelf->CPUTop__DOT__rf
                                [0xcU]),64);
        bufp->chgQData(oldp+61,(vlSelf->CPUTop__DOT__rf
                                [0xdU]),64);
        bufp->chgQData(oldp+63,(vlSelf->CPUTop__DOT__rf
                                [0xeU]),64);
        bufp->chgQData(oldp+65,(vlSelf->CPUTop__DOT__rf
                                [0xfU]),64);
        bufp->chgQData(oldp+67,(vlSelf->CPUTop__DOT__rf
                                [0x10U]),64);
        bufp->chgQData(oldp+69,(vlSelf->CPUTop__DOT__rf
                                [0x11U]),64);
        bufp->chgQData(oldp+71,(vlSelf->CPUTop__DOT__rf
                                [0x12U]),64);
        bufp->chgQData(oldp+73,(vlSelf->CPUTop__DOT__rf
                                [0x13U]),64);
        bufp->chgQData(oldp+75,(vlSelf->CPUTop__DOT__rf
                                [0x14U]),64);
        bufp->chgQData(oldp+77,(vlSelf->CPUTop__DOT__rf
                                [0x15U]),64);
        bufp->chgQData(oldp+79,(vlSelf->CPUTop__DOT__rf
                                [0x16U]),64);
        bufp->chgQData(oldp+81,(vlSelf->CPUTop__DOT__rf
                                [0x17U]),64);
        bufp->chgQData(oldp+83,(vlSelf->CPUTop__DOT__rf
                                [0x18U]),64);
        bufp->chgQData(oldp+85,(vlSelf->CPUTop__DOT__rf
                                [0x19U]),64);
        bufp->chgQData(oldp+87,(vlSelf->CPUTop__DOT__rf
                                [0x1aU]),64);
        bufp->chgQData(oldp+89,(vlSelf->CPUTop__DOT__rf
                                [0x1bU]),64);
        bufp->chgQData(oldp+91,(vlSelf->CPUTop__DOT__rf
                                [0x1cU]),64);
        bufp->chgQData(oldp+93,(vlSelf->CPUTop__DOT__rf
                                [0x1dU]),64);
        bufp->chgQData(oldp+95,(vlSelf->CPUTop__DOT__rf
                                [0x1eU]),64);
        bufp->chgQData(oldp+97,(vlSelf->CPUTop__DOT__rf
                                [0x1fU]),64);
        bufp->chgQData(oldp+99,(vlSelf->CPUTop__DOT__rf[0]),64);
        bufp->chgQData(oldp+101,(vlSelf->CPUTop__DOT__rf[1]),64);
        bufp->chgQData(oldp+103,(vlSelf->CPUTop__DOT__rf[2]),64);
        bufp->chgQData(oldp+105,(vlSelf->CPUTop__DOT__rf[3]),64);
        bufp->chgQData(oldp+107,(vlSelf->CPUTop__DOT__rf[4]),64);
        bufp->chgQData(oldp+109,(vlSelf->CPUTop__DOT__rf[5]),64);
        bufp->chgQData(oldp+111,(vlSelf->CPUTop__DOT__rf[6]),64);
        bufp->chgQData(oldp+113,(vlSelf->CPUTop__DOT__rf[7]),64);
        bufp->chgQData(oldp+115,(vlSelf->CPUTop__DOT__rf[8]),64);
        bufp->chgQData(oldp+117,(vlSelf->CPUTop__DOT__rf[9]),64);
        bufp->chgQData(oldp+119,(vlSelf->CPUTop__DOT__rf[10]),64);
        bufp->chgQData(oldp+121,(vlSelf->CPUTop__DOT__rf[11]),64);
        bufp->chgQData(oldp+123,(vlSelf->CPUTop__DOT__rf[12]),64);
        bufp->chgQData(oldp+125,(vlSelf->CPUTop__DOT__rf[13]),64);
        bufp->chgQData(oldp+127,(vlSelf->CPUTop__DOT__rf[14]),64);
        bufp->chgQData(oldp+129,(vlSelf->CPUTop__DOT__rf[15]),64);
        bufp->chgQData(oldp+131,(vlSelf->CPUTop__DOT__rf[16]),64);
        bufp->chgQData(oldp+133,(vlSelf->CPUTop__DOT__rf[17]),64);
        bufp->chgQData(oldp+135,(vlSelf->CPUTop__DOT__rf[18]),64);
        bufp->chgQData(oldp+137,(vlSelf->CPUTop__DOT__rf[19]),64);
        bufp->chgQData(oldp+139,(vlSelf->CPUTop__DOT__rf[20]),64);
        bufp->chgQData(oldp+141,(vlSelf->CPUTop__DOT__rf[21]),64);
        bufp->chgQData(oldp+143,(vlSelf->CPUTop__DOT__rf[22]),64);
        bufp->chgQData(oldp+145,(vlSelf->CPUTop__DOT__rf[23]),64);
        bufp->chgQData(oldp+147,(vlSelf->CPUTop__DOT__rf[24]),64);
        bufp->chgQData(oldp+149,(vlSelf->CPUTop__DOT__rf[25]),64);
        bufp->chgQData(oldp+151,(vlSelf->CPUTop__DOT__rf[26]),64);
        bufp->chgQData(oldp+153,(vlSelf->CPUTop__DOT__rf[27]),64);
        bufp->chgQData(oldp+155,(vlSelf->CPUTop__DOT__rf[28]),64);
        bufp->chgQData(oldp+157,(vlSelf->CPUTop__DOT__rf[29]),64);
        bufp->chgQData(oldp+159,(vlSelf->CPUTop__DOT__rf[30]),64);
        bufp->chgQData(oldp+161,(vlSelf->CPUTop__DOT__rf[31]),64);
        bufp->chgQData(oldp+163,(vlSelf->CPUTop__DOT__DIP__DOT__rf[0]),64);
        bufp->chgQData(oldp+165,(vlSelf->CPUTop__DOT__DIP__DOT__rf[1]),64);
        bufp->chgQData(oldp+167,(vlSelf->CPUTop__DOT__DIP__DOT__rf[2]),64);
        bufp->chgQData(oldp+169,(vlSelf->CPUTop__DOT__DIP__DOT__rf[3]),64);
        bufp->chgQData(oldp+171,(vlSelf->CPUTop__DOT__DIP__DOT__rf[4]),64);
        bufp->chgQData(oldp+173,(vlSelf->CPUTop__DOT__DIP__DOT__rf[5]),64);
        bufp->chgQData(oldp+175,(vlSelf->CPUTop__DOT__DIP__DOT__rf[6]),64);
        bufp->chgQData(oldp+177,(vlSelf->CPUTop__DOT__DIP__DOT__rf[7]),64);
        bufp->chgQData(oldp+179,(vlSelf->CPUTop__DOT__DIP__DOT__rf[8]),64);
        bufp->chgQData(oldp+181,(vlSelf->CPUTop__DOT__DIP__DOT__rf[9]),64);
        bufp->chgQData(oldp+183,(vlSelf->CPUTop__DOT__DIP__DOT__rf[10]),64);
        bufp->chgQData(oldp+185,(vlSelf->CPUTop__DOT__DIP__DOT__rf[11]),64);
        bufp->chgQData(oldp+187,(vlSelf->CPUTop__DOT__DIP__DOT__rf[12]),64);
        bufp->chgQData(oldp+189,(vlSelf->CPUTop__DOT__DIP__DOT__rf[13]),64);
        bufp->chgQData(oldp+191,(vlSelf->CPUTop__DOT__DIP__DOT__rf[14]),64);
        bufp->chgQData(oldp+193,(vlSelf->CPUTop__DOT__DIP__DOT__rf[15]),64);
        bufp->chgQData(oldp+195,(vlSelf->CPUTop__DOT__DIP__DOT__rf[16]),64);
        bufp->chgQData(oldp+197,(vlSelf->CPUTop__DOT__DIP__DOT__rf[17]),64);
        bufp->chgQData(oldp+199,(vlSelf->CPUTop__DOT__DIP__DOT__rf[18]),64);
        bufp->chgQData(oldp+201,(vlSelf->CPUTop__DOT__DIP__DOT__rf[19]),64);
        bufp->chgQData(oldp+203,(vlSelf->CPUTop__DOT__DIP__DOT__rf[20]),64);
        bufp->chgQData(oldp+205,(vlSelf->CPUTop__DOT__DIP__DOT__rf[21]),64);
        bufp->chgQData(oldp+207,(vlSelf->CPUTop__DOT__DIP__DOT__rf[22]),64);
        bufp->chgQData(oldp+209,(vlSelf->CPUTop__DOT__DIP__DOT__rf[23]),64);
        bufp->chgQData(oldp+211,(vlSelf->CPUTop__DOT__DIP__DOT__rf[24]),64);
        bufp->chgQData(oldp+213,(vlSelf->CPUTop__DOT__DIP__DOT__rf[25]),64);
        bufp->chgQData(oldp+215,(vlSelf->CPUTop__DOT__DIP__DOT__rf[26]),64);
        bufp->chgQData(oldp+217,(vlSelf->CPUTop__DOT__DIP__DOT__rf[27]),64);
        bufp->chgQData(oldp+219,(vlSelf->CPUTop__DOT__DIP__DOT__rf[28]),64);
        bufp->chgQData(oldp+221,(vlSelf->CPUTop__DOT__DIP__DOT__rf[29]),64);
        bufp->chgQData(oldp+223,(vlSelf->CPUTop__DOT__DIP__DOT__rf[30]),64);
        bufp->chgQData(oldp+225,(vlSelf->CPUTop__DOT__DIP__DOT__rf[31]),64);
    }
    bufp->chgBit(oldp+227,(vlSelf->clock));
    bufp->chgBit(oldp+228,(vlSelf->reset));
    bufp->chgQData(oldp+229,(vlSelf->io_pc),64);
    bufp->chgIData(oldp+231,(vlSelf->io_inst),32);
    bufp->chgQData(oldp+232,(vlSelf->io_result),64);
    bufp->chgQData(oldp+234,(((0x19U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                               ? vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_1
                               : ((0x48U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                   ? (0xfffffffffffffffeULL 
                                      & vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_1)
                                   : ((0x6bU == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                       ? (((0x6bU == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype)) 
                                           & ((0x1fU 
                                               & (vlSelf->io_inst 
                                                  >> 0xfU)) 
                                              == (0x1fU 
                                                  & (vlSelf->io_inst 
                                                     >> 0x14U))))
                                           ? ((0x6bU 
                                               == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                               ? (vlSelf->CPUTop__DOT__IF__DOT__temp 
                                                  + vlSelf->CPUTop__DOT__ID_io_ctrlIO_Imm)
                                               : 0ULL)
                                           : 0ULL) : 0ULL)))),64);
    bufp->chgBit(oldp+236,(((0x6bU == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype)) 
                            & ((0x1fU & (vlSelf->io_inst 
                                         >> 0xfU)) 
                               == (0x1fU & (vlSelf->io_inst 
                                            >> 0x14U))))));
    bufp->chgCData(oldp+237,((0x1fU & (vlSelf->io_inst 
                                       >> 0xfU))),5);
    bufp->chgCData(oldp+238,((0x1fU & (vlSelf->io_inst 
                                       >> 0x14U))),5);
    bufp->chgCData(oldp+239,((0x1fU & (vlSelf->io_inst 
                                       >> 7U))),5);
    bufp->chgBit(oldp+240,(((0x13U == (0x707fU & vlSelf->io_inst)) 
                            | ((0x1013U == (0xfc00707fU 
                                            & vlSelf->io_inst)) 
                               | ((0x17U == (0x7fU 
                                             & vlSelf->io_inst)) 
                                  | ((0x37U == (0x7fU 
                                                & vlSelf->io_inst)) 
                                     | ((0x6013U == 
                                         (0x707fU & vlSelf->io_inst)) 
                                        | ((0x6fU == 
                                            (0x7fU 
                                             & vlSelf->io_inst)) 
                                           | ((0x67U 
                                               == (0x707fU 
                                                   & vlSelf->io_inst)) 
                                              | ((0x3003U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->io_inst)) 
                                                 | ((0x3023U 
                                                     != 
                                                     (0x707fU 
                                                      & vlSelf->io_inst)) 
                                                    & ((0x2003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->io_inst)) 
                                                       | ((0x3bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->io_inst)) 
                                                          | ((0x40000033U 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->io_inst)) 
                                                             | ((0x3013U 
                                                                 == 
                                                                 (0x707fU 
                                                                  & vlSelf->io_inst)) 
                                                                | (0x63U 
                                                                   == 
                                                                   (0x707fU 
                                                                    & vlSelf->io_inst)))))))))))))))));
    bufp->chgBit(oldp+241,((0x45U != ((0x13U == (0x707fU 
                                                 & vlSelf->io_inst))
                                       ? 0x40U : (IData)(vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_71)))));
    bufp->chgQData(oldp+242,(((0U == (0x1fU & (vlSelf->io_inst 
                                               >> 0xfU)))
                               ? 0ULL : vlSelf->CPUTop__DOT__rf
                              [(0x1fU & (vlSelf->io_inst 
                                         >> 0xfU))])),64);
    bufp->chgQData(oldp+244,(((0U == (0x1fU & (vlSelf->io_inst 
                                               >> 0x14U)))
                               ? 0ULL : vlSelf->CPUTop__DOT__rf
                              [(0x1fU & (vlSelf->io_inst 
                                         >> 0x14U))])),64);
    bufp->chgQData(oldp+246,(vlSelf->CPUTop__DOT__rf
                             [(0x1fU & (vlSelf->io_inst 
                                        >> 0xfU))]),64);
    bufp->chgQData(oldp+248,(vlSelf->CPUTop__DOT__rf
                             [(0x1fU & (vlSelf->io_inst 
                                        >> 0x14U))]),64);
    bufp->chgQData(oldp+250,(((0U == (0x1fU & (vlSelf->io_inst 
                                               >> 7U)))
                               ? 0ULL : vlSelf->CPUTop__DOT__EX_io1_result)),64);
    bufp->chgQData(oldp+252,(((3U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype))
                               ? (4ULL + vlSelf->CPUTop__DOT__IF__DOT__temp)
                               : 0ULL)),64);
    bufp->chgQData(oldp+254,(((0x6bU == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                               ? (vlSelf->CPUTop__DOT__IF__DOT__temp 
                                  + vlSelf->CPUTop__DOT__ID_io_ctrlIO_Imm)
                               : 0ULL)),64);
    bufp->chgCData(oldp+256,(((0x13U == (0x707fU & vlSelf->io_inst))
                               ? 0x40U : (IData)(vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_71))),7);
    bufp->chgBit(oldp+257,((vlSelf->io_inst >> 0x1fU)));
    bufp->chgBit(oldp+258,((1U & (vlSelf->io_inst >> 0x13U))));
    bufp->chgBit(oldp+259,((vlSelf->io_inst >> 0x1fU)));
}

void VCPUTop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUTop___024root__trace_cleanup\n"); );
    // Init
    VCPUTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCPUTop___024root*>(voidSelf);
    VCPUTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
