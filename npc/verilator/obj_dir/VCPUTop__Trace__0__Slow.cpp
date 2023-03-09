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
    tracep->declBit(c+283,"clock", false,-1);
    tracep->declBit(c+284,"reset", false,-1);
    tracep->declQuad(c+285,"io_pc", false,-1, 63,0);
    tracep->declBus(c+287,"io_inst", false,-1, 31,0);
    tracep->declQuad(c+288,"io_result", false,-1, 63,0);
    tracep->pushNamePrefix("CPUTop ");
    tracep->declBit(c+283,"clock", false,-1);
    tracep->declBit(c+284,"reset", false,-1);
    tracep->declQuad(c+285,"io_pc", false,-1, 63,0);
    tracep->declBus(c+287,"io_inst", false,-1, 31,0);
    tracep->declQuad(c+288,"io_result", false,-1, 63,0);
    tracep->declBit(c+283,"IF_clock", false,-1);
    tracep->declBit(c+284,"IF_reset", false,-1);
    tracep->declQuad(c+209,"IF_io_dnpc", false,-1, 63,0);
    tracep->declBit(c+211,"IF_io_is_jump", false,-1);
    tracep->declBit(c+212,"IF_io_is_branch", false,-1);
    tracep->declQuad(c+1,"IF_io_pc", false,-1, 63,0);
    tracep->declBit(c+284,"IFM_reset", false,-1);
    tracep->declBit(c+283,"IFM_clk", false,-1);
    tracep->declQuad(c+1,"IFM_pc", false,-1, 63,0);
    tracep->declBus(c+213,"IFM_inst", false,-1, 31,0);
    tracep->declBus(c+213,"ID_io_inst", false,-1, 31,0);
    tracep->declBus(c+214,"ID_io_ctrlIO_src1type", false,-1, 2,0);
    tracep->declBus(c+215,"ID_io_ctrlIO_src2type", false,-1, 2,0);
    tracep->declBus(c+216,"ID_io_ctrlIO_src1", false,-1, 4,0);
    tracep->declBus(c+217,"ID_io_ctrlIO_src2", false,-1, 4,0);
    tracep->declBus(c+218,"ID_io_ctrlIO_rd", false,-1, 4,0);
    tracep->declBus(c+219,"ID_io_ctrlIO_futype", false,-1, 2,0);
    tracep->declBus(c+220,"ID_io_ctrlIO_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+221,"ID_io_ctrlIO_Imm", false,-1, 63,0);
    tracep->declBit(c+223,"ID_io_rd_en", false,-1);
    tracep->declBit(c+224,"ID_io_mem_we", false,-1);
    tracep->declBit(c+283,"EX_clock", false,-1);
    tracep->declBit(c+284,"EX_reset", false,-1);
    tracep->declBus(c+214,"EX_io_src1type", false,-1, 2,0);
    tracep->declBus(c+215,"EX_io_src2type", false,-1, 2,0);
    tracep->declBus(c+219,"EX_io_futype", false,-1, 2,0);
    tracep->declBus(c+220,"EX_io_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+221,"EX_io_Imm", false,-1, 63,0);
    tracep->declQuad(c+225,"EX_io1_REG1", false,-1, 63,0);
    tracep->declQuad(c+227,"EX_io1_REG2", false,-1, 63,0);
    tracep->declQuad(c+1,"EX_io1_PC", false,-1, 63,0);
    tracep->declQuad(c+229,"EX_io1_result", false,-1, 63,0);
    tracep->declBit(c+231,"EX_io1_is_break", false,-1);
    tracep->declBit(c+211,"EX_io1_is_jump", false,-1);
    tracep->declBit(c+212,"EX_io1_is_branch", false,-1);
    tracep->declQuad(c+209,"EX_io1_dnpc", false,-1, 63,0);
    tracep->declQuad(c+232,"EX_io1_addr", false,-1, 63,0);
    tracep->declQuad(c+234,"EX_io1_rdata", false,-1, 63,0);
    tracep->declQuad(c+236,"EX_io1_wdata", false,-1, 63,0);
    tracep->declBus(c+238,"EX_io1_wmask", false,-1, 7,0);
    tracep->declBit(c+231,"DIP_is_break", false,-1);
    tracep->declQuad(c+3,"DIP_rf_0", false,-1, 63,0);
    tracep->declQuad(c+5,"DIP_rf_1", false,-1, 63,0);
    tracep->declQuad(c+7,"DIP_rf_2", false,-1, 63,0);
    tracep->declQuad(c+9,"DIP_rf_3", false,-1, 63,0);
    tracep->declQuad(c+11,"DIP_rf_4", false,-1, 63,0);
    tracep->declQuad(c+13,"DIP_rf_5", false,-1, 63,0);
    tracep->declQuad(c+15,"DIP_rf_6", false,-1, 63,0);
    tracep->declQuad(c+17,"DIP_rf_7", false,-1, 63,0);
    tracep->declQuad(c+19,"DIP_rf_8", false,-1, 63,0);
    tracep->declQuad(c+21,"DIP_rf_9", false,-1, 63,0);
    tracep->declQuad(c+23,"DIP_rf_10", false,-1, 63,0);
    tracep->declQuad(c+25,"DIP_rf_11", false,-1, 63,0);
    tracep->declQuad(c+27,"DIP_rf_12", false,-1, 63,0);
    tracep->declQuad(c+29,"DIP_rf_13", false,-1, 63,0);
    tracep->declQuad(c+31,"DIP_rf_14", false,-1, 63,0);
    tracep->declQuad(c+33,"DIP_rf_15", false,-1, 63,0);
    tracep->declQuad(c+35,"DIP_rf_16", false,-1, 63,0);
    tracep->declQuad(c+37,"DIP_rf_17", false,-1, 63,0);
    tracep->declQuad(c+39,"DIP_rf_18", false,-1, 63,0);
    tracep->declQuad(c+41,"DIP_rf_19", false,-1, 63,0);
    tracep->declQuad(c+43,"DIP_rf_20", false,-1, 63,0);
    tracep->declQuad(c+45,"DIP_rf_21", false,-1, 63,0);
    tracep->declQuad(c+47,"DIP_rf_22", false,-1, 63,0);
    tracep->declQuad(c+49,"DIP_rf_23", false,-1, 63,0);
    tracep->declQuad(c+51,"DIP_rf_24", false,-1, 63,0);
    tracep->declQuad(c+53,"DIP_rf_25", false,-1, 63,0);
    tracep->declQuad(c+55,"DIP_rf_26", false,-1, 63,0);
    tracep->declQuad(c+57,"DIP_rf_27", false,-1, 63,0);
    tracep->declQuad(c+59,"DIP_rf_28", false,-1, 63,0);
    tracep->declQuad(c+61,"DIP_rf_29", false,-1, 63,0);
    tracep->declQuad(c+63,"DIP_rf_30", false,-1, 63,0);
    tracep->declQuad(c+65,"DIP_rf_31", false,-1, 63,0);
    tracep->declBus(c+287,"DIP_inst", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+67+i*2,"rf", true,(i+0), 63,0);
    }
    tracep->declBit(c+296,"rf_EX_io1_REG1_MPORT_en", false,-1);
    tracep->declBus(c+216,"rf_EX_io1_REG1_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+290,"rf_EX_io1_REG1_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+296,"rf_EX_io1_REG2_MPORT_en", false,-1);
    tracep->declBus(c+217,"rf_EX_io1_REG2_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+292,"rf_EX_io1_REG2_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+296,"rf_DIP_io_rf_0_MPORT_en", false,-1);
    tracep->declBus(c+297,"rf_DIP_io_rf_0_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+3,"rf_DIP_io_rf_0_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+296,"rf_DIP_io_rf_1_MPORT_en", false,-1);
    tracep->declBus(c+298,"rf_DIP_io_rf_1_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+5,"rf_DIP_io_rf_1_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+296,"rf_DIP_io_rf_2_MPORT_en", false,-1);
    tracep->declBus(c+299,"rf_DIP_io_rf_2_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+7,"rf_DIP_io_rf_2_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+296,"rf_DIP_io_rf_3_MPORT_en", false,-1);
    tracep->declBus(c+300,"rf_DIP_io_rf_3_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+9,"rf_DIP_io_rf_3_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+296,"rf_DIP_io_rf_4_MPORT_en", false,-1);
    tracep->declBus(c+301,"rf_DIP_io_rf_4_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+11,"rf_DIP_io_rf_4_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+296,"rf_DIP_io_rf_5_MPORT_en", false,-1);
    tracep->declBus(c+302,"rf_DIP_io_rf_5_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+13,"rf_DIP_io_rf_5_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+296,"rf_DIP_io_rf_6_MPORT_en", false,-1);
    tracep->declBus(c+303,"rf_DIP_io_rf_6_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+15,"rf_DIP_io_rf_6_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+296,"rf_DIP_io_rf_7_MPORT_en", false,-1);
    tracep->declBus(c+304,"rf_DIP_io_rf_7_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+17,"rf_DIP_io_rf_7_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+296,"rf_DIP_io_rf_8_MPORT_en", false,-1);
    tracep->declBus(c+305,"rf_DIP_io_rf_8_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+19,"rf_DIP_io_rf_8_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+296,"rf_DIP_io_rf_9_MPORT_en", false,-1);
    tracep->declBus(c+306,"rf_DIP_io_rf_9_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+21,"rf_DIP_io_rf_9_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+296,"rf_DIP_io_rf_10_MPORT_en", false,-1);
    tracep->declBus(c+307,"rf_DIP_io_rf_10_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+23,"rf_DIP_io_rf_10_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+296,"rf_DIP_io_rf_11_MPORT_en", false,-1);
    tracep->declBus(c+308,"rf_DIP_io_rf_11_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+25,"rf_DIP_io_rf_11_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+296,"rf_DIP_io_rf_12_MPORT_en", false,-1);
    tracep->declBus(c+309,"rf_DIP_io_rf_12_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+27,"rf_DIP_io_rf_12_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+296,"rf_DIP_io_rf_13_MPORT_en", false,-1);
    tracep->declBus(c+310,"rf_DIP_io_rf_13_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+29,"rf_DIP_io_rf_13_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+296,"rf_DIP_io_rf_14_MPORT_en", false,-1);
    tracep->declBus(c+311,"rf_DIP_io_rf_14_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+31,"rf_DIP_io_rf_14_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+296,"rf_DIP_io_rf_15_MPORT_en", false,-1);
    tracep->declBus(c+312,"rf_DIP_io_rf_15_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+33,"rf_DIP_io_rf_15_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+296,"rf_DIP_io_rf_16_MPORT_en", false,-1);
    tracep->declBus(c+313,"rf_DIP_io_rf_16_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+35,"rf_DIP_io_rf_16_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+296,"rf_DIP_io_rf_17_MPORT_en", false,-1);
    tracep->declBus(c+314,"rf_DIP_io_rf_17_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+37,"rf_DIP_io_rf_17_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+296,"rf_DIP_io_rf_18_MPORT_en", false,-1);
    tracep->declBus(c+315,"rf_DIP_io_rf_18_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+39,"rf_DIP_io_rf_18_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+296,"rf_DIP_io_rf_19_MPORT_en", false,-1);
    tracep->declBus(c+316,"rf_DIP_io_rf_19_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+41,"rf_DIP_io_rf_19_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+296,"rf_DIP_io_rf_20_MPORT_en", false,-1);
    tracep->declBus(c+317,"rf_DIP_io_rf_20_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+43,"rf_DIP_io_rf_20_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+296,"rf_DIP_io_rf_21_MPORT_en", false,-1);
    tracep->declBus(c+318,"rf_DIP_io_rf_21_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+45,"rf_DIP_io_rf_21_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+296,"rf_DIP_io_rf_22_MPORT_en", false,-1);
    tracep->declBus(c+319,"rf_DIP_io_rf_22_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+47,"rf_DIP_io_rf_22_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+296,"rf_DIP_io_rf_23_MPORT_en", false,-1);
    tracep->declBus(c+320,"rf_DIP_io_rf_23_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+49,"rf_DIP_io_rf_23_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+296,"rf_DIP_io_rf_24_MPORT_en", false,-1);
    tracep->declBus(c+321,"rf_DIP_io_rf_24_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+51,"rf_DIP_io_rf_24_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+296,"rf_DIP_io_rf_25_MPORT_en", false,-1);
    tracep->declBus(c+322,"rf_DIP_io_rf_25_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+53,"rf_DIP_io_rf_25_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+296,"rf_DIP_io_rf_26_MPORT_en", false,-1);
    tracep->declBus(c+323,"rf_DIP_io_rf_26_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+55,"rf_DIP_io_rf_26_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+296,"rf_DIP_io_rf_27_MPORT_en", false,-1);
    tracep->declBus(c+324,"rf_DIP_io_rf_27_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+57,"rf_DIP_io_rf_27_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+296,"rf_DIP_io_rf_28_MPORT_en", false,-1);
    tracep->declBus(c+325,"rf_DIP_io_rf_28_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+59,"rf_DIP_io_rf_28_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+296,"rf_DIP_io_rf_29_MPORT_en", false,-1);
    tracep->declBus(c+326,"rf_DIP_io_rf_29_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+61,"rf_DIP_io_rf_29_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+296,"rf_DIP_io_rf_30_MPORT_en", false,-1);
    tracep->declBus(c+327,"rf_DIP_io_rf_30_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+63,"rf_DIP_io_rf_30_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+296,"rf_DIP_io_rf_31_MPORT_en", false,-1);
    tracep->declBus(c+328,"rf_DIP_io_rf_31_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+65,"rf_DIP_io_rf_31_MPORT_data", false,-1, 63,0);
    tracep->declQuad(c+239,"rf_MPORT_data", false,-1, 63,0);
    tracep->declBus(c+218,"rf_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+296,"rf_MPORT_mask", false,-1);
    tracep->declBit(c+223,"rf_MPORT_en", false,-1);
    tracep->declQuad(c+232,"mem_addr", false,-1, 63,0);
    tracep->declBit(c+284,"mem_reset", false,-1);
    tracep->declBit(c+283,"mem_clk", false,-1);
    tracep->declBit(c+224,"mem_we", false,-1);
    tracep->declBit(c+241,"mem_ce", false,-1);
    tracep->declQuad(c+236,"mem_wdata", false,-1, 63,0);
    tracep->declQuad(c+234,"mem_rdata", false,-1, 63,0);
    tracep->declBus(c+238,"mem_wmask", false,-1, 7,0);
    tracep->declBus(c+216,"src1add", false,-1, 4,0);
    tracep->declBus(c+217,"src2add", false,-1, 4,0);
    tracep->pushNamePrefix("DIP ");
    tracep->declBit(c+231,"is_break", false,-1);
    tracep->declBus(c+287,"inst", false,-1, 31,0);
    tracep->declQuad(c+3,"rf_0", false,-1, 63,0);
    tracep->declQuad(c+5,"rf_1", false,-1, 63,0);
    tracep->declQuad(c+7,"rf_2", false,-1, 63,0);
    tracep->declQuad(c+9,"rf_3", false,-1, 63,0);
    tracep->declQuad(c+11,"rf_4", false,-1, 63,0);
    tracep->declQuad(c+13,"rf_5", false,-1, 63,0);
    tracep->declQuad(c+15,"rf_6", false,-1, 63,0);
    tracep->declQuad(c+17,"rf_7", false,-1, 63,0);
    tracep->declQuad(c+19,"rf_8", false,-1, 63,0);
    tracep->declQuad(c+21,"rf_9", false,-1, 63,0);
    tracep->declQuad(c+23,"rf_10", false,-1, 63,0);
    tracep->declQuad(c+25,"rf_11", false,-1, 63,0);
    tracep->declQuad(c+27,"rf_12", false,-1, 63,0);
    tracep->declQuad(c+29,"rf_13", false,-1, 63,0);
    tracep->declQuad(c+31,"rf_14", false,-1, 63,0);
    tracep->declQuad(c+33,"rf_15", false,-1, 63,0);
    tracep->declQuad(c+35,"rf_16", false,-1, 63,0);
    tracep->declQuad(c+37,"rf_17", false,-1, 63,0);
    tracep->declQuad(c+39,"rf_18", false,-1, 63,0);
    tracep->declQuad(c+41,"rf_19", false,-1, 63,0);
    tracep->declQuad(c+43,"rf_20", false,-1, 63,0);
    tracep->declQuad(c+45,"rf_21", false,-1, 63,0);
    tracep->declQuad(c+47,"rf_22", false,-1, 63,0);
    tracep->declQuad(c+49,"rf_23", false,-1, 63,0);
    tracep->declQuad(c+51,"rf_24", false,-1, 63,0);
    tracep->declQuad(c+53,"rf_25", false,-1, 63,0);
    tracep->declQuad(c+55,"rf_26", false,-1, 63,0);
    tracep->declQuad(c+57,"rf_27", false,-1, 63,0);
    tracep->declQuad(c+59,"rf_28", false,-1, 63,0);
    tracep->declQuad(c+61,"rf_29", false,-1, 63,0);
    tracep->declQuad(c+63,"rf_30", false,-1, 63,0);
    tracep->declQuad(c+65,"rf_31", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+131+i*2,"rf", true,(i+0), 63,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EX ");
    tracep->declBit(c+283,"clock", false,-1);
    tracep->declBit(c+284,"reset", false,-1);
    tracep->declBus(c+214,"io_src1type", false,-1, 2,0);
    tracep->declBus(c+215,"io_src2type", false,-1, 2,0);
    tracep->declBus(c+219,"io_futype", false,-1, 2,0);
    tracep->declBus(c+220,"io_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+221,"io_Imm", false,-1, 63,0);
    tracep->declQuad(c+225,"io1_REG1", false,-1, 63,0);
    tracep->declQuad(c+227,"io1_REG2", false,-1, 63,0);
    tracep->declQuad(c+1,"io1_PC", false,-1, 63,0);
    tracep->declQuad(c+229,"io1_result", false,-1, 63,0);
    tracep->declBit(c+231,"io1_is_break", false,-1);
    tracep->declBit(c+211,"io1_is_jump", false,-1);
    tracep->declBit(c+212,"io1_is_branch", false,-1);
    tracep->declQuad(c+209,"io1_dnpc", false,-1, 63,0);
    tracep->declQuad(c+232,"io1_addr", false,-1, 63,0);
    tracep->declQuad(c+234,"io1_rdata", false,-1, 63,0);
    tracep->declQuad(c+236,"io1_wdata", false,-1, 63,0);
    tracep->declBus(c+238,"io1_wmask", false,-1, 7,0);
    tracep->declQuad(c+329,"CSRDIFF_mepc", false,-1, 63,0);
    tracep->declQuad(c+195,"CSRDIFF_mcause", false,-1, 63,0);
    tracep->declQuad(c+329,"CSRDIFF_mstatus", false,-1, 63,0);
    tracep->declQuad(c+329,"CSRDIFF_mtvec", false,-1, 63,0);
    tracep->declQuad(c+195,"mcause", false,-1, 63,0);
    tracep->declQuad(c+242,"src1", false,-1, 63,0);
    tracep->declQuad(c+244,"src2", false,-1, 63,0);
    tracep->declQuad(c+246,"addr_temp", false,-1, 63,0);
    tracep->declBit(c+248,"mem_result_sign", false,-1);
    tracep->declBit(c+249,"mem_result_sign_1", false,-1);
    tracep->declBit(c+250,"mem_result_sign_3", false,-1);
    tracep->declBit(c+251,"mem_result_sign_4", false,-1);
    tracep->declQuad(c+252,"mem_result", false,-1, 63,0);
    tracep->declBit(c+254,"alu_result_sign", false,-1);
    tracep->declBit(c+255,"alu_result_sign_2", false,-1);
    tracep->declBit(c+256,"alu_result_sign_3", false,-1);
    tracep->declBit(c+257,"alu_result_sign_4", false,-1);
    tracep->declBit(c+258,"alu_result_sign_5", false,-1);
    tracep->declBit(c+259,"alu_result_sign_6", false,-1);
    tracep->declBit(c+260,"alu_result_sign_7", false,-1);
    tracep->declQuad(c+261,"alu_result", false,-1, 63,0);
    tracep->declBit(c+263,"shift_result_sign", false,-1);
    tracep->declBit(c+264,"shift_result_sign_1", false,-1);
    tracep->declBit(c+265,"shift_result_sign_2", false,-1);
    tracep->declBit(c+266,"shift_result_sign_3", false,-1);
    tracep->declQuad(c+267,"compar_result", false,-1, 63,0);
    tracep->declQuad(c+294,"jump_result", false,-1, 63,0);
    tracep->declQuad(c+269,"shift_result", false,-1, 63,0);
    tracep->declQuad(c+271,"branch_result", false,-1, 63,0);
    tracep->declBit(c+212,"branch_flag", false,-1);
    tracep->declQuad(c+273,"csr_data", false,-1, 63,0);
    tracep->pushNamePrefix("CSRDIFF ");
    tracep->declQuad(c+329,"mepc", false,-1, 63,0);
    tracep->declQuad(c+195,"mcause", false,-1, 63,0);
    tracep->declQuad(c+329,"mstatus", false,-1, 63,0);
    tracep->declQuad(c+329,"mtvec", false,-1, 63,0);
    for (int i = 0; i < 6; ++i) {
        tracep->declQuad(c+197+i*2,"inst_csr", true,(i+0), 63,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ID ");
    tracep->declBus(c+213,"io_inst", false,-1, 31,0);
    tracep->declBus(c+214,"io_ctrlIO_src1type", false,-1, 2,0);
    tracep->declBus(c+215,"io_ctrlIO_src2type", false,-1, 2,0);
    tracep->declBus(c+216,"io_ctrlIO_src1", false,-1, 4,0);
    tracep->declBus(c+217,"io_ctrlIO_src2", false,-1, 4,0);
    tracep->declBus(c+218,"io_ctrlIO_rd", false,-1, 4,0);
    tracep->declBus(c+219,"io_ctrlIO_futype", false,-1, 2,0);
    tracep->declBus(c+220,"io_ctrlIO_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+221,"io_ctrlIO_Imm", false,-1, 63,0);
    tracep->declBit(c+223,"io_rd_en", false,-1);
    tracep->declBit(c+224,"io_mem_we", false,-1);
    tracep->declBus(c+218,"rd", false,-1, 4,0);
    tracep->declBus(c+275,"Inst_decode_0", false,-1, 3,0);
    tracep->declBus(c+220,"Inst_decode_2", false,-1, 6,0);
    tracep->declBus(c+276,"srctype1", false,-1, 1,0);
    tracep->declBit(c+277,"srctype2", false,-1);
    tracep->declBit(c+278,"sign", false,-1);
    tracep->declBit(c+279,"sign_1", false,-1);
    tracep->declBit(c+280,"sign_2", false,-1);
    tracep->declBit(c+280,"sign_3", false,-1);
    tracep->declBit(c+278,"sign_4", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IF ");
    tracep->declBit(c+283,"clock", false,-1);
    tracep->declBit(c+284,"reset", false,-1);
    tracep->declQuad(c+209,"io_dnpc", false,-1, 63,0);
    tracep->declBit(c+211,"io_is_jump", false,-1);
    tracep->declBit(c+212,"io_is_branch", false,-1);
    tracep->declQuad(c+1,"io_pc", false,-1, 63,0);
    tracep->declQuad(c+1,"temp", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IFM ");
    tracep->declBit(c+284,"reset", false,-1);
    tracep->declBit(c+283,"clk", false,-1);
    tracep->declQuad(c+1,"pc", false,-1, 63,0);
    tracep->declBus(c+213,"inst", false,-1, 31,0);
    tracep->declQuad(c+281,"rdata", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem ");
    tracep->declBit(c+284,"reset", false,-1);
    tracep->declBit(c+283,"clk", false,-1);
    tracep->declQuad(c+232,"addr", false,-1, 63,0);
    tracep->declBit(c+224,"we", false,-1);
    tracep->declBit(c+241,"ce", false,-1);
    tracep->declQuad(c+236,"wdata", false,-1, 63,0);
    tracep->declQuad(c+234,"rdata", false,-1, 63,0);
    tracep->declBus(c+238,"wmask", false,-1, 7,0);
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
    VlWide<4>/*127:0*/ __Vtemp_h7548e965__0;
    VlWide<4>/*127:0*/ __Vtemp_hd83d5fe3__0;
    VlWide<4>/*127:0*/ __Vtemp_hb125646c__0;
    VlWide<4>/*127:0*/ __Vtemp_h2a02089f__0;
    VlWide<4>/*127:0*/ __Vtemp_hdc10468f__0;
    // Body
    bufp->fullQData(oldp+1,(vlSelf->CPUTop__DOT__IF__DOT__temp),64);
    bufp->fullQData(oldp+3,(vlSelf->CPUTop__DOT__rf
                            [0U]),64);
    bufp->fullQData(oldp+5,(vlSelf->CPUTop__DOT__rf
                            [1U]),64);
    bufp->fullQData(oldp+7,(vlSelf->CPUTop__DOT__rf
                            [2U]),64);
    bufp->fullQData(oldp+9,(vlSelf->CPUTop__DOT__rf
                            [3U]),64);
    bufp->fullQData(oldp+11,(vlSelf->CPUTop__DOT__rf
                             [4U]),64);
    bufp->fullQData(oldp+13,(vlSelf->CPUTop__DOT__rf
                             [5U]),64);
    bufp->fullQData(oldp+15,(vlSelf->CPUTop__DOT__rf
                             [6U]),64);
    bufp->fullQData(oldp+17,(vlSelf->CPUTop__DOT__rf
                             [7U]),64);
    bufp->fullQData(oldp+19,(vlSelf->CPUTop__DOT__rf
                             [8U]),64);
    bufp->fullQData(oldp+21,(vlSelf->CPUTop__DOT__rf
                             [9U]),64);
    bufp->fullQData(oldp+23,(vlSelf->CPUTop__DOT__rf
                             [0xaU]),64);
    bufp->fullQData(oldp+25,(vlSelf->CPUTop__DOT__rf
                             [0xbU]),64);
    bufp->fullQData(oldp+27,(vlSelf->CPUTop__DOT__rf
                             [0xcU]),64);
    bufp->fullQData(oldp+29,(vlSelf->CPUTop__DOT__rf
                             [0xdU]),64);
    bufp->fullQData(oldp+31,(vlSelf->CPUTop__DOT__rf
                             [0xeU]),64);
    bufp->fullQData(oldp+33,(vlSelf->CPUTop__DOT__rf
                             [0xfU]),64);
    bufp->fullQData(oldp+35,(vlSelf->CPUTop__DOT__rf
                             [0x10U]),64);
    bufp->fullQData(oldp+37,(vlSelf->CPUTop__DOT__rf
                             [0x11U]),64);
    bufp->fullQData(oldp+39,(vlSelf->CPUTop__DOT__rf
                             [0x12U]),64);
    bufp->fullQData(oldp+41,(vlSelf->CPUTop__DOT__rf
                             [0x13U]),64);
    bufp->fullQData(oldp+43,(vlSelf->CPUTop__DOT__rf
                             [0x14U]),64);
    bufp->fullQData(oldp+45,(vlSelf->CPUTop__DOT__rf
                             [0x15U]),64);
    bufp->fullQData(oldp+47,(vlSelf->CPUTop__DOT__rf
                             [0x16U]),64);
    bufp->fullQData(oldp+49,(vlSelf->CPUTop__DOT__rf
                             [0x17U]),64);
    bufp->fullQData(oldp+51,(vlSelf->CPUTop__DOT__rf
                             [0x18U]),64);
    bufp->fullQData(oldp+53,(vlSelf->CPUTop__DOT__rf
                             [0x19U]),64);
    bufp->fullQData(oldp+55,(vlSelf->CPUTop__DOT__rf
                             [0x1aU]),64);
    bufp->fullQData(oldp+57,(vlSelf->CPUTop__DOT__rf
                             [0x1bU]),64);
    bufp->fullQData(oldp+59,(vlSelf->CPUTop__DOT__rf
                             [0x1cU]),64);
    bufp->fullQData(oldp+61,(vlSelf->CPUTop__DOT__rf
                             [0x1dU]),64);
    bufp->fullQData(oldp+63,(vlSelf->CPUTop__DOT__rf
                             [0x1eU]),64);
    bufp->fullQData(oldp+65,(vlSelf->CPUTop__DOT__rf
                             [0x1fU]),64);
    bufp->fullQData(oldp+67,(vlSelf->CPUTop__DOT__rf[0]),64);
    bufp->fullQData(oldp+69,(vlSelf->CPUTop__DOT__rf[1]),64);
    bufp->fullQData(oldp+71,(vlSelf->CPUTop__DOT__rf[2]),64);
    bufp->fullQData(oldp+73,(vlSelf->CPUTop__DOT__rf[3]),64);
    bufp->fullQData(oldp+75,(vlSelf->CPUTop__DOT__rf[4]),64);
    bufp->fullQData(oldp+77,(vlSelf->CPUTop__DOT__rf[5]),64);
    bufp->fullQData(oldp+79,(vlSelf->CPUTop__DOT__rf[6]),64);
    bufp->fullQData(oldp+81,(vlSelf->CPUTop__DOT__rf[7]),64);
    bufp->fullQData(oldp+83,(vlSelf->CPUTop__DOT__rf[8]),64);
    bufp->fullQData(oldp+85,(vlSelf->CPUTop__DOT__rf[9]),64);
    bufp->fullQData(oldp+87,(vlSelf->CPUTop__DOT__rf[10]),64);
    bufp->fullQData(oldp+89,(vlSelf->CPUTop__DOT__rf[11]),64);
    bufp->fullQData(oldp+91,(vlSelf->CPUTop__DOT__rf[12]),64);
    bufp->fullQData(oldp+93,(vlSelf->CPUTop__DOT__rf[13]),64);
    bufp->fullQData(oldp+95,(vlSelf->CPUTop__DOT__rf[14]),64);
    bufp->fullQData(oldp+97,(vlSelf->CPUTop__DOT__rf[15]),64);
    bufp->fullQData(oldp+99,(vlSelf->CPUTop__DOT__rf[16]),64);
    bufp->fullQData(oldp+101,(vlSelf->CPUTop__DOT__rf[17]),64);
    bufp->fullQData(oldp+103,(vlSelf->CPUTop__DOT__rf[18]),64);
    bufp->fullQData(oldp+105,(vlSelf->CPUTop__DOT__rf[19]),64);
    bufp->fullQData(oldp+107,(vlSelf->CPUTop__DOT__rf[20]),64);
    bufp->fullQData(oldp+109,(vlSelf->CPUTop__DOT__rf[21]),64);
    bufp->fullQData(oldp+111,(vlSelf->CPUTop__DOT__rf[22]),64);
    bufp->fullQData(oldp+113,(vlSelf->CPUTop__DOT__rf[23]),64);
    bufp->fullQData(oldp+115,(vlSelf->CPUTop__DOT__rf[24]),64);
    bufp->fullQData(oldp+117,(vlSelf->CPUTop__DOT__rf[25]),64);
    bufp->fullQData(oldp+119,(vlSelf->CPUTop__DOT__rf[26]),64);
    bufp->fullQData(oldp+121,(vlSelf->CPUTop__DOT__rf[27]),64);
    bufp->fullQData(oldp+123,(vlSelf->CPUTop__DOT__rf[28]),64);
    bufp->fullQData(oldp+125,(vlSelf->CPUTop__DOT__rf[29]),64);
    bufp->fullQData(oldp+127,(vlSelf->CPUTop__DOT__rf[30]),64);
    bufp->fullQData(oldp+129,(vlSelf->CPUTop__DOT__rf[31]),64);
    bufp->fullQData(oldp+131,(vlSelf->CPUTop__DOT__DIP__DOT__rf[0]),64);
    bufp->fullQData(oldp+133,(vlSelf->CPUTop__DOT__DIP__DOT__rf[1]),64);
    bufp->fullQData(oldp+135,(vlSelf->CPUTop__DOT__DIP__DOT__rf[2]),64);
    bufp->fullQData(oldp+137,(vlSelf->CPUTop__DOT__DIP__DOT__rf[3]),64);
    bufp->fullQData(oldp+139,(vlSelf->CPUTop__DOT__DIP__DOT__rf[4]),64);
    bufp->fullQData(oldp+141,(vlSelf->CPUTop__DOT__DIP__DOT__rf[5]),64);
    bufp->fullQData(oldp+143,(vlSelf->CPUTop__DOT__DIP__DOT__rf[6]),64);
    bufp->fullQData(oldp+145,(vlSelf->CPUTop__DOT__DIP__DOT__rf[7]),64);
    bufp->fullQData(oldp+147,(vlSelf->CPUTop__DOT__DIP__DOT__rf[8]),64);
    bufp->fullQData(oldp+149,(vlSelf->CPUTop__DOT__DIP__DOT__rf[9]),64);
    bufp->fullQData(oldp+151,(vlSelf->CPUTop__DOT__DIP__DOT__rf[10]),64);
    bufp->fullQData(oldp+153,(vlSelf->CPUTop__DOT__DIP__DOT__rf[11]),64);
    bufp->fullQData(oldp+155,(vlSelf->CPUTop__DOT__DIP__DOT__rf[12]),64);
    bufp->fullQData(oldp+157,(vlSelf->CPUTop__DOT__DIP__DOT__rf[13]),64);
    bufp->fullQData(oldp+159,(vlSelf->CPUTop__DOT__DIP__DOT__rf[14]),64);
    bufp->fullQData(oldp+161,(vlSelf->CPUTop__DOT__DIP__DOT__rf[15]),64);
    bufp->fullQData(oldp+163,(vlSelf->CPUTop__DOT__DIP__DOT__rf[16]),64);
    bufp->fullQData(oldp+165,(vlSelf->CPUTop__DOT__DIP__DOT__rf[17]),64);
    bufp->fullQData(oldp+167,(vlSelf->CPUTop__DOT__DIP__DOT__rf[18]),64);
    bufp->fullQData(oldp+169,(vlSelf->CPUTop__DOT__DIP__DOT__rf[19]),64);
    bufp->fullQData(oldp+171,(vlSelf->CPUTop__DOT__DIP__DOT__rf[20]),64);
    bufp->fullQData(oldp+173,(vlSelf->CPUTop__DOT__DIP__DOT__rf[21]),64);
    bufp->fullQData(oldp+175,(vlSelf->CPUTop__DOT__DIP__DOT__rf[22]),64);
    bufp->fullQData(oldp+177,(vlSelf->CPUTop__DOT__DIP__DOT__rf[23]),64);
    bufp->fullQData(oldp+179,(vlSelf->CPUTop__DOT__DIP__DOT__rf[24]),64);
    bufp->fullQData(oldp+181,(vlSelf->CPUTop__DOT__DIP__DOT__rf[25]),64);
    bufp->fullQData(oldp+183,(vlSelf->CPUTop__DOT__DIP__DOT__rf[26]),64);
    bufp->fullQData(oldp+185,(vlSelf->CPUTop__DOT__DIP__DOT__rf[27]),64);
    bufp->fullQData(oldp+187,(vlSelf->CPUTop__DOT__DIP__DOT__rf[28]),64);
    bufp->fullQData(oldp+189,(vlSelf->CPUTop__DOT__DIP__DOT__rf[29]),64);
    bufp->fullQData(oldp+191,(vlSelf->CPUTop__DOT__DIP__DOT__rf[30]),64);
    bufp->fullQData(oldp+193,(vlSelf->CPUTop__DOT__DIP__DOT__rf[31]),64);
    bufp->fullQData(oldp+195,(vlSelf->CPUTop__DOT__EX__DOT__mcause),64);
    bufp->fullQData(oldp+197,(vlSelf->CPUTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[0]),64);
    bufp->fullQData(oldp+199,(vlSelf->CPUTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[1]),64);
    bufp->fullQData(oldp+201,(vlSelf->CPUTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[2]),64);
    bufp->fullQData(oldp+203,(vlSelf->CPUTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[3]),64);
    bufp->fullQData(oldp+205,(vlSelf->CPUTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[4]),64);
    bufp->fullQData(oldp+207,(vlSelf->CPUTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[5]),64);
    bufp->fullQData(oldp+209,(((0x19U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
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
                                                : (
                                                   (0xcU 
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
    bufp->fullBit(oldp+211,((3U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype))));
    bufp->fullBit(oldp+212,(((0x6bU == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                              ? (vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_58 
                                 == vlSelf->CPUTop__DOT__EX__DOT__src2)
                              : (IData)(vlSelf->CPUTop__DOT__EX__DOT___GEN_108))));
    bufp->fullIData(oldp+213,(vlSelf->CPUTop__DOT__IFM_inst),32);
    bufp->fullCData(oldp+214,(vlSelf->CPUTop__DOT__ID__DOT___io_ctrlIO_src1type_T_2),3);
    bufp->fullCData(oldp+215,(vlSelf->CPUTop__DOT__ID__DOT__srctype2),3);
    bufp->fullCData(oldp+216,((0x1fU & (vlSelf->CPUTop__DOT__IFM_inst 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+217,((0x1fU & (vlSelf->CPUTop__DOT__IFM_inst 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+218,((0x1fU & (vlSelf->CPUTop__DOT__IFM_inst 
                                        >> 7U))),5);
    bufp->fullCData(oldp+219,(vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype),3);
    bufp->fullCData(oldp+220,(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype),7);
    bufp->fullQData(oldp+221,(vlSelf->CPUTop__DOT__ID_io_ctrlIO_Imm),64);
    bufp->fullBit(oldp+223,(((0x13U == (0x707fU & vlSelf->CPUTop__DOT__IFM_inst)) 
                             | ((0x1013U == (0xfc00707fU 
                                             & vlSelf->CPUTop__DOT__IFM_inst)) 
                                | ((0x17U == (0x7fU 
                                              & vlSelf->CPUTop__DOT__IFM_inst)) 
                                   | ((0x37U == (0x7fU 
                                                 & vlSelf->CPUTop__DOT__IFM_inst)) 
                                      | ((0x6013U == 
                                          (0x707fU 
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
                                                                    & (IData)(vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_366)))))))))))))))));
    bufp->fullBit(oldp+224,((1U & (~ (((((((0x45U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype)) 
                                           | (0x47U 
                                              == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))) 
                                          | (0x6fU 
                                             == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))) 
                                         | (3U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))) 
                                        | (4U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))) 
                                       | (0xeU == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))) 
                                      | (0x11U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype)))))));
    bufp->fullQData(oldp+225,(vlSelf->CPUTop__DOT__EX_io1_REG1),64);
    bufp->fullQData(oldp+227,(vlSelf->CPUTop__DOT__EX_io1_REG2),64);
    bufp->fullQData(oldp+229,(vlSelf->CPUTop__DOT__EX_io1_result),64);
    bufp->fullBit(oldp+231,((0x42U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))));
    bufp->fullQData(oldp+232,(((0x45U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                ? vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_1
                                : vlSelf->CPUTop__DOT__EX__DOT___GEN_14)),64);
    bufp->fullQData(oldp+234,(vlSelf->CPUTop__DOT__mem_rdata),64);
    bufp->fullQData(oldp+236,(((0x46U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
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
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & (IData)(
                                                           (vlSelf->CPUTop__DOT__EX__DOT__addr_temp 
                                                            >> 1U))))
                                                ? ((QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->CPUTop__DOT__EX__DOT__src2)))) 
                                                   << 0x20U)
                                                : (
                                                   (3U 
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
                                            ? ((1U 
                                                & (IData)(
                                                          (vlSelf->CPUTop__DOT__EX__DOT__addr_temp 
                                                           >> 2U)))
                                                ? ((QData)((IData)(vlSelf->CPUTop__DOT__EX__DOT__src2)) 
                                                   << 0x20U)
                                                : (QData)((IData)(vlSelf->CPUTop__DOT__EX__DOT__src2)))
                                            : 0ULL))))),64);
    bufp->fullCData(oldp+238,(((0x46U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                ? 0xffU : (IData)(vlSelf->CPUTop__DOT__EX__DOT___GEN_28))),8);
    bufp->fullQData(oldp+239,(((0U == (0x1fU & (vlSelf->CPUTop__DOT__IFM_inst 
                                                >> 7U)))
                                ? 0ULL : vlSelf->CPUTop__DOT__EX_io1_result)),64);
    bufp->fullBit(oldp+241,((4U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype))));
    bufp->fullQData(oldp+242,(vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_58),64);
    bufp->fullQData(oldp+244,(vlSelf->CPUTop__DOT__EX__DOT__src2),64);
    bufp->fullQData(oldp+246,(vlSelf->CPUTop__DOT__EX__DOT__addr_temp),64);
    bufp->fullBit(oldp+248,((1U & (IData)((vlSelf->CPUTop__DOT__mem_rdata 
                                           >> 0x3fU)))));
    bufp->fullBit(oldp+249,((1U & (IData)((vlSelf->CPUTop__DOT__mem_rdata 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+250,((1U & ((IData)(vlSelf->CPUTop__DOT__EX__DOT___mem_result_T_28) 
                                   >> 7U))));
    bufp->fullBit(oldp+251,((1U & ((IData)(vlSelf->CPUTop__DOT__EX__DOT___mem_result_T_45) 
                                   >> 0xfU))));
    bufp->fullQData(oldp+252,(((0x45U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
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
                                        : ((0x6fU == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                            ? (QData)((IData)(vlSelf->CPUTop__DOT__EX__DOT___mem_result_T_28))
                                            : ((0xeU 
                                                == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                ? (
                                                   (((0x80U 
                                                      & (IData)(vlSelf->CPUTop__DOT__EX__DOT___mem_result_T_28))
                                                      ? 0xffffffffffffffULL
                                                      : 0ULL) 
                                                    << 8U) 
                                                   | (QData)((IData)(vlSelf->CPUTop__DOT__EX__DOT___mem_result_T_28)))
                                                : (
                                                   (3U 
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
    bufp->fullBit(oldp+254,((1U & (IData)((vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_1 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+255,((vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_19[0U] 
                             >> 0x1fU)));
    bufp->fullBit(oldp+256,((1U & (IData)((vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_28 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+257,((vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_38 
                             >> 0x1fU)));
    bufp->fullBit(oldp+258,((vlSelf->CPUTop__DOT__EX__DOT___GEN_15 
                             >> 0x1fU)));
    bufp->fullBit(oldp+259,((1U & (IData)((vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_10 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+260,((vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_64 
                             >> 0x1fU)));
    bufp->fullQData(oldp+261,(((0x40U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                ? vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_1
                                : ((0x68U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                    ? vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_7
                                    : ((0x44U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                        ? (vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_58 
                                           | vlSelf->CPUTop__DOT__EX__DOT__src2)
                                        : ((0x69U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                            ? vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_10
                                            : ((0x71U 
                                                == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                ? (vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_58 
                                                   & vlSelf->CPUTop__DOT__EX__DOT__src2)
                                                : (
                                                   (0x72U 
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
    bufp->fullBit(oldp+263,((vlSelf->CPUTop__DOT__EX__DOT___shift_result_T_5[0U] 
                             >> 0x1fU)));
    bufp->fullBit(oldp+264,((vlSelf->CPUTop__DOT__EX__DOT___shift_result_T_16[0U] 
                             >> 0x1fU)));
    bufp->fullBit(oldp+265,((vlSelf->CPUTop__DOT__EX__DOT___shift_result_T_25 
                             >> 0x1fU)));
    bufp->fullBit(oldp+266,((vlSelf->CPUTop__DOT__EX__DOT___shift_result_T_31 
                             >> 0x1fU)));
    bufp->fullQData(oldp+267,(((0x6aU == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                ? ((vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_58 
                                    < vlSelf->CPUTop__DOT__EX__DOT__src2)
                                    ? 1ULL : 0ULL) : 
                               ((2U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                 ? (VL_LTS_IQQ(64, vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_58, vlSelf->CPUTop__DOT__EX__DOT__src2)
                                     ? 1ULL : 0ULL)
                                 : 0ULL))),64);
    VL_EXTEND_WQ(127,64, __Vtemp_h7548e965__0, VL_SHIFTRS_QQI(64,64,5, vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_58, 
                                                              (0x1fU 
                                                               & (IData)(vlSelf->CPUTop__DOT__EX__DOT__src2))));
    VL_EXTEND_WQ(127,64, __Vtemp_hd83d5fe3__0, (((QData)((IData)(
                                                                 ((vlSelf->CPUTop__DOT__EX__DOT___shift_result_T_5[0U] 
                                                                   >> 0x1fU)
                                                                   ? 0xffffffffU
                                                                   : 0U))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->CPUTop__DOT__EX__DOT___shift_result_T_5[0U]))));
    VL_EXTEND_WQ(127,64, __Vtemp_hb125646c__0, vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_58);
    VL_SHIFTL_WWI(127,127,6, __Vtemp_h2a02089f__0, __Vtemp_hb125646c__0, 
                  (0x3fU & (IData)(vlSelf->CPUTop__DOT__EX__DOT__src2)));
    VL_EXTEND_WQ(127,64, __Vtemp_hdc10468f__0, ((0x75U 
                                                 == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                 ? 
                                                (vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_58 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(vlSelf->CPUTop__DOT__EX__DOT__src2)))
                                                 : 
                                                ((5U 
                                                  == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   ((vlSelf->CPUTop__DOT__EX__DOT___shift_result_T_16[0U] 
                                                                     >> 0x1fU)
                                                                     ? 0xffffffffU
                                                                     : 0U))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->CPUTop__DOT__EX__DOT___shift_result_T_16[0U])))
                                                  : 
                                                 ((6U 
                                                   == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                   ? vlSelf->CPUTop__DOT__EX__DOT___shift_result_T_28
                                                   : 
                                                  ((8U 
                                                    == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                    ? vlSelf->CPUTop__DOT__EX__DOT___shift_result_T_35
                                                    : 
                                                   ((9U 
                                                     == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                     ? vlSelf->CPUTop__DOT__EX__DOT___shift_result_T_28
                                                     : 
                                                    ((0xaU 
                                                      == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                      ? vlSelf->CPUTop__DOT__EX__DOT___shift_result_T_35
                                                      : 
                                                     ((0x14U 
                                                       == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                       ? 
                                                      VL_SHIFTRS_QQI(64,64,6, vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_58, 
                                                                     (0x3fU 
                                                                      & (IData)(vlSelf->CPUTop__DOT__EX__DOT__src2)))
                                                       : 0ULL))))))));
    bufp->fullQData(oldp+269,((((QData)((IData)(((0x6eU 
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
    bufp->fullQData(oldp+271,(((0x6bU == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                ? vlSelf->CPUTop__DOT__EX__DOT___branch_result_T_1
                                : ((0x6cU == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                    ? vlSelf->CPUTop__DOT__EX__DOT___branch_result_T_1
                                    : ((0x76U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                        ? vlSelf->CPUTop__DOT__EX__DOT___branch_result_T_1
                                        : ((0x7bU == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                            ? vlSelf->CPUTop__DOT__EX__DOT___branch_result_T_1
                                            : ((0xbU 
                                                == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                ? vlSelf->CPUTop__DOT__EX__DOT___branch_result_T_1
                                                : (
                                                   (0xcU 
                                                    == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                    ? vlSelf->CPUTop__DOT__EX__DOT___branch_result_T_1
                                                    : 0ULL))))))),64);
    bufp->fullQData(oldp+273,(vlSelf->CPUTop__DOT__EX__DOT__csr_data),64);
    bufp->fullCData(oldp+275,(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0),4);
    bufp->fullCData(oldp+276,((((7U == (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0))
                                 ? 2U : 0U) | ((3U 
                                                == (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0))
                                                ? 2U
                                                : 0U))),2);
    bufp->fullBit(oldp+277,(vlSelf->CPUTop__DOT__ID__DOT__srctype2));
    bufp->fullBit(oldp+278,((vlSelf->CPUTop__DOT__IFM_inst 
                             >> 0x1fU)));
    bufp->fullBit(oldp+279,((1U & (vlSelf->CPUTop__DOT__IFM_inst 
                                   >> 0x13U))));
    bufp->fullBit(oldp+280,((vlSelf->CPUTop__DOT__IFM_inst 
                             >> 0x1fU)));
    bufp->fullQData(oldp+281,(vlSelf->CPUTop__DOT__IFM__DOT__rdata),64);
    bufp->fullBit(oldp+283,(vlSelf->clock));
    bufp->fullBit(oldp+284,(vlSelf->reset));
    bufp->fullQData(oldp+285,(vlSelf->io_pc),64);
    bufp->fullIData(oldp+287,(vlSelf->io_inst),32);
    bufp->fullQData(oldp+288,(vlSelf->io_result),64);
    bufp->fullQData(oldp+290,(vlSelf->CPUTop__DOT__rf
                              [(0x1fU & (vlSelf->CPUTop__DOT__IFM_inst 
                                         >> 0xfU))]),64);
    bufp->fullQData(oldp+292,(vlSelf->CPUTop__DOT__rf
                              [(0x1fU & (vlSelf->CPUTop__DOT__IFM_inst 
                                         >> 0x14U))]),64);
    bufp->fullQData(oldp+294,(((3U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype))
                                ? (4ULL + vlSelf->CPUTop__DOT__IF__DOT__temp)
                                : 0ULL)),64);
    bufp->fullBit(oldp+296,(1U));
    bufp->fullCData(oldp+297,(0U),5);
    bufp->fullCData(oldp+298,(1U),5);
    bufp->fullCData(oldp+299,(2U),5);
    bufp->fullCData(oldp+300,(3U),5);
    bufp->fullCData(oldp+301,(4U),5);
    bufp->fullCData(oldp+302,(5U),5);
    bufp->fullCData(oldp+303,(6U),5);
    bufp->fullCData(oldp+304,(7U),5);
    bufp->fullCData(oldp+305,(8U),5);
    bufp->fullCData(oldp+306,(9U),5);
    bufp->fullCData(oldp+307,(0xaU),5);
    bufp->fullCData(oldp+308,(0xbU),5);
    bufp->fullCData(oldp+309,(0xcU),5);
    bufp->fullCData(oldp+310,(0xdU),5);
    bufp->fullCData(oldp+311,(0xeU),5);
    bufp->fullCData(oldp+312,(0xfU),5);
    bufp->fullCData(oldp+313,(0x10U),5);
    bufp->fullCData(oldp+314,(0x11U),5);
    bufp->fullCData(oldp+315,(0x12U),5);
    bufp->fullCData(oldp+316,(0x13U),5);
    bufp->fullCData(oldp+317,(0x14U),5);
    bufp->fullCData(oldp+318,(0x15U),5);
    bufp->fullCData(oldp+319,(0x16U),5);
    bufp->fullCData(oldp+320,(0x17U),5);
    bufp->fullCData(oldp+321,(0x18U),5);
    bufp->fullCData(oldp+322,(0x19U),5);
    bufp->fullCData(oldp+323,(0x1aU),5);
    bufp->fullCData(oldp+324,(0x1bU),5);
    bufp->fullCData(oldp+325,(0x1cU),5);
    bufp->fullCData(oldp+326,(0x1dU),5);
    bufp->fullCData(oldp+327,(0x1eU),5);
    bufp->fullCData(oldp+328,(0x1fU),5);
    bufp->fullQData(oldp+329,(0ULL),64);
}
