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
    tracep->declBit(c+3583,"clock", false,-1);
    tracep->declBit(c+3584,"reset", false,-1);
    tracep->declQuad(c+3585,"io_pc", false,-1, 63,0);
    tracep->declBus(c+3587,"io_inst", false,-1, 31,0);
    tracep->pushNamePrefix("CoreTop ");
    tracep->declBit(c+3583,"clock", false,-1);
    tracep->declBit(c+3584,"reset", false,-1);
    tracep->declQuad(c+3585,"io_pc", false,-1, 63,0);
    tracep->declBus(c+3587,"io_inst", false,-1, 31,0);
    tracep->declBit(c+3583,"IF_clock", false,-1);
    tracep->declBit(c+3584,"IF_reset", false,-1);
    tracep->declBit(c+17,"IF_io_branch_io_is_branch", false,-1);
    tracep->declBit(c+18,"IF_io_branch_io_is_jump", false,-1);
    tracep->declQuad(c+19,"IF_io_branch_io_dnpc", false,-1, 63,0);
    tracep->declBit(c+21,"IF_io_cache_req_addr_req_valid", false,-1);
    tracep->declQuad(c+3585,"IF_io_cache_req_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+22,"IF_io_cache_req_rdata_rep_ready", false,-1);
    tracep->declBit(c+23,"IF_io_cache_req_rdata_rep_valid", false,-1);
    tracep->declQuad(c+24,"IF_io_cache_req_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+22,"IF_io_out_ready", false,-1);
    tracep->declBit(c+23,"IF_io_out_valid", false,-1);
    tracep->declQuad(c+3585,"IF_io_out_bits_PC", false,-1, 63,0);
    tracep->declBus(c+26,"IF_io_out_bits_Inst", false,-1, 31,0);
    tracep->declBit(c+27,"IF_io_flush", false,-1);
    tracep->declBit(c+28,"ID_io_in_valid", false,-1);
    tracep->declQuad(c+29,"ID_io_in_bits_PC", false,-1, 63,0);
    tracep->declBus(c+31,"ID_io_in_bits_Inst", false,-1, 31,0);
    tracep->declQuad(c+1,"ID_io_REG1", false,-1, 63,0);
    tracep->declQuad(c+3,"ID_io_REG2", false,-1, 63,0);
    tracep->declBit(c+27,"ID_io_flush", false,-1);
    tracep->declBit(c+32,"ID_io_ex_is_mem", false,-1);
    tracep->declBus(c+33,"ID_io_ex_reg_rfDest", false,-1, 4,0);
    tracep->declBit(c+34,"ID_io_ex_reg_rfWen", false,-1);
    tracep->declBit(c+35,"ID_io_out_ready", false,-1);
    tracep->declBit(c+36,"ID_io_out_valid", false,-1);
    tracep->declBus(c+37,"ID_io_out_bits_ctrl_signal_src1Type", false,-1, 2,0);
    tracep->declBus(c+38,"ID_io_out_bits_ctrl_signal_src2Type", false,-1, 2,0);
    tracep->declBus(c+39,"ID_io_out_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+40,"ID_io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBus(c+41,"ID_io_out_bits_ctrl_signal_rfSrc1", false,-1, 4,0);
    tracep->declBus(c+42,"ID_io_out_bits_ctrl_signal_rfSrc2", false,-1, 4,0);
    tracep->declBit(c+43,"ID_io_out_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+44,"ID_io_out_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declBus(c+45,"ID_io_out_bits_ctrl_signal_rfDest", false,-1, 4,0);
    tracep->declQuad(c+1,"ID_io_out_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+3,"ID_io_out_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+46,"ID_io_out_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declQuad(c+29,"ID_io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+31,"ID_io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declBit(c+3583,"EX_clock", false,-1);
    tracep->declBit(c+3584,"EX_reset", false,-1);
    tracep->declBit(c+35,"EX_io_in_ready", false,-1);
    tracep->declBit(c+48,"EX_io_in_valid", false,-1);
    tracep->declBus(c+49,"EX_io_in_bits_ctrl_signal_src1Type", false,-1, 2,0);
    tracep->declBus(c+50,"EX_io_in_bits_ctrl_signal_src2Type", false,-1, 2,0);
    tracep->declBus(c+51,"EX_io_in_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+52,"EX_io_in_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+53,"EX_io_in_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+54,"EX_io_in_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declBus(c+33,"EX_io_in_bits_ctrl_signal_rfDest", false,-1, 4,0);
    tracep->declQuad(c+55,"EX_io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+57,"EX_io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+59,"EX_io_in_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declQuad(c+61,"EX_io_in_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+63,"EX_io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declBit(c+32,"EX_io_is_mem", false,-1);
    tracep->declBit(c+17,"EX_io_branchIO_is_branch", false,-1);
    tracep->declBit(c+18,"EX_io_branchIO_is_jump", false,-1);
    tracep->declQuad(c+19,"EX_io_branchIO_dnpc", false,-1, 63,0);
    tracep->declBit(c+64,"EX_io_out_ready", false,-1);
    tracep->declBit(c+65,"EX_io_out_valid", false,-1);
    tracep->declBus(c+51,"EX_io_out_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+52,"EX_io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+53,"EX_io_out_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+54,"EX_io_out_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+61,"EX_io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+63,"EX_io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+19,"EX_io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+33,"EX_io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+34,"EX_io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+66,"EX_io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+68,"EX_io_out_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+70,"EX_io_out_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+59,"EX_io_out_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declBit(c+72,"EX_io_is_break", false,-1);
    tracep->declBit(c+27,"EX_io_is_flush", false,-1);
    tracep->declBit(c+73,"EX_io_icache_busy", false,-1);
    tracep->declBit(c+74,"DIP_is_break", false,-1);
    tracep->declQuad(c+75,"DIP_rf_0", false,-1, 63,0);
    tracep->declQuad(c+77,"DIP_rf_1", false,-1, 63,0);
    tracep->declQuad(c+79,"DIP_rf_2", false,-1, 63,0);
    tracep->declQuad(c+81,"DIP_rf_3", false,-1, 63,0);
    tracep->declQuad(c+83,"DIP_rf_4", false,-1, 63,0);
    tracep->declQuad(c+85,"DIP_rf_5", false,-1, 63,0);
    tracep->declQuad(c+87,"DIP_rf_6", false,-1, 63,0);
    tracep->declQuad(c+89,"DIP_rf_7", false,-1, 63,0);
    tracep->declQuad(c+91,"DIP_rf_8", false,-1, 63,0);
    tracep->declQuad(c+93,"DIP_rf_9", false,-1, 63,0);
    tracep->declQuad(c+95,"DIP_rf_10", false,-1, 63,0);
    tracep->declQuad(c+97,"DIP_rf_11", false,-1, 63,0);
    tracep->declQuad(c+99,"DIP_rf_12", false,-1, 63,0);
    tracep->declQuad(c+101,"DIP_rf_13", false,-1, 63,0);
    tracep->declQuad(c+103,"DIP_rf_14", false,-1, 63,0);
    tracep->declQuad(c+105,"DIP_rf_15", false,-1, 63,0);
    tracep->declQuad(c+107,"DIP_rf_16", false,-1, 63,0);
    tracep->declQuad(c+109,"DIP_rf_17", false,-1, 63,0);
    tracep->declQuad(c+111,"DIP_rf_18", false,-1, 63,0);
    tracep->declQuad(c+113,"DIP_rf_19", false,-1, 63,0);
    tracep->declQuad(c+115,"DIP_rf_20", false,-1, 63,0);
    tracep->declQuad(c+117,"DIP_rf_21", false,-1, 63,0);
    tracep->declQuad(c+119,"DIP_rf_22", false,-1, 63,0);
    tracep->declQuad(c+121,"DIP_rf_23", false,-1, 63,0);
    tracep->declQuad(c+123,"DIP_rf_24", false,-1, 63,0);
    tracep->declQuad(c+125,"DIP_rf_25", false,-1, 63,0);
    tracep->declQuad(c+127,"DIP_rf_26", false,-1, 63,0);
    tracep->declQuad(c+129,"DIP_rf_27", false,-1, 63,0);
    tracep->declQuad(c+131,"DIP_rf_28", false,-1, 63,0);
    tracep->declQuad(c+133,"DIP_rf_29", false,-1, 63,0);
    tracep->declQuad(c+135,"DIP_rf_30", false,-1, 63,0);
    tracep->declQuad(c+137,"DIP_rf_31", false,-1, 63,0);
    tracep->declBus(c+139,"DIP_inst", false,-1, 31,0);
    tracep->declQuad(c+140,"DIP_pc", false,-1, 63,0);
    tracep->declBit(c+142,"DIP_inst_valid", false,-1);
    tracep->declQuad(c+143,"DIP_dnpc", false,-1, 63,0);
    tracep->declBit(c+145,"DIP_is_skip", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+146+i*2,"rf", true,(i+0), 63,0);
    }
    tracep->declBit(c+3588,"rf_bypass_io_Reg1_MPORT_en", false,-1);
    tracep->declBus(c+41,"rf_bypass_io_Reg1_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+210,"rf_bypass_io_Reg1_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3588,"rf_bypass_io_Reg2_MPORT_en", false,-1);
    tracep->declBus(c+42,"rf_bypass_io_Reg2_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+212,"rf_bypass_io_Reg2_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3588,"rf_DIP_io_rf_0_MPORT_en", false,-1);
    tracep->declBus(c+3589,"rf_DIP_io_rf_0_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+75,"rf_DIP_io_rf_0_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3588,"rf_DIP_io_rf_1_MPORT_en", false,-1);
    tracep->declBus(c+3590,"rf_DIP_io_rf_1_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+77,"rf_DIP_io_rf_1_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3588,"rf_DIP_io_rf_2_MPORT_en", false,-1);
    tracep->declBus(c+3591,"rf_DIP_io_rf_2_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+79,"rf_DIP_io_rf_2_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3588,"rf_DIP_io_rf_3_MPORT_en", false,-1);
    tracep->declBus(c+3592,"rf_DIP_io_rf_3_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+81,"rf_DIP_io_rf_3_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3588,"rf_DIP_io_rf_4_MPORT_en", false,-1);
    tracep->declBus(c+3593,"rf_DIP_io_rf_4_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+83,"rf_DIP_io_rf_4_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3588,"rf_DIP_io_rf_5_MPORT_en", false,-1);
    tracep->declBus(c+3594,"rf_DIP_io_rf_5_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+85,"rf_DIP_io_rf_5_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3588,"rf_DIP_io_rf_6_MPORT_en", false,-1);
    tracep->declBus(c+3595,"rf_DIP_io_rf_6_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+87,"rf_DIP_io_rf_6_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3588,"rf_DIP_io_rf_7_MPORT_en", false,-1);
    tracep->declBus(c+3596,"rf_DIP_io_rf_7_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+89,"rf_DIP_io_rf_7_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3588,"rf_DIP_io_rf_8_MPORT_en", false,-1);
    tracep->declBus(c+3597,"rf_DIP_io_rf_8_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+91,"rf_DIP_io_rf_8_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3588,"rf_DIP_io_rf_9_MPORT_en", false,-1);
    tracep->declBus(c+3598,"rf_DIP_io_rf_9_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+93,"rf_DIP_io_rf_9_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3588,"rf_DIP_io_rf_10_MPORT_en", false,-1);
    tracep->declBus(c+3599,"rf_DIP_io_rf_10_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+95,"rf_DIP_io_rf_10_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3588,"rf_DIP_io_rf_11_MPORT_en", false,-1);
    tracep->declBus(c+3600,"rf_DIP_io_rf_11_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+97,"rf_DIP_io_rf_11_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3588,"rf_DIP_io_rf_12_MPORT_en", false,-1);
    tracep->declBus(c+3601,"rf_DIP_io_rf_12_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+99,"rf_DIP_io_rf_12_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3588,"rf_DIP_io_rf_13_MPORT_en", false,-1);
    tracep->declBus(c+3602,"rf_DIP_io_rf_13_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+101,"rf_DIP_io_rf_13_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3588,"rf_DIP_io_rf_14_MPORT_en", false,-1);
    tracep->declBus(c+3603,"rf_DIP_io_rf_14_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+103,"rf_DIP_io_rf_14_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3588,"rf_DIP_io_rf_15_MPORT_en", false,-1);
    tracep->declBus(c+3604,"rf_DIP_io_rf_15_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+105,"rf_DIP_io_rf_15_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3588,"rf_DIP_io_rf_16_MPORT_en", false,-1);
    tracep->declBus(c+3605,"rf_DIP_io_rf_16_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+107,"rf_DIP_io_rf_16_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3588,"rf_DIP_io_rf_17_MPORT_en", false,-1);
    tracep->declBus(c+3606,"rf_DIP_io_rf_17_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+109,"rf_DIP_io_rf_17_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3588,"rf_DIP_io_rf_18_MPORT_en", false,-1);
    tracep->declBus(c+3607,"rf_DIP_io_rf_18_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+111,"rf_DIP_io_rf_18_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3588,"rf_DIP_io_rf_19_MPORT_en", false,-1);
    tracep->declBus(c+3608,"rf_DIP_io_rf_19_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+113,"rf_DIP_io_rf_19_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3588,"rf_DIP_io_rf_20_MPORT_en", false,-1);
    tracep->declBus(c+3609,"rf_DIP_io_rf_20_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+115,"rf_DIP_io_rf_20_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3588,"rf_DIP_io_rf_21_MPORT_en", false,-1);
    tracep->declBus(c+3610,"rf_DIP_io_rf_21_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+117,"rf_DIP_io_rf_21_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3588,"rf_DIP_io_rf_22_MPORT_en", false,-1);
    tracep->declBus(c+3611,"rf_DIP_io_rf_22_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+119,"rf_DIP_io_rf_22_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3588,"rf_DIP_io_rf_23_MPORT_en", false,-1);
    tracep->declBus(c+3612,"rf_DIP_io_rf_23_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+121,"rf_DIP_io_rf_23_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3588,"rf_DIP_io_rf_24_MPORT_en", false,-1);
    tracep->declBus(c+3613,"rf_DIP_io_rf_24_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+123,"rf_DIP_io_rf_24_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3588,"rf_DIP_io_rf_25_MPORT_en", false,-1);
    tracep->declBus(c+3614,"rf_DIP_io_rf_25_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+125,"rf_DIP_io_rf_25_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3588,"rf_DIP_io_rf_26_MPORT_en", false,-1);
    tracep->declBus(c+3615,"rf_DIP_io_rf_26_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+127,"rf_DIP_io_rf_26_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3588,"rf_DIP_io_rf_27_MPORT_en", false,-1);
    tracep->declBus(c+3616,"rf_DIP_io_rf_27_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+129,"rf_DIP_io_rf_27_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3588,"rf_DIP_io_rf_28_MPORT_en", false,-1);
    tracep->declBus(c+3617,"rf_DIP_io_rf_28_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+131,"rf_DIP_io_rf_28_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3588,"rf_DIP_io_rf_29_MPORT_en", false,-1);
    tracep->declBus(c+3618,"rf_DIP_io_rf_29_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+133,"rf_DIP_io_rf_29_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3588,"rf_DIP_io_rf_30_MPORT_en", false,-1);
    tracep->declBus(c+3619,"rf_DIP_io_rf_30_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+135,"rf_DIP_io_rf_30_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3588,"rf_DIP_io_rf_31_MPORT_en", false,-1);
    tracep->declBus(c+3620,"rf_DIP_io_rf_31_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+137,"rf_DIP_io_rf_31_MPORT_data", false,-1, 63,0);
    tracep->declQuad(c+214,"rf_MPORT_data", false,-1, 63,0);
    tracep->declBus(c+216,"rf_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+3588,"rf_MPORT_mask", false,-1);
    tracep->declBit(c+217,"rf_MPORT_en", false,-1);
    tracep->declBit(c+64,"MEM_io_in_ready", false,-1);
    tracep->declBit(c+218,"MEM_io_in_valid", false,-1);
    tracep->declBus(c+219,"MEM_io_in_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+220,"MEM_io_in_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+221,"MEM_io_in_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+222,"MEM_io_in_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+223,"MEM_io_in_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+225,"MEM_io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+226,"MEM_io_in_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+228,"MEM_io_in_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declQuad(c+229,"MEM_io_in_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+231,"MEM_io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+233,"MEM_io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+235,"MEM_io_in_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declBit(c+3588,"MEM_io_out_ready", false,-1);
    tracep->declBit(c+237,"MEM_io_out_valid", false,-1);
    tracep->declBit(c+238,"MEM_io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+221,"MEM_io_out_bits_ctrl_signal_rfWen", false,-1);
    tracep->declQuad(c+223,"MEM_io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+225,"MEM_io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+226,"MEM_io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBit(c+239,"MEM_io_out_bits_ctrl_flow_skip", false,-1);
    tracep->declBus(c+228,"MEM_io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+240,"MEM_io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+5,"MEM_io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declBit(c+241,"MEM_io_cache_io_addr_req_valid", false,-1);
    tracep->declQuad(c+242,"MEM_io_cache_io_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+241,"MEM_io_cache_io_addr_req_bits_ce", false,-1);
    tracep->declBit(c+244,"MEM_io_cache_io_addr_req_bits_we", false,-1);
    tracep->declBit(c+245,"MEM_io_cache_io_rdata_rep_valid", false,-1);
    tracep->declQuad(c+7,"MEM_io_cache_io_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+246,"MEM_io_cache_io_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+248,"MEM_io_cache_io_wdata_req_bits_wmask", false,-1, 7,0);
    tracep->declBit(c+249,"MEM_io_cache_io_wdata_rep", false,-1);
    tracep->declBit(c+250,"WB_io_in_valid", false,-1);
    tracep->declBit(c+251,"WB_io_in_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+252,"WB_io_in_bits_ctrl_signal_rfWen", false,-1);
    tracep->declQuad(c+253,"WB_io_in_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+3587,"WB_io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+255,"WB_io_in_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBit(c+257,"WB_io_in_bits_ctrl_flow_skip", false,-1);
    tracep->declBus(c+216,"WB_io_in_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declQuad(c+258,"WB_io_in_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declBit(c+3588,"WB_io_out_ready", false,-1);
    tracep->declBit(c+250,"WB_io_out_valid", false,-1);
    tracep->declBit(c+260,"WB_io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declQuad(c+253,"WB_io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+3587,"WB_io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+255,"WB_io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBit(c+257,"WB_io_out_bits_ctrl_flow_skip", false,-1);
    tracep->declBus(c+216,"WB_io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+217,"WB_io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+258,"WB_io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+33,"bypass_io_EX_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+34,"bypass_io_EX_rf_rfWen", false,-1);
    tracep->declQuad(c+66,"bypass_io_EX_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+228,"bypass_io_MEM_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+240,"bypass_io_MEM_rf_rfWen", false,-1);
    tracep->declQuad(c+5,"bypass_io_MEM_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+216,"bypass_io_WB_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+217,"bypass_io_WB_rf_rfWen", false,-1);
    tracep->declQuad(c+258,"bypass_io_WB_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+261,"bypass_io_Reg1", false,-1, 63,0);
    tracep->declBus(c+41,"bypass_io_reg_index1", false,-1, 4,0);
    tracep->declQuad(c+263,"bypass_io_Reg2", false,-1, 63,0);
    tracep->declBus(c+42,"bypass_io_reg_index2", false,-1, 4,0);
    tracep->declQuad(c+1,"bypass_io_Bypass_REG1", false,-1, 63,0);
    tracep->declQuad(c+3,"bypass_io_Bypass_REG2", false,-1, 63,0);
    tracep->declBit(c+3583,"ICACHE_clock", false,-1);
    tracep->declBit(c+3584,"ICACHE_reset", false,-1);
    tracep->declBit(c+21,"ICACHE_io_in_addr_req_valid", false,-1);
    tracep->declQuad(c+3585,"ICACHE_io_in_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+22,"ICACHE_io_in_rdata_rep_ready", false,-1);
    tracep->declBit(c+23,"ICACHE_io_in_rdata_rep_valid", false,-1);
    tracep->declQuad(c+24,"ICACHE_io_in_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+73,"ICACHE_io_cache_busy", false,-1);
    tracep->declBit(c+265,"ICACHE_io_out_raddr_req_ready", false,-1);
    tracep->declBit(c+266,"ICACHE_io_out_raddr_req_valid", false,-1);
    tracep->declQuad(c+267,"ICACHE_io_out_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+269,"ICACHE_io_out_rdata_rep_valid", false,-1);
    tracep->declQuad(c+9,"ICACHE_io_out_rdata_rep_bits_data", false,-1, 63,0);
    tracep->declBit(c+270,"ICACHE_io_out_rdata_rep_bits_last", false,-1);
    tracep->declBit(c+271,"ICACHE_io_out_wb_valid", false,-1);
    tracep->declBus(c+3621,"ICACHE_io_out_wb_bits_breap", false,-1, 1,0);
    tracep->declBit(c+3584,"MMEM_reset", false,-1);
    tracep->declBit(c+3583,"MMEM_clk", false,-1);
    tracep->declBit(c+272,"MMEM_ar_valid", false,-1);
    tracep->declBit(c+273,"MMEM_ar_ready", false,-1);
    tracep->declQuad(c+274,"MMEM_ar_addr", false,-1, 63,0);
    tracep->declBus(c+3622,"MMEM_ar_id", false,-1, 3,0);
    tracep->declBus(c+276,"MMEM_ar_len", false,-1, 7,0);
    tracep->declBus(c+3623,"MMEM_ar_size", false,-1, 2,0);
    tracep->declBus(c+3624,"MMEM_ar_prot", false,-1, 2,0);
    tracep->declBus(c+3625,"MMEM_ar_burst", false,-1, 1,0);
    tracep->declBus(c+3621,"MMEM_ar_lock", false,-1, 1,0);
    tracep->declBus(c+3626,"MMEM_ar_cache", false,-1, 3,0);
    tracep->declBit(c+277,"MMEM_rd_valid", false,-1);
    tracep->declBit(c+3588,"MMEM_rd_ready", false,-1);
    tracep->declQuad(c+9,"MMEM_rd_data", false,-1, 63,0);
    tracep->declBus(c+3627,"MMEM_rd_id", false,-1, 3,0);
    tracep->declBus(c+3628,"MMEM_rd_resp", false,-1, 1,0);
    tracep->declBit(c+270,"MMEM_rd_last", false,-1);
    tracep->declBit(c+278,"MMEM_aw_valid", false,-1);
    tracep->declBit(c+279,"MMEM_aw_ready", false,-1);
    tracep->declQuad(c+280,"MMEM_aw_addr", false,-1, 63,0);
    tracep->declBus(c+3622,"MMEM_aw_id", false,-1, 3,0);
    tracep->declBus(c+276,"MMEM_aw_len", false,-1, 7,0);
    tracep->declBus(c+3623,"MMEM_aw_size", false,-1, 2,0);
    tracep->declBus(c+3624,"MMEM_aw_prot", false,-1, 2,0);
    tracep->declBus(c+3625,"MMEM_aw_burst", false,-1, 1,0);
    tracep->declBus(c+3621,"MMEM_aw_lock", false,-1, 1,0);
    tracep->declBus(c+3626,"MMEM_aw_cache", false,-1, 3,0);
    tracep->declBit(c+282,"MMEM_wd_valid", false,-1);
    tracep->declBit(c+283,"MMEM_wd_ready", false,-1);
    tracep->declQuad(c+284,"MMEM_wd_data", false,-1, 63,0);
    tracep->declBus(c+286,"MMEM_wstrb", false,-1, 7,0);
    tracep->declBus(c+3622,"MMEM_wd_id", false,-1, 3,0);
    tracep->declBit(c+287,"MMEM_wd_last", false,-1);
    tracep->declBit(c+288,"MMEM_wr_valid", false,-1);
    tracep->declBit(c+289,"MMEM_wr_ready", false,-1);
    tracep->declBus(c+3621,"MMEM_wr_breap", false,-1, 1,0);
    tracep->declBus(c+3629,"MMEM_wr_id", false,-1, 3,0);
    tracep->declBit(c+3583,"ARBITER_clock", false,-1);
    tracep->declBit(c+3584,"ARBITER_reset", false,-1);
    tracep->declBit(c+290,"ARBITER_io_in1_raddr_req_ready", false,-1);
    tracep->declBit(c+291,"ARBITER_io_in1_raddr_req_valid", false,-1);
    tracep->declQuad(c+292,"ARBITER_io_in1_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBus(c+294,"ARBITER_io_in1_raddr_req_bits_len", false,-1, 7,0);
    tracep->declBit(c+295,"ARBITER_io_in1_waddr_req_ready", false,-1);
    tracep->declBit(c+296,"ARBITER_io_in1_waddr_req_valid", false,-1);
    tracep->declQuad(c+297,"ARBITER_io_in1_waddr_req_bits_addr", false,-1, 63,0);
    tracep->declBus(c+294,"ARBITER_io_in1_waddr_req_bits_len", false,-1, 7,0);
    tracep->declBit(c+3588,"ARBITER_io_in1_rdata_rep_ready", false,-1);
    tracep->declBit(c+299,"ARBITER_io_in1_rdata_rep_valid", false,-1);
    tracep->declQuad(c+9,"ARBITER_io_in1_rdata_rep_bits_data", false,-1, 63,0);
    tracep->declBit(c+270,"ARBITER_io_in1_rdata_rep_bits_last", false,-1);
    tracep->declBit(c+300,"ARBITER_io_in1_wdata_req_ready", false,-1);
    tracep->declBit(c+301,"ARBITER_io_in1_wdata_req_valid", false,-1);
    tracep->declQuad(c+302,"ARBITER_io_in1_wdata_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+304,"ARBITER_io_in1_wdata_req_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+305,"ARBITER_io_in1_wdata_req_bits_last", false,-1);
    tracep->declBit(c+306,"ARBITER_io_in1_wb_ready", false,-1);
    tracep->declBit(c+307,"ARBITER_io_in1_wb_valid", false,-1);
    tracep->declBus(c+3621,"ARBITER_io_in1_wb_bits_breap", false,-1, 1,0);
    tracep->declBit(c+265,"ARBITER_io_in2_raddr_req_ready", false,-1);
    tracep->declBit(c+266,"ARBITER_io_in2_raddr_req_valid", false,-1);
    tracep->declQuad(c+267,"ARBITER_io_in2_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+269,"ARBITER_io_in2_rdata_rep_valid", false,-1);
    tracep->declQuad(c+9,"ARBITER_io_in2_rdata_rep_bits_data", false,-1, 63,0);
    tracep->declBit(c+270,"ARBITER_io_in2_rdata_rep_bits_last", false,-1);
    tracep->declBit(c+271,"ARBITER_io_in2_wb_valid", false,-1);
    tracep->declBus(c+3621,"ARBITER_io_in2_wb_bits_breap", false,-1, 1,0);
    tracep->declBit(c+273,"ARBITER_io_out_raddr_req_ready", false,-1);
    tracep->declBit(c+272,"ARBITER_io_out_raddr_req_valid", false,-1);
    tracep->declQuad(c+274,"ARBITER_io_out_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBus(c+276,"ARBITER_io_out_raddr_req_bits_len", false,-1, 7,0);
    tracep->declBit(c+279,"ARBITER_io_out_waddr_req_ready", false,-1);
    tracep->declBit(c+278,"ARBITER_io_out_waddr_req_valid", false,-1);
    tracep->declQuad(c+280,"ARBITER_io_out_waddr_req_bits_addr", false,-1, 63,0);
    tracep->declBus(c+276,"ARBITER_io_out_waddr_req_bits_len", false,-1, 7,0);
    tracep->declBit(c+3588,"ARBITER_io_out_rdata_rep_ready", false,-1);
    tracep->declBit(c+277,"ARBITER_io_out_rdata_rep_valid", false,-1);
    tracep->declQuad(c+9,"ARBITER_io_out_rdata_rep_bits_data", false,-1, 63,0);
    tracep->declBit(c+270,"ARBITER_io_out_rdata_rep_bits_last", false,-1);
    tracep->declBit(c+283,"ARBITER_io_out_wdata_req_ready", false,-1);
    tracep->declBit(c+282,"ARBITER_io_out_wdata_req_valid", false,-1);
    tracep->declQuad(c+284,"ARBITER_io_out_wdata_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+286,"ARBITER_io_out_wdata_req_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+287,"ARBITER_io_out_wdata_req_bits_last", false,-1);
    tracep->declBit(c+289,"ARBITER_io_out_wb_ready", false,-1);
    tracep->declBit(c+288,"ARBITER_io_out_wb_valid", false,-1);
    tracep->declBus(c+3621,"ARBITER_io_out_wb_bits_breap", false,-1, 1,0);
    tracep->declBit(c+3583,"MMIO_clock", false,-1);
    tracep->declBit(c+3584,"MMIO_reset", false,-1);
    tracep->declBit(c+241,"MMIO_io_in_addr_req_valid", false,-1);
    tracep->declQuad(c+242,"MMIO_io_in_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+241,"MMIO_io_in_addr_req_bits_ce", false,-1);
    tracep->declBit(c+244,"MMIO_io_in_addr_req_bits_we", false,-1);
    tracep->declBit(c+245,"MMIO_io_in_rdata_rep_valid", false,-1);
    tracep->declQuad(c+7,"MMIO_io_in_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+246,"MMIO_io_in_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+248,"MMIO_io_in_wdata_req_bits_wmask", false,-1, 7,0);
    tracep->declBit(c+249,"MMIO_io_in_wdata_rep", false,-1);
    tracep->declBit(c+290,"MMIO_io_out_raddr_req_ready", false,-1);
    tracep->declBit(c+291,"MMIO_io_out_raddr_req_valid", false,-1);
    tracep->declQuad(c+292,"MMIO_io_out_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBus(c+294,"MMIO_io_out_raddr_req_bits_len", false,-1, 7,0);
    tracep->declBit(c+295,"MMIO_io_out_waddr_req_ready", false,-1);
    tracep->declBit(c+296,"MMIO_io_out_waddr_req_valid", false,-1);
    tracep->declQuad(c+297,"MMIO_io_out_waddr_req_bits_addr", false,-1, 63,0);
    tracep->declBus(c+294,"MMIO_io_out_waddr_req_bits_len", false,-1, 7,0);
    tracep->declBit(c+3588,"MMIO_io_out_rdata_rep_ready", false,-1);
    tracep->declBit(c+299,"MMIO_io_out_rdata_rep_valid", false,-1);
    tracep->declQuad(c+9,"MMIO_io_out_rdata_rep_bits_data", false,-1, 63,0);
    tracep->declBit(c+270,"MMIO_io_out_rdata_rep_bits_last", false,-1);
    tracep->declBit(c+300,"MMIO_io_out_wdata_req_ready", false,-1);
    tracep->declBit(c+301,"MMIO_io_out_wdata_req_valid", false,-1);
    tracep->declQuad(c+302,"MMIO_io_out_wdata_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+304,"MMIO_io_out_wdata_req_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+305,"MMIO_io_out_wdata_req_bits_last", false,-1);
    tracep->declBit(c+306,"MMIO_io_out_wb_ready", false,-1);
    tracep->declBit(c+307,"MMIO_io_out_wb_valid", false,-1);
    tracep->declBus(c+3621,"MMIO_io_out_wb_bits_breap", false,-1, 1,0);
    tracep->declBus(c+308,"head", false,-1, 5,0);
    tracep->declBus(c+309,"tail", false,-1, 5,0);
    tracep->declBit(c+310,"empty", false,-1);
    tracep->declBit(c+311,"full", false,-1);
    tracep->declQuad(c+312,"buffer_0_PC", false,-1, 63,0);
    tracep->declBus(c+314,"buffer_0_Inst", false,-1, 31,0);
    tracep->declQuad(c+315,"buffer_1_PC", false,-1, 63,0);
    tracep->declBus(c+317,"buffer_1_Inst", false,-1, 31,0);
    tracep->declQuad(c+318,"buffer_2_PC", false,-1, 63,0);
    tracep->declBus(c+320,"buffer_2_Inst", false,-1, 31,0);
    tracep->declQuad(c+321,"buffer_3_PC", false,-1, 63,0);
    tracep->declBus(c+323,"buffer_3_Inst", false,-1, 31,0);
    tracep->declQuad(c+324,"buffer_4_PC", false,-1, 63,0);
    tracep->declBus(c+326,"buffer_4_Inst", false,-1, 31,0);
    tracep->declQuad(c+327,"buffer_5_PC", false,-1, 63,0);
    tracep->declBus(c+329,"buffer_5_Inst", false,-1, 31,0);
    tracep->declQuad(c+330,"buffer_6_PC", false,-1, 63,0);
    tracep->declBus(c+332,"buffer_6_Inst", false,-1, 31,0);
    tracep->declQuad(c+333,"buffer_7_PC", false,-1, 63,0);
    tracep->declBus(c+335,"buffer_7_Inst", false,-1, 31,0);
    tracep->declQuad(c+336,"buffer_8_PC", false,-1, 63,0);
    tracep->declBus(c+338,"buffer_8_Inst", false,-1, 31,0);
    tracep->declQuad(c+339,"buffer_9_PC", false,-1, 63,0);
    tracep->declBus(c+341,"buffer_9_Inst", false,-1, 31,0);
    tracep->declQuad(c+342,"buffer_10_PC", false,-1, 63,0);
    tracep->declBus(c+344,"buffer_10_Inst", false,-1, 31,0);
    tracep->declQuad(c+345,"buffer_11_PC", false,-1, 63,0);
    tracep->declBus(c+347,"buffer_11_Inst", false,-1, 31,0);
    tracep->declQuad(c+348,"buffer_12_PC", false,-1, 63,0);
    tracep->declBus(c+350,"buffer_12_Inst", false,-1, 31,0);
    tracep->declQuad(c+351,"buffer_13_PC", false,-1, 63,0);
    tracep->declBus(c+353,"buffer_13_Inst", false,-1, 31,0);
    tracep->declQuad(c+354,"buffer_14_PC", false,-1, 63,0);
    tracep->declBus(c+356,"buffer_14_Inst", false,-1, 31,0);
    tracep->declQuad(c+357,"buffer_15_PC", false,-1, 63,0);
    tracep->declBus(c+359,"buffer_15_Inst", false,-1, 31,0);
    tracep->declQuad(c+360,"buffer_16_PC", false,-1, 63,0);
    tracep->declBus(c+362,"buffer_16_Inst", false,-1, 31,0);
    tracep->declQuad(c+363,"buffer_17_PC", false,-1, 63,0);
    tracep->declBus(c+365,"buffer_17_Inst", false,-1, 31,0);
    tracep->declQuad(c+366,"buffer_18_PC", false,-1, 63,0);
    tracep->declBus(c+368,"buffer_18_Inst", false,-1, 31,0);
    tracep->declQuad(c+369,"buffer_19_PC", false,-1, 63,0);
    tracep->declBus(c+371,"buffer_19_Inst", false,-1, 31,0);
    tracep->declQuad(c+372,"buffer_20_PC", false,-1, 63,0);
    tracep->declBus(c+374,"buffer_20_Inst", false,-1, 31,0);
    tracep->declQuad(c+375,"buffer_21_PC", false,-1, 63,0);
    tracep->declBus(c+377,"buffer_21_Inst", false,-1, 31,0);
    tracep->declQuad(c+378,"buffer_22_PC", false,-1, 63,0);
    tracep->declBus(c+380,"buffer_22_Inst", false,-1, 31,0);
    tracep->declQuad(c+381,"buffer_23_PC", false,-1, 63,0);
    tracep->declBus(c+383,"buffer_23_Inst", false,-1, 31,0);
    tracep->declQuad(c+384,"buffer_24_PC", false,-1, 63,0);
    tracep->declBus(c+386,"buffer_24_Inst", false,-1, 31,0);
    tracep->declQuad(c+387,"buffer_25_PC", false,-1, 63,0);
    tracep->declBus(c+389,"buffer_25_Inst", false,-1, 31,0);
    tracep->declQuad(c+390,"buffer_26_PC", false,-1, 63,0);
    tracep->declBus(c+392,"buffer_26_Inst", false,-1, 31,0);
    tracep->declQuad(c+393,"buffer_27_PC", false,-1, 63,0);
    tracep->declBus(c+395,"buffer_27_Inst", false,-1, 31,0);
    tracep->declQuad(c+396,"buffer_28_PC", false,-1, 63,0);
    tracep->declBus(c+398,"buffer_28_Inst", false,-1, 31,0);
    tracep->declQuad(c+399,"buffer_29_PC", false,-1, 63,0);
    tracep->declBus(c+401,"buffer_29_Inst", false,-1, 31,0);
    tracep->declQuad(c+402,"buffer_30_PC", false,-1, 63,0);
    tracep->declBus(c+404,"buffer_30_Inst", false,-1, 31,0);
    tracep->declQuad(c+405,"buffer_31_PC", false,-1, 63,0);
    tracep->declBus(c+407,"buffer_31_Inst", false,-1, 31,0);
    tracep->declBit(c+48,"valid", false,-1);
    tracep->declBus(c+49,"EX_io_in_bits_r_ctrl_signal_src1Type", false,-1, 2,0);
    tracep->declBus(c+50,"EX_io_in_bits_r_ctrl_signal_src2Type", false,-1, 2,0);
    tracep->declBus(c+51,"EX_io_in_bits_r_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+52,"EX_io_in_bits_r_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+53,"EX_io_in_bits_r_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+54,"EX_io_in_bits_r_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declBus(c+33,"EX_io_in_bits_r_ctrl_signal_rfDest", false,-1, 4,0);
    tracep->declQuad(c+55,"EX_io_in_bits_r_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+57,"EX_io_in_bits_r_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+59,"EX_io_in_bits_r_ctrl_data_Imm", false,-1, 63,0);
    tracep->declQuad(c+61,"EX_io_in_bits_r_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+63,"EX_io_in_bits_r_ctrl_flow_inst", false,-1, 31,0);
    tracep->declBit(c+218,"valid_1", false,-1);
    tracep->declBus(c+219,"MEM_io_in_bits_r_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+220,"MEM_io_in_bits_r_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+221,"MEM_io_in_bits_r_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+222,"MEM_io_in_bits_r_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+223,"MEM_io_in_bits_r_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+225,"MEM_io_in_bits_r_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+226,"MEM_io_in_bits_r_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+228,"MEM_io_in_bits_r_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declQuad(c+229,"MEM_io_in_bits_r_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+231,"MEM_io_in_bits_r_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+233,"MEM_io_in_bits_r_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+235,"MEM_io_in_bits_r_ctrl_data_Imm", false,-1, 63,0);
    tracep->declBit(c+250,"valid_2", false,-1);
    tracep->declBit(c+251,"WB_io_in_bits_r_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+252,"WB_io_in_bits_r_ctrl_signal_rfWen", false,-1);
    tracep->declQuad(c+253,"WB_io_in_bits_r_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+408,"WB_io_in_bits_r_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+255,"WB_io_in_bits_r_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBit(c+257,"WB_io_in_bits_r_ctrl_flow_skip", false,-1);
    tracep->declBus(c+216,"WB_io_in_bits_r_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declQuad(c+258,"WB_io_in_bits_r_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declBit(c+409,"DIP_io_is_break_REG", false,-1);
    tracep->declBit(c+74,"DIP_io_is_break_REG_1", false,-1);
    tracep->declBus(c+139,"DIP_io_inst_REG", false,-1, 31,0);
    tracep->declBit(c+145,"DIP_io_is_skip_REG", false,-1);
    tracep->declBit(c+142,"DIP_io_inst_valid_REG", false,-1);
    tracep->declQuad(c+140,"DIP_io_pc_REG", false,-1, 63,0);
    tracep->declQuad(c+143,"DIP_io_dnpc_REG", false,-1, 63,0);
    tracep->pushNamePrefix("ARBITER ");
    tracep->declBit(c+3583,"clock", false,-1);
    tracep->declBit(c+3584,"reset", false,-1);
    tracep->declBit(c+290,"io_in1_raddr_req_ready", false,-1);
    tracep->declBit(c+291,"io_in1_raddr_req_valid", false,-1);
    tracep->declQuad(c+292,"io_in1_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBus(c+294,"io_in1_raddr_req_bits_len", false,-1, 7,0);
    tracep->declBit(c+295,"io_in1_waddr_req_ready", false,-1);
    tracep->declBit(c+296,"io_in1_waddr_req_valid", false,-1);
    tracep->declQuad(c+297,"io_in1_waddr_req_bits_addr", false,-1, 63,0);
    tracep->declBus(c+294,"io_in1_waddr_req_bits_len", false,-1, 7,0);
    tracep->declBit(c+3588,"io_in1_rdata_rep_ready", false,-1);
    tracep->declBit(c+299,"io_in1_rdata_rep_valid", false,-1);
    tracep->declQuad(c+9,"io_in1_rdata_rep_bits_data", false,-1, 63,0);
    tracep->declBit(c+270,"io_in1_rdata_rep_bits_last", false,-1);
    tracep->declBit(c+300,"io_in1_wdata_req_ready", false,-1);
    tracep->declBit(c+301,"io_in1_wdata_req_valid", false,-1);
    tracep->declQuad(c+302,"io_in1_wdata_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+304,"io_in1_wdata_req_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+305,"io_in1_wdata_req_bits_last", false,-1);
    tracep->declBit(c+306,"io_in1_wb_ready", false,-1);
    tracep->declBit(c+307,"io_in1_wb_valid", false,-1);
    tracep->declBus(c+3621,"io_in1_wb_bits_breap", false,-1, 1,0);
    tracep->declBit(c+265,"io_in2_raddr_req_ready", false,-1);
    tracep->declBit(c+266,"io_in2_raddr_req_valid", false,-1);
    tracep->declQuad(c+267,"io_in2_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+269,"io_in2_rdata_rep_valid", false,-1);
    tracep->declQuad(c+9,"io_in2_rdata_rep_bits_data", false,-1, 63,0);
    tracep->declBit(c+270,"io_in2_rdata_rep_bits_last", false,-1);
    tracep->declBit(c+271,"io_in2_wb_valid", false,-1);
    tracep->declBus(c+3621,"io_in2_wb_bits_breap", false,-1, 1,0);
    tracep->declBit(c+273,"io_out_raddr_req_ready", false,-1);
    tracep->declBit(c+272,"io_out_raddr_req_valid", false,-1);
    tracep->declQuad(c+274,"io_out_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBus(c+276,"io_out_raddr_req_bits_len", false,-1, 7,0);
    tracep->declBit(c+279,"io_out_waddr_req_ready", false,-1);
    tracep->declBit(c+278,"io_out_waddr_req_valid", false,-1);
    tracep->declQuad(c+280,"io_out_waddr_req_bits_addr", false,-1, 63,0);
    tracep->declBus(c+276,"io_out_waddr_req_bits_len", false,-1, 7,0);
    tracep->declBit(c+3588,"io_out_rdata_rep_ready", false,-1);
    tracep->declBit(c+277,"io_out_rdata_rep_valid", false,-1);
    tracep->declQuad(c+9,"io_out_rdata_rep_bits_data", false,-1, 63,0);
    tracep->declBit(c+270,"io_out_rdata_rep_bits_last", false,-1);
    tracep->declBit(c+283,"io_out_wdata_req_ready", false,-1);
    tracep->declBit(c+282,"io_out_wdata_req_valid", false,-1);
    tracep->declQuad(c+284,"io_out_wdata_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+286,"io_out_wdata_req_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+287,"io_out_wdata_req_bits_last", false,-1);
    tracep->declBit(c+289,"io_out_wb_ready", false,-1);
    tracep->declBit(c+288,"io_out_wb_valid", false,-1);
    tracep->declBus(c+3621,"io_out_wb_bits_breap", false,-1, 1,0);
    tracep->declBit(c+410,"state", false,-1);
    tracep->declBit(c+411,"choose_r", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("DIP ");
    tracep->declBit(c+74,"is_break", false,-1);
    tracep->declBus(c+139,"inst", false,-1, 31,0);
    tracep->declQuad(c+75,"rf_0", false,-1, 63,0);
    tracep->declQuad(c+77,"rf_1", false,-1, 63,0);
    tracep->declQuad(c+79,"rf_2", false,-1, 63,0);
    tracep->declQuad(c+81,"rf_3", false,-1, 63,0);
    tracep->declQuad(c+83,"rf_4", false,-1, 63,0);
    tracep->declQuad(c+85,"rf_5", false,-1, 63,0);
    tracep->declQuad(c+87,"rf_6", false,-1, 63,0);
    tracep->declQuad(c+89,"rf_7", false,-1, 63,0);
    tracep->declQuad(c+91,"rf_8", false,-1, 63,0);
    tracep->declQuad(c+93,"rf_9", false,-1, 63,0);
    tracep->declQuad(c+95,"rf_10", false,-1, 63,0);
    tracep->declQuad(c+97,"rf_11", false,-1, 63,0);
    tracep->declQuad(c+99,"rf_12", false,-1, 63,0);
    tracep->declQuad(c+101,"rf_13", false,-1, 63,0);
    tracep->declQuad(c+103,"rf_14", false,-1, 63,0);
    tracep->declQuad(c+105,"rf_15", false,-1, 63,0);
    tracep->declQuad(c+107,"rf_16", false,-1, 63,0);
    tracep->declQuad(c+109,"rf_17", false,-1, 63,0);
    tracep->declQuad(c+111,"rf_18", false,-1, 63,0);
    tracep->declQuad(c+113,"rf_19", false,-1, 63,0);
    tracep->declQuad(c+115,"rf_20", false,-1, 63,0);
    tracep->declQuad(c+117,"rf_21", false,-1, 63,0);
    tracep->declQuad(c+119,"rf_22", false,-1, 63,0);
    tracep->declQuad(c+121,"rf_23", false,-1, 63,0);
    tracep->declQuad(c+123,"rf_24", false,-1, 63,0);
    tracep->declQuad(c+125,"rf_25", false,-1, 63,0);
    tracep->declQuad(c+127,"rf_26", false,-1, 63,0);
    tracep->declQuad(c+129,"rf_27", false,-1, 63,0);
    tracep->declQuad(c+131,"rf_28", false,-1, 63,0);
    tracep->declQuad(c+133,"rf_29", false,-1, 63,0);
    tracep->declQuad(c+135,"rf_30", false,-1, 63,0);
    tracep->declQuad(c+137,"rf_31", false,-1, 63,0);
    tracep->declBit(c+142,"inst_valid", false,-1);
    tracep->declBit(c+145,"is_skip", false,-1);
    tracep->declQuad(c+140,"pc", false,-1, 63,0);
    tracep->declQuad(c+143,"dnpc", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+412+i*2,"rf", true,(i+0), 63,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+476+i*1,"IN", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EX ");
    tracep->declBit(c+3583,"clock", false,-1);
    tracep->declBit(c+3584,"reset", false,-1);
    tracep->declBit(c+35,"io_in_ready", false,-1);
    tracep->declBit(c+48,"io_in_valid", false,-1);
    tracep->declBus(c+49,"io_in_bits_ctrl_signal_src1Type", false,-1, 2,0);
    tracep->declBus(c+50,"io_in_bits_ctrl_signal_src2Type", false,-1, 2,0);
    tracep->declBus(c+51,"io_in_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+52,"io_in_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+53,"io_in_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+54,"io_in_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declBus(c+33,"io_in_bits_ctrl_signal_rfDest", false,-1, 4,0);
    tracep->declQuad(c+55,"io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+57,"io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+59,"io_in_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declQuad(c+61,"io_in_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+63,"io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declBit(c+32,"io_is_mem", false,-1);
    tracep->declBit(c+17,"io_branchIO_is_branch", false,-1);
    tracep->declBit(c+18,"io_branchIO_is_jump", false,-1);
    tracep->declQuad(c+19,"io_branchIO_dnpc", false,-1, 63,0);
    tracep->declBit(c+64,"io_out_ready", false,-1);
    tracep->declBit(c+65,"io_out_valid", false,-1);
    tracep->declBus(c+51,"io_out_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+52,"io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+53,"io_out_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+54,"io_out_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+61,"io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+63,"io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+19,"io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+33,"io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+34,"io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+66,"io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+68,"io_out_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+70,"io_out_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+59,"io_out_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declBit(c+72,"io_is_break", false,-1);
    tracep->declBit(c+27,"io_is_flush", false,-1);
    tracep->declBit(c+73,"io_icache_busy", false,-1);
    tracep->declQuad(c+483,"CSRDIFF_mepc", false,-1, 63,0);
    tracep->declQuad(c+485,"CSRDIFF_mcause", false,-1, 63,0);
    tracep->declQuad(c+487,"CSRDIFF_mstatus", false,-1, 63,0);
    tracep->declQuad(c+489,"CSRDIFF_mtvec", false,-1, 63,0);
    tracep->declBit(c+3583,"mul_clock", false,-1);
    tracep->declBit(c+3584,"mul_reset", false,-1);
    tracep->declBit(c+491,"mul_io_in_valid", false,-1);
    tracep->declQuad(c+492,"mul_io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+494,"mul_io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declBit(c+496,"mul_io_out_valid", false,-1);
    tracep->declQuad(c+497,"mul_io_out_bits_result_result_lo", false,-1, 63,0);
    tracep->declBit(c+3583,"div_clock", false,-1);
    tracep->declBit(c+3584,"div_reset", false,-1);
    tracep->declBit(c+499,"div_io_in_valid", false,-1);
    tracep->declBit(c+500,"div_io_in_bits_ctrl_flow_div_signed", false,-1);
    tracep->declQuad(c+501,"div_io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+503,"div_io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declBit(c+505,"div_io_out_valid", false,-1);
    tracep->declQuad(c+506,"div_io_out_bits_result_quotient", false,-1, 63,0);
    tracep->declQuad(c+508,"div_io_out_bits_result_remainder", false,-1, 63,0);
    tracep->declBit(c+510,"is_mul", false,-1);
    tracep->declBit(c+511,"is_div", false,-1);
    tracep->declBit(c+512,"is_divw", false,-1);
    tracep->declBit(c+500,"is_div_sign", false,-1);
    tracep->declQuad(c+513,"mepc", false,-1, 63,0);
    tracep->declQuad(c+515,"mcause", false,-1, 63,0);
    tracep->declQuad(c+517,"mstatus", false,-1, 63,0);
    tracep->declQuad(c+519,"mtvec", false,-1, 63,0);
    tracep->declQuad(c+521,"mie", false,-1, 63,0);
    tracep->declQuad(c+523,"mip", false,-1, 63,0);
    tracep->declQuad(c+68,"src1", false,-1, 63,0);
    tracep->declQuad(c+70,"src2", false,-1, 63,0);
    tracep->declBit(c+525,"alu_result_sign", false,-1);
    tracep->declBit(c+526,"alu_result_sign_2", false,-1);
    tracep->declBit(c+527,"alu_result_sign_3", false,-1);
    tracep->declBit(c+528,"alu_result_sign_4", false,-1);
    tracep->declBit(c+529,"alu_result_sign_6", false,-1);
    tracep->declQuad(c+530,"alu_result", false,-1, 63,0);
    tracep->declBit(c+532,"shift_result_sign", false,-1);
    tracep->declBit(c+533,"shift_result_sign_1", false,-1);
    tracep->declBit(c+534,"shift_result_sign_2", false,-1);
    tracep->declBit(c+535,"shift_result_sign_3", false,-1);
    tracep->declBit(c+536,"div_io_in_bits_ctrl_data_src1_sign", false,-1);
    tracep->declBit(c+537,"div_io_in_bits_ctrl_data_src2_sign", false,-1);
    tracep->declQuad(c+538,"compar_result", false,-1, 63,0);
    tracep->declQuad(c+540,"jump_result", false,-1, 63,0);
    tracep->declQuad(c+542,"shift_result", false,-1, 63,0);
    tracep->declQuad(c+544,"branch_result", false,-1, 63,0);
    tracep->declBit(c+546,"branch_flag", false,-1);
    tracep->declQuad(c+547,"csr_data", false,-1, 63,0);
    tracep->declQuad(c+549,"CSRDIFF_io_mtvec_REG", false,-1, 63,0);
    tracep->declQuad(c+489,"CSRDIFF_io_mtvec_REG_1", false,-1, 63,0);
    tracep->declQuad(c+551,"CSRDIFF_io_mcause_REG", false,-1, 63,0);
    tracep->declQuad(c+485,"CSRDIFF_io_mcause_REG_1", false,-1, 63,0);
    tracep->declQuad(c+553,"CSRDIFF_io_mepc_REG", false,-1, 63,0);
    tracep->declQuad(c+483,"CSRDIFF_io_mepc_REG_1", false,-1, 63,0);
    tracep->declQuad(c+555,"CSRDIFF_io_mstatus_REG", false,-1, 63,0);
    tracep->declQuad(c+487,"CSRDIFF_io_mstatus_REG_1", false,-1, 63,0);
    tracep->declBit(c+557,"is_branch", false,-1);
    tracep->declBit(c+558,"is_jump", false,-1);
    tracep->pushNamePrefix("CSRDIFF ");
    tracep->declQuad(c+483,"mepc", false,-1, 63,0);
    tracep->declQuad(c+485,"mcause", false,-1, 63,0);
    tracep->declQuad(c+487,"mstatus", false,-1, 63,0);
    tracep->declQuad(c+489,"mtvec", false,-1, 63,0);
    for (int i = 0; i < 6; ++i) {
        tracep->declQuad(c+559+i*2,"inst_csr", true,(i+0), 63,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("div ");
    tracep->declBit(c+3583,"clock", false,-1);
    tracep->declBit(c+3584,"reset", false,-1);
    tracep->declBit(c+499,"io_in_valid", false,-1);
    tracep->declBit(c+500,"io_in_bits_ctrl_flow_div_signed", false,-1);
    tracep->declQuad(c+501,"io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+503,"io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declBit(c+505,"io_out_valid", false,-1);
    tracep->declQuad(c+506,"io_out_bits_result_quotient", false,-1, 63,0);
    tracep->declQuad(c+508,"io_out_bits_result_remainder", false,-1, 63,0);
    tracep->declArray(c+571,"dividend", false,-1, 127,0);
    tracep->declQuad(c+575,"divisor", false,-1, 63,0);
    tracep->declQuad(c+577,"S", false,-1, 63,0);
    tracep->declBus(c+579,"state", false,-1, 1,0);
    tracep->declBus(c+580,"count", false,-1, 5,0);
    tracep->declBit(c+581,"wrap_wrap", false,-1);
    tracep->declBit(c+582,"s", false,-1);
    tracep->declArray(c+583,"res_div", false,-1, 64,0);
    tracep->declQuad(c+586,"negative_s", false,-1, 63,0);
    tracep->declQuad(c+588,"negative_r", false,-1, 63,0);
    tracep->declQuad(c+590,"s_o", false,-1, 63,0);
    tracep->declQuad(c+592,"r_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mul ");
    tracep->declBit(c+3583,"clock", false,-1);
    tracep->declBit(c+3584,"reset", false,-1);
    tracep->declBit(c+491,"io_in_valid", false,-1);
    tracep->declQuad(c+492,"io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+494,"io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declBit(c+496,"io_out_valid", false,-1);
    tracep->declQuad(c+497,"io_out_bits_result_result_lo", false,-1, 63,0);
    tracep->declBit(c+3583,"mult_clock", false,-1);
    tracep->declBit(c+3584,"mult_reset", false,-1);
    tracep->declBit(c+491,"mult_io_in_valid", false,-1);
    tracep->declQuad(c+492,"mult_io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+494,"mult_io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declBit(c+496,"mult_io_out_valid", false,-1);
    tracep->declQuad(c+497,"mult_io_out_bits_result_result_lo", false,-1, 63,0);
    tracep->pushNamePrefix("mult ");
    tracep->declBit(c+3583,"clock", false,-1);
    tracep->declBit(c+3584,"reset", false,-1);
    tracep->declBit(c+491,"io_in_valid", false,-1);
    tracep->declQuad(c+492,"io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+494,"io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declBit(c+496,"io_out_valid", false,-1);
    tracep->declQuad(c+497,"io_out_bits_result_result_lo", false,-1, 63,0);
    tracep->declBus(c+594,"partial_io_y_3", false,-1, 2,0);
    tracep->declArray(c+595,"partial_io_x", false,-1, 131,0);
    tracep->declArray(c+600,"partial_io_p", false,-1, 131,0);
    tracep->declBit(c+605,"partial_io_c", false,-1);
    tracep->declArray(c+606,"multiplier", false,-1, 65,0);
    tracep->declArray(c+595,"multiplicand", false,-1, 131,0);
    tracep->declArray(c+609,"p", false,-1, 131,0);
    tracep->declBus(c+614,"count", false,-1, 6,0);
    tracep->declArray(c+615,"temp", false,-1, 131,0);
    tracep->declBit(c+620,"p_sign", false,-1);
    tracep->pushNamePrefix("partial ");
    tracep->declBus(c+594,"io_y_3", false,-1, 2,0);
    tracep->declArray(c+595,"io_x", false,-1, 131,0);
    tracep->declArray(c+600,"io_p", false,-1, 131,0);
    tracep->declBit(c+605,"io_c", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("ICACHE ");
    tracep->declBit(c+3583,"clock", false,-1);
    tracep->declBit(c+3584,"reset", false,-1);
    tracep->declBit(c+21,"io_in_addr_req_valid", false,-1);
    tracep->declQuad(c+3585,"io_in_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+22,"io_in_rdata_rep_ready", false,-1);
    tracep->declBit(c+23,"io_in_rdata_rep_valid", false,-1);
    tracep->declQuad(c+24,"io_in_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+73,"io_cache_busy", false,-1);
    tracep->declBit(c+265,"io_out_raddr_req_ready", false,-1);
    tracep->declBit(c+266,"io_out_raddr_req_valid", false,-1);
    tracep->declQuad(c+267,"io_out_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+269,"io_out_rdata_rep_valid", false,-1);
    tracep->declQuad(c+9,"io_out_rdata_rep_bits_data", false,-1, 63,0);
    tracep->declBit(c+270,"io_out_rdata_rep_bits_last", false,-1);
    tracep->declBit(c+271,"io_out_wb_valid", false,-1);
    tracep->declBus(c+3621,"io_out_wb_bits_breap", false,-1, 1,0);
    tracep->declBit(c+3583,"Cache_data_clock", false,-1);
    tracep->declBit(c+621,"Cache_data_io_in_valid", false,-1);
    tracep->declQuad(c+3585,"Cache_data_io_in_addr", false,-1, 63,0);
    tracep->declQuad(c+622,"Cache_data_io_write_bus_addr", false,-1, 63,0);
    tracep->declBit(c+624,"Cache_data_io_write_bus_valid", false,-1);
    tracep->declBus(c+625,"Cache_data_io_write_bus_waymask", false,-1, 1,0);
    tracep->declArray(c+626,"Cache_data_io_write_bus_wdata", false,-1, 511,0);
    tracep->declBit(c+621,"Cache_data_io_out_valid", false,-1);
    tracep->declQuad(c+642,"Cache_data_io_out_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+644,"Cache_data_io_out_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+646,"Cache_data_io_out_bits_meat_valid_0", false,-1);
    tracep->declBit(c+647,"Cache_data_io_out_bits_meat_valid_1", false,-1);
    tracep->declArray(c+648,"Cache_data_io_out_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+664,"Cache_data_io_out_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+680,"Cache_data_io_out_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBus(c+682,"Cache_data_io_out_bits_ctrl_data_index", false,-1, 4,0);
    tracep->declBus(c+683,"Cache_data_io_out_bits_ctrl_data_offset", false,-1, 5,0);
    tracep->declBit(c+684,"Scanf_io_in_valid", false,-1);
    tracep->declQuad(c+642,"Scanf_io_in_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+644,"Scanf_io_in_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+646,"Scanf_io_in_bits_meat_valid_0", false,-1);
    tracep->declBit(c+647,"Scanf_io_in_bits_meat_valid_1", false,-1);
    tracep->declArray(c+648,"Scanf_io_in_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+664,"Scanf_io_in_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+680,"Scanf_io_in_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBus(c+682,"Scanf_io_in_bits_ctrl_data_index", false,-1, 4,0);
    tracep->declBit(c+685,"Scanf_io_out_bits_hit", false,-1);
    tracep->declArray(c+686,"Scanf_io_out_bits_data", false,-1, 511,0);
    tracep->declBus(c+682,"Scanf_io_out_bits_meta_ctrl_data_index", false,-1, 4,0);
    tracep->declBit(c+702,"Scanf_io_out_bits_hit_way_0", false,-1);
    tracep->declBit(c+703,"Scanf_io_out_bits_hit_way_1", false,-1);
    tracep->declQuad(c+642,"Scanf_io_out_bits_tag_0", false,-1, 52,0);
    tracep->declQuad(c+644,"Scanf_io_out_bits_tag_1", false,-1, 52,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+704+i*1,"lru", true,(i+0));
    }
    tracep->declBit(c+736,"lru_lru_w_MPORT_en", false,-1);
    tracep->declBus(c+737,"lru_lru_w_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+738,"lru_lru_w_MPORT_data", false,-1);
    tracep->declBit(c+3588,"lru_MPORT_data", false,-1);
    tracep->declBus(c+682,"lru_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+3588,"lru_MPORT_mask", false,-1);
    tracep->declBit(c+739,"lru_MPORT_en", false,-1);
    tracep->declBit(c+3630,"lru_MPORT_1_data", false,-1);
    tracep->declBus(c+682,"lru_MPORT_1_addr", false,-1, 4,0);
    tracep->declBit(c+3588,"lru_MPORT_1_mask", false,-1);
    tracep->declBit(c+740,"lru_MPORT_1_en", false,-1);
    tracep->declBit(c+3630,"lru_MPORT_2_data", false,-1);
    tracep->declBus(c+682,"lru_MPORT_2_addr", false,-1, 4,0);
    tracep->declBit(c+3588,"lru_MPORT_2_mask", false,-1);
    tracep->declBit(c+741,"lru_MPORT_2_en", false,-1);
    tracep->declBit(c+3588,"lru_MPORT_3_data", false,-1);
    tracep->declBus(c+682,"lru_MPORT_3_addr", false,-1, 4,0);
    tracep->declBit(c+3588,"lru_MPORT_3_mask", false,-1);
    tracep->declBit(c+742,"lru_MPORT_3_en", false,-1);
    tracep->declBit(c+736,"lru_lru_w_MPORT_en_pipe_0", false,-1);
    tracep->declBus(c+737,"lru_lru_w_MPORT_addr_pipe_0", false,-1, 4,0);
    tracep->declBus(c+743,"state", false,-1, 2,0);
    tracep->declBus(c+744,"read_state", false,-1, 1,0);
    tracep->declArray(c+745,"data_line_reg", false,-1, 511,0);
    tracep->declQuad(c+761,"mem_addr_reg", false,-1, 63,0);
    tracep->declBit(c+763,"lru_r", false,-1);
    tracep->declBit(c+702,"hit_way_0", false,-1);
    tracep->declBit(c+703,"hit_way_1", false,-1);
    tracep->declBit(c+738,"lru_w", false,-1);
    tracep->declQuad(c+764,"hit_data", false,-1, 63,0);
    tracep->declQuad(c+766,"mem_data", false,-1, 63,0);
    tracep->declBit(c+684,"Scanf_io_in_valid_REG", false,-1);
    tracep->pushNamePrefix("Cache_data ");
    tracep->declBit(c+3583,"clock", false,-1);
    tracep->declBit(c+621,"io_in_valid", false,-1);
    tracep->declQuad(c+3585,"io_in_addr", false,-1, 63,0);
    tracep->declQuad(c+622,"io_write_bus_addr", false,-1, 63,0);
    tracep->declBit(c+624,"io_write_bus_valid", false,-1);
    tracep->declBus(c+625,"io_write_bus_waymask", false,-1, 1,0);
    tracep->declArray(c+626,"io_write_bus_wdata", false,-1, 511,0);
    tracep->declBit(c+621,"io_out_valid", false,-1);
    tracep->declQuad(c+642,"io_out_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+644,"io_out_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+646,"io_out_bits_meat_valid_0", false,-1);
    tracep->declBit(c+647,"io_out_bits_meat_valid_1", false,-1);
    tracep->declArray(c+648,"io_out_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+664,"io_out_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+680,"io_out_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBus(c+682,"io_out_bits_ctrl_data_index", false,-1, 4,0);
    tracep->declBus(c+683,"io_out_bits_ctrl_data_offset", false,-1, 5,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declArray(c+768+i*16,"data_0", true,(i+0), 511,0);
    }
    tracep->declBit(c+1280,"data_0_data_w_en", false,-1);
    tracep->declBus(c+1281,"data_0_data_w_addr", false,-1, 4,0);
    tracep->declArray(c+648,"data_0_data_w_data", false,-1, 511,0);
    tracep->declArray(c+626,"data_0_MPORT_data", false,-1, 511,0);
    tracep->declBus(c+1282,"data_0_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+1283,"data_0_MPORT_mask", false,-1);
    tracep->declBit(c+624,"data_0_MPORT_en", false,-1);
    tracep->declBit(c+1280,"data_0_data_w_en_pipe_0", false,-1);
    tracep->declBus(c+1281,"data_0_data_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declArray(c+1284+i*16,"data_1", true,(i+0), 511,0);
    }
    tracep->declBit(c+1796,"data_1_data_w_en", false,-1);
    tracep->declBus(c+1281,"data_1_data_w_addr", false,-1, 4,0);
    tracep->declArray(c+664,"data_1_data_w_data", false,-1, 511,0);
    tracep->declArray(c+626,"data_1_MPORT_data", false,-1, 511,0);
    tracep->declBus(c+1282,"data_1_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+763,"data_1_MPORT_mask", false,-1);
    tracep->declBit(c+624,"data_1_MPORT_en", false,-1);
    tracep->declBit(c+1796,"data_1_data_w_en_pipe_0", false,-1);
    tracep->declBus(c+1281,"data_1_data_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+1797+i*2,"TAG_0", true,(i+0), 52,0);
    }
    tracep->declBit(c+1861,"TAG_0_tag_w_en", false,-1);
    tracep->declBus(c+1862,"TAG_0_tag_w_addr", false,-1, 4,0);
    tracep->declQuad(c+642,"TAG_0_tag_w_data", false,-1, 52,0);
    tracep->declQuad(c+1863,"TAG_0_MPORT_1_data", false,-1, 52,0);
    tracep->declBus(c+1282,"TAG_0_MPORT_1_addr", false,-1, 4,0);
    tracep->declBit(c+1283,"TAG_0_MPORT_1_mask", false,-1);
    tracep->declBit(c+624,"TAG_0_MPORT_1_en", false,-1);
    tracep->declBit(c+1861,"TAG_0_tag_w_en_pipe_0", false,-1);
    tracep->declBus(c+1862,"TAG_0_tag_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+1865+i*2,"TAG_1", true,(i+0), 52,0);
    }
    tracep->declBit(c+1929,"TAG_1_tag_w_en", false,-1);
    tracep->declBus(c+1281,"TAG_1_tag_w_addr", false,-1, 4,0);
    tracep->declQuad(c+644,"TAG_1_tag_w_data", false,-1, 52,0);
    tracep->declQuad(c+1863,"TAG_1_MPORT_1_data", false,-1, 52,0);
    tracep->declBus(c+1282,"TAG_1_MPORT_1_addr", false,-1, 4,0);
    tracep->declBit(c+763,"TAG_1_MPORT_1_mask", false,-1);
    tracep->declBit(c+624,"TAG_1_MPORT_1_en", false,-1);
    tracep->declBit(c+1929,"TAG_1_tag_w_en_pipe_0", false,-1);
    tracep->declBus(c+1281,"TAG_1_tag_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+1930+i*1,"data_valid_0", true,(i+0));
    }
    tracep->declBit(c+1962,"data_valid_0_valid_w_en", false,-1);
    tracep->declBus(c+1963,"data_valid_0_valid_w_addr", false,-1, 4,0);
    tracep->declBit(c+646,"data_valid_0_valid_w_data", false,-1);
    tracep->declBit(c+3588,"data_valid_0_MPORT_2_data", false,-1);
    tracep->declBus(c+1282,"data_valid_0_MPORT_2_addr", false,-1, 4,0);
    tracep->declBit(c+1283,"data_valid_0_MPORT_2_mask", false,-1);
    tracep->declBit(c+624,"data_valid_0_MPORT_2_en", false,-1);
    tracep->declBit(c+1962,"data_valid_0_valid_w_en_pipe_0", false,-1);
    tracep->declBus(c+1963,"data_valid_0_valid_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+1964+i*1,"data_valid_1", true,(i+0));
    }
    tracep->declBit(c+1996,"data_valid_1_valid_w_en", false,-1);
    tracep->declBus(c+1281,"data_valid_1_valid_w_addr", false,-1, 4,0);
    tracep->declBit(c+647,"data_valid_1_valid_w_data", false,-1);
    tracep->declBit(c+3588,"data_valid_1_MPORT_2_data", false,-1);
    tracep->declBus(c+1282,"data_valid_1_MPORT_2_addr", false,-1, 4,0);
    tracep->declBit(c+763,"data_valid_1_MPORT_2_mask", false,-1);
    tracep->declBit(c+624,"data_valid_1_MPORT_2_en", false,-1);
    tracep->declBit(c+1996,"data_valid_1_valid_w_en_pipe_0", false,-1);
    tracep->declBus(c+1281,"data_valid_1_valid_w_addr_pipe_0", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Scanf ");
    tracep->declBit(c+684,"io_in_valid", false,-1);
    tracep->declQuad(c+642,"io_in_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+644,"io_in_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+646,"io_in_bits_meat_valid_0", false,-1);
    tracep->declBit(c+647,"io_in_bits_meat_valid_1", false,-1);
    tracep->declArray(c+648,"io_in_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+664,"io_in_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+680,"io_in_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBus(c+682,"io_in_bits_ctrl_data_index", false,-1, 4,0);
    tracep->declBit(c+685,"io_out_bits_hit", false,-1);
    tracep->declArray(c+686,"io_out_bits_data", false,-1, 511,0);
    tracep->declBus(c+682,"io_out_bits_meta_ctrl_data_index", false,-1, 4,0);
    tracep->declBit(c+702,"io_out_bits_hit_way_0", false,-1);
    tracep->declBit(c+703,"io_out_bits_hit_way_1", false,-1);
    tracep->declQuad(c+642,"io_out_bits_tag_0", false,-1, 52,0);
    tracep->declQuad(c+644,"io_out_bits_tag_1", false,-1, 52,0);
    tracep->declBit(c+702,"hit_way_0_result", false,-1);
    tracep->declBit(c+703,"hit_way_1_result", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ID ");
    tracep->declBit(c+28,"io_in_valid", false,-1);
    tracep->declQuad(c+29,"io_in_bits_PC", false,-1, 63,0);
    tracep->declBus(c+31,"io_in_bits_Inst", false,-1, 31,0);
    tracep->declQuad(c+1,"io_REG1", false,-1, 63,0);
    tracep->declQuad(c+3,"io_REG2", false,-1, 63,0);
    tracep->declBit(c+27,"io_flush", false,-1);
    tracep->declBit(c+32,"io_ex_is_mem", false,-1);
    tracep->declBus(c+33,"io_ex_reg_rfDest", false,-1, 4,0);
    tracep->declBit(c+34,"io_ex_reg_rfWen", false,-1);
    tracep->declBit(c+35,"io_out_ready", false,-1);
    tracep->declBit(c+36,"io_out_valid", false,-1);
    tracep->declBus(c+37,"io_out_bits_ctrl_signal_src1Type", false,-1, 2,0);
    tracep->declBus(c+38,"io_out_bits_ctrl_signal_src2Type", false,-1, 2,0);
    tracep->declBus(c+39,"io_out_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+40,"io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBus(c+41,"io_out_bits_ctrl_signal_rfSrc1", false,-1, 4,0);
    tracep->declBus(c+42,"io_out_bits_ctrl_signal_rfSrc2", false,-1, 4,0);
    tracep->declBit(c+43,"io_out_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+44,"io_out_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declBus(c+45,"io_out_bits_ctrl_signal_rfDest", false,-1, 4,0);
    tracep->declQuad(c+1,"io_out_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+3,"io_out_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+46,"io_out_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declQuad(c+29,"io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+31,"io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declBus(c+41,"rs", false,-1, 4,0);
    tracep->declBus(c+42,"rt", false,-1, 4,0);
    tracep->declBus(c+45,"rd", false,-1, 4,0);
    tracep->declBus(c+1997,"Inst_decode_0", false,-1, 3,0);
    tracep->declBus(c+44,"Inst_decode_2", false,-1, 6,0);
    tracep->declBit(c+1998,"Inst_decode_3", false,-1);
    tracep->declBus(c+1999,"srctype1", false,-1, 1,0);
    tracep->declBit(c+2000,"srctype2", false,-1);
    tracep->declBit(c+2001,"sign", false,-1);
    tracep->declBit(c+2002,"sign_1", false,-1);
    tracep->declBit(c+2001,"sign_2", false,-1);
    tracep->declBit(c+2001,"sign_3", false,-1);
    tracep->declBit(c+2001,"sign_4", false,-1);
    tracep->declBit(c+2003,"stall_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IF ");
    tracep->declBit(c+3583,"clock", false,-1);
    tracep->declBit(c+3584,"reset", false,-1);
    tracep->declBit(c+17,"io_branch_io_is_branch", false,-1);
    tracep->declBit(c+18,"io_branch_io_is_jump", false,-1);
    tracep->declQuad(c+19,"io_branch_io_dnpc", false,-1, 63,0);
    tracep->declBit(c+21,"io_cache_req_addr_req_valid", false,-1);
    tracep->declQuad(c+3585,"io_cache_req_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+22,"io_cache_req_rdata_rep_ready", false,-1);
    tracep->declBit(c+23,"io_cache_req_rdata_rep_valid", false,-1);
    tracep->declQuad(c+24,"io_cache_req_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+22,"io_out_ready", false,-1);
    tracep->declBit(c+23,"io_out_valid", false,-1);
    tracep->declQuad(c+3585,"io_out_bits_PC", false,-1, 63,0);
    tracep->declBus(c+26,"io_out_bits_Inst", false,-1, 31,0);
    tracep->declBit(c+27,"io_flush", false,-1);
    tracep->declQuad(c+2004,"temp", false,-1, 63,0);
    tracep->declBus(c+2006,"inst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MEM ");
    tracep->declBit(c+64,"io_in_ready", false,-1);
    tracep->declBit(c+218,"io_in_valid", false,-1);
    tracep->declBus(c+219,"io_in_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+220,"io_in_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+221,"io_in_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+222,"io_in_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+223,"io_in_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+225,"io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+226,"io_in_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+228,"io_in_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declQuad(c+229,"io_in_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+231,"io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+233,"io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+235,"io_in_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declBit(c+3588,"io_out_ready", false,-1);
    tracep->declBit(c+237,"io_out_valid", false,-1);
    tracep->declBit(c+238,"io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+221,"io_out_bits_ctrl_signal_rfWen", false,-1);
    tracep->declQuad(c+223,"io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+225,"io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+226,"io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBit(c+239,"io_out_bits_ctrl_flow_skip", false,-1);
    tracep->declBus(c+228,"io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+240,"io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+5,"io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declBit(c+241,"io_cache_io_addr_req_valid", false,-1);
    tracep->declQuad(c+242,"io_cache_io_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+241,"io_cache_io_addr_req_bits_ce", false,-1);
    tracep->declBit(c+244,"io_cache_io_addr_req_bits_we", false,-1);
    tracep->declBit(c+245,"io_cache_io_rdata_rep_valid", false,-1);
    tracep->declQuad(c+7,"io_cache_io_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+246,"io_cache_io_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+248,"io_cache_io_wdata_req_bits_wmask", false,-1, 7,0);
    tracep->declBit(c+249,"io_cache_io_wdata_rep", false,-1);
    tracep->declQuad(c+242,"addr_temp", false,-1, 63,0);
    tracep->declBit(c+11,"mem_result_sign", false,-1);
    tracep->declBit(c+12,"mem_result_sign_1", false,-1);
    tracep->declBit(c+13,"mem_result_sign_2", false,-1);
    tracep->declBit(c+14,"mem_result_sign_3", false,-1);
    tracep->declQuad(c+15,"mem_result", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MMEM ");
    tracep->declBus(c+3631,"BUS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+3631,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+3583,"clk", false,-1);
    tracep->declBit(c+3584,"reset", false,-1);
    tracep->declBit(c+272,"ar_valid", false,-1);
    tracep->declBit(c+273,"ar_ready", false,-1);
    tracep->declBus(c+3622,"ar_id", false,-1, 3,0);
    tracep->declBus(c+276,"ar_len", false,-1, 7,0);
    tracep->declBus(c+3623,"ar_size", false,-1, 2,0);
    tracep->declQuad(c+274,"ar_addr", false,-1, 63,0);
    tracep->declBus(c+3624,"ar_prot", false,-1, 2,0);
    tracep->declBus(c+3625,"ar_burst", false,-1, 1,0);
    tracep->declBus(c+3621,"ar_lock", false,-1, 1,0);
    tracep->declBus(c+3626,"ar_cache", false,-1, 3,0);
    tracep->declBit(c+278,"aw_valid", false,-1);
    tracep->declBit(c+279,"aw_ready", false,-1);
    tracep->declBus(c+3622,"aw_id", false,-1, 3,0);
    tracep->declBus(c+276,"aw_len", false,-1, 7,0);
    tracep->declBus(c+3623,"aw_size", false,-1, 2,0);
    tracep->declQuad(c+280,"aw_addr", false,-1, 63,0);
    tracep->declBus(c+3624,"aw_prot", false,-1, 2,0);
    tracep->declBus(c+3625,"aw_burst", false,-1, 1,0);
    tracep->declBus(c+3621,"aw_lock", false,-1, 1,0);
    tracep->declBus(c+3626,"aw_cache", false,-1, 3,0);
    tracep->declBit(c+277,"rd_valid", false,-1);
    tracep->declBit(c+3588,"rd_ready", false,-1);
    tracep->declBus(c+3627,"rd_id", false,-1, 3,0);
    tracep->declQuad(c+9,"rd_data", false,-1, 63,0);
    tracep->declBus(c+3628,"rd_resp", false,-1, 1,0);
    tracep->declBit(c+270,"rd_last", false,-1);
    tracep->declBit(c+282,"wd_valid", false,-1);
    tracep->declBit(c+283,"wd_ready", false,-1);
    tracep->declBus(c+3622,"wd_id", false,-1, 3,0);
    tracep->declQuad(c+284,"wd_data", false,-1, 63,0);
    tracep->declBus(c+286,"wstrb", false,-1, 7,0);
    tracep->declBit(c+287,"wd_last", false,-1);
    tracep->declBit(c+288,"wr_valid", false,-1);
    tracep->declBit(c+289,"wr_ready", false,-1);
    tracep->declBus(c+3629,"wr_id", false,-1, 3,0);
    tracep->declBus(c+3621,"wr_breap", false,-1, 1,0);
    tracep->declBus(c+3621,"idle", false,-1, 1,0);
    tracep->declBus(c+3625,"ready", false,-1, 1,0);
    tracep->declBus(c+3632,"data_transform", false,-1, 1,0);
    tracep->declBus(c+2007,"read_state", false,-1, 1,0);
    tracep->declBus(c+2008,"write_state", false,-1, 1,0);
    tracep->declBus(c+2009,"read_next_state", false,-1, 1,0);
    tracep->declBus(c+2010,"write_next_state", false,-1, 1,0);
    tracep->declQuad(c+9,"rdata", false,-1, 63,0);
    tracep->declQuad(c+2011,"write_addr_buffer", false,-1, 63,0);
    tracep->declQuad(c+2013,"read_addr_buffer", false,-1, 63,0);
    tracep->declBus(c+2015,"read_count", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MMIO ");
    tracep->declBit(c+3583,"clock", false,-1);
    tracep->declBit(c+3584,"reset", false,-1);
    tracep->declBit(c+241,"io_in_addr_req_valid", false,-1);
    tracep->declQuad(c+242,"io_in_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+241,"io_in_addr_req_bits_ce", false,-1);
    tracep->declBit(c+244,"io_in_addr_req_bits_we", false,-1);
    tracep->declBit(c+245,"io_in_rdata_rep_valid", false,-1);
    tracep->declQuad(c+7,"io_in_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+246,"io_in_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+248,"io_in_wdata_req_bits_wmask", false,-1, 7,0);
    tracep->declBit(c+249,"io_in_wdata_rep", false,-1);
    tracep->declBit(c+290,"io_out_raddr_req_ready", false,-1);
    tracep->declBit(c+291,"io_out_raddr_req_valid", false,-1);
    tracep->declQuad(c+292,"io_out_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBus(c+294,"io_out_raddr_req_bits_len", false,-1, 7,0);
    tracep->declBit(c+295,"io_out_waddr_req_ready", false,-1);
    tracep->declBit(c+296,"io_out_waddr_req_valid", false,-1);
    tracep->declQuad(c+297,"io_out_waddr_req_bits_addr", false,-1, 63,0);
    tracep->declBus(c+294,"io_out_waddr_req_bits_len", false,-1, 7,0);
    tracep->declBit(c+3588,"io_out_rdata_rep_ready", false,-1);
    tracep->declBit(c+299,"io_out_rdata_rep_valid", false,-1);
    tracep->declQuad(c+9,"io_out_rdata_rep_bits_data", false,-1, 63,0);
    tracep->declBit(c+270,"io_out_rdata_rep_bits_last", false,-1);
    tracep->declBit(c+300,"io_out_wdata_req_ready", false,-1);
    tracep->declBit(c+301,"io_out_wdata_req_valid", false,-1);
    tracep->declQuad(c+302,"io_out_wdata_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+304,"io_out_wdata_req_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+305,"io_out_wdata_req_bits_last", false,-1);
    tracep->declBit(c+306,"io_out_wb_ready", false,-1);
    tracep->declBit(c+307,"io_out_wb_valid", false,-1);
    tracep->declBus(c+3621,"io_out_wb_bits_breap", false,-1, 1,0);
    tracep->declBit(c+3583,"DCACHE_clock", false,-1);
    tracep->declBit(c+3584,"DCACHE_reset", false,-1);
    tracep->declBit(c+2016,"DCACHE_io_in_addr_req_valid", false,-1);
    tracep->declQuad(c+242,"DCACHE_io_in_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+244,"DCACHE_io_in_addr_req_bits_we", false,-1);
    tracep->declBit(c+2017,"DCACHE_io_in_rdata_rep_ready", false,-1);
    tracep->declBit(c+2018,"DCACHE_io_in_rdata_rep_valid", false,-1);
    tracep->declQuad(c+2019,"DCACHE_io_in_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+246,"DCACHE_io_in_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+248,"DCACHE_io_in_wdata_req_bits_wmask", false,-1, 7,0);
    tracep->declBit(c+2021,"DCACHE_io_in_wdata_rep", false,-1);
    tracep->declBit(c+2022,"DCACHE_io_out_raddr_req_ready", false,-1);
    tracep->declBit(c+2023,"DCACHE_io_out_raddr_req_valid", false,-1);
    tracep->declQuad(c+2024,"DCACHE_io_out_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+2026,"DCACHE_io_out_waddr_req_ready", false,-1);
    tracep->declBit(c+2027,"DCACHE_io_out_waddr_req_valid", false,-1);
    tracep->declQuad(c+2028,"DCACHE_io_out_waddr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+2030,"DCACHE_io_out_rdata_rep_valid", false,-1);
    tracep->declQuad(c+9,"DCACHE_io_out_rdata_rep_bits_data", false,-1, 63,0);
    tracep->declBit(c+270,"DCACHE_io_out_rdata_rep_bits_last", false,-1);
    tracep->declBit(c+2031,"DCACHE_io_out_wdata_req_ready", false,-1);
    tracep->declBit(c+2032,"DCACHE_io_out_wdata_req_valid", false,-1);
    tracep->declQuad(c+2033,"DCACHE_io_out_wdata_req_bits_data", false,-1, 63,0);
    tracep->declBit(c+2035,"DCACHE_io_out_wdata_req_bits_last", false,-1);
    tracep->declBit(c+2036,"DCACHE_io_out_wb_valid", false,-1);
    tracep->declBus(c+3621,"DCACHE_io_out_wb_bits_breap", false,-1, 1,0);
    tracep->declBit(c+3583,"birdge_clock", false,-1);
    tracep->declBit(c+3584,"birdge_reset", false,-1);
    tracep->declBit(c+2037,"birdge_io_in_addr_req_valid", false,-1);
    tracep->declQuad(c+242,"birdge_io_in_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+241,"birdge_io_in_addr_req_bits_ce", false,-1);
    tracep->declBit(c+244,"birdge_io_in_addr_req_bits_we", false,-1);
    tracep->declBit(c+2038,"birdge_io_in_rdata_rep_ready", false,-1);
    tracep->declBit(c+2039,"birdge_io_in_rdata_rep_valid", false,-1);
    tracep->declQuad(c+9,"birdge_io_in_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+2038,"birdge_io_in_wdata_req_valid", false,-1);
    tracep->declQuad(c+246,"birdge_io_in_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+248,"birdge_io_in_wdata_req_bits_wmask", false,-1, 7,0);
    tracep->declBit(c+2040,"birdge_io_in_wdata_rep", false,-1);
    tracep->declBit(c+2041,"birdge_io_out_raddr_req_ready", false,-1);
    tracep->declBit(c+2042,"birdge_io_out_raddr_req_valid", false,-1);
    tracep->declQuad(c+242,"birdge_io_out_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+2043,"birdge_io_out_waddr_req_ready", false,-1);
    tracep->declBit(c+2044,"birdge_io_out_waddr_req_valid", false,-1);
    tracep->declQuad(c+242,"birdge_io_out_waddr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+2038,"birdge_io_out_rdata_rep_ready", false,-1);
    tracep->declBit(c+2039,"birdge_io_out_rdata_rep_valid", false,-1);
    tracep->declQuad(c+9,"birdge_io_out_rdata_rep_bits_data", false,-1, 63,0);
    tracep->declBit(c+270,"birdge_io_out_rdata_rep_bits_last", false,-1);
    tracep->declBit(c+2045,"birdge_io_out_wdata_req_ready", false,-1);
    tracep->declBit(c+2038,"birdge_io_out_wdata_req_valid", false,-1);
    tracep->declQuad(c+246,"birdge_io_out_wdata_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+248,"birdge_io_out_wdata_req_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+2046,"birdge_io_out_wdata_req_bits_last", false,-1);
    tracep->declBit(c+2047,"birdge_io_out_wb_ready", false,-1);
    tracep->declBit(c+2040,"birdge_io_out_wb_valid", false,-1);
    tracep->declBus(c+3621,"birdge_io_out_wb_bits_breap", false,-1, 1,0);
    tracep->pushNamePrefix("DCACHE ");
    tracep->declBit(c+3583,"clock", false,-1);
    tracep->declBit(c+3584,"reset", false,-1);
    tracep->declBit(c+2016,"io_in_addr_req_valid", false,-1);
    tracep->declQuad(c+242,"io_in_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+244,"io_in_addr_req_bits_we", false,-1);
    tracep->declBit(c+2017,"io_in_rdata_rep_ready", false,-1);
    tracep->declBit(c+2018,"io_in_rdata_rep_valid", false,-1);
    tracep->declQuad(c+2019,"io_in_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+246,"io_in_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+248,"io_in_wdata_req_bits_wmask", false,-1, 7,0);
    tracep->declBit(c+2021,"io_in_wdata_rep", false,-1);
    tracep->declBit(c+2022,"io_out_raddr_req_ready", false,-1);
    tracep->declBit(c+2023,"io_out_raddr_req_valid", false,-1);
    tracep->declQuad(c+2024,"io_out_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+2026,"io_out_waddr_req_ready", false,-1);
    tracep->declBit(c+2027,"io_out_waddr_req_valid", false,-1);
    tracep->declQuad(c+2028,"io_out_waddr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+2030,"io_out_rdata_rep_valid", false,-1);
    tracep->declQuad(c+9,"io_out_rdata_rep_bits_data", false,-1, 63,0);
    tracep->declBit(c+270,"io_out_rdata_rep_bits_last", false,-1);
    tracep->declBit(c+2031,"io_out_wdata_req_ready", false,-1);
    tracep->declBit(c+2032,"io_out_wdata_req_valid", false,-1);
    tracep->declQuad(c+2033,"io_out_wdata_req_bits_data", false,-1, 63,0);
    tracep->declBit(c+2035,"io_out_wdata_req_bits_last", false,-1);
    tracep->declBit(c+2036,"io_out_wb_valid", false,-1);
    tracep->declBus(c+3621,"io_out_wb_bits_breap", false,-1, 1,0);
    tracep->declBit(c+3583,"Cache_data_clock", false,-1);
    tracep->declBit(c+2048,"Cache_data_io_in_valid", false,-1);
    tracep->declQuad(c+242,"Cache_data_io_in_addr", false,-1, 63,0);
    tracep->declQuad(c+2049,"Cache_data_io_write_bus_addr", false,-1, 63,0);
    tracep->declBit(c+2051,"Cache_data_io_write_bus_valid", false,-1);
    tracep->declBus(c+2052,"Cache_data_io_write_bus_waymask", false,-1, 1,0);
    tracep->declArray(c+2053,"Cache_data_io_write_bus_wdata", false,-1, 511,0);
    tracep->declBit(c+2048,"Cache_data_io_out_valid", false,-1);
    tracep->declQuad(c+2069,"Cache_data_io_out_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+2071,"Cache_data_io_out_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+2073,"Cache_data_io_out_bits_meat_valid_0", false,-1);
    tracep->declBit(c+2074,"Cache_data_io_out_bits_meat_valid_1", false,-1);
    tracep->declArray(c+2075,"Cache_data_io_out_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+2091,"Cache_data_io_out_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+2107,"Cache_data_io_out_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBus(c+2109,"Cache_data_io_out_bits_ctrl_data_index", false,-1, 4,0);
    tracep->declBus(c+2110,"Cache_data_io_out_bits_ctrl_data_offset", false,-1, 5,0);
    tracep->declBit(c+2111,"Scanf_io_in_valid", false,-1);
    tracep->declQuad(c+2069,"Scanf_io_in_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+2071,"Scanf_io_in_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+2073,"Scanf_io_in_bits_meat_valid_0", false,-1);
    tracep->declBit(c+2074,"Scanf_io_in_bits_meat_valid_1", false,-1);
    tracep->declArray(c+2075,"Scanf_io_in_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+2091,"Scanf_io_in_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+2107,"Scanf_io_in_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBus(c+2109,"Scanf_io_in_bits_ctrl_data_index", false,-1, 4,0);
    tracep->declBit(c+2112,"Scanf_io_out_bits_hit", false,-1);
    tracep->declArray(c+2113,"Scanf_io_out_bits_data", false,-1, 511,0);
    tracep->declBus(c+2109,"Scanf_io_out_bits_meta_ctrl_data_index", false,-1, 4,0);
    tracep->declBit(c+2129,"Scanf_io_out_bits_hit_way_0", false,-1);
    tracep->declBit(c+2130,"Scanf_io_out_bits_hit_way_1", false,-1);
    tracep->declQuad(c+2069,"Scanf_io_out_bits_tag_0", false,-1, 52,0);
    tracep->declQuad(c+2071,"Scanf_io_out_bits_tag_1", false,-1, 52,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+2131+i*1,"lru", true,(i+0));
    }
    tracep->declBit(c+2163,"lru_lru_w_MPORT_en", false,-1);
    tracep->declBus(c+2164,"lru_lru_w_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+2165,"lru_lru_w_MPORT_data", false,-1);
    tracep->declBit(c+3588,"lru_MPORT_data", false,-1);
    tracep->declBus(c+2109,"lru_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+3588,"lru_MPORT_mask", false,-1);
    tracep->declBit(c+2166,"lru_MPORT_en", false,-1);
    tracep->declBit(c+3630,"lru_MPORT_1_data", false,-1);
    tracep->declBus(c+2109,"lru_MPORT_1_addr", false,-1, 4,0);
    tracep->declBit(c+3588,"lru_MPORT_1_mask", false,-1);
    tracep->declBit(c+2167,"lru_MPORT_1_en", false,-1);
    tracep->declBit(c+3630,"lru_MPORT_2_data", false,-1);
    tracep->declBus(c+2109,"lru_MPORT_2_addr", false,-1, 4,0);
    tracep->declBit(c+3588,"lru_MPORT_2_mask", false,-1);
    tracep->declBit(c+2168,"lru_MPORT_2_en", false,-1);
    tracep->declBit(c+3588,"lru_MPORT_3_data", false,-1);
    tracep->declBus(c+2109,"lru_MPORT_3_addr", false,-1, 4,0);
    tracep->declBit(c+3588,"lru_MPORT_3_mask", false,-1);
    tracep->declBit(c+2169,"lru_MPORT_3_en", false,-1);
    tracep->declBit(c+2163,"lru_lru_w_MPORT_en_pipe_0", false,-1);
    tracep->declBus(c+2164,"lru_lru_w_MPORT_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+2170+i*1,"dirt_0", true,(i+0));
    }
    tracep->declBit(c+2202,"dirt_0_dirt_w_en", false,-1);
    tracep->declBus(c+2203,"dirt_0_dirt_w_addr", false,-1, 4,0);
    tracep->declBit(c+2204,"dirt_0_dirt_w_data", false,-1);
    tracep->declBit(c+3588,"dirt_0_MPORT_4_data", false,-1);
    tracep->declBus(c+2109,"dirt_0_MPORT_4_addr", false,-1, 4,0);
    tracep->declBit(c+2205,"dirt_0_MPORT_4_mask", false,-1);
    tracep->declBit(c+2206,"dirt_0_MPORT_4_en", false,-1);
    tracep->declBit(c+2202,"dirt_0_dirt_w_en_pipe_0", false,-1);
    tracep->declBus(c+2203,"dirt_0_dirt_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+2207+i*1,"dirt_1", true,(i+0));
    }
    tracep->declBit(c+2239,"dirt_1_dirt_w_en", false,-1);
    tracep->declBus(c+2240,"dirt_1_dirt_w_addr", false,-1, 4,0);
    tracep->declBit(c+2241,"dirt_1_dirt_w_data", false,-1);
    tracep->declBit(c+3588,"dirt_1_MPORT_4_data", false,-1);
    tracep->declBus(c+2109,"dirt_1_MPORT_4_addr", false,-1, 4,0);
    tracep->declBit(c+2242,"dirt_1_MPORT_4_mask", false,-1);
    tracep->declBit(c+2206,"dirt_1_MPORT_4_en", false,-1);
    tracep->declBit(c+2239,"dirt_1_dirt_w_en_pipe_0", false,-1);
    tracep->declBus(c+2240,"dirt_1_dirt_w_addr_pipe_0", false,-1, 4,0);
    tracep->declBus(c+2243,"state", false,-1, 2,0);
    tracep->declBus(c+2244,"read_state", false,-1, 1,0);
    tracep->declBus(c+2245,"write_state", false,-1, 1,0);
    tracep->declArray(c+2246,"data_line_reg", false,-1, 511,0);
    tracep->declQuad(c+2262,"mem_addr_reg", false,-1, 63,0);
    tracep->declBit(c+2264,"lru_r", false,-1);
    tracep->declBus(c+2265,"count_write", false,-1, 3,0);
    tracep->declQuad(c+2266,"mem_write_addr_reg", false,-1, 63,0);
    tracep->declArray(c+2268,"mem_write_data_reg", false,-1, 511,0);
    tracep->declBit(c+2165,"lru_w", false,-1);
    tracep->declBit(c+2129,"hit_way_0", false,-1);
    tracep->declBit(c+2130,"hit_way_1", false,-1);
    tracep->declQuad(c+2284,"hit_data", false,-1, 63,0);
    tracep->declQuad(c+2286,"mem_data", false,-1, 63,0);
    tracep->declBit(c+2111,"Scanf_io_in_valid_REG", false,-1);
    tracep->declQuad(c+2288,"wmaskextend_Genmask", false,-1, 63,0);
    tracep->declQuad(c+2290,"wmaskextend_lo_lo_lo", false,-1, 63,0);
    tracep->declArray(c+2292,"wmaskextend_lo_lo", false,-1, 127,0);
    tracep->declQuad(c+2296,"wmaskextend_lo_hi_lo", false,-1, 63,0);
    tracep->declArray(c+2298,"wmaskextend_lo", false,-1, 255,0);
    tracep->declQuad(c+2306,"wmaskextend_hi_lo_lo", false,-1, 63,0);
    tracep->declArray(c+2308,"wmaskextend_hi_lo", false,-1, 127,0);
    tracep->declQuad(c+2312,"wmaskextend_hi_hi_lo", false,-1, 63,0);
    tracep->declArray(c+2314,"wmaskextend_hi", false,-1, 255,0);
    tracep->declArray(c+2322,"wmaskextend", false,-1, 511,0);
    tracep->declArray(c+2338,"wdata_extend", false,-1, 511,0);
    tracep->declBus(c+2052,"waymask", false,-1, 1,0);
    tracep->pushNamePrefix("Cache_data ");
    tracep->declBit(c+3583,"clock", false,-1);
    tracep->declBit(c+2048,"io_in_valid", false,-1);
    tracep->declQuad(c+242,"io_in_addr", false,-1, 63,0);
    tracep->declQuad(c+2049,"io_write_bus_addr", false,-1, 63,0);
    tracep->declBit(c+2051,"io_write_bus_valid", false,-1);
    tracep->declBus(c+2052,"io_write_bus_waymask", false,-1, 1,0);
    tracep->declArray(c+2053,"io_write_bus_wdata", false,-1, 511,0);
    tracep->declBit(c+2048,"io_out_valid", false,-1);
    tracep->declQuad(c+2069,"io_out_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+2071,"io_out_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+2073,"io_out_bits_meat_valid_0", false,-1);
    tracep->declBit(c+2074,"io_out_bits_meat_valid_1", false,-1);
    tracep->declArray(c+2075,"io_out_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+2091,"io_out_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+2107,"io_out_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBus(c+2109,"io_out_bits_ctrl_data_index", false,-1, 4,0);
    tracep->declBus(c+2110,"io_out_bits_ctrl_data_offset", false,-1, 5,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declArray(c+2354+i*16,"data_0", true,(i+0), 511,0);
    }
    tracep->declBit(c+2866,"data_0_data_w_en", false,-1);
    tracep->declBus(c+2867,"data_0_data_w_addr", false,-1, 4,0);
    tracep->declArray(c+2075,"data_0_data_w_data", false,-1, 511,0);
    tracep->declArray(c+2053,"data_0_MPORT_data", false,-1, 511,0);
    tracep->declBus(c+2868,"data_0_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+2205,"data_0_MPORT_mask", false,-1);
    tracep->declBit(c+2051,"data_0_MPORT_en", false,-1);
    tracep->declBit(c+2866,"data_0_data_w_en_pipe_0", false,-1);
    tracep->declBus(c+2867,"data_0_data_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declArray(c+2869+i*16,"data_1", true,(i+0), 511,0);
    }
    tracep->declBit(c+3381,"data_1_data_w_en", false,-1);
    tracep->declBus(c+2867,"data_1_data_w_addr", false,-1, 4,0);
    tracep->declArray(c+2091,"data_1_data_w_data", false,-1, 511,0);
    tracep->declArray(c+2053,"data_1_MPORT_data", false,-1, 511,0);
    tracep->declBus(c+2868,"data_1_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+2242,"data_1_MPORT_mask", false,-1);
    tracep->declBit(c+2051,"data_1_MPORT_en", false,-1);
    tracep->declBit(c+3381,"data_1_data_w_en_pipe_0", false,-1);
    tracep->declBus(c+2867,"data_1_data_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+3382+i*2,"TAG_0", true,(i+0), 52,0);
    }
    tracep->declBit(c+3446,"TAG_0_tag_w_en", false,-1);
    tracep->declBus(c+3447,"TAG_0_tag_w_addr", false,-1, 4,0);
    tracep->declQuad(c+2069,"TAG_0_tag_w_data", false,-1, 52,0);
    tracep->declQuad(c+3448,"TAG_0_MPORT_1_data", false,-1, 52,0);
    tracep->declBus(c+2868,"TAG_0_MPORT_1_addr", false,-1, 4,0);
    tracep->declBit(c+2205,"TAG_0_MPORT_1_mask", false,-1);
    tracep->declBit(c+2051,"TAG_0_MPORT_1_en", false,-1);
    tracep->declBit(c+3446,"TAG_0_tag_w_en_pipe_0", false,-1);
    tracep->declBus(c+3447,"TAG_0_tag_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+3450+i*2,"TAG_1", true,(i+0), 52,0);
    }
    tracep->declBit(c+3514,"TAG_1_tag_w_en", false,-1);
    tracep->declBus(c+2867,"TAG_1_tag_w_addr", false,-1, 4,0);
    tracep->declQuad(c+2071,"TAG_1_tag_w_data", false,-1, 52,0);
    tracep->declQuad(c+3448,"TAG_1_MPORT_1_data", false,-1, 52,0);
    tracep->declBus(c+2868,"TAG_1_MPORT_1_addr", false,-1, 4,0);
    tracep->declBit(c+2242,"TAG_1_MPORT_1_mask", false,-1);
    tracep->declBit(c+2051,"TAG_1_MPORT_1_en", false,-1);
    tracep->declBit(c+3514,"TAG_1_tag_w_en_pipe_0", false,-1);
    tracep->declBus(c+2867,"TAG_1_tag_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+3515+i*1,"data_valid_0", true,(i+0));
    }
    tracep->declBit(c+3547,"data_valid_0_valid_w_en", false,-1);
    tracep->declBus(c+2867,"data_valid_0_valid_w_addr", false,-1, 4,0);
    tracep->declBit(c+2073,"data_valid_0_valid_w_data", false,-1);
    tracep->declBit(c+3588,"data_valid_0_MPORT_2_data", false,-1);
    tracep->declBus(c+2868,"data_valid_0_MPORT_2_addr", false,-1, 4,0);
    tracep->declBit(c+2205,"data_valid_0_MPORT_2_mask", false,-1);
    tracep->declBit(c+2051,"data_valid_0_MPORT_2_en", false,-1);
    tracep->declBit(c+3547,"data_valid_0_valid_w_en_pipe_0", false,-1);
    tracep->declBus(c+2867,"data_valid_0_valid_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+3548+i*1,"data_valid_1", true,(i+0));
    }
    tracep->declBit(c+3580,"data_valid_1_valid_w_en", false,-1);
    tracep->declBus(c+2867,"data_valid_1_valid_w_addr", false,-1, 4,0);
    tracep->declBit(c+2074,"data_valid_1_valid_w_data", false,-1);
    tracep->declBit(c+3588,"data_valid_1_MPORT_2_data", false,-1);
    tracep->declBus(c+2868,"data_valid_1_MPORT_2_addr", false,-1, 4,0);
    tracep->declBit(c+2242,"data_valid_1_MPORT_2_mask", false,-1);
    tracep->declBit(c+2051,"data_valid_1_MPORT_2_en", false,-1);
    tracep->declBit(c+3580,"data_valid_1_valid_w_en_pipe_0", false,-1);
    tracep->declBus(c+2867,"data_valid_1_valid_w_addr_pipe_0", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Scanf ");
    tracep->declBit(c+2111,"io_in_valid", false,-1);
    tracep->declQuad(c+2069,"io_in_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+2071,"io_in_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+2073,"io_in_bits_meat_valid_0", false,-1);
    tracep->declBit(c+2074,"io_in_bits_meat_valid_1", false,-1);
    tracep->declArray(c+2075,"io_in_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+2091,"io_in_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+2107,"io_in_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBus(c+2109,"io_in_bits_ctrl_data_index", false,-1, 4,0);
    tracep->declBit(c+2112,"io_out_bits_hit", false,-1);
    tracep->declArray(c+2113,"io_out_bits_data", false,-1, 511,0);
    tracep->declBus(c+2109,"io_out_bits_meta_ctrl_data_index", false,-1, 4,0);
    tracep->declBit(c+2129,"io_out_bits_hit_way_0", false,-1);
    tracep->declBit(c+2130,"io_out_bits_hit_way_1", false,-1);
    tracep->declQuad(c+2069,"io_out_bits_tag_0", false,-1, 52,0);
    tracep->declQuad(c+2071,"io_out_bits_tag_1", false,-1, 52,0);
    tracep->declBit(c+2129,"hit_way_0_result", false,-1);
    tracep->declBit(c+2130,"hit_way_1_result", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("birdge ");
    tracep->declBit(c+3583,"clock", false,-1);
    tracep->declBit(c+3584,"reset", false,-1);
    tracep->declBit(c+2037,"io_in_addr_req_valid", false,-1);
    tracep->declQuad(c+242,"io_in_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+241,"io_in_addr_req_bits_ce", false,-1);
    tracep->declBit(c+244,"io_in_addr_req_bits_we", false,-1);
    tracep->declBit(c+2038,"io_in_rdata_rep_ready", false,-1);
    tracep->declBit(c+2039,"io_in_rdata_rep_valid", false,-1);
    tracep->declQuad(c+9,"io_in_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+2038,"io_in_wdata_req_valid", false,-1);
    tracep->declQuad(c+246,"io_in_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+248,"io_in_wdata_req_bits_wmask", false,-1, 7,0);
    tracep->declBit(c+2040,"io_in_wdata_rep", false,-1);
    tracep->declBit(c+2041,"io_out_raddr_req_ready", false,-1);
    tracep->declBit(c+2042,"io_out_raddr_req_valid", false,-1);
    tracep->declQuad(c+242,"io_out_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+2043,"io_out_waddr_req_ready", false,-1);
    tracep->declBit(c+2044,"io_out_waddr_req_valid", false,-1);
    tracep->declQuad(c+242,"io_out_waddr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+2038,"io_out_rdata_rep_ready", false,-1);
    tracep->declBit(c+2039,"io_out_rdata_rep_valid", false,-1);
    tracep->declQuad(c+9,"io_out_rdata_rep_bits_data", false,-1, 63,0);
    tracep->declBit(c+270,"io_out_rdata_rep_bits_last", false,-1);
    tracep->declBit(c+2045,"io_out_wdata_req_ready", false,-1);
    tracep->declBit(c+2038,"io_out_wdata_req_valid", false,-1);
    tracep->declQuad(c+246,"io_out_wdata_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+248,"io_out_wdata_req_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+2046,"io_out_wdata_req_bits_last", false,-1);
    tracep->declBit(c+2047,"io_out_wb_ready", false,-1);
    tracep->declBit(c+2040,"io_out_wb_valid", false,-1);
    tracep->declBus(c+3621,"io_out_wb_bits_breap", false,-1, 1,0);
    tracep->declBus(c+3581,"read_state", false,-1, 1,0);
    tracep->declBus(c+3582,"write_state", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("WB ");
    tracep->declBit(c+250,"io_in_valid", false,-1);
    tracep->declBit(c+251,"io_in_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+252,"io_in_bits_ctrl_signal_rfWen", false,-1);
    tracep->declQuad(c+253,"io_in_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+3587,"io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+255,"io_in_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBit(c+257,"io_in_bits_ctrl_flow_skip", false,-1);
    tracep->declBus(c+216,"io_in_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declQuad(c+258,"io_in_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declBit(c+3588,"io_out_ready", false,-1);
    tracep->declBit(c+250,"io_out_valid", false,-1);
    tracep->declBit(c+260,"io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declQuad(c+253,"io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+3587,"io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+255,"io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBit(c+257,"io_out_bits_ctrl_flow_skip", false,-1);
    tracep->declBus(c+216,"io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+217,"io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+258,"io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("bypass ");
    tracep->declBus(c+33,"io_EX_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+34,"io_EX_rf_rfWen", false,-1);
    tracep->declQuad(c+66,"io_EX_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+228,"io_MEM_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+240,"io_MEM_rf_rfWen", false,-1);
    tracep->declQuad(c+5,"io_MEM_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+216,"io_WB_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+217,"io_WB_rf_rfWen", false,-1);
    tracep->declQuad(c+258,"io_WB_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+261,"io_Reg1", false,-1, 63,0);
    tracep->declBus(c+41,"io_reg_index1", false,-1, 4,0);
    tracep->declQuad(c+263,"io_Reg2", false,-1, 63,0);
    tracep->declBus(c+42,"io_reg_index2", false,-1, 4,0);
    tracep->declQuad(c+1,"io_Bypass_REG1", false,-1, 63,0);
    tracep->declQuad(c+3,"io_Bypass_REG2", false,-1, 63,0);
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
    VlWide<3>/*95:0*/ __Vtemp_h052dcc23__0;
    VlWide<3>/*95:0*/ __Vtemp_h0fbea1b2__0;
    VlWide<3>/*95:0*/ __Vtemp_h8004274a__0;
    VlWide<3>/*95:0*/ __Vtemp_h29cbf8c2__0;
    VlWide<5>/*159:0*/ __Vtemp_h559cd7fe__0;
    VlWide<16>/*511:0*/ __Vtemp_h6ff33a25__0;
    VlWide<16>/*511:0*/ __Vtemp_he7310ca3__0;
    VlWide<16>/*511:0*/ __Vtemp_hc34456c3__0;
    // Body
    bufp->fullQData(oldp+1,((((IData)(vlSelf->CoreTop__DOT__ID_io_ex_reg_rfWen) 
                              & ((IData)(vlSelf->__VdfgTmp_ha116befc__0) 
                                 & (0U != (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest))))
                              ? vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfData
                              : (((IData)(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfWen) 
                                  & (((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest) 
                                      == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                   >> 0xfU))) 
                                     & (0U != (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest))))
                                  ? vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfData
                                  : (((IData)(vlSelf->CoreTop__DOT__rf_MPORT_en) 
                                      & (((IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest) 
                                          == (0x1fU 
                                              & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                 >> 0xfU))) 
                                         & (0U != (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest))))
                                      ? vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfData
                                      : ((0U == (0x1fU 
                                                 & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                    >> 0xfU)))
                                          ? 0ULL : 
                                         vlSelf->CoreTop__DOT__rf
                                         [(0x1fU & 
                                           (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                            >> 0xfU))]))))),64);
    bufp->fullQData(oldp+3,((((IData)(vlSelf->CoreTop__DOT__ID_io_ex_reg_rfWen) 
                              & ((IData)(vlSelf->__VdfgTmp_ha248cb35__0) 
                                 & (0U != (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest))))
                              ? vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfData
                              : (((IData)(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfWen) 
                                  & (((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest) 
                                      == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                   >> 0x14U))) 
                                     & (0U != (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest))))
                                  ? vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfData
                                  : (((IData)(vlSelf->CoreTop__DOT__rf_MPORT_en) 
                                      & (((IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest) 
                                          == (0x1fU 
                                              & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                 >> 0x14U))) 
                                         & (0U != (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest))))
                                      ? vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfData
                                      : ((0U == (0x1fU 
                                                 & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                    >> 0x14U)))
                                          ? 0ULL : 
                                         vlSelf->CoreTop__DOT__rf
                                         [(0x1fU & 
                                           (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                            >> 0x14U))]))))),64);
    bufp->fullQData(oldp+5,(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfData),64);
    bufp->fullQData(oldp+7,(vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata),64);
    bufp->fullQData(oldp+9,(vlSelf->CoreTop__DOT__MMEM__DOT__rdata),64);
    bufp->fullBit(oldp+11,((1U & (IData)((vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata 
                                          >> 0x3fU)))));
    bufp->fullBit(oldp+12,((1U & (IData)((vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata 
                                          >> 0x1fU)))));
    bufp->fullBit(oldp+13,((1U & ((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_27) 
                                  >> 7U))));
    bufp->fullBit(oldp+14,((1U & ((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_44) 
                                  >> 0xfU))));
    bufp->fullQData(oldp+15,(((0x45U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                               ? vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata
                               : ((0x47U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                   ? ((1U & (IData)(
                                                    (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                     >> 2U)))
                                       ? (((QData)((IData)(
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata 
                                                                        >> 0x3fU)))
                                                             ? 0xffffffffU
                                                             : 0U))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            (vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata 
                                                             >> 0x20U))))
                                       : (((QData)((IData)(
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata 
                                                                        >> 0x1fU)))
                                                             ? 0xffffffffU
                                                             : 0U))) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata))))
                                   : ((0x11U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                       ? ((1U & (IData)(
                                                        (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                         >> 2U)))
                                           ? (vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata 
                                              >> 0x20U)
                                           : (QData)((IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata)))
                                       : ((0x6fU == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                           ? (QData)((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_27))
                                           : ((0xeU 
                                               == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                               ? ((
                                                   ((0x80U 
                                                     & (IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_27))
                                                     ? 0xffffffffffffffULL
                                                     : 0ULL) 
                                                   << 8U) 
                                                  | (QData)((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_27)))
                                               : ((3U 
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
    bufp->fullBit(oldp+17,(vlSelf->CoreTop__DOT__IF_io_branch_io_is_branch));
    bufp->fullBit(oldp+18,(vlSelf->CoreTop__DOT__IF_io_branch_io_is_jump));
    bufp->fullQData(oldp+19,(vlSelf->CoreTop__DOT__IF_io_branch_io_dnpc),64);
    bufp->fullBit(oldp+21,(vlSelf->CoreTop__DOT__IF_io_cache_req_addr_req_valid));
    bufp->fullBit(oldp+22,((1U & (~ (IData)(vlSelf->CoreTop__DOT__full)))));
    bufp->fullBit(oldp+23,(vlSelf->CoreTop__DOT__IF_io_cache_req_rdata_rep_valid));
    bufp->fullQData(oldp+24,(vlSelf->CoreTop__DOT__IF_io_cache_req_rdata_rep_bits_rdata),64);
    bufp->fullIData(oldp+26,(vlSelf->CoreTop__DOT__IF_io_out_bits_Inst),32);
    bufp->fullBit(oldp+27,(vlSelf->CoreTop__DOT__IF_io_flush));
    bufp->fullBit(oldp+28,((1U & (~ (IData)(vlSelf->CoreTop__DOT__empty)))));
    bufp->fullQData(oldp+29,(((0x1fU == (0x1fU & (IData)(vlSelf->CoreTop__DOT__tail)))
                               ? vlSelf->CoreTop__DOT__buffer_31_PC
                               : ((0x1eU == (0x1fU 
                                             & (IData)(vlSelf->CoreTop__DOT__tail)))
                                   ? vlSelf->CoreTop__DOT__buffer_30_PC
                                   : ((0x1dU == (0x1fU 
                                                 & (IData)(vlSelf->CoreTop__DOT__tail)))
                                       ? vlSelf->CoreTop__DOT__buffer_29_PC
                                       : ((0x1cU == 
                                           (0x1fU & (IData)(vlSelf->CoreTop__DOT__tail)))
                                           ? vlSelf->CoreTop__DOT__buffer_28_PC
                                           : ((0x1bU 
                                               == (0x1fU 
                                                   & (IData)(vlSelf->CoreTop__DOT__tail)))
                                               ? vlSelf->CoreTop__DOT__buffer_27_PC
                                               : vlSelf->CoreTop__DOT___GEN_190)))))),64);
    bufp->fullIData(oldp+31,(vlSelf->CoreTop__DOT__ID_io_in_bits_Inst),32);
    bufp->fullBit(oldp+32,(((IData)(vlSelf->CoreTop__DOT__valid) 
                            & ((4U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType)) 
                               & ((((0xeU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                                    | (0x6fU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) 
                                   | ((0x45U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                                      | ((3U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                                         | (4U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))))) 
                                  | ((0x47U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                                     | (0x11U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))))))));
    bufp->fullCData(oldp+33,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest),5);
    bufp->fullBit(oldp+34,(vlSelf->CoreTop__DOT__ID_io_ex_reg_rfWen));
    bufp->fullBit(oldp+35,((1U & ((~ ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_valid) 
                                        | (IData)(vlSelf->CoreTop__DOT__EX__DOT__div_io_in_valid)) 
                                       & (IData)(vlSelf->CoreTop__DOT__valid)) 
                                      | (IData)(vlSelf->CoreTop__DOT__EX__DOT___io_out_valid_T_11))) 
                                  & (~ (IData)(vlSelf->CoreTop__DOT__MEM__DOT___io_out_valid_T_6))))));
    bufp->fullBit(oldp+36,((1U & ((~ (((IData)(vlSelf->CoreTop__DOT__valid) 
                                       & ((4U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType)) 
                                          & ((((0xeU 
                                                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                                               | (0x6fU 
                                                  == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) 
                                              | ((0x45U 
                                                  == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                                                 | ((3U 
                                                     == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                                                    | (4U 
                                                       == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))))) 
                                             | ((0x47U 
                                                 == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                                                | (0x11U 
                                                   == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)))))) 
                                      & ((IData)(vlSelf->CoreTop__DOT__ID_io_ex_reg_rfWen) 
                                         & ((IData)(vlSelf->__VdfgTmp_ha116befc__0) 
                                            | (IData)(vlSelf->__VdfgTmp_ha248cb35__0))))) 
                                  & (~ (IData)(vlSelf->CoreTop__DOT__empty))))));
    bufp->fullCData(oldp+37,((((7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                ? 2U : 0U) | ((3U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                               ? 2U
                                               : 0U))),3);
    bufp->fullCData(oldp+38,(((8U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)) 
                              | ((7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)) 
                                 | (3U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))))),3);
    bufp->fullCData(oldp+39,(((0x13U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                               ? 0U : ((0x1013U == 
                                        (0xfc00707fU 
                                         & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                        ? 1U : ((0x6013U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                 ? 0U
                                                 : 
                                                ((0x3003U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                  ? 4U
                                                  : 
                                                 ((0x2003U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                   ? 4U
                                                   : 
                                                  ((0x3013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                    ? 5U
                                                    : 
                                                   ((0x1bU 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                     ? 0U
                                                     : 
                                                    ((0x40005013U 
                                                      == 
                                                      (0xfc00707fU 
                                                       & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                      ? 1U
                                                      : 
                                                     ((0x4003U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                       ? 4U
                                                       : 
                                                      ((3U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                        ? 4U
                                                        : 
                                                       ((0x4013U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                         ? 0U
                                                         : 
                                                        ((0x7013U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                          ? 0U
                                                          : 
                                                         ((0x5013U 
                                                           == 
                                                           (0xfc00707fU 
                                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                           ? 1U
                                                           : 
                                                          ((0x1003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                            ? 4U
                                                            : 
                                                           ((0x5003U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                             ? 4U
                                                             : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_239))))))))))))))))),3);
    bufp->fullBit(oldp+40,((1U & (~ ((0U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_2)) 
                                     | ((IData)(vlSelf->CoreTop__DOT__empty) 
                                        | (IData)(vlSelf->CoreTop__DOT__IF_io_flush)))))));
    bufp->fullCData(oldp+41,((0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+42,((0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                       >> 0x14U))),5);
    bufp->fullBit(oldp+43,(((~ (IData)(vlSelf->CoreTop__DOT__empty)) 
                            & (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_3))));
    bufp->fullCData(oldp+44,(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_2),7);
    bufp->fullCData(oldp+45,((0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                       >> 7U))),5);
    bufp->fullQData(oldp+46,(((((((8U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                   ? ((((vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                         >> 0x1fU) ? 0xfffffffffffffULL
                                         : 0ULL) << 0xcU) 
                                      | (QData)((IData)(
                                                        (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                         >> 0x14U))))
                                   : 0ULL) | ((7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                               ? ((
                                                   ((0x80000U 
                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)
                                                     ? 0xfffffffffffULL
                                                     : 0ULL) 
                                                   << 0x14U) 
                                                  | (QData)((IData)(
                                                                    ((0xff000U 
                                                                      & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst) 
                                                                     | ((0x800U 
                                                                         & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                                            >> 9U)) 
                                                                        | (0x7feU 
                                                                           & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                                              >> 0x14U)))))))
                                               : 0ULL)) 
                                | ((3U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                    ? (((QData)((IData)(
                                                        ((vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                          >> 0x1fU)
                                                          ? 0xffffffffU
                                                          : 0U))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    (0xfffff000U 
                                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))))
                                    : 0ULL)) | ((9U 
                                                 == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                                 ? 
                                                ((((vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                    >> 0x1fU)
                                                    ? 0xfffffffffffffULL
                                                    : 0ULL) 
                                                  << 0xcU) 
                                                 | (QData)((IData)(
                                                                   ((0xfe0U 
                                                                     & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                                        >> 0x14U)) 
                                                                    | (0x1fU 
                                                                       & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                                          >> 7U))))))
                                                 : 0ULL)) 
                              | ((0xbU == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                  ? ((((vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                        >> 0x1fU) ? 0x7ffffffffffffULL
                                        : 0ULL) << 0xdU) 
                                     | (QData)((IData)(
                                                       ((0x1000U 
                                                         & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                            >> 0x13U)) 
                                                        | ((0x800U 
                                                            & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                               << 4U)) 
                                                           | ((0x7e0U 
                                                               & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                                  >> 0x14U)) 
                                                              | (0x1eU 
                                                                 & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                                    >> 7U))))))))
                                  : 0ULL))),64);
    bufp->fullBit(oldp+48,(vlSelf->CoreTop__DOT__valid));
    bufp->fullCData(oldp+49,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src1Type),3);
    bufp->fullCData(oldp+50,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src2Type),3);
    bufp->fullCData(oldp+51,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType),3);
    bufp->fullBit(oldp+52,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_inst_valid));
    bufp->fullBit(oldp+53,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfWen));
    bufp->fullCData(oldp+54,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype),7);
    bufp->fullQData(oldp+55,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_src1),64);
    bufp->fullQData(oldp+57,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_src2),64);
    bufp->fullQData(oldp+59,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm),64);
    bufp->fullQData(oldp+61,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC),64);
    bufp->fullIData(oldp+63,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_inst),32);
    bufp->fullBit(oldp+64,((1U & (~ (IData)(vlSelf->CoreTop__DOT__MEM__DOT___io_out_valid_T_6)))));
    bufp->fullBit(oldp+65,(((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_valid)) 
                            & ((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__div_io_in_valid)) 
                               & ((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT___io_out_valid_T_11)) 
                                  & (IData)(vlSelf->CoreTop__DOT__valid))))));
    bufp->fullQData(oldp+66,(vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfData),64);
    bufp->fullQData(oldp+68,(vlSelf->CoreTop__DOT__EX__DOT__src1),64);
    bufp->fullQData(oldp+70,(vlSelf->CoreTop__DOT__EX__DOT__src2),64);
    bufp->fullBit(oldp+72,(((0x42U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                            & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_inst_valid))));
    bufp->fullBit(oldp+73,((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state))));
    bufp->fullBit(oldp+74,(vlSelf->CoreTop__DOT__DIP_io_is_break_REG_1));
    bufp->fullQData(oldp+75,(vlSelf->CoreTop__DOT__rf
                             [0U]),64);
    bufp->fullQData(oldp+77,(vlSelf->CoreTop__DOT__rf
                             [1U]),64);
    bufp->fullQData(oldp+79,(vlSelf->CoreTop__DOT__rf
                             [2U]),64);
    bufp->fullQData(oldp+81,(vlSelf->CoreTop__DOT__rf
                             [3U]),64);
    bufp->fullQData(oldp+83,(vlSelf->CoreTop__DOT__rf
                             [4U]),64);
    bufp->fullQData(oldp+85,(vlSelf->CoreTop__DOT__rf
                             [5U]),64);
    bufp->fullQData(oldp+87,(vlSelf->CoreTop__DOT__rf
                             [6U]),64);
    bufp->fullQData(oldp+89,(vlSelf->CoreTop__DOT__rf
                             [7U]),64);
    bufp->fullQData(oldp+91,(vlSelf->CoreTop__DOT__rf
                             [8U]),64);
    bufp->fullQData(oldp+93,(vlSelf->CoreTop__DOT__rf
                             [9U]),64);
    bufp->fullQData(oldp+95,(vlSelf->CoreTop__DOT__rf
                             [0xaU]),64);
    bufp->fullQData(oldp+97,(vlSelf->CoreTop__DOT__rf
                             [0xbU]),64);
    bufp->fullQData(oldp+99,(vlSelf->CoreTop__DOT__rf
                             [0xcU]),64);
    bufp->fullQData(oldp+101,(vlSelf->CoreTop__DOT__rf
                              [0xdU]),64);
    bufp->fullQData(oldp+103,(vlSelf->CoreTop__DOT__rf
                              [0xeU]),64);
    bufp->fullQData(oldp+105,(vlSelf->CoreTop__DOT__rf
                              [0xfU]),64);
    bufp->fullQData(oldp+107,(vlSelf->CoreTop__DOT__rf
                              [0x10U]),64);
    bufp->fullQData(oldp+109,(vlSelf->CoreTop__DOT__rf
                              [0x11U]),64);
    bufp->fullQData(oldp+111,(vlSelf->CoreTop__DOT__rf
                              [0x12U]),64);
    bufp->fullQData(oldp+113,(vlSelf->CoreTop__DOT__rf
                              [0x13U]),64);
    bufp->fullQData(oldp+115,(vlSelf->CoreTop__DOT__rf
                              [0x14U]),64);
    bufp->fullQData(oldp+117,(vlSelf->CoreTop__DOT__rf
                              [0x15U]),64);
    bufp->fullQData(oldp+119,(vlSelf->CoreTop__DOT__rf
                              [0x16U]),64);
    bufp->fullQData(oldp+121,(vlSelf->CoreTop__DOT__rf
                              [0x17U]),64);
    bufp->fullQData(oldp+123,(vlSelf->CoreTop__DOT__rf
                              [0x18U]),64);
    bufp->fullQData(oldp+125,(vlSelf->CoreTop__DOT__rf
                              [0x19U]),64);
    bufp->fullQData(oldp+127,(vlSelf->CoreTop__DOT__rf
                              [0x1aU]),64);
    bufp->fullQData(oldp+129,(vlSelf->CoreTop__DOT__rf
                              [0x1bU]),64);
    bufp->fullQData(oldp+131,(vlSelf->CoreTop__DOT__rf
                              [0x1cU]),64);
    bufp->fullQData(oldp+133,(vlSelf->CoreTop__DOT__rf
                              [0x1dU]),64);
    bufp->fullQData(oldp+135,(vlSelf->CoreTop__DOT__rf
                              [0x1eU]),64);
    bufp->fullQData(oldp+137,(vlSelf->CoreTop__DOT__rf
                              [0x1fU]),64);
    bufp->fullIData(oldp+139,(vlSelf->CoreTop__DOT__DIP_io_inst_REG),32);
    bufp->fullQData(oldp+140,(vlSelf->CoreTop__DOT__DIP_io_pc_REG),64);
    bufp->fullBit(oldp+142,(vlSelf->CoreTop__DOT__DIP_io_inst_valid_REG));
    bufp->fullQData(oldp+143,(vlSelf->CoreTop__DOT__DIP_io_dnpc_REG),64);
    bufp->fullBit(oldp+145,(vlSelf->CoreTop__DOT__DIP_io_is_skip_REG));
    bufp->fullQData(oldp+146,(vlSelf->CoreTop__DOT__rf[0]),64);
    bufp->fullQData(oldp+148,(vlSelf->CoreTop__DOT__rf[1]),64);
    bufp->fullQData(oldp+150,(vlSelf->CoreTop__DOT__rf[2]),64);
    bufp->fullQData(oldp+152,(vlSelf->CoreTop__DOT__rf[3]),64);
    bufp->fullQData(oldp+154,(vlSelf->CoreTop__DOT__rf[4]),64);
    bufp->fullQData(oldp+156,(vlSelf->CoreTop__DOT__rf[5]),64);
    bufp->fullQData(oldp+158,(vlSelf->CoreTop__DOT__rf[6]),64);
    bufp->fullQData(oldp+160,(vlSelf->CoreTop__DOT__rf[7]),64);
    bufp->fullQData(oldp+162,(vlSelf->CoreTop__DOT__rf[8]),64);
    bufp->fullQData(oldp+164,(vlSelf->CoreTop__DOT__rf[9]),64);
    bufp->fullQData(oldp+166,(vlSelf->CoreTop__DOT__rf[10]),64);
    bufp->fullQData(oldp+168,(vlSelf->CoreTop__DOT__rf[11]),64);
    bufp->fullQData(oldp+170,(vlSelf->CoreTop__DOT__rf[12]),64);
    bufp->fullQData(oldp+172,(vlSelf->CoreTop__DOT__rf[13]),64);
    bufp->fullQData(oldp+174,(vlSelf->CoreTop__DOT__rf[14]),64);
    bufp->fullQData(oldp+176,(vlSelf->CoreTop__DOT__rf[15]),64);
    bufp->fullQData(oldp+178,(vlSelf->CoreTop__DOT__rf[16]),64);
    bufp->fullQData(oldp+180,(vlSelf->CoreTop__DOT__rf[17]),64);
    bufp->fullQData(oldp+182,(vlSelf->CoreTop__DOT__rf[18]),64);
    bufp->fullQData(oldp+184,(vlSelf->CoreTop__DOT__rf[19]),64);
    bufp->fullQData(oldp+186,(vlSelf->CoreTop__DOT__rf[20]),64);
    bufp->fullQData(oldp+188,(vlSelf->CoreTop__DOT__rf[21]),64);
    bufp->fullQData(oldp+190,(vlSelf->CoreTop__DOT__rf[22]),64);
    bufp->fullQData(oldp+192,(vlSelf->CoreTop__DOT__rf[23]),64);
    bufp->fullQData(oldp+194,(vlSelf->CoreTop__DOT__rf[24]),64);
    bufp->fullQData(oldp+196,(vlSelf->CoreTop__DOT__rf[25]),64);
    bufp->fullQData(oldp+198,(vlSelf->CoreTop__DOT__rf[26]),64);
    bufp->fullQData(oldp+200,(vlSelf->CoreTop__DOT__rf[27]),64);
    bufp->fullQData(oldp+202,(vlSelf->CoreTop__DOT__rf[28]),64);
    bufp->fullQData(oldp+204,(vlSelf->CoreTop__DOT__rf[29]),64);
    bufp->fullQData(oldp+206,(vlSelf->CoreTop__DOT__rf[30]),64);
    bufp->fullQData(oldp+208,(vlSelf->CoreTop__DOT__rf[31]),64);
    bufp->fullQData(oldp+210,(vlSelf->CoreTop__DOT__rf
                              [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                         >> 0xfU))]),64);
    bufp->fullQData(oldp+212,(vlSelf->CoreTop__DOT__rf
                              [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                         >> 0x14U))]),64);
    bufp->fullQData(oldp+214,(((0U == (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest))
                                ? 0ULL : vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfData)),64);
    bufp->fullCData(oldp+216,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest),5);
    bufp->fullBit(oldp+217,(vlSelf->CoreTop__DOT__rf_MPORT_en));
    bufp->fullBit(oldp+218,(vlSelf->CoreTop__DOT__valid_1));
    bufp->fullCData(oldp+219,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_fuType),3);
    bufp->fullBit(oldp+220,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_inst_valid));
    bufp->fullBit(oldp+221,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_rfWen));
    bufp->fullCData(oldp+222,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype),7);
    bufp->fullQData(oldp+223,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_PC),64);
    bufp->fullIData(oldp+225,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_inst),32);
    bufp->fullQData(oldp+226,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_Dnpc),64);
    bufp->fullCData(oldp+228,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest),5);
    bufp->fullQData(oldp+229,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfData),64);
    bufp->fullQData(oldp+231,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src1),64);
    bufp->fullQData(oldp+233,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2),64);
    bufp->fullQData(oldp+235,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_Imm),64);
    bufp->fullBit(oldp+237,(vlSelf->CoreTop__DOT__MEM_io_out_valid));
    bufp->fullBit(oldp+238,(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_signal_inst_valid));
    bufp->fullBit(oldp+239,(((0xa0000048ULL == vlSelf->CoreTop__DOT__MEM__DOT__addr_temp) 
                             | ((0xa00003f8ULL == vlSelf->CoreTop__DOT__MEM__DOT__addr_temp) 
                                | ((0xa0000000ULL <= vlSelf->CoreTop__DOT__MEM__DOT__addr_temp) 
                                   & (0xa1200000ULL 
                                      >= vlSelf->CoreTop__DOT__MEM__DOT__addr_temp))))));
    bufp->fullBit(oldp+240,(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfWen));
    bufp->fullBit(oldp+241,(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_addr_req_bits_ce));
    bufp->fullQData(oldp+242,(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp),64);
    bufp->fullBit(oldp+244,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_bits_we));
    bufp->fullBit(oldp+245,(((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)
                              ? (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_valid)
                              : ((~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_bits_we)) 
                                 & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_bits_rdata_T_1) 
                                    | (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_valid_T_4))))));
    bufp->fullQData(oldp+246,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata),64);
    bufp->fullCData(oldp+248,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wmask),8);
    bufp->fullBit(oldp+249,(((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)
                              ? (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_out_wb_valid)
                              : ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___Cache_data_io_write_bus_valid_T_3) 
                                 | ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_valid_T_4) 
                                    & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_bits_we))))));
    bufp->fullBit(oldp+250,(vlSelf->CoreTop__DOT__valid_2));
    bufp->fullBit(oldp+251,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_inst_valid));
    bufp->fullBit(oldp+252,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_rfWen));
    bufp->fullQData(oldp+253,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_PC),64);
    bufp->fullQData(oldp+255,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_Dnpc),64);
    bufp->fullBit(oldp+257,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_skip));
    bufp->fullQData(oldp+258,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfData),64);
    bufp->fullBit(oldp+260,(((IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_inst_valid) 
                             & (IData)(vlSelf->CoreTop__DOT__valid_2))));
    bufp->fullQData(oldp+261,(((0U == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                >> 0xfU)))
                                ? 0ULL : vlSelf->CoreTop__DOT__rf
                               [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                          >> 0xfU))])),64);
    bufp->fullQData(oldp+263,(((0U == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                >> 0x14U)))
                                ? 0ULL : vlSelf->CoreTop__DOT__rf
                               [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                          >> 0x14U))])),64);
    bufp->fullBit(oldp+265,(((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)) 
                             & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)
                                 ? (0U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state))
                                 : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state) 
                                    & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r) 
                                       & (0U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state))))))));
    bufp->fullBit(oldp+266,((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state))));
    bufp->fullQData(oldp+267,(vlSelf->CoreTop__DOT__ICACHE_io_out_raddr_req_bits_addr),64);
    bufp->fullBit(oldp+269,(vlSelf->CoreTop__DOT__ICACHE_io_out_rdata_rep_valid));
    bufp->fullBit(oldp+270,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_rdata_rep_bits_last));
    bufp->fullBit(oldp+271,(((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)) 
                             & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)
                                 ? (1U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_state))
                                 : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state) 
                                    & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r) 
                                       & (1U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_state))))))));
    bufp->fullBit(oldp+272,(((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)
                              ? (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_valid)
                              : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)
                                  ? (1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state))
                                  : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                                      ? ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)
                                          ? (1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state))
                                          : (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_valid))
                                      : (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_valid))))));
    bufp->fullBit(oldp+273,((0U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state))));
    bufp->fullQData(oldp+274,(((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)
                                ? vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_bits_addr
                                : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)
                                    ? vlSelf->CoreTop__DOT__ICACHE_io_out_raddr_req_bits_addr
                                    : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                                        ? ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)
                                            ? vlSelf->CoreTop__DOT__ICACHE_io_out_raddr_req_bits_addr
                                            : vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_bits_addr)
                                        : vlSelf->CoreTop__DOT__ICACHE_io_out_raddr_req_bits_addr)))),64);
    bufp->fullCData(oldp+276,(((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)
                                ? ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)
                                    ? 0U : 7U) : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)
                                                   ? 7U
                                                   : 
                                                  ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                                                    ? 
                                                   ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)
                                                     ? 7U
                                                     : 
                                                    ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)
                                                      ? 0U
                                                      : 7U))
                                                    : 7U)))),8);
    bufp->fullBit(oldp+277,((2U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state))));
    bufp->fullBit(oldp+278,(((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)
                              ? (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_valid)
                              : ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)) 
                                 & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                                     ? ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)) 
                                        & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_valid))
                                     : (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_valid))))));
    bufp->fullBit(oldp+279,((0U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_state))));
    bufp->fullQData(oldp+280,(((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)
                                ? vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_bits_addr
                                : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)
                                    ? 0ULL : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                                               ? ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)
                                                   ? 0ULL
                                                   : vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_bits_addr)
                                               : 0ULL)))),64);
    bufp->fullBit(oldp+282,(((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)
                              ? (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_valid)
                              : ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)) 
                                 & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                                     ? ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)) 
                                        & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_valid))
                                     : (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_valid))))));
    bufp->fullBit(oldp+283,(vlSelf->CoreTop__DOT__MMEM_wd_ready));
    bufp->fullQData(oldp+284,(((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)
                                ? vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_data
                                : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)
                                    ? 0ULL : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                                               ? ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)
                                                   ? 0ULL
                                                   : vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_data)
                                               : 0ULL)))),64);
    bufp->fullCData(oldp+286,(((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)
                                ? (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_wstrb)
                                : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)
                                    ? 0U : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                                             ? ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)
                                                 ? 0U
                                                 : (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_wstrb))
                                             : 0U)))),8);
    bufp->fullBit(oldp+287,(vlSelf->CoreTop__DOT__MMEM_wd_last));
    bufp->fullBit(oldp+288,((1U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_state))));
    bufp->fullBit(oldp+289,(((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)
                              ? (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wb_ready)
                              : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0) 
                                 | ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                                     ? ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r) 
                                        | (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wb_ready))
                                     : (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wb_ready))))));
    bufp->fullBit(oldp+290,(vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_ready));
    bufp->fullBit(oldp+291,(vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_valid));
    bufp->fullQData(oldp+292,(vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_bits_addr),64);
    bufp->fullCData(oldp+294,(((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)
                                ? 0U : 7U)),8);
    bufp->fullBit(oldp+295,(vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_ready));
    bufp->fullBit(oldp+296,(vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_valid));
    bufp->fullQData(oldp+297,(vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_bits_addr),64);
    bufp->fullBit(oldp+299,(vlSelf->CoreTop__DOT__ARBITER_io_in1_rdata_rep_valid));
    bufp->fullBit(oldp+300,(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_ready));
    bufp->fullBit(oldp+301,(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_valid));
    bufp->fullQData(oldp+302,(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_data),64);
    bufp->fullCData(oldp+304,(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_wstrb),8);
    bufp->fullBit(oldp+305,(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_last));
    bufp->fullBit(oldp+306,(vlSelf->CoreTop__DOT__ARBITER_io_in1_wb_ready));
    bufp->fullBit(oldp+307,(vlSelf->CoreTop__DOT__ARBITER_io_in1_wb_valid));
    bufp->fullCData(oldp+308,(vlSelf->CoreTop__DOT__head),6);
    bufp->fullCData(oldp+309,(vlSelf->CoreTop__DOT__tail),6);
    bufp->fullBit(oldp+310,(vlSelf->CoreTop__DOT__empty));
    bufp->fullBit(oldp+311,(vlSelf->CoreTop__DOT__full));
    bufp->fullQData(oldp+312,(vlSelf->CoreTop__DOT__buffer_0_PC),64);
    bufp->fullIData(oldp+314,(vlSelf->CoreTop__DOT__buffer_0_Inst),32);
    bufp->fullQData(oldp+315,(vlSelf->CoreTop__DOT__buffer_1_PC),64);
    bufp->fullIData(oldp+317,(vlSelf->CoreTop__DOT__buffer_1_Inst),32);
    bufp->fullQData(oldp+318,(vlSelf->CoreTop__DOT__buffer_2_PC),64);
    bufp->fullIData(oldp+320,(vlSelf->CoreTop__DOT__buffer_2_Inst),32);
    bufp->fullQData(oldp+321,(vlSelf->CoreTop__DOT__buffer_3_PC),64);
    bufp->fullIData(oldp+323,(vlSelf->CoreTop__DOT__buffer_3_Inst),32);
    bufp->fullQData(oldp+324,(vlSelf->CoreTop__DOT__buffer_4_PC),64);
    bufp->fullIData(oldp+326,(vlSelf->CoreTop__DOT__buffer_4_Inst),32);
    bufp->fullQData(oldp+327,(vlSelf->CoreTop__DOT__buffer_5_PC),64);
    bufp->fullIData(oldp+329,(vlSelf->CoreTop__DOT__buffer_5_Inst),32);
    bufp->fullQData(oldp+330,(vlSelf->CoreTop__DOT__buffer_6_PC),64);
    bufp->fullIData(oldp+332,(vlSelf->CoreTop__DOT__buffer_6_Inst),32);
    bufp->fullQData(oldp+333,(vlSelf->CoreTop__DOT__buffer_7_PC),64);
    bufp->fullIData(oldp+335,(vlSelf->CoreTop__DOT__buffer_7_Inst),32);
    bufp->fullQData(oldp+336,(vlSelf->CoreTop__DOT__buffer_8_PC),64);
    bufp->fullIData(oldp+338,(vlSelf->CoreTop__DOT__buffer_8_Inst),32);
    bufp->fullQData(oldp+339,(vlSelf->CoreTop__DOT__buffer_9_PC),64);
    bufp->fullIData(oldp+341,(vlSelf->CoreTop__DOT__buffer_9_Inst),32);
    bufp->fullQData(oldp+342,(vlSelf->CoreTop__DOT__buffer_10_PC),64);
    bufp->fullIData(oldp+344,(vlSelf->CoreTop__DOT__buffer_10_Inst),32);
    bufp->fullQData(oldp+345,(vlSelf->CoreTop__DOT__buffer_11_PC),64);
    bufp->fullIData(oldp+347,(vlSelf->CoreTop__DOT__buffer_11_Inst),32);
    bufp->fullQData(oldp+348,(vlSelf->CoreTop__DOT__buffer_12_PC),64);
    bufp->fullIData(oldp+350,(vlSelf->CoreTop__DOT__buffer_12_Inst),32);
    bufp->fullQData(oldp+351,(vlSelf->CoreTop__DOT__buffer_13_PC),64);
    bufp->fullIData(oldp+353,(vlSelf->CoreTop__DOT__buffer_13_Inst),32);
    bufp->fullQData(oldp+354,(vlSelf->CoreTop__DOT__buffer_14_PC),64);
    bufp->fullIData(oldp+356,(vlSelf->CoreTop__DOT__buffer_14_Inst),32);
    bufp->fullQData(oldp+357,(vlSelf->CoreTop__DOT__buffer_15_PC),64);
    bufp->fullIData(oldp+359,(vlSelf->CoreTop__DOT__buffer_15_Inst),32);
    bufp->fullQData(oldp+360,(vlSelf->CoreTop__DOT__buffer_16_PC),64);
    bufp->fullIData(oldp+362,(vlSelf->CoreTop__DOT__buffer_16_Inst),32);
    bufp->fullQData(oldp+363,(vlSelf->CoreTop__DOT__buffer_17_PC),64);
    bufp->fullIData(oldp+365,(vlSelf->CoreTop__DOT__buffer_17_Inst),32);
    bufp->fullQData(oldp+366,(vlSelf->CoreTop__DOT__buffer_18_PC),64);
    bufp->fullIData(oldp+368,(vlSelf->CoreTop__DOT__buffer_18_Inst),32);
    bufp->fullQData(oldp+369,(vlSelf->CoreTop__DOT__buffer_19_PC),64);
    bufp->fullIData(oldp+371,(vlSelf->CoreTop__DOT__buffer_19_Inst),32);
    bufp->fullQData(oldp+372,(vlSelf->CoreTop__DOT__buffer_20_PC),64);
    bufp->fullIData(oldp+374,(vlSelf->CoreTop__DOT__buffer_20_Inst),32);
    bufp->fullQData(oldp+375,(vlSelf->CoreTop__DOT__buffer_21_PC),64);
    bufp->fullIData(oldp+377,(vlSelf->CoreTop__DOT__buffer_21_Inst),32);
    bufp->fullQData(oldp+378,(vlSelf->CoreTop__DOT__buffer_22_PC),64);
    bufp->fullIData(oldp+380,(vlSelf->CoreTop__DOT__buffer_22_Inst),32);
    bufp->fullQData(oldp+381,(vlSelf->CoreTop__DOT__buffer_23_PC),64);
    bufp->fullIData(oldp+383,(vlSelf->CoreTop__DOT__buffer_23_Inst),32);
    bufp->fullQData(oldp+384,(vlSelf->CoreTop__DOT__buffer_24_PC),64);
    bufp->fullIData(oldp+386,(vlSelf->CoreTop__DOT__buffer_24_Inst),32);
    bufp->fullQData(oldp+387,(vlSelf->CoreTop__DOT__buffer_25_PC),64);
    bufp->fullIData(oldp+389,(vlSelf->CoreTop__DOT__buffer_25_Inst),32);
    bufp->fullQData(oldp+390,(vlSelf->CoreTop__DOT__buffer_26_PC),64);
    bufp->fullIData(oldp+392,(vlSelf->CoreTop__DOT__buffer_26_Inst),32);
    bufp->fullQData(oldp+393,(vlSelf->CoreTop__DOT__buffer_27_PC),64);
    bufp->fullIData(oldp+395,(vlSelf->CoreTop__DOT__buffer_27_Inst),32);
    bufp->fullQData(oldp+396,(vlSelf->CoreTop__DOT__buffer_28_PC),64);
    bufp->fullIData(oldp+398,(vlSelf->CoreTop__DOT__buffer_28_Inst),32);
    bufp->fullQData(oldp+399,(vlSelf->CoreTop__DOT__buffer_29_PC),64);
    bufp->fullIData(oldp+401,(vlSelf->CoreTop__DOT__buffer_29_Inst),32);
    bufp->fullQData(oldp+402,(vlSelf->CoreTop__DOT__buffer_30_PC),64);
    bufp->fullIData(oldp+404,(vlSelf->CoreTop__DOT__buffer_30_Inst),32);
    bufp->fullQData(oldp+405,(vlSelf->CoreTop__DOT__buffer_31_PC),64);
    bufp->fullIData(oldp+407,(vlSelf->CoreTop__DOT__buffer_31_Inst),32);
    bufp->fullIData(oldp+408,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_inst),32);
    bufp->fullBit(oldp+409,(vlSelf->CoreTop__DOT__DIP_io_is_break_REG));
    bufp->fullBit(oldp+410,(vlSelf->CoreTop__DOT__ARBITER__DOT__state));
    bufp->fullBit(oldp+411,(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r));
    bufp->fullQData(oldp+412,(vlSelf->CoreTop__DOT__DIP__DOT__rf[0]),64);
    bufp->fullQData(oldp+414,(vlSelf->CoreTop__DOT__DIP__DOT__rf[1]),64);
    bufp->fullQData(oldp+416,(vlSelf->CoreTop__DOT__DIP__DOT__rf[2]),64);
    bufp->fullQData(oldp+418,(vlSelf->CoreTop__DOT__DIP__DOT__rf[3]),64);
    bufp->fullQData(oldp+420,(vlSelf->CoreTop__DOT__DIP__DOT__rf[4]),64);
    bufp->fullQData(oldp+422,(vlSelf->CoreTop__DOT__DIP__DOT__rf[5]),64);
    bufp->fullQData(oldp+424,(vlSelf->CoreTop__DOT__DIP__DOT__rf[6]),64);
    bufp->fullQData(oldp+426,(vlSelf->CoreTop__DOT__DIP__DOT__rf[7]),64);
    bufp->fullQData(oldp+428,(vlSelf->CoreTop__DOT__DIP__DOT__rf[8]),64);
    bufp->fullQData(oldp+430,(vlSelf->CoreTop__DOT__DIP__DOT__rf[9]),64);
    bufp->fullQData(oldp+432,(vlSelf->CoreTop__DOT__DIP__DOT__rf[10]),64);
    bufp->fullQData(oldp+434,(vlSelf->CoreTop__DOT__DIP__DOT__rf[11]),64);
    bufp->fullQData(oldp+436,(vlSelf->CoreTop__DOT__DIP__DOT__rf[12]),64);
    bufp->fullQData(oldp+438,(vlSelf->CoreTop__DOT__DIP__DOT__rf[13]),64);
    bufp->fullQData(oldp+440,(vlSelf->CoreTop__DOT__DIP__DOT__rf[14]),64);
    bufp->fullQData(oldp+442,(vlSelf->CoreTop__DOT__DIP__DOT__rf[15]),64);
    bufp->fullQData(oldp+444,(vlSelf->CoreTop__DOT__DIP__DOT__rf[16]),64);
    bufp->fullQData(oldp+446,(vlSelf->CoreTop__DOT__DIP__DOT__rf[17]),64);
    bufp->fullQData(oldp+448,(vlSelf->CoreTop__DOT__DIP__DOT__rf[18]),64);
    bufp->fullQData(oldp+450,(vlSelf->CoreTop__DOT__DIP__DOT__rf[19]),64);
    bufp->fullQData(oldp+452,(vlSelf->CoreTop__DOT__DIP__DOT__rf[20]),64);
    bufp->fullQData(oldp+454,(vlSelf->CoreTop__DOT__DIP__DOT__rf[21]),64);
    bufp->fullQData(oldp+456,(vlSelf->CoreTop__DOT__DIP__DOT__rf[22]),64);
    bufp->fullQData(oldp+458,(vlSelf->CoreTop__DOT__DIP__DOT__rf[23]),64);
    bufp->fullQData(oldp+460,(vlSelf->CoreTop__DOT__DIP__DOT__rf[24]),64);
    bufp->fullQData(oldp+462,(vlSelf->CoreTop__DOT__DIP__DOT__rf[25]),64);
    bufp->fullQData(oldp+464,(vlSelf->CoreTop__DOT__DIP__DOT__rf[26]),64);
    bufp->fullQData(oldp+466,(vlSelf->CoreTop__DOT__DIP__DOT__rf[27]),64);
    bufp->fullQData(oldp+468,(vlSelf->CoreTop__DOT__DIP__DOT__rf[28]),64);
    bufp->fullQData(oldp+470,(vlSelf->CoreTop__DOT__DIP__DOT__rf[29]),64);
    bufp->fullQData(oldp+472,(vlSelf->CoreTop__DOT__DIP__DOT__rf[30]),64);
    bufp->fullQData(oldp+474,(vlSelf->CoreTop__DOT__DIP__DOT__rf[31]),64);
    bufp->fullIData(oldp+476,(vlSelf->CoreTop__DOT__DIP__DOT__IN[0]),32);
    bufp->fullIData(oldp+477,(vlSelf->CoreTop__DOT__DIP__DOT__IN[1]),32);
    bufp->fullIData(oldp+478,(vlSelf->CoreTop__DOT__DIP__DOT__IN[2]),32);
    bufp->fullIData(oldp+479,(vlSelf->CoreTop__DOT__DIP__DOT__IN[3]),32);
    bufp->fullIData(oldp+480,(vlSelf->CoreTop__DOT__DIP__DOT__IN[4]),32);
    bufp->fullIData(oldp+481,(vlSelf->CoreTop__DOT__DIP__DOT__IN[5]),32);
    bufp->fullIData(oldp+482,(vlSelf->CoreTop__DOT__DIP__DOT__IN[6]),32);
    bufp->fullQData(oldp+483,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mepc_REG_1),64);
    bufp->fullQData(oldp+485,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mcause_REG_1),64);
    bufp->fullQData(oldp+487,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mstatus_REG_1),64);
    bufp->fullQData(oldp+489,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mtvec_REG_1),64);
    bufp->fullBit(oldp+491,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_valid));
    bufp->fullQData(oldp+492,(((IData)(vlSelf->CoreTop__DOT__EX__DOT__is_mul)
                                ? vlSelf->CoreTop__DOT__EX__DOT__src1
                                : (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__src1)))),64);
    bufp->fullQData(oldp+494,(((IData)(vlSelf->CoreTop__DOT__EX__DOT__is_mul)
                                ? vlSelf->CoreTop__DOT__EX__DOT__src2
                                : (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)))),64);
    bufp->fullBit(oldp+496,((0x44U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count))));
    bufp->fullQData(oldp+497,((((QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[0U])))),64);
    bufp->fullBit(oldp+499,(vlSelf->CoreTop__DOT__EX__DOT__div_io_in_valid));
    bufp->fullBit(oldp+500,(vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_flow_div_signed));
    bufp->fullQData(oldp+501,(vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src1),64);
    bufp->fullQData(oldp+503,(vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src2),64);
    bufp->fullBit(oldp+505,((2U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state))));
    bufp->fullQData(oldp+506,(vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_quotient),64);
    bufp->fullQData(oldp+508,(vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_remainder),64);
    bufp->fullBit(oldp+510,(vlSelf->CoreTop__DOT__EX__DOT__is_mul));
    bufp->fullBit(oldp+511,(((((((0x43U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                                 | (0x13U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) 
                                | (IData)(vlSelf->CoreTop__DOT__EX__DOT___is_divw_T_2)) 
                               | ((0x12U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                                  | (0xfU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)))) 
                              | (IData)(vlSelf->CoreTop__DOT__EX__DOT____VdfgTmp_h08208b49__0)) 
                             & (IData)(vlSelf->CoreTop__DOT__EX__DOT____VdfgTmp_h1a4c5317__0))));
    bufp->fullBit(oldp+512,(vlSelf->CoreTop__DOT__EX__DOT__is_divw));
    bufp->fullQData(oldp+513,(vlSelf->CoreTop__DOT__EX__DOT__mepc),64);
    bufp->fullQData(oldp+515,(vlSelf->CoreTop__DOT__EX__DOT__mcause),64);
    bufp->fullQData(oldp+517,(vlSelf->CoreTop__DOT__EX__DOT__mstatus),64);
    bufp->fullQData(oldp+519,(vlSelf->CoreTop__DOT__EX__DOT__mtvec),64);
    bufp->fullQData(oldp+521,(vlSelf->CoreTop__DOT__EX__DOT__mie),64);
    bufp->fullQData(oldp+523,(vlSelf->CoreTop__DOT__EX__DOT__mip),64);
    bufp->fullBit(oldp+525,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+526,((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[0U] 
                             >> 0x1fU)));
    bufp->fullBit(oldp+527,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_quotient 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+528,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_remainder 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+529,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_10 
                                           >> 0x1fU)))));
    bufp->fullQData(oldp+530,(((0x40U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1
                                : ((0x1aU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                    ? vlSelf->CoreTop__DOT__EX__DOT__src2
                                    : ((0x68U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                        ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_7
                                        : ((0x44U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                            ? (vlSelf->CoreTop__DOT__EX__DOT__src1 
                                               | vlSelf->CoreTop__DOT__EX__DOT__src2)
                                            : ((0x69U 
                                                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_10
                                                : (
                                                   (0x71U 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? 
                                                   (vlSelf->CoreTop__DOT__EX__DOT__src1 
                                                    & vlSelf->CoreTop__DOT__EX__DOT__src2)
                                                    : vlSelf->CoreTop__DOT__EX__DOT___GEN_145))))))),64);
    __Vtemp_h052dcc23__0[0U] = (IData)(vlSelf->CoreTop__DOT__EX__DOT__src1);
    __Vtemp_h052dcc23__0[1U] = (IData)((vlSelf->CoreTop__DOT__EX__DOT__src1 
                                        >> 0x20U));
    __Vtemp_h052dcc23__0[2U] = 0U;
    VL_SHIFTL_WWI(95,95,5, __Vtemp_h0fbea1b2__0, __Vtemp_h052dcc23__0, 
                  (0x1fU & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)));
    bufp->fullBit(oldp+532,((__Vtemp_h0fbea1b2__0[0U] 
                             >> 0x1fU)));
    __Vtemp_h8004274a__0[0U] = (IData)(vlSelf->CoreTop__DOT__EX__DOT__src1);
    __Vtemp_h8004274a__0[1U] = 0U;
    __Vtemp_h8004274a__0[2U] = 0U;
    VL_SHIFTL_WWI(95,95,6, __Vtemp_h29cbf8c2__0, __Vtemp_h8004274a__0, 
                  (0x3fU & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)));
    bufp->fullBit(oldp+533,((__Vtemp_h29cbf8c2__0[0U] 
                             >> 0x1fU)));
    bufp->fullBit(oldp+534,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_25 
                             >> 0x1fU)));
    bufp->fullBit(oldp+535,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_31 
                             >> 0x1fU)));
    bufp->fullBit(oldp+536,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__src1 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+537,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__src2 
                                           >> 0x1fU)))));
    bufp->fullQData(oldp+538,(((0x6aU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                ? ((IData)(vlSelf->CoreTop__DOT__EX__DOT___compar_result_T)
                                    ? 1ULL : 0ULL) : 
                               ((2U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                 ? ((IData)(vlSelf->CoreTop__DOT__EX__DOT___compar_result_T_4)
                                     ? 1ULL : 0ULL)
                                 : 0ULL))),64);
    bufp->fullQData(oldp+540,(((3U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType))
                                ? (4ULL + vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC)
                                : 0ULL)),64);
    bufp->fullQData(oldp+542,((((QData)((IData)(((0x6eU 
                                                  == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                  ? (IData)(
                                                            (VL_SHIFTRS_QQI(64,64,5, vlSelf->CoreTop__DOT__EX__DOT__src1, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2))) 
                                                             >> 0x20U))
                                                  : 
                                                 vlSelf->CoreTop__DOT__EX__DOT___GEN_202[1U]))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((0x6eU 
                                                              == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                              ? (IData)(
                                                                        VL_SHIFTRS_QQI(64,64,5, vlSelf->CoreTop__DOT__EX__DOT__src1, 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2))))
                                                              : 
                                                             vlSelf->CoreTop__DOT__EX__DOT___GEN_202[0U]))))),64);
    bufp->fullQData(oldp+544,(((0x6bU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
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
    bufp->fullBit(oldp+546,(vlSelf->CoreTop__DOT__EX__DOT__branch_flag));
    bufp->fullQData(oldp+547,(vlSelf->CoreTop__DOT__EX__DOT__csr_data),64);
    bufp->fullQData(oldp+549,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mtvec_REG),64);
    bufp->fullQData(oldp+551,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mcause_REG),64);
    bufp->fullQData(oldp+553,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mepc_REG),64);
    bufp->fullQData(oldp+555,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mstatus_REG),64);
    bufp->fullBit(oldp+557,(vlSelf->CoreTop__DOT__EX__DOT__is_branch));
    bufp->fullBit(oldp+558,(vlSelf->CoreTop__DOT__EX__DOT__is_jump));
    bufp->fullQData(oldp+559,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[0]),64);
    bufp->fullQData(oldp+561,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[1]),64);
    bufp->fullQData(oldp+563,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[2]),64);
    bufp->fullQData(oldp+565,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[3]),64);
    bufp->fullQData(oldp+567,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[4]),64);
    bufp->fullQData(oldp+569,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[5]),64);
    bufp->fullWData(oldp+571,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend),128);
    bufp->fullQData(oldp+575,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divisor),64);
    bufp->fullQData(oldp+577,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S),64);
    bufp->fullCData(oldp+579,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state),2);
    bufp->fullCData(oldp+580,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__count),6);
    bufp->fullBit(oldp+581,((0x3fU == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__count))));
    bufp->fullBit(oldp+582,(((1U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state)) 
                             & (0x3fU == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__count)))));
    bufp->fullWData(oldp+583,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div),65);
    bufp->fullQData(oldp+586,((- vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S)),64);
    bufp->fullQData(oldp+588,((- (((QData)((IData)(
                                                   vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[3U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[2U]))))),64);
    bufp->fullQData(oldp+590,((((((0U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                                   ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_12
                                   : 0ULL) | ((1U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                                               ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_17
                                               : 0ULL)) 
                                | ((2U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                                    ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_17
                                    : 0ULL)) | ((3U 
                                                 == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                                                 ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_12
                                                 : 0ULL))),64);
    bufp->fullQData(oldp+592,((((((0U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                                   ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_15
                                   : 0ULL) | ((1U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                                               ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_15
                                               : 0ULL)) 
                                | ((2U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                                    ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_25
                                    : 0ULL)) | ((3U 
                                                 == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                                                 ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_25
                                                 : 0ULL))),64);
    bufp->fullCData(oldp+594,((7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U])),3);
    bufp->fullWData(oldp+595,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand),132);
    if ((0U == (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))) {
        __Vtemp_h559cd7fe__0[0U] = 0U;
        __Vtemp_h559cd7fe__0[1U] = 0U;
        __Vtemp_h559cd7fe__0[2U] = 0U;
        __Vtemp_h559cd7fe__0[3U] = 0U;
        __Vtemp_h559cd7fe__0[4U] = 0U;
    } else {
        __Vtemp_h559cd7fe__0[0U] = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[0U];
        __Vtemp_h559cd7fe__0[1U] = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[1U];
        __Vtemp_h559cd7fe__0[2U] = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[2U];
        __Vtemp_h559cd7fe__0[3U] = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[3U];
        __Vtemp_h559cd7fe__0[4U] = (0xfU & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[4U]);
    }
    bufp->fullWData(oldp+600,(__Vtemp_h559cd7fe__0),132);
    bufp->fullBit(oldp+605,(((0U != (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U])) 
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
    bufp->fullWData(oldp+606,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier),66);
    bufp->fullWData(oldp+609,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p),132);
    bufp->fullCData(oldp+614,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count),7);
    bufp->fullWData(oldp+615,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__temp),132);
    bufp->fullBit(oldp+620,((1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__temp[4U] 
                                   >> 3U))));
    bufp->fullBit(oldp+621,(((IData)(vlSelf->CoreTop__DOT__IF_io_cache_req_addr_req_valid) 
                             & (0U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)))));
    bufp->fullQData(oldp+622,(((3U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state))
                                ? vlSelf->CoreTop__DOT__IF__DOT__temp
                                : 0ULL)),64);
    bufp->fullBit(oldp+624,((3U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state))));
    bufp->fullCData(oldp+625,(((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r)
                                ? 2U : 1U)),2);
    bufp->fullWData(oldp+626,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data),512);
    bufp->fullQData(oldp+642,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0
                              [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_tag_w_addr_pipe_0]),53);
    bufp->fullQData(oldp+644,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1
                              [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0]),53);
    bufp->fullBit(oldp+646,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0
                            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0]));
    bufp->fullBit(oldp+647,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1
                            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0]));
    __Vtemp_h6ff33a25__0[0U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][0U];
    __Vtemp_h6ff33a25__0[1U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][1U];
    __Vtemp_h6ff33a25__0[2U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][2U];
    __Vtemp_h6ff33a25__0[3U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][3U];
    __Vtemp_h6ff33a25__0[4U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][4U];
    __Vtemp_h6ff33a25__0[5U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][5U];
    __Vtemp_h6ff33a25__0[6U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][6U];
    __Vtemp_h6ff33a25__0[7U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][7U];
    __Vtemp_h6ff33a25__0[8U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][8U];
    __Vtemp_h6ff33a25__0[9U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][9U];
    __Vtemp_h6ff33a25__0[0xaU] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][0xaU];
    __Vtemp_h6ff33a25__0[0xbU] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][0xbU];
    __Vtemp_h6ff33a25__0[0xcU] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][0xcU];
    __Vtemp_h6ff33a25__0[0xdU] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][0xdU];
    __Vtemp_h6ff33a25__0[0xeU] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][0xeU];
    __Vtemp_h6ff33a25__0[0xfU] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][0xfU];
    bufp->fullWData(oldp+648,(__Vtemp_h6ff33a25__0),512);
    __Vtemp_he7310ca3__0[0U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][0U];
    __Vtemp_he7310ca3__0[1U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][1U];
    __Vtemp_he7310ca3__0[2U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][2U];
    __Vtemp_he7310ca3__0[3U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][3U];
    __Vtemp_he7310ca3__0[4U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][4U];
    __Vtemp_he7310ca3__0[5U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][5U];
    __Vtemp_he7310ca3__0[6U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][6U];
    __Vtemp_he7310ca3__0[7U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][7U];
    __Vtemp_he7310ca3__0[8U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][8U];
    __Vtemp_he7310ca3__0[9U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][9U];
    __Vtemp_he7310ca3__0[0xaU] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][0xaU];
    __Vtemp_he7310ca3__0[0xbU] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][0xbU];
    __Vtemp_he7310ca3__0[0xcU] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][0xcU];
    __Vtemp_he7310ca3__0[0xdU] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][0xdU];
    __Vtemp_he7310ca3__0[0xeU] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][0xeU];
    __Vtemp_he7310ca3__0[0xfU] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0][0xfU];
    bufp->fullWData(oldp+664,(__Vtemp_he7310ca3__0),512);
    bufp->fullQData(oldp+680,((vlSelf->CoreTop__DOT__IF__DOT__temp 
                               >> 0xbU)),53);
    bufp->fullCData(oldp+682,((0x1fU & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                >> 6U)))),5);
    bufp->fullCData(oldp+683,((0x3fU & (IData)(vlSelf->CoreTop__DOT__IF__DOT__temp))),6);
    bufp->fullBit(oldp+684,(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_in_valid_REG));
    bufp->fullBit(oldp+685,(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit));
    bufp->fullWData(oldp+686,(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data),512);
    bufp->fullBit(oldp+702,(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_0_result));
    bufp->fullBit(oldp+703,(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_1_result));
    bufp->fullBit(oldp+704,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[0]));
    bufp->fullBit(oldp+705,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[1]));
    bufp->fullBit(oldp+706,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[2]));
    bufp->fullBit(oldp+707,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[3]));
    bufp->fullBit(oldp+708,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[4]));
    bufp->fullBit(oldp+709,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[5]));
    bufp->fullBit(oldp+710,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[6]));
    bufp->fullBit(oldp+711,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[7]));
    bufp->fullBit(oldp+712,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[8]));
    bufp->fullBit(oldp+713,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[9]));
    bufp->fullBit(oldp+714,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[10]));
    bufp->fullBit(oldp+715,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[11]));
    bufp->fullBit(oldp+716,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[12]));
    bufp->fullBit(oldp+717,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[13]));
    bufp->fullBit(oldp+718,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[14]));
    bufp->fullBit(oldp+719,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[15]));
    bufp->fullBit(oldp+720,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[16]));
    bufp->fullBit(oldp+721,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[17]));
    bufp->fullBit(oldp+722,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[18]));
    bufp->fullBit(oldp+723,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[19]));
    bufp->fullBit(oldp+724,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[20]));
    bufp->fullBit(oldp+725,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[21]));
    bufp->fullBit(oldp+726,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[22]));
    bufp->fullBit(oldp+727,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[23]));
    bufp->fullBit(oldp+728,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[24]));
    bufp->fullBit(oldp+729,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[25]));
    bufp->fullBit(oldp+730,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[26]));
    bufp->fullBit(oldp+731,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[27]));
    bufp->fullBit(oldp+732,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[28]));
    bufp->fullBit(oldp+733,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[29]));
    bufp->fullBit(oldp+734,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[30]));
    bufp->fullBit(oldp+735,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[31]));
    bufp->fullBit(oldp+736,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_lru_w_MPORT_en_pipe_0));
    bufp->fullCData(oldp+737,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_lru_w_MPORT_addr_pipe_0),5);
    bufp->fullBit(oldp+738,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru
                            [vlSelf->CoreTop__DOT__ICACHE__DOT__lru_lru_w_MPORT_addr_pipe_0]));
    bufp->fullBit(oldp+739,(((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                             & ((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                & ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit) 
                                   & (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_0_result))))));
    bufp->fullBit(oldp+740,(((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                             & ((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                & ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit) 
                                   & (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_1_result))))));
    bufp->fullBit(oldp+741,(((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                             & ((1U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                & ((2U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                   & ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT___T_5) 
                                      & (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r)))))));
    bufp->fullBit(oldp+742,(((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                             & ((1U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                & ((2U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                   & ((~ (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r)) 
                                      & (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT___T_5)))))));
    bufp->fullCData(oldp+743,(vlSelf->CoreTop__DOT__ICACHE__DOT__state),3);
    bufp->fullCData(oldp+744,(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state),2);
    bufp->fullWData(oldp+745,(vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg),512);
    bufp->fullQData(oldp+761,(vlSelf->CoreTop__DOT__ICACHE__DOT__mem_addr_reg),64);
    bufp->fullBit(oldp+763,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r));
    bufp->fullQData(oldp+764,(((0U == (7U & (IData)(
                                                    (vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                     >> 3U))))
                                ? (((QData)((IData)(
                                                    vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0U])))
                                : ((1U == (7U & (IData)(
                                                        (vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                         >> 3U))))
                                    ? (((QData)((IData)(
                                                        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[2U])))
                                    : ((2U == (7U & (IData)(
                                                            (vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                             >> 3U))))
                                        ? (((QData)((IData)(
                                                            vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[5U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[4U])))
                                        : ((3U == (7U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                              >> 3U))))
                                            ? (((QData)((IData)(
                                                                vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[7U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[6U])))
                                            : ((4U 
                                                == 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                            >> 3U))))
                                                ? (
                                                   ((QData)((IData)(
                                                                    vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[9U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[8U])))
                                                : (
                                                   (5U 
                                                    == 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                                >> 3U))))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xbU])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xaU])))
                                                    : 
                                                   ((6U 
                                                     == 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                                 >> 3U))))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xdU])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xcU])))
                                                     : 
                                                    ((7U 
                                                      == 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                                  >> 3U))))
                                                      ? 
                                                     (((QData)((IData)(
                                                                       vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xfU])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xeU])))
                                                      : 0ULL))))))))),64);
    bufp->fullQData(oldp+766,(((0U == (7U & (IData)(
                                                    (vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                     >> 3U))))
                                ? (((QData)((IData)(
                                                    vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0U])))
                                : ((1U == (7U & (IData)(
                                                        (vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                         >> 3U))))
                                    ? (((QData)((IData)(
                                                        vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[2U])))
                                    : ((2U == (7U & (IData)(
                                                            (vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                             >> 3U))))
                                        ? (((QData)((IData)(
                                                            vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[5U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[4U])))
                                        : ((3U == (7U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                              >> 3U))))
                                            ? (((QData)((IData)(
                                                                vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[7U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[6U])))
                                            : ((4U 
                                                == 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                            >> 3U))))
                                                ? (
                                                   ((QData)((IData)(
                                                                    vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[9U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[8U])))
                                                : (
                                                   (5U 
                                                    == 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                                >> 3U))))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xbU])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xaU])))
                                                    : 
                                                   ((6U 
                                                     == 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                                 >> 3U))))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xdU])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xcU])))
                                                     : 
                                                    ((7U 
                                                      == 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                                  >> 3U))))
                                                      ? 
                                                     (((QData)((IData)(
                                                                       vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xfU])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xeU])))
                                                      : 0ULL))))))))),64);
    bufp->fullWData(oldp+768,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[0]),512);
    bufp->fullWData(oldp+784,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[1]),512);
    bufp->fullWData(oldp+800,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[2]),512);
    bufp->fullWData(oldp+816,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[3]),512);
    bufp->fullWData(oldp+832,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[4]),512);
    bufp->fullWData(oldp+848,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[5]),512);
    bufp->fullWData(oldp+864,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[6]),512);
    bufp->fullWData(oldp+880,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[7]),512);
    bufp->fullWData(oldp+896,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[8]),512);
    bufp->fullWData(oldp+912,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[9]),512);
    bufp->fullWData(oldp+928,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[10]),512);
    bufp->fullWData(oldp+944,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[11]),512);
    bufp->fullWData(oldp+960,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[12]),512);
    bufp->fullWData(oldp+976,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[13]),512);
    bufp->fullWData(oldp+992,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[14]),512);
    bufp->fullWData(oldp+1008,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[15]),512);
    bufp->fullWData(oldp+1024,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[16]),512);
    bufp->fullWData(oldp+1040,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[17]),512);
    bufp->fullWData(oldp+1056,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[18]),512);
    bufp->fullWData(oldp+1072,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[19]),512);
    bufp->fullWData(oldp+1088,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[20]),512);
    bufp->fullWData(oldp+1104,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[21]),512);
    bufp->fullWData(oldp+1120,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[22]),512);
    bufp->fullWData(oldp+1136,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[23]),512);
    bufp->fullWData(oldp+1152,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[24]),512);
    bufp->fullWData(oldp+1168,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[25]),512);
    bufp->fullWData(oldp+1184,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[26]),512);
    bufp->fullWData(oldp+1200,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[27]),512);
    bufp->fullWData(oldp+1216,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[28]),512);
    bufp->fullWData(oldp+1232,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[29]),512);
    bufp->fullWData(oldp+1248,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[30]),512);
    bufp->fullWData(oldp+1264,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[31]),512);
    bufp->fullBit(oldp+1280,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_en_pipe_0));
    bufp->fullCData(oldp+1281,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0),5);
    bufp->fullCData(oldp+1282,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_addr),5);
    bufp->fullBit(oldp+1283,((1U & (~ (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r)))));
    bufp->fullWData(oldp+1284,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[0]),512);
    bufp->fullWData(oldp+1300,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[1]),512);
    bufp->fullWData(oldp+1316,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[2]),512);
    bufp->fullWData(oldp+1332,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[3]),512);
    bufp->fullWData(oldp+1348,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[4]),512);
    bufp->fullWData(oldp+1364,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[5]),512);
    bufp->fullWData(oldp+1380,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[6]),512);
    bufp->fullWData(oldp+1396,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[7]),512);
    bufp->fullWData(oldp+1412,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[8]),512);
    bufp->fullWData(oldp+1428,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[9]),512);
    bufp->fullWData(oldp+1444,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[10]),512);
    bufp->fullWData(oldp+1460,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[11]),512);
    bufp->fullWData(oldp+1476,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[12]),512);
    bufp->fullWData(oldp+1492,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[13]),512);
    bufp->fullWData(oldp+1508,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[14]),512);
    bufp->fullWData(oldp+1524,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[15]),512);
    bufp->fullWData(oldp+1540,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[16]),512);
    bufp->fullWData(oldp+1556,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[17]),512);
    bufp->fullWData(oldp+1572,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[18]),512);
    bufp->fullWData(oldp+1588,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[19]),512);
    bufp->fullWData(oldp+1604,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[20]),512);
    bufp->fullWData(oldp+1620,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[21]),512);
    bufp->fullWData(oldp+1636,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[22]),512);
    bufp->fullWData(oldp+1652,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[23]),512);
    bufp->fullWData(oldp+1668,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[24]),512);
    bufp->fullWData(oldp+1684,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[25]),512);
    bufp->fullWData(oldp+1700,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[26]),512);
    bufp->fullWData(oldp+1716,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[27]),512);
    bufp->fullWData(oldp+1732,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[28]),512);
    bufp->fullWData(oldp+1748,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[29]),512);
    bufp->fullWData(oldp+1764,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[30]),512);
    bufp->fullWData(oldp+1780,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[31]),512);
    bufp->fullBit(oldp+1796,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_en_pipe_0));
    bufp->fullQData(oldp+1797,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[0]),53);
    bufp->fullQData(oldp+1799,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[1]),53);
    bufp->fullQData(oldp+1801,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[2]),53);
    bufp->fullQData(oldp+1803,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[3]),53);
    bufp->fullQData(oldp+1805,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[4]),53);
    bufp->fullQData(oldp+1807,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[5]),53);
    bufp->fullQData(oldp+1809,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[6]),53);
    bufp->fullQData(oldp+1811,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[7]),53);
    bufp->fullQData(oldp+1813,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[8]),53);
    bufp->fullQData(oldp+1815,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[9]),53);
    bufp->fullQData(oldp+1817,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[10]),53);
    bufp->fullQData(oldp+1819,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[11]),53);
    bufp->fullQData(oldp+1821,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[12]),53);
    bufp->fullQData(oldp+1823,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[13]),53);
    bufp->fullQData(oldp+1825,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[14]),53);
    bufp->fullQData(oldp+1827,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[15]),53);
    bufp->fullQData(oldp+1829,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[16]),53);
    bufp->fullQData(oldp+1831,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[17]),53);
    bufp->fullQData(oldp+1833,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[18]),53);
    bufp->fullQData(oldp+1835,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[19]),53);
    bufp->fullQData(oldp+1837,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[20]),53);
    bufp->fullQData(oldp+1839,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[21]),53);
    bufp->fullQData(oldp+1841,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[22]),53);
    bufp->fullQData(oldp+1843,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[23]),53);
    bufp->fullQData(oldp+1845,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[24]),53);
    bufp->fullQData(oldp+1847,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[25]),53);
    bufp->fullQData(oldp+1849,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[26]),53);
    bufp->fullQData(oldp+1851,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[27]),53);
    bufp->fullQData(oldp+1853,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[28]),53);
    bufp->fullQData(oldp+1855,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[29]),53);
    bufp->fullQData(oldp+1857,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[30]),53);
    bufp->fullQData(oldp+1859,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[31]),53);
    bufp->fullBit(oldp+1861,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_tag_w_en_pipe_0));
    bufp->fullCData(oldp+1862,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_tag_w_addr_pipe_0),5);
    bufp->fullQData(oldp+1863,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_MPORT_1_data),53);
    bufp->fullQData(oldp+1865,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[0]),53);
    bufp->fullQData(oldp+1867,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[1]),53);
    bufp->fullQData(oldp+1869,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[2]),53);
    bufp->fullQData(oldp+1871,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[3]),53);
    bufp->fullQData(oldp+1873,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[4]),53);
    bufp->fullQData(oldp+1875,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[5]),53);
    bufp->fullQData(oldp+1877,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[6]),53);
    bufp->fullQData(oldp+1879,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[7]),53);
    bufp->fullQData(oldp+1881,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[8]),53);
    bufp->fullQData(oldp+1883,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[9]),53);
    bufp->fullQData(oldp+1885,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[10]),53);
    bufp->fullQData(oldp+1887,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[11]),53);
    bufp->fullQData(oldp+1889,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[12]),53);
    bufp->fullQData(oldp+1891,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[13]),53);
    bufp->fullQData(oldp+1893,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[14]),53);
    bufp->fullQData(oldp+1895,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[15]),53);
    bufp->fullQData(oldp+1897,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[16]),53);
    bufp->fullQData(oldp+1899,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[17]),53);
    bufp->fullQData(oldp+1901,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[18]),53);
    bufp->fullQData(oldp+1903,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[19]),53);
    bufp->fullQData(oldp+1905,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[20]),53);
    bufp->fullQData(oldp+1907,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[21]),53);
    bufp->fullQData(oldp+1909,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[22]),53);
    bufp->fullQData(oldp+1911,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[23]),53);
    bufp->fullQData(oldp+1913,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[24]),53);
    bufp->fullQData(oldp+1915,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[25]),53);
    bufp->fullQData(oldp+1917,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[26]),53);
    bufp->fullQData(oldp+1919,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[27]),53);
    bufp->fullQData(oldp+1921,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[28]),53);
    bufp->fullQData(oldp+1923,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[29]),53);
    bufp->fullQData(oldp+1925,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[30]),53);
    bufp->fullQData(oldp+1927,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[31]),53);
    bufp->fullBit(oldp+1929,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_en_pipe_0));
    bufp->fullBit(oldp+1930,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[0]));
    bufp->fullBit(oldp+1931,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[1]));
    bufp->fullBit(oldp+1932,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[2]));
    bufp->fullBit(oldp+1933,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[3]));
    bufp->fullBit(oldp+1934,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[4]));
    bufp->fullBit(oldp+1935,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[5]));
    bufp->fullBit(oldp+1936,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[6]));
    bufp->fullBit(oldp+1937,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[7]));
    bufp->fullBit(oldp+1938,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[8]));
    bufp->fullBit(oldp+1939,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[9]));
    bufp->fullBit(oldp+1940,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[10]));
    bufp->fullBit(oldp+1941,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[11]));
    bufp->fullBit(oldp+1942,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[12]));
    bufp->fullBit(oldp+1943,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[13]));
    bufp->fullBit(oldp+1944,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[14]));
    bufp->fullBit(oldp+1945,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[15]));
    bufp->fullBit(oldp+1946,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[16]));
    bufp->fullBit(oldp+1947,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[17]));
    bufp->fullBit(oldp+1948,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[18]));
    bufp->fullBit(oldp+1949,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[19]));
    bufp->fullBit(oldp+1950,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[20]));
    bufp->fullBit(oldp+1951,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[21]));
    bufp->fullBit(oldp+1952,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[22]));
    bufp->fullBit(oldp+1953,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[23]));
    bufp->fullBit(oldp+1954,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[24]));
    bufp->fullBit(oldp+1955,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[25]));
    bufp->fullBit(oldp+1956,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[26]));
    bufp->fullBit(oldp+1957,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[27]));
    bufp->fullBit(oldp+1958,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[28]));
    bufp->fullBit(oldp+1959,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[29]));
    bufp->fullBit(oldp+1960,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[30]));
    bufp->fullBit(oldp+1961,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[31]));
    bufp->fullBit(oldp+1962,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_en_pipe_0));
    bufp->fullCData(oldp+1963,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0),5);
    bufp->fullBit(oldp+1964,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[0]));
    bufp->fullBit(oldp+1965,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[1]));
    bufp->fullBit(oldp+1966,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[2]));
    bufp->fullBit(oldp+1967,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[3]));
    bufp->fullBit(oldp+1968,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[4]));
    bufp->fullBit(oldp+1969,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[5]));
    bufp->fullBit(oldp+1970,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[6]));
    bufp->fullBit(oldp+1971,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[7]));
    bufp->fullBit(oldp+1972,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[8]));
    bufp->fullBit(oldp+1973,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[9]));
    bufp->fullBit(oldp+1974,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[10]));
    bufp->fullBit(oldp+1975,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[11]));
    bufp->fullBit(oldp+1976,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[12]));
    bufp->fullBit(oldp+1977,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[13]));
    bufp->fullBit(oldp+1978,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[14]));
    bufp->fullBit(oldp+1979,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[15]));
    bufp->fullBit(oldp+1980,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[16]));
    bufp->fullBit(oldp+1981,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[17]));
    bufp->fullBit(oldp+1982,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[18]));
    bufp->fullBit(oldp+1983,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[19]));
    bufp->fullBit(oldp+1984,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[20]));
    bufp->fullBit(oldp+1985,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[21]));
    bufp->fullBit(oldp+1986,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[22]));
    bufp->fullBit(oldp+1987,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[23]));
    bufp->fullBit(oldp+1988,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[24]));
    bufp->fullBit(oldp+1989,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[25]));
    bufp->fullBit(oldp+1990,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[26]));
    bufp->fullBit(oldp+1991,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[27]));
    bufp->fullBit(oldp+1992,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[28]));
    bufp->fullBit(oldp+1993,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[29]));
    bufp->fullBit(oldp+1994,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[30]));
    bufp->fullBit(oldp+1995,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[31]));
    bufp->fullBit(oldp+1996,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_en_pipe_0));
    bufp->fullCData(oldp+1997,(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0),4);
    bufp->fullBit(oldp+1998,(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_3));
    bufp->fullCData(oldp+1999,((((7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                  ? 2U : 0U) | ((3U 
                                                 == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                                 ? 2U
                                                 : 0U))),2);
    bufp->fullBit(oldp+2000,(((8U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)) 
                              | ((7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)) 
                                 | (3U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))))));
    bufp->fullBit(oldp+2001,((vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                              >> 0x1fU)));
    bufp->fullBit(oldp+2002,((1U & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                    >> 0x13U))));
    bufp->fullBit(oldp+2003,((((IData)(vlSelf->CoreTop__DOT__valid) 
                               & ((4U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType)) 
                                  & ((((0xeU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                                       | (0x6fU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) 
                                      | ((0x45U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                                         | ((3U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                                            | (4U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))))) 
                                     | ((0x47U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                                        | (0x11U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)))))) 
                              & ((IData)(vlSelf->CoreTop__DOT__ID_io_ex_reg_rfWen) 
                                 & ((IData)(vlSelf->__VdfgTmp_ha116befc__0) 
                                    | (IData)(vlSelf->__VdfgTmp_ha248cb35__0))))));
    bufp->fullQData(oldp+2004,(vlSelf->CoreTop__DOT__IF__DOT__temp),64);
    bufp->fullIData(oldp+2006,(((1U & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                               >> 2U)))
                                 ? (IData)((vlSelf->CoreTop__DOT__IF_io_cache_req_rdata_rep_bits_rdata 
                                            >> 0x20U))
                                 : (IData)(vlSelf->CoreTop__DOT__IF_io_cache_req_rdata_rep_bits_rdata))),32);
    bufp->fullCData(oldp+2007,(vlSelf->CoreTop__DOT__MMEM__DOT__read_state),2);
    bufp->fullCData(oldp+2008,(vlSelf->CoreTop__DOT__MMEM__DOT__write_state),2);
    bufp->fullCData(oldp+2009,(vlSelf->CoreTop__DOT__MMEM__DOT__read_next_state),2);
    bufp->fullCData(oldp+2010,(vlSelf->CoreTop__DOT__MMEM__DOT__write_next_state),2);
    bufp->fullQData(oldp+2011,(vlSelf->CoreTop__DOT__MMEM__DOT__write_addr_buffer),64);
    bufp->fullQData(oldp+2013,(vlSelf->CoreTop__DOT__MMEM__DOT__read_addr_buffer),64);
    bufp->fullCData(oldp+2015,(vlSelf->CoreTop__DOT__MMEM__DOT__read_count),8);
    bufp->fullBit(oldp+2016,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_valid));
    bufp->fullBit(oldp+2017,((1U & (~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)))));
    bufp->fullBit(oldp+2018,(((~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_bits_we)) 
                              & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_bits_rdata_T_1) 
                                 | (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_valid_T_4)))));
    bufp->fullQData(oldp+2019,(((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_bits_rdata_T_1)
                                 ? ((0U == (7U & (IData)(
                                                         (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                          >> 3U))))
                                     ? (((QData)((IData)(
                                                         vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0U])))
                                     : ((1U == (7U 
                                                & (IData)(
                                                          (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                           >> 3U))))
                                         ? (((QData)((IData)(
                                                             vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[2U])))
                                         : ((2U == 
                                             (7U & (IData)(
                                                           (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                            >> 3U))))
                                             ? (((QData)((IData)(
                                                                 vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[5U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[4U])))
                                             : ((3U 
                                                 == 
                                                 (7U 
                                                  & (IData)(
                                                            (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                             >> 3U))))
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[7U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[6U])))
                                                 : 
                                                ((4U 
                                                  == 
                                                  (7U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                              >> 3U))))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[9U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[8U])))
                                                  : 
                                                 ((5U 
                                                   == 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                               >> 3U))))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xbU])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xaU])))
                                                   : 
                                                  ((6U 
                                                    == 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                                >> 3U))))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xdU])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xcU])))
                                                    : 
                                                   ((7U 
                                                     == 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                                 >> 3U))))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xfU])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xeU])))
                                                     : 0ULL))))))))
                                 : ((0U == (7U & (IData)(
                                                         (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                          >> 3U))))
                                     ? (((QData)((IData)(
                                                         vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0U])))
                                     : ((1U == (7U 
                                                & (IData)(
                                                          (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                           >> 3U))))
                                         ? (((QData)((IData)(
                                                             vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[2U])))
                                         : ((2U == 
                                             (7U & (IData)(
                                                           (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                            >> 3U))))
                                             ? (((QData)((IData)(
                                                                 vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[5U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[4U])))
                                             : ((3U 
                                                 == 
                                                 (7U 
                                                  & (IData)(
                                                            (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                             >> 3U))))
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[7U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[6U])))
                                                 : 
                                                ((4U 
                                                  == 
                                                  (7U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                              >> 3U))))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[9U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[8U])))
                                                  : 
                                                 ((5U 
                                                   == 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                               >> 3U))))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xbU])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xaU])))
                                                   : 
                                                  ((6U 
                                                    == 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                                >> 3U))))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xdU])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xcU])))
                                                    : 
                                                   ((7U 
                                                     == 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                                 >> 3U))))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xfU])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xeU])))
                                                     : 0ULL)))))))))),64);
    bufp->fullBit(oldp+2021,(((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___Cache_data_io_write_bus_valid_T_3) 
                              | ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_valid_T_4) 
                                 & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_bits_we)))));
    bufp->fullBit(oldp+2022,(((~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)) 
                              & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_ready))));
    bufp->fullBit(oldp+2023,((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state))));
    bufp->fullQData(oldp+2024,(((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state))
                                 ? vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_addr_reg
                                 : 0ULL)),64);
    bufp->fullBit(oldp+2026,(((~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)) 
                              & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_ready))));
    bufp->fullBit(oldp+2027,((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state))));
    bufp->fullQData(oldp+2028,(((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state))
                                 ? vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_addr_reg
                                 : 0ULL)),64);
    bufp->fullBit(oldp+2030,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_rdata_rep_valid));
    bufp->fullBit(oldp+2031,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_wdata_req_ready));
    bufp->fullBit(oldp+2032,((2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state))));
    bufp->fullQData(oldp+2033,((((QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0U])))),64);
    bufp->fullBit(oldp+2035,((7U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count_write))));
    bufp->fullBit(oldp+2036,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_wb_valid));
    bufp->fullBit(oldp+2037,(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_addr_req_valid));
    bufp->fullBit(oldp+2038,(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready));
    bufp->fullBit(oldp+2039,(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_valid));
    bufp->fullBit(oldp+2040,(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_out_wb_valid));
    bufp->fullBit(oldp+2041,(((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready) 
                              & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_ready))));
    bufp->fullBit(oldp+2042,((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__read_state))));
    bufp->fullBit(oldp+2043,(((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready) 
                              & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_ready))));
    bufp->fullBit(oldp+2044,((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state))));
    bufp->fullBit(oldp+2045,(((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready) 
                              & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_ready))));
    bufp->fullBit(oldp+2046,((2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state))));
    bufp->fullBit(oldp+2047,((3U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state))));
    bufp->fullBit(oldp+2048,(((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_valid) 
                              & (0U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)))));
    bufp->fullQData(oldp+2049,(((IData)(vlSelf->__VdfgTmp_h5a5a8c61__0)
                                 ? vlSelf->CoreTop__DOT__MEM__DOT__addr_temp
                                 : 0ULL)),64);
    bufp->fullBit(oldp+2051,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_en));
    bufp->fullCData(oldp+2052,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_waymask),2);
    bufp->fullWData(oldp+2053,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data),512);
    bufp->fullQData(oldp+2069,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_tag_w_data),53);
    bufp->fullQData(oldp+2071,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1_tag_w_data),53);
    bufp->fullBit(oldp+2073,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0
                             [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0]));
    bufp->fullBit(oldp+2074,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1
                             [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0]));
    bufp->fullWData(oldp+2075,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data),512);
    bufp->fullWData(oldp+2091,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data),512);
    bufp->fullQData(oldp+2107,((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                >> 0xbU)),53);
    bufp->fullCData(oldp+2109,((0x1fU & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                 >> 6U)))),5);
    bufp->fullCData(oldp+2110,((0x3fU & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp))),6);
    bufp->fullBit(oldp+2111,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_in_valid_REG));
    bufp->fullBit(oldp+2112,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit));
    bufp->fullWData(oldp+2113,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data),512);
    bufp->fullBit(oldp+2129,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_0_result));
    bufp->fullBit(oldp+2130,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_1_result));
    bufp->fullBit(oldp+2131,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[0]));
    bufp->fullBit(oldp+2132,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[1]));
    bufp->fullBit(oldp+2133,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[2]));
    bufp->fullBit(oldp+2134,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[3]));
    bufp->fullBit(oldp+2135,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[4]));
    bufp->fullBit(oldp+2136,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[5]));
    bufp->fullBit(oldp+2137,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[6]));
    bufp->fullBit(oldp+2138,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[7]));
    bufp->fullBit(oldp+2139,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[8]));
    bufp->fullBit(oldp+2140,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[9]));
    bufp->fullBit(oldp+2141,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[10]));
    bufp->fullBit(oldp+2142,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[11]));
    bufp->fullBit(oldp+2143,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[12]));
    bufp->fullBit(oldp+2144,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[13]));
    bufp->fullBit(oldp+2145,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[14]));
    bufp->fullBit(oldp+2146,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[15]));
    bufp->fullBit(oldp+2147,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[16]));
    bufp->fullBit(oldp+2148,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[17]));
    bufp->fullBit(oldp+2149,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[18]));
    bufp->fullBit(oldp+2150,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[19]));
    bufp->fullBit(oldp+2151,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[20]));
    bufp->fullBit(oldp+2152,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[21]));
    bufp->fullBit(oldp+2153,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[22]));
    bufp->fullBit(oldp+2154,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[23]));
    bufp->fullBit(oldp+2155,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[24]));
    bufp->fullBit(oldp+2156,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[25]));
    bufp->fullBit(oldp+2157,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[26]));
    bufp->fullBit(oldp+2158,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[27]));
    bufp->fullBit(oldp+2159,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[28]));
    bufp->fullBit(oldp+2160,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[29]));
    bufp->fullBit(oldp+2161,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[30]));
    bufp->fullBit(oldp+2162,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[31]));
    bufp->fullBit(oldp+2163,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_en_pipe_0));
    bufp->fullCData(oldp+2164,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_addr_pipe_0),5);
    bufp->fullBit(oldp+2165,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_data));
    bufp->fullBit(oldp+2166,(((0U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                              & ((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                 & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit) 
                                    & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_0_result))))));
    bufp->fullBit(oldp+2167,(((0U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                              & ((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                 & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit) 
                                    & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_1_result))))));
    bufp->fullBit(oldp+2168,(((0U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                              & ((1U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                 & ((2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                    & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___T_8) 
                                       & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_r)))))));
    bufp->fullBit(oldp+2169,(((0U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                              & ((1U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                 & ((2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                    & ((~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_r)) 
                                       & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___T_8)))))));
    bufp->fullBit(oldp+2170,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[0]));
    bufp->fullBit(oldp+2171,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[1]));
    bufp->fullBit(oldp+2172,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[2]));
    bufp->fullBit(oldp+2173,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[3]));
    bufp->fullBit(oldp+2174,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[4]));
    bufp->fullBit(oldp+2175,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[5]));
    bufp->fullBit(oldp+2176,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[6]));
    bufp->fullBit(oldp+2177,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[7]));
    bufp->fullBit(oldp+2178,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[8]));
    bufp->fullBit(oldp+2179,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[9]));
    bufp->fullBit(oldp+2180,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[10]));
    bufp->fullBit(oldp+2181,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[11]));
    bufp->fullBit(oldp+2182,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[12]));
    bufp->fullBit(oldp+2183,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[13]));
    bufp->fullBit(oldp+2184,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[14]));
    bufp->fullBit(oldp+2185,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[15]));
    bufp->fullBit(oldp+2186,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[16]));
    bufp->fullBit(oldp+2187,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[17]));
    bufp->fullBit(oldp+2188,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[18]));
    bufp->fullBit(oldp+2189,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[19]));
    bufp->fullBit(oldp+2190,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[20]));
    bufp->fullBit(oldp+2191,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[21]));
    bufp->fullBit(oldp+2192,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[22]));
    bufp->fullBit(oldp+2193,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[23]));
    bufp->fullBit(oldp+2194,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[24]));
    bufp->fullBit(oldp+2195,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[25]));
    bufp->fullBit(oldp+2196,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[26]));
    bufp->fullBit(oldp+2197,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[27]));
    bufp->fullBit(oldp+2198,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[28]));
    bufp->fullBit(oldp+2199,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[29]));
    bufp->fullBit(oldp+2200,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[30]));
    bufp->fullBit(oldp+2201,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[31]));
    bufp->fullBit(oldp+2202,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0_dirt_w_en_pipe_0));
    bufp->fullCData(oldp+2203,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0_dirt_w_addr_pipe_0),5);
    bufp->fullBit(oldp+2204,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0
                             [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0_dirt_w_addr_pipe_0]));
    bufp->fullBit(oldp+2205,((1U & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_waymask))));
    bufp->fullBit(oldp+2206,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0_MPORT_4_en));
    bufp->fullBit(oldp+2207,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[0]));
    bufp->fullBit(oldp+2208,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[1]));
    bufp->fullBit(oldp+2209,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[2]));
    bufp->fullBit(oldp+2210,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[3]));
    bufp->fullBit(oldp+2211,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[4]));
    bufp->fullBit(oldp+2212,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[5]));
    bufp->fullBit(oldp+2213,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[6]));
    bufp->fullBit(oldp+2214,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[7]));
    bufp->fullBit(oldp+2215,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[8]));
    bufp->fullBit(oldp+2216,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[9]));
    bufp->fullBit(oldp+2217,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[10]));
    bufp->fullBit(oldp+2218,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[11]));
    bufp->fullBit(oldp+2219,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[12]));
    bufp->fullBit(oldp+2220,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[13]));
    bufp->fullBit(oldp+2221,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[14]));
    bufp->fullBit(oldp+2222,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[15]));
    bufp->fullBit(oldp+2223,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[16]));
    bufp->fullBit(oldp+2224,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[17]));
    bufp->fullBit(oldp+2225,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[18]));
    bufp->fullBit(oldp+2226,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[19]));
    bufp->fullBit(oldp+2227,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[20]));
    bufp->fullBit(oldp+2228,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[21]));
    bufp->fullBit(oldp+2229,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[22]));
    bufp->fullBit(oldp+2230,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[23]));
    bufp->fullBit(oldp+2231,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[24]));
    bufp->fullBit(oldp+2232,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[25]));
    bufp->fullBit(oldp+2233,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[26]));
    bufp->fullBit(oldp+2234,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[27]));
    bufp->fullBit(oldp+2235,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[28]));
    bufp->fullBit(oldp+2236,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[29]));
    bufp->fullBit(oldp+2237,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[30]));
    bufp->fullBit(oldp+2238,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[31]));
    bufp->fullBit(oldp+2239,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1_dirt_w_en_pipe_0));
    bufp->fullCData(oldp+2240,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1_dirt_w_addr_pipe_0),5);
    bufp->fullBit(oldp+2241,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1
                             [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1_dirt_w_addr_pipe_0]));
    bufp->fullBit(oldp+2242,((1U & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_waymask) 
                                    >> 1U))));
    bufp->fullCData(oldp+2243,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state),3);
    bufp->fullCData(oldp+2244,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state),2);
    bufp->fullCData(oldp+2245,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state),2);
    bufp->fullWData(oldp+2246,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg),512);
    bufp->fullQData(oldp+2262,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_addr_reg),64);
    bufp->fullBit(oldp+2264,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_r));
    bufp->fullCData(oldp+2265,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count_write),4);
    bufp->fullQData(oldp+2266,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_addr_reg),64);
    bufp->fullWData(oldp+2268,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg),512);
    bufp->fullQData(oldp+2284,(((0U == (7U & (IData)(
                                                     (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                      >> 3U))))
                                 ? (((QData)((IData)(
                                                     vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0U])))
                                 : ((1U == (7U & (IData)(
                                                         (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                          >> 3U))))
                                     ? (((QData)((IData)(
                                                         vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[2U])))
                                     : ((2U == (7U 
                                                & (IData)(
                                                          (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                           >> 3U))))
                                         ? (((QData)((IData)(
                                                             vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[5U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[4U])))
                                         : ((3U == 
                                             (7U & (IData)(
                                                           (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                            >> 3U))))
                                             ? (((QData)((IData)(
                                                                 vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[7U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[6U])))
                                             : ((4U 
                                                 == 
                                                 (7U 
                                                  & (IData)(
                                                            (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                             >> 3U))))
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[9U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[8U])))
                                                 : 
                                                ((5U 
                                                  == 
                                                  (7U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                              >> 3U))))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xbU])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xaU])))
                                                  : 
                                                 ((6U 
                                                   == 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                               >> 3U))))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xdU])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xcU])))
                                                   : 
                                                  ((7U 
                                                    == 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                                >> 3U))))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xfU])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xeU])))
                                                    : 0ULL))))))))),64);
    bufp->fullQData(oldp+2286,(((0U == (7U & (IData)(
                                                     (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                      >> 3U))))
                                 ? (((QData)((IData)(
                                                     vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0U])))
                                 : ((1U == (7U & (IData)(
                                                         (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                          >> 3U))))
                                     ? (((QData)((IData)(
                                                         vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[2U])))
                                     : ((2U == (7U 
                                                & (IData)(
                                                          (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                           >> 3U))))
                                         ? (((QData)((IData)(
                                                             vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[5U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[4U])))
                                         : ((3U == 
                                             (7U & (IData)(
                                                           (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                            >> 3U))))
                                             ? (((QData)((IData)(
                                                                 vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[7U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[6U])))
                                             : ((4U 
                                                 == 
                                                 (7U 
                                                  & (IData)(
                                                            (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                             >> 3U))))
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[9U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[8U])))
                                                 : 
                                                ((5U 
                                                  == 
                                                  (7U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                              >> 3U))))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xbU])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xaU])))
                                                  : 
                                                 ((6U 
                                                   == 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                               >> 3U))))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xdU])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xcU])))
                                                   : 
                                                  ((7U 
                                                    == 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                                >> 3U))))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xfU])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xeU])))
                                                    : 0ULL))))))))),64);
    bufp->fullQData(oldp+2288,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask),64);
    bufp->fullQData(oldp+2290,((((QData)((IData)(((1U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                              >> 7U)))
                                                   ? 0xffU
                                                   : 0U))) 
                                 << 0x38U) | (((QData)((IData)(
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                            >> 6U)))
                                                                 ? 0xffU
                                                                 : 0U))) 
                                               << 0x30U) 
                                              | (((QData)((IData)(
                                                                  ((1U 
                                                                    & (IData)(
                                                                              (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                               >> 5U)))
                                                                    ? 0xffU
                                                                    : 0U))) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     ((1U 
                                                                       & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 4U)))
                                                                       ? 0xffU
                                                                       : 0U))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      ((((1U 
                                                                          & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 3U)))
                                                                          ? 0xffU
                                                                          : 0U) 
                                                                        << 0x18U) 
                                                                       | ((((1U 
                                                                             & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 2U)))
                                                                             ? 0xffU
                                                                             : 0U) 
                                                                           << 0x10U) 
                                                                          | ((((1U 
                                                                                & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 1U)))
                                                                                ? 0xffU
                                                                                : 0U) 
                                                                              << 8U) 
                                                                             | ((1U 
                                                                                & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask))
                                                                                 ? 0xffU
                                                                                 : 0U))))))))))),64);
    bufp->fullWData(oldp+2292,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo_lo),128);
    bufp->fullQData(oldp+2296,((((QData)((IData)(((1U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                              >> 0x17U)))
                                                   ? 0xffU
                                                   : 0U))) 
                                 << 0x38U) | (((QData)((IData)(
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                            >> 0x16U)))
                                                                 ? 0xffU
                                                                 : 0U))) 
                                               << 0x30U) 
                                              | (((QData)((IData)(
                                                                  ((1U 
                                                                    & (IData)(
                                                                              (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                               >> 0x15U)))
                                                                    ? 0xffU
                                                                    : 0U))) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     ((1U 
                                                                       & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x14U)))
                                                                       ? 0xffU
                                                                       : 0U))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      ((((1U 
                                                                          & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x13U)))
                                                                          ? 0xffU
                                                                          : 0U) 
                                                                        << 0x18U) 
                                                                       | ((((1U 
                                                                             & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x12U)))
                                                                             ? 0xffU
                                                                             : 0U) 
                                                                           << 0x10U) 
                                                                          | ((((1U 
                                                                                & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x11U)))
                                                                                ? 0xffU
                                                                                : 0U) 
                                                                              << 8U) 
                                                                             | ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x10U)))
                                                                                 ? 0xffU
                                                                                 : 0U))))))))))),64);
    bufp->fullWData(oldp+2298,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo),256);
    bufp->fullQData(oldp+2306,((((QData)((IData)(((1U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                              >> 0x27U)))
                                                   ? 0xffU
                                                   : 0U))) 
                                 << 0x38U) | (((QData)((IData)(
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                            >> 0x26U)))
                                                                 ? 0xffU
                                                                 : 0U))) 
                                               << 0x30U) 
                                              | (((QData)((IData)(
                                                                  ((1U 
                                                                    & (IData)(
                                                                              (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                               >> 0x25U)))
                                                                    ? 0xffU
                                                                    : 0U))) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     ((1U 
                                                                       & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x24U)))
                                                                       ? 0xffU
                                                                       : 0U))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      ((((1U 
                                                                          & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x23U)))
                                                                          ? 0xffU
                                                                          : 0U) 
                                                                        << 0x18U) 
                                                                       | ((((1U 
                                                                             & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x22U)))
                                                                             ? 0xffU
                                                                             : 0U) 
                                                                           << 0x10U) 
                                                                          | ((((1U 
                                                                                & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x21U)))
                                                                                ? 0xffU
                                                                                : 0U) 
                                                                              << 8U) 
                                                                             | ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x20U)))
                                                                                 ? 0xffU
                                                                                 : 0U))))))))))),64);
    bufp->fullWData(oldp+2308,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi_lo),128);
    bufp->fullQData(oldp+2312,((((QData)((IData)(((1U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                              >> 0x37U)))
                                                   ? 0xffU
                                                   : 0U))) 
                                 << 0x38U) | (((QData)((IData)(
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                            >> 0x36U)))
                                                                 ? 0xffU
                                                                 : 0U))) 
                                               << 0x30U) 
                                              | (((QData)((IData)(
                                                                  ((1U 
                                                                    & (IData)(
                                                                              (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                               >> 0x35U)))
                                                                    ? 0xffU
                                                                    : 0U))) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     ((1U 
                                                                       & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x34U)))
                                                                       ? 0xffU
                                                                       : 0U))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      ((((1U 
                                                                          & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x33U)))
                                                                          ? 0xffU
                                                                          : 0U) 
                                                                        << 0x18U) 
                                                                       | ((((1U 
                                                                             & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x32U)))
                                                                             ? 0xffU
                                                                             : 0U) 
                                                                           << 0x10U) 
                                                                          | ((((1U 
                                                                                & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x31U)))
                                                                                ? 0xffU
                                                                                : 0U) 
                                                                              << 8U) 
                                                                             | ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x30U)))
                                                                                 ? 0xffU
                                                                                 : 0U))))))))))),64);
    bufp->fullWData(oldp+2314,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi),256);
    bufp->fullWData(oldp+2322,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend),512);
    __Vtemp_hc34456c3__0[0U] = (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata);
    __Vtemp_hc34456c3__0[1U] = (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata 
                                        >> 0x20U));
    __Vtemp_hc34456c3__0[2U] = (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata);
    __Vtemp_hc34456c3__0[3U] = (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata 
                                        >> 0x20U));
    __Vtemp_hc34456c3__0[4U] = (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata);
    __Vtemp_hc34456c3__0[5U] = (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata 
                                        >> 0x20U));
    __Vtemp_hc34456c3__0[6U] = (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata);
    __Vtemp_hc34456c3__0[7U] = (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata 
                                        >> 0x20U));
    __Vtemp_hc34456c3__0[8U] = (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata);
    __Vtemp_hc34456c3__0[9U] = (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata 
                                        >> 0x20U));
    __Vtemp_hc34456c3__0[0xaU] = (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata);
    __Vtemp_hc34456c3__0[0xbU] = (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata 
                                          >> 0x20U));
    __Vtemp_hc34456c3__0[0xcU] = (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata);
    __Vtemp_hc34456c3__0[0xdU] = (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata 
                                          >> 0x20U));
    __Vtemp_hc34456c3__0[0xeU] = (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata);
    __Vtemp_hc34456c3__0[0xfU] = (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata 
                                          >> 0x20U));
    bufp->fullWData(oldp+2338,(__Vtemp_hc34456c3__0),512);
    bufp->fullWData(oldp+2354,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[0]),512);
    bufp->fullWData(oldp+2370,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[1]),512);
    bufp->fullWData(oldp+2386,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[2]),512);
    bufp->fullWData(oldp+2402,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[3]),512);
    bufp->fullWData(oldp+2418,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[4]),512);
    bufp->fullWData(oldp+2434,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[5]),512);
    bufp->fullWData(oldp+2450,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[6]),512);
    bufp->fullWData(oldp+2466,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[7]),512);
    bufp->fullWData(oldp+2482,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[8]),512);
    bufp->fullWData(oldp+2498,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[9]),512);
    bufp->fullWData(oldp+2514,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[10]),512);
    bufp->fullWData(oldp+2530,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[11]),512);
    bufp->fullWData(oldp+2546,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[12]),512);
    bufp->fullWData(oldp+2562,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[13]),512);
    bufp->fullWData(oldp+2578,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[14]),512);
    bufp->fullWData(oldp+2594,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[15]),512);
    bufp->fullWData(oldp+2610,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[16]),512);
    bufp->fullWData(oldp+2626,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[17]),512);
    bufp->fullWData(oldp+2642,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[18]),512);
    bufp->fullWData(oldp+2658,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[19]),512);
    bufp->fullWData(oldp+2674,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[20]),512);
    bufp->fullWData(oldp+2690,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[21]),512);
    bufp->fullWData(oldp+2706,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[22]),512);
    bufp->fullWData(oldp+2722,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[23]),512);
    bufp->fullWData(oldp+2738,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[24]),512);
    bufp->fullWData(oldp+2754,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[25]),512);
    bufp->fullWData(oldp+2770,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[26]),512);
    bufp->fullWData(oldp+2786,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[27]),512);
    bufp->fullWData(oldp+2802,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[28]),512);
    bufp->fullWData(oldp+2818,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[29]),512);
    bufp->fullWData(oldp+2834,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[30]),512);
    bufp->fullWData(oldp+2850,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[31]),512);
    bufp->fullBit(oldp+2866,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_en_pipe_0));
    bufp->fullCData(oldp+2867,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0),5);
    bufp->fullCData(oldp+2868,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_addr),5);
    bufp->fullWData(oldp+2869,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[0]),512);
    bufp->fullWData(oldp+2885,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[1]),512);
    bufp->fullWData(oldp+2901,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[2]),512);
    bufp->fullWData(oldp+2917,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[3]),512);
    bufp->fullWData(oldp+2933,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[4]),512);
    bufp->fullWData(oldp+2949,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[5]),512);
    bufp->fullWData(oldp+2965,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[6]),512);
    bufp->fullWData(oldp+2981,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[7]),512);
    bufp->fullWData(oldp+2997,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[8]),512);
    bufp->fullWData(oldp+3013,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[9]),512);
    bufp->fullWData(oldp+3029,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[10]),512);
    bufp->fullWData(oldp+3045,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[11]),512);
    bufp->fullWData(oldp+3061,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[12]),512);
    bufp->fullWData(oldp+3077,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[13]),512);
    bufp->fullWData(oldp+3093,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[14]),512);
    bufp->fullWData(oldp+3109,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[15]),512);
    bufp->fullWData(oldp+3125,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[16]),512);
    bufp->fullWData(oldp+3141,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[17]),512);
    bufp->fullWData(oldp+3157,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[18]),512);
    bufp->fullWData(oldp+3173,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[19]),512);
    bufp->fullWData(oldp+3189,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[20]),512);
    bufp->fullWData(oldp+3205,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[21]),512);
    bufp->fullWData(oldp+3221,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[22]),512);
    bufp->fullWData(oldp+3237,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[23]),512);
    bufp->fullWData(oldp+3253,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[24]),512);
    bufp->fullWData(oldp+3269,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[25]),512);
    bufp->fullWData(oldp+3285,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[26]),512);
    bufp->fullWData(oldp+3301,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[27]),512);
    bufp->fullWData(oldp+3317,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[28]),512);
    bufp->fullWData(oldp+3333,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[29]),512);
    bufp->fullWData(oldp+3349,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[30]),512);
    bufp->fullWData(oldp+3365,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[31]),512);
    bufp->fullBit(oldp+3381,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_en_pipe_0));
    bufp->fullQData(oldp+3382,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[0]),53);
    bufp->fullQData(oldp+3384,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[1]),53);
    bufp->fullQData(oldp+3386,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[2]),53);
    bufp->fullQData(oldp+3388,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[3]),53);
    bufp->fullQData(oldp+3390,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[4]),53);
    bufp->fullQData(oldp+3392,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[5]),53);
    bufp->fullQData(oldp+3394,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[6]),53);
    bufp->fullQData(oldp+3396,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[7]),53);
    bufp->fullQData(oldp+3398,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[8]),53);
    bufp->fullQData(oldp+3400,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[9]),53);
    bufp->fullQData(oldp+3402,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[10]),53);
    bufp->fullQData(oldp+3404,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[11]),53);
    bufp->fullQData(oldp+3406,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[12]),53);
    bufp->fullQData(oldp+3408,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[13]),53);
    bufp->fullQData(oldp+3410,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[14]),53);
    bufp->fullQData(oldp+3412,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[15]),53);
    bufp->fullQData(oldp+3414,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[16]),53);
    bufp->fullQData(oldp+3416,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[17]),53);
    bufp->fullQData(oldp+3418,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[18]),53);
    bufp->fullQData(oldp+3420,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[19]),53);
    bufp->fullQData(oldp+3422,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[20]),53);
    bufp->fullQData(oldp+3424,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[21]),53);
    bufp->fullQData(oldp+3426,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[22]),53);
    bufp->fullQData(oldp+3428,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[23]),53);
    bufp->fullQData(oldp+3430,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[24]),53);
    bufp->fullQData(oldp+3432,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[25]),53);
    bufp->fullQData(oldp+3434,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[26]),53);
    bufp->fullQData(oldp+3436,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[27]),53);
    bufp->fullQData(oldp+3438,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[28]),53);
    bufp->fullQData(oldp+3440,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[29]),53);
    bufp->fullQData(oldp+3442,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[30]),53);
    bufp->fullQData(oldp+3444,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[31]),53);
    bufp->fullBit(oldp+3446,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_tag_w_en_pipe_0));
    bufp->fullCData(oldp+3447,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_tag_w_addr_pipe_0),5);
    bufp->fullQData(oldp+3448,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_MPORT_1_data),53);
    bufp->fullQData(oldp+3450,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[0]),53);
    bufp->fullQData(oldp+3452,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[1]),53);
    bufp->fullQData(oldp+3454,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[2]),53);
    bufp->fullQData(oldp+3456,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[3]),53);
    bufp->fullQData(oldp+3458,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[4]),53);
    bufp->fullQData(oldp+3460,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[5]),53);
    bufp->fullQData(oldp+3462,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[6]),53);
    bufp->fullQData(oldp+3464,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[7]),53);
    bufp->fullQData(oldp+3466,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[8]),53);
    bufp->fullQData(oldp+3468,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[9]),53);
    bufp->fullQData(oldp+3470,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[10]),53);
    bufp->fullQData(oldp+3472,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[11]),53);
    bufp->fullQData(oldp+3474,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[12]),53);
    bufp->fullQData(oldp+3476,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[13]),53);
    bufp->fullQData(oldp+3478,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[14]),53);
    bufp->fullQData(oldp+3480,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[15]),53);
    bufp->fullQData(oldp+3482,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[16]),53);
    bufp->fullQData(oldp+3484,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[17]),53);
    bufp->fullQData(oldp+3486,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[18]),53);
    bufp->fullQData(oldp+3488,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[19]),53);
    bufp->fullQData(oldp+3490,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[20]),53);
    bufp->fullQData(oldp+3492,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[21]),53);
    bufp->fullQData(oldp+3494,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[22]),53);
    bufp->fullQData(oldp+3496,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[23]),53);
    bufp->fullQData(oldp+3498,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[24]),53);
    bufp->fullQData(oldp+3500,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[25]),53);
    bufp->fullQData(oldp+3502,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[26]),53);
    bufp->fullQData(oldp+3504,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[27]),53);
    bufp->fullQData(oldp+3506,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[28]),53);
    bufp->fullQData(oldp+3508,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[29]),53);
    bufp->fullQData(oldp+3510,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[30]),53);
    bufp->fullQData(oldp+3512,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[31]),53);
    bufp->fullBit(oldp+3514,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1_tag_w_en_pipe_0));
    bufp->fullBit(oldp+3515,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[0]));
    bufp->fullBit(oldp+3516,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[1]));
    bufp->fullBit(oldp+3517,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[2]));
    bufp->fullBit(oldp+3518,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[3]));
    bufp->fullBit(oldp+3519,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[4]));
    bufp->fullBit(oldp+3520,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[5]));
    bufp->fullBit(oldp+3521,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[6]));
    bufp->fullBit(oldp+3522,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[7]));
    bufp->fullBit(oldp+3523,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[8]));
    bufp->fullBit(oldp+3524,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[9]));
    bufp->fullBit(oldp+3525,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[10]));
    bufp->fullBit(oldp+3526,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[11]));
    bufp->fullBit(oldp+3527,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[12]));
    bufp->fullBit(oldp+3528,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[13]));
    bufp->fullBit(oldp+3529,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[14]));
    bufp->fullBit(oldp+3530,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[15]));
    bufp->fullBit(oldp+3531,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[16]));
    bufp->fullBit(oldp+3532,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[17]));
    bufp->fullBit(oldp+3533,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[18]));
    bufp->fullBit(oldp+3534,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[19]));
    bufp->fullBit(oldp+3535,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[20]));
    bufp->fullBit(oldp+3536,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[21]));
    bufp->fullBit(oldp+3537,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[22]));
    bufp->fullBit(oldp+3538,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[23]));
    bufp->fullBit(oldp+3539,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[24]));
    bufp->fullBit(oldp+3540,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[25]));
    bufp->fullBit(oldp+3541,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[26]));
    bufp->fullBit(oldp+3542,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[27]));
    bufp->fullBit(oldp+3543,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[28]));
    bufp->fullBit(oldp+3544,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[29]));
    bufp->fullBit(oldp+3545,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[30]));
    bufp->fullBit(oldp+3546,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[31]));
    bufp->fullBit(oldp+3547,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_en_pipe_0));
    bufp->fullBit(oldp+3548,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[0]));
    bufp->fullBit(oldp+3549,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[1]));
    bufp->fullBit(oldp+3550,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[2]));
    bufp->fullBit(oldp+3551,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[3]));
    bufp->fullBit(oldp+3552,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[4]));
    bufp->fullBit(oldp+3553,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[5]));
    bufp->fullBit(oldp+3554,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[6]));
    bufp->fullBit(oldp+3555,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[7]));
    bufp->fullBit(oldp+3556,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[8]));
    bufp->fullBit(oldp+3557,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[9]));
    bufp->fullBit(oldp+3558,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[10]));
    bufp->fullBit(oldp+3559,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[11]));
    bufp->fullBit(oldp+3560,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[12]));
    bufp->fullBit(oldp+3561,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[13]));
    bufp->fullBit(oldp+3562,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[14]));
    bufp->fullBit(oldp+3563,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[15]));
    bufp->fullBit(oldp+3564,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[16]));
    bufp->fullBit(oldp+3565,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[17]));
    bufp->fullBit(oldp+3566,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[18]));
    bufp->fullBit(oldp+3567,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[19]));
    bufp->fullBit(oldp+3568,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[20]));
    bufp->fullBit(oldp+3569,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[21]));
    bufp->fullBit(oldp+3570,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[22]));
    bufp->fullBit(oldp+3571,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[23]));
    bufp->fullBit(oldp+3572,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[24]));
    bufp->fullBit(oldp+3573,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[25]));
    bufp->fullBit(oldp+3574,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[26]));
    bufp->fullBit(oldp+3575,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[27]));
    bufp->fullBit(oldp+3576,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[28]));
    bufp->fullBit(oldp+3577,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[29]));
    bufp->fullBit(oldp+3578,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[30]));
    bufp->fullBit(oldp+3579,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[31]));
    bufp->fullBit(oldp+3580,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_en_pipe_0));
    bufp->fullCData(oldp+3581,(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__read_state),2);
    bufp->fullCData(oldp+3582,(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state),2);
    bufp->fullBit(oldp+3583,(vlSelf->clock));
    bufp->fullBit(oldp+3584,(vlSelf->reset));
    bufp->fullQData(oldp+3585,(vlSelf->io_pc),64);
    bufp->fullIData(oldp+3587,(vlSelf->io_inst),32);
    bufp->fullBit(oldp+3588,(1U));
    bufp->fullCData(oldp+3589,(0U),5);
    bufp->fullCData(oldp+3590,(1U),5);
    bufp->fullCData(oldp+3591,(2U),5);
    bufp->fullCData(oldp+3592,(3U),5);
    bufp->fullCData(oldp+3593,(4U),5);
    bufp->fullCData(oldp+3594,(5U),5);
    bufp->fullCData(oldp+3595,(6U),5);
    bufp->fullCData(oldp+3596,(7U),5);
    bufp->fullCData(oldp+3597,(8U),5);
    bufp->fullCData(oldp+3598,(9U),5);
    bufp->fullCData(oldp+3599,(0xaU),5);
    bufp->fullCData(oldp+3600,(0xbU),5);
    bufp->fullCData(oldp+3601,(0xcU),5);
    bufp->fullCData(oldp+3602,(0xdU),5);
    bufp->fullCData(oldp+3603,(0xeU),5);
    bufp->fullCData(oldp+3604,(0xfU),5);
    bufp->fullCData(oldp+3605,(0x10U),5);
    bufp->fullCData(oldp+3606,(0x11U),5);
    bufp->fullCData(oldp+3607,(0x12U),5);
    bufp->fullCData(oldp+3608,(0x13U),5);
    bufp->fullCData(oldp+3609,(0x14U),5);
    bufp->fullCData(oldp+3610,(0x15U),5);
    bufp->fullCData(oldp+3611,(0x16U),5);
    bufp->fullCData(oldp+3612,(0x17U),5);
    bufp->fullCData(oldp+3613,(0x18U),5);
    bufp->fullCData(oldp+3614,(0x19U),5);
    bufp->fullCData(oldp+3615,(0x1aU),5);
    bufp->fullCData(oldp+3616,(0x1bU),5);
    bufp->fullCData(oldp+3617,(0x1cU),5);
    bufp->fullCData(oldp+3618,(0x1dU),5);
    bufp->fullCData(oldp+3619,(0x1eU),5);
    bufp->fullCData(oldp+3620,(0x1fU),5);
    bufp->fullCData(oldp+3621,(0U),2);
    bufp->fullCData(oldp+3622,(1U),4);
    bufp->fullCData(oldp+3623,(3U),3);
    bufp->fullCData(oldp+3624,(0U),3);
    bufp->fullCData(oldp+3625,(1U),2);
    bufp->fullCData(oldp+3626,(0U),4);
    bufp->fullCData(oldp+3627,(vlSelf->CoreTop__DOT__MMEM_rd_id),4);
    bufp->fullCData(oldp+3628,(vlSelf->CoreTop__DOT__MMEM_rd_resp),2);
    bufp->fullCData(oldp+3629,(vlSelf->CoreTop__DOT__MMEM_wr_id),4);
    bufp->fullBit(oldp+3630,(0U));
    bufp->fullIData(oldp+3631,(0x40U),32);
    bufp->fullCData(oldp+3632,(2U),2);
}
