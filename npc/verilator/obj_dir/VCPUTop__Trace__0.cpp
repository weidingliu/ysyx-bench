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
    VlWide<4>/*127:0*/ __Vtemp_h7548e965__0;
    VlWide<4>/*127:0*/ __Vtemp_hd83d5fe3__0;
    VlWide<4>/*127:0*/ __Vtemp_hb125646c__0;
    VlWide<4>/*127:0*/ __Vtemp_h2a02089f__0;
    VlWide<4>/*127:0*/ __Vtemp_hdc10468f__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgQData(oldp+0,(vlSelf->CPUTop__DOT__IF__DOT__temp),64);
        bufp->chgQData(oldp+2,(vlSelf->CPUTop__DOT__rf
                               [0U]),64);
        bufp->chgQData(oldp+4,(vlSelf->CPUTop__DOT__rf
                               [1U]),64);
        bufp->chgQData(oldp+6,(vlSelf->CPUTop__DOT__rf
                               [2U]),64);
        bufp->chgQData(oldp+8,(vlSelf->CPUTop__DOT__rf
                               [3U]),64);
        bufp->chgQData(oldp+10,(vlSelf->CPUTop__DOT__rf
                                [4U]),64);
        bufp->chgQData(oldp+12,(vlSelf->CPUTop__DOT__rf
                                [5U]),64);
        bufp->chgQData(oldp+14,(vlSelf->CPUTop__DOT__rf
                                [6U]),64);
        bufp->chgQData(oldp+16,(vlSelf->CPUTop__DOT__rf
                                [7U]),64);
        bufp->chgQData(oldp+18,(vlSelf->CPUTop__DOT__rf
                                [8U]),64);
        bufp->chgQData(oldp+20,(vlSelf->CPUTop__DOT__rf
                                [9U]),64);
        bufp->chgQData(oldp+22,(vlSelf->CPUTop__DOT__rf
                                [0xaU]),64);
        bufp->chgQData(oldp+24,(vlSelf->CPUTop__DOT__rf
                                [0xbU]),64);
        bufp->chgQData(oldp+26,(vlSelf->CPUTop__DOT__rf
                                [0xcU]),64);
        bufp->chgQData(oldp+28,(vlSelf->CPUTop__DOT__rf
                                [0xdU]),64);
        bufp->chgQData(oldp+30,(vlSelf->CPUTop__DOT__rf
                                [0xeU]),64);
        bufp->chgQData(oldp+32,(vlSelf->CPUTop__DOT__rf
                                [0xfU]),64);
        bufp->chgQData(oldp+34,(vlSelf->CPUTop__DOT__rf
                                [0x10U]),64);
        bufp->chgQData(oldp+36,(vlSelf->CPUTop__DOT__rf
                                [0x11U]),64);
        bufp->chgQData(oldp+38,(vlSelf->CPUTop__DOT__rf
                                [0x12U]),64);
        bufp->chgQData(oldp+40,(vlSelf->CPUTop__DOT__rf
                                [0x13U]),64);
        bufp->chgQData(oldp+42,(vlSelf->CPUTop__DOT__rf
                                [0x14U]),64);
        bufp->chgQData(oldp+44,(vlSelf->CPUTop__DOT__rf
                                [0x15U]),64);
        bufp->chgQData(oldp+46,(vlSelf->CPUTop__DOT__rf
                                [0x16U]),64);
        bufp->chgQData(oldp+48,(vlSelf->CPUTop__DOT__rf
                                [0x17U]),64);
        bufp->chgQData(oldp+50,(vlSelf->CPUTop__DOT__rf
                                [0x18U]),64);
        bufp->chgQData(oldp+52,(vlSelf->CPUTop__DOT__rf
                                [0x19U]),64);
        bufp->chgQData(oldp+54,(vlSelf->CPUTop__DOT__rf
                                [0x1aU]),64);
        bufp->chgQData(oldp+56,(vlSelf->CPUTop__DOT__rf
                                [0x1bU]),64);
        bufp->chgQData(oldp+58,(vlSelf->CPUTop__DOT__rf
                                [0x1cU]),64);
        bufp->chgQData(oldp+60,(vlSelf->CPUTop__DOT__rf
                                [0x1dU]),64);
        bufp->chgQData(oldp+62,(vlSelf->CPUTop__DOT__rf
                                [0x1eU]),64);
        bufp->chgQData(oldp+64,(vlSelf->CPUTop__DOT__rf
                                [0x1fU]),64);
        bufp->chgQData(oldp+66,(vlSelf->CPUTop__DOT__rf[0]),64);
        bufp->chgQData(oldp+68,(vlSelf->CPUTop__DOT__rf[1]),64);
        bufp->chgQData(oldp+70,(vlSelf->CPUTop__DOT__rf[2]),64);
        bufp->chgQData(oldp+72,(vlSelf->CPUTop__DOT__rf[3]),64);
        bufp->chgQData(oldp+74,(vlSelf->CPUTop__DOT__rf[4]),64);
        bufp->chgQData(oldp+76,(vlSelf->CPUTop__DOT__rf[5]),64);
        bufp->chgQData(oldp+78,(vlSelf->CPUTop__DOT__rf[6]),64);
        bufp->chgQData(oldp+80,(vlSelf->CPUTop__DOT__rf[7]),64);
        bufp->chgQData(oldp+82,(vlSelf->CPUTop__DOT__rf[8]),64);
        bufp->chgQData(oldp+84,(vlSelf->CPUTop__DOT__rf[9]),64);
        bufp->chgQData(oldp+86,(vlSelf->CPUTop__DOT__rf[10]),64);
        bufp->chgQData(oldp+88,(vlSelf->CPUTop__DOT__rf[11]),64);
        bufp->chgQData(oldp+90,(vlSelf->CPUTop__DOT__rf[12]),64);
        bufp->chgQData(oldp+92,(vlSelf->CPUTop__DOT__rf[13]),64);
        bufp->chgQData(oldp+94,(vlSelf->CPUTop__DOT__rf[14]),64);
        bufp->chgQData(oldp+96,(vlSelf->CPUTop__DOT__rf[15]),64);
        bufp->chgQData(oldp+98,(vlSelf->CPUTop__DOT__rf[16]),64);
        bufp->chgQData(oldp+100,(vlSelf->CPUTop__DOT__rf[17]),64);
        bufp->chgQData(oldp+102,(vlSelf->CPUTop__DOT__rf[18]),64);
        bufp->chgQData(oldp+104,(vlSelf->CPUTop__DOT__rf[19]),64);
        bufp->chgQData(oldp+106,(vlSelf->CPUTop__DOT__rf[20]),64);
        bufp->chgQData(oldp+108,(vlSelf->CPUTop__DOT__rf[21]),64);
        bufp->chgQData(oldp+110,(vlSelf->CPUTop__DOT__rf[22]),64);
        bufp->chgQData(oldp+112,(vlSelf->CPUTop__DOT__rf[23]),64);
        bufp->chgQData(oldp+114,(vlSelf->CPUTop__DOT__rf[24]),64);
        bufp->chgQData(oldp+116,(vlSelf->CPUTop__DOT__rf[25]),64);
        bufp->chgQData(oldp+118,(vlSelf->CPUTop__DOT__rf[26]),64);
        bufp->chgQData(oldp+120,(vlSelf->CPUTop__DOT__rf[27]),64);
        bufp->chgQData(oldp+122,(vlSelf->CPUTop__DOT__rf[28]),64);
        bufp->chgQData(oldp+124,(vlSelf->CPUTop__DOT__rf[29]),64);
        bufp->chgQData(oldp+126,(vlSelf->CPUTop__DOT__rf[30]),64);
        bufp->chgQData(oldp+128,(vlSelf->CPUTop__DOT__rf[31]),64);
        bufp->chgQData(oldp+130,(vlSelf->CPUTop__DOT__DIP__DOT__rf[0]),64);
        bufp->chgQData(oldp+132,(vlSelf->CPUTop__DOT__DIP__DOT__rf[1]),64);
        bufp->chgQData(oldp+134,(vlSelf->CPUTop__DOT__DIP__DOT__rf[2]),64);
        bufp->chgQData(oldp+136,(vlSelf->CPUTop__DOT__DIP__DOT__rf[3]),64);
        bufp->chgQData(oldp+138,(vlSelf->CPUTop__DOT__DIP__DOT__rf[4]),64);
        bufp->chgQData(oldp+140,(vlSelf->CPUTop__DOT__DIP__DOT__rf[5]),64);
        bufp->chgQData(oldp+142,(vlSelf->CPUTop__DOT__DIP__DOT__rf[6]),64);
        bufp->chgQData(oldp+144,(vlSelf->CPUTop__DOT__DIP__DOT__rf[7]),64);
        bufp->chgQData(oldp+146,(vlSelf->CPUTop__DOT__DIP__DOT__rf[8]),64);
        bufp->chgQData(oldp+148,(vlSelf->CPUTop__DOT__DIP__DOT__rf[9]),64);
        bufp->chgQData(oldp+150,(vlSelf->CPUTop__DOT__DIP__DOT__rf[10]),64);
        bufp->chgQData(oldp+152,(vlSelf->CPUTop__DOT__DIP__DOT__rf[11]),64);
        bufp->chgQData(oldp+154,(vlSelf->CPUTop__DOT__DIP__DOT__rf[12]),64);
        bufp->chgQData(oldp+156,(vlSelf->CPUTop__DOT__DIP__DOT__rf[13]),64);
        bufp->chgQData(oldp+158,(vlSelf->CPUTop__DOT__DIP__DOT__rf[14]),64);
        bufp->chgQData(oldp+160,(vlSelf->CPUTop__DOT__DIP__DOT__rf[15]),64);
        bufp->chgQData(oldp+162,(vlSelf->CPUTop__DOT__DIP__DOT__rf[16]),64);
        bufp->chgQData(oldp+164,(vlSelf->CPUTop__DOT__DIP__DOT__rf[17]),64);
        bufp->chgQData(oldp+166,(vlSelf->CPUTop__DOT__DIP__DOT__rf[18]),64);
        bufp->chgQData(oldp+168,(vlSelf->CPUTop__DOT__DIP__DOT__rf[19]),64);
        bufp->chgQData(oldp+170,(vlSelf->CPUTop__DOT__DIP__DOT__rf[20]),64);
        bufp->chgQData(oldp+172,(vlSelf->CPUTop__DOT__DIP__DOT__rf[21]),64);
        bufp->chgQData(oldp+174,(vlSelf->CPUTop__DOT__DIP__DOT__rf[22]),64);
        bufp->chgQData(oldp+176,(vlSelf->CPUTop__DOT__DIP__DOT__rf[23]),64);
        bufp->chgQData(oldp+178,(vlSelf->CPUTop__DOT__DIP__DOT__rf[24]),64);
        bufp->chgQData(oldp+180,(vlSelf->CPUTop__DOT__DIP__DOT__rf[25]),64);
        bufp->chgQData(oldp+182,(vlSelf->CPUTop__DOT__DIP__DOT__rf[26]),64);
        bufp->chgQData(oldp+184,(vlSelf->CPUTop__DOT__DIP__DOT__rf[27]),64);
        bufp->chgQData(oldp+186,(vlSelf->CPUTop__DOT__DIP__DOT__rf[28]),64);
        bufp->chgQData(oldp+188,(vlSelf->CPUTop__DOT__DIP__DOT__rf[29]),64);
        bufp->chgQData(oldp+190,(vlSelf->CPUTop__DOT__DIP__DOT__rf[30]),64);
        bufp->chgQData(oldp+192,(vlSelf->CPUTop__DOT__DIP__DOT__rf[31]),64);
        bufp->chgQData(oldp+194,(vlSelf->CPUTop__DOT__EX__DOT__mcause),64);
        bufp->chgQData(oldp+196,(vlSelf->CPUTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[0]),64);
        bufp->chgQData(oldp+198,(vlSelf->CPUTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[1]),64);
        bufp->chgQData(oldp+200,(vlSelf->CPUTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[2]),64);
        bufp->chgQData(oldp+202,(vlSelf->CPUTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[3]),64);
        bufp->chgQData(oldp+204,(vlSelf->CPUTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[4]),64);
        bufp->chgQData(oldp+206,(vlSelf->CPUTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[5]),64);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgQData(oldp+208,(((0x19U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
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
                                                  ((0xcU 
                                                    == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                    ? vlSelf->CPUTop__DOT__EX__DOT___dnpc_T_9
                                                    : 
                                                   ((0x7bU 
                                                     == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                     ? vlSelf->CPUTop__DOT__EX__DOT___dnpc_T_9
                                                     : 
                                                    ((0xbU 
                                                      == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                      ? vlSelf->CPUTop__DOT__EX__DOT___dnpc_T_9
                                                      : 
                                                     ((0x17U 
                                                       == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                       ? vlSelf->CPUTop__DOT__EX__DOT__csr_data
                                                       : 
                                                      ((0x18U 
                                                        == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                        ? vlSelf->CPUTop__DOT__EX__DOT__csr_data
                                                        : 0ULL))))))))))),64);
        bufp->chgBit(oldp+210,((3U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype))));
        bufp->chgBit(oldp+211,(((0x6bU == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                 ? (vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_58 
                                    == vlSelf->CPUTop__DOT__EX__DOT__src2)
                                 : (IData)(vlSelf->CPUTop__DOT__EX__DOT___GEN_108))));
        bufp->chgIData(oldp+212,(vlSelf->CPUTop__DOT__IFM_inst),32);
        bufp->chgCData(oldp+213,(vlSelf->CPUTop__DOT__ID__DOT___io_ctrlIO_src1type_T_2),3);
        bufp->chgCData(oldp+214,(vlSelf->CPUTop__DOT__ID__DOT__srctype2),3);
        bufp->chgCData(oldp+215,((0x1fU & (vlSelf->CPUTop__DOT__IFM_inst 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+216,((0x1fU & (vlSelf->CPUTop__DOT__IFM_inst 
                                           >> 0x14U))),5);
        bufp->chgCData(oldp+217,((0x1fU & (vlSelf->CPUTop__DOT__IFM_inst 
                                           >> 7U))),5);
        bufp->chgCData(oldp+218,(vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype),3);
        bufp->chgCData(oldp+219,(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype),7);
        bufp->chgQData(oldp+220,(vlSelf->CPUTop__DOT__ID_io_ctrlIO_Imm),64);
        bufp->chgBit(oldp+222,(((0x13U == (0x707fU 
                                           & vlSelf->CPUTop__DOT__IFM_inst)) 
                                | ((0x1013U == (0xfc00707fU 
                                                & vlSelf->CPUTop__DOT__IFM_inst)) 
                                   | ((0x17U == (0x7fU 
                                                 & vlSelf->CPUTop__DOT__IFM_inst)) 
                                      | ((0x37U == 
                                          (0x7fU & vlSelf->CPUTop__DOT__IFM_inst)) 
                                         | ((0x6013U 
                                             == (0x707fU 
                                                 & vlSelf->CPUTop__DOT__IFM_inst)) 
                                            | ((0x6fU 
                                                == 
                                                (0x7fU 
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
                                                                       & (IData)(vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_366)))))))))))))))));
        bufp->chgBit(oldp+223,((1U & (~ (((((((0x45U 
                                               == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype)) 
                                              | (0x47U 
                                                 == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))) 
                                             | (0x6fU 
                                                == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))) 
                                            | (3U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))) 
                                           | (4U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))) 
                                          | (0xeU == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))) 
                                         | (0x11U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype)))))));
        bufp->chgQData(oldp+224,(vlSelf->CPUTop__DOT__EX_io1_REG1),64);
        bufp->chgQData(oldp+226,(vlSelf->CPUTop__DOT__EX_io1_REG2),64);
        bufp->chgQData(oldp+228,(vlSelf->CPUTop__DOT__EX_io1_result),64);
        bufp->chgBit(oldp+230,((0x42U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))));
        bufp->chgQData(oldp+231,(((0x45U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                   ? vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_1
                                   : vlSelf->CPUTop__DOT__EX__DOT___GEN_14)),64);
        bufp->chgQData(oldp+233,(vlSelf->CPUTop__DOT__mem_rdata),64);
        bufp->chgQData(oldp+235,(((0x46U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                   ? vlSelf->CPUTop__DOT__EX__DOT__src2
                                   : ((0x70U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                       ? ((0U == (3U 
                                                  & (IData)(
                                                            (vlSelf->CPUTop__DOT__EX__DOT__addr_temp 
                                                             >> 1U))))
                                           ? (QData)((IData)(
                                                             (0xffffU 
                                                              & (IData)(vlSelf->CPUTop__DOT__EX__DOT__src2))))
                                           : ((1U == 
                                               (3U 
                                                & (IData)(
                                                          (vlSelf->CPUTop__DOT__EX__DOT__addr_temp 
                                                           >> 1U))))
                                               ? ((QData)((IData)(
                                                                  (0xffffU 
                                                                   & (IData)(vlSelf->CPUTop__DOT__EX__DOT__src2)))) 
                                                  << 0x10U)
                                               : ((2U 
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
                                       : ((0x74U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                           ? vlSelf->CPUTop__DOT__EX__DOT___wdata_temp_T_21
                                           : ((0x77U 
                                               == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                               ? ((1U 
                                                   & (IData)(
                                                             (vlSelf->CPUTop__DOT__EX__DOT__addr_temp 
                                                              >> 2U)))
                                                   ? 
                                                  ((QData)((IData)(vlSelf->CPUTop__DOT__EX__DOT__src2)) 
                                                   << 0x20U)
                                                   : (QData)((IData)(vlSelf->CPUTop__DOT__EX__DOT__src2)))
                                               : 0ULL))))),64);
        bufp->chgCData(oldp+237,(((0x46U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                   ? 0xffU : (IData)(vlSelf->CPUTop__DOT__EX__DOT___GEN_28))),8);
        bufp->chgQData(oldp+238,(((0U == (0x1fU & (vlSelf->CPUTop__DOT__IFM_inst 
                                                   >> 7U)))
                                   ? 0ULL : vlSelf->CPUTop__DOT__EX_io1_result)),64);
        bufp->chgBit(oldp+240,((4U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype))));
        bufp->chgQData(oldp+241,(vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_58),64);
        bufp->chgQData(oldp+243,(vlSelf->CPUTop__DOT__EX__DOT__src2),64);
        bufp->chgQData(oldp+245,(vlSelf->CPUTop__DOT__EX__DOT__addr_temp),64);
        bufp->chgBit(oldp+247,((1U & (IData)((vlSelf->CPUTop__DOT__mem_rdata 
                                              >> 0x3fU)))));
        bufp->chgBit(oldp+248,((1U & (IData)((vlSelf->CPUTop__DOT__mem_rdata 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+249,((1U & ((IData)(vlSelf->CPUTop__DOT__EX__DOT___mem_result_T_28) 
                                      >> 7U))));
        bufp->chgBit(oldp+250,((1U & ((IData)(vlSelf->CPUTop__DOT__EX__DOT___mem_result_T_45) 
                                      >> 0xfU))));
        bufp->chgQData(oldp+251,(((0x45U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
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
                                           : vlSelf->CPUTop__DOT__EX__DOT___mem_result_T_9)
                                       : ((0x11U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                           ? ((1U & (IData)(
                                                            (vlSelf->CPUTop__DOT__EX__DOT__addr_temp 
                                                             >> 2U)))
                                               ? (QData)((IData)(
                                                                 (vlSelf->CPUTop__DOT__mem_rdata 
                                                                  >> 0x20U)))
                                               : vlSelf->CPUTop__DOT__EX__DOT___mem_result_T_9)
                                           : ((0x6fU 
                                               == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                               ? (QData)((IData)(vlSelf->CPUTop__DOT__EX__DOT___mem_result_T_28))
                                               : ((0xeU 
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
                                                     : 0ULL)))))))),64);
        bufp->chgBit(oldp+253,((1U & (IData)((vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_1 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+254,((vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_19[0U] 
                                >> 0x1fU)));
        bufp->chgBit(oldp+255,((1U & (IData)((vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_28 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+256,((vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_38 
                                >> 0x1fU)));
        bufp->chgBit(oldp+257,((vlSelf->CPUTop__DOT__EX__DOT___GEN_15 
                                >> 0x1fU)));
        bufp->chgBit(oldp+258,((1U & (IData)((vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_10 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+259,((vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_64 
                                >> 0x1fU)));
        bufp->chgQData(oldp+260,(((0x40U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                   ? vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_1
                                   : ((0x68U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                       ? vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_7
                                       : ((0x44U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                           ? (vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_58 
                                              | vlSelf->CPUTop__DOT__EX__DOT__src2)
                                           : ((0x69U 
                                               == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                               ? vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_10
                                               : ((0x71U 
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
                                                       : vlSelf->CPUTop__DOT__EX__DOT___GEN_59)))))))))),64);
        bufp->chgBit(oldp+262,((vlSelf->CPUTop__DOT__EX__DOT___shift_result_T_5[0U] 
                                >> 0x1fU)));
        bufp->chgBit(oldp+263,((vlSelf->CPUTop__DOT__EX__DOT___shift_result_T_16[0U] 
                                >> 0x1fU)));
        bufp->chgBit(oldp+264,((vlSelf->CPUTop__DOT__EX__DOT___shift_result_T_25 
                                >> 0x1fU)));
        bufp->chgBit(oldp+265,((vlSelf->CPUTop__DOT__EX__DOT___shift_result_T_31 
                                >> 0x1fU)));
        bufp->chgQData(oldp+266,(((0x6aU == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                   ? ((vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_58 
                                       < vlSelf->CPUTop__DOT__EX__DOT__src2)
                                       ? 1ULL : 0ULL)
                                   : ((2U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                       ? (VL_LTS_IQQ(64, vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_58, vlSelf->CPUTop__DOT__EX__DOT__src2)
                                           ? 1ULL : 0ULL)
                                       : 0ULL))),64);
        VL_EXTEND_WQ(127,64, __Vtemp_h7548e965__0, 
                     VL_SHIFTRS_QQI(64,64,5, vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_58, 
                                    (0x1fU & (IData)(vlSelf->CPUTop__DOT__EX__DOT__src2))));
        VL_EXTEND_WQ(127,64, __Vtemp_hd83d5fe3__0, 
                     (((QData)((IData)(((vlSelf->CPUTop__DOT__EX__DOT___shift_result_T_5[0U] 
                                         >> 0x1fU) ? 0xffffffffU
                                         : 0U))) << 0x20U) 
                      | (QData)((IData)(vlSelf->CPUTop__DOT__EX__DOT___shift_result_T_5[0U]))));
        VL_EXTEND_WQ(127,64, __Vtemp_hb125646c__0, vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_58);
        VL_SHIFTL_WWI(127,127,6, __Vtemp_h2a02089f__0, __Vtemp_hb125646c__0, 
                      (0x3fU & (IData)(vlSelf->CPUTop__DOT__EX__DOT__src2)));
        VL_EXTEND_WQ(127,64, __Vtemp_hdc10468f__0, 
                     ((0x75U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                       ? (vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_58 
                          >> (0x3fU & (IData)(vlSelf->CPUTop__DOT__EX__DOT__src2)))
                       : ((5U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                           ? (((QData)((IData)(((vlSelf->CPUTop__DOT__EX__DOT___shift_result_T_16[0U] 
                                                 >> 0x1fU)
                                                 ? 0xffffffffU
                                                 : 0U))) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->CPUTop__DOT__EX__DOT___shift_result_T_16[0U])))
                           : ((6U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                               ? vlSelf->CPUTop__DOT__EX__DOT___shift_result_T_28
                               : ((8U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                   ? vlSelf->CPUTop__DOT__EX__DOT___shift_result_T_35
                                   : ((9U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                       ? vlSelf->CPUTop__DOT__EX__DOT___shift_result_T_28
                                       : ((0xaU == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                           ? vlSelf->CPUTop__DOT__EX__DOT___shift_result_T_35
                                           : ((0x14U 
                                               == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                               ? VL_SHIFTRS_QQI(64,64,6, vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_58, 
                                                                (0x3fU 
                                                                 & (IData)(vlSelf->CPUTop__DOT__EX__DOT__src2)))
                                               : 0ULL))))))));
        bufp->chgQData(oldp+268,((((QData)((IData)(
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
                                                      __Vtemp_h2a02089f__0[1U]
                                                       : 
                                                      __Vtemp_hdc10468f__0[1U]))))) 
                                   << 0x20U) | (QData)((IData)(
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
                                                                  __Vtemp_h2a02089f__0[0U]
                                                                   : 
                                                                  __Vtemp_hdc10468f__0[0U]))))))),64);
        bufp->chgQData(oldp+270,(((0x6bU == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                   ? vlSelf->CPUTop__DOT__EX__DOT___branch_result_T_1
                                   : ((0x6cU == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                       ? vlSelf->CPUTop__DOT__EX__DOT___branch_result_T_1
                                       : ((0x76U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                           ? vlSelf->CPUTop__DOT__EX__DOT___branch_result_T_1
                                           : ((0x7bU 
                                               == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                               ? vlSelf->CPUTop__DOT__EX__DOT___branch_result_T_1
                                               : ((0xbU 
                                                   == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                   ? vlSelf->CPUTop__DOT__EX__DOT___branch_result_T_1
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                    ? vlSelf->CPUTop__DOT__EX__DOT___branch_result_T_1
                                                    : 0ULL))))))),64);
        bufp->chgQData(oldp+272,(vlSelf->CPUTop__DOT__EX__DOT__csr_data),64);
        bufp->chgCData(oldp+274,(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0),4);
        bufp->chgCData(oldp+275,((((7U == (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0))
                                    ? 2U : 0U) | ((3U 
                                                   == (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0))
                                                   ? 2U
                                                   : 0U))),2);
        bufp->chgBit(oldp+276,(vlSelf->CPUTop__DOT__ID__DOT__srctype2));
        bufp->chgBit(oldp+277,((vlSelf->CPUTop__DOT__IFM_inst 
                                >> 0x1fU)));
        bufp->chgBit(oldp+278,((1U & (vlSelf->CPUTop__DOT__IFM_inst 
                                      >> 0x13U))));
        bufp->chgBit(oldp+279,((vlSelf->CPUTop__DOT__IFM_inst 
                                >> 0x1fU)));
        bufp->chgQData(oldp+280,(vlSelf->CPUTop__DOT__IFM__DOT__rdata),64);
    }
    bufp->chgBit(oldp+282,(vlSelf->clock));
    bufp->chgBit(oldp+283,(vlSelf->reset));
    bufp->chgQData(oldp+284,(vlSelf->io_pc),64);
    bufp->chgIData(oldp+286,(vlSelf->io_inst),32);
    bufp->chgQData(oldp+287,(vlSelf->io_result),64);
    bufp->chgQData(oldp+289,(vlSelf->CPUTop__DOT__rf
                             [(0x1fU & (vlSelf->CPUTop__DOT__IFM_inst 
                                        >> 0xfU))]),64);
    bufp->chgQData(oldp+291,(vlSelf->CPUTop__DOT__rf
                             [(0x1fU & (vlSelf->CPUTop__DOT__IFM_inst 
                                        >> 0x14U))]),64);
    bufp->chgQData(oldp+293,(((3U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype))
                               ? (4ULL + vlSelf->CPUTop__DOT__IF__DOT__temp)
                               : 0ULL)),64);
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
