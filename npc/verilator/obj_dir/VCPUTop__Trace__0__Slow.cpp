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
    tracep->declBit(c+267,"clock", false,-1);
    tracep->declBit(c+268,"reset", false,-1);
    tracep->declQuad(c+269,"io_pc", false,-1, 63,0);
    tracep->declBus(c+271,"io_inst", false,-1, 31,0);
    tracep->declQuad(c+272,"io_result", false,-1, 63,0);
    tracep->pushNamePrefix("CPUTop ");
    tracep->declBit(c+267,"clock", false,-1);
    tracep->declBit(c+268,"reset", false,-1);
    tracep->declQuad(c+269,"io_pc", false,-1, 63,0);
    tracep->declBus(c+271,"io_inst", false,-1, 31,0);
    tracep->declQuad(c+272,"io_result", false,-1, 63,0);
    tracep->declBit(c+267,"IF_clock", false,-1);
    tracep->declBit(c+268,"IF_reset", false,-1);
    tracep->declQuad(c+1,"IF_io_dnpc", false,-1, 63,0);
    tracep->declBit(c+3,"IF_io_is_jump", false,-1);
    tracep->declBit(c+4,"IF_io_is_branch", false,-1);
    tracep->declQuad(c+5,"IF_io_pc", false,-1, 63,0);
    tracep->declQuad(c+5,"IFM_pc", false,-1, 63,0);
    tracep->declBus(c+7,"IFM_inst", false,-1, 31,0);
    tracep->declBus(c+7,"ID_io_inst", false,-1, 31,0);
    tracep->declBus(c+8,"ID_io_ctrlIO_src1type", false,-1, 2,0);
    tracep->declBus(c+9,"ID_io_ctrlIO_src2type", false,-1, 2,0);
    tracep->declBus(c+10,"ID_io_ctrlIO_src1", false,-1, 4,0);
    tracep->declBus(c+11,"ID_io_ctrlIO_src2", false,-1, 4,0);
    tracep->declBus(c+12,"ID_io_ctrlIO_rd", false,-1, 4,0);
    tracep->declBus(c+13,"ID_io_ctrlIO_futype", false,-1, 2,0);
    tracep->declBus(c+14,"ID_io_ctrlIO_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+15,"ID_io_ctrlIO_Imm", false,-1, 63,0);
    tracep->declBit(c+17,"ID_io_rd_en", false,-1);
    tracep->declBit(c+18,"ID_io_mem_we", false,-1);
    tracep->declBus(c+8,"EX_io_src1type", false,-1, 2,0);
    tracep->declBus(c+9,"EX_io_src2type", false,-1, 2,0);
    tracep->declBus(c+13,"EX_io_futype", false,-1, 2,0);
    tracep->declBus(c+14,"EX_io_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+15,"EX_io_Imm", false,-1, 63,0);
    tracep->declQuad(c+19,"EX_io1_REG1", false,-1, 63,0);
    tracep->declQuad(c+21,"EX_io1_REG2", false,-1, 63,0);
    tracep->declQuad(c+5,"EX_io1_PC", false,-1, 63,0);
    tracep->declQuad(c+23,"EX_io1_result", false,-1, 63,0);
    tracep->declBit(c+25,"EX_io1_is_break", false,-1);
    tracep->declBit(c+3,"EX_io1_is_jump", false,-1);
    tracep->declBit(c+4,"EX_io1_is_branch", false,-1);
    tracep->declQuad(c+1,"EX_io1_dnpc", false,-1, 63,0);
    tracep->declQuad(c+26,"EX_io1_addr", false,-1, 63,0);
    tracep->declQuad(c+28,"EX_io1_rdata", false,-1, 63,0);
    tracep->declQuad(c+30,"EX_io1_wdata", false,-1, 63,0);
    tracep->declBus(c+32,"EX_io1_wmask", false,-1, 7,0);
    tracep->declBit(c+25,"DIP_is_break", false,-1);
    tracep->declQuad(c+33,"DIP_rf_0", false,-1, 63,0);
    tracep->declQuad(c+35,"DIP_rf_1", false,-1, 63,0);
    tracep->declQuad(c+37,"DIP_rf_2", false,-1, 63,0);
    tracep->declQuad(c+39,"DIP_rf_3", false,-1, 63,0);
    tracep->declQuad(c+41,"DIP_rf_4", false,-1, 63,0);
    tracep->declQuad(c+43,"DIP_rf_5", false,-1, 63,0);
    tracep->declQuad(c+45,"DIP_rf_6", false,-1, 63,0);
    tracep->declQuad(c+47,"DIP_rf_7", false,-1, 63,0);
    tracep->declQuad(c+49,"DIP_rf_8", false,-1, 63,0);
    tracep->declQuad(c+51,"DIP_rf_9", false,-1, 63,0);
    tracep->declQuad(c+53,"DIP_rf_10", false,-1, 63,0);
    tracep->declQuad(c+55,"DIP_rf_11", false,-1, 63,0);
    tracep->declQuad(c+57,"DIP_rf_12", false,-1, 63,0);
    tracep->declQuad(c+59,"DIP_rf_13", false,-1, 63,0);
    tracep->declQuad(c+61,"DIP_rf_14", false,-1, 63,0);
    tracep->declQuad(c+63,"DIP_rf_15", false,-1, 63,0);
    tracep->declQuad(c+65,"DIP_rf_16", false,-1, 63,0);
    tracep->declQuad(c+67,"DIP_rf_17", false,-1, 63,0);
    tracep->declQuad(c+69,"DIP_rf_18", false,-1, 63,0);
    tracep->declQuad(c+71,"DIP_rf_19", false,-1, 63,0);
    tracep->declQuad(c+73,"DIP_rf_20", false,-1, 63,0);
    tracep->declQuad(c+75,"DIP_rf_21", false,-1, 63,0);
    tracep->declQuad(c+77,"DIP_rf_22", false,-1, 63,0);
    tracep->declQuad(c+79,"DIP_rf_23", false,-1, 63,0);
    tracep->declQuad(c+81,"DIP_rf_24", false,-1, 63,0);
    tracep->declQuad(c+83,"DIP_rf_25", false,-1, 63,0);
    tracep->declQuad(c+85,"DIP_rf_26", false,-1, 63,0);
    tracep->declQuad(c+87,"DIP_rf_27", false,-1, 63,0);
    tracep->declQuad(c+89,"DIP_rf_28", false,-1, 63,0);
    tracep->declQuad(c+91,"DIP_rf_29", false,-1, 63,0);
    tracep->declQuad(c+93,"DIP_rf_30", false,-1, 63,0);
    tracep->declQuad(c+95,"DIP_rf_31", false,-1, 63,0);
    tracep->declBus(c+271,"DIP_inst", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+97+i*2,"rf", true,(i+0), 63,0);
    }
    tracep->declBit(c+274,"rf_EX_io1_REG1_MPORT_en", false,-1);
    tracep->declBus(c+10,"rf_EX_io1_REG1_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+161,"rf_EX_io1_REG1_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+274,"rf_EX_io1_REG2_MPORT_en", false,-1);
    tracep->declBus(c+11,"rf_EX_io1_REG2_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+163,"rf_EX_io1_REG2_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+274,"rf_DIP_io_rf_0_MPORT_en", false,-1);
    tracep->declBus(c+275,"rf_DIP_io_rf_0_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+33,"rf_DIP_io_rf_0_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+274,"rf_DIP_io_rf_1_MPORT_en", false,-1);
    tracep->declBus(c+276,"rf_DIP_io_rf_1_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+35,"rf_DIP_io_rf_1_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+274,"rf_DIP_io_rf_2_MPORT_en", false,-1);
    tracep->declBus(c+277,"rf_DIP_io_rf_2_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+37,"rf_DIP_io_rf_2_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+274,"rf_DIP_io_rf_3_MPORT_en", false,-1);
    tracep->declBus(c+278,"rf_DIP_io_rf_3_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+39,"rf_DIP_io_rf_3_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+274,"rf_DIP_io_rf_4_MPORT_en", false,-1);
    tracep->declBus(c+279,"rf_DIP_io_rf_4_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+41,"rf_DIP_io_rf_4_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+274,"rf_DIP_io_rf_5_MPORT_en", false,-1);
    tracep->declBus(c+280,"rf_DIP_io_rf_5_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+43,"rf_DIP_io_rf_5_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+274,"rf_DIP_io_rf_6_MPORT_en", false,-1);
    tracep->declBus(c+281,"rf_DIP_io_rf_6_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+45,"rf_DIP_io_rf_6_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+274,"rf_DIP_io_rf_7_MPORT_en", false,-1);
    tracep->declBus(c+282,"rf_DIP_io_rf_7_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+47,"rf_DIP_io_rf_7_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+274,"rf_DIP_io_rf_8_MPORT_en", false,-1);
    tracep->declBus(c+283,"rf_DIP_io_rf_8_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+49,"rf_DIP_io_rf_8_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+274,"rf_DIP_io_rf_9_MPORT_en", false,-1);
    tracep->declBus(c+284,"rf_DIP_io_rf_9_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+51,"rf_DIP_io_rf_9_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+274,"rf_DIP_io_rf_10_MPORT_en", false,-1);
    tracep->declBus(c+285,"rf_DIP_io_rf_10_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+53,"rf_DIP_io_rf_10_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+274,"rf_DIP_io_rf_11_MPORT_en", false,-1);
    tracep->declBus(c+286,"rf_DIP_io_rf_11_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+55,"rf_DIP_io_rf_11_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+274,"rf_DIP_io_rf_12_MPORT_en", false,-1);
    tracep->declBus(c+287,"rf_DIP_io_rf_12_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+57,"rf_DIP_io_rf_12_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+274,"rf_DIP_io_rf_13_MPORT_en", false,-1);
    tracep->declBus(c+288,"rf_DIP_io_rf_13_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+59,"rf_DIP_io_rf_13_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+274,"rf_DIP_io_rf_14_MPORT_en", false,-1);
    tracep->declBus(c+289,"rf_DIP_io_rf_14_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+61,"rf_DIP_io_rf_14_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+274,"rf_DIP_io_rf_15_MPORT_en", false,-1);
    tracep->declBus(c+290,"rf_DIP_io_rf_15_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+63,"rf_DIP_io_rf_15_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+274,"rf_DIP_io_rf_16_MPORT_en", false,-1);
    tracep->declBus(c+291,"rf_DIP_io_rf_16_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+65,"rf_DIP_io_rf_16_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+274,"rf_DIP_io_rf_17_MPORT_en", false,-1);
    tracep->declBus(c+292,"rf_DIP_io_rf_17_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+67,"rf_DIP_io_rf_17_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+274,"rf_DIP_io_rf_18_MPORT_en", false,-1);
    tracep->declBus(c+293,"rf_DIP_io_rf_18_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+69,"rf_DIP_io_rf_18_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+274,"rf_DIP_io_rf_19_MPORT_en", false,-1);
    tracep->declBus(c+294,"rf_DIP_io_rf_19_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+71,"rf_DIP_io_rf_19_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+274,"rf_DIP_io_rf_20_MPORT_en", false,-1);
    tracep->declBus(c+295,"rf_DIP_io_rf_20_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+73,"rf_DIP_io_rf_20_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+274,"rf_DIP_io_rf_21_MPORT_en", false,-1);
    tracep->declBus(c+296,"rf_DIP_io_rf_21_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+75,"rf_DIP_io_rf_21_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+274,"rf_DIP_io_rf_22_MPORT_en", false,-1);
    tracep->declBus(c+297,"rf_DIP_io_rf_22_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+77,"rf_DIP_io_rf_22_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+274,"rf_DIP_io_rf_23_MPORT_en", false,-1);
    tracep->declBus(c+298,"rf_DIP_io_rf_23_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+79,"rf_DIP_io_rf_23_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+274,"rf_DIP_io_rf_24_MPORT_en", false,-1);
    tracep->declBus(c+299,"rf_DIP_io_rf_24_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+81,"rf_DIP_io_rf_24_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+274,"rf_DIP_io_rf_25_MPORT_en", false,-1);
    tracep->declBus(c+300,"rf_DIP_io_rf_25_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+83,"rf_DIP_io_rf_25_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+274,"rf_DIP_io_rf_26_MPORT_en", false,-1);
    tracep->declBus(c+301,"rf_DIP_io_rf_26_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+85,"rf_DIP_io_rf_26_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+274,"rf_DIP_io_rf_27_MPORT_en", false,-1);
    tracep->declBus(c+302,"rf_DIP_io_rf_27_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+87,"rf_DIP_io_rf_27_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+274,"rf_DIP_io_rf_28_MPORT_en", false,-1);
    tracep->declBus(c+303,"rf_DIP_io_rf_28_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+89,"rf_DIP_io_rf_28_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+274,"rf_DIP_io_rf_29_MPORT_en", false,-1);
    tracep->declBus(c+304,"rf_DIP_io_rf_29_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+91,"rf_DIP_io_rf_29_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+274,"rf_DIP_io_rf_30_MPORT_en", false,-1);
    tracep->declBus(c+305,"rf_DIP_io_rf_30_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+93,"rf_DIP_io_rf_30_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+274,"rf_DIP_io_rf_31_MPORT_en", false,-1);
    tracep->declBus(c+306,"rf_DIP_io_rf_31_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+95,"rf_DIP_io_rf_31_MPORT_data", false,-1, 63,0);
    tracep->declQuad(c+165,"rf_MPORT_data", false,-1, 63,0);
    tracep->declBus(c+12,"rf_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+274,"rf_MPORT_mask", false,-1);
    tracep->declBit(c+17,"rf_MPORT_en", false,-1);
    tracep->declQuad(c+26,"mem_addr", false,-1, 63,0);
    tracep->declBit(c+18,"mem_we", false,-1);
    tracep->declBit(c+167,"mem_ce", false,-1);
    tracep->declQuad(c+30,"mem_wdata", false,-1, 63,0);
    tracep->declQuad(c+28,"mem_rdata", false,-1, 63,0);
    tracep->declBus(c+32,"mem_wmask", false,-1, 7,0);
    tracep->declBus(c+10,"src1add", false,-1, 4,0);
    tracep->declBus(c+11,"src2add", false,-1, 4,0);
    tracep->pushNamePrefix("DIP ");
    tracep->declBit(c+25,"is_break", false,-1);
    tracep->declBus(c+271,"inst", false,-1, 31,0);
    tracep->declQuad(c+33,"rf_0", false,-1, 63,0);
    tracep->declQuad(c+35,"rf_1", false,-1, 63,0);
    tracep->declQuad(c+37,"rf_2", false,-1, 63,0);
    tracep->declQuad(c+39,"rf_3", false,-1, 63,0);
    tracep->declQuad(c+41,"rf_4", false,-1, 63,0);
    tracep->declQuad(c+43,"rf_5", false,-1, 63,0);
    tracep->declQuad(c+45,"rf_6", false,-1, 63,0);
    tracep->declQuad(c+47,"rf_7", false,-1, 63,0);
    tracep->declQuad(c+49,"rf_8", false,-1, 63,0);
    tracep->declQuad(c+51,"rf_9", false,-1, 63,0);
    tracep->declQuad(c+53,"rf_10", false,-1, 63,0);
    tracep->declQuad(c+55,"rf_11", false,-1, 63,0);
    tracep->declQuad(c+57,"rf_12", false,-1, 63,0);
    tracep->declQuad(c+59,"rf_13", false,-1, 63,0);
    tracep->declQuad(c+61,"rf_14", false,-1, 63,0);
    tracep->declQuad(c+63,"rf_15", false,-1, 63,0);
    tracep->declQuad(c+65,"rf_16", false,-1, 63,0);
    tracep->declQuad(c+67,"rf_17", false,-1, 63,0);
    tracep->declQuad(c+69,"rf_18", false,-1, 63,0);
    tracep->declQuad(c+71,"rf_19", false,-1, 63,0);
    tracep->declQuad(c+73,"rf_20", false,-1, 63,0);
    tracep->declQuad(c+75,"rf_21", false,-1, 63,0);
    tracep->declQuad(c+77,"rf_22", false,-1, 63,0);
    tracep->declQuad(c+79,"rf_23", false,-1, 63,0);
    tracep->declQuad(c+81,"rf_24", false,-1, 63,0);
    tracep->declQuad(c+83,"rf_25", false,-1, 63,0);
    tracep->declQuad(c+85,"rf_26", false,-1, 63,0);
    tracep->declQuad(c+87,"rf_27", false,-1, 63,0);
    tracep->declQuad(c+89,"rf_28", false,-1, 63,0);
    tracep->declQuad(c+91,"rf_29", false,-1, 63,0);
    tracep->declQuad(c+93,"rf_30", false,-1, 63,0);
    tracep->declQuad(c+95,"rf_31", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+168+i*2,"rf", true,(i+0), 63,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EX ");
    tracep->declBus(c+8,"io_src1type", false,-1, 2,0);
    tracep->declBus(c+9,"io_src2type", false,-1, 2,0);
    tracep->declBus(c+13,"io_futype", false,-1, 2,0);
    tracep->declBus(c+14,"io_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+15,"io_Imm", false,-1, 63,0);
    tracep->declQuad(c+19,"io1_REG1", false,-1, 63,0);
    tracep->declQuad(c+21,"io1_REG2", false,-1, 63,0);
    tracep->declQuad(c+5,"io1_PC", false,-1, 63,0);
    tracep->declQuad(c+23,"io1_result", false,-1, 63,0);
    tracep->declBit(c+25,"io1_is_break", false,-1);
    tracep->declBit(c+3,"io1_is_jump", false,-1);
    tracep->declBit(c+4,"io1_is_branch", false,-1);
    tracep->declQuad(c+1,"io1_dnpc", false,-1, 63,0);
    tracep->declQuad(c+26,"io1_addr", false,-1, 63,0);
    tracep->declQuad(c+28,"io1_rdata", false,-1, 63,0);
    tracep->declQuad(c+30,"io1_wdata", false,-1, 63,0);
    tracep->declBus(c+32,"io1_wmask", false,-1, 7,0);
    tracep->declQuad(c+232,"src1", false,-1, 63,0);
    tracep->declQuad(c+234,"src2", false,-1, 63,0);
    tracep->declQuad(c+236,"addr_temp", false,-1, 63,0);
    tracep->declBit(c+238,"mem_result_sign", false,-1);
    tracep->declBit(c+239,"mem_result_sign_1", false,-1);
    tracep->declBit(c+240,"mem_result_sign_2", false,-1);
    tracep->declQuad(c+241,"mem_result", false,-1, 63,0);
    tracep->declBit(c+243,"alu_result_sign", false,-1);
    tracep->declBit(c+244,"alu_result_sign_2", false,-1);
    tracep->declBit(c+245,"alu_result_sign_3", false,-1);
    tracep->declBit(c+246,"alu_result_sign_4", false,-1);
    tracep->declBit(c+247,"alu_result_sign_5", false,-1);
    tracep->declQuad(c+248,"alu_result", false,-1, 63,0);
    tracep->declBit(c+250,"shift_result_sign", false,-1);
    tracep->declQuad(c+251,"compar_result", false,-1, 63,0);
    tracep->declQuad(c+253,"jump_result", false,-1, 63,0);
    tracep->declQuad(c+255,"shift_result", false,-1, 63,0);
    tracep->declQuad(c+257,"branch_result", false,-1, 63,0);
    tracep->declBit(c+4,"branch_flag", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ID ");
    tracep->declBus(c+7,"io_inst", false,-1, 31,0);
    tracep->declBus(c+8,"io_ctrlIO_src1type", false,-1, 2,0);
    tracep->declBus(c+9,"io_ctrlIO_src2type", false,-1, 2,0);
    tracep->declBus(c+10,"io_ctrlIO_src1", false,-1, 4,0);
    tracep->declBus(c+11,"io_ctrlIO_src2", false,-1, 4,0);
    tracep->declBus(c+12,"io_ctrlIO_rd", false,-1, 4,0);
    tracep->declBus(c+13,"io_ctrlIO_futype", false,-1, 2,0);
    tracep->declBus(c+14,"io_ctrlIO_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+15,"io_ctrlIO_Imm", false,-1, 63,0);
    tracep->declBit(c+17,"io_rd_en", false,-1);
    tracep->declBit(c+18,"io_mem_we", false,-1);
    tracep->declBus(c+12,"rd", false,-1, 4,0);
    tracep->declBus(c+259,"Inst_decode_0", false,-1, 3,0);
    tracep->declBus(c+14,"Inst_decode_2", false,-1, 6,0);
    tracep->declBus(c+260,"srctype1", false,-1, 1,0);
    tracep->declBit(c+261,"srctype2", false,-1);
    tracep->declBit(c+262,"sign", false,-1);
    tracep->declBit(c+263,"sign_1", false,-1);
    tracep->declBit(c+264,"sign_2", false,-1);
    tracep->declBit(c+264,"sign_3", false,-1);
    tracep->declBit(c+262,"sign_4", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IF ");
    tracep->declBit(c+267,"clock", false,-1);
    tracep->declBit(c+268,"reset", false,-1);
    tracep->declQuad(c+1,"io_dnpc", false,-1, 63,0);
    tracep->declBit(c+3,"io_is_jump", false,-1);
    tracep->declBit(c+4,"io_is_branch", false,-1);
    tracep->declQuad(c+5,"io_pc", false,-1, 63,0);
    tracep->declQuad(c+5,"temp", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IFM ");
    tracep->declQuad(c+5,"pc", false,-1, 63,0);
    tracep->declBus(c+7,"inst", false,-1, 31,0);
    tracep->declQuad(c+265,"rdata", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem ");
    tracep->declQuad(c+26,"addr", false,-1, 63,0);
    tracep->declBit(c+18,"we", false,-1);
    tracep->declBit(c+167,"ce", false,-1);
    tracep->declQuad(c+30,"wdata", false,-1, 63,0);
    tracep->declQuad(c+28,"rdata", false,-1, 63,0);
    tracep->declBus(c+32,"wmask", false,-1, 7,0);
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
    VlWide<4>/*127:0*/ __Vtemp_h05bb5dcc__0;
    VlWide<4>/*127:0*/ __Vtemp_h5746bcbf__0;
    VlWide<4>/*127:0*/ __Vtemp_h83b00c20__0;
    VlWide<4>/*127:0*/ __Vtemp_h2d9b042c__0;
    VlWide<4>/*127:0*/ __Vtemp_hf4e7e7c3__0;
    // Body
    bufp->fullQData(oldp+1,(((0x19U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                              ? vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_1
                              : ((0x48U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                  ? (0xfffffffffffffffeULL 
                                     & vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_1)
                                  : ((0x6bU == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                      ? vlSelf->CPUTop__DOT__EX__DOT___dnpc_T_9
                                      : ((0x6cU == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                          ? vlSelf->CPUTop__DOT__EX__DOT___dnpc_T_9
                                          : ((0x76U 
                                              == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                              ? vlSelf->CPUTop__DOT__EX__DOT___dnpc_T_9
                                              : ((0x7bU 
                                                  == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                  ? vlSelf->CPUTop__DOT__EX__DOT___dnpc_T_9
                                                  : 0ULL))))))),64);
    bufp->fullBit(oldp+3,((3U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype))));
    bufp->fullBit(oldp+4,(((0x6bU == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                            ? (vlSelf->CPUTop__DOT__EX__DOT___compar_result_T_2 
                               == vlSelf->CPUTop__DOT__EX__DOT__src2)
                            : (IData)(vlSelf->CPUTop__DOT__EX__DOT___GEN_62))));
    bufp->fullQData(oldp+5,(vlSelf->CPUTop__DOT__IF__DOT__temp),64);
    bufp->fullIData(oldp+7,(vlSelf->CPUTop__DOT__IFM_inst),32);
    bufp->fullCData(oldp+8,(vlSelf->CPUTop__DOT__ID__DOT___io_ctrlIO_src1type_T_2),3);
    bufp->fullCData(oldp+9,(vlSelf->CPUTop__DOT__ID__DOT__srctype2),3);
    bufp->fullCData(oldp+10,((0x1fU & (vlSelf->CPUTop__DOT__IFM_inst 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+11,((0x1fU & (vlSelf->CPUTop__DOT__IFM_inst 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+12,((0x1fU & (vlSelf->CPUTop__DOT__IFM_inst 
                                       >> 7U))),5);
    bufp->fullCData(oldp+13,(vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype),3);
    bufp->fullCData(oldp+14,(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype),7);
    bufp->fullQData(oldp+15,(vlSelf->CPUTop__DOT__ID_io_ctrlIO_Imm),64);
    bufp->fullBit(oldp+17,(((0x13U == (0x707fU & vlSelf->CPUTop__DOT__IFM_inst)) 
                            | ((0x1013U == (0xfc00707fU 
                                            & vlSelf->CPUTop__DOT__IFM_inst)) 
                               | ((0x17U == (0x7fU 
                                             & vlSelf->CPUTop__DOT__IFM_inst)) 
                                  | ((0x37U == (0x7fU 
                                                & vlSelf->CPUTop__DOT__IFM_inst)) 
                                     | ((0x6013U == 
                                         (0x707fU & vlSelf->CPUTop__DOT__IFM_inst)) 
                                        | ((0x6fU == 
                                            (0x7fU 
                                             & vlSelf->CPUTop__DOT__IFM_inst)) 
                                           | ((0x67U 
                                               == (0x707fU 
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
                                                                   & ((0x1063U 
                                                                       != 
                                                                       (0x707fU 
                                                                        & vlSelf->CPUTop__DOT__IFM_inst)) 
                                                                      & ((0x1bU 
                                                                          == 
                                                                          (0x707fU 
                                                                           & vlSelf->CPUTop__DOT__IFM_inst)) 
                                                                         | ((0x33U 
                                                                             == 
                                                                             (0xfe00707fU 
                                                                              & vlSelf->CPUTop__DOT__IFM_inst)) 
                                                                            | ((0x40005013U 
                                                                                == 
                                                                                (0xfc00707fU 
                                                                                & vlSelf->CPUTop__DOT__IFM_inst)) 
                                                                               | ((0x4003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->CPUTop__DOT__IFM_inst)) 
                                                                                | (IData)(vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_211))))))))))))))))))))));
    bufp->fullBit(oldp+18,((1U & (~ (((((0x45U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype)) 
                                        | (0x47U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))) 
                                       | (0x6fU == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))) 
                                      | (3U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))) 
                                     | (4U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype)))))));
    bufp->fullQData(oldp+19,(vlSelf->CPUTop__DOT__EX_io1_REG1),64);
    bufp->fullQData(oldp+21,(vlSelf->CPUTop__DOT__EX_io1_REG2),64);
    bufp->fullQData(oldp+23,(vlSelf->CPUTop__DOT__EX_io1_result),64);
    bufp->fullBit(oldp+25,((0x42U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))));
    bufp->fullQData(oldp+26,(((0x45U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                               ? vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_1
                               : vlSelf->CPUTop__DOT__EX__DOT___GEN_11)),64);
    bufp->fullQData(oldp+28,(vlSelf->CPUTop__DOT__mem_rdata),64);
    bufp->fullQData(oldp+30,(((0x46U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                               ? vlSelf->CPUTop__DOT__EX__DOT__src2
                               : ((0x70U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                   ? ((0U == (3U & (IData)(
                                                           (vlSelf->CPUTop__DOT__EX__DOT__addr_temp 
                                                            >> 1U))))
                                       ? (QData)((IData)(
                                                         (0xffffU 
                                                          & (IData)(vlSelf->CPUTop__DOT__EX__DOT__src2))))
                                       : ((1U == (3U 
                                                  & (IData)(
                                                            (vlSelf->CPUTop__DOT__EX__DOT__addr_temp 
                                                             >> 1U))))
                                           ? ((QData)((IData)(
                                                              (0xffffU 
                                                               & (IData)(vlSelf->CPUTop__DOT__EX__DOT__src2)))) 
                                              << 0x10U)
                                           : ((2U == 
                                               (3U 
                                                & (IData)(
                                                          (vlSelf->CPUTop__DOT__EX__DOT__addr_temp 
                                                           >> 1U))))
                                               ? ((QData)((IData)(
                                                                  (0xffffU 
                                                                   & (IData)(vlSelf->CPUTop__DOT__EX__DOT__src2)))) 
                                                  << 0x20U)
                                               : ((3U 
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
                                       : ((0x77U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                           ? ((1U & (IData)(
                                                            (vlSelf->CPUTop__DOT__EX__DOT__addr_temp 
                                                             >> 2U)))
                                               ? ((QData)((IData)(vlSelf->CPUTop__DOT__EX__DOT__src2)) 
                                                  << 0x20U)
                                               : (QData)((IData)(vlSelf->CPUTop__DOT__EX__DOT__src2)))
                                           : 0ULL))))),64);
    bufp->fullCData(oldp+32,(((0x46U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                               ? 0xffU : (IData)(vlSelf->CPUTop__DOT__EX__DOT___GEN_25))),8);
    bufp->fullQData(oldp+33,(vlSelf->CPUTop__DOT__rf
                             [0U]),64);
    bufp->fullQData(oldp+35,(vlSelf->CPUTop__DOT__rf
                             [1U]),64);
    bufp->fullQData(oldp+37,(vlSelf->CPUTop__DOT__rf
                             [2U]),64);
    bufp->fullQData(oldp+39,(vlSelf->CPUTop__DOT__rf
                             [3U]),64);
    bufp->fullQData(oldp+41,(vlSelf->CPUTop__DOT__rf
                             [4U]),64);
    bufp->fullQData(oldp+43,(vlSelf->CPUTop__DOT__rf
                             [5U]),64);
    bufp->fullQData(oldp+45,(vlSelf->CPUTop__DOT__rf
                             [6U]),64);
    bufp->fullQData(oldp+47,(vlSelf->CPUTop__DOT__rf
                             [7U]),64);
    bufp->fullQData(oldp+49,(vlSelf->CPUTop__DOT__rf
                             [8U]),64);
    bufp->fullQData(oldp+51,(vlSelf->CPUTop__DOT__rf
                             [9U]),64);
    bufp->fullQData(oldp+53,(vlSelf->CPUTop__DOT__rf
                             [0xaU]),64);
    bufp->fullQData(oldp+55,(vlSelf->CPUTop__DOT__rf
                             [0xbU]),64);
    bufp->fullQData(oldp+57,(vlSelf->CPUTop__DOT__rf
                             [0xcU]),64);
    bufp->fullQData(oldp+59,(vlSelf->CPUTop__DOT__rf
                             [0xdU]),64);
    bufp->fullQData(oldp+61,(vlSelf->CPUTop__DOT__rf
                             [0xeU]),64);
    bufp->fullQData(oldp+63,(vlSelf->CPUTop__DOT__rf
                             [0xfU]),64);
    bufp->fullQData(oldp+65,(vlSelf->CPUTop__DOT__rf
                             [0x10U]),64);
    bufp->fullQData(oldp+67,(vlSelf->CPUTop__DOT__rf
                             [0x11U]),64);
    bufp->fullQData(oldp+69,(vlSelf->CPUTop__DOT__rf
                             [0x12U]),64);
    bufp->fullQData(oldp+71,(vlSelf->CPUTop__DOT__rf
                             [0x13U]),64);
    bufp->fullQData(oldp+73,(vlSelf->CPUTop__DOT__rf
                             [0x14U]),64);
    bufp->fullQData(oldp+75,(vlSelf->CPUTop__DOT__rf
                             [0x15U]),64);
    bufp->fullQData(oldp+77,(vlSelf->CPUTop__DOT__rf
                             [0x16U]),64);
    bufp->fullQData(oldp+79,(vlSelf->CPUTop__DOT__rf
                             [0x17U]),64);
    bufp->fullQData(oldp+81,(vlSelf->CPUTop__DOT__rf
                             [0x18U]),64);
    bufp->fullQData(oldp+83,(vlSelf->CPUTop__DOT__rf
                             [0x19U]),64);
    bufp->fullQData(oldp+85,(vlSelf->CPUTop__DOT__rf
                             [0x1aU]),64);
    bufp->fullQData(oldp+87,(vlSelf->CPUTop__DOT__rf
                             [0x1bU]),64);
    bufp->fullQData(oldp+89,(vlSelf->CPUTop__DOT__rf
                             [0x1cU]),64);
    bufp->fullQData(oldp+91,(vlSelf->CPUTop__DOT__rf
                             [0x1dU]),64);
    bufp->fullQData(oldp+93,(vlSelf->CPUTop__DOT__rf
                             [0x1eU]),64);
    bufp->fullQData(oldp+95,(vlSelf->CPUTop__DOT__rf
                             [0x1fU]),64);
    bufp->fullQData(oldp+97,(vlSelf->CPUTop__DOT__rf[0]),64);
    bufp->fullQData(oldp+99,(vlSelf->CPUTop__DOT__rf[1]),64);
    bufp->fullQData(oldp+101,(vlSelf->CPUTop__DOT__rf[2]),64);
    bufp->fullQData(oldp+103,(vlSelf->CPUTop__DOT__rf[3]),64);
    bufp->fullQData(oldp+105,(vlSelf->CPUTop__DOT__rf[4]),64);
    bufp->fullQData(oldp+107,(vlSelf->CPUTop__DOT__rf[5]),64);
    bufp->fullQData(oldp+109,(vlSelf->CPUTop__DOT__rf[6]),64);
    bufp->fullQData(oldp+111,(vlSelf->CPUTop__DOT__rf[7]),64);
    bufp->fullQData(oldp+113,(vlSelf->CPUTop__DOT__rf[8]),64);
    bufp->fullQData(oldp+115,(vlSelf->CPUTop__DOT__rf[9]),64);
    bufp->fullQData(oldp+117,(vlSelf->CPUTop__DOT__rf[10]),64);
    bufp->fullQData(oldp+119,(vlSelf->CPUTop__DOT__rf[11]),64);
    bufp->fullQData(oldp+121,(vlSelf->CPUTop__DOT__rf[12]),64);
    bufp->fullQData(oldp+123,(vlSelf->CPUTop__DOT__rf[13]),64);
    bufp->fullQData(oldp+125,(vlSelf->CPUTop__DOT__rf[14]),64);
    bufp->fullQData(oldp+127,(vlSelf->CPUTop__DOT__rf[15]),64);
    bufp->fullQData(oldp+129,(vlSelf->CPUTop__DOT__rf[16]),64);
    bufp->fullQData(oldp+131,(vlSelf->CPUTop__DOT__rf[17]),64);
    bufp->fullQData(oldp+133,(vlSelf->CPUTop__DOT__rf[18]),64);
    bufp->fullQData(oldp+135,(vlSelf->CPUTop__DOT__rf[19]),64);
    bufp->fullQData(oldp+137,(vlSelf->CPUTop__DOT__rf[20]),64);
    bufp->fullQData(oldp+139,(vlSelf->CPUTop__DOT__rf[21]),64);
    bufp->fullQData(oldp+141,(vlSelf->CPUTop__DOT__rf[22]),64);
    bufp->fullQData(oldp+143,(vlSelf->CPUTop__DOT__rf[23]),64);
    bufp->fullQData(oldp+145,(vlSelf->CPUTop__DOT__rf[24]),64);
    bufp->fullQData(oldp+147,(vlSelf->CPUTop__DOT__rf[25]),64);
    bufp->fullQData(oldp+149,(vlSelf->CPUTop__DOT__rf[26]),64);
    bufp->fullQData(oldp+151,(vlSelf->CPUTop__DOT__rf[27]),64);
    bufp->fullQData(oldp+153,(vlSelf->CPUTop__DOT__rf[28]),64);
    bufp->fullQData(oldp+155,(vlSelf->CPUTop__DOT__rf[29]),64);
    bufp->fullQData(oldp+157,(vlSelf->CPUTop__DOT__rf[30]),64);
    bufp->fullQData(oldp+159,(vlSelf->CPUTop__DOT__rf[31]),64);
    bufp->fullQData(oldp+161,(vlSelf->CPUTop__DOT__rf
                              [(0x1fU & (vlSelf->CPUTop__DOT__IFM_inst 
                                         >> 0xfU))]),64);
    bufp->fullQData(oldp+163,(vlSelf->CPUTop__DOT__rf
                              [(0x1fU & (vlSelf->CPUTop__DOT__IFM_inst 
                                         >> 0x14U))]),64);
    bufp->fullQData(oldp+165,(((0U == (0x1fU & (vlSelf->CPUTop__DOT__IFM_inst 
                                                >> 7U)))
                                ? 0ULL : vlSelf->CPUTop__DOT__EX_io1_result)),64);
    bufp->fullBit(oldp+167,((4U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype))));
    bufp->fullQData(oldp+168,(vlSelf->CPUTop__DOT__DIP__DOT__rf[0]),64);
    bufp->fullQData(oldp+170,(vlSelf->CPUTop__DOT__DIP__DOT__rf[1]),64);
    bufp->fullQData(oldp+172,(vlSelf->CPUTop__DOT__DIP__DOT__rf[2]),64);
    bufp->fullQData(oldp+174,(vlSelf->CPUTop__DOT__DIP__DOT__rf[3]),64);
    bufp->fullQData(oldp+176,(vlSelf->CPUTop__DOT__DIP__DOT__rf[4]),64);
    bufp->fullQData(oldp+178,(vlSelf->CPUTop__DOT__DIP__DOT__rf[5]),64);
    bufp->fullQData(oldp+180,(vlSelf->CPUTop__DOT__DIP__DOT__rf[6]),64);
    bufp->fullQData(oldp+182,(vlSelf->CPUTop__DOT__DIP__DOT__rf[7]),64);
    bufp->fullQData(oldp+184,(vlSelf->CPUTop__DOT__DIP__DOT__rf[8]),64);
    bufp->fullQData(oldp+186,(vlSelf->CPUTop__DOT__DIP__DOT__rf[9]),64);
    bufp->fullQData(oldp+188,(vlSelf->CPUTop__DOT__DIP__DOT__rf[10]),64);
    bufp->fullQData(oldp+190,(vlSelf->CPUTop__DOT__DIP__DOT__rf[11]),64);
    bufp->fullQData(oldp+192,(vlSelf->CPUTop__DOT__DIP__DOT__rf[12]),64);
    bufp->fullQData(oldp+194,(vlSelf->CPUTop__DOT__DIP__DOT__rf[13]),64);
    bufp->fullQData(oldp+196,(vlSelf->CPUTop__DOT__DIP__DOT__rf[14]),64);
    bufp->fullQData(oldp+198,(vlSelf->CPUTop__DOT__DIP__DOT__rf[15]),64);
    bufp->fullQData(oldp+200,(vlSelf->CPUTop__DOT__DIP__DOT__rf[16]),64);
    bufp->fullQData(oldp+202,(vlSelf->CPUTop__DOT__DIP__DOT__rf[17]),64);
    bufp->fullQData(oldp+204,(vlSelf->CPUTop__DOT__DIP__DOT__rf[18]),64);
    bufp->fullQData(oldp+206,(vlSelf->CPUTop__DOT__DIP__DOT__rf[19]),64);
    bufp->fullQData(oldp+208,(vlSelf->CPUTop__DOT__DIP__DOT__rf[20]),64);
    bufp->fullQData(oldp+210,(vlSelf->CPUTop__DOT__DIP__DOT__rf[21]),64);
    bufp->fullQData(oldp+212,(vlSelf->CPUTop__DOT__DIP__DOT__rf[22]),64);
    bufp->fullQData(oldp+214,(vlSelf->CPUTop__DOT__DIP__DOT__rf[23]),64);
    bufp->fullQData(oldp+216,(vlSelf->CPUTop__DOT__DIP__DOT__rf[24]),64);
    bufp->fullQData(oldp+218,(vlSelf->CPUTop__DOT__DIP__DOT__rf[25]),64);
    bufp->fullQData(oldp+220,(vlSelf->CPUTop__DOT__DIP__DOT__rf[26]),64);
    bufp->fullQData(oldp+222,(vlSelf->CPUTop__DOT__DIP__DOT__rf[27]),64);
    bufp->fullQData(oldp+224,(vlSelf->CPUTop__DOT__DIP__DOT__rf[28]),64);
    bufp->fullQData(oldp+226,(vlSelf->CPUTop__DOT__DIP__DOT__rf[29]),64);
    bufp->fullQData(oldp+228,(vlSelf->CPUTop__DOT__DIP__DOT__rf[30]),64);
    bufp->fullQData(oldp+230,(vlSelf->CPUTop__DOT__DIP__DOT__rf[31]),64);
    bufp->fullQData(oldp+232,(vlSelf->CPUTop__DOT__EX__DOT___compar_result_T_2),64);
    bufp->fullQData(oldp+234,(vlSelf->CPUTop__DOT__EX__DOT__src2),64);
    bufp->fullQData(oldp+236,(vlSelf->CPUTop__DOT__EX__DOT__addr_temp),64);
    bufp->fullBit(oldp+238,((1U & (IData)((vlSelf->CPUTop__DOT__mem_rdata 
                                           >> 0x3fU)))));
    bufp->fullBit(oldp+239,((1U & (IData)((vlSelf->CPUTop__DOT__mem_rdata 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+240,((1U & ((IData)(vlSelf->CPUTop__DOT__EX__DOT___mem_result_T_24) 
                                   >> 0xfU))));
    bufp->fullQData(oldp+241,(((0x45U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
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
                                    : vlSelf->CPUTop__DOT__EX__DOT___GEN_31))),64);
    bufp->fullBit(oldp+243,((1U & (IData)((vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_1 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+244,((vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_19[0U] 
                             >> 0x1fU)));
    bufp->fullBit(oldp+245,((vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_26 
                             >> 0x1fU)));
    bufp->fullBit(oldp+246,((vlSelf->CPUTop__DOT__EX__DOT___GEN_4 
                             >> 0x1fU)));
    bufp->fullBit(oldp+247,((1U & (IData)((vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_10 
                                           >> 0x1fU)))));
    bufp->fullQData(oldp+248,(((0x40U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                ? vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_1
                                : ((0x68U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                    ? vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_7
                                    : ((0x44U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                        ? (vlSelf->CPUTop__DOT__EX__DOT___compar_result_T_2 
                                           | vlSelf->CPUTop__DOT__EX__DOT__src2)
                                        : ((0x69U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                            ? vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_10
                                            : ((0x71U 
                                                == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                ? (vlSelf->CPUTop__DOT__EX__DOT___compar_result_T_2 
                                                   & vlSelf->CPUTop__DOT__EX__DOT__src2)
                                                : (
                                                   (0x72U 
                                                    == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                    ? 
                                                   (vlSelf->CPUTop__DOT__EX__DOT___compar_result_T_2 
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
    bufp->fullBit(oldp+250,((vlSelf->CPUTop__DOT__EX__DOT___shift_result_T_3[0U] 
                             >> 0x1fU)));
    bufp->fullQData(oldp+251,(((0x6aU == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                ? ((vlSelf->CPUTop__DOT__EX__DOT___compar_result_T_2 
                                    < vlSelf->CPUTop__DOT__EX__DOT__src2)
                                    ? 1ULL : 0ULL) : 
                               ((2U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                 ? (VL_LTS_IQQ(64, vlSelf->CPUTop__DOT__EX__DOT___compar_result_T_2, vlSelf->CPUTop__DOT__EX__DOT__src2)
                                     ? 1ULL : 0ULL)
                                 : 0ULL))),64);
    bufp->fullQData(oldp+253,(((3U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype))
                                ? (4ULL + vlSelf->CPUTop__DOT__IF__DOT__temp)
                                : 0ULL)),64);
    VL_EXTEND_WQ(127,64, __Vtemp_h05bb5dcc__0, (vlSelf->CPUTop__DOT__EX__DOT___compar_result_T_2 
                                                >> 
                                                (0x1fU 
                                                 & (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_Imm))));
    VL_EXTEND_WQ(127,64, __Vtemp_h5746bcbf__0, (((QData)((IData)(
                                                                 ((vlSelf->CPUTop__DOT__EX__DOT___shift_result_T_3[0U] 
                                                                   >> 0x1fU)
                                                                   ? 0xffffffffU
                                                                   : 0U))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->CPUTop__DOT__EX__DOT___shift_result_T_3[0U]))));
    VL_EXTEND_WQ(127,64, __Vtemp_h83b00c20__0, vlSelf->CPUTop__DOT__EX__DOT___compar_result_T_2);
    VL_SHIFTL_WWI(127,127,6, __Vtemp_h2d9b042c__0, __Vtemp_h83b00c20__0, 
                  (0x3fU & (IData)(vlSelf->CPUTop__DOT__EX__DOT__src2)));
    VL_EXTEND_WQ(127,64, __Vtemp_hf4e7e7c3__0, ((0x75U 
                                                 == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                 ? 
                                                (vlSelf->CPUTop__DOT__EX__DOT___compar_result_T_2 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(vlSelf->CPUTop__DOT__EX__DOT__src2)))
                                                 : 0ULL));
    bufp->fullQData(oldp+255,((((QData)((IData)(((0x6eU 
                                                  == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                  ? 
                                                 __Vtemp_h05bb5dcc__0[1U]
                                                  : 
                                                 ((0x73U 
                                                   == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                   ? 
                                                  __Vtemp_h5746bcbf__0[1U]
                                                   : 
                                                  ((0x41U 
                                                    == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                    ? 
                                                   __Vtemp_h2d9b042c__0[1U]
                                                    : 
                                                   __Vtemp_hf4e7e7c3__0[1U]))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((0x6eU 
                                                              == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                              ? 
                                                             __Vtemp_h05bb5dcc__0[0U]
                                                              : 
                                                             ((0x73U 
                                                               == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                               ? 
                                                              __Vtemp_h5746bcbf__0[0U]
                                                               : 
                                                              ((0x41U 
                                                                == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                                ? 
                                                               __Vtemp_h2d9b042c__0[0U]
                                                                : 
                                                               __Vtemp_hf4e7e7c3__0[0U]))))))),64);
    bufp->fullQData(oldp+257,(((0x6bU == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                ? vlSelf->CPUTop__DOT__EX__DOT___branch_result_T_1
                                : ((0x6cU == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                    ? vlSelf->CPUTop__DOT__EX__DOT___branch_result_T_1
                                    : ((0x76U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                        ? vlSelf->CPUTop__DOT__EX__DOT___branch_result_T_1
                                        : ((0x7bU == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                            ? vlSelf->CPUTop__DOT__EX__DOT___branch_result_T_1
                                            : 0ULL))))),64);
    bufp->fullCData(oldp+259,(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0),4);
    bufp->fullCData(oldp+260,((((7U == (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0))
                                 ? 2U : 0U) | ((3U 
                                                == (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0))
                                                ? 2U
                                                : 0U))),2);
    bufp->fullBit(oldp+261,(vlSelf->CPUTop__DOT__ID__DOT__srctype2));
    bufp->fullBit(oldp+262,((vlSelf->CPUTop__DOT__IFM_inst 
                             >> 0x1fU)));
    bufp->fullBit(oldp+263,((1U & (vlSelf->CPUTop__DOT__IFM_inst 
                                   >> 0x13U))));
    bufp->fullBit(oldp+264,((vlSelf->CPUTop__DOT__IFM_inst 
                             >> 0x1fU)));
    bufp->fullQData(oldp+265,(vlSelf->CPUTop__DOT__IFM__DOT__rdata),64);
    bufp->fullBit(oldp+267,(vlSelf->clock));
    bufp->fullBit(oldp+268,(vlSelf->reset));
    bufp->fullQData(oldp+269,(vlSelf->io_pc),64);
    bufp->fullIData(oldp+271,(vlSelf->io_inst),32);
    bufp->fullQData(oldp+272,(vlSelf->io_result),64);
    bufp->fullBit(oldp+274,(1U));
    bufp->fullCData(oldp+275,(0U),5);
    bufp->fullCData(oldp+276,(1U),5);
    bufp->fullCData(oldp+277,(2U),5);
    bufp->fullCData(oldp+278,(3U),5);
    bufp->fullCData(oldp+279,(4U),5);
    bufp->fullCData(oldp+280,(5U),5);
    bufp->fullCData(oldp+281,(6U),5);
    bufp->fullCData(oldp+282,(7U),5);
    bufp->fullCData(oldp+283,(8U),5);
    bufp->fullCData(oldp+284,(9U),5);
    bufp->fullCData(oldp+285,(0xaU),5);
    bufp->fullCData(oldp+286,(0xbU),5);
    bufp->fullCData(oldp+287,(0xcU),5);
    bufp->fullCData(oldp+288,(0xdU),5);
    bufp->fullCData(oldp+289,(0xeU),5);
    bufp->fullCData(oldp+290,(0xfU),5);
    bufp->fullCData(oldp+291,(0x10U),5);
    bufp->fullCData(oldp+292,(0x11U),5);
    bufp->fullCData(oldp+293,(0x12U),5);
    bufp->fullCData(oldp+294,(0x13U),5);
    bufp->fullCData(oldp+295,(0x14U),5);
    bufp->fullCData(oldp+296,(0x15U),5);
    bufp->fullCData(oldp+297,(0x16U),5);
    bufp->fullCData(oldp+298,(0x17U),5);
    bufp->fullCData(oldp+299,(0x18U),5);
    bufp->fullCData(oldp+300,(0x19U),5);
    bufp->fullCData(oldp+301,(0x1aU),5);
    bufp->fullCData(oldp+302,(0x1bU),5);
    bufp->fullCData(oldp+303,(0x1cU),5);
    bufp->fullCData(oldp+304,(0x1dU),5);
    bufp->fullCData(oldp+305,(0x1eU),5);
    bufp->fullCData(oldp+306,(0x1fU),5);
}
