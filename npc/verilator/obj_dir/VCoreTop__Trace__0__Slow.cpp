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
    tracep->declBit(c+3581,"clock", false,-1);
    tracep->declBit(c+3582,"reset", false,-1);
    tracep->declQuad(c+3583,"io_pc", false,-1, 63,0);
    tracep->declBus(c+3585,"io_inst", false,-1, 31,0);
    tracep->pushNamePrefix("CoreTop ");
    tracep->declBit(c+3581,"clock", false,-1);
    tracep->declBit(c+3582,"reset", false,-1);
    tracep->declQuad(c+3583,"io_pc", false,-1, 63,0);
    tracep->declBus(c+3585,"io_inst", false,-1, 31,0);
    tracep->declBit(c+3581,"IF_clock", false,-1);
    tracep->declBit(c+3582,"IF_reset", false,-1);
    tracep->declBit(c+17,"IF_io_branch_io_is_branch", false,-1);
    tracep->declBit(c+18,"IF_io_branch_io_is_jump", false,-1);
    tracep->declQuad(c+19,"IF_io_branch_io_dnpc", false,-1, 63,0);
    tracep->declBit(c+21,"IF_io_cache_req_addr_req_valid", false,-1);
    tracep->declQuad(c+3583,"IF_io_cache_req_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+22,"IF_io_cache_req_rdata_rep_ready", false,-1);
    tracep->declBit(c+23,"IF_io_cache_req_rdata_rep_valid", false,-1);
    tracep->declQuad(c+24,"IF_io_cache_req_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+22,"IF_io_out_ready", false,-1);
    tracep->declBit(c+23,"IF_io_out_valid", false,-1);
    tracep->declQuad(c+3583,"IF_io_out_bits_PC", false,-1, 63,0);
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
    tracep->declBit(c+3581,"EX_clock", false,-1);
    tracep->declBit(c+3582,"EX_reset", false,-1);
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
    tracep->declQuad(c+72,"EX_io_out_bits_ctrl_csr_csr_data", false,-1, 63,0);
    tracep->declBit(c+74,"EX_io_out_bits_ctrl_csr_csr_en", false,-1);
    tracep->declBus(c+75,"EX_io_out_bits_ctrl_csr_csr_idx", false,-1, 11,0);
    tracep->declBit(c+76,"EX_io_is_break", false,-1);
    tracep->declBit(c+27,"EX_io_is_flush", false,-1);
    tracep->declBit(c+77,"EX_io_icache_busy", false,-1);
    tracep->declQuad(c+78,"EX_io_csr_rd_io_rd_data", false,-1, 63,0);
    tracep->declBus(c+75,"EX_io_csr_rd_io_csr_addr", false,-1, 11,0);
    tracep->declBit(c+80,"DIP_is_break", false,-1);
    tracep->declQuad(c+81,"DIP_rf_0", false,-1, 63,0);
    tracep->declQuad(c+83,"DIP_rf_1", false,-1, 63,0);
    tracep->declQuad(c+85,"DIP_rf_2", false,-1, 63,0);
    tracep->declQuad(c+87,"DIP_rf_3", false,-1, 63,0);
    tracep->declQuad(c+89,"DIP_rf_4", false,-1, 63,0);
    tracep->declQuad(c+91,"DIP_rf_5", false,-1, 63,0);
    tracep->declQuad(c+93,"DIP_rf_6", false,-1, 63,0);
    tracep->declQuad(c+95,"DIP_rf_7", false,-1, 63,0);
    tracep->declQuad(c+97,"DIP_rf_8", false,-1, 63,0);
    tracep->declQuad(c+99,"DIP_rf_9", false,-1, 63,0);
    tracep->declQuad(c+101,"DIP_rf_10", false,-1, 63,0);
    tracep->declQuad(c+103,"DIP_rf_11", false,-1, 63,0);
    tracep->declQuad(c+105,"DIP_rf_12", false,-1, 63,0);
    tracep->declQuad(c+107,"DIP_rf_13", false,-1, 63,0);
    tracep->declQuad(c+109,"DIP_rf_14", false,-1, 63,0);
    tracep->declQuad(c+111,"DIP_rf_15", false,-1, 63,0);
    tracep->declQuad(c+113,"DIP_rf_16", false,-1, 63,0);
    tracep->declQuad(c+115,"DIP_rf_17", false,-1, 63,0);
    tracep->declQuad(c+117,"DIP_rf_18", false,-1, 63,0);
    tracep->declQuad(c+119,"DIP_rf_19", false,-1, 63,0);
    tracep->declQuad(c+121,"DIP_rf_20", false,-1, 63,0);
    tracep->declQuad(c+123,"DIP_rf_21", false,-1, 63,0);
    tracep->declQuad(c+125,"DIP_rf_22", false,-1, 63,0);
    tracep->declQuad(c+127,"DIP_rf_23", false,-1, 63,0);
    tracep->declQuad(c+129,"DIP_rf_24", false,-1, 63,0);
    tracep->declQuad(c+131,"DIP_rf_25", false,-1, 63,0);
    tracep->declQuad(c+133,"DIP_rf_26", false,-1, 63,0);
    tracep->declQuad(c+135,"DIP_rf_27", false,-1, 63,0);
    tracep->declQuad(c+137,"DIP_rf_28", false,-1, 63,0);
    tracep->declQuad(c+139,"DIP_rf_29", false,-1, 63,0);
    tracep->declQuad(c+141,"DIP_rf_30", false,-1, 63,0);
    tracep->declQuad(c+143,"DIP_rf_31", false,-1, 63,0);
    tracep->declBus(c+145,"DIP_inst", false,-1, 31,0);
    tracep->declQuad(c+146,"DIP_pc", false,-1, 63,0);
    tracep->declBit(c+148,"DIP_inst_valid", false,-1);
    tracep->declQuad(c+149,"DIP_dnpc", false,-1, 63,0);
    tracep->declBit(c+151,"DIP_is_skip", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+152+i*2,"rf", true,(i+0), 63,0);
    }
    tracep->declBit(c+3586,"rf_bypass_io_Reg1_MPORT_en", false,-1);
    tracep->declBus(c+41,"rf_bypass_io_Reg1_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+216,"rf_bypass_io_Reg1_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3586,"rf_bypass_io_Reg2_MPORT_en", false,-1);
    tracep->declBus(c+42,"rf_bypass_io_Reg2_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+218,"rf_bypass_io_Reg2_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3586,"rf_DIP_io_rf_0_MPORT_en", false,-1);
    tracep->declBus(c+3587,"rf_DIP_io_rf_0_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+81,"rf_DIP_io_rf_0_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3586,"rf_DIP_io_rf_1_MPORT_en", false,-1);
    tracep->declBus(c+3588,"rf_DIP_io_rf_1_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+83,"rf_DIP_io_rf_1_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3586,"rf_DIP_io_rf_2_MPORT_en", false,-1);
    tracep->declBus(c+3589,"rf_DIP_io_rf_2_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+85,"rf_DIP_io_rf_2_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3586,"rf_DIP_io_rf_3_MPORT_en", false,-1);
    tracep->declBus(c+3590,"rf_DIP_io_rf_3_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+87,"rf_DIP_io_rf_3_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3586,"rf_DIP_io_rf_4_MPORT_en", false,-1);
    tracep->declBus(c+3591,"rf_DIP_io_rf_4_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+89,"rf_DIP_io_rf_4_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3586,"rf_DIP_io_rf_5_MPORT_en", false,-1);
    tracep->declBus(c+3592,"rf_DIP_io_rf_5_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+91,"rf_DIP_io_rf_5_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3586,"rf_DIP_io_rf_6_MPORT_en", false,-1);
    tracep->declBus(c+3593,"rf_DIP_io_rf_6_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+93,"rf_DIP_io_rf_6_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3586,"rf_DIP_io_rf_7_MPORT_en", false,-1);
    tracep->declBus(c+3594,"rf_DIP_io_rf_7_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+95,"rf_DIP_io_rf_7_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3586,"rf_DIP_io_rf_8_MPORT_en", false,-1);
    tracep->declBus(c+3595,"rf_DIP_io_rf_8_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+97,"rf_DIP_io_rf_8_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3586,"rf_DIP_io_rf_9_MPORT_en", false,-1);
    tracep->declBus(c+3596,"rf_DIP_io_rf_9_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+99,"rf_DIP_io_rf_9_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3586,"rf_DIP_io_rf_10_MPORT_en", false,-1);
    tracep->declBus(c+3597,"rf_DIP_io_rf_10_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+101,"rf_DIP_io_rf_10_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3586,"rf_DIP_io_rf_11_MPORT_en", false,-1);
    tracep->declBus(c+3598,"rf_DIP_io_rf_11_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+103,"rf_DIP_io_rf_11_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3586,"rf_DIP_io_rf_12_MPORT_en", false,-1);
    tracep->declBus(c+3599,"rf_DIP_io_rf_12_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+105,"rf_DIP_io_rf_12_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3586,"rf_DIP_io_rf_13_MPORT_en", false,-1);
    tracep->declBus(c+3600,"rf_DIP_io_rf_13_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+107,"rf_DIP_io_rf_13_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3586,"rf_DIP_io_rf_14_MPORT_en", false,-1);
    tracep->declBus(c+3601,"rf_DIP_io_rf_14_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+109,"rf_DIP_io_rf_14_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3586,"rf_DIP_io_rf_15_MPORT_en", false,-1);
    tracep->declBus(c+3602,"rf_DIP_io_rf_15_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+111,"rf_DIP_io_rf_15_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3586,"rf_DIP_io_rf_16_MPORT_en", false,-1);
    tracep->declBus(c+3603,"rf_DIP_io_rf_16_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+113,"rf_DIP_io_rf_16_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3586,"rf_DIP_io_rf_17_MPORT_en", false,-1);
    tracep->declBus(c+3604,"rf_DIP_io_rf_17_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+115,"rf_DIP_io_rf_17_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3586,"rf_DIP_io_rf_18_MPORT_en", false,-1);
    tracep->declBus(c+3605,"rf_DIP_io_rf_18_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+117,"rf_DIP_io_rf_18_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3586,"rf_DIP_io_rf_19_MPORT_en", false,-1);
    tracep->declBus(c+3606,"rf_DIP_io_rf_19_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+119,"rf_DIP_io_rf_19_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3586,"rf_DIP_io_rf_20_MPORT_en", false,-1);
    tracep->declBus(c+3607,"rf_DIP_io_rf_20_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+121,"rf_DIP_io_rf_20_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3586,"rf_DIP_io_rf_21_MPORT_en", false,-1);
    tracep->declBus(c+3608,"rf_DIP_io_rf_21_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+123,"rf_DIP_io_rf_21_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3586,"rf_DIP_io_rf_22_MPORT_en", false,-1);
    tracep->declBus(c+3609,"rf_DIP_io_rf_22_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+125,"rf_DIP_io_rf_22_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3586,"rf_DIP_io_rf_23_MPORT_en", false,-1);
    tracep->declBus(c+3610,"rf_DIP_io_rf_23_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+127,"rf_DIP_io_rf_23_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3586,"rf_DIP_io_rf_24_MPORT_en", false,-1);
    tracep->declBus(c+3611,"rf_DIP_io_rf_24_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+129,"rf_DIP_io_rf_24_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3586,"rf_DIP_io_rf_25_MPORT_en", false,-1);
    tracep->declBus(c+3612,"rf_DIP_io_rf_25_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+131,"rf_DIP_io_rf_25_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3586,"rf_DIP_io_rf_26_MPORT_en", false,-1);
    tracep->declBus(c+3613,"rf_DIP_io_rf_26_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+133,"rf_DIP_io_rf_26_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3586,"rf_DIP_io_rf_27_MPORT_en", false,-1);
    tracep->declBus(c+3614,"rf_DIP_io_rf_27_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+135,"rf_DIP_io_rf_27_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3586,"rf_DIP_io_rf_28_MPORT_en", false,-1);
    tracep->declBus(c+3615,"rf_DIP_io_rf_28_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+137,"rf_DIP_io_rf_28_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3586,"rf_DIP_io_rf_29_MPORT_en", false,-1);
    tracep->declBus(c+3616,"rf_DIP_io_rf_29_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+139,"rf_DIP_io_rf_29_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3586,"rf_DIP_io_rf_30_MPORT_en", false,-1);
    tracep->declBus(c+3617,"rf_DIP_io_rf_30_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+141,"rf_DIP_io_rf_30_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3586,"rf_DIP_io_rf_31_MPORT_en", false,-1);
    tracep->declBus(c+3618,"rf_DIP_io_rf_31_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+143,"rf_DIP_io_rf_31_MPORT_data", false,-1, 63,0);
    tracep->declQuad(c+220,"rf_MPORT_data", false,-1, 63,0);
    tracep->declBus(c+222,"rf_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+3586,"rf_MPORT_mask", false,-1);
    tracep->declBit(c+223,"rf_MPORT_en", false,-1);
    tracep->declBit(c+64,"MEM_io_in_ready", false,-1);
    tracep->declBit(c+224,"MEM_io_in_valid", false,-1);
    tracep->declBus(c+225,"MEM_io_in_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+226,"MEM_io_in_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+227,"MEM_io_in_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+228,"MEM_io_in_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+229,"MEM_io_in_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+231,"MEM_io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+232,"MEM_io_in_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+234,"MEM_io_in_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declQuad(c+235,"MEM_io_in_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+237,"MEM_io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+239,"MEM_io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+241,"MEM_io_in_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declQuad(c+243,"MEM_io_in_bits_ctrl_csr_csr_data", false,-1, 63,0);
    tracep->declBit(c+245,"MEM_io_in_bits_ctrl_csr_csr_en", false,-1);
    tracep->declBus(c+246,"MEM_io_in_bits_ctrl_csr_csr_idx", false,-1, 11,0);
    tracep->declBit(c+3586,"MEM_io_out_ready", false,-1);
    tracep->declBit(c+247,"MEM_io_out_valid", false,-1);
    tracep->declBit(c+248,"MEM_io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+227,"MEM_io_out_bits_ctrl_signal_rfWen", false,-1);
    tracep->declQuad(c+229,"MEM_io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+231,"MEM_io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+232,"MEM_io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBit(c+249,"MEM_io_out_bits_ctrl_flow_skip", false,-1);
    tracep->declBus(c+234,"MEM_io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+250,"MEM_io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+5,"MEM_io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+243,"MEM_io_out_bits_ctrl_csr_csr_data", false,-1, 63,0);
    tracep->declBit(c+251,"MEM_io_out_bits_ctrl_csr_csr_en", false,-1);
    tracep->declBus(c+246,"MEM_io_out_bits_ctrl_csr_csr_idx", false,-1, 11,0);
    tracep->declBit(c+252,"MEM_io_cache_io_addr_req_valid", false,-1);
    tracep->declQuad(c+253,"MEM_io_cache_io_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+252,"MEM_io_cache_io_addr_req_bits_ce", false,-1);
    tracep->declBit(c+255,"MEM_io_cache_io_addr_req_bits_we", false,-1);
    tracep->declBit(c+256,"MEM_io_cache_io_rdata_rep_valid", false,-1);
    tracep->declQuad(c+7,"MEM_io_cache_io_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+257,"MEM_io_cache_io_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+259,"MEM_io_cache_io_wdata_req_bits_wmask", false,-1, 7,0);
    tracep->declBit(c+260,"MEM_io_cache_io_wdata_rep", false,-1);
    tracep->declBit(c+261,"WB_io_in_valid", false,-1);
    tracep->declBit(c+262,"WB_io_in_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+263,"WB_io_in_bits_ctrl_signal_rfWen", false,-1);
    tracep->declQuad(c+264,"WB_io_in_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+3585,"WB_io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+266,"WB_io_in_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBit(c+268,"WB_io_in_bits_ctrl_flow_skip", false,-1);
    tracep->declBus(c+222,"WB_io_in_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declQuad(c+269,"WB_io_in_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+271,"WB_io_in_bits_ctrl_csr_csr_data", false,-1, 63,0);
    tracep->declBit(c+273,"WB_io_in_bits_ctrl_csr_csr_en", false,-1);
    tracep->declBus(c+274,"WB_io_in_bits_ctrl_csr_csr_idx", false,-1, 11,0);
    tracep->declBit(c+3586,"WB_io_out_ready", false,-1);
    tracep->declBit(c+261,"WB_io_out_valid", false,-1);
    tracep->declBit(c+275,"WB_io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declQuad(c+264,"WB_io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+3585,"WB_io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+266,"WB_io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBit(c+268,"WB_io_out_bits_ctrl_flow_skip", false,-1);
    tracep->declBus(c+222,"WB_io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+223,"WB_io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+269,"WB_io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+271,"WB_io_out_bits_ctrl_csr_csr_data", false,-1, 63,0);
    tracep->declBit(c+276,"WB_io_out_bits_ctrl_csr_csr_en", false,-1);
    tracep->declBus(c+274,"WB_io_out_bits_ctrl_csr_csr_idx", false,-1, 11,0);
    tracep->declBus(c+33,"bypass_io_EX_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+34,"bypass_io_EX_rf_rfWen", false,-1);
    tracep->declQuad(c+66,"bypass_io_EX_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+234,"bypass_io_MEM_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+250,"bypass_io_MEM_rf_rfWen", false,-1);
    tracep->declQuad(c+5,"bypass_io_MEM_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+222,"bypass_io_WB_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+223,"bypass_io_WB_rf_rfWen", false,-1);
    tracep->declQuad(c+269,"bypass_io_WB_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+277,"bypass_io_Reg1", false,-1, 63,0);
    tracep->declBus(c+41,"bypass_io_reg_index1", false,-1, 4,0);
    tracep->declQuad(c+279,"bypass_io_Reg2", false,-1, 63,0);
    tracep->declBus(c+42,"bypass_io_reg_index2", false,-1, 4,0);
    tracep->declQuad(c+1,"bypass_io_Bypass_REG1", false,-1, 63,0);
    tracep->declQuad(c+3,"bypass_io_Bypass_REG2", false,-1, 63,0);
    tracep->declBit(c+3581,"ICACHE_clock", false,-1);
    tracep->declBit(c+3582,"ICACHE_reset", false,-1);
    tracep->declBit(c+21,"ICACHE_io_in_addr_req_valid", false,-1);
    tracep->declQuad(c+3583,"ICACHE_io_in_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+22,"ICACHE_io_in_rdata_rep_ready", false,-1);
    tracep->declBit(c+23,"ICACHE_io_in_rdata_rep_valid", false,-1);
    tracep->declQuad(c+24,"ICACHE_io_in_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+77,"ICACHE_io_cache_busy", false,-1);
    tracep->declBit(c+281,"ICACHE_io_out_raddr_req_ready", false,-1);
    tracep->declBit(c+282,"ICACHE_io_out_raddr_req_valid", false,-1);
    tracep->declQuad(c+283,"ICACHE_io_out_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+285,"ICACHE_io_out_rdata_rep_valid", false,-1);
    tracep->declQuad(c+9,"ICACHE_io_out_rdata_rep_bits_data", false,-1, 63,0);
    tracep->declBit(c+286,"ICACHE_io_out_rdata_rep_bits_last", false,-1);
    tracep->declBit(c+287,"ICACHE_io_out_wb_valid", false,-1);
    tracep->declBus(c+3619,"ICACHE_io_out_wb_bits_breap", false,-1, 1,0);
    tracep->declBit(c+3582,"MMEM_reset", false,-1);
    tracep->declBit(c+3581,"MMEM_clk", false,-1);
    tracep->declBit(c+288,"MMEM_ar_valid", false,-1);
    tracep->declBit(c+289,"MMEM_ar_ready", false,-1);
    tracep->declQuad(c+290,"MMEM_ar_addr", false,-1, 63,0);
    tracep->declBus(c+3620,"MMEM_ar_id", false,-1, 3,0);
    tracep->declBus(c+292,"MMEM_ar_len", false,-1, 7,0);
    tracep->declBus(c+3621,"MMEM_ar_size", false,-1, 2,0);
    tracep->declBus(c+3622,"MMEM_ar_prot", false,-1, 2,0);
    tracep->declBus(c+3623,"MMEM_ar_burst", false,-1, 1,0);
    tracep->declBus(c+3619,"MMEM_ar_lock", false,-1, 1,0);
    tracep->declBus(c+3624,"MMEM_ar_cache", false,-1, 3,0);
    tracep->declBit(c+293,"MMEM_rd_valid", false,-1);
    tracep->declBit(c+3586,"MMEM_rd_ready", false,-1);
    tracep->declQuad(c+9,"MMEM_rd_data", false,-1, 63,0);
    tracep->declBus(c+3625,"MMEM_rd_id", false,-1, 3,0);
    tracep->declBus(c+3626,"MMEM_rd_resp", false,-1, 1,0);
    tracep->declBit(c+286,"MMEM_rd_last", false,-1);
    tracep->declBit(c+294,"MMEM_aw_valid", false,-1);
    tracep->declBit(c+295,"MMEM_aw_ready", false,-1);
    tracep->declQuad(c+296,"MMEM_aw_addr", false,-1, 63,0);
    tracep->declBus(c+3620,"MMEM_aw_id", false,-1, 3,0);
    tracep->declBus(c+292,"MMEM_aw_len", false,-1, 7,0);
    tracep->declBus(c+3621,"MMEM_aw_size", false,-1, 2,0);
    tracep->declBus(c+3622,"MMEM_aw_prot", false,-1, 2,0);
    tracep->declBus(c+3623,"MMEM_aw_burst", false,-1, 1,0);
    tracep->declBus(c+3619,"MMEM_aw_lock", false,-1, 1,0);
    tracep->declBus(c+3624,"MMEM_aw_cache", false,-1, 3,0);
    tracep->declBit(c+298,"MMEM_wd_valid", false,-1);
    tracep->declBit(c+299,"MMEM_wd_ready", false,-1);
    tracep->declQuad(c+300,"MMEM_wd_data", false,-1, 63,0);
    tracep->declBus(c+302,"MMEM_wstrb", false,-1, 7,0);
    tracep->declBus(c+3620,"MMEM_wd_id", false,-1, 3,0);
    tracep->declBit(c+303,"MMEM_wd_last", false,-1);
    tracep->declBit(c+304,"MMEM_wr_valid", false,-1);
    tracep->declBit(c+305,"MMEM_wr_ready", false,-1);
    tracep->declBus(c+3619,"MMEM_wr_breap", false,-1, 1,0);
    tracep->declBus(c+3627,"MMEM_wr_id", false,-1, 3,0);
    tracep->declBit(c+3581,"ARBITER_clock", false,-1);
    tracep->declBit(c+3582,"ARBITER_reset", false,-1);
    tracep->declBit(c+306,"ARBITER_io_in1_raddr_req_ready", false,-1);
    tracep->declBit(c+307,"ARBITER_io_in1_raddr_req_valid", false,-1);
    tracep->declQuad(c+308,"ARBITER_io_in1_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBus(c+310,"ARBITER_io_in1_raddr_req_bits_len", false,-1, 7,0);
    tracep->declBit(c+311,"ARBITER_io_in1_waddr_req_ready", false,-1);
    tracep->declBit(c+312,"ARBITER_io_in1_waddr_req_valid", false,-1);
    tracep->declQuad(c+313,"ARBITER_io_in1_waddr_req_bits_addr", false,-1, 63,0);
    tracep->declBus(c+310,"ARBITER_io_in1_waddr_req_bits_len", false,-1, 7,0);
    tracep->declBit(c+3586,"ARBITER_io_in1_rdata_rep_ready", false,-1);
    tracep->declBit(c+315,"ARBITER_io_in1_rdata_rep_valid", false,-1);
    tracep->declQuad(c+9,"ARBITER_io_in1_rdata_rep_bits_data", false,-1, 63,0);
    tracep->declBit(c+286,"ARBITER_io_in1_rdata_rep_bits_last", false,-1);
    tracep->declBit(c+316,"ARBITER_io_in1_wdata_req_ready", false,-1);
    tracep->declBit(c+317,"ARBITER_io_in1_wdata_req_valid", false,-1);
    tracep->declQuad(c+318,"ARBITER_io_in1_wdata_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+320,"ARBITER_io_in1_wdata_req_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+321,"ARBITER_io_in1_wdata_req_bits_last", false,-1);
    tracep->declBit(c+322,"ARBITER_io_in1_wb_ready", false,-1);
    tracep->declBit(c+323,"ARBITER_io_in1_wb_valid", false,-1);
    tracep->declBus(c+3619,"ARBITER_io_in1_wb_bits_breap", false,-1, 1,0);
    tracep->declBit(c+281,"ARBITER_io_in2_raddr_req_ready", false,-1);
    tracep->declBit(c+282,"ARBITER_io_in2_raddr_req_valid", false,-1);
    tracep->declQuad(c+283,"ARBITER_io_in2_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+285,"ARBITER_io_in2_rdata_rep_valid", false,-1);
    tracep->declQuad(c+9,"ARBITER_io_in2_rdata_rep_bits_data", false,-1, 63,0);
    tracep->declBit(c+286,"ARBITER_io_in2_rdata_rep_bits_last", false,-1);
    tracep->declBit(c+287,"ARBITER_io_in2_wb_valid", false,-1);
    tracep->declBus(c+3619,"ARBITER_io_in2_wb_bits_breap", false,-1, 1,0);
    tracep->declBit(c+289,"ARBITER_io_out_raddr_req_ready", false,-1);
    tracep->declBit(c+288,"ARBITER_io_out_raddr_req_valid", false,-1);
    tracep->declQuad(c+290,"ARBITER_io_out_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBus(c+292,"ARBITER_io_out_raddr_req_bits_len", false,-1, 7,0);
    tracep->declBit(c+295,"ARBITER_io_out_waddr_req_ready", false,-1);
    tracep->declBit(c+294,"ARBITER_io_out_waddr_req_valid", false,-1);
    tracep->declQuad(c+296,"ARBITER_io_out_waddr_req_bits_addr", false,-1, 63,0);
    tracep->declBus(c+292,"ARBITER_io_out_waddr_req_bits_len", false,-1, 7,0);
    tracep->declBit(c+3586,"ARBITER_io_out_rdata_rep_ready", false,-1);
    tracep->declBit(c+293,"ARBITER_io_out_rdata_rep_valid", false,-1);
    tracep->declQuad(c+9,"ARBITER_io_out_rdata_rep_bits_data", false,-1, 63,0);
    tracep->declBit(c+286,"ARBITER_io_out_rdata_rep_bits_last", false,-1);
    tracep->declBit(c+299,"ARBITER_io_out_wdata_req_ready", false,-1);
    tracep->declBit(c+298,"ARBITER_io_out_wdata_req_valid", false,-1);
    tracep->declQuad(c+300,"ARBITER_io_out_wdata_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+302,"ARBITER_io_out_wdata_req_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+303,"ARBITER_io_out_wdata_req_bits_last", false,-1);
    tracep->declBit(c+305,"ARBITER_io_out_wb_ready", false,-1);
    tracep->declBit(c+304,"ARBITER_io_out_wb_valid", false,-1);
    tracep->declBus(c+3619,"ARBITER_io_out_wb_bits_breap", false,-1, 1,0);
    tracep->declBit(c+3581,"MMIO_clock", false,-1);
    tracep->declBit(c+3582,"MMIO_reset", false,-1);
    tracep->declBit(c+252,"MMIO_io_in_addr_req_valid", false,-1);
    tracep->declQuad(c+253,"MMIO_io_in_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+252,"MMIO_io_in_addr_req_bits_ce", false,-1);
    tracep->declBit(c+255,"MMIO_io_in_addr_req_bits_we", false,-1);
    tracep->declBit(c+256,"MMIO_io_in_rdata_rep_valid", false,-1);
    tracep->declQuad(c+7,"MMIO_io_in_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+257,"MMIO_io_in_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+259,"MMIO_io_in_wdata_req_bits_wmask", false,-1, 7,0);
    tracep->declBit(c+260,"MMIO_io_in_wdata_rep", false,-1);
    tracep->declBit(c+306,"MMIO_io_out_raddr_req_ready", false,-1);
    tracep->declBit(c+307,"MMIO_io_out_raddr_req_valid", false,-1);
    tracep->declQuad(c+308,"MMIO_io_out_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBus(c+310,"MMIO_io_out_raddr_req_bits_len", false,-1, 7,0);
    tracep->declBit(c+311,"MMIO_io_out_waddr_req_ready", false,-1);
    tracep->declBit(c+312,"MMIO_io_out_waddr_req_valid", false,-1);
    tracep->declQuad(c+313,"MMIO_io_out_waddr_req_bits_addr", false,-1, 63,0);
    tracep->declBus(c+310,"MMIO_io_out_waddr_req_bits_len", false,-1, 7,0);
    tracep->declBit(c+3586,"MMIO_io_out_rdata_rep_ready", false,-1);
    tracep->declBit(c+315,"MMIO_io_out_rdata_rep_valid", false,-1);
    tracep->declQuad(c+9,"MMIO_io_out_rdata_rep_bits_data", false,-1, 63,0);
    tracep->declBit(c+286,"MMIO_io_out_rdata_rep_bits_last", false,-1);
    tracep->declBit(c+316,"MMIO_io_out_wdata_req_ready", false,-1);
    tracep->declBit(c+317,"MMIO_io_out_wdata_req_valid", false,-1);
    tracep->declQuad(c+318,"MMIO_io_out_wdata_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+320,"MMIO_io_out_wdata_req_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+321,"MMIO_io_out_wdata_req_bits_last", false,-1);
    tracep->declBit(c+322,"MMIO_io_out_wb_ready", false,-1);
    tracep->declBit(c+323,"MMIO_io_out_wb_valid", false,-1);
    tracep->declBus(c+3619,"MMIO_io_out_wb_bits_breap", false,-1, 1,0);
    tracep->declBit(c+3581,"CSR_clock", false,-1);
    tracep->declBit(c+3582,"CSR_reset", false,-1);
    tracep->declQuad(c+78,"CSR_io_rd_rd_data", false,-1, 63,0);
    tracep->declBus(c+75,"CSR_io_rd_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+271,"CSR_io_wr_csr_data", false,-1, 63,0);
    tracep->declBit(c+276,"CSR_io_wr_csr_en", false,-1);
    tracep->declBus(c+274,"CSR_io_wr_csr_idx", false,-1, 11,0);
    tracep->declBus(c+324,"head", false,-1, 5,0);
    tracep->declBus(c+325,"tail", false,-1, 5,0);
    tracep->declBit(c+326,"empty", false,-1);
    tracep->declBit(c+327,"full", false,-1);
    tracep->declQuad(c+328,"buffer_0_PC", false,-1, 63,0);
    tracep->declBus(c+330,"buffer_0_Inst", false,-1, 31,0);
    tracep->declQuad(c+331,"buffer_1_PC", false,-1, 63,0);
    tracep->declBus(c+333,"buffer_1_Inst", false,-1, 31,0);
    tracep->declQuad(c+334,"buffer_2_PC", false,-1, 63,0);
    tracep->declBus(c+336,"buffer_2_Inst", false,-1, 31,0);
    tracep->declQuad(c+337,"buffer_3_PC", false,-1, 63,0);
    tracep->declBus(c+339,"buffer_3_Inst", false,-1, 31,0);
    tracep->declQuad(c+340,"buffer_4_PC", false,-1, 63,0);
    tracep->declBus(c+342,"buffer_4_Inst", false,-1, 31,0);
    tracep->declQuad(c+343,"buffer_5_PC", false,-1, 63,0);
    tracep->declBus(c+345,"buffer_5_Inst", false,-1, 31,0);
    tracep->declQuad(c+346,"buffer_6_PC", false,-1, 63,0);
    tracep->declBus(c+348,"buffer_6_Inst", false,-1, 31,0);
    tracep->declQuad(c+349,"buffer_7_PC", false,-1, 63,0);
    tracep->declBus(c+351,"buffer_7_Inst", false,-1, 31,0);
    tracep->declQuad(c+352,"buffer_8_PC", false,-1, 63,0);
    tracep->declBus(c+354,"buffer_8_Inst", false,-1, 31,0);
    tracep->declQuad(c+355,"buffer_9_PC", false,-1, 63,0);
    tracep->declBus(c+357,"buffer_9_Inst", false,-1, 31,0);
    tracep->declQuad(c+358,"buffer_10_PC", false,-1, 63,0);
    tracep->declBus(c+360,"buffer_10_Inst", false,-1, 31,0);
    tracep->declQuad(c+361,"buffer_11_PC", false,-1, 63,0);
    tracep->declBus(c+363,"buffer_11_Inst", false,-1, 31,0);
    tracep->declQuad(c+364,"buffer_12_PC", false,-1, 63,0);
    tracep->declBus(c+366,"buffer_12_Inst", false,-1, 31,0);
    tracep->declQuad(c+367,"buffer_13_PC", false,-1, 63,0);
    tracep->declBus(c+369,"buffer_13_Inst", false,-1, 31,0);
    tracep->declQuad(c+370,"buffer_14_PC", false,-1, 63,0);
    tracep->declBus(c+372,"buffer_14_Inst", false,-1, 31,0);
    tracep->declQuad(c+373,"buffer_15_PC", false,-1, 63,0);
    tracep->declBus(c+375,"buffer_15_Inst", false,-1, 31,0);
    tracep->declQuad(c+376,"buffer_16_PC", false,-1, 63,0);
    tracep->declBus(c+378,"buffer_16_Inst", false,-1, 31,0);
    tracep->declQuad(c+379,"buffer_17_PC", false,-1, 63,0);
    tracep->declBus(c+381,"buffer_17_Inst", false,-1, 31,0);
    tracep->declQuad(c+382,"buffer_18_PC", false,-1, 63,0);
    tracep->declBus(c+384,"buffer_18_Inst", false,-1, 31,0);
    tracep->declQuad(c+385,"buffer_19_PC", false,-1, 63,0);
    tracep->declBus(c+387,"buffer_19_Inst", false,-1, 31,0);
    tracep->declQuad(c+388,"buffer_20_PC", false,-1, 63,0);
    tracep->declBus(c+390,"buffer_20_Inst", false,-1, 31,0);
    tracep->declQuad(c+391,"buffer_21_PC", false,-1, 63,0);
    tracep->declBus(c+393,"buffer_21_Inst", false,-1, 31,0);
    tracep->declQuad(c+394,"buffer_22_PC", false,-1, 63,0);
    tracep->declBus(c+396,"buffer_22_Inst", false,-1, 31,0);
    tracep->declQuad(c+397,"buffer_23_PC", false,-1, 63,0);
    tracep->declBus(c+399,"buffer_23_Inst", false,-1, 31,0);
    tracep->declQuad(c+400,"buffer_24_PC", false,-1, 63,0);
    tracep->declBus(c+402,"buffer_24_Inst", false,-1, 31,0);
    tracep->declQuad(c+403,"buffer_25_PC", false,-1, 63,0);
    tracep->declBus(c+405,"buffer_25_Inst", false,-1, 31,0);
    tracep->declQuad(c+406,"buffer_26_PC", false,-1, 63,0);
    tracep->declBus(c+408,"buffer_26_Inst", false,-1, 31,0);
    tracep->declQuad(c+409,"buffer_27_PC", false,-1, 63,0);
    tracep->declBus(c+411,"buffer_27_Inst", false,-1, 31,0);
    tracep->declQuad(c+412,"buffer_28_PC", false,-1, 63,0);
    tracep->declBus(c+414,"buffer_28_Inst", false,-1, 31,0);
    tracep->declQuad(c+415,"buffer_29_PC", false,-1, 63,0);
    tracep->declBus(c+417,"buffer_29_Inst", false,-1, 31,0);
    tracep->declQuad(c+418,"buffer_30_PC", false,-1, 63,0);
    tracep->declBus(c+420,"buffer_30_Inst", false,-1, 31,0);
    tracep->declQuad(c+421,"buffer_31_PC", false,-1, 63,0);
    tracep->declBus(c+423,"buffer_31_Inst", false,-1, 31,0);
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
    tracep->declBit(c+224,"valid_1", false,-1);
    tracep->declBus(c+225,"MEM_io_in_bits_r_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+226,"MEM_io_in_bits_r_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+227,"MEM_io_in_bits_r_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+228,"MEM_io_in_bits_r_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+229,"MEM_io_in_bits_r_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+231,"MEM_io_in_bits_r_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+232,"MEM_io_in_bits_r_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+234,"MEM_io_in_bits_r_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declQuad(c+235,"MEM_io_in_bits_r_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+237,"MEM_io_in_bits_r_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+239,"MEM_io_in_bits_r_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+241,"MEM_io_in_bits_r_ctrl_data_Imm", false,-1, 63,0);
    tracep->declQuad(c+243,"MEM_io_in_bits_r_ctrl_csr_csr_data", false,-1, 63,0);
    tracep->declBit(c+245,"MEM_io_in_bits_r_ctrl_csr_csr_en", false,-1);
    tracep->declBus(c+246,"MEM_io_in_bits_r_ctrl_csr_csr_idx", false,-1, 11,0);
    tracep->declBit(c+261,"valid_2", false,-1);
    tracep->declBit(c+262,"WB_io_in_bits_r_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+263,"WB_io_in_bits_r_ctrl_signal_rfWen", false,-1);
    tracep->declQuad(c+264,"WB_io_in_bits_r_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+424,"WB_io_in_bits_r_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+266,"WB_io_in_bits_r_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBit(c+268,"WB_io_in_bits_r_ctrl_flow_skip", false,-1);
    tracep->declBus(c+222,"WB_io_in_bits_r_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declQuad(c+269,"WB_io_in_bits_r_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+271,"WB_io_in_bits_r_ctrl_csr_csr_data", false,-1, 63,0);
    tracep->declBit(c+273,"WB_io_in_bits_r_ctrl_csr_csr_en", false,-1);
    tracep->declBus(c+274,"WB_io_in_bits_r_ctrl_csr_csr_idx", false,-1, 11,0);
    tracep->declBit(c+425,"DIP_io_is_break_REG", false,-1);
    tracep->declBit(c+80,"DIP_io_is_break_REG_1", false,-1);
    tracep->declBus(c+145,"DIP_io_inst_REG", false,-1, 31,0);
    tracep->declBit(c+151,"DIP_io_is_skip_REG", false,-1);
    tracep->declBit(c+148,"DIP_io_inst_valid_REG", false,-1);
    tracep->declQuad(c+146,"DIP_io_pc_REG", false,-1, 63,0);
    tracep->declQuad(c+149,"DIP_io_dnpc_REG", false,-1, 63,0);
    tracep->pushNamePrefix("ARBITER ");
    tracep->declBit(c+3581,"clock", false,-1);
    tracep->declBit(c+3582,"reset", false,-1);
    tracep->declBit(c+306,"io_in1_raddr_req_ready", false,-1);
    tracep->declBit(c+307,"io_in1_raddr_req_valid", false,-1);
    tracep->declQuad(c+308,"io_in1_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBus(c+310,"io_in1_raddr_req_bits_len", false,-1, 7,0);
    tracep->declBit(c+311,"io_in1_waddr_req_ready", false,-1);
    tracep->declBit(c+312,"io_in1_waddr_req_valid", false,-1);
    tracep->declQuad(c+313,"io_in1_waddr_req_bits_addr", false,-1, 63,0);
    tracep->declBus(c+310,"io_in1_waddr_req_bits_len", false,-1, 7,0);
    tracep->declBit(c+3586,"io_in1_rdata_rep_ready", false,-1);
    tracep->declBit(c+315,"io_in1_rdata_rep_valid", false,-1);
    tracep->declQuad(c+9,"io_in1_rdata_rep_bits_data", false,-1, 63,0);
    tracep->declBit(c+286,"io_in1_rdata_rep_bits_last", false,-1);
    tracep->declBit(c+316,"io_in1_wdata_req_ready", false,-1);
    tracep->declBit(c+317,"io_in1_wdata_req_valid", false,-1);
    tracep->declQuad(c+318,"io_in1_wdata_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+320,"io_in1_wdata_req_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+321,"io_in1_wdata_req_bits_last", false,-1);
    tracep->declBit(c+322,"io_in1_wb_ready", false,-1);
    tracep->declBit(c+323,"io_in1_wb_valid", false,-1);
    tracep->declBus(c+3619,"io_in1_wb_bits_breap", false,-1, 1,0);
    tracep->declBit(c+281,"io_in2_raddr_req_ready", false,-1);
    tracep->declBit(c+282,"io_in2_raddr_req_valid", false,-1);
    tracep->declQuad(c+283,"io_in2_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+285,"io_in2_rdata_rep_valid", false,-1);
    tracep->declQuad(c+9,"io_in2_rdata_rep_bits_data", false,-1, 63,0);
    tracep->declBit(c+286,"io_in2_rdata_rep_bits_last", false,-1);
    tracep->declBit(c+287,"io_in2_wb_valid", false,-1);
    tracep->declBus(c+3619,"io_in2_wb_bits_breap", false,-1, 1,0);
    tracep->declBit(c+289,"io_out_raddr_req_ready", false,-1);
    tracep->declBit(c+288,"io_out_raddr_req_valid", false,-1);
    tracep->declQuad(c+290,"io_out_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBus(c+292,"io_out_raddr_req_bits_len", false,-1, 7,0);
    tracep->declBit(c+295,"io_out_waddr_req_ready", false,-1);
    tracep->declBit(c+294,"io_out_waddr_req_valid", false,-1);
    tracep->declQuad(c+296,"io_out_waddr_req_bits_addr", false,-1, 63,0);
    tracep->declBus(c+292,"io_out_waddr_req_bits_len", false,-1, 7,0);
    tracep->declBit(c+3586,"io_out_rdata_rep_ready", false,-1);
    tracep->declBit(c+293,"io_out_rdata_rep_valid", false,-1);
    tracep->declQuad(c+9,"io_out_rdata_rep_bits_data", false,-1, 63,0);
    tracep->declBit(c+286,"io_out_rdata_rep_bits_last", false,-1);
    tracep->declBit(c+299,"io_out_wdata_req_ready", false,-1);
    tracep->declBit(c+298,"io_out_wdata_req_valid", false,-1);
    tracep->declQuad(c+300,"io_out_wdata_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+302,"io_out_wdata_req_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+303,"io_out_wdata_req_bits_last", false,-1);
    tracep->declBit(c+305,"io_out_wb_ready", false,-1);
    tracep->declBit(c+304,"io_out_wb_valid", false,-1);
    tracep->declBus(c+3619,"io_out_wb_bits_breap", false,-1, 1,0);
    tracep->declBit(c+426,"state", false,-1);
    tracep->declBit(c+427,"choose_r", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CSR ");
    tracep->declBit(c+3581,"clock", false,-1);
    tracep->declBit(c+3582,"reset", false,-1);
    tracep->declQuad(c+78,"io_rd_rd_data", false,-1, 63,0);
    tracep->declBus(c+75,"io_rd_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+271,"io_wr_csr_data", false,-1, 63,0);
    tracep->declBit(c+276,"io_wr_csr_en", false,-1);
    tracep->declBus(c+274,"io_wr_csr_idx", false,-1, 11,0);
    tracep->declQuad(c+428,"CSRDIFF_mepc", false,-1, 63,0);
    tracep->declQuad(c+430,"CSRDIFF_mcause", false,-1, 63,0);
    tracep->declQuad(c+432,"CSRDIFF_mstatus", false,-1, 63,0);
    tracep->declQuad(c+434,"CSRDIFF_mtvec", false,-1, 63,0);
    tracep->declQuad(c+428,"mepc", false,-1, 63,0);
    tracep->declQuad(c+430,"mcause", false,-1, 63,0);
    tracep->declQuad(c+432,"mstatus", false,-1, 63,0);
    tracep->declQuad(c+434,"mtvec", false,-1, 63,0);
    tracep->declQuad(c+436,"mie", false,-1, 63,0);
    tracep->declQuad(c+438,"mip", false,-1, 63,0);
    tracep->pushNamePrefix("CSRDIFF ");
    tracep->declQuad(c+428,"mepc", false,-1, 63,0);
    tracep->declQuad(c+430,"mcause", false,-1, 63,0);
    tracep->declQuad(c+432,"mstatus", false,-1, 63,0);
    tracep->declQuad(c+434,"mtvec", false,-1, 63,0);
    for (int i = 0; i < 6; ++i) {
        tracep->declQuad(c+440+i*2,"inst_csr", true,(i+0), 63,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("DIP ");
    tracep->declBit(c+80,"is_break", false,-1);
    tracep->declBus(c+145,"inst", false,-1, 31,0);
    tracep->declQuad(c+81,"rf_0", false,-1, 63,0);
    tracep->declQuad(c+83,"rf_1", false,-1, 63,0);
    tracep->declQuad(c+85,"rf_2", false,-1, 63,0);
    tracep->declQuad(c+87,"rf_3", false,-1, 63,0);
    tracep->declQuad(c+89,"rf_4", false,-1, 63,0);
    tracep->declQuad(c+91,"rf_5", false,-1, 63,0);
    tracep->declQuad(c+93,"rf_6", false,-1, 63,0);
    tracep->declQuad(c+95,"rf_7", false,-1, 63,0);
    tracep->declQuad(c+97,"rf_8", false,-1, 63,0);
    tracep->declQuad(c+99,"rf_9", false,-1, 63,0);
    tracep->declQuad(c+101,"rf_10", false,-1, 63,0);
    tracep->declQuad(c+103,"rf_11", false,-1, 63,0);
    tracep->declQuad(c+105,"rf_12", false,-1, 63,0);
    tracep->declQuad(c+107,"rf_13", false,-1, 63,0);
    tracep->declQuad(c+109,"rf_14", false,-1, 63,0);
    tracep->declQuad(c+111,"rf_15", false,-1, 63,0);
    tracep->declQuad(c+113,"rf_16", false,-1, 63,0);
    tracep->declQuad(c+115,"rf_17", false,-1, 63,0);
    tracep->declQuad(c+117,"rf_18", false,-1, 63,0);
    tracep->declQuad(c+119,"rf_19", false,-1, 63,0);
    tracep->declQuad(c+121,"rf_20", false,-1, 63,0);
    tracep->declQuad(c+123,"rf_21", false,-1, 63,0);
    tracep->declQuad(c+125,"rf_22", false,-1, 63,0);
    tracep->declQuad(c+127,"rf_23", false,-1, 63,0);
    tracep->declQuad(c+129,"rf_24", false,-1, 63,0);
    tracep->declQuad(c+131,"rf_25", false,-1, 63,0);
    tracep->declQuad(c+133,"rf_26", false,-1, 63,0);
    tracep->declQuad(c+135,"rf_27", false,-1, 63,0);
    tracep->declQuad(c+137,"rf_28", false,-1, 63,0);
    tracep->declQuad(c+139,"rf_29", false,-1, 63,0);
    tracep->declQuad(c+141,"rf_30", false,-1, 63,0);
    tracep->declQuad(c+143,"rf_31", false,-1, 63,0);
    tracep->declBit(c+148,"inst_valid", false,-1);
    tracep->declBit(c+151,"is_skip", false,-1);
    tracep->declQuad(c+146,"pc", false,-1, 63,0);
    tracep->declQuad(c+149,"dnpc", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+452+i*2,"rf", true,(i+0), 63,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+516+i*1,"IN", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EX ");
    tracep->declBit(c+3581,"clock", false,-1);
    tracep->declBit(c+3582,"reset", false,-1);
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
    tracep->declQuad(c+72,"io_out_bits_ctrl_csr_csr_data", false,-1, 63,0);
    tracep->declBit(c+74,"io_out_bits_ctrl_csr_csr_en", false,-1);
    tracep->declBus(c+75,"io_out_bits_ctrl_csr_csr_idx", false,-1, 11,0);
    tracep->declBit(c+76,"io_is_break", false,-1);
    tracep->declBit(c+27,"io_is_flush", false,-1);
    tracep->declBit(c+77,"io_icache_busy", false,-1);
    tracep->declQuad(c+78,"io_csr_rd_io_rd_data", false,-1, 63,0);
    tracep->declBus(c+75,"io_csr_rd_io_csr_addr", false,-1, 11,0);
    tracep->declBit(c+3581,"mul_clock", false,-1);
    tracep->declBit(c+3582,"mul_reset", false,-1);
    tracep->declBit(c+523,"mul_io_in_valid", false,-1);
    tracep->declQuad(c+524,"mul_io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+526,"mul_io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declBit(c+528,"mul_io_out_valid", false,-1);
    tracep->declQuad(c+529,"mul_io_out_bits_result_result_lo", false,-1, 63,0);
    tracep->declBit(c+3581,"div_clock", false,-1);
    tracep->declBit(c+3582,"div_reset", false,-1);
    tracep->declBit(c+531,"div_io_in_valid", false,-1);
    tracep->declBit(c+532,"div_io_in_bits_ctrl_flow_div_signed", false,-1);
    tracep->declQuad(c+533,"div_io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+535,"div_io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declBit(c+537,"div_io_out_valid", false,-1);
    tracep->declQuad(c+538,"div_io_out_bits_result_quotient", false,-1, 63,0);
    tracep->declQuad(c+540,"div_io_out_bits_result_remainder", false,-1, 63,0);
    tracep->declBit(c+542,"is_mul", false,-1);
    tracep->declBit(c+543,"is_div", false,-1);
    tracep->declBit(c+544,"is_divw", false,-1);
    tracep->declBit(c+532,"is_div_sign", false,-1);
    tracep->declQuad(c+68,"src1", false,-1, 63,0);
    tracep->declQuad(c+70,"src2", false,-1, 63,0);
    tracep->declBit(c+545,"alu_result_sign", false,-1);
    tracep->declBit(c+546,"alu_result_sign_2", false,-1);
    tracep->declBit(c+547,"alu_result_sign_3", false,-1);
    tracep->declBit(c+548,"alu_result_sign_4", false,-1);
    tracep->declBit(c+549,"alu_result_sign_6", false,-1);
    tracep->declQuad(c+550,"alu_result", false,-1, 63,0);
    tracep->declBit(c+552,"shift_result_sign", false,-1);
    tracep->declBit(c+553,"shift_result_sign_1", false,-1);
    tracep->declBit(c+554,"shift_result_sign_2", false,-1);
    tracep->declBit(c+555,"shift_result_sign_3", false,-1);
    tracep->declBit(c+556,"div_io_in_bits_ctrl_data_src1_sign", false,-1);
    tracep->declBit(c+557,"div_io_in_bits_ctrl_data_src2_sign", false,-1);
    tracep->declQuad(c+558,"compar_result", false,-1, 63,0);
    tracep->declQuad(c+560,"jump_result", false,-1, 63,0);
    tracep->declQuad(c+562,"shift_result", false,-1, 63,0);
    tracep->declQuad(c+564,"branch_result", false,-1, 63,0);
    tracep->declBit(c+566,"branch_flag", false,-1);
    tracep->declBit(c+567,"is_branch", false,-1);
    tracep->declBit(c+568,"is_jump", false,-1);
    tracep->pushNamePrefix("div ");
    tracep->declBit(c+3581,"clock", false,-1);
    tracep->declBit(c+3582,"reset", false,-1);
    tracep->declBit(c+531,"io_in_valid", false,-1);
    tracep->declBit(c+532,"io_in_bits_ctrl_flow_div_signed", false,-1);
    tracep->declQuad(c+533,"io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+535,"io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declBit(c+537,"io_out_valid", false,-1);
    tracep->declQuad(c+538,"io_out_bits_result_quotient", false,-1, 63,0);
    tracep->declQuad(c+540,"io_out_bits_result_remainder", false,-1, 63,0);
    tracep->declArray(c+569,"dividend", false,-1, 127,0);
    tracep->declQuad(c+573,"divisor", false,-1, 63,0);
    tracep->declQuad(c+575,"S", false,-1, 63,0);
    tracep->declBus(c+577,"state", false,-1, 1,0);
    tracep->declBus(c+578,"count", false,-1, 5,0);
    tracep->declBit(c+579,"wrap_wrap", false,-1);
    tracep->declBit(c+580,"s", false,-1);
    tracep->declArray(c+581,"res_div", false,-1, 64,0);
    tracep->declQuad(c+584,"negative_s", false,-1, 63,0);
    tracep->declQuad(c+586,"negative_r", false,-1, 63,0);
    tracep->declQuad(c+588,"s_o", false,-1, 63,0);
    tracep->declQuad(c+590,"r_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mul ");
    tracep->declBit(c+3581,"clock", false,-1);
    tracep->declBit(c+3582,"reset", false,-1);
    tracep->declBit(c+523,"io_in_valid", false,-1);
    tracep->declQuad(c+524,"io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+526,"io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declBit(c+528,"io_out_valid", false,-1);
    tracep->declQuad(c+529,"io_out_bits_result_result_lo", false,-1, 63,0);
    tracep->declBit(c+3581,"mult_clock", false,-1);
    tracep->declBit(c+3582,"mult_reset", false,-1);
    tracep->declBit(c+523,"mult_io_in_valid", false,-1);
    tracep->declQuad(c+524,"mult_io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+526,"mult_io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declBit(c+528,"mult_io_out_valid", false,-1);
    tracep->declQuad(c+529,"mult_io_out_bits_result_result_lo", false,-1, 63,0);
    tracep->pushNamePrefix("mult ");
    tracep->declBit(c+3581,"clock", false,-1);
    tracep->declBit(c+3582,"reset", false,-1);
    tracep->declBit(c+523,"io_in_valid", false,-1);
    tracep->declQuad(c+524,"io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+526,"io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declBit(c+528,"io_out_valid", false,-1);
    tracep->declQuad(c+529,"io_out_bits_result_result_lo", false,-1, 63,0);
    tracep->declBus(c+592,"partial_io_y_3", false,-1, 2,0);
    tracep->declArray(c+593,"partial_io_x", false,-1, 131,0);
    tracep->declArray(c+598,"partial_io_p", false,-1, 131,0);
    tracep->declBit(c+603,"partial_io_c", false,-1);
    tracep->declArray(c+604,"multiplier", false,-1, 65,0);
    tracep->declArray(c+593,"multiplicand", false,-1, 131,0);
    tracep->declArray(c+607,"p", false,-1, 131,0);
    tracep->declBus(c+612,"count", false,-1, 6,0);
    tracep->declArray(c+613,"temp", false,-1, 131,0);
    tracep->declBit(c+618,"p_sign", false,-1);
    tracep->pushNamePrefix("partial ");
    tracep->declBus(c+592,"io_y_3", false,-1, 2,0);
    tracep->declArray(c+593,"io_x", false,-1, 131,0);
    tracep->declArray(c+598,"io_p", false,-1, 131,0);
    tracep->declBit(c+603,"io_c", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("ICACHE ");
    tracep->declBit(c+3581,"clock", false,-1);
    tracep->declBit(c+3582,"reset", false,-1);
    tracep->declBit(c+21,"io_in_addr_req_valid", false,-1);
    tracep->declQuad(c+3583,"io_in_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+22,"io_in_rdata_rep_ready", false,-1);
    tracep->declBit(c+23,"io_in_rdata_rep_valid", false,-1);
    tracep->declQuad(c+24,"io_in_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+77,"io_cache_busy", false,-1);
    tracep->declBit(c+281,"io_out_raddr_req_ready", false,-1);
    tracep->declBit(c+282,"io_out_raddr_req_valid", false,-1);
    tracep->declQuad(c+283,"io_out_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+285,"io_out_rdata_rep_valid", false,-1);
    tracep->declQuad(c+9,"io_out_rdata_rep_bits_data", false,-1, 63,0);
    tracep->declBit(c+286,"io_out_rdata_rep_bits_last", false,-1);
    tracep->declBit(c+287,"io_out_wb_valid", false,-1);
    tracep->declBus(c+3619,"io_out_wb_bits_breap", false,-1, 1,0);
    tracep->declBit(c+3581,"Cache_data_clock", false,-1);
    tracep->declBit(c+619,"Cache_data_io_in_valid", false,-1);
    tracep->declQuad(c+3583,"Cache_data_io_in_addr", false,-1, 63,0);
    tracep->declQuad(c+620,"Cache_data_io_write_bus_addr", false,-1, 63,0);
    tracep->declBit(c+622,"Cache_data_io_write_bus_valid", false,-1);
    tracep->declBus(c+623,"Cache_data_io_write_bus_waymask", false,-1, 1,0);
    tracep->declArray(c+624,"Cache_data_io_write_bus_wdata", false,-1, 511,0);
    tracep->declBit(c+619,"Cache_data_io_out_valid", false,-1);
    tracep->declQuad(c+640,"Cache_data_io_out_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+642,"Cache_data_io_out_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+644,"Cache_data_io_out_bits_meat_valid_0", false,-1);
    tracep->declBit(c+645,"Cache_data_io_out_bits_meat_valid_1", false,-1);
    tracep->declArray(c+646,"Cache_data_io_out_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+662,"Cache_data_io_out_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+678,"Cache_data_io_out_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBus(c+680,"Cache_data_io_out_bits_ctrl_data_index", false,-1, 4,0);
    tracep->declBus(c+681,"Cache_data_io_out_bits_ctrl_data_offset", false,-1, 5,0);
    tracep->declBit(c+682,"Scanf_io_in_valid", false,-1);
    tracep->declQuad(c+640,"Scanf_io_in_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+642,"Scanf_io_in_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+644,"Scanf_io_in_bits_meat_valid_0", false,-1);
    tracep->declBit(c+645,"Scanf_io_in_bits_meat_valid_1", false,-1);
    tracep->declArray(c+646,"Scanf_io_in_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+662,"Scanf_io_in_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+678,"Scanf_io_in_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBus(c+680,"Scanf_io_in_bits_ctrl_data_index", false,-1, 4,0);
    tracep->declBit(c+683,"Scanf_io_out_bits_hit", false,-1);
    tracep->declArray(c+684,"Scanf_io_out_bits_data", false,-1, 511,0);
    tracep->declBus(c+680,"Scanf_io_out_bits_meta_ctrl_data_index", false,-1, 4,0);
    tracep->declBit(c+700,"Scanf_io_out_bits_hit_way_0", false,-1);
    tracep->declBit(c+701,"Scanf_io_out_bits_hit_way_1", false,-1);
    tracep->declQuad(c+640,"Scanf_io_out_bits_tag_0", false,-1, 52,0);
    tracep->declQuad(c+642,"Scanf_io_out_bits_tag_1", false,-1, 52,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+702+i*1,"lru", true,(i+0));
    }
    tracep->declBit(c+734,"lru_lru_w_MPORT_en", false,-1);
    tracep->declBus(c+735,"lru_lru_w_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+736,"lru_lru_w_MPORT_data", false,-1);
    tracep->declBit(c+3586,"lru_MPORT_data", false,-1);
    tracep->declBus(c+680,"lru_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+3586,"lru_MPORT_mask", false,-1);
    tracep->declBit(c+737,"lru_MPORT_en", false,-1);
    tracep->declBit(c+3628,"lru_MPORT_1_data", false,-1);
    tracep->declBus(c+680,"lru_MPORT_1_addr", false,-1, 4,0);
    tracep->declBit(c+3586,"lru_MPORT_1_mask", false,-1);
    tracep->declBit(c+738,"lru_MPORT_1_en", false,-1);
    tracep->declBit(c+3628,"lru_MPORT_2_data", false,-1);
    tracep->declBus(c+680,"lru_MPORT_2_addr", false,-1, 4,0);
    tracep->declBit(c+3586,"lru_MPORT_2_mask", false,-1);
    tracep->declBit(c+739,"lru_MPORT_2_en", false,-1);
    tracep->declBit(c+3586,"lru_MPORT_3_data", false,-1);
    tracep->declBus(c+680,"lru_MPORT_3_addr", false,-1, 4,0);
    tracep->declBit(c+3586,"lru_MPORT_3_mask", false,-1);
    tracep->declBit(c+740,"lru_MPORT_3_en", false,-1);
    tracep->declBit(c+734,"lru_lru_w_MPORT_en_pipe_0", false,-1);
    tracep->declBus(c+735,"lru_lru_w_MPORT_addr_pipe_0", false,-1, 4,0);
    tracep->declBus(c+741,"state", false,-1, 2,0);
    tracep->declBus(c+742,"read_state", false,-1, 1,0);
    tracep->declArray(c+743,"data_line_reg", false,-1, 511,0);
    tracep->declQuad(c+759,"mem_addr_reg", false,-1, 63,0);
    tracep->declBit(c+761,"lru_r", false,-1);
    tracep->declBit(c+700,"hit_way_0", false,-1);
    tracep->declBit(c+701,"hit_way_1", false,-1);
    tracep->declBit(c+736,"lru_w", false,-1);
    tracep->declQuad(c+762,"hit_data", false,-1, 63,0);
    tracep->declQuad(c+764,"mem_data", false,-1, 63,0);
    tracep->declBit(c+682,"Scanf_io_in_valid_REG", false,-1);
    tracep->pushNamePrefix("Cache_data ");
    tracep->declBit(c+3581,"clock", false,-1);
    tracep->declBit(c+619,"io_in_valid", false,-1);
    tracep->declQuad(c+3583,"io_in_addr", false,-1, 63,0);
    tracep->declQuad(c+620,"io_write_bus_addr", false,-1, 63,0);
    tracep->declBit(c+622,"io_write_bus_valid", false,-1);
    tracep->declBus(c+623,"io_write_bus_waymask", false,-1, 1,0);
    tracep->declArray(c+624,"io_write_bus_wdata", false,-1, 511,0);
    tracep->declBit(c+619,"io_out_valid", false,-1);
    tracep->declQuad(c+640,"io_out_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+642,"io_out_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+644,"io_out_bits_meat_valid_0", false,-1);
    tracep->declBit(c+645,"io_out_bits_meat_valid_1", false,-1);
    tracep->declArray(c+646,"io_out_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+662,"io_out_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+678,"io_out_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBus(c+680,"io_out_bits_ctrl_data_index", false,-1, 4,0);
    tracep->declBus(c+681,"io_out_bits_ctrl_data_offset", false,-1, 5,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declArray(c+766+i*16,"data_0", true,(i+0), 511,0);
    }
    tracep->declBit(c+1278,"data_0_data_w_en", false,-1);
    tracep->declBus(c+1279,"data_0_data_w_addr", false,-1, 4,0);
    tracep->declArray(c+646,"data_0_data_w_data", false,-1, 511,0);
    tracep->declArray(c+624,"data_0_MPORT_data", false,-1, 511,0);
    tracep->declBus(c+1280,"data_0_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+1281,"data_0_MPORT_mask", false,-1);
    tracep->declBit(c+622,"data_0_MPORT_en", false,-1);
    tracep->declBit(c+1278,"data_0_data_w_en_pipe_0", false,-1);
    tracep->declBus(c+1279,"data_0_data_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declArray(c+1282+i*16,"data_1", true,(i+0), 511,0);
    }
    tracep->declBit(c+1794,"data_1_data_w_en", false,-1);
    tracep->declBus(c+1279,"data_1_data_w_addr", false,-1, 4,0);
    tracep->declArray(c+662,"data_1_data_w_data", false,-1, 511,0);
    tracep->declArray(c+624,"data_1_MPORT_data", false,-1, 511,0);
    tracep->declBus(c+1280,"data_1_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+761,"data_1_MPORT_mask", false,-1);
    tracep->declBit(c+622,"data_1_MPORT_en", false,-1);
    tracep->declBit(c+1794,"data_1_data_w_en_pipe_0", false,-1);
    tracep->declBus(c+1279,"data_1_data_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+1795+i*2,"TAG_0", true,(i+0), 52,0);
    }
    tracep->declBit(c+1859,"TAG_0_tag_w_en", false,-1);
    tracep->declBus(c+1860,"TAG_0_tag_w_addr", false,-1, 4,0);
    tracep->declQuad(c+640,"TAG_0_tag_w_data", false,-1, 52,0);
    tracep->declQuad(c+1861,"TAG_0_MPORT_1_data", false,-1, 52,0);
    tracep->declBus(c+1280,"TAG_0_MPORT_1_addr", false,-1, 4,0);
    tracep->declBit(c+1281,"TAG_0_MPORT_1_mask", false,-1);
    tracep->declBit(c+622,"TAG_0_MPORT_1_en", false,-1);
    tracep->declBit(c+1859,"TAG_0_tag_w_en_pipe_0", false,-1);
    tracep->declBus(c+1860,"TAG_0_tag_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+1863+i*2,"TAG_1", true,(i+0), 52,0);
    }
    tracep->declBit(c+1927,"TAG_1_tag_w_en", false,-1);
    tracep->declBus(c+1279,"TAG_1_tag_w_addr", false,-1, 4,0);
    tracep->declQuad(c+642,"TAG_1_tag_w_data", false,-1, 52,0);
    tracep->declQuad(c+1861,"TAG_1_MPORT_1_data", false,-1, 52,0);
    tracep->declBus(c+1280,"TAG_1_MPORT_1_addr", false,-1, 4,0);
    tracep->declBit(c+761,"TAG_1_MPORT_1_mask", false,-1);
    tracep->declBit(c+622,"TAG_1_MPORT_1_en", false,-1);
    tracep->declBit(c+1927,"TAG_1_tag_w_en_pipe_0", false,-1);
    tracep->declBus(c+1279,"TAG_1_tag_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+1928+i*1,"data_valid_0", true,(i+0));
    }
    tracep->declBit(c+1960,"data_valid_0_valid_w_en", false,-1);
    tracep->declBus(c+1961,"data_valid_0_valid_w_addr", false,-1, 4,0);
    tracep->declBit(c+644,"data_valid_0_valid_w_data", false,-1);
    tracep->declBit(c+3586,"data_valid_0_MPORT_2_data", false,-1);
    tracep->declBus(c+1280,"data_valid_0_MPORT_2_addr", false,-1, 4,0);
    tracep->declBit(c+1281,"data_valid_0_MPORT_2_mask", false,-1);
    tracep->declBit(c+622,"data_valid_0_MPORT_2_en", false,-1);
    tracep->declBit(c+1960,"data_valid_0_valid_w_en_pipe_0", false,-1);
    tracep->declBus(c+1961,"data_valid_0_valid_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+1962+i*1,"data_valid_1", true,(i+0));
    }
    tracep->declBit(c+1994,"data_valid_1_valid_w_en", false,-1);
    tracep->declBus(c+1279,"data_valid_1_valid_w_addr", false,-1, 4,0);
    tracep->declBit(c+645,"data_valid_1_valid_w_data", false,-1);
    tracep->declBit(c+3586,"data_valid_1_MPORT_2_data", false,-1);
    tracep->declBus(c+1280,"data_valid_1_MPORT_2_addr", false,-1, 4,0);
    tracep->declBit(c+761,"data_valid_1_MPORT_2_mask", false,-1);
    tracep->declBit(c+622,"data_valid_1_MPORT_2_en", false,-1);
    tracep->declBit(c+1994,"data_valid_1_valid_w_en_pipe_0", false,-1);
    tracep->declBus(c+1279,"data_valid_1_valid_w_addr_pipe_0", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Scanf ");
    tracep->declBit(c+682,"io_in_valid", false,-1);
    tracep->declQuad(c+640,"io_in_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+642,"io_in_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+644,"io_in_bits_meat_valid_0", false,-1);
    tracep->declBit(c+645,"io_in_bits_meat_valid_1", false,-1);
    tracep->declArray(c+646,"io_in_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+662,"io_in_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+678,"io_in_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBus(c+680,"io_in_bits_ctrl_data_index", false,-1, 4,0);
    tracep->declBit(c+683,"io_out_bits_hit", false,-1);
    tracep->declArray(c+684,"io_out_bits_data", false,-1, 511,0);
    tracep->declBus(c+680,"io_out_bits_meta_ctrl_data_index", false,-1, 4,0);
    tracep->declBit(c+700,"io_out_bits_hit_way_0", false,-1);
    tracep->declBit(c+701,"io_out_bits_hit_way_1", false,-1);
    tracep->declQuad(c+640,"io_out_bits_tag_0", false,-1, 52,0);
    tracep->declQuad(c+642,"io_out_bits_tag_1", false,-1, 52,0);
    tracep->declBit(c+700,"hit_way_0_result", false,-1);
    tracep->declBit(c+701,"hit_way_1_result", false,-1);
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
    tracep->declBus(c+1995,"Inst_decode_0", false,-1, 3,0);
    tracep->declBus(c+44,"Inst_decode_2", false,-1, 6,0);
    tracep->declBit(c+1996,"Inst_decode_3", false,-1);
    tracep->declBus(c+1997,"srctype1", false,-1, 1,0);
    tracep->declBit(c+1998,"srctype2", false,-1);
    tracep->declBit(c+1999,"sign", false,-1);
    tracep->declBit(c+2000,"sign_1", false,-1);
    tracep->declBit(c+1999,"sign_2", false,-1);
    tracep->declBit(c+1999,"sign_3", false,-1);
    tracep->declBit(c+1999,"sign_4", false,-1);
    tracep->declBit(c+2001,"stall_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IF ");
    tracep->declBit(c+3581,"clock", false,-1);
    tracep->declBit(c+3582,"reset", false,-1);
    tracep->declBit(c+17,"io_branch_io_is_branch", false,-1);
    tracep->declBit(c+18,"io_branch_io_is_jump", false,-1);
    tracep->declQuad(c+19,"io_branch_io_dnpc", false,-1, 63,0);
    tracep->declBit(c+21,"io_cache_req_addr_req_valid", false,-1);
    tracep->declQuad(c+3583,"io_cache_req_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+22,"io_cache_req_rdata_rep_ready", false,-1);
    tracep->declBit(c+23,"io_cache_req_rdata_rep_valid", false,-1);
    tracep->declQuad(c+24,"io_cache_req_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+22,"io_out_ready", false,-1);
    tracep->declBit(c+23,"io_out_valid", false,-1);
    tracep->declQuad(c+3583,"io_out_bits_PC", false,-1, 63,0);
    tracep->declBus(c+26,"io_out_bits_Inst", false,-1, 31,0);
    tracep->declBit(c+27,"io_flush", false,-1);
    tracep->declQuad(c+2002,"temp", false,-1, 63,0);
    tracep->declBus(c+2004,"inst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MEM ");
    tracep->declBit(c+64,"io_in_ready", false,-1);
    tracep->declBit(c+224,"io_in_valid", false,-1);
    tracep->declBus(c+225,"io_in_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+226,"io_in_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+227,"io_in_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+228,"io_in_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+229,"io_in_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+231,"io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+232,"io_in_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+234,"io_in_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declQuad(c+235,"io_in_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+237,"io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+239,"io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+241,"io_in_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declQuad(c+243,"io_in_bits_ctrl_csr_csr_data", false,-1, 63,0);
    tracep->declBit(c+245,"io_in_bits_ctrl_csr_csr_en", false,-1);
    tracep->declBus(c+246,"io_in_bits_ctrl_csr_csr_idx", false,-1, 11,0);
    tracep->declBit(c+3586,"io_out_ready", false,-1);
    tracep->declBit(c+247,"io_out_valid", false,-1);
    tracep->declBit(c+248,"io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+227,"io_out_bits_ctrl_signal_rfWen", false,-1);
    tracep->declQuad(c+229,"io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+231,"io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+232,"io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBit(c+249,"io_out_bits_ctrl_flow_skip", false,-1);
    tracep->declBus(c+234,"io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+250,"io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+5,"io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+243,"io_out_bits_ctrl_csr_csr_data", false,-1, 63,0);
    tracep->declBit(c+251,"io_out_bits_ctrl_csr_csr_en", false,-1);
    tracep->declBus(c+246,"io_out_bits_ctrl_csr_csr_idx", false,-1, 11,0);
    tracep->declBit(c+252,"io_cache_io_addr_req_valid", false,-1);
    tracep->declQuad(c+253,"io_cache_io_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+252,"io_cache_io_addr_req_bits_ce", false,-1);
    tracep->declBit(c+255,"io_cache_io_addr_req_bits_we", false,-1);
    tracep->declBit(c+256,"io_cache_io_rdata_rep_valid", false,-1);
    tracep->declQuad(c+7,"io_cache_io_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+257,"io_cache_io_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+259,"io_cache_io_wdata_req_bits_wmask", false,-1, 7,0);
    tracep->declBit(c+260,"io_cache_io_wdata_rep", false,-1);
    tracep->declQuad(c+253,"addr_temp", false,-1, 63,0);
    tracep->declBit(c+11,"mem_result_sign", false,-1);
    tracep->declBit(c+12,"mem_result_sign_1", false,-1);
    tracep->declBit(c+13,"mem_result_sign_2", false,-1);
    tracep->declBit(c+14,"mem_result_sign_3", false,-1);
    tracep->declQuad(c+15,"mem_result", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MMEM ");
    tracep->declBus(c+3629,"BUS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+3629,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+3581,"clk", false,-1);
    tracep->declBit(c+3582,"reset", false,-1);
    tracep->declBit(c+288,"ar_valid", false,-1);
    tracep->declBit(c+289,"ar_ready", false,-1);
    tracep->declBus(c+3620,"ar_id", false,-1, 3,0);
    tracep->declBus(c+292,"ar_len", false,-1, 7,0);
    tracep->declBus(c+3621,"ar_size", false,-1, 2,0);
    tracep->declQuad(c+290,"ar_addr", false,-1, 63,0);
    tracep->declBus(c+3622,"ar_prot", false,-1, 2,0);
    tracep->declBus(c+3623,"ar_burst", false,-1, 1,0);
    tracep->declBus(c+3619,"ar_lock", false,-1, 1,0);
    tracep->declBus(c+3624,"ar_cache", false,-1, 3,0);
    tracep->declBit(c+294,"aw_valid", false,-1);
    tracep->declBit(c+295,"aw_ready", false,-1);
    tracep->declBus(c+3620,"aw_id", false,-1, 3,0);
    tracep->declBus(c+292,"aw_len", false,-1, 7,0);
    tracep->declBus(c+3621,"aw_size", false,-1, 2,0);
    tracep->declQuad(c+296,"aw_addr", false,-1, 63,0);
    tracep->declBus(c+3622,"aw_prot", false,-1, 2,0);
    tracep->declBus(c+3623,"aw_burst", false,-1, 1,0);
    tracep->declBus(c+3619,"aw_lock", false,-1, 1,0);
    tracep->declBus(c+3624,"aw_cache", false,-1, 3,0);
    tracep->declBit(c+293,"rd_valid", false,-1);
    tracep->declBit(c+3586,"rd_ready", false,-1);
    tracep->declBus(c+3625,"rd_id", false,-1, 3,0);
    tracep->declQuad(c+9,"rd_data", false,-1, 63,0);
    tracep->declBus(c+3626,"rd_resp", false,-1, 1,0);
    tracep->declBit(c+286,"rd_last", false,-1);
    tracep->declBit(c+298,"wd_valid", false,-1);
    tracep->declBit(c+299,"wd_ready", false,-1);
    tracep->declBus(c+3620,"wd_id", false,-1, 3,0);
    tracep->declQuad(c+300,"wd_data", false,-1, 63,0);
    tracep->declBus(c+302,"wstrb", false,-1, 7,0);
    tracep->declBit(c+303,"wd_last", false,-1);
    tracep->declBit(c+304,"wr_valid", false,-1);
    tracep->declBit(c+305,"wr_ready", false,-1);
    tracep->declBus(c+3627,"wr_id", false,-1, 3,0);
    tracep->declBus(c+3619,"wr_breap", false,-1, 1,0);
    tracep->declBus(c+3619,"idle", false,-1, 1,0);
    tracep->declBus(c+3623,"ready", false,-1, 1,0);
    tracep->declBus(c+3630,"data_transform", false,-1, 1,0);
    tracep->declBus(c+2005,"read_state", false,-1, 1,0);
    tracep->declBus(c+2006,"write_state", false,-1, 1,0);
    tracep->declBus(c+2007,"read_next_state", false,-1, 1,0);
    tracep->declBus(c+2008,"write_next_state", false,-1, 1,0);
    tracep->declQuad(c+9,"rdata", false,-1, 63,0);
    tracep->declQuad(c+2009,"write_addr_buffer", false,-1, 63,0);
    tracep->declQuad(c+2011,"read_addr_buffer", false,-1, 63,0);
    tracep->declBus(c+2013,"read_count", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MMIO ");
    tracep->declBit(c+3581,"clock", false,-1);
    tracep->declBit(c+3582,"reset", false,-1);
    tracep->declBit(c+252,"io_in_addr_req_valid", false,-1);
    tracep->declQuad(c+253,"io_in_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+252,"io_in_addr_req_bits_ce", false,-1);
    tracep->declBit(c+255,"io_in_addr_req_bits_we", false,-1);
    tracep->declBit(c+256,"io_in_rdata_rep_valid", false,-1);
    tracep->declQuad(c+7,"io_in_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+257,"io_in_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+259,"io_in_wdata_req_bits_wmask", false,-1, 7,0);
    tracep->declBit(c+260,"io_in_wdata_rep", false,-1);
    tracep->declBit(c+306,"io_out_raddr_req_ready", false,-1);
    tracep->declBit(c+307,"io_out_raddr_req_valid", false,-1);
    tracep->declQuad(c+308,"io_out_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBus(c+310,"io_out_raddr_req_bits_len", false,-1, 7,0);
    tracep->declBit(c+311,"io_out_waddr_req_ready", false,-1);
    tracep->declBit(c+312,"io_out_waddr_req_valid", false,-1);
    tracep->declQuad(c+313,"io_out_waddr_req_bits_addr", false,-1, 63,0);
    tracep->declBus(c+310,"io_out_waddr_req_bits_len", false,-1, 7,0);
    tracep->declBit(c+3586,"io_out_rdata_rep_ready", false,-1);
    tracep->declBit(c+315,"io_out_rdata_rep_valid", false,-1);
    tracep->declQuad(c+9,"io_out_rdata_rep_bits_data", false,-1, 63,0);
    tracep->declBit(c+286,"io_out_rdata_rep_bits_last", false,-1);
    tracep->declBit(c+316,"io_out_wdata_req_ready", false,-1);
    tracep->declBit(c+317,"io_out_wdata_req_valid", false,-1);
    tracep->declQuad(c+318,"io_out_wdata_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+320,"io_out_wdata_req_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+321,"io_out_wdata_req_bits_last", false,-1);
    tracep->declBit(c+322,"io_out_wb_ready", false,-1);
    tracep->declBit(c+323,"io_out_wb_valid", false,-1);
    tracep->declBus(c+3619,"io_out_wb_bits_breap", false,-1, 1,0);
    tracep->declBit(c+3581,"DCACHE_clock", false,-1);
    tracep->declBit(c+3582,"DCACHE_reset", false,-1);
    tracep->declBit(c+2014,"DCACHE_io_in_addr_req_valid", false,-1);
    tracep->declQuad(c+253,"DCACHE_io_in_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+255,"DCACHE_io_in_addr_req_bits_we", false,-1);
    tracep->declBit(c+2015,"DCACHE_io_in_rdata_rep_ready", false,-1);
    tracep->declBit(c+2016,"DCACHE_io_in_rdata_rep_valid", false,-1);
    tracep->declQuad(c+2017,"DCACHE_io_in_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+257,"DCACHE_io_in_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+259,"DCACHE_io_in_wdata_req_bits_wmask", false,-1, 7,0);
    tracep->declBit(c+2019,"DCACHE_io_in_wdata_rep", false,-1);
    tracep->declBit(c+2020,"DCACHE_io_out_raddr_req_ready", false,-1);
    tracep->declBit(c+2021,"DCACHE_io_out_raddr_req_valid", false,-1);
    tracep->declQuad(c+2022,"DCACHE_io_out_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+2024,"DCACHE_io_out_waddr_req_ready", false,-1);
    tracep->declBit(c+2025,"DCACHE_io_out_waddr_req_valid", false,-1);
    tracep->declQuad(c+2026,"DCACHE_io_out_waddr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+2028,"DCACHE_io_out_rdata_rep_valid", false,-1);
    tracep->declQuad(c+9,"DCACHE_io_out_rdata_rep_bits_data", false,-1, 63,0);
    tracep->declBit(c+286,"DCACHE_io_out_rdata_rep_bits_last", false,-1);
    tracep->declBit(c+2029,"DCACHE_io_out_wdata_req_ready", false,-1);
    tracep->declBit(c+2030,"DCACHE_io_out_wdata_req_valid", false,-1);
    tracep->declQuad(c+2031,"DCACHE_io_out_wdata_req_bits_data", false,-1, 63,0);
    tracep->declBit(c+2033,"DCACHE_io_out_wdata_req_bits_last", false,-1);
    tracep->declBit(c+2034,"DCACHE_io_out_wb_valid", false,-1);
    tracep->declBus(c+3619,"DCACHE_io_out_wb_bits_breap", false,-1, 1,0);
    tracep->declBit(c+3581,"birdge_clock", false,-1);
    tracep->declBit(c+3582,"birdge_reset", false,-1);
    tracep->declBit(c+2035,"birdge_io_in_addr_req_valid", false,-1);
    tracep->declQuad(c+253,"birdge_io_in_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+252,"birdge_io_in_addr_req_bits_ce", false,-1);
    tracep->declBit(c+255,"birdge_io_in_addr_req_bits_we", false,-1);
    tracep->declBit(c+2036,"birdge_io_in_rdata_rep_ready", false,-1);
    tracep->declBit(c+2037,"birdge_io_in_rdata_rep_valid", false,-1);
    tracep->declQuad(c+9,"birdge_io_in_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+2036,"birdge_io_in_wdata_req_valid", false,-1);
    tracep->declQuad(c+257,"birdge_io_in_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+259,"birdge_io_in_wdata_req_bits_wmask", false,-1, 7,0);
    tracep->declBit(c+2038,"birdge_io_in_wdata_rep", false,-1);
    tracep->declBit(c+2039,"birdge_io_out_raddr_req_ready", false,-1);
    tracep->declBit(c+2040,"birdge_io_out_raddr_req_valid", false,-1);
    tracep->declQuad(c+253,"birdge_io_out_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+2041,"birdge_io_out_waddr_req_ready", false,-1);
    tracep->declBit(c+2042,"birdge_io_out_waddr_req_valid", false,-1);
    tracep->declQuad(c+253,"birdge_io_out_waddr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+2036,"birdge_io_out_rdata_rep_ready", false,-1);
    tracep->declBit(c+2037,"birdge_io_out_rdata_rep_valid", false,-1);
    tracep->declQuad(c+9,"birdge_io_out_rdata_rep_bits_data", false,-1, 63,0);
    tracep->declBit(c+286,"birdge_io_out_rdata_rep_bits_last", false,-1);
    tracep->declBit(c+2043,"birdge_io_out_wdata_req_ready", false,-1);
    tracep->declBit(c+2036,"birdge_io_out_wdata_req_valid", false,-1);
    tracep->declQuad(c+257,"birdge_io_out_wdata_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+259,"birdge_io_out_wdata_req_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+2044,"birdge_io_out_wdata_req_bits_last", false,-1);
    tracep->declBit(c+2045,"birdge_io_out_wb_ready", false,-1);
    tracep->declBit(c+2038,"birdge_io_out_wb_valid", false,-1);
    tracep->declBus(c+3619,"birdge_io_out_wb_bits_breap", false,-1, 1,0);
    tracep->pushNamePrefix("DCACHE ");
    tracep->declBit(c+3581,"clock", false,-1);
    tracep->declBit(c+3582,"reset", false,-1);
    tracep->declBit(c+2014,"io_in_addr_req_valid", false,-1);
    tracep->declQuad(c+253,"io_in_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+255,"io_in_addr_req_bits_we", false,-1);
    tracep->declBit(c+2015,"io_in_rdata_rep_ready", false,-1);
    tracep->declBit(c+2016,"io_in_rdata_rep_valid", false,-1);
    tracep->declQuad(c+2017,"io_in_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+257,"io_in_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+259,"io_in_wdata_req_bits_wmask", false,-1, 7,0);
    tracep->declBit(c+2019,"io_in_wdata_rep", false,-1);
    tracep->declBit(c+2020,"io_out_raddr_req_ready", false,-1);
    tracep->declBit(c+2021,"io_out_raddr_req_valid", false,-1);
    tracep->declQuad(c+2022,"io_out_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+2024,"io_out_waddr_req_ready", false,-1);
    tracep->declBit(c+2025,"io_out_waddr_req_valid", false,-1);
    tracep->declQuad(c+2026,"io_out_waddr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+2028,"io_out_rdata_rep_valid", false,-1);
    tracep->declQuad(c+9,"io_out_rdata_rep_bits_data", false,-1, 63,0);
    tracep->declBit(c+286,"io_out_rdata_rep_bits_last", false,-1);
    tracep->declBit(c+2029,"io_out_wdata_req_ready", false,-1);
    tracep->declBit(c+2030,"io_out_wdata_req_valid", false,-1);
    tracep->declQuad(c+2031,"io_out_wdata_req_bits_data", false,-1, 63,0);
    tracep->declBit(c+2033,"io_out_wdata_req_bits_last", false,-1);
    tracep->declBit(c+2034,"io_out_wb_valid", false,-1);
    tracep->declBus(c+3619,"io_out_wb_bits_breap", false,-1, 1,0);
    tracep->declBit(c+3581,"Cache_data_clock", false,-1);
    tracep->declBit(c+2046,"Cache_data_io_in_valid", false,-1);
    tracep->declQuad(c+253,"Cache_data_io_in_addr", false,-1, 63,0);
    tracep->declQuad(c+2047,"Cache_data_io_write_bus_addr", false,-1, 63,0);
    tracep->declBit(c+2049,"Cache_data_io_write_bus_valid", false,-1);
    tracep->declBus(c+2050,"Cache_data_io_write_bus_waymask", false,-1, 1,0);
    tracep->declArray(c+2051,"Cache_data_io_write_bus_wdata", false,-1, 511,0);
    tracep->declBit(c+2046,"Cache_data_io_out_valid", false,-1);
    tracep->declQuad(c+2067,"Cache_data_io_out_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+2069,"Cache_data_io_out_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+2071,"Cache_data_io_out_bits_meat_valid_0", false,-1);
    tracep->declBit(c+2072,"Cache_data_io_out_bits_meat_valid_1", false,-1);
    tracep->declArray(c+2073,"Cache_data_io_out_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+2089,"Cache_data_io_out_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+2105,"Cache_data_io_out_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBus(c+2107,"Cache_data_io_out_bits_ctrl_data_index", false,-1, 4,0);
    tracep->declBus(c+2108,"Cache_data_io_out_bits_ctrl_data_offset", false,-1, 5,0);
    tracep->declBit(c+2109,"Scanf_io_in_valid", false,-1);
    tracep->declQuad(c+2067,"Scanf_io_in_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+2069,"Scanf_io_in_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+2071,"Scanf_io_in_bits_meat_valid_0", false,-1);
    tracep->declBit(c+2072,"Scanf_io_in_bits_meat_valid_1", false,-1);
    tracep->declArray(c+2073,"Scanf_io_in_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+2089,"Scanf_io_in_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+2105,"Scanf_io_in_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBus(c+2107,"Scanf_io_in_bits_ctrl_data_index", false,-1, 4,0);
    tracep->declBit(c+2110,"Scanf_io_out_bits_hit", false,-1);
    tracep->declArray(c+2111,"Scanf_io_out_bits_data", false,-1, 511,0);
    tracep->declBus(c+2107,"Scanf_io_out_bits_meta_ctrl_data_index", false,-1, 4,0);
    tracep->declBit(c+2127,"Scanf_io_out_bits_hit_way_0", false,-1);
    tracep->declBit(c+2128,"Scanf_io_out_bits_hit_way_1", false,-1);
    tracep->declQuad(c+2067,"Scanf_io_out_bits_tag_0", false,-1, 52,0);
    tracep->declQuad(c+2069,"Scanf_io_out_bits_tag_1", false,-1, 52,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+2129+i*1,"lru", true,(i+0));
    }
    tracep->declBit(c+2161,"lru_lru_w_MPORT_en", false,-1);
    tracep->declBus(c+2162,"lru_lru_w_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+2163,"lru_lru_w_MPORT_data", false,-1);
    tracep->declBit(c+3586,"lru_MPORT_data", false,-1);
    tracep->declBus(c+2107,"lru_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+3586,"lru_MPORT_mask", false,-1);
    tracep->declBit(c+2164,"lru_MPORT_en", false,-1);
    tracep->declBit(c+3628,"lru_MPORT_1_data", false,-1);
    tracep->declBus(c+2107,"lru_MPORT_1_addr", false,-1, 4,0);
    tracep->declBit(c+3586,"lru_MPORT_1_mask", false,-1);
    tracep->declBit(c+2165,"lru_MPORT_1_en", false,-1);
    tracep->declBit(c+3628,"lru_MPORT_2_data", false,-1);
    tracep->declBus(c+2107,"lru_MPORT_2_addr", false,-1, 4,0);
    tracep->declBit(c+3586,"lru_MPORT_2_mask", false,-1);
    tracep->declBit(c+2166,"lru_MPORT_2_en", false,-1);
    tracep->declBit(c+3586,"lru_MPORT_3_data", false,-1);
    tracep->declBus(c+2107,"lru_MPORT_3_addr", false,-1, 4,0);
    tracep->declBit(c+3586,"lru_MPORT_3_mask", false,-1);
    tracep->declBit(c+2167,"lru_MPORT_3_en", false,-1);
    tracep->declBit(c+2161,"lru_lru_w_MPORT_en_pipe_0", false,-1);
    tracep->declBus(c+2162,"lru_lru_w_MPORT_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+2168+i*1,"dirt_0", true,(i+0));
    }
    tracep->declBit(c+2200,"dirt_0_dirt_w_en", false,-1);
    tracep->declBus(c+2201,"dirt_0_dirt_w_addr", false,-1, 4,0);
    tracep->declBit(c+2202,"dirt_0_dirt_w_data", false,-1);
    tracep->declBit(c+3586,"dirt_0_MPORT_4_data", false,-1);
    tracep->declBus(c+2107,"dirt_0_MPORT_4_addr", false,-1, 4,0);
    tracep->declBit(c+2203,"dirt_0_MPORT_4_mask", false,-1);
    tracep->declBit(c+2204,"dirt_0_MPORT_4_en", false,-1);
    tracep->declBit(c+2200,"dirt_0_dirt_w_en_pipe_0", false,-1);
    tracep->declBus(c+2201,"dirt_0_dirt_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+2205+i*1,"dirt_1", true,(i+0));
    }
    tracep->declBit(c+2237,"dirt_1_dirt_w_en", false,-1);
    tracep->declBus(c+2238,"dirt_1_dirt_w_addr", false,-1, 4,0);
    tracep->declBit(c+2239,"dirt_1_dirt_w_data", false,-1);
    tracep->declBit(c+3586,"dirt_1_MPORT_4_data", false,-1);
    tracep->declBus(c+2107,"dirt_1_MPORT_4_addr", false,-1, 4,0);
    tracep->declBit(c+2240,"dirt_1_MPORT_4_mask", false,-1);
    tracep->declBit(c+2204,"dirt_1_MPORT_4_en", false,-1);
    tracep->declBit(c+2237,"dirt_1_dirt_w_en_pipe_0", false,-1);
    tracep->declBus(c+2238,"dirt_1_dirt_w_addr_pipe_0", false,-1, 4,0);
    tracep->declBus(c+2241,"state", false,-1, 2,0);
    tracep->declBus(c+2242,"read_state", false,-1, 1,0);
    tracep->declBus(c+2243,"write_state", false,-1, 1,0);
    tracep->declArray(c+2244,"data_line_reg", false,-1, 511,0);
    tracep->declQuad(c+2260,"mem_addr_reg", false,-1, 63,0);
    tracep->declBit(c+2262,"lru_r", false,-1);
    tracep->declBus(c+2263,"count_write", false,-1, 3,0);
    tracep->declQuad(c+2264,"mem_write_addr_reg", false,-1, 63,0);
    tracep->declArray(c+2266,"mem_write_data_reg", false,-1, 511,0);
    tracep->declBit(c+2163,"lru_w", false,-1);
    tracep->declBit(c+2127,"hit_way_0", false,-1);
    tracep->declBit(c+2128,"hit_way_1", false,-1);
    tracep->declQuad(c+2282,"hit_data", false,-1, 63,0);
    tracep->declQuad(c+2284,"mem_data", false,-1, 63,0);
    tracep->declBit(c+2109,"Scanf_io_in_valid_REG", false,-1);
    tracep->declQuad(c+2286,"wmaskextend_Genmask", false,-1, 63,0);
    tracep->declQuad(c+2288,"wmaskextend_lo_lo_lo", false,-1, 63,0);
    tracep->declArray(c+2290,"wmaskextend_lo_lo", false,-1, 127,0);
    tracep->declQuad(c+2294,"wmaskextend_lo_hi_lo", false,-1, 63,0);
    tracep->declArray(c+2296,"wmaskextend_lo", false,-1, 255,0);
    tracep->declQuad(c+2304,"wmaskextend_hi_lo_lo", false,-1, 63,0);
    tracep->declArray(c+2306,"wmaskextend_hi_lo", false,-1, 127,0);
    tracep->declQuad(c+2310,"wmaskextend_hi_hi_lo", false,-1, 63,0);
    tracep->declArray(c+2312,"wmaskextend_hi", false,-1, 255,0);
    tracep->declArray(c+2320,"wmaskextend", false,-1, 511,0);
    tracep->declArray(c+2336,"wdata_extend", false,-1, 511,0);
    tracep->declBus(c+2050,"waymask", false,-1, 1,0);
    tracep->pushNamePrefix("Cache_data ");
    tracep->declBit(c+3581,"clock", false,-1);
    tracep->declBit(c+2046,"io_in_valid", false,-1);
    tracep->declQuad(c+253,"io_in_addr", false,-1, 63,0);
    tracep->declQuad(c+2047,"io_write_bus_addr", false,-1, 63,0);
    tracep->declBit(c+2049,"io_write_bus_valid", false,-1);
    tracep->declBus(c+2050,"io_write_bus_waymask", false,-1, 1,0);
    tracep->declArray(c+2051,"io_write_bus_wdata", false,-1, 511,0);
    tracep->declBit(c+2046,"io_out_valid", false,-1);
    tracep->declQuad(c+2067,"io_out_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+2069,"io_out_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+2071,"io_out_bits_meat_valid_0", false,-1);
    tracep->declBit(c+2072,"io_out_bits_meat_valid_1", false,-1);
    tracep->declArray(c+2073,"io_out_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+2089,"io_out_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+2105,"io_out_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBus(c+2107,"io_out_bits_ctrl_data_index", false,-1, 4,0);
    tracep->declBus(c+2108,"io_out_bits_ctrl_data_offset", false,-1, 5,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declArray(c+2352+i*16,"data_0", true,(i+0), 511,0);
    }
    tracep->declBit(c+2864,"data_0_data_w_en", false,-1);
    tracep->declBus(c+2865,"data_0_data_w_addr", false,-1, 4,0);
    tracep->declArray(c+2073,"data_0_data_w_data", false,-1, 511,0);
    tracep->declArray(c+2051,"data_0_MPORT_data", false,-1, 511,0);
    tracep->declBus(c+2866,"data_0_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+2203,"data_0_MPORT_mask", false,-1);
    tracep->declBit(c+2049,"data_0_MPORT_en", false,-1);
    tracep->declBit(c+2864,"data_0_data_w_en_pipe_0", false,-1);
    tracep->declBus(c+2865,"data_0_data_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declArray(c+2867+i*16,"data_1", true,(i+0), 511,0);
    }
    tracep->declBit(c+3379,"data_1_data_w_en", false,-1);
    tracep->declBus(c+2865,"data_1_data_w_addr", false,-1, 4,0);
    tracep->declArray(c+2089,"data_1_data_w_data", false,-1, 511,0);
    tracep->declArray(c+2051,"data_1_MPORT_data", false,-1, 511,0);
    tracep->declBus(c+2866,"data_1_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+2240,"data_1_MPORT_mask", false,-1);
    tracep->declBit(c+2049,"data_1_MPORT_en", false,-1);
    tracep->declBit(c+3379,"data_1_data_w_en_pipe_0", false,-1);
    tracep->declBus(c+2865,"data_1_data_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+3380+i*2,"TAG_0", true,(i+0), 52,0);
    }
    tracep->declBit(c+3444,"TAG_0_tag_w_en", false,-1);
    tracep->declBus(c+3445,"TAG_0_tag_w_addr", false,-1, 4,0);
    tracep->declQuad(c+2067,"TAG_0_tag_w_data", false,-1, 52,0);
    tracep->declQuad(c+3446,"TAG_0_MPORT_1_data", false,-1, 52,0);
    tracep->declBus(c+2866,"TAG_0_MPORT_1_addr", false,-1, 4,0);
    tracep->declBit(c+2203,"TAG_0_MPORT_1_mask", false,-1);
    tracep->declBit(c+2049,"TAG_0_MPORT_1_en", false,-1);
    tracep->declBit(c+3444,"TAG_0_tag_w_en_pipe_0", false,-1);
    tracep->declBus(c+3445,"TAG_0_tag_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+3448+i*2,"TAG_1", true,(i+0), 52,0);
    }
    tracep->declBit(c+3512,"TAG_1_tag_w_en", false,-1);
    tracep->declBus(c+2865,"TAG_1_tag_w_addr", false,-1, 4,0);
    tracep->declQuad(c+2069,"TAG_1_tag_w_data", false,-1, 52,0);
    tracep->declQuad(c+3446,"TAG_1_MPORT_1_data", false,-1, 52,0);
    tracep->declBus(c+2866,"TAG_1_MPORT_1_addr", false,-1, 4,0);
    tracep->declBit(c+2240,"TAG_1_MPORT_1_mask", false,-1);
    tracep->declBit(c+2049,"TAG_1_MPORT_1_en", false,-1);
    tracep->declBit(c+3512,"TAG_1_tag_w_en_pipe_0", false,-1);
    tracep->declBus(c+2865,"TAG_1_tag_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+3513+i*1,"data_valid_0", true,(i+0));
    }
    tracep->declBit(c+3545,"data_valid_0_valid_w_en", false,-1);
    tracep->declBus(c+2865,"data_valid_0_valid_w_addr", false,-1, 4,0);
    tracep->declBit(c+2071,"data_valid_0_valid_w_data", false,-1);
    tracep->declBit(c+3586,"data_valid_0_MPORT_2_data", false,-1);
    tracep->declBus(c+2866,"data_valid_0_MPORT_2_addr", false,-1, 4,0);
    tracep->declBit(c+2203,"data_valid_0_MPORT_2_mask", false,-1);
    tracep->declBit(c+2049,"data_valid_0_MPORT_2_en", false,-1);
    tracep->declBit(c+3545,"data_valid_0_valid_w_en_pipe_0", false,-1);
    tracep->declBus(c+2865,"data_valid_0_valid_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+3546+i*1,"data_valid_1", true,(i+0));
    }
    tracep->declBit(c+3578,"data_valid_1_valid_w_en", false,-1);
    tracep->declBus(c+2865,"data_valid_1_valid_w_addr", false,-1, 4,0);
    tracep->declBit(c+2072,"data_valid_1_valid_w_data", false,-1);
    tracep->declBit(c+3586,"data_valid_1_MPORT_2_data", false,-1);
    tracep->declBus(c+2866,"data_valid_1_MPORT_2_addr", false,-1, 4,0);
    tracep->declBit(c+2240,"data_valid_1_MPORT_2_mask", false,-1);
    tracep->declBit(c+2049,"data_valid_1_MPORT_2_en", false,-1);
    tracep->declBit(c+3578,"data_valid_1_valid_w_en_pipe_0", false,-1);
    tracep->declBus(c+2865,"data_valid_1_valid_w_addr_pipe_0", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Scanf ");
    tracep->declBit(c+2109,"io_in_valid", false,-1);
    tracep->declQuad(c+2067,"io_in_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+2069,"io_in_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+2071,"io_in_bits_meat_valid_0", false,-1);
    tracep->declBit(c+2072,"io_in_bits_meat_valid_1", false,-1);
    tracep->declArray(c+2073,"io_in_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+2089,"io_in_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+2105,"io_in_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBus(c+2107,"io_in_bits_ctrl_data_index", false,-1, 4,0);
    tracep->declBit(c+2110,"io_out_bits_hit", false,-1);
    tracep->declArray(c+2111,"io_out_bits_data", false,-1, 511,0);
    tracep->declBus(c+2107,"io_out_bits_meta_ctrl_data_index", false,-1, 4,0);
    tracep->declBit(c+2127,"io_out_bits_hit_way_0", false,-1);
    tracep->declBit(c+2128,"io_out_bits_hit_way_1", false,-1);
    tracep->declQuad(c+2067,"io_out_bits_tag_0", false,-1, 52,0);
    tracep->declQuad(c+2069,"io_out_bits_tag_1", false,-1, 52,0);
    tracep->declBit(c+2127,"hit_way_0_result", false,-1);
    tracep->declBit(c+2128,"hit_way_1_result", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("birdge ");
    tracep->declBit(c+3581,"clock", false,-1);
    tracep->declBit(c+3582,"reset", false,-1);
    tracep->declBit(c+2035,"io_in_addr_req_valid", false,-1);
    tracep->declQuad(c+253,"io_in_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+252,"io_in_addr_req_bits_ce", false,-1);
    tracep->declBit(c+255,"io_in_addr_req_bits_we", false,-1);
    tracep->declBit(c+2036,"io_in_rdata_rep_ready", false,-1);
    tracep->declBit(c+2037,"io_in_rdata_rep_valid", false,-1);
    tracep->declQuad(c+9,"io_in_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+2036,"io_in_wdata_req_valid", false,-1);
    tracep->declQuad(c+257,"io_in_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+259,"io_in_wdata_req_bits_wmask", false,-1, 7,0);
    tracep->declBit(c+2038,"io_in_wdata_rep", false,-1);
    tracep->declBit(c+2039,"io_out_raddr_req_ready", false,-1);
    tracep->declBit(c+2040,"io_out_raddr_req_valid", false,-1);
    tracep->declQuad(c+253,"io_out_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+2041,"io_out_waddr_req_ready", false,-1);
    tracep->declBit(c+2042,"io_out_waddr_req_valid", false,-1);
    tracep->declQuad(c+253,"io_out_waddr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+2036,"io_out_rdata_rep_ready", false,-1);
    tracep->declBit(c+2037,"io_out_rdata_rep_valid", false,-1);
    tracep->declQuad(c+9,"io_out_rdata_rep_bits_data", false,-1, 63,0);
    tracep->declBit(c+286,"io_out_rdata_rep_bits_last", false,-1);
    tracep->declBit(c+2043,"io_out_wdata_req_ready", false,-1);
    tracep->declBit(c+2036,"io_out_wdata_req_valid", false,-1);
    tracep->declQuad(c+257,"io_out_wdata_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+259,"io_out_wdata_req_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+2044,"io_out_wdata_req_bits_last", false,-1);
    tracep->declBit(c+2045,"io_out_wb_ready", false,-1);
    tracep->declBit(c+2038,"io_out_wb_valid", false,-1);
    tracep->declBus(c+3619,"io_out_wb_bits_breap", false,-1, 1,0);
    tracep->declBus(c+3579,"read_state", false,-1, 1,0);
    tracep->declBus(c+3580,"write_state", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("WB ");
    tracep->declBit(c+261,"io_in_valid", false,-1);
    tracep->declBit(c+262,"io_in_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+263,"io_in_bits_ctrl_signal_rfWen", false,-1);
    tracep->declQuad(c+264,"io_in_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+3585,"io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+266,"io_in_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBit(c+268,"io_in_bits_ctrl_flow_skip", false,-1);
    tracep->declBus(c+222,"io_in_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declQuad(c+269,"io_in_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+271,"io_in_bits_ctrl_csr_csr_data", false,-1, 63,0);
    tracep->declBit(c+273,"io_in_bits_ctrl_csr_csr_en", false,-1);
    tracep->declBus(c+274,"io_in_bits_ctrl_csr_csr_idx", false,-1, 11,0);
    tracep->declBit(c+3586,"io_out_ready", false,-1);
    tracep->declBit(c+261,"io_out_valid", false,-1);
    tracep->declBit(c+275,"io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declQuad(c+264,"io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+3585,"io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+266,"io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBit(c+268,"io_out_bits_ctrl_flow_skip", false,-1);
    tracep->declBus(c+222,"io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+223,"io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+269,"io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+271,"io_out_bits_ctrl_csr_csr_data", false,-1, 63,0);
    tracep->declBit(c+276,"io_out_bits_ctrl_csr_csr_en", false,-1);
    tracep->declBus(c+274,"io_out_bits_ctrl_csr_csr_idx", false,-1, 11,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("bypass ");
    tracep->declBus(c+33,"io_EX_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+34,"io_EX_rf_rfWen", false,-1);
    tracep->declQuad(c+66,"io_EX_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+234,"io_MEM_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+250,"io_MEM_rf_rfWen", false,-1);
    tracep->declQuad(c+5,"io_MEM_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+222,"io_WB_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+223,"io_WB_rf_rfWen", false,-1);
    tracep->declQuad(c+269,"io_WB_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+277,"io_Reg1", false,-1, 63,0);
    tracep->declBus(c+41,"io_reg_index1", false,-1, 4,0);
    tracep->declQuad(c+279,"io_Reg2", false,-1, 63,0);
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
    bufp->fullQData(oldp+72,(((0x40U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                               ? 0ULL : ((0x1aU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                          ? 0ULL : 
                                         ((0x68U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                           ? 0ULL : 
                                          ((0x44U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                            ? 0ULL : 
                                           ((0x69U 
                                             == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                             ? 0ULL
                                             : ((0x71U 
                                                 == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                 ? 0ULL
                                                 : 
                                                ((0x72U 
                                                  == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                  ? 0ULL
                                                  : 
                                                 ((0x6dU 
                                                   == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                   ? 0ULL
                                                   : 
                                                  ((0x78U 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? 0ULL
                                                    : 
                                                   ((0x79U 
                                                     == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                     ? 0ULL
                                                     : 
                                                    ((0x7aU 
                                                      == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                      ? 0ULL
                                                      : 
                                                     ((0xdU 
                                                       == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                       ? 0ULL
                                                       : 
                                                      ((1U 
                                                        == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                        ? 0ULL
                                                        : 
                                                       ((7U 
                                                         == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                         ? 0ULL
                                                         : 
                                                        ((0xfU 
                                                          == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                          ? 0ULL
                                                          : 
                                                         ((0x12U 
                                                           == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                           ? 0ULL
                                                           : 
                                                          ((0x10U 
                                                            == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                            ? 0ULL
                                                            : 
                                                           ((0x13U 
                                                             == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                             ? 0ULL
                                                             : 
                                                            ((0x43U 
                                                              == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                              ? 0ULL
                                                              : 
                                                             ((0x15U 
                                                               == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                               ? 
                                                              (vlSelf->CoreTop__DOT__EX_io_csr_rd_io_rd_data 
                                                               | vlSelf->CoreTop__DOT__EX__DOT__src1)
                                                               : 
                                                              ((0x16U 
                                                                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                                ? vlSelf->CoreTop__DOT__EX__DOT__src1
                                                                : 0ULL)))))))))))))))))))))),64);
    bufp->fullBit(oldp+74,(((0x18U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                            | ((0x15U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                               | (0x16U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))))));
    bufp->fullSData(oldp+75,(vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_csr_csr_idx),12);
    bufp->fullBit(oldp+76,(((0x42U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                            & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_inst_valid))));
    bufp->fullBit(oldp+77,((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state))));
    bufp->fullQData(oldp+78,(vlSelf->CoreTop__DOT__EX_io_csr_rd_io_rd_data),64);
    bufp->fullBit(oldp+80,(vlSelf->CoreTop__DOT__DIP_io_is_break_REG_1));
    bufp->fullQData(oldp+81,(vlSelf->CoreTop__DOT__rf
                             [0U]),64);
    bufp->fullQData(oldp+83,(vlSelf->CoreTop__DOT__rf
                             [1U]),64);
    bufp->fullQData(oldp+85,(vlSelf->CoreTop__DOT__rf
                             [2U]),64);
    bufp->fullQData(oldp+87,(vlSelf->CoreTop__DOT__rf
                             [3U]),64);
    bufp->fullQData(oldp+89,(vlSelf->CoreTop__DOT__rf
                             [4U]),64);
    bufp->fullQData(oldp+91,(vlSelf->CoreTop__DOT__rf
                             [5U]),64);
    bufp->fullQData(oldp+93,(vlSelf->CoreTop__DOT__rf
                             [6U]),64);
    bufp->fullQData(oldp+95,(vlSelf->CoreTop__DOT__rf
                             [7U]),64);
    bufp->fullQData(oldp+97,(vlSelf->CoreTop__DOT__rf
                             [8U]),64);
    bufp->fullQData(oldp+99,(vlSelf->CoreTop__DOT__rf
                             [9U]),64);
    bufp->fullQData(oldp+101,(vlSelf->CoreTop__DOT__rf
                              [0xaU]),64);
    bufp->fullQData(oldp+103,(vlSelf->CoreTop__DOT__rf
                              [0xbU]),64);
    bufp->fullQData(oldp+105,(vlSelf->CoreTop__DOT__rf
                              [0xcU]),64);
    bufp->fullQData(oldp+107,(vlSelf->CoreTop__DOT__rf
                              [0xdU]),64);
    bufp->fullQData(oldp+109,(vlSelf->CoreTop__DOT__rf
                              [0xeU]),64);
    bufp->fullQData(oldp+111,(vlSelf->CoreTop__DOT__rf
                              [0xfU]),64);
    bufp->fullQData(oldp+113,(vlSelf->CoreTop__DOT__rf
                              [0x10U]),64);
    bufp->fullQData(oldp+115,(vlSelf->CoreTop__DOT__rf
                              [0x11U]),64);
    bufp->fullQData(oldp+117,(vlSelf->CoreTop__DOT__rf
                              [0x12U]),64);
    bufp->fullQData(oldp+119,(vlSelf->CoreTop__DOT__rf
                              [0x13U]),64);
    bufp->fullQData(oldp+121,(vlSelf->CoreTop__DOT__rf
                              [0x14U]),64);
    bufp->fullQData(oldp+123,(vlSelf->CoreTop__DOT__rf
                              [0x15U]),64);
    bufp->fullQData(oldp+125,(vlSelf->CoreTop__DOT__rf
                              [0x16U]),64);
    bufp->fullQData(oldp+127,(vlSelf->CoreTop__DOT__rf
                              [0x17U]),64);
    bufp->fullQData(oldp+129,(vlSelf->CoreTop__DOT__rf
                              [0x18U]),64);
    bufp->fullQData(oldp+131,(vlSelf->CoreTop__DOT__rf
                              [0x19U]),64);
    bufp->fullQData(oldp+133,(vlSelf->CoreTop__DOT__rf
                              [0x1aU]),64);
    bufp->fullQData(oldp+135,(vlSelf->CoreTop__DOT__rf
                              [0x1bU]),64);
    bufp->fullQData(oldp+137,(vlSelf->CoreTop__DOT__rf
                              [0x1cU]),64);
    bufp->fullQData(oldp+139,(vlSelf->CoreTop__DOT__rf
                              [0x1dU]),64);
    bufp->fullQData(oldp+141,(vlSelf->CoreTop__DOT__rf
                              [0x1eU]),64);
    bufp->fullQData(oldp+143,(vlSelf->CoreTop__DOT__rf
                              [0x1fU]),64);
    bufp->fullIData(oldp+145,(vlSelf->CoreTop__DOT__DIP_io_inst_REG),32);
    bufp->fullQData(oldp+146,(vlSelf->CoreTop__DOT__DIP_io_pc_REG),64);
    bufp->fullBit(oldp+148,(vlSelf->CoreTop__DOT__DIP_io_inst_valid_REG));
    bufp->fullQData(oldp+149,(vlSelf->CoreTop__DOT__DIP_io_dnpc_REG),64);
    bufp->fullBit(oldp+151,(vlSelf->CoreTop__DOT__DIP_io_is_skip_REG));
    bufp->fullQData(oldp+152,(vlSelf->CoreTop__DOT__rf[0]),64);
    bufp->fullQData(oldp+154,(vlSelf->CoreTop__DOT__rf[1]),64);
    bufp->fullQData(oldp+156,(vlSelf->CoreTop__DOT__rf[2]),64);
    bufp->fullQData(oldp+158,(vlSelf->CoreTop__DOT__rf[3]),64);
    bufp->fullQData(oldp+160,(vlSelf->CoreTop__DOT__rf[4]),64);
    bufp->fullQData(oldp+162,(vlSelf->CoreTop__DOT__rf[5]),64);
    bufp->fullQData(oldp+164,(vlSelf->CoreTop__DOT__rf[6]),64);
    bufp->fullQData(oldp+166,(vlSelf->CoreTop__DOT__rf[7]),64);
    bufp->fullQData(oldp+168,(vlSelf->CoreTop__DOT__rf[8]),64);
    bufp->fullQData(oldp+170,(vlSelf->CoreTop__DOT__rf[9]),64);
    bufp->fullQData(oldp+172,(vlSelf->CoreTop__DOT__rf[10]),64);
    bufp->fullQData(oldp+174,(vlSelf->CoreTop__DOT__rf[11]),64);
    bufp->fullQData(oldp+176,(vlSelf->CoreTop__DOT__rf[12]),64);
    bufp->fullQData(oldp+178,(vlSelf->CoreTop__DOT__rf[13]),64);
    bufp->fullQData(oldp+180,(vlSelf->CoreTop__DOT__rf[14]),64);
    bufp->fullQData(oldp+182,(vlSelf->CoreTop__DOT__rf[15]),64);
    bufp->fullQData(oldp+184,(vlSelf->CoreTop__DOT__rf[16]),64);
    bufp->fullQData(oldp+186,(vlSelf->CoreTop__DOT__rf[17]),64);
    bufp->fullQData(oldp+188,(vlSelf->CoreTop__DOT__rf[18]),64);
    bufp->fullQData(oldp+190,(vlSelf->CoreTop__DOT__rf[19]),64);
    bufp->fullQData(oldp+192,(vlSelf->CoreTop__DOT__rf[20]),64);
    bufp->fullQData(oldp+194,(vlSelf->CoreTop__DOT__rf[21]),64);
    bufp->fullQData(oldp+196,(vlSelf->CoreTop__DOT__rf[22]),64);
    bufp->fullQData(oldp+198,(vlSelf->CoreTop__DOT__rf[23]),64);
    bufp->fullQData(oldp+200,(vlSelf->CoreTop__DOT__rf[24]),64);
    bufp->fullQData(oldp+202,(vlSelf->CoreTop__DOT__rf[25]),64);
    bufp->fullQData(oldp+204,(vlSelf->CoreTop__DOT__rf[26]),64);
    bufp->fullQData(oldp+206,(vlSelf->CoreTop__DOT__rf[27]),64);
    bufp->fullQData(oldp+208,(vlSelf->CoreTop__DOT__rf[28]),64);
    bufp->fullQData(oldp+210,(vlSelf->CoreTop__DOT__rf[29]),64);
    bufp->fullQData(oldp+212,(vlSelf->CoreTop__DOT__rf[30]),64);
    bufp->fullQData(oldp+214,(vlSelf->CoreTop__DOT__rf[31]),64);
    bufp->fullQData(oldp+216,(vlSelf->CoreTop__DOT__rf
                              [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                         >> 0xfU))]),64);
    bufp->fullQData(oldp+218,(vlSelf->CoreTop__DOT__rf
                              [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                         >> 0x14U))]),64);
    bufp->fullQData(oldp+220,(((0U == (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest))
                                ? 0ULL : vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfData)),64);
    bufp->fullCData(oldp+222,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest),5);
    bufp->fullBit(oldp+223,(vlSelf->CoreTop__DOT__rf_MPORT_en));
    bufp->fullBit(oldp+224,(vlSelf->CoreTop__DOT__valid_1));
    bufp->fullCData(oldp+225,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_fuType),3);
    bufp->fullBit(oldp+226,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_inst_valid));
    bufp->fullBit(oldp+227,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_rfWen));
    bufp->fullCData(oldp+228,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype),7);
    bufp->fullQData(oldp+229,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_PC),64);
    bufp->fullIData(oldp+231,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_inst),32);
    bufp->fullQData(oldp+232,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_Dnpc),64);
    bufp->fullCData(oldp+234,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest),5);
    bufp->fullQData(oldp+235,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfData),64);
    bufp->fullQData(oldp+237,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src1),64);
    bufp->fullQData(oldp+239,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2),64);
    bufp->fullQData(oldp+241,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_Imm),64);
    bufp->fullQData(oldp+243,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_csr_csr_data),64);
    bufp->fullBit(oldp+245,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_csr_csr_en));
    bufp->fullSData(oldp+246,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_csr_csr_idx),12);
    bufp->fullBit(oldp+247,(vlSelf->CoreTop__DOT__MEM_io_out_valid));
    bufp->fullBit(oldp+248,(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_signal_inst_valid));
    bufp->fullBit(oldp+249,(((0xa0000048ULL == vlSelf->CoreTop__DOT__MEM__DOT__addr_temp) 
                             | ((0xa00003f8ULL == vlSelf->CoreTop__DOT__MEM__DOT__addr_temp) 
                                | ((0xa0000000ULL <= vlSelf->CoreTop__DOT__MEM__DOT__addr_temp) 
                                   & (0xa1200000ULL 
                                      >= vlSelf->CoreTop__DOT__MEM__DOT__addr_temp))))));
    bufp->fullBit(oldp+250,(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfWen));
    bufp->fullBit(oldp+251,(((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_csr_csr_en) 
                             & (IData)(vlSelf->CoreTop__DOT__valid_1))));
    bufp->fullBit(oldp+252,(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_addr_req_bits_ce));
    bufp->fullQData(oldp+253,(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp),64);
    bufp->fullBit(oldp+255,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_bits_we));
    bufp->fullBit(oldp+256,(((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)
                              ? (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_valid)
                              : ((~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_bits_we)) 
                                 & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_bits_rdata_T_1) 
                                    | (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_valid_T_4))))));
    bufp->fullQData(oldp+257,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata),64);
    bufp->fullCData(oldp+259,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wmask),8);
    bufp->fullBit(oldp+260,(((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)
                              ? (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_out_wb_valid)
                              : ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___Cache_data_io_write_bus_valid_T_3) 
                                 | ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_valid_T_4) 
                                    & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_bits_we))))));
    bufp->fullBit(oldp+261,(vlSelf->CoreTop__DOT__valid_2));
    bufp->fullBit(oldp+262,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_inst_valid));
    bufp->fullBit(oldp+263,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_rfWen));
    bufp->fullQData(oldp+264,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_PC),64);
    bufp->fullQData(oldp+266,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_Dnpc),64);
    bufp->fullBit(oldp+268,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_skip));
    bufp->fullQData(oldp+269,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfData),64);
    bufp->fullQData(oldp+271,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_csr_csr_data),64);
    bufp->fullBit(oldp+273,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_csr_csr_en));
    bufp->fullSData(oldp+274,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_csr_csr_idx),12);
    bufp->fullBit(oldp+275,(((IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_inst_valid) 
                             & (IData)(vlSelf->CoreTop__DOT__valid_2))));
    bufp->fullBit(oldp+276,(vlSelf->CoreTop__DOT__WB_io_out_bits_ctrl_csr_csr_en));
    bufp->fullQData(oldp+277,(((0U == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                >> 0xfU)))
                                ? 0ULL : vlSelf->CoreTop__DOT__rf
                               [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                          >> 0xfU))])),64);
    bufp->fullQData(oldp+279,(((0U == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                >> 0x14U)))
                                ? 0ULL : vlSelf->CoreTop__DOT__rf
                               [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                          >> 0x14U))])),64);
    bufp->fullBit(oldp+281,(((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)) 
                             & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)
                                 ? (0U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state))
                                 : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state) 
                                    & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r) 
                                       & (0U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state))))))));
    bufp->fullBit(oldp+282,((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state))));
    bufp->fullQData(oldp+283,(vlSelf->CoreTop__DOT__ICACHE_io_out_raddr_req_bits_addr),64);
    bufp->fullBit(oldp+285,(vlSelf->CoreTop__DOT__ICACHE_io_out_rdata_rep_valid));
    bufp->fullBit(oldp+286,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_rdata_rep_bits_last));
    bufp->fullBit(oldp+287,(((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)) 
                             & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)
                                 ? (1U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_state))
                                 : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state) 
                                    & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r) 
                                       & (1U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_state))))))));
    bufp->fullBit(oldp+288,(((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)
                              ? (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_valid)
                              : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)
                                  ? (1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state))
                                  : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                                      ? ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)
                                          ? (1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state))
                                          : (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_valid))
                                      : (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_valid))))));
    bufp->fullBit(oldp+289,((0U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state))));
    bufp->fullQData(oldp+290,(((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)
                                ? vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_bits_addr
                                : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)
                                    ? vlSelf->CoreTop__DOT__ICACHE_io_out_raddr_req_bits_addr
                                    : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                                        ? ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)
                                            ? vlSelf->CoreTop__DOT__ICACHE_io_out_raddr_req_bits_addr
                                            : vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_bits_addr)
                                        : vlSelf->CoreTop__DOT__ICACHE_io_out_raddr_req_bits_addr)))),64);
    bufp->fullCData(oldp+292,(((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)
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
    bufp->fullBit(oldp+293,((2U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state))));
    bufp->fullBit(oldp+294,(((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)
                              ? (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_valid)
                              : ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)) 
                                 & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                                     ? ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)) 
                                        & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_valid))
                                     : (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_valid))))));
    bufp->fullBit(oldp+295,((0U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_state))));
    bufp->fullQData(oldp+296,(((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)
                                ? vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_bits_addr
                                : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)
                                    ? 0ULL : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                                               ? ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)
                                                   ? 0ULL
                                                   : vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_bits_addr)
                                               : 0ULL)))),64);
    bufp->fullBit(oldp+298,(((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)
                              ? (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_valid)
                              : ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)) 
                                 & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                                     ? ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)) 
                                        & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_valid))
                                     : (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_valid))))));
    bufp->fullBit(oldp+299,(vlSelf->CoreTop__DOT__MMEM_wd_ready));
    bufp->fullQData(oldp+300,(((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)
                                ? vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_data
                                : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)
                                    ? 0ULL : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                                               ? ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)
                                                   ? 0ULL
                                                   : vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_data)
                                               : 0ULL)))),64);
    bufp->fullCData(oldp+302,(((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)
                                ? (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_wstrb)
                                : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)
                                    ? 0U : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                                             ? ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)
                                                 ? 0U
                                                 : (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_wstrb))
                                             : 0U)))),8);
    bufp->fullBit(oldp+303,(vlSelf->CoreTop__DOT__MMEM_wd_last));
    bufp->fullBit(oldp+304,((1U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_state))));
    bufp->fullBit(oldp+305,(((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)
                              ? (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wb_ready)
                              : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0) 
                                 | ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                                     ? ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r) 
                                        | (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wb_ready))
                                     : (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wb_ready))))));
    bufp->fullBit(oldp+306,(vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_ready));
    bufp->fullBit(oldp+307,(vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_valid));
    bufp->fullQData(oldp+308,(vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_bits_addr),64);
    bufp->fullCData(oldp+310,(((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)
                                ? 0U : 7U)),8);
    bufp->fullBit(oldp+311,(vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_ready));
    bufp->fullBit(oldp+312,(vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_valid));
    bufp->fullQData(oldp+313,(vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_bits_addr),64);
    bufp->fullBit(oldp+315,(vlSelf->CoreTop__DOT__ARBITER_io_in1_rdata_rep_valid));
    bufp->fullBit(oldp+316,(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_ready));
    bufp->fullBit(oldp+317,(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_valid));
    bufp->fullQData(oldp+318,(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_data),64);
    bufp->fullCData(oldp+320,(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_wstrb),8);
    bufp->fullBit(oldp+321,(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_last));
    bufp->fullBit(oldp+322,(vlSelf->CoreTop__DOT__ARBITER_io_in1_wb_ready));
    bufp->fullBit(oldp+323,(vlSelf->CoreTop__DOT__ARBITER_io_in1_wb_valid));
    bufp->fullCData(oldp+324,(vlSelf->CoreTop__DOT__head),6);
    bufp->fullCData(oldp+325,(vlSelf->CoreTop__DOT__tail),6);
    bufp->fullBit(oldp+326,(vlSelf->CoreTop__DOT__empty));
    bufp->fullBit(oldp+327,(vlSelf->CoreTop__DOT__full));
    bufp->fullQData(oldp+328,(vlSelf->CoreTop__DOT__buffer_0_PC),64);
    bufp->fullIData(oldp+330,(vlSelf->CoreTop__DOT__buffer_0_Inst),32);
    bufp->fullQData(oldp+331,(vlSelf->CoreTop__DOT__buffer_1_PC),64);
    bufp->fullIData(oldp+333,(vlSelf->CoreTop__DOT__buffer_1_Inst),32);
    bufp->fullQData(oldp+334,(vlSelf->CoreTop__DOT__buffer_2_PC),64);
    bufp->fullIData(oldp+336,(vlSelf->CoreTop__DOT__buffer_2_Inst),32);
    bufp->fullQData(oldp+337,(vlSelf->CoreTop__DOT__buffer_3_PC),64);
    bufp->fullIData(oldp+339,(vlSelf->CoreTop__DOT__buffer_3_Inst),32);
    bufp->fullQData(oldp+340,(vlSelf->CoreTop__DOT__buffer_4_PC),64);
    bufp->fullIData(oldp+342,(vlSelf->CoreTop__DOT__buffer_4_Inst),32);
    bufp->fullQData(oldp+343,(vlSelf->CoreTop__DOT__buffer_5_PC),64);
    bufp->fullIData(oldp+345,(vlSelf->CoreTop__DOT__buffer_5_Inst),32);
    bufp->fullQData(oldp+346,(vlSelf->CoreTop__DOT__buffer_6_PC),64);
    bufp->fullIData(oldp+348,(vlSelf->CoreTop__DOT__buffer_6_Inst),32);
    bufp->fullQData(oldp+349,(vlSelf->CoreTop__DOT__buffer_7_PC),64);
    bufp->fullIData(oldp+351,(vlSelf->CoreTop__DOT__buffer_7_Inst),32);
    bufp->fullQData(oldp+352,(vlSelf->CoreTop__DOT__buffer_8_PC),64);
    bufp->fullIData(oldp+354,(vlSelf->CoreTop__DOT__buffer_8_Inst),32);
    bufp->fullQData(oldp+355,(vlSelf->CoreTop__DOT__buffer_9_PC),64);
    bufp->fullIData(oldp+357,(vlSelf->CoreTop__DOT__buffer_9_Inst),32);
    bufp->fullQData(oldp+358,(vlSelf->CoreTop__DOT__buffer_10_PC),64);
    bufp->fullIData(oldp+360,(vlSelf->CoreTop__DOT__buffer_10_Inst),32);
    bufp->fullQData(oldp+361,(vlSelf->CoreTop__DOT__buffer_11_PC),64);
    bufp->fullIData(oldp+363,(vlSelf->CoreTop__DOT__buffer_11_Inst),32);
    bufp->fullQData(oldp+364,(vlSelf->CoreTop__DOT__buffer_12_PC),64);
    bufp->fullIData(oldp+366,(vlSelf->CoreTop__DOT__buffer_12_Inst),32);
    bufp->fullQData(oldp+367,(vlSelf->CoreTop__DOT__buffer_13_PC),64);
    bufp->fullIData(oldp+369,(vlSelf->CoreTop__DOT__buffer_13_Inst),32);
    bufp->fullQData(oldp+370,(vlSelf->CoreTop__DOT__buffer_14_PC),64);
    bufp->fullIData(oldp+372,(vlSelf->CoreTop__DOT__buffer_14_Inst),32);
    bufp->fullQData(oldp+373,(vlSelf->CoreTop__DOT__buffer_15_PC),64);
    bufp->fullIData(oldp+375,(vlSelf->CoreTop__DOT__buffer_15_Inst),32);
    bufp->fullQData(oldp+376,(vlSelf->CoreTop__DOT__buffer_16_PC),64);
    bufp->fullIData(oldp+378,(vlSelf->CoreTop__DOT__buffer_16_Inst),32);
    bufp->fullQData(oldp+379,(vlSelf->CoreTop__DOT__buffer_17_PC),64);
    bufp->fullIData(oldp+381,(vlSelf->CoreTop__DOT__buffer_17_Inst),32);
    bufp->fullQData(oldp+382,(vlSelf->CoreTop__DOT__buffer_18_PC),64);
    bufp->fullIData(oldp+384,(vlSelf->CoreTop__DOT__buffer_18_Inst),32);
    bufp->fullQData(oldp+385,(vlSelf->CoreTop__DOT__buffer_19_PC),64);
    bufp->fullIData(oldp+387,(vlSelf->CoreTop__DOT__buffer_19_Inst),32);
    bufp->fullQData(oldp+388,(vlSelf->CoreTop__DOT__buffer_20_PC),64);
    bufp->fullIData(oldp+390,(vlSelf->CoreTop__DOT__buffer_20_Inst),32);
    bufp->fullQData(oldp+391,(vlSelf->CoreTop__DOT__buffer_21_PC),64);
    bufp->fullIData(oldp+393,(vlSelf->CoreTop__DOT__buffer_21_Inst),32);
    bufp->fullQData(oldp+394,(vlSelf->CoreTop__DOT__buffer_22_PC),64);
    bufp->fullIData(oldp+396,(vlSelf->CoreTop__DOT__buffer_22_Inst),32);
    bufp->fullQData(oldp+397,(vlSelf->CoreTop__DOT__buffer_23_PC),64);
    bufp->fullIData(oldp+399,(vlSelf->CoreTop__DOT__buffer_23_Inst),32);
    bufp->fullQData(oldp+400,(vlSelf->CoreTop__DOT__buffer_24_PC),64);
    bufp->fullIData(oldp+402,(vlSelf->CoreTop__DOT__buffer_24_Inst),32);
    bufp->fullQData(oldp+403,(vlSelf->CoreTop__DOT__buffer_25_PC),64);
    bufp->fullIData(oldp+405,(vlSelf->CoreTop__DOT__buffer_25_Inst),32);
    bufp->fullQData(oldp+406,(vlSelf->CoreTop__DOT__buffer_26_PC),64);
    bufp->fullIData(oldp+408,(vlSelf->CoreTop__DOT__buffer_26_Inst),32);
    bufp->fullQData(oldp+409,(vlSelf->CoreTop__DOT__buffer_27_PC),64);
    bufp->fullIData(oldp+411,(vlSelf->CoreTop__DOT__buffer_27_Inst),32);
    bufp->fullQData(oldp+412,(vlSelf->CoreTop__DOT__buffer_28_PC),64);
    bufp->fullIData(oldp+414,(vlSelf->CoreTop__DOT__buffer_28_Inst),32);
    bufp->fullQData(oldp+415,(vlSelf->CoreTop__DOT__buffer_29_PC),64);
    bufp->fullIData(oldp+417,(vlSelf->CoreTop__DOT__buffer_29_Inst),32);
    bufp->fullQData(oldp+418,(vlSelf->CoreTop__DOT__buffer_30_PC),64);
    bufp->fullIData(oldp+420,(vlSelf->CoreTop__DOT__buffer_30_Inst),32);
    bufp->fullQData(oldp+421,(vlSelf->CoreTop__DOT__buffer_31_PC),64);
    bufp->fullIData(oldp+423,(vlSelf->CoreTop__DOT__buffer_31_Inst),32);
    bufp->fullIData(oldp+424,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_inst),32);
    bufp->fullBit(oldp+425,(vlSelf->CoreTop__DOT__DIP_io_is_break_REG));
    bufp->fullBit(oldp+426,(vlSelf->CoreTop__DOT__ARBITER__DOT__state));
    bufp->fullBit(oldp+427,(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r));
    bufp->fullQData(oldp+428,(vlSelf->CoreTop__DOT__CSR__DOT__mepc),64);
    bufp->fullQData(oldp+430,(vlSelf->CoreTop__DOT__CSR__DOT__mcause),64);
    bufp->fullQData(oldp+432,(vlSelf->CoreTop__DOT__CSR__DOT__mstatus),64);
    bufp->fullQData(oldp+434,(vlSelf->CoreTop__DOT__CSR__DOT__mtvec),64);
    bufp->fullQData(oldp+436,(vlSelf->CoreTop__DOT__CSR__DOT__mie),64);
    bufp->fullQData(oldp+438,(vlSelf->CoreTop__DOT__CSR__DOT__mip),64);
    bufp->fullQData(oldp+440,(vlSelf->CoreTop__DOT__CSR__DOT__CSRDIFF__DOT__inst_csr[0]),64);
    bufp->fullQData(oldp+442,(vlSelf->CoreTop__DOT__CSR__DOT__CSRDIFF__DOT__inst_csr[1]),64);
    bufp->fullQData(oldp+444,(vlSelf->CoreTop__DOT__CSR__DOT__CSRDIFF__DOT__inst_csr[2]),64);
    bufp->fullQData(oldp+446,(vlSelf->CoreTop__DOT__CSR__DOT__CSRDIFF__DOT__inst_csr[3]),64);
    bufp->fullQData(oldp+448,(vlSelf->CoreTop__DOT__CSR__DOT__CSRDIFF__DOT__inst_csr[4]),64);
    bufp->fullQData(oldp+450,(vlSelf->CoreTop__DOT__CSR__DOT__CSRDIFF__DOT__inst_csr[5]),64);
    bufp->fullQData(oldp+452,(vlSelf->CoreTop__DOT__DIP__DOT__rf[0]),64);
    bufp->fullQData(oldp+454,(vlSelf->CoreTop__DOT__DIP__DOT__rf[1]),64);
    bufp->fullQData(oldp+456,(vlSelf->CoreTop__DOT__DIP__DOT__rf[2]),64);
    bufp->fullQData(oldp+458,(vlSelf->CoreTop__DOT__DIP__DOT__rf[3]),64);
    bufp->fullQData(oldp+460,(vlSelf->CoreTop__DOT__DIP__DOT__rf[4]),64);
    bufp->fullQData(oldp+462,(vlSelf->CoreTop__DOT__DIP__DOT__rf[5]),64);
    bufp->fullQData(oldp+464,(vlSelf->CoreTop__DOT__DIP__DOT__rf[6]),64);
    bufp->fullQData(oldp+466,(vlSelf->CoreTop__DOT__DIP__DOT__rf[7]),64);
    bufp->fullQData(oldp+468,(vlSelf->CoreTop__DOT__DIP__DOT__rf[8]),64);
    bufp->fullQData(oldp+470,(vlSelf->CoreTop__DOT__DIP__DOT__rf[9]),64);
    bufp->fullQData(oldp+472,(vlSelf->CoreTop__DOT__DIP__DOT__rf[10]),64);
    bufp->fullQData(oldp+474,(vlSelf->CoreTop__DOT__DIP__DOT__rf[11]),64);
    bufp->fullQData(oldp+476,(vlSelf->CoreTop__DOT__DIP__DOT__rf[12]),64);
    bufp->fullQData(oldp+478,(vlSelf->CoreTop__DOT__DIP__DOT__rf[13]),64);
    bufp->fullQData(oldp+480,(vlSelf->CoreTop__DOT__DIP__DOT__rf[14]),64);
    bufp->fullQData(oldp+482,(vlSelf->CoreTop__DOT__DIP__DOT__rf[15]),64);
    bufp->fullQData(oldp+484,(vlSelf->CoreTop__DOT__DIP__DOT__rf[16]),64);
    bufp->fullQData(oldp+486,(vlSelf->CoreTop__DOT__DIP__DOT__rf[17]),64);
    bufp->fullQData(oldp+488,(vlSelf->CoreTop__DOT__DIP__DOT__rf[18]),64);
    bufp->fullQData(oldp+490,(vlSelf->CoreTop__DOT__DIP__DOT__rf[19]),64);
    bufp->fullQData(oldp+492,(vlSelf->CoreTop__DOT__DIP__DOT__rf[20]),64);
    bufp->fullQData(oldp+494,(vlSelf->CoreTop__DOT__DIP__DOT__rf[21]),64);
    bufp->fullQData(oldp+496,(vlSelf->CoreTop__DOT__DIP__DOT__rf[22]),64);
    bufp->fullQData(oldp+498,(vlSelf->CoreTop__DOT__DIP__DOT__rf[23]),64);
    bufp->fullQData(oldp+500,(vlSelf->CoreTop__DOT__DIP__DOT__rf[24]),64);
    bufp->fullQData(oldp+502,(vlSelf->CoreTop__DOT__DIP__DOT__rf[25]),64);
    bufp->fullQData(oldp+504,(vlSelf->CoreTop__DOT__DIP__DOT__rf[26]),64);
    bufp->fullQData(oldp+506,(vlSelf->CoreTop__DOT__DIP__DOT__rf[27]),64);
    bufp->fullQData(oldp+508,(vlSelf->CoreTop__DOT__DIP__DOT__rf[28]),64);
    bufp->fullQData(oldp+510,(vlSelf->CoreTop__DOT__DIP__DOT__rf[29]),64);
    bufp->fullQData(oldp+512,(vlSelf->CoreTop__DOT__DIP__DOT__rf[30]),64);
    bufp->fullQData(oldp+514,(vlSelf->CoreTop__DOT__DIP__DOT__rf[31]),64);
    bufp->fullIData(oldp+516,(vlSelf->CoreTop__DOT__DIP__DOT__IN[0]),32);
    bufp->fullIData(oldp+517,(vlSelf->CoreTop__DOT__DIP__DOT__IN[1]),32);
    bufp->fullIData(oldp+518,(vlSelf->CoreTop__DOT__DIP__DOT__IN[2]),32);
    bufp->fullIData(oldp+519,(vlSelf->CoreTop__DOT__DIP__DOT__IN[3]),32);
    bufp->fullIData(oldp+520,(vlSelf->CoreTop__DOT__DIP__DOT__IN[4]),32);
    bufp->fullIData(oldp+521,(vlSelf->CoreTop__DOT__DIP__DOT__IN[5]),32);
    bufp->fullIData(oldp+522,(vlSelf->CoreTop__DOT__DIP__DOT__IN[6]),32);
    bufp->fullBit(oldp+523,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_valid));
    bufp->fullQData(oldp+524,(((IData)(vlSelf->CoreTop__DOT__EX__DOT__is_mul)
                                ? vlSelf->CoreTop__DOT__EX__DOT__src1
                                : (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__src1)))),64);
    bufp->fullQData(oldp+526,(((IData)(vlSelf->CoreTop__DOT__EX__DOT__is_mul)
                                ? vlSelf->CoreTop__DOT__EX__DOT__src2
                                : (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)))),64);
    bufp->fullBit(oldp+528,((0x44U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count))));
    bufp->fullQData(oldp+529,((((QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[0U])))),64);
    bufp->fullBit(oldp+531,(vlSelf->CoreTop__DOT__EX__DOT__div_io_in_valid));
    bufp->fullBit(oldp+532,(vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_flow_div_signed));
    bufp->fullQData(oldp+533,(vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src1),64);
    bufp->fullQData(oldp+535,(vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src2),64);
    bufp->fullBit(oldp+537,((2U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state))));
    bufp->fullQData(oldp+538,(vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_quotient),64);
    bufp->fullQData(oldp+540,(vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_remainder),64);
    bufp->fullBit(oldp+542,(vlSelf->CoreTop__DOT__EX__DOT__is_mul));
    bufp->fullBit(oldp+543,(((((((0x43U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                                 | (0x13U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) 
                                | (IData)(vlSelf->CoreTop__DOT__EX__DOT___is_divw_T_2)) 
                               | ((0x12U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                                  | (0xfU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)))) 
                              | (IData)(vlSelf->CoreTop__DOT__EX__DOT____VdfgTmp_h08208b49__0)) 
                             & (IData)(vlSelf->CoreTop__DOT__EX__DOT____VdfgTmp_h1a4c5317__0))));
    bufp->fullBit(oldp+544,(vlSelf->CoreTop__DOT__EX__DOT__is_divw));
    bufp->fullBit(oldp+545,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+546,((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[0U] 
                             >> 0x1fU)));
    bufp->fullBit(oldp+547,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_quotient 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+548,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_remainder 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+549,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_10 
                                           >> 0x1fU)))));
    bufp->fullQData(oldp+550,(((0x40U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
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
                                                    : vlSelf->CoreTop__DOT__EX__DOT___GEN_47))))))),64);
    __Vtemp_h052dcc23__0[0U] = (IData)(vlSelf->CoreTop__DOT__EX__DOT__src1);
    __Vtemp_h052dcc23__0[1U] = (IData)((vlSelf->CoreTop__DOT__EX__DOT__src1 
                                        >> 0x20U));
    __Vtemp_h052dcc23__0[2U] = 0U;
    VL_SHIFTL_WWI(95,95,5, __Vtemp_h0fbea1b2__0, __Vtemp_h052dcc23__0, 
                  (0x1fU & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)));
    bufp->fullBit(oldp+552,((__Vtemp_h0fbea1b2__0[0U] 
                             >> 0x1fU)));
    __Vtemp_h8004274a__0[0U] = (IData)(vlSelf->CoreTop__DOT__EX__DOT__src1);
    __Vtemp_h8004274a__0[1U] = 0U;
    __Vtemp_h8004274a__0[2U] = 0U;
    VL_SHIFTL_WWI(95,95,6, __Vtemp_h29cbf8c2__0, __Vtemp_h8004274a__0, 
                  (0x3fU & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)));
    bufp->fullBit(oldp+553,((__Vtemp_h29cbf8c2__0[0U] 
                             >> 0x1fU)));
    bufp->fullBit(oldp+554,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_25 
                             >> 0x1fU)));
    bufp->fullBit(oldp+555,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_31 
                             >> 0x1fU)));
    bufp->fullBit(oldp+556,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__src1 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+557,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__src2 
                                           >> 0x1fU)))));
    bufp->fullQData(oldp+558,(((0x6aU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                ? ((IData)(vlSelf->CoreTop__DOT__EX__DOT___compar_result_T)
                                    ? 1ULL : 0ULL) : 
                               ((2U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                 ? ((IData)(vlSelf->CoreTop__DOT__EX__DOT___compar_result_T_4)
                                     ? 1ULL : 0ULL)
                                 : 0ULL))),64);
    bufp->fullQData(oldp+560,(((3U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType))
                                ? (4ULL + vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC)
                                : 0ULL)),64);
    bufp->fullQData(oldp+562,((((QData)((IData)(((0x6eU 
                                                  == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                  ? (IData)(
                                                            (VL_SHIFTRS_QQI(64,64,5, vlSelf->CoreTop__DOT__EX__DOT__src1, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2))) 
                                                             >> 0x20U))
                                                  : 
                                                 vlSelf->CoreTop__DOT__EX__DOT___GEN_76[1U]))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((0x6eU 
                                                              == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                              ? (IData)(
                                                                        VL_SHIFTRS_QQI(64,64,5, vlSelf->CoreTop__DOT__EX__DOT__src1, 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2))))
                                                              : 
                                                             vlSelf->CoreTop__DOT__EX__DOT___GEN_76[0U]))))),64);
    bufp->fullQData(oldp+564,(((0x6bU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
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
    bufp->fullBit(oldp+566,(vlSelf->CoreTop__DOT__EX__DOT__branch_flag));
    bufp->fullBit(oldp+567,(vlSelf->CoreTop__DOT__EX__DOT__is_branch));
    bufp->fullBit(oldp+568,(vlSelf->CoreTop__DOT__EX__DOT__is_jump));
    bufp->fullWData(oldp+569,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend),128);
    bufp->fullQData(oldp+573,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divisor),64);
    bufp->fullQData(oldp+575,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S),64);
    bufp->fullCData(oldp+577,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state),2);
    bufp->fullCData(oldp+578,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__count),6);
    bufp->fullBit(oldp+579,((0x3fU == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__count))));
    bufp->fullBit(oldp+580,(((1U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state)) 
                             & (0x3fU == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__count)))));
    bufp->fullWData(oldp+581,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div),65);
    bufp->fullQData(oldp+584,((- vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S)),64);
    bufp->fullQData(oldp+586,((- (((QData)((IData)(
                                                   vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[3U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[2U]))))),64);
    bufp->fullQData(oldp+588,((((((0U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
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
    bufp->fullQData(oldp+590,((((((0U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
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
    bufp->fullCData(oldp+592,((7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U])),3);
    bufp->fullWData(oldp+593,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand),132);
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
    bufp->fullWData(oldp+598,(__Vtemp_h559cd7fe__0),132);
    bufp->fullBit(oldp+603,(((0U != (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U])) 
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
    bufp->fullWData(oldp+604,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier),66);
    bufp->fullWData(oldp+607,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p),132);
    bufp->fullCData(oldp+612,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count),7);
    bufp->fullWData(oldp+613,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__temp),132);
    bufp->fullBit(oldp+618,((1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__temp[4U] 
                                   >> 3U))));
    bufp->fullBit(oldp+619,(((IData)(vlSelf->CoreTop__DOT__IF_io_cache_req_addr_req_valid) 
                             & (0U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)))));
    bufp->fullQData(oldp+620,(((3U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state))
                                ? vlSelf->CoreTop__DOT__IF__DOT__temp
                                : 0ULL)),64);
    bufp->fullBit(oldp+622,((3U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state))));
    bufp->fullCData(oldp+623,(((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r)
                                ? 2U : 1U)),2);
    bufp->fullWData(oldp+624,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data),512);
    bufp->fullQData(oldp+640,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0
                              [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_tag_w_addr_pipe_0]),53);
    bufp->fullQData(oldp+642,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1
                              [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0]),53);
    bufp->fullBit(oldp+644,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0
                            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0]));
    bufp->fullBit(oldp+645,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1
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
    bufp->fullWData(oldp+646,(__Vtemp_h6ff33a25__0),512);
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
    bufp->fullWData(oldp+662,(__Vtemp_he7310ca3__0),512);
    bufp->fullQData(oldp+678,((vlSelf->CoreTop__DOT__IF__DOT__temp 
                               >> 0xbU)),53);
    bufp->fullCData(oldp+680,((0x1fU & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                >> 6U)))),5);
    bufp->fullCData(oldp+681,((0x3fU & (IData)(vlSelf->CoreTop__DOT__IF__DOT__temp))),6);
    bufp->fullBit(oldp+682,(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_in_valid_REG));
    bufp->fullBit(oldp+683,(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit));
    bufp->fullWData(oldp+684,(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data),512);
    bufp->fullBit(oldp+700,(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_0_result));
    bufp->fullBit(oldp+701,(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_1_result));
    bufp->fullBit(oldp+702,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[0]));
    bufp->fullBit(oldp+703,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[1]));
    bufp->fullBit(oldp+704,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[2]));
    bufp->fullBit(oldp+705,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[3]));
    bufp->fullBit(oldp+706,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[4]));
    bufp->fullBit(oldp+707,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[5]));
    bufp->fullBit(oldp+708,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[6]));
    bufp->fullBit(oldp+709,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[7]));
    bufp->fullBit(oldp+710,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[8]));
    bufp->fullBit(oldp+711,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[9]));
    bufp->fullBit(oldp+712,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[10]));
    bufp->fullBit(oldp+713,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[11]));
    bufp->fullBit(oldp+714,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[12]));
    bufp->fullBit(oldp+715,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[13]));
    bufp->fullBit(oldp+716,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[14]));
    bufp->fullBit(oldp+717,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[15]));
    bufp->fullBit(oldp+718,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[16]));
    bufp->fullBit(oldp+719,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[17]));
    bufp->fullBit(oldp+720,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[18]));
    bufp->fullBit(oldp+721,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[19]));
    bufp->fullBit(oldp+722,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[20]));
    bufp->fullBit(oldp+723,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[21]));
    bufp->fullBit(oldp+724,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[22]));
    bufp->fullBit(oldp+725,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[23]));
    bufp->fullBit(oldp+726,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[24]));
    bufp->fullBit(oldp+727,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[25]));
    bufp->fullBit(oldp+728,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[26]));
    bufp->fullBit(oldp+729,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[27]));
    bufp->fullBit(oldp+730,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[28]));
    bufp->fullBit(oldp+731,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[29]));
    bufp->fullBit(oldp+732,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[30]));
    bufp->fullBit(oldp+733,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[31]));
    bufp->fullBit(oldp+734,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_lru_w_MPORT_en_pipe_0));
    bufp->fullCData(oldp+735,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_lru_w_MPORT_addr_pipe_0),5);
    bufp->fullBit(oldp+736,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru
                            [vlSelf->CoreTop__DOT__ICACHE__DOT__lru_lru_w_MPORT_addr_pipe_0]));
    bufp->fullBit(oldp+737,(((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                             & ((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                & ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit) 
                                   & (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_0_result))))));
    bufp->fullBit(oldp+738,(((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                             & ((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                & ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit) 
                                   & (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_1_result))))));
    bufp->fullBit(oldp+739,(((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                             & ((1U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                & ((2U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                   & ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT___T_5) 
                                      & (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r)))))));
    bufp->fullBit(oldp+740,(((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                             & ((1U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                & ((2U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                   & ((~ (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r)) 
                                      & (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT___T_5)))))));
    bufp->fullCData(oldp+741,(vlSelf->CoreTop__DOT__ICACHE__DOT__state),3);
    bufp->fullCData(oldp+742,(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state),2);
    bufp->fullWData(oldp+743,(vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg),512);
    bufp->fullQData(oldp+759,(vlSelf->CoreTop__DOT__ICACHE__DOT__mem_addr_reg),64);
    bufp->fullBit(oldp+761,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r));
    bufp->fullQData(oldp+762,(((0U == (7U & (IData)(
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
    bufp->fullQData(oldp+764,(((0U == (7U & (IData)(
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
    bufp->fullWData(oldp+766,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[0]),512);
    bufp->fullWData(oldp+782,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[1]),512);
    bufp->fullWData(oldp+798,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[2]),512);
    bufp->fullWData(oldp+814,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[3]),512);
    bufp->fullWData(oldp+830,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[4]),512);
    bufp->fullWData(oldp+846,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[5]),512);
    bufp->fullWData(oldp+862,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[6]),512);
    bufp->fullWData(oldp+878,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[7]),512);
    bufp->fullWData(oldp+894,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[8]),512);
    bufp->fullWData(oldp+910,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[9]),512);
    bufp->fullWData(oldp+926,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[10]),512);
    bufp->fullWData(oldp+942,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[11]),512);
    bufp->fullWData(oldp+958,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[12]),512);
    bufp->fullWData(oldp+974,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[13]),512);
    bufp->fullWData(oldp+990,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[14]),512);
    bufp->fullWData(oldp+1006,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[15]),512);
    bufp->fullWData(oldp+1022,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[16]),512);
    bufp->fullWData(oldp+1038,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[17]),512);
    bufp->fullWData(oldp+1054,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[18]),512);
    bufp->fullWData(oldp+1070,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[19]),512);
    bufp->fullWData(oldp+1086,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[20]),512);
    bufp->fullWData(oldp+1102,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[21]),512);
    bufp->fullWData(oldp+1118,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[22]),512);
    bufp->fullWData(oldp+1134,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[23]),512);
    bufp->fullWData(oldp+1150,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[24]),512);
    bufp->fullWData(oldp+1166,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[25]),512);
    bufp->fullWData(oldp+1182,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[26]),512);
    bufp->fullWData(oldp+1198,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[27]),512);
    bufp->fullWData(oldp+1214,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[28]),512);
    bufp->fullWData(oldp+1230,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[29]),512);
    bufp->fullWData(oldp+1246,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[30]),512);
    bufp->fullWData(oldp+1262,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[31]),512);
    bufp->fullBit(oldp+1278,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_en_pipe_0));
    bufp->fullCData(oldp+1279,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0),5);
    bufp->fullCData(oldp+1280,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_addr),5);
    bufp->fullBit(oldp+1281,((1U & (~ (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r)))));
    bufp->fullWData(oldp+1282,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[0]),512);
    bufp->fullWData(oldp+1298,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[1]),512);
    bufp->fullWData(oldp+1314,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[2]),512);
    bufp->fullWData(oldp+1330,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[3]),512);
    bufp->fullWData(oldp+1346,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[4]),512);
    bufp->fullWData(oldp+1362,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[5]),512);
    bufp->fullWData(oldp+1378,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[6]),512);
    bufp->fullWData(oldp+1394,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[7]),512);
    bufp->fullWData(oldp+1410,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[8]),512);
    bufp->fullWData(oldp+1426,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[9]),512);
    bufp->fullWData(oldp+1442,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[10]),512);
    bufp->fullWData(oldp+1458,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[11]),512);
    bufp->fullWData(oldp+1474,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[12]),512);
    bufp->fullWData(oldp+1490,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[13]),512);
    bufp->fullWData(oldp+1506,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[14]),512);
    bufp->fullWData(oldp+1522,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[15]),512);
    bufp->fullWData(oldp+1538,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[16]),512);
    bufp->fullWData(oldp+1554,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[17]),512);
    bufp->fullWData(oldp+1570,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[18]),512);
    bufp->fullWData(oldp+1586,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[19]),512);
    bufp->fullWData(oldp+1602,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[20]),512);
    bufp->fullWData(oldp+1618,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[21]),512);
    bufp->fullWData(oldp+1634,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[22]),512);
    bufp->fullWData(oldp+1650,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[23]),512);
    bufp->fullWData(oldp+1666,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[24]),512);
    bufp->fullWData(oldp+1682,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[25]),512);
    bufp->fullWData(oldp+1698,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[26]),512);
    bufp->fullWData(oldp+1714,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[27]),512);
    bufp->fullWData(oldp+1730,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[28]),512);
    bufp->fullWData(oldp+1746,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[29]),512);
    bufp->fullWData(oldp+1762,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[30]),512);
    bufp->fullWData(oldp+1778,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[31]),512);
    bufp->fullBit(oldp+1794,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_en_pipe_0));
    bufp->fullQData(oldp+1795,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[0]),53);
    bufp->fullQData(oldp+1797,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[1]),53);
    bufp->fullQData(oldp+1799,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[2]),53);
    bufp->fullQData(oldp+1801,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[3]),53);
    bufp->fullQData(oldp+1803,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[4]),53);
    bufp->fullQData(oldp+1805,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[5]),53);
    bufp->fullQData(oldp+1807,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[6]),53);
    bufp->fullQData(oldp+1809,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[7]),53);
    bufp->fullQData(oldp+1811,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[8]),53);
    bufp->fullQData(oldp+1813,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[9]),53);
    bufp->fullQData(oldp+1815,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[10]),53);
    bufp->fullQData(oldp+1817,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[11]),53);
    bufp->fullQData(oldp+1819,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[12]),53);
    bufp->fullQData(oldp+1821,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[13]),53);
    bufp->fullQData(oldp+1823,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[14]),53);
    bufp->fullQData(oldp+1825,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[15]),53);
    bufp->fullQData(oldp+1827,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[16]),53);
    bufp->fullQData(oldp+1829,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[17]),53);
    bufp->fullQData(oldp+1831,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[18]),53);
    bufp->fullQData(oldp+1833,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[19]),53);
    bufp->fullQData(oldp+1835,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[20]),53);
    bufp->fullQData(oldp+1837,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[21]),53);
    bufp->fullQData(oldp+1839,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[22]),53);
    bufp->fullQData(oldp+1841,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[23]),53);
    bufp->fullQData(oldp+1843,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[24]),53);
    bufp->fullQData(oldp+1845,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[25]),53);
    bufp->fullQData(oldp+1847,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[26]),53);
    bufp->fullQData(oldp+1849,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[27]),53);
    bufp->fullQData(oldp+1851,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[28]),53);
    bufp->fullQData(oldp+1853,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[29]),53);
    bufp->fullQData(oldp+1855,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[30]),53);
    bufp->fullQData(oldp+1857,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[31]),53);
    bufp->fullBit(oldp+1859,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_tag_w_en_pipe_0));
    bufp->fullCData(oldp+1860,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_tag_w_addr_pipe_0),5);
    bufp->fullQData(oldp+1861,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_MPORT_1_data),53);
    bufp->fullQData(oldp+1863,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[0]),53);
    bufp->fullQData(oldp+1865,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[1]),53);
    bufp->fullQData(oldp+1867,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[2]),53);
    bufp->fullQData(oldp+1869,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[3]),53);
    bufp->fullQData(oldp+1871,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[4]),53);
    bufp->fullQData(oldp+1873,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[5]),53);
    bufp->fullQData(oldp+1875,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[6]),53);
    bufp->fullQData(oldp+1877,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[7]),53);
    bufp->fullQData(oldp+1879,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[8]),53);
    bufp->fullQData(oldp+1881,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[9]),53);
    bufp->fullQData(oldp+1883,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[10]),53);
    bufp->fullQData(oldp+1885,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[11]),53);
    bufp->fullQData(oldp+1887,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[12]),53);
    bufp->fullQData(oldp+1889,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[13]),53);
    bufp->fullQData(oldp+1891,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[14]),53);
    bufp->fullQData(oldp+1893,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[15]),53);
    bufp->fullQData(oldp+1895,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[16]),53);
    bufp->fullQData(oldp+1897,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[17]),53);
    bufp->fullQData(oldp+1899,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[18]),53);
    bufp->fullQData(oldp+1901,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[19]),53);
    bufp->fullQData(oldp+1903,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[20]),53);
    bufp->fullQData(oldp+1905,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[21]),53);
    bufp->fullQData(oldp+1907,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[22]),53);
    bufp->fullQData(oldp+1909,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[23]),53);
    bufp->fullQData(oldp+1911,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[24]),53);
    bufp->fullQData(oldp+1913,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[25]),53);
    bufp->fullQData(oldp+1915,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[26]),53);
    bufp->fullQData(oldp+1917,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[27]),53);
    bufp->fullQData(oldp+1919,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[28]),53);
    bufp->fullQData(oldp+1921,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[29]),53);
    bufp->fullQData(oldp+1923,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[30]),53);
    bufp->fullQData(oldp+1925,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[31]),53);
    bufp->fullBit(oldp+1927,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_en_pipe_0));
    bufp->fullBit(oldp+1928,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[0]));
    bufp->fullBit(oldp+1929,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[1]));
    bufp->fullBit(oldp+1930,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[2]));
    bufp->fullBit(oldp+1931,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[3]));
    bufp->fullBit(oldp+1932,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[4]));
    bufp->fullBit(oldp+1933,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[5]));
    bufp->fullBit(oldp+1934,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[6]));
    bufp->fullBit(oldp+1935,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[7]));
    bufp->fullBit(oldp+1936,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[8]));
    bufp->fullBit(oldp+1937,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[9]));
    bufp->fullBit(oldp+1938,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[10]));
    bufp->fullBit(oldp+1939,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[11]));
    bufp->fullBit(oldp+1940,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[12]));
    bufp->fullBit(oldp+1941,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[13]));
    bufp->fullBit(oldp+1942,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[14]));
    bufp->fullBit(oldp+1943,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[15]));
    bufp->fullBit(oldp+1944,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[16]));
    bufp->fullBit(oldp+1945,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[17]));
    bufp->fullBit(oldp+1946,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[18]));
    bufp->fullBit(oldp+1947,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[19]));
    bufp->fullBit(oldp+1948,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[20]));
    bufp->fullBit(oldp+1949,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[21]));
    bufp->fullBit(oldp+1950,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[22]));
    bufp->fullBit(oldp+1951,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[23]));
    bufp->fullBit(oldp+1952,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[24]));
    bufp->fullBit(oldp+1953,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[25]));
    bufp->fullBit(oldp+1954,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[26]));
    bufp->fullBit(oldp+1955,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[27]));
    bufp->fullBit(oldp+1956,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[28]));
    bufp->fullBit(oldp+1957,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[29]));
    bufp->fullBit(oldp+1958,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[30]));
    bufp->fullBit(oldp+1959,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[31]));
    bufp->fullBit(oldp+1960,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_en_pipe_0));
    bufp->fullCData(oldp+1961,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0),5);
    bufp->fullBit(oldp+1962,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[0]));
    bufp->fullBit(oldp+1963,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[1]));
    bufp->fullBit(oldp+1964,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[2]));
    bufp->fullBit(oldp+1965,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[3]));
    bufp->fullBit(oldp+1966,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[4]));
    bufp->fullBit(oldp+1967,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[5]));
    bufp->fullBit(oldp+1968,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[6]));
    bufp->fullBit(oldp+1969,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[7]));
    bufp->fullBit(oldp+1970,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[8]));
    bufp->fullBit(oldp+1971,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[9]));
    bufp->fullBit(oldp+1972,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[10]));
    bufp->fullBit(oldp+1973,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[11]));
    bufp->fullBit(oldp+1974,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[12]));
    bufp->fullBit(oldp+1975,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[13]));
    bufp->fullBit(oldp+1976,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[14]));
    bufp->fullBit(oldp+1977,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[15]));
    bufp->fullBit(oldp+1978,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[16]));
    bufp->fullBit(oldp+1979,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[17]));
    bufp->fullBit(oldp+1980,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[18]));
    bufp->fullBit(oldp+1981,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[19]));
    bufp->fullBit(oldp+1982,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[20]));
    bufp->fullBit(oldp+1983,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[21]));
    bufp->fullBit(oldp+1984,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[22]));
    bufp->fullBit(oldp+1985,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[23]));
    bufp->fullBit(oldp+1986,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[24]));
    bufp->fullBit(oldp+1987,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[25]));
    bufp->fullBit(oldp+1988,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[26]));
    bufp->fullBit(oldp+1989,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[27]));
    bufp->fullBit(oldp+1990,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[28]));
    bufp->fullBit(oldp+1991,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[29]));
    bufp->fullBit(oldp+1992,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[30]));
    bufp->fullBit(oldp+1993,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[31]));
    bufp->fullBit(oldp+1994,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_en_pipe_0));
    bufp->fullCData(oldp+1995,(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0),4);
    bufp->fullBit(oldp+1996,(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_3));
    bufp->fullCData(oldp+1997,((((7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                  ? 2U : 0U) | ((3U 
                                                 == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                                 ? 2U
                                                 : 0U))),2);
    bufp->fullBit(oldp+1998,(((8U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)) 
                              | ((7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)) 
                                 | (3U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))))));
    bufp->fullBit(oldp+1999,((vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                              >> 0x1fU)));
    bufp->fullBit(oldp+2000,((1U & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                    >> 0x13U))));
    bufp->fullBit(oldp+2001,((((IData)(vlSelf->CoreTop__DOT__valid) 
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
    bufp->fullQData(oldp+2002,(vlSelf->CoreTop__DOT__IF__DOT__temp),64);
    bufp->fullIData(oldp+2004,(((1U & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                               >> 2U)))
                                 ? (IData)((vlSelf->CoreTop__DOT__IF_io_cache_req_rdata_rep_bits_rdata 
                                            >> 0x20U))
                                 : (IData)(vlSelf->CoreTop__DOT__IF_io_cache_req_rdata_rep_bits_rdata))),32);
    bufp->fullCData(oldp+2005,(vlSelf->CoreTop__DOT__MMEM__DOT__read_state),2);
    bufp->fullCData(oldp+2006,(vlSelf->CoreTop__DOT__MMEM__DOT__write_state),2);
    bufp->fullCData(oldp+2007,(vlSelf->CoreTop__DOT__MMEM__DOT__read_next_state),2);
    bufp->fullCData(oldp+2008,(vlSelf->CoreTop__DOT__MMEM__DOT__write_next_state),2);
    bufp->fullQData(oldp+2009,(vlSelf->CoreTop__DOT__MMEM__DOT__write_addr_buffer),64);
    bufp->fullQData(oldp+2011,(vlSelf->CoreTop__DOT__MMEM__DOT__read_addr_buffer),64);
    bufp->fullCData(oldp+2013,(vlSelf->CoreTop__DOT__MMEM__DOT__read_count),8);
    bufp->fullBit(oldp+2014,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_valid));
    bufp->fullBit(oldp+2015,((1U & (~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)))));
    bufp->fullBit(oldp+2016,(((~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_bits_we)) 
                              & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_bits_rdata_T_1) 
                                 | (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_valid_T_4)))));
    bufp->fullQData(oldp+2017,(((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_bits_rdata_T_1)
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
    bufp->fullBit(oldp+2019,(((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___Cache_data_io_write_bus_valid_T_3) 
                              | ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_valid_T_4) 
                                 & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_bits_we)))));
    bufp->fullBit(oldp+2020,(((~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)) 
                              & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_ready))));
    bufp->fullBit(oldp+2021,((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state))));
    bufp->fullQData(oldp+2022,(((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state))
                                 ? vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_addr_reg
                                 : 0ULL)),64);
    bufp->fullBit(oldp+2024,(((~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)) 
                              & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_ready))));
    bufp->fullBit(oldp+2025,((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state))));
    bufp->fullQData(oldp+2026,(((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state))
                                 ? vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_addr_reg
                                 : 0ULL)),64);
    bufp->fullBit(oldp+2028,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_rdata_rep_valid));
    bufp->fullBit(oldp+2029,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_wdata_req_ready));
    bufp->fullBit(oldp+2030,((2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state))));
    bufp->fullQData(oldp+2031,((((QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0U])))),64);
    bufp->fullBit(oldp+2033,((7U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count_write))));
    bufp->fullBit(oldp+2034,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_wb_valid));
    bufp->fullBit(oldp+2035,(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_addr_req_valid));
    bufp->fullBit(oldp+2036,(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready));
    bufp->fullBit(oldp+2037,(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_valid));
    bufp->fullBit(oldp+2038,(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_out_wb_valid));
    bufp->fullBit(oldp+2039,(((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready) 
                              & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_ready))));
    bufp->fullBit(oldp+2040,((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__read_state))));
    bufp->fullBit(oldp+2041,(((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready) 
                              & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_ready))));
    bufp->fullBit(oldp+2042,((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state))));
    bufp->fullBit(oldp+2043,(((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready) 
                              & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_ready))));
    bufp->fullBit(oldp+2044,((2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state))));
    bufp->fullBit(oldp+2045,((3U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state))));
    bufp->fullBit(oldp+2046,(((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_valid) 
                              & (0U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)))));
    bufp->fullQData(oldp+2047,(((IData)(vlSelf->__VdfgTmp_h5a5a8c61__0)
                                 ? vlSelf->CoreTop__DOT__MEM__DOT__addr_temp
                                 : 0ULL)),64);
    bufp->fullBit(oldp+2049,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_en));
    bufp->fullCData(oldp+2050,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_waymask),2);
    bufp->fullWData(oldp+2051,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data),512);
    bufp->fullQData(oldp+2067,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_tag_w_data),53);
    bufp->fullQData(oldp+2069,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1_tag_w_data),53);
    bufp->fullBit(oldp+2071,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0
                             [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0]));
    bufp->fullBit(oldp+2072,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1
                             [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0]));
    bufp->fullWData(oldp+2073,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data),512);
    bufp->fullWData(oldp+2089,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data),512);
    bufp->fullQData(oldp+2105,((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                >> 0xbU)),53);
    bufp->fullCData(oldp+2107,((0x1fU & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                 >> 6U)))),5);
    bufp->fullCData(oldp+2108,((0x3fU & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp))),6);
    bufp->fullBit(oldp+2109,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_in_valid_REG));
    bufp->fullBit(oldp+2110,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit));
    bufp->fullWData(oldp+2111,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data),512);
    bufp->fullBit(oldp+2127,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_0_result));
    bufp->fullBit(oldp+2128,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_1_result));
    bufp->fullBit(oldp+2129,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[0]));
    bufp->fullBit(oldp+2130,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[1]));
    bufp->fullBit(oldp+2131,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[2]));
    bufp->fullBit(oldp+2132,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[3]));
    bufp->fullBit(oldp+2133,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[4]));
    bufp->fullBit(oldp+2134,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[5]));
    bufp->fullBit(oldp+2135,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[6]));
    bufp->fullBit(oldp+2136,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[7]));
    bufp->fullBit(oldp+2137,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[8]));
    bufp->fullBit(oldp+2138,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[9]));
    bufp->fullBit(oldp+2139,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[10]));
    bufp->fullBit(oldp+2140,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[11]));
    bufp->fullBit(oldp+2141,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[12]));
    bufp->fullBit(oldp+2142,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[13]));
    bufp->fullBit(oldp+2143,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[14]));
    bufp->fullBit(oldp+2144,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[15]));
    bufp->fullBit(oldp+2145,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[16]));
    bufp->fullBit(oldp+2146,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[17]));
    bufp->fullBit(oldp+2147,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[18]));
    bufp->fullBit(oldp+2148,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[19]));
    bufp->fullBit(oldp+2149,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[20]));
    bufp->fullBit(oldp+2150,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[21]));
    bufp->fullBit(oldp+2151,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[22]));
    bufp->fullBit(oldp+2152,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[23]));
    bufp->fullBit(oldp+2153,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[24]));
    bufp->fullBit(oldp+2154,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[25]));
    bufp->fullBit(oldp+2155,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[26]));
    bufp->fullBit(oldp+2156,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[27]));
    bufp->fullBit(oldp+2157,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[28]));
    bufp->fullBit(oldp+2158,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[29]));
    bufp->fullBit(oldp+2159,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[30]));
    bufp->fullBit(oldp+2160,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[31]));
    bufp->fullBit(oldp+2161,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_en_pipe_0));
    bufp->fullCData(oldp+2162,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_addr_pipe_0),5);
    bufp->fullBit(oldp+2163,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_data));
    bufp->fullBit(oldp+2164,(((0U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                              & ((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                 & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit) 
                                    & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_0_result))))));
    bufp->fullBit(oldp+2165,(((0U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                              & ((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                 & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit) 
                                    & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_1_result))))));
    bufp->fullBit(oldp+2166,(((0U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                              & ((1U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                 & ((2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                    & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___T_8) 
                                       & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_r)))))));
    bufp->fullBit(oldp+2167,(((0U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                              & ((1U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                 & ((2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                    & ((~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_r)) 
                                       & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___T_8)))))));
    bufp->fullBit(oldp+2168,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[0]));
    bufp->fullBit(oldp+2169,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[1]));
    bufp->fullBit(oldp+2170,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[2]));
    bufp->fullBit(oldp+2171,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[3]));
    bufp->fullBit(oldp+2172,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[4]));
    bufp->fullBit(oldp+2173,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[5]));
    bufp->fullBit(oldp+2174,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[6]));
    bufp->fullBit(oldp+2175,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[7]));
    bufp->fullBit(oldp+2176,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[8]));
    bufp->fullBit(oldp+2177,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[9]));
    bufp->fullBit(oldp+2178,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[10]));
    bufp->fullBit(oldp+2179,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[11]));
    bufp->fullBit(oldp+2180,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[12]));
    bufp->fullBit(oldp+2181,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[13]));
    bufp->fullBit(oldp+2182,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[14]));
    bufp->fullBit(oldp+2183,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[15]));
    bufp->fullBit(oldp+2184,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[16]));
    bufp->fullBit(oldp+2185,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[17]));
    bufp->fullBit(oldp+2186,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[18]));
    bufp->fullBit(oldp+2187,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[19]));
    bufp->fullBit(oldp+2188,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[20]));
    bufp->fullBit(oldp+2189,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[21]));
    bufp->fullBit(oldp+2190,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[22]));
    bufp->fullBit(oldp+2191,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[23]));
    bufp->fullBit(oldp+2192,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[24]));
    bufp->fullBit(oldp+2193,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[25]));
    bufp->fullBit(oldp+2194,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[26]));
    bufp->fullBit(oldp+2195,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[27]));
    bufp->fullBit(oldp+2196,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[28]));
    bufp->fullBit(oldp+2197,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[29]));
    bufp->fullBit(oldp+2198,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[30]));
    bufp->fullBit(oldp+2199,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[31]));
    bufp->fullBit(oldp+2200,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0_dirt_w_en_pipe_0));
    bufp->fullCData(oldp+2201,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0_dirt_w_addr_pipe_0),5);
    bufp->fullBit(oldp+2202,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0
                             [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0_dirt_w_addr_pipe_0]));
    bufp->fullBit(oldp+2203,((1U & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_waymask))));
    bufp->fullBit(oldp+2204,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0_MPORT_4_en));
    bufp->fullBit(oldp+2205,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[0]));
    bufp->fullBit(oldp+2206,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[1]));
    bufp->fullBit(oldp+2207,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[2]));
    bufp->fullBit(oldp+2208,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[3]));
    bufp->fullBit(oldp+2209,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[4]));
    bufp->fullBit(oldp+2210,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[5]));
    bufp->fullBit(oldp+2211,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[6]));
    bufp->fullBit(oldp+2212,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[7]));
    bufp->fullBit(oldp+2213,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[8]));
    bufp->fullBit(oldp+2214,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[9]));
    bufp->fullBit(oldp+2215,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[10]));
    bufp->fullBit(oldp+2216,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[11]));
    bufp->fullBit(oldp+2217,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[12]));
    bufp->fullBit(oldp+2218,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[13]));
    bufp->fullBit(oldp+2219,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[14]));
    bufp->fullBit(oldp+2220,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[15]));
    bufp->fullBit(oldp+2221,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[16]));
    bufp->fullBit(oldp+2222,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[17]));
    bufp->fullBit(oldp+2223,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[18]));
    bufp->fullBit(oldp+2224,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[19]));
    bufp->fullBit(oldp+2225,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[20]));
    bufp->fullBit(oldp+2226,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[21]));
    bufp->fullBit(oldp+2227,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[22]));
    bufp->fullBit(oldp+2228,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[23]));
    bufp->fullBit(oldp+2229,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[24]));
    bufp->fullBit(oldp+2230,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[25]));
    bufp->fullBit(oldp+2231,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[26]));
    bufp->fullBit(oldp+2232,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[27]));
    bufp->fullBit(oldp+2233,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[28]));
    bufp->fullBit(oldp+2234,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[29]));
    bufp->fullBit(oldp+2235,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[30]));
    bufp->fullBit(oldp+2236,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[31]));
    bufp->fullBit(oldp+2237,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1_dirt_w_en_pipe_0));
    bufp->fullCData(oldp+2238,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1_dirt_w_addr_pipe_0),5);
    bufp->fullBit(oldp+2239,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1
                             [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1_dirt_w_addr_pipe_0]));
    bufp->fullBit(oldp+2240,((1U & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_waymask) 
                                    >> 1U))));
    bufp->fullCData(oldp+2241,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state),3);
    bufp->fullCData(oldp+2242,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state),2);
    bufp->fullCData(oldp+2243,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state),2);
    bufp->fullWData(oldp+2244,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg),512);
    bufp->fullQData(oldp+2260,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_addr_reg),64);
    bufp->fullBit(oldp+2262,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_r));
    bufp->fullCData(oldp+2263,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count_write),4);
    bufp->fullQData(oldp+2264,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_addr_reg),64);
    bufp->fullWData(oldp+2266,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg),512);
    bufp->fullQData(oldp+2282,(((0U == (7U & (IData)(
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
    bufp->fullQData(oldp+2284,(((0U == (7U & (IData)(
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
    bufp->fullQData(oldp+2286,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask),64);
    bufp->fullQData(oldp+2288,((((QData)((IData)(((1U 
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
    bufp->fullWData(oldp+2290,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo_lo),128);
    bufp->fullQData(oldp+2294,((((QData)((IData)(((1U 
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
    bufp->fullWData(oldp+2296,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo),256);
    bufp->fullQData(oldp+2304,((((QData)((IData)(((1U 
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
    bufp->fullWData(oldp+2306,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi_lo),128);
    bufp->fullQData(oldp+2310,((((QData)((IData)(((1U 
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
    bufp->fullWData(oldp+2312,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi),256);
    bufp->fullWData(oldp+2320,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend),512);
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
    bufp->fullWData(oldp+2336,(__Vtemp_hc34456c3__0),512);
    bufp->fullWData(oldp+2352,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[0]),512);
    bufp->fullWData(oldp+2368,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[1]),512);
    bufp->fullWData(oldp+2384,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[2]),512);
    bufp->fullWData(oldp+2400,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[3]),512);
    bufp->fullWData(oldp+2416,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[4]),512);
    bufp->fullWData(oldp+2432,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[5]),512);
    bufp->fullWData(oldp+2448,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[6]),512);
    bufp->fullWData(oldp+2464,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[7]),512);
    bufp->fullWData(oldp+2480,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[8]),512);
    bufp->fullWData(oldp+2496,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[9]),512);
    bufp->fullWData(oldp+2512,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[10]),512);
    bufp->fullWData(oldp+2528,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[11]),512);
    bufp->fullWData(oldp+2544,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[12]),512);
    bufp->fullWData(oldp+2560,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[13]),512);
    bufp->fullWData(oldp+2576,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[14]),512);
    bufp->fullWData(oldp+2592,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[15]),512);
    bufp->fullWData(oldp+2608,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[16]),512);
    bufp->fullWData(oldp+2624,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[17]),512);
    bufp->fullWData(oldp+2640,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[18]),512);
    bufp->fullWData(oldp+2656,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[19]),512);
    bufp->fullWData(oldp+2672,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[20]),512);
    bufp->fullWData(oldp+2688,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[21]),512);
    bufp->fullWData(oldp+2704,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[22]),512);
    bufp->fullWData(oldp+2720,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[23]),512);
    bufp->fullWData(oldp+2736,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[24]),512);
    bufp->fullWData(oldp+2752,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[25]),512);
    bufp->fullWData(oldp+2768,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[26]),512);
    bufp->fullWData(oldp+2784,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[27]),512);
    bufp->fullWData(oldp+2800,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[28]),512);
    bufp->fullWData(oldp+2816,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[29]),512);
    bufp->fullWData(oldp+2832,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[30]),512);
    bufp->fullWData(oldp+2848,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[31]),512);
    bufp->fullBit(oldp+2864,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_en_pipe_0));
    bufp->fullCData(oldp+2865,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0),5);
    bufp->fullCData(oldp+2866,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_addr),5);
    bufp->fullWData(oldp+2867,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[0]),512);
    bufp->fullWData(oldp+2883,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[1]),512);
    bufp->fullWData(oldp+2899,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[2]),512);
    bufp->fullWData(oldp+2915,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[3]),512);
    bufp->fullWData(oldp+2931,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[4]),512);
    bufp->fullWData(oldp+2947,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[5]),512);
    bufp->fullWData(oldp+2963,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[6]),512);
    bufp->fullWData(oldp+2979,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[7]),512);
    bufp->fullWData(oldp+2995,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[8]),512);
    bufp->fullWData(oldp+3011,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[9]),512);
    bufp->fullWData(oldp+3027,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[10]),512);
    bufp->fullWData(oldp+3043,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[11]),512);
    bufp->fullWData(oldp+3059,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[12]),512);
    bufp->fullWData(oldp+3075,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[13]),512);
    bufp->fullWData(oldp+3091,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[14]),512);
    bufp->fullWData(oldp+3107,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[15]),512);
    bufp->fullWData(oldp+3123,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[16]),512);
    bufp->fullWData(oldp+3139,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[17]),512);
    bufp->fullWData(oldp+3155,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[18]),512);
    bufp->fullWData(oldp+3171,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[19]),512);
    bufp->fullWData(oldp+3187,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[20]),512);
    bufp->fullWData(oldp+3203,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[21]),512);
    bufp->fullWData(oldp+3219,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[22]),512);
    bufp->fullWData(oldp+3235,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[23]),512);
    bufp->fullWData(oldp+3251,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[24]),512);
    bufp->fullWData(oldp+3267,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[25]),512);
    bufp->fullWData(oldp+3283,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[26]),512);
    bufp->fullWData(oldp+3299,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[27]),512);
    bufp->fullWData(oldp+3315,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[28]),512);
    bufp->fullWData(oldp+3331,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[29]),512);
    bufp->fullWData(oldp+3347,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[30]),512);
    bufp->fullWData(oldp+3363,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[31]),512);
    bufp->fullBit(oldp+3379,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_en_pipe_0));
    bufp->fullQData(oldp+3380,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[0]),53);
    bufp->fullQData(oldp+3382,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[1]),53);
    bufp->fullQData(oldp+3384,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[2]),53);
    bufp->fullQData(oldp+3386,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[3]),53);
    bufp->fullQData(oldp+3388,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[4]),53);
    bufp->fullQData(oldp+3390,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[5]),53);
    bufp->fullQData(oldp+3392,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[6]),53);
    bufp->fullQData(oldp+3394,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[7]),53);
    bufp->fullQData(oldp+3396,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[8]),53);
    bufp->fullQData(oldp+3398,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[9]),53);
    bufp->fullQData(oldp+3400,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[10]),53);
    bufp->fullQData(oldp+3402,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[11]),53);
    bufp->fullQData(oldp+3404,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[12]),53);
    bufp->fullQData(oldp+3406,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[13]),53);
    bufp->fullQData(oldp+3408,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[14]),53);
    bufp->fullQData(oldp+3410,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[15]),53);
    bufp->fullQData(oldp+3412,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[16]),53);
    bufp->fullQData(oldp+3414,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[17]),53);
    bufp->fullQData(oldp+3416,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[18]),53);
    bufp->fullQData(oldp+3418,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[19]),53);
    bufp->fullQData(oldp+3420,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[20]),53);
    bufp->fullQData(oldp+3422,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[21]),53);
    bufp->fullQData(oldp+3424,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[22]),53);
    bufp->fullQData(oldp+3426,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[23]),53);
    bufp->fullQData(oldp+3428,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[24]),53);
    bufp->fullQData(oldp+3430,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[25]),53);
    bufp->fullQData(oldp+3432,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[26]),53);
    bufp->fullQData(oldp+3434,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[27]),53);
    bufp->fullQData(oldp+3436,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[28]),53);
    bufp->fullQData(oldp+3438,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[29]),53);
    bufp->fullQData(oldp+3440,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[30]),53);
    bufp->fullQData(oldp+3442,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[31]),53);
    bufp->fullBit(oldp+3444,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_tag_w_en_pipe_0));
    bufp->fullCData(oldp+3445,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_tag_w_addr_pipe_0),5);
    bufp->fullQData(oldp+3446,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_MPORT_1_data),53);
    bufp->fullQData(oldp+3448,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[0]),53);
    bufp->fullQData(oldp+3450,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[1]),53);
    bufp->fullQData(oldp+3452,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[2]),53);
    bufp->fullQData(oldp+3454,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[3]),53);
    bufp->fullQData(oldp+3456,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[4]),53);
    bufp->fullQData(oldp+3458,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[5]),53);
    bufp->fullQData(oldp+3460,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[6]),53);
    bufp->fullQData(oldp+3462,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[7]),53);
    bufp->fullQData(oldp+3464,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[8]),53);
    bufp->fullQData(oldp+3466,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[9]),53);
    bufp->fullQData(oldp+3468,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[10]),53);
    bufp->fullQData(oldp+3470,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[11]),53);
    bufp->fullQData(oldp+3472,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[12]),53);
    bufp->fullQData(oldp+3474,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[13]),53);
    bufp->fullQData(oldp+3476,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[14]),53);
    bufp->fullQData(oldp+3478,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[15]),53);
    bufp->fullQData(oldp+3480,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[16]),53);
    bufp->fullQData(oldp+3482,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[17]),53);
    bufp->fullQData(oldp+3484,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[18]),53);
    bufp->fullQData(oldp+3486,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[19]),53);
    bufp->fullQData(oldp+3488,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[20]),53);
    bufp->fullQData(oldp+3490,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[21]),53);
    bufp->fullQData(oldp+3492,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[22]),53);
    bufp->fullQData(oldp+3494,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[23]),53);
    bufp->fullQData(oldp+3496,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[24]),53);
    bufp->fullQData(oldp+3498,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[25]),53);
    bufp->fullQData(oldp+3500,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[26]),53);
    bufp->fullQData(oldp+3502,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[27]),53);
    bufp->fullQData(oldp+3504,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[28]),53);
    bufp->fullQData(oldp+3506,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[29]),53);
    bufp->fullQData(oldp+3508,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[30]),53);
    bufp->fullQData(oldp+3510,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[31]),53);
    bufp->fullBit(oldp+3512,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1_tag_w_en_pipe_0));
    bufp->fullBit(oldp+3513,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[0]));
    bufp->fullBit(oldp+3514,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[1]));
    bufp->fullBit(oldp+3515,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[2]));
    bufp->fullBit(oldp+3516,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[3]));
    bufp->fullBit(oldp+3517,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[4]));
    bufp->fullBit(oldp+3518,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[5]));
    bufp->fullBit(oldp+3519,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[6]));
    bufp->fullBit(oldp+3520,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[7]));
    bufp->fullBit(oldp+3521,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[8]));
    bufp->fullBit(oldp+3522,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[9]));
    bufp->fullBit(oldp+3523,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[10]));
    bufp->fullBit(oldp+3524,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[11]));
    bufp->fullBit(oldp+3525,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[12]));
    bufp->fullBit(oldp+3526,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[13]));
    bufp->fullBit(oldp+3527,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[14]));
    bufp->fullBit(oldp+3528,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[15]));
    bufp->fullBit(oldp+3529,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[16]));
    bufp->fullBit(oldp+3530,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[17]));
    bufp->fullBit(oldp+3531,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[18]));
    bufp->fullBit(oldp+3532,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[19]));
    bufp->fullBit(oldp+3533,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[20]));
    bufp->fullBit(oldp+3534,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[21]));
    bufp->fullBit(oldp+3535,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[22]));
    bufp->fullBit(oldp+3536,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[23]));
    bufp->fullBit(oldp+3537,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[24]));
    bufp->fullBit(oldp+3538,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[25]));
    bufp->fullBit(oldp+3539,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[26]));
    bufp->fullBit(oldp+3540,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[27]));
    bufp->fullBit(oldp+3541,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[28]));
    bufp->fullBit(oldp+3542,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[29]));
    bufp->fullBit(oldp+3543,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[30]));
    bufp->fullBit(oldp+3544,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[31]));
    bufp->fullBit(oldp+3545,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_en_pipe_0));
    bufp->fullBit(oldp+3546,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[0]));
    bufp->fullBit(oldp+3547,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[1]));
    bufp->fullBit(oldp+3548,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[2]));
    bufp->fullBit(oldp+3549,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[3]));
    bufp->fullBit(oldp+3550,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[4]));
    bufp->fullBit(oldp+3551,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[5]));
    bufp->fullBit(oldp+3552,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[6]));
    bufp->fullBit(oldp+3553,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[7]));
    bufp->fullBit(oldp+3554,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[8]));
    bufp->fullBit(oldp+3555,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[9]));
    bufp->fullBit(oldp+3556,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[10]));
    bufp->fullBit(oldp+3557,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[11]));
    bufp->fullBit(oldp+3558,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[12]));
    bufp->fullBit(oldp+3559,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[13]));
    bufp->fullBit(oldp+3560,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[14]));
    bufp->fullBit(oldp+3561,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[15]));
    bufp->fullBit(oldp+3562,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[16]));
    bufp->fullBit(oldp+3563,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[17]));
    bufp->fullBit(oldp+3564,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[18]));
    bufp->fullBit(oldp+3565,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[19]));
    bufp->fullBit(oldp+3566,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[20]));
    bufp->fullBit(oldp+3567,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[21]));
    bufp->fullBit(oldp+3568,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[22]));
    bufp->fullBit(oldp+3569,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[23]));
    bufp->fullBit(oldp+3570,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[24]));
    bufp->fullBit(oldp+3571,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[25]));
    bufp->fullBit(oldp+3572,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[26]));
    bufp->fullBit(oldp+3573,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[27]));
    bufp->fullBit(oldp+3574,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[28]));
    bufp->fullBit(oldp+3575,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[29]));
    bufp->fullBit(oldp+3576,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[30]));
    bufp->fullBit(oldp+3577,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[31]));
    bufp->fullBit(oldp+3578,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_en_pipe_0));
    bufp->fullCData(oldp+3579,(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__read_state),2);
    bufp->fullCData(oldp+3580,(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state),2);
    bufp->fullBit(oldp+3581,(vlSelf->clock));
    bufp->fullBit(oldp+3582,(vlSelf->reset));
    bufp->fullQData(oldp+3583,(vlSelf->io_pc),64);
    bufp->fullIData(oldp+3585,(vlSelf->io_inst),32);
    bufp->fullBit(oldp+3586,(1U));
    bufp->fullCData(oldp+3587,(0U),5);
    bufp->fullCData(oldp+3588,(1U),5);
    bufp->fullCData(oldp+3589,(2U),5);
    bufp->fullCData(oldp+3590,(3U),5);
    bufp->fullCData(oldp+3591,(4U),5);
    bufp->fullCData(oldp+3592,(5U),5);
    bufp->fullCData(oldp+3593,(6U),5);
    bufp->fullCData(oldp+3594,(7U),5);
    bufp->fullCData(oldp+3595,(8U),5);
    bufp->fullCData(oldp+3596,(9U),5);
    bufp->fullCData(oldp+3597,(0xaU),5);
    bufp->fullCData(oldp+3598,(0xbU),5);
    bufp->fullCData(oldp+3599,(0xcU),5);
    bufp->fullCData(oldp+3600,(0xdU),5);
    bufp->fullCData(oldp+3601,(0xeU),5);
    bufp->fullCData(oldp+3602,(0xfU),5);
    bufp->fullCData(oldp+3603,(0x10U),5);
    bufp->fullCData(oldp+3604,(0x11U),5);
    bufp->fullCData(oldp+3605,(0x12U),5);
    bufp->fullCData(oldp+3606,(0x13U),5);
    bufp->fullCData(oldp+3607,(0x14U),5);
    bufp->fullCData(oldp+3608,(0x15U),5);
    bufp->fullCData(oldp+3609,(0x16U),5);
    bufp->fullCData(oldp+3610,(0x17U),5);
    bufp->fullCData(oldp+3611,(0x18U),5);
    bufp->fullCData(oldp+3612,(0x19U),5);
    bufp->fullCData(oldp+3613,(0x1aU),5);
    bufp->fullCData(oldp+3614,(0x1bU),5);
    bufp->fullCData(oldp+3615,(0x1cU),5);
    bufp->fullCData(oldp+3616,(0x1dU),5);
    bufp->fullCData(oldp+3617,(0x1eU),5);
    bufp->fullCData(oldp+3618,(0x1fU),5);
    bufp->fullCData(oldp+3619,(0U),2);
    bufp->fullCData(oldp+3620,(1U),4);
    bufp->fullCData(oldp+3621,(3U),3);
    bufp->fullCData(oldp+3622,(0U),3);
    bufp->fullCData(oldp+3623,(1U),2);
    bufp->fullCData(oldp+3624,(0U),4);
    bufp->fullCData(oldp+3625,(vlSelf->CoreTop__DOT__MMEM_rd_id),4);
    bufp->fullCData(oldp+3626,(vlSelf->CoreTop__DOT__MMEM_rd_resp),2);
    bufp->fullCData(oldp+3627,(vlSelf->CoreTop__DOT__MMEM_wr_id),4);
    bufp->fullBit(oldp+3628,(0U));
    bufp->fullIData(oldp+3629,(0x40U),32);
    bufp->fullCData(oldp+3630,(2U),2);
}
