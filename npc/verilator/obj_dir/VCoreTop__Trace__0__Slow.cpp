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
    tracep->declBit(c+483,"clock", false,-1);
    tracep->declBit(c+484,"reset", false,-1);
    tracep->declQuad(c+485,"io_pc", false,-1, 63,0);
    tracep->declBus(c+487,"io_inst", false,-1, 31,0);
    tracep->pushNamePrefix("CoreTop ");
    tracep->declBit(c+483,"clock", false,-1);
    tracep->declBit(c+484,"reset", false,-1);
    tracep->declQuad(c+485,"io_pc", false,-1, 63,0);
    tracep->declBus(c+487,"io_inst", false,-1, 31,0);
    tracep->declBit(c+483,"IF_clock", false,-1);
    tracep->declBit(c+484,"IF_reset", false,-1);
    tracep->declBit(c+412,"IF_io_branch_io_is_branch", false,-1);
    tracep->declBit(c+1,"IF_io_branch_io_is_jump", false,-1);
    tracep->declQuad(c+413,"IF_io_branch_io_dnpc", false,-1, 63,0);
    tracep->declBus(c+415,"IF_io_inst", false,-1, 31,0);
    tracep->declBit(c+2,"IF_io_out_ready", false,-1);
    tracep->declQuad(c+3,"IF_io_out_bits_PC", false,-1, 63,0);
    tracep->declBus(c+416,"IF_io_out_bits_Inst", false,-1, 31,0);
    tracep->declBit(c+442,"IF_io_flush", false,-1);
    tracep->declBit(c+484,"IFM_reset", false,-1);
    tracep->declBit(c+483,"IFM_clk", false,-1);
    tracep->declQuad(c+3,"IFM_pc", false,-1, 63,0);
    tracep->declBus(c+415,"IFM_inst", false,-1, 31,0);
    tracep->declBit(c+2,"ID_io_in_ready", false,-1);
    tracep->declQuad(c+5,"ID_io_in_bits_PC", false,-1, 63,0);
    tracep->declBus(c+7,"ID_io_in_bits_Inst", false,-1, 31,0);
    tracep->declQuad(c+417,"ID_io_REG1", false,-1, 63,0);
    tracep->declQuad(c+419,"ID_io_REG2", false,-1, 63,0);
    tracep->declBit(c+442,"ID_io_flush", false,-1);
    tracep->declBit(c+2,"ID_io_out_ready", false,-1);
    tracep->declBus(c+8,"ID_io_out_bits_ctrl_signal_src1Type", false,-1, 2,0);
    tracep->declBus(c+9,"ID_io_out_bits_ctrl_signal_src2Type", false,-1, 2,0);
    tracep->declBus(c+10,"ID_io_out_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+443,"ID_io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBus(c+11,"ID_io_out_bits_ctrl_signal_rfSrc1", false,-1, 4,0);
    tracep->declBus(c+12,"ID_io_out_bits_ctrl_signal_rfSrc2", false,-1, 4,0);
    tracep->declBit(c+421,"ID_io_out_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+13,"ID_io_out_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declBus(c+14,"ID_io_out_bits_ctrl_signal_rfDest", false,-1, 4,0);
    tracep->declQuad(c+417,"ID_io_out_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+419,"ID_io_out_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+15,"ID_io_out_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declQuad(c+5,"ID_io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+7,"ID_io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declBit(c+483,"EX_clock", false,-1);
    tracep->declBit(c+484,"EX_reset", false,-1);
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
    tracep->declQuad(c+444,"EX_io_src1", false,-1, 63,0);
    tracep->declQuad(c+446,"EX_io_src2", false,-1, 63,0);
    tracep->declBit(c+412,"EX_io_branchIO_is_branch", false,-1);
    tracep->declBit(c+1,"EX_io_branchIO_is_jump", false,-1);
    tracep->declQuad(c+413,"EX_io_branchIO_dnpc", false,-1, 63,0);
    tracep->declBit(c+36,"EX_io_out_valid", false,-1);
    tracep->declBus(c+20,"EX_io_out_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+21,"EX_io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+24,"EX_io_out_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+25,"EX_io_out_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+33,"EX_io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+35,"EX_io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+413,"EX_io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+26,"EX_io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+37,"EX_io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+448,"EX_io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+422,"EX_io_out_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+424,"EX_io_out_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+31,"EX_io_out_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declBit(c+38,"EX_io_is_break", false,-1);
    tracep->declBit(c+442,"EX_io_is_flush", false,-1);
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
    tracep->declBit(c+488,"rf_bypass_io_Reg1_MPORT_en", false,-1);
    tracep->declBus(c+11,"rf_bypass_io_Reg1_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+175,"rf_bypass_io_Reg1_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+488,"rf_bypass_io_Reg2_MPORT_en", false,-1);
    tracep->declBus(c+12,"rf_bypass_io_Reg2_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+177,"rf_bypass_io_Reg2_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+488,"rf_DIP_io_rf_0_MPORT_en", false,-1);
    tracep->declBus(c+489,"rf_DIP_io_rf_0_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+40,"rf_DIP_io_rf_0_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+488,"rf_DIP_io_rf_1_MPORT_en", false,-1);
    tracep->declBus(c+490,"rf_DIP_io_rf_1_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+42,"rf_DIP_io_rf_1_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+488,"rf_DIP_io_rf_2_MPORT_en", false,-1);
    tracep->declBus(c+491,"rf_DIP_io_rf_2_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+44,"rf_DIP_io_rf_2_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+488,"rf_DIP_io_rf_3_MPORT_en", false,-1);
    tracep->declBus(c+492,"rf_DIP_io_rf_3_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+46,"rf_DIP_io_rf_3_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+488,"rf_DIP_io_rf_4_MPORT_en", false,-1);
    tracep->declBus(c+493,"rf_DIP_io_rf_4_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+48,"rf_DIP_io_rf_4_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+488,"rf_DIP_io_rf_5_MPORT_en", false,-1);
    tracep->declBus(c+494,"rf_DIP_io_rf_5_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+50,"rf_DIP_io_rf_5_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+488,"rf_DIP_io_rf_6_MPORT_en", false,-1);
    tracep->declBus(c+495,"rf_DIP_io_rf_6_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+52,"rf_DIP_io_rf_6_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+488,"rf_DIP_io_rf_7_MPORT_en", false,-1);
    tracep->declBus(c+496,"rf_DIP_io_rf_7_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+54,"rf_DIP_io_rf_7_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+488,"rf_DIP_io_rf_8_MPORT_en", false,-1);
    tracep->declBus(c+497,"rf_DIP_io_rf_8_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+56,"rf_DIP_io_rf_8_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+488,"rf_DIP_io_rf_9_MPORT_en", false,-1);
    tracep->declBus(c+498,"rf_DIP_io_rf_9_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+58,"rf_DIP_io_rf_9_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+488,"rf_DIP_io_rf_10_MPORT_en", false,-1);
    tracep->declBus(c+499,"rf_DIP_io_rf_10_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+60,"rf_DIP_io_rf_10_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+488,"rf_DIP_io_rf_11_MPORT_en", false,-1);
    tracep->declBus(c+500,"rf_DIP_io_rf_11_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+62,"rf_DIP_io_rf_11_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+488,"rf_DIP_io_rf_12_MPORT_en", false,-1);
    tracep->declBus(c+501,"rf_DIP_io_rf_12_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+64,"rf_DIP_io_rf_12_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+488,"rf_DIP_io_rf_13_MPORT_en", false,-1);
    tracep->declBus(c+502,"rf_DIP_io_rf_13_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+66,"rf_DIP_io_rf_13_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+488,"rf_DIP_io_rf_14_MPORT_en", false,-1);
    tracep->declBus(c+503,"rf_DIP_io_rf_14_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+68,"rf_DIP_io_rf_14_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+488,"rf_DIP_io_rf_15_MPORT_en", false,-1);
    tracep->declBus(c+504,"rf_DIP_io_rf_15_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+70,"rf_DIP_io_rf_15_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+488,"rf_DIP_io_rf_16_MPORT_en", false,-1);
    tracep->declBus(c+505,"rf_DIP_io_rf_16_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+72,"rf_DIP_io_rf_16_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+488,"rf_DIP_io_rf_17_MPORT_en", false,-1);
    tracep->declBus(c+506,"rf_DIP_io_rf_17_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+74,"rf_DIP_io_rf_17_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+488,"rf_DIP_io_rf_18_MPORT_en", false,-1);
    tracep->declBus(c+507,"rf_DIP_io_rf_18_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+76,"rf_DIP_io_rf_18_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+488,"rf_DIP_io_rf_19_MPORT_en", false,-1);
    tracep->declBus(c+508,"rf_DIP_io_rf_19_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+78,"rf_DIP_io_rf_19_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+488,"rf_DIP_io_rf_20_MPORT_en", false,-1);
    tracep->declBus(c+509,"rf_DIP_io_rf_20_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+80,"rf_DIP_io_rf_20_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+488,"rf_DIP_io_rf_21_MPORT_en", false,-1);
    tracep->declBus(c+510,"rf_DIP_io_rf_21_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+82,"rf_DIP_io_rf_21_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+488,"rf_DIP_io_rf_22_MPORT_en", false,-1);
    tracep->declBus(c+511,"rf_DIP_io_rf_22_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+84,"rf_DIP_io_rf_22_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+488,"rf_DIP_io_rf_23_MPORT_en", false,-1);
    tracep->declBus(c+512,"rf_DIP_io_rf_23_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+86,"rf_DIP_io_rf_23_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+488,"rf_DIP_io_rf_24_MPORT_en", false,-1);
    tracep->declBus(c+513,"rf_DIP_io_rf_24_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+88,"rf_DIP_io_rf_24_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+488,"rf_DIP_io_rf_25_MPORT_en", false,-1);
    tracep->declBus(c+514,"rf_DIP_io_rf_25_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+90,"rf_DIP_io_rf_25_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+488,"rf_DIP_io_rf_26_MPORT_en", false,-1);
    tracep->declBus(c+515,"rf_DIP_io_rf_26_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+92,"rf_DIP_io_rf_26_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+488,"rf_DIP_io_rf_27_MPORT_en", false,-1);
    tracep->declBus(c+516,"rf_DIP_io_rf_27_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+94,"rf_DIP_io_rf_27_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+488,"rf_DIP_io_rf_28_MPORT_en", false,-1);
    tracep->declBus(c+517,"rf_DIP_io_rf_28_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+96,"rf_DIP_io_rf_28_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+488,"rf_DIP_io_rf_29_MPORT_en", false,-1);
    tracep->declBus(c+518,"rf_DIP_io_rf_29_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+98,"rf_DIP_io_rf_29_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+488,"rf_DIP_io_rf_30_MPORT_en", false,-1);
    tracep->declBus(c+519,"rf_DIP_io_rf_30_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+100,"rf_DIP_io_rf_30_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+488,"rf_DIP_io_rf_31_MPORT_en", false,-1);
    tracep->declBus(c+520,"rf_DIP_io_rf_31_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+102,"rf_DIP_io_rf_31_MPORT_data", false,-1, 63,0);
    tracep->declQuad(c+179,"rf_MPORT_data", false,-1, 63,0);
    tracep->declBus(c+181,"rf_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+488,"rf_MPORT_mask", false,-1);
    tracep->declBit(c+182,"rf_MPORT_en", false,-1);
    tracep->declQuad(c+183,"mem_addr", false,-1, 63,0);
    tracep->declBit(c+484,"mem_reset", false,-1);
    tracep->declBit(c+483,"mem_clk", false,-1);
    tracep->declBit(c+185,"mem_we", false,-1);
    tracep->declBit(c+186,"mem_ce", false,-1);
    tracep->declQuad(c+187,"mem_wdata", false,-1, 63,0);
    tracep->declQuad(c+450,"mem_rdata", false,-1, 63,0);
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
    tracep->declQuad(c+452,"MEM_io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+183,"MEM_io_mem_addr", false,-1, 63,0);
    tracep->declQuad(c+450,"MEM_io_mem_rdata", false,-1, 63,0);
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
    tracep->declQuad(c+448,"bypass_io_EX_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+200,"bypass_io_MEM_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+211,"bypass_io_MEM_rf_rfWen", false,-1);
    tracep->declQuad(c+452,"bypass_io_MEM_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+181,"bypass_io_WB_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+182,"bypass_io_WB_rf_rfWen", false,-1);
    tracep->declQuad(c+221,"bypass_io_WB_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+224,"bypass_io_Reg1", false,-1, 63,0);
    tracep->declBus(c+11,"bypass_io_reg_index1", false,-1, 4,0);
    tracep->declQuad(c+226,"bypass_io_Reg2", false,-1, 63,0);
    tracep->declBus(c+12,"bypass_io_reg_index2", false,-1, 4,0);
    tracep->declQuad(c+417,"bypass_io_Bypass_REG1", false,-1, 63,0);
    tracep->declQuad(c+419,"bypass_io_Bypass_REG2", false,-1, 63,0);
    tracep->declBus(c+200,"mem_bypass_io_MEM_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+211,"mem_bypass_io_MEM_rf_rfWen", false,-1);
    tracep->declQuad(c+452,"mem_bypass_io_MEM_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+27,"mem_bypass_io_Reg1", false,-1, 63,0);
    tracep->declBus(c+22,"mem_bypass_io_reg_index1", false,-1, 4,0);
    tracep->declQuad(c+29,"mem_bypass_io_Reg2", false,-1, 63,0);
    tracep->declBus(c+23,"mem_bypass_io_reg_index2", false,-1, 4,0);
    tracep->declQuad(c+444,"mem_bypass_io_Bypass_REG1", false,-1, 63,0);
    tracep->declQuad(c+446,"mem_bypass_io_Bypass_REG2", false,-1, 63,0);
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
    tracep->declBit(c+483,"clock", false,-1);
    tracep->declBit(c+484,"reset", false,-1);
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
    tracep->declQuad(c+444,"io_src1", false,-1, 63,0);
    tracep->declQuad(c+446,"io_src2", false,-1, 63,0);
    tracep->declBit(c+412,"io_branchIO_is_branch", false,-1);
    tracep->declBit(c+1,"io_branchIO_is_jump", false,-1);
    tracep->declQuad(c+413,"io_branchIO_dnpc", false,-1, 63,0);
    tracep->declBit(c+36,"io_out_valid", false,-1);
    tracep->declBus(c+20,"io_out_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+21,"io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+24,"io_out_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+25,"io_out_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+33,"io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+35,"io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+413,"io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+26,"io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+37,"io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+448,"io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+422,"io_out_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+424,"io_out_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+31,"io_out_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declBit(c+38,"io_is_break", false,-1);
    tracep->declBit(c+442,"io_is_flush", false,-1);
    tracep->declQuad(c+300,"CSRDIFF_mepc", false,-1, 63,0);
    tracep->declQuad(c+302,"CSRDIFF_mcause", false,-1, 63,0);
    tracep->declQuad(c+304,"CSRDIFF_mstatus", false,-1, 63,0);
    tracep->declQuad(c+306,"CSRDIFF_mtvec", false,-1, 63,0);
    tracep->declBit(c+483,"mul_clock", false,-1);
    tracep->declBit(c+484,"mul_reset", false,-1);
    tracep->declBit(c+308,"mul_io_in_valid", false,-1);
    tracep->declQuad(c+426,"mul_io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+428,"mul_io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declBit(c+309,"mul_io_out_valid", false,-1);
    tracep->declQuad(c+310,"mul_io_out_bits_result_result_lo", false,-1, 63,0);
    tracep->declBit(c+483,"div_clock", false,-1);
    tracep->declBit(c+484,"div_reset", false,-1);
    tracep->declBit(c+312,"div_io_in_valid", false,-1);
    tracep->declBit(c+313,"div_io_in_bits_ctrl_flow_div_signed", false,-1);
    tracep->declQuad(c+454,"div_io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+456,"div_io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declBit(c+314,"div_io_out_valid", false,-1);
    tracep->declQuad(c+458,"div_io_out_bits_result_quotient", false,-1, 63,0);
    tracep->declQuad(c+460,"div_io_out_bits_result_remainder", false,-1, 63,0);
    tracep->declBit(c+315,"is_mul", false,-1);
    tracep->declBit(c+316,"is_div", false,-1);
    tracep->declBit(c+317,"is_divw", false,-1);
    tracep->declBit(c+313,"is_div_sign", false,-1);
    tracep->declQuad(c+318,"mepc", false,-1, 63,0);
    tracep->declQuad(c+320,"mcause", false,-1, 63,0);
    tracep->declQuad(c+322,"mstatus", false,-1, 63,0);
    tracep->declQuad(c+324,"mtvec", false,-1, 63,0);
    tracep->declQuad(c+326,"mie", false,-1, 63,0);
    tracep->declQuad(c+328,"mip", false,-1, 63,0);
    tracep->declQuad(c+462,"src1", false,-1, 63,0);
    tracep->declQuad(c+464,"src2", false,-1, 63,0);
    tracep->declBit(c+466,"alu_result_sign", false,-1);
    tracep->declBit(c+330,"alu_result_sign_2", false,-1);
    tracep->declBit(c+467,"alu_result_sign_3", false,-1);
    tracep->declBit(c+468,"alu_result_sign_4", false,-1);
    tracep->declBit(c+469,"alu_result_sign_6", false,-1);
    tracep->declQuad(c+430,"alu_result", false,-1, 63,0);
    tracep->declBit(c+470,"shift_result_sign", false,-1);
    tracep->declBit(c+471,"shift_result_sign_1", false,-1);
    tracep->declBit(c+472,"shift_result_sign_2", false,-1);
    tracep->declBit(c+473,"shift_result_sign_3", false,-1);
    tracep->declBit(c+474,"div_io_in_bits_ctrl_data_src1_sign", false,-1);
    tracep->declBit(c+475,"div_io_in_bits_ctrl_data_src2_sign", false,-1);
    tracep->declQuad(c+432,"compar_result", false,-1, 63,0);
    tracep->declQuad(c+331,"jump_result", false,-1, 63,0);
    tracep->declQuad(c+434,"shift_result", false,-1, 63,0);
    tracep->declQuad(c+333,"branch_result", false,-1, 63,0);
    tracep->declBit(c+476,"branch_flag", false,-1);
    tracep->declQuad(c+335,"csr_data", false,-1, 63,0);
    tracep->declQuad(c+337,"CSRDIFF_io_mtvec_REG", false,-1, 63,0);
    tracep->declQuad(c+306,"CSRDIFF_io_mtvec_REG_1", false,-1, 63,0);
    tracep->declQuad(c+339,"CSRDIFF_io_mcause_REG", false,-1, 63,0);
    tracep->declQuad(c+302,"CSRDIFF_io_mcause_REG_1", false,-1, 63,0);
    tracep->declQuad(c+341,"CSRDIFF_io_mepc_REG", false,-1, 63,0);
    tracep->declQuad(c+300,"CSRDIFF_io_mepc_REG_1", false,-1, 63,0);
    tracep->declQuad(c+343,"CSRDIFF_io_mstatus_REG", false,-1, 63,0);
    tracep->declQuad(c+304,"CSRDIFF_io_mstatus_REG_1", false,-1, 63,0);
    tracep->pushNamePrefix("CSRDIFF ");
    tracep->declQuad(c+300,"mepc", false,-1, 63,0);
    tracep->declQuad(c+302,"mcause", false,-1, 63,0);
    tracep->declQuad(c+304,"mstatus", false,-1, 63,0);
    tracep->declQuad(c+306,"mtvec", false,-1, 63,0);
    for (int i = 0; i < 6; ++i) {
        tracep->declQuad(c+345+i*2,"inst_csr", true,(i+0), 63,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("div ");
    tracep->declBit(c+483,"clock", false,-1);
    tracep->declBit(c+484,"reset", false,-1);
    tracep->declBit(c+312,"io_in_valid", false,-1);
    tracep->declBit(c+313,"io_in_bits_ctrl_flow_div_signed", false,-1);
    tracep->declQuad(c+454,"io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+456,"io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declBit(c+314,"io_out_valid", false,-1);
    tracep->declQuad(c+458,"io_out_bits_result_quotient", false,-1, 63,0);
    tracep->declQuad(c+460,"io_out_bits_result_remainder", false,-1, 63,0);
    tracep->declArray(c+357,"dividend", false,-1, 127,0);
    tracep->declQuad(c+361,"divisor", false,-1, 63,0);
    tracep->declQuad(c+363,"S", false,-1, 63,0);
    tracep->declBus(c+365,"state", false,-1, 1,0);
    tracep->declBus(c+366,"count", false,-1, 5,0);
    tracep->declBit(c+367,"wrap_wrap", false,-1);
    tracep->declBit(c+368,"s", false,-1);
    tracep->declArray(c+369,"res_div", false,-1, 64,0);
    tracep->declQuad(c+372,"negative_s", false,-1, 63,0);
    tracep->declQuad(c+374,"negative_r", false,-1, 63,0);
    tracep->declQuad(c+436,"s_o", false,-1, 63,0);
    tracep->declQuad(c+438,"r_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mul ");
    tracep->declBit(c+483,"clock", false,-1);
    tracep->declBit(c+484,"reset", false,-1);
    tracep->declBit(c+308,"io_in_valid", false,-1);
    tracep->declQuad(c+426,"io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+428,"io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declBit(c+309,"io_out_valid", false,-1);
    tracep->declQuad(c+310,"io_out_bits_result_result_lo", false,-1, 63,0);
    tracep->declBit(c+483,"mult_clock", false,-1);
    tracep->declBit(c+484,"mult_reset", false,-1);
    tracep->declBit(c+308,"mult_io_in_valid", false,-1);
    tracep->declQuad(c+426,"mult_io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+428,"mult_io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declBit(c+309,"mult_io_out_valid", false,-1);
    tracep->declQuad(c+310,"mult_io_out_bits_result_result_lo", false,-1, 63,0);
    tracep->pushNamePrefix("mult ");
    tracep->declBit(c+483,"clock", false,-1);
    tracep->declBit(c+484,"reset", false,-1);
    tracep->declBit(c+308,"io_in_valid", false,-1);
    tracep->declQuad(c+426,"io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+428,"io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declBit(c+309,"io_out_valid", false,-1);
    tracep->declQuad(c+310,"io_out_bits_result_result_lo", false,-1, 63,0);
    tracep->declBus(c+376,"partial_io_y_3", false,-1, 2,0);
    tracep->declArray(c+377,"partial_io_x", false,-1, 131,0);
    tracep->declArray(c+382,"partial_io_p", false,-1, 131,0);
    tracep->declBit(c+387,"partial_io_c", false,-1);
    tracep->declArray(c+388,"multiplier", false,-1, 65,0);
    tracep->declArray(c+377,"multiplicand", false,-1, 131,0);
    tracep->declArray(c+391,"p", false,-1, 131,0);
    tracep->declBus(c+396,"count", false,-1, 6,0);
    tracep->declArray(c+397,"temp", false,-1, 131,0);
    tracep->declBit(c+402,"p_sign", false,-1);
    tracep->pushNamePrefix("partial ");
    tracep->declBus(c+376,"io_y_3", false,-1, 2,0);
    tracep->declArray(c+377,"io_x", false,-1, 131,0);
    tracep->declArray(c+382,"io_p", false,-1, 131,0);
    tracep->declBit(c+387,"io_c", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("ID ");
    tracep->declBit(c+2,"io_in_ready", false,-1);
    tracep->declQuad(c+5,"io_in_bits_PC", false,-1, 63,0);
    tracep->declBus(c+7,"io_in_bits_Inst", false,-1, 31,0);
    tracep->declQuad(c+417,"io_REG1", false,-1, 63,0);
    tracep->declQuad(c+419,"io_REG2", false,-1, 63,0);
    tracep->declBit(c+442,"io_flush", false,-1);
    tracep->declBit(c+2,"io_out_ready", false,-1);
    tracep->declBus(c+8,"io_out_bits_ctrl_signal_src1Type", false,-1, 2,0);
    tracep->declBus(c+9,"io_out_bits_ctrl_signal_src2Type", false,-1, 2,0);
    tracep->declBus(c+10,"io_out_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+443,"io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBus(c+11,"io_out_bits_ctrl_signal_rfSrc1", false,-1, 4,0);
    tracep->declBus(c+12,"io_out_bits_ctrl_signal_rfSrc2", false,-1, 4,0);
    tracep->declBit(c+421,"io_out_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+13,"io_out_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declBus(c+14,"io_out_bits_ctrl_signal_rfDest", false,-1, 4,0);
    tracep->declQuad(c+417,"io_out_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+419,"io_out_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+15,"io_out_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declQuad(c+5,"io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+7,"io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declBus(c+14,"rd", false,-1, 4,0);
    tracep->declBus(c+403,"Inst_decode_0", false,-1, 3,0);
    tracep->declBus(c+13,"Inst_decode_2", false,-1, 6,0);
    tracep->declBit(c+404,"Inst_decode_3", false,-1);
    tracep->declBus(c+405,"srctype1", false,-1, 1,0);
    tracep->declBit(c+406,"srctype2", false,-1);
    tracep->declBit(c+407,"sign", false,-1);
    tracep->declBit(c+408,"sign_1", false,-1);
    tracep->declBit(c+409,"sign_2", false,-1);
    tracep->declBit(c+409,"sign_3", false,-1);
    tracep->declBit(c+407,"sign_4", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IF ");
    tracep->declBit(c+483,"clock", false,-1);
    tracep->declBit(c+484,"reset", false,-1);
    tracep->declBit(c+412,"io_branch_io_is_branch", false,-1);
    tracep->declBit(c+1,"io_branch_io_is_jump", false,-1);
    tracep->declQuad(c+413,"io_branch_io_dnpc", false,-1, 63,0);
    tracep->declBus(c+415,"io_inst", false,-1, 31,0);
    tracep->declBit(c+2,"io_out_ready", false,-1);
    tracep->declQuad(c+3,"io_out_bits_PC", false,-1, 63,0);
    tracep->declBus(c+416,"io_out_bits_Inst", false,-1, 31,0);
    tracep->declBit(c+442,"io_flush", false,-1);
    tracep->declQuad(c+3,"temp", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IFM ");
    tracep->declBit(c+484,"reset", false,-1);
    tracep->declBit(c+483,"clk", false,-1);
    tracep->declQuad(c+3,"pc", false,-1, 63,0);
    tracep->declBus(c+415,"inst", false,-1, 31,0);
    tracep->declQuad(c+477,"rdata", false,-1, 63,0);
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
    tracep->declQuad(c+452,"io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+183,"io_mem_addr", false,-1, 63,0);
    tracep->declQuad(c+450,"io_mem_rdata", false,-1, 63,0);
    tracep->declQuad(c+187,"io_mem_wdata", false,-1, 63,0);
    tracep->declBus(c+189,"io_mem_wmask", false,-1, 7,0);
    tracep->declBit(c+186,"io_mem_ce", false,-1);
    tracep->declBit(c+185,"io_mem_we", false,-1);
    tracep->declQuad(c+410,"addr_temp", false,-1, 63,0);
    tracep->declBit(c+479,"mem_result_sign", false,-1);
    tracep->declBit(c+480,"mem_result_sign_1", false,-1);
    tracep->declBit(c+481,"mem_result_sign_2", false,-1);
    tracep->declBit(c+482,"mem_result_sign_3", false,-1);
    tracep->declQuad(c+440,"mem_result", false,-1, 63,0);
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
    tracep->declQuad(c+448,"io_EX_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+200,"io_MEM_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+211,"io_MEM_rf_rfWen", false,-1);
    tracep->declQuad(c+452,"io_MEM_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+181,"io_WB_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+182,"io_WB_rf_rfWen", false,-1);
    tracep->declQuad(c+221,"io_WB_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+224,"io_Reg1", false,-1, 63,0);
    tracep->declBus(c+11,"io_reg_index1", false,-1, 4,0);
    tracep->declQuad(c+226,"io_Reg2", false,-1, 63,0);
    tracep->declBus(c+12,"io_reg_index2", false,-1, 4,0);
    tracep->declQuad(c+417,"io_Bypass_REG1", false,-1, 63,0);
    tracep->declQuad(c+419,"io_Bypass_REG2", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem ");
    tracep->declBit(c+484,"reset", false,-1);
    tracep->declBit(c+483,"clk", false,-1);
    tracep->declQuad(c+183,"addr", false,-1, 63,0);
    tracep->declBit(c+185,"we", false,-1);
    tracep->declBit(c+186,"ce", false,-1);
    tracep->declQuad(c+187,"wdata", false,-1, 63,0);
    tracep->declQuad(c+450,"rdata", false,-1, 63,0);
    tracep->declBus(c+189,"wmask", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_bypass ");
    tracep->declBus(c+200,"io_MEM_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+211,"io_MEM_rf_rfWen", false,-1);
    tracep->declQuad(c+452,"io_MEM_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+27,"io_Reg1", false,-1, 63,0);
    tracep->declBus(c+22,"io_reg_index1", false,-1, 4,0);
    tracep->declQuad(c+29,"io_Reg2", false,-1, 63,0);
    tracep->declBus(c+23,"io_reg_index2", false,-1, 4,0);
    tracep->declQuad(c+444,"io_Bypass_REG1", false,-1, 63,0);
    tracep->declQuad(c+446,"io_Bypass_REG2", false,-1, 63,0);
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
    VlWide<5>/*159:0*/ __Vtemp_h97a9be20__0;
    VlWide<5>/*159:0*/ __Vtemp_h97a9be20__1;
    VlWide<5>/*159:0*/ __Vtemp_h1a657afd__0;
    VlWide<5>/*159:0*/ __Vtemp_h7a662728__0;
    VlWide<5>/*159:0*/ __Vtemp_h791e8ef8__0;
    VlWide<4>/*127:0*/ __Vtemp_h7a2d1147__0;
    VlWide<4>/*127:0*/ __Vtemp_h8248920c__0;
    VlWide<4>/*127:0*/ __Vtemp_h14069084__0;
    VlWide<4>/*127:0*/ __Vtemp_h02754327__0;
    VlWide<4>/*127:0*/ __Vtemp_he2247138__0;
    // Body
    bufp->fullBit(oldp+1,(vlSelf->CoreTop__DOT__EX_io_branchIO_is_jump));
    bufp->fullBit(oldp+2,(vlSelf->CoreTop__DOT__EX_io_in_ready));
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
    bufp->fullBit(oldp+312,(((IData)(vlSelf->CoreTop__DOT__EX__DOT__is_div) 
                             & (2U != (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state)))));
    bufp->fullBit(oldp+313,(vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_flow_div_signed));
    bufp->fullBit(oldp+314,((2U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state))));
    bufp->fullBit(oldp+315,(vlSelf->CoreTop__DOT__EX__DOT__is_mul));
    bufp->fullBit(oldp+316,(vlSelf->CoreTop__DOT__EX__DOT__is_div));
    bufp->fullBit(oldp+317,(vlSelf->CoreTop__DOT__EX__DOT__is_divw));
    bufp->fullQData(oldp+318,(vlSelf->CoreTop__DOT__EX__DOT__mepc),64);
    bufp->fullQData(oldp+320,(vlSelf->CoreTop__DOT__EX__DOT__mcause),64);
    bufp->fullQData(oldp+322,(vlSelf->CoreTop__DOT__EX__DOT__mstatus),64);
    bufp->fullQData(oldp+324,(vlSelf->CoreTop__DOT__EX__DOT__mtvec),64);
    bufp->fullQData(oldp+326,(vlSelf->CoreTop__DOT__EX__DOT__mie),64);
    bufp->fullQData(oldp+328,(vlSelf->CoreTop__DOT__EX__DOT__mip),64);
    bufp->fullBit(oldp+330,((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[0U] 
                             >> 0x1fU)));
    bufp->fullQData(oldp+331,(((3U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType))
                                ? (4ULL + vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC)
                                : 0ULL)),64);
    bufp->fullQData(oldp+333,(((0x6bU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
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
    bufp->fullQData(oldp+335,(vlSelf->CoreTop__DOT__EX__DOT__csr_data),64);
    bufp->fullQData(oldp+337,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mtvec_REG),64);
    bufp->fullQData(oldp+339,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mcause_REG),64);
    bufp->fullQData(oldp+341,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mepc_REG),64);
    bufp->fullQData(oldp+343,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mstatus_REG),64);
    bufp->fullQData(oldp+345,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[0]),64);
    bufp->fullQData(oldp+347,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[1]),64);
    bufp->fullQData(oldp+349,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[2]),64);
    bufp->fullQData(oldp+351,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[3]),64);
    bufp->fullQData(oldp+353,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[4]),64);
    bufp->fullQData(oldp+355,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[5]),64);
    bufp->fullWData(oldp+357,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend),128);
    bufp->fullQData(oldp+361,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divisor),64);
    bufp->fullQData(oldp+363,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S),64);
    bufp->fullCData(oldp+365,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state),2);
    bufp->fullCData(oldp+366,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__count),6);
    bufp->fullBit(oldp+367,((0x3fU == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__count))));
    bufp->fullBit(oldp+368,(((1U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state)) 
                             & (0x3fU == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__count)))));
    bufp->fullWData(oldp+369,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div),65);
    bufp->fullQData(oldp+372,((- vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S)),64);
    bufp->fullQData(oldp+374,((- (((QData)((IData)(
                                                   vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[3U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[2U]))))),64);
    bufp->fullCData(oldp+376,((7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U])),3);
    bufp->fullWData(oldp+377,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand),132);
    VL_EXTEND_WW(133,132, __Vtemp_h97a9be20__0, vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand);
    VL_EXTEND_WW(133,132, __Vtemp_h97a9be20__1, vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand);
    if ((5U == (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))) {
        __Vtemp_h1a657afd__0[0U] = (~ vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[0U]);
        __Vtemp_h1a657afd__0[1U] = (~ vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[1U]);
        __Vtemp_h1a657afd__0[2U] = (~ vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[2U]);
        __Vtemp_h1a657afd__0[3U] = (~ vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[3U]);
        __Vtemp_h1a657afd__0[4U] = (0xfU & (~ vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[4U]));
    } else if ((6U == (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))) {
        __Vtemp_h1a657afd__0[0U] = (~ vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[0U]);
        __Vtemp_h1a657afd__0[1U] = (~ vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[1U]);
        __Vtemp_h1a657afd__0[2U] = (~ vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[2U]);
        __Vtemp_h1a657afd__0[3U] = (~ vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[3U]);
        __Vtemp_h1a657afd__0[4U] = (0xfU & (~ vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[4U]));
    } else {
        __Vtemp_h1a657afd__0[0U] = 0U;
        __Vtemp_h1a657afd__0[1U] = 0U;
        __Vtemp_h1a657afd__0[2U] = 0U;
        __Vtemp_h1a657afd__0[3U] = 0U;
        __Vtemp_h1a657afd__0[4U] = (0xfU & 0U);
    }
    VL_EXTEND_WW(133,132, __Vtemp_h7a662728__0, __Vtemp_h1a657afd__0);
    if ((0U == (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))) {
        __Vtemp_h791e8ef8__0[0U] = 0U;
        __Vtemp_h791e8ef8__0[1U] = 0U;
        __Vtemp_h791e8ef8__0[2U] = 0U;
        __Vtemp_h791e8ef8__0[3U] = 0U;
        __Vtemp_h791e8ef8__0[4U] = 0U;
    } else if ((1U == (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))) {
        __Vtemp_h791e8ef8__0[0U] = __Vtemp_h97a9be20__0[0U];
        __Vtemp_h791e8ef8__0[1U] = __Vtemp_h97a9be20__0[1U];
        __Vtemp_h791e8ef8__0[2U] = __Vtemp_h97a9be20__0[2U];
        __Vtemp_h791e8ef8__0[3U] = __Vtemp_h97a9be20__0[3U];
        __Vtemp_h791e8ef8__0[4U] = (0xfU & __Vtemp_h97a9be20__0[4U]);
    } else if ((2U == (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))) {
        __Vtemp_h791e8ef8__0[0U] = __Vtemp_h97a9be20__1[0U];
        __Vtemp_h791e8ef8__0[1U] = __Vtemp_h97a9be20__1[1U];
        __Vtemp_h791e8ef8__0[2U] = __Vtemp_h97a9be20__1[2U];
        __Vtemp_h791e8ef8__0[3U] = __Vtemp_h97a9be20__1[3U];
        __Vtemp_h791e8ef8__0[4U] = (0xfU & __Vtemp_h97a9be20__1[4U]);
    } else if ((3U == (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))) {
        __Vtemp_h791e8ef8__0[0U] = (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[0U] 
                                    << 1U);
        __Vtemp_h791e8ef8__0[1U] = ((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[0U] 
                                     >> 0x1fU) | (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[1U] 
                                                  << 1U));
        __Vtemp_h791e8ef8__0[2U] = ((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[1U] 
                                     >> 0x1fU) | (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[2U] 
                                                  << 1U));
        __Vtemp_h791e8ef8__0[3U] = ((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[2U] 
                                     >> 0x1fU) | (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[3U] 
                                                  << 1U));
        __Vtemp_h791e8ef8__0[4U] = (0xfU & ((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[3U] 
                                             >> 0x1fU) 
                                            | (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[4U] 
                                               << 1U)));
    } else if ((4U == (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))) {
        __Vtemp_h791e8ef8__0[0U] = (~ (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[0U] 
                                       << 1U));
        __Vtemp_h791e8ef8__0[1U] = (~ ((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[0U] 
                                        >> 0x1fU) | 
                                       (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[1U] 
                                        << 1U)));
        __Vtemp_h791e8ef8__0[2U] = (~ ((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[1U] 
                                        >> 0x1fU) | 
                                       (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[2U] 
                                        << 1U)));
        __Vtemp_h791e8ef8__0[3U] = (~ ((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[2U] 
                                        >> 0x1fU) | 
                                       (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[3U] 
                                        << 1U)));
        __Vtemp_h791e8ef8__0[4U] = (0xfU & (~ ((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[3U] 
                                                >> 0x1fU) 
                                               | (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[4U] 
                                                  << 1U))));
    } else {
        __Vtemp_h791e8ef8__0[0U] = __Vtemp_h7a662728__0[0U];
        __Vtemp_h791e8ef8__0[1U] = __Vtemp_h7a662728__0[1U];
        __Vtemp_h791e8ef8__0[2U] = __Vtemp_h7a662728__0[2U];
        __Vtemp_h791e8ef8__0[3U] = __Vtemp_h7a662728__0[3U];
        __Vtemp_h791e8ef8__0[4U] = (0xfU & __Vtemp_h7a662728__0[4U]);
    }
    bufp->fullWData(oldp+382,(__Vtemp_h791e8ef8__0),132);
    bufp->fullBit(oldp+387,(((0U != (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U])) 
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
    bufp->fullWData(oldp+388,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier),66);
    bufp->fullWData(oldp+391,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p),132);
    bufp->fullCData(oldp+396,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count),7);
    bufp->fullWData(oldp+397,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__temp),132);
    bufp->fullBit(oldp+402,((1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__temp[4U] 
                                   >> 3U))));
    bufp->fullCData(oldp+403,(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0),4);
    bufp->fullBit(oldp+404,(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_3));
    bufp->fullCData(oldp+405,((((7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                 ? 2U : 0U) | ((3U 
                                                == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                                ? 2U
                                                : 0U))),2);
    bufp->fullBit(oldp+406,((((8U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)) 
                              | (7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))) 
                             | (3U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)))));
    bufp->fullBit(oldp+407,((vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                             >> 0x1fU)));
    bufp->fullBit(oldp+408,((1U & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                   >> 0x13U))));
    bufp->fullBit(oldp+409,((vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                             >> 0x1fU)));
    bufp->fullQData(oldp+410,(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp),64);
    bufp->fullBit(oldp+412,(((IData)(vlSelf->CoreTop__DOT__EX__DOT__branch_flag) 
                             & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_inst_valid))));
    bufp->fullQData(oldp+413,(((0x19U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1
                                : vlSelf->CoreTop__DOT__EX__DOT___GEN_289)),64);
    bufp->fullIData(oldp+415,(((1U & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                              >> 2U)))
                                ? (IData)((vlSelf->CoreTop__DOT__IFM__DOT__rdata 
                                           >> 0x20U))
                                : (IData)(vlSelf->CoreTop__DOT__IFM__DOT__rdata))),32);
    bufp->fullIData(oldp+416,(((IData)(vlSelf->CoreTop__DOT__EX_io_is_flush)
                                ? 0U : ((1U & (IData)(
                                                      (vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                       >> 2U)))
                                         ? (IData)(
                                                   (vlSelf->CoreTop__DOT__IFM__DOT__rdata 
                                                    >> 0x20U))
                                         : (IData)(vlSelf->CoreTop__DOT__IFM__DOT__rdata)))),32);
    bufp->fullQData(oldp+417,(((((IData)(vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfWen) 
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
    bufp->fullQData(oldp+419,(((((IData)(vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfWen) 
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
    bufp->fullBit(oldp+421,(((IData)(vlSelf->CoreTop__DOT__ID_io_out_bits_ctrl_signal_inst_valid) 
                             & (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_3))));
    bufp->fullQData(oldp+422,(((0U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src1Type))
                                ? vlSelf->CoreTop__DOT__mem_bypass_io_Bypass_REG1
                                : vlSelf->CoreTop__DOT__EX__DOT___GEN_1)),64);
    bufp->fullQData(oldp+424,(((0U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src2Type))
                                ? vlSelf->CoreTop__DOT__mem_bypass_io_Bypass_REG2
                                : vlSelf->CoreTop__DOT__EX__DOT___GEN_3)),64);
    bufp->fullQData(oldp+426,(((IData)(vlSelf->CoreTop__DOT__EX__DOT__is_mul)
                                ? vlSelf->CoreTop__DOT__EX__DOT___shift_result_T
                                : (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT___shift_result_T)))),64);
    bufp->fullQData(oldp+428,(((IData)(vlSelf->CoreTop__DOT__EX__DOT__is_mul)
                                ? vlSelf->CoreTop__DOT__EX__DOT___compar_result_T_3
                                : (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT___compar_result_T_3)))),64);
    bufp->fullQData(oldp+430,(((0x40U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1
                                : ((0x1aU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                    ? vlSelf->CoreTop__DOT__EX__DOT___compar_result_T_3
                                    : ((0x68U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                        ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_7
                                        : ((0x44U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                            ? (vlSelf->CoreTop__DOT__EX__DOT___shift_result_T 
                                               | vlSelf->CoreTop__DOT__EX__DOT___compar_result_T_3)
                                            : ((0x69U 
                                                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_10
                                                : (
                                                   (0x71U 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? 
                                                   (vlSelf->CoreTop__DOT__EX__DOT___shift_result_T 
                                                    & vlSelf->CoreTop__DOT__EX__DOT___compar_result_T_3)
                                                    : vlSelf->CoreTop__DOT__EX__DOT___GEN_145))))))),64);
    bufp->fullQData(oldp+432,(((0x6aU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                ? ((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T 
                                    < vlSelf->CoreTop__DOT__EX__DOT___compar_result_T_3)
                                    ? 1ULL : 0ULL) : 
                               ((2U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                 ? (VL_LTS_IQQ(64, vlSelf->CoreTop__DOT__EX__DOT___shift_result_T, vlSelf->CoreTop__DOT__EX__DOT___compar_result_T_3)
                                     ? 1ULL : 0ULL)
                                 : 0ULL))),64);
    VL_EXTEND_WQ(127,64, __Vtemp_h7a2d1147__0, VL_SHIFTRS_QQI(64,64,5, vlSelf->CoreTop__DOT__EX__DOT___shift_result_T, 
                                                              (0x1fU 
                                                               & (IData)(vlSelf->CoreTop__DOT__EX__DOT___compar_result_T_3))));
    VL_EXTEND_WQ(127,64, __Vtemp_h8248920c__0, (((QData)((IData)(
                                                                 ((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_5[0U] 
                                                                   >> 0x1fU)
                                                                   ? 0xffffffffU
                                                                   : 0U))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_5[0U]))));
    VL_EXTEND_WQ(127,64, __Vtemp_h14069084__0, vlSelf->CoreTop__DOT__EX__DOT___shift_result_T);
    VL_SHIFTL_WWI(127,127,6, __Vtemp_h02754327__0, __Vtemp_h14069084__0, 
                  (0x3fU & (IData)(vlSelf->CoreTop__DOT__EX__DOT___compar_result_T_3)));
    VL_EXTEND_WQ(127,64, __Vtemp_he2247138__0, ((0x75U 
                                                 == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                 ? 
                                                (vlSelf->CoreTop__DOT__EX__DOT___shift_result_T 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT___compar_result_T_3)))
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
                                                      VL_SHIFTRS_QQI(64,64,6, vlSelf->CoreTop__DOT__EX__DOT___shift_result_T, 
                                                                     (0x3fU 
                                                                      & (IData)(vlSelf->CoreTop__DOT__EX__DOT___compar_result_T_3)))
                                                       : 0ULL))))))));
    bufp->fullQData(oldp+434,((((QData)((IData)(((0x6eU 
                                                  == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                  ? 
                                                 __Vtemp_h7a2d1147__0[1U]
                                                  : 
                                                 ((0x73U 
                                                   == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                   ? 
                                                  __Vtemp_h8248920c__0[1U]
                                                   : 
                                                  ((0x41U 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? 
                                                   __Vtemp_h02754327__0[1U]
                                                    : 
                                                   __Vtemp_he2247138__0[1U]))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((0x6eU 
                                                              == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                              ? 
                                                             __Vtemp_h7a2d1147__0[0U]
                                                              : 
                                                             ((0x73U 
                                                               == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                               ? 
                                                              __Vtemp_h8248920c__0[0U]
                                                               : 
                                                              ((0x41U 
                                                                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                                ? 
                                                               __Vtemp_h02754327__0[0U]
                                                                : 
                                                               __Vtemp_he2247138__0[0U]))))))),64);
    bufp->fullQData(oldp+436,((((((0U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                                   ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_13
                                   : 0ULL) | ((1U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                                               ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_18
                                               : 0ULL)) 
                                | ((2U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                                    ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_18
                                    : 0ULL)) | ((3U 
                                                 == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                                                 ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_13
                                                 : 0ULL))),64);
    bufp->fullQData(oldp+438,((((((0U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                                   ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_16
                                   : 0ULL) | ((1U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                                               ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_16
                                               : 0ULL)) 
                                | ((2U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                                    ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_26
                                    : 0ULL)) | ((3U 
                                                 == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                                                 ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_26
                                                 : 0ULL))),64);
    bufp->fullQData(oldp+440,(((0x45U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
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
    bufp->fullBit(oldp+442,(vlSelf->CoreTop__DOT__EX_io_is_flush));
    bufp->fullBit(oldp+443,(vlSelf->CoreTop__DOT__ID_io_out_bits_ctrl_signal_inst_valid));
    bufp->fullQData(oldp+444,(vlSelf->CoreTop__DOT__mem_bypass_io_Bypass_REG1),64);
    bufp->fullQData(oldp+446,(vlSelf->CoreTop__DOT__mem_bypass_io_Bypass_REG2),64);
    bufp->fullQData(oldp+448,(vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfData),64);
    bufp->fullQData(oldp+450,(vlSelf->CoreTop__DOT__mem_rdata),64);
    bufp->fullQData(oldp+452,(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfData),64);
    bufp->fullQData(oldp+454,(vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src1),64);
    bufp->fullQData(oldp+456,(vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src2),64);
    bufp->fullQData(oldp+458,(vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_quotient),64);
    bufp->fullQData(oldp+460,(vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_remainder),64);
    bufp->fullQData(oldp+462,(vlSelf->CoreTop__DOT__EX__DOT___shift_result_T),64);
    bufp->fullQData(oldp+464,(vlSelf->CoreTop__DOT__EX__DOT___compar_result_T_3),64);
    bufp->fullBit(oldp+466,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+467,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_quotient 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+468,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_remainder 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+469,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_10 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+470,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_5[0U] 
                             >> 0x1fU)));
    bufp->fullBit(oldp+471,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_16[0U] 
                             >> 0x1fU)));
    bufp->fullBit(oldp+472,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_25 
                             >> 0x1fU)));
    bufp->fullBit(oldp+473,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_31 
                             >> 0x1fU)));
    bufp->fullBit(oldp+474,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+475,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT___compar_result_T_3 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+476,(vlSelf->CoreTop__DOT__EX__DOT__branch_flag));
    bufp->fullQData(oldp+477,(vlSelf->CoreTop__DOT__IFM__DOT__rdata),64);
    bufp->fullBit(oldp+479,((1U & (IData)((vlSelf->CoreTop__DOT__mem_rdata 
                                           >> 0x3fU)))));
    bufp->fullBit(oldp+480,((1U & (IData)((vlSelf->CoreTop__DOT__mem_rdata 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+481,((1U & ((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_27) 
                                   >> 7U))));
    bufp->fullBit(oldp+482,((1U & ((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_44) 
                                   >> 0xfU))));
    bufp->fullBit(oldp+483,(vlSelf->clock));
    bufp->fullBit(oldp+484,(vlSelf->reset));
    bufp->fullQData(oldp+485,(vlSelf->io_pc),64);
    bufp->fullIData(oldp+487,(vlSelf->io_inst),32);
    bufp->fullBit(oldp+488,(1U));
    bufp->fullCData(oldp+489,(0U),5);
    bufp->fullCData(oldp+490,(1U),5);
    bufp->fullCData(oldp+491,(2U),5);
    bufp->fullCData(oldp+492,(3U),5);
    bufp->fullCData(oldp+493,(4U),5);
    bufp->fullCData(oldp+494,(5U),5);
    bufp->fullCData(oldp+495,(6U),5);
    bufp->fullCData(oldp+496,(7U),5);
    bufp->fullCData(oldp+497,(8U),5);
    bufp->fullCData(oldp+498,(9U),5);
    bufp->fullCData(oldp+499,(0xaU),5);
    bufp->fullCData(oldp+500,(0xbU),5);
    bufp->fullCData(oldp+501,(0xcU),5);
    bufp->fullCData(oldp+502,(0xdU),5);
    bufp->fullCData(oldp+503,(0xeU),5);
    bufp->fullCData(oldp+504,(0xfU),5);
    bufp->fullCData(oldp+505,(0x10U),5);
    bufp->fullCData(oldp+506,(0x11U),5);
    bufp->fullCData(oldp+507,(0x12U),5);
    bufp->fullCData(oldp+508,(0x13U),5);
    bufp->fullCData(oldp+509,(0x14U),5);
    bufp->fullCData(oldp+510,(0x15U),5);
    bufp->fullCData(oldp+511,(0x16U),5);
    bufp->fullCData(oldp+512,(0x17U),5);
    bufp->fullCData(oldp+513,(0x18U),5);
    bufp->fullCData(oldp+514,(0x19U),5);
    bufp->fullCData(oldp+515,(0x1aU),5);
    bufp->fullCData(oldp+516,(0x1bU),5);
    bufp->fullCData(oldp+517,(0x1cU),5);
    bufp->fullCData(oldp+518,(0x1dU),5);
    bufp->fullCData(oldp+519,(0x1eU),5);
    bufp->fullCData(oldp+520,(0x1fU),5);
}
