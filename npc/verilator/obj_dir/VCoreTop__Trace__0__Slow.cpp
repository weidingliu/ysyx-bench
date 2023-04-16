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
    tracep->declBit(c+385,"clock", false,-1);
    tracep->declBit(c+386,"reset", false,-1);
    tracep->declQuad(c+387,"io_pc", false,-1, 63,0);
    tracep->declBus(c+389,"io_inst", false,-1, 31,0);
    tracep->pushNamePrefix("CoreTop ");
    tracep->declBit(c+385,"clock", false,-1);
    tracep->declBit(c+386,"reset", false,-1);
    tracep->declQuad(c+387,"io_pc", false,-1, 63,0);
    tracep->declBus(c+389,"io_inst", false,-1, 31,0);
    tracep->declBit(c+385,"IF_clock", false,-1);
    tracep->declBit(c+386,"IF_reset", false,-1);
    tracep->declBit(c+1,"IF_io_branch_io_is_branch", false,-1);
    tracep->declBit(c+2,"IF_io_branch_io_is_jump", false,-1);
    tracep->declBit(c+3,"IF_io_branch_io_dnpc", false,-1);
    tracep->declBus(c+390,"IF_io_inst", false,-1, 31,0);
    tracep->declQuad(c+4,"IF_io_out_bits_PC", false,-1, 63,0);
    tracep->declBus(c+390,"IF_io_out_bits_Inst", false,-1, 31,0);
    tracep->declBit(c+386,"IFM_reset", false,-1);
    tracep->declBit(c+385,"IFM_clk", false,-1);
    tracep->declQuad(c+4,"IFM_pc", false,-1, 63,0);
    tracep->declBus(c+390,"IFM_inst", false,-1, 31,0);
    tracep->declQuad(c+6,"ID_io_in_bits_PC", false,-1, 63,0);
    tracep->declBus(c+8,"ID_io_in_bits_Inst", false,-1, 31,0);
    tracep->declQuad(c+9,"ID_io_REG1", false,-1, 63,0);
    tracep->declQuad(c+9,"ID_io_REG2", false,-1, 63,0);
    tracep->declBus(c+11,"ID_io_out_bits_ctrl_signal_src1Type", false,-1, 2,0);
    tracep->declBus(c+12,"ID_io_out_bits_ctrl_signal_src2Type", false,-1, 2,0);
    tracep->declBus(c+13,"ID_io_out_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+14,"ID_io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBus(c+15,"ID_io_out_bits_ctrl_signal_rfSrc1", false,-1, 4,0);
    tracep->declBit(c+16,"ID_io_out_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+17,"ID_io_out_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declBus(c+18,"ID_io_out_bits_ctrl_signal_rfDest", false,-1, 4,0);
    tracep->declQuad(c+9,"ID_io_out_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+9,"ID_io_out_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+19,"ID_io_out_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declQuad(c+6,"ID_io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+8,"ID_io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declBus(c+21,"EX_io_in_bits_ctrl_signal_src1Type", false,-1, 2,0);
    tracep->declBus(c+22,"EX_io_in_bits_ctrl_signal_src2Type", false,-1, 2,0);
    tracep->declBus(c+23,"EX_io_in_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+24,"EX_io_in_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+25,"EX_io_in_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+26,"EX_io_in_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declBus(c+27,"EX_io_in_bits_ctrl_signal_rfDest", false,-1, 4,0);
    tracep->declQuad(c+28,"EX_io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+28,"EX_io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+30,"EX_io_in_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declQuad(c+32,"EX_io_in_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+34,"EX_io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declBit(c+1,"EX_io_branchIO_is_branch", false,-1);
    tracep->declBit(c+2,"EX_io_branchIO_is_jump", false,-1);
    tracep->declBit(c+3,"EX_io_branchIO_dnpc", false,-1);
    tracep->declBus(c+23,"EX_io_out_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+24,"EX_io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBus(c+26,"EX_io_out_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+32,"EX_io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+34,"EX_io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declBus(c+27,"EX_io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+25,"EX_io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+35,"EX_io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+37,"EX_io_out_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+39,"EX_io_out_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+30,"EX_io_out_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declBit(c+41,"EX_io_is_break", false,-1);
    tracep->declBit(c+41,"DIP_is_break", false,-1);
    tracep->declQuad(c+42,"DIP_rf_0", false,-1, 63,0);
    tracep->declQuad(c+44,"DIP_rf_1", false,-1, 63,0);
    tracep->declQuad(c+46,"DIP_rf_2", false,-1, 63,0);
    tracep->declQuad(c+48,"DIP_rf_3", false,-1, 63,0);
    tracep->declQuad(c+50,"DIP_rf_4", false,-1, 63,0);
    tracep->declQuad(c+52,"DIP_rf_5", false,-1, 63,0);
    tracep->declQuad(c+54,"DIP_rf_6", false,-1, 63,0);
    tracep->declQuad(c+56,"DIP_rf_7", false,-1, 63,0);
    tracep->declQuad(c+58,"DIP_rf_8", false,-1, 63,0);
    tracep->declQuad(c+60,"DIP_rf_9", false,-1, 63,0);
    tracep->declQuad(c+62,"DIP_rf_10", false,-1, 63,0);
    tracep->declQuad(c+64,"DIP_rf_11", false,-1, 63,0);
    tracep->declQuad(c+66,"DIP_rf_12", false,-1, 63,0);
    tracep->declQuad(c+68,"DIP_rf_13", false,-1, 63,0);
    tracep->declQuad(c+70,"DIP_rf_14", false,-1, 63,0);
    tracep->declQuad(c+72,"DIP_rf_15", false,-1, 63,0);
    tracep->declQuad(c+74,"DIP_rf_16", false,-1, 63,0);
    tracep->declQuad(c+76,"DIP_rf_17", false,-1, 63,0);
    tracep->declQuad(c+78,"DIP_rf_18", false,-1, 63,0);
    tracep->declQuad(c+80,"DIP_rf_19", false,-1, 63,0);
    tracep->declQuad(c+82,"DIP_rf_20", false,-1, 63,0);
    tracep->declQuad(c+84,"DIP_rf_21", false,-1, 63,0);
    tracep->declQuad(c+86,"DIP_rf_22", false,-1, 63,0);
    tracep->declQuad(c+88,"DIP_rf_23", false,-1, 63,0);
    tracep->declQuad(c+90,"DIP_rf_24", false,-1, 63,0);
    tracep->declQuad(c+92,"DIP_rf_25", false,-1, 63,0);
    tracep->declQuad(c+94,"DIP_rf_26", false,-1, 63,0);
    tracep->declQuad(c+96,"DIP_rf_27", false,-1, 63,0);
    tracep->declQuad(c+98,"DIP_rf_28", false,-1, 63,0);
    tracep->declQuad(c+100,"DIP_rf_29", false,-1, 63,0);
    tracep->declQuad(c+102,"DIP_rf_30", false,-1, 63,0);
    tracep->declQuad(c+104,"DIP_rf_31", false,-1, 63,0);
    tracep->declBus(c+106,"DIP_inst", false,-1, 31,0);
    tracep->declQuad(c+107,"DIP_pc", false,-1, 63,0);
    tracep->declBit(c+109,"DIP_inst_valid", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+110+i*2,"rf", true,(i+0), 63,0);
    }
    tracep->declBit(c+395,"rf_ID_io_REG1_MPORT_en", false,-1);
    tracep->declBus(c+15,"rf_ID_io_REG1_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+174,"rf_ID_io_REG1_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+395,"rf_ID_io_REG2_MPORT_en", false,-1);
    tracep->declBus(c+15,"rf_ID_io_REG2_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+174,"rf_ID_io_REG2_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+395,"rf_DIP_io_rf_0_MPORT_en", false,-1);
    tracep->declBus(c+396,"rf_DIP_io_rf_0_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+176,"rf_DIP_io_rf_0_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+395,"rf_DIP_io_rf_1_MPORT_en", false,-1);
    tracep->declBus(c+397,"rf_DIP_io_rf_1_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+178,"rf_DIP_io_rf_1_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+395,"rf_DIP_io_rf_2_MPORT_en", false,-1);
    tracep->declBus(c+398,"rf_DIP_io_rf_2_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+180,"rf_DIP_io_rf_2_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+395,"rf_DIP_io_rf_3_MPORT_en", false,-1);
    tracep->declBus(c+399,"rf_DIP_io_rf_3_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+182,"rf_DIP_io_rf_3_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+395,"rf_DIP_io_rf_4_MPORT_en", false,-1);
    tracep->declBus(c+400,"rf_DIP_io_rf_4_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+184,"rf_DIP_io_rf_4_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+395,"rf_DIP_io_rf_5_MPORT_en", false,-1);
    tracep->declBus(c+401,"rf_DIP_io_rf_5_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+186,"rf_DIP_io_rf_5_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+395,"rf_DIP_io_rf_6_MPORT_en", false,-1);
    tracep->declBus(c+402,"rf_DIP_io_rf_6_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+188,"rf_DIP_io_rf_6_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+395,"rf_DIP_io_rf_7_MPORT_en", false,-1);
    tracep->declBus(c+403,"rf_DIP_io_rf_7_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+190,"rf_DIP_io_rf_7_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+395,"rf_DIP_io_rf_8_MPORT_en", false,-1);
    tracep->declBus(c+404,"rf_DIP_io_rf_8_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+192,"rf_DIP_io_rf_8_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+395,"rf_DIP_io_rf_9_MPORT_en", false,-1);
    tracep->declBus(c+405,"rf_DIP_io_rf_9_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+194,"rf_DIP_io_rf_9_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+395,"rf_DIP_io_rf_10_MPORT_en", false,-1);
    tracep->declBus(c+406,"rf_DIP_io_rf_10_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+196,"rf_DIP_io_rf_10_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+395,"rf_DIP_io_rf_11_MPORT_en", false,-1);
    tracep->declBus(c+407,"rf_DIP_io_rf_11_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+198,"rf_DIP_io_rf_11_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+395,"rf_DIP_io_rf_12_MPORT_en", false,-1);
    tracep->declBus(c+408,"rf_DIP_io_rf_12_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+200,"rf_DIP_io_rf_12_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+395,"rf_DIP_io_rf_13_MPORT_en", false,-1);
    tracep->declBus(c+409,"rf_DIP_io_rf_13_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+202,"rf_DIP_io_rf_13_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+395,"rf_DIP_io_rf_14_MPORT_en", false,-1);
    tracep->declBus(c+410,"rf_DIP_io_rf_14_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+204,"rf_DIP_io_rf_14_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+395,"rf_DIP_io_rf_15_MPORT_en", false,-1);
    tracep->declBus(c+411,"rf_DIP_io_rf_15_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+206,"rf_DIP_io_rf_15_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+395,"rf_DIP_io_rf_16_MPORT_en", false,-1);
    tracep->declBus(c+412,"rf_DIP_io_rf_16_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+208,"rf_DIP_io_rf_16_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+395,"rf_DIP_io_rf_17_MPORT_en", false,-1);
    tracep->declBus(c+413,"rf_DIP_io_rf_17_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+210,"rf_DIP_io_rf_17_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+395,"rf_DIP_io_rf_18_MPORT_en", false,-1);
    tracep->declBus(c+414,"rf_DIP_io_rf_18_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+212,"rf_DIP_io_rf_18_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+395,"rf_DIP_io_rf_19_MPORT_en", false,-1);
    tracep->declBus(c+415,"rf_DIP_io_rf_19_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+214,"rf_DIP_io_rf_19_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+395,"rf_DIP_io_rf_20_MPORT_en", false,-1);
    tracep->declBus(c+416,"rf_DIP_io_rf_20_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+216,"rf_DIP_io_rf_20_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+395,"rf_DIP_io_rf_21_MPORT_en", false,-1);
    tracep->declBus(c+417,"rf_DIP_io_rf_21_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+218,"rf_DIP_io_rf_21_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+395,"rf_DIP_io_rf_22_MPORT_en", false,-1);
    tracep->declBus(c+418,"rf_DIP_io_rf_22_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+220,"rf_DIP_io_rf_22_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+395,"rf_DIP_io_rf_23_MPORT_en", false,-1);
    tracep->declBus(c+419,"rf_DIP_io_rf_23_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+222,"rf_DIP_io_rf_23_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+395,"rf_DIP_io_rf_24_MPORT_en", false,-1);
    tracep->declBus(c+420,"rf_DIP_io_rf_24_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+224,"rf_DIP_io_rf_24_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+395,"rf_DIP_io_rf_25_MPORT_en", false,-1);
    tracep->declBus(c+421,"rf_DIP_io_rf_25_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+226,"rf_DIP_io_rf_25_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+395,"rf_DIP_io_rf_26_MPORT_en", false,-1);
    tracep->declBus(c+422,"rf_DIP_io_rf_26_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+228,"rf_DIP_io_rf_26_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+395,"rf_DIP_io_rf_27_MPORT_en", false,-1);
    tracep->declBus(c+423,"rf_DIP_io_rf_27_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+230,"rf_DIP_io_rf_27_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+395,"rf_DIP_io_rf_28_MPORT_en", false,-1);
    tracep->declBus(c+424,"rf_DIP_io_rf_28_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+232,"rf_DIP_io_rf_28_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+395,"rf_DIP_io_rf_29_MPORT_en", false,-1);
    tracep->declBus(c+425,"rf_DIP_io_rf_29_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+234,"rf_DIP_io_rf_29_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+395,"rf_DIP_io_rf_30_MPORT_en", false,-1);
    tracep->declBus(c+426,"rf_DIP_io_rf_30_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+236,"rf_DIP_io_rf_30_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+395,"rf_DIP_io_rf_31_MPORT_en", false,-1);
    tracep->declBus(c+427,"rf_DIP_io_rf_31_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+238,"rf_DIP_io_rf_31_MPORT_data", false,-1, 63,0);
    tracep->declQuad(c+240,"rf_MPORT_data", false,-1, 63,0);
    tracep->declBus(c+242,"rf_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+395,"rf_MPORT_mask", false,-1);
    tracep->declBit(c+243,"rf_MPORT_en", false,-1);
    tracep->declQuad(c+244,"mem_addr", false,-1, 63,0);
    tracep->declBit(c+386,"mem_reset", false,-1);
    tracep->declBit(c+385,"mem_clk", false,-1);
    tracep->declBit(c+246,"mem_we", false,-1);
    tracep->declBit(c+247,"mem_ce", false,-1);
    tracep->declQuad(c+248,"mem_wdata", false,-1, 63,0);
    tracep->declQuad(c+377,"mem_rdata", false,-1, 63,0);
    tracep->declBus(c+250,"mem_wmask", false,-1, 7,0);
    tracep->declBus(c+251,"MEM_io_in_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+252,"MEM_io_in_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBus(c+253,"MEM_io_in_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+254,"MEM_io_in_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+256,"MEM_io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declBus(c+257,"MEM_io_in_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+258,"MEM_io_in_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+259,"MEM_io_in_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+261,"MEM_io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+263,"MEM_io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+265,"MEM_io_in_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declBit(c+252,"MEM_io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declQuad(c+254,"MEM_io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+256,"MEM_io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declBus(c+257,"MEM_io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+258,"MEM_io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+391,"MEM_io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+244,"MEM_io_mem_addr", false,-1, 63,0);
    tracep->declQuad(c+377,"MEM_io_mem_rdata", false,-1, 63,0);
    tracep->declQuad(c+248,"MEM_io_mem_wdata", false,-1, 63,0);
    tracep->declBus(c+250,"MEM_io_mem_wmask", false,-1, 7,0);
    tracep->declBit(c+247,"MEM_io_mem_ce", false,-1);
    tracep->declBit(c+246,"MEM_io_mem_we", false,-1);
    tracep->declBit(c+267,"WB_io_in_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declQuad(c+268,"WB_io_in_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+270,"WB_io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declBus(c+242,"WB_io_in_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+243,"WB_io_in_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+271,"WB_io_in_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declBit(c+267,"WB_io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declQuad(c+268,"WB_io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+270,"WB_io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declBus(c+242,"WB_io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+243,"WB_io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+271,"WB_io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+6,"ID_io_in_bits_r_PC", false,-1, 63,0);
    tracep->declBus(c+8,"ID_io_in_bits_r_Inst", false,-1, 31,0);
    tracep->declBus(c+21,"EX_io_in_bits_r_ctrl_signal_src1Type", false,-1, 2,0);
    tracep->declBus(c+22,"EX_io_in_bits_r_ctrl_signal_src2Type", false,-1, 2,0);
    tracep->declBus(c+23,"EX_io_in_bits_r_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+24,"EX_io_in_bits_r_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+25,"EX_io_in_bits_r_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+26,"EX_io_in_bits_r_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declBus(c+27,"EX_io_in_bits_r_ctrl_signal_rfDest", false,-1, 4,0);
    tracep->declQuad(c+28,"EX_io_in_bits_r_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+28,"EX_io_in_bits_r_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+30,"EX_io_in_bits_r_ctrl_data_Imm", false,-1, 63,0);
    tracep->declQuad(c+32,"EX_io_in_bits_r_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+34,"EX_io_in_bits_r_ctrl_flow_inst", false,-1, 31,0);
    tracep->declBus(c+251,"MEM_io_in_bits_r_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+252,"MEM_io_in_bits_r_ctrl_signal_inst_valid", false,-1);
    tracep->declBus(c+253,"MEM_io_in_bits_r_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+254,"MEM_io_in_bits_r_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+256,"MEM_io_in_bits_r_ctrl_flow_inst", false,-1, 31,0);
    tracep->declBus(c+257,"MEM_io_in_bits_r_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+258,"MEM_io_in_bits_r_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+259,"MEM_io_in_bits_r_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+261,"MEM_io_in_bits_r_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+263,"MEM_io_in_bits_r_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+265,"MEM_io_in_bits_r_ctrl_data_Imm", false,-1, 63,0);
    tracep->declBit(c+267,"WB_io_in_bits_r_ctrl_signal_inst_valid", false,-1);
    tracep->declQuad(c+268,"WB_io_in_bits_r_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+270,"WB_io_in_bits_r_ctrl_flow_inst", false,-1, 31,0);
    tracep->declBus(c+242,"WB_io_in_bits_r_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+243,"WB_io_in_bits_r_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+271,"WB_io_in_bits_r_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+42,"DIP_io_rf_0_REG", false,-1, 63,0);
    tracep->declQuad(c+44,"DIP_io_rf_1_REG", false,-1, 63,0);
    tracep->declQuad(c+46,"DIP_io_rf_2_REG", false,-1, 63,0);
    tracep->declQuad(c+48,"DIP_io_rf_3_REG", false,-1, 63,0);
    tracep->declQuad(c+50,"DIP_io_rf_4_REG", false,-1, 63,0);
    tracep->declQuad(c+52,"DIP_io_rf_5_REG", false,-1, 63,0);
    tracep->declQuad(c+54,"DIP_io_rf_6_REG", false,-1, 63,0);
    tracep->declQuad(c+56,"DIP_io_rf_7_REG", false,-1, 63,0);
    tracep->declQuad(c+58,"DIP_io_rf_8_REG", false,-1, 63,0);
    tracep->declQuad(c+60,"DIP_io_rf_9_REG", false,-1, 63,0);
    tracep->declQuad(c+62,"DIP_io_rf_10_REG", false,-1, 63,0);
    tracep->declQuad(c+64,"DIP_io_rf_11_REG", false,-1, 63,0);
    tracep->declQuad(c+66,"DIP_io_rf_12_REG", false,-1, 63,0);
    tracep->declQuad(c+68,"DIP_io_rf_13_REG", false,-1, 63,0);
    tracep->declQuad(c+70,"DIP_io_rf_14_REG", false,-1, 63,0);
    tracep->declQuad(c+72,"DIP_io_rf_15_REG", false,-1, 63,0);
    tracep->declQuad(c+74,"DIP_io_rf_16_REG", false,-1, 63,0);
    tracep->declQuad(c+76,"DIP_io_rf_17_REG", false,-1, 63,0);
    tracep->declQuad(c+78,"DIP_io_rf_18_REG", false,-1, 63,0);
    tracep->declQuad(c+80,"DIP_io_rf_19_REG", false,-1, 63,0);
    tracep->declQuad(c+82,"DIP_io_rf_20_REG", false,-1, 63,0);
    tracep->declQuad(c+84,"DIP_io_rf_21_REG", false,-1, 63,0);
    tracep->declQuad(c+86,"DIP_io_rf_22_REG", false,-1, 63,0);
    tracep->declQuad(c+88,"DIP_io_rf_23_REG", false,-1, 63,0);
    tracep->declQuad(c+90,"DIP_io_rf_24_REG", false,-1, 63,0);
    tracep->declQuad(c+92,"DIP_io_rf_25_REG", false,-1, 63,0);
    tracep->declQuad(c+94,"DIP_io_rf_26_REG", false,-1, 63,0);
    tracep->declQuad(c+96,"DIP_io_rf_27_REG", false,-1, 63,0);
    tracep->declQuad(c+98,"DIP_io_rf_28_REG", false,-1, 63,0);
    tracep->declQuad(c+100,"DIP_io_rf_29_REG", false,-1, 63,0);
    tracep->declQuad(c+102,"DIP_io_rf_30_REG", false,-1, 63,0);
    tracep->declQuad(c+104,"DIP_io_rf_31_REG", false,-1, 63,0);
    tracep->declBus(c+106,"DIP_io_inst_REG", false,-1, 31,0);
    tracep->declBit(c+109,"DIP_io_inst_valid_REG", false,-1);
    tracep->declQuad(c+107,"DIP_io_pc_REG", false,-1, 63,0);
    tracep->declBus(c+273,"io_inst_REG", false,-1, 31,0);
    tracep->pushNamePrefix("DIP ");
    tracep->declBit(c+41,"is_break", false,-1);
    tracep->declBus(c+106,"inst", false,-1, 31,0);
    tracep->declQuad(c+42,"rf_0", false,-1, 63,0);
    tracep->declQuad(c+44,"rf_1", false,-1, 63,0);
    tracep->declQuad(c+46,"rf_2", false,-1, 63,0);
    tracep->declQuad(c+48,"rf_3", false,-1, 63,0);
    tracep->declQuad(c+50,"rf_4", false,-1, 63,0);
    tracep->declQuad(c+52,"rf_5", false,-1, 63,0);
    tracep->declQuad(c+54,"rf_6", false,-1, 63,0);
    tracep->declQuad(c+56,"rf_7", false,-1, 63,0);
    tracep->declQuad(c+58,"rf_8", false,-1, 63,0);
    tracep->declQuad(c+60,"rf_9", false,-1, 63,0);
    tracep->declQuad(c+62,"rf_10", false,-1, 63,0);
    tracep->declQuad(c+64,"rf_11", false,-1, 63,0);
    tracep->declQuad(c+66,"rf_12", false,-1, 63,0);
    tracep->declQuad(c+68,"rf_13", false,-1, 63,0);
    tracep->declQuad(c+70,"rf_14", false,-1, 63,0);
    tracep->declQuad(c+72,"rf_15", false,-1, 63,0);
    tracep->declQuad(c+74,"rf_16", false,-1, 63,0);
    tracep->declQuad(c+76,"rf_17", false,-1, 63,0);
    tracep->declQuad(c+78,"rf_18", false,-1, 63,0);
    tracep->declQuad(c+80,"rf_19", false,-1, 63,0);
    tracep->declQuad(c+82,"rf_20", false,-1, 63,0);
    tracep->declQuad(c+84,"rf_21", false,-1, 63,0);
    tracep->declQuad(c+86,"rf_22", false,-1, 63,0);
    tracep->declQuad(c+88,"rf_23", false,-1, 63,0);
    tracep->declQuad(c+90,"rf_24", false,-1, 63,0);
    tracep->declQuad(c+92,"rf_25", false,-1, 63,0);
    tracep->declQuad(c+94,"rf_26", false,-1, 63,0);
    tracep->declQuad(c+96,"rf_27", false,-1, 63,0);
    tracep->declQuad(c+98,"rf_28", false,-1, 63,0);
    tracep->declQuad(c+100,"rf_29", false,-1, 63,0);
    tracep->declQuad(c+102,"rf_30", false,-1, 63,0);
    tracep->declQuad(c+104,"rf_31", false,-1, 63,0);
    tracep->declBit(c+109,"inst_valid", false,-1);
    tracep->declQuad(c+107,"pc", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+274+i*2,"rf", true,(i+0), 63,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+338+i*1,"IN", true,(i+0), 31,0);
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
    tracep->declQuad(c+28,"io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+30,"io_in_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declQuad(c+32,"io_in_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+34,"io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declBit(c+1,"io_branchIO_is_branch", false,-1);
    tracep->declBit(c+2,"io_branchIO_is_jump", false,-1);
    tracep->declBit(c+3,"io_branchIO_dnpc", false,-1);
    tracep->declBus(c+23,"io_out_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+24,"io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBus(c+26,"io_out_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+32,"io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+34,"io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declBus(c+27,"io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+25,"io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+35,"io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+37,"io_out_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+39,"io_out_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+30,"io_out_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declBit(c+41,"io_is_break", false,-1);
    tracep->declQuad(c+342,"src1", false,-1, 63,0);
    tracep->declQuad(c+344,"src2", false,-1, 63,0);
    tracep->declBit(c+346,"alu_result_sign", false,-1);
    tracep->declBit(c+347,"alu_result_sign_2", false,-1);
    tracep->declBit(c+348,"alu_result_sign_3", false,-1);
    tracep->declBit(c+349,"alu_result_sign_4", false,-1);
    tracep->declBit(c+350,"alu_result_sign_5", false,-1);
    tracep->declBit(c+351,"alu_result_sign_6", false,-1);
    tracep->declBit(c+352,"alu_result_sign_7", false,-1);
    tracep->declQuad(c+353,"alu_result", false,-1, 63,0);
    tracep->declBit(c+355,"shift_result_sign", false,-1);
    tracep->declBit(c+356,"shift_result_sign_1", false,-1);
    tracep->declBit(c+357,"shift_result_sign_2", false,-1);
    tracep->declBit(c+358,"shift_result_sign_3", false,-1);
    tracep->declQuad(c+359,"compar_result", false,-1, 63,0);
    tracep->declQuad(c+361,"jump_result", false,-1, 63,0);
    tracep->declQuad(c+363,"shift_result", false,-1, 63,0);
    tracep->declQuad(c+365,"branch_result", false,-1, 63,0);
    tracep->declBit(c+1,"branch_flag", false,-1);
    tracep->declQuad(c+367,"dnpc", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ID ");
    tracep->declQuad(c+6,"io_in_bits_PC", false,-1, 63,0);
    tracep->declBus(c+8,"io_in_bits_Inst", false,-1, 31,0);
    tracep->declQuad(c+9,"io_REG1", false,-1, 63,0);
    tracep->declQuad(c+9,"io_REG2", false,-1, 63,0);
    tracep->declBus(c+11,"io_out_bits_ctrl_signal_src1Type", false,-1, 2,0);
    tracep->declBus(c+12,"io_out_bits_ctrl_signal_src2Type", false,-1, 2,0);
    tracep->declBus(c+13,"io_out_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+14,"io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBus(c+15,"io_out_bits_ctrl_signal_rfSrc1", false,-1, 4,0);
    tracep->declBit(c+16,"io_out_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+17,"io_out_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declBus(c+18,"io_out_bits_ctrl_signal_rfDest", false,-1, 4,0);
    tracep->declQuad(c+9,"io_out_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+9,"io_out_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+19,"io_out_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declQuad(c+6,"io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+8,"io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declBus(c+18,"rd", false,-1, 4,0);
    tracep->declBus(c+369,"Inst_decode_0", false,-1, 3,0);
    tracep->declBus(c+17,"Inst_decode_2", false,-1, 6,0);
    tracep->declBus(c+370,"srctype1", false,-1, 1,0);
    tracep->declBit(c+371,"srctype2", false,-1);
    tracep->declBit(c+372,"sign", false,-1);
    tracep->declBit(c+373,"sign_1", false,-1);
    tracep->declBit(c+374,"sign_2", false,-1);
    tracep->declBit(c+374,"sign_3", false,-1);
    tracep->declBit(c+372,"sign_4", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IF ");
    tracep->declBit(c+385,"clock", false,-1);
    tracep->declBit(c+386,"reset", false,-1);
    tracep->declBit(c+1,"io_branch_io_is_branch", false,-1);
    tracep->declBit(c+2,"io_branch_io_is_jump", false,-1);
    tracep->declBit(c+3,"io_branch_io_dnpc", false,-1);
    tracep->declBus(c+390,"io_inst", false,-1, 31,0);
    tracep->declQuad(c+4,"io_out_bits_PC", false,-1, 63,0);
    tracep->declBus(c+390,"io_out_bits_Inst", false,-1, 31,0);
    tracep->declQuad(c+4,"temp", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IFM ");
    tracep->declBit(c+386,"reset", false,-1);
    tracep->declBit(c+385,"clk", false,-1);
    tracep->declQuad(c+4,"pc", false,-1, 63,0);
    tracep->declBus(c+390,"inst", false,-1, 31,0);
    tracep->declQuad(c+379,"rdata", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MEM ");
    tracep->declBus(c+251,"io_in_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+252,"io_in_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBus(c+253,"io_in_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+254,"io_in_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+256,"io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declBus(c+257,"io_in_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+258,"io_in_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+259,"io_in_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+261,"io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+263,"io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+265,"io_in_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declBit(c+252,"io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declQuad(c+254,"io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+256,"io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declBus(c+257,"io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+258,"io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+391,"io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+244,"io_mem_addr", false,-1, 63,0);
    tracep->declQuad(c+377,"io_mem_rdata", false,-1, 63,0);
    tracep->declQuad(c+248,"io_mem_wdata", false,-1, 63,0);
    tracep->declBus(c+250,"io_mem_wmask", false,-1, 7,0);
    tracep->declBit(c+247,"io_mem_ce", false,-1);
    tracep->declBit(c+246,"io_mem_we", false,-1);
    tracep->declQuad(c+375,"addr_temp", false,-1, 63,0);
    tracep->declBit(c+381,"mem_result_sign", false,-1);
    tracep->declBit(c+382,"mem_result_sign_1", false,-1);
    tracep->declBit(c+383,"mem_result_sign_2", false,-1);
    tracep->declBit(c+384,"mem_result_sign_3", false,-1);
    tracep->declQuad(c+393,"mem_result", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WB ");
    tracep->declBit(c+267,"io_in_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declQuad(c+268,"io_in_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+270,"io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declBus(c+242,"io_in_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+243,"io_in_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+271,"io_in_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declBit(c+267,"io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declQuad(c+268,"io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+270,"io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declBus(c+242,"io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+243,"io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+271,"io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem ");
    tracep->declBit(c+386,"reset", false,-1);
    tracep->declBit(c+385,"clk", false,-1);
    tracep->declQuad(c+244,"addr", false,-1, 63,0);
    tracep->declBit(c+246,"we", false,-1);
    tracep->declBit(c+247,"ce", false,-1);
    tracep->declQuad(c+248,"wdata", false,-1, 63,0);
    tracep->declQuad(c+377,"rdata", false,-1, 63,0);
    tracep->declBus(c+250,"wmask", false,-1, 7,0);
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
    VlWide<4>/*127:0*/ __Vtemp_h32213b7b__0;
    VlWide<4>/*127:0*/ __Vtemp_hf98c7323__0;
    VlWide<4>/*127:0*/ __Vtemp_hf56a95e4__0;
    // Body
    bufp->fullBit(oldp+1,(((0x6bU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                            ? (vlSelf->CoreTop__DOT__EX__DOT__src1 
                               == vlSelf->CoreTop__DOT__EX__DOT__src2)
                            : (IData)(vlSelf->CoreTop__DOT__EX__DOT___GEN_51))));
    bufp->fullBit(oldp+2,((3U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType))));
    bufp->fullBit(oldp+3,((1U & (IData)(((0x19U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                          ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1
                                          : ((0x48U 
                                              == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                              ? (0xfffffffffffffffeULL 
                                                 & vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1)
                                              : ((0x6bU 
                                                  == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                  ? vlSelf->CoreTop__DOT__EX__DOT___dnpc_T_9
                                                  : 
                                                 ((0x6cU 
                                                   == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                   ? vlSelf->CoreTop__DOT__EX__DOT___dnpc_T_9
                                                   : 
                                                  ((0x76U 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? vlSelf->CoreTop__DOT__EX__DOT___dnpc_T_9
                                                    : 
                                                   ((0xcU 
                                                     == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                     ? vlSelf->CoreTop__DOT__EX__DOT___dnpc_T_9
                                                     : 
                                                    ((0x7bU 
                                                      == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                      ? vlSelf->CoreTop__DOT__EX__DOT___dnpc_T_9
                                                      : 
                                                     ((0xbU 
                                                       == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                       ? vlSelf->CoreTop__DOT__EX__DOT___dnpc_T_9
                                                       : 0ULL))))))))))));
    bufp->fullQData(oldp+4,(vlSelf->CoreTop__DOT__IF__DOT__temp),64);
    bufp->fullQData(oldp+6,(vlSelf->CoreTop__DOT__ID_io_in_bits_r_PC),64);
    bufp->fullIData(oldp+8,(vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst),32);
    bufp->fullQData(oldp+9,(((0U == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                              >> 0xfU)))
                              ? 0ULL : vlSelf->CoreTop__DOT__rf
                             [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                        >> 0xfU))])),64);
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
    bufp->fullBit(oldp+14,((0U != ((0x13U == (0x707fU 
                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                    ? 0x40U : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_316)))));
    bufp->fullCData(oldp+15,((0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                       >> 0xfU))),5);
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
    bufp->fullQData(oldp+28,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_src2),64);
    bufp->fullQData(oldp+30,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm),64);
    bufp->fullQData(oldp+32,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC),64);
    bufp->fullIData(oldp+34,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_inst),32);
    bufp->fullQData(oldp+35,(((0U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType))
                               ? ((0x40U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                   ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1
                                   : ((0x68U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                       ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_7
                                       : ((0x44U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                           ? (vlSelf->CoreTop__DOT__EX__DOT__src1 
                                              | vlSelf->CoreTop__DOT__EX__DOT__src2)
                                           : ((0x69U 
                                               == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                               ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_10
                                               : ((0x71U 
                                                   == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                   ? 
                                                  (vlSelf->CoreTop__DOT__EX__DOT__src1 
                                                   & vlSelf->CoreTop__DOT__EX__DOT__src2)
                                                   : 
                                                  ((0x72U 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? 
                                                   (vlSelf->CoreTop__DOT__EX__DOT__src1 
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
                                                      : vlSelf->CoreTop__DOT__EX__DOT___GEN_14))))))))
                               : ((3U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType))
                                   ? ((3U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType))
                                       ? (4ULL + vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC)
                                       : 0ULL) : ((2U 
                                                   == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType))
                                                   ? 0ULL
                                                   : vlSelf->CoreTop__DOT__EX__DOT___GEN_36)))),64);
    bufp->fullQData(oldp+37,(((0U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src1Type))
                               ? vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_src2
                               : vlSelf->CoreTop__DOT__EX__DOT___GEN_1)),64);
    bufp->fullQData(oldp+39,(((0U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src2Type))
                               ? vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_src2
                               : vlSelf->CoreTop__DOT__EX__DOT___GEN_3)),64);
    bufp->fullBit(oldp+41,((0x42U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))));
    bufp->fullQData(oldp+42,(vlSelf->CoreTop__DOT__DIP_io_rf_0_REG),64);
    bufp->fullQData(oldp+44,(vlSelf->CoreTop__DOT__DIP_io_rf_1_REG),64);
    bufp->fullQData(oldp+46,(vlSelf->CoreTop__DOT__DIP_io_rf_2_REG),64);
    bufp->fullQData(oldp+48,(vlSelf->CoreTop__DOT__DIP_io_rf_3_REG),64);
    bufp->fullQData(oldp+50,(vlSelf->CoreTop__DOT__DIP_io_rf_4_REG),64);
    bufp->fullQData(oldp+52,(vlSelf->CoreTop__DOT__DIP_io_rf_5_REG),64);
    bufp->fullQData(oldp+54,(vlSelf->CoreTop__DOT__DIP_io_rf_6_REG),64);
    bufp->fullQData(oldp+56,(vlSelf->CoreTop__DOT__DIP_io_rf_7_REG),64);
    bufp->fullQData(oldp+58,(vlSelf->CoreTop__DOT__DIP_io_rf_8_REG),64);
    bufp->fullQData(oldp+60,(vlSelf->CoreTop__DOT__DIP_io_rf_9_REG),64);
    bufp->fullQData(oldp+62,(vlSelf->CoreTop__DOT__DIP_io_rf_10_REG),64);
    bufp->fullQData(oldp+64,(vlSelf->CoreTop__DOT__DIP_io_rf_11_REG),64);
    bufp->fullQData(oldp+66,(vlSelf->CoreTop__DOT__DIP_io_rf_12_REG),64);
    bufp->fullQData(oldp+68,(vlSelf->CoreTop__DOT__DIP_io_rf_13_REG),64);
    bufp->fullQData(oldp+70,(vlSelf->CoreTop__DOT__DIP_io_rf_14_REG),64);
    bufp->fullQData(oldp+72,(vlSelf->CoreTop__DOT__DIP_io_rf_15_REG),64);
    bufp->fullQData(oldp+74,(vlSelf->CoreTop__DOT__DIP_io_rf_16_REG),64);
    bufp->fullQData(oldp+76,(vlSelf->CoreTop__DOT__DIP_io_rf_17_REG),64);
    bufp->fullQData(oldp+78,(vlSelf->CoreTop__DOT__DIP_io_rf_18_REG),64);
    bufp->fullQData(oldp+80,(vlSelf->CoreTop__DOT__DIP_io_rf_19_REG),64);
    bufp->fullQData(oldp+82,(vlSelf->CoreTop__DOT__DIP_io_rf_20_REG),64);
    bufp->fullQData(oldp+84,(vlSelf->CoreTop__DOT__DIP_io_rf_21_REG),64);
    bufp->fullQData(oldp+86,(vlSelf->CoreTop__DOT__DIP_io_rf_22_REG),64);
    bufp->fullQData(oldp+88,(vlSelf->CoreTop__DOT__DIP_io_rf_23_REG),64);
    bufp->fullQData(oldp+90,(vlSelf->CoreTop__DOT__DIP_io_rf_24_REG),64);
    bufp->fullQData(oldp+92,(vlSelf->CoreTop__DOT__DIP_io_rf_25_REG),64);
    bufp->fullQData(oldp+94,(vlSelf->CoreTop__DOT__DIP_io_rf_26_REG),64);
    bufp->fullQData(oldp+96,(vlSelf->CoreTop__DOT__DIP_io_rf_27_REG),64);
    bufp->fullQData(oldp+98,(vlSelf->CoreTop__DOT__DIP_io_rf_28_REG),64);
    bufp->fullQData(oldp+100,(vlSelf->CoreTop__DOT__DIP_io_rf_29_REG),64);
    bufp->fullQData(oldp+102,(vlSelf->CoreTop__DOT__DIP_io_rf_30_REG),64);
    bufp->fullQData(oldp+104,(vlSelf->CoreTop__DOT__DIP_io_rf_31_REG),64);
    bufp->fullIData(oldp+106,(vlSelf->CoreTop__DOT__DIP_io_inst_REG),32);
    bufp->fullQData(oldp+107,(vlSelf->CoreTop__DOT__DIP_io_pc_REG),64);
    bufp->fullBit(oldp+109,(vlSelf->CoreTop__DOT__DIP_io_inst_valid_REG));
    bufp->fullQData(oldp+110,(vlSelf->CoreTop__DOT__rf[0]),64);
    bufp->fullQData(oldp+112,(vlSelf->CoreTop__DOT__rf[1]),64);
    bufp->fullQData(oldp+114,(vlSelf->CoreTop__DOT__rf[2]),64);
    bufp->fullQData(oldp+116,(vlSelf->CoreTop__DOT__rf[3]),64);
    bufp->fullQData(oldp+118,(vlSelf->CoreTop__DOT__rf[4]),64);
    bufp->fullQData(oldp+120,(vlSelf->CoreTop__DOT__rf[5]),64);
    bufp->fullQData(oldp+122,(vlSelf->CoreTop__DOT__rf[6]),64);
    bufp->fullQData(oldp+124,(vlSelf->CoreTop__DOT__rf[7]),64);
    bufp->fullQData(oldp+126,(vlSelf->CoreTop__DOT__rf[8]),64);
    bufp->fullQData(oldp+128,(vlSelf->CoreTop__DOT__rf[9]),64);
    bufp->fullQData(oldp+130,(vlSelf->CoreTop__DOT__rf[10]),64);
    bufp->fullQData(oldp+132,(vlSelf->CoreTop__DOT__rf[11]),64);
    bufp->fullQData(oldp+134,(vlSelf->CoreTop__DOT__rf[12]),64);
    bufp->fullQData(oldp+136,(vlSelf->CoreTop__DOT__rf[13]),64);
    bufp->fullQData(oldp+138,(vlSelf->CoreTop__DOT__rf[14]),64);
    bufp->fullQData(oldp+140,(vlSelf->CoreTop__DOT__rf[15]),64);
    bufp->fullQData(oldp+142,(vlSelf->CoreTop__DOT__rf[16]),64);
    bufp->fullQData(oldp+144,(vlSelf->CoreTop__DOT__rf[17]),64);
    bufp->fullQData(oldp+146,(vlSelf->CoreTop__DOT__rf[18]),64);
    bufp->fullQData(oldp+148,(vlSelf->CoreTop__DOT__rf[19]),64);
    bufp->fullQData(oldp+150,(vlSelf->CoreTop__DOT__rf[20]),64);
    bufp->fullQData(oldp+152,(vlSelf->CoreTop__DOT__rf[21]),64);
    bufp->fullQData(oldp+154,(vlSelf->CoreTop__DOT__rf[22]),64);
    bufp->fullQData(oldp+156,(vlSelf->CoreTop__DOT__rf[23]),64);
    bufp->fullQData(oldp+158,(vlSelf->CoreTop__DOT__rf[24]),64);
    bufp->fullQData(oldp+160,(vlSelf->CoreTop__DOT__rf[25]),64);
    bufp->fullQData(oldp+162,(vlSelf->CoreTop__DOT__rf[26]),64);
    bufp->fullQData(oldp+164,(vlSelf->CoreTop__DOT__rf[27]),64);
    bufp->fullQData(oldp+166,(vlSelf->CoreTop__DOT__rf[28]),64);
    bufp->fullQData(oldp+168,(vlSelf->CoreTop__DOT__rf[29]),64);
    bufp->fullQData(oldp+170,(vlSelf->CoreTop__DOT__rf[30]),64);
    bufp->fullQData(oldp+172,(vlSelf->CoreTop__DOT__rf[31]),64);
    bufp->fullQData(oldp+174,(vlSelf->CoreTop__DOT__rf
                              [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                         >> 0xfU))]),64);
    bufp->fullQData(oldp+176,(vlSelf->CoreTop__DOT__rf
                              [0U]),64);
    bufp->fullQData(oldp+178,(vlSelf->CoreTop__DOT__rf
                              [1U]),64);
    bufp->fullQData(oldp+180,(vlSelf->CoreTop__DOT__rf
                              [2U]),64);
    bufp->fullQData(oldp+182,(vlSelf->CoreTop__DOT__rf
                              [3U]),64);
    bufp->fullQData(oldp+184,(vlSelf->CoreTop__DOT__rf
                              [4U]),64);
    bufp->fullQData(oldp+186,(vlSelf->CoreTop__DOT__rf
                              [5U]),64);
    bufp->fullQData(oldp+188,(vlSelf->CoreTop__DOT__rf
                              [6U]),64);
    bufp->fullQData(oldp+190,(vlSelf->CoreTop__DOT__rf
                              [7U]),64);
    bufp->fullQData(oldp+192,(vlSelf->CoreTop__DOT__rf
                              [8U]),64);
    bufp->fullQData(oldp+194,(vlSelf->CoreTop__DOT__rf
                              [9U]),64);
    bufp->fullQData(oldp+196,(vlSelf->CoreTop__DOT__rf
                              [0xaU]),64);
    bufp->fullQData(oldp+198,(vlSelf->CoreTop__DOT__rf
                              [0xbU]),64);
    bufp->fullQData(oldp+200,(vlSelf->CoreTop__DOT__rf
                              [0xcU]),64);
    bufp->fullQData(oldp+202,(vlSelf->CoreTop__DOT__rf
                              [0xdU]),64);
    bufp->fullQData(oldp+204,(vlSelf->CoreTop__DOT__rf
                              [0xeU]),64);
    bufp->fullQData(oldp+206,(vlSelf->CoreTop__DOT__rf
                              [0xfU]),64);
    bufp->fullQData(oldp+208,(vlSelf->CoreTop__DOT__rf
                              [0x10U]),64);
    bufp->fullQData(oldp+210,(vlSelf->CoreTop__DOT__rf
                              [0x11U]),64);
    bufp->fullQData(oldp+212,(vlSelf->CoreTop__DOT__rf
                              [0x12U]),64);
    bufp->fullQData(oldp+214,(vlSelf->CoreTop__DOT__rf
                              [0x13U]),64);
    bufp->fullQData(oldp+216,(vlSelf->CoreTop__DOT__rf
                              [0x14U]),64);
    bufp->fullQData(oldp+218,(vlSelf->CoreTop__DOT__rf
                              [0x15U]),64);
    bufp->fullQData(oldp+220,(vlSelf->CoreTop__DOT__rf
                              [0x16U]),64);
    bufp->fullQData(oldp+222,(vlSelf->CoreTop__DOT__rf
                              [0x17U]),64);
    bufp->fullQData(oldp+224,(vlSelf->CoreTop__DOT__rf
                              [0x18U]),64);
    bufp->fullQData(oldp+226,(vlSelf->CoreTop__DOT__rf
                              [0x19U]),64);
    bufp->fullQData(oldp+228,(vlSelf->CoreTop__DOT__rf
                              [0x1aU]),64);
    bufp->fullQData(oldp+230,(vlSelf->CoreTop__DOT__rf
                              [0x1bU]),64);
    bufp->fullQData(oldp+232,(vlSelf->CoreTop__DOT__rf
                              [0x1cU]),64);
    bufp->fullQData(oldp+234,(vlSelf->CoreTop__DOT__rf
                              [0x1dU]),64);
    bufp->fullQData(oldp+236,(vlSelf->CoreTop__DOT__rf
                              [0x1eU]),64);
    bufp->fullQData(oldp+238,(vlSelf->CoreTop__DOT__rf
                              [0x1fU]),64);
    bufp->fullQData(oldp+240,(((0U == (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest))
                                ? 0ULL : vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfData)),64);
    bufp->fullCData(oldp+242,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest),5);
    bufp->fullBit(oldp+243,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfWen));
    bufp->fullQData(oldp+244,(((0x45U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                ? vlSelf->CoreTop__DOT__MEM__DOT___addr_temp_T_1
                                : vlSelf->CoreTop__DOT__MEM__DOT___GEN_16)),64);
    bufp->fullBit(oldp+246,(((0x45U != (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype)) 
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
    bufp->fullBit(oldp+247,((4U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_fuType))));
    bufp->fullQData(oldp+248,(((0x46U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
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
    bufp->fullCData(oldp+250,(((0x46U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                ? 0xffU : (IData)(vlSelf->CoreTop__DOT__MEM__DOT___GEN_32))),8);
    bufp->fullCData(oldp+251,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_fuType),3);
    bufp->fullBit(oldp+252,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_inst_valid));
    bufp->fullCData(oldp+253,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype),7);
    bufp->fullQData(oldp+254,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_PC),64);
    bufp->fullIData(oldp+256,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_inst),32);
    bufp->fullCData(oldp+257,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest),5);
    bufp->fullBit(oldp+258,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfWen));
    bufp->fullQData(oldp+259,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfData),64);
    bufp->fullQData(oldp+261,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src1),64);
    bufp->fullQData(oldp+263,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2),64);
    bufp->fullQData(oldp+265,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_Imm),64);
    bufp->fullBit(oldp+267,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_inst_valid));
    bufp->fullQData(oldp+268,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_PC),64);
    bufp->fullIData(oldp+270,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_inst),32);
    bufp->fullQData(oldp+271,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfData),64);
    bufp->fullIData(oldp+273,(vlSelf->CoreTop__DOT__io_inst_REG),32);
    bufp->fullQData(oldp+274,(vlSelf->CoreTop__DOT__DIP__DOT__rf[0]),64);
    bufp->fullQData(oldp+276,(vlSelf->CoreTop__DOT__DIP__DOT__rf[1]),64);
    bufp->fullQData(oldp+278,(vlSelf->CoreTop__DOT__DIP__DOT__rf[2]),64);
    bufp->fullQData(oldp+280,(vlSelf->CoreTop__DOT__DIP__DOT__rf[3]),64);
    bufp->fullQData(oldp+282,(vlSelf->CoreTop__DOT__DIP__DOT__rf[4]),64);
    bufp->fullQData(oldp+284,(vlSelf->CoreTop__DOT__DIP__DOT__rf[5]),64);
    bufp->fullQData(oldp+286,(vlSelf->CoreTop__DOT__DIP__DOT__rf[6]),64);
    bufp->fullQData(oldp+288,(vlSelf->CoreTop__DOT__DIP__DOT__rf[7]),64);
    bufp->fullQData(oldp+290,(vlSelf->CoreTop__DOT__DIP__DOT__rf[8]),64);
    bufp->fullQData(oldp+292,(vlSelf->CoreTop__DOT__DIP__DOT__rf[9]),64);
    bufp->fullQData(oldp+294,(vlSelf->CoreTop__DOT__DIP__DOT__rf[10]),64);
    bufp->fullQData(oldp+296,(vlSelf->CoreTop__DOT__DIP__DOT__rf[11]),64);
    bufp->fullQData(oldp+298,(vlSelf->CoreTop__DOT__DIP__DOT__rf[12]),64);
    bufp->fullQData(oldp+300,(vlSelf->CoreTop__DOT__DIP__DOT__rf[13]),64);
    bufp->fullQData(oldp+302,(vlSelf->CoreTop__DOT__DIP__DOT__rf[14]),64);
    bufp->fullQData(oldp+304,(vlSelf->CoreTop__DOT__DIP__DOT__rf[15]),64);
    bufp->fullQData(oldp+306,(vlSelf->CoreTop__DOT__DIP__DOT__rf[16]),64);
    bufp->fullQData(oldp+308,(vlSelf->CoreTop__DOT__DIP__DOT__rf[17]),64);
    bufp->fullQData(oldp+310,(vlSelf->CoreTop__DOT__DIP__DOT__rf[18]),64);
    bufp->fullQData(oldp+312,(vlSelf->CoreTop__DOT__DIP__DOT__rf[19]),64);
    bufp->fullQData(oldp+314,(vlSelf->CoreTop__DOT__DIP__DOT__rf[20]),64);
    bufp->fullQData(oldp+316,(vlSelf->CoreTop__DOT__DIP__DOT__rf[21]),64);
    bufp->fullQData(oldp+318,(vlSelf->CoreTop__DOT__DIP__DOT__rf[22]),64);
    bufp->fullQData(oldp+320,(vlSelf->CoreTop__DOT__DIP__DOT__rf[23]),64);
    bufp->fullQData(oldp+322,(vlSelf->CoreTop__DOT__DIP__DOT__rf[24]),64);
    bufp->fullQData(oldp+324,(vlSelf->CoreTop__DOT__DIP__DOT__rf[25]),64);
    bufp->fullQData(oldp+326,(vlSelf->CoreTop__DOT__DIP__DOT__rf[26]),64);
    bufp->fullQData(oldp+328,(vlSelf->CoreTop__DOT__DIP__DOT__rf[27]),64);
    bufp->fullQData(oldp+330,(vlSelf->CoreTop__DOT__DIP__DOT__rf[28]),64);
    bufp->fullQData(oldp+332,(vlSelf->CoreTop__DOT__DIP__DOT__rf[29]),64);
    bufp->fullQData(oldp+334,(vlSelf->CoreTop__DOT__DIP__DOT__rf[30]),64);
    bufp->fullQData(oldp+336,(vlSelf->CoreTop__DOT__DIP__DOT__rf[31]),64);
    bufp->fullIData(oldp+338,(vlSelf->CoreTop__DOT__DIP__DOT__IN[0]),32);
    bufp->fullIData(oldp+339,(vlSelf->CoreTop__DOT__DIP__DOT__IN[1]),32);
    bufp->fullIData(oldp+340,(vlSelf->CoreTop__DOT__DIP__DOT__IN[2]),32);
    bufp->fullIData(oldp+341,(vlSelf->CoreTop__DOT__DIP__DOT__IN[3]),32);
    bufp->fullQData(oldp+342,(vlSelf->CoreTop__DOT__EX__DOT__src1),64);
    bufp->fullQData(oldp+344,(vlSelf->CoreTop__DOT__EX__DOT__src2),64);
    bufp->fullBit(oldp+346,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+347,((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_19[0U] 
                             >> 0x1fU)));
    bufp->fullBit(oldp+348,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_28 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+349,((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_38 
                             >> 0x1fU)));
    bufp->fullBit(oldp+350,((vlSelf->CoreTop__DOT__EX__DOT___GEN_22 
                             >> 0x1fU)));
    bufp->fullBit(oldp+351,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_10 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+352,((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_64 
                             >> 0x1fU)));
    bufp->fullQData(oldp+353,(((0x40U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1
                                : ((0x68U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                    ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_7
                                    : ((0x44U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                        ? (vlSelf->CoreTop__DOT__EX__DOT__src1 
                                           | vlSelf->CoreTop__DOT__EX__DOT__src2)
                                        : ((0x69U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                            ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_10
                                            : ((0x71U 
                                                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                ? (vlSelf->CoreTop__DOT__EX__DOT__src1 
                                                   & vlSelf->CoreTop__DOT__EX__DOT__src2)
                                                : (
                                                   (0x72U 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? 
                                                   (vlSelf->CoreTop__DOT__EX__DOT__src1 
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
    bufp->fullBit(oldp+355,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_5[0U] 
                             >> 0x1fU)));
    bufp->fullBit(oldp+356,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_16[0U] 
                             >> 0x1fU)));
    bufp->fullBit(oldp+357,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_25 
                             >> 0x1fU)));
    bufp->fullBit(oldp+358,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_31 
                             >> 0x1fU)));
    bufp->fullQData(oldp+359,(((0x6aU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                ? ((vlSelf->CoreTop__DOT__EX__DOT__src1 
                                    < vlSelf->CoreTop__DOT__EX__DOT__src2)
                                    ? 1ULL : 0ULL) : 
                               ((2U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                 ? (VL_LTS_IQQ(64, vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_58, vlSelf->CoreTop__DOT__EX__DOT__src2)
                                     ? 1ULL : 0ULL)
                                 : 0ULL))),64);
    bufp->fullQData(oldp+361,(((3U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType))
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
    VL_EXTEND_WQ(127,64, __Vtemp_h32213b7b__0, vlSelf->CoreTop__DOT__EX__DOT__src1);
    VL_SHIFTL_WWI(127,127,6, __Vtemp_hf98c7323__0, __Vtemp_h32213b7b__0, 
                  (0x3fU & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)));
    VL_EXTEND_WQ(127,64, __Vtemp_hf56a95e4__0, ((0x75U 
                                                 == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                 ? 
                                                (vlSelf->CoreTop__DOT__EX__DOT__src1 
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
    bufp->fullQData(oldp+363,((((QData)((IData)(((0x6eU 
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
                                                   __Vtemp_hf98c7323__0[1U]
                                                    : 
                                                   __Vtemp_hf56a95e4__0[1U]))))) 
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
                                                               __Vtemp_hf98c7323__0[0U]
                                                                : 
                                                               __Vtemp_hf56a95e4__0[0U]))))))),64);
    bufp->fullQData(oldp+365,(((0x6bU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
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
    bufp->fullQData(oldp+367,(((0x19U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1
                                : ((0x48U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                    ? (0xfffffffffffffffeULL 
                                       & vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1)
                                    : ((0x6bU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                        ? vlSelf->CoreTop__DOT__EX__DOT___dnpc_T_9
                                        : ((0x6cU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                            ? vlSelf->CoreTop__DOT__EX__DOT___dnpc_T_9
                                            : ((0x76U 
                                                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                ? vlSelf->CoreTop__DOT__EX__DOT___dnpc_T_9
                                                : (
                                                   (0xcU 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? vlSelf->CoreTop__DOT__EX__DOT___dnpc_T_9
                                                    : 
                                                   ((0x7bU 
                                                     == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                     ? vlSelf->CoreTop__DOT__EX__DOT___dnpc_T_9
                                                     : 
                                                    ((0xbU 
                                                      == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                      ? vlSelf->CoreTop__DOT__EX__DOT___dnpc_T_9
                                                      : 0ULL))))))))),64);
    bufp->fullCData(oldp+369,(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0),4);
    bufp->fullCData(oldp+370,((((7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                 ? 2U : 0U) | ((3U 
                                                == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                                ? 2U
                                                : 0U))),2);
    bufp->fullBit(oldp+371,((((8U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)) 
                              | (7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))) 
                             | (3U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)))));
    bufp->fullBit(oldp+372,((vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                             >> 0x1fU)));
    bufp->fullBit(oldp+373,((1U & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                   >> 0x13U))));
    bufp->fullBit(oldp+374,((vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                             >> 0x1fU)));
    bufp->fullQData(oldp+375,(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp),64);
    bufp->fullQData(oldp+377,(vlSelf->CoreTop__DOT__mem_rdata),64);
    bufp->fullQData(oldp+379,(vlSelf->CoreTop__DOT__IFM__DOT__rdata),64);
    bufp->fullBit(oldp+381,((1U & (IData)((vlSelf->CoreTop__DOT__mem_rdata 
                                           >> 0x3fU)))));
    bufp->fullBit(oldp+382,((1U & (IData)((vlSelf->CoreTop__DOT__mem_rdata 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+383,((1U & ((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_27) 
                                   >> 7U))));
    bufp->fullBit(oldp+384,((1U & ((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_44) 
                                   >> 0xfU))));
    bufp->fullBit(oldp+385,(vlSelf->clock));
    bufp->fullBit(oldp+386,(vlSelf->reset));
    bufp->fullQData(oldp+387,(vlSelf->io_pc),64);
    bufp->fullIData(oldp+389,(vlSelf->io_inst),32);
    bufp->fullIData(oldp+390,(((1U & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                              >> 2U)))
                                ? (IData)((vlSelf->CoreTop__DOT__IFM__DOT__rdata 
                                           >> 0x20U))
                                : (IData)(vlSelf->CoreTop__DOT__IFM__DOT__rdata))),32);
    bufp->fullQData(oldp+391,(((4U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_fuType))
                                ? ((0x45U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
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
                                            ? ((1U 
                                                & (IData)(
                                                          (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                           >> 2U)))
                                                ? (QData)((IData)(
                                                                  (vlSelf->CoreTop__DOT__mem_rdata 
                                                                   >> 0x20U)))
                                                : (QData)((IData)(vlSelf->CoreTop__DOT__mem_rdata)))
                                            : ((0x6fU 
                                                == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                                ? (QData)((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_27))
                                                : (
                                                   (0xeU 
                                                    == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? 
                                                   ((((0x80U 
                                                       & (IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_27))
                                                       ? 0xffffffffffffffULL
                                                       : 0ULL) 
                                                     << 8U) 
                                                    | (QData)((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_27)))
                                                    : 
                                                   ((3U 
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
                                                      : 0ULL)))))))
                                : vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfData)),64);
    bufp->fullQData(oldp+393,(((0x45U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
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
    bufp->fullBit(oldp+395,(1U));
    bufp->fullCData(oldp+396,(0U),5);
    bufp->fullCData(oldp+397,(1U),5);
    bufp->fullCData(oldp+398,(2U),5);
    bufp->fullCData(oldp+399,(3U),5);
    bufp->fullCData(oldp+400,(4U),5);
    bufp->fullCData(oldp+401,(5U),5);
    bufp->fullCData(oldp+402,(6U),5);
    bufp->fullCData(oldp+403,(7U),5);
    bufp->fullCData(oldp+404,(8U),5);
    bufp->fullCData(oldp+405,(9U),5);
    bufp->fullCData(oldp+406,(0xaU),5);
    bufp->fullCData(oldp+407,(0xbU),5);
    bufp->fullCData(oldp+408,(0xcU),5);
    bufp->fullCData(oldp+409,(0xdU),5);
    bufp->fullCData(oldp+410,(0xeU),5);
    bufp->fullCData(oldp+411,(0xfU),5);
    bufp->fullCData(oldp+412,(0x10U),5);
    bufp->fullCData(oldp+413,(0x11U),5);
    bufp->fullCData(oldp+414,(0x12U),5);
    bufp->fullCData(oldp+415,(0x13U),5);
    bufp->fullCData(oldp+416,(0x14U),5);
    bufp->fullCData(oldp+417,(0x15U),5);
    bufp->fullCData(oldp+418,(0x16U),5);
    bufp->fullCData(oldp+419,(0x17U),5);
    bufp->fullCData(oldp+420,(0x18U),5);
    bufp->fullCData(oldp+421,(0x19U),5);
    bufp->fullCData(oldp+422,(0x1aU),5);
    bufp->fullCData(oldp+423,(0x1bU),5);
    bufp->fullCData(oldp+424,(0x1cU),5);
    bufp->fullCData(oldp+425,(0x1dU),5);
    bufp->fullCData(oldp+426,(0x1eU),5);
    bufp->fullCData(oldp+427,(0x1fU),5);
}
