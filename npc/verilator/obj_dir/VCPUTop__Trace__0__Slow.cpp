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
    tracep->declBit(c+85,"clock", false,-1);
    tracep->declBit(c+86,"reset", false,-1);
    tracep->declQuad(c+87,"io_pc", false,-1, 63,0);
    tracep->declBus(c+89,"io_inst", false,-1, 31,0);
    tracep->declQuad(c+90,"io_result", false,-1, 63,0);
    tracep->pushNamePrefix("CPUTop ");
    tracep->declBit(c+85,"clock", false,-1);
    tracep->declBit(c+86,"reset", false,-1);
    tracep->declQuad(c+87,"io_pc", false,-1, 63,0);
    tracep->declBus(c+89,"io_inst", false,-1, 31,0);
    tracep->declQuad(c+90,"io_result", false,-1, 63,0);
    tracep->declBit(c+85,"IF_clock", false,-1);
    tracep->declBit(c+86,"IF_reset", false,-1);
    tracep->declQuad(c+19,"IF_io_dnpc", false,-1, 63,0);
    tracep->declBit(c+1,"IF_io_is_jump", false,-1);
    tracep->declQuad(c+19,"IF_io_pc", false,-1, 63,0);
    tracep->declBus(c+89,"ID_io_inst", false,-1, 31,0);
    tracep->declBus(c+2,"ID_io_ctrlIO_src1type", false,-1, 2,0);
    tracep->declBus(c+3,"ID_io_ctrlIO_src2type", false,-1, 2,0);
    tracep->declBus(c+92,"ID_io_ctrlIO_src1", false,-1, 4,0);
    tracep->declBus(c+93,"ID_io_ctrlIO_src2", false,-1, 4,0);
    tracep->declBus(c+94,"ID_io_ctrlIO_rd", false,-1, 4,0);
    tracep->declBus(c+4,"ID_io_ctrlIO_futype", false,-1, 2,0);
    tracep->declBus(c+5,"ID_io_ctrlIO_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+95,"ID_io_ctrlIO_Imm", false,-1, 63,0);
    tracep->declBus(c+2,"EX_io_src1type", false,-1, 2,0);
    tracep->declBus(c+3,"EX_io_src2type", false,-1, 2,0);
    tracep->declBus(c+4,"EX_io_futype", false,-1, 2,0);
    tracep->declBus(c+5,"EX_io_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+95,"EX_io_Imm", false,-1, 63,0);
    tracep->declQuad(c+97,"EX_io1_REG1", false,-1, 63,0);
    tracep->declQuad(c+99,"EX_io1_REG2", false,-1, 63,0);
    tracep->declQuad(c+19,"EX_io1_PC", false,-1, 63,0);
    tracep->declQuad(c+6,"EX_io1_result", false,-1, 63,0);
    tracep->declBit(c+8,"EX_io1_is_break", false,-1);
    tracep->declBit(c+1,"EX_io1_is_jump", false,-1);
    tracep->declQuad(c+19,"EX_io1_dnpc", false,-1, 63,0);
    tracep->declBit(c+8,"DIP_is_break", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+21+i*2,"rf", true,(i+0), 63,0);
    }
    tracep->declBit(c+109,"rf_EX_io1_REG1_MPORT_en", false,-1);
    tracep->declBus(c+92,"rf_EX_io1_REG1_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+101,"rf_EX_io1_REG1_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+109,"rf_EX_io1_REG2_MPORT_en", false,-1);
    tracep->declBus(c+93,"rf_EX_io1_REG2_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+103,"rf_EX_io1_REG2_MPORT_data", false,-1, 63,0);
    tracep->declQuad(c+6,"rf_MPORT_data", false,-1, 63,0);
    tracep->declBus(c+94,"rf_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+109,"rf_MPORT_mask", false,-1);
    tracep->declBit(c+109,"rf_MPORT_en", false,-1);
    tracep->declBus(c+92,"src1add", false,-1, 4,0);
    tracep->declBus(c+93,"src2add", false,-1, 4,0);
    tracep->pushNamePrefix("DIP ");
    tracep->declBit(c+8,"is_break", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EX ");
    tracep->declBus(c+2,"io_src1type", false,-1, 2,0);
    tracep->declBus(c+3,"io_src2type", false,-1, 2,0);
    tracep->declBus(c+4,"io_futype", false,-1, 2,0);
    tracep->declBus(c+5,"io_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+95,"io_Imm", false,-1, 63,0);
    tracep->declQuad(c+97,"io1_REG1", false,-1, 63,0);
    tracep->declQuad(c+99,"io1_REG2", false,-1, 63,0);
    tracep->declQuad(c+19,"io1_PC", false,-1, 63,0);
    tracep->declQuad(c+6,"io1_result", false,-1, 63,0);
    tracep->declBit(c+8,"io1_is_break", false,-1);
    tracep->declBit(c+1,"io1_is_jump", false,-1);
    tracep->declQuad(c+19,"io1_dnpc", false,-1, 63,0);
    tracep->declQuad(c+9,"src1", false,-1, 63,0);
    tracep->declQuad(c+11,"src2", false,-1, 63,0);
    tracep->declQuad(c+13,"alu_result", false,-1, 63,0);
    tracep->declQuad(c+105,"jump_result", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ID ");
    tracep->declBus(c+89,"io_inst", false,-1, 31,0);
    tracep->declBus(c+2,"io_ctrlIO_src1type", false,-1, 2,0);
    tracep->declBus(c+3,"io_ctrlIO_src2type", false,-1, 2,0);
    tracep->declBus(c+92,"io_ctrlIO_src1", false,-1, 4,0);
    tracep->declBus(c+93,"io_ctrlIO_src2", false,-1, 4,0);
    tracep->declBus(c+94,"io_ctrlIO_rd", false,-1, 4,0);
    tracep->declBus(c+4,"io_ctrlIO_futype", false,-1, 2,0);
    tracep->declBus(c+5,"io_ctrlIO_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+95,"io_ctrlIO_Imm", false,-1, 63,0);
    tracep->declBus(c+15,"Inst_decode_0", false,-1, 2,0);
    tracep->declBus(c+16,"Inst_decode_1", false,-1, 1,0);
    tracep->declBus(c+17,"srctype1", false,-1, 1,0);
    tracep->declBit(c+18,"srctype2", false,-1);
    tracep->declBit(c+107,"sign", false,-1);
    tracep->declBit(c+108,"sign_1", false,-1);
    tracep->declBit(c+107,"sign_2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IF ");
    tracep->declBit(c+85,"clock", false,-1);
    tracep->declBit(c+86,"reset", false,-1);
    tracep->declQuad(c+19,"io_dnpc", false,-1, 63,0);
    tracep->declBit(c+1,"io_is_jump", false,-1);
    tracep->declQuad(c+19,"io_pc", false,-1, 63,0);
    tracep->declQuad(c+19,"temp", false,-1, 63,0);
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
    bufp->fullBit(oldp+1,((3U == (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_1))));
    bufp->fullCData(oldp+2,(vlSelf->CPUTop__DOT__ID__DOT___io_ctrlIO_src1type_T_2),3);
    bufp->fullCData(oldp+3,(vlSelf->CPUTop__DOT__ID__DOT__srctype2),3);
    bufp->fullCData(oldp+4,(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_1),3);
    bufp->fullCData(oldp+5,(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype),7);
    bufp->fullQData(oldp+6,(vlSelf->CPUTop__DOT__EX_io1_result),64);
    bufp->fullBit(oldp+8,((0x42U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))));
    bufp->fullQData(oldp+9,(vlSelf->CPUTop__DOT__EX__DOT__src1),64);
    bufp->fullQData(oldp+11,(vlSelf->CPUTop__DOT__EX__DOT__src2),64);
    bufp->fullQData(oldp+13,(((0x40U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                               ? (vlSelf->CPUTop__DOT__EX__DOT__src1 
                                  + vlSelf->CPUTop__DOT__EX__DOT__src2)
                               : ((0x44U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                   ? (vlSelf->CPUTop__DOT__EX__DOT__src1 
                                      | vlSelf->CPUTop__DOT__EX__DOT__src2)
                                   : 0ULL))),64);
    bufp->fullCData(oldp+15,(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0),3);
    bufp->fullCData(oldp+16,(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_1),2);
    bufp->fullCData(oldp+17,(((0U == (1U & (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0)))
                               ? 0U : ((4U == (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0))
                                        ? 2U : ((3U 
                                                 == 
                                                 (3U 
                                                  & (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0)))
                                                 ? 2U
                                                 : 0U)))),2);
    bufp->fullBit(oldp+18,(vlSelf->CPUTop__DOT__ID__DOT__srctype2));
    bufp->fullQData(oldp+19,(vlSelf->CPUTop__DOT__IF__DOT__temp),64);
    bufp->fullQData(oldp+21,(vlSelf->CPUTop__DOT__rf[0]),64);
    bufp->fullQData(oldp+23,(vlSelf->CPUTop__DOT__rf[1]),64);
    bufp->fullQData(oldp+25,(vlSelf->CPUTop__DOT__rf[2]),64);
    bufp->fullQData(oldp+27,(vlSelf->CPUTop__DOT__rf[3]),64);
    bufp->fullQData(oldp+29,(vlSelf->CPUTop__DOT__rf[4]),64);
    bufp->fullQData(oldp+31,(vlSelf->CPUTop__DOT__rf[5]),64);
    bufp->fullQData(oldp+33,(vlSelf->CPUTop__DOT__rf[6]),64);
    bufp->fullQData(oldp+35,(vlSelf->CPUTop__DOT__rf[7]),64);
    bufp->fullQData(oldp+37,(vlSelf->CPUTop__DOT__rf[8]),64);
    bufp->fullQData(oldp+39,(vlSelf->CPUTop__DOT__rf[9]),64);
    bufp->fullQData(oldp+41,(vlSelf->CPUTop__DOT__rf[10]),64);
    bufp->fullQData(oldp+43,(vlSelf->CPUTop__DOT__rf[11]),64);
    bufp->fullQData(oldp+45,(vlSelf->CPUTop__DOT__rf[12]),64);
    bufp->fullQData(oldp+47,(vlSelf->CPUTop__DOT__rf[13]),64);
    bufp->fullQData(oldp+49,(vlSelf->CPUTop__DOT__rf[14]),64);
    bufp->fullQData(oldp+51,(vlSelf->CPUTop__DOT__rf[15]),64);
    bufp->fullQData(oldp+53,(vlSelf->CPUTop__DOT__rf[16]),64);
    bufp->fullQData(oldp+55,(vlSelf->CPUTop__DOT__rf[17]),64);
    bufp->fullQData(oldp+57,(vlSelf->CPUTop__DOT__rf[18]),64);
    bufp->fullQData(oldp+59,(vlSelf->CPUTop__DOT__rf[19]),64);
    bufp->fullQData(oldp+61,(vlSelf->CPUTop__DOT__rf[20]),64);
    bufp->fullQData(oldp+63,(vlSelf->CPUTop__DOT__rf[21]),64);
    bufp->fullQData(oldp+65,(vlSelf->CPUTop__DOT__rf[22]),64);
    bufp->fullQData(oldp+67,(vlSelf->CPUTop__DOT__rf[23]),64);
    bufp->fullQData(oldp+69,(vlSelf->CPUTop__DOT__rf[24]),64);
    bufp->fullQData(oldp+71,(vlSelf->CPUTop__DOT__rf[25]),64);
    bufp->fullQData(oldp+73,(vlSelf->CPUTop__DOT__rf[26]),64);
    bufp->fullQData(oldp+75,(vlSelf->CPUTop__DOT__rf[27]),64);
    bufp->fullQData(oldp+77,(vlSelf->CPUTop__DOT__rf[28]),64);
    bufp->fullQData(oldp+79,(vlSelf->CPUTop__DOT__rf[29]),64);
    bufp->fullQData(oldp+81,(vlSelf->CPUTop__DOT__rf[30]),64);
    bufp->fullQData(oldp+83,(vlSelf->CPUTop__DOT__rf[31]),64);
    bufp->fullBit(oldp+85,(vlSelf->clock));
    bufp->fullBit(oldp+86,(vlSelf->reset));
    bufp->fullQData(oldp+87,(vlSelf->io_pc),64);
    bufp->fullIData(oldp+89,(vlSelf->io_inst),32);
    bufp->fullQData(oldp+90,(vlSelf->io_result),64);
    bufp->fullCData(oldp+92,((0x1fU & (vlSelf->io_inst 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+93,((0x1fU & (vlSelf->io_inst 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+94,((0x1fU & (vlSelf->io_inst 
                                       >> 7U))),5);
    bufp->fullQData(oldp+95,(((0U == (1U & (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0)))
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
    bufp->fullQData(oldp+97,(((0U == (0x1fU & (vlSelf->io_inst 
                                               >> 0xfU)))
                               ? 0ULL : vlSelf->CPUTop__DOT__rf
                              [(0x1fU & (vlSelf->io_inst 
                                         >> 0xfU))])),64);
    bufp->fullQData(oldp+99,(((0U == (0x1fU & (vlSelf->io_inst 
                                               >> 0x14U)))
                               ? 0ULL : vlSelf->CPUTop__DOT__rf
                              [(0x1fU & (vlSelf->io_inst 
                                         >> 0x14U))])),64);
    bufp->fullQData(oldp+101,(vlSelf->CPUTop__DOT__rf
                              [(0x1fU & (vlSelf->io_inst 
                                         >> 0xfU))]),64);
    bufp->fullQData(oldp+103,(vlSelf->CPUTop__DOT__rf
                              [(0x1fU & (vlSelf->io_inst 
                                         >> 0x14U))]),64);
    bufp->fullQData(oldp+105,(((3U == (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_1))
                                ? (4ULL + vlSelf->CPUTop__DOT__IF__DOT__temp)
                                : 0ULL)),64);
    bufp->fullBit(oldp+107,((vlSelf->io_inst >> 0x1fU)));
    bufp->fullBit(oldp+108,((vlSelf->io_inst >> 0x1fU)));
    bufp->fullBit(oldp+109,(1U));
}
