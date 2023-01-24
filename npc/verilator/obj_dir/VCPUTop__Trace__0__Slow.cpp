// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCPUTop__Syms.h"


VL_ATTR_COLD void VCPUTop___024root__trace_init_sub__TOP__0(VCPUTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCPUTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUTop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+72,"clock", false,-1);
    tracep->declBit(c+73,"reset", false,-1);
    tracep->declQuad(c+74,"io_pc", false,-1, 63,0);
    tracep->declBus(c+76,"io_inst", false,-1, 31,0);
    tracep->declQuad(c+77,"io_result", false,-1, 63,0);
    tracep->pushNamePrefix("CPUTop ");
    tracep->declBit(c+72,"clock", false,-1);
    tracep->declBit(c+73,"reset", false,-1);
    tracep->declQuad(c+74,"io_pc", false,-1, 63,0);
    tracep->declBus(c+76,"io_inst", false,-1, 31,0);
    tracep->declQuad(c+77,"io_result", false,-1, 63,0);
    tracep->declBit(c+72,"IF_clock", false,-1);
    tracep->declBit(c+73,"IF_reset", false,-1);
    tracep->declQuad(c+6,"IF_io_pc", false,-1, 63,0);
    tracep->declBus(c+76,"ID_io_inst", false,-1, 31,0);
    tracep->declBus(c+1,"ID_io_ctrlIO_src2type", false,-1, 2,0);
    tracep->declBus(c+79,"ID_io_ctrlIO_src1", false,-1, 4,0);
    tracep->declBus(c+80,"ID_io_ctrlIO_src2", false,-1, 4,0);
    tracep->declBus(c+81,"ID_io_ctrlIO_rd", false,-1, 4,0);
    tracep->declBus(c+82,"ID_io_ctrlIO_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+83,"ID_io_ctrlIO_Imm", false,-1, 63,0);
    tracep->declBus(c+1,"EX_io_src2type", false,-1, 2,0);
    tracep->declBus(c+82,"EX_io_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+83,"EX_io_Imm", false,-1, 63,0);
    tracep->declQuad(c+85,"EX_io1_REG1", false,-1, 63,0);
    tracep->declQuad(c+87,"EX_io1_REG2", false,-1, 63,0);
    tracep->declQuad(c+2,"EX_io1_result", false,-1, 63,0);
    tracep->declBit(c+89,"EX_io1_is_break", false,-1);
    tracep->declBit(c+89,"DIP_is_break", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+8+i*2,"rf", true,(i+0), 63,0);
    }
    tracep->declBit(c+97,"rf_EX_io1_REG1_MPORT_en", false,-1);
    tracep->declBus(c+79,"rf_EX_io1_REG1_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+90,"rf_EX_io1_REG1_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+97,"rf_EX_io1_REG2_MPORT_en", false,-1);
    tracep->declBus(c+80,"rf_EX_io1_REG2_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+92,"rf_EX_io1_REG2_MPORT_data", false,-1, 63,0);
    tracep->declQuad(c+2,"rf_MPORT_data", false,-1, 63,0);
    tracep->declBus(c+81,"rf_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+97,"rf_MPORT_mask", false,-1);
    tracep->declBit(c+97,"rf_MPORT_en", false,-1);
    tracep->declBus(c+79,"src1add", false,-1, 4,0);
    tracep->declBus(c+80,"src2add", false,-1, 4,0);
    tracep->pushNamePrefix("DIP ");
    tracep->declBit(c+89,"is_break", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EX ");
    tracep->declBus(c+1,"io_src2type", false,-1, 2,0);
    tracep->declBus(c+82,"io_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+83,"io_Imm", false,-1, 63,0);
    tracep->declQuad(c+85,"io1_REG1", false,-1, 63,0);
    tracep->declQuad(c+87,"io1_REG2", false,-1, 63,0);
    tracep->declQuad(c+2,"io1_result", false,-1, 63,0);
    tracep->declBit(c+89,"io1_is_break", false,-1);
    tracep->declQuad(c+94,"src2", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ID ");
    tracep->declBus(c+76,"io_inst", false,-1, 31,0);
    tracep->declBus(c+1,"io_ctrlIO_src2type", false,-1, 2,0);
    tracep->declBus(c+79,"io_ctrlIO_src1", false,-1, 4,0);
    tracep->declBus(c+80,"io_ctrlIO_src2", false,-1, 4,0);
    tracep->declBus(c+81,"io_ctrlIO_rd", false,-1, 4,0);
    tracep->declBus(c+82,"io_ctrlIO_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+83,"io_ctrlIO_Imm", false,-1, 63,0);
    tracep->declBus(c+4,"Inst_decode_0", false,-1, 1,0);
    tracep->declBit(c+5,"srctype2", false,-1);
    tracep->declBit(c+96,"sign", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IF ");
    tracep->declBit(c+72,"clock", false,-1);
    tracep->declBit(c+73,"reset", false,-1);
    tracep->declQuad(c+6,"io_pc", false,-1, 63,0);
    tracep->declQuad(c+6,"temp", false,-1, 63,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VCPUTop___024root__trace_init_top(VCPUTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCPUTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUTop___024root__trace_init_top\n"); );
    // Body
    VCPUTop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VCPUTop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VCPUTop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VCPUTop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VCPUTop___024root__trace_register(VCPUTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCPUTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUTop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VCPUTop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VCPUTop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VCPUTop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VCPUTop___024root__trace_full_sub_0(VCPUTop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VCPUTop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUTop___024root__trace_full_top_0\n"); );
    // Init
    VCPUTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCPUTop___024root*>(voidSelf);
    VCPUTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VCPUTop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VCPUTop___024root__trace_full_sub_0(VCPUTop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VCPUTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUTop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,((0U == (1U & (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0)))),3);
    bufp->fullQData(oldp+2,(vlSelf->CPUTop__DOT__EX_io1_result),64);
    bufp->fullCData(oldp+4,(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0),2);
    bufp->fullBit(oldp+5,((0U == (1U & (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0)))));
    bufp->fullQData(oldp+6,(vlSelf->CPUTop__DOT__IF__DOT__temp),64);
    bufp->fullQData(oldp+8,(vlSelf->CPUTop__DOT__rf[0]),64);
    bufp->fullQData(oldp+10,(vlSelf->CPUTop__DOT__rf[1]),64);
    bufp->fullQData(oldp+12,(vlSelf->CPUTop__DOT__rf[2]),64);
    bufp->fullQData(oldp+14,(vlSelf->CPUTop__DOT__rf[3]),64);
    bufp->fullQData(oldp+16,(vlSelf->CPUTop__DOT__rf[4]),64);
    bufp->fullQData(oldp+18,(vlSelf->CPUTop__DOT__rf[5]),64);
    bufp->fullQData(oldp+20,(vlSelf->CPUTop__DOT__rf[6]),64);
    bufp->fullQData(oldp+22,(vlSelf->CPUTop__DOT__rf[7]),64);
    bufp->fullQData(oldp+24,(vlSelf->CPUTop__DOT__rf[8]),64);
    bufp->fullQData(oldp+26,(vlSelf->CPUTop__DOT__rf[9]),64);
    bufp->fullQData(oldp+28,(vlSelf->CPUTop__DOT__rf[10]),64);
    bufp->fullQData(oldp+30,(vlSelf->CPUTop__DOT__rf[11]),64);
    bufp->fullQData(oldp+32,(vlSelf->CPUTop__DOT__rf[12]),64);
    bufp->fullQData(oldp+34,(vlSelf->CPUTop__DOT__rf[13]),64);
    bufp->fullQData(oldp+36,(vlSelf->CPUTop__DOT__rf[14]),64);
    bufp->fullQData(oldp+38,(vlSelf->CPUTop__DOT__rf[15]),64);
    bufp->fullQData(oldp+40,(vlSelf->CPUTop__DOT__rf[16]),64);
    bufp->fullQData(oldp+42,(vlSelf->CPUTop__DOT__rf[17]),64);
    bufp->fullQData(oldp+44,(vlSelf->CPUTop__DOT__rf[18]),64);
    bufp->fullQData(oldp+46,(vlSelf->CPUTop__DOT__rf[19]),64);
    bufp->fullQData(oldp+48,(vlSelf->CPUTop__DOT__rf[20]),64);
    bufp->fullQData(oldp+50,(vlSelf->CPUTop__DOT__rf[21]),64);
    bufp->fullQData(oldp+52,(vlSelf->CPUTop__DOT__rf[22]),64);
    bufp->fullQData(oldp+54,(vlSelf->CPUTop__DOT__rf[23]),64);
    bufp->fullQData(oldp+56,(vlSelf->CPUTop__DOT__rf[24]),64);
    bufp->fullQData(oldp+58,(vlSelf->CPUTop__DOT__rf[25]),64);
    bufp->fullQData(oldp+60,(vlSelf->CPUTop__DOT__rf[26]),64);
    bufp->fullQData(oldp+62,(vlSelf->CPUTop__DOT__rf[27]),64);
    bufp->fullQData(oldp+64,(vlSelf->CPUTop__DOT__rf[28]),64);
    bufp->fullQData(oldp+66,(vlSelf->CPUTop__DOT__rf[29]),64);
    bufp->fullQData(oldp+68,(vlSelf->CPUTop__DOT__rf[30]),64);
    bufp->fullQData(oldp+70,(vlSelf->CPUTop__DOT__rf[31]),64);
    bufp->fullBit(oldp+72,(vlSelf->clock));
    bufp->fullBit(oldp+73,(vlSelf->reset));
    bufp->fullQData(oldp+74,(vlSelf->io_pc),64);
    bufp->fullIData(oldp+76,(vlSelf->io_inst),32);
    bufp->fullQData(oldp+77,(vlSelf->io_result),64);
    bufp->fullCData(oldp+79,((0x1fU & (vlSelf->io_inst 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+80,((0x1fU & (vlSelf->io_inst 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+81,((0x1fU & (vlSelf->io_inst 
                                       >> 7U))),5);
    bufp->fullCData(oldp+82,(((0x13U == (0x707fU & vlSelf->io_inst))
                               ? 0x40U : ((0x1013U 
                                           == (0xfc00707fU 
                                               & vlSelf->io_inst))
                                           ? 0x41U : 0x42U))),7);
    bufp->fullQData(oldp+83,(((0U == (1U & (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0)))
                               ? ((((vlSelf->io_inst 
                                     >> 0x1fU) ? 0xfffffffffffffULL
                                     : 0ULL) << 0xcU) 
                                  | (QData)((IData)(
                                                    (vlSelf->io_inst 
                                                     >> 0x14U))))
                               : 0ULL)),64);
    bufp->fullQData(oldp+85,(((0U == (0x1fU & (vlSelf->io_inst 
                                               >> 0xfU)))
                               ? 0ULL : vlSelf->CPUTop__DOT__rf
                              [(0x1fU & (vlSelf->io_inst 
                                         >> 0xfU))])),64);
    bufp->fullQData(oldp+87,(((0U == (0x1fU & (vlSelf->io_inst 
                                               >> 0x14U)))
                               ? 0ULL : vlSelf->CPUTop__DOT__rf
                              [(0x1fU & (vlSelf->io_inst 
                                         >> 0x14U))])),64);
    bufp->fullBit(oldp+89,((0x42U == ((0x13U == (0x707fU 
                                                 & vlSelf->io_inst))
                                       ? 0x40U : ((0x1013U 
                                                   == 
                                                   (0xfc00707fU 
                                                    & vlSelf->io_inst))
                                                   ? 0x41U
                                                   : 0x42U)))));
    bufp->fullQData(oldp+90,(vlSelf->CPUTop__DOT__rf
                             [(0x1fU & (vlSelf->io_inst 
                                        >> 0xfU))]),64);
    bufp->fullQData(oldp+92,(vlSelf->CPUTop__DOT__rf
                             [(0x1fU & (vlSelf->io_inst 
                                        >> 0x14U))]),64);
    bufp->fullQData(oldp+94,(((0U == (IData)((0U == 
                                              (1U & (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0)))))
                               ? ((0U == (0x1fU & (vlSelf->io_inst 
                                                   >> 0x14U)))
                                   ? 0ULL : vlSelf->CPUTop__DOT__rf
                                  [(0x1fU & (vlSelf->io_inst 
                                             >> 0x14U))])
                               : ((1U == (IData)((0U 
                                                  == 
                                                  (1U 
                                                   & (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0)))))
                                   ? ((0U == (1U & (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0)))
                                       ? ((((vlSelf->io_inst 
                                             >> 0x1fU)
                                             ? 0xfffffffffffffULL
                                             : 0ULL) 
                                           << 0xcU) 
                                          | (QData)((IData)(
                                                            (vlSelf->io_inst 
                                                             >> 0x14U))))
                                       : 0ULL) : 0ULL))),64);
    bufp->fullBit(oldp+96,((vlSelf->io_inst >> 0x1fU)));
    bufp->fullBit(oldp+97,(1U));
}
