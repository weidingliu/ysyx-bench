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
    VlWide<4>/*127:0*/ __Vtemp_ha7c16809__0;
    VlWide<4>/*127:0*/ __Vtemp_h5746bcbf__0;
    VlWide<4>/*127:0*/ __Vtemp_hc42a596f__0;
    VlWide<4>/*127:0*/ __Vtemp_h15b68c39__0;
    VlWide<4>/*127:0*/ __Vtemp_h79e8d8bf__0;
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
                                             : ((0x76U 
                                                 == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                 ? vlSelf->CPUTop__DOT__EX__DOT___dnpc_T_9
                                                 : 
                                                ((0x7bU 
                                                  == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                  ? vlSelf->CPUTop__DOT__EX__DOT___dnpc_T_9
                                                  : 0ULL))))))),64);
        bufp->chgBit(oldp+2,((3U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype))));
        bufp->chgBit(oldp+3,(((0x6bU == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                               ? (vlSelf->CPUTop__DOT__EX__DOT__src1 
                                  == vlSelf->CPUTop__DOT__EX__DOT__src2)
                               : (IData)(vlSelf->CPUTop__DOT__EX__DOT___GEN_64))));
        bufp->chgQData(oldp+4,(vlSelf->CPUTop__DOT__IF__DOT__temp),64);
        bufp->chgIData(oldp+6,(vlSelf->CPUTop__DOT__IFM_inst),32);
        bufp->chgCData(oldp+7,(vlSelf->CPUTop__DOT__ID__DOT___io_ctrlIO_src1type_T_2),3);
        bufp->chgCData(oldp+8,(vlSelf->CPUTop__DOT__ID__DOT__srctype2),3);
        bufp->chgCData(oldp+9,((0x1fU & (vlSelf->CPUTop__DOT__IFM_inst 
                                         >> 0xfU))),5);
        bufp->chgCData(oldp+10,((0x1fU & (vlSelf->CPUTop__DOT__IFM_inst 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+11,((0x1fU & (vlSelf->CPUTop__DOT__IFM_inst 
                                          >> 7U))),5);
        bufp->chgCData(oldp+12,(vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype),3);
        bufp->chgCData(oldp+13,(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype),7);
        bufp->chgQData(oldp+14,(vlSelf->CPUTop__DOT__ID_io_ctrlIO_Imm),64);
        bufp->chgBit(oldp+16,(((0x13U == (0x707fU & vlSelf->CPUTop__DOT__IFM_inst)) 
                               | ((0x1013U == (0xfc00707fU 
                                               & vlSelf->CPUTop__DOT__IFM_inst)) 
                                  | ((0x17U == (0x7fU 
                                                & vlSelf->CPUTop__DOT__IFM_inst)) 
                                     | ((0x37U == (0x7fU 
                                                   & vlSelf->CPUTop__DOT__IFM_inst)) 
                                        | ((0x6013U 
                                            == (0x707fU 
                                                & vlSelf->CPUTop__DOT__IFM_inst)) 
                                           | ((0x6fU 
                                               == (0x7fU 
                                                   & vlSelf->CPUTop__DOT__IFM_inst)) 
                                              | ((0x67U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->CPUTop__DOT__IFM_inst)) 
                                                 | ((0x3003U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->CPUTop__DOT__IFM_inst)) 
                                                    | ((0x3023U 
                                                        != 
                                                        (0x707fU 
                                                         & vlSelf->CPUTop__DOT__IFM_inst)) 
                                                       & ((0x2003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->CPUTop__DOT__IFM_inst)) 
                                                          | ((0x3bU 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->CPUTop__DOT__IFM_inst)) 
                                                             | ((0x40000033U 
                                                                 == 
                                                                 (0xfe00707fU 
                                                                  & vlSelf->CPUTop__DOT__IFM_inst)) 
                                                                | ((0x3013U 
                                                                    == 
                                                                    (0x707fU 
                                                                     & vlSelf->CPUTop__DOT__IFM_inst)) 
                                                                   | ((0x63U 
                                                                       != 
                                                                       (0x707fU 
                                                                        & vlSelf->CPUTop__DOT__IFM_inst)) 
                                                                      & (IData)(vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_198)))))))))))))))));
        bufp->chgBit(oldp+17,((1U & (~ (((0x45U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype)) 
                                         | (0x47U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))) 
                                        | (0x6fU == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype)))))));
        bufp->chgQData(oldp+18,(vlSelf->CPUTop__DOT__EX_io1_REG1),64);
        bufp->chgQData(oldp+20,(vlSelf->CPUTop__DOT__EX_io1_REG2),64);
        bufp->chgQData(oldp+22,(vlSelf->CPUTop__DOT__EX_io1_result),64);
        bufp->chgBit(oldp+24,((0x42U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))));
        bufp->chgQData(oldp+25,(((0x45U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                  ? vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_1
                                  : vlSelf->CPUTop__DOT__EX__DOT___GEN_10)),64);
        bufp->chgQData(oldp+27,(vlSelf->CPUTop__DOT__mem_rdata),64);
        bufp->chgQData(oldp+29,(((0x45U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                  ? 0ULL : ((0x47U 
                                             == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                             ? 0ULL
                                             : ((0x6fU 
                                                 == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                 ? 0ULL
                                                 : 
                                                ((0x46U 
                                                  == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                  ? vlSelf->CPUTop__DOT__EX__DOT__src2
                                                  : 
                                                 ((0x70U 
                                                   == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                   ? 
                                                  ((0U 
                                                    == 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelf->CPUTop__DOT__EX__DOT__addr_temp 
                                                                >> 1U))))
                                                    ? (QData)((IData)(
                                                                      (0xffffU 
                                                                       & (IData)(vlSelf->CPUTop__DOT__EX__DOT__src2))))
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (3U 
                                                      & (IData)(
                                                                (vlSelf->CPUTop__DOT__EX__DOT__addr_temp 
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
                                                                 (vlSelf->CPUTop__DOT__EX__DOT__addr_temp 
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
                                                                  (vlSelf->CPUTop__DOT__EX__DOT__addr_temp 
                                                                   >> 1U))))
                                                       ? 
                                                      ((QData)((IData)(
                                                                       (0xffffU 
                                                                        & (IData)(vlSelf->CPUTop__DOT__EX__DOT__src2)))) 
                                                       << 0x30U)
                                                       : 0ULL))))
                                                   : 
                                                  ((0x74U 
                                                    == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                    ? vlSelf->CPUTop__DOT__EX__DOT___wdata_temp_T_21
                                                    : 
                                                   ((0x77U 
                                                     == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->CPUTop__DOT__EX__DOT__addr_temp 
                                                                 >> 2U)))
                                                      ? 
                                                     ((QData)((IData)(vlSelf->CPUTop__DOT__EX__DOT__src2)) 
                                                      << 0x20U)
                                                      : (QData)((IData)(vlSelf->CPUTop__DOT__EX__DOT__src2)))
                                                     : 0ULL)))))))),64);
        bufp->chgCData(oldp+31,(((0x45U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                  ? 0U : ((0x47U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                           ? 0U : (
                                                   (0x6fU 
                                                    == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                    ? 0U
                                                    : 
                                                   ((0x46U 
                                                     == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                     ? 0xffU
                                                     : (IData)(vlSelf->CPUTop__DOT__EX__DOT___GEN_24)))))),8);
        bufp->chgQData(oldp+32,(vlSelf->CPUTop__DOT__rf
                                [0U]),64);
        bufp->chgQData(oldp+34,(vlSelf->CPUTop__DOT__rf
                                [1U]),64);
        bufp->chgQData(oldp+36,(vlSelf->CPUTop__DOT__rf
                                [2U]),64);
        bufp->chgQData(oldp+38,(vlSelf->CPUTop__DOT__rf
                                [3U]),64);
        bufp->chgQData(oldp+40,(vlSelf->CPUTop__DOT__rf
                                [4U]),64);
        bufp->chgQData(oldp+42,(vlSelf->CPUTop__DOT__rf
                                [5U]),64);
        bufp->chgQData(oldp+44,(vlSelf->CPUTop__DOT__rf
                                [6U]),64);
        bufp->chgQData(oldp+46,(vlSelf->CPUTop__DOT__rf
                                [7U]),64);
        bufp->chgQData(oldp+48,(vlSelf->CPUTop__DOT__rf
                                [8U]),64);
        bufp->chgQData(oldp+50,(vlSelf->CPUTop__DOT__rf
                                [9U]),64);
        bufp->chgQData(oldp+52,(vlSelf->CPUTop__DOT__rf
                                [0xaU]),64);
        bufp->chgQData(oldp+54,(vlSelf->CPUTop__DOT__rf
                                [0xbU]),64);
        bufp->chgQData(oldp+56,(vlSelf->CPUTop__DOT__rf
                                [0xcU]),64);
        bufp->chgQData(oldp+58,(vlSelf->CPUTop__DOT__rf
                                [0xdU]),64);
        bufp->chgQData(oldp+60,(vlSelf->CPUTop__DOT__rf
                                [0xeU]),64);
        bufp->chgQData(oldp+62,(vlSelf->CPUTop__DOT__rf
                                [0xfU]),64);
        bufp->chgQData(oldp+64,(vlSelf->CPUTop__DOT__rf
                                [0x10U]),64);
        bufp->chgQData(oldp+66,(vlSelf->CPUTop__DOT__rf
                                [0x11U]),64);
        bufp->chgQData(oldp+68,(vlSelf->CPUTop__DOT__rf
                                [0x12U]),64);
        bufp->chgQData(oldp+70,(vlSelf->CPUTop__DOT__rf
                                [0x13U]),64);
        bufp->chgQData(oldp+72,(vlSelf->CPUTop__DOT__rf
                                [0x14U]),64);
        bufp->chgQData(oldp+74,(vlSelf->CPUTop__DOT__rf
                                [0x15U]),64);
        bufp->chgQData(oldp+76,(vlSelf->CPUTop__DOT__rf
                                [0x16U]),64);
        bufp->chgQData(oldp+78,(vlSelf->CPUTop__DOT__rf
                                [0x17U]),64);
        bufp->chgQData(oldp+80,(vlSelf->CPUTop__DOT__rf
                                [0x18U]),64);
        bufp->chgQData(oldp+82,(vlSelf->CPUTop__DOT__rf
                                [0x19U]),64);
        bufp->chgQData(oldp+84,(vlSelf->CPUTop__DOT__rf
                                [0x1aU]),64);
        bufp->chgQData(oldp+86,(vlSelf->CPUTop__DOT__rf
                                [0x1bU]),64);
        bufp->chgQData(oldp+88,(vlSelf->CPUTop__DOT__rf
                                [0x1cU]),64);
        bufp->chgQData(oldp+90,(vlSelf->CPUTop__DOT__rf
                                [0x1dU]),64);
        bufp->chgQData(oldp+92,(vlSelf->CPUTop__DOT__rf
                                [0x1eU]),64);
        bufp->chgQData(oldp+94,(vlSelf->CPUTop__DOT__rf
                                [0x1fU]),64);
        bufp->chgQData(oldp+96,(vlSelf->CPUTop__DOT__rf[0]),64);
        bufp->chgQData(oldp+98,(vlSelf->CPUTop__DOT__rf[1]),64);
        bufp->chgQData(oldp+100,(vlSelf->CPUTop__DOT__rf[2]),64);
        bufp->chgQData(oldp+102,(vlSelf->CPUTop__DOT__rf[3]),64);
        bufp->chgQData(oldp+104,(vlSelf->CPUTop__DOT__rf[4]),64);
        bufp->chgQData(oldp+106,(vlSelf->CPUTop__DOT__rf[5]),64);
        bufp->chgQData(oldp+108,(vlSelf->CPUTop__DOT__rf[6]),64);
        bufp->chgQData(oldp+110,(vlSelf->CPUTop__DOT__rf[7]),64);
        bufp->chgQData(oldp+112,(vlSelf->CPUTop__DOT__rf[8]),64);
        bufp->chgQData(oldp+114,(vlSelf->CPUTop__DOT__rf[9]),64);
        bufp->chgQData(oldp+116,(vlSelf->CPUTop__DOT__rf[10]),64);
        bufp->chgQData(oldp+118,(vlSelf->CPUTop__DOT__rf[11]),64);
        bufp->chgQData(oldp+120,(vlSelf->CPUTop__DOT__rf[12]),64);
        bufp->chgQData(oldp+122,(vlSelf->CPUTop__DOT__rf[13]),64);
        bufp->chgQData(oldp+124,(vlSelf->CPUTop__DOT__rf[14]),64);
        bufp->chgQData(oldp+126,(vlSelf->CPUTop__DOT__rf[15]),64);
        bufp->chgQData(oldp+128,(vlSelf->CPUTop__DOT__rf[16]),64);
        bufp->chgQData(oldp+130,(vlSelf->CPUTop__DOT__rf[17]),64);
        bufp->chgQData(oldp+132,(vlSelf->CPUTop__DOT__rf[18]),64);
        bufp->chgQData(oldp+134,(vlSelf->CPUTop__DOT__rf[19]),64);
        bufp->chgQData(oldp+136,(vlSelf->CPUTop__DOT__rf[20]),64);
        bufp->chgQData(oldp+138,(vlSelf->CPUTop__DOT__rf[21]),64);
        bufp->chgQData(oldp+140,(vlSelf->CPUTop__DOT__rf[22]),64);
        bufp->chgQData(oldp+142,(vlSelf->CPUTop__DOT__rf[23]),64);
        bufp->chgQData(oldp+144,(vlSelf->CPUTop__DOT__rf[24]),64);
        bufp->chgQData(oldp+146,(vlSelf->CPUTop__DOT__rf[25]),64);
        bufp->chgQData(oldp+148,(vlSelf->CPUTop__DOT__rf[26]),64);
        bufp->chgQData(oldp+150,(vlSelf->CPUTop__DOT__rf[27]),64);
        bufp->chgQData(oldp+152,(vlSelf->CPUTop__DOT__rf[28]),64);
        bufp->chgQData(oldp+154,(vlSelf->CPUTop__DOT__rf[29]),64);
        bufp->chgQData(oldp+156,(vlSelf->CPUTop__DOT__rf[30]),64);
        bufp->chgQData(oldp+158,(vlSelf->CPUTop__DOT__rf[31]),64);
        bufp->chgQData(oldp+160,(vlSelf->CPUTop__DOT__rf
                                 [(0x1fU & (vlSelf->CPUTop__DOT__IFM_inst 
                                            >> 0xfU))]),64);
        bufp->chgQData(oldp+162,(vlSelf->CPUTop__DOT__rf
                                 [(0x1fU & (vlSelf->CPUTop__DOT__IFM_inst 
                                            >> 0x14U))]),64);
        bufp->chgQData(oldp+164,(((0U == (0x1fU & (vlSelf->CPUTop__DOT__IFM_inst 
                                                   >> 7U)))
                                   ? 0ULL : vlSelf->CPUTop__DOT__EX_io1_result)),64);
        bufp->chgBit(oldp+166,((4U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype))));
        bufp->chgQData(oldp+167,(vlSelf->CPUTop__DOT__DIP__DOT__rf[0]),64);
        bufp->chgQData(oldp+169,(vlSelf->CPUTop__DOT__DIP__DOT__rf[1]),64);
        bufp->chgQData(oldp+171,(vlSelf->CPUTop__DOT__DIP__DOT__rf[2]),64);
        bufp->chgQData(oldp+173,(vlSelf->CPUTop__DOT__DIP__DOT__rf[3]),64);
        bufp->chgQData(oldp+175,(vlSelf->CPUTop__DOT__DIP__DOT__rf[4]),64);
        bufp->chgQData(oldp+177,(vlSelf->CPUTop__DOT__DIP__DOT__rf[5]),64);
        bufp->chgQData(oldp+179,(vlSelf->CPUTop__DOT__DIP__DOT__rf[6]),64);
        bufp->chgQData(oldp+181,(vlSelf->CPUTop__DOT__DIP__DOT__rf[7]),64);
        bufp->chgQData(oldp+183,(vlSelf->CPUTop__DOT__DIP__DOT__rf[8]),64);
        bufp->chgQData(oldp+185,(vlSelf->CPUTop__DOT__DIP__DOT__rf[9]),64);
        bufp->chgQData(oldp+187,(vlSelf->CPUTop__DOT__DIP__DOT__rf[10]),64);
        bufp->chgQData(oldp+189,(vlSelf->CPUTop__DOT__DIP__DOT__rf[11]),64);
        bufp->chgQData(oldp+191,(vlSelf->CPUTop__DOT__DIP__DOT__rf[12]),64);
        bufp->chgQData(oldp+193,(vlSelf->CPUTop__DOT__DIP__DOT__rf[13]),64);
        bufp->chgQData(oldp+195,(vlSelf->CPUTop__DOT__DIP__DOT__rf[14]),64);
        bufp->chgQData(oldp+197,(vlSelf->CPUTop__DOT__DIP__DOT__rf[15]),64);
        bufp->chgQData(oldp+199,(vlSelf->CPUTop__DOT__DIP__DOT__rf[16]),64);
        bufp->chgQData(oldp+201,(vlSelf->CPUTop__DOT__DIP__DOT__rf[17]),64);
        bufp->chgQData(oldp+203,(vlSelf->CPUTop__DOT__DIP__DOT__rf[18]),64);
        bufp->chgQData(oldp+205,(vlSelf->CPUTop__DOT__DIP__DOT__rf[19]),64);
        bufp->chgQData(oldp+207,(vlSelf->CPUTop__DOT__DIP__DOT__rf[20]),64);
        bufp->chgQData(oldp+209,(vlSelf->CPUTop__DOT__DIP__DOT__rf[21]),64);
        bufp->chgQData(oldp+211,(vlSelf->CPUTop__DOT__DIP__DOT__rf[22]),64);
        bufp->chgQData(oldp+213,(vlSelf->CPUTop__DOT__DIP__DOT__rf[23]),64);
        bufp->chgQData(oldp+215,(vlSelf->CPUTop__DOT__DIP__DOT__rf[24]),64);
        bufp->chgQData(oldp+217,(vlSelf->CPUTop__DOT__DIP__DOT__rf[25]),64);
        bufp->chgQData(oldp+219,(vlSelf->CPUTop__DOT__DIP__DOT__rf[26]),64);
        bufp->chgQData(oldp+221,(vlSelf->CPUTop__DOT__DIP__DOT__rf[27]),64);
        bufp->chgQData(oldp+223,(vlSelf->CPUTop__DOT__DIP__DOT__rf[28]),64);
        bufp->chgQData(oldp+225,(vlSelf->CPUTop__DOT__DIP__DOT__rf[29]),64);
        bufp->chgQData(oldp+227,(vlSelf->CPUTop__DOT__DIP__DOT__rf[30]),64);
        bufp->chgQData(oldp+229,(vlSelf->CPUTop__DOT__DIP__DOT__rf[31]),64);
        bufp->chgQData(oldp+231,(vlSelf->CPUTop__DOT__EX__DOT__src1),64);
        bufp->chgQData(oldp+233,(vlSelf->CPUTop__DOT__EX__DOT__src2),64);
        bufp->chgQData(oldp+235,(vlSelf->CPUTop__DOT__EX__DOT__addr_temp),64);
        bufp->chgBit(oldp+237,((1U & (IData)((vlSelf->CPUTop__DOT__mem_rdata 
                                              >> 0x3fU)))));
        bufp->chgBit(oldp+238,((1U & (IData)((vlSelf->CPUTop__DOT__mem_rdata 
                                              >> 0x1fU)))));
        bufp->chgQData(oldp+239,(((0x45U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                   ? vlSelf->CPUTop__DOT__mem_rdata
                                   : ((0x47U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                       ? ((1U & (IData)(
                                                        (vlSelf->CPUTop__DOT__EX__DOT__addr_temp 
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
                                       : vlSelf->CPUTop__DOT__EX__DOT___GEN_34))),64);
        bufp->chgBit(oldp+241,((1U & (IData)((vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_1 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+242,((vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_19[0U] 
                                >> 0x1fU)));
        bufp->chgBit(oldp+243,((vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_26 
                                >> 0x1fU)));
        bufp->chgBit(oldp+244,((vlSelf->CPUTop__DOT__EX__DOT___GEN_4 
                                >> 0x1fU)));
        bufp->chgBit(oldp+245,((1U & (IData)((vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_10 
                                              >> 0x1fU)))));
        bufp->chgQData(oldp+246,(((0x40U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                   ? vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_1
                                   : ((0x68U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                       ? vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_7
                                       : ((0x44U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                           ? (vlSelf->CPUTop__DOT__EX__DOT__src1 
                                              | vlSelf->CPUTop__DOT__EX__DOT__src2)
                                           : ((0x69U 
                                               == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                               ? vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_10
                                               : ((0x71U 
                                                   == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                   ? 
                                                  (vlSelf->CPUTop__DOT__EX__DOT__src1 
                                                   & vlSelf->CPUTop__DOT__EX__DOT__src2)
                                                   : 
                                                  ((0x72U 
                                                    == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                    ? 
                                                   (vlSelf->CPUTop__DOT__EX__DOT__src1 
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
                                                                        ((vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_26 
                                                                          >> 0x1fU)
                                                                          ? 0xffffffffU
                                                                          : 0U))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_26)))
                                                       : 
                                                      ((0x7aU 
                                                        == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                        ? 
                                                       (((QData)((IData)(
                                                                         ((vlSelf->CPUTop__DOT__EX__DOT___GEN_4 
                                                                           >> 0x1fU)
                                                                           ? 0xffffffffU
                                                                           : 0U))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSelf->CPUTop__DOT__EX__DOT___GEN_4)))
                                                        : 
                                                       ((1U 
                                                         == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                         ? 
                                                        (((QData)((IData)(
                                                                          ((1U 
                                                                            & (IData)(
                                                                                (vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_10 
                                                                                >> 0x1fU)))
                                                                            ? 0xffffffffU
                                                                            : 0U))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_10)))
                                                         : 0ULL)))))))))))),64);
        bufp->chgBit(oldp+248,((vlSelf->CPUTop__DOT__EX__DOT___shift_result_T_3[0U] 
                                >> 0x1fU)));
        bufp->chgQData(oldp+249,(((0x6aU == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                   ? ((vlSelf->CPUTop__DOT__EX__DOT__src1 
                                       < vlSelf->CPUTop__DOT__EX__DOT__src2)
                                       ? 1ULL : 0ULL)
                                   : 0ULL)),64);
        bufp->chgQData(oldp+251,(((3U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype))
                                   ? (4ULL + vlSelf->CPUTop__DOT__IF__DOT__temp)
                                   : 0ULL)),64);
        VL_EXTEND_WQ(127,64, __Vtemp_ha7c16809__0, 
                     (vlSelf->CPUTop__DOT__EX__DOT__src1 
                      >> (0x1fU & (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_Imm))));
        VL_EXTEND_WQ(127,64, __Vtemp_h5746bcbf__0, 
                     (((QData)((IData)(((vlSelf->CPUTop__DOT__EX__DOT___shift_result_T_3[0U] 
                                         >> 0x1fU) ? 0xffffffffU
                                         : 0U))) << 0x20U) 
                      | (QData)((IData)(vlSelf->CPUTop__DOT__EX__DOT___shift_result_T_3[0U]))));
        VL_EXTEND_WQ(127,64, __Vtemp_hc42a596f__0, vlSelf->CPUTop__DOT__EX__DOT__src1);
        VL_SHIFTL_WWI(127,127,6, __Vtemp_h15b68c39__0, __Vtemp_hc42a596f__0, 
                      (0x3fU & (IData)(vlSelf->CPUTop__DOT__EX__DOT__src2)));
        VL_EXTEND_WQ(127,64, __Vtemp_h79e8d8bf__0, 
                     ((0x75U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                       ? (vlSelf->CPUTop__DOT__EX__DOT__src1 
                          >> (0x3fU & (IData)(vlSelf->CPUTop__DOT__EX__DOT__src2)))
                       : 0ULL));
        bufp->chgQData(oldp+253,((((QData)((IData)(
                                                   ((0x6eU 
                                                     == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                     ? 
                                                    __Vtemp_ha7c16809__0[1U]
                                                     : 
                                                    ((0x73U 
                                                      == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                      ? 
                                                     __Vtemp_h5746bcbf__0[1U]
                                                      : 
                                                     ((0x41U 
                                                       == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                       ? 
                                                      __Vtemp_h15b68c39__0[1U]
                                                       : 
                                                      __Vtemp_h79e8d8bf__0[1U]))))) 
                                   << 0x20U) | (QData)((IData)(
                                                               ((0x6eU 
                                                                 == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                                 ? 
                                                                __Vtemp_ha7c16809__0[0U]
                                                                 : 
                                                                ((0x73U 
                                                                  == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                                  ? 
                                                                 __Vtemp_h5746bcbf__0[0U]
                                                                  : 
                                                                 ((0x41U 
                                                                   == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                                   ? 
                                                                  __Vtemp_h15b68c39__0[0U]
                                                                   : 
                                                                  __Vtemp_h79e8d8bf__0[0U]))))))),64);
        bufp->chgQData(oldp+255,(((0x6bU == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                   ? vlSelf->CPUTop__DOT__EX__DOT___branch_result_T_1
                                   : ((0x6cU == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                       ? vlSelf->CPUTop__DOT__EX__DOT___branch_result_T_1
                                       : ((0x76U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                           ? vlSelf->CPUTop__DOT__EX__DOT___branch_result_T_1
                                           : ((0x7bU 
                                               == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                               ? vlSelf->CPUTop__DOT__EX__DOT___branch_result_T_1
                                               : 0ULL))))),64);
        bufp->chgCData(oldp+257,(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0),4);
        bufp->chgCData(oldp+258,((((7U == (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0))
                                    ? 2U : 0U) | ((3U 
                                                   == (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0))
                                                   ? 2U
                                                   : 0U))),2);
        bufp->chgBit(oldp+259,(vlSelf->CPUTop__DOT__ID__DOT__srctype2));
        bufp->chgBit(oldp+260,((vlSelf->CPUTop__DOT__IFM_inst 
                                >> 0x1fU)));
        bufp->chgBit(oldp+261,((1U & (vlSelf->CPUTop__DOT__IFM_inst 
                                      >> 0x13U))));
        bufp->chgBit(oldp+262,((vlSelf->CPUTop__DOT__IFM_inst 
                                >> 0x1fU)));
        bufp->chgQData(oldp+263,(vlSelf->CPUTop__DOT__IFM__DOT__rdata),64);
    }
    bufp->chgBit(oldp+265,(vlSelf->clock));
    bufp->chgBit(oldp+266,(vlSelf->reset));
    bufp->chgQData(oldp+267,(vlSelf->io_pc),64);
    bufp->chgIData(oldp+269,(vlSelf->io_inst),32);
    bufp->chgQData(oldp+270,(vlSelf->io_result),64);
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
}
