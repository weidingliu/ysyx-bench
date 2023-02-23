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
        bufp->chgQData(oldp+0,(((0x19U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                 ? vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_1
                                 : ((0x48U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                     ? (0xfffffffffffffffeULL 
                                        & vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_1)
                                     : ((0x6bU == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                         ? vlSelf->CPUTop__DOT__EX__DOT___dnpc_T_9
                                         : ((0x6cU 
                                             == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                             ? vlSelf->CPUTop__DOT__EX__DOT___dnpc_T_9
                                             : 0ULL))))),64);
        bufp->chgBit(oldp+2,((3U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype))));
        bufp->chgBit(oldp+3,(((0x6bU == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                               ? (vlSelf->CPUTop__DOT__EX__DOT__src1 
                                  == vlSelf->CPUTop__DOT__EX__DOT__src2)
                               : (IData)(vlSelf->CPUTop__DOT__EX__DOT___GEN_30))));
        bufp->chgCData(oldp+4,(vlSelf->CPUTop__DOT__ID__DOT___io_ctrlIO_src1type_T_2),3);
        bufp->chgCData(oldp+5,(vlSelf->CPUTop__DOT__ID__DOT__srctype2),3);
        bufp->chgCData(oldp+6,(vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype),3);
        bufp->chgCData(oldp+7,(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype),7);
        bufp->chgQData(oldp+8,(vlSelf->CPUTop__DOT__ID_io_ctrlIO_Imm),64);
        bufp->chgBit(oldp+10,((1U & (~ ((0x45U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype)) 
                                        | (0x47U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype)))))));
        bufp->chgQData(oldp+11,(vlSelf->CPUTop__DOT__EX_io1_result),64);
        bufp->chgBit(oldp+13,((0x42U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))));
        bufp->chgQData(oldp+14,(((0x45U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                  ? vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_1
                                  : vlSelf->CPUTop__DOT__EX__DOT___GEN_12)),64);
        bufp->chgQData(oldp+16,(vlSelf->CPUTop__DOT__mem_rdata),64);
        bufp->chgQData(oldp+18,(((0x45U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                  ? 0ULL : ((0x47U 
                                             == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                             ? 0ULL
                                             : ((0x46U 
                                                 == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                 ? vlSelf->CPUTop__DOT__EX__DOT__src2
                                                 : 0ULL)))),64);
        bufp->chgCData(oldp+20,(((0x45U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                  ? 0U : ((0x47U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                           ? 0U : (
                                                   (0x46U 
                                                    == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                    ? 0xffU
                                                    : 0U)))),8);
        bufp->chgBit(oldp+21,((4U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype))));
        bufp->chgQData(oldp+22,(vlSelf->CPUTop__DOT__EX__DOT__src1),64);
        bufp->chgQData(oldp+24,(vlSelf->CPUTop__DOT__EX__DOT__src2),64);
        bufp->chgBit(oldp+26,((1U & (IData)((vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_1 
                                             >> 0x1fU)))));
        bufp->chgQData(oldp+27,(((0x40U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                  ? vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_1
                                  : ((0x68U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                      ? vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_7
                                      : ((0x44U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                          ? (vlSelf->CPUTop__DOT__EX__DOT__src1 
                                             | vlSelf->CPUTop__DOT__EX__DOT__src2)
                                          : ((0x69U 
                                              == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                              ? (vlSelf->CPUTop__DOT__EX__DOT__src1 
                                                 - vlSelf->CPUTop__DOT__EX__DOT__src2)
                                              : ((0x6dU 
                                                  == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                  ? vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_7
                                                  : 0ULL)))))),64);
        bufp->chgQData(oldp+29,(((0x6eU == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                  ? (vlSelf->CPUTop__DOT__EX__DOT__src1 
                                     >> (0x1fU & (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_Imm)))
                                  : 0ULL)),64);
        bufp->chgBit(oldp+31,((1U & (IData)((vlSelf->CPUTop__DOT__mem_rdata 
                                             >> 0x3fU)))));
        bufp->chgBit(oldp+32,((1U & (IData)((vlSelf->CPUTop__DOT__mem_rdata 
                                             >> 0x1fU)))));
        bufp->chgQData(oldp+33,(((0x45U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                  ? vlSelf->CPUTop__DOT__mem_rdata
                                  : ((0x47U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                      ? ((1U & (IData)(
                                                       (((0x45U 
                                                          == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                          ? vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_1
                                                          : vlSelf->CPUTop__DOT__EX__DOT___GEN_12) 
                                                        >> 2U)))
                                          ? (((QData)((IData)(
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlSelf->CPUTop__DOT__mem_rdata 
                                                                           >> 0x3fU)))
                                                                ? 0xffffffffU
                                                                : 0U))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               (vlSelf->CPUTop__DOT__mem_rdata 
                                                                >> 0x20U))))
                                          : (((QData)((IData)(
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlSelf->CPUTop__DOT__mem_rdata 
                                                                           >> 0x1fU)))
                                                                ? 0xffffffffU
                                                                : 0U))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->CPUTop__DOT__mem_rdata))))
                                      : 0ULL))),64);
        bufp->chgQData(oldp+35,(((0x6aU == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                  ? ((vlSelf->CPUTop__DOT__EX__DOT__src1 
                                      < vlSelf->CPUTop__DOT__EX__DOT__src2)
                                      ? 1ULL : 0ULL)
                                  : 0ULL)),64);
        bufp->chgQData(oldp+37,(((0x6bU == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                  ? vlSelf->CPUTop__DOT__EX__DOT___branch_result_T_1
                                  : ((0x6cU == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                      ? vlSelf->CPUTop__DOT__EX__DOT___branch_result_T_1
                                      : 0ULL))),64);
        bufp->chgCData(oldp+39,(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0),4);
        bufp->chgCData(oldp+40,((((7U == (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0))
                                   ? 2U : 0U) | ((3U 
                                                  == (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0))
                                                  ? 2U
                                                  : 0U))),2);
        bufp->chgBit(oldp+41,(vlSelf->CPUTop__DOT__ID__DOT__srctype2));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgQData(oldp+42,(vlSelf->CPUTop__DOT__IF__DOT__temp),64);
        bufp->chgQData(oldp+44,(vlSelf->CPUTop__DOT__rf
                                [0U]),64);
        bufp->chgQData(oldp+46,(vlSelf->CPUTop__DOT__rf
                                [1U]),64);
        bufp->chgQData(oldp+48,(vlSelf->CPUTop__DOT__rf
                                [2U]),64);
        bufp->chgQData(oldp+50,(vlSelf->CPUTop__DOT__rf
                                [3U]),64);
        bufp->chgQData(oldp+52,(vlSelf->CPUTop__DOT__rf
                                [4U]),64);
        bufp->chgQData(oldp+54,(vlSelf->CPUTop__DOT__rf
                                [5U]),64);
        bufp->chgQData(oldp+56,(vlSelf->CPUTop__DOT__rf
                                [6U]),64);
        bufp->chgQData(oldp+58,(vlSelf->CPUTop__DOT__rf
                                [7U]),64);
        bufp->chgQData(oldp+60,(vlSelf->CPUTop__DOT__rf
                                [8U]),64);
        bufp->chgQData(oldp+62,(vlSelf->CPUTop__DOT__rf
                                [9U]),64);
        bufp->chgQData(oldp+64,(vlSelf->CPUTop__DOT__rf
                                [0xaU]),64);
        bufp->chgQData(oldp+66,(vlSelf->CPUTop__DOT__rf
                                [0xbU]),64);
        bufp->chgQData(oldp+68,(vlSelf->CPUTop__DOT__rf
                                [0xcU]),64);
        bufp->chgQData(oldp+70,(vlSelf->CPUTop__DOT__rf
                                [0xdU]),64);
        bufp->chgQData(oldp+72,(vlSelf->CPUTop__DOT__rf
                                [0xeU]),64);
        bufp->chgQData(oldp+74,(vlSelf->CPUTop__DOT__rf
                                [0xfU]),64);
        bufp->chgQData(oldp+76,(vlSelf->CPUTop__DOT__rf
                                [0x10U]),64);
        bufp->chgQData(oldp+78,(vlSelf->CPUTop__DOT__rf
                                [0x11U]),64);
        bufp->chgQData(oldp+80,(vlSelf->CPUTop__DOT__rf
                                [0x12U]),64);
        bufp->chgQData(oldp+82,(vlSelf->CPUTop__DOT__rf
                                [0x13U]),64);
        bufp->chgQData(oldp+84,(vlSelf->CPUTop__DOT__rf
                                [0x14U]),64);
        bufp->chgQData(oldp+86,(vlSelf->CPUTop__DOT__rf
                                [0x15U]),64);
        bufp->chgQData(oldp+88,(vlSelf->CPUTop__DOT__rf
                                [0x16U]),64);
        bufp->chgQData(oldp+90,(vlSelf->CPUTop__DOT__rf
                                [0x17U]),64);
        bufp->chgQData(oldp+92,(vlSelf->CPUTop__DOT__rf
                                [0x18U]),64);
        bufp->chgQData(oldp+94,(vlSelf->CPUTop__DOT__rf
                                [0x19U]),64);
        bufp->chgQData(oldp+96,(vlSelf->CPUTop__DOT__rf
                                [0x1aU]),64);
        bufp->chgQData(oldp+98,(vlSelf->CPUTop__DOT__rf
                                [0x1bU]),64);
        bufp->chgQData(oldp+100,(vlSelf->CPUTop__DOT__rf
                                 [0x1cU]),64);
        bufp->chgQData(oldp+102,(vlSelf->CPUTop__DOT__rf
                                 [0x1dU]),64);
        bufp->chgQData(oldp+104,(vlSelf->CPUTop__DOT__rf
                                 [0x1eU]),64);
        bufp->chgQData(oldp+106,(vlSelf->CPUTop__DOT__rf
                                 [0x1fU]),64);
        bufp->chgQData(oldp+108,(vlSelf->CPUTop__DOT__rf[0]),64);
        bufp->chgQData(oldp+110,(vlSelf->CPUTop__DOT__rf[1]),64);
        bufp->chgQData(oldp+112,(vlSelf->CPUTop__DOT__rf[2]),64);
        bufp->chgQData(oldp+114,(vlSelf->CPUTop__DOT__rf[3]),64);
        bufp->chgQData(oldp+116,(vlSelf->CPUTop__DOT__rf[4]),64);
        bufp->chgQData(oldp+118,(vlSelf->CPUTop__DOT__rf[5]),64);
        bufp->chgQData(oldp+120,(vlSelf->CPUTop__DOT__rf[6]),64);
        bufp->chgQData(oldp+122,(vlSelf->CPUTop__DOT__rf[7]),64);
        bufp->chgQData(oldp+124,(vlSelf->CPUTop__DOT__rf[8]),64);
        bufp->chgQData(oldp+126,(vlSelf->CPUTop__DOT__rf[9]),64);
        bufp->chgQData(oldp+128,(vlSelf->CPUTop__DOT__rf[10]),64);
        bufp->chgQData(oldp+130,(vlSelf->CPUTop__DOT__rf[11]),64);
        bufp->chgQData(oldp+132,(vlSelf->CPUTop__DOT__rf[12]),64);
        bufp->chgQData(oldp+134,(vlSelf->CPUTop__DOT__rf[13]),64);
        bufp->chgQData(oldp+136,(vlSelf->CPUTop__DOT__rf[14]),64);
        bufp->chgQData(oldp+138,(vlSelf->CPUTop__DOT__rf[15]),64);
        bufp->chgQData(oldp+140,(vlSelf->CPUTop__DOT__rf[16]),64);
        bufp->chgQData(oldp+142,(vlSelf->CPUTop__DOT__rf[17]),64);
        bufp->chgQData(oldp+144,(vlSelf->CPUTop__DOT__rf[18]),64);
        bufp->chgQData(oldp+146,(vlSelf->CPUTop__DOT__rf[19]),64);
        bufp->chgQData(oldp+148,(vlSelf->CPUTop__DOT__rf[20]),64);
        bufp->chgQData(oldp+150,(vlSelf->CPUTop__DOT__rf[21]),64);
        bufp->chgQData(oldp+152,(vlSelf->CPUTop__DOT__rf[22]),64);
        bufp->chgQData(oldp+154,(vlSelf->CPUTop__DOT__rf[23]),64);
        bufp->chgQData(oldp+156,(vlSelf->CPUTop__DOT__rf[24]),64);
        bufp->chgQData(oldp+158,(vlSelf->CPUTop__DOT__rf[25]),64);
        bufp->chgQData(oldp+160,(vlSelf->CPUTop__DOT__rf[26]),64);
        bufp->chgQData(oldp+162,(vlSelf->CPUTop__DOT__rf[27]),64);
        bufp->chgQData(oldp+164,(vlSelf->CPUTop__DOT__rf[28]),64);
        bufp->chgQData(oldp+166,(vlSelf->CPUTop__DOT__rf[29]),64);
        bufp->chgQData(oldp+168,(vlSelf->CPUTop__DOT__rf[30]),64);
        bufp->chgQData(oldp+170,(vlSelf->CPUTop__DOT__rf[31]),64);
        bufp->chgQData(oldp+172,(vlSelf->CPUTop__DOT__DIP__DOT__rf[0]),64);
        bufp->chgQData(oldp+174,(vlSelf->CPUTop__DOT__DIP__DOT__rf[1]),64);
        bufp->chgQData(oldp+176,(vlSelf->CPUTop__DOT__DIP__DOT__rf[2]),64);
        bufp->chgQData(oldp+178,(vlSelf->CPUTop__DOT__DIP__DOT__rf[3]),64);
        bufp->chgQData(oldp+180,(vlSelf->CPUTop__DOT__DIP__DOT__rf[4]),64);
        bufp->chgQData(oldp+182,(vlSelf->CPUTop__DOT__DIP__DOT__rf[5]),64);
        bufp->chgQData(oldp+184,(vlSelf->CPUTop__DOT__DIP__DOT__rf[6]),64);
        bufp->chgQData(oldp+186,(vlSelf->CPUTop__DOT__DIP__DOT__rf[7]),64);
        bufp->chgQData(oldp+188,(vlSelf->CPUTop__DOT__DIP__DOT__rf[8]),64);
        bufp->chgQData(oldp+190,(vlSelf->CPUTop__DOT__DIP__DOT__rf[9]),64);
        bufp->chgQData(oldp+192,(vlSelf->CPUTop__DOT__DIP__DOT__rf[10]),64);
        bufp->chgQData(oldp+194,(vlSelf->CPUTop__DOT__DIP__DOT__rf[11]),64);
        bufp->chgQData(oldp+196,(vlSelf->CPUTop__DOT__DIP__DOT__rf[12]),64);
        bufp->chgQData(oldp+198,(vlSelf->CPUTop__DOT__DIP__DOT__rf[13]),64);
        bufp->chgQData(oldp+200,(vlSelf->CPUTop__DOT__DIP__DOT__rf[14]),64);
        bufp->chgQData(oldp+202,(vlSelf->CPUTop__DOT__DIP__DOT__rf[15]),64);
        bufp->chgQData(oldp+204,(vlSelf->CPUTop__DOT__DIP__DOT__rf[16]),64);
        bufp->chgQData(oldp+206,(vlSelf->CPUTop__DOT__DIP__DOT__rf[17]),64);
        bufp->chgQData(oldp+208,(vlSelf->CPUTop__DOT__DIP__DOT__rf[18]),64);
        bufp->chgQData(oldp+210,(vlSelf->CPUTop__DOT__DIP__DOT__rf[19]),64);
        bufp->chgQData(oldp+212,(vlSelf->CPUTop__DOT__DIP__DOT__rf[20]),64);
        bufp->chgQData(oldp+214,(vlSelf->CPUTop__DOT__DIP__DOT__rf[21]),64);
        bufp->chgQData(oldp+216,(vlSelf->CPUTop__DOT__DIP__DOT__rf[22]),64);
        bufp->chgQData(oldp+218,(vlSelf->CPUTop__DOT__DIP__DOT__rf[23]),64);
        bufp->chgQData(oldp+220,(vlSelf->CPUTop__DOT__DIP__DOT__rf[24]),64);
        bufp->chgQData(oldp+222,(vlSelf->CPUTop__DOT__DIP__DOT__rf[25]),64);
        bufp->chgQData(oldp+224,(vlSelf->CPUTop__DOT__DIP__DOT__rf[26]),64);
        bufp->chgQData(oldp+226,(vlSelf->CPUTop__DOT__DIP__DOT__rf[27]),64);
        bufp->chgQData(oldp+228,(vlSelf->CPUTop__DOT__DIP__DOT__rf[28]),64);
        bufp->chgQData(oldp+230,(vlSelf->CPUTop__DOT__DIP__DOT__rf[29]),64);
        bufp->chgQData(oldp+232,(vlSelf->CPUTop__DOT__DIP__DOT__rf[30]),64);
        bufp->chgQData(oldp+234,(vlSelf->CPUTop__DOT__DIP__DOT__rf[31]),64);
    }
    bufp->chgBit(oldp+236,(vlSelf->clock));
    bufp->chgBit(oldp+237,(vlSelf->reset));
    bufp->chgQData(oldp+238,(vlSelf->io_pc),64);
    bufp->chgIData(oldp+240,(vlSelf->io_inst),32);
    bufp->chgQData(oldp+241,(vlSelf->io_result),64);
    bufp->chgCData(oldp+243,((0x1fU & (vlSelf->io_inst 
                                       >> 0xfU))),5);
    bufp->chgCData(oldp+244,((0x1fU & (vlSelf->io_inst 
                                       >> 0x14U))),5);
    bufp->chgCData(oldp+245,((0x1fU & (vlSelf->io_inst 
                                       >> 7U))),5);
    bufp->chgBit(oldp+246,(((0x13U == (0x707fU & vlSelf->io_inst)) 
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
                                                                | ((0x63U 
                                                                    != 
                                                                    (0x707fU 
                                                                     & vlSelf->io_inst)) 
                                                                   & ((0x1063U 
                                                                       != 
                                                                       (0x707fU 
                                                                        & vlSelf->io_inst)) 
                                                                      & ((0x1bU 
                                                                          == 
                                                                          (0x707fU 
                                                                           & vlSelf->io_inst)) 
                                                                         | ((0x33U 
                                                                             == 
                                                                             (0xfe00707fU 
                                                                              & vlSelf->io_inst)) 
                                                                            | (0x40005013U 
                                                                               == 
                                                                               (0xfc00707fU 
                                                                                & vlSelf->io_inst)))))))))))))))))))));
    bufp->chgQData(oldp+247,(((0U == (0x1fU & (vlSelf->io_inst 
                                               >> 0xfU)))
                               ? 0ULL : vlSelf->CPUTop__DOT__rf
                              [(0x1fU & (vlSelf->io_inst 
                                         >> 0xfU))])),64);
    bufp->chgQData(oldp+249,(((0U == (0x1fU & (vlSelf->io_inst 
                                               >> 0x14U)))
                               ? 0ULL : vlSelf->CPUTop__DOT__rf
                              [(0x1fU & (vlSelf->io_inst 
                                         >> 0x14U))])),64);
    bufp->chgQData(oldp+251,(vlSelf->CPUTop__DOT__rf
                             [(0x1fU & (vlSelf->io_inst 
                                        >> 0xfU))]),64);
    bufp->chgQData(oldp+253,(vlSelf->CPUTop__DOT__rf
                             [(0x1fU & (vlSelf->io_inst 
                                        >> 0x14U))]),64);
    bufp->chgQData(oldp+255,(((0U == (0x1fU & (vlSelf->io_inst 
                                               >> 7U)))
                               ? 0ULL : vlSelf->CPUTop__DOT__EX_io1_result)),64);
    bufp->chgQData(oldp+257,(((3U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype))
                               ? (4ULL + vlSelf->CPUTop__DOT__IF__DOT__temp)
                               : 0ULL)),64);
    bufp->chgBit(oldp+259,((vlSelf->io_inst >> 0x1fU)));
    bufp->chgBit(oldp+260,((1U & (vlSelf->io_inst >> 0x13U))));
    bufp->chgBit(oldp+261,((vlSelf->io_inst >> 0x1fU)));
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
