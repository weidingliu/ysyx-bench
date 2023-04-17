// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCoreTop__Syms.h"


VL_ATTR_COLD void VCoreTop___024root__trace_init_sub__TOP__0(VCoreTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+343,"clock", false,-1);
    tracep->declBit(c+344,"reset", false,-1);
    tracep->declQuad(c+345,"io_pc", false,-1, 63,0);
    tracep->declBus(c+347,"io_inst", false,-1, 31,0);
    tracep->pushNamePrefix("CoreTop ");
    tracep->declBit(c+343,"clock", false,-1);
    tracep->declBit(c+344,"reset", false,-1);
    tracep->declQuad(c+345,"io_pc", false,-1, 63,0);
    tracep->declBus(c+347,"io_inst", false,-1, 31,0);
    tracep->declBit(c+343,"IF_clock", false,-1);
    tracep->declBit(c+344,"IF_reset", false,-1);
    tracep->declBit(c+1,"IF_io_branch_io_is_branch", false,-1);
    tracep->declBit(c+2,"IF_io_branch_io_is_jump", false,-1);
    tracep->declQuad(c+3,"IF_io_branch_io_dnpc", false,-1, 63,0);
    tracep->declBus(c+348,"IF_io_inst", false,-1, 31,0);
    tracep->declQuad(c+5,"IF_io_out_bits_PC", false,-1, 63,0);
    tracep->declBus(c+348,"IF_io_out_bits_Inst", false,-1, 31,0);
    tracep->declBit(c+344,"IFM_reset", false,-1);
    tracep->declBit(c+343,"IFM_clk", false,-1);
    tracep->declQuad(c+5,"IFM_pc", false,-1, 63,0);
    tracep->declBus(c+348,"IFM_inst", false,-1, 31,0);
    tracep->declBit(c+7,"ID_io_in_valid", false,-1);
    tracep->declQuad(c+8,"ID_io_in_bits_PC", false,-1, 63,0);
    tracep->declBus(c+10,"ID_io_in_bits_Inst", false,-1, 31,0);
    tracep->declQuad(c+349,"ID_io_REG1", false,-1, 63,0);
    tracep->declQuad(c+351,"ID_io_REG2", false,-1, 63,0);
    tracep->declBit(c+7,"ID_io_out_valid", false,-1);
    tracep->declBus(c+11,"ID_io_out_bits_ctrl_signal_src1Type", false,-1, 2,0);
    tracep->declBus(c+12,"ID_io_out_bits_ctrl_signal_src2Type", false,-1, 2,0);
    tracep->declBus(c+13,"ID_io_out_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+14,"ID_io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBus(c+15,"ID_io_out_bits_ctrl_signal_rfSrc1", false,-1, 4,0);
    tracep->declBus(c+16,"ID_io_out_bits_ctrl_signal_rfSrc2", false,-1, 4,0);
    tracep->declBit(c+17,"ID_io_out_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+18,"ID_io_out_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declBus(c+19,"ID_io_out_bits_ctrl_signal_rfDest", false,-1, 4,0);
    tracep->declQuad(c+349,"ID_io_out_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+351,"ID_io_out_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+20,"ID_io_out_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declQuad(c+8,"ID_io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+10,"ID_io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declBit(c+22,"EX_io_in_valid", false,-1);
    tracep->declBus(c+23,"EX_io_in_bits_ctrl_signal_src1Type", false,-1, 2,0);
    tracep->declBus(c+24,"EX_io_in_bits_ctrl_signal_src2Type", false,-1, 2,0);
    tracep->declBus(c+25,"EX_io_in_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+26,"EX_io_in_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+27,"EX_io_in_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+28,"EX_io_in_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declBus(c+29,"EX_io_in_bits_ctrl_signal_rfDest", false,-1, 4,0);
    tracep->declQuad(c+30,"EX_io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+32,"EX_io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+34,"EX_io_in_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declQuad(c+36,"EX_io_in_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+38,"EX_io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declBit(c+1,"EX_io_branchIO_is_branch", false,-1);
    tracep->declBit(c+2,"EX_io_branchIO_is_jump", false,-1);
    tracep->declQuad(c+3,"EX_io_branchIO_dnpc", false,-1, 63,0);
    tracep->declBit(c+22,"EX_io_out_valid", false,-1);
    tracep->declBus(c+25,"EX_io_out_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+26,"EX_io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBus(c+28,"EX_io_out_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+36,"EX_io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+38,"EX_io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+3,"EX_io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+29,"EX_io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+27,"EX_io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+39,"EX_io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+41,"EX_io_out_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+43,"EX_io_out_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+34,"EX_io_out_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declBit(c+45,"EX_io_is_break", false,-1);
    tracep->declBit(c+46,"EX_io_is_flush", false,-1);
    tracep->declBit(c+45,"DIP_is_break", false,-1);
    tracep->declQuad(c+47,"DIP_rf_0", false,-1, 63,0);
    tracep->declQuad(c+49,"DIP_rf_1", false,-1, 63,0);
    tracep->declQuad(c+51,"DIP_rf_2", false,-1, 63,0);
    tracep->declQuad(c+53,"DIP_rf_3", false,-1, 63,0);
    tracep->declQuad(c+55,"DIP_rf_4", false,-1, 63,0);
    tracep->declQuad(c+57,"DIP_rf_5", false,-1, 63,0);
    tracep->declQuad(c+59,"DIP_rf_6", false,-1, 63,0);
    tracep->declQuad(c+61,"DIP_rf_7", false,-1, 63,0);
    tracep->declQuad(c+63,"DIP_rf_8", false,-1, 63,0);
    tracep->declQuad(c+65,"DIP_rf_9", false,-1, 63,0);
    tracep->declQuad(c+67,"DIP_rf_10", false,-1, 63,0);
    tracep->declQuad(c+69,"DIP_rf_11", false,-1, 63,0);
    tracep->declQuad(c+71,"DIP_rf_12", false,-1, 63,0);
    tracep->declQuad(c+73,"DIP_rf_13", false,-1, 63,0);
    tracep->declQuad(c+75,"DIP_rf_14", false,-1, 63,0);
    tracep->declQuad(c+77,"DIP_rf_15", false,-1, 63,0);
    tracep->declQuad(c+79,"DIP_rf_16", false,-1, 63,0);
    tracep->declQuad(c+81,"DIP_rf_17", false,-1, 63,0);
    tracep->declQuad(c+83,"DIP_rf_18", false,-1, 63,0);
    tracep->declQuad(c+85,"DIP_rf_19", false,-1, 63,0);
    tracep->declQuad(c+87,"DIP_rf_20", false,-1, 63,0);
    tracep->declQuad(c+89,"DIP_rf_21", false,-1, 63,0);
    tracep->declQuad(c+91,"DIP_rf_22", false,-1, 63,0);
    tracep->declQuad(c+93,"DIP_rf_23", false,-1, 63,0);
    tracep->declQuad(c+95,"DIP_rf_24", false,-1, 63,0);
    tracep->declQuad(c+97,"DIP_rf_25", false,-1, 63,0);
    tracep->declQuad(c+99,"DIP_rf_26", false,-1, 63,0);
    tracep->declQuad(c+101,"DIP_rf_27", false,-1, 63,0);
    tracep->declQuad(c+103,"DIP_rf_28", false,-1, 63,0);
    tracep->declQuad(c+105,"DIP_rf_29", false,-1, 63,0);
    tracep->declQuad(c+107,"DIP_rf_30", false,-1, 63,0);
    tracep->declQuad(c+109,"DIP_rf_31", false,-1, 63,0);
    tracep->declBus(c+111,"DIP_inst", false,-1, 31,0);
    tracep->declQuad(c+112,"DIP_pc", false,-1, 63,0);
    tracep->declBit(c+114,"DIP_inst_valid", false,-1);
    tracep->declQuad(c+115,"DIP_dnpc", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+117+i*2,"rf", true,(i+0), 63,0);
    }
    tracep->declBit(c+355,"rf_bypass_io_Reg1_MPORT_en", false,-1);
    tracep->declBus(c+15,"rf_bypass_io_Reg1_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+181,"rf_bypass_io_Reg1_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+355,"rf_bypass_io_Reg2_MPORT_en", false,-1);
    tracep->declBus(c+16,"rf_bypass_io_Reg2_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+183,"rf_bypass_io_Reg2_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+355,"rf_DIP_io_rf_0_MPORT_en", false,-1);
    tracep->declBus(c+356,"rf_DIP_io_rf_0_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+47,"rf_DIP_io_rf_0_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+355,"rf_DIP_io_rf_1_MPORT_en", false,-1);
    tracep->declBus(c+357,"rf_DIP_io_rf_1_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+49,"rf_DIP_io_rf_1_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+355,"rf_DIP_io_rf_2_MPORT_en", false,-1);
    tracep->declBus(c+358,"rf_DIP_io_rf_2_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+51,"rf_DIP_io_rf_2_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+355,"rf_DIP_io_rf_3_MPORT_en", false,-1);
    tracep->declBus(c+359,"rf_DIP_io_rf_3_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+53,"rf_DIP_io_rf_3_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+355,"rf_DIP_io_rf_4_MPORT_en", false,-1);
    tracep->declBus(c+360,"rf_DIP_io_rf_4_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+55,"rf_DIP_io_rf_4_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+355,"rf_DIP_io_rf_5_MPORT_en", false,-1);
    tracep->declBus(c+361,"rf_DIP_io_rf_5_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+57,"rf_DIP_io_rf_5_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+355,"rf_DIP_io_rf_6_MPORT_en", false,-1);
    tracep->declBus(c+362,"rf_DIP_io_rf_6_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+59,"rf_DIP_io_rf_6_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+355,"rf_DIP_io_rf_7_MPORT_en", false,-1);
    tracep->declBus(c+363,"rf_DIP_io_rf_7_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+61,"rf_DIP_io_rf_7_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+355,"rf_DIP_io_rf_8_MPORT_en", false,-1);
    tracep->declBus(c+364,"rf_DIP_io_rf_8_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+63,"rf_DIP_io_rf_8_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+355,"rf_DIP_io_rf_9_MPORT_en", false,-1);
    tracep->declBus(c+365,"rf_DIP_io_rf_9_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+65,"rf_DIP_io_rf_9_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+355,"rf_DIP_io_rf_10_MPORT_en", false,-1);
    tracep->declBus(c+366,"rf_DIP_io_rf_10_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+67,"rf_DIP_io_rf_10_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+355,"rf_DIP_io_rf_11_MPORT_en", false,-1);
    tracep->declBus(c+367,"rf_DIP_io_rf_11_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+69,"rf_DIP_io_rf_11_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+355,"rf_DIP_io_rf_12_MPORT_en", false,-1);
    tracep->declBus(c+368,"rf_DIP_io_rf_12_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+71,"rf_DIP_io_rf_12_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+355,"rf_DIP_io_rf_13_MPORT_en", false,-1);
    tracep->declBus(c+369,"rf_DIP_io_rf_13_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+73,"rf_DIP_io_rf_13_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+355,"rf_DIP_io_rf_14_MPORT_en", false,-1);
    tracep->declBus(c+370,"rf_DIP_io_rf_14_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+75,"rf_DIP_io_rf_14_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+355,"rf_DIP_io_rf_15_MPORT_en", false,-1);
    tracep->declBus(c+371,"rf_DIP_io_rf_15_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+77,"rf_DIP_io_rf_15_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+355,"rf_DIP_io_rf_16_MPORT_en", false,-1);
    tracep->declBus(c+372,"rf_DIP_io_rf_16_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+79,"rf_DIP_io_rf_16_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+355,"rf_DIP_io_rf_17_MPORT_en", false,-1);
    tracep->declBus(c+373,"rf_DIP_io_rf_17_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+81,"rf_DIP_io_rf_17_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+355,"rf_DIP_io_rf_18_MPORT_en", false,-1);
    tracep->declBus(c+374,"rf_DIP_io_rf_18_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+83,"rf_DIP_io_rf_18_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+355,"rf_DIP_io_rf_19_MPORT_en", false,-1);
    tracep->declBus(c+375,"rf_DIP_io_rf_19_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+85,"rf_DIP_io_rf_19_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+355,"rf_DIP_io_rf_20_MPORT_en", false,-1);
    tracep->declBus(c+376,"rf_DIP_io_rf_20_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+87,"rf_DIP_io_rf_20_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+355,"rf_DIP_io_rf_21_MPORT_en", false,-1);
    tracep->declBus(c+377,"rf_DIP_io_rf_21_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+89,"rf_DIP_io_rf_21_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+355,"rf_DIP_io_rf_22_MPORT_en", false,-1);
    tracep->declBus(c+378,"rf_DIP_io_rf_22_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+91,"rf_DIP_io_rf_22_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+355,"rf_DIP_io_rf_23_MPORT_en", false,-1);
    tracep->declBus(c+379,"rf_DIP_io_rf_23_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+93,"rf_DIP_io_rf_23_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+355,"rf_DIP_io_rf_24_MPORT_en", false,-1);
    tracep->declBus(c+380,"rf_DIP_io_rf_24_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+95,"rf_DIP_io_rf_24_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+355,"rf_DIP_io_rf_25_MPORT_en", false,-1);
    tracep->declBus(c+381,"rf_DIP_io_rf_25_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+97,"rf_DIP_io_rf_25_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+355,"rf_DIP_io_rf_26_MPORT_en", false,-1);
    tracep->declBus(c+382,"rf_DIP_io_rf_26_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+99,"rf_DIP_io_rf_26_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+355,"rf_DIP_io_rf_27_MPORT_en", false,-1);
    tracep->declBus(c+383,"rf_DIP_io_rf_27_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+101,"rf_DIP_io_rf_27_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+355,"rf_DIP_io_rf_28_MPORT_en", false,-1);
    tracep->declBus(c+384,"rf_DIP_io_rf_28_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+103,"rf_DIP_io_rf_28_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+355,"rf_DIP_io_rf_29_MPORT_en", false,-1);
    tracep->declBus(c+385,"rf_DIP_io_rf_29_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+105,"rf_DIP_io_rf_29_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+355,"rf_DIP_io_rf_30_MPORT_en", false,-1);
    tracep->declBus(c+386,"rf_DIP_io_rf_30_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+107,"rf_DIP_io_rf_30_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+355,"rf_DIP_io_rf_31_MPORT_en", false,-1);
    tracep->declBus(c+387,"rf_DIP_io_rf_31_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+109,"rf_DIP_io_rf_31_MPORT_data", false,-1, 63,0);
    tracep->declQuad(c+185,"rf_MPORT_data", false,-1, 63,0);
    tracep->declBus(c+187,"rf_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+355,"rf_MPORT_mask", false,-1);
    tracep->declBit(c+188,"rf_MPORT_en", false,-1);
    tracep->declQuad(c+189,"mem_addr", false,-1, 63,0);
    tracep->declBit(c+344,"mem_reset", false,-1);
    tracep->declBit(c+343,"mem_clk", false,-1);
    tracep->declBit(c+191,"mem_we", false,-1);
    tracep->declBit(c+192,"mem_ce", false,-1);
    tracep->declQuad(c+193,"mem_wdata", false,-1, 63,0);
    tracep->declQuad(c+333,"mem_rdata", false,-1, 63,0);
    tracep->declBus(c+195,"mem_wmask", false,-1, 7,0);
    tracep->declBit(c+196,"MEM_io_in_valid", false,-1);
    tracep->declBus(c+197,"MEM_io_in_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+198,"MEM_io_in_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBus(c+199,"MEM_io_in_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+200,"MEM_io_in_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+202,"MEM_io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+203,"MEM_io_in_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+205,"MEM_io_in_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+206,"MEM_io_in_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+207,"MEM_io_in_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+209,"MEM_io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+211,"MEM_io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+213,"MEM_io_in_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declBit(c+196,"MEM_io_out_valid", false,-1);
    tracep->declBit(c+198,"MEM_io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declQuad(c+200,"MEM_io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+202,"MEM_io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+203,"MEM_io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+205,"MEM_io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+206,"MEM_io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+335,"MEM_io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+189,"MEM_io_mem_addr", false,-1, 63,0);
    tracep->declQuad(c+333,"MEM_io_mem_rdata", false,-1, 63,0);
    tracep->declQuad(c+193,"MEM_io_mem_wdata", false,-1, 63,0);
    tracep->declBus(c+195,"MEM_io_mem_wmask", false,-1, 7,0);
    tracep->declBit(c+192,"MEM_io_mem_ce", false,-1);
    tracep->declBit(c+191,"MEM_io_mem_we", false,-1);
    tracep->declBit(c+215,"WB_io_in_valid", false,-1);
    tracep->declBit(c+216,"WB_io_in_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declQuad(c+217,"WB_io_in_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+219,"WB_io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+220,"WB_io_in_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+187,"WB_io_in_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+188,"WB_io_in_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+222,"WB_io_in_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declBit(c+216,"WB_io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declQuad(c+217,"WB_io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+219,"WB_io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+220,"WB_io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+187,"WB_io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+188,"WB_io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+222,"WB_io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+29,"bypass_io_EX_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+27,"bypass_io_EX_rf_rfWen", false,-1);
    tracep->declQuad(c+39,"bypass_io_EX_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+205,"bypass_io_MEM_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+206,"bypass_io_MEM_rf_rfWen", false,-1);
    tracep->declQuad(c+335,"bypass_io_MEM_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+187,"bypass_io_WB_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+188,"bypass_io_WB_rf_rfWen", false,-1);
    tracep->declQuad(c+222,"bypass_io_WB_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+224,"bypass_io_Reg1", false,-1, 63,0);
    tracep->declBus(c+15,"bypass_io_reg_index1", false,-1, 4,0);
    tracep->declQuad(c+226,"bypass_io_Reg2", false,-1, 63,0);
    tracep->declBus(c+16,"bypass_io_reg_index2", false,-1, 4,0);
    tracep->declQuad(c+349,"bypass_io_Bypass_REG1", false,-1, 63,0);
    tracep->declQuad(c+351,"bypass_io_Bypass_REG2", false,-1, 63,0);
    tracep->declBit(c+7,"valid", false,-1);
    tracep->declQuad(c+8,"ID_io_in_bits_r_PC", false,-1, 63,0);
    tracep->declBus(c+10,"ID_io_in_bits_r_Inst", false,-1, 31,0);
    tracep->declBit(c+22,"valid_1", false,-1);
    tracep->declBus(c+23,"EX_io_in_bits_r_ctrl_signal_src1Type", false,-1, 2,0);
    tracep->declBus(c+24,"EX_io_in_bits_r_ctrl_signal_src2Type", false,-1, 2,0);
    tracep->declBus(c+25,"EX_io_in_bits_r_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+26,"EX_io_in_bits_r_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+27,"EX_io_in_bits_r_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+28,"EX_io_in_bits_r_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declBus(c+29,"EX_io_in_bits_r_ctrl_signal_rfDest", false,-1, 4,0);
    tracep->declQuad(c+30,"EX_io_in_bits_r_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+32,"EX_io_in_bits_r_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+34,"EX_io_in_bits_r_ctrl_data_Imm", false,-1, 63,0);
    tracep->declQuad(c+36,"EX_io_in_bits_r_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+38,"EX_io_in_bits_r_ctrl_flow_inst", false,-1, 31,0);
    tracep->declBit(c+196,"valid_2", false,-1);
    tracep->declBus(c+197,"MEM_io_in_bits_r_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+198,"MEM_io_in_bits_r_ctrl_signal_inst_valid", false,-1);
    tracep->declBus(c+199,"MEM_io_in_bits_r_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+200,"MEM_io_in_bits_r_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+202,"MEM_io_in_bits_r_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+203,"MEM_io_in_bits_r_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+205,"MEM_io_in_bits_r_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+206,"MEM_io_in_bits_r_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+207,"MEM_io_in_bits_r_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+209,"MEM_io_in_bits_r_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+211,"MEM_io_in_bits_r_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+213,"MEM_io_in_bits_r_ctrl_data_Imm", false,-1, 63,0);
    tracep->declBit(c+215,"valid_3", false,-1);
    tracep->declBit(c+216,"WB_io_in_bits_r_ctrl_signal_inst_valid", false,-1);
    tracep->declQuad(c+217,"WB_io_in_bits_r_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+219,"WB_io_in_bits_r_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+220,"WB_io_in_bits_r_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+187,"WB_io_in_bits_r_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+188,"WB_io_in_bits_r_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+222,"WB_io_in_bits_r_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+111,"DIP_io_inst_REG", false,-1, 31,0);
    tracep->declBit(c+114,"DIP_io_inst_valid_REG", false,-1);
    tracep->declQuad(c+112,"DIP_io_pc_REG", false,-1, 63,0);
    tracep->declQuad(c+115,"DIP_io_dnpc_REG", false,-1, 63,0);
    tracep->declBus(c+228,"io_inst_REG", false,-1, 31,0);
    tracep->pushNamePrefix("DIP ");
    tracep->declBit(c+45,"is_break", false,-1);
    tracep->declBus(c+111,"inst", false,-1, 31,0);
    tracep->declQuad(c+47,"rf_0", false,-1, 63,0);
    tracep->declQuad(c+49,"rf_1", false,-1, 63,0);
    tracep->declQuad(c+51,"rf_2", false,-1, 63,0);
    tracep->declQuad(c+53,"rf_3", false,-1, 63,0);
    tracep->declQuad(c+55,"rf_4", false,-1, 63,0);
    tracep->declQuad(c+57,"rf_5", false,-1, 63,0);
    tracep->declQuad(c+59,"rf_6", false,-1, 63,0);
    tracep->declQuad(c+61,"rf_7", false,-1, 63,0);
    tracep->declQuad(c+63,"rf_8", false,-1, 63,0);
    tracep->declQuad(c+65,"rf_9", false,-1, 63,0);
    tracep->declQuad(c+67,"rf_10", false,-1, 63,0);
    tracep->declQuad(c+69,"rf_11", false,-1, 63,0);
    tracep->declQuad(c+71,"rf_12", false,-1, 63,0);
    tracep->declQuad(c+73,"rf_13", false,-1, 63,0);
    tracep->declQuad(c+75,"rf_14", false,-1, 63,0);
    tracep->declQuad(c+77,"rf_15", false,-1, 63,0);
    tracep->declQuad(c+79,"rf_16", false,-1, 63,0);
    tracep->declQuad(c+81,"rf_17", false,-1, 63,0);
    tracep->declQuad(c+83,"rf_18", false,-1, 63,0);
    tracep->declQuad(c+85,"rf_19", false,-1, 63,0);
    tracep->declQuad(c+87,"rf_20", false,-1, 63,0);
    tracep->declQuad(c+89,"rf_21", false,-1, 63,0);
    tracep->declQuad(c+91,"rf_22", false,-1, 63,0);
    tracep->declQuad(c+93,"rf_23", false,-1, 63,0);
    tracep->declQuad(c+95,"rf_24", false,-1, 63,0);
    tracep->declQuad(c+97,"rf_25", false,-1, 63,0);
    tracep->declQuad(c+99,"rf_26", false,-1, 63,0);
    tracep->declQuad(c+101,"rf_27", false,-1, 63,0);
    tracep->declQuad(c+103,"rf_28", false,-1, 63,0);
    tracep->declQuad(c+105,"rf_29", false,-1, 63,0);
    tracep->declQuad(c+107,"rf_30", false,-1, 63,0);
    tracep->declQuad(c+109,"rf_31", false,-1, 63,0);
    tracep->declBit(c+114,"inst_valid", false,-1);
    tracep->declQuad(c+112,"pc", false,-1, 63,0);
    tracep->declQuad(c+115,"dnpc", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+229+i*2,"rf", true,(i+0), 63,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+293+i*1,"IN", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EX ");
    tracep->declBit(c+22,"io_in_valid", false,-1);
    tracep->declBus(c+23,"io_in_bits_ctrl_signal_src1Type", false,-1, 2,0);
    tracep->declBus(c+24,"io_in_bits_ctrl_signal_src2Type", false,-1, 2,0);
    tracep->declBus(c+25,"io_in_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+26,"io_in_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+27,"io_in_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+28,"io_in_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declBus(c+29,"io_in_bits_ctrl_signal_rfDest", false,-1, 4,0);
    tracep->declQuad(c+30,"io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+32,"io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+34,"io_in_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declQuad(c+36,"io_in_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+38,"io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declBit(c+1,"io_branchIO_is_branch", false,-1);
    tracep->declBit(c+2,"io_branchIO_is_jump", false,-1);
    tracep->declQuad(c+3,"io_branchIO_dnpc", false,-1, 63,0);
    tracep->declBit(c+22,"io_out_valid", false,-1);
    tracep->declBus(c+25,"io_out_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+26,"io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBus(c+28,"io_out_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+36,"io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+38,"io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+3,"io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+29,"io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+27,"io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+39,"io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+41,"io_out_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+43,"io_out_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+34,"io_out_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declBit(c+45,"io_is_break", false,-1);
    tracep->declBit(c+46,"io_is_flush", false,-1);
    tracep->declQuad(c+299,"src1", false,-1, 63,0);
    tracep->declQuad(c+301,"src2", false,-1, 63,0);
    tracep->declBit(c+303,"alu_result_sign", false,-1);
    tracep->declBit(c+304,"alu_result_sign_2", false,-1);
    tracep->declBit(c+305,"alu_result_sign_3", false,-1);
    tracep->declBit(c+306,"alu_result_sign_4", false,-1);
    tracep->declBit(c+307,"alu_result_sign_5", false,-1);
    tracep->declBit(c+308,"alu_result_sign_6", false,-1);
    tracep->declBit(c+309,"alu_result_sign_7", false,-1);
    tracep->declQuad(c+310,"alu_result", false,-1, 63,0);
    tracep->declBit(c+312,"shift_result_sign", false,-1);
    tracep->declBit(c+313,"shift_result_sign_1", false,-1);
    tracep->declBit(c+314,"shift_result_sign_2", false,-1);
    tracep->declBit(c+315,"shift_result_sign_3", false,-1);
    tracep->declQuad(c+316,"compar_result", false,-1, 63,0);
    tracep->declQuad(c+318,"jump_result", false,-1, 63,0);
    tracep->declQuad(c+320,"shift_result", false,-1, 63,0);
    tracep->declQuad(c+322,"branch_result", false,-1, 63,0);
    tracep->declBit(c+324,"branch_flag", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ID ");
    tracep->declBit(c+7,"io_in_valid", false,-1);
    tracep->declQuad(c+8,"io_in_bits_PC", false,-1, 63,0);
    tracep->declBus(c+10,"io_in_bits_Inst", false,-1, 31,0);
    tracep->declQuad(c+349,"io_REG1", false,-1, 63,0);
    tracep->declQuad(c+351,"io_REG2", false,-1, 63,0);
    tracep->declBit(c+7,"io_out_valid", false,-1);
    tracep->declBus(c+11,"io_out_bits_ctrl_signal_src1Type", false,-1, 2,0);
    tracep->declBus(c+12,"io_out_bits_ctrl_signal_src2Type", false,-1, 2,0);
    tracep->declBus(c+13,"io_out_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+14,"io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBus(c+15,"io_out_bits_ctrl_signal_rfSrc1", false,-1, 4,0);
    tracep->declBus(c+16,"io_out_bits_ctrl_signal_rfSrc2", false,-1, 4,0);
    tracep->declBit(c+17,"io_out_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+18,"io_out_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declBus(c+19,"io_out_bits_ctrl_signal_rfDest", false,-1, 4,0);
    tracep->declQuad(c+349,"io_out_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+351,"io_out_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+20,"io_out_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declQuad(c+8,"io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+10,"io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declBus(c+19,"rd", false,-1, 4,0);
    tracep->declBus(c+325,"Inst_decode_0", false,-1, 3,0);
    tracep->declBus(c+18,"Inst_decode_2", false,-1, 6,0);
    tracep->declBus(c+326,"srctype1", false,-1, 1,0);
    tracep->declBit(c+327,"srctype2", false,-1);
    tracep->declBit(c+328,"sign", false,-1);
    tracep->declBit(c+329,"sign_1", false,-1);
    tracep->declBit(c+330,"sign_2", false,-1);
    tracep->declBit(c+330,"sign_3", false,-1);
    tracep->declBit(c+328,"sign_4", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IF ");
    tracep->declBit(c+343,"clock", false,-1);
    tracep->declBit(c+344,"reset", false,-1);
    tracep->declBit(c+1,"io_branch_io_is_branch", false,-1);
    tracep->declBit(c+2,"io_branch_io_is_jump", false,-1);
    tracep->declQuad(c+3,"io_branch_io_dnpc", false,-1, 63,0);
    tracep->declBus(c+348,"io_inst", false,-1, 31,0);
    tracep->declQuad(c+5,"io_out_bits_PC", false,-1, 63,0);
    tracep->declBus(c+348,"io_out_bits_Inst", false,-1, 31,0);
    tracep->declQuad(c+5,"temp", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IFM ");
    tracep->declBit(c+344,"reset", false,-1);
    tracep->declBit(c+343,"clk", false,-1);
    tracep->declQuad(c+5,"pc", false,-1, 63,0);
    tracep->declBus(c+348,"inst", false,-1, 31,0);
    tracep->declQuad(c+337,"rdata", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MEM ");
    tracep->declBit(c+196,"io_in_valid", false,-1);
    tracep->declBus(c+197,"io_in_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+198,"io_in_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBus(c+199,"io_in_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+200,"io_in_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+202,"io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+203,"io_in_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+205,"io_in_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+206,"io_in_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+207,"io_in_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+209,"io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+211,"io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+213,"io_in_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declBit(c+196,"io_out_valid", false,-1);
    tracep->declBit(c+198,"io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declQuad(c+200,"io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+202,"io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+203,"io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+205,"io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+206,"io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+335,"io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+189,"io_mem_addr", false,-1, 63,0);
    tracep->declQuad(c+333,"io_mem_rdata", false,-1, 63,0);
    tracep->declQuad(c+193,"io_mem_wdata", false,-1, 63,0);
    tracep->declBus(c+195,"io_mem_wmask", false,-1, 7,0);
    tracep->declBit(c+192,"io_mem_ce", false,-1);
    tracep->declBit(c+191,"io_mem_we", false,-1);
    tracep->declQuad(c+331,"addr_temp", false,-1, 63,0);
    tracep->declBit(c+339,"mem_result_sign", false,-1);
    tracep->declBit(c+340,"mem_result_sign_1", false,-1);
    tracep->declBit(c+341,"mem_result_sign_2", false,-1);
    tracep->declBit(c+342,"mem_result_sign_3", false,-1);
    tracep->declQuad(c+353,"mem_result", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WB ");
    tracep->declBit(c+215,"io_in_valid", false,-1);
    tracep->declBit(c+216,"io_in_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declQuad(c+217,"io_in_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+219,"io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+220,"io_in_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+187,"io_in_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+188,"io_in_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+222,"io_in_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declBit(c+216,"io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declQuad(c+217,"io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+219,"io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+220,"io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+187,"io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+188,"io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+222,"io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("bypass ");
    tracep->declBus(c+29,"io_EX_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+27,"io_EX_rf_rfWen", false,-1);
    tracep->declQuad(c+39,"io_EX_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+205,"io_MEM_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+206,"io_MEM_rf_rfWen", false,-1);
    tracep->declQuad(c+335,"io_MEM_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+187,"io_WB_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+188,"io_WB_rf_rfWen", false,-1);
    tracep->declQuad(c+222,"io_WB_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+224,"io_Reg1", false,-1, 63,0);
    tracep->declBus(c+15,"io_reg_index1", false,-1, 4,0);
    tracep->declQuad(c+226,"io_Reg2", false,-1, 63,0);
    tracep->declBus(c+16,"io_reg_index2", false,-1, 4,0);
    tracep->declQuad(c+349,"io_Bypass_REG1", false,-1, 63,0);
    tracep->declQuad(c+351,"io_Bypass_REG2", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem ");
    tracep->declBit(c+344,"reset", false,-1);
    tracep->declBit(c+343,"clk", false,-1);
    tracep->declQuad(c+189,"addr", false,-1, 63,0);
    tracep->declBit(c+191,"we", false,-1);
    tracep->declBit(c+192,"ce", false,-1);
    tracep->declQuad(c+193,"wdata", false,-1, 63,0);
    tracep->declQuad(c+333,"rdata", false,-1, 63,0);
    tracep->declBus(c+195,"wmask", false,-1, 7,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VCoreTop___024root__trace_init_top(VCoreTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root__trace_init_top\n"); );
    // Body
    VCoreTop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VCoreTop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VCoreTop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VCoreTop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VCoreTop___024root__trace_register(VCoreTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VCoreTop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VCoreTop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VCoreTop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VCoreTop___024root__trace_full_sub_0(VCoreTop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VCoreTop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root__trace_full_top_0\n"); );
    // Init
    VCoreTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCoreTop___024root*>(voidSelf);
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VCoreTop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VCoreTop___024root__trace_full_sub_0(VCoreTop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<4>/*127:0*/ __Vtemp_h05cc7cb3__0;
    VlWide<4>/*127:0*/ __Vtemp_h8248920c__0;
    VlWide<4>/*127:0*/ __Vtemp_hcdf2309e__0;
    VlWide<4>/*127:0*/ __Vtemp_h400e05cb__0;
    VlWide<4>/*127:0*/ __Vtemp_h47580cf4__0;
    // Body
    bufp->fullBit(oldp+1,(((0x6bU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                            ? (vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_58 
                               == vlSelf->CoreTop__DOT__EX__DOT__src2)
                            : (IData)(vlSelf->CoreTop__DOT__EX__DOT___GEN_51))));
    bufp->fullBit(oldp+2,((3U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType))));
    bufp->fullQData(oldp+3,(((0x19U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                              ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1
                              : vlSelf->CoreTop__DOT__EX__DOT___GEN_60)),64);
    bufp->fullQData(oldp+5,(vlSelf->CoreTop__DOT__IF__DOT__temp),64);
    bufp->fullBit(oldp+7,(vlSelf->CoreTop__DOT__valid));
    bufp->fullQData(oldp+8,(vlSelf->CoreTop__DOT__ID_io_in_bits_r_PC),64);
    bufp->fullIData(oldp+10,(vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst),32);
    bufp->fullCData(oldp+11,((((7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                ? 2U : 0U) | ((3U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                               ? 2U
                                               : 0U))),3);
    bufp->fullCData(oldp+12,((((8U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)) 
                               | (7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))) 
                              | (3U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)))),3);
    bufp->fullCData(oldp+13,(((0x13U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                               ? 0U : ((0x1013U == 
                                        (0xfc00707fU 
                                         & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                        ? 1U : ((0x6013U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                 ? 0U
                                                 : 
                                                ((0x3003U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                  ? 4U
                                                  : 
                                                 ((0x2003U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                   ? 4U
                                                   : 
                                                  ((0x3013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                    ? 5U
                                                    : 
                                                   ((0x1bU 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                     ? 0U
                                                     : 
                                                    ((0x40005013U 
                                                      == 
                                                      (0xfc00707fU 
                                                       & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                      ? 1U
                                                      : 
                                                     ((0x4003U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                       ? 4U
                                                       : 
                                                      ((3U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                        ? 4U
                                                        : 
                                                       ((0x4013U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                         ? 0U
                                                         : 
                                                        ((0x7013U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                          ? 0U
                                                          : 
                                                         ((0x5013U 
                                                           == 
                                                           (0xfc00707fU 
                                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                           ? 1U
                                                           : 
                                                          ((0x1003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                            ? 4U
                                                            : 
                                                           ((0x5003U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                             ? 4U
                                                             : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_239))))))))))))))))),3);
    bufp->fullBit(oldp+14,((1U & (~ ((0U == ((0x13U 
                                              == (0x707fU 
                                                  & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                              ? 0x40U
                                              : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_316))) 
                                     | (~ (IData)(vlSelf->CoreTop__DOT__valid)))))));
    bufp->fullCData(oldp+15,((0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+16,((0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                       >> 0x14U))),5);
    bufp->fullBit(oldp+17,(vlSelf->CoreTop__DOT__ID_io_out_bits_ctrl_signal_rfWen));
    bufp->fullCData(oldp+18,(((0x13U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                               ? 0x40U : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_316))),7);
    bufp->fullCData(oldp+19,((0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                       >> 7U))),5);
    bufp->fullQData(oldp+20,(((((((8U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                   ? ((((vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                         >> 0x1fU) ? 0xfffffffffffffULL
                                         : 0ULL) << 0xcU) 
                                      | (QData)((IData)(
                                                        (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                         >> 0x14U))))
                                   : 0ULL) | ((7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                               ? ((
                                                   ((0x80000U 
                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)
                                                     ? 0xfffffffffffULL
                                                     : 0ULL) 
                                                   << 0x14U) 
                                                  | (QData)((IData)(
                                                                    ((0xff000U 
                                                                      & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst) 
                                                                     | ((0x800U 
                                                                         & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                                            >> 9U)) 
                                                                        | (0x7feU 
                                                                           & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                                              >> 0x14U)))))))
                                               : 0ULL)) 
                                | ((3U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                    ? (((QData)((IData)(
                                                        ((vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                          >> 0x1fU)
                                                          ? 0xffffffffU
                                                          : 0U))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    (0xfffff000U 
                                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))))
                                    : 0ULL)) | ((9U 
                                                 == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                                 ? 
                                                ((((vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                    >> 0x1fU)
                                                    ? 0xfffffffffffffULL
                                                    : 0ULL) 
                                                  << 0xcU) 
                                                 | (QData)((IData)(
                                                                   ((0xfe0U 
                                                                     & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                                        >> 0x14U)) 
                                                                    | (0x1fU 
                                                                       & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                                          >> 7U))))))
                                                 : 0ULL)) 
                              | ((0xbU == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                  ? ((((vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                        >> 0x1fU) ? 0x7ffffffffffffULL
                                        : 0ULL) << 0xdU) 
                                     | (QData)((IData)(
                                                       ((0x1000U 
                                                         & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                            >> 0x13U)) 
                                                        | ((0x800U 
                                                            & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                               << 4U)) 
                                                           | ((0x7e0U 
                                                               & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                                  >> 0x14U)) 
                                                              | (0x1eU 
                                                                 & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                                    >> 7U))))))))
                                  : 0ULL))),64);
    bufp->fullBit(oldp+22,(vlSelf->CoreTop__DOT__valid_1));
    bufp->fullCData(oldp+23,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src1Type),3);
    bufp->fullCData(oldp+24,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src2Type),3);
    bufp->fullCData(oldp+25,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType),3);
    bufp->fullBit(oldp+26,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_inst_valid));
    bufp->fullBit(oldp+27,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfWen));
    bufp->fullCData(oldp+28,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype),7);
    bufp->fullCData(oldp+29,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest),5);
    bufp->fullQData(oldp+30,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_src1),64);
    bufp->fullQData(oldp+32,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_src2),64);
    bufp->fullQData(oldp+34,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm),64);
    bufp->fullQData(oldp+36,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC),64);
    bufp->fullIData(oldp+38,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_inst),32);
    bufp->fullQData(oldp+39,(vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfData),64);
    bufp->fullQData(oldp+41,(((0U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src1Type))
                               ? vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_src1
                               : vlSelf->CoreTop__DOT__EX__DOT___GEN_1)),64);
    bufp->fullQData(oldp+43,(((0U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src2Type))
                               ? vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_src2
                               : vlSelf->CoreTop__DOT__EX__DOT___GEN_3)),64);
    bufp->fullBit(oldp+45,((0x42U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))));
    bufp->fullBit(oldp+46,(vlSelf->CoreTop__DOT__EX_io_is_flush));
    bufp->fullQData(oldp+47,(vlSelf->CoreTop__DOT__rf
                             [0U]),64);
    bufp->fullQData(oldp+49,(vlSelf->CoreTop__DOT__rf
                             [1U]),64);
    bufp->fullQData(oldp+51,(vlSelf->CoreTop__DOT__rf
                             [2U]),64);
    bufp->fullQData(oldp+53,(vlSelf->CoreTop__DOT__rf
                             [3U]),64);
    bufp->fullQData(oldp+55,(vlSelf->CoreTop__DOT__rf
                             [4U]),64);
    bufp->fullQData(oldp+57,(vlSelf->CoreTop__DOT__rf
                             [5U]),64);
    bufp->fullQData(oldp+59,(vlSelf->CoreTop__DOT__rf
                             [6U]),64);
    bufp->fullQData(oldp+61,(vlSelf->CoreTop__DOT__rf
                             [7U]),64);
    bufp->fullQData(oldp+63,(vlSelf->CoreTop__DOT__rf
                             [8U]),64);
    bufp->fullQData(oldp+65,(vlSelf->CoreTop__DOT__rf
                             [9U]),64);
    bufp->fullQData(oldp+67,(vlSelf->CoreTop__DOT__rf
                             [0xaU]),64);
    bufp->fullQData(oldp+69,(vlSelf->CoreTop__DOT__rf
                             [0xbU]),64);
    bufp->fullQData(oldp+71,(vlSelf->CoreTop__DOT__rf
                             [0xcU]),64);
    bufp->fullQData(oldp+73,(vlSelf->CoreTop__DOT__rf
                             [0xdU]),64);
    bufp->fullQData(oldp+75,(vlSelf->CoreTop__DOT__rf
                             [0xeU]),64);
    bufp->fullQData(oldp+77,(vlSelf->CoreTop__DOT__rf
                             [0xfU]),64);
    bufp->fullQData(oldp+79,(vlSelf->CoreTop__DOT__rf
                             [0x10U]),64);
    bufp->fullQData(oldp+81,(vlSelf->CoreTop__DOT__rf
                             [0x11U]),64);
    bufp->fullQData(oldp+83,(vlSelf->CoreTop__DOT__rf
                             [0x12U]),64);
    bufp->fullQData(oldp+85,(vlSelf->CoreTop__DOT__rf
                             [0x13U]),64);
    bufp->fullQData(oldp+87,(vlSelf->CoreTop__DOT__rf
                             [0x14U]),64);
    bufp->fullQData(oldp+89,(vlSelf->CoreTop__DOT__rf
                             [0x15U]),64);
    bufp->fullQData(oldp+91,(vlSelf->CoreTop__DOT__rf
                             [0x16U]),64);
    bufp->fullQData(oldp+93,(vlSelf->CoreTop__DOT__rf
                             [0x17U]),64);
    bufp->fullQData(oldp+95,(vlSelf->CoreTop__DOT__rf
                             [0x18U]),64);
    bufp->fullQData(oldp+97,(vlSelf->CoreTop__DOT__rf
                             [0x19U]),64);
    bufp->fullQData(oldp+99,(vlSelf->CoreTop__DOT__rf
                             [0x1aU]),64);
    bufp->fullQData(oldp+101,(vlSelf->CoreTop__DOT__rf
                              [0x1bU]),64);
    bufp->fullQData(oldp+103,(vlSelf->CoreTop__DOT__rf
                              [0x1cU]),64);
    bufp->fullQData(oldp+105,(vlSelf->CoreTop__DOT__rf
                              [0x1dU]),64);
    bufp->fullQData(oldp+107,(vlSelf->CoreTop__DOT__rf
                              [0x1eU]),64);
    bufp->fullQData(oldp+109,(vlSelf->CoreTop__DOT__rf
                              [0x1fU]),64);
    bufp->fullIData(oldp+111,(vlSelf->CoreTop__DOT__DIP_io_inst_REG),32);
    bufp->fullQData(oldp+112,(vlSelf->CoreTop__DOT__DIP_io_pc_REG),64);
    bufp->fullBit(oldp+114,(vlSelf->CoreTop__DOT__DIP_io_inst_valid_REG));
    bufp->fullQData(oldp+115,(vlSelf->CoreTop__DOT__DIP_io_dnpc_REG),64);
    bufp->fullQData(oldp+117,(vlSelf->CoreTop__DOT__rf[0]),64);
    bufp->fullQData(oldp+119,(vlSelf->CoreTop__DOT__rf[1]),64);
    bufp->fullQData(oldp+121,(vlSelf->CoreTop__DOT__rf[2]),64);
    bufp->fullQData(oldp+123,(vlSelf->CoreTop__DOT__rf[3]),64);
    bufp->fullQData(oldp+125,(vlSelf->CoreTop__DOT__rf[4]),64);
    bufp->fullQData(oldp+127,(vlSelf->CoreTop__DOT__rf[5]),64);
    bufp->fullQData(oldp+129,(vlSelf->CoreTop__DOT__rf[6]),64);
    bufp->fullQData(oldp+131,(vlSelf->CoreTop__DOT__rf[7]),64);
    bufp->fullQData(oldp+133,(vlSelf->CoreTop__DOT__rf[8]),64);
    bufp->fullQData(oldp+135,(vlSelf->CoreTop__DOT__rf[9]),64);
    bufp->fullQData(oldp+137,(vlSelf->CoreTop__DOT__rf[10]),64);
    bufp->fullQData(oldp+139,(vlSelf->CoreTop__DOT__rf[11]),64);
    bufp->fullQData(oldp+141,(vlSelf->CoreTop__DOT__rf[12]),64);
    bufp->fullQData(oldp+143,(vlSelf->CoreTop__DOT__rf[13]),64);
    bufp->fullQData(oldp+145,(vlSelf->CoreTop__DOT__rf[14]),64);
    bufp->fullQData(oldp+147,(vlSelf->CoreTop__DOT__rf[15]),64);
    bufp->fullQData(oldp+149,(vlSelf->CoreTop__DOT__rf[16]),64);
    bufp->fullQData(oldp+151,(vlSelf->CoreTop__DOT__rf[17]),64);
    bufp->fullQData(oldp+153,(vlSelf->CoreTop__DOT__rf[18]),64);
    bufp->fullQData(oldp+155,(vlSelf->CoreTop__DOT__rf[19]),64);
    bufp->fullQData(oldp+157,(vlSelf->CoreTop__DOT__rf[20]),64);
    bufp->fullQData(oldp+159,(vlSelf->CoreTop__DOT__rf[21]),64);
    bufp->fullQData(oldp+161,(vlSelf->CoreTop__DOT__rf[22]),64);
    bufp->fullQData(oldp+163,(vlSelf->CoreTop__DOT__rf[23]),64);
    bufp->fullQData(oldp+165,(vlSelf->CoreTop__DOT__rf[24]),64);
    bufp->fullQData(oldp+167,(vlSelf->CoreTop__DOT__rf[25]),64);
    bufp->fullQData(oldp+169,(vlSelf->CoreTop__DOT__rf[26]),64);
    bufp->fullQData(oldp+171,(vlSelf->CoreTop__DOT__rf[27]),64);
    bufp->fullQData(oldp+173,(vlSelf->CoreTop__DOT__rf[28]),64);
    bufp->fullQData(oldp+175,(vlSelf->CoreTop__DOT__rf[29]),64);
    bufp->fullQData(oldp+177,(vlSelf->CoreTop__DOT__rf[30]),64);
    bufp->fullQData(oldp+179,(vlSelf->CoreTop__DOT__rf[31]),64);
    bufp->fullQData(oldp+181,(vlSelf->CoreTop__DOT__rf
                              [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                         >> 0xfU))]),64);
    bufp->fullQData(oldp+183,(vlSelf->CoreTop__DOT__rf
                              [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                         >> 0x14U))]),64);
    bufp->fullQData(oldp+185,(((0U == (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest))
                                ? 0ULL : vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfData)),64);
    bufp->fullCData(oldp+187,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest),5);
    bufp->fullBit(oldp+188,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfWen));
    bufp->fullQData(oldp+189,(((0x45U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                ? vlSelf->CoreTop__DOT__MEM__DOT___addr_temp_T_1
                                : vlSelf->CoreTop__DOT__MEM__DOT___GEN_16)),64);
    bufp->fullBit(oldp+191,(((0x45U != (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype)) 
                             & ((0x46U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype)) 
                                | ((0x70U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype)) 
                                   | ((0x47U != (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype)) 
                                      & ((0x11U != (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype)) 
                                         & ((0x6fU 
                                             != (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype)) 
                                            & ((0xeU 
                                                != (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype)) 
                                               & ((0x74U 
                                                   == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype)) 
                                                  | (0x77U 
                                                     == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))))))))))));
    bufp->fullBit(oldp+192,((4U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_fuType))));
    bufp->fullQData(oldp+193,(((0x46U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                ? vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2
                                : ((0x70U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                    ? ((0U == (3U & (IData)(
                                                            (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                             >> 1U))))
                                        ? (QData)((IData)(
                                                          (0xffffU 
                                                           & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2))))
                                        : ((1U == (3U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                              >> 1U))))
                                            ? ((QData)((IData)(
                                                               (0xffffU 
                                                                & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)))) 
                                               << 0x10U)
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & (IData)(
                                                           (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                            >> 1U))))
                                                ? ((QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)))) 
                                                   << 0x20U)
                                                : (
                                                   (3U 
                                                    == 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                                >> 1U))))
                                                    ? 
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)))) 
                                                    << 0x30U)
                                                    : 0ULL))))
                                    : ((0x74U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                        ? vlSelf->CoreTop__DOT__MEM__DOT___wdata_temp_T_21
                                        : ((0x77U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                            ? ((1U 
                                                & (IData)(
                                                          (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                           >> 2U)))
                                                ? ((QData)((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)) 
                                                   << 0x20U)
                                                : (QData)((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)))
                                            : 0ULL))))),64);
    bufp->fullCData(oldp+195,(((0x46U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                ? 0xffU : (IData)(vlSelf->CoreTop__DOT__MEM__DOT___GEN_32))),8);
    bufp->fullBit(oldp+196,(vlSelf->CoreTop__DOT__valid_2));
    bufp->fullCData(oldp+197,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_fuType),3);
    bufp->fullBit(oldp+198,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_inst_valid));
    bufp->fullCData(oldp+199,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype),7);
    bufp->fullQData(oldp+200,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_PC),64);
    bufp->fullIData(oldp+202,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_inst),32);
    bufp->fullQData(oldp+203,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_Dnpc),64);
    bufp->fullCData(oldp+205,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest),5);
    bufp->fullBit(oldp+206,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfWen));
    bufp->fullQData(oldp+207,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfData),64);
    bufp->fullQData(oldp+209,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src1),64);
    bufp->fullQData(oldp+211,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2),64);
    bufp->fullQData(oldp+213,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_Imm),64);
    bufp->fullBit(oldp+215,(vlSelf->CoreTop__DOT__valid_3));
    bufp->fullBit(oldp+216,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_inst_valid));
    bufp->fullQData(oldp+217,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_PC),64);
    bufp->fullIData(oldp+219,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_inst),32);
    bufp->fullQData(oldp+220,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_Dnpc),64);
    bufp->fullQData(oldp+222,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfData),64);
    bufp->fullQData(oldp+224,(((0U == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                >> 0xfU)))
                                ? 0ULL : vlSelf->CoreTop__DOT__rf
                               [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                          >> 0xfU))])),64);
    bufp->fullQData(oldp+226,(((0U == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                >> 0x14U)))
                                ? 0ULL : vlSelf->CoreTop__DOT__rf
                               [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                          >> 0x14U))])),64);
    bufp->fullIData(oldp+228,(vlSelf->CoreTop__DOT__io_inst_REG),32);
    bufp->fullQData(oldp+229,(vlSelf->CoreTop__DOT__DIP__DOT__rf[0]),64);
    bufp->fullQData(oldp+231,(vlSelf->CoreTop__DOT__DIP__DOT__rf[1]),64);
    bufp->fullQData(oldp+233,(vlSelf->CoreTop__DOT__DIP__DOT__rf[2]),64);
    bufp->fullQData(oldp+235,(vlSelf->CoreTop__DOT__DIP__DOT__rf[3]),64);
    bufp->fullQData(oldp+237,(vlSelf->CoreTop__DOT__DIP__DOT__rf[4]),64);
    bufp->fullQData(oldp+239,(vlSelf->CoreTop__DOT__DIP__DOT__rf[5]),64);
    bufp->fullQData(oldp+241,(vlSelf->CoreTop__DOT__DIP__DOT__rf[6]),64);
    bufp->fullQData(oldp+243,(vlSelf->CoreTop__DOT__DIP__DOT__rf[7]),64);
    bufp->fullQData(oldp+245,(vlSelf->CoreTop__DOT__DIP__DOT__rf[8]),64);
    bufp->fullQData(oldp+247,(vlSelf->CoreTop__DOT__DIP__DOT__rf[9]),64);
    bufp->fullQData(oldp+249,(vlSelf->CoreTop__DOT__DIP__DOT__rf[10]),64);
    bufp->fullQData(oldp+251,(vlSelf->CoreTop__DOT__DIP__DOT__rf[11]),64);
    bufp->fullQData(oldp+253,(vlSelf->CoreTop__DOT__DIP__DOT__rf[12]),64);
    bufp->fullQData(oldp+255,(vlSelf->CoreTop__DOT__DIP__DOT__rf[13]),64);
    bufp->fullQData(oldp+257,(vlSelf->CoreTop__DOT__DIP__DOT__rf[14]),64);
    bufp->fullQData(oldp+259,(vlSelf->CoreTop__DOT__DIP__DOT__rf[15]),64);
    bufp->fullQData(oldp+261,(vlSelf->CoreTop__DOT__DIP__DOT__rf[16]),64);
    bufp->fullQData(oldp+263,(vlSelf->CoreTop__DOT__DIP__DOT__rf[17]),64);
    bufp->fullQData(oldp+265,(vlSelf->CoreTop__DOT__DIP__DOT__rf[18]),64);
    bufp->fullQData(oldp+267,(vlSelf->CoreTop__DOT__DIP__DOT__rf[19]),64);
    bufp->fullQData(oldp+269,(vlSelf->CoreTop__DOT__DIP__DOT__rf[20]),64);
    bufp->fullQData(oldp+271,(vlSelf->CoreTop__DOT__DIP__DOT__rf[21]),64);
    bufp->fullQData(oldp+273,(vlSelf->CoreTop__DOT__DIP__DOT__rf[22]),64);
    bufp->fullQData(oldp+275,(vlSelf->CoreTop__DOT__DIP__DOT__rf[23]),64);
    bufp->fullQData(oldp+277,(vlSelf->CoreTop__DOT__DIP__DOT__rf[24]),64);
    bufp->fullQData(oldp+279,(vlSelf->CoreTop__DOT__DIP__DOT__rf[25]),64);
    bufp->fullQData(oldp+281,(vlSelf->CoreTop__DOT__DIP__DOT__rf[26]),64);
    bufp->fullQData(oldp+283,(vlSelf->CoreTop__DOT__DIP__DOT__rf[27]),64);
    bufp->fullQData(oldp+285,(vlSelf->CoreTop__DOT__DIP__DOT__rf[28]),64);
    bufp->fullQData(oldp+287,(vlSelf->CoreTop__DOT__DIP__DOT__rf[29]),64);
    bufp->fullQData(oldp+289,(vlSelf->CoreTop__DOT__DIP__DOT__rf[30]),64);
    bufp->fullQData(oldp+291,(vlSelf->CoreTop__DOT__DIP__DOT__rf[31]),64);
    bufp->fullIData(oldp+293,(vlSelf->CoreTop__DOT__DIP__DOT__IN[0]),32);
    bufp->fullIData(oldp+294,(vlSelf->CoreTop__DOT__DIP__DOT__IN[1]),32);
    bufp->fullIData(oldp+295,(vlSelf->CoreTop__DOT__DIP__DOT__IN[2]),32);
    bufp->fullIData(oldp+296,(vlSelf->CoreTop__DOT__DIP__DOT__IN[3]),32);
    bufp->fullIData(oldp+297,(vlSelf->CoreTop__DOT__DIP__DOT__IN[4]),32);
    bufp->fullIData(oldp+298,(vlSelf->CoreTop__DOT__DIP__DOT__IN[5]),32);
    bufp->fullQData(oldp+299,(vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_58),64);
    bufp->fullQData(oldp+301,(vlSelf->CoreTop__DOT__EX__DOT__src2),64);
    bufp->fullBit(oldp+303,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+304,((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_19[0U] 
                             >> 0x1fU)));
    bufp->fullBit(oldp+305,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_28 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+306,((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_38 
                             >> 0x1fU)));
    bufp->fullBit(oldp+307,((vlSelf->CoreTop__DOT__EX__DOT___GEN_22 
                             >> 0x1fU)));
    bufp->fullBit(oldp+308,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_10 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+309,((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_64 
                             >> 0x1fU)));
    bufp->fullQData(oldp+310,(((0x40U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1
                                : ((0x68U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                    ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_7
                                    : ((0x44U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                        ? (vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_58 
                                           | vlSelf->CoreTop__DOT__EX__DOT__src2)
                                        : ((0x69U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                            ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_10
                                            : ((0x71U 
                                                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                ? (vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_58 
                                                   & vlSelf->CoreTop__DOT__EX__DOT__src2)
                                                : (
                                                   (0x72U 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? 
                                                   (vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_58 
                                                    ^ vlSelf->CoreTop__DOT__EX__DOT__src2)
                                                    : 
                                                   ((0x6dU 
                                                     == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                     ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_7
                                                     : 
                                                    ((0x78U 
                                                      == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                      ? 
                                                     (((QData)((IData)(
                                                                       ((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_19[0U] 
                                                                         >> 0x1fU)
                                                                         ? 0xffffffffU
                                                                         : 0U))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_19[0U])))
                                                      : vlSelf->CoreTop__DOT__EX__DOT___GEN_14))))))))),64);
    bufp->fullBit(oldp+312,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_5[0U] 
                             >> 0x1fU)));
    bufp->fullBit(oldp+313,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_16[0U] 
                             >> 0x1fU)));
    bufp->fullBit(oldp+314,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_25 
                             >> 0x1fU)));
    bufp->fullBit(oldp+315,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_31 
                             >> 0x1fU)));
    bufp->fullQData(oldp+316,(((0x6aU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                ? ((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_58 
                                    < vlSelf->CoreTop__DOT__EX__DOT__src2)
                                    ? 1ULL : 0ULL) : 
                               ((2U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                 ? (VL_LTS_IQQ(64, vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_58, vlSelf->CoreTop__DOT__EX__DOT__src2)
                                     ? 1ULL : 0ULL)
                                 : 0ULL))),64);
    bufp->fullQData(oldp+318,(((3U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType))
                                ? (4ULL + vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC)
                                : 0ULL)),64);
    VL_EXTEND_WQ(127,64, __Vtemp_h05cc7cb3__0, VL_SHIFTRS_QQI(64,64,5, vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_58, 
                                                              (0x1fU 
                                                               & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2))));
    VL_EXTEND_WQ(127,64, __Vtemp_h8248920c__0, (((QData)((IData)(
                                                                 ((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_5[0U] 
                                                                   >> 0x1fU)
                                                                   ? 0xffffffffU
                                                                   : 0U))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_5[0U]))));
    VL_EXTEND_WQ(127,64, __Vtemp_hcdf2309e__0, vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_58);
    VL_SHIFTL_WWI(127,127,6, __Vtemp_h400e05cb__0, __Vtemp_hcdf2309e__0, 
                  (0x3fU & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)));
    VL_EXTEND_WQ(127,64, __Vtemp_h47580cf4__0, ((0x75U 
                                                 == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                 ? 
                                                (vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_58 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)))
                                                 : 
                                                ((5U 
                                                  == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   ((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_16[0U] 
                                                                     >> 0x1fU)
                                                                     ? 0xffffffffU
                                                                     : 0U))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_16[0U])))
                                                  : 
                                                 ((6U 
                                                   == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                   ? vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_28
                                                   : 
                                                  ((8U 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_35
                                                    : 
                                                   ((9U 
                                                     == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                     ? vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_28
                                                     : 
                                                    ((0xaU 
                                                      == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                      ? vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_35
                                                      : 
                                                     ((0x14U 
                                                       == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                       ? 
                                                      VL_SHIFTRS_QQI(64,64,6, vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_58, 
                                                                     (0x3fU 
                                                                      & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)))
                                                       : 0ULL))))))));
    bufp->fullQData(oldp+320,((((QData)((IData)(((0x6eU 
                                                  == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                  ? 
                                                 __Vtemp_h05cc7cb3__0[1U]
                                                  : 
                                                 ((0x73U 
                                                   == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                   ? 
                                                  __Vtemp_h8248920c__0[1U]
                                                   : 
                                                  ((0x41U 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? 
                                                   __Vtemp_h400e05cb__0[1U]
                                                    : 
                                                   __Vtemp_h47580cf4__0[1U]))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((0x6eU 
                                                              == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                              ? 
                                                             __Vtemp_h05cc7cb3__0[0U]
                                                              : 
                                                             ((0x73U 
                                                               == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                               ? 
                                                              __Vtemp_h8248920c__0[0U]
                                                               : 
                                                              ((0x41U 
                                                                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                                ? 
                                                               __Vtemp_h400e05cb__0[0U]
                                                                : 
                                                               __Vtemp_h47580cf4__0[0U]))))))),64);
    bufp->fullQData(oldp+322,(((0x6bU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                ? vlSelf->CoreTop__DOT__EX__DOT___branch_result_T_1
                                : ((0x6cU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                    ? vlSelf->CoreTop__DOT__EX__DOT___branch_result_T_1
                                    : ((0x76U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                        ? vlSelf->CoreTop__DOT__EX__DOT___branch_result_T_1
                                        : ((0x7bU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                            ? vlSelf->CoreTop__DOT__EX__DOT___branch_result_T_1
                                            : ((0xbU 
                                                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                ? vlSelf->CoreTop__DOT__EX__DOT___branch_result_T_1
                                                : (
                                                   (0xcU 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? vlSelf->CoreTop__DOT__EX__DOT___branch_result_T_1
                                                    : 0ULL))))))),64);
    bufp->fullBit(oldp+324,(vlSelf->CoreTop__DOT__EX__DOT__branch_flag));
    bufp->fullCData(oldp+325,(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0),4);
    bufp->fullCData(oldp+326,((((7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                 ? 2U : 0U) | ((3U 
                                                == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                                ? 2U
                                                : 0U))),2);
    bufp->fullBit(oldp+327,((((8U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)) 
                              | (7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))) 
                             | (3U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)))));
    bufp->fullBit(oldp+328,((vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                             >> 0x1fU)));
    bufp->fullBit(oldp+329,((1U & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                   >> 0x13U))));
    bufp->fullBit(oldp+330,((vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                             >> 0x1fU)));
    bufp->fullQData(oldp+331,(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp),64);
    bufp->fullQData(oldp+333,(vlSelf->CoreTop__DOT__mem_rdata),64);
    bufp->fullQData(oldp+335,(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfData),64);
    bufp->fullQData(oldp+337,(vlSelf->CoreTop__DOT__IFM__DOT__rdata),64);
    bufp->fullBit(oldp+339,((1U & (IData)((vlSelf->CoreTop__DOT__mem_rdata 
                                           >> 0x3fU)))));
    bufp->fullBit(oldp+340,((1U & (IData)((vlSelf->CoreTop__DOT__mem_rdata 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+341,((1U & ((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_27) 
                                   >> 7U))));
    bufp->fullBit(oldp+342,((1U & ((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_44) 
                                   >> 0xfU))));
    bufp->fullBit(oldp+343,(vlSelf->clock));
    bufp->fullBit(oldp+344,(vlSelf->reset));
    bufp->fullQData(oldp+345,(vlSelf->io_pc),64);
    bufp->fullIData(oldp+347,(vlSelf->io_inst),32);
    bufp->fullIData(oldp+348,(((1U & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                              >> 2U)))
                                ? (IData)((vlSelf->CoreTop__DOT__IFM__DOT__rdata 
                                           >> 0x20U))
                                : (IData)(vlSelf->CoreTop__DOT__IFM__DOT__rdata))),32);
    bufp->fullQData(oldp+349,((((IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfWen) 
                                & ((IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest) 
                                   == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                >> 0xfU))))
                                ? vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfData
                                : (((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfWen) 
                                    & ((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest) 
                                       == (0x1fU & 
                                           (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                            >> 0xfU))))
                                    ? vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfData
                                    : (((IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfWen) 
                                        & ((IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest) 
                                           == (0x1fU 
                                               & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                  >> 0xfU))))
                                        ? vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfData
                                        : ((0U == (0x1fU 
                                                   & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                      >> 0xfU)))
                                            ? 0ULL : 
                                           vlSelf->CoreTop__DOT__rf
                                           [(0x1fU 
                                             & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                >> 0xfU))]))))),64);
    bufp->fullQData(oldp+351,((((IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfWen) 
                                & ((IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest) 
                                   == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                >> 0x14U))))
                                ? vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfData
                                : (((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfWen) 
                                    & ((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest) 
                                       == (0x1fU & 
                                           (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                            >> 0x14U))))
                                    ? vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfData
                                    : (((IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfWen) 
                                        & ((IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest) 
                                           == (0x1fU 
                                               & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                  >> 0x14U))))
                                        ? vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfData
                                        : ((0U == (0x1fU 
                                                   & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                      >> 0x14U)))
                                            ? 0ULL : 
                                           vlSelf->CoreTop__DOT__rf
                                           [(0x1fU 
                                             & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                >> 0x14U))]))))),64);
    bufp->fullQData(oldp+353,(((0x45U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                ? vlSelf->CoreTop__DOT__mem_rdata
                                : ((0x47U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                    ? ((1U & (IData)(
                                                     (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                      >> 2U)))
                                        ? (((QData)((IData)(
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelf->CoreTop__DOT__mem_rdata 
                                                                         >> 0x3fU)))
                                                              ? 0xffffffffU
                                                              : 0U))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             (vlSelf->CoreTop__DOT__mem_rdata 
                                                              >> 0x20U))))
                                        : (((QData)((IData)(
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelf->CoreTop__DOT__mem_rdata 
                                                                         >> 0x1fU)))
                                                              ? 0xffffffffU
                                                              : 0U))) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelf->CoreTop__DOT__mem_rdata))))
                                    : ((0x11U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                        ? ((1U & (IData)(
                                                         (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                          >> 2U)))
                                            ? (QData)((IData)(
                                                              (vlSelf->CoreTop__DOT__mem_rdata 
                                                               >> 0x20U)))
                                            : (QData)((IData)(vlSelf->CoreTop__DOT__mem_rdata)))
                                        : ((0x6fU == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                            ? (QData)((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_27))
                                            : ((0xeU 
                                                == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                                ? (
                                                   (((0x80U 
                                                      & (IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_27))
                                                      ? 0xffffffffffffffULL
                                                      : 0ULL) 
                                                    << 8U) 
                                                   | (QData)((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_27)))
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? 
                                                   ((((0x8000U 
                                                       & (IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_44))
                                                       ? 0xffffffffffffULL
                                                       : 0ULL) 
                                                     << 0x10U) 
                                                    | (QData)((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_44)))
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                                     ? (QData)((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_44))
                                                     : 0ULL)))))))),64);
    bufp->fullBit(oldp+355,(1U));
    bufp->fullCData(oldp+356,(0U),5);
    bufp->fullCData(oldp+357,(1U),5);
    bufp->fullCData(oldp+358,(2U),5);
    bufp->fullCData(oldp+359,(3U),5);
    bufp->fullCData(oldp+360,(4U),5);
    bufp->fullCData(oldp+361,(5U),5);
    bufp->fullCData(oldp+362,(6U),5);
    bufp->fullCData(oldp+363,(7U),5);
    bufp->fullCData(oldp+364,(8U),5);
    bufp->fullCData(oldp+365,(9U),5);
    bufp->fullCData(oldp+366,(0xaU),5);
    bufp->fullCData(oldp+367,(0xbU),5);
    bufp->fullCData(oldp+368,(0xcU),5);
    bufp->fullCData(oldp+369,(0xdU),5);
    bufp->fullCData(oldp+370,(0xeU),5);
    bufp->fullCData(oldp+371,(0xfU),5);
    bufp->fullCData(oldp+372,(0x10U),5);
    bufp->fullCData(oldp+373,(0x11U),5);
    bufp->fullCData(oldp+374,(0x12U),5);
    bufp->fullCData(oldp+375,(0x13U),5);
    bufp->fullCData(oldp+376,(0x14U),5);
    bufp->fullCData(oldp+377,(0x15U),5);
    bufp->fullCData(oldp+378,(0x16U),5);
    bufp->fullCData(oldp+379,(0x17U),5);
    bufp->fullCData(oldp+380,(0x18U),5);
    bufp->fullCData(oldp+381,(0x19U),5);
    bufp->fullCData(oldp+382,(0x1aU),5);
    bufp->fullCData(oldp+383,(0x1bU),5);
    bufp->fullCData(oldp+384,(0x1cU),5);
    bufp->fullCData(oldp+385,(0x1dU),5);
    bufp->fullCData(oldp+386,(0x1eU),5);
    bufp->fullCData(oldp+387,(0x1fU),5);
}
