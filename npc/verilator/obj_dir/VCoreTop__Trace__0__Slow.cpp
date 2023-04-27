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
    tracep->declBit(c+454,"clock", false,-1);
    tracep->declBit(c+455,"reset", false,-1);
    tracep->declQuad(c+456,"io_pc", false,-1, 63,0);
    tracep->declBus(c+458,"io_inst", false,-1, 31,0);
    tracep->pushNamePrefix("CoreTop ");
    tracep->declBit(c+454,"clock", false,-1);
    tracep->declBit(c+455,"reset", false,-1);
    tracep->declQuad(c+456,"io_pc", false,-1, 63,0);
    tracep->declBus(c+458,"io_inst", false,-1, 31,0);
    tracep->declBit(c+454,"IF_clock", false,-1);
    tracep->declBit(c+455,"IF_reset", false,-1);
    tracep->declBit(c+395,"IF_io_branch_io_is_branch", false,-1);
    tracep->declBit(c+1,"IF_io_branch_io_is_jump", false,-1);
    tracep->declQuad(c+396,"IF_io_branch_io_dnpc", false,-1, 63,0);
    tracep->declBus(c+398,"IF_io_inst", false,-1, 31,0);
    tracep->declBit(c+2,"IF_io_out_ready", false,-1);
    tracep->declQuad(c+3,"IF_io_out_bits_PC", false,-1, 63,0);
    tracep->declBus(c+399,"IF_io_out_bits_Inst", false,-1, 31,0);
    tracep->declBit(c+421,"IF_io_flush", false,-1);
    tracep->declBit(c+455,"IFM_reset", false,-1);
    tracep->declBit(c+454,"IFM_clk", false,-1);
    tracep->declQuad(c+3,"IFM_pc", false,-1, 63,0);
    tracep->declBus(c+398,"IFM_inst", false,-1, 31,0);
    tracep->declBit(c+2,"ID_io_in_ready", false,-1);
    tracep->declQuad(c+5,"ID_io_in_bits_PC", false,-1, 63,0);
    tracep->declBus(c+7,"ID_io_in_bits_Inst", false,-1, 31,0);
    tracep->declQuad(c+400,"ID_io_REG1", false,-1, 63,0);
    tracep->declQuad(c+402,"ID_io_REG2", false,-1, 63,0);
    tracep->declBit(c+421,"ID_io_flush", false,-1);
    tracep->declBit(c+2,"ID_io_out_ready", false,-1);
    tracep->declBus(c+8,"ID_io_out_bits_ctrl_signal_src1Type", false,-1, 2,0);
    tracep->declBus(c+9,"ID_io_out_bits_ctrl_signal_src2Type", false,-1, 2,0);
    tracep->declBus(c+10,"ID_io_out_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+422,"ID_io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBus(c+11,"ID_io_out_bits_ctrl_signal_rfSrc1", false,-1, 4,0);
    tracep->declBus(c+12,"ID_io_out_bits_ctrl_signal_rfSrc2", false,-1, 4,0);
    tracep->declBit(c+404,"ID_io_out_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+13,"ID_io_out_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declBus(c+14,"ID_io_out_bits_ctrl_signal_rfDest", false,-1, 4,0);
    tracep->declQuad(c+400,"ID_io_out_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+402,"ID_io_out_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+15,"ID_io_out_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declQuad(c+5,"ID_io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+7,"ID_io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declBit(c+454,"EX_clock", false,-1);
    tracep->declBit(c+455,"EX_reset", false,-1);
    tracep->declBit(c+2,"EX_io_in_ready", false,-1);
    tracep->declBit(c+17,"EX_io_in_valid", false,-1);
    tracep->declBus(c+18,"EX_io_in_bits_ctrl_signal_src1Type", false,-1, 2,0);
    tracep->declBus(c+19,"EX_io_in_bits_ctrl_signal_src2Type", false,-1, 2,0);
    tracep->declBus(c+20,"EX_io_in_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+21,"EX_io_in_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBus(c+22,"EX_io_in_bits_ctrl_signal_rfSrc1", false,-1, 4,0);
    tracep->declBus(c+23,"EX_io_in_bits_ctrl_signal_rfSrc2", false,-1, 4,0);
    tracep->declBit(c+24,"EX_io_in_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+25,"EX_io_in_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declBus(c+26,"EX_io_in_bits_ctrl_signal_rfDest", false,-1, 4,0);
    tracep->declQuad(c+27,"EX_io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+29,"EX_io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+31,"EX_io_in_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declQuad(c+33,"EX_io_in_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+35,"EX_io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+423,"EX_io_src1", false,-1, 63,0);
    tracep->declQuad(c+425,"EX_io_src2", false,-1, 63,0);
    tracep->declBit(c+395,"EX_io_branchIO_is_branch", false,-1);
    tracep->declBit(c+1,"EX_io_branchIO_is_jump", false,-1);
    tracep->declQuad(c+396,"EX_io_branchIO_dnpc", false,-1, 63,0);
    tracep->declBit(c+36,"EX_io_out_valid", false,-1);
    tracep->declBus(c+20,"EX_io_out_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+21,"EX_io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+24,"EX_io_out_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+25,"EX_io_out_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+33,"EX_io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+35,"EX_io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+396,"EX_io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+26,"EX_io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+37,"EX_io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+427,"EX_io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+405,"EX_io_out_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+407,"EX_io_out_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+31,"EX_io_out_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declBit(c+38,"EX_io_is_break", false,-1);
    tracep->declBit(c+421,"EX_io_is_flush", false,-1);
    tracep->declBit(c+39,"DIP_is_break", false,-1);
    tracep->declQuad(c+40,"DIP_rf_0", false,-1, 63,0);
    tracep->declQuad(c+42,"DIP_rf_1", false,-1, 63,0);
    tracep->declQuad(c+44,"DIP_rf_2", false,-1, 63,0);
    tracep->declQuad(c+46,"DIP_rf_3", false,-1, 63,0);
    tracep->declQuad(c+48,"DIP_rf_4", false,-1, 63,0);
    tracep->declQuad(c+50,"DIP_rf_5", false,-1, 63,0);
    tracep->declQuad(c+52,"DIP_rf_6", false,-1, 63,0);
    tracep->declQuad(c+54,"DIP_rf_7", false,-1, 63,0);
    tracep->declQuad(c+56,"DIP_rf_8", false,-1, 63,0);
    tracep->declQuad(c+58,"DIP_rf_9", false,-1, 63,0);
    tracep->declQuad(c+60,"DIP_rf_10", false,-1, 63,0);
    tracep->declQuad(c+62,"DIP_rf_11", false,-1, 63,0);
    tracep->declQuad(c+64,"DIP_rf_12", false,-1, 63,0);
    tracep->declQuad(c+66,"DIP_rf_13", false,-1, 63,0);
    tracep->declQuad(c+68,"DIP_rf_14", false,-1, 63,0);
    tracep->declQuad(c+70,"DIP_rf_15", false,-1, 63,0);
    tracep->declQuad(c+72,"DIP_rf_16", false,-1, 63,0);
    tracep->declQuad(c+74,"DIP_rf_17", false,-1, 63,0);
    tracep->declQuad(c+76,"DIP_rf_18", false,-1, 63,0);
    tracep->declQuad(c+78,"DIP_rf_19", false,-1, 63,0);
    tracep->declQuad(c+80,"DIP_rf_20", false,-1, 63,0);
    tracep->declQuad(c+82,"DIP_rf_21", false,-1, 63,0);
    tracep->declQuad(c+84,"DIP_rf_22", false,-1, 63,0);
    tracep->declQuad(c+86,"DIP_rf_23", false,-1, 63,0);
    tracep->declQuad(c+88,"DIP_rf_24", false,-1, 63,0);
    tracep->declQuad(c+90,"DIP_rf_25", false,-1, 63,0);
    tracep->declQuad(c+92,"DIP_rf_26", false,-1, 63,0);
    tracep->declQuad(c+94,"DIP_rf_27", false,-1, 63,0);
    tracep->declQuad(c+96,"DIP_rf_28", false,-1, 63,0);
    tracep->declQuad(c+98,"DIP_rf_29", false,-1, 63,0);
    tracep->declQuad(c+100,"DIP_rf_30", false,-1, 63,0);
    tracep->declQuad(c+102,"DIP_rf_31", false,-1, 63,0);
    tracep->declBus(c+104,"DIP_inst", false,-1, 31,0);
    tracep->declQuad(c+105,"DIP_pc", false,-1, 63,0);
    tracep->declBit(c+107,"DIP_inst_valid", false,-1);
    tracep->declQuad(c+108,"DIP_dnpc", false,-1, 63,0);
    tracep->declBit(c+110,"DIP_is_skip", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+111+i*2,"rf", true,(i+0), 63,0);
    }
    tracep->declBit(c+459,"rf_bypass_io_Reg1_MPORT_en", false,-1);
    tracep->declBus(c+11,"rf_bypass_io_Reg1_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+175,"rf_bypass_io_Reg1_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+459,"rf_bypass_io_Reg2_MPORT_en", false,-1);
    tracep->declBus(c+12,"rf_bypass_io_Reg2_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+177,"rf_bypass_io_Reg2_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+459,"rf_DIP_io_rf_0_MPORT_en", false,-1);
    tracep->declBus(c+460,"rf_DIP_io_rf_0_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+40,"rf_DIP_io_rf_0_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+459,"rf_DIP_io_rf_1_MPORT_en", false,-1);
    tracep->declBus(c+461,"rf_DIP_io_rf_1_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+42,"rf_DIP_io_rf_1_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+459,"rf_DIP_io_rf_2_MPORT_en", false,-1);
    tracep->declBus(c+462,"rf_DIP_io_rf_2_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+44,"rf_DIP_io_rf_2_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+459,"rf_DIP_io_rf_3_MPORT_en", false,-1);
    tracep->declBus(c+463,"rf_DIP_io_rf_3_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+46,"rf_DIP_io_rf_3_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+459,"rf_DIP_io_rf_4_MPORT_en", false,-1);
    tracep->declBus(c+464,"rf_DIP_io_rf_4_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+48,"rf_DIP_io_rf_4_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+459,"rf_DIP_io_rf_5_MPORT_en", false,-1);
    tracep->declBus(c+465,"rf_DIP_io_rf_5_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+50,"rf_DIP_io_rf_5_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+459,"rf_DIP_io_rf_6_MPORT_en", false,-1);
    tracep->declBus(c+466,"rf_DIP_io_rf_6_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+52,"rf_DIP_io_rf_6_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+459,"rf_DIP_io_rf_7_MPORT_en", false,-1);
    tracep->declBus(c+467,"rf_DIP_io_rf_7_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+54,"rf_DIP_io_rf_7_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+459,"rf_DIP_io_rf_8_MPORT_en", false,-1);
    tracep->declBus(c+468,"rf_DIP_io_rf_8_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+56,"rf_DIP_io_rf_8_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+459,"rf_DIP_io_rf_9_MPORT_en", false,-1);
    tracep->declBus(c+469,"rf_DIP_io_rf_9_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+58,"rf_DIP_io_rf_9_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+459,"rf_DIP_io_rf_10_MPORT_en", false,-1);
    tracep->declBus(c+470,"rf_DIP_io_rf_10_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+60,"rf_DIP_io_rf_10_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+459,"rf_DIP_io_rf_11_MPORT_en", false,-1);
    tracep->declBus(c+471,"rf_DIP_io_rf_11_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+62,"rf_DIP_io_rf_11_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+459,"rf_DIP_io_rf_12_MPORT_en", false,-1);
    tracep->declBus(c+472,"rf_DIP_io_rf_12_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+64,"rf_DIP_io_rf_12_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+459,"rf_DIP_io_rf_13_MPORT_en", false,-1);
    tracep->declBus(c+473,"rf_DIP_io_rf_13_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+66,"rf_DIP_io_rf_13_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+459,"rf_DIP_io_rf_14_MPORT_en", false,-1);
    tracep->declBus(c+474,"rf_DIP_io_rf_14_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+68,"rf_DIP_io_rf_14_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+459,"rf_DIP_io_rf_15_MPORT_en", false,-1);
    tracep->declBus(c+475,"rf_DIP_io_rf_15_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+70,"rf_DIP_io_rf_15_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+459,"rf_DIP_io_rf_16_MPORT_en", false,-1);
    tracep->declBus(c+476,"rf_DIP_io_rf_16_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+72,"rf_DIP_io_rf_16_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+459,"rf_DIP_io_rf_17_MPORT_en", false,-1);
    tracep->declBus(c+477,"rf_DIP_io_rf_17_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+74,"rf_DIP_io_rf_17_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+459,"rf_DIP_io_rf_18_MPORT_en", false,-1);
    tracep->declBus(c+478,"rf_DIP_io_rf_18_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+76,"rf_DIP_io_rf_18_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+459,"rf_DIP_io_rf_19_MPORT_en", false,-1);
    tracep->declBus(c+479,"rf_DIP_io_rf_19_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+78,"rf_DIP_io_rf_19_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+459,"rf_DIP_io_rf_20_MPORT_en", false,-1);
    tracep->declBus(c+480,"rf_DIP_io_rf_20_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+80,"rf_DIP_io_rf_20_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+459,"rf_DIP_io_rf_21_MPORT_en", false,-1);
    tracep->declBus(c+481,"rf_DIP_io_rf_21_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+82,"rf_DIP_io_rf_21_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+459,"rf_DIP_io_rf_22_MPORT_en", false,-1);
    tracep->declBus(c+482,"rf_DIP_io_rf_22_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+84,"rf_DIP_io_rf_22_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+459,"rf_DIP_io_rf_23_MPORT_en", false,-1);
    tracep->declBus(c+483,"rf_DIP_io_rf_23_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+86,"rf_DIP_io_rf_23_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+459,"rf_DIP_io_rf_24_MPORT_en", false,-1);
    tracep->declBus(c+484,"rf_DIP_io_rf_24_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+88,"rf_DIP_io_rf_24_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+459,"rf_DIP_io_rf_25_MPORT_en", false,-1);
    tracep->declBus(c+485,"rf_DIP_io_rf_25_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+90,"rf_DIP_io_rf_25_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+459,"rf_DIP_io_rf_26_MPORT_en", false,-1);
    tracep->declBus(c+486,"rf_DIP_io_rf_26_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+92,"rf_DIP_io_rf_26_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+459,"rf_DIP_io_rf_27_MPORT_en", false,-1);
    tracep->declBus(c+487,"rf_DIP_io_rf_27_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+94,"rf_DIP_io_rf_27_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+459,"rf_DIP_io_rf_28_MPORT_en", false,-1);
    tracep->declBus(c+488,"rf_DIP_io_rf_28_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+96,"rf_DIP_io_rf_28_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+459,"rf_DIP_io_rf_29_MPORT_en", false,-1);
    tracep->declBus(c+489,"rf_DIP_io_rf_29_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+98,"rf_DIP_io_rf_29_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+459,"rf_DIP_io_rf_30_MPORT_en", false,-1);
    tracep->declBus(c+490,"rf_DIP_io_rf_30_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+100,"rf_DIP_io_rf_30_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+459,"rf_DIP_io_rf_31_MPORT_en", false,-1);
    tracep->declBus(c+491,"rf_DIP_io_rf_31_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+102,"rf_DIP_io_rf_31_MPORT_data", false,-1, 63,0);
    tracep->declQuad(c+179,"rf_MPORT_data", false,-1, 63,0);
    tracep->declBus(c+181,"rf_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+459,"rf_MPORT_mask", false,-1);
    tracep->declBit(c+182,"rf_MPORT_en", false,-1);
    tracep->declQuad(c+183,"mem_addr", false,-1, 63,0);
    tracep->declBit(c+455,"mem_reset", false,-1);
    tracep->declBit(c+454,"mem_clk", false,-1);
    tracep->declBit(c+185,"mem_we", false,-1);
    tracep->declBit(c+186,"mem_ce", false,-1);
    tracep->declQuad(c+187,"mem_wdata", false,-1, 63,0);
    tracep->declQuad(c+429,"mem_rdata", false,-1, 63,0);
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
    tracep->declBit(c+209,"MEM_io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+193,"MEM_io_out_bits_ctrl_signal_rfWen", false,-1);
    tracep->declQuad(c+195,"MEM_io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+197,"MEM_io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+198,"MEM_io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBit(c+210,"MEM_io_out_bits_ctrl_flow_skip", false,-1);
    tracep->declBus(c+200,"MEM_io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+211,"MEM_io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+431,"MEM_io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+183,"MEM_io_mem_addr", false,-1, 63,0);
    tracep->declQuad(c+429,"MEM_io_mem_rdata", false,-1, 63,0);
    tracep->declQuad(c+187,"MEM_io_mem_wdata", false,-1, 63,0);
    tracep->declBus(c+189,"MEM_io_mem_wmask", false,-1, 7,0);
    tracep->declBit(c+186,"MEM_io_mem_ce", false,-1);
    tracep->declBit(c+185,"MEM_io_mem_we", false,-1);
    tracep->declBit(c+212,"WB_io_in_valid", false,-1);
    tracep->declBit(c+213,"WB_io_in_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+214,"WB_io_in_bits_ctrl_signal_rfWen", false,-1);
    tracep->declQuad(c+215,"WB_io_in_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+217,"WB_io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+218,"WB_io_in_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBit(c+220,"WB_io_in_bits_ctrl_flow_skip", false,-1);
    tracep->declBus(c+181,"WB_io_in_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declQuad(c+221,"WB_io_in_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declBit(c+223,"WB_io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declQuad(c+215,"WB_io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+217,"WB_io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+218,"WB_io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBit(c+220,"WB_io_out_bits_ctrl_flow_skip", false,-1);
    tracep->declBus(c+181,"WB_io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+182,"WB_io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+221,"WB_io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+26,"bypass_io_EX_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+37,"bypass_io_EX_rf_rfWen", false,-1);
    tracep->declQuad(c+427,"bypass_io_EX_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+200,"bypass_io_MEM_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+211,"bypass_io_MEM_rf_rfWen", false,-1);
    tracep->declQuad(c+431,"bypass_io_MEM_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+181,"bypass_io_WB_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+182,"bypass_io_WB_rf_rfWen", false,-1);
    tracep->declQuad(c+221,"bypass_io_WB_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+224,"bypass_io_Reg1", false,-1, 63,0);
    tracep->declBus(c+11,"bypass_io_reg_index1", false,-1, 4,0);
    tracep->declQuad(c+226,"bypass_io_Reg2", false,-1, 63,0);
    tracep->declBus(c+12,"bypass_io_reg_index2", false,-1, 4,0);
    tracep->declQuad(c+400,"bypass_io_Bypass_REG1", false,-1, 63,0);
    tracep->declQuad(c+402,"bypass_io_Bypass_REG2", false,-1, 63,0);
    tracep->declBus(c+200,"mem_bypass_io_MEM_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+211,"mem_bypass_io_MEM_rf_rfWen", false,-1);
    tracep->declQuad(c+431,"mem_bypass_io_MEM_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+27,"mem_bypass_io_Reg1", false,-1, 63,0);
    tracep->declBus(c+22,"mem_bypass_io_reg_index1", false,-1, 4,0);
    tracep->declQuad(c+29,"mem_bypass_io_Reg2", false,-1, 63,0);
    tracep->declBus(c+23,"mem_bypass_io_reg_index2", false,-1, 4,0);
    tracep->declQuad(c+423,"mem_bypass_io_Bypass_REG1", false,-1, 63,0);
    tracep->declQuad(c+425,"mem_bypass_io_Bypass_REG2", false,-1, 63,0);
    tracep->declQuad(c+5,"ID_io_in_bits_r_PC", false,-1, 63,0);
    tracep->declBus(c+7,"ID_io_in_bits_r_Inst", false,-1, 31,0);
    tracep->declBit(c+17,"valid_1", false,-1);
    tracep->declBus(c+18,"EX_io_in_bits_r_ctrl_signal_src1Type", false,-1, 2,0);
    tracep->declBus(c+19,"EX_io_in_bits_r_ctrl_signal_src2Type", false,-1, 2,0);
    tracep->declBus(c+20,"EX_io_in_bits_r_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+21,"EX_io_in_bits_r_ctrl_signal_inst_valid", false,-1);
    tracep->declBus(c+22,"EX_io_in_bits_r_ctrl_signal_rfSrc1", false,-1, 4,0);
    tracep->declBus(c+23,"EX_io_in_bits_r_ctrl_signal_rfSrc2", false,-1, 4,0);
    tracep->declBit(c+24,"EX_io_in_bits_r_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+25,"EX_io_in_bits_r_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declBus(c+26,"EX_io_in_bits_r_ctrl_signal_rfDest", false,-1, 4,0);
    tracep->declQuad(c+27,"EX_io_in_bits_r_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+29,"EX_io_in_bits_r_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+31,"EX_io_in_bits_r_ctrl_data_Imm", false,-1, 63,0);
    tracep->declQuad(c+33,"EX_io_in_bits_r_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+35,"EX_io_in_bits_r_ctrl_flow_inst", false,-1, 31,0);
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
    tracep->declBit(c+212,"valid_3", false,-1);
    tracep->declBit(c+213,"WB_io_in_bits_r_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+214,"WB_io_in_bits_r_ctrl_signal_rfWen", false,-1);
    tracep->declQuad(c+215,"WB_io_in_bits_r_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+217,"WB_io_in_bits_r_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+218,"WB_io_in_bits_r_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBit(c+220,"WB_io_in_bits_r_ctrl_flow_skip", false,-1);
    tracep->declBus(c+181,"WB_io_in_bits_r_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declQuad(c+221,"WB_io_in_bits_r_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declBit(c+228,"DIP_io_is_break_REG", false,-1);
    tracep->declBit(c+39,"DIP_io_is_break_REG_1", false,-1);
    tracep->declBus(c+104,"DIP_io_inst_REG", false,-1, 31,0);
    tracep->declBit(c+110,"DIP_io_is_skip_REG", false,-1);
    tracep->declBit(c+107,"DIP_io_inst_valid_REG", false,-1);
    tracep->declQuad(c+105,"DIP_io_pc_REG", false,-1, 63,0);
    tracep->declQuad(c+108,"DIP_io_dnpc_REG", false,-1, 63,0);
    tracep->pushNamePrefix("DIP ");
    tracep->declBit(c+39,"is_break", false,-1);
    tracep->declBus(c+104,"inst", false,-1, 31,0);
    tracep->declQuad(c+40,"rf_0", false,-1, 63,0);
    tracep->declQuad(c+42,"rf_1", false,-1, 63,0);
    tracep->declQuad(c+44,"rf_2", false,-1, 63,0);
    tracep->declQuad(c+46,"rf_3", false,-1, 63,0);
    tracep->declQuad(c+48,"rf_4", false,-1, 63,0);
    tracep->declQuad(c+50,"rf_5", false,-1, 63,0);
    tracep->declQuad(c+52,"rf_6", false,-1, 63,0);
    tracep->declQuad(c+54,"rf_7", false,-1, 63,0);
    tracep->declQuad(c+56,"rf_8", false,-1, 63,0);
    tracep->declQuad(c+58,"rf_9", false,-1, 63,0);
    tracep->declQuad(c+60,"rf_10", false,-1, 63,0);
    tracep->declQuad(c+62,"rf_11", false,-1, 63,0);
    tracep->declQuad(c+64,"rf_12", false,-1, 63,0);
    tracep->declQuad(c+66,"rf_13", false,-1, 63,0);
    tracep->declQuad(c+68,"rf_14", false,-1, 63,0);
    tracep->declQuad(c+70,"rf_15", false,-1, 63,0);
    tracep->declQuad(c+72,"rf_16", false,-1, 63,0);
    tracep->declQuad(c+74,"rf_17", false,-1, 63,0);
    tracep->declQuad(c+76,"rf_18", false,-1, 63,0);
    tracep->declQuad(c+78,"rf_19", false,-1, 63,0);
    tracep->declQuad(c+80,"rf_20", false,-1, 63,0);
    tracep->declQuad(c+82,"rf_21", false,-1, 63,0);
    tracep->declQuad(c+84,"rf_22", false,-1, 63,0);
    tracep->declQuad(c+86,"rf_23", false,-1, 63,0);
    tracep->declQuad(c+88,"rf_24", false,-1, 63,0);
    tracep->declQuad(c+90,"rf_25", false,-1, 63,0);
    tracep->declQuad(c+92,"rf_26", false,-1, 63,0);
    tracep->declQuad(c+94,"rf_27", false,-1, 63,0);
    tracep->declQuad(c+96,"rf_28", false,-1, 63,0);
    tracep->declQuad(c+98,"rf_29", false,-1, 63,0);
    tracep->declQuad(c+100,"rf_30", false,-1, 63,0);
    tracep->declQuad(c+102,"rf_31", false,-1, 63,0);
    tracep->declBit(c+107,"inst_valid", false,-1);
    tracep->declBit(c+110,"is_skip", false,-1);
    tracep->declQuad(c+105,"pc", false,-1, 63,0);
    tracep->declQuad(c+108,"dnpc", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+229+i*2,"rf", true,(i+0), 63,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+293+i*1,"IN", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EX ");
    tracep->declBit(c+454,"clock", false,-1);
    tracep->declBit(c+455,"reset", false,-1);
    tracep->declBit(c+2,"io_in_ready", false,-1);
    tracep->declBit(c+17,"io_in_valid", false,-1);
    tracep->declBus(c+18,"io_in_bits_ctrl_signal_src1Type", false,-1, 2,0);
    tracep->declBus(c+19,"io_in_bits_ctrl_signal_src2Type", false,-1, 2,0);
    tracep->declBus(c+20,"io_in_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+21,"io_in_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBus(c+22,"io_in_bits_ctrl_signal_rfSrc1", false,-1, 4,0);
    tracep->declBus(c+23,"io_in_bits_ctrl_signal_rfSrc2", false,-1, 4,0);
    tracep->declBit(c+24,"io_in_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+25,"io_in_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declBus(c+26,"io_in_bits_ctrl_signal_rfDest", false,-1, 4,0);
    tracep->declQuad(c+27,"io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+29,"io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+31,"io_in_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declQuad(c+33,"io_in_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+35,"io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+423,"io_src1", false,-1, 63,0);
    tracep->declQuad(c+425,"io_src2", false,-1, 63,0);
    tracep->declBit(c+395,"io_branchIO_is_branch", false,-1);
    tracep->declBit(c+1,"io_branchIO_is_jump", false,-1);
    tracep->declQuad(c+396,"io_branchIO_dnpc", false,-1, 63,0);
    tracep->declBit(c+36,"io_out_valid", false,-1);
    tracep->declBus(c+20,"io_out_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+21,"io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+24,"io_out_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+25,"io_out_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+33,"io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+35,"io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+396,"io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+26,"io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+37,"io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+427,"io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+405,"io_out_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+407,"io_out_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+31,"io_out_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declBit(c+38,"io_is_break", false,-1);
    tracep->declBit(c+421,"io_is_flush", false,-1);
    tracep->declQuad(c+300,"CSRDIFF_mepc", false,-1, 63,0);
    tracep->declQuad(c+302,"CSRDIFF_mcause", false,-1, 63,0);
    tracep->declQuad(c+304,"CSRDIFF_mstatus", false,-1, 63,0);
    tracep->declQuad(c+306,"CSRDIFF_mtvec", false,-1, 63,0);
    tracep->declBit(c+454,"mul_clock", false,-1);
    tracep->declBit(c+455,"mul_reset", false,-1);
    tracep->declBit(c+308,"mul_io_in_valid", false,-1);
    tracep->declQuad(c+409,"mul_io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+411,"mul_io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declBit(c+309,"mul_io_out_valid", false,-1);
    tracep->declQuad(c+310,"mul_io_out_bits_result_result_lo", false,-1, 63,0);
    tracep->declBit(c+312,"is_mul", false,-1);
    tracep->declQuad(c+313,"mepc", false,-1, 63,0);
    tracep->declQuad(c+315,"mcause", false,-1, 63,0);
    tracep->declQuad(c+317,"mstatus", false,-1, 63,0);
    tracep->declQuad(c+319,"mtvec", false,-1, 63,0);
    tracep->declQuad(c+321,"mie", false,-1, 63,0);
    tracep->declQuad(c+323,"mip", false,-1, 63,0);
    tracep->declQuad(c+433,"src1", false,-1, 63,0);
    tracep->declQuad(c+435,"src2", false,-1, 63,0);
    tracep->declBit(c+437,"alu_result_sign", false,-1);
    tracep->declBit(c+325,"alu_result_sign_2", false,-1);
    tracep->declBit(c+438,"alu_result_sign_3", false,-1);
    tracep->declBit(c+439,"alu_result_sign_4", false,-1);
    tracep->declBit(c+440,"alu_result_sign_5", false,-1);
    tracep->declBit(c+441,"alu_result_sign_6", false,-1);
    tracep->declBit(c+442,"alu_result_sign_7", false,-1);
    tracep->declQuad(c+413,"alu_result", false,-1, 63,0);
    tracep->declBit(c+443,"shift_result_sign", false,-1);
    tracep->declBit(c+444,"shift_result_sign_1", false,-1);
    tracep->declBit(c+445,"shift_result_sign_2", false,-1);
    tracep->declBit(c+446,"shift_result_sign_3", false,-1);
    tracep->declQuad(c+415,"compar_result", false,-1, 63,0);
    tracep->declQuad(c+326,"jump_result", false,-1, 63,0);
    tracep->declQuad(c+417,"shift_result", false,-1, 63,0);
    tracep->declQuad(c+328,"branch_result", false,-1, 63,0);
    tracep->declBit(c+447,"branch_flag", false,-1);
    tracep->declQuad(c+330,"csr_data", false,-1, 63,0);
    tracep->declQuad(c+332,"CSRDIFF_io_mtvec_REG", false,-1, 63,0);
    tracep->declQuad(c+306,"CSRDIFF_io_mtvec_REG_1", false,-1, 63,0);
    tracep->declQuad(c+334,"CSRDIFF_io_mcause_REG", false,-1, 63,0);
    tracep->declQuad(c+302,"CSRDIFF_io_mcause_REG_1", false,-1, 63,0);
    tracep->declQuad(c+336,"CSRDIFF_io_mepc_REG", false,-1, 63,0);
    tracep->declQuad(c+300,"CSRDIFF_io_mepc_REG_1", false,-1, 63,0);
    tracep->declQuad(c+338,"CSRDIFF_io_mstatus_REG", false,-1, 63,0);
    tracep->declQuad(c+304,"CSRDIFF_io_mstatus_REG_1", false,-1, 63,0);
    tracep->pushNamePrefix("CSRDIFF ");
    tracep->declQuad(c+300,"mepc", false,-1, 63,0);
    tracep->declQuad(c+302,"mcause", false,-1, 63,0);
    tracep->declQuad(c+304,"mstatus", false,-1, 63,0);
    tracep->declQuad(c+306,"mtvec", false,-1, 63,0);
    for (int i = 0; i < 6; ++i) {
        tracep->declQuad(c+340+i*2,"inst_csr", true,(i+0), 63,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mul ");
    tracep->declBit(c+454,"clock", false,-1);
    tracep->declBit(c+455,"reset", false,-1);
    tracep->declBit(c+308,"io_in_valid", false,-1);
    tracep->declQuad(c+409,"io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+411,"io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declBit(c+309,"io_out_valid", false,-1);
    tracep->declQuad(c+310,"io_out_bits_result_result_lo", false,-1, 63,0);
    tracep->declBit(c+454,"mult_clock", false,-1);
    tracep->declBit(c+455,"mult_reset", false,-1);
    tracep->declBit(c+308,"mult_io_in_valid", false,-1);
    tracep->declQuad(c+409,"mult_io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+411,"mult_io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declBit(c+309,"mult_io_out_valid", false,-1);
    tracep->declQuad(c+310,"mult_io_out_bits_result_result_lo", false,-1, 63,0);
    tracep->pushNamePrefix("mult ");
    tracep->declBit(c+454,"clock", false,-1);
    tracep->declBit(c+455,"reset", false,-1);
    tracep->declBit(c+308,"io_in_valid", false,-1);
    tracep->declQuad(c+409,"io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+411,"io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declBit(c+309,"io_out_valid", false,-1);
    tracep->declQuad(c+310,"io_out_bits_result_result_lo", false,-1, 63,0);
    tracep->declBus(c+352,"partial_io_y_3", false,-1, 2,0);
    tracep->declArray(c+353,"partial_io_x", false,-1, 267,0);
    tracep->declArray(c+362,"partial_io_p", false,-1, 267,0);
    tracep->declBit(c+371,"partial_io_c", false,-1);
    tracep->declArray(c+372,"multiplier", false,-1, 65,0);
    tracep->declArray(c+375,"multiplicand", false,-1, 131,0);
    tracep->declArray(c+380,"p", false,-1, 131,0);
    tracep->declBus(c+385,"count", false,-1, 6,0);
    tracep->pushNamePrefix("partial ");
    tracep->declBus(c+352,"io_y_3", false,-1, 2,0);
    tracep->declArray(c+353,"io_x", false,-1, 267,0);
    tracep->declArray(c+362,"io_p", false,-1, 267,0);
    tracep->declBit(c+371,"io_c", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("ID ");
    tracep->declBit(c+2,"io_in_ready", false,-1);
    tracep->declQuad(c+5,"io_in_bits_PC", false,-1, 63,0);
    tracep->declBus(c+7,"io_in_bits_Inst", false,-1, 31,0);
    tracep->declQuad(c+400,"io_REG1", false,-1, 63,0);
    tracep->declQuad(c+402,"io_REG2", false,-1, 63,0);
    tracep->declBit(c+421,"io_flush", false,-1);
    tracep->declBit(c+2,"io_out_ready", false,-1);
    tracep->declBus(c+8,"io_out_bits_ctrl_signal_src1Type", false,-1, 2,0);
    tracep->declBus(c+9,"io_out_bits_ctrl_signal_src2Type", false,-1, 2,0);
    tracep->declBus(c+10,"io_out_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+422,"io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBus(c+11,"io_out_bits_ctrl_signal_rfSrc1", false,-1, 4,0);
    tracep->declBus(c+12,"io_out_bits_ctrl_signal_rfSrc2", false,-1, 4,0);
    tracep->declBit(c+404,"io_out_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+13,"io_out_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declBus(c+14,"io_out_bits_ctrl_signal_rfDest", false,-1, 4,0);
    tracep->declQuad(c+400,"io_out_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+402,"io_out_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+15,"io_out_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declQuad(c+5,"io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+7,"io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declBus(c+14,"rd", false,-1, 4,0);
    tracep->declBus(c+386,"Inst_decode_0", false,-1, 3,0);
    tracep->declBus(c+13,"Inst_decode_2", false,-1, 6,0);
    tracep->declBit(c+387,"Inst_decode_3", false,-1);
    tracep->declBus(c+388,"srctype1", false,-1, 1,0);
    tracep->declBit(c+389,"srctype2", false,-1);
    tracep->declBit(c+390,"sign", false,-1);
    tracep->declBit(c+391,"sign_1", false,-1);
    tracep->declBit(c+392,"sign_2", false,-1);
    tracep->declBit(c+392,"sign_3", false,-1);
    tracep->declBit(c+390,"sign_4", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IF ");
    tracep->declBit(c+454,"clock", false,-1);
    tracep->declBit(c+455,"reset", false,-1);
    tracep->declBit(c+395,"io_branch_io_is_branch", false,-1);
    tracep->declBit(c+1,"io_branch_io_is_jump", false,-1);
    tracep->declQuad(c+396,"io_branch_io_dnpc", false,-1, 63,0);
    tracep->declBus(c+398,"io_inst", false,-1, 31,0);
    tracep->declBit(c+2,"io_out_ready", false,-1);
    tracep->declQuad(c+3,"io_out_bits_PC", false,-1, 63,0);
    tracep->declBus(c+399,"io_out_bits_Inst", false,-1, 31,0);
    tracep->declBit(c+421,"io_flush", false,-1);
    tracep->declQuad(c+3,"temp", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IFM ");
    tracep->declBit(c+455,"reset", false,-1);
    tracep->declBit(c+454,"clk", false,-1);
    tracep->declQuad(c+3,"pc", false,-1, 63,0);
    tracep->declBus(c+398,"inst", false,-1, 31,0);
    tracep->declQuad(c+448,"rdata", false,-1, 63,0);
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
    tracep->declBit(c+209,"io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+193,"io_out_bits_ctrl_signal_rfWen", false,-1);
    tracep->declQuad(c+195,"io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+197,"io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+198,"io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBit(c+210,"io_out_bits_ctrl_flow_skip", false,-1);
    tracep->declBus(c+200,"io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+211,"io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+431,"io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+183,"io_mem_addr", false,-1, 63,0);
    tracep->declQuad(c+429,"io_mem_rdata", false,-1, 63,0);
    tracep->declQuad(c+187,"io_mem_wdata", false,-1, 63,0);
    tracep->declBus(c+189,"io_mem_wmask", false,-1, 7,0);
    tracep->declBit(c+186,"io_mem_ce", false,-1);
    tracep->declBit(c+185,"io_mem_we", false,-1);
    tracep->declQuad(c+393,"addr_temp", false,-1, 63,0);
    tracep->declBit(c+450,"mem_result_sign", false,-1);
    tracep->declBit(c+451,"mem_result_sign_1", false,-1);
    tracep->declBit(c+452,"mem_result_sign_2", false,-1);
    tracep->declBit(c+453,"mem_result_sign_3", false,-1);
    tracep->declQuad(c+419,"mem_result", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WB ");
    tracep->declBit(c+212,"io_in_valid", false,-1);
    tracep->declBit(c+213,"io_in_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+214,"io_in_bits_ctrl_signal_rfWen", false,-1);
    tracep->declQuad(c+215,"io_in_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+217,"io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+218,"io_in_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBit(c+220,"io_in_bits_ctrl_flow_skip", false,-1);
    tracep->declBus(c+181,"io_in_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declQuad(c+221,"io_in_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declBit(c+223,"io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declQuad(c+215,"io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+217,"io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+218,"io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBit(c+220,"io_out_bits_ctrl_flow_skip", false,-1);
    tracep->declBus(c+181,"io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+182,"io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+221,"io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("bypass ");
    tracep->declBus(c+26,"io_EX_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+37,"io_EX_rf_rfWen", false,-1);
    tracep->declQuad(c+427,"io_EX_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+200,"io_MEM_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+211,"io_MEM_rf_rfWen", false,-1);
    tracep->declQuad(c+431,"io_MEM_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+181,"io_WB_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+182,"io_WB_rf_rfWen", false,-1);
    tracep->declQuad(c+221,"io_WB_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+224,"io_Reg1", false,-1, 63,0);
    tracep->declBus(c+11,"io_reg_index1", false,-1, 4,0);
    tracep->declQuad(c+226,"io_Reg2", false,-1, 63,0);
    tracep->declBus(c+12,"io_reg_index2", false,-1, 4,0);
    tracep->declQuad(c+400,"io_Bypass_REG1", false,-1, 63,0);
    tracep->declQuad(c+402,"io_Bypass_REG2", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem ");
    tracep->declBit(c+455,"reset", false,-1);
    tracep->declBit(c+454,"clk", false,-1);
    tracep->declQuad(c+183,"addr", false,-1, 63,0);
    tracep->declBit(c+185,"we", false,-1);
    tracep->declBit(c+186,"ce", false,-1);
    tracep->declQuad(c+187,"wdata", false,-1, 63,0);
    tracep->declQuad(c+429,"rdata", false,-1, 63,0);
    tracep->declBus(c+189,"wmask", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_bypass ");
    tracep->declBus(c+200,"io_MEM_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+211,"io_MEM_rf_rfWen", false,-1);
    tracep->declQuad(c+431,"io_MEM_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+27,"io_Reg1", false,-1, 63,0);
    tracep->declBus(c+22,"io_reg_index1", false,-1, 4,0);
    tracep->declQuad(c+29,"io_Reg2", false,-1, 63,0);
    tracep->declBus(c+23,"io_reg_index2", false,-1, 4,0);
    tracep->declQuad(c+423,"io_Bypass_REG1", false,-1, 63,0);
    tracep->declQuad(c+425,"io_Bypass_REG2", false,-1, 63,0);
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

extern const VlWide<9>/*287:0*/ VCoreTop__ConstPool__CONST_h5285eb67_0;
extern const VlWide<9>/*287:0*/ VCoreTop__ConstPool__CONST_hd571e6a2_0;
extern const VlWide<9>/*287:0*/ VCoreTop__ConstPool__CONST_h5285fb67_0;
extern const VlWide<9>/*287:0*/ VCoreTop__ConstPool__CONST_haaadcf73_0;

VL_ATTR_COLD void VCoreTop___024root__trace_full_sub_0(VCoreTop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<9>/*287:0*/ __Vtemp_h97b21e08__0;
    VlWide<9>/*287:0*/ __Vtemp_h97b21e08__1;
    VlWide<9>/*287:0*/ __Vtemp_h97b21e08__2;
    VlWide<9>/*287:0*/ __Vtemp_h97b21e08__3;
    VlWide<9>/*287:0*/ __Vtemp_h97b21e08__4;
    VlWide<9>/*287:0*/ __Vtemp_h97b21e08__5;
    VlWide<9>/*287:0*/ __Vtemp_h97b21e08__6;
    VlWide<9>/*287:0*/ __Vtemp_h3dd33073__0;
    VlWide<9>/*287:0*/ __Vtemp_hd8f1c71c__0;
    VlWide<9>/*287:0*/ __Vtemp_hc3908f57__0;
    VlWide<4>/*127:0*/ __Vtemp_h2bb631d5__0;
    VlWide<4>/*127:0*/ __Vtemp_h8248920c__0;
    VlWide<4>/*127:0*/ __Vtemp_hadcca096__0;
    VlWide<4>/*127:0*/ __Vtemp_h02dc50a1__0;
    VlWide<4>/*127:0*/ __Vtemp_hd1fea39f__0;
    // Body
    bufp->fullBit(oldp+1,(vlSelf->CoreTop__DOT__EX_io_branchIO_is_jump));
    bufp->fullBit(oldp+2,((1U & (~ (IData)(vlSelf->CoreTop__DOT__EX__DOT___io_out_valid_T_1)))));
    bufp->fullQData(oldp+3,(vlSelf->CoreTop__DOT__IF__DOT__temp),64);
    bufp->fullQData(oldp+5,(vlSelf->CoreTop__DOT__ID_io_in_bits_r_PC),64);
    bufp->fullIData(oldp+7,(vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst),32);
    bufp->fullCData(oldp+8,((((7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                               ? 2U : 0U) | ((3U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                              ? 2U : 0U))),3);
    bufp->fullCData(oldp+9,((((8U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)) 
                              | (7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))) 
                             | (3U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)))),3);
    bufp->fullCData(oldp+10,(((0x13U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
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
    bufp->fullCData(oldp+11,((0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+12,((0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+13,(((0x13U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                               ? 0x40U : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_316))),7);
    bufp->fullCData(oldp+14,((0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                       >> 7U))),5);
    bufp->fullQData(oldp+15,(((((((8U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
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
    bufp->fullBit(oldp+17,(vlSelf->CoreTop__DOT__valid_1));
    bufp->fullCData(oldp+18,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src1Type),3);
    bufp->fullCData(oldp+19,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src2Type),3);
    bufp->fullCData(oldp+20,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType),3);
    bufp->fullBit(oldp+21,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_inst_valid));
    bufp->fullCData(oldp+22,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfSrc1),5);
    bufp->fullCData(oldp+23,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfSrc2),5);
    bufp->fullBit(oldp+24,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfWen));
    bufp->fullCData(oldp+25,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype),7);
    bufp->fullCData(oldp+26,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest),5);
    bufp->fullQData(oldp+27,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_src1),64);
    bufp->fullQData(oldp+29,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_src2),64);
    bufp->fullQData(oldp+31,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm),64);
    bufp->fullQData(oldp+33,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC),64);
    bufp->fullIData(oldp+35,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_inst),32);
    bufp->fullBit(oldp+36,(vlSelf->CoreTop__DOT__EX_io_out_valid));
    bufp->fullBit(oldp+37,(vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfWen));
    bufp->fullBit(oldp+38,(((0x42U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                            & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_inst_valid))));
    bufp->fullBit(oldp+39,(vlSelf->CoreTop__DOT__DIP_io_is_break_REG_1));
    bufp->fullQData(oldp+40,(vlSelf->CoreTop__DOT__rf
                             [0U]),64);
    bufp->fullQData(oldp+42,(vlSelf->CoreTop__DOT__rf
                             [1U]),64);
    bufp->fullQData(oldp+44,(vlSelf->CoreTop__DOT__rf
                             [2U]),64);
    bufp->fullQData(oldp+46,(vlSelf->CoreTop__DOT__rf
                             [3U]),64);
    bufp->fullQData(oldp+48,(vlSelf->CoreTop__DOT__rf
                             [4U]),64);
    bufp->fullQData(oldp+50,(vlSelf->CoreTop__DOT__rf
                             [5U]),64);
    bufp->fullQData(oldp+52,(vlSelf->CoreTop__DOT__rf
                             [6U]),64);
    bufp->fullQData(oldp+54,(vlSelf->CoreTop__DOT__rf
                             [7U]),64);
    bufp->fullQData(oldp+56,(vlSelf->CoreTop__DOT__rf
                             [8U]),64);
    bufp->fullQData(oldp+58,(vlSelf->CoreTop__DOT__rf
                             [9U]),64);
    bufp->fullQData(oldp+60,(vlSelf->CoreTop__DOT__rf
                             [0xaU]),64);
    bufp->fullQData(oldp+62,(vlSelf->CoreTop__DOT__rf
                             [0xbU]),64);
    bufp->fullQData(oldp+64,(vlSelf->CoreTop__DOT__rf
                             [0xcU]),64);
    bufp->fullQData(oldp+66,(vlSelf->CoreTop__DOT__rf
                             [0xdU]),64);
    bufp->fullQData(oldp+68,(vlSelf->CoreTop__DOT__rf
                             [0xeU]),64);
    bufp->fullQData(oldp+70,(vlSelf->CoreTop__DOT__rf
                             [0xfU]),64);
    bufp->fullQData(oldp+72,(vlSelf->CoreTop__DOT__rf
                             [0x10U]),64);
    bufp->fullQData(oldp+74,(vlSelf->CoreTop__DOT__rf
                             [0x11U]),64);
    bufp->fullQData(oldp+76,(vlSelf->CoreTop__DOT__rf
                             [0x12U]),64);
    bufp->fullQData(oldp+78,(vlSelf->CoreTop__DOT__rf
                             [0x13U]),64);
    bufp->fullQData(oldp+80,(vlSelf->CoreTop__DOT__rf
                             [0x14U]),64);
    bufp->fullQData(oldp+82,(vlSelf->CoreTop__DOT__rf
                             [0x15U]),64);
    bufp->fullQData(oldp+84,(vlSelf->CoreTop__DOT__rf
                             [0x16U]),64);
    bufp->fullQData(oldp+86,(vlSelf->CoreTop__DOT__rf
                             [0x17U]),64);
    bufp->fullQData(oldp+88,(vlSelf->CoreTop__DOT__rf
                             [0x18U]),64);
    bufp->fullQData(oldp+90,(vlSelf->CoreTop__DOT__rf
                             [0x19U]),64);
    bufp->fullQData(oldp+92,(vlSelf->CoreTop__DOT__rf
                             [0x1aU]),64);
    bufp->fullQData(oldp+94,(vlSelf->CoreTop__DOT__rf
                             [0x1bU]),64);
    bufp->fullQData(oldp+96,(vlSelf->CoreTop__DOT__rf
                             [0x1cU]),64);
    bufp->fullQData(oldp+98,(vlSelf->CoreTop__DOT__rf
                             [0x1dU]),64);
    bufp->fullQData(oldp+100,(vlSelf->CoreTop__DOT__rf
                              [0x1eU]),64);
    bufp->fullQData(oldp+102,(vlSelf->CoreTop__DOT__rf
                              [0x1fU]),64);
    bufp->fullIData(oldp+104,(vlSelf->CoreTop__DOT__DIP_io_inst_REG),32);
    bufp->fullQData(oldp+105,(vlSelf->CoreTop__DOT__DIP_io_pc_REG),64);
    bufp->fullBit(oldp+107,(vlSelf->CoreTop__DOT__DIP_io_inst_valid_REG));
    bufp->fullQData(oldp+108,(vlSelf->CoreTop__DOT__DIP_io_dnpc_REG),64);
    bufp->fullBit(oldp+110,(vlSelf->CoreTop__DOT__DIP_io_is_skip_REG));
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
    bufp->fullBit(oldp+186,((((4U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_fuType)) 
                              & (IData)(vlSelf->CoreTop__DOT__valid_2)) 
                             & (IData)(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_signal_inst_valid))));
    bufp->fullQData(oldp+187,(((0x46U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
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
    bufp->fullBit(oldp+209,(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_signal_inst_valid));
    bufp->fullBit(oldp+210,((((0xa0000048ULL == vlSelf->CoreTop__DOT__MEM__DOT__addr_temp) 
                              | (0xa00003f8ULL == vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)) 
                             | ((0xa0000000ULL <= vlSelf->CoreTop__DOT__MEM__DOT__addr_temp) 
                                & (0xa1200000ULL >= vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))));
    bufp->fullBit(oldp+211,(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfWen));
    bufp->fullBit(oldp+212,(vlSelf->CoreTop__DOT__valid_3));
    bufp->fullBit(oldp+213,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_inst_valid));
    bufp->fullBit(oldp+214,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_rfWen));
    bufp->fullQData(oldp+215,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_PC),64);
    bufp->fullIData(oldp+217,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_inst),32);
    bufp->fullQData(oldp+218,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_Dnpc),64);
    bufp->fullBit(oldp+220,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_skip));
    bufp->fullQData(oldp+221,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfData),64);
    bufp->fullBit(oldp+223,(vlSelf->CoreTop__DOT__WB_io_out_bits_ctrl_signal_inst_valid));
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
    bufp->fullBit(oldp+228,(vlSelf->CoreTop__DOT__DIP_io_is_break_REG));
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
    bufp->fullIData(oldp+299,(vlSelf->CoreTop__DOT__DIP__DOT__IN[6]),32);
    bufp->fullQData(oldp+300,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mepc_REG_1),64);
    bufp->fullQData(oldp+302,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mcause_REG_1),64);
    bufp->fullQData(oldp+304,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mstatus_REG_1),64);
    bufp->fullQData(oldp+306,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mtvec_REG_1),64);
    bufp->fullBit(oldp+308,(vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_valid));
    bufp->fullBit(oldp+309,((0x44U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count))));
    bufp->fullQData(oldp+310,((((QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[0U])))),64);
    bufp->fullBit(oldp+312,(vlSelf->CoreTop__DOT__EX__DOT__is_mul));
    bufp->fullQData(oldp+313,(vlSelf->CoreTop__DOT__EX__DOT__mepc),64);
    bufp->fullQData(oldp+315,(vlSelf->CoreTop__DOT__EX__DOT__mcause),64);
    bufp->fullQData(oldp+317,(vlSelf->CoreTop__DOT__EX__DOT__mstatus),64);
    bufp->fullQData(oldp+319,(vlSelf->CoreTop__DOT__EX__DOT__mtvec),64);
    bufp->fullQData(oldp+321,(vlSelf->CoreTop__DOT__EX__DOT__mie),64);
    bufp->fullQData(oldp+323,(vlSelf->CoreTop__DOT__EX__DOT__mip),64);
    bufp->fullBit(oldp+325,((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[0U] 
                             >> 0x1fU)));
    bufp->fullQData(oldp+326,(((3U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType))
                                ? (4ULL + vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC)
                                : 0ULL)),64);
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
    bufp->fullQData(oldp+330,(vlSelf->CoreTop__DOT__EX__DOT__csr_data),64);
    bufp->fullQData(oldp+332,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mtvec_REG),64);
    bufp->fullQData(oldp+334,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mcause_REG),64);
    bufp->fullQData(oldp+336,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mepc_REG),64);
    bufp->fullQData(oldp+338,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mstatus_REG),64);
    bufp->fullQData(oldp+340,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[0]),64);
    bufp->fullQData(oldp+342,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[1]),64);
    bufp->fullQData(oldp+344,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[2]),64);
    bufp->fullQData(oldp+346,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[3]),64);
    bufp->fullQData(oldp+348,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[4]),64);
    bufp->fullQData(oldp+350,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[5]),64);
    bufp->fullCData(oldp+352,((7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U])),3);
    VL_EXTEND_WW(268,132, __Vtemp_h97b21e08__0, vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand);
    bufp->fullWData(oldp+353,(__Vtemp_h97b21e08__0),268);
    VL_EXTEND_WW(269,132, __Vtemp_h97b21e08__1, vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand);
    VL_EXTEND_WW(269,132, __Vtemp_h97b21e08__2, vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand);
    VL_EXTEND_WW(268,132, __Vtemp_h97b21e08__3, vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand);
    VL_EXTEND_WW(268,132, __Vtemp_h97b21e08__4, vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand);
    VL_EXTEND_WW(268,132, __Vtemp_h97b21e08__5, vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand);
    VL_EXTEND_WW(268,132, __Vtemp_h97b21e08__6, vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand);
    __Vtemp_h3dd33073__0[0U] = (VCoreTop__ConstPool__CONST_h5285eb67_0[0U] 
                                & ((5U == (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                    ? (~ __Vtemp_h97b21e08__5[0U])
                                    : ((6U == (7U & 
                                               vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                        ? (~ __Vtemp_h97b21e08__6[0U])
                                        : VCoreTop__ConstPool__CONST_hd571e6a2_0[0U])));
    __Vtemp_h3dd33073__0[1U] = (VCoreTop__ConstPool__CONST_h5285eb67_0[1U] 
                                & ((5U == (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                    ? (~ __Vtemp_h97b21e08__5[1U])
                                    : ((6U == (7U & 
                                               vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                        ? (~ __Vtemp_h97b21e08__6[1U])
                                        : VCoreTop__ConstPool__CONST_hd571e6a2_0[1U])));
    __Vtemp_h3dd33073__0[2U] = (VCoreTop__ConstPool__CONST_h5285eb67_0[2U] 
                                & ((5U == (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                    ? (~ __Vtemp_h97b21e08__5[2U])
                                    : ((6U == (7U & 
                                               vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                        ? (~ __Vtemp_h97b21e08__6[2U])
                                        : VCoreTop__ConstPool__CONST_hd571e6a2_0[2U])));
    __Vtemp_h3dd33073__0[3U] = (VCoreTop__ConstPool__CONST_h5285eb67_0[3U] 
                                & ((5U == (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                    ? (~ __Vtemp_h97b21e08__5[3U])
                                    : ((6U == (7U & 
                                               vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                        ? (~ __Vtemp_h97b21e08__6[3U])
                                        : VCoreTop__ConstPool__CONST_hd571e6a2_0[3U])));
    __Vtemp_h3dd33073__0[4U] = (VCoreTop__ConstPool__CONST_h5285eb67_0[4U] 
                                & ((5U == (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                    ? (~ __Vtemp_h97b21e08__5[4U])
                                    : ((6U == (7U & 
                                               vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                        ? (~ __Vtemp_h97b21e08__6[4U])
                                        : VCoreTop__ConstPool__CONST_hd571e6a2_0[4U])));
    __Vtemp_h3dd33073__0[5U] = (VCoreTop__ConstPool__CONST_h5285eb67_0[5U] 
                                & ((5U == (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                    ? (~ __Vtemp_h97b21e08__5[5U])
                                    : ((6U == (7U & 
                                               vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                        ? (~ __Vtemp_h97b21e08__6[5U])
                                        : VCoreTop__ConstPool__CONST_hd571e6a2_0[5U])));
    __Vtemp_h3dd33073__0[6U] = (VCoreTop__ConstPool__CONST_h5285eb67_0[6U] 
                                & ((5U == (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                    ? (~ __Vtemp_h97b21e08__5[6U])
                                    : ((6U == (7U & 
                                               vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                        ? (~ __Vtemp_h97b21e08__6[6U])
                                        : VCoreTop__ConstPool__CONST_hd571e6a2_0[6U])));
    __Vtemp_h3dd33073__0[7U] = (VCoreTop__ConstPool__CONST_h5285eb67_0[7U] 
                                & ((5U == (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                    ? (~ __Vtemp_h97b21e08__5[7U])
                                    : ((6U == (7U & 
                                               vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                        ? (~ __Vtemp_h97b21e08__6[7U])
                                        : VCoreTop__ConstPool__CONST_hd571e6a2_0[7U])));
    __Vtemp_h3dd33073__0[8U] = (VCoreTop__ConstPool__CONST_h5285eb67_0[8U] 
                                & ((5U == (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                    ? (~ __Vtemp_h97b21e08__5[8U])
                                    : ((6U == (7U & 
                                               vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                        ? (~ __Vtemp_h97b21e08__6[8U])
                                        : VCoreTop__ConstPool__CONST_hd571e6a2_0[8U])));
    VL_EXTEND_WW(269,268, __Vtemp_hd8f1c71c__0, __Vtemp_h3dd33073__0);
    __Vtemp_hc3908f57__0[0U] = (VCoreTop__ConstPool__CONST_h5285eb67_0[0U] 
                                & (VCoreTop__ConstPool__CONST_h5285fb67_0[0U] 
                                   & ((0U == (7U & 
                                              vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                       ? VCoreTop__ConstPool__CONST_haaadcf73_0[0U]
                                       : ((1U == (7U 
                                                  & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                           ? __Vtemp_h97b21e08__1[0U]
                                           : ((2U == 
                                               (7U 
                                                & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                               ? __Vtemp_h97b21e08__2[0U]
                                               : ((3U 
                                                   == 
                                                   (7U 
                                                    & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                                   ? 
                                                  (__Vtemp_h97b21e08__3[0U] 
                                                   << 1U)
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                                    ? 
                                                   (~ 
                                                    (__Vtemp_h97b21e08__4[0U] 
                                                     << 1U))
                                                    : 
                                                   __Vtemp_hd8f1c71c__0[0U])))))));
    __Vtemp_hc3908f57__0[1U] = (VCoreTop__ConstPool__CONST_h5285eb67_0[1U] 
                                & (VCoreTop__ConstPool__CONST_h5285fb67_0[1U] 
                                   & ((0U == (7U & 
                                              vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                       ? VCoreTop__ConstPool__CONST_haaadcf73_0[1U]
                                       : ((1U == (7U 
                                                  & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                           ? __Vtemp_h97b21e08__1[1U]
                                           : ((2U == 
                                               (7U 
                                                & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                               ? __Vtemp_h97b21e08__2[1U]
                                               : ((3U 
                                                   == 
                                                   (7U 
                                                    & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                                   ? 
                                                  ((__Vtemp_h97b21e08__3[0U] 
                                                    >> 0x1fU) 
                                                   | (__Vtemp_h97b21e08__3[1U] 
                                                      << 1U))
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                                    ? 
                                                   (~ 
                                                    ((__Vtemp_h97b21e08__4[0U] 
                                                      >> 0x1fU) 
                                                     | (__Vtemp_h97b21e08__4[1U] 
                                                        << 1U)))
                                                    : 
                                                   __Vtemp_hd8f1c71c__0[1U])))))));
    __Vtemp_hc3908f57__0[2U] = (VCoreTop__ConstPool__CONST_h5285eb67_0[2U] 
                                & (VCoreTop__ConstPool__CONST_h5285fb67_0[2U] 
                                   & ((0U == (7U & 
                                              vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                       ? VCoreTop__ConstPool__CONST_haaadcf73_0[2U]
                                       : ((1U == (7U 
                                                  & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                           ? __Vtemp_h97b21e08__1[2U]
                                           : ((2U == 
                                               (7U 
                                                & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                               ? __Vtemp_h97b21e08__2[2U]
                                               : ((3U 
                                                   == 
                                                   (7U 
                                                    & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                                   ? 
                                                  ((__Vtemp_h97b21e08__3[1U] 
                                                    >> 0x1fU) 
                                                   | (__Vtemp_h97b21e08__3[2U] 
                                                      << 1U))
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                                    ? 
                                                   (~ 
                                                    ((__Vtemp_h97b21e08__4[1U] 
                                                      >> 0x1fU) 
                                                     | (__Vtemp_h97b21e08__4[2U] 
                                                        << 1U)))
                                                    : 
                                                   __Vtemp_hd8f1c71c__0[2U])))))));
    __Vtemp_hc3908f57__0[3U] = (VCoreTop__ConstPool__CONST_h5285eb67_0[3U] 
                                & (VCoreTop__ConstPool__CONST_h5285fb67_0[3U] 
                                   & ((0U == (7U & 
                                              vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                       ? VCoreTop__ConstPool__CONST_haaadcf73_0[3U]
                                       : ((1U == (7U 
                                                  & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                           ? __Vtemp_h97b21e08__1[3U]
                                           : ((2U == 
                                               (7U 
                                                & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                               ? __Vtemp_h97b21e08__2[3U]
                                               : ((3U 
                                                   == 
                                                   (7U 
                                                    & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                                   ? 
                                                  ((__Vtemp_h97b21e08__3[2U] 
                                                    >> 0x1fU) 
                                                   | (__Vtemp_h97b21e08__3[3U] 
                                                      << 1U))
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                                    ? 
                                                   (~ 
                                                    ((__Vtemp_h97b21e08__4[2U] 
                                                      >> 0x1fU) 
                                                     | (__Vtemp_h97b21e08__4[3U] 
                                                        << 1U)))
                                                    : 
                                                   __Vtemp_hd8f1c71c__0[3U])))))));
    __Vtemp_hc3908f57__0[4U] = (VCoreTop__ConstPool__CONST_h5285eb67_0[4U] 
                                & (VCoreTop__ConstPool__CONST_h5285fb67_0[4U] 
                                   & ((0U == (7U & 
                                              vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                       ? VCoreTop__ConstPool__CONST_haaadcf73_0[4U]
                                       : ((1U == (7U 
                                                  & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                           ? __Vtemp_h97b21e08__1[4U]
                                           : ((2U == 
                                               (7U 
                                                & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                               ? __Vtemp_h97b21e08__2[4U]
                                               : ((3U 
                                                   == 
                                                   (7U 
                                                    & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                                   ? 
                                                  ((__Vtemp_h97b21e08__3[3U] 
                                                    >> 0x1fU) 
                                                   | (__Vtemp_h97b21e08__3[4U] 
                                                      << 1U))
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                                    ? 
                                                   (~ 
                                                    ((__Vtemp_h97b21e08__4[3U] 
                                                      >> 0x1fU) 
                                                     | (__Vtemp_h97b21e08__4[4U] 
                                                        << 1U)))
                                                    : 
                                                   __Vtemp_hd8f1c71c__0[4U])))))));
    __Vtemp_hc3908f57__0[5U] = (VCoreTop__ConstPool__CONST_h5285eb67_0[5U] 
                                & (VCoreTop__ConstPool__CONST_h5285fb67_0[5U] 
                                   & ((0U == (7U & 
                                              vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                       ? VCoreTop__ConstPool__CONST_haaadcf73_0[5U]
                                       : ((1U == (7U 
                                                  & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                           ? __Vtemp_h97b21e08__1[5U]
                                           : ((2U == 
                                               (7U 
                                                & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                               ? __Vtemp_h97b21e08__2[5U]
                                               : ((3U 
                                                   == 
                                                   (7U 
                                                    & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                                   ? 
                                                  ((__Vtemp_h97b21e08__3[4U] 
                                                    >> 0x1fU) 
                                                   | (__Vtemp_h97b21e08__3[5U] 
                                                      << 1U))
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                                    ? 
                                                   (~ 
                                                    ((__Vtemp_h97b21e08__4[4U] 
                                                      >> 0x1fU) 
                                                     | (__Vtemp_h97b21e08__4[5U] 
                                                        << 1U)))
                                                    : 
                                                   __Vtemp_hd8f1c71c__0[5U])))))));
    __Vtemp_hc3908f57__0[6U] = (VCoreTop__ConstPool__CONST_h5285eb67_0[6U] 
                                & (VCoreTop__ConstPool__CONST_h5285fb67_0[6U] 
                                   & ((0U == (7U & 
                                              vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                       ? VCoreTop__ConstPool__CONST_haaadcf73_0[6U]
                                       : ((1U == (7U 
                                                  & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                           ? __Vtemp_h97b21e08__1[6U]
                                           : ((2U == 
                                               (7U 
                                                & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                               ? __Vtemp_h97b21e08__2[6U]
                                               : ((3U 
                                                   == 
                                                   (7U 
                                                    & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                                   ? 
                                                  ((__Vtemp_h97b21e08__3[5U] 
                                                    >> 0x1fU) 
                                                   | (__Vtemp_h97b21e08__3[6U] 
                                                      << 1U))
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                                    ? 
                                                   (~ 
                                                    ((__Vtemp_h97b21e08__4[5U] 
                                                      >> 0x1fU) 
                                                     | (__Vtemp_h97b21e08__4[6U] 
                                                        << 1U)))
                                                    : 
                                                   __Vtemp_hd8f1c71c__0[6U])))))));
    __Vtemp_hc3908f57__0[7U] = (VCoreTop__ConstPool__CONST_h5285eb67_0[7U] 
                                & (VCoreTop__ConstPool__CONST_h5285fb67_0[7U] 
                                   & ((0U == (7U & 
                                              vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                       ? VCoreTop__ConstPool__CONST_haaadcf73_0[7U]
                                       : ((1U == (7U 
                                                  & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                           ? __Vtemp_h97b21e08__1[7U]
                                           : ((2U == 
                                               (7U 
                                                & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                               ? __Vtemp_h97b21e08__2[7U]
                                               : ((3U 
                                                   == 
                                                   (7U 
                                                    & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                                   ? 
                                                  ((__Vtemp_h97b21e08__3[6U] 
                                                    >> 0x1fU) 
                                                   | (__Vtemp_h97b21e08__3[7U] 
                                                      << 1U))
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                                    ? 
                                                   (~ 
                                                    ((__Vtemp_h97b21e08__4[6U] 
                                                      >> 0x1fU) 
                                                     | (__Vtemp_h97b21e08__4[7U] 
                                                        << 1U)))
                                                    : 
                                                   __Vtemp_hd8f1c71c__0[7U])))))));
    __Vtemp_hc3908f57__0[8U] = (VCoreTop__ConstPool__CONST_h5285eb67_0[8U] 
                                & (VCoreTop__ConstPool__CONST_h5285fb67_0[8U] 
                                   & ((0U == (7U & 
                                              vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                       ? VCoreTop__ConstPool__CONST_haaadcf73_0[8U]
                                       : ((1U == (7U 
                                                  & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                           ? __Vtemp_h97b21e08__1[8U]
                                           : ((2U == 
                                               (7U 
                                                & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                               ? __Vtemp_h97b21e08__2[8U]
                                               : ((3U 
                                                   == 
                                                   (7U 
                                                    & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                                   ? 
                                                  ((__Vtemp_h97b21e08__3[7U] 
                                                    >> 0x1fU) 
                                                   | (__Vtemp_h97b21e08__3[8U] 
                                                      << 1U))
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                                    ? 
                                                   (~ 
                                                    ((__Vtemp_h97b21e08__4[7U] 
                                                      >> 0x1fU) 
                                                     | (__Vtemp_h97b21e08__4[8U] 
                                                        << 1U)))
                                                    : 
                                                   __Vtemp_hd8f1c71c__0[8U])))))));
    bufp->fullWData(oldp+362,(__Vtemp_hc3908f57__0),268);
    bufp->fullBit(oldp+371,(((0U != (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U])) 
                             & ((1U != (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U])) 
                                & ((2U != (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U])) 
                                   & ((3U != (7U & 
                                              vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U])) 
                                      & ((4U == (7U 
                                                 & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U])) 
                                         | ((5U == 
                                             (7U & 
                                              vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U])) 
                                            | (6U == 
                                               (7U 
                                                & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))))))))));
    bufp->fullWData(oldp+372,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier),66);
    bufp->fullWData(oldp+375,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand),132);
    bufp->fullWData(oldp+380,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p),132);
    bufp->fullCData(oldp+385,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count),7);
    bufp->fullCData(oldp+386,(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0),4);
    bufp->fullBit(oldp+387,(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_3));
    bufp->fullCData(oldp+388,((((7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                 ? 2U : 0U) | ((3U 
                                                == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                                ? 2U
                                                : 0U))),2);
    bufp->fullBit(oldp+389,((((8U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)) 
                              | (7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))) 
                             | (3U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)))));
    bufp->fullBit(oldp+390,((vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                             >> 0x1fU)));
    bufp->fullBit(oldp+391,((1U & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                   >> 0x13U))));
    bufp->fullBit(oldp+392,((vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                             >> 0x1fU)));
    bufp->fullQData(oldp+393,(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp),64);
    bufp->fullBit(oldp+395,(((IData)(vlSelf->CoreTop__DOT__EX__DOT__branch_flag) 
                             & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_inst_valid))));
    bufp->fullQData(oldp+396,(((0x19U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1
                                : vlSelf->CoreTop__DOT__EX__DOT___GEN_289)),64);
    bufp->fullIData(oldp+398,(((1U & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                              >> 2U)))
                                ? (IData)((vlSelf->CoreTop__DOT__IFM__DOT__rdata 
                                           >> 0x20U))
                                : (IData)(vlSelf->CoreTop__DOT__IFM__DOT__rdata))),32);
    bufp->fullIData(oldp+399,(((IData)(vlSelf->CoreTop__DOT__EX_io_is_flush)
                                ? 0U : ((1U & (IData)(
                                                      (vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                       >> 2U)))
                                         ? (IData)(
                                                   (vlSelf->CoreTop__DOT__IFM__DOT__rdata 
                                                    >> 0x20U))
                                         : (IData)(vlSelf->CoreTop__DOT__IFM__DOT__rdata)))),32);
    bufp->fullQData(oldp+400,(((((IData)(vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfWen) 
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
    bufp->fullQData(oldp+402,(((((IData)(vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfWen) 
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
    bufp->fullBit(oldp+404,(((IData)(vlSelf->CoreTop__DOT__ID_io_out_bits_ctrl_signal_inst_valid) 
                             & (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_3))));
    bufp->fullQData(oldp+405,(((0U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src1Type))
                                ? vlSelf->CoreTop__DOT__mem_bypass_io_Bypass_REG1
                                : vlSelf->CoreTop__DOT__EX__DOT___GEN_1)),64);
    bufp->fullQData(oldp+407,(((0U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src2Type))
                                ? vlSelf->CoreTop__DOT__mem_bypass_io_Bypass_REG2
                                : vlSelf->CoreTop__DOT__EX__DOT___GEN_3)),64);
    bufp->fullQData(oldp+409,(((IData)(vlSelf->CoreTop__DOT__EX__DOT__is_mul)
                                ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_55
                                : (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_55)))),64);
    bufp->fullQData(oldp+411,(((IData)(vlSelf->CoreTop__DOT__EX__DOT__is_mul)
                                ? vlSelf->CoreTop__DOT__EX__DOT__src2
                                : (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)))),64);
    bufp->fullQData(oldp+413,(((0x40U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1
                                : ((0x1aU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                    ? vlSelf->CoreTop__DOT__EX__DOT__src2
                                    : ((0x68U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                        ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_7
                                        : ((0x44U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                            ? (vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_55 
                                               | vlSelf->CoreTop__DOT__EX__DOT__src2)
                                            : ((0x69U 
                                                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_10
                                                : (
                                                   (0x71U 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? 
                                                   (vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_55 
                                                    & vlSelf->CoreTop__DOT__EX__DOT__src2)
                                                    : 
                                                   ((0x72U 
                                                     == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                     ? 
                                                    (vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_55 
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
                                                                        ((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[0U] 
                                                                          >> 0x1fU)
                                                                          ? 0xffffffffU
                                                                          : 0U))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[0U])))
                                                       : 
                                                      ((0x79U 
                                                        == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                        ? 
                                                       (((QData)((IData)(
                                                                         ((1U 
                                                                           & (IData)(
                                                                                (vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_27 
                                                                                >> 0x1fU)))
                                                                           ? 0xffffffffU
                                                                           : 0U))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_27)))
                                                        : vlSelf->CoreTop__DOT__EX__DOT___GEN_117))))))))))),64);
    bufp->fullQData(oldp+415,(((0x6aU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                ? ((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_55 
                                    < vlSelf->CoreTop__DOT__EX__DOT__src2)
                                    ? 1ULL : 0ULL) : 
                               ((2U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                 ? (VL_LTS_IQQ(64, vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_55, vlSelf->CoreTop__DOT__EX__DOT__src2)
                                     ? 1ULL : 0ULL)
                                 : 0ULL))),64);
    VL_EXTEND_WQ(127,64, __Vtemp_h2bb631d5__0, VL_SHIFTRS_QQI(64,64,5, vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_55, 
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
    VL_EXTEND_WQ(127,64, __Vtemp_hadcca096__0, vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_55);
    VL_SHIFTL_WWI(127,127,6, __Vtemp_h02dc50a1__0, __Vtemp_hadcca096__0, 
                  (0x3fU & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)));
    VL_EXTEND_WQ(127,64, __Vtemp_hd1fea39f__0, ((0x75U 
                                                 == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                 ? 
                                                (vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_55 
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
                                                      VL_SHIFTRS_QQI(64,64,6, vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_55, 
                                                                     (0x3fU 
                                                                      & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)))
                                                       : 0ULL))))))));
    bufp->fullQData(oldp+417,((((QData)((IData)(((0x6eU 
                                                  == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                  ? 
                                                 __Vtemp_h2bb631d5__0[1U]
                                                  : 
                                                 ((0x73U 
                                                   == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                   ? 
                                                  __Vtemp_h8248920c__0[1U]
                                                   : 
                                                  ((0x41U 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? 
                                                   __Vtemp_h02dc50a1__0[1U]
                                                    : 
                                                   __Vtemp_hd1fea39f__0[1U]))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((0x6eU 
                                                              == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                              ? 
                                                             __Vtemp_h2bb631d5__0[0U]
                                                              : 
                                                             ((0x73U 
                                                               == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                               ? 
                                                              __Vtemp_h8248920c__0[0U]
                                                               : 
                                                              ((0x41U 
                                                                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                                ? 
                                                               __Vtemp_h02dc50a1__0[0U]
                                                                : 
                                                               __Vtemp_hd1fea39f__0[0U]))))))),64);
    bufp->fullQData(oldp+419,(((0x45U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
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
    bufp->fullBit(oldp+421,(vlSelf->CoreTop__DOT__EX_io_is_flush));
    bufp->fullBit(oldp+422,(vlSelf->CoreTop__DOT__ID_io_out_bits_ctrl_signal_inst_valid));
    bufp->fullQData(oldp+423,(vlSelf->CoreTop__DOT__mem_bypass_io_Bypass_REG1),64);
    bufp->fullQData(oldp+425,(vlSelf->CoreTop__DOT__mem_bypass_io_Bypass_REG2),64);
    bufp->fullQData(oldp+427,(vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfData),64);
    bufp->fullQData(oldp+429,(vlSelf->CoreTop__DOT__mem_rdata),64);
    bufp->fullQData(oldp+431,(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfData),64);
    bufp->fullQData(oldp+433,(vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_55),64);
    bufp->fullQData(oldp+435,(vlSelf->CoreTop__DOT__EX__DOT__src2),64);
    bufp->fullBit(oldp+437,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+438,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_27 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+439,((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_37 
                             >> 0x1fU)));
    bufp->fullBit(oldp+440,((vlSelf->CoreTop__DOT__EX__DOT___GEN_175 
                             >> 0x1fU)));
    bufp->fullBit(oldp+441,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_10 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+442,((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_61 
                             >> 0x1fU)));
    bufp->fullBit(oldp+443,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_5[0U] 
                             >> 0x1fU)));
    bufp->fullBit(oldp+444,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_16[0U] 
                             >> 0x1fU)));
    bufp->fullBit(oldp+445,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_25 
                             >> 0x1fU)));
    bufp->fullBit(oldp+446,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_31 
                             >> 0x1fU)));
    bufp->fullBit(oldp+447,(vlSelf->CoreTop__DOT__EX__DOT__branch_flag));
    bufp->fullQData(oldp+448,(vlSelf->CoreTop__DOT__IFM__DOT__rdata),64);
    bufp->fullBit(oldp+450,((1U & (IData)((vlSelf->CoreTop__DOT__mem_rdata 
                                           >> 0x3fU)))));
    bufp->fullBit(oldp+451,((1U & (IData)((vlSelf->CoreTop__DOT__mem_rdata 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+452,((1U & ((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_27) 
                                   >> 7U))));
    bufp->fullBit(oldp+453,((1U & ((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_44) 
                                   >> 0xfU))));
    bufp->fullBit(oldp+454,(vlSelf->clock));
    bufp->fullBit(oldp+455,(vlSelf->reset));
    bufp->fullQData(oldp+456,(vlSelf->io_pc),64);
    bufp->fullIData(oldp+458,(vlSelf->io_inst),32);
    bufp->fullBit(oldp+459,(1U));
    bufp->fullCData(oldp+460,(0U),5);
    bufp->fullCData(oldp+461,(1U),5);
    bufp->fullCData(oldp+462,(2U),5);
    bufp->fullCData(oldp+463,(3U),5);
    bufp->fullCData(oldp+464,(4U),5);
    bufp->fullCData(oldp+465,(5U),5);
    bufp->fullCData(oldp+466,(6U),5);
    bufp->fullCData(oldp+467,(7U),5);
    bufp->fullCData(oldp+468,(8U),5);
    bufp->fullCData(oldp+469,(9U),5);
    bufp->fullCData(oldp+470,(0xaU),5);
    bufp->fullCData(oldp+471,(0xbU),5);
    bufp->fullCData(oldp+472,(0xcU),5);
    bufp->fullCData(oldp+473,(0xdU),5);
    bufp->fullCData(oldp+474,(0xeU),5);
    bufp->fullCData(oldp+475,(0xfU),5);
    bufp->fullCData(oldp+476,(0x10U),5);
    bufp->fullCData(oldp+477,(0x11U),5);
    bufp->fullCData(oldp+478,(0x12U),5);
    bufp->fullCData(oldp+479,(0x13U),5);
    bufp->fullCData(oldp+480,(0x14U),5);
    bufp->fullCData(oldp+481,(0x15U),5);
    bufp->fullCData(oldp+482,(0x16U),5);
    bufp->fullCData(oldp+483,(0x17U),5);
    bufp->fullCData(oldp+484,(0x18U),5);
    bufp->fullCData(oldp+485,(0x19U),5);
    bufp->fullCData(oldp+486,(0x1aU),5);
    bufp->fullCData(oldp+487,(0x1bU),5);
    bufp->fullCData(oldp+488,(0x1cU),5);
    bufp->fullCData(oldp+489,(0x1dU),5);
    bufp->fullCData(oldp+490,(0x1eU),5);
    bufp->fullCData(oldp+491,(0x1fU),5);
}
