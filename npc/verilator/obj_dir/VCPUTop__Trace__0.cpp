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
    VlWide<4>/*127:0*/ __Vtemp_hd99f2b20__0;
    VlWide<4>/*127:0*/ __Vtemp_hd83d5fe3__0;
    VlWide<4>/*127:0*/ __Vtemp_h78ae4fb2__0;
    VlWide<4>/*127:0*/ __Vtemp_hf0aec63c__0;
    VlWide<4>/*127:0*/ __Vtemp_h7370a697__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgQData(oldp+0,(vlSelf->CPUTop__DOT__IF__DOT__temp),64);
        bufp->chgQData(oldp+2,(vlSelf->CPUTop__DOT__mmio__DOT__mtime),64);
        bufp->chgQData(oldp+4,(vlSelf->CPUTop__DOT__mmio__DOT__mtimecmp),64);
        bufp->chgBit(oldp+6,(vlSelf->CPUTop__DOT__EX_io1_time_int));
        bufp->chgQData(oldp+7,(vlSelf->CPUTop__DOT__rf
                               [0U]),64);
        bufp->chgQData(oldp+9,(vlSelf->CPUTop__DOT__rf
                               [1U]),64);
        bufp->chgQData(oldp+11,(vlSelf->CPUTop__DOT__rf
                                [2U]),64);
        bufp->chgQData(oldp+13,(vlSelf->CPUTop__DOT__rf
                                [3U]),64);
        bufp->chgQData(oldp+15,(vlSelf->CPUTop__DOT__rf
                                [4U]),64);
        bufp->chgQData(oldp+17,(vlSelf->CPUTop__DOT__rf
                                [5U]),64);
        bufp->chgQData(oldp+19,(vlSelf->CPUTop__DOT__rf
                                [6U]),64);
        bufp->chgQData(oldp+21,(vlSelf->CPUTop__DOT__rf
                                [7U]),64);
        bufp->chgQData(oldp+23,(vlSelf->CPUTop__DOT__rf
                                [8U]),64);
        bufp->chgQData(oldp+25,(vlSelf->CPUTop__DOT__rf
                                [9U]),64);
        bufp->chgQData(oldp+27,(vlSelf->CPUTop__DOT__rf
                                [0xaU]),64);
        bufp->chgQData(oldp+29,(vlSelf->CPUTop__DOT__rf
                                [0xbU]),64);
        bufp->chgQData(oldp+31,(vlSelf->CPUTop__DOT__rf
                                [0xcU]),64);
        bufp->chgQData(oldp+33,(vlSelf->CPUTop__DOT__rf
                                [0xdU]),64);
        bufp->chgQData(oldp+35,(vlSelf->CPUTop__DOT__rf
                                [0xeU]),64);
        bufp->chgQData(oldp+37,(vlSelf->CPUTop__DOT__rf
                                [0xfU]),64);
        bufp->chgQData(oldp+39,(vlSelf->CPUTop__DOT__rf
                                [0x10U]),64);
        bufp->chgQData(oldp+41,(vlSelf->CPUTop__DOT__rf
                                [0x11U]),64);
        bufp->chgQData(oldp+43,(vlSelf->CPUTop__DOT__rf
                                [0x12U]),64);
        bufp->chgQData(oldp+45,(vlSelf->CPUTop__DOT__rf
                                [0x13U]),64);
        bufp->chgQData(oldp+47,(vlSelf->CPUTop__DOT__rf
                                [0x14U]),64);
        bufp->chgQData(oldp+49,(vlSelf->CPUTop__DOT__rf
                                [0x15U]),64);
        bufp->chgQData(oldp+51,(vlSelf->CPUTop__DOT__rf
                                [0x16U]),64);
        bufp->chgQData(oldp+53,(vlSelf->CPUTop__DOT__rf
                                [0x17U]),64);
        bufp->chgQData(oldp+55,(vlSelf->CPUTop__DOT__rf
                                [0x18U]),64);
        bufp->chgQData(oldp+57,(vlSelf->CPUTop__DOT__rf
                                [0x19U]),64);
        bufp->chgQData(oldp+59,(vlSelf->CPUTop__DOT__rf
                                [0x1aU]),64);
        bufp->chgQData(oldp+61,(vlSelf->CPUTop__DOT__rf
                                [0x1bU]),64);
        bufp->chgQData(oldp+63,(vlSelf->CPUTop__DOT__rf
                                [0x1cU]),64);
        bufp->chgQData(oldp+65,(vlSelf->CPUTop__DOT__rf
                                [0x1dU]),64);
        bufp->chgQData(oldp+67,(vlSelf->CPUTop__DOT__rf
                                [0x1eU]),64);
        bufp->chgQData(oldp+69,(vlSelf->CPUTop__DOT__rf
                                [0x1fU]),64);
        bufp->chgQData(oldp+71,(vlSelf->CPUTop__DOT__rf[0]),64);
        bufp->chgQData(oldp+73,(vlSelf->CPUTop__DOT__rf[1]),64);
        bufp->chgQData(oldp+75,(vlSelf->CPUTop__DOT__rf[2]),64);
        bufp->chgQData(oldp+77,(vlSelf->CPUTop__DOT__rf[3]),64);
        bufp->chgQData(oldp+79,(vlSelf->CPUTop__DOT__rf[4]),64);
        bufp->chgQData(oldp+81,(vlSelf->CPUTop__DOT__rf[5]),64);
        bufp->chgQData(oldp+83,(vlSelf->CPUTop__DOT__rf[6]),64);
        bufp->chgQData(oldp+85,(vlSelf->CPUTop__DOT__rf[7]),64);
        bufp->chgQData(oldp+87,(vlSelf->CPUTop__DOT__rf[8]),64);
        bufp->chgQData(oldp+89,(vlSelf->CPUTop__DOT__rf[9]),64);
        bufp->chgQData(oldp+91,(vlSelf->CPUTop__DOT__rf[10]),64);
        bufp->chgQData(oldp+93,(vlSelf->CPUTop__DOT__rf[11]),64);
        bufp->chgQData(oldp+95,(vlSelf->CPUTop__DOT__rf[12]),64);
        bufp->chgQData(oldp+97,(vlSelf->CPUTop__DOT__rf[13]),64);
        bufp->chgQData(oldp+99,(vlSelf->CPUTop__DOT__rf[14]),64);
        bufp->chgQData(oldp+101,(vlSelf->CPUTop__DOT__rf[15]),64);
        bufp->chgQData(oldp+103,(vlSelf->CPUTop__DOT__rf[16]),64);
        bufp->chgQData(oldp+105,(vlSelf->CPUTop__DOT__rf[17]),64);
        bufp->chgQData(oldp+107,(vlSelf->CPUTop__DOT__rf[18]),64);
        bufp->chgQData(oldp+109,(vlSelf->CPUTop__DOT__rf[19]),64);
        bufp->chgQData(oldp+111,(vlSelf->CPUTop__DOT__rf[20]),64);
        bufp->chgQData(oldp+113,(vlSelf->CPUTop__DOT__rf[21]),64);
        bufp->chgQData(oldp+115,(vlSelf->CPUTop__DOT__rf[22]),64);
        bufp->chgQData(oldp+117,(vlSelf->CPUTop__DOT__rf[23]),64);
        bufp->chgQData(oldp+119,(vlSelf->CPUTop__DOT__rf[24]),64);
        bufp->chgQData(oldp+121,(vlSelf->CPUTop__DOT__rf[25]),64);
        bufp->chgQData(oldp+123,(vlSelf->CPUTop__DOT__rf[26]),64);
        bufp->chgQData(oldp+125,(vlSelf->CPUTop__DOT__rf[27]),64);
        bufp->chgQData(oldp+127,(vlSelf->CPUTop__DOT__rf[28]),64);
        bufp->chgQData(oldp+129,(vlSelf->CPUTop__DOT__rf[29]),64);
        bufp->chgQData(oldp+131,(vlSelf->CPUTop__DOT__rf[30]),64);
        bufp->chgQData(oldp+133,(vlSelf->CPUTop__DOT__rf[31]),64);
        bufp->chgBit(oldp+135,(vlSelf->CPUTop__DOT__io_time_int_REG));
        bufp->chgQData(oldp+136,(vlSelf->CPUTop__DOT__DIP__DOT__rf[0]),64);
        bufp->chgQData(oldp+138,(vlSelf->CPUTop__DOT__DIP__DOT__rf[1]),64);
        bufp->chgQData(oldp+140,(vlSelf->CPUTop__DOT__DIP__DOT__rf[2]),64);
        bufp->chgQData(oldp+142,(vlSelf->CPUTop__DOT__DIP__DOT__rf[3]),64);
        bufp->chgQData(oldp+144,(vlSelf->CPUTop__DOT__DIP__DOT__rf[4]),64);
        bufp->chgQData(oldp+146,(vlSelf->CPUTop__DOT__DIP__DOT__rf[5]),64);
        bufp->chgQData(oldp+148,(vlSelf->CPUTop__DOT__DIP__DOT__rf[6]),64);
        bufp->chgQData(oldp+150,(vlSelf->CPUTop__DOT__DIP__DOT__rf[7]),64);
        bufp->chgQData(oldp+152,(vlSelf->CPUTop__DOT__DIP__DOT__rf[8]),64);
        bufp->chgQData(oldp+154,(vlSelf->CPUTop__DOT__DIP__DOT__rf[9]),64);
        bufp->chgQData(oldp+156,(vlSelf->CPUTop__DOT__DIP__DOT__rf[10]),64);
        bufp->chgQData(oldp+158,(vlSelf->CPUTop__DOT__DIP__DOT__rf[11]),64);
        bufp->chgQData(oldp+160,(vlSelf->CPUTop__DOT__DIP__DOT__rf[12]),64);
        bufp->chgQData(oldp+162,(vlSelf->CPUTop__DOT__DIP__DOT__rf[13]),64);
        bufp->chgQData(oldp+164,(vlSelf->CPUTop__DOT__DIP__DOT__rf[14]),64);
        bufp->chgQData(oldp+166,(vlSelf->CPUTop__DOT__DIP__DOT__rf[15]),64);
        bufp->chgQData(oldp+168,(vlSelf->CPUTop__DOT__DIP__DOT__rf[16]),64);
        bufp->chgQData(oldp+170,(vlSelf->CPUTop__DOT__DIP__DOT__rf[17]),64);
        bufp->chgQData(oldp+172,(vlSelf->CPUTop__DOT__DIP__DOT__rf[18]),64);
        bufp->chgQData(oldp+174,(vlSelf->CPUTop__DOT__DIP__DOT__rf[19]),64);
        bufp->chgQData(oldp+176,(vlSelf->CPUTop__DOT__DIP__DOT__rf[20]),64);
        bufp->chgQData(oldp+178,(vlSelf->CPUTop__DOT__DIP__DOT__rf[21]),64);
        bufp->chgQData(oldp+180,(vlSelf->CPUTop__DOT__DIP__DOT__rf[22]),64);
        bufp->chgQData(oldp+182,(vlSelf->CPUTop__DOT__DIP__DOT__rf[23]),64);
        bufp->chgQData(oldp+184,(vlSelf->CPUTop__DOT__DIP__DOT__rf[24]),64);
        bufp->chgQData(oldp+186,(vlSelf->CPUTop__DOT__DIP__DOT__rf[25]),64);
        bufp->chgQData(oldp+188,(vlSelf->CPUTop__DOT__DIP__DOT__rf[26]),64);
        bufp->chgQData(oldp+190,(vlSelf->CPUTop__DOT__DIP__DOT__rf[27]),64);
        bufp->chgQData(oldp+192,(vlSelf->CPUTop__DOT__DIP__DOT__rf[28]),64);
        bufp->chgQData(oldp+194,(vlSelf->CPUTop__DOT__DIP__DOT__rf[29]),64);
        bufp->chgQData(oldp+196,(vlSelf->CPUTop__DOT__DIP__DOT__rf[30]),64);
        bufp->chgQData(oldp+198,(vlSelf->CPUTop__DOT__DIP__DOT__rf[31]),64);
        bufp->chgQData(oldp+200,(vlSelf->CPUTop__DOT__EX__DOT__mepc),64);
        bufp->chgQData(oldp+202,(vlSelf->CPUTop__DOT__EX__DOT__mcause),64);
        bufp->chgQData(oldp+204,(vlSelf->CPUTop__DOT__EX__DOT__mstatus),64);
        bufp->chgQData(oldp+206,(vlSelf->CPUTop__DOT__EX__DOT__mtvec),64);
        bufp->chgQData(oldp+208,(vlSelf->CPUTop__DOT__EX__DOT__mie),64);
        bufp->chgQData(oldp+210,(vlSelf->CPUTop__DOT__EX__DOT__mip),64);
        bufp->chgQData(oldp+212,(vlSelf->CPUTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[0]),64);
        bufp->chgQData(oldp+214,(vlSelf->CPUTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[1]),64);
        bufp->chgQData(oldp+216,(vlSelf->CPUTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[2]),64);
        bufp->chgQData(oldp+218,(vlSelf->CPUTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[3]),64);
        bufp->chgQData(oldp+220,(vlSelf->CPUTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[4]),64);
        bufp->chgQData(oldp+222,(vlSelf->CPUTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[5]),64);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgQData(oldp+224,(((IData)(vlSelf->CPUTop__DOT__EX_io1_time_int)
                                   ? vlSelf->CPUTop__DOT__EX__DOT__mtvec
                                   : ((0x19U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                       ? vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_1
                                       : ((0x48U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                           ? (0xfffffffffffffffeULL 
                                              & vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_1)
                                           : ((0x6bU 
                                               == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                               ? vlSelf->CPUTop__DOT__EX__DOT___dnpc_T_9
                                               : ((0x6cU 
                                                   == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                   ? vlSelf->CPUTop__DOT__EX__DOT___dnpc_T_9
                                                   : 
                                                  ((0x76U 
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
                                                         : 0ULL)))))))))))),64);
        bufp->chgBit(oldp+226,(((3U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype)) 
                                | (IData)(vlSelf->CPUTop__DOT__EX_io1_time_int))));
        bufp->chgQData(oldp+227,(vlSelf->CPUTop__DOT__rf
                                 [(0x1fU & (vlSelf->CPUTop__DOT__IFM_inst 
                                            >> 0xfU))]),64);
        bufp->chgQData(oldp+229,(vlSelf->CPUTop__DOT__rf
                                 [(0x1fU & (vlSelf->CPUTop__DOT__IFM_inst 
                                            >> 0x14U))]),64);
        bufp->chgQData(oldp+231,(((3U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype))
                                   ? (4ULL + vlSelf->CPUTop__DOT__IF__DOT__temp)
                                   : 0ULL)),64);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+233,(((0x6bU == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                 ? (vlSelf->CPUTop__DOT__EX__DOT___alu_result_T 
                                    == vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_1)
                                 : (IData)(vlSelf->CPUTop__DOT__EX__DOT___GEN_250))));
        bufp->chgIData(oldp+234,(vlSelf->CPUTop__DOT__IFM_inst),32);
        bufp->chgCData(oldp+235,(vlSelf->CPUTop__DOT__ID__DOT___io_ctrlIO_src1type_T_2),3);
        bufp->chgCData(oldp+236,(vlSelf->CPUTop__DOT__ID__DOT__srctype2),3);
        bufp->chgCData(oldp+237,((0x1fU & (vlSelf->CPUTop__DOT__IFM_inst 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+238,((0x1fU & (vlSelf->CPUTop__DOT__IFM_inst 
                                           >> 0x14U))),5);
        bufp->chgCData(oldp+239,((0x1fU & (vlSelf->CPUTop__DOT__IFM_inst 
                                           >> 7U))),5);
        bufp->chgCData(oldp+240,(vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype),3);
        bufp->chgCData(oldp+241,(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype),7);
        bufp->chgQData(oldp+242,(vlSelf->CPUTop__DOT__ID_io_ctrlIO_Imm),64);
        bufp->chgBit(oldp+244,(((0x13U == (0x707fU 
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
        bufp->chgBit(oldp+245,((1U & (~ (IData)(vlSelf->CPUTop__DOT__ID__DOT___io_mem_we_T_12)))));
        bufp->chgQData(oldp+246,(vlSelf->CPUTop__DOT__EX_io1_REG1),64);
        bufp->chgQData(oldp+248,(vlSelf->CPUTop__DOT__EX_io1_REG2),64);
        bufp->chgQData(oldp+250,(vlSelf->CPUTop__DOT__EX_io1_result),64);
        bufp->chgBit(oldp+252,((0x42U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))));
        bufp->chgQData(oldp+253,(vlSelf->CPUTop__DOT__EX_io1_addr),64);
        bufp->chgQData(oldp+255,(vlSelf->CPUTop__DOT__mmio_io_rdata),64);
        bufp->chgQData(oldp+257,(vlSelf->CPUTop__DOT__EX_io1_wdata),64);
        bufp->chgCData(oldp+259,(((0x46U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                   ? 0xffU : (IData)(vlSelf->CPUTop__DOT__EX__DOT___GEN_28))),8);
        bufp->chgQData(oldp+260,(((0U == (0x1fU & (vlSelf->CPUTop__DOT__IFM_inst 
                                                   >> 7U)))
                                   ? 0ULL : vlSelf->CPUTop__DOT__EX_io1_result)),64);
        bufp->chgBit(oldp+262,(((0x8000U != (0xffffU 
                                             & (IData)(
                                                       (vlSelf->CPUTop__DOT__EX_io1_addr 
                                                        >> 0x30U)))) 
                                & ((0xbff8U != (0xffffU 
                                                & (IData)(
                                                          (vlSelf->CPUTop__DOT__EX_io1_addr 
                                                           >> 0x30U)))) 
                                   & (4U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype))))));
        bufp->chgQData(oldp+263,(vlSelf->CPUTop__DOT__mem_rdata),64);
        bufp->chgBit(oldp+265,((4U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype))));
        bufp->chgQData(oldp+266,(vlSelf->CPUTop__DOT__EX__DOT___alu_result_T),64);
        bufp->chgQData(oldp+268,(vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_1),64);
        bufp->chgBit(oldp+270,((1U & (IData)((vlSelf->CPUTop__DOT__mmio_io_rdata 
                                              >> 0x3fU)))));
        bufp->chgBit(oldp+271,((1U & (IData)((vlSelf->CPUTop__DOT__mmio_io_rdata 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+272,((1U & ((IData)(vlSelf->CPUTop__DOT__EX__DOT___mem_result_T_28) 
                                      >> 7U))));
        bufp->chgBit(oldp+273,((1U & ((IData)(vlSelf->CPUTop__DOT__EX__DOT___mem_result_T_45) 
                                      >> 0xfU))));
        bufp->chgQData(oldp+274,(((0x45U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                   ? vlSelf->CPUTop__DOT__mmio_io_rdata
                                   : ((0x47U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                       ? ((1U & (IData)(
                                                        (vlSelf->CPUTop__DOT__EX_io1_addr 
                                                         >> 2U)))
                                           ? (((QData)((IData)(
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlSelf->CPUTop__DOT__mmio_io_rdata 
                                                                            >> 0x3fU)))
                                                                 ? 0xffffffffU
                                                                 : 0U))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                (vlSelf->CPUTop__DOT__mmio_io_rdata 
                                                                 >> 0x20U))))
                                           : vlSelf->CPUTop__DOT__EX__DOT___mem_result_T_9)
                                       : ((0x11U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                           ? ((1U & (IData)(
                                                            (vlSelf->CPUTop__DOT__EX_io1_addr 
                                                             >> 2U)))
                                               ? (QData)((IData)(
                                                                 (vlSelf->CPUTop__DOT__mmio_io_rdata 
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
        bufp->chgBit(oldp+276,((1U & (IData)((vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_1 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+277,((vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_27[0U] 
                                >> 0x1fU)));
        bufp->chgBit(oldp+278,((1U & (IData)((vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_36 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+279,((vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_46 
                                >> 0x1fU)));
        bufp->chgBit(oldp+280,((vlSelf->CPUTop__DOT__EX__DOT___GEN_15 
                                >> 0x1fU)));
        bufp->chgBit(oldp+281,((1U & (IData)((vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_58 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+282,((vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_72 
                                >> 0x1fU)));
        bufp->chgQData(oldp+283,(((0x40U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                   ? (vlSelf->CPUTop__DOT__EX__DOT___alu_result_T 
                                      + vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_1)
                                   : ((0x68U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                       ? vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_11
                                       : ((0x44U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                           ? (vlSelf->CPUTop__DOT__EX__DOT___alu_result_T 
                                              | vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_1)
                                           : ((0x69U 
                                               == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                               ? (vlSelf->CPUTop__DOT__EX__DOT___alu_result_T 
                                                  - vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_1)
                                               : ((0x71U 
                                                   == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                   ? 
                                                  (vlSelf->CPUTop__DOT__EX__DOT___alu_result_T 
                                                   & vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_1)
                                                   : 
                                                  ((0x72U 
                                                    == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                    ? 
                                                   (vlSelf->CPUTop__DOT__EX__DOT___alu_result_T 
                                                    ^ vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_1)
                                                    : 
                                                   ((0x6dU 
                                                     == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                     ? vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_11
                                                     : 
                                                    ((0x78U 
                                                      == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                      ? 
                                                     (((QData)((IData)(
                                                                       ((vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_27[0U] 
                                                                         >> 0x1fU)
                                                                         ? 0xffffffffU
                                                                         : 0U))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_27[0U])))
                                                      : 
                                                     ((0x79U 
                                                       == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                       ? 
                                                      (((QData)((IData)(
                                                                        ((1U 
                                                                          & (IData)(
                                                                                (vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_36 
                                                                                >> 0x1fU)))
                                                                          ? 0xffffffffU
                                                                          : 0U))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_36)))
                                                       : vlSelf->CPUTop__DOT__EX__DOT___GEN_151)))))))))),64);
        bufp->chgBit(oldp+285,((vlSelf->CPUTop__DOT__EX__DOT___shift_result_T_5[0U] 
                                >> 0x1fU)));
        bufp->chgBit(oldp+286,((vlSelf->CPUTop__DOT__EX__DOT___shift_result_T_16[0U] 
                                >> 0x1fU)));
        bufp->chgBit(oldp+287,((vlSelf->CPUTop__DOT__EX__DOT___shift_result_T_25 
                                >> 0x1fU)));
        bufp->chgBit(oldp+288,((vlSelf->CPUTop__DOT__EX__DOT___shift_result_T_31 
                                >> 0x1fU)));
        bufp->chgQData(oldp+289,(((0x6aU == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                   ? ((vlSelf->CPUTop__DOT__EX__DOT___alu_result_T 
                                       < vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_1)
                                       ? 1ULL : 0ULL)
                                   : ((2U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                       ? (VL_LTS_IQQ(64, vlSelf->CPUTop__DOT__EX__DOT___alu_result_T, vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_1)
                                           ? 1ULL : 0ULL)
                                       : 0ULL))),64);
        VL_EXTEND_WQ(127,64, __Vtemp_hd99f2b20__0, 
                     VL_SHIFTRS_QQI(64,64,5, vlSelf->CPUTop__DOT__EX__DOT___alu_result_T, 
                                    (0x1fU & (IData)(vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_1))));
        VL_EXTEND_WQ(127,64, __Vtemp_hd83d5fe3__0, 
                     (((QData)((IData)(((vlSelf->CPUTop__DOT__EX__DOT___shift_result_T_5[0U] 
                                         >> 0x1fU) ? 0xffffffffU
                                         : 0U))) << 0x20U) 
                      | (QData)((IData)(vlSelf->CPUTop__DOT__EX__DOT___shift_result_T_5[0U]))));
        VL_EXTEND_WQ(127,64, __Vtemp_h78ae4fb2__0, vlSelf->CPUTop__DOT__EX__DOT___alu_result_T);
        VL_SHIFTL_WWI(127,127,6, __Vtemp_hf0aec63c__0, __Vtemp_h78ae4fb2__0, 
                      (0x3fU & (IData)(vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_1)));
        VL_EXTEND_WQ(127,64, __Vtemp_h7370a697__0, 
                     ((0x75U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                       ? (vlSelf->CPUTop__DOT__EX__DOT___alu_result_T 
                          >> (0x3fU & (IData)(vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_1)))
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
                                               ? VL_SHIFTRS_QQI(64,64,6, vlSelf->CPUTop__DOT__EX__DOT___alu_result_T, 
                                                                (0x3fU 
                                                                 & (IData)(vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_1)))
                                               : 0ULL))))))));
        bufp->chgQData(oldp+291,((((QData)((IData)(
                                                   ((0x6eU 
                                                     == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                     ? 
                                                    __Vtemp_hd99f2b20__0[1U]
                                                     : 
                                                    ((0x73U 
                                                      == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                      ? 
                                                     __Vtemp_hd83d5fe3__0[1U]
                                                      : 
                                                     ((0x41U 
                                                       == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                       ? 
                                                      __Vtemp_hf0aec63c__0[1U]
                                                       : 
                                                      __Vtemp_h7370a697__0[1U]))))) 
                                   << 0x20U) | (QData)((IData)(
                                                               ((0x6eU 
                                                                 == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                                 ? 
                                                                __Vtemp_hd99f2b20__0[0U]
                                                                 : 
                                                                ((0x73U 
                                                                  == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                                  ? 
                                                                 __Vtemp_hd83d5fe3__0[0U]
                                                                  : 
                                                                 ((0x41U 
                                                                   == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                                   ? 
                                                                  __Vtemp_hf0aec63c__0[0U]
                                                                   : 
                                                                  __Vtemp_h7370a697__0[0U]))))))),64);
        bufp->chgQData(oldp+293,(((0x6bU == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
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
        bufp->chgQData(oldp+295,(vlSelf->CPUTop__DOT__EX__DOT__csr_data),64);
        bufp->chgQData(oldp+297,(((0x19U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
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
        bufp->chgCData(oldp+299,(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0),4);
        bufp->chgCData(oldp+300,((((7U == (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0))
                                    ? 2U : 0U) | ((3U 
                                                   == (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0))
                                                   ? 2U
                                                   : 0U))),2);
        bufp->chgBit(oldp+301,(vlSelf->CPUTop__DOT__ID__DOT__srctype2));
        bufp->chgBit(oldp+302,((vlSelf->CPUTop__DOT__IFM_inst 
                                >> 0x1fU)));
        bufp->chgBit(oldp+303,((1U & (vlSelf->CPUTop__DOT__IFM_inst 
                                      >> 0x13U))));
        bufp->chgBit(oldp+304,((vlSelf->CPUTop__DOT__IFM_inst 
                                >> 0x1fU)));
        bufp->chgQData(oldp+305,(vlSelf->CPUTop__DOT__IFM__DOT__rdata),64);
        bufp->chgBit(oldp+307,(vlSelf->CPUTop__DOT__mmio__DOT__flag));
    }
    bufp->chgBit(oldp+308,(vlSelf->clock));
    bufp->chgBit(oldp+309,(vlSelf->reset));
    bufp->chgQData(oldp+310,(vlSelf->io_pc),64);
    bufp->chgIData(oldp+312,(vlSelf->io_inst),32);
    bufp->chgQData(oldp+313,(vlSelf->io_result),64);
    bufp->chgBit(oldp+315,(vlSelf->io_time_int));
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
