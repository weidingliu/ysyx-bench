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
    tracep->declBit(c+227,"clock", false,-1);
    tracep->declBit(c+228,"reset", false,-1);
    tracep->declQuad(c+229,"io_pc", false,-1, 63,0);
    tracep->declBus(c+231,"io_inst", false,-1, 31,0);
    tracep->declQuad(c+232,"io_result", false,-1, 63,0);
    tracep->pushNamePrefix("CPUTop ");
    tracep->declBit(c+227,"clock", false,-1);
    tracep->declBit(c+228,"reset", false,-1);
    tracep->declQuad(c+229,"io_pc", false,-1, 63,0);
    tracep->declBus(c+231,"io_inst", false,-1, 31,0);
    tracep->declQuad(c+232,"io_result", false,-1, 63,0);
    tracep->declBit(c+227,"IF_clock", false,-1);
    tracep->declBit(c+228,"IF_reset", false,-1);
    tracep->declQuad(c+1,"IF_io_dnpc", false,-1, 63,0);
    tracep->declBit(c+3,"IF_io_is_jump", false,-1);
    tracep->declQuad(c+33,"IF_io_pc", false,-1, 63,0);
    tracep->declBus(c+231,"ID_io_inst", false,-1, 31,0);
    tracep->declBus(c+4,"ID_io_ctrlIO_src1type", false,-1, 2,0);
    tracep->declBus(c+5,"ID_io_ctrlIO_src2type", false,-1, 2,0);
    tracep->declBus(c+234,"ID_io_ctrlIO_src1", false,-1, 4,0);
    tracep->declBus(c+235,"ID_io_ctrlIO_src2", false,-1, 4,0);
    tracep->declBus(c+236,"ID_io_ctrlIO_rd", false,-1, 4,0);
    tracep->declBus(c+6,"ID_io_ctrlIO_futype", false,-1, 2,0);
    tracep->declBus(c+7,"ID_io_ctrlIO_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+8,"ID_io_ctrlIO_Imm", false,-1, 63,0);
    tracep->declBit(c+237,"ID_io_rd_en", false,-1);
    tracep->declBit(c+238,"ID_io_mem_we", false,-1);
    tracep->declBus(c+4,"EX_io_src1type", false,-1, 2,0);
    tracep->declBus(c+5,"EX_io_src2type", false,-1, 2,0);
    tracep->declBus(c+6,"EX_io_futype", false,-1, 2,0);
    tracep->declBus(c+7,"EX_io_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+8,"EX_io_Imm", false,-1, 63,0);
    tracep->declQuad(c+239,"EX_io1_REG1", false,-1, 63,0);
    tracep->declQuad(c+241,"EX_io1_REG2", false,-1, 63,0);
    tracep->declQuad(c+33,"EX_io1_PC", false,-1, 63,0);
    tracep->declQuad(c+10,"EX_io1_result", false,-1, 63,0);
    tracep->declBit(c+12,"EX_io1_is_break", false,-1);
    tracep->declBit(c+3,"EX_io1_is_jump", false,-1);
    tracep->declQuad(c+1,"EX_io1_dnpc", false,-1, 63,0);
    tracep->declQuad(c+13,"EX_io1_addr", false,-1, 63,0);
    tracep->declQuad(c+15,"EX_io1_rdata", false,-1, 63,0);
    tracep->declQuad(c+17,"EX_io1_wdata", false,-1, 63,0);
    tracep->declBus(c+19,"EX_io1_wmask", false,-1, 7,0);
    tracep->declBit(c+12,"DIP_is_break", false,-1);
    tracep->declQuad(c+35,"DIP_rf_0", false,-1, 63,0);
    tracep->declQuad(c+37,"DIP_rf_1", false,-1, 63,0);
    tracep->declQuad(c+39,"DIP_rf_2", false,-1, 63,0);
    tracep->declQuad(c+41,"DIP_rf_3", false,-1, 63,0);
    tracep->declQuad(c+43,"DIP_rf_4", false,-1, 63,0);
    tracep->declQuad(c+45,"DIP_rf_5", false,-1, 63,0);
    tracep->declQuad(c+47,"DIP_rf_6", false,-1, 63,0);
    tracep->declQuad(c+49,"DIP_rf_7", false,-1, 63,0);
    tracep->declQuad(c+51,"DIP_rf_8", false,-1, 63,0);
    tracep->declQuad(c+53,"DIP_rf_9", false,-1, 63,0);
    tracep->declQuad(c+55,"DIP_rf_10", false,-1, 63,0);
    tracep->declQuad(c+57,"DIP_rf_11", false,-1, 63,0);
    tracep->declQuad(c+59,"DIP_rf_12", false,-1, 63,0);
    tracep->declQuad(c+61,"DIP_rf_13", false,-1, 63,0);
    tracep->declQuad(c+63,"DIP_rf_14", false,-1, 63,0);
    tracep->declQuad(c+65,"DIP_rf_15", false,-1, 63,0);
    tracep->declQuad(c+67,"DIP_rf_16", false,-1, 63,0);
    tracep->declQuad(c+69,"DIP_rf_17", false,-1, 63,0);
    tracep->declQuad(c+71,"DIP_rf_18", false,-1, 63,0);
    tracep->declQuad(c+73,"DIP_rf_19", false,-1, 63,0);
    tracep->declQuad(c+75,"DIP_rf_20", false,-1, 63,0);
    tracep->declQuad(c+77,"DIP_rf_21", false,-1, 63,0);
    tracep->declQuad(c+79,"DIP_rf_22", false,-1, 63,0);
    tracep->declQuad(c+81,"DIP_rf_23", false,-1, 63,0);
    tracep->declQuad(c+83,"DIP_rf_24", false,-1, 63,0);
    tracep->declQuad(c+85,"DIP_rf_25", false,-1, 63,0);
    tracep->declQuad(c+87,"DIP_rf_26", false,-1, 63,0);
    tracep->declQuad(c+89,"DIP_rf_27", false,-1, 63,0);
    tracep->declQuad(c+91,"DIP_rf_28", false,-1, 63,0);
    tracep->declQuad(c+93,"DIP_rf_29", false,-1, 63,0);
    tracep->declQuad(c+95,"DIP_rf_30", false,-1, 63,0);
    tracep->declQuad(c+97,"DIP_rf_31", false,-1, 63,0);
    tracep->declBus(c+231,"DIP_inst", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+99+i*2,"rf", true,(i+0), 63,0);
    }
    tracep->declBit(c+255,"rf_EX_io1_REG1_MPORT_en", false,-1);
    tracep->declBus(c+234,"rf_EX_io1_REG1_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+243,"rf_EX_io1_REG1_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+255,"rf_EX_io1_REG2_MPORT_en", false,-1);
    tracep->declBus(c+235,"rf_EX_io1_REG2_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+245,"rf_EX_io1_REG2_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+255,"rf_DIP_io_rf_0_MPORT_en", false,-1);
    tracep->declBus(c+256,"rf_DIP_io_rf_0_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+35,"rf_DIP_io_rf_0_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+255,"rf_DIP_io_rf_1_MPORT_en", false,-1);
    tracep->declBus(c+257,"rf_DIP_io_rf_1_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+37,"rf_DIP_io_rf_1_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+255,"rf_DIP_io_rf_2_MPORT_en", false,-1);
    tracep->declBus(c+258,"rf_DIP_io_rf_2_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+39,"rf_DIP_io_rf_2_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+255,"rf_DIP_io_rf_3_MPORT_en", false,-1);
    tracep->declBus(c+259,"rf_DIP_io_rf_3_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+41,"rf_DIP_io_rf_3_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+255,"rf_DIP_io_rf_4_MPORT_en", false,-1);
    tracep->declBus(c+260,"rf_DIP_io_rf_4_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+43,"rf_DIP_io_rf_4_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+255,"rf_DIP_io_rf_5_MPORT_en", false,-1);
    tracep->declBus(c+261,"rf_DIP_io_rf_5_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+45,"rf_DIP_io_rf_5_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+255,"rf_DIP_io_rf_6_MPORT_en", false,-1);
    tracep->declBus(c+262,"rf_DIP_io_rf_6_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+47,"rf_DIP_io_rf_6_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+255,"rf_DIP_io_rf_7_MPORT_en", false,-1);
    tracep->declBus(c+263,"rf_DIP_io_rf_7_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+49,"rf_DIP_io_rf_7_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+255,"rf_DIP_io_rf_8_MPORT_en", false,-1);
    tracep->declBus(c+264,"rf_DIP_io_rf_8_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+51,"rf_DIP_io_rf_8_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+255,"rf_DIP_io_rf_9_MPORT_en", false,-1);
    tracep->declBus(c+265,"rf_DIP_io_rf_9_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+53,"rf_DIP_io_rf_9_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+255,"rf_DIP_io_rf_10_MPORT_en", false,-1);
    tracep->declBus(c+266,"rf_DIP_io_rf_10_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+55,"rf_DIP_io_rf_10_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+255,"rf_DIP_io_rf_11_MPORT_en", false,-1);
    tracep->declBus(c+267,"rf_DIP_io_rf_11_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+57,"rf_DIP_io_rf_11_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+255,"rf_DIP_io_rf_12_MPORT_en", false,-1);
    tracep->declBus(c+268,"rf_DIP_io_rf_12_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+59,"rf_DIP_io_rf_12_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+255,"rf_DIP_io_rf_13_MPORT_en", false,-1);
    tracep->declBus(c+269,"rf_DIP_io_rf_13_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+61,"rf_DIP_io_rf_13_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+255,"rf_DIP_io_rf_14_MPORT_en", false,-1);
    tracep->declBus(c+270,"rf_DIP_io_rf_14_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+63,"rf_DIP_io_rf_14_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+255,"rf_DIP_io_rf_15_MPORT_en", false,-1);
    tracep->declBus(c+271,"rf_DIP_io_rf_15_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+65,"rf_DIP_io_rf_15_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+255,"rf_DIP_io_rf_16_MPORT_en", false,-1);
    tracep->declBus(c+272,"rf_DIP_io_rf_16_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+67,"rf_DIP_io_rf_16_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+255,"rf_DIP_io_rf_17_MPORT_en", false,-1);
    tracep->declBus(c+273,"rf_DIP_io_rf_17_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+69,"rf_DIP_io_rf_17_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+255,"rf_DIP_io_rf_18_MPORT_en", false,-1);
    tracep->declBus(c+274,"rf_DIP_io_rf_18_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+71,"rf_DIP_io_rf_18_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+255,"rf_DIP_io_rf_19_MPORT_en", false,-1);
    tracep->declBus(c+275,"rf_DIP_io_rf_19_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+73,"rf_DIP_io_rf_19_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+255,"rf_DIP_io_rf_20_MPORT_en", false,-1);
    tracep->declBus(c+276,"rf_DIP_io_rf_20_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+75,"rf_DIP_io_rf_20_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+255,"rf_DIP_io_rf_21_MPORT_en", false,-1);
    tracep->declBus(c+277,"rf_DIP_io_rf_21_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+77,"rf_DIP_io_rf_21_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+255,"rf_DIP_io_rf_22_MPORT_en", false,-1);
    tracep->declBus(c+278,"rf_DIP_io_rf_22_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+79,"rf_DIP_io_rf_22_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+255,"rf_DIP_io_rf_23_MPORT_en", false,-1);
    tracep->declBus(c+279,"rf_DIP_io_rf_23_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+81,"rf_DIP_io_rf_23_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+255,"rf_DIP_io_rf_24_MPORT_en", false,-1);
    tracep->declBus(c+280,"rf_DIP_io_rf_24_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+83,"rf_DIP_io_rf_24_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+255,"rf_DIP_io_rf_25_MPORT_en", false,-1);
    tracep->declBus(c+281,"rf_DIP_io_rf_25_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+85,"rf_DIP_io_rf_25_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+255,"rf_DIP_io_rf_26_MPORT_en", false,-1);
    tracep->declBus(c+282,"rf_DIP_io_rf_26_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+87,"rf_DIP_io_rf_26_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+255,"rf_DIP_io_rf_27_MPORT_en", false,-1);
    tracep->declBus(c+283,"rf_DIP_io_rf_27_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+89,"rf_DIP_io_rf_27_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+255,"rf_DIP_io_rf_28_MPORT_en", false,-1);
    tracep->declBus(c+284,"rf_DIP_io_rf_28_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+91,"rf_DIP_io_rf_28_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+255,"rf_DIP_io_rf_29_MPORT_en", false,-1);
    tracep->declBus(c+285,"rf_DIP_io_rf_29_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+93,"rf_DIP_io_rf_29_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+255,"rf_DIP_io_rf_30_MPORT_en", false,-1);
    tracep->declBus(c+286,"rf_DIP_io_rf_30_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+95,"rf_DIP_io_rf_30_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+255,"rf_DIP_io_rf_31_MPORT_en", false,-1);
    tracep->declBus(c+287,"rf_DIP_io_rf_31_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+97,"rf_DIP_io_rf_31_MPORT_data", false,-1, 63,0);
    tracep->declQuad(c+247,"rf_MPORT_data", false,-1, 63,0);
    tracep->declBus(c+236,"rf_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+255,"rf_MPORT_mask", false,-1);
    tracep->declBit(c+237,"rf_MPORT_en", false,-1);
    tracep->declQuad(c+13,"mem_addr", false,-1, 63,0);
    tracep->declBit(c+238,"mem_we", false,-1);
    tracep->declBit(c+20,"mem_ce", false,-1);
    tracep->declQuad(c+17,"mem_wdata", false,-1, 63,0);
    tracep->declQuad(c+15,"mem_rdata", false,-1, 63,0);
    tracep->declBus(c+19,"mem_wmask", false,-1, 7,0);
    tracep->declBus(c+234,"src1add", false,-1, 4,0);
    tracep->declBus(c+235,"src2add", false,-1, 4,0);
    tracep->pushNamePrefix("DIP ");
    tracep->declBit(c+12,"is_break", false,-1);
    tracep->declBus(c+231,"inst", false,-1, 31,0);
    tracep->declQuad(c+35,"rf_0", false,-1, 63,0);
    tracep->declQuad(c+37,"rf_1", false,-1, 63,0);
    tracep->declQuad(c+39,"rf_2", false,-1, 63,0);
    tracep->declQuad(c+41,"rf_3", false,-1, 63,0);
    tracep->declQuad(c+43,"rf_4", false,-1, 63,0);
    tracep->declQuad(c+45,"rf_5", false,-1, 63,0);
    tracep->declQuad(c+47,"rf_6", false,-1, 63,0);
    tracep->declQuad(c+49,"rf_7", false,-1, 63,0);
    tracep->declQuad(c+51,"rf_8", false,-1, 63,0);
    tracep->declQuad(c+53,"rf_9", false,-1, 63,0);
    tracep->declQuad(c+55,"rf_10", false,-1, 63,0);
    tracep->declQuad(c+57,"rf_11", false,-1, 63,0);
    tracep->declQuad(c+59,"rf_12", false,-1, 63,0);
    tracep->declQuad(c+61,"rf_13", false,-1, 63,0);
    tracep->declQuad(c+63,"rf_14", false,-1, 63,0);
    tracep->declQuad(c+65,"rf_15", false,-1, 63,0);
    tracep->declQuad(c+67,"rf_16", false,-1, 63,0);
    tracep->declQuad(c+69,"rf_17", false,-1, 63,0);
    tracep->declQuad(c+71,"rf_18", false,-1, 63,0);
    tracep->declQuad(c+73,"rf_19", false,-1, 63,0);
    tracep->declQuad(c+75,"rf_20", false,-1, 63,0);
    tracep->declQuad(c+77,"rf_21", false,-1, 63,0);
    tracep->declQuad(c+79,"rf_22", false,-1, 63,0);
    tracep->declQuad(c+81,"rf_23", false,-1, 63,0);
    tracep->declQuad(c+83,"rf_24", false,-1, 63,0);
    tracep->declQuad(c+85,"rf_25", false,-1, 63,0);
    tracep->declQuad(c+87,"rf_26", false,-1, 63,0);
    tracep->declQuad(c+89,"rf_27", false,-1, 63,0);
    tracep->declQuad(c+91,"rf_28", false,-1, 63,0);
    tracep->declQuad(c+93,"rf_29", false,-1, 63,0);
    tracep->declQuad(c+95,"rf_30", false,-1, 63,0);
    tracep->declQuad(c+97,"rf_31", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+163+i*2,"rf", true,(i+0), 63,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EX ");
    tracep->declBus(c+4,"io_src1type", false,-1, 2,0);
    tracep->declBus(c+5,"io_src2type", false,-1, 2,0);
    tracep->declBus(c+6,"io_futype", false,-1, 2,0);
    tracep->declBus(c+7,"io_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+8,"io_Imm", false,-1, 63,0);
    tracep->declQuad(c+239,"io1_REG1", false,-1, 63,0);
    tracep->declQuad(c+241,"io1_REG2", false,-1, 63,0);
    tracep->declQuad(c+33,"io1_PC", false,-1, 63,0);
    tracep->declQuad(c+10,"io1_result", false,-1, 63,0);
    tracep->declBit(c+12,"io1_is_break", false,-1);
    tracep->declBit(c+3,"io1_is_jump", false,-1);
    tracep->declQuad(c+1,"io1_dnpc", false,-1, 63,0);
    tracep->declQuad(c+13,"io1_addr", false,-1, 63,0);
    tracep->declQuad(c+15,"io1_rdata", false,-1, 63,0);
    tracep->declQuad(c+17,"io1_wdata", false,-1, 63,0);
    tracep->declBus(c+19,"io1_wmask", false,-1, 7,0);
    tracep->declQuad(c+21,"src1", false,-1, 63,0);
    tracep->declQuad(c+23,"src2", false,-1, 63,0);
    tracep->declQuad(c+25,"alu_result", false,-1, 63,0);
    tracep->declBit(c+27,"mem_result_sign", false,-1);
    tracep->declQuad(c+28,"mem_result", false,-1, 63,0);
    tracep->declQuad(c+249,"jump_result", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ID ");
    tracep->declBus(c+231,"io_inst", false,-1, 31,0);
    tracep->declBus(c+4,"io_ctrlIO_src1type", false,-1, 2,0);
    tracep->declBus(c+5,"io_ctrlIO_src2type", false,-1, 2,0);
    tracep->declBus(c+234,"io_ctrlIO_src1", false,-1, 4,0);
    tracep->declBus(c+235,"io_ctrlIO_src2", false,-1, 4,0);
    tracep->declBus(c+236,"io_ctrlIO_rd", false,-1, 4,0);
    tracep->declBus(c+6,"io_ctrlIO_futype", false,-1, 2,0);
    tracep->declBus(c+7,"io_ctrlIO_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+8,"io_ctrlIO_Imm", false,-1, 63,0);
    tracep->declBit(c+237,"io_rd_en", false,-1);
    tracep->declBit(c+238,"io_mem_we", false,-1);
    tracep->declBus(c+236,"rd", false,-1, 4,0);
    tracep->declBus(c+30,"Inst_decode_0", false,-1, 3,0);
    tracep->declBus(c+251,"Inst_decode_2", false,-1, 6,0);
    tracep->declBus(c+31,"srctype_0", false,-1, 1,0);
    tracep->declBit(c+32,"srctype_1", false,-1);
    tracep->declBit(c+252,"sign", false,-1);
    tracep->declBit(c+253,"sign_1", false,-1);
    tracep->declBit(c+254,"sign_2", false,-1);
    tracep->declBit(c+254,"sign_3", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IF ");
    tracep->declBit(c+227,"clock", false,-1);
    tracep->declBit(c+228,"reset", false,-1);
    tracep->declQuad(c+1,"io_dnpc", false,-1, 63,0);
    tracep->declBit(c+3,"io_is_jump", false,-1);
    tracep->declQuad(c+33,"io_pc", false,-1, 63,0);
    tracep->declQuad(c+33,"temp", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem ");
    tracep->declQuad(c+13,"addr", false,-1, 63,0);
    tracep->declBit(c+238,"we", false,-1);
    tracep->declBit(c+20,"ce", false,-1);
    tracep->declQuad(c+17,"wdata", false,-1, 63,0);
    tracep->declQuad(c+15,"rdata", false,-1, 63,0);
    tracep->declBus(c+19,"wmask", false,-1, 7,0);
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
    bufp->fullQData(oldp+1,(((0x19U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                              ? vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_1
                              : ((0x48U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                  ? (0xfffffffffffffffeULL 
                                     & vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_1)
                                  : 0ULL))),64);
    bufp->fullBit(oldp+3,((3U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype))));
    bufp->fullCData(oldp+4,(vlSelf->CPUTop__DOT__ID__DOT___io_ctrlIO_src1type_T_2),3);
    bufp->fullCData(oldp+5,(vlSelf->CPUTop__DOT__ID__DOT__srctype_1),3);
    bufp->fullCData(oldp+6,(vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype),3);
    bufp->fullCData(oldp+7,(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype),7);
    bufp->fullQData(oldp+8,(vlSelf->CPUTop__DOT__ID_io_ctrlIO_Imm),64);
    bufp->fullQData(oldp+10,(vlSelf->CPUTop__DOT__EX_io1_result),64);
    bufp->fullBit(oldp+12,((0x42U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))));
    bufp->fullQData(oldp+13,(((0x45U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                               ? vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_1
                               : ((0x46U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                   ? vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_3
                                   : ((0x47U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                       ? vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_3
                                       : 0ULL)))),64);
    bufp->fullQData(oldp+15,(vlSelf->CPUTop__DOT__mem_rdata),64);
    bufp->fullQData(oldp+17,(((0x45U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                               ? 0ULL : ((0x47U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                          ? 0ULL : 
                                         ((0x46U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                           ? vlSelf->CPUTop__DOT__EX__DOT__src2
                                           : 0ULL)))),64);
    bufp->fullCData(oldp+19,(((0x45U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                               ? 0U : ((0x47U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                        ? 0U : ((0x46U 
                                                 == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                 ? 0xffU
                                                 : 0U)))),8);
    bufp->fullBit(oldp+20,((4U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype))));
    bufp->fullQData(oldp+21,(vlSelf->CPUTop__DOT__EX__DOT__src1),64);
    bufp->fullQData(oldp+23,(vlSelf->CPUTop__DOT__EX__DOT__src2),64);
    bufp->fullQData(oldp+25,(((0x40U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                               ? vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_1
                               : ((0x44U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                   ? (vlSelf->CPUTop__DOT__EX__DOT__src1 
                                      | vlSelf->CPUTop__DOT__EX__DOT__src2)
                                   : 0ULL))),64);
    bufp->fullBit(oldp+27,((1U & (IData)((vlSelf->CPUTop__DOT__mem_rdata 
                                          >> 0x1fU)))));
    bufp->fullQData(oldp+28,(((0x45U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                               ? vlSelf->CPUTop__DOT__mem_rdata
                               : ((0x47U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                   ? (((QData)((IData)(
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->CPUTop__DOT__mem_rdata 
                                                                    >> 0x1fU)))
                                                         ? 0xffffffffU
                                                         : 0U))) 
                                       << 0x20U) | (QData)((IData)(vlSelf->CPUTop__DOT__mem_rdata)))
                                   : 0ULL))),64);
    bufp->fullCData(oldp+30,(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0),4);
    bufp->fullCData(oldp+31,(((8U == (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0))
                               ? 0U : ((7U == (7U & (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0)))
                                        ? 2U : ((3U 
                                                 == 
                                                 (3U 
                                                  & (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0)))
                                                 ? 2U
                                                 : 0U)))),2);
    bufp->fullBit(oldp+32,(vlSelf->CPUTop__DOT__ID__DOT__srctype_1));
    bufp->fullQData(oldp+33,(vlSelf->CPUTop__DOT__IF__DOT__temp),64);
    bufp->fullQData(oldp+35,(vlSelf->CPUTop__DOT__rf
                             [0U]),64);
    bufp->fullQData(oldp+37,(vlSelf->CPUTop__DOT__rf
                             [1U]),64);
    bufp->fullQData(oldp+39,(vlSelf->CPUTop__DOT__rf
                             [2U]),64);
    bufp->fullQData(oldp+41,(vlSelf->CPUTop__DOT__rf
                             [3U]),64);
    bufp->fullQData(oldp+43,(vlSelf->CPUTop__DOT__rf
                             [4U]),64);
    bufp->fullQData(oldp+45,(vlSelf->CPUTop__DOT__rf
                             [5U]),64);
    bufp->fullQData(oldp+47,(vlSelf->CPUTop__DOT__rf
                             [6U]),64);
    bufp->fullQData(oldp+49,(vlSelf->CPUTop__DOT__rf
                             [7U]),64);
    bufp->fullQData(oldp+51,(vlSelf->CPUTop__DOT__rf
                             [8U]),64);
    bufp->fullQData(oldp+53,(vlSelf->CPUTop__DOT__rf
                             [9U]),64);
    bufp->fullQData(oldp+55,(vlSelf->CPUTop__DOT__rf
                             [0xaU]),64);
    bufp->fullQData(oldp+57,(vlSelf->CPUTop__DOT__rf
                             [0xbU]),64);
    bufp->fullQData(oldp+59,(vlSelf->CPUTop__DOT__rf
                             [0xcU]),64);
    bufp->fullQData(oldp+61,(vlSelf->CPUTop__DOT__rf
                             [0xdU]),64);
    bufp->fullQData(oldp+63,(vlSelf->CPUTop__DOT__rf
                             [0xeU]),64);
    bufp->fullQData(oldp+65,(vlSelf->CPUTop__DOT__rf
                             [0xfU]),64);
    bufp->fullQData(oldp+67,(vlSelf->CPUTop__DOT__rf
                             [0x10U]),64);
    bufp->fullQData(oldp+69,(vlSelf->CPUTop__DOT__rf
                             [0x11U]),64);
    bufp->fullQData(oldp+71,(vlSelf->CPUTop__DOT__rf
                             [0x12U]),64);
    bufp->fullQData(oldp+73,(vlSelf->CPUTop__DOT__rf
                             [0x13U]),64);
    bufp->fullQData(oldp+75,(vlSelf->CPUTop__DOT__rf
                             [0x14U]),64);
    bufp->fullQData(oldp+77,(vlSelf->CPUTop__DOT__rf
                             [0x15U]),64);
    bufp->fullQData(oldp+79,(vlSelf->CPUTop__DOT__rf
                             [0x16U]),64);
    bufp->fullQData(oldp+81,(vlSelf->CPUTop__DOT__rf
                             [0x17U]),64);
    bufp->fullQData(oldp+83,(vlSelf->CPUTop__DOT__rf
                             [0x18U]),64);
    bufp->fullQData(oldp+85,(vlSelf->CPUTop__DOT__rf
                             [0x19U]),64);
    bufp->fullQData(oldp+87,(vlSelf->CPUTop__DOT__rf
                             [0x1aU]),64);
    bufp->fullQData(oldp+89,(vlSelf->CPUTop__DOT__rf
                             [0x1bU]),64);
    bufp->fullQData(oldp+91,(vlSelf->CPUTop__DOT__rf
                             [0x1cU]),64);
    bufp->fullQData(oldp+93,(vlSelf->CPUTop__DOT__rf
                             [0x1dU]),64);
    bufp->fullQData(oldp+95,(vlSelf->CPUTop__DOT__rf
                             [0x1eU]),64);
    bufp->fullQData(oldp+97,(vlSelf->CPUTop__DOT__rf
                             [0x1fU]),64);
    bufp->fullQData(oldp+99,(vlSelf->CPUTop__DOT__rf[0]),64);
    bufp->fullQData(oldp+101,(vlSelf->CPUTop__DOT__rf[1]),64);
    bufp->fullQData(oldp+103,(vlSelf->CPUTop__DOT__rf[2]),64);
    bufp->fullQData(oldp+105,(vlSelf->CPUTop__DOT__rf[3]),64);
    bufp->fullQData(oldp+107,(vlSelf->CPUTop__DOT__rf[4]),64);
    bufp->fullQData(oldp+109,(vlSelf->CPUTop__DOT__rf[5]),64);
    bufp->fullQData(oldp+111,(vlSelf->CPUTop__DOT__rf[6]),64);
    bufp->fullQData(oldp+113,(vlSelf->CPUTop__DOT__rf[7]),64);
    bufp->fullQData(oldp+115,(vlSelf->CPUTop__DOT__rf[8]),64);
    bufp->fullQData(oldp+117,(vlSelf->CPUTop__DOT__rf[9]),64);
    bufp->fullQData(oldp+119,(vlSelf->CPUTop__DOT__rf[10]),64);
    bufp->fullQData(oldp+121,(vlSelf->CPUTop__DOT__rf[11]),64);
    bufp->fullQData(oldp+123,(vlSelf->CPUTop__DOT__rf[12]),64);
    bufp->fullQData(oldp+125,(vlSelf->CPUTop__DOT__rf[13]),64);
    bufp->fullQData(oldp+127,(vlSelf->CPUTop__DOT__rf[14]),64);
    bufp->fullQData(oldp+129,(vlSelf->CPUTop__DOT__rf[15]),64);
    bufp->fullQData(oldp+131,(vlSelf->CPUTop__DOT__rf[16]),64);
    bufp->fullQData(oldp+133,(vlSelf->CPUTop__DOT__rf[17]),64);
    bufp->fullQData(oldp+135,(vlSelf->CPUTop__DOT__rf[18]),64);
    bufp->fullQData(oldp+137,(vlSelf->CPUTop__DOT__rf[19]),64);
    bufp->fullQData(oldp+139,(vlSelf->CPUTop__DOT__rf[20]),64);
    bufp->fullQData(oldp+141,(vlSelf->CPUTop__DOT__rf[21]),64);
    bufp->fullQData(oldp+143,(vlSelf->CPUTop__DOT__rf[22]),64);
    bufp->fullQData(oldp+145,(vlSelf->CPUTop__DOT__rf[23]),64);
    bufp->fullQData(oldp+147,(vlSelf->CPUTop__DOT__rf[24]),64);
    bufp->fullQData(oldp+149,(vlSelf->CPUTop__DOT__rf[25]),64);
    bufp->fullQData(oldp+151,(vlSelf->CPUTop__DOT__rf[26]),64);
    bufp->fullQData(oldp+153,(vlSelf->CPUTop__DOT__rf[27]),64);
    bufp->fullQData(oldp+155,(vlSelf->CPUTop__DOT__rf[28]),64);
    bufp->fullQData(oldp+157,(vlSelf->CPUTop__DOT__rf[29]),64);
    bufp->fullQData(oldp+159,(vlSelf->CPUTop__DOT__rf[30]),64);
    bufp->fullQData(oldp+161,(vlSelf->CPUTop__DOT__rf[31]),64);
    bufp->fullQData(oldp+163,(vlSelf->CPUTop__DOT__DIP__DOT__rf[0]),64);
    bufp->fullQData(oldp+165,(vlSelf->CPUTop__DOT__DIP__DOT__rf[1]),64);
    bufp->fullQData(oldp+167,(vlSelf->CPUTop__DOT__DIP__DOT__rf[2]),64);
    bufp->fullQData(oldp+169,(vlSelf->CPUTop__DOT__DIP__DOT__rf[3]),64);
    bufp->fullQData(oldp+171,(vlSelf->CPUTop__DOT__DIP__DOT__rf[4]),64);
    bufp->fullQData(oldp+173,(vlSelf->CPUTop__DOT__DIP__DOT__rf[5]),64);
    bufp->fullQData(oldp+175,(vlSelf->CPUTop__DOT__DIP__DOT__rf[6]),64);
    bufp->fullQData(oldp+177,(vlSelf->CPUTop__DOT__DIP__DOT__rf[7]),64);
    bufp->fullQData(oldp+179,(vlSelf->CPUTop__DOT__DIP__DOT__rf[8]),64);
    bufp->fullQData(oldp+181,(vlSelf->CPUTop__DOT__DIP__DOT__rf[9]),64);
    bufp->fullQData(oldp+183,(vlSelf->CPUTop__DOT__DIP__DOT__rf[10]),64);
    bufp->fullQData(oldp+185,(vlSelf->CPUTop__DOT__DIP__DOT__rf[11]),64);
    bufp->fullQData(oldp+187,(vlSelf->CPUTop__DOT__DIP__DOT__rf[12]),64);
    bufp->fullQData(oldp+189,(vlSelf->CPUTop__DOT__DIP__DOT__rf[13]),64);
    bufp->fullQData(oldp+191,(vlSelf->CPUTop__DOT__DIP__DOT__rf[14]),64);
    bufp->fullQData(oldp+193,(vlSelf->CPUTop__DOT__DIP__DOT__rf[15]),64);
    bufp->fullQData(oldp+195,(vlSelf->CPUTop__DOT__DIP__DOT__rf[16]),64);
    bufp->fullQData(oldp+197,(vlSelf->CPUTop__DOT__DIP__DOT__rf[17]),64);
    bufp->fullQData(oldp+199,(vlSelf->CPUTop__DOT__DIP__DOT__rf[18]),64);
    bufp->fullQData(oldp+201,(vlSelf->CPUTop__DOT__DIP__DOT__rf[19]),64);
    bufp->fullQData(oldp+203,(vlSelf->CPUTop__DOT__DIP__DOT__rf[20]),64);
    bufp->fullQData(oldp+205,(vlSelf->CPUTop__DOT__DIP__DOT__rf[21]),64);
    bufp->fullQData(oldp+207,(vlSelf->CPUTop__DOT__DIP__DOT__rf[22]),64);
    bufp->fullQData(oldp+209,(vlSelf->CPUTop__DOT__DIP__DOT__rf[23]),64);
    bufp->fullQData(oldp+211,(vlSelf->CPUTop__DOT__DIP__DOT__rf[24]),64);
    bufp->fullQData(oldp+213,(vlSelf->CPUTop__DOT__DIP__DOT__rf[25]),64);
    bufp->fullQData(oldp+215,(vlSelf->CPUTop__DOT__DIP__DOT__rf[26]),64);
    bufp->fullQData(oldp+217,(vlSelf->CPUTop__DOT__DIP__DOT__rf[27]),64);
    bufp->fullQData(oldp+219,(vlSelf->CPUTop__DOT__DIP__DOT__rf[28]),64);
    bufp->fullQData(oldp+221,(vlSelf->CPUTop__DOT__DIP__DOT__rf[29]),64);
    bufp->fullQData(oldp+223,(vlSelf->CPUTop__DOT__DIP__DOT__rf[30]),64);
    bufp->fullQData(oldp+225,(vlSelf->CPUTop__DOT__DIP__DOT__rf[31]),64);
    bufp->fullBit(oldp+227,(vlSelf->clock));
    bufp->fullBit(oldp+228,(vlSelf->reset));
    bufp->fullQData(oldp+229,(vlSelf->io_pc),64);
    bufp->fullIData(oldp+231,(vlSelf->io_inst),32);
    bufp->fullQData(oldp+232,(vlSelf->io_result),64);
    bufp->fullCData(oldp+234,((0x1fU & (vlSelf->io_inst 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+235,((0x1fU & (vlSelf->io_inst 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+236,((0x1fU & (vlSelf->io_inst 
                                        >> 7U))),5);
    bufp->fullBit(oldp+237,(((0x13U == (0x707fU & vlSelf->io_inst)) 
                             | ((0x1013U == (0xfc00707fU 
                                             & vlSelf->io_inst)) 
                                | ((0x17U == (0x7fU 
                                              & vlSelf->io_inst)) 
                                   | ((0x37U == (0x7fU 
                                                 & vlSelf->io_inst)) 
                                      | ((0x6013U == 
                                          (0x707fU 
                                           & vlSelf->io_inst)) 
                                         | ((0x6fU 
                                             == (0x7fU 
                                                 & vlSelf->io_inst)) 
                                            | ((0x67U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->io_inst)) 
                                               | ((0x3003U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->io_inst)) 
                                                  | ((0x3023U 
                                                      != 
                                                      (0x707fU 
                                                       & vlSelf->io_inst)) 
                                                     & (0x2003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->io_inst)))))))))))));
    bufp->fullBit(oldp+238,((0x45U != ((0x13U == (0x707fU 
                                                  & vlSelf->io_inst))
                                        ? 0x40U : (IData)(vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_51)))));
    bufp->fullQData(oldp+239,(((0U == (0x1fU & (vlSelf->io_inst 
                                                >> 0xfU)))
                                ? 0ULL : vlSelf->CPUTop__DOT__rf
                               [(0x1fU & (vlSelf->io_inst 
                                          >> 0xfU))])),64);
    bufp->fullQData(oldp+241,(((0U == (0x1fU & (vlSelf->io_inst 
                                                >> 0x14U)))
                                ? 0ULL : vlSelf->CPUTop__DOT__rf
                               [(0x1fU & (vlSelf->io_inst 
                                          >> 0x14U))])),64);
    bufp->fullQData(oldp+243,(vlSelf->CPUTop__DOT__rf
                              [(0x1fU & (vlSelf->io_inst 
                                         >> 0xfU))]),64);
    bufp->fullQData(oldp+245,(vlSelf->CPUTop__DOT__rf
                              [(0x1fU & (vlSelf->io_inst 
                                         >> 0x14U))]),64);
    bufp->fullQData(oldp+247,(((0U == (0x1fU & (vlSelf->io_inst 
                                                >> 7U)))
                                ? 0ULL : vlSelf->CPUTop__DOT__EX_io1_result)),64);
    bufp->fullQData(oldp+249,(((3U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype))
                                ? (4ULL + vlSelf->CPUTop__DOT__IF__DOT__temp)
                                : 0ULL)),64);
    bufp->fullCData(oldp+251,(((0x13U == (0x707fU & vlSelf->io_inst))
                                ? 0x40U : (IData)(vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_51))),7);
    bufp->fullBit(oldp+252,((vlSelf->io_inst >> 0x1fU)));
    bufp->fullBit(oldp+253,((1U & (vlSelf->io_inst 
                                   >> 0x13U))));
    bufp->fullBit(oldp+254,((vlSelf->io_inst >> 0x1fU)));
    bufp->fullBit(oldp+255,(1U));
    bufp->fullCData(oldp+256,(0U),5);
    bufp->fullCData(oldp+257,(1U),5);
    bufp->fullCData(oldp+258,(2U),5);
    bufp->fullCData(oldp+259,(3U),5);
    bufp->fullCData(oldp+260,(4U),5);
    bufp->fullCData(oldp+261,(5U),5);
    bufp->fullCData(oldp+262,(6U),5);
    bufp->fullCData(oldp+263,(7U),5);
    bufp->fullCData(oldp+264,(8U),5);
    bufp->fullCData(oldp+265,(9U),5);
    bufp->fullCData(oldp+266,(0xaU),5);
    bufp->fullCData(oldp+267,(0xbU),5);
    bufp->fullCData(oldp+268,(0xcU),5);
    bufp->fullCData(oldp+269,(0xdU),5);
    bufp->fullCData(oldp+270,(0xeU),5);
    bufp->fullCData(oldp+271,(0xfU),5);
    bufp->fullCData(oldp+272,(0x10U),5);
    bufp->fullCData(oldp+273,(0x11U),5);
    bufp->fullCData(oldp+274,(0x12U),5);
    bufp->fullCData(oldp+275,(0x13U),5);
    bufp->fullCData(oldp+276,(0x14U),5);
    bufp->fullCData(oldp+277,(0x15U),5);
    bufp->fullCData(oldp+278,(0x16U),5);
    bufp->fullCData(oldp+279,(0x17U),5);
    bufp->fullCData(oldp+280,(0x18U),5);
    bufp->fullCData(oldp+281,(0x19U),5);
    bufp->fullCData(oldp+282,(0x1aU),5);
    bufp->fullCData(oldp+283,(0x1bU),5);
    bufp->fullCData(oldp+284,(0x1cU),5);
    bufp->fullCData(oldp+285,(0x1dU),5);
    bufp->fullCData(oldp+286,(0x1eU),5);
    bufp->fullCData(oldp+287,(0x1fU),5);
}
