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
        bufp->chgCData(oldp+0,((0U == (1U & (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0)))),3);
        bufp->chgQData(oldp+1,(vlSelf->CPUTop__DOT__EX_io1_result),64);
        bufp->chgCData(oldp+3,(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0),2);
        bufp->chgBit(oldp+4,((0U == (1U & (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0)))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgQData(oldp+5,(vlSelf->CPUTop__DOT__IF__DOT__temp),64);
        bufp->chgQData(oldp+7,(vlSelf->CPUTop__DOT__rf[0]),64);
        bufp->chgQData(oldp+9,(vlSelf->CPUTop__DOT__rf[1]),64);
        bufp->chgQData(oldp+11,(vlSelf->CPUTop__DOT__rf[2]),64);
        bufp->chgQData(oldp+13,(vlSelf->CPUTop__DOT__rf[3]),64);
        bufp->chgQData(oldp+15,(vlSelf->CPUTop__DOT__rf[4]),64);
        bufp->chgQData(oldp+17,(vlSelf->CPUTop__DOT__rf[5]),64);
        bufp->chgQData(oldp+19,(vlSelf->CPUTop__DOT__rf[6]),64);
        bufp->chgQData(oldp+21,(vlSelf->CPUTop__DOT__rf[7]),64);
        bufp->chgQData(oldp+23,(vlSelf->CPUTop__DOT__rf[8]),64);
        bufp->chgQData(oldp+25,(vlSelf->CPUTop__DOT__rf[9]),64);
        bufp->chgQData(oldp+27,(vlSelf->CPUTop__DOT__rf[10]),64);
        bufp->chgQData(oldp+29,(vlSelf->CPUTop__DOT__rf[11]),64);
        bufp->chgQData(oldp+31,(vlSelf->CPUTop__DOT__rf[12]),64);
        bufp->chgQData(oldp+33,(vlSelf->CPUTop__DOT__rf[13]),64);
        bufp->chgQData(oldp+35,(vlSelf->CPUTop__DOT__rf[14]),64);
        bufp->chgQData(oldp+37,(vlSelf->CPUTop__DOT__rf[15]),64);
        bufp->chgQData(oldp+39,(vlSelf->CPUTop__DOT__rf[16]),64);
        bufp->chgQData(oldp+41,(vlSelf->CPUTop__DOT__rf[17]),64);
        bufp->chgQData(oldp+43,(vlSelf->CPUTop__DOT__rf[18]),64);
        bufp->chgQData(oldp+45,(vlSelf->CPUTop__DOT__rf[19]),64);
        bufp->chgQData(oldp+47,(vlSelf->CPUTop__DOT__rf[20]),64);
        bufp->chgQData(oldp+49,(vlSelf->CPUTop__DOT__rf[21]),64);
        bufp->chgQData(oldp+51,(vlSelf->CPUTop__DOT__rf[22]),64);
        bufp->chgQData(oldp+53,(vlSelf->CPUTop__DOT__rf[23]),64);
        bufp->chgQData(oldp+55,(vlSelf->CPUTop__DOT__rf[24]),64);
        bufp->chgQData(oldp+57,(vlSelf->CPUTop__DOT__rf[25]),64);
        bufp->chgQData(oldp+59,(vlSelf->CPUTop__DOT__rf[26]),64);
        bufp->chgQData(oldp+61,(vlSelf->CPUTop__DOT__rf[27]),64);
        bufp->chgQData(oldp+63,(vlSelf->CPUTop__DOT__rf[28]),64);
        bufp->chgQData(oldp+65,(vlSelf->CPUTop__DOT__rf[29]),64);
        bufp->chgQData(oldp+67,(vlSelf->CPUTop__DOT__rf[30]),64);
        bufp->chgQData(oldp+69,(vlSelf->CPUTop__DOT__rf[31]),64);
    }
    bufp->chgBit(oldp+71,(vlSelf->clock));
    bufp->chgBit(oldp+72,(vlSelf->reset));
    bufp->chgQData(oldp+73,(vlSelf->io_pc),64);
    bufp->chgIData(oldp+75,(vlSelf->io_inst),32);
    bufp->chgQData(oldp+76,(vlSelf->io_result),64);
    bufp->chgCData(oldp+78,((0x1fU & (vlSelf->io_inst 
                                      >> 0xfU))),5);
    bufp->chgCData(oldp+79,((0x1fU & (vlSelf->io_inst 
                                      >> 0x14U))),5);
    bufp->chgCData(oldp+80,((0x1fU & (vlSelf->io_inst 
                                      >> 7U))),5);
    bufp->chgCData(oldp+81,(((0x13U == (0x707fU & vlSelf->io_inst))
                              ? 0x40U : ((0x1013U == 
                                          (0xfc00707fU 
                                           & vlSelf->io_inst))
                                          ? 0x41U : 0U))),7);
    bufp->chgQData(oldp+82,(((0U == (1U & (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0)))
                              ? ((((vlSelf->io_inst 
                                    >> 0x1fU) ? 0xfffffffffffffULL
                                    : 0ULL) << 0xcU) 
                                 | (QData)((IData)(
                                                   (vlSelf->io_inst 
                                                    >> 0x14U))))
                              : 0ULL)),64);
    bufp->chgQData(oldp+84,(((0U == (0x1fU & (vlSelf->io_inst 
                                              >> 0xfU)))
                              ? 0ULL : vlSelf->CPUTop__DOT__rf
                             [(0x1fU & (vlSelf->io_inst 
                                        >> 0xfU))])),64);
    bufp->chgQData(oldp+86,(((0U == (0x1fU & (vlSelf->io_inst 
                                              >> 0x14U)))
                              ? 0ULL : vlSelf->CPUTop__DOT__rf
                             [(0x1fU & (vlSelf->io_inst 
                                        >> 0x14U))])),64);
    bufp->chgQData(oldp+88,(vlSelf->CPUTop__DOT__rf
                            [(0x1fU & (vlSelf->io_inst 
                                       >> 0xfU))]),64);
    bufp->chgQData(oldp+90,(vlSelf->CPUTop__DOT__rf
                            [(0x1fU & (vlSelf->io_inst 
                                       >> 0x14U))]),64);
    bufp->chgQData(oldp+92,(((0U == (IData)((0U == 
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
    bufp->chgBit(oldp+94,((vlSelf->io_inst >> 0x1fU)));
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
