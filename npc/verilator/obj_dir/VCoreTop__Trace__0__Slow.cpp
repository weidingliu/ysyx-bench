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
    tracep->declBit(c+408,"clock", false,-1);
    tracep->declBit(c+409,"reset", false,-1);
    tracep->declQuad(c+410,"io_pc", false,-1, 63,0);
    tracep->declBus(c+412,"io_inst", false,-1, 31,0);
    tracep->pushNamePrefix("CoreTop ");
    tracep->declBit(c+408,"clock", false,-1);
    tracep->declBit(c+409,"reset", false,-1);
    tracep->declQuad(c+410,"io_pc", false,-1, 63,0);
    tracep->declBus(c+412,"io_inst", false,-1, 31,0);
    tracep->declBit(c+408,"IF_clock", false,-1);
    tracep->declBit(c+409,"IF_reset", false,-1);
    tracep->declBit(c+355,"IF_io_branch_io_is_branch", false,-1);
    tracep->declBit(c+1,"IF_io_branch_io_is_jump", false,-1);
    tracep->declQuad(c+356,"IF_io_branch_io_dnpc", false,-1, 63,0);
    tracep->declBus(c+358,"IF_io_inst", false,-1, 31,0);
    tracep->declQuad(c+2,"IF_io_out_bits_PC", false,-1, 63,0);
    tracep->declBus(c+358,"IF_io_out_bits_Inst", false,-1, 31,0);
    tracep->declBit(c+409,"IFM_reset", false,-1);
    tracep->declBit(c+408,"IFM_clk", false,-1);
    tracep->declQuad(c+2,"IFM_pc", false,-1, 63,0);
    tracep->declBus(c+358,"IFM_inst", false,-1, 31,0);
    tracep->declBit(c+4,"ID_io_in_valid", false,-1);
    tracep->declQuad(c+5,"ID_io_in_bits_PC", false,-1, 63,0);
    tracep->declBus(c+7,"ID_io_in_bits_Inst", false,-1, 31,0);
    tracep->declQuad(c+359,"ID_io_REG1", false,-1, 63,0);
    tracep->declQuad(c+361,"ID_io_REG2", false,-1, 63,0);
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
    tracep->declQuad(c+359,"ID_io_out_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+361,"ID_io_out_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+17,"ID_io_out_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declQuad(c+5,"ID_io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+7,"ID_io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declBit(c+408,"EX_clock", false,-1);
    tracep->declBit(c+409,"EX_reset", false,-1);
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
    tracep->declQuad(c+375,"EX_io_src1", false,-1, 63,0);
    tracep->declQuad(c+377,"EX_io_src2", false,-1, 63,0);
    tracep->declBit(c+355,"EX_io_branchIO_is_branch", false,-1);
    tracep->declBit(c+1,"EX_io_branchIO_is_jump", false,-1);
    tracep->declQuad(c+356,"EX_io_branchIO_dnpc", false,-1, 63,0);
    tracep->declBit(c+19,"EX_io_out_valid", false,-1);
    tracep->declBus(c+22,"EX_io_out_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+38,"EX_io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+26,"EX_io_out_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+27,"EX_io_out_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+35,"EX_io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+37,"EX_io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+356,"EX_io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+28,"EX_io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+39,"EX_io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+379,"EX_io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+363,"EX_io_out_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+365,"EX_io_out_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+33,"EX_io_out_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declBit(c+40,"EX_io_is_break", false,-1);
    tracep->declBit(c+381,"EX_io_is_flush", false,-1);
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
    tracep->declBit(c+111,"DIP_is_skip", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+112+i*2,"rf", true,(i+0), 63,0);
    }
    tracep->declBit(c+413,"rf_bypass_io_Reg1_MPORT_en", false,-1);
    tracep->declBus(c+12,"rf_bypass_io_Reg1_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+176,"rf_bypass_io_Reg1_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+413,"rf_bypass_io_Reg2_MPORT_en", false,-1);
    tracep->declBus(c+13,"rf_bypass_io_Reg2_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+178,"rf_bypass_io_Reg2_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+413,"rf_DIP_io_rf_0_MPORT_en", false,-1);
    tracep->declBus(c+414,"rf_DIP_io_rf_0_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+41,"rf_DIP_io_rf_0_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+413,"rf_DIP_io_rf_1_MPORT_en", false,-1);
    tracep->declBus(c+415,"rf_DIP_io_rf_1_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+43,"rf_DIP_io_rf_1_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+413,"rf_DIP_io_rf_2_MPORT_en", false,-1);
    tracep->declBus(c+416,"rf_DIP_io_rf_2_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+45,"rf_DIP_io_rf_2_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+413,"rf_DIP_io_rf_3_MPORT_en", false,-1);
    tracep->declBus(c+417,"rf_DIP_io_rf_3_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+47,"rf_DIP_io_rf_3_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+413,"rf_DIP_io_rf_4_MPORT_en", false,-1);
    tracep->declBus(c+418,"rf_DIP_io_rf_4_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+49,"rf_DIP_io_rf_4_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+413,"rf_DIP_io_rf_5_MPORT_en", false,-1);
    tracep->declBus(c+419,"rf_DIP_io_rf_5_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+51,"rf_DIP_io_rf_5_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+413,"rf_DIP_io_rf_6_MPORT_en", false,-1);
    tracep->declBus(c+420,"rf_DIP_io_rf_6_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+53,"rf_DIP_io_rf_6_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+413,"rf_DIP_io_rf_7_MPORT_en", false,-1);
    tracep->declBus(c+421,"rf_DIP_io_rf_7_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+55,"rf_DIP_io_rf_7_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+413,"rf_DIP_io_rf_8_MPORT_en", false,-1);
    tracep->declBus(c+422,"rf_DIP_io_rf_8_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+57,"rf_DIP_io_rf_8_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+413,"rf_DIP_io_rf_9_MPORT_en", false,-1);
    tracep->declBus(c+423,"rf_DIP_io_rf_9_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+59,"rf_DIP_io_rf_9_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+413,"rf_DIP_io_rf_10_MPORT_en", false,-1);
    tracep->declBus(c+424,"rf_DIP_io_rf_10_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+61,"rf_DIP_io_rf_10_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+413,"rf_DIP_io_rf_11_MPORT_en", false,-1);
    tracep->declBus(c+425,"rf_DIP_io_rf_11_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+63,"rf_DIP_io_rf_11_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+413,"rf_DIP_io_rf_12_MPORT_en", false,-1);
    tracep->declBus(c+426,"rf_DIP_io_rf_12_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+65,"rf_DIP_io_rf_12_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+413,"rf_DIP_io_rf_13_MPORT_en", false,-1);
    tracep->declBus(c+427,"rf_DIP_io_rf_13_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+67,"rf_DIP_io_rf_13_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+413,"rf_DIP_io_rf_14_MPORT_en", false,-1);
    tracep->declBus(c+428,"rf_DIP_io_rf_14_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+69,"rf_DIP_io_rf_14_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+413,"rf_DIP_io_rf_15_MPORT_en", false,-1);
    tracep->declBus(c+429,"rf_DIP_io_rf_15_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+71,"rf_DIP_io_rf_15_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+413,"rf_DIP_io_rf_16_MPORT_en", false,-1);
    tracep->declBus(c+430,"rf_DIP_io_rf_16_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+73,"rf_DIP_io_rf_16_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+413,"rf_DIP_io_rf_17_MPORT_en", false,-1);
    tracep->declBus(c+431,"rf_DIP_io_rf_17_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+75,"rf_DIP_io_rf_17_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+413,"rf_DIP_io_rf_18_MPORT_en", false,-1);
    tracep->declBus(c+432,"rf_DIP_io_rf_18_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+77,"rf_DIP_io_rf_18_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+413,"rf_DIP_io_rf_19_MPORT_en", false,-1);
    tracep->declBus(c+433,"rf_DIP_io_rf_19_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+79,"rf_DIP_io_rf_19_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+413,"rf_DIP_io_rf_20_MPORT_en", false,-1);
    tracep->declBus(c+434,"rf_DIP_io_rf_20_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+81,"rf_DIP_io_rf_20_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+413,"rf_DIP_io_rf_21_MPORT_en", false,-1);
    tracep->declBus(c+435,"rf_DIP_io_rf_21_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+83,"rf_DIP_io_rf_21_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+413,"rf_DIP_io_rf_22_MPORT_en", false,-1);
    tracep->declBus(c+436,"rf_DIP_io_rf_22_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+85,"rf_DIP_io_rf_22_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+413,"rf_DIP_io_rf_23_MPORT_en", false,-1);
    tracep->declBus(c+437,"rf_DIP_io_rf_23_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+87,"rf_DIP_io_rf_23_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+413,"rf_DIP_io_rf_24_MPORT_en", false,-1);
    tracep->declBus(c+438,"rf_DIP_io_rf_24_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+89,"rf_DIP_io_rf_24_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+413,"rf_DIP_io_rf_25_MPORT_en", false,-1);
    tracep->declBus(c+439,"rf_DIP_io_rf_25_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+91,"rf_DIP_io_rf_25_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+413,"rf_DIP_io_rf_26_MPORT_en", false,-1);
    tracep->declBus(c+440,"rf_DIP_io_rf_26_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+93,"rf_DIP_io_rf_26_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+413,"rf_DIP_io_rf_27_MPORT_en", false,-1);
    tracep->declBus(c+441,"rf_DIP_io_rf_27_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+95,"rf_DIP_io_rf_27_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+413,"rf_DIP_io_rf_28_MPORT_en", false,-1);
    tracep->declBus(c+442,"rf_DIP_io_rf_28_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+97,"rf_DIP_io_rf_28_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+413,"rf_DIP_io_rf_29_MPORT_en", false,-1);
    tracep->declBus(c+443,"rf_DIP_io_rf_29_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+99,"rf_DIP_io_rf_29_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+413,"rf_DIP_io_rf_30_MPORT_en", false,-1);
    tracep->declBus(c+444,"rf_DIP_io_rf_30_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+101,"rf_DIP_io_rf_30_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+413,"rf_DIP_io_rf_31_MPORT_en", false,-1);
    tracep->declBus(c+445,"rf_DIP_io_rf_31_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+103,"rf_DIP_io_rf_31_MPORT_data", false,-1, 63,0);
    tracep->declQuad(c+180,"rf_MPORT_data", false,-1, 63,0);
    tracep->declBus(c+182,"rf_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+413,"rf_MPORT_mask", false,-1);
    tracep->declBit(c+183,"rf_MPORT_en", false,-1);
    tracep->declQuad(c+184,"mem_addr", false,-1, 63,0);
    tracep->declBit(c+409,"mem_reset", false,-1);
    tracep->declBit(c+408,"mem_clk", false,-1);
    tracep->declBit(c+186,"mem_we", false,-1);
    tracep->declBit(c+187,"mem_ce", false,-1);
    tracep->declQuad(c+188,"mem_wdata", false,-1, 63,0);
    tracep->declQuad(c+382,"mem_rdata", false,-1, 63,0);
    tracep->declBus(c+190,"mem_wmask", false,-1, 7,0);
    tracep->declBit(c+191,"MEM_io_in_valid", false,-1);
    tracep->declBus(c+192,"MEM_io_in_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+193,"MEM_io_in_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+194,"MEM_io_in_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+195,"MEM_io_in_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+196,"MEM_io_in_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+198,"MEM_io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+199,"MEM_io_in_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+201,"MEM_io_in_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declQuad(c+202,"MEM_io_in_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+204,"MEM_io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+206,"MEM_io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+208,"MEM_io_in_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declBit(c+191,"MEM_io_out_valid", false,-1);
    tracep->declBit(c+210,"MEM_io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+194,"MEM_io_out_bits_ctrl_signal_rfWen", false,-1);
    tracep->declQuad(c+196,"MEM_io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+198,"MEM_io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+199,"MEM_io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBit(c+211,"MEM_io_out_bits_ctrl_flow_skip", false,-1);
    tracep->declBus(c+201,"MEM_io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+212,"MEM_io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+384,"MEM_io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+184,"MEM_io_mem_addr", false,-1, 63,0);
    tracep->declQuad(c+382,"MEM_io_mem_rdata", false,-1, 63,0);
    tracep->declQuad(c+188,"MEM_io_mem_wdata", false,-1, 63,0);
    tracep->declBus(c+190,"MEM_io_mem_wmask", false,-1, 7,0);
    tracep->declBit(c+187,"MEM_io_mem_ce", false,-1);
    tracep->declBit(c+186,"MEM_io_mem_we", false,-1);
    tracep->declBit(c+213,"WB_io_in_valid", false,-1);
    tracep->declBit(c+214,"WB_io_in_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+215,"WB_io_in_bits_ctrl_signal_rfWen", false,-1);
    tracep->declQuad(c+216,"WB_io_in_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+218,"WB_io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+219,"WB_io_in_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBit(c+221,"WB_io_in_bits_ctrl_flow_skip", false,-1);
    tracep->declBus(c+182,"WB_io_in_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declQuad(c+222,"WB_io_in_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declBit(c+213,"WB_io_out_valid", false,-1);
    tracep->declBit(c+224,"WB_io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declQuad(c+216,"WB_io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+218,"WB_io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+219,"WB_io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBit(c+221,"WB_io_out_bits_ctrl_flow_skip", false,-1);
    tracep->declBus(c+182,"WB_io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+183,"WB_io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+222,"WB_io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+28,"bypass_io_EX_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+39,"bypass_io_EX_rf_rfWen", false,-1);
    tracep->declQuad(c+379,"bypass_io_EX_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+201,"bypass_io_MEM_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+212,"bypass_io_MEM_rf_rfWen", false,-1);
    tracep->declQuad(c+384,"bypass_io_MEM_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+182,"bypass_io_WB_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+183,"bypass_io_WB_rf_rfWen", false,-1);
    tracep->declQuad(c+222,"bypass_io_WB_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+225,"bypass_io_Reg1", false,-1, 63,0);
    tracep->declBus(c+12,"bypass_io_reg_index1", false,-1, 4,0);
    tracep->declQuad(c+227,"bypass_io_Reg2", false,-1, 63,0);
    tracep->declBus(c+13,"bypass_io_reg_index2", false,-1, 4,0);
    tracep->declQuad(c+359,"bypass_io_Bypass_REG1", false,-1, 63,0);
    tracep->declQuad(c+361,"bypass_io_Bypass_REG2", false,-1, 63,0);
    tracep->declBus(c+201,"mem_bypass_io_MEM_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+212,"mem_bypass_io_MEM_rf_rfWen", false,-1);
    tracep->declQuad(c+384,"mem_bypass_io_MEM_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+29,"mem_bypass_io_Reg1", false,-1, 63,0);
    tracep->declBus(c+24,"mem_bypass_io_reg_index1", false,-1, 4,0);
    tracep->declQuad(c+31,"mem_bypass_io_Reg2", false,-1, 63,0);
    tracep->declBus(c+25,"mem_bypass_io_reg_index2", false,-1, 4,0);
    tracep->declQuad(c+375,"mem_bypass_io_Bypass_REG1", false,-1, 63,0);
    tracep->declQuad(c+377,"mem_bypass_io_Bypass_REG2", false,-1, 63,0);
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
    tracep->declBit(c+191,"valid_2", false,-1);
    tracep->declBus(c+192,"MEM_io_in_bits_r_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+193,"MEM_io_in_bits_r_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+194,"MEM_io_in_bits_r_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+195,"MEM_io_in_bits_r_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+196,"MEM_io_in_bits_r_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+198,"MEM_io_in_bits_r_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+199,"MEM_io_in_bits_r_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+201,"MEM_io_in_bits_r_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declQuad(c+202,"MEM_io_in_bits_r_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+204,"MEM_io_in_bits_r_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+206,"MEM_io_in_bits_r_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+208,"MEM_io_in_bits_r_ctrl_data_Imm", false,-1, 63,0);
    tracep->declBit(c+213,"valid_3", false,-1);
    tracep->declBit(c+214,"WB_io_in_bits_r_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+215,"WB_io_in_bits_r_ctrl_signal_rfWen", false,-1);
    tracep->declQuad(c+216,"WB_io_in_bits_r_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+218,"WB_io_in_bits_r_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+219,"WB_io_in_bits_r_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBit(c+221,"WB_io_in_bits_r_ctrl_flow_skip", false,-1);
    tracep->declBus(c+182,"WB_io_in_bits_r_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declQuad(c+222,"WB_io_in_bits_r_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+105,"DIP_io_inst_REG", false,-1, 31,0);
    tracep->declBit(c+111,"DIP_io_is_skip_REG", false,-1);
    tracep->declBit(c+108,"DIP_io_inst_valid_REG", false,-1);
    tracep->declQuad(c+106,"DIP_io_pc_REG", false,-1, 63,0);
    tracep->declQuad(c+109,"DIP_io_dnpc_REG", false,-1, 63,0);
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
    tracep->declBit(c+111,"is_skip", false,-1);
    tracep->declQuad(c+106,"pc", false,-1, 63,0);
    tracep->declQuad(c+109,"dnpc", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+229+i*2,"rf", true,(i+0), 63,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+293+i*1,"IN", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EX ");
    tracep->declBit(c+408,"clock", false,-1);
    tracep->declBit(c+409,"reset", false,-1);
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
    tracep->declQuad(c+375,"io_src1", false,-1, 63,0);
    tracep->declQuad(c+377,"io_src2", false,-1, 63,0);
    tracep->declBit(c+355,"io_branchIO_is_branch", false,-1);
    tracep->declBit(c+1,"io_branchIO_is_jump", false,-1);
    tracep->declQuad(c+356,"io_branchIO_dnpc", false,-1, 63,0);
    tracep->declBit(c+19,"io_out_valid", false,-1);
    tracep->declBus(c+22,"io_out_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+38,"io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+26,"io_out_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+27,"io_out_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+35,"io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+37,"io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+356,"io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+28,"io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+39,"io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+379,"io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+363,"io_out_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+365,"io_out_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+33,"io_out_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declBit(c+40,"io_is_break", false,-1);
    tracep->declBit(c+381,"io_is_flush", false,-1);
    tracep->declQuad(c+300,"CSRDIFF_mepc", false,-1, 63,0);
    tracep->declQuad(c+302,"CSRDIFF_mcause", false,-1, 63,0);
    tracep->declQuad(c+304,"CSRDIFF_mstatus", false,-1, 63,0);
    tracep->declQuad(c+306,"CSRDIFF_mtvec", false,-1, 63,0);
    tracep->declQuad(c+308,"mepc", false,-1, 63,0);
    tracep->declQuad(c+310,"mcause", false,-1, 63,0);
    tracep->declQuad(c+312,"mstatus", false,-1, 63,0);
    tracep->declQuad(c+314,"mtvec", false,-1, 63,0);
    tracep->declQuad(c+316,"mie", false,-1, 63,0);
    tracep->declQuad(c+318,"mip", false,-1, 63,0);
    tracep->declQuad(c+386,"src1", false,-1, 63,0);
    tracep->declQuad(c+388,"src2", false,-1, 63,0);
    tracep->declBit(c+390,"alu_result_sign", false,-1);
    tracep->declBit(c+391,"alu_result_sign_2", false,-1);
    tracep->declBit(c+392,"alu_result_sign_3", false,-1);
    tracep->declBit(c+393,"alu_result_sign_4", false,-1);
    tracep->declBit(c+394,"alu_result_sign_5", false,-1);
    tracep->declBit(c+395,"alu_result_sign_6", false,-1);
    tracep->declBit(c+396,"alu_result_sign_7", false,-1);
    tracep->declQuad(c+367,"alu_result", false,-1, 63,0);
    tracep->declBit(c+397,"shift_result_sign", false,-1);
    tracep->declBit(c+398,"shift_result_sign_1", false,-1);
    tracep->declBit(c+399,"shift_result_sign_2", false,-1);
    tracep->declBit(c+400,"shift_result_sign_3", false,-1);
    tracep->declQuad(c+369,"compar_result", false,-1, 63,0);
    tracep->declQuad(c+320,"jump_result", false,-1, 63,0);
    tracep->declQuad(c+371,"shift_result", false,-1, 63,0);
    tracep->declQuad(c+322,"branch_result", false,-1, 63,0);
    tracep->declBit(c+401,"branch_flag", false,-1);
    tracep->declQuad(c+324,"csr_data", false,-1, 63,0);
    tracep->declQuad(c+326,"CSRDIFF_io_mtvec_REG", false,-1, 63,0);
    tracep->declQuad(c+306,"CSRDIFF_io_mtvec_REG_1", false,-1, 63,0);
    tracep->declQuad(c+328,"CSRDIFF_io_mcause_REG", false,-1, 63,0);
    tracep->declQuad(c+302,"CSRDIFF_io_mcause_REG_1", false,-1, 63,0);
    tracep->declQuad(c+330,"CSRDIFF_io_mepc_REG", false,-1, 63,0);
    tracep->declQuad(c+300,"CSRDIFF_io_mepc_REG_1", false,-1, 63,0);
    tracep->declQuad(c+332,"CSRDIFF_io_mstatus_REG", false,-1, 63,0);
    tracep->declQuad(c+304,"CSRDIFF_io_mstatus_REG_1", false,-1, 63,0);
    tracep->pushNamePrefix("CSRDIFF ");
    tracep->declQuad(c+300,"mepc", false,-1, 63,0);
    tracep->declQuad(c+302,"mcause", false,-1, 63,0);
    tracep->declQuad(c+304,"mstatus", false,-1, 63,0);
    tracep->declQuad(c+306,"mtvec", false,-1, 63,0);
    for (int i = 0; i < 6; ++i) {
        tracep->declQuad(c+334+i*2,"inst_csr", true,(i+0), 63,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ID ");
    tracep->declBit(c+4,"io_in_valid", false,-1);
    tracep->declQuad(c+5,"io_in_bits_PC", false,-1, 63,0);
    tracep->declBus(c+7,"io_in_bits_Inst", false,-1, 31,0);
    tracep->declQuad(c+359,"io_REG1", false,-1, 63,0);
    tracep->declQuad(c+361,"io_REG2", false,-1, 63,0);
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
    tracep->declQuad(c+359,"io_out_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+361,"io_out_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+17,"io_out_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declQuad(c+5,"io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+7,"io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declBus(c+16,"rd", false,-1, 4,0);
    tracep->declBus(c+346,"Inst_decode_0", false,-1, 3,0);
    tracep->declBus(c+15,"Inst_decode_2", false,-1, 6,0);
    tracep->declBit(c+347,"Inst_decode_3", false,-1);
    tracep->declBus(c+348,"srctype1", false,-1, 1,0);
    tracep->declBit(c+349,"srctype2", false,-1);
    tracep->declBit(c+350,"sign", false,-1);
    tracep->declBit(c+351,"sign_1", false,-1);
    tracep->declBit(c+352,"sign_2", false,-1);
    tracep->declBit(c+352,"sign_3", false,-1);
    tracep->declBit(c+350,"sign_4", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IF ");
    tracep->declBit(c+408,"clock", false,-1);
    tracep->declBit(c+409,"reset", false,-1);
    tracep->declBit(c+355,"io_branch_io_is_branch", false,-1);
    tracep->declBit(c+1,"io_branch_io_is_jump", false,-1);
    tracep->declQuad(c+356,"io_branch_io_dnpc", false,-1, 63,0);
    tracep->declBus(c+358,"io_inst", false,-1, 31,0);
    tracep->declQuad(c+2,"io_out_bits_PC", false,-1, 63,0);
    tracep->declBus(c+358,"io_out_bits_Inst", false,-1, 31,0);
    tracep->declQuad(c+2,"temp", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IFM ");
    tracep->declBit(c+409,"reset", false,-1);
    tracep->declBit(c+408,"clk", false,-1);
    tracep->declQuad(c+2,"pc", false,-1, 63,0);
    tracep->declBus(c+358,"inst", false,-1, 31,0);
    tracep->declQuad(c+402,"rdata", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MEM ");
    tracep->declBit(c+191,"io_in_valid", false,-1);
    tracep->declBus(c+192,"io_in_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+193,"io_in_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+194,"io_in_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+195,"io_in_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+196,"io_in_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+198,"io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+199,"io_in_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+201,"io_in_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declQuad(c+202,"io_in_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+204,"io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+206,"io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+208,"io_in_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declBit(c+191,"io_out_valid", false,-1);
    tracep->declBit(c+210,"io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+194,"io_out_bits_ctrl_signal_rfWen", false,-1);
    tracep->declQuad(c+196,"io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+198,"io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+199,"io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBit(c+211,"io_out_bits_ctrl_flow_skip", false,-1);
    tracep->declBus(c+201,"io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+212,"io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+384,"io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+184,"io_mem_addr", false,-1, 63,0);
    tracep->declQuad(c+382,"io_mem_rdata", false,-1, 63,0);
    tracep->declQuad(c+188,"io_mem_wdata", false,-1, 63,0);
    tracep->declBus(c+190,"io_mem_wmask", false,-1, 7,0);
    tracep->declBit(c+187,"io_mem_ce", false,-1);
    tracep->declBit(c+186,"io_mem_we", false,-1);
    tracep->declQuad(c+353,"addr_temp", false,-1, 63,0);
    tracep->declBit(c+404,"mem_result_sign", false,-1);
    tracep->declBit(c+405,"mem_result_sign_1", false,-1);
    tracep->declBit(c+406,"mem_result_sign_2", false,-1);
    tracep->declBit(c+407,"mem_result_sign_3", false,-1);
    tracep->declQuad(c+373,"mem_result", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WB ");
    tracep->declBit(c+213,"io_in_valid", false,-1);
    tracep->declBit(c+214,"io_in_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+215,"io_in_bits_ctrl_signal_rfWen", false,-1);
    tracep->declQuad(c+216,"io_in_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+218,"io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+219,"io_in_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBit(c+221,"io_in_bits_ctrl_flow_skip", false,-1);
    tracep->declBus(c+182,"io_in_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declQuad(c+222,"io_in_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declBit(c+213,"io_out_valid", false,-1);
    tracep->declBit(c+224,"io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declQuad(c+216,"io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+218,"io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+219,"io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBit(c+221,"io_out_bits_ctrl_flow_skip", false,-1);
    tracep->declBus(c+182,"io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+183,"io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+222,"io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("bypass ");
    tracep->declBus(c+28,"io_EX_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+39,"io_EX_rf_rfWen", false,-1);
    tracep->declQuad(c+379,"io_EX_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+201,"io_MEM_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+212,"io_MEM_rf_rfWen", false,-1);
    tracep->declQuad(c+384,"io_MEM_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+182,"io_WB_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+183,"io_WB_rf_rfWen", false,-1);
    tracep->declQuad(c+222,"io_WB_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+225,"io_Reg1", false,-1, 63,0);
    tracep->declBus(c+12,"io_reg_index1", false,-1, 4,0);
    tracep->declQuad(c+227,"io_Reg2", false,-1, 63,0);
    tracep->declBus(c+13,"io_reg_index2", false,-1, 4,0);
    tracep->declQuad(c+359,"io_Bypass_REG1", false,-1, 63,0);
    tracep->declQuad(c+361,"io_Bypass_REG2", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem ");
    tracep->declBit(c+409,"reset", false,-1);
    tracep->declBit(c+408,"clk", false,-1);
    tracep->declQuad(c+184,"addr", false,-1, 63,0);
    tracep->declBit(c+186,"we", false,-1);
    tracep->declBit(c+187,"ce", false,-1);
    tracep->declQuad(c+188,"wdata", false,-1, 63,0);
    tracep->declQuad(c+382,"rdata", false,-1, 63,0);
    tracep->declBus(c+190,"wmask", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_bypass ");
    tracep->declBus(c+201,"io_MEM_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+212,"io_MEM_rf_rfWen", false,-1);
    tracep->declQuad(c+384,"io_MEM_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+29,"io_Reg1", false,-1, 63,0);
    tracep->declBus(c+24,"io_reg_index1", false,-1, 4,0);
    tracep->declQuad(c+31,"io_Reg2", false,-1, 63,0);
    tracep->declBus(c+25,"io_reg_index2", false,-1, 4,0);
    tracep->declQuad(c+375,"io_Bypass_REG1", false,-1, 63,0);
    tracep->declQuad(c+377,"io_Bypass_REG2", false,-1, 63,0);
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
    bufp->fullBit(oldp+11,((1U & (~ ((0U == ((0x13U 
                                              == (0x707fU 
                                                  & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                              ? 0x40U
                                              : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_316))) 
                                     | (~ (IData)(vlSelf->CoreTop__DOT__valid)))))));
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
    bufp->fullBit(oldp+111,(vlSelf->CoreTop__DOT__DIP_io_is_skip_REG));
    bufp->fullQData(oldp+112,(vlSelf->CoreTop__DOT__rf[0]),64);
    bufp->fullQData(oldp+114,(vlSelf->CoreTop__DOT__rf[1]),64);
    bufp->fullQData(oldp+116,(vlSelf->CoreTop__DOT__rf[2]),64);
    bufp->fullQData(oldp+118,(vlSelf->CoreTop__DOT__rf[3]),64);
    bufp->fullQData(oldp+120,(vlSelf->CoreTop__DOT__rf[4]),64);
    bufp->fullQData(oldp+122,(vlSelf->CoreTop__DOT__rf[5]),64);
    bufp->fullQData(oldp+124,(vlSelf->CoreTop__DOT__rf[6]),64);
    bufp->fullQData(oldp+126,(vlSelf->CoreTop__DOT__rf[7]),64);
    bufp->fullQData(oldp+128,(vlSelf->CoreTop__DOT__rf[8]),64);
    bufp->fullQData(oldp+130,(vlSelf->CoreTop__DOT__rf[9]),64);
    bufp->fullQData(oldp+132,(vlSelf->CoreTop__DOT__rf[10]),64);
    bufp->fullQData(oldp+134,(vlSelf->CoreTop__DOT__rf[11]),64);
    bufp->fullQData(oldp+136,(vlSelf->CoreTop__DOT__rf[12]),64);
    bufp->fullQData(oldp+138,(vlSelf->CoreTop__DOT__rf[13]),64);
    bufp->fullQData(oldp+140,(vlSelf->CoreTop__DOT__rf[14]),64);
    bufp->fullQData(oldp+142,(vlSelf->CoreTop__DOT__rf[15]),64);
    bufp->fullQData(oldp+144,(vlSelf->CoreTop__DOT__rf[16]),64);
    bufp->fullQData(oldp+146,(vlSelf->CoreTop__DOT__rf[17]),64);
    bufp->fullQData(oldp+148,(vlSelf->CoreTop__DOT__rf[18]),64);
    bufp->fullQData(oldp+150,(vlSelf->CoreTop__DOT__rf[19]),64);
    bufp->fullQData(oldp+152,(vlSelf->CoreTop__DOT__rf[20]),64);
    bufp->fullQData(oldp+154,(vlSelf->CoreTop__DOT__rf[21]),64);
    bufp->fullQData(oldp+156,(vlSelf->CoreTop__DOT__rf[22]),64);
    bufp->fullQData(oldp+158,(vlSelf->CoreTop__DOT__rf[23]),64);
    bufp->fullQData(oldp+160,(vlSelf->CoreTop__DOT__rf[24]),64);
    bufp->fullQData(oldp+162,(vlSelf->CoreTop__DOT__rf[25]),64);
    bufp->fullQData(oldp+164,(vlSelf->CoreTop__DOT__rf[26]),64);
    bufp->fullQData(oldp+166,(vlSelf->CoreTop__DOT__rf[27]),64);
    bufp->fullQData(oldp+168,(vlSelf->CoreTop__DOT__rf[28]),64);
    bufp->fullQData(oldp+170,(vlSelf->CoreTop__DOT__rf[29]),64);
    bufp->fullQData(oldp+172,(vlSelf->CoreTop__DOT__rf[30]),64);
    bufp->fullQData(oldp+174,(vlSelf->CoreTop__DOT__rf[31]),64);
    bufp->fullQData(oldp+176,(vlSelf->CoreTop__DOT__rf
                              [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                         >> 0xfU))]),64);
    bufp->fullQData(oldp+178,(vlSelf->CoreTop__DOT__rf
                              [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                         >> 0x14U))]),64);
    bufp->fullQData(oldp+180,(((0U == (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest))
                                ? 0ULL : vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfData)),64);
    bufp->fullCData(oldp+182,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest),5);
    bufp->fullBit(oldp+183,(vlSelf->CoreTop__DOT__WB_io_out_bits_ctrl_rf_rfWen));
    bufp->fullQData(oldp+184,(((0x45U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                ? vlSelf->CoreTop__DOT__MEM__DOT___addr_temp_T_1
                                : vlSelf->CoreTop__DOT__MEM__DOT___GEN_16)),64);
    bufp->fullBit(oldp+186,(((0x45U != (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype)) 
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
    bufp->fullBit(oldp+187,(((4U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_fuType)) 
                             & (IData)(vlSelf->CoreTop__DOT__valid_2))));
    bufp->fullQData(oldp+188,(((0x46U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
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
    bufp->fullCData(oldp+190,(((0x46U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                ? 0xffU : (IData)(vlSelf->CoreTop__DOT__MEM__DOT___GEN_32))),8);
    bufp->fullBit(oldp+191,(vlSelf->CoreTop__DOT__valid_2));
    bufp->fullCData(oldp+192,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_fuType),3);
    bufp->fullBit(oldp+193,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_inst_valid));
    bufp->fullBit(oldp+194,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_rfWen));
    bufp->fullCData(oldp+195,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype),7);
    bufp->fullQData(oldp+196,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_PC),64);
    bufp->fullIData(oldp+198,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_inst),32);
    bufp->fullQData(oldp+199,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_Dnpc),64);
    bufp->fullCData(oldp+201,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest),5);
    bufp->fullQData(oldp+202,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfData),64);
    bufp->fullQData(oldp+204,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src1),64);
    bufp->fullQData(oldp+206,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2),64);
    bufp->fullQData(oldp+208,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_Imm),64);
    bufp->fullBit(oldp+210,(((IData)(vlSelf->CoreTop__DOT__valid_2) 
                             & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_inst_valid))));
    bufp->fullBit(oldp+211,((((0xa0000048ULL == vlSelf->CoreTop__DOT__MEM__DOT__addr_temp) 
                              | (0xa00003f8ULL == vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)) 
                             | ((0xa0000000ULL <= vlSelf->CoreTop__DOT__MEM__DOT__addr_temp) 
                                & (0xa1200000ULL >= vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))));
    bufp->fullBit(oldp+212,(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfWen));
    bufp->fullBit(oldp+213,(vlSelf->CoreTop__DOT__valid_3));
    bufp->fullBit(oldp+214,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_inst_valid));
    bufp->fullBit(oldp+215,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_rfWen));
    bufp->fullQData(oldp+216,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_PC),64);
    bufp->fullIData(oldp+218,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_inst),32);
    bufp->fullQData(oldp+219,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_Dnpc),64);
    bufp->fullBit(oldp+221,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_skip));
    bufp->fullQData(oldp+222,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfData),64);
    bufp->fullBit(oldp+224,(((IData)(vlSelf->CoreTop__DOT__valid_3) 
                             & (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_inst_valid))));
    bufp->fullQData(oldp+225,(((0U == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                >> 0xfU)))
                                ? 0ULL : vlSelf->CoreTop__DOT__rf
                               [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                          >> 0xfU))])),64);
    bufp->fullQData(oldp+227,(((0U == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                >> 0x14U)))
                                ? 0ULL : vlSelf->CoreTop__DOT__rf
                               [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                          >> 0x14U))])),64);
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
    bufp->fullQData(oldp+308,(vlSelf->CoreTop__DOT__EX__DOT__mepc),64);
    bufp->fullQData(oldp+310,(vlSelf->CoreTop__DOT__EX__DOT__mcause),64);
    bufp->fullQData(oldp+312,(vlSelf->CoreTop__DOT__EX__DOT__mstatus),64);
    bufp->fullQData(oldp+314,(vlSelf->CoreTop__DOT__EX__DOT__mtvec),64);
    bufp->fullQData(oldp+316,(vlSelf->CoreTop__DOT__EX__DOT__mie),64);
    bufp->fullQData(oldp+318,(vlSelf->CoreTop__DOT__EX__DOT__mip),64);
    bufp->fullQData(oldp+320,(((3U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType))
                                ? (4ULL + vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC)
                                : 0ULL)),64);
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
    bufp->fullQData(oldp+324,(vlSelf->CoreTop__DOT__EX__DOT__csr_data),64);
    bufp->fullQData(oldp+326,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mtvec_REG),64);
    bufp->fullQData(oldp+328,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mcause_REG),64);
    bufp->fullQData(oldp+330,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mepc_REG),64);
    bufp->fullQData(oldp+332,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mstatus_REG),64);
    bufp->fullQData(oldp+334,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[0]),64);
    bufp->fullQData(oldp+336,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[1]),64);
    bufp->fullQData(oldp+338,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[2]),64);
    bufp->fullQData(oldp+340,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[3]),64);
    bufp->fullQData(oldp+342,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[4]),64);
    bufp->fullQData(oldp+344,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[5]),64);
    bufp->fullCData(oldp+346,(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0),4);
    bufp->fullBit(oldp+347,(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_3));
    bufp->fullCData(oldp+348,((((7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                 ? 2U : 0U) | ((3U 
                                                == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                                ? 2U
                                                : 0U))),2);
    bufp->fullBit(oldp+349,((((8U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)) 
                              | (7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))) 
                             | (3U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)))));
    bufp->fullBit(oldp+350,((vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                             >> 0x1fU)));
    bufp->fullBit(oldp+351,((1U & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                   >> 0x13U))));
    bufp->fullBit(oldp+352,((vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                             >> 0x1fU)));
    bufp->fullQData(oldp+353,(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp),64);
    bufp->fullBit(oldp+355,(((IData)(vlSelf->CoreTop__DOT__EX__DOT__branch_flag) 
                             & (IData)(vlSelf->CoreTop__DOT__valid_1))));
    bufp->fullQData(oldp+356,(((0x19U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1
                                : vlSelf->CoreTop__DOT__EX__DOT___GEN_289)),64);
    bufp->fullIData(oldp+358,(((1U & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                              >> 2U)))
                                ? (IData)((vlSelf->CoreTop__DOT__IFM__DOT__rdata 
                                           >> 0x20U))
                                : (IData)(vlSelf->CoreTop__DOT__IFM__DOT__rdata))),32);
    bufp->fullQData(oldp+359,(((((IData)(vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfWen) 
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
    bufp->fullQData(oldp+361,(((((IData)(vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfWen) 
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
    bufp->fullQData(oldp+363,(((0U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src1Type))
                                ? vlSelf->CoreTop__DOT__mem_bypass_io_Bypass_REG1
                                : vlSelf->CoreTop__DOT__EX__DOT___GEN_1)),64);
    bufp->fullQData(oldp+365,(((0U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src2Type))
                                ? vlSelf->CoreTop__DOT__mem_bypass_io_Bypass_REG2
                                : vlSelf->CoreTop__DOT__EX__DOT___GEN_3)),64);
    bufp->fullQData(oldp+367,(((0x40U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1
                                : ((0x1aU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                    ? vlSelf->CoreTop__DOT__EX__DOT__src2
                                    : ((0x68U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                        ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_7
                                        : ((0x44U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                            ? (vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_58 
                                               | vlSelf->CoreTop__DOT__EX__DOT__src2)
                                            : ((0x69U 
                                                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_10
                                                : (
                                                   (0x71U 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? 
                                                   (vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_58 
                                                    & vlSelf->CoreTop__DOT__EX__DOT__src2)
                                                    : 
                                                   ((0x72U 
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
                                                       : 
                                                      ((0x79U 
                                                        == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                        ? 
                                                       (((QData)((IData)(
                                                                         ((1U 
                                                                           & (IData)(
                                                                                (vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_28 
                                                                                >> 0x1fU)))
                                                                           ? 0xffffffffU
                                                                           : 0U))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_28)))
                                                        : vlSelf->CoreTop__DOT__EX__DOT___GEN_117))))))))))),64);
    bufp->fullQData(oldp+369,(((0x6aU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                ? ((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_58 
                                    < vlSelf->CoreTop__DOT__EX__DOT__src2)
                                    ? 1ULL : 0ULL) : 
                               ((2U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                 ? (VL_LTS_IQQ(64, vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_58, vlSelf->CoreTop__DOT__EX__DOT__src2)
                                     ? 1ULL : 0ULL)
                                 : 0ULL))),64);
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
    bufp->fullQData(oldp+371,((((QData)((IData)(((0x6eU 
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
    bufp->fullQData(oldp+373,(((0x45U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
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
    bufp->fullQData(oldp+375,(vlSelf->CoreTop__DOT__mem_bypass_io_Bypass_REG1),64);
    bufp->fullQData(oldp+377,(vlSelf->CoreTop__DOT__mem_bypass_io_Bypass_REG2),64);
    bufp->fullQData(oldp+379,(vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfData),64);
    bufp->fullBit(oldp+381,(vlSelf->CoreTop__DOT__EX_io_is_flush));
    bufp->fullQData(oldp+382,(vlSelf->CoreTop__DOT__mem_rdata),64);
    bufp->fullQData(oldp+384,(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfData),64);
    bufp->fullQData(oldp+386,(vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_58),64);
    bufp->fullQData(oldp+388,(vlSelf->CoreTop__DOT__EX__DOT__src2),64);
    bufp->fullBit(oldp+390,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+391,((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_19[0U] 
                             >> 0x1fU)));
    bufp->fullBit(oldp+392,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_28 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+393,((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_38 
                             >> 0x1fU)));
    bufp->fullBit(oldp+394,((vlSelf->CoreTop__DOT__EX__DOT___GEN_175 
                             >> 0x1fU)));
    bufp->fullBit(oldp+395,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_10 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+396,((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_64 
                             >> 0x1fU)));
    bufp->fullBit(oldp+397,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_5[0U] 
                             >> 0x1fU)));
    bufp->fullBit(oldp+398,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_16[0U] 
                             >> 0x1fU)));
    bufp->fullBit(oldp+399,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_25 
                             >> 0x1fU)));
    bufp->fullBit(oldp+400,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_31 
                             >> 0x1fU)));
    bufp->fullBit(oldp+401,(vlSelf->CoreTop__DOT__EX__DOT__branch_flag));
    bufp->fullQData(oldp+402,(vlSelf->CoreTop__DOT__IFM__DOT__rdata),64);
    bufp->fullBit(oldp+404,((1U & (IData)((vlSelf->CoreTop__DOT__mem_rdata 
                                           >> 0x3fU)))));
    bufp->fullBit(oldp+405,((1U & (IData)((vlSelf->CoreTop__DOT__mem_rdata 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+406,((1U & ((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_27) 
                                   >> 7U))));
    bufp->fullBit(oldp+407,((1U & ((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_44) 
                                   >> 0xfU))));
    bufp->fullBit(oldp+408,(vlSelf->clock));
    bufp->fullBit(oldp+409,(vlSelf->reset));
    bufp->fullQData(oldp+410,(vlSelf->io_pc),64);
    bufp->fullIData(oldp+412,(vlSelf->io_inst),32);
    bufp->fullBit(oldp+413,(1U));
    bufp->fullCData(oldp+414,(0U),5);
    bufp->fullCData(oldp+415,(1U),5);
    bufp->fullCData(oldp+416,(2U),5);
    bufp->fullCData(oldp+417,(3U),5);
    bufp->fullCData(oldp+418,(4U),5);
    bufp->fullCData(oldp+419,(5U),5);
    bufp->fullCData(oldp+420,(6U),5);
    bufp->fullCData(oldp+421,(7U),5);
    bufp->fullCData(oldp+422,(8U),5);
    bufp->fullCData(oldp+423,(9U),5);
    bufp->fullCData(oldp+424,(0xaU),5);
    bufp->fullCData(oldp+425,(0xbU),5);
    bufp->fullCData(oldp+426,(0xcU),5);
    bufp->fullCData(oldp+427,(0xdU),5);
    bufp->fullCData(oldp+428,(0xeU),5);
    bufp->fullCData(oldp+429,(0xfU),5);
    bufp->fullCData(oldp+430,(0x10U),5);
    bufp->fullCData(oldp+431,(0x11U),5);
    bufp->fullCData(oldp+432,(0x12U),5);
    bufp->fullCData(oldp+433,(0x13U),5);
    bufp->fullCData(oldp+434,(0x14U),5);
    bufp->fullCData(oldp+435,(0x15U),5);
    bufp->fullCData(oldp+436,(0x16U),5);
    bufp->fullCData(oldp+437,(0x17U),5);
    bufp->fullCData(oldp+438,(0x18U),5);
    bufp->fullCData(oldp+439,(0x19U),5);
    bufp->fullCData(oldp+440,(0x1aU),5);
    bufp->fullCData(oldp+441,(0x1bU),5);
    bufp->fullCData(oldp+442,(0x1cU),5);
    bufp->fullCData(oldp+443,(0x1dU),5);
    bufp->fullCData(oldp+444,(0x1eU),5);
    bufp->fullCData(oldp+445,(0x1fU),5);
}
