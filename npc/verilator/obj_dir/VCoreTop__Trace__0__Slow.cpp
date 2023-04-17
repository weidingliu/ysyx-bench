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
    tracep->declBit(c+339,"clock", false,-1);
    tracep->declBit(c+340,"reset", false,-1);
    tracep->declQuad(c+341,"io_pc", false,-1, 63,0);
    tracep->declBus(c+343,"io_inst", false,-1, 31,0);
    tracep->pushNamePrefix("CoreTop ");
    tracep->declBit(c+339,"clock", false,-1);
    tracep->declBit(c+340,"reset", false,-1);
    tracep->declQuad(c+341,"io_pc", false,-1, 63,0);
    tracep->declBus(c+343,"io_inst", false,-1, 31,0);
    tracep->declBit(c+339,"IF_clock", false,-1);
    tracep->declBit(c+340,"IF_reset", false,-1);
    tracep->declBit(c+1,"IF_io_branch_io_is_branch", false,-1);
    tracep->declBit(c+2,"IF_io_branch_io_is_jump", false,-1);
    tracep->declQuad(c+3,"IF_io_branch_io_dnpc", false,-1, 63,0);
    tracep->declBus(c+344,"IF_io_inst", false,-1, 31,0);
    tracep->declQuad(c+5,"IF_io_out_bits_PC", false,-1, 63,0);
    tracep->declBus(c+344,"IF_io_out_bits_Inst", false,-1, 31,0);
    tracep->declBit(c+340,"IFM_reset", false,-1);
    tracep->declBit(c+339,"IFM_clk", false,-1);
    tracep->declQuad(c+5,"IFM_pc", false,-1, 63,0);
    tracep->declBus(c+344,"IFM_inst", false,-1, 31,0);
    tracep->declQuad(c+7,"ID_io_in_bits_PC", false,-1, 63,0);
    tracep->declBus(c+9,"ID_io_in_bits_Inst", false,-1, 31,0);
    tracep->declQuad(c+345,"ID_io_REG1", false,-1, 63,0);
    tracep->declQuad(c+347,"ID_io_REG2", false,-1, 63,0);
    tracep->declBus(c+10,"ID_io_out_bits_ctrl_signal_src1Type", false,-1, 2,0);
    tracep->declBus(c+11,"ID_io_out_bits_ctrl_signal_src2Type", false,-1, 2,0);
    tracep->declBus(c+12,"ID_io_out_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+13,"ID_io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBus(c+14,"ID_io_out_bits_ctrl_signal_rfSrc1", false,-1, 4,0);
    tracep->declBus(c+15,"ID_io_out_bits_ctrl_signal_rfSrc2", false,-1, 4,0);
    tracep->declBit(c+16,"ID_io_out_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+17,"ID_io_out_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declBus(c+18,"ID_io_out_bits_ctrl_signal_rfDest", false,-1, 4,0);
    tracep->declQuad(c+345,"ID_io_out_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+347,"ID_io_out_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+19,"ID_io_out_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declQuad(c+7,"ID_io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+9,"ID_io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declBus(c+21,"EX_io_in_bits_ctrl_signal_src1Type", false,-1, 2,0);
    tracep->declBus(c+22,"EX_io_in_bits_ctrl_signal_src2Type", false,-1, 2,0);
    tracep->declBus(c+23,"EX_io_in_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+24,"EX_io_in_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+25,"EX_io_in_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+26,"EX_io_in_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declBus(c+27,"EX_io_in_bits_ctrl_signal_rfDest", false,-1, 4,0);
    tracep->declQuad(c+28,"EX_io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+30,"EX_io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+32,"EX_io_in_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declQuad(c+34,"EX_io_in_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+36,"EX_io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declBit(c+1,"EX_io_branchIO_is_branch", false,-1);
    tracep->declBit(c+2,"EX_io_branchIO_is_jump", false,-1);
    tracep->declQuad(c+3,"EX_io_branchIO_dnpc", false,-1, 63,0);
    tracep->declBus(c+23,"EX_io_out_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+24,"EX_io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBus(c+26,"EX_io_out_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+34,"EX_io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+36,"EX_io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+3,"EX_io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+27,"EX_io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+25,"EX_io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+37,"EX_io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+39,"EX_io_out_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+41,"EX_io_out_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+32,"EX_io_out_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declBit(c+43,"EX_io_is_break", false,-1);
    tracep->declBit(c+44,"EX_io_is_flush", false,-1);
    tracep->declBit(c+43,"DIP_is_break", false,-1);
    tracep->declQuad(c+45,"DIP_rf_0", false,-1, 63,0);
    tracep->declQuad(c+47,"DIP_rf_1", false,-1, 63,0);
    tracep->declQuad(c+49,"DIP_rf_2", false,-1, 63,0);
    tracep->declQuad(c+51,"DIP_rf_3", false,-1, 63,0);
    tracep->declQuad(c+53,"DIP_rf_4", false,-1, 63,0);
    tracep->declQuad(c+55,"DIP_rf_5", false,-1, 63,0);
    tracep->declQuad(c+57,"DIP_rf_6", false,-1, 63,0);
    tracep->declQuad(c+59,"DIP_rf_7", false,-1, 63,0);
    tracep->declQuad(c+61,"DIP_rf_8", false,-1, 63,0);
    tracep->declQuad(c+63,"DIP_rf_9", false,-1, 63,0);
    tracep->declQuad(c+65,"DIP_rf_10", false,-1, 63,0);
    tracep->declQuad(c+67,"DIP_rf_11", false,-1, 63,0);
    tracep->declQuad(c+69,"DIP_rf_12", false,-1, 63,0);
    tracep->declQuad(c+71,"DIP_rf_13", false,-1, 63,0);
    tracep->declQuad(c+73,"DIP_rf_14", false,-1, 63,0);
    tracep->declQuad(c+75,"DIP_rf_15", false,-1, 63,0);
    tracep->declQuad(c+77,"DIP_rf_16", false,-1, 63,0);
    tracep->declQuad(c+79,"DIP_rf_17", false,-1, 63,0);
    tracep->declQuad(c+81,"DIP_rf_18", false,-1, 63,0);
    tracep->declQuad(c+83,"DIP_rf_19", false,-1, 63,0);
    tracep->declQuad(c+85,"DIP_rf_20", false,-1, 63,0);
    tracep->declQuad(c+87,"DIP_rf_21", false,-1, 63,0);
    tracep->declQuad(c+89,"DIP_rf_22", false,-1, 63,0);
    tracep->declQuad(c+91,"DIP_rf_23", false,-1, 63,0);
    tracep->declQuad(c+93,"DIP_rf_24", false,-1, 63,0);
    tracep->declQuad(c+95,"DIP_rf_25", false,-1, 63,0);
    tracep->declQuad(c+97,"DIP_rf_26", false,-1, 63,0);
    tracep->declQuad(c+99,"DIP_rf_27", false,-1, 63,0);
    tracep->declQuad(c+101,"DIP_rf_28", false,-1, 63,0);
    tracep->declQuad(c+103,"DIP_rf_29", false,-1, 63,0);
    tracep->declQuad(c+105,"DIP_rf_30", false,-1, 63,0);
    tracep->declQuad(c+107,"DIP_rf_31", false,-1, 63,0);
    tracep->declBus(c+109,"DIP_inst", false,-1, 31,0);
    tracep->declQuad(c+110,"DIP_pc", false,-1, 63,0);
    tracep->declBit(c+112,"DIP_inst_valid", false,-1);
    tracep->declQuad(c+113,"DIP_dnpc", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+115+i*2,"rf", true,(i+0), 63,0);
    }
    tracep->declBit(c+351,"rf_bypass_io_Reg1_MPORT_en", false,-1);
    tracep->declBus(c+14,"rf_bypass_io_Reg1_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+179,"rf_bypass_io_Reg1_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+351,"rf_bypass_io_Reg2_MPORT_en", false,-1);
    tracep->declBus(c+15,"rf_bypass_io_Reg2_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+181,"rf_bypass_io_Reg2_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+351,"rf_DIP_io_rf_0_MPORT_en", false,-1);
    tracep->declBus(c+352,"rf_DIP_io_rf_0_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+45,"rf_DIP_io_rf_0_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+351,"rf_DIP_io_rf_1_MPORT_en", false,-1);
    tracep->declBus(c+353,"rf_DIP_io_rf_1_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+47,"rf_DIP_io_rf_1_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+351,"rf_DIP_io_rf_2_MPORT_en", false,-1);
    tracep->declBus(c+354,"rf_DIP_io_rf_2_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+49,"rf_DIP_io_rf_2_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+351,"rf_DIP_io_rf_3_MPORT_en", false,-1);
    tracep->declBus(c+355,"rf_DIP_io_rf_3_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+51,"rf_DIP_io_rf_3_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+351,"rf_DIP_io_rf_4_MPORT_en", false,-1);
    tracep->declBus(c+356,"rf_DIP_io_rf_4_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+53,"rf_DIP_io_rf_4_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+351,"rf_DIP_io_rf_5_MPORT_en", false,-1);
    tracep->declBus(c+357,"rf_DIP_io_rf_5_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+55,"rf_DIP_io_rf_5_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+351,"rf_DIP_io_rf_6_MPORT_en", false,-1);
    tracep->declBus(c+358,"rf_DIP_io_rf_6_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+57,"rf_DIP_io_rf_6_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+351,"rf_DIP_io_rf_7_MPORT_en", false,-1);
    tracep->declBus(c+359,"rf_DIP_io_rf_7_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+59,"rf_DIP_io_rf_7_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+351,"rf_DIP_io_rf_8_MPORT_en", false,-1);
    tracep->declBus(c+360,"rf_DIP_io_rf_8_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+61,"rf_DIP_io_rf_8_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+351,"rf_DIP_io_rf_9_MPORT_en", false,-1);
    tracep->declBus(c+361,"rf_DIP_io_rf_9_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+63,"rf_DIP_io_rf_9_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+351,"rf_DIP_io_rf_10_MPORT_en", false,-1);
    tracep->declBus(c+362,"rf_DIP_io_rf_10_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+65,"rf_DIP_io_rf_10_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+351,"rf_DIP_io_rf_11_MPORT_en", false,-1);
    tracep->declBus(c+363,"rf_DIP_io_rf_11_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+67,"rf_DIP_io_rf_11_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+351,"rf_DIP_io_rf_12_MPORT_en", false,-1);
    tracep->declBus(c+364,"rf_DIP_io_rf_12_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+69,"rf_DIP_io_rf_12_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+351,"rf_DIP_io_rf_13_MPORT_en", false,-1);
    tracep->declBus(c+365,"rf_DIP_io_rf_13_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+71,"rf_DIP_io_rf_13_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+351,"rf_DIP_io_rf_14_MPORT_en", false,-1);
    tracep->declBus(c+366,"rf_DIP_io_rf_14_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+73,"rf_DIP_io_rf_14_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+351,"rf_DIP_io_rf_15_MPORT_en", false,-1);
    tracep->declBus(c+367,"rf_DIP_io_rf_15_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+75,"rf_DIP_io_rf_15_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+351,"rf_DIP_io_rf_16_MPORT_en", false,-1);
    tracep->declBus(c+368,"rf_DIP_io_rf_16_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+77,"rf_DIP_io_rf_16_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+351,"rf_DIP_io_rf_17_MPORT_en", false,-1);
    tracep->declBus(c+369,"rf_DIP_io_rf_17_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+79,"rf_DIP_io_rf_17_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+351,"rf_DIP_io_rf_18_MPORT_en", false,-1);
    tracep->declBus(c+370,"rf_DIP_io_rf_18_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+81,"rf_DIP_io_rf_18_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+351,"rf_DIP_io_rf_19_MPORT_en", false,-1);
    tracep->declBus(c+371,"rf_DIP_io_rf_19_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+83,"rf_DIP_io_rf_19_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+351,"rf_DIP_io_rf_20_MPORT_en", false,-1);
    tracep->declBus(c+372,"rf_DIP_io_rf_20_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+85,"rf_DIP_io_rf_20_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+351,"rf_DIP_io_rf_21_MPORT_en", false,-1);
    tracep->declBus(c+373,"rf_DIP_io_rf_21_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+87,"rf_DIP_io_rf_21_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+351,"rf_DIP_io_rf_22_MPORT_en", false,-1);
    tracep->declBus(c+374,"rf_DIP_io_rf_22_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+89,"rf_DIP_io_rf_22_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+351,"rf_DIP_io_rf_23_MPORT_en", false,-1);
    tracep->declBus(c+375,"rf_DIP_io_rf_23_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+91,"rf_DIP_io_rf_23_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+351,"rf_DIP_io_rf_24_MPORT_en", false,-1);
    tracep->declBus(c+376,"rf_DIP_io_rf_24_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+93,"rf_DIP_io_rf_24_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+351,"rf_DIP_io_rf_25_MPORT_en", false,-1);
    tracep->declBus(c+377,"rf_DIP_io_rf_25_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+95,"rf_DIP_io_rf_25_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+351,"rf_DIP_io_rf_26_MPORT_en", false,-1);
    tracep->declBus(c+378,"rf_DIP_io_rf_26_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+97,"rf_DIP_io_rf_26_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+351,"rf_DIP_io_rf_27_MPORT_en", false,-1);
    tracep->declBus(c+379,"rf_DIP_io_rf_27_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+99,"rf_DIP_io_rf_27_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+351,"rf_DIP_io_rf_28_MPORT_en", false,-1);
    tracep->declBus(c+380,"rf_DIP_io_rf_28_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+101,"rf_DIP_io_rf_28_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+351,"rf_DIP_io_rf_29_MPORT_en", false,-1);
    tracep->declBus(c+381,"rf_DIP_io_rf_29_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+103,"rf_DIP_io_rf_29_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+351,"rf_DIP_io_rf_30_MPORT_en", false,-1);
    tracep->declBus(c+382,"rf_DIP_io_rf_30_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+105,"rf_DIP_io_rf_30_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+351,"rf_DIP_io_rf_31_MPORT_en", false,-1);
    tracep->declBus(c+383,"rf_DIP_io_rf_31_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+107,"rf_DIP_io_rf_31_MPORT_data", false,-1, 63,0);
    tracep->declQuad(c+183,"rf_MPORT_data", false,-1, 63,0);
    tracep->declBus(c+185,"rf_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+351,"rf_MPORT_mask", false,-1);
    tracep->declBit(c+186,"rf_MPORT_en", false,-1);
    tracep->declQuad(c+187,"mem_addr", false,-1, 63,0);
    tracep->declBit(c+340,"mem_reset", false,-1);
    tracep->declBit(c+339,"mem_clk", false,-1);
    tracep->declBit(c+189,"mem_we", false,-1);
    tracep->declBit(c+190,"mem_ce", false,-1);
    tracep->declQuad(c+191,"mem_wdata", false,-1, 63,0);
    tracep->declQuad(c+329,"mem_rdata", false,-1, 63,0);
    tracep->declBus(c+193,"mem_wmask", false,-1, 7,0);
    tracep->declBus(c+194,"MEM_io_in_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+195,"MEM_io_in_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBus(c+196,"MEM_io_in_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+197,"MEM_io_in_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+199,"MEM_io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+200,"MEM_io_in_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+202,"MEM_io_in_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+203,"MEM_io_in_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+204,"MEM_io_in_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+206,"MEM_io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+208,"MEM_io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+210,"MEM_io_in_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declBit(c+195,"MEM_io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declQuad(c+197,"MEM_io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+199,"MEM_io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+200,"MEM_io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+202,"MEM_io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+203,"MEM_io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+331,"MEM_io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+187,"MEM_io_mem_addr", false,-1, 63,0);
    tracep->declQuad(c+329,"MEM_io_mem_rdata", false,-1, 63,0);
    tracep->declQuad(c+191,"MEM_io_mem_wdata", false,-1, 63,0);
    tracep->declBus(c+193,"MEM_io_mem_wmask", false,-1, 7,0);
    tracep->declBit(c+190,"MEM_io_mem_ce", false,-1);
    tracep->declBit(c+189,"MEM_io_mem_we", false,-1);
    tracep->declBit(c+212,"WB_io_in_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declQuad(c+213,"WB_io_in_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+215,"WB_io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+216,"WB_io_in_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+185,"WB_io_in_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+186,"WB_io_in_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+218,"WB_io_in_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declBit(c+212,"WB_io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declQuad(c+213,"WB_io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+215,"WB_io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+216,"WB_io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+185,"WB_io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+186,"WB_io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+218,"WB_io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+27,"bypass_io_EX_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+25,"bypass_io_EX_rf_rfWen", false,-1);
    tracep->declQuad(c+37,"bypass_io_EX_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+202,"bypass_io_MEM_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+203,"bypass_io_MEM_rf_rfWen", false,-1);
    tracep->declQuad(c+331,"bypass_io_MEM_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+185,"bypass_io_WB_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+186,"bypass_io_WB_rf_rfWen", false,-1);
    tracep->declQuad(c+218,"bypass_io_WB_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+220,"bypass_io_Reg1", false,-1, 63,0);
    tracep->declBus(c+14,"bypass_io_reg_index1", false,-1, 4,0);
    tracep->declQuad(c+222,"bypass_io_Reg2", false,-1, 63,0);
    tracep->declBus(c+15,"bypass_io_reg_index2", false,-1, 4,0);
    tracep->declQuad(c+345,"bypass_io_Bypass_REG1", false,-1, 63,0);
    tracep->declQuad(c+347,"bypass_io_Bypass_REG2", false,-1, 63,0);
    tracep->declQuad(c+7,"ID_io_in_bits_r_PC", false,-1, 63,0);
    tracep->declBus(c+9,"ID_io_in_bits_r_Inst", false,-1, 31,0);
    tracep->declBus(c+21,"EX_io_in_bits_r_ctrl_signal_src1Type", false,-1, 2,0);
    tracep->declBus(c+22,"EX_io_in_bits_r_ctrl_signal_src2Type", false,-1, 2,0);
    tracep->declBus(c+23,"EX_io_in_bits_r_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+24,"EX_io_in_bits_r_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+25,"EX_io_in_bits_r_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+26,"EX_io_in_bits_r_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declBus(c+27,"EX_io_in_bits_r_ctrl_signal_rfDest", false,-1, 4,0);
    tracep->declQuad(c+28,"EX_io_in_bits_r_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+30,"EX_io_in_bits_r_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+32,"EX_io_in_bits_r_ctrl_data_Imm", false,-1, 63,0);
    tracep->declQuad(c+34,"EX_io_in_bits_r_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+36,"EX_io_in_bits_r_ctrl_flow_inst", false,-1, 31,0);
    tracep->declBus(c+194,"MEM_io_in_bits_r_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+195,"MEM_io_in_bits_r_ctrl_signal_inst_valid", false,-1);
    tracep->declBus(c+196,"MEM_io_in_bits_r_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+197,"MEM_io_in_bits_r_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+199,"MEM_io_in_bits_r_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+200,"MEM_io_in_bits_r_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+202,"MEM_io_in_bits_r_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+203,"MEM_io_in_bits_r_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+204,"MEM_io_in_bits_r_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+206,"MEM_io_in_bits_r_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+208,"MEM_io_in_bits_r_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+210,"MEM_io_in_bits_r_ctrl_data_Imm", false,-1, 63,0);
    tracep->declBit(c+212,"WB_io_in_bits_r_ctrl_signal_inst_valid", false,-1);
    tracep->declQuad(c+213,"WB_io_in_bits_r_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+215,"WB_io_in_bits_r_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+216,"WB_io_in_bits_r_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+185,"WB_io_in_bits_r_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+186,"WB_io_in_bits_r_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+218,"WB_io_in_bits_r_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+109,"DIP_io_inst_REG", false,-1, 31,0);
    tracep->declBit(c+112,"DIP_io_inst_valid_REG", false,-1);
    tracep->declQuad(c+110,"DIP_io_pc_REG", false,-1, 63,0);
    tracep->declQuad(c+113,"DIP_io_dnpc_REG", false,-1, 63,0);
    tracep->declBus(c+224,"io_inst_REG", false,-1, 31,0);
    tracep->pushNamePrefix("DIP ");
    tracep->declBit(c+43,"is_break", false,-1);
    tracep->declBus(c+109,"inst", false,-1, 31,0);
    tracep->declQuad(c+45,"rf_0", false,-1, 63,0);
    tracep->declQuad(c+47,"rf_1", false,-1, 63,0);
    tracep->declQuad(c+49,"rf_2", false,-1, 63,0);
    tracep->declQuad(c+51,"rf_3", false,-1, 63,0);
    tracep->declQuad(c+53,"rf_4", false,-1, 63,0);
    tracep->declQuad(c+55,"rf_5", false,-1, 63,0);
    tracep->declQuad(c+57,"rf_6", false,-1, 63,0);
    tracep->declQuad(c+59,"rf_7", false,-1, 63,0);
    tracep->declQuad(c+61,"rf_8", false,-1, 63,0);
    tracep->declQuad(c+63,"rf_9", false,-1, 63,0);
    tracep->declQuad(c+65,"rf_10", false,-1, 63,0);
    tracep->declQuad(c+67,"rf_11", false,-1, 63,0);
    tracep->declQuad(c+69,"rf_12", false,-1, 63,0);
    tracep->declQuad(c+71,"rf_13", false,-1, 63,0);
    tracep->declQuad(c+73,"rf_14", false,-1, 63,0);
    tracep->declQuad(c+75,"rf_15", false,-1, 63,0);
    tracep->declQuad(c+77,"rf_16", false,-1, 63,0);
    tracep->declQuad(c+79,"rf_17", false,-1, 63,0);
    tracep->declQuad(c+81,"rf_18", false,-1, 63,0);
    tracep->declQuad(c+83,"rf_19", false,-1, 63,0);
    tracep->declQuad(c+85,"rf_20", false,-1, 63,0);
    tracep->declQuad(c+87,"rf_21", false,-1, 63,0);
    tracep->declQuad(c+89,"rf_22", false,-1, 63,0);
    tracep->declQuad(c+91,"rf_23", false,-1, 63,0);
    tracep->declQuad(c+93,"rf_24", false,-1, 63,0);
    tracep->declQuad(c+95,"rf_25", false,-1, 63,0);
    tracep->declQuad(c+97,"rf_26", false,-1, 63,0);
    tracep->declQuad(c+99,"rf_27", false,-1, 63,0);
    tracep->declQuad(c+101,"rf_28", false,-1, 63,0);
    tracep->declQuad(c+103,"rf_29", false,-1, 63,0);
    tracep->declQuad(c+105,"rf_30", false,-1, 63,0);
    tracep->declQuad(c+107,"rf_31", false,-1, 63,0);
    tracep->declBit(c+112,"inst_valid", false,-1);
    tracep->declQuad(c+110,"pc", false,-1, 63,0);
    tracep->declQuad(c+113,"dnpc", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+225+i*2,"rf", true,(i+0), 63,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+289+i*1,"IN", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EX ");
    tracep->declBus(c+21,"io_in_bits_ctrl_signal_src1Type", false,-1, 2,0);
    tracep->declBus(c+22,"io_in_bits_ctrl_signal_src2Type", false,-1, 2,0);
    tracep->declBus(c+23,"io_in_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+24,"io_in_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+25,"io_in_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+26,"io_in_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declBus(c+27,"io_in_bits_ctrl_signal_rfDest", false,-1, 4,0);
    tracep->declQuad(c+28,"io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+30,"io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+32,"io_in_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declQuad(c+34,"io_in_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+36,"io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declBit(c+1,"io_branchIO_is_branch", false,-1);
    tracep->declBit(c+2,"io_branchIO_is_jump", false,-1);
    tracep->declQuad(c+3,"io_branchIO_dnpc", false,-1, 63,0);
    tracep->declBus(c+23,"io_out_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+24,"io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBus(c+26,"io_out_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+34,"io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+36,"io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+3,"io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+27,"io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+25,"io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+37,"io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+39,"io_out_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+41,"io_out_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+32,"io_out_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declBit(c+43,"io_is_break", false,-1);
    tracep->declBit(c+44,"io_is_flush", false,-1);
    tracep->declQuad(c+295,"src1", false,-1, 63,0);
    tracep->declQuad(c+297,"src2", false,-1, 63,0);
    tracep->declBit(c+299,"alu_result_sign", false,-1);
    tracep->declBit(c+300,"alu_result_sign_2", false,-1);
    tracep->declBit(c+301,"alu_result_sign_3", false,-1);
    tracep->declBit(c+302,"alu_result_sign_4", false,-1);
    tracep->declBit(c+303,"alu_result_sign_5", false,-1);
    tracep->declBit(c+304,"alu_result_sign_6", false,-1);
    tracep->declBit(c+305,"alu_result_sign_7", false,-1);
    tracep->declQuad(c+306,"alu_result", false,-1, 63,0);
    tracep->declBit(c+308,"shift_result_sign", false,-1);
    tracep->declBit(c+309,"shift_result_sign_1", false,-1);
    tracep->declBit(c+310,"shift_result_sign_2", false,-1);
    tracep->declBit(c+311,"shift_result_sign_3", false,-1);
    tracep->declQuad(c+312,"compar_result", false,-1, 63,0);
    tracep->declQuad(c+314,"jump_result", false,-1, 63,0);
    tracep->declQuad(c+316,"shift_result", false,-1, 63,0);
    tracep->declQuad(c+318,"branch_result", false,-1, 63,0);
    tracep->declBit(c+320,"branch_flag", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ID ");
    tracep->declQuad(c+7,"io_in_bits_PC", false,-1, 63,0);
    tracep->declBus(c+9,"io_in_bits_Inst", false,-1, 31,0);
    tracep->declQuad(c+345,"io_REG1", false,-1, 63,0);
    tracep->declQuad(c+347,"io_REG2", false,-1, 63,0);
    tracep->declBus(c+10,"io_out_bits_ctrl_signal_src1Type", false,-1, 2,0);
    tracep->declBus(c+11,"io_out_bits_ctrl_signal_src2Type", false,-1, 2,0);
    tracep->declBus(c+12,"io_out_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+13,"io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBus(c+14,"io_out_bits_ctrl_signal_rfSrc1", false,-1, 4,0);
    tracep->declBus(c+15,"io_out_bits_ctrl_signal_rfSrc2", false,-1, 4,0);
    tracep->declBit(c+16,"io_out_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+17,"io_out_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declBus(c+18,"io_out_bits_ctrl_signal_rfDest", false,-1, 4,0);
    tracep->declQuad(c+345,"io_out_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+347,"io_out_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+19,"io_out_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declQuad(c+7,"io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+9,"io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declBus(c+18,"rd", false,-1, 4,0);
    tracep->declBus(c+321,"Inst_decode_0", false,-1, 3,0);
    tracep->declBus(c+17,"Inst_decode_2", false,-1, 6,0);
    tracep->declBus(c+322,"srctype1", false,-1, 1,0);
    tracep->declBit(c+323,"srctype2", false,-1);
    tracep->declBit(c+324,"sign", false,-1);
    tracep->declBit(c+325,"sign_1", false,-1);
    tracep->declBit(c+326,"sign_2", false,-1);
    tracep->declBit(c+326,"sign_3", false,-1);
    tracep->declBit(c+324,"sign_4", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IF ");
    tracep->declBit(c+339,"clock", false,-1);
    tracep->declBit(c+340,"reset", false,-1);
    tracep->declBit(c+1,"io_branch_io_is_branch", false,-1);
    tracep->declBit(c+2,"io_branch_io_is_jump", false,-1);
    tracep->declQuad(c+3,"io_branch_io_dnpc", false,-1, 63,0);
    tracep->declBus(c+344,"io_inst", false,-1, 31,0);
    tracep->declQuad(c+5,"io_out_bits_PC", false,-1, 63,0);
    tracep->declBus(c+344,"io_out_bits_Inst", false,-1, 31,0);
    tracep->declQuad(c+5,"temp", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IFM ");
    tracep->declBit(c+340,"reset", false,-1);
    tracep->declBit(c+339,"clk", false,-1);
    tracep->declQuad(c+5,"pc", false,-1, 63,0);
    tracep->declBus(c+344,"inst", false,-1, 31,0);
    tracep->declQuad(c+333,"rdata", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MEM ");
    tracep->declBus(c+194,"io_in_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+195,"io_in_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBus(c+196,"io_in_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+197,"io_in_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+199,"io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+200,"io_in_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+202,"io_in_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+203,"io_in_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+204,"io_in_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+206,"io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+208,"io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+210,"io_in_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declBit(c+195,"io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declQuad(c+197,"io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+199,"io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+200,"io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+202,"io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+203,"io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+331,"io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+187,"io_mem_addr", false,-1, 63,0);
    tracep->declQuad(c+329,"io_mem_rdata", false,-1, 63,0);
    tracep->declQuad(c+191,"io_mem_wdata", false,-1, 63,0);
    tracep->declBus(c+193,"io_mem_wmask", false,-1, 7,0);
    tracep->declBit(c+190,"io_mem_ce", false,-1);
    tracep->declBit(c+189,"io_mem_we", false,-1);
    tracep->declQuad(c+327,"addr_temp", false,-1, 63,0);
    tracep->declBit(c+335,"mem_result_sign", false,-1);
    tracep->declBit(c+336,"mem_result_sign_1", false,-1);
    tracep->declBit(c+337,"mem_result_sign_2", false,-1);
    tracep->declBit(c+338,"mem_result_sign_3", false,-1);
    tracep->declQuad(c+349,"mem_result", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WB ");
    tracep->declBit(c+212,"io_in_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declQuad(c+213,"io_in_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+215,"io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+216,"io_in_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+185,"io_in_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+186,"io_in_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+218,"io_in_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declBit(c+212,"io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declQuad(c+213,"io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+215,"io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+216,"io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+185,"io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+186,"io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+218,"io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("bypass ");
    tracep->declBus(c+27,"io_EX_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+25,"io_EX_rf_rfWen", false,-1);
    tracep->declQuad(c+37,"io_EX_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+202,"io_MEM_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+203,"io_MEM_rf_rfWen", false,-1);
    tracep->declQuad(c+331,"io_MEM_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+185,"io_WB_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+186,"io_WB_rf_rfWen", false,-1);
    tracep->declQuad(c+218,"io_WB_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+220,"io_Reg1", false,-1, 63,0);
    tracep->declBus(c+14,"io_reg_index1", false,-1, 4,0);
    tracep->declQuad(c+222,"io_Reg2", false,-1, 63,0);
    tracep->declBus(c+15,"io_reg_index2", false,-1, 4,0);
    tracep->declQuad(c+345,"io_Bypass_REG1", false,-1, 63,0);
    tracep->declQuad(c+347,"io_Bypass_REG2", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem ");
    tracep->declBit(c+340,"reset", false,-1);
    tracep->declBit(c+339,"clk", false,-1);
    tracep->declQuad(c+187,"addr", false,-1, 63,0);
    tracep->declBit(c+189,"we", false,-1);
    tracep->declBit(c+190,"ce", false,-1);
    tracep->declQuad(c+191,"wdata", false,-1, 63,0);
    tracep->declQuad(c+329,"rdata", false,-1, 63,0);
    tracep->declBus(c+193,"wmask", false,-1, 7,0);
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
    bufp->fullQData(oldp+7,(vlSelf->CoreTop__DOT__ID_io_in_bits_r_PC),64);
    bufp->fullIData(oldp+9,(vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst),32);
    bufp->fullCData(oldp+10,((((7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                ? 2U : 0U) | ((3U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                               ? 2U
                                               : 0U))),3);
    bufp->fullCData(oldp+11,((((8U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)) 
                               | (7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))) 
                              | (3U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)))),3);
    bufp->fullCData(oldp+12,(((0x13U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
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
    bufp->fullBit(oldp+13,((0U != ((0x13U == (0x707fU 
                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                    ? 0x40U : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_316)))));
    bufp->fullCData(oldp+14,((0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+15,((0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                       >> 0x14U))),5);
    bufp->fullBit(oldp+16,(vlSelf->CoreTop__DOT__ID_io_out_bits_ctrl_signal_rfWen));
    bufp->fullCData(oldp+17,(((0x13U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                               ? 0x40U : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_316))),7);
    bufp->fullCData(oldp+18,((0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                       >> 7U))),5);
    bufp->fullQData(oldp+19,(((((((8U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
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
    bufp->fullCData(oldp+21,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src1Type),3);
    bufp->fullCData(oldp+22,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src2Type),3);
    bufp->fullCData(oldp+23,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType),3);
    bufp->fullBit(oldp+24,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_inst_valid));
    bufp->fullBit(oldp+25,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfWen));
    bufp->fullCData(oldp+26,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype),7);
    bufp->fullCData(oldp+27,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest),5);
    bufp->fullQData(oldp+28,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_src1),64);
    bufp->fullQData(oldp+30,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_src2),64);
    bufp->fullQData(oldp+32,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm),64);
    bufp->fullQData(oldp+34,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC),64);
    bufp->fullIData(oldp+36,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_inst),32);
    bufp->fullQData(oldp+37,(vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfData),64);
    bufp->fullQData(oldp+39,(((0U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src1Type))
                               ? vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_src1
                               : vlSelf->CoreTop__DOT__EX__DOT___GEN_1)),64);
    bufp->fullQData(oldp+41,(((0U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src2Type))
                               ? vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_src2
                               : vlSelf->CoreTop__DOT__EX__DOT___GEN_3)),64);
    bufp->fullBit(oldp+43,((0x42U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))));
    bufp->fullBit(oldp+44,(vlSelf->CoreTop__DOT__EX_io_is_flush));
    bufp->fullQData(oldp+45,(vlSelf->CoreTop__DOT__rf
                             [0U]),64);
    bufp->fullQData(oldp+47,(vlSelf->CoreTop__DOT__rf
                             [1U]),64);
    bufp->fullQData(oldp+49,(vlSelf->CoreTop__DOT__rf
                             [2U]),64);
    bufp->fullQData(oldp+51,(vlSelf->CoreTop__DOT__rf
                             [3U]),64);
    bufp->fullQData(oldp+53,(vlSelf->CoreTop__DOT__rf
                             [4U]),64);
    bufp->fullQData(oldp+55,(vlSelf->CoreTop__DOT__rf
                             [5U]),64);
    bufp->fullQData(oldp+57,(vlSelf->CoreTop__DOT__rf
                             [6U]),64);
    bufp->fullQData(oldp+59,(vlSelf->CoreTop__DOT__rf
                             [7U]),64);
    bufp->fullQData(oldp+61,(vlSelf->CoreTop__DOT__rf
                             [8U]),64);
    bufp->fullQData(oldp+63,(vlSelf->CoreTop__DOT__rf
                             [9U]),64);
    bufp->fullQData(oldp+65,(vlSelf->CoreTop__DOT__rf
                             [0xaU]),64);
    bufp->fullQData(oldp+67,(vlSelf->CoreTop__DOT__rf
                             [0xbU]),64);
    bufp->fullQData(oldp+69,(vlSelf->CoreTop__DOT__rf
                             [0xcU]),64);
    bufp->fullQData(oldp+71,(vlSelf->CoreTop__DOT__rf
                             [0xdU]),64);
    bufp->fullQData(oldp+73,(vlSelf->CoreTop__DOT__rf
                             [0xeU]),64);
    bufp->fullQData(oldp+75,(vlSelf->CoreTop__DOT__rf
                             [0xfU]),64);
    bufp->fullQData(oldp+77,(vlSelf->CoreTop__DOT__rf
                             [0x10U]),64);
    bufp->fullQData(oldp+79,(vlSelf->CoreTop__DOT__rf
                             [0x11U]),64);
    bufp->fullQData(oldp+81,(vlSelf->CoreTop__DOT__rf
                             [0x12U]),64);
    bufp->fullQData(oldp+83,(vlSelf->CoreTop__DOT__rf
                             [0x13U]),64);
    bufp->fullQData(oldp+85,(vlSelf->CoreTop__DOT__rf
                             [0x14U]),64);
    bufp->fullQData(oldp+87,(vlSelf->CoreTop__DOT__rf
                             [0x15U]),64);
    bufp->fullQData(oldp+89,(vlSelf->CoreTop__DOT__rf
                             [0x16U]),64);
    bufp->fullQData(oldp+91,(vlSelf->CoreTop__DOT__rf
                             [0x17U]),64);
    bufp->fullQData(oldp+93,(vlSelf->CoreTop__DOT__rf
                             [0x18U]),64);
    bufp->fullQData(oldp+95,(vlSelf->CoreTop__DOT__rf
                             [0x19U]),64);
    bufp->fullQData(oldp+97,(vlSelf->CoreTop__DOT__rf
                             [0x1aU]),64);
    bufp->fullQData(oldp+99,(vlSelf->CoreTop__DOT__rf
                             [0x1bU]),64);
    bufp->fullQData(oldp+101,(vlSelf->CoreTop__DOT__rf
                              [0x1cU]),64);
    bufp->fullQData(oldp+103,(vlSelf->CoreTop__DOT__rf
                              [0x1dU]),64);
    bufp->fullQData(oldp+105,(vlSelf->CoreTop__DOT__rf
                              [0x1eU]),64);
    bufp->fullQData(oldp+107,(vlSelf->CoreTop__DOT__rf
                              [0x1fU]),64);
    bufp->fullIData(oldp+109,(vlSelf->CoreTop__DOT__DIP_io_inst_REG),32);
    bufp->fullQData(oldp+110,(vlSelf->CoreTop__DOT__DIP_io_pc_REG),64);
    bufp->fullBit(oldp+112,(vlSelf->CoreTop__DOT__DIP_io_inst_valid_REG));
    bufp->fullQData(oldp+113,(vlSelf->CoreTop__DOT__DIP_io_dnpc_REG),64);
    bufp->fullQData(oldp+115,(vlSelf->CoreTop__DOT__rf[0]),64);
    bufp->fullQData(oldp+117,(vlSelf->CoreTop__DOT__rf[1]),64);
    bufp->fullQData(oldp+119,(vlSelf->CoreTop__DOT__rf[2]),64);
    bufp->fullQData(oldp+121,(vlSelf->CoreTop__DOT__rf[3]),64);
    bufp->fullQData(oldp+123,(vlSelf->CoreTop__DOT__rf[4]),64);
    bufp->fullQData(oldp+125,(vlSelf->CoreTop__DOT__rf[5]),64);
    bufp->fullQData(oldp+127,(vlSelf->CoreTop__DOT__rf[6]),64);
    bufp->fullQData(oldp+129,(vlSelf->CoreTop__DOT__rf[7]),64);
    bufp->fullQData(oldp+131,(vlSelf->CoreTop__DOT__rf[8]),64);
    bufp->fullQData(oldp+133,(vlSelf->CoreTop__DOT__rf[9]),64);
    bufp->fullQData(oldp+135,(vlSelf->CoreTop__DOT__rf[10]),64);
    bufp->fullQData(oldp+137,(vlSelf->CoreTop__DOT__rf[11]),64);
    bufp->fullQData(oldp+139,(vlSelf->CoreTop__DOT__rf[12]),64);
    bufp->fullQData(oldp+141,(vlSelf->CoreTop__DOT__rf[13]),64);
    bufp->fullQData(oldp+143,(vlSelf->CoreTop__DOT__rf[14]),64);
    bufp->fullQData(oldp+145,(vlSelf->CoreTop__DOT__rf[15]),64);
    bufp->fullQData(oldp+147,(vlSelf->CoreTop__DOT__rf[16]),64);
    bufp->fullQData(oldp+149,(vlSelf->CoreTop__DOT__rf[17]),64);
    bufp->fullQData(oldp+151,(vlSelf->CoreTop__DOT__rf[18]),64);
    bufp->fullQData(oldp+153,(vlSelf->CoreTop__DOT__rf[19]),64);
    bufp->fullQData(oldp+155,(vlSelf->CoreTop__DOT__rf[20]),64);
    bufp->fullQData(oldp+157,(vlSelf->CoreTop__DOT__rf[21]),64);
    bufp->fullQData(oldp+159,(vlSelf->CoreTop__DOT__rf[22]),64);
    bufp->fullQData(oldp+161,(vlSelf->CoreTop__DOT__rf[23]),64);
    bufp->fullQData(oldp+163,(vlSelf->CoreTop__DOT__rf[24]),64);
    bufp->fullQData(oldp+165,(vlSelf->CoreTop__DOT__rf[25]),64);
    bufp->fullQData(oldp+167,(vlSelf->CoreTop__DOT__rf[26]),64);
    bufp->fullQData(oldp+169,(vlSelf->CoreTop__DOT__rf[27]),64);
    bufp->fullQData(oldp+171,(vlSelf->CoreTop__DOT__rf[28]),64);
    bufp->fullQData(oldp+173,(vlSelf->CoreTop__DOT__rf[29]),64);
    bufp->fullQData(oldp+175,(vlSelf->CoreTop__DOT__rf[30]),64);
    bufp->fullQData(oldp+177,(vlSelf->CoreTop__DOT__rf[31]),64);
    bufp->fullQData(oldp+179,(vlSelf->CoreTop__DOT__rf
                              [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                         >> 0xfU))]),64);
    bufp->fullQData(oldp+181,(vlSelf->CoreTop__DOT__rf
                              [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                         >> 0x14U))]),64);
    bufp->fullQData(oldp+183,(((0U == (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest))
                                ? 0ULL : vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfData)),64);
    bufp->fullCData(oldp+185,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest),5);
    bufp->fullBit(oldp+186,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfWen));
    bufp->fullQData(oldp+187,(((0x45U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                ? vlSelf->CoreTop__DOT__MEM__DOT___addr_temp_T_1
                                : vlSelf->CoreTop__DOT__MEM__DOT___GEN_16)),64);
    bufp->fullBit(oldp+189,(((0x45U != (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype)) 
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
    bufp->fullBit(oldp+190,((4U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_fuType))));
    bufp->fullQData(oldp+191,(((0x46U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
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
    bufp->fullCData(oldp+193,(((0x46U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                ? 0xffU : (IData)(vlSelf->CoreTop__DOT__MEM__DOT___GEN_32))),8);
    bufp->fullCData(oldp+194,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_fuType),3);
    bufp->fullBit(oldp+195,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_inst_valid));
    bufp->fullCData(oldp+196,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype),7);
    bufp->fullQData(oldp+197,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_PC),64);
    bufp->fullIData(oldp+199,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_inst),32);
    bufp->fullQData(oldp+200,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_Dnpc),64);
    bufp->fullCData(oldp+202,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest),5);
    bufp->fullBit(oldp+203,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfWen));
    bufp->fullQData(oldp+204,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfData),64);
    bufp->fullQData(oldp+206,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src1),64);
    bufp->fullQData(oldp+208,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2),64);
    bufp->fullQData(oldp+210,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_Imm),64);
    bufp->fullBit(oldp+212,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_inst_valid));
    bufp->fullQData(oldp+213,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_PC),64);
    bufp->fullIData(oldp+215,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_inst),32);
    bufp->fullQData(oldp+216,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_Dnpc),64);
    bufp->fullQData(oldp+218,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfData),64);
    bufp->fullQData(oldp+220,(((0U == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                >> 0xfU)))
                                ? 0ULL : vlSelf->CoreTop__DOT__rf
                               [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                          >> 0xfU))])),64);
    bufp->fullQData(oldp+222,(((0U == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                >> 0x14U)))
                                ? 0ULL : vlSelf->CoreTop__DOT__rf
                               [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                          >> 0x14U))])),64);
    bufp->fullIData(oldp+224,(vlSelf->CoreTop__DOT__io_inst_REG),32);
    bufp->fullQData(oldp+225,(vlSelf->CoreTop__DOT__DIP__DOT__rf[0]),64);
    bufp->fullQData(oldp+227,(vlSelf->CoreTop__DOT__DIP__DOT__rf[1]),64);
    bufp->fullQData(oldp+229,(vlSelf->CoreTop__DOT__DIP__DOT__rf[2]),64);
    bufp->fullQData(oldp+231,(vlSelf->CoreTop__DOT__DIP__DOT__rf[3]),64);
    bufp->fullQData(oldp+233,(vlSelf->CoreTop__DOT__DIP__DOT__rf[4]),64);
    bufp->fullQData(oldp+235,(vlSelf->CoreTop__DOT__DIP__DOT__rf[5]),64);
    bufp->fullQData(oldp+237,(vlSelf->CoreTop__DOT__DIP__DOT__rf[6]),64);
    bufp->fullQData(oldp+239,(vlSelf->CoreTop__DOT__DIP__DOT__rf[7]),64);
    bufp->fullQData(oldp+241,(vlSelf->CoreTop__DOT__DIP__DOT__rf[8]),64);
    bufp->fullQData(oldp+243,(vlSelf->CoreTop__DOT__DIP__DOT__rf[9]),64);
    bufp->fullQData(oldp+245,(vlSelf->CoreTop__DOT__DIP__DOT__rf[10]),64);
    bufp->fullQData(oldp+247,(vlSelf->CoreTop__DOT__DIP__DOT__rf[11]),64);
    bufp->fullQData(oldp+249,(vlSelf->CoreTop__DOT__DIP__DOT__rf[12]),64);
    bufp->fullQData(oldp+251,(vlSelf->CoreTop__DOT__DIP__DOT__rf[13]),64);
    bufp->fullQData(oldp+253,(vlSelf->CoreTop__DOT__DIP__DOT__rf[14]),64);
    bufp->fullQData(oldp+255,(vlSelf->CoreTop__DOT__DIP__DOT__rf[15]),64);
    bufp->fullQData(oldp+257,(vlSelf->CoreTop__DOT__DIP__DOT__rf[16]),64);
    bufp->fullQData(oldp+259,(vlSelf->CoreTop__DOT__DIP__DOT__rf[17]),64);
    bufp->fullQData(oldp+261,(vlSelf->CoreTop__DOT__DIP__DOT__rf[18]),64);
    bufp->fullQData(oldp+263,(vlSelf->CoreTop__DOT__DIP__DOT__rf[19]),64);
    bufp->fullQData(oldp+265,(vlSelf->CoreTop__DOT__DIP__DOT__rf[20]),64);
    bufp->fullQData(oldp+267,(vlSelf->CoreTop__DOT__DIP__DOT__rf[21]),64);
    bufp->fullQData(oldp+269,(vlSelf->CoreTop__DOT__DIP__DOT__rf[22]),64);
    bufp->fullQData(oldp+271,(vlSelf->CoreTop__DOT__DIP__DOT__rf[23]),64);
    bufp->fullQData(oldp+273,(vlSelf->CoreTop__DOT__DIP__DOT__rf[24]),64);
    bufp->fullQData(oldp+275,(vlSelf->CoreTop__DOT__DIP__DOT__rf[25]),64);
    bufp->fullQData(oldp+277,(vlSelf->CoreTop__DOT__DIP__DOT__rf[26]),64);
    bufp->fullQData(oldp+279,(vlSelf->CoreTop__DOT__DIP__DOT__rf[27]),64);
    bufp->fullQData(oldp+281,(vlSelf->CoreTop__DOT__DIP__DOT__rf[28]),64);
    bufp->fullQData(oldp+283,(vlSelf->CoreTop__DOT__DIP__DOT__rf[29]),64);
    bufp->fullQData(oldp+285,(vlSelf->CoreTop__DOT__DIP__DOT__rf[30]),64);
    bufp->fullQData(oldp+287,(vlSelf->CoreTop__DOT__DIP__DOT__rf[31]),64);
    bufp->fullIData(oldp+289,(vlSelf->CoreTop__DOT__DIP__DOT__IN[0]),32);
    bufp->fullIData(oldp+290,(vlSelf->CoreTop__DOT__DIP__DOT__IN[1]),32);
    bufp->fullIData(oldp+291,(vlSelf->CoreTop__DOT__DIP__DOT__IN[2]),32);
    bufp->fullIData(oldp+292,(vlSelf->CoreTop__DOT__DIP__DOT__IN[3]),32);
    bufp->fullIData(oldp+293,(vlSelf->CoreTop__DOT__DIP__DOT__IN[4]),32);
    bufp->fullIData(oldp+294,(vlSelf->CoreTop__DOT__DIP__DOT__IN[5]),32);
    bufp->fullQData(oldp+295,(vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_58),64);
    bufp->fullQData(oldp+297,(vlSelf->CoreTop__DOT__EX__DOT__src2),64);
    bufp->fullBit(oldp+299,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+300,((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_19[0U] 
                             >> 0x1fU)));
    bufp->fullBit(oldp+301,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_28 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+302,((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_38 
                             >> 0x1fU)));
    bufp->fullBit(oldp+303,((vlSelf->CoreTop__DOT__EX__DOT___GEN_22 
                             >> 0x1fU)));
    bufp->fullBit(oldp+304,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_10 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+305,((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_64 
                             >> 0x1fU)));
    bufp->fullQData(oldp+306,(((0x40U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
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
    bufp->fullBit(oldp+308,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_5[0U] 
                             >> 0x1fU)));
    bufp->fullBit(oldp+309,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_16[0U] 
                             >> 0x1fU)));
    bufp->fullBit(oldp+310,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_25 
                             >> 0x1fU)));
    bufp->fullBit(oldp+311,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_31 
                             >> 0x1fU)));
    bufp->fullQData(oldp+312,(((0x6aU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                ? ((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_58 
                                    < vlSelf->CoreTop__DOT__EX__DOT__src2)
                                    ? 1ULL : 0ULL) : 
                               ((2U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                 ? (VL_LTS_IQQ(64, vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_58, vlSelf->CoreTop__DOT__EX__DOT__src2)
                                     ? 1ULL : 0ULL)
                                 : 0ULL))),64);
    bufp->fullQData(oldp+314,(((3U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType))
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
    bufp->fullQData(oldp+316,((((QData)((IData)(((0x6eU 
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
    bufp->fullQData(oldp+318,(((0x6bU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
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
    bufp->fullBit(oldp+320,(vlSelf->CoreTop__DOT__EX__DOT__branch_flag));
    bufp->fullCData(oldp+321,(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0),4);
    bufp->fullCData(oldp+322,((((7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                 ? 2U : 0U) | ((3U 
                                                == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                                ? 2U
                                                : 0U))),2);
    bufp->fullBit(oldp+323,((((8U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)) 
                              | (7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))) 
                             | (3U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)))));
    bufp->fullBit(oldp+324,((vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                             >> 0x1fU)));
    bufp->fullBit(oldp+325,((1U & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                   >> 0x13U))));
    bufp->fullBit(oldp+326,((vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                             >> 0x1fU)));
    bufp->fullQData(oldp+327,(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp),64);
    bufp->fullQData(oldp+329,(vlSelf->CoreTop__DOT__mem_rdata),64);
    bufp->fullQData(oldp+331,(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfData),64);
    bufp->fullQData(oldp+333,(vlSelf->CoreTop__DOT__IFM__DOT__rdata),64);
    bufp->fullBit(oldp+335,((1U & (IData)((vlSelf->CoreTop__DOT__mem_rdata 
                                           >> 0x3fU)))));
    bufp->fullBit(oldp+336,((1U & (IData)((vlSelf->CoreTop__DOT__mem_rdata 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+337,((1U & ((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_27) 
                                   >> 7U))));
    bufp->fullBit(oldp+338,((1U & ((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_44) 
                                   >> 0xfU))));
    bufp->fullBit(oldp+339,(vlSelf->clock));
    bufp->fullBit(oldp+340,(vlSelf->reset));
    bufp->fullQData(oldp+341,(vlSelf->io_pc),64);
    bufp->fullIData(oldp+343,(vlSelf->io_inst),32);
    bufp->fullIData(oldp+344,(((1U & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                              >> 2U)))
                                ? (IData)((vlSelf->CoreTop__DOT__IFM__DOT__rdata 
                                           >> 0x20U))
                                : (IData)(vlSelf->CoreTop__DOT__IFM__DOT__rdata))),32);
    bufp->fullQData(oldp+345,((((IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfWen) 
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
    bufp->fullQData(oldp+347,((((IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfWen) 
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
    bufp->fullQData(oldp+349,(((0x45U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
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
    bufp->fullBit(oldp+351,(1U));
    bufp->fullCData(oldp+352,(0U),5);
    bufp->fullCData(oldp+353,(1U),5);
    bufp->fullCData(oldp+354,(2U),5);
    bufp->fullCData(oldp+355,(3U),5);
    bufp->fullCData(oldp+356,(4U),5);
    bufp->fullCData(oldp+357,(5U),5);
    bufp->fullCData(oldp+358,(6U),5);
    bufp->fullCData(oldp+359,(7U),5);
    bufp->fullCData(oldp+360,(8U),5);
    bufp->fullCData(oldp+361,(9U),5);
    bufp->fullCData(oldp+362,(0xaU),5);
    bufp->fullCData(oldp+363,(0xbU),5);
    bufp->fullCData(oldp+364,(0xcU),5);
    bufp->fullCData(oldp+365,(0xdU),5);
    bufp->fullCData(oldp+366,(0xeU),5);
    bufp->fullCData(oldp+367,(0xfU),5);
    bufp->fullCData(oldp+368,(0x10U),5);
    bufp->fullCData(oldp+369,(0x11U),5);
    bufp->fullCData(oldp+370,(0x12U),5);
    bufp->fullCData(oldp+371,(0x13U),5);
    bufp->fullCData(oldp+372,(0x14U),5);
    bufp->fullCData(oldp+373,(0x15U),5);
    bufp->fullCData(oldp+374,(0x16U),5);
    bufp->fullCData(oldp+375,(0x17U),5);
    bufp->fullCData(oldp+376,(0x18U),5);
    bufp->fullCData(oldp+377,(0x19U),5);
    bufp->fullCData(oldp+378,(0x1aU),5);
    bufp->fullCData(oldp+379,(0x1bU),5);
    bufp->fullCData(oldp+380,(0x1cU),5);
    bufp->fullCData(oldp+381,(0x1dU),5);
    bufp->fullCData(oldp+382,(0x1eU),5);
    bufp->fullCData(oldp+383,(0x1fU),5);
}
