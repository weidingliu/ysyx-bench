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
<<<<<<< HEAD
    tracep->declBit(c+350,"clock", false,-1);
    tracep->declBit(c+351,"reset", false,-1);
    tracep->declQuad(c+352,"io_pc", false,-1, 63,0);
    tracep->declBus(c+354,"io_inst", false,-1, 31,0);
    tracep->pushNamePrefix("CoreTop ");
    tracep->declBit(c+350,"clock", false,-1);
    tracep->declBit(c+351,"reset", false,-1);
    tracep->declQuad(c+352,"io_pc", false,-1, 63,0);
    tracep->declBus(c+354,"io_inst", false,-1, 31,0);
    tracep->declBit(c+350,"IF_clock", false,-1);
    tracep->declBit(c+351,"IF_reset", false,-1);
    tracep->declBit(c+1,"IF_io_branch_io_is_branch", false,-1);
    tracep->declBit(c+2,"IF_io_branch_io_is_jump", false,-1);
    tracep->declQuad(c+3,"IF_io_branch_io_dnpc", false,-1, 63,0);
    tracep->declBus(c+355,"IF_io_inst", false,-1, 31,0);
    tracep->declQuad(c+5,"IF_io_out_bits_PC", false,-1, 63,0);
    tracep->declBus(c+355,"IF_io_out_bits_Inst", false,-1, 31,0);
    tracep->declBit(c+351,"IFM_reset", false,-1);
    tracep->declBit(c+350,"IFM_clk", false,-1);
    tracep->declQuad(c+5,"IFM_pc", false,-1, 63,0);
    tracep->declBus(c+355,"IFM_inst", false,-1, 31,0);
    tracep->declBit(c+7,"ID_io_in_valid", false,-1);
    tracep->declQuad(c+8,"ID_io_in_bits_PC", false,-1, 63,0);
    tracep->declBus(c+10,"ID_io_in_bits_Inst", false,-1, 31,0);
    tracep->declQuad(c+356,"ID_io_REG1", false,-1, 63,0);
    tracep->declQuad(c+358,"ID_io_REG2", false,-1, 63,0);
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
    tracep->declQuad(c+356,"ID_io_out_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+358,"ID_io_out_bits_ctrl_data_src2", false,-1, 63,0);
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
    tracep->declBit(c+39,"EX_io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+27,"EX_io_out_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+28,"EX_io_out_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+36,"EX_io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+38,"EX_io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+3,"EX_io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+29,"EX_io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+40,"EX_io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+41,"EX_io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+43,"EX_io_out_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+45,"EX_io_out_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+34,"EX_io_out_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declBit(c+47,"EX_io_is_break", false,-1);
    tracep->declBit(c+48,"EX_io_is_flush", false,-1);
    tracep->declBit(c+47,"DIP_is_break", false,-1);
    tracep->declQuad(c+49,"DIP_rf_0", false,-1, 63,0);
    tracep->declQuad(c+51,"DIP_rf_1", false,-1, 63,0);
    tracep->declQuad(c+53,"DIP_rf_2", false,-1, 63,0);
    tracep->declQuad(c+55,"DIP_rf_3", false,-1, 63,0);
    tracep->declQuad(c+57,"DIP_rf_4", false,-1, 63,0);
    tracep->declQuad(c+59,"DIP_rf_5", false,-1, 63,0);
    tracep->declQuad(c+61,"DIP_rf_6", false,-1, 63,0);
    tracep->declQuad(c+63,"DIP_rf_7", false,-1, 63,0);
    tracep->declQuad(c+65,"DIP_rf_8", false,-1, 63,0);
    tracep->declQuad(c+67,"DIP_rf_9", false,-1, 63,0);
    tracep->declQuad(c+69,"DIP_rf_10", false,-1, 63,0);
    tracep->declQuad(c+71,"DIP_rf_11", false,-1, 63,0);
    tracep->declQuad(c+73,"DIP_rf_12", false,-1, 63,0);
    tracep->declQuad(c+75,"DIP_rf_13", false,-1, 63,0);
    tracep->declQuad(c+77,"DIP_rf_14", false,-1, 63,0);
    tracep->declQuad(c+79,"DIP_rf_15", false,-1, 63,0);
    tracep->declQuad(c+81,"DIP_rf_16", false,-1, 63,0);
    tracep->declQuad(c+83,"DIP_rf_17", false,-1, 63,0);
    tracep->declQuad(c+85,"DIP_rf_18", false,-1, 63,0);
    tracep->declQuad(c+87,"DIP_rf_19", false,-1, 63,0);
    tracep->declQuad(c+89,"DIP_rf_20", false,-1, 63,0);
    tracep->declQuad(c+91,"DIP_rf_21", false,-1, 63,0);
    tracep->declQuad(c+93,"DIP_rf_22", false,-1, 63,0);
    tracep->declQuad(c+95,"DIP_rf_23", false,-1, 63,0);
    tracep->declQuad(c+97,"DIP_rf_24", false,-1, 63,0);
    tracep->declQuad(c+99,"DIP_rf_25", false,-1, 63,0);
    tracep->declQuad(c+101,"DIP_rf_26", false,-1, 63,0);
    tracep->declQuad(c+103,"DIP_rf_27", false,-1, 63,0);
    tracep->declQuad(c+105,"DIP_rf_28", false,-1, 63,0);
    tracep->declQuad(c+107,"DIP_rf_29", false,-1, 63,0);
    tracep->declQuad(c+109,"DIP_rf_30", false,-1, 63,0);
    tracep->declQuad(c+111,"DIP_rf_31", false,-1, 63,0);
    tracep->declBus(c+113,"DIP_inst", false,-1, 31,0);
    tracep->declQuad(c+114,"DIP_pc", false,-1, 63,0);
    tracep->declBit(c+116,"DIP_inst_valid", false,-1);
    tracep->declQuad(c+117,"DIP_dnpc", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+119+i*2,"rf", true,(i+0), 63,0);
    }
    tracep->declBit(c+362,"rf_bypass_io_Reg1_MPORT_en", false,-1);
    tracep->declBus(c+15,"rf_bypass_io_Reg1_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+183,"rf_bypass_io_Reg1_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+362,"rf_bypass_io_Reg2_MPORT_en", false,-1);
    tracep->declBus(c+16,"rf_bypass_io_Reg2_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+185,"rf_bypass_io_Reg2_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+362,"rf_DIP_io_rf_0_MPORT_en", false,-1);
    tracep->declBus(c+363,"rf_DIP_io_rf_0_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+49,"rf_DIP_io_rf_0_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+362,"rf_DIP_io_rf_1_MPORT_en", false,-1);
    tracep->declBus(c+364,"rf_DIP_io_rf_1_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+51,"rf_DIP_io_rf_1_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+362,"rf_DIP_io_rf_2_MPORT_en", false,-1);
    tracep->declBus(c+365,"rf_DIP_io_rf_2_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+53,"rf_DIP_io_rf_2_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+362,"rf_DIP_io_rf_3_MPORT_en", false,-1);
    tracep->declBus(c+366,"rf_DIP_io_rf_3_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+55,"rf_DIP_io_rf_3_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+362,"rf_DIP_io_rf_4_MPORT_en", false,-1);
    tracep->declBus(c+367,"rf_DIP_io_rf_4_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+57,"rf_DIP_io_rf_4_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+362,"rf_DIP_io_rf_5_MPORT_en", false,-1);
    tracep->declBus(c+368,"rf_DIP_io_rf_5_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+59,"rf_DIP_io_rf_5_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+362,"rf_DIP_io_rf_6_MPORT_en", false,-1);
    tracep->declBus(c+369,"rf_DIP_io_rf_6_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+61,"rf_DIP_io_rf_6_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+362,"rf_DIP_io_rf_7_MPORT_en", false,-1);
    tracep->declBus(c+370,"rf_DIP_io_rf_7_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+63,"rf_DIP_io_rf_7_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+362,"rf_DIP_io_rf_8_MPORT_en", false,-1);
    tracep->declBus(c+371,"rf_DIP_io_rf_8_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+65,"rf_DIP_io_rf_8_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+362,"rf_DIP_io_rf_9_MPORT_en", false,-1);
    tracep->declBus(c+372,"rf_DIP_io_rf_9_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+67,"rf_DIP_io_rf_9_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+362,"rf_DIP_io_rf_10_MPORT_en", false,-1);
    tracep->declBus(c+373,"rf_DIP_io_rf_10_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+69,"rf_DIP_io_rf_10_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+362,"rf_DIP_io_rf_11_MPORT_en", false,-1);
    tracep->declBus(c+374,"rf_DIP_io_rf_11_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+71,"rf_DIP_io_rf_11_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+362,"rf_DIP_io_rf_12_MPORT_en", false,-1);
    tracep->declBus(c+375,"rf_DIP_io_rf_12_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+73,"rf_DIP_io_rf_12_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+362,"rf_DIP_io_rf_13_MPORT_en", false,-1);
    tracep->declBus(c+376,"rf_DIP_io_rf_13_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+75,"rf_DIP_io_rf_13_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+362,"rf_DIP_io_rf_14_MPORT_en", false,-1);
    tracep->declBus(c+377,"rf_DIP_io_rf_14_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+77,"rf_DIP_io_rf_14_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+362,"rf_DIP_io_rf_15_MPORT_en", false,-1);
    tracep->declBus(c+378,"rf_DIP_io_rf_15_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+79,"rf_DIP_io_rf_15_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+362,"rf_DIP_io_rf_16_MPORT_en", false,-1);
    tracep->declBus(c+379,"rf_DIP_io_rf_16_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+81,"rf_DIP_io_rf_16_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+362,"rf_DIP_io_rf_17_MPORT_en", false,-1);
    tracep->declBus(c+380,"rf_DIP_io_rf_17_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+83,"rf_DIP_io_rf_17_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+362,"rf_DIP_io_rf_18_MPORT_en", false,-1);
    tracep->declBus(c+381,"rf_DIP_io_rf_18_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+85,"rf_DIP_io_rf_18_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+362,"rf_DIP_io_rf_19_MPORT_en", false,-1);
    tracep->declBus(c+382,"rf_DIP_io_rf_19_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+87,"rf_DIP_io_rf_19_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+362,"rf_DIP_io_rf_20_MPORT_en", false,-1);
    tracep->declBus(c+383,"rf_DIP_io_rf_20_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+89,"rf_DIP_io_rf_20_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+362,"rf_DIP_io_rf_21_MPORT_en", false,-1);
    tracep->declBus(c+384,"rf_DIP_io_rf_21_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+91,"rf_DIP_io_rf_21_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+362,"rf_DIP_io_rf_22_MPORT_en", false,-1);
    tracep->declBus(c+385,"rf_DIP_io_rf_22_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+93,"rf_DIP_io_rf_22_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+362,"rf_DIP_io_rf_23_MPORT_en", false,-1);
    tracep->declBus(c+386,"rf_DIP_io_rf_23_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+95,"rf_DIP_io_rf_23_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+362,"rf_DIP_io_rf_24_MPORT_en", false,-1);
    tracep->declBus(c+387,"rf_DIP_io_rf_24_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+97,"rf_DIP_io_rf_24_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+362,"rf_DIP_io_rf_25_MPORT_en", false,-1);
    tracep->declBus(c+388,"rf_DIP_io_rf_25_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+99,"rf_DIP_io_rf_25_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+362,"rf_DIP_io_rf_26_MPORT_en", false,-1);
    tracep->declBus(c+389,"rf_DIP_io_rf_26_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+101,"rf_DIP_io_rf_26_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+362,"rf_DIP_io_rf_27_MPORT_en", false,-1);
    tracep->declBus(c+390,"rf_DIP_io_rf_27_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+103,"rf_DIP_io_rf_27_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+362,"rf_DIP_io_rf_28_MPORT_en", false,-1);
    tracep->declBus(c+391,"rf_DIP_io_rf_28_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+105,"rf_DIP_io_rf_28_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+362,"rf_DIP_io_rf_29_MPORT_en", false,-1);
    tracep->declBus(c+392,"rf_DIP_io_rf_29_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+107,"rf_DIP_io_rf_29_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+362,"rf_DIP_io_rf_30_MPORT_en", false,-1);
    tracep->declBus(c+393,"rf_DIP_io_rf_30_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+109,"rf_DIP_io_rf_30_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+362,"rf_DIP_io_rf_31_MPORT_en", false,-1);
    tracep->declBus(c+394,"rf_DIP_io_rf_31_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+111,"rf_DIP_io_rf_31_MPORT_data", false,-1, 63,0);
    tracep->declQuad(c+187,"rf_MPORT_data", false,-1, 63,0);
    tracep->declBus(c+189,"rf_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+362,"rf_MPORT_mask", false,-1);
    tracep->declBit(c+190,"rf_MPORT_en", false,-1);
    tracep->declQuad(c+191,"mem_addr", false,-1, 63,0);
    tracep->declBit(c+351,"mem_reset", false,-1);
    tracep->declBit(c+350,"mem_clk", false,-1);
    tracep->declBit(c+193,"mem_we", false,-1);
    tracep->declBit(c+194,"mem_ce", false,-1);
    tracep->declQuad(c+195,"mem_wdata", false,-1, 63,0);
    tracep->declQuad(c+340,"mem_rdata", false,-1, 63,0);
    tracep->declBus(c+197,"mem_wmask", false,-1, 7,0);
    tracep->declBit(c+198,"MEM_io_in_valid", false,-1);
    tracep->declBus(c+199,"MEM_io_in_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+200,"MEM_io_in_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+201,"MEM_io_in_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+202,"MEM_io_in_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+203,"MEM_io_in_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+205,"MEM_io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+206,"MEM_io_in_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+208,"MEM_io_in_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declQuad(c+209,"MEM_io_in_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+211,"MEM_io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+213,"MEM_io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+215,"MEM_io_in_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declBit(c+198,"MEM_io_out_valid", false,-1);
    tracep->declBit(c+217,"MEM_io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+201,"MEM_io_out_bits_ctrl_signal_rfWen", false,-1);
    tracep->declQuad(c+203,"MEM_io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+205,"MEM_io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+206,"MEM_io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+208,"MEM_io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+218,"MEM_io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+342,"MEM_io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+191,"MEM_io_mem_addr", false,-1, 63,0);
    tracep->declQuad(c+340,"MEM_io_mem_rdata", false,-1, 63,0);
    tracep->declQuad(c+195,"MEM_io_mem_wdata", false,-1, 63,0);
    tracep->declBus(c+197,"MEM_io_mem_wmask", false,-1, 7,0);
    tracep->declBit(c+194,"MEM_io_mem_ce", false,-1);
    tracep->declBit(c+193,"MEM_io_mem_we", false,-1);
    tracep->declBit(c+219,"WB_io_in_valid", false,-1);
    tracep->declBit(c+220,"WB_io_in_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+221,"WB_io_in_bits_ctrl_signal_rfWen", false,-1);
    tracep->declQuad(c+222,"WB_io_in_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+224,"WB_io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+225,"WB_io_in_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+189,"WB_io_in_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declQuad(c+227,"WB_io_in_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declBit(c+229,"WB_io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declQuad(c+222,"WB_io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+224,"WB_io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+225,"WB_io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+189,"WB_io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+190,"WB_io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+227,"WB_io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+29,"bypass_io_EX_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+40,"bypass_io_EX_rf_rfWen", false,-1);
    tracep->declQuad(c+41,"bypass_io_EX_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+208,"bypass_io_MEM_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+218,"bypass_io_MEM_rf_rfWen", false,-1);
    tracep->declQuad(c+342,"bypass_io_MEM_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+189,"bypass_io_WB_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+190,"bypass_io_WB_rf_rfWen", false,-1);
    tracep->declQuad(c+227,"bypass_io_WB_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+230,"bypass_io_Reg1", false,-1, 63,0);
    tracep->declBus(c+15,"bypass_io_reg_index1", false,-1, 4,0);
    tracep->declQuad(c+232,"bypass_io_Reg2", false,-1, 63,0);
    tracep->declBus(c+16,"bypass_io_reg_index2", false,-1, 4,0);
    tracep->declQuad(c+356,"bypass_io_Bypass_REG1", false,-1, 63,0);
    tracep->declQuad(c+358,"bypass_io_Bypass_REG2", false,-1, 63,0);
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
    tracep->declBit(c+198,"valid_2", false,-1);
    tracep->declBus(c+199,"MEM_io_in_bits_r_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+200,"MEM_io_in_bits_r_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+201,"MEM_io_in_bits_r_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+202,"MEM_io_in_bits_r_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+203,"MEM_io_in_bits_r_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+205,"MEM_io_in_bits_r_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+206,"MEM_io_in_bits_r_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+208,"MEM_io_in_bits_r_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declQuad(c+209,"MEM_io_in_bits_r_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+211,"MEM_io_in_bits_r_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+213,"MEM_io_in_bits_r_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+215,"MEM_io_in_bits_r_ctrl_data_Imm", false,-1, 63,0);
    tracep->declBit(c+219,"valid_3", false,-1);
    tracep->declBit(c+220,"WB_io_in_bits_r_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+221,"WB_io_in_bits_r_ctrl_signal_rfWen", false,-1);
    tracep->declQuad(c+222,"WB_io_in_bits_r_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+224,"WB_io_in_bits_r_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+225,"WB_io_in_bits_r_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+189,"WB_io_in_bits_r_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declQuad(c+227,"WB_io_in_bits_r_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+113,"DIP_io_inst_REG", false,-1, 31,0);
    tracep->declBit(c+116,"DIP_io_inst_valid_REG", false,-1);
    tracep->declQuad(c+114,"DIP_io_pc_REG", false,-1, 63,0);
    tracep->declQuad(c+117,"DIP_io_dnpc_REG", false,-1, 63,0);
    tracep->declBus(c+234,"io_inst_REG", false,-1, 31,0);
    tracep->pushNamePrefix("DIP ");
    tracep->declBit(c+47,"is_break", false,-1);
    tracep->declBus(c+113,"inst", false,-1, 31,0);
    tracep->declQuad(c+49,"rf_0", false,-1, 63,0);
    tracep->declQuad(c+51,"rf_1", false,-1, 63,0);
    tracep->declQuad(c+53,"rf_2", false,-1, 63,0);
    tracep->declQuad(c+55,"rf_3", false,-1, 63,0);
    tracep->declQuad(c+57,"rf_4", false,-1, 63,0);
    tracep->declQuad(c+59,"rf_5", false,-1, 63,0);
    tracep->declQuad(c+61,"rf_6", false,-1, 63,0);
    tracep->declQuad(c+63,"rf_7", false,-1, 63,0);
    tracep->declQuad(c+65,"rf_8", false,-1, 63,0);
    tracep->declQuad(c+67,"rf_9", false,-1, 63,0);
    tracep->declQuad(c+69,"rf_10", false,-1, 63,0);
    tracep->declQuad(c+71,"rf_11", false,-1, 63,0);
    tracep->declQuad(c+73,"rf_12", false,-1, 63,0);
    tracep->declQuad(c+75,"rf_13", false,-1, 63,0);
    tracep->declQuad(c+77,"rf_14", false,-1, 63,0);
    tracep->declQuad(c+79,"rf_15", false,-1, 63,0);
    tracep->declQuad(c+81,"rf_16", false,-1, 63,0);
    tracep->declQuad(c+83,"rf_17", false,-1, 63,0);
    tracep->declQuad(c+85,"rf_18", false,-1, 63,0);
    tracep->declQuad(c+87,"rf_19", false,-1, 63,0);
    tracep->declQuad(c+89,"rf_20", false,-1, 63,0);
    tracep->declQuad(c+91,"rf_21", false,-1, 63,0);
    tracep->declQuad(c+93,"rf_22", false,-1, 63,0);
    tracep->declQuad(c+95,"rf_23", false,-1, 63,0);
    tracep->declQuad(c+97,"rf_24", false,-1, 63,0);
    tracep->declQuad(c+99,"rf_25", false,-1, 63,0);
    tracep->declQuad(c+101,"rf_26", false,-1, 63,0);
    tracep->declQuad(c+103,"rf_27", false,-1, 63,0);
    tracep->declQuad(c+105,"rf_28", false,-1, 63,0);
    tracep->declQuad(c+107,"rf_29", false,-1, 63,0);
    tracep->declQuad(c+109,"rf_30", false,-1, 63,0);
    tracep->declQuad(c+111,"rf_31", false,-1, 63,0);
    tracep->declBit(c+116,"inst_valid", false,-1);
    tracep->declQuad(c+114,"pc", false,-1, 63,0);
    tracep->declQuad(c+117,"dnpc", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+235+i*2,"rf", true,(i+0), 63,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+299+i*1,"IN", true,(i+0), 31,0);
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
    tracep->declBit(c+39,"io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+27,"io_out_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+28,"io_out_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+36,"io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+38,"io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+3,"io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+29,"io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+40,"io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+41,"io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+43,"io_out_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+45,"io_out_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+34,"io_out_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declBit(c+47,"io_is_break", false,-1);
    tracep->declBit(c+48,"io_is_flush", false,-1);
    tracep->declQuad(c+305,"src1", false,-1, 63,0);
    tracep->declQuad(c+307,"src2", false,-1, 63,0);
    tracep->declBit(c+309,"alu_result_sign", false,-1);
    tracep->declBit(c+310,"alu_result_sign_2", false,-1);
    tracep->declBit(c+311,"alu_result_sign_3", false,-1);
    tracep->declBit(c+312,"alu_result_sign_4", false,-1);
    tracep->declBit(c+313,"alu_result_sign_5", false,-1);
    tracep->declBit(c+314,"alu_result_sign_6", false,-1);
    tracep->declBit(c+315,"alu_result_sign_7", false,-1);
    tracep->declQuad(c+316,"alu_result", false,-1, 63,0);
    tracep->declBit(c+318,"shift_result_sign", false,-1);
    tracep->declBit(c+319,"shift_result_sign_1", false,-1);
    tracep->declBit(c+320,"shift_result_sign_2", false,-1);
    tracep->declBit(c+321,"shift_result_sign_3", false,-1);
    tracep->declQuad(c+322,"compar_result", false,-1, 63,0);
    tracep->declQuad(c+324,"jump_result", false,-1, 63,0);
    tracep->declQuad(c+326,"shift_result", false,-1, 63,0);
    tracep->declQuad(c+328,"branch_result", false,-1, 63,0);
    tracep->declBit(c+330,"branch_flag", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ID ");
    tracep->declBit(c+7,"io_in_valid", false,-1);
    tracep->declQuad(c+8,"io_in_bits_PC", false,-1, 63,0);
    tracep->declBus(c+10,"io_in_bits_Inst", false,-1, 31,0);
    tracep->declQuad(c+356,"io_REG1", false,-1, 63,0);
    tracep->declQuad(c+358,"io_REG2", false,-1, 63,0);
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
    tracep->declQuad(c+356,"io_out_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+358,"io_out_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+20,"io_out_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declQuad(c+8,"io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+10,"io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declBus(c+19,"rd", false,-1, 4,0);
    tracep->declBus(c+331,"Inst_decode_0", false,-1, 3,0);
    tracep->declBus(c+18,"Inst_decode_2", false,-1, 6,0);
    tracep->declBit(c+332,"Inst_decode_3", false,-1);
    tracep->declBus(c+333,"srctype1", false,-1, 1,0);
    tracep->declBit(c+334,"srctype2", false,-1);
    tracep->declBit(c+335,"sign", false,-1);
    tracep->declBit(c+336,"sign_1", false,-1);
    tracep->declBit(c+337,"sign_2", false,-1);
    tracep->declBit(c+337,"sign_3", false,-1);
    tracep->declBit(c+335,"sign_4", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IF ");
    tracep->declBit(c+350,"clock", false,-1);
    tracep->declBit(c+351,"reset", false,-1);
    tracep->declBit(c+1,"io_branch_io_is_branch", false,-1);
    tracep->declBit(c+2,"io_branch_io_is_jump", false,-1);
    tracep->declQuad(c+3,"io_branch_io_dnpc", false,-1, 63,0);
    tracep->declBus(c+355,"io_inst", false,-1, 31,0);
    tracep->declQuad(c+5,"io_out_bits_PC", false,-1, 63,0);
    tracep->declBus(c+355,"io_out_bits_Inst", false,-1, 31,0);
    tracep->declQuad(c+5,"temp", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IFM ");
    tracep->declBit(c+351,"reset", false,-1);
    tracep->declBit(c+350,"clk", false,-1);
    tracep->declQuad(c+5,"pc", false,-1, 63,0);
    tracep->declBus(c+355,"inst", false,-1, 31,0);
    tracep->declQuad(c+344,"rdata", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MEM ");
    tracep->declBit(c+198,"io_in_valid", false,-1);
    tracep->declBus(c+199,"io_in_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+200,"io_in_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+201,"io_in_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+202,"io_in_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+203,"io_in_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+205,"io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+206,"io_in_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+208,"io_in_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declQuad(c+209,"io_in_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+211,"io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+213,"io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+215,"io_in_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declBit(c+198,"io_out_valid", false,-1);
    tracep->declBit(c+217,"io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+201,"io_out_bits_ctrl_signal_rfWen", false,-1);
    tracep->declQuad(c+203,"io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+205,"io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+206,"io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+208,"io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+218,"io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+342,"io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+191,"io_mem_addr", false,-1, 63,0);
    tracep->declQuad(c+340,"io_mem_rdata", false,-1, 63,0);
    tracep->declQuad(c+195,"io_mem_wdata", false,-1, 63,0);
    tracep->declBus(c+197,"io_mem_wmask", false,-1, 7,0);
    tracep->declBit(c+194,"io_mem_ce", false,-1);
    tracep->declBit(c+193,"io_mem_we", false,-1);
    tracep->declQuad(c+338,"addr_temp", false,-1, 63,0);
    tracep->declBit(c+346,"mem_result_sign", false,-1);
    tracep->declBit(c+347,"mem_result_sign_1", false,-1);
    tracep->declBit(c+348,"mem_result_sign_2", false,-1);
    tracep->declBit(c+349,"mem_result_sign_3", false,-1);
    tracep->declQuad(c+360,"mem_result", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WB ");
    tracep->declBit(c+219,"io_in_valid", false,-1);
    tracep->declBit(c+220,"io_in_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+221,"io_in_bits_ctrl_signal_rfWen", false,-1);
    tracep->declQuad(c+222,"io_in_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+224,"io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+225,"io_in_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+189,"io_in_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declQuad(c+227,"io_in_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declBit(c+229,"io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declQuad(c+222,"io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+224,"io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+225,"io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+189,"io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+190,"io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+227,"io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("bypass ");
    tracep->declBus(c+29,"io_EX_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+40,"io_EX_rf_rfWen", false,-1);
    tracep->declQuad(c+41,"io_EX_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+208,"io_MEM_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+218,"io_MEM_rf_rfWen", false,-1);
    tracep->declQuad(c+342,"io_MEM_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+189,"io_WB_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+190,"io_WB_rf_rfWen", false,-1);
    tracep->declQuad(c+227,"io_WB_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+230,"io_Reg1", false,-1, 63,0);
    tracep->declBus(c+15,"io_reg_index1", false,-1, 4,0);
    tracep->declQuad(c+232,"io_Reg2", false,-1, 63,0);
    tracep->declBus(c+16,"io_reg_index2", false,-1, 4,0);
    tracep->declQuad(c+356,"io_Bypass_REG1", false,-1, 63,0);
    tracep->declQuad(c+358,"io_Bypass_REG2", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem ");
    tracep->declBit(c+351,"reset", false,-1);
    tracep->declBit(c+350,"clk", false,-1);
    tracep->declQuad(c+191,"addr", false,-1, 63,0);
    tracep->declBit(c+193,"we", false,-1);
    tracep->declBit(c+194,"ce", false,-1);
    tracep->declQuad(c+195,"wdata", false,-1, 63,0);
    tracep->declQuad(c+340,"rdata", false,-1, 63,0);
    tracep->declBus(c+197,"wmask", false,-1, 7,0);
=======
    tracep->declBit(c+363,"clock", false,-1);
    tracep->declBit(c+364,"reset", false,-1);
    tracep->declQuad(c+365,"io_pc", false,-1, 63,0);
    tracep->declBus(c+367,"io_inst", false,-1, 31,0);
    tracep->pushNamePrefix("CoreTop ");
    tracep->declBit(c+363,"clock", false,-1);
    tracep->declBit(c+364,"reset", false,-1);
    tracep->declQuad(c+365,"io_pc", false,-1, 63,0);
    tracep->declBus(c+367,"io_inst", false,-1, 31,0);
    tracep->declBit(c+363,"IF_clock", false,-1);
    tracep->declBit(c+364,"IF_reset", false,-1);
    tracep->declBit(c+310,"IF_io_branch_io_is_branch", false,-1);
    tracep->declBit(c+1,"IF_io_branch_io_is_jump", false,-1);
    tracep->declQuad(c+311,"IF_io_branch_io_dnpc", false,-1, 63,0);
    tracep->declBus(c+313,"IF_io_inst", false,-1, 31,0);
    tracep->declQuad(c+2,"IF_io_out_bits_PC", false,-1, 63,0);
    tracep->declBus(c+313,"IF_io_out_bits_Inst", false,-1, 31,0);
    tracep->declBit(c+364,"IFM_reset", false,-1);
    tracep->declBit(c+363,"IFM_clk", false,-1);
    tracep->declQuad(c+2,"IFM_pc", false,-1, 63,0);
    tracep->declBus(c+313,"IFM_inst", false,-1, 31,0);
    tracep->declBit(c+4,"ID_io_in_valid", false,-1);
    tracep->declQuad(c+5,"ID_io_in_bits_PC", false,-1, 63,0);
    tracep->declBus(c+7,"ID_io_in_bits_Inst", false,-1, 31,0);
    tracep->declQuad(c+314,"ID_io_REG1", false,-1, 63,0);
    tracep->declQuad(c+316,"ID_io_REG2", false,-1, 63,0);
    tracep->declBit(c+4,"ID_io_out_valid", false,-1);
    tracep->declBus(c+8,"ID_io_out_bits_ctrl_signal_src1Type", false,-1, 2,0);
    tracep->declBus(c+9,"ID_io_out_bits_ctrl_signal_src2Type", false,-1, 2,0);
    tracep->declBus(c+10,"ID_io_out_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+11,"ID_io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBus(c+12,"ID_io_out_bits_ctrl_signal_rfSrc1", false,-1, 4,0);
    tracep->declBus(c+13,"ID_io_out_bits_ctrl_signal_rfSrc2", false,-1, 4,0);
    tracep->declBit(c+14,"ID_io_out_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+15,"ID_io_out_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declBus(c+16,"ID_io_out_bits_ctrl_signal_rfDest", false,-1, 4,0);
    tracep->declQuad(c+314,"ID_io_out_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+316,"ID_io_out_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+17,"ID_io_out_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declQuad(c+5,"ID_io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+7,"ID_io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declBit(c+19,"EX_io_in_valid", false,-1);
    tracep->declBus(c+20,"EX_io_in_bits_ctrl_signal_src1Type", false,-1, 2,0);
    tracep->declBus(c+21,"EX_io_in_bits_ctrl_signal_src2Type", false,-1, 2,0);
    tracep->declBus(c+22,"EX_io_in_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+23,"EX_io_in_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBus(c+24,"EX_io_in_bits_ctrl_signal_rfSrc1", false,-1, 4,0);
    tracep->declBus(c+25,"EX_io_in_bits_ctrl_signal_rfSrc2", false,-1, 4,0);
    tracep->declBit(c+26,"EX_io_in_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+27,"EX_io_in_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declBus(c+28,"EX_io_in_bits_ctrl_signal_rfDest", false,-1, 4,0);
    tracep->declQuad(c+29,"EX_io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+31,"EX_io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+33,"EX_io_in_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declQuad(c+35,"EX_io_in_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+37,"EX_io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+330,"EX_io_src1", false,-1, 63,0);
    tracep->declQuad(c+332,"EX_io_src2", false,-1, 63,0);
    tracep->declBit(c+310,"EX_io_branchIO_is_branch", false,-1);
    tracep->declBit(c+1,"EX_io_branchIO_is_jump", false,-1);
    tracep->declQuad(c+311,"EX_io_branchIO_dnpc", false,-1, 63,0);
    tracep->declBit(c+19,"EX_io_out_valid", false,-1);
    tracep->declBus(c+22,"EX_io_out_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+38,"EX_io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+26,"EX_io_out_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+27,"EX_io_out_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+35,"EX_io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+37,"EX_io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+311,"EX_io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+28,"EX_io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+39,"EX_io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+334,"EX_io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+318,"EX_io_out_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+320,"EX_io_out_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+33,"EX_io_out_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declBit(c+40,"EX_io_is_break", false,-1);
    tracep->declBit(c+336,"EX_io_is_flush", false,-1);
    tracep->declBit(c+40,"DIP_is_break", false,-1);
    tracep->declQuad(c+41,"DIP_rf_0", false,-1, 63,0);
    tracep->declQuad(c+43,"DIP_rf_1", false,-1, 63,0);
    tracep->declQuad(c+45,"DIP_rf_2", false,-1, 63,0);
    tracep->declQuad(c+47,"DIP_rf_3", false,-1, 63,0);
    tracep->declQuad(c+49,"DIP_rf_4", false,-1, 63,0);
    tracep->declQuad(c+51,"DIP_rf_5", false,-1, 63,0);
    tracep->declQuad(c+53,"DIP_rf_6", false,-1, 63,0);
    tracep->declQuad(c+55,"DIP_rf_7", false,-1, 63,0);
    tracep->declQuad(c+57,"DIP_rf_8", false,-1, 63,0);
    tracep->declQuad(c+59,"DIP_rf_9", false,-1, 63,0);
    tracep->declQuad(c+61,"DIP_rf_10", false,-1, 63,0);
    tracep->declQuad(c+63,"DIP_rf_11", false,-1, 63,0);
    tracep->declQuad(c+65,"DIP_rf_12", false,-1, 63,0);
    tracep->declQuad(c+67,"DIP_rf_13", false,-1, 63,0);
    tracep->declQuad(c+69,"DIP_rf_14", false,-1, 63,0);
    tracep->declQuad(c+71,"DIP_rf_15", false,-1, 63,0);
    tracep->declQuad(c+73,"DIP_rf_16", false,-1, 63,0);
    tracep->declQuad(c+75,"DIP_rf_17", false,-1, 63,0);
    tracep->declQuad(c+77,"DIP_rf_18", false,-1, 63,0);
    tracep->declQuad(c+79,"DIP_rf_19", false,-1, 63,0);
    tracep->declQuad(c+81,"DIP_rf_20", false,-1, 63,0);
    tracep->declQuad(c+83,"DIP_rf_21", false,-1, 63,0);
    tracep->declQuad(c+85,"DIP_rf_22", false,-1, 63,0);
    tracep->declQuad(c+87,"DIP_rf_23", false,-1, 63,0);
    tracep->declQuad(c+89,"DIP_rf_24", false,-1, 63,0);
    tracep->declQuad(c+91,"DIP_rf_25", false,-1, 63,0);
    tracep->declQuad(c+93,"DIP_rf_26", false,-1, 63,0);
    tracep->declQuad(c+95,"DIP_rf_27", false,-1, 63,0);
    tracep->declQuad(c+97,"DIP_rf_28", false,-1, 63,0);
    tracep->declQuad(c+99,"DIP_rf_29", false,-1, 63,0);
    tracep->declQuad(c+101,"DIP_rf_30", false,-1, 63,0);
    tracep->declQuad(c+103,"DIP_rf_31", false,-1, 63,0);
    tracep->declBus(c+105,"DIP_inst", false,-1, 31,0);
    tracep->declQuad(c+106,"DIP_pc", false,-1, 63,0);
    tracep->declBit(c+108,"DIP_inst_valid", false,-1);
    tracep->declQuad(c+109,"DIP_dnpc", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+111+i*2,"rf", true,(i+0), 63,0);
    }
    tracep->declBit(c+368,"rf_bypass_io_Reg1_MPORT_en", false,-1);
    tracep->declBus(c+12,"rf_bypass_io_Reg1_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+175,"rf_bypass_io_Reg1_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+368,"rf_bypass_io_Reg2_MPORT_en", false,-1);
    tracep->declBus(c+13,"rf_bypass_io_Reg2_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+177,"rf_bypass_io_Reg2_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+368,"rf_DIP_io_rf_0_MPORT_en", false,-1);
    tracep->declBus(c+369,"rf_DIP_io_rf_0_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+41,"rf_DIP_io_rf_0_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+368,"rf_DIP_io_rf_1_MPORT_en", false,-1);
    tracep->declBus(c+370,"rf_DIP_io_rf_1_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+43,"rf_DIP_io_rf_1_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+368,"rf_DIP_io_rf_2_MPORT_en", false,-1);
    tracep->declBus(c+371,"rf_DIP_io_rf_2_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+45,"rf_DIP_io_rf_2_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+368,"rf_DIP_io_rf_3_MPORT_en", false,-1);
    tracep->declBus(c+372,"rf_DIP_io_rf_3_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+47,"rf_DIP_io_rf_3_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+368,"rf_DIP_io_rf_4_MPORT_en", false,-1);
    tracep->declBus(c+373,"rf_DIP_io_rf_4_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+49,"rf_DIP_io_rf_4_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+368,"rf_DIP_io_rf_5_MPORT_en", false,-1);
    tracep->declBus(c+374,"rf_DIP_io_rf_5_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+51,"rf_DIP_io_rf_5_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+368,"rf_DIP_io_rf_6_MPORT_en", false,-1);
    tracep->declBus(c+375,"rf_DIP_io_rf_6_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+53,"rf_DIP_io_rf_6_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+368,"rf_DIP_io_rf_7_MPORT_en", false,-1);
    tracep->declBus(c+376,"rf_DIP_io_rf_7_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+55,"rf_DIP_io_rf_7_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+368,"rf_DIP_io_rf_8_MPORT_en", false,-1);
    tracep->declBus(c+377,"rf_DIP_io_rf_8_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+57,"rf_DIP_io_rf_8_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+368,"rf_DIP_io_rf_9_MPORT_en", false,-1);
    tracep->declBus(c+378,"rf_DIP_io_rf_9_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+59,"rf_DIP_io_rf_9_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+368,"rf_DIP_io_rf_10_MPORT_en", false,-1);
    tracep->declBus(c+379,"rf_DIP_io_rf_10_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+61,"rf_DIP_io_rf_10_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+368,"rf_DIP_io_rf_11_MPORT_en", false,-1);
    tracep->declBus(c+380,"rf_DIP_io_rf_11_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+63,"rf_DIP_io_rf_11_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+368,"rf_DIP_io_rf_12_MPORT_en", false,-1);
    tracep->declBus(c+381,"rf_DIP_io_rf_12_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+65,"rf_DIP_io_rf_12_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+368,"rf_DIP_io_rf_13_MPORT_en", false,-1);
    tracep->declBus(c+382,"rf_DIP_io_rf_13_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+67,"rf_DIP_io_rf_13_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+368,"rf_DIP_io_rf_14_MPORT_en", false,-1);
    tracep->declBus(c+383,"rf_DIP_io_rf_14_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+69,"rf_DIP_io_rf_14_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+368,"rf_DIP_io_rf_15_MPORT_en", false,-1);
    tracep->declBus(c+384,"rf_DIP_io_rf_15_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+71,"rf_DIP_io_rf_15_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+368,"rf_DIP_io_rf_16_MPORT_en", false,-1);
    tracep->declBus(c+385,"rf_DIP_io_rf_16_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+73,"rf_DIP_io_rf_16_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+368,"rf_DIP_io_rf_17_MPORT_en", false,-1);
    tracep->declBus(c+386,"rf_DIP_io_rf_17_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+75,"rf_DIP_io_rf_17_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+368,"rf_DIP_io_rf_18_MPORT_en", false,-1);
    tracep->declBus(c+387,"rf_DIP_io_rf_18_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+77,"rf_DIP_io_rf_18_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+368,"rf_DIP_io_rf_19_MPORT_en", false,-1);
    tracep->declBus(c+388,"rf_DIP_io_rf_19_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+79,"rf_DIP_io_rf_19_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+368,"rf_DIP_io_rf_20_MPORT_en", false,-1);
    tracep->declBus(c+389,"rf_DIP_io_rf_20_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+81,"rf_DIP_io_rf_20_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+368,"rf_DIP_io_rf_21_MPORT_en", false,-1);
    tracep->declBus(c+390,"rf_DIP_io_rf_21_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+83,"rf_DIP_io_rf_21_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+368,"rf_DIP_io_rf_22_MPORT_en", false,-1);
    tracep->declBus(c+391,"rf_DIP_io_rf_22_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+85,"rf_DIP_io_rf_22_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+368,"rf_DIP_io_rf_23_MPORT_en", false,-1);
    tracep->declBus(c+392,"rf_DIP_io_rf_23_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+87,"rf_DIP_io_rf_23_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+368,"rf_DIP_io_rf_24_MPORT_en", false,-1);
    tracep->declBus(c+393,"rf_DIP_io_rf_24_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+89,"rf_DIP_io_rf_24_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+368,"rf_DIP_io_rf_25_MPORT_en", false,-1);
    tracep->declBus(c+394,"rf_DIP_io_rf_25_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+91,"rf_DIP_io_rf_25_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+368,"rf_DIP_io_rf_26_MPORT_en", false,-1);
    tracep->declBus(c+395,"rf_DIP_io_rf_26_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+93,"rf_DIP_io_rf_26_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+368,"rf_DIP_io_rf_27_MPORT_en", false,-1);
    tracep->declBus(c+396,"rf_DIP_io_rf_27_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+95,"rf_DIP_io_rf_27_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+368,"rf_DIP_io_rf_28_MPORT_en", false,-1);
    tracep->declBus(c+397,"rf_DIP_io_rf_28_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+97,"rf_DIP_io_rf_28_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+368,"rf_DIP_io_rf_29_MPORT_en", false,-1);
    tracep->declBus(c+398,"rf_DIP_io_rf_29_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+99,"rf_DIP_io_rf_29_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+368,"rf_DIP_io_rf_30_MPORT_en", false,-1);
    tracep->declBus(c+399,"rf_DIP_io_rf_30_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+101,"rf_DIP_io_rf_30_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+368,"rf_DIP_io_rf_31_MPORT_en", false,-1);
    tracep->declBus(c+400,"rf_DIP_io_rf_31_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+103,"rf_DIP_io_rf_31_MPORT_data", false,-1, 63,0);
    tracep->declQuad(c+179,"rf_MPORT_data", false,-1, 63,0);
    tracep->declBus(c+181,"rf_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+368,"rf_MPORT_mask", false,-1);
    tracep->declBit(c+182,"rf_MPORT_en", false,-1);
    tracep->declQuad(c+183,"mem_addr", false,-1, 63,0);
    tracep->declBit(c+364,"mem_reset", false,-1);
    tracep->declBit(c+363,"mem_clk", false,-1);
    tracep->declBit(c+185,"mem_we", false,-1);
    tracep->declBit(c+186,"mem_ce", false,-1);
    tracep->declQuad(c+187,"mem_wdata", false,-1, 63,0);
    tracep->declQuad(c+337,"mem_rdata", false,-1, 63,0);
    tracep->declBus(c+189,"mem_wmask", false,-1, 7,0);
    tracep->declBit(c+190,"MEM_io_in_valid", false,-1);
    tracep->declBus(c+191,"MEM_io_in_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+192,"MEM_io_in_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+193,"MEM_io_in_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+194,"MEM_io_in_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+195,"MEM_io_in_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+197,"MEM_io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+198,"MEM_io_in_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+200,"MEM_io_in_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declQuad(c+201,"MEM_io_in_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+203,"MEM_io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+205,"MEM_io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+207,"MEM_io_in_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declBit(c+190,"MEM_io_out_valid", false,-1);
    tracep->declBit(c+209,"MEM_io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+193,"MEM_io_out_bits_ctrl_signal_rfWen", false,-1);
    tracep->declQuad(c+195,"MEM_io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+197,"MEM_io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+198,"MEM_io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+200,"MEM_io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+210,"MEM_io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+339,"MEM_io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+183,"MEM_io_mem_addr", false,-1, 63,0);
    tracep->declQuad(c+337,"MEM_io_mem_rdata", false,-1, 63,0);
    tracep->declQuad(c+187,"MEM_io_mem_wdata", false,-1, 63,0);
    tracep->declBus(c+189,"MEM_io_mem_wmask", false,-1, 7,0);
    tracep->declBit(c+186,"MEM_io_mem_ce", false,-1);
    tracep->declBit(c+185,"MEM_io_mem_we", false,-1);
    tracep->declBit(c+211,"WB_io_in_valid", false,-1);
    tracep->declBit(c+212,"WB_io_in_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+213,"WB_io_in_bits_ctrl_signal_rfWen", false,-1);
    tracep->declQuad(c+214,"WB_io_in_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+216,"WB_io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+217,"WB_io_in_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+181,"WB_io_in_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declQuad(c+219,"WB_io_in_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declBit(c+221,"WB_io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declQuad(c+214,"WB_io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+216,"WB_io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+217,"WB_io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+181,"WB_io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+182,"WB_io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+219,"WB_io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+28,"bypass_io_EX_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+39,"bypass_io_EX_rf_rfWen", false,-1);
    tracep->declQuad(c+334,"bypass_io_EX_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+200,"bypass_io_MEM_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+210,"bypass_io_MEM_rf_rfWen", false,-1);
    tracep->declQuad(c+339,"bypass_io_MEM_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+181,"bypass_io_WB_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+182,"bypass_io_WB_rf_rfWen", false,-1);
    tracep->declQuad(c+219,"bypass_io_WB_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+222,"bypass_io_Reg1", false,-1, 63,0);
    tracep->declBus(c+12,"bypass_io_reg_index1", false,-1, 4,0);
    tracep->declQuad(c+224,"bypass_io_Reg2", false,-1, 63,0);
    tracep->declBus(c+13,"bypass_io_reg_index2", false,-1, 4,0);
    tracep->declQuad(c+314,"bypass_io_Bypass_REG1", false,-1, 63,0);
    tracep->declQuad(c+316,"bypass_io_Bypass_REG2", false,-1, 63,0);
    tracep->declBus(c+200,"mem_bypass_io_MEM_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+210,"mem_bypass_io_MEM_rf_rfWen", false,-1);
    tracep->declQuad(c+339,"mem_bypass_io_MEM_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+29,"mem_bypass_io_Reg1", false,-1, 63,0);
    tracep->declBus(c+24,"mem_bypass_io_reg_index1", false,-1, 4,0);
    tracep->declQuad(c+31,"mem_bypass_io_Reg2", false,-1, 63,0);
    tracep->declBus(c+25,"mem_bypass_io_reg_index2", false,-1, 4,0);
    tracep->declQuad(c+330,"mem_bypass_io_Bypass_REG1", false,-1, 63,0);
    tracep->declQuad(c+332,"mem_bypass_io_Bypass_REG2", false,-1, 63,0);
    tracep->declBit(c+4,"valid", false,-1);
    tracep->declQuad(c+5,"ID_io_in_bits_r_PC", false,-1, 63,0);
    tracep->declBus(c+7,"ID_io_in_bits_r_Inst", false,-1, 31,0);
    tracep->declBit(c+19,"valid_1", false,-1);
    tracep->declBus(c+20,"EX_io_in_bits_r_ctrl_signal_src1Type", false,-1, 2,0);
    tracep->declBus(c+21,"EX_io_in_bits_r_ctrl_signal_src2Type", false,-1, 2,0);
    tracep->declBus(c+22,"EX_io_in_bits_r_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+23,"EX_io_in_bits_r_ctrl_signal_inst_valid", false,-1);
    tracep->declBus(c+24,"EX_io_in_bits_r_ctrl_signal_rfSrc1", false,-1, 4,0);
    tracep->declBus(c+25,"EX_io_in_bits_r_ctrl_signal_rfSrc2", false,-1, 4,0);
    tracep->declBit(c+26,"EX_io_in_bits_r_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+27,"EX_io_in_bits_r_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declBus(c+28,"EX_io_in_bits_r_ctrl_signal_rfDest", false,-1, 4,0);
    tracep->declQuad(c+29,"EX_io_in_bits_r_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+31,"EX_io_in_bits_r_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+33,"EX_io_in_bits_r_ctrl_data_Imm", false,-1, 63,0);
    tracep->declQuad(c+35,"EX_io_in_bits_r_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+37,"EX_io_in_bits_r_ctrl_flow_inst", false,-1, 31,0);
    tracep->declBit(c+190,"valid_2", false,-1);
    tracep->declBus(c+191,"MEM_io_in_bits_r_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+192,"MEM_io_in_bits_r_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+193,"MEM_io_in_bits_r_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+194,"MEM_io_in_bits_r_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+195,"MEM_io_in_bits_r_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+197,"MEM_io_in_bits_r_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+198,"MEM_io_in_bits_r_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+200,"MEM_io_in_bits_r_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declQuad(c+201,"MEM_io_in_bits_r_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+203,"MEM_io_in_bits_r_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+205,"MEM_io_in_bits_r_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+207,"MEM_io_in_bits_r_ctrl_data_Imm", false,-1, 63,0);
    tracep->declBit(c+211,"valid_3", false,-1);
    tracep->declBit(c+212,"WB_io_in_bits_r_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+213,"WB_io_in_bits_r_ctrl_signal_rfWen", false,-1);
    tracep->declQuad(c+214,"WB_io_in_bits_r_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+216,"WB_io_in_bits_r_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+217,"WB_io_in_bits_r_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+181,"WB_io_in_bits_r_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declQuad(c+219,"WB_io_in_bits_r_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+105,"DIP_io_inst_REG", false,-1, 31,0);
    tracep->declBit(c+108,"DIP_io_inst_valid_REG", false,-1);
    tracep->declQuad(c+106,"DIP_io_pc_REG", false,-1, 63,0);
    tracep->declQuad(c+109,"DIP_io_dnpc_REG", false,-1, 63,0);
    tracep->declBus(c+226,"io_inst_REG", false,-1, 31,0);
    tracep->pushNamePrefix("DIP ");
    tracep->declBit(c+40,"is_break", false,-1);
    tracep->declBus(c+105,"inst", false,-1, 31,0);
    tracep->declQuad(c+41,"rf_0", false,-1, 63,0);
    tracep->declQuad(c+43,"rf_1", false,-1, 63,0);
    tracep->declQuad(c+45,"rf_2", false,-1, 63,0);
    tracep->declQuad(c+47,"rf_3", false,-1, 63,0);
    tracep->declQuad(c+49,"rf_4", false,-1, 63,0);
    tracep->declQuad(c+51,"rf_5", false,-1, 63,0);
    tracep->declQuad(c+53,"rf_6", false,-1, 63,0);
    tracep->declQuad(c+55,"rf_7", false,-1, 63,0);
    tracep->declQuad(c+57,"rf_8", false,-1, 63,0);
    tracep->declQuad(c+59,"rf_9", false,-1, 63,0);
    tracep->declQuad(c+61,"rf_10", false,-1, 63,0);
    tracep->declQuad(c+63,"rf_11", false,-1, 63,0);
    tracep->declQuad(c+65,"rf_12", false,-1, 63,0);
    tracep->declQuad(c+67,"rf_13", false,-1, 63,0);
    tracep->declQuad(c+69,"rf_14", false,-1, 63,0);
    tracep->declQuad(c+71,"rf_15", false,-1, 63,0);
    tracep->declQuad(c+73,"rf_16", false,-1, 63,0);
    tracep->declQuad(c+75,"rf_17", false,-1, 63,0);
    tracep->declQuad(c+77,"rf_18", false,-1, 63,0);
    tracep->declQuad(c+79,"rf_19", false,-1, 63,0);
    tracep->declQuad(c+81,"rf_20", false,-1, 63,0);
    tracep->declQuad(c+83,"rf_21", false,-1, 63,0);
    tracep->declQuad(c+85,"rf_22", false,-1, 63,0);
    tracep->declQuad(c+87,"rf_23", false,-1, 63,0);
    tracep->declQuad(c+89,"rf_24", false,-1, 63,0);
    tracep->declQuad(c+91,"rf_25", false,-1, 63,0);
    tracep->declQuad(c+93,"rf_26", false,-1, 63,0);
    tracep->declQuad(c+95,"rf_27", false,-1, 63,0);
    tracep->declQuad(c+97,"rf_28", false,-1, 63,0);
    tracep->declQuad(c+99,"rf_29", false,-1, 63,0);
    tracep->declQuad(c+101,"rf_30", false,-1, 63,0);
    tracep->declQuad(c+103,"rf_31", false,-1, 63,0);
    tracep->declBit(c+108,"inst_valid", false,-1);
    tracep->declQuad(c+106,"pc", false,-1, 63,0);
    tracep->declQuad(c+109,"dnpc", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+227+i*2,"rf", true,(i+0), 63,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+291+i*1,"IN", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EX ");
    tracep->declBit(c+19,"io_in_valid", false,-1);
    tracep->declBus(c+20,"io_in_bits_ctrl_signal_src1Type", false,-1, 2,0);
    tracep->declBus(c+21,"io_in_bits_ctrl_signal_src2Type", false,-1, 2,0);
    tracep->declBus(c+22,"io_in_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+23,"io_in_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBus(c+24,"io_in_bits_ctrl_signal_rfSrc1", false,-1, 4,0);
    tracep->declBus(c+25,"io_in_bits_ctrl_signal_rfSrc2", false,-1, 4,0);
    tracep->declBit(c+26,"io_in_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+27,"io_in_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declBus(c+28,"io_in_bits_ctrl_signal_rfDest", false,-1, 4,0);
    tracep->declQuad(c+29,"io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+31,"io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+33,"io_in_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declQuad(c+35,"io_in_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+37,"io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+330,"io_src1", false,-1, 63,0);
    tracep->declQuad(c+332,"io_src2", false,-1, 63,0);
    tracep->declBit(c+310,"io_branchIO_is_branch", false,-1);
    tracep->declBit(c+1,"io_branchIO_is_jump", false,-1);
    tracep->declQuad(c+311,"io_branchIO_dnpc", false,-1, 63,0);
    tracep->declBit(c+19,"io_out_valid", false,-1);
    tracep->declBus(c+22,"io_out_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+38,"io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+26,"io_out_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+27,"io_out_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+35,"io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+37,"io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+311,"io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+28,"io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+39,"io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+334,"io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+318,"io_out_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+320,"io_out_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+33,"io_out_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declBit(c+40,"io_is_break", false,-1);
    tracep->declBit(c+336,"io_is_flush", false,-1);
    tracep->declQuad(c+341,"src1", false,-1, 63,0);
    tracep->declQuad(c+343,"src2", false,-1, 63,0);
    tracep->declBit(c+345,"alu_result_sign", false,-1);
    tracep->declBit(c+346,"alu_result_sign_2", false,-1);
    tracep->declBit(c+347,"alu_result_sign_3", false,-1);
    tracep->declBit(c+348,"alu_result_sign_4", false,-1);
    tracep->declBit(c+349,"alu_result_sign_5", false,-1);
    tracep->declBit(c+350,"alu_result_sign_6", false,-1);
    tracep->declBit(c+351,"alu_result_sign_7", false,-1);
    tracep->declQuad(c+322,"alu_result", false,-1, 63,0);
    tracep->declBit(c+352,"shift_result_sign", false,-1);
    tracep->declBit(c+353,"shift_result_sign_1", false,-1);
    tracep->declBit(c+354,"shift_result_sign_2", false,-1);
    tracep->declBit(c+355,"shift_result_sign_3", false,-1);
    tracep->declQuad(c+324,"compar_result", false,-1, 63,0);
    tracep->declQuad(c+297,"jump_result", false,-1, 63,0);
    tracep->declQuad(c+326,"shift_result", false,-1, 63,0);
    tracep->declQuad(c+299,"branch_result", false,-1, 63,0);
    tracep->declBit(c+356,"branch_flag", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ID ");
    tracep->declBit(c+4,"io_in_valid", false,-1);
    tracep->declQuad(c+5,"io_in_bits_PC", false,-1, 63,0);
    tracep->declBus(c+7,"io_in_bits_Inst", false,-1, 31,0);
    tracep->declQuad(c+314,"io_REG1", false,-1, 63,0);
    tracep->declQuad(c+316,"io_REG2", false,-1, 63,0);
    tracep->declBit(c+4,"io_out_valid", false,-1);
    tracep->declBus(c+8,"io_out_bits_ctrl_signal_src1Type", false,-1, 2,0);
    tracep->declBus(c+9,"io_out_bits_ctrl_signal_src2Type", false,-1, 2,0);
    tracep->declBus(c+10,"io_out_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+11,"io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBus(c+12,"io_out_bits_ctrl_signal_rfSrc1", false,-1, 4,0);
    tracep->declBus(c+13,"io_out_bits_ctrl_signal_rfSrc2", false,-1, 4,0);
    tracep->declBit(c+14,"io_out_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+15,"io_out_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declBus(c+16,"io_out_bits_ctrl_signal_rfDest", false,-1, 4,0);
    tracep->declQuad(c+314,"io_out_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+316,"io_out_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+17,"io_out_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declQuad(c+5,"io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+7,"io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declBus(c+16,"rd", false,-1, 4,0);
    tracep->declBus(c+301,"Inst_decode_0", false,-1, 3,0);
    tracep->declBus(c+15,"Inst_decode_2", false,-1, 6,0);
    tracep->declBit(c+302,"Inst_decode_3", false,-1);
    tracep->declBus(c+303,"srctype1", false,-1, 1,0);
    tracep->declBit(c+304,"srctype2", false,-1);
    tracep->declBit(c+305,"sign", false,-1);
    tracep->declBit(c+306,"sign_1", false,-1);
    tracep->declBit(c+307,"sign_2", false,-1);
    tracep->declBit(c+307,"sign_3", false,-1);
    tracep->declBit(c+305,"sign_4", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IF ");
    tracep->declBit(c+363,"clock", false,-1);
    tracep->declBit(c+364,"reset", false,-1);
    tracep->declBit(c+310,"io_branch_io_is_branch", false,-1);
    tracep->declBit(c+1,"io_branch_io_is_jump", false,-1);
    tracep->declQuad(c+311,"io_branch_io_dnpc", false,-1, 63,0);
    tracep->declBus(c+313,"io_inst", false,-1, 31,0);
    tracep->declQuad(c+2,"io_out_bits_PC", false,-1, 63,0);
    tracep->declBus(c+313,"io_out_bits_Inst", false,-1, 31,0);
    tracep->declQuad(c+2,"temp", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IFM ");
    tracep->declBit(c+364,"reset", false,-1);
    tracep->declBit(c+363,"clk", false,-1);
    tracep->declQuad(c+2,"pc", false,-1, 63,0);
    tracep->declBus(c+313,"inst", false,-1, 31,0);
    tracep->declQuad(c+357,"rdata", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MEM ");
    tracep->declBit(c+190,"io_in_valid", false,-1);
    tracep->declBus(c+191,"io_in_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+192,"io_in_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+193,"io_in_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+194,"io_in_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+195,"io_in_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+197,"io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+198,"io_in_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+200,"io_in_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declQuad(c+201,"io_in_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+203,"io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+205,"io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+207,"io_in_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declBit(c+190,"io_out_valid", false,-1);
    tracep->declBit(c+209,"io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+193,"io_out_bits_ctrl_signal_rfWen", false,-1);
    tracep->declQuad(c+195,"io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+197,"io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+198,"io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+200,"io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+210,"io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+339,"io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+183,"io_mem_addr", false,-1, 63,0);
    tracep->declQuad(c+337,"io_mem_rdata", false,-1, 63,0);
    tracep->declQuad(c+187,"io_mem_wdata", false,-1, 63,0);
    tracep->declBus(c+189,"io_mem_wmask", false,-1, 7,0);
    tracep->declBit(c+186,"io_mem_ce", false,-1);
    tracep->declBit(c+185,"io_mem_we", false,-1);
    tracep->declQuad(c+308,"addr_temp", false,-1, 63,0);
    tracep->declBit(c+359,"mem_result_sign", false,-1);
    tracep->declBit(c+360,"mem_result_sign_1", false,-1);
    tracep->declBit(c+361,"mem_result_sign_2", false,-1);
    tracep->declBit(c+362,"mem_result_sign_3", false,-1);
    tracep->declQuad(c+328,"mem_result", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WB ");
    tracep->declBit(c+211,"io_in_valid", false,-1);
    tracep->declBit(c+212,"io_in_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+213,"io_in_bits_ctrl_signal_rfWen", false,-1);
    tracep->declQuad(c+214,"io_in_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+216,"io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+217,"io_in_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+181,"io_in_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declQuad(c+219,"io_in_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declBit(c+221,"io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declQuad(c+214,"io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+216,"io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+217,"io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+181,"io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+182,"io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+219,"io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("bypass ");
    tracep->declBus(c+28,"io_EX_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+39,"io_EX_rf_rfWen", false,-1);
    tracep->declQuad(c+334,"io_EX_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+200,"io_MEM_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+210,"io_MEM_rf_rfWen", false,-1);
    tracep->declQuad(c+339,"io_MEM_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+181,"io_WB_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+182,"io_WB_rf_rfWen", false,-1);
    tracep->declQuad(c+219,"io_WB_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+222,"io_Reg1", false,-1, 63,0);
    tracep->declBus(c+12,"io_reg_index1", false,-1, 4,0);
    tracep->declQuad(c+224,"io_Reg2", false,-1, 63,0);
    tracep->declBus(c+13,"io_reg_index2", false,-1, 4,0);
    tracep->declQuad(c+314,"io_Bypass_REG1", false,-1, 63,0);
    tracep->declQuad(c+316,"io_Bypass_REG2", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem ");
    tracep->declBit(c+364,"reset", false,-1);
    tracep->declBit(c+363,"clk", false,-1);
    tracep->declQuad(c+183,"addr", false,-1, 63,0);
    tracep->declBit(c+185,"we", false,-1);
    tracep->declBit(c+186,"ce", false,-1);
    tracep->declQuad(c+187,"wdata", false,-1, 63,0);
    tracep->declQuad(c+337,"rdata", false,-1, 63,0);
    tracep->declBus(c+189,"wmask", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_bypass ");
    tracep->declBus(c+200,"io_MEM_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+210,"io_MEM_rf_rfWen", false,-1);
    tracep->declQuad(c+339,"io_MEM_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+29,"io_Reg1", false,-1, 63,0);
    tracep->declBus(c+24,"io_reg_index1", false,-1, 4,0);
    tracep->declQuad(c+31,"io_Reg2", false,-1, 63,0);
    tracep->declBus(c+25,"io_reg_index2", false,-1, 4,0);
    tracep->declQuad(c+330,"io_Bypass_REG1", false,-1, 63,0);
    tracep->declQuad(c+332,"io_Bypass_REG2", false,-1, 63,0);
>>>>>>> tracer-ysyx2204
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
<<<<<<< HEAD
    bufp->fullBit(oldp+1,(((IData)(vlSelf->CoreTop__DOT__EX__DOT__branch_flag) 
                           & (IData)(vlSelf->CoreTop__DOT__valid_1))));
    bufp->fullBit(oldp+2,(vlSelf->CoreTop__DOT__EX_io_branchIO_is_jump));
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
=======
    bufp->fullBit(oldp+1,(vlSelf->CoreTop__DOT__EX_io_branchIO_is_jump));
    bufp->fullQData(oldp+2,(vlSelf->CoreTop__DOT__IF__DOT__temp),64);
    bufp->fullBit(oldp+4,(vlSelf->CoreTop__DOT__valid));
    bufp->fullQData(oldp+5,(vlSelf->CoreTop__DOT__ID_io_in_bits_r_PC),64);
    bufp->fullIData(oldp+7,(vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst),32);
    bufp->fullCData(oldp+8,((((7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                               ? 2U : 0U) | ((3U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                              ? 2U : 0U))),3);
    bufp->fullCData(oldp+9,((((8U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)) 
                              | (7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))) 
                             | (3U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)))),3);
    bufp->fullCData(oldp+10,(((0x13U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
>>>>>>> tracer-ysyx2204
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
<<<<<<< HEAD
    bufp->fullBit(oldp+14,((1U & (~ ((0U == ((0x13U 
=======
    bufp->fullBit(oldp+11,((1U & (~ ((0U == ((0x13U 
>>>>>>> tracer-ysyx2204
                                              == (0x707fU 
                                                  & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                              ? 0x40U
                                              : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_316))) 
                                     | (~ (IData)(vlSelf->CoreTop__DOT__valid)))))));
<<<<<<< HEAD
    bufp->fullCData(oldp+15,((0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+16,((0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                       >> 0x14U))),5);
    bufp->fullBit(oldp+17,(((IData)(vlSelf->CoreTop__DOT__valid) 
                            & (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_3))));
    bufp->fullCData(oldp+18,(((0x13U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                               ? 0x40U : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_316))),7);
    bufp->fullCData(oldp+19,((0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                       >> 7U))),5);
    bufp->fullQData(oldp+20,(((((((8U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
=======
    bufp->fullCData(oldp+12,((0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+13,((0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                       >> 0x14U))),5);
    bufp->fullBit(oldp+14,(((IData)(vlSelf->CoreTop__DOT__valid) 
                            & (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_3))));
    bufp->fullCData(oldp+15,(((0x13U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                               ? 0x40U : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_316))),7);
    bufp->fullCData(oldp+16,((0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                       >> 7U))),5);
    bufp->fullQData(oldp+17,(((((((8U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
>>>>>>> tracer-ysyx2204
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
<<<<<<< HEAD
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
    bufp->fullBit(oldp+39,(((IData)(vlSelf->CoreTop__DOT__valid_1) 
                            & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_inst_valid))));
    bufp->fullBit(oldp+40,(vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfWen));
    bufp->fullQData(oldp+41,(vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfData),64);
    bufp->fullQData(oldp+43,(((0U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src1Type))
                               ? vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_src1
                               : vlSelf->CoreTop__DOT__EX__DOT___GEN_1)),64);
    bufp->fullQData(oldp+45,(((0U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src2Type))
                               ? vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_src2
                               : vlSelf->CoreTop__DOT__EX__DOT___GEN_3)),64);
    bufp->fullBit(oldp+47,((0x42U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))));
    bufp->fullBit(oldp+48,(vlSelf->CoreTop__DOT__EX_io_is_flush));
    bufp->fullQData(oldp+49,(vlSelf->CoreTop__DOT__rf
                             [0U]),64);
    bufp->fullQData(oldp+51,(vlSelf->CoreTop__DOT__rf
                             [1U]),64);
    bufp->fullQData(oldp+53,(vlSelf->CoreTop__DOT__rf
                             [2U]),64);
    bufp->fullQData(oldp+55,(vlSelf->CoreTop__DOT__rf
                             [3U]),64);
    bufp->fullQData(oldp+57,(vlSelf->CoreTop__DOT__rf
                             [4U]),64);
    bufp->fullQData(oldp+59,(vlSelf->CoreTop__DOT__rf
                             [5U]),64);
    bufp->fullQData(oldp+61,(vlSelf->CoreTop__DOT__rf
                             [6U]),64);
    bufp->fullQData(oldp+63,(vlSelf->CoreTop__DOT__rf
                             [7U]),64);
    bufp->fullQData(oldp+65,(vlSelf->CoreTop__DOT__rf
                             [8U]),64);
    bufp->fullQData(oldp+67,(vlSelf->CoreTop__DOT__rf
                             [9U]),64);
    bufp->fullQData(oldp+69,(vlSelf->CoreTop__DOT__rf
                             [0xaU]),64);
    bufp->fullQData(oldp+71,(vlSelf->CoreTop__DOT__rf
                             [0xbU]),64);
    bufp->fullQData(oldp+73,(vlSelf->CoreTop__DOT__rf
                             [0xcU]),64);
    bufp->fullQData(oldp+75,(vlSelf->CoreTop__DOT__rf
                             [0xdU]),64);
    bufp->fullQData(oldp+77,(vlSelf->CoreTop__DOT__rf
                             [0xeU]),64);
    bufp->fullQData(oldp+79,(vlSelf->CoreTop__DOT__rf
                             [0xfU]),64);
    bufp->fullQData(oldp+81,(vlSelf->CoreTop__DOT__rf
                             [0x10U]),64);
    bufp->fullQData(oldp+83,(vlSelf->CoreTop__DOT__rf
                             [0x11U]),64);
    bufp->fullQData(oldp+85,(vlSelf->CoreTop__DOT__rf
                             [0x12U]),64);
    bufp->fullQData(oldp+87,(vlSelf->CoreTop__DOT__rf
                             [0x13U]),64);
    bufp->fullQData(oldp+89,(vlSelf->CoreTop__DOT__rf
                             [0x14U]),64);
    bufp->fullQData(oldp+91,(vlSelf->CoreTop__DOT__rf
                             [0x15U]),64);
    bufp->fullQData(oldp+93,(vlSelf->CoreTop__DOT__rf
                             [0x16U]),64);
    bufp->fullQData(oldp+95,(vlSelf->CoreTop__DOT__rf
                             [0x17U]),64);
    bufp->fullQData(oldp+97,(vlSelf->CoreTop__DOT__rf
                             [0x18U]),64);
    bufp->fullQData(oldp+99,(vlSelf->CoreTop__DOT__rf
                             [0x19U]),64);
    bufp->fullQData(oldp+101,(vlSelf->CoreTop__DOT__rf
                              [0x1aU]),64);
    bufp->fullQData(oldp+103,(vlSelf->CoreTop__DOT__rf
                              [0x1bU]),64);
    bufp->fullQData(oldp+105,(vlSelf->CoreTop__DOT__rf
                              [0x1cU]),64);
    bufp->fullQData(oldp+107,(vlSelf->CoreTop__DOT__rf
                              [0x1dU]),64);
    bufp->fullQData(oldp+109,(vlSelf->CoreTop__DOT__rf
                              [0x1eU]),64);
    bufp->fullQData(oldp+111,(vlSelf->CoreTop__DOT__rf
                              [0x1fU]),64);
    bufp->fullIData(oldp+113,(vlSelf->CoreTop__DOT__DIP_io_inst_REG),32);
    bufp->fullQData(oldp+114,(vlSelf->CoreTop__DOT__DIP_io_pc_REG),64);
    bufp->fullBit(oldp+116,(vlSelf->CoreTop__DOT__DIP_io_inst_valid_REG));
    bufp->fullQData(oldp+117,(vlSelf->CoreTop__DOT__DIP_io_dnpc_REG),64);
    bufp->fullQData(oldp+119,(vlSelf->CoreTop__DOT__rf[0]),64);
    bufp->fullQData(oldp+121,(vlSelf->CoreTop__DOT__rf[1]),64);
    bufp->fullQData(oldp+123,(vlSelf->CoreTop__DOT__rf[2]),64);
    bufp->fullQData(oldp+125,(vlSelf->CoreTop__DOT__rf[3]),64);
    bufp->fullQData(oldp+127,(vlSelf->CoreTop__DOT__rf[4]),64);
    bufp->fullQData(oldp+129,(vlSelf->CoreTop__DOT__rf[5]),64);
    bufp->fullQData(oldp+131,(vlSelf->CoreTop__DOT__rf[6]),64);
    bufp->fullQData(oldp+133,(vlSelf->CoreTop__DOT__rf[7]),64);
    bufp->fullQData(oldp+135,(vlSelf->CoreTop__DOT__rf[8]),64);
    bufp->fullQData(oldp+137,(vlSelf->CoreTop__DOT__rf[9]),64);
    bufp->fullQData(oldp+139,(vlSelf->CoreTop__DOT__rf[10]),64);
    bufp->fullQData(oldp+141,(vlSelf->CoreTop__DOT__rf[11]),64);
    bufp->fullQData(oldp+143,(vlSelf->CoreTop__DOT__rf[12]),64);
    bufp->fullQData(oldp+145,(vlSelf->CoreTop__DOT__rf[13]),64);
    bufp->fullQData(oldp+147,(vlSelf->CoreTop__DOT__rf[14]),64);
    bufp->fullQData(oldp+149,(vlSelf->CoreTop__DOT__rf[15]),64);
    bufp->fullQData(oldp+151,(vlSelf->CoreTop__DOT__rf[16]),64);
    bufp->fullQData(oldp+153,(vlSelf->CoreTop__DOT__rf[17]),64);
    bufp->fullQData(oldp+155,(vlSelf->CoreTop__DOT__rf[18]),64);
    bufp->fullQData(oldp+157,(vlSelf->CoreTop__DOT__rf[19]),64);
    bufp->fullQData(oldp+159,(vlSelf->CoreTop__DOT__rf[20]),64);
    bufp->fullQData(oldp+161,(vlSelf->CoreTop__DOT__rf[21]),64);
    bufp->fullQData(oldp+163,(vlSelf->CoreTop__DOT__rf[22]),64);
    bufp->fullQData(oldp+165,(vlSelf->CoreTop__DOT__rf[23]),64);
    bufp->fullQData(oldp+167,(vlSelf->CoreTop__DOT__rf[24]),64);
    bufp->fullQData(oldp+169,(vlSelf->CoreTop__DOT__rf[25]),64);
    bufp->fullQData(oldp+171,(vlSelf->CoreTop__DOT__rf[26]),64);
    bufp->fullQData(oldp+173,(vlSelf->CoreTop__DOT__rf[27]),64);
    bufp->fullQData(oldp+175,(vlSelf->CoreTop__DOT__rf[28]),64);
    bufp->fullQData(oldp+177,(vlSelf->CoreTop__DOT__rf[29]),64);
    bufp->fullQData(oldp+179,(vlSelf->CoreTop__DOT__rf[30]),64);
    bufp->fullQData(oldp+181,(vlSelf->CoreTop__DOT__rf[31]),64);
    bufp->fullQData(oldp+183,(vlSelf->CoreTop__DOT__rf
                              [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                         >> 0xfU))]),64);
    bufp->fullQData(oldp+185,(vlSelf->CoreTop__DOT__rf
                              [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                         >> 0x14U))]),64);
    bufp->fullQData(oldp+187,(((0U == (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest))
                                ? 0ULL : vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfData)),64);
    bufp->fullCData(oldp+189,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest),5);
    bufp->fullBit(oldp+190,(vlSelf->CoreTop__DOT__WB_io_out_bits_ctrl_rf_rfWen));
    bufp->fullQData(oldp+191,(((0x45U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                ? vlSelf->CoreTop__DOT__MEM__DOT___addr_temp_T_1
                                : vlSelf->CoreTop__DOT__MEM__DOT___GEN_16)),64);
    bufp->fullBit(oldp+193,(((0x45U != (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype)) 
=======
    bufp->fullBit(oldp+19,(vlSelf->CoreTop__DOT__valid_1));
    bufp->fullCData(oldp+20,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src1Type),3);
    bufp->fullCData(oldp+21,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src2Type),3);
    bufp->fullCData(oldp+22,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType),3);
    bufp->fullBit(oldp+23,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_inst_valid));
    bufp->fullCData(oldp+24,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfSrc1),5);
    bufp->fullCData(oldp+25,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfSrc2),5);
    bufp->fullBit(oldp+26,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfWen));
    bufp->fullCData(oldp+27,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype),7);
    bufp->fullCData(oldp+28,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest),5);
    bufp->fullQData(oldp+29,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_src1),64);
    bufp->fullQData(oldp+31,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_src2),64);
    bufp->fullQData(oldp+33,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm),64);
    bufp->fullQData(oldp+35,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC),64);
    bufp->fullIData(oldp+37,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_inst),32);
    bufp->fullBit(oldp+38,(((IData)(vlSelf->CoreTop__DOT__valid_1) 
                            & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_inst_valid))));
    bufp->fullBit(oldp+39,(vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfWen));
    bufp->fullBit(oldp+40,((0x42U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))));
    bufp->fullQData(oldp+41,(vlSelf->CoreTop__DOT__rf
                             [0U]),64);
    bufp->fullQData(oldp+43,(vlSelf->CoreTop__DOT__rf
                             [1U]),64);
    bufp->fullQData(oldp+45,(vlSelf->CoreTop__DOT__rf
                             [2U]),64);
    bufp->fullQData(oldp+47,(vlSelf->CoreTop__DOT__rf
                             [3U]),64);
    bufp->fullQData(oldp+49,(vlSelf->CoreTop__DOT__rf
                             [4U]),64);
    bufp->fullQData(oldp+51,(vlSelf->CoreTop__DOT__rf
                             [5U]),64);
    bufp->fullQData(oldp+53,(vlSelf->CoreTop__DOT__rf
                             [6U]),64);
    bufp->fullQData(oldp+55,(vlSelf->CoreTop__DOT__rf
                             [7U]),64);
    bufp->fullQData(oldp+57,(vlSelf->CoreTop__DOT__rf
                             [8U]),64);
    bufp->fullQData(oldp+59,(vlSelf->CoreTop__DOT__rf
                             [9U]),64);
    bufp->fullQData(oldp+61,(vlSelf->CoreTop__DOT__rf
                             [0xaU]),64);
    bufp->fullQData(oldp+63,(vlSelf->CoreTop__DOT__rf
                             [0xbU]),64);
    bufp->fullQData(oldp+65,(vlSelf->CoreTop__DOT__rf
                             [0xcU]),64);
    bufp->fullQData(oldp+67,(vlSelf->CoreTop__DOT__rf
                             [0xdU]),64);
    bufp->fullQData(oldp+69,(vlSelf->CoreTop__DOT__rf
                             [0xeU]),64);
    bufp->fullQData(oldp+71,(vlSelf->CoreTop__DOT__rf
                             [0xfU]),64);
    bufp->fullQData(oldp+73,(vlSelf->CoreTop__DOT__rf
                             [0x10U]),64);
    bufp->fullQData(oldp+75,(vlSelf->CoreTop__DOT__rf
                             [0x11U]),64);
    bufp->fullQData(oldp+77,(vlSelf->CoreTop__DOT__rf
                             [0x12U]),64);
    bufp->fullQData(oldp+79,(vlSelf->CoreTop__DOT__rf
                             [0x13U]),64);
    bufp->fullQData(oldp+81,(vlSelf->CoreTop__DOT__rf
                             [0x14U]),64);
    bufp->fullQData(oldp+83,(vlSelf->CoreTop__DOT__rf
                             [0x15U]),64);
    bufp->fullQData(oldp+85,(vlSelf->CoreTop__DOT__rf
                             [0x16U]),64);
    bufp->fullQData(oldp+87,(vlSelf->CoreTop__DOT__rf
                             [0x17U]),64);
    bufp->fullQData(oldp+89,(vlSelf->CoreTop__DOT__rf
                             [0x18U]),64);
    bufp->fullQData(oldp+91,(vlSelf->CoreTop__DOT__rf
                             [0x19U]),64);
    bufp->fullQData(oldp+93,(vlSelf->CoreTop__DOT__rf
                             [0x1aU]),64);
    bufp->fullQData(oldp+95,(vlSelf->CoreTop__DOT__rf
                             [0x1bU]),64);
    bufp->fullQData(oldp+97,(vlSelf->CoreTop__DOT__rf
                             [0x1cU]),64);
    bufp->fullQData(oldp+99,(vlSelf->CoreTop__DOT__rf
                             [0x1dU]),64);
    bufp->fullQData(oldp+101,(vlSelf->CoreTop__DOT__rf
                              [0x1eU]),64);
    bufp->fullQData(oldp+103,(vlSelf->CoreTop__DOT__rf
                              [0x1fU]),64);
    bufp->fullIData(oldp+105,(vlSelf->CoreTop__DOT__DIP_io_inst_REG),32);
    bufp->fullQData(oldp+106,(vlSelf->CoreTop__DOT__DIP_io_pc_REG),64);
    bufp->fullBit(oldp+108,(vlSelf->CoreTop__DOT__DIP_io_inst_valid_REG));
    bufp->fullQData(oldp+109,(vlSelf->CoreTop__DOT__DIP_io_dnpc_REG),64);
    bufp->fullQData(oldp+111,(vlSelf->CoreTop__DOT__rf[0]),64);
    bufp->fullQData(oldp+113,(vlSelf->CoreTop__DOT__rf[1]),64);
    bufp->fullQData(oldp+115,(vlSelf->CoreTop__DOT__rf[2]),64);
    bufp->fullQData(oldp+117,(vlSelf->CoreTop__DOT__rf[3]),64);
    bufp->fullQData(oldp+119,(vlSelf->CoreTop__DOT__rf[4]),64);
    bufp->fullQData(oldp+121,(vlSelf->CoreTop__DOT__rf[5]),64);
    bufp->fullQData(oldp+123,(vlSelf->CoreTop__DOT__rf[6]),64);
    bufp->fullQData(oldp+125,(vlSelf->CoreTop__DOT__rf[7]),64);
    bufp->fullQData(oldp+127,(vlSelf->CoreTop__DOT__rf[8]),64);
    bufp->fullQData(oldp+129,(vlSelf->CoreTop__DOT__rf[9]),64);
    bufp->fullQData(oldp+131,(vlSelf->CoreTop__DOT__rf[10]),64);
    bufp->fullQData(oldp+133,(vlSelf->CoreTop__DOT__rf[11]),64);
    bufp->fullQData(oldp+135,(vlSelf->CoreTop__DOT__rf[12]),64);
    bufp->fullQData(oldp+137,(vlSelf->CoreTop__DOT__rf[13]),64);
    bufp->fullQData(oldp+139,(vlSelf->CoreTop__DOT__rf[14]),64);
    bufp->fullQData(oldp+141,(vlSelf->CoreTop__DOT__rf[15]),64);
    bufp->fullQData(oldp+143,(vlSelf->CoreTop__DOT__rf[16]),64);
    bufp->fullQData(oldp+145,(vlSelf->CoreTop__DOT__rf[17]),64);
    bufp->fullQData(oldp+147,(vlSelf->CoreTop__DOT__rf[18]),64);
    bufp->fullQData(oldp+149,(vlSelf->CoreTop__DOT__rf[19]),64);
    bufp->fullQData(oldp+151,(vlSelf->CoreTop__DOT__rf[20]),64);
    bufp->fullQData(oldp+153,(vlSelf->CoreTop__DOT__rf[21]),64);
    bufp->fullQData(oldp+155,(vlSelf->CoreTop__DOT__rf[22]),64);
    bufp->fullQData(oldp+157,(vlSelf->CoreTop__DOT__rf[23]),64);
    bufp->fullQData(oldp+159,(vlSelf->CoreTop__DOT__rf[24]),64);
    bufp->fullQData(oldp+161,(vlSelf->CoreTop__DOT__rf[25]),64);
    bufp->fullQData(oldp+163,(vlSelf->CoreTop__DOT__rf[26]),64);
    bufp->fullQData(oldp+165,(vlSelf->CoreTop__DOT__rf[27]),64);
    bufp->fullQData(oldp+167,(vlSelf->CoreTop__DOT__rf[28]),64);
    bufp->fullQData(oldp+169,(vlSelf->CoreTop__DOT__rf[29]),64);
    bufp->fullQData(oldp+171,(vlSelf->CoreTop__DOT__rf[30]),64);
    bufp->fullQData(oldp+173,(vlSelf->CoreTop__DOT__rf[31]),64);
    bufp->fullQData(oldp+175,(vlSelf->CoreTop__DOT__rf
                              [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                         >> 0xfU))]),64);
    bufp->fullQData(oldp+177,(vlSelf->CoreTop__DOT__rf
                              [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                         >> 0x14U))]),64);
    bufp->fullQData(oldp+179,(((0U == (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest))
                                ? 0ULL : vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfData)),64);
    bufp->fullCData(oldp+181,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest),5);
    bufp->fullBit(oldp+182,(vlSelf->CoreTop__DOT__WB_io_out_bits_ctrl_rf_rfWen));
    bufp->fullQData(oldp+183,(((0x45U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                ? vlSelf->CoreTop__DOT__MEM__DOT___addr_temp_T_1
                                : vlSelf->CoreTop__DOT__MEM__DOT___GEN_16)),64);
    bufp->fullBit(oldp+185,(((0x45U != (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype)) 
>>>>>>> tracer-ysyx2204
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
<<<<<<< HEAD
    bufp->fullBit(oldp+194,(((4U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_fuType)) 
                             & (IData)(vlSelf->CoreTop__DOT__valid_2))));
    bufp->fullQData(oldp+195,(((0x46U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
=======
    bufp->fullBit(oldp+186,(((4U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_fuType)) 
                             & (IData)(vlSelf->CoreTop__DOT__valid_2))));
    bufp->fullQData(oldp+187,(((0x46U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
>>>>>>> tracer-ysyx2204
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
<<<<<<< HEAD
    bufp->fullCData(oldp+197,(((0x46U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                ? 0xffU : (IData)(vlSelf->CoreTop__DOT__MEM__DOT___GEN_32))),8);
    bufp->fullBit(oldp+198,(vlSelf->CoreTop__DOT__valid_2));
    bufp->fullCData(oldp+199,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_fuType),3);
    bufp->fullBit(oldp+200,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_inst_valid));
    bufp->fullBit(oldp+201,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_rfWen));
    bufp->fullCData(oldp+202,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype),7);
    bufp->fullQData(oldp+203,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_PC),64);
    bufp->fullIData(oldp+205,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_inst),32);
    bufp->fullQData(oldp+206,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_Dnpc),64);
    bufp->fullCData(oldp+208,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest),5);
    bufp->fullQData(oldp+209,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfData),64);
    bufp->fullQData(oldp+211,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src1),64);
    bufp->fullQData(oldp+213,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2),64);
    bufp->fullQData(oldp+215,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_Imm),64);
    bufp->fullBit(oldp+217,(((IData)(vlSelf->CoreTop__DOT__valid_2) 
                             & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_inst_valid))));
    bufp->fullBit(oldp+218,(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfWen));
    bufp->fullBit(oldp+219,(vlSelf->CoreTop__DOT__valid_3));
    bufp->fullBit(oldp+220,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_inst_valid));
    bufp->fullBit(oldp+221,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_rfWen));
    bufp->fullQData(oldp+222,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_PC),64);
    bufp->fullIData(oldp+224,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_inst),32);
    bufp->fullQData(oldp+225,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_Dnpc),64);
    bufp->fullQData(oldp+227,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfData),64);
    bufp->fullBit(oldp+229,(((IData)(vlSelf->CoreTop__DOT__valid_3) 
                             & (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_inst_valid))));
    bufp->fullQData(oldp+230,(((0U == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
=======
    bufp->fullCData(oldp+189,(((0x46U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                ? 0xffU : (IData)(vlSelf->CoreTop__DOT__MEM__DOT___GEN_32))),8);
    bufp->fullBit(oldp+190,(vlSelf->CoreTop__DOT__valid_2));
    bufp->fullCData(oldp+191,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_fuType),3);
    bufp->fullBit(oldp+192,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_inst_valid));
    bufp->fullBit(oldp+193,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_rfWen));
    bufp->fullCData(oldp+194,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype),7);
    bufp->fullQData(oldp+195,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_PC),64);
    bufp->fullIData(oldp+197,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_inst),32);
    bufp->fullQData(oldp+198,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_Dnpc),64);
    bufp->fullCData(oldp+200,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest),5);
    bufp->fullQData(oldp+201,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfData),64);
    bufp->fullQData(oldp+203,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src1),64);
    bufp->fullQData(oldp+205,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2),64);
    bufp->fullQData(oldp+207,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_Imm),64);
    bufp->fullBit(oldp+209,(((IData)(vlSelf->CoreTop__DOT__valid_2) 
                             & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_inst_valid))));
    bufp->fullBit(oldp+210,(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfWen));
    bufp->fullBit(oldp+211,(vlSelf->CoreTop__DOT__valid_3));
    bufp->fullBit(oldp+212,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_inst_valid));
    bufp->fullBit(oldp+213,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_rfWen));
    bufp->fullQData(oldp+214,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_PC),64);
    bufp->fullIData(oldp+216,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_inst),32);
    bufp->fullQData(oldp+217,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_Dnpc),64);
    bufp->fullQData(oldp+219,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfData),64);
    bufp->fullBit(oldp+221,(((IData)(vlSelf->CoreTop__DOT__valid_3) 
                             & (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_inst_valid))));
    bufp->fullQData(oldp+222,(((0U == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
>>>>>>> tracer-ysyx2204
                                                >> 0xfU)))
                                ? 0ULL : vlSelf->CoreTop__DOT__rf
                               [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                          >> 0xfU))])),64);
<<<<<<< HEAD
    bufp->fullQData(oldp+232,(((0U == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
=======
    bufp->fullQData(oldp+224,(((0U == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
>>>>>>> tracer-ysyx2204
                                                >> 0x14U)))
                                ? 0ULL : vlSelf->CoreTop__DOT__rf
                               [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                          >> 0x14U))])),64);
<<<<<<< HEAD
    bufp->fullIData(oldp+234,(vlSelf->CoreTop__DOT__io_inst_REG),32);
    bufp->fullQData(oldp+235,(vlSelf->CoreTop__DOT__DIP__DOT__rf[0]),64);
    bufp->fullQData(oldp+237,(vlSelf->CoreTop__DOT__DIP__DOT__rf[1]),64);
    bufp->fullQData(oldp+239,(vlSelf->CoreTop__DOT__DIP__DOT__rf[2]),64);
    bufp->fullQData(oldp+241,(vlSelf->CoreTop__DOT__DIP__DOT__rf[3]),64);
    bufp->fullQData(oldp+243,(vlSelf->CoreTop__DOT__DIP__DOT__rf[4]),64);
    bufp->fullQData(oldp+245,(vlSelf->CoreTop__DOT__DIP__DOT__rf[5]),64);
    bufp->fullQData(oldp+247,(vlSelf->CoreTop__DOT__DIP__DOT__rf[6]),64);
    bufp->fullQData(oldp+249,(vlSelf->CoreTop__DOT__DIP__DOT__rf[7]),64);
    bufp->fullQData(oldp+251,(vlSelf->CoreTop__DOT__DIP__DOT__rf[8]),64);
    bufp->fullQData(oldp+253,(vlSelf->CoreTop__DOT__DIP__DOT__rf[9]),64);
    bufp->fullQData(oldp+255,(vlSelf->CoreTop__DOT__DIP__DOT__rf[10]),64);
    bufp->fullQData(oldp+257,(vlSelf->CoreTop__DOT__DIP__DOT__rf[11]),64);
    bufp->fullQData(oldp+259,(vlSelf->CoreTop__DOT__DIP__DOT__rf[12]),64);
    bufp->fullQData(oldp+261,(vlSelf->CoreTop__DOT__DIP__DOT__rf[13]),64);
    bufp->fullQData(oldp+263,(vlSelf->CoreTop__DOT__DIP__DOT__rf[14]),64);
    bufp->fullQData(oldp+265,(vlSelf->CoreTop__DOT__DIP__DOT__rf[15]),64);
    bufp->fullQData(oldp+267,(vlSelf->CoreTop__DOT__DIP__DOT__rf[16]),64);
    bufp->fullQData(oldp+269,(vlSelf->CoreTop__DOT__DIP__DOT__rf[17]),64);
    bufp->fullQData(oldp+271,(vlSelf->CoreTop__DOT__DIP__DOT__rf[18]),64);
    bufp->fullQData(oldp+273,(vlSelf->CoreTop__DOT__DIP__DOT__rf[19]),64);
    bufp->fullQData(oldp+275,(vlSelf->CoreTop__DOT__DIP__DOT__rf[20]),64);
    bufp->fullQData(oldp+277,(vlSelf->CoreTop__DOT__DIP__DOT__rf[21]),64);
    bufp->fullQData(oldp+279,(vlSelf->CoreTop__DOT__DIP__DOT__rf[22]),64);
    bufp->fullQData(oldp+281,(vlSelf->CoreTop__DOT__DIP__DOT__rf[23]),64);
    bufp->fullQData(oldp+283,(vlSelf->CoreTop__DOT__DIP__DOT__rf[24]),64);
    bufp->fullQData(oldp+285,(vlSelf->CoreTop__DOT__DIP__DOT__rf[25]),64);
    bufp->fullQData(oldp+287,(vlSelf->CoreTop__DOT__DIP__DOT__rf[26]),64);
    bufp->fullQData(oldp+289,(vlSelf->CoreTop__DOT__DIP__DOT__rf[27]),64);
    bufp->fullQData(oldp+291,(vlSelf->CoreTop__DOT__DIP__DOT__rf[28]),64);
    bufp->fullQData(oldp+293,(vlSelf->CoreTop__DOT__DIP__DOT__rf[29]),64);
    bufp->fullQData(oldp+295,(vlSelf->CoreTop__DOT__DIP__DOT__rf[30]),64);
    bufp->fullQData(oldp+297,(vlSelf->CoreTop__DOT__DIP__DOT__rf[31]),64);
    bufp->fullIData(oldp+299,(vlSelf->CoreTop__DOT__DIP__DOT__IN[0]),32);
    bufp->fullIData(oldp+300,(vlSelf->CoreTop__DOT__DIP__DOT__IN[1]),32);
    bufp->fullIData(oldp+301,(vlSelf->CoreTop__DOT__DIP__DOT__IN[2]),32);
    bufp->fullIData(oldp+302,(vlSelf->CoreTop__DOT__DIP__DOT__IN[3]),32);
    bufp->fullIData(oldp+303,(vlSelf->CoreTop__DOT__DIP__DOT__IN[4]),32);
    bufp->fullIData(oldp+304,(vlSelf->CoreTop__DOT__DIP__DOT__IN[5]),32);
    bufp->fullQData(oldp+305,(vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_58),64);
    bufp->fullQData(oldp+307,(vlSelf->CoreTop__DOT__EX__DOT__src2),64);
    bufp->fullBit(oldp+309,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+310,((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_19[0U] 
                             >> 0x1fU)));
    bufp->fullBit(oldp+311,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_28 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+312,((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_38 
                             >> 0x1fU)));
    bufp->fullBit(oldp+313,((vlSelf->CoreTop__DOT__EX__DOT___GEN_22 
                             >> 0x1fU)));
    bufp->fullBit(oldp+314,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_10 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+315,((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_64 
                             >> 0x1fU)));
    bufp->fullQData(oldp+316,(((0x40U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
=======
    bufp->fullIData(oldp+226,(vlSelf->CoreTop__DOT__io_inst_REG),32);
    bufp->fullQData(oldp+227,(vlSelf->CoreTop__DOT__DIP__DOT__rf[0]),64);
    bufp->fullQData(oldp+229,(vlSelf->CoreTop__DOT__DIP__DOT__rf[1]),64);
    bufp->fullQData(oldp+231,(vlSelf->CoreTop__DOT__DIP__DOT__rf[2]),64);
    bufp->fullQData(oldp+233,(vlSelf->CoreTop__DOT__DIP__DOT__rf[3]),64);
    bufp->fullQData(oldp+235,(vlSelf->CoreTop__DOT__DIP__DOT__rf[4]),64);
    bufp->fullQData(oldp+237,(vlSelf->CoreTop__DOT__DIP__DOT__rf[5]),64);
    bufp->fullQData(oldp+239,(vlSelf->CoreTop__DOT__DIP__DOT__rf[6]),64);
    bufp->fullQData(oldp+241,(vlSelf->CoreTop__DOT__DIP__DOT__rf[7]),64);
    bufp->fullQData(oldp+243,(vlSelf->CoreTop__DOT__DIP__DOT__rf[8]),64);
    bufp->fullQData(oldp+245,(vlSelf->CoreTop__DOT__DIP__DOT__rf[9]),64);
    bufp->fullQData(oldp+247,(vlSelf->CoreTop__DOT__DIP__DOT__rf[10]),64);
    bufp->fullQData(oldp+249,(vlSelf->CoreTop__DOT__DIP__DOT__rf[11]),64);
    bufp->fullQData(oldp+251,(vlSelf->CoreTop__DOT__DIP__DOT__rf[12]),64);
    bufp->fullQData(oldp+253,(vlSelf->CoreTop__DOT__DIP__DOT__rf[13]),64);
    bufp->fullQData(oldp+255,(vlSelf->CoreTop__DOT__DIP__DOT__rf[14]),64);
    bufp->fullQData(oldp+257,(vlSelf->CoreTop__DOT__DIP__DOT__rf[15]),64);
    bufp->fullQData(oldp+259,(vlSelf->CoreTop__DOT__DIP__DOT__rf[16]),64);
    bufp->fullQData(oldp+261,(vlSelf->CoreTop__DOT__DIP__DOT__rf[17]),64);
    bufp->fullQData(oldp+263,(vlSelf->CoreTop__DOT__DIP__DOT__rf[18]),64);
    bufp->fullQData(oldp+265,(vlSelf->CoreTop__DOT__DIP__DOT__rf[19]),64);
    bufp->fullQData(oldp+267,(vlSelf->CoreTop__DOT__DIP__DOT__rf[20]),64);
    bufp->fullQData(oldp+269,(vlSelf->CoreTop__DOT__DIP__DOT__rf[21]),64);
    bufp->fullQData(oldp+271,(vlSelf->CoreTop__DOT__DIP__DOT__rf[22]),64);
    bufp->fullQData(oldp+273,(vlSelf->CoreTop__DOT__DIP__DOT__rf[23]),64);
    bufp->fullQData(oldp+275,(vlSelf->CoreTop__DOT__DIP__DOT__rf[24]),64);
    bufp->fullQData(oldp+277,(vlSelf->CoreTop__DOT__DIP__DOT__rf[25]),64);
    bufp->fullQData(oldp+279,(vlSelf->CoreTop__DOT__DIP__DOT__rf[26]),64);
    bufp->fullQData(oldp+281,(vlSelf->CoreTop__DOT__DIP__DOT__rf[27]),64);
    bufp->fullQData(oldp+283,(vlSelf->CoreTop__DOT__DIP__DOT__rf[28]),64);
    bufp->fullQData(oldp+285,(vlSelf->CoreTop__DOT__DIP__DOT__rf[29]),64);
    bufp->fullQData(oldp+287,(vlSelf->CoreTop__DOT__DIP__DOT__rf[30]),64);
    bufp->fullQData(oldp+289,(vlSelf->CoreTop__DOT__DIP__DOT__rf[31]),64);
    bufp->fullIData(oldp+291,(vlSelf->CoreTop__DOT__DIP__DOT__IN[0]),32);
    bufp->fullIData(oldp+292,(vlSelf->CoreTop__DOT__DIP__DOT__IN[1]),32);
    bufp->fullIData(oldp+293,(vlSelf->CoreTop__DOT__DIP__DOT__IN[2]),32);
    bufp->fullIData(oldp+294,(vlSelf->CoreTop__DOT__DIP__DOT__IN[3]),32);
    bufp->fullIData(oldp+295,(vlSelf->CoreTop__DOT__DIP__DOT__IN[4]),32);
    bufp->fullIData(oldp+296,(vlSelf->CoreTop__DOT__DIP__DOT__IN[5]),32);
    bufp->fullQData(oldp+297,(((3U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType))
                                ? (4ULL + vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC)
                                : 0ULL)),64);
    bufp->fullQData(oldp+299,(((0x6bU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
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
    bufp->fullCData(oldp+301,(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0),4);
    bufp->fullBit(oldp+302,(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_3));
    bufp->fullCData(oldp+303,((((7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                 ? 2U : 0U) | ((3U 
                                                == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                                ? 2U
                                                : 0U))),2);
    bufp->fullBit(oldp+304,((((8U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)) 
                              | (7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))) 
                             | (3U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)))));
    bufp->fullBit(oldp+305,((vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                             >> 0x1fU)));
    bufp->fullBit(oldp+306,((1U & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                   >> 0x13U))));
    bufp->fullBit(oldp+307,((vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                             >> 0x1fU)));
    bufp->fullQData(oldp+308,(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp),64);
    bufp->fullBit(oldp+310,(((IData)(vlSelf->CoreTop__DOT__EX__DOT__branch_flag) 
                             & (IData)(vlSelf->CoreTop__DOT__valid_1))));
    bufp->fullQData(oldp+311,(((0x19U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1
                                : vlSelf->CoreTop__DOT__EX__DOT___GEN_60)),64);
    bufp->fullIData(oldp+313,(((1U & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                              >> 2U)))
                                ? (IData)((vlSelf->CoreTop__DOT__IFM__DOT__rdata 
                                           >> 0x20U))
                                : (IData)(vlSelf->CoreTop__DOT__IFM__DOT__rdata))),32);
    bufp->fullQData(oldp+314,(((((IData)(vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfWen) 
                                 & ((IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest) 
                                    == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                 >> 0xfU)))) 
                                & (0U != (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest)))
                                ? vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfData
                                : ((((IData)(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfWen) 
                                     & ((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest) 
                                        == (0x1fU & 
                                            (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                             >> 0xfU)))) 
                                    & (0U != (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest)))
                                    ? vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfData
                                    : ((((IData)(vlSelf->CoreTop__DOT__WB_io_out_bits_ctrl_rf_rfWen) 
                                         & ((IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest) 
                                            == (0x1fU 
                                                & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                   >> 0xfU)))) 
                                        & (0U != (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest)))
                                        ? vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfData
                                        : ((0U == (0x1fU 
                                                   & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                      >> 0xfU)))
                                            ? 0ULL : 
                                           vlSelf->CoreTop__DOT__rf
                                           [(0x1fU 
                                             & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                >> 0xfU))]))))),64);
    bufp->fullQData(oldp+316,(((((IData)(vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfWen) 
                                 & ((IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest) 
                                    == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                 >> 0x14U)))) 
                                & (0U != (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest)))
                                ? vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfData
                                : ((((IData)(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfWen) 
                                     & ((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest) 
                                        == (0x1fU & 
                                            (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                             >> 0x14U)))) 
                                    & (0U != (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest)))
                                    ? vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfData
                                    : ((((IData)(vlSelf->CoreTop__DOT__WB_io_out_bits_ctrl_rf_rfWen) 
                                         & ((IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest) 
                                            == (0x1fU 
                                                & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                   >> 0x14U)))) 
                                        & (0U != (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest)))
                                        ? vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfData
                                        : ((0U == (0x1fU 
                                                   & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                      >> 0x14U)))
                                            ? 0ULL : 
                                           vlSelf->CoreTop__DOT__rf
                                           [(0x1fU 
                                             & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                >> 0x14U))]))))),64);
    bufp->fullQData(oldp+318,(((0U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src1Type))
                                ? vlSelf->CoreTop__DOT__mem_bypass_io_Bypass_REG1
                                : vlSelf->CoreTop__DOT__EX__DOT___GEN_1)),64);
    bufp->fullQData(oldp+320,(((0U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src2Type))
                                ? vlSelf->CoreTop__DOT__mem_bypass_io_Bypass_REG2
                                : vlSelf->CoreTop__DOT__EX__DOT___GEN_3)),64);
    bufp->fullQData(oldp+322,(((0x40U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
>>>>>>> tracer-ysyx2204
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
<<<<<<< HEAD
    bufp->fullBit(oldp+318,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_5[0U] 
                             >> 0x1fU)));
    bufp->fullBit(oldp+319,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_16[0U] 
                             >> 0x1fU)));
    bufp->fullBit(oldp+320,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_25 
                             >> 0x1fU)));
    bufp->fullBit(oldp+321,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_31 
                             >> 0x1fU)));
    bufp->fullQData(oldp+322,(((0x6aU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
=======
    bufp->fullQData(oldp+324,(((0x6aU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
>>>>>>> tracer-ysyx2204
                                ? ((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_58 
                                    < vlSelf->CoreTop__DOT__EX__DOT__src2)
                                    ? 1ULL : 0ULL) : 
                               ((2U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                 ? (VL_LTS_IQQ(64, vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_58, vlSelf->CoreTop__DOT__EX__DOT__src2)
                                     ? 1ULL : 0ULL)
                                 : 0ULL))),64);
<<<<<<< HEAD
    bufp->fullQData(oldp+324,(((3U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType))
                                ? (4ULL + vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC)
                                : 0ULL)),64);
=======
>>>>>>> tracer-ysyx2204
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
    bufp->fullQData(oldp+326,((((QData)((IData)(((0x6eU 
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
<<<<<<< HEAD
    bufp->fullQData(oldp+328,(((0x6bU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
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
    bufp->fullBit(oldp+330,(vlSelf->CoreTop__DOT__EX__DOT__branch_flag));
    bufp->fullCData(oldp+331,(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0),4);
    bufp->fullBit(oldp+332,(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_3));
    bufp->fullCData(oldp+333,((((7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                 ? 2U : 0U) | ((3U 
                                                == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                                ? 2U
                                                : 0U))),2);
    bufp->fullBit(oldp+334,((((8U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)) 
                              | (7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))) 
                             | (3U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)))));
    bufp->fullBit(oldp+335,((vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                             >> 0x1fU)));
    bufp->fullBit(oldp+336,((1U & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                   >> 0x13U))));
    bufp->fullBit(oldp+337,((vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                             >> 0x1fU)));
    bufp->fullQData(oldp+338,(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp),64);
    bufp->fullQData(oldp+340,(vlSelf->CoreTop__DOT__mem_rdata),64);
    bufp->fullQData(oldp+342,(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfData),64);
    bufp->fullQData(oldp+344,(vlSelf->CoreTop__DOT__IFM__DOT__rdata),64);
    bufp->fullBit(oldp+346,((1U & (IData)((vlSelf->CoreTop__DOT__mem_rdata 
                                           >> 0x3fU)))));
    bufp->fullBit(oldp+347,((1U & (IData)((vlSelf->CoreTop__DOT__mem_rdata 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+348,((1U & ((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_27) 
                                   >> 7U))));
    bufp->fullBit(oldp+349,((1U & ((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_44) 
                                   >> 0xfU))));
    bufp->fullBit(oldp+350,(vlSelf->clock));
    bufp->fullBit(oldp+351,(vlSelf->reset));
    bufp->fullQData(oldp+352,(vlSelf->io_pc),64);
    bufp->fullIData(oldp+354,(vlSelf->io_inst),32);
    bufp->fullIData(oldp+355,(((1U & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                              >> 2U)))
                                ? (IData)((vlSelf->CoreTop__DOT__IFM__DOT__rdata 
                                           >> 0x20U))
                                : (IData)(vlSelf->CoreTop__DOT__IFM__DOT__rdata))),32);
    bufp->fullQData(oldp+356,(((((IData)(vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfWen) 
                                 & ((IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest) 
                                    == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                 >> 0xfU)))) 
                                & (0U != (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest)))
                                ? vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfData
                                : ((((IData)(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfWen) 
                                     & ((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest) 
                                        == (0x1fU & 
                                            (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                             >> 0xfU)))) 
                                    & (0U != (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest)))
                                    ? vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfData
                                    : ((((IData)(vlSelf->CoreTop__DOT__WB_io_out_bits_ctrl_rf_rfWen) 
                                         & ((IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest) 
                                            == (0x1fU 
                                                & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                   >> 0xfU)))) 
                                        & (0U != (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest)))
                                        ? vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfData
                                        : ((0U == (0x1fU 
                                                   & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                      >> 0xfU)))
                                            ? 0ULL : 
                                           vlSelf->CoreTop__DOT__rf
                                           [(0x1fU 
                                             & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                >> 0xfU))]))))),64);
    bufp->fullQData(oldp+358,(((((IData)(vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfWen) 
                                 & ((IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest) 
                                    == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                 >> 0x14U)))) 
                                & (0U != (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest)))
                                ? vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfData
                                : ((((IData)(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfWen) 
                                     & ((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest) 
                                        == (0x1fU & 
                                            (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                             >> 0x14U)))) 
                                    & (0U != (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest)))
                                    ? vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfData
                                    : ((((IData)(vlSelf->CoreTop__DOT__WB_io_out_bits_ctrl_rf_rfWen) 
                                         & ((IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest) 
                                            == (0x1fU 
                                                & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                   >> 0x14U)))) 
                                        & (0U != (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest)))
                                        ? vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfData
                                        : ((0U == (0x1fU 
                                                   & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                      >> 0x14U)))
                                            ? 0ULL : 
                                           vlSelf->CoreTop__DOT__rf
                                           [(0x1fU 
                                             & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                >> 0x14U))]))))),64);
    bufp->fullQData(oldp+360,(((0x45U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
=======
    bufp->fullQData(oldp+328,(((0x45U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
>>>>>>> tracer-ysyx2204
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
<<<<<<< HEAD
    bufp->fullBit(oldp+362,(1U));
    bufp->fullCData(oldp+363,(0U),5);
    bufp->fullCData(oldp+364,(1U),5);
    bufp->fullCData(oldp+365,(2U),5);
    bufp->fullCData(oldp+366,(3U),5);
    bufp->fullCData(oldp+367,(4U),5);
    bufp->fullCData(oldp+368,(5U),5);
    bufp->fullCData(oldp+369,(6U),5);
    bufp->fullCData(oldp+370,(7U),5);
    bufp->fullCData(oldp+371,(8U),5);
    bufp->fullCData(oldp+372,(9U),5);
    bufp->fullCData(oldp+373,(0xaU),5);
    bufp->fullCData(oldp+374,(0xbU),5);
    bufp->fullCData(oldp+375,(0xcU),5);
    bufp->fullCData(oldp+376,(0xdU),5);
    bufp->fullCData(oldp+377,(0xeU),5);
    bufp->fullCData(oldp+378,(0xfU),5);
    bufp->fullCData(oldp+379,(0x10U),5);
    bufp->fullCData(oldp+380,(0x11U),5);
    bufp->fullCData(oldp+381,(0x12U),5);
    bufp->fullCData(oldp+382,(0x13U),5);
    bufp->fullCData(oldp+383,(0x14U),5);
    bufp->fullCData(oldp+384,(0x15U),5);
    bufp->fullCData(oldp+385,(0x16U),5);
    bufp->fullCData(oldp+386,(0x17U),5);
    bufp->fullCData(oldp+387,(0x18U),5);
    bufp->fullCData(oldp+388,(0x19U),5);
    bufp->fullCData(oldp+389,(0x1aU),5);
    bufp->fullCData(oldp+390,(0x1bU),5);
    bufp->fullCData(oldp+391,(0x1cU),5);
    bufp->fullCData(oldp+392,(0x1dU),5);
    bufp->fullCData(oldp+393,(0x1eU),5);
    bufp->fullCData(oldp+394,(0x1fU),5);
=======
    bufp->fullQData(oldp+330,(vlSelf->CoreTop__DOT__mem_bypass_io_Bypass_REG1),64);
    bufp->fullQData(oldp+332,(vlSelf->CoreTop__DOT__mem_bypass_io_Bypass_REG2),64);
    bufp->fullQData(oldp+334,(vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfData),64);
    bufp->fullBit(oldp+336,(vlSelf->CoreTop__DOT__EX_io_is_flush));
    bufp->fullQData(oldp+337,(vlSelf->CoreTop__DOT__mem_rdata),64);
    bufp->fullQData(oldp+339,(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfData),64);
    bufp->fullQData(oldp+341,(vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_58),64);
    bufp->fullQData(oldp+343,(vlSelf->CoreTop__DOT__EX__DOT__src2),64);
    bufp->fullBit(oldp+345,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+346,((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_19[0U] 
                             >> 0x1fU)));
    bufp->fullBit(oldp+347,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_28 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+348,((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_38 
                             >> 0x1fU)));
    bufp->fullBit(oldp+349,((vlSelf->CoreTop__DOT__EX__DOT___GEN_22 
                             >> 0x1fU)));
    bufp->fullBit(oldp+350,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_10 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+351,((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_64 
                             >> 0x1fU)));
    bufp->fullBit(oldp+352,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_5[0U] 
                             >> 0x1fU)));
    bufp->fullBit(oldp+353,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_16[0U] 
                             >> 0x1fU)));
    bufp->fullBit(oldp+354,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_25 
                             >> 0x1fU)));
    bufp->fullBit(oldp+355,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_31 
                             >> 0x1fU)));
    bufp->fullBit(oldp+356,(vlSelf->CoreTop__DOT__EX__DOT__branch_flag));
    bufp->fullQData(oldp+357,(vlSelf->CoreTop__DOT__IFM__DOT__rdata),64);
    bufp->fullBit(oldp+359,((1U & (IData)((vlSelf->CoreTop__DOT__mem_rdata 
                                           >> 0x3fU)))));
    bufp->fullBit(oldp+360,((1U & (IData)((vlSelf->CoreTop__DOT__mem_rdata 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+361,((1U & ((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_27) 
                                   >> 7U))));
    bufp->fullBit(oldp+362,((1U & ((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_44) 
                                   >> 0xfU))));
    bufp->fullBit(oldp+363,(vlSelf->clock));
    bufp->fullBit(oldp+364,(vlSelf->reset));
    bufp->fullQData(oldp+365,(vlSelf->io_pc),64);
    bufp->fullIData(oldp+367,(vlSelf->io_inst),32);
    bufp->fullBit(oldp+368,(1U));
    bufp->fullCData(oldp+369,(0U),5);
    bufp->fullCData(oldp+370,(1U),5);
    bufp->fullCData(oldp+371,(2U),5);
    bufp->fullCData(oldp+372,(3U),5);
    bufp->fullCData(oldp+373,(4U),5);
    bufp->fullCData(oldp+374,(5U),5);
    bufp->fullCData(oldp+375,(6U),5);
    bufp->fullCData(oldp+376,(7U),5);
    bufp->fullCData(oldp+377,(8U),5);
    bufp->fullCData(oldp+378,(9U),5);
    bufp->fullCData(oldp+379,(0xaU),5);
    bufp->fullCData(oldp+380,(0xbU),5);
    bufp->fullCData(oldp+381,(0xcU),5);
    bufp->fullCData(oldp+382,(0xdU),5);
    bufp->fullCData(oldp+383,(0xeU),5);
    bufp->fullCData(oldp+384,(0xfU),5);
    bufp->fullCData(oldp+385,(0x10U),5);
    bufp->fullCData(oldp+386,(0x11U),5);
    bufp->fullCData(oldp+387,(0x12U),5);
    bufp->fullCData(oldp+388,(0x13U),5);
    bufp->fullCData(oldp+389,(0x14U),5);
    bufp->fullCData(oldp+390,(0x15U),5);
    bufp->fullCData(oldp+391,(0x16U),5);
    bufp->fullCData(oldp+392,(0x17U),5);
    bufp->fullCData(oldp+393,(0x18U),5);
    bufp->fullCData(oldp+394,(0x19U),5);
    bufp->fullCData(oldp+395,(0x1aU),5);
    bufp->fullCData(oldp+396,(0x1bU),5);
    bufp->fullCData(oldp+397,(0x1cU),5);
    bufp->fullCData(oldp+398,(0x1dU),5);
    bufp->fullCData(oldp+399,(0x1eU),5);
    bufp->fullCData(oldp+400,(0x1fU),5);
>>>>>>> tracer-ysyx2204
}
