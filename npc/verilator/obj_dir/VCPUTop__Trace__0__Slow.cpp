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
    tracep->declBit(c+84,"clock", false,-1);
    tracep->declBit(c+85,"reset", false,-1);
    tracep->declQuad(c+86,"io_pc", false,-1, 63,0);
    tracep->declBus(c+88,"io_inst", false,-1, 31,0);
    tracep->declQuad(c+89,"io_result", false,-1, 63,0);
    tracep->pushNamePrefix("CPUTop ");
    tracep->declBit(c+84,"clock", false,-1);
    tracep->declBit(c+85,"reset", false,-1);
    tracep->declQuad(c+86,"io_pc", false,-1, 63,0);
    tracep->declBus(c+88,"io_inst", false,-1, 31,0);
    tracep->declQuad(c+89,"io_result", false,-1, 63,0);
    tracep->declBit(c+84,"IF_clock", false,-1);
    tracep->declBit(c+85,"IF_reset", false,-1);
    tracep->declQuad(c+18,"IF_io_pc", false,-1, 63,0);
    tracep->declBus(c+88,"ID_io_inst", false,-1, 31,0);
    tracep->declBus(c+1,"ID_io_ctrlIO_src1type", false,-1, 2,0);
    tracep->declBus(c+2,"ID_io_ctrlIO_src2type", false,-1, 2,0);
    tracep->declBus(c+91,"ID_io_ctrlIO_src1", false,-1, 4,0);
    tracep->declBus(c+92,"ID_io_ctrlIO_src2", false,-1, 4,0);
    tracep->declBus(c+93,"ID_io_ctrlIO_rd", false,-1, 4,0);
    tracep->declBus(c+3,"ID_io_ctrlIO_futype", false,-1, 2,0);
    tracep->declBus(c+4,"ID_io_ctrlIO_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+94,"ID_io_ctrlIO_Imm", false,-1, 63,0);
    tracep->declBus(c+1,"EX_io_src1type", false,-1, 2,0);
    tracep->declBus(c+2,"EX_io_src2type", false,-1, 2,0);
    tracep->declBus(c+3,"EX_io_futype", false,-1, 2,0);
    tracep->declBus(c+4,"EX_io_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+94,"EX_io_Imm", false,-1, 63,0);
    tracep->declQuad(c+96,"EX_io1_REG1", false,-1, 63,0);
    tracep->declQuad(c+98,"EX_io1_REG2", false,-1, 63,0);
    tracep->declQuad(c+18,"EX_io1_PC", false,-1, 63,0);
    tracep->declQuad(c+5,"EX_io1_result", false,-1, 63,0);
    tracep->declBit(c+7,"EX_io1_is_break", false,-1);
    tracep->declBit(c+7,"DIP_is_break", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+20+i*2,"rf", true,(i+0), 63,0);
    }
    tracep->declBit(c+108,"rf_EX_io1_REG1_MPORT_en", false,-1);
    tracep->declBus(c+91,"rf_EX_io1_REG1_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+100,"rf_EX_io1_REG1_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+108,"rf_EX_io1_REG2_MPORT_en", false,-1);
    tracep->declBus(c+92,"rf_EX_io1_REG2_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+102,"rf_EX_io1_REG2_MPORT_data", false,-1, 63,0);
    tracep->declQuad(c+5,"rf_MPORT_data", false,-1, 63,0);
    tracep->declBus(c+93,"rf_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+108,"rf_MPORT_mask", false,-1);
    tracep->declBit(c+108,"rf_MPORT_en", false,-1);
    tracep->declBus(c+91,"src1add", false,-1, 4,0);
    tracep->declBus(c+92,"src2add", false,-1, 4,0);
    tracep->pushNamePrefix("DIP ");
    tracep->declBit(c+7,"is_break", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EX ");
    tracep->declBus(c+1,"io_src1type", false,-1, 2,0);
    tracep->declBus(c+2,"io_src2type", false,-1, 2,0);
    tracep->declBus(c+3,"io_futype", false,-1, 2,0);
    tracep->declBus(c+4,"io_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+94,"io_Imm", false,-1, 63,0);
    tracep->declQuad(c+96,"io1_REG1", false,-1, 63,0);
    tracep->declQuad(c+98,"io1_REG2", false,-1, 63,0);
    tracep->declQuad(c+18,"io1_PC", false,-1, 63,0);
    tracep->declQuad(c+5,"io1_result", false,-1, 63,0);
    tracep->declBit(c+7,"io1_is_break", false,-1);
    tracep->declQuad(c+8,"src1", false,-1, 63,0);
    tracep->declQuad(c+10,"src2", false,-1, 63,0);
    tracep->declQuad(c+12,"alu_result", false,-1, 63,0);
    tracep->declQuad(c+104,"jump_result", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ID ");
    tracep->declBus(c+88,"io_inst", false,-1, 31,0);
    tracep->declBus(c+1,"io_ctrlIO_src1type", false,-1, 2,0);
    tracep->declBus(c+2,"io_ctrlIO_src2type", false,-1, 2,0);
    tracep->declBus(c+91,"io_ctrlIO_src1", false,-1, 4,0);
    tracep->declBus(c+92,"io_ctrlIO_src2", false,-1, 4,0);
    tracep->declBus(c+93,"io_ctrlIO_rd", false,-1, 4,0);
    tracep->declBus(c+3,"io_ctrlIO_futype", false,-1, 2,0);
    tracep->declBus(c+4,"io_ctrlIO_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+94,"io_ctrlIO_Imm", false,-1, 63,0);
    tracep->declBus(c+14,"Inst_decode_0", false,-1, 2,0);
    tracep->declBus(c+15,"Inst_decode_1", false,-1, 1,0);
    tracep->declBus(c+16,"srctype1", false,-1, 1,0);
    tracep->declBit(c+17,"srctype2", false,-1);
    tracep->declBit(c+106,"sign", false,-1);
    tracep->declBit(c+107,"sign_1", false,-1);
    tracep->declBit(c+106,"sign_2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IF ");
    tracep->declBit(c+84,"clock", false,-1);
    tracep->declBit(c+85,"reset", false,-1);
    tracep->declQuad(c+18,"io_pc", false,-1, 63,0);
    tracep->declQuad(c+18,"temp", false,-1, 63,0);
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
    bufp->fullCData(oldp+1,(vlSelf->CPUTop__DOT__ID__DOT___io_ctrlIO_src1type_T_2),3);
    bufp->fullCData(oldp+2,(vlSelf->CPUTop__DOT__ID__DOT__srctype2),3);
    bufp->fullCData(oldp+3,(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_1),3);
    bufp->fullCData(oldp+4,(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype),7);
    bufp->fullQData(oldp+5,(vlSelf->CPUTop__DOT__EX_io1_result),64);
    bufp->fullBit(oldp+7,((0x42U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))));
    bufp->fullQData(oldp+8,(vlSelf->CPUTop__DOT__EX__DOT__src1),64);
    bufp->fullQData(oldp+10,(vlSelf->CPUTop__DOT__EX__DOT__src2),64);
    bufp->fullQData(oldp+12,(((0x40U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                               ? (vlSelf->CPUTop__DOT__EX__DOT__src1 
                                  + vlSelf->CPUTop__DOT__EX__DOT__src2)
                               : ((0x44U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                   ? (vlSelf->CPUTop__DOT__EX__DOT__src1 
                                      | vlSelf->CPUTop__DOT__EX__DOT__src2)
                                   : 0ULL))),64);
    bufp->fullCData(oldp+14,(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0),3);
    bufp->fullCData(oldp+15,(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_1),2);
    bufp->fullCData(oldp+16,(((0U == (1U & (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0)))
                               ? 0U : ((4U == (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0))
                                        ? 2U : ((3U 
                                                 == 
                                                 (3U 
                                                  & (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0)))
                                                 ? 2U
                                                 : 0U)))),2);
    bufp->fullBit(oldp+17,(vlSelf->CPUTop__DOT__ID__DOT__srctype2));
    bufp->fullQData(oldp+18,(vlSelf->CPUTop__DOT__IF__DOT__temp),64);
    bufp->fullQData(oldp+20,(vlSelf->CPUTop__DOT__rf[0]),64);
    bufp->fullQData(oldp+22,(vlSelf->CPUTop__DOT__rf[1]),64);
    bufp->fullQData(oldp+24,(vlSelf->CPUTop__DOT__rf[2]),64);
    bufp->fullQData(oldp+26,(vlSelf->CPUTop__DOT__rf[3]),64);
    bufp->fullQData(oldp+28,(vlSelf->CPUTop__DOT__rf[4]),64);
    bufp->fullQData(oldp+30,(vlSelf->CPUTop__DOT__rf[5]),64);
    bufp->fullQData(oldp+32,(vlSelf->CPUTop__DOT__rf[6]),64);
    bufp->fullQData(oldp+34,(vlSelf->CPUTop__DOT__rf[7]),64);
    bufp->fullQData(oldp+36,(vlSelf->CPUTop__DOT__rf[8]),64);
    bufp->fullQData(oldp+38,(vlSelf->CPUTop__DOT__rf[9]),64);
    bufp->fullQData(oldp+40,(vlSelf->CPUTop__DOT__rf[10]),64);
    bufp->fullQData(oldp+42,(vlSelf->CPUTop__DOT__rf[11]),64);
    bufp->fullQData(oldp+44,(vlSelf->CPUTop__DOT__rf[12]),64);
    bufp->fullQData(oldp+46,(vlSelf->CPUTop__DOT__rf[13]),64);
    bufp->fullQData(oldp+48,(vlSelf->CPUTop__DOT__rf[14]),64);
    bufp->fullQData(oldp+50,(vlSelf->CPUTop__DOT__rf[15]),64);
    bufp->fullQData(oldp+52,(vlSelf->CPUTop__DOT__rf[16]),64);
    bufp->fullQData(oldp+54,(vlSelf->CPUTop__DOT__rf[17]),64);
    bufp->fullQData(oldp+56,(vlSelf->CPUTop__DOT__rf[18]),64);
    bufp->fullQData(oldp+58,(vlSelf->CPUTop__DOT__rf[19]),64);
    bufp->fullQData(oldp+60,(vlSelf->CPUTop__DOT__rf[20]),64);
    bufp->fullQData(oldp+62,(vlSelf->CPUTop__DOT__rf[21]),64);
    bufp->fullQData(oldp+64,(vlSelf->CPUTop__DOT__rf[22]),64);
    bufp->fullQData(oldp+66,(vlSelf->CPUTop__DOT__rf[23]),64);
    bufp->fullQData(oldp+68,(vlSelf->CPUTop__DOT__rf[24]),64);
    bufp->fullQData(oldp+70,(vlSelf->CPUTop__DOT__rf[25]),64);
    bufp->fullQData(oldp+72,(vlSelf->CPUTop__DOT__rf[26]),64);
    bufp->fullQData(oldp+74,(vlSelf->CPUTop__DOT__rf[27]),64);
    bufp->fullQData(oldp+76,(vlSelf->CPUTop__DOT__rf[28]),64);
    bufp->fullQData(oldp+78,(vlSelf->CPUTop__DOT__rf[29]),64);
    bufp->fullQData(oldp+80,(vlSelf->CPUTop__DOT__rf[30]),64);
    bufp->fullQData(oldp+82,(vlSelf->CPUTop__DOT__rf[31]),64);
    bufp->fullBit(oldp+84,(vlSelf->clock));
    bufp->fullBit(oldp+85,(vlSelf->reset));
    bufp->fullQData(oldp+86,(vlSelf->io_pc),64);
    bufp->fullIData(oldp+88,(vlSelf->io_inst),32);
    bufp->fullQData(oldp+89,(vlSelf->io_result),64);
    bufp->fullCData(oldp+91,((0x1fU & (vlSelf->io_inst 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+92,((0x1fU & (vlSelf->io_inst 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+93,((0x1fU & (vlSelf->io_inst 
                                       >> 7U))),5);
    bufp->fullQData(oldp+94,(((0U == (1U & (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0)))
                               ? ((((vlSelf->io_inst 
                                     >> 0x1fU) ? 0xfffffffffffffULL
                                     : 0ULL) << 0xcU) 
                                  | (QData)((IData)(
                                                    (vlSelf->io_inst 
                                                     >> 0x14U))))
                               : ((3U == (3U & (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0)))
                                   ? (((QData)((IData)(
                                                       ((vlSelf->io_inst 
                                                         >> 0x1fU)
                                                         ? 0xffffffffU
                                                         : 0U))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   (0xfffff000U 
                                                                    & vlSelf->io_inst))))
                                   : ((4U == (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0))
                                       ? ((((vlSelf->io_inst 
                                             >> 0x1fU)
                                             ? 0x7ffffffffffULL
                                             : 0ULL) 
                                           << 0x15U) 
                                          | (QData)((IData)(
                                                            ((0x100000U 
                                                              & (vlSelf->io_inst 
                                                                 >> 0xbU)) 
                                                             | ((0xff000U 
                                                                 & vlSelf->io_inst) 
                                                                | ((0x800U 
                                                                    & (vlSelf->io_inst 
                                                                       >> 9U)) 
                                                                   | (0x7feU 
                                                                      & (vlSelf->io_inst 
                                                                         >> 0x14U))))))))
                                       : 0ULL)))),64);
    bufp->fullQData(oldp+96,(((0U == (0x1fU & (vlSelf->io_inst 
                                               >> 0xfU)))
                               ? 0ULL : vlSelf->CPUTop__DOT__rf
                              [(0x1fU & (vlSelf->io_inst 
                                         >> 0xfU))])),64);
    bufp->fullQData(oldp+98,(((0U == (0x1fU & (vlSelf->io_inst 
                                               >> 0x14U)))
                               ? 0ULL : vlSelf->CPUTop__DOT__rf
                              [(0x1fU & (vlSelf->io_inst 
                                         >> 0x14U))])),64);
    bufp->fullQData(oldp+100,(vlSelf->CPUTop__DOT__rf
                              [(0x1fU & (vlSelf->io_inst 
                                         >> 0xfU))]),64);
    bufp->fullQData(oldp+102,(vlSelf->CPUTop__DOT__rf
                              [(0x1fU & (vlSelf->io_inst 
                                         >> 0x14U))]),64);
    bufp->fullQData(oldp+104,(((3U == (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_1))
                                ? (4ULL + vlSelf->CPUTop__DOT__IF__DOT__temp)
                                : 0ULL)),64);
    bufp->fullBit(oldp+106,((vlSelf->io_inst >> 0x1fU)));
    bufp->fullBit(oldp+107,((vlSelf->io_inst >> 0x1fU)));
    bufp->fullBit(oldp+108,(1U));
}
