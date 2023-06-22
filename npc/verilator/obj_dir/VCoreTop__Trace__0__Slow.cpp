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
    tracep->declBit(c+3509,"clock", false,-1);
    tracep->declBit(c+3510,"reset", false,-1);
    tracep->declQuad(c+3511,"io_pc", false,-1, 63,0);
    tracep->declBus(c+3513,"io_inst", false,-1, 31,0);
    tracep->pushNamePrefix("CoreTop ");
    tracep->declBit(c+3509,"clock", false,-1);
    tracep->declBit(c+3510,"reset", false,-1);
    tracep->declQuad(c+3511,"io_pc", false,-1, 63,0);
    tracep->declBus(c+3513,"io_inst", false,-1, 31,0);
    tracep->declBit(c+3509,"IF_clock", false,-1);
    tracep->declBit(c+3510,"IF_reset", false,-1);
    tracep->declBit(c+3439,"IF_io_branch_io_is_branch", false,-1);
    tracep->declBit(c+1,"IF_io_branch_io_is_jump", false,-1);
    tracep->declQuad(c+3440,"IF_io_branch_io_dnpc", false,-1, 63,0);
    tracep->declBit(c+2,"IF_io_cache_req_addr_req_valid", false,-1);
    tracep->declQuad(c+3,"IF_io_cache_req_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+2,"IF_io_cache_req_rdata_rep_ready", false,-1);
    tracep->declBit(c+3468,"IF_io_cache_req_rdata_rep_valid", false,-1);
    tracep->declQuad(c+5,"IF_io_cache_req_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+2,"IF_io_out_ready", false,-1);
    tracep->declBit(c+3468,"IF_io_out_valid", false,-1);
    tracep->declQuad(c+3,"IF_io_out_bits_PC", false,-1, 63,0);
    tracep->declBus(c+3442,"IF_io_out_bits_Inst", false,-1, 31,0);
    tracep->declBit(c+3469,"IF_io_flush", false,-1);
    tracep->declBit(c+2,"ID_io_in_ready", false,-1);
    tracep->declBit(c+7,"ID_io_in_valid", false,-1);
    tracep->declQuad(c+8,"ID_io_in_bits_PC", false,-1, 63,0);
    tracep->declBus(c+10,"ID_io_in_bits_Inst", false,-1, 31,0);
    tracep->declQuad(c+3443,"ID_io_REG1", false,-1, 63,0);
    tracep->declQuad(c+3445,"ID_io_REG2", false,-1, 63,0);
    tracep->declBit(c+3469,"ID_io_flush", false,-1);
    tracep->declBit(c+2,"ID_io_out_ready", false,-1);
    tracep->declBit(c+7,"ID_io_out_valid", false,-1);
    tracep->declBus(c+11,"ID_io_out_bits_ctrl_signal_src1Type", false,-1, 2,0);
    tracep->declBus(c+12,"ID_io_out_bits_ctrl_signal_src2Type", false,-1, 2,0);
    tracep->declBus(c+13,"ID_io_out_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+3447,"ID_io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBus(c+14,"ID_io_out_bits_ctrl_signal_rfSrc1", false,-1, 4,0);
    tracep->declBus(c+15,"ID_io_out_bits_ctrl_signal_rfSrc2", false,-1, 4,0);
    tracep->declBit(c+16,"ID_io_out_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+17,"ID_io_out_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declBus(c+18,"ID_io_out_bits_ctrl_signal_rfDest", false,-1, 4,0);
    tracep->declQuad(c+3443,"ID_io_out_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+3445,"ID_io_out_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+19,"ID_io_out_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declQuad(c+8,"ID_io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+10,"ID_io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declBit(c+3509,"EX_clock", false,-1);
    tracep->declBit(c+3510,"EX_reset", false,-1);
    tracep->declBit(c+2,"EX_io_in_ready", false,-1);
    tracep->declBit(c+21,"EX_io_in_valid", false,-1);
    tracep->declBus(c+22,"EX_io_in_bits_ctrl_signal_src1Type", false,-1, 2,0);
    tracep->declBus(c+23,"EX_io_in_bits_ctrl_signal_src2Type", false,-1, 2,0);
    tracep->declBus(c+24,"EX_io_in_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+25,"EX_io_in_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBus(c+26,"EX_io_in_bits_ctrl_signal_rfSrc1", false,-1, 4,0);
    tracep->declBus(c+27,"EX_io_in_bits_ctrl_signal_rfSrc2", false,-1, 4,0);
    tracep->declBit(c+28,"EX_io_in_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+29,"EX_io_in_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declBus(c+30,"EX_io_in_bits_ctrl_signal_rfDest", false,-1, 4,0);
    tracep->declQuad(c+31,"EX_io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+33,"EX_io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+35,"EX_io_in_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declQuad(c+37,"EX_io_in_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+39,"EX_io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+3470,"EX_io_src1", false,-1, 63,0);
    tracep->declQuad(c+3472,"EX_io_src2", false,-1, 63,0);
    tracep->declBit(c+3439,"EX_io_branchIO_is_branch", false,-1);
    tracep->declBit(c+1,"EX_io_branchIO_is_jump", false,-1);
    tracep->declQuad(c+3440,"EX_io_branchIO_dnpc", false,-1, 63,0);
    tracep->declBit(c+40,"EX_io_out_ready", false,-1);
    tracep->declBit(c+41,"EX_io_out_valid", false,-1);
    tracep->declBus(c+24,"EX_io_out_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+25,"EX_io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+28,"EX_io_out_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+29,"EX_io_out_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+37,"EX_io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+39,"EX_io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+3440,"EX_io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+30,"EX_io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+42,"EX_io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+3474,"EX_io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+3448,"EX_io_out_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+3450,"EX_io_out_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+35,"EX_io_out_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declBit(c+43,"EX_io_is_break", false,-1);
    tracep->declBit(c+3469,"EX_io_is_flush", false,-1);
    tracep->declBit(c+44,"DIP_is_break", false,-1);
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
    tracep->declBit(c+115,"DIP_is_skip", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+116+i*2,"rf", true,(i+0), 63,0);
    }
    tracep->declBit(c+3514,"rf_bypass_io_Reg1_MPORT_en", false,-1);
    tracep->declBus(c+14,"rf_bypass_io_Reg1_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+180,"rf_bypass_io_Reg1_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3514,"rf_bypass_io_Reg2_MPORT_en", false,-1);
    tracep->declBus(c+15,"rf_bypass_io_Reg2_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+182,"rf_bypass_io_Reg2_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3514,"rf_DIP_io_rf_0_MPORT_en", false,-1);
    tracep->declBus(c+3515,"rf_DIP_io_rf_0_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+45,"rf_DIP_io_rf_0_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3514,"rf_DIP_io_rf_1_MPORT_en", false,-1);
    tracep->declBus(c+3516,"rf_DIP_io_rf_1_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+47,"rf_DIP_io_rf_1_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3514,"rf_DIP_io_rf_2_MPORT_en", false,-1);
    tracep->declBus(c+3517,"rf_DIP_io_rf_2_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+49,"rf_DIP_io_rf_2_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3514,"rf_DIP_io_rf_3_MPORT_en", false,-1);
    tracep->declBus(c+3518,"rf_DIP_io_rf_3_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+51,"rf_DIP_io_rf_3_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3514,"rf_DIP_io_rf_4_MPORT_en", false,-1);
    tracep->declBus(c+3519,"rf_DIP_io_rf_4_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+53,"rf_DIP_io_rf_4_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3514,"rf_DIP_io_rf_5_MPORT_en", false,-1);
    tracep->declBus(c+3520,"rf_DIP_io_rf_5_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+55,"rf_DIP_io_rf_5_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3514,"rf_DIP_io_rf_6_MPORT_en", false,-1);
    tracep->declBus(c+3521,"rf_DIP_io_rf_6_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+57,"rf_DIP_io_rf_6_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3514,"rf_DIP_io_rf_7_MPORT_en", false,-1);
    tracep->declBus(c+3522,"rf_DIP_io_rf_7_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+59,"rf_DIP_io_rf_7_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3514,"rf_DIP_io_rf_8_MPORT_en", false,-1);
    tracep->declBus(c+3523,"rf_DIP_io_rf_8_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+61,"rf_DIP_io_rf_8_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3514,"rf_DIP_io_rf_9_MPORT_en", false,-1);
    tracep->declBus(c+3524,"rf_DIP_io_rf_9_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+63,"rf_DIP_io_rf_9_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3514,"rf_DIP_io_rf_10_MPORT_en", false,-1);
    tracep->declBus(c+3525,"rf_DIP_io_rf_10_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+65,"rf_DIP_io_rf_10_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3514,"rf_DIP_io_rf_11_MPORT_en", false,-1);
    tracep->declBus(c+3526,"rf_DIP_io_rf_11_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+67,"rf_DIP_io_rf_11_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3514,"rf_DIP_io_rf_12_MPORT_en", false,-1);
    tracep->declBus(c+3527,"rf_DIP_io_rf_12_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+69,"rf_DIP_io_rf_12_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3514,"rf_DIP_io_rf_13_MPORT_en", false,-1);
    tracep->declBus(c+3528,"rf_DIP_io_rf_13_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+71,"rf_DIP_io_rf_13_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3514,"rf_DIP_io_rf_14_MPORT_en", false,-1);
    tracep->declBus(c+3529,"rf_DIP_io_rf_14_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+73,"rf_DIP_io_rf_14_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3514,"rf_DIP_io_rf_15_MPORT_en", false,-1);
    tracep->declBus(c+3530,"rf_DIP_io_rf_15_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+75,"rf_DIP_io_rf_15_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3514,"rf_DIP_io_rf_16_MPORT_en", false,-1);
    tracep->declBus(c+3531,"rf_DIP_io_rf_16_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+77,"rf_DIP_io_rf_16_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3514,"rf_DIP_io_rf_17_MPORT_en", false,-1);
    tracep->declBus(c+3532,"rf_DIP_io_rf_17_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+79,"rf_DIP_io_rf_17_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3514,"rf_DIP_io_rf_18_MPORT_en", false,-1);
    tracep->declBus(c+3533,"rf_DIP_io_rf_18_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+81,"rf_DIP_io_rf_18_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3514,"rf_DIP_io_rf_19_MPORT_en", false,-1);
    tracep->declBus(c+3534,"rf_DIP_io_rf_19_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+83,"rf_DIP_io_rf_19_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3514,"rf_DIP_io_rf_20_MPORT_en", false,-1);
    tracep->declBus(c+3535,"rf_DIP_io_rf_20_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+85,"rf_DIP_io_rf_20_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3514,"rf_DIP_io_rf_21_MPORT_en", false,-1);
    tracep->declBus(c+3536,"rf_DIP_io_rf_21_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+87,"rf_DIP_io_rf_21_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3514,"rf_DIP_io_rf_22_MPORT_en", false,-1);
    tracep->declBus(c+3537,"rf_DIP_io_rf_22_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+89,"rf_DIP_io_rf_22_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3514,"rf_DIP_io_rf_23_MPORT_en", false,-1);
    tracep->declBus(c+3538,"rf_DIP_io_rf_23_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+91,"rf_DIP_io_rf_23_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3514,"rf_DIP_io_rf_24_MPORT_en", false,-1);
    tracep->declBus(c+3539,"rf_DIP_io_rf_24_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+93,"rf_DIP_io_rf_24_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3514,"rf_DIP_io_rf_25_MPORT_en", false,-1);
    tracep->declBus(c+3540,"rf_DIP_io_rf_25_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+95,"rf_DIP_io_rf_25_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3514,"rf_DIP_io_rf_26_MPORT_en", false,-1);
    tracep->declBus(c+3541,"rf_DIP_io_rf_26_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+97,"rf_DIP_io_rf_26_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3514,"rf_DIP_io_rf_27_MPORT_en", false,-1);
    tracep->declBus(c+3542,"rf_DIP_io_rf_27_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+99,"rf_DIP_io_rf_27_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3514,"rf_DIP_io_rf_28_MPORT_en", false,-1);
    tracep->declBus(c+3543,"rf_DIP_io_rf_28_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+101,"rf_DIP_io_rf_28_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3514,"rf_DIP_io_rf_29_MPORT_en", false,-1);
    tracep->declBus(c+3544,"rf_DIP_io_rf_29_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+103,"rf_DIP_io_rf_29_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3514,"rf_DIP_io_rf_30_MPORT_en", false,-1);
    tracep->declBus(c+3545,"rf_DIP_io_rf_30_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+105,"rf_DIP_io_rf_30_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3514,"rf_DIP_io_rf_31_MPORT_en", false,-1);
    tracep->declBus(c+3546,"rf_DIP_io_rf_31_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+107,"rf_DIP_io_rf_31_MPORT_data", false,-1, 63,0);
    tracep->declQuad(c+184,"rf_MPORT_data", false,-1, 63,0);
    tracep->declBus(c+186,"rf_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+3514,"rf_MPORT_mask", false,-1);
    tracep->declBit(c+187,"rf_MPORT_en", false,-1);
    tracep->declBit(c+40,"MEM_io_in_ready", false,-1);
    tracep->declBit(c+188,"MEM_io_in_valid", false,-1);
    tracep->declBus(c+189,"MEM_io_in_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+190,"MEM_io_in_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+191,"MEM_io_in_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+192,"MEM_io_in_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+193,"MEM_io_in_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+195,"MEM_io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+196,"MEM_io_in_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+198,"MEM_io_in_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declQuad(c+199,"MEM_io_in_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+201,"MEM_io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+203,"MEM_io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+205,"MEM_io_in_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declBit(c+3514,"MEM_io_out_ready", false,-1);
    tracep->declBit(c+207,"MEM_io_out_valid", false,-1);
    tracep->declBit(c+208,"MEM_io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+191,"MEM_io_out_bits_ctrl_signal_rfWen", false,-1);
    tracep->declQuad(c+193,"MEM_io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+195,"MEM_io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+196,"MEM_io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBit(c+209,"MEM_io_out_bits_ctrl_flow_skip", false,-1);
    tracep->declBus(c+198,"MEM_io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+210,"MEM_io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+3476,"MEM_io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declBit(c+211,"MEM_io_cache_io_addr_req_valid", false,-1);
    tracep->declQuad(c+212,"MEM_io_cache_io_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+214,"MEM_io_cache_io_addr_req_bits_ce", false,-1);
    tracep->declBit(c+215,"MEM_io_cache_io_addr_req_bits_we", false,-1);
    tracep->declBit(c+216,"MEM_io_cache_io_rdata_rep_valid", false,-1);
    tracep->declQuad(c+3478,"MEM_io_cache_io_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+217,"MEM_io_cache_io_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+219,"MEM_io_cache_io_wdata_req_bits_wmask", false,-1, 7,0);
    tracep->declBit(c+220,"MEM_io_cache_io_wdata_rep", false,-1);
    tracep->declBit(c+221,"WB_io_in_valid", false,-1);
    tracep->declBit(c+222,"WB_io_in_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+223,"WB_io_in_bits_ctrl_signal_rfWen", false,-1);
    tracep->declQuad(c+224,"WB_io_in_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+226,"WB_io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+227,"WB_io_in_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBit(c+229,"WB_io_in_bits_ctrl_flow_skip", false,-1);
    tracep->declBus(c+186,"WB_io_in_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declQuad(c+230,"WB_io_in_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declBit(c+3514,"WB_io_out_ready", false,-1);
    tracep->declBit(c+221,"WB_io_out_valid", false,-1);
    tracep->declBit(c+232,"WB_io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declQuad(c+224,"WB_io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+226,"WB_io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+227,"WB_io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBit(c+229,"WB_io_out_bits_ctrl_flow_skip", false,-1);
    tracep->declBus(c+186,"WB_io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+187,"WB_io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+230,"WB_io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+30,"bypass_io_EX_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+42,"bypass_io_EX_rf_rfWen", false,-1);
    tracep->declQuad(c+3474,"bypass_io_EX_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+198,"bypass_io_MEM_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+210,"bypass_io_MEM_rf_rfWen", false,-1);
    tracep->declQuad(c+3476,"bypass_io_MEM_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+186,"bypass_io_WB_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+187,"bypass_io_WB_rf_rfWen", false,-1);
    tracep->declQuad(c+230,"bypass_io_WB_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+233,"bypass_io_Reg1", false,-1, 63,0);
    tracep->declBus(c+14,"bypass_io_reg_index1", false,-1, 4,0);
    tracep->declQuad(c+235,"bypass_io_Reg2", false,-1, 63,0);
    tracep->declBus(c+15,"bypass_io_reg_index2", false,-1, 4,0);
    tracep->declQuad(c+3443,"bypass_io_Bypass_REG1", false,-1, 63,0);
    tracep->declQuad(c+3445,"bypass_io_Bypass_REG2", false,-1, 63,0);
    tracep->declBus(c+198,"mem_bypass_io_MEM_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+210,"mem_bypass_io_MEM_rf_rfWen", false,-1);
    tracep->declQuad(c+3476,"mem_bypass_io_MEM_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+31,"mem_bypass_io_Reg1", false,-1, 63,0);
    tracep->declBus(c+26,"mem_bypass_io_reg_index1", false,-1, 4,0);
    tracep->declQuad(c+33,"mem_bypass_io_Reg2", false,-1, 63,0);
    tracep->declBus(c+27,"mem_bypass_io_reg_index2", false,-1, 4,0);
    tracep->declQuad(c+3470,"mem_bypass_io_Bypass_REG1", false,-1, 63,0);
    tracep->declQuad(c+3472,"mem_bypass_io_Bypass_REG2", false,-1, 63,0);
    tracep->declBit(c+3509,"ICACHE_clock", false,-1);
    tracep->declBit(c+3510,"ICACHE_reset", false,-1);
    tracep->declBit(c+2,"ICACHE_io_in_addr_req_valid", false,-1);
    tracep->declQuad(c+3,"ICACHE_io_in_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+2,"ICACHE_io_in_rdata_rep_ready", false,-1);
    tracep->declBit(c+3468,"ICACHE_io_in_rdata_rep_valid", false,-1);
    tracep->declQuad(c+5,"ICACHE_io_in_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+3469,"ICACHE_io_flush", false,-1);
    tracep->declBit(c+237,"ICACHE_io_out_raddr_req_ready", false,-1);
    tracep->declBit(c+238,"ICACHE_io_out_raddr_req_valid", false,-1);
    tracep->declQuad(c+239,"ICACHE_io_out_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+241,"ICACHE_io_out_rdata_rep_valid", false,-1);
    tracep->declQuad(c+3480,"ICACHE_io_out_rdata_rep_bits_data", false,-1, 63,0);
    tracep->declBit(c+242,"ICACHE_io_out_rdata_rep_bits_last", false,-1);
    tracep->declBit(c+243,"ICACHE_io_out_wb_valid", false,-1);
    tracep->declBus(c+3547,"ICACHE_io_out_wb_bits_breap", false,-1, 1,0);
    tracep->declBit(c+3510,"MMEM_reset", false,-1);
    tracep->declBit(c+3509,"MMEM_clk", false,-1);
    tracep->declBit(c+244,"MMEM_ar_valid", false,-1);
    tracep->declBit(c+245,"MMEM_ar_ready", false,-1);
    tracep->declQuad(c+246,"MMEM_ar_addr", false,-1, 63,0);
    tracep->declBus(c+3548,"MMEM_ar_id", false,-1, 3,0);
    tracep->declBus(c+248,"MMEM_ar_len", false,-1, 7,0);
    tracep->declBus(c+3549,"MMEM_ar_size", false,-1, 2,0);
    tracep->declBus(c+3550,"MMEM_ar_prot", false,-1, 2,0);
    tracep->declBus(c+3551,"MMEM_ar_burst", false,-1, 1,0);
    tracep->declBus(c+3547,"MMEM_ar_lock", false,-1, 1,0);
    tracep->declBus(c+3552,"MMEM_ar_cache", false,-1, 3,0);
    tracep->declBit(c+249,"MMEM_rd_valid", false,-1);
    tracep->declBit(c+250,"MMEM_rd_ready", false,-1);
    tracep->declQuad(c+3480,"MMEM_rd_data", false,-1, 63,0);
    tracep->declBus(c+3553,"MMEM_rd_id", false,-1, 3,0);
    tracep->declBus(c+3554,"MMEM_rd_resp", false,-1, 1,0);
    tracep->declBit(c+242,"MMEM_rd_last", false,-1);
    tracep->declBit(c+251,"MMEM_aw_valid", false,-1);
    tracep->declBit(c+252,"MMEM_aw_ready", false,-1);
    tracep->declQuad(c+253,"MMEM_aw_addr", false,-1, 63,0);
    tracep->declBus(c+3548,"MMEM_aw_id", false,-1, 3,0);
    tracep->declBus(c+255,"MMEM_aw_len", false,-1, 7,0);
    tracep->declBus(c+3549,"MMEM_aw_size", false,-1, 2,0);
    tracep->declBus(c+3550,"MMEM_aw_prot", false,-1, 2,0);
    tracep->declBus(c+3551,"MMEM_aw_burst", false,-1, 1,0);
    tracep->declBus(c+3547,"MMEM_aw_lock", false,-1, 1,0);
    tracep->declBus(c+3552,"MMEM_aw_cache", false,-1, 3,0);
    tracep->declBit(c+256,"MMEM_wd_valid", false,-1);
    tracep->declBit(c+257,"MMEM_wd_ready", false,-1);
    tracep->declQuad(c+258,"MMEM_wd_data", false,-1, 63,0);
    tracep->declBus(c+260,"MMEM_wstrb", false,-1, 7,0);
    tracep->declBus(c+3548,"MMEM_wd_id", false,-1, 3,0);
    tracep->declBit(c+261,"MMEM_wd_last", false,-1);
    tracep->declBit(c+262,"MMEM_wr_valid", false,-1);
    tracep->declBit(c+263,"MMEM_wr_ready", false,-1);
    tracep->declBus(c+3547,"MMEM_wr_breap", false,-1, 1,0);
    tracep->declBus(c+3555,"MMEM_wr_id", false,-1, 3,0);
    tracep->declBit(c+3509,"ARBITER_clock", false,-1);
    tracep->declBit(c+3510,"ARBITER_reset", false,-1);
    tracep->declBit(c+264,"ARBITER_io_in1_raddr_req_ready", false,-1);
    tracep->declBit(c+265,"ARBITER_io_in1_raddr_req_valid", false,-1);
    tracep->declQuad(c+266,"ARBITER_io_in1_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBus(c+268,"ARBITER_io_in1_raddr_req_bits_len", false,-1, 7,0);
    tracep->declBit(c+269,"ARBITER_io_in1_waddr_req_ready", false,-1);
    tracep->declBit(c+270,"ARBITER_io_in1_waddr_req_valid", false,-1);
    tracep->declQuad(c+271,"ARBITER_io_in1_waddr_req_bits_addr", false,-1, 63,0);
    tracep->declBus(c+273,"ARBITER_io_in1_waddr_req_bits_len", false,-1, 7,0);
    tracep->declBit(c+274,"ARBITER_io_in1_rdata_rep_ready", false,-1);
    tracep->declBit(c+275,"ARBITER_io_in1_rdata_rep_valid", false,-1);
    tracep->declQuad(c+3480,"ARBITER_io_in1_rdata_rep_bits_data", false,-1, 63,0);
    tracep->declBit(c+242,"ARBITER_io_in1_rdata_rep_bits_last", false,-1);
    tracep->declBit(c+276,"ARBITER_io_in1_wdata_req_ready", false,-1);
    tracep->declBit(c+277,"ARBITER_io_in1_wdata_req_valid", false,-1);
    tracep->declQuad(c+278,"ARBITER_io_in1_wdata_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+280,"ARBITER_io_in1_wdata_req_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+281,"ARBITER_io_in1_wdata_req_bits_last", false,-1);
    tracep->declBit(c+282,"ARBITER_io_in1_wb_ready", false,-1);
    tracep->declBit(c+283,"ARBITER_io_in1_wb_valid", false,-1);
    tracep->declBus(c+3547,"ARBITER_io_in1_wb_bits_breap", false,-1, 1,0);
    tracep->declBit(c+237,"ARBITER_io_in2_raddr_req_ready", false,-1);
    tracep->declBit(c+238,"ARBITER_io_in2_raddr_req_valid", false,-1);
    tracep->declQuad(c+239,"ARBITER_io_in2_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+241,"ARBITER_io_in2_rdata_rep_valid", false,-1);
    tracep->declQuad(c+3480,"ARBITER_io_in2_rdata_rep_bits_data", false,-1, 63,0);
    tracep->declBit(c+242,"ARBITER_io_in2_rdata_rep_bits_last", false,-1);
    tracep->declBit(c+243,"ARBITER_io_in2_wb_valid", false,-1);
    tracep->declBus(c+3547,"ARBITER_io_in2_wb_bits_breap", false,-1, 1,0);
    tracep->declBit(c+245,"ARBITER_io_out_raddr_req_ready", false,-1);
    tracep->declBit(c+244,"ARBITER_io_out_raddr_req_valid", false,-1);
    tracep->declQuad(c+246,"ARBITER_io_out_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBus(c+248,"ARBITER_io_out_raddr_req_bits_len", false,-1, 7,0);
    tracep->declBit(c+252,"ARBITER_io_out_waddr_req_ready", false,-1);
    tracep->declBit(c+251,"ARBITER_io_out_waddr_req_valid", false,-1);
    tracep->declQuad(c+253,"ARBITER_io_out_waddr_req_bits_addr", false,-1, 63,0);
    tracep->declBus(c+255,"ARBITER_io_out_waddr_req_bits_len", false,-1, 7,0);
    tracep->declBit(c+250,"ARBITER_io_out_rdata_rep_ready", false,-1);
    tracep->declBit(c+249,"ARBITER_io_out_rdata_rep_valid", false,-1);
    tracep->declQuad(c+3480,"ARBITER_io_out_rdata_rep_bits_data", false,-1, 63,0);
    tracep->declBit(c+242,"ARBITER_io_out_rdata_rep_bits_last", false,-1);
    tracep->declBit(c+257,"ARBITER_io_out_wdata_req_ready", false,-1);
    tracep->declBit(c+256,"ARBITER_io_out_wdata_req_valid", false,-1);
    tracep->declQuad(c+258,"ARBITER_io_out_wdata_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+260,"ARBITER_io_out_wdata_req_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+261,"ARBITER_io_out_wdata_req_bits_last", false,-1);
    tracep->declBit(c+263,"ARBITER_io_out_wb_ready", false,-1);
    tracep->declBit(c+262,"ARBITER_io_out_wb_valid", false,-1);
    tracep->declBus(c+3547,"ARBITER_io_out_wb_bits_breap", false,-1, 1,0);
    tracep->declBit(c+3509,"MMIO_clock", false,-1);
    tracep->declBit(c+3510,"MMIO_reset", false,-1);
    tracep->declBit(c+211,"MMIO_io_in_addr_req_valid", false,-1);
    tracep->declQuad(c+212,"MMIO_io_in_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+214,"MMIO_io_in_addr_req_bits_ce", false,-1);
    tracep->declBit(c+215,"MMIO_io_in_addr_req_bits_we", false,-1);
    tracep->declBit(c+216,"MMIO_io_in_rdata_rep_valid", false,-1);
    tracep->declQuad(c+3478,"MMIO_io_in_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+217,"MMIO_io_in_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+219,"MMIO_io_in_wdata_req_bits_wmask", false,-1, 7,0);
    tracep->declBit(c+220,"MMIO_io_in_wdata_rep", false,-1);
    tracep->declBit(c+264,"MMIO_io_out_raddr_req_ready", false,-1);
    tracep->declBit(c+265,"MMIO_io_out_raddr_req_valid", false,-1);
    tracep->declQuad(c+266,"MMIO_io_out_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBus(c+268,"MMIO_io_out_raddr_req_bits_len", false,-1, 7,0);
    tracep->declBit(c+269,"MMIO_io_out_waddr_req_ready", false,-1);
    tracep->declBit(c+270,"MMIO_io_out_waddr_req_valid", false,-1);
    tracep->declQuad(c+271,"MMIO_io_out_waddr_req_bits_addr", false,-1, 63,0);
    tracep->declBus(c+273,"MMIO_io_out_waddr_req_bits_len", false,-1, 7,0);
    tracep->declBit(c+274,"MMIO_io_out_rdata_rep_ready", false,-1);
    tracep->declBit(c+275,"MMIO_io_out_rdata_rep_valid", false,-1);
    tracep->declQuad(c+3480,"MMIO_io_out_rdata_rep_bits_data", false,-1, 63,0);
    tracep->declBit(c+242,"MMIO_io_out_rdata_rep_bits_last", false,-1);
    tracep->declBit(c+276,"MMIO_io_out_wdata_req_ready", false,-1);
    tracep->declBit(c+277,"MMIO_io_out_wdata_req_valid", false,-1);
    tracep->declQuad(c+278,"MMIO_io_out_wdata_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+280,"MMIO_io_out_wdata_req_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+281,"MMIO_io_out_wdata_req_bits_last", false,-1);
    tracep->declBit(c+282,"MMIO_io_out_wb_ready", false,-1);
    tracep->declBit(c+283,"MMIO_io_out_wb_valid", false,-1);
    tracep->declBus(c+3547,"MMIO_io_out_wb_bits_breap", false,-1, 1,0);
    tracep->declBit(c+7,"valid", false,-1);
    tracep->declQuad(c+8,"ID_io_in_bits_r_PC", false,-1, 63,0);
    tracep->declBus(c+10,"ID_io_in_bits_r_Inst", false,-1, 31,0);
    tracep->declBit(c+21,"valid_1", false,-1);
    tracep->declBus(c+22,"EX_io_in_bits_r_ctrl_signal_src1Type", false,-1, 2,0);
    tracep->declBus(c+23,"EX_io_in_bits_r_ctrl_signal_src2Type", false,-1, 2,0);
    tracep->declBus(c+24,"EX_io_in_bits_r_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+25,"EX_io_in_bits_r_ctrl_signal_inst_valid", false,-1);
    tracep->declBus(c+26,"EX_io_in_bits_r_ctrl_signal_rfSrc1", false,-1, 4,0);
    tracep->declBus(c+27,"EX_io_in_bits_r_ctrl_signal_rfSrc2", false,-1, 4,0);
    tracep->declBit(c+28,"EX_io_in_bits_r_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+29,"EX_io_in_bits_r_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declBus(c+30,"EX_io_in_bits_r_ctrl_signal_rfDest", false,-1, 4,0);
    tracep->declQuad(c+31,"EX_io_in_bits_r_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+33,"EX_io_in_bits_r_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+35,"EX_io_in_bits_r_ctrl_data_Imm", false,-1, 63,0);
    tracep->declQuad(c+37,"EX_io_in_bits_r_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+39,"EX_io_in_bits_r_ctrl_flow_inst", false,-1, 31,0);
    tracep->declBit(c+188,"valid_2", false,-1);
    tracep->declBus(c+189,"MEM_io_in_bits_r_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+190,"MEM_io_in_bits_r_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+191,"MEM_io_in_bits_r_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+192,"MEM_io_in_bits_r_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+193,"MEM_io_in_bits_r_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+195,"MEM_io_in_bits_r_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+196,"MEM_io_in_bits_r_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+198,"MEM_io_in_bits_r_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declQuad(c+199,"MEM_io_in_bits_r_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+201,"MEM_io_in_bits_r_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+203,"MEM_io_in_bits_r_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+205,"MEM_io_in_bits_r_ctrl_data_Imm", false,-1, 63,0);
    tracep->declBit(c+221,"valid_3", false,-1);
    tracep->declBit(c+222,"WB_io_in_bits_r_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+223,"WB_io_in_bits_r_ctrl_signal_rfWen", false,-1);
    tracep->declQuad(c+224,"WB_io_in_bits_r_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+226,"WB_io_in_bits_r_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+227,"WB_io_in_bits_r_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBit(c+229,"WB_io_in_bits_r_ctrl_flow_skip", false,-1);
    tracep->declBus(c+186,"WB_io_in_bits_r_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declQuad(c+230,"WB_io_in_bits_r_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declBit(c+284,"DIP_io_is_break_REG", false,-1);
    tracep->declBit(c+44,"DIP_io_is_break_REG_1", false,-1);
    tracep->declBus(c+109,"DIP_io_inst_REG", false,-1, 31,0);
    tracep->declBit(c+115,"DIP_io_is_skip_REG", false,-1);
    tracep->declBit(c+112,"DIP_io_inst_valid_REG", false,-1);
    tracep->declQuad(c+110,"DIP_io_pc_REG", false,-1, 63,0);
    tracep->declQuad(c+113,"DIP_io_dnpc_REG", false,-1, 63,0);
    tracep->pushNamePrefix("ARBITER ");
    tracep->declBit(c+3509,"clock", false,-1);
    tracep->declBit(c+3510,"reset", false,-1);
    tracep->declBit(c+264,"io_in1_raddr_req_ready", false,-1);
    tracep->declBit(c+265,"io_in1_raddr_req_valid", false,-1);
    tracep->declQuad(c+266,"io_in1_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBus(c+268,"io_in1_raddr_req_bits_len", false,-1, 7,0);
    tracep->declBit(c+269,"io_in1_waddr_req_ready", false,-1);
    tracep->declBit(c+270,"io_in1_waddr_req_valid", false,-1);
    tracep->declQuad(c+271,"io_in1_waddr_req_bits_addr", false,-1, 63,0);
    tracep->declBus(c+273,"io_in1_waddr_req_bits_len", false,-1, 7,0);
    tracep->declBit(c+274,"io_in1_rdata_rep_ready", false,-1);
    tracep->declBit(c+275,"io_in1_rdata_rep_valid", false,-1);
    tracep->declQuad(c+3480,"io_in1_rdata_rep_bits_data", false,-1, 63,0);
    tracep->declBit(c+242,"io_in1_rdata_rep_bits_last", false,-1);
    tracep->declBit(c+276,"io_in1_wdata_req_ready", false,-1);
    tracep->declBit(c+277,"io_in1_wdata_req_valid", false,-1);
    tracep->declQuad(c+278,"io_in1_wdata_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+280,"io_in1_wdata_req_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+281,"io_in1_wdata_req_bits_last", false,-1);
    tracep->declBit(c+282,"io_in1_wb_ready", false,-1);
    tracep->declBit(c+283,"io_in1_wb_valid", false,-1);
    tracep->declBus(c+3547,"io_in1_wb_bits_breap", false,-1, 1,0);
    tracep->declBit(c+237,"io_in2_raddr_req_ready", false,-1);
    tracep->declBit(c+238,"io_in2_raddr_req_valid", false,-1);
    tracep->declQuad(c+239,"io_in2_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+241,"io_in2_rdata_rep_valid", false,-1);
    tracep->declQuad(c+3480,"io_in2_rdata_rep_bits_data", false,-1, 63,0);
    tracep->declBit(c+242,"io_in2_rdata_rep_bits_last", false,-1);
    tracep->declBit(c+243,"io_in2_wb_valid", false,-1);
    tracep->declBus(c+3547,"io_in2_wb_bits_breap", false,-1, 1,0);
    tracep->declBit(c+245,"io_out_raddr_req_ready", false,-1);
    tracep->declBit(c+244,"io_out_raddr_req_valid", false,-1);
    tracep->declQuad(c+246,"io_out_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBus(c+248,"io_out_raddr_req_bits_len", false,-1, 7,0);
    tracep->declBit(c+252,"io_out_waddr_req_ready", false,-1);
    tracep->declBit(c+251,"io_out_waddr_req_valid", false,-1);
    tracep->declQuad(c+253,"io_out_waddr_req_bits_addr", false,-1, 63,0);
    tracep->declBus(c+255,"io_out_waddr_req_bits_len", false,-1, 7,0);
    tracep->declBit(c+250,"io_out_rdata_rep_ready", false,-1);
    tracep->declBit(c+249,"io_out_rdata_rep_valid", false,-1);
    tracep->declQuad(c+3480,"io_out_rdata_rep_bits_data", false,-1, 63,0);
    tracep->declBit(c+242,"io_out_rdata_rep_bits_last", false,-1);
    tracep->declBit(c+257,"io_out_wdata_req_ready", false,-1);
    tracep->declBit(c+256,"io_out_wdata_req_valid", false,-1);
    tracep->declQuad(c+258,"io_out_wdata_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+260,"io_out_wdata_req_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+261,"io_out_wdata_req_bits_last", false,-1);
    tracep->declBit(c+263,"io_out_wb_ready", false,-1);
    tracep->declBit(c+262,"io_out_wb_valid", false,-1);
    tracep->declBus(c+3547,"io_out_wb_bits_breap", false,-1, 1,0);
    tracep->declBit(c+285,"state", false,-1);
    tracep->declBit(c+286,"choose_r", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("DIP ");
    tracep->declBit(c+44,"is_break", false,-1);
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
    tracep->declBit(c+115,"is_skip", false,-1);
    tracep->declQuad(c+110,"pc", false,-1, 63,0);
    tracep->declQuad(c+113,"dnpc", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+287+i*2,"rf", true,(i+0), 63,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+351+i*1,"IN", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EX ");
    tracep->declBit(c+3509,"clock", false,-1);
    tracep->declBit(c+3510,"reset", false,-1);
    tracep->declBit(c+2,"io_in_ready", false,-1);
    tracep->declBit(c+21,"io_in_valid", false,-1);
    tracep->declBus(c+22,"io_in_bits_ctrl_signal_src1Type", false,-1, 2,0);
    tracep->declBus(c+23,"io_in_bits_ctrl_signal_src2Type", false,-1, 2,0);
    tracep->declBus(c+24,"io_in_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+25,"io_in_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBus(c+26,"io_in_bits_ctrl_signal_rfSrc1", false,-1, 4,0);
    tracep->declBus(c+27,"io_in_bits_ctrl_signal_rfSrc2", false,-1, 4,0);
    tracep->declBit(c+28,"io_in_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+29,"io_in_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declBus(c+30,"io_in_bits_ctrl_signal_rfDest", false,-1, 4,0);
    tracep->declQuad(c+31,"io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+33,"io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+35,"io_in_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declQuad(c+37,"io_in_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+39,"io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+3470,"io_src1", false,-1, 63,0);
    tracep->declQuad(c+3472,"io_src2", false,-1, 63,0);
    tracep->declBit(c+3439,"io_branchIO_is_branch", false,-1);
    tracep->declBit(c+1,"io_branchIO_is_jump", false,-1);
    tracep->declQuad(c+3440,"io_branchIO_dnpc", false,-1, 63,0);
    tracep->declBit(c+40,"io_out_ready", false,-1);
    tracep->declBit(c+41,"io_out_valid", false,-1);
    tracep->declBus(c+24,"io_out_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+25,"io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+28,"io_out_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+29,"io_out_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+37,"io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+39,"io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+3440,"io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+30,"io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+42,"io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+3474,"io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+3448,"io_out_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+3450,"io_out_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+35,"io_out_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declBit(c+43,"io_is_break", false,-1);
    tracep->declBit(c+3469,"io_is_flush", false,-1);
    tracep->declQuad(c+358,"CSRDIFF_mepc", false,-1, 63,0);
    tracep->declQuad(c+360,"CSRDIFF_mcause", false,-1, 63,0);
    tracep->declQuad(c+362,"CSRDIFF_mstatus", false,-1, 63,0);
    tracep->declQuad(c+364,"CSRDIFF_mtvec", false,-1, 63,0);
    tracep->declBit(c+3509,"mul_clock", false,-1);
    tracep->declBit(c+3510,"mul_reset", false,-1);
    tracep->declBit(c+366,"mul_io_in_valid", false,-1);
    tracep->declQuad(c+3452,"mul_io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+3454,"mul_io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declBit(c+367,"mul_io_out_valid", false,-1);
    tracep->declQuad(c+368,"mul_io_out_bits_result_result_lo", false,-1, 63,0);
    tracep->declBit(c+3509,"div_clock", false,-1);
    tracep->declBit(c+3510,"div_reset", false,-1);
    tracep->declBit(c+370,"div_io_in_valid", false,-1);
    tracep->declBit(c+371,"div_io_in_bits_ctrl_flow_div_signed", false,-1);
    tracep->declQuad(c+3482,"div_io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+3484,"div_io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declBit(c+372,"div_io_out_valid", false,-1);
    tracep->declQuad(c+3486,"div_io_out_bits_result_quotient", false,-1, 63,0);
    tracep->declQuad(c+3488,"div_io_out_bits_result_remainder", false,-1, 63,0);
    tracep->declBit(c+373,"is_mul", false,-1);
    tracep->declBit(c+374,"is_div", false,-1);
    tracep->declBit(c+375,"is_divw", false,-1);
    tracep->declBit(c+371,"is_div_sign", false,-1);
    tracep->declQuad(c+376,"mepc", false,-1, 63,0);
    tracep->declQuad(c+378,"mcause", false,-1, 63,0);
    tracep->declQuad(c+380,"mstatus", false,-1, 63,0);
    tracep->declQuad(c+382,"mtvec", false,-1, 63,0);
    tracep->declQuad(c+384,"mie", false,-1, 63,0);
    tracep->declQuad(c+386,"mip", false,-1, 63,0);
    tracep->declQuad(c+3490,"src1", false,-1, 63,0);
    tracep->declQuad(c+3492,"src2", false,-1, 63,0);
    tracep->declBit(c+3494,"alu_result_sign", false,-1);
    tracep->declBit(c+388,"alu_result_sign_2", false,-1);
    tracep->declBit(c+3495,"alu_result_sign_3", false,-1);
    tracep->declBit(c+3496,"alu_result_sign_4", false,-1);
    tracep->declBit(c+3497,"alu_result_sign_6", false,-1);
    tracep->declQuad(c+3456,"alu_result", false,-1, 63,0);
    tracep->declBit(c+3498,"shift_result_sign", false,-1);
    tracep->declBit(c+3499,"shift_result_sign_1", false,-1);
    tracep->declBit(c+3500,"shift_result_sign_2", false,-1);
    tracep->declBit(c+3501,"shift_result_sign_3", false,-1);
    tracep->declBit(c+3502,"div_io_in_bits_ctrl_data_src1_sign", false,-1);
    tracep->declBit(c+3503,"div_io_in_bits_ctrl_data_src2_sign", false,-1);
    tracep->declQuad(c+3458,"compar_result", false,-1, 63,0);
    tracep->declQuad(c+389,"jump_result", false,-1, 63,0);
    tracep->declQuad(c+3460,"shift_result", false,-1, 63,0);
    tracep->declQuad(c+391,"branch_result", false,-1, 63,0);
    tracep->declBit(c+3504,"branch_flag", false,-1);
    tracep->declQuad(c+393,"csr_data", false,-1, 63,0);
    tracep->declQuad(c+395,"CSRDIFF_io_mtvec_REG", false,-1, 63,0);
    tracep->declQuad(c+364,"CSRDIFF_io_mtvec_REG_1", false,-1, 63,0);
    tracep->declQuad(c+397,"CSRDIFF_io_mcause_REG", false,-1, 63,0);
    tracep->declQuad(c+360,"CSRDIFF_io_mcause_REG_1", false,-1, 63,0);
    tracep->declQuad(c+399,"CSRDIFF_io_mepc_REG", false,-1, 63,0);
    tracep->declQuad(c+358,"CSRDIFF_io_mepc_REG_1", false,-1, 63,0);
    tracep->declQuad(c+401,"CSRDIFF_io_mstatus_REG", false,-1, 63,0);
    tracep->declQuad(c+362,"CSRDIFF_io_mstatus_REG_1", false,-1, 63,0);
    tracep->pushNamePrefix("CSRDIFF ");
    tracep->declQuad(c+358,"mepc", false,-1, 63,0);
    tracep->declQuad(c+360,"mcause", false,-1, 63,0);
    tracep->declQuad(c+362,"mstatus", false,-1, 63,0);
    tracep->declQuad(c+364,"mtvec", false,-1, 63,0);
    for (int i = 0; i < 6; ++i) {
        tracep->declQuad(c+403+i*2,"inst_csr", true,(i+0), 63,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("div ");
    tracep->declBit(c+3509,"clock", false,-1);
    tracep->declBit(c+3510,"reset", false,-1);
    tracep->declBit(c+370,"io_in_valid", false,-1);
    tracep->declBit(c+371,"io_in_bits_ctrl_flow_div_signed", false,-1);
    tracep->declQuad(c+3482,"io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+3484,"io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declBit(c+372,"io_out_valid", false,-1);
    tracep->declQuad(c+3486,"io_out_bits_result_quotient", false,-1, 63,0);
    tracep->declQuad(c+3488,"io_out_bits_result_remainder", false,-1, 63,0);
    tracep->declArray(c+415,"dividend", false,-1, 127,0);
    tracep->declQuad(c+419,"divisor", false,-1, 63,0);
    tracep->declQuad(c+421,"S", false,-1, 63,0);
    tracep->declBus(c+423,"state", false,-1, 1,0);
    tracep->declBus(c+424,"count", false,-1, 5,0);
    tracep->declBit(c+425,"wrap_wrap", false,-1);
    tracep->declBit(c+426,"s", false,-1);
    tracep->declArray(c+427,"res_div", false,-1, 64,0);
    tracep->declQuad(c+430,"negative_s", false,-1, 63,0);
    tracep->declQuad(c+432,"negative_r", false,-1, 63,0);
    tracep->declQuad(c+3462,"s_o", false,-1, 63,0);
    tracep->declQuad(c+3464,"r_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mul ");
    tracep->declBit(c+3509,"clock", false,-1);
    tracep->declBit(c+3510,"reset", false,-1);
    tracep->declBit(c+366,"io_in_valid", false,-1);
    tracep->declQuad(c+3452,"io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+3454,"io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declBit(c+367,"io_out_valid", false,-1);
    tracep->declQuad(c+368,"io_out_bits_result_result_lo", false,-1, 63,0);
    tracep->declBit(c+3509,"mult_clock", false,-1);
    tracep->declBit(c+3510,"mult_reset", false,-1);
    tracep->declBit(c+366,"mult_io_in_valid", false,-1);
    tracep->declQuad(c+3452,"mult_io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+3454,"mult_io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declBit(c+367,"mult_io_out_valid", false,-1);
    tracep->declQuad(c+368,"mult_io_out_bits_result_result_lo", false,-1, 63,0);
    tracep->pushNamePrefix("mult ");
    tracep->declBit(c+3509,"clock", false,-1);
    tracep->declBit(c+3510,"reset", false,-1);
    tracep->declBit(c+366,"io_in_valid", false,-1);
    tracep->declQuad(c+3452,"io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+3454,"io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declBit(c+367,"io_out_valid", false,-1);
    tracep->declQuad(c+368,"io_out_bits_result_result_lo", false,-1, 63,0);
    tracep->declBus(c+434,"partial_io_y_3", false,-1, 2,0);
    tracep->declArray(c+435,"partial_io_x", false,-1, 131,0);
    tracep->declArray(c+440,"partial_io_p", false,-1, 131,0);
    tracep->declBit(c+445,"partial_io_c", false,-1);
    tracep->declArray(c+446,"multiplier", false,-1, 65,0);
    tracep->declArray(c+435,"multiplicand", false,-1, 131,0);
    tracep->declArray(c+449,"p", false,-1, 131,0);
    tracep->declBus(c+454,"count", false,-1, 6,0);
    tracep->declArray(c+455,"temp", false,-1, 131,0);
    tracep->declBit(c+460,"p_sign", false,-1);
    tracep->pushNamePrefix("partial ");
    tracep->declBus(c+434,"io_y_3", false,-1, 2,0);
    tracep->declArray(c+435,"io_x", false,-1, 131,0);
    tracep->declArray(c+440,"io_p", false,-1, 131,0);
    tracep->declBit(c+445,"io_c", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("ICACHE ");
    tracep->declBit(c+3509,"clock", false,-1);
    tracep->declBit(c+3510,"reset", false,-1);
    tracep->declBit(c+2,"io_in_addr_req_valid", false,-1);
    tracep->declQuad(c+3,"io_in_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+2,"io_in_rdata_rep_ready", false,-1);
    tracep->declBit(c+3468,"io_in_rdata_rep_valid", false,-1);
    tracep->declQuad(c+5,"io_in_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+3469,"io_flush", false,-1);
    tracep->declBit(c+237,"io_out_raddr_req_ready", false,-1);
    tracep->declBit(c+238,"io_out_raddr_req_valid", false,-1);
    tracep->declQuad(c+239,"io_out_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+241,"io_out_rdata_rep_valid", false,-1);
    tracep->declQuad(c+3480,"io_out_rdata_rep_bits_data", false,-1, 63,0);
    tracep->declBit(c+242,"io_out_rdata_rep_bits_last", false,-1);
    tracep->declBit(c+243,"io_out_wb_valid", false,-1);
    tracep->declBus(c+3547,"io_out_wb_bits_breap", false,-1, 1,0);
    tracep->declBit(c+3509,"Cache_data_clock", false,-1);
    tracep->declBit(c+461,"Cache_data_io_in_valid", false,-1);
    tracep->declQuad(c+3,"Cache_data_io_in_addr", false,-1, 63,0);
    tracep->declQuad(c+462,"Cache_data_io_write_bus_addr", false,-1, 63,0);
    tracep->declBit(c+464,"Cache_data_io_write_bus_valid", false,-1);
    tracep->declBus(c+465,"Cache_data_io_write_bus_waymask", false,-1, 1,0);
    tracep->declArray(c+466,"Cache_data_io_write_bus_wdata", false,-1, 511,0);
    tracep->declBit(c+461,"Cache_data_io_out_valid", false,-1);
    tracep->declQuad(c+482,"Cache_data_io_out_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+484,"Cache_data_io_out_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+486,"Cache_data_io_out_bits_meat_valid_0", false,-1);
    tracep->declBit(c+487,"Cache_data_io_out_bits_meat_valid_1", false,-1);
    tracep->declArray(c+488,"Cache_data_io_out_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+504,"Cache_data_io_out_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+520,"Cache_data_io_out_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBus(c+522,"Cache_data_io_out_bits_ctrl_data_index", false,-1, 4,0);
    tracep->declBus(c+523,"Cache_data_io_out_bits_ctrl_data_offset", false,-1, 5,0);
    tracep->declBit(c+524,"Scanf_io_in_valid", false,-1);
    tracep->declQuad(c+482,"Scanf_io_in_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+484,"Scanf_io_in_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+486,"Scanf_io_in_bits_meat_valid_0", false,-1);
    tracep->declBit(c+487,"Scanf_io_in_bits_meat_valid_1", false,-1);
    tracep->declArray(c+488,"Scanf_io_in_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+504,"Scanf_io_in_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+520,"Scanf_io_in_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBus(c+522,"Scanf_io_in_bits_ctrl_data_index", false,-1, 4,0);
    tracep->declBit(c+525,"Scanf_io_out_bits_hit", false,-1);
    tracep->declArray(c+526,"Scanf_io_out_bits_data", false,-1, 511,0);
    tracep->declBus(c+522,"Scanf_io_out_bits_meta_ctrl_data_index", false,-1, 4,0);
    tracep->declBit(c+542,"Scanf_io_out_bits_hit_way_0", false,-1);
    tracep->declBit(c+543,"Scanf_io_out_bits_hit_way_1", false,-1);
    tracep->declQuad(c+482,"Scanf_io_out_bits_tag_0", false,-1, 52,0);
    tracep->declQuad(c+484,"Scanf_io_out_bits_tag_1", false,-1, 52,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+544+i*1,"lru", true,(i+0));
    }
    tracep->declBit(c+576,"lru_lru_w_MPORT_en", false,-1);
    tracep->declBus(c+577,"lru_lru_w_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+578,"lru_lru_w_MPORT_data", false,-1);
    tracep->declBit(c+3514,"lru_MPORT_data", false,-1);
    tracep->declBus(c+522,"lru_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+3514,"lru_MPORT_mask", false,-1);
    tracep->declBit(c+579,"lru_MPORT_en", false,-1);
    tracep->declBit(c+3556,"lru_MPORT_1_data", false,-1);
    tracep->declBus(c+522,"lru_MPORT_1_addr", false,-1, 4,0);
    tracep->declBit(c+3514,"lru_MPORT_1_mask", false,-1);
    tracep->declBit(c+580,"lru_MPORT_1_en", false,-1);
    tracep->declBit(c+3556,"lru_MPORT_2_data", false,-1);
    tracep->declBus(c+522,"lru_MPORT_2_addr", false,-1, 4,0);
    tracep->declBit(c+3514,"lru_MPORT_2_mask", false,-1);
    tracep->declBit(c+581,"lru_MPORT_2_en", false,-1);
    tracep->declBit(c+3514,"lru_MPORT_3_data", false,-1);
    tracep->declBus(c+522,"lru_MPORT_3_addr", false,-1, 4,0);
    tracep->declBit(c+3514,"lru_MPORT_3_mask", false,-1);
    tracep->declBit(c+582,"lru_MPORT_3_en", false,-1);
    tracep->declBit(c+576,"lru_lru_w_MPORT_en_pipe_0", false,-1);
    tracep->declBus(c+577,"lru_lru_w_MPORT_addr_pipe_0", false,-1, 4,0);
    tracep->declBus(c+583,"state", false,-1, 2,0);
    tracep->declBus(c+584,"read_state", false,-1, 1,0);
    tracep->declArray(c+585,"data_line_reg", false,-1, 511,0);
    tracep->declQuad(c+601,"mem_addr_reg", false,-1, 63,0);
    tracep->declBit(c+603,"lru_r", false,-1);
    tracep->declBit(c+542,"hit_way_0", false,-1);
    tracep->declBit(c+543,"hit_way_1", false,-1);
    tracep->declBit(c+578,"lru_w", false,-1);
    tracep->declQuad(c+604,"hit_data", false,-1, 63,0);
    tracep->declQuad(c+606,"mem_data", false,-1, 63,0);
    tracep->declBit(c+524,"Scanf_io_in_valid_REG", false,-1);
    tracep->pushNamePrefix("Cache_data ");
    tracep->declBit(c+3509,"clock", false,-1);
    tracep->declBit(c+461,"io_in_valid", false,-1);
    tracep->declQuad(c+3,"io_in_addr", false,-1, 63,0);
    tracep->declQuad(c+462,"io_write_bus_addr", false,-1, 63,0);
    tracep->declBit(c+464,"io_write_bus_valid", false,-1);
    tracep->declBus(c+465,"io_write_bus_waymask", false,-1, 1,0);
    tracep->declArray(c+466,"io_write_bus_wdata", false,-1, 511,0);
    tracep->declBit(c+461,"io_out_valid", false,-1);
    tracep->declQuad(c+482,"io_out_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+484,"io_out_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+486,"io_out_bits_meat_valid_0", false,-1);
    tracep->declBit(c+487,"io_out_bits_meat_valid_1", false,-1);
    tracep->declArray(c+488,"io_out_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+504,"io_out_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+520,"io_out_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBus(c+522,"io_out_bits_ctrl_data_index", false,-1, 4,0);
    tracep->declBus(c+523,"io_out_bits_ctrl_data_offset", false,-1, 5,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declArray(c+608+i*16,"data_0", true,(i+0), 511,0);
    }
    tracep->declBit(c+1120,"data_0_data_w_en", false,-1);
    tracep->declBus(c+1121,"data_0_data_w_addr", false,-1, 4,0);
    tracep->declArray(c+488,"data_0_data_w_data", false,-1, 511,0);
    tracep->declArray(c+466,"data_0_MPORT_data", false,-1, 511,0);
    tracep->declBus(c+1122,"data_0_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+1123,"data_0_MPORT_mask", false,-1);
    tracep->declBit(c+464,"data_0_MPORT_en", false,-1);
    tracep->declBit(c+1120,"data_0_data_w_en_pipe_0", false,-1);
    tracep->declBus(c+1121,"data_0_data_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declArray(c+1124+i*16,"data_1", true,(i+0), 511,0);
    }
    tracep->declBit(c+1636,"data_1_data_w_en", false,-1);
    tracep->declBus(c+1637,"data_1_data_w_addr", false,-1, 4,0);
    tracep->declArray(c+504,"data_1_data_w_data", false,-1, 511,0);
    tracep->declArray(c+466,"data_1_MPORT_data", false,-1, 511,0);
    tracep->declBus(c+1122,"data_1_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+1638,"data_1_MPORT_mask", false,-1);
    tracep->declBit(c+464,"data_1_MPORT_en", false,-1);
    tracep->declBit(c+1636,"data_1_data_w_en_pipe_0", false,-1);
    tracep->declBus(c+1637,"data_1_data_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+1639+i*2,"TAG_0", true,(i+0), 52,0);
    }
    tracep->declBit(c+1703,"TAG_0_tag_w_en", false,-1);
    tracep->declBus(c+1704,"TAG_0_tag_w_addr", false,-1, 4,0);
    tracep->declQuad(c+482,"TAG_0_tag_w_data", false,-1, 52,0);
    tracep->declQuad(c+1705,"TAG_0_MPORT_1_data", false,-1, 52,0);
    tracep->declBus(c+1122,"TAG_0_MPORT_1_addr", false,-1, 4,0);
    tracep->declBit(c+1123,"TAG_0_MPORT_1_mask", false,-1);
    tracep->declBit(c+464,"TAG_0_MPORT_1_en", false,-1);
    tracep->declBit(c+1703,"TAG_0_tag_w_en_pipe_0", false,-1);
    tracep->declBus(c+1704,"TAG_0_tag_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+1707+i*2,"TAG_1", true,(i+0), 52,0);
    }
    tracep->declBit(c+1771,"TAG_1_tag_w_en", false,-1);
    tracep->declBus(c+1772,"TAG_1_tag_w_addr", false,-1, 4,0);
    tracep->declQuad(c+484,"TAG_1_tag_w_data", false,-1, 52,0);
    tracep->declQuad(c+1705,"TAG_1_MPORT_1_data", false,-1, 52,0);
    tracep->declBus(c+1122,"TAG_1_MPORT_1_addr", false,-1, 4,0);
    tracep->declBit(c+1638,"TAG_1_MPORT_1_mask", false,-1);
    tracep->declBit(c+464,"TAG_1_MPORT_1_en", false,-1);
    tracep->declBit(c+1771,"TAG_1_tag_w_en_pipe_0", false,-1);
    tracep->declBus(c+1772,"TAG_1_tag_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+1773+i*1,"data_valid_0", true,(i+0));
    }
    tracep->declBit(c+1805,"data_valid_0_valid_w_en", false,-1);
    tracep->declBus(c+1806,"data_valid_0_valid_w_addr", false,-1, 4,0);
    tracep->declBit(c+486,"data_valid_0_valid_w_data", false,-1);
    tracep->declBit(c+3514,"data_valid_0_MPORT_2_data", false,-1);
    tracep->declBus(c+1122,"data_valid_0_MPORT_2_addr", false,-1, 4,0);
    tracep->declBit(c+1123,"data_valid_0_MPORT_2_mask", false,-1);
    tracep->declBit(c+464,"data_valid_0_MPORT_2_en", false,-1);
    tracep->declBit(c+1805,"data_valid_0_valid_w_en_pipe_0", false,-1);
    tracep->declBus(c+1806,"data_valid_0_valid_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+1807+i*1,"data_valid_1", true,(i+0));
    }
    tracep->declBit(c+1839,"data_valid_1_valid_w_en", false,-1);
    tracep->declBus(c+1840,"data_valid_1_valid_w_addr", false,-1, 4,0);
    tracep->declBit(c+487,"data_valid_1_valid_w_data", false,-1);
    tracep->declBit(c+3514,"data_valid_1_MPORT_2_data", false,-1);
    tracep->declBus(c+1122,"data_valid_1_MPORT_2_addr", false,-1, 4,0);
    tracep->declBit(c+1638,"data_valid_1_MPORT_2_mask", false,-1);
    tracep->declBit(c+464,"data_valid_1_MPORT_2_en", false,-1);
    tracep->declBit(c+1839,"data_valid_1_valid_w_en_pipe_0", false,-1);
    tracep->declBus(c+1840,"data_valid_1_valid_w_addr_pipe_0", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Scanf ");
    tracep->declBit(c+524,"io_in_valid", false,-1);
    tracep->declQuad(c+482,"io_in_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+484,"io_in_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+486,"io_in_bits_meat_valid_0", false,-1);
    tracep->declBit(c+487,"io_in_bits_meat_valid_1", false,-1);
    tracep->declArray(c+488,"io_in_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+504,"io_in_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+520,"io_in_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBus(c+522,"io_in_bits_ctrl_data_index", false,-1, 4,0);
    tracep->declBit(c+525,"io_out_bits_hit", false,-1);
    tracep->declArray(c+526,"io_out_bits_data", false,-1, 511,0);
    tracep->declBus(c+522,"io_out_bits_meta_ctrl_data_index", false,-1, 4,0);
    tracep->declBit(c+542,"io_out_bits_hit_way_0", false,-1);
    tracep->declBit(c+543,"io_out_bits_hit_way_1", false,-1);
    tracep->declQuad(c+482,"io_out_bits_tag_0", false,-1, 52,0);
    tracep->declQuad(c+484,"io_out_bits_tag_1", false,-1, 52,0);
    tracep->declBit(c+1841,"hit_way_0_result", false,-1);
    tracep->declBit(c+1842,"hit_way_1_result", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ID ");
    tracep->declBit(c+2,"io_in_ready", false,-1);
    tracep->declBit(c+7,"io_in_valid", false,-1);
    tracep->declQuad(c+8,"io_in_bits_PC", false,-1, 63,0);
    tracep->declBus(c+10,"io_in_bits_Inst", false,-1, 31,0);
    tracep->declQuad(c+3443,"io_REG1", false,-1, 63,0);
    tracep->declQuad(c+3445,"io_REG2", false,-1, 63,0);
    tracep->declBit(c+3469,"io_flush", false,-1);
    tracep->declBit(c+2,"io_out_ready", false,-1);
    tracep->declBit(c+7,"io_out_valid", false,-1);
    tracep->declBus(c+11,"io_out_bits_ctrl_signal_src1Type", false,-1, 2,0);
    tracep->declBus(c+12,"io_out_bits_ctrl_signal_src2Type", false,-1, 2,0);
    tracep->declBus(c+13,"io_out_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+3447,"io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBus(c+14,"io_out_bits_ctrl_signal_rfSrc1", false,-1, 4,0);
    tracep->declBus(c+15,"io_out_bits_ctrl_signal_rfSrc2", false,-1, 4,0);
    tracep->declBit(c+16,"io_out_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+17,"io_out_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declBus(c+18,"io_out_bits_ctrl_signal_rfDest", false,-1, 4,0);
    tracep->declQuad(c+3443,"io_out_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+3445,"io_out_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+19,"io_out_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declQuad(c+8,"io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+10,"io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declBus(c+18,"rd", false,-1, 4,0);
    tracep->declBus(c+1843,"Inst_decode_0", false,-1, 3,0);
    tracep->declBus(c+17,"Inst_decode_2", false,-1, 6,0);
    tracep->declBit(c+1844,"Inst_decode_3", false,-1);
    tracep->declBus(c+1845,"srctype1", false,-1, 1,0);
    tracep->declBit(c+1846,"srctype2", false,-1);
    tracep->declBit(c+1847,"sign", false,-1);
    tracep->declBit(c+1848,"sign_1", false,-1);
    tracep->declBit(c+1849,"sign_2", false,-1);
    tracep->declBit(c+1849,"sign_3", false,-1);
    tracep->declBit(c+1847,"sign_4", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IF ");
    tracep->declBit(c+3509,"clock", false,-1);
    tracep->declBit(c+3510,"reset", false,-1);
    tracep->declBit(c+3439,"io_branch_io_is_branch", false,-1);
    tracep->declBit(c+1,"io_branch_io_is_jump", false,-1);
    tracep->declQuad(c+3440,"io_branch_io_dnpc", false,-1, 63,0);
    tracep->declBit(c+2,"io_cache_req_addr_req_valid", false,-1);
    tracep->declQuad(c+3,"io_cache_req_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+2,"io_cache_req_rdata_rep_ready", false,-1);
    tracep->declBit(c+3468,"io_cache_req_rdata_rep_valid", false,-1);
    tracep->declQuad(c+5,"io_cache_req_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+2,"io_out_ready", false,-1);
    tracep->declBit(c+3468,"io_out_valid", false,-1);
    tracep->declQuad(c+3,"io_out_bits_PC", false,-1, 63,0);
    tracep->declBus(c+3442,"io_out_bits_Inst", false,-1, 31,0);
    tracep->declBit(c+3469,"io_flush", false,-1);
    tracep->declQuad(c+3,"temp", false,-1, 63,0);
    tracep->declBus(c+1850,"inst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MEM ");
    tracep->declBit(c+40,"io_in_ready", false,-1);
    tracep->declBit(c+188,"io_in_valid", false,-1);
    tracep->declBus(c+189,"io_in_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+190,"io_in_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+191,"io_in_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+192,"io_in_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+193,"io_in_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+195,"io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+196,"io_in_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+198,"io_in_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declQuad(c+199,"io_in_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+201,"io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+203,"io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+205,"io_in_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declBit(c+3514,"io_out_ready", false,-1);
    tracep->declBit(c+207,"io_out_valid", false,-1);
    tracep->declBit(c+208,"io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+191,"io_out_bits_ctrl_signal_rfWen", false,-1);
    tracep->declQuad(c+193,"io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+195,"io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+196,"io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBit(c+209,"io_out_bits_ctrl_flow_skip", false,-1);
    tracep->declBus(c+198,"io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+210,"io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+3476,"io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declBit(c+211,"io_cache_io_addr_req_valid", false,-1);
    tracep->declQuad(c+212,"io_cache_io_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+214,"io_cache_io_addr_req_bits_ce", false,-1);
    tracep->declBit(c+215,"io_cache_io_addr_req_bits_we", false,-1);
    tracep->declBit(c+216,"io_cache_io_rdata_rep_valid", false,-1);
    tracep->declQuad(c+3478,"io_cache_io_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+217,"io_cache_io_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+219,"io_cache_io_wdata_req_bits_wmask", false,-1, 7,0);
    tracep->declBit(c+220,"io_cache_io_wdata_rep", false,-1);
    tracep->declQuad(c+1851,"addr_temp", false,-1, 63,0);
    tracep->declBit(c+3505,"mem_result_sign", false,-1);
    tracep->declBit(c+3506,"mem_result_sign_1", false,-1);
    tracep->declBit(c+3507,"mem_result_sign_2", false,-1);
    tracep->declBit(c+3508,"mem_result_sign_3", false,-1);
    tracep->declQuad(c+3466,"mem_result", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MMEM ");
    tracep->declBus(c+3557,"BUS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+3557,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+3509,"clk", false,-1);
    tracep->declBit(c+3510,"reset", false,-1);
    tracep->declBit(c+244,"ar_valid", false,-1);
    tracep->declBit(c+245,"ar_ready", false,-1);
    tracep->declBus(c+3548,"ar_id", false,-1, 3,0);
    tracep->declBus(c+248,"ar_len", false,-1, 7,0);
    tracep->declBus(c+3549,"ar_size", false,-1, 2,0);
    tracep->declQuad(c+246,"ar_addr", false,-1, 63,0);
    tracep->declBus(c+3550,"ar_prot", false,-1, 2,0);
    tracep->declBus(c+3551,"ar_burst", false,-1, 1,0);
    tracep->declBus(c+3547,"ar_lock", false,-1, 1,0);
    tracep->declBus(c+3552,"ar_cache", false,-1, 3,0);
    tracep->declBit(c+251,"aw_valid", false,-1);
    tracep->declBit(c+252,"aw_ready", false,-1);
    tracep->declBus(c+3548,"aw_id", false,-1, 3,0);
    tracep->declBus(c+255,"aw_len", false,-1, 7,0);
    tracep->declBus(c+3549,"aw_size", false,-1, 2,0);
    tracep->declQuad(c+253,"aw_addr", false,-1, 63,0);
    tracep->declBus(c+3550,"aw_prot", false,-1, 2,0);
    tracep->declBus(c+3551,"aw_burst", false,-1, 1,0);
    tracep->declBus(c+3547,"aw_lock", false,-1, 1,0);
    tracep->declBus(c+3552,"aw_cache", false,-1, 3,0);
    tracep->declBit(c+249,"rd_valid", false,-1);
    tracep->declBit(c+250,"rd_ready", false,-1);
    tracep->declBus(c+3553,"rd_id", false,-1, 3,0);
    tracep->declQuad(c+3480,"rd_data", false,-1, 63,0);
    tracep->declBus(c+3554,"rd_resp", false,-1, 1,0);
    tracep->declBit(c+242,"rd_last", false,-1);
    tracep->declBit(c+256,"wd_valid", false,-1);
    tracep->declBit(c+257,"wd_ready", false,-1);
    tracep->declBus(c+3548,"wd_id", false,-1, 3,0);
    tracep->declQuad(c+258,"wd_data", false,-1, 63,0);
    tracep->declBus(c+260,"wstrb", false,-1, 7,0);
    tracep->declBit(c+261,"wd_last", false,-1);
    tracep->declBit(c+262,"wr_valid", false,-1);
    tracep->declBit(c+263,"wr_ready", false,-1);
    tracep->declBus(c+3555,"wr_id", false,-1, 3,0);
    tracep->declBus(c+3547,"wr_breap", false,-1, 1,0);
    tracep->declBus(c+3547,"idle", false,-1, 1,0);
    tracep->declBus(c+3551,"ready", false,-1, 1,0);
    tracep->declBus(c+3558,"data_transform", false,-1, 1,0);
    tracep->declBus(c+1853,"read_state", false,-1, 1,0);
    tracep->declBus(c+1854,"write_state", false,-1, 1,0);
    tracep->declBus(c+1855,"read_next_state", false,-1, 1,0);
    tracep->declBus(c+1856,"write_next_state", false,-1, 1,0);
    tracep->declQuad(c+3480,"rdata", false,-1, 63,0);
    tracep->declQuad(c+1857,"write_addr_buffer", false,-1, 63,0);
    tracep->declQuad(c+1859,"read_addr_buffer", false,-1, 63,0);
    tracep->declBus(c+1861,"read_count", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MMIO ");
    tracep->declBit(c+3509,"clock", false,-1);
    tracep->declBit(c+3510,"reset", false,-1);
    tracep->declBit(c+211,"io_in_addr_req_valid", false,-1);
    tracep->declQuad(c+212,"io_in_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+214,"io_in_addr_req_bits_ce", false,-1);
    tracep->declBit(c+215,"io_in_addr_req_bits_we", false,-1);
    tracep->declBit(c+216,"io_in_rdata_rep_valid", false,-1);
    tracep->declQuad(c+3478,"io_in_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+217,"io_in_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+219,"io_in_wdata_req_bits_wmask", false,-1, 7,0);
    tracep->declBit(c+220,"io_in_wdata_rep", false,-1);
    tracep->declBit(c+264,"io_out_raddr_req_ready", false,-1);
    tracep->declBit(c+265,"io_out_raddr_req_valid", false,-1);
    tracep->declQuad(c+266,"io_out_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBus(c+268,"io_out_raddr_req_bits_len", false,-1, 7,0);
    tracep->declBit(c+269,"io_out_waddr_req_ready", false,-1);
    tracep->declBit(c+270,"io_out_waddr_req_valid", false,-1);
    tracep->declQuad(c+271,"io_out_waddr_req_bits_addr", false,-1, 63,0);
    tracep->declBus(c+273,"io_out_waddr_req_bits_len", false,-1, 7,0);
    tracep->declBit(c+274,"io_out_rdata_rep_ready", false,-1);
    tracep->declBit(c+275,"io_out_rdata_rep_valid", false,-1);
    tracep->declQuad(c+3480,"io_out_rdata_rep_bits_data", false,-1, 63,0);
    tracep->declBit(c+242,"io_out_rdata_rep_bits_last", false,-1);
    tracep->declBit(c+276,"io_out_wdata_req_ready", false,-1);
    tracep->declBit(c+277,"io_out_wdata_req_valid", false,-1);
    tracep->declQuad(c+278,"io_out_wdata_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+280,"io_out_wdata_req_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+281,"io_out_wdata_req_bits_last", false,-1);
    tracep->declBit(c+282,"io_out_wb_ready", false,-1);
    tracep->declBit(c+283,"io_out_wb_valid", false,-1);
    tracep->declBus(c+3547,"io_out_wb_bits_breap", false,-1, 1,0);
    tracep->declBit(c+3509,"DCACHE_clock", false,-1);
    tracep->declBit(c+3510,"DCACHE_reset", false,-1);
    tracep->declBit(c+1862,"DCACHE_io_in_addr_req_valid", false,-1);
    tracep->declQuad(c+212,"DCACHE_io_in_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+215,"DCACHE_io_in_addr_req_bits_we", false,-1);
    tracep->declBit(c+1863,"DCACHE_io_in_rdata_rep_ready", false,-1);
    tracep->declBit(c+1864,"DCACHE_io_in_rdata_rep_valid", false,-1);
    tracep->declQuad(c+1865,"DCACHE_io_in_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+217,"DCACHE_io_in_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+219,"DCACHE_io_in_wdata_req_bits_wmask", false,-1, 7,0);
    tracep->declBit(c+1867,"DCACHE_io_in_wdata_rep", false,-1);
    tracep->declBit(c+1868,"DCACHE_io_out_raddr_req_ready", false,-1);
    tracep->declBit(c+1869,"DCACHE_io_out_raddr_req_valid", false,-1);
    tracep->declQuad(c+1870,"DCACHE_io_out_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+1872,"DCACHE_io_out_waddr_req_ready", false,-1);
    tracep->declBit(c+1873,"DCACHE_io_out_waddr_req_valid", false,-1);
    tracep->declQuad(c+1874,"DCACHE_io_out_waddr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+1876,"DCACHE_io_out_rdata_rep_valid", false,-1);
    tracep->declQuad(c+3480,"DCACHE_io_out_rdata_rep_bits_data", false,-1, 63,0);
    tracep->declBit(c+242,"DCACHE_io_out_rdata_rep_bits_last", false,-1);
    tracep->declBit(c+1877,"DCACHE_io_out_wdata_req_ready", false,-1);
    tracep->declBit(c+1878,"DCACHE_io_out_wdata_req_valid", false,-1);
    tracep->declQuad(c+1879,"DCACHE_io_out_wdata_req_bits_data", false,-1, 63,0);
    tracep->declBit(c+1881,"DCACHE_io_out_wdata_req_bits_last", false,-1);
    tracep->declBit(c+1882,"DCACHE_io_out_wb_valid", false,-1);
    tracep->declBus(c+3547,"DCACHE_io_out_wb_bits_breap", false,-1, 1,0);
    tracep->declBit(c+3509,"birdge_clock", false,-1);
    tracep->declBit(c+3510,"birdge_reset", false,-1);
    tracep->declBit(c+1883,"birdge_io_in_addr_req_valid", false,-1);
    tracep->declQuad(c+212,"birdge_io_in_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+214,"birdge_io_in_addr_req_bits_ce", false,-1);
    tracep->declBit(c+215,"birdge_io_in_addr_req_bits_we", false,-1);
    tracep->declBit(c+1884,"birdge_io_in_rdata_rep_ready", false,-1);
    tracep->declBit(c+1885,"birdge_io_in_rdata_rep_valid", false,-1);
    tracep->declQuad(c+3480,"birdge_io_in_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+1886,"birdge_io_in_wdata_req_valid", false,-1);
    tracep->declQuad(c+217,"birdge_io_in_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+219,"birdge_io_in_wdata_req_bits_wmask", false,-1, 7,0);
    tracep->declBit(c+1887,"birdge_io_in_wdata_rep", false,-1);
    tracep->declBit(c+1888,"birdge_io_out_raddr_req_ready", false,-1);
    tracep->declBit(c+1889,"birdge_io_out_raddr_req_valid", false,-1);
    tracep->declQuad(c+212,"birdge_io_out_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+1890,"birdge_io_out_waddr_req_ready", false,-1);
    tracep->declBit(c+1891,"birdge_io_out_waddr_req_valid", false,-1);
    tracep->declQuad(c+212,"birdge_io_out_waddr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+1884,"birdge_io_out_rdata_rep_ready", false,-1);
    tracep->declBit(c+1885,"birdge_io_out_rdata_rep_valid", false,-1);
    tracep->declQuad(c+3480,"birdge_io_out_rdata_rep_bits_data", false,-1, 63,0);
    tracep->declBit(c+242,"birdge_io_out_rdata_rep_bits_last", false,-1);
    tracep->declBit(c+1892,"birdge_io_out_wdata_req_ready", false,-1);
    tracep->declBit(c+1886,"birdge_io_out_wdata_req_valid", false,-1);
    tracep->declQuad(c+217,"birdge_io_out_wdata_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+219,"birdge_io_out_wdata_req_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+1893,"birdge_io_out_wdata_req_bits_last", false,-1);
    tracep->declBit(c+1894,"birdge_io_out_wb_ready", false,-1);
    tracep->declBit(c+1887,"birdge_io_out_wb_valid", false,-1);
    tracep->declBus(c+3547,"birdge_io_out_wb_bits_breap", false,-1, 1,0);
    tracep->pushNamePrefix("DCACHE ");
    tracep->declBit(c+3509,"clock", false,-1);
    tracep->declBit(c+3510,"reset", false,-1);
    tracep->declBit(c+1862,"io_in_addr_req_valid", false,-1);
    tracep->declQuad(c+212,"io_in_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+215,"io_in_addr_req_bits_we", false,-1);
    tracep->declBit(c+1863,"io_in_rdata_rep_ready", false,-1);
    tracep->declBit(c+1864,"io_in_rdata_rep_valid", false,-1);
    tracep->declQuad(c+1865,"io_in_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+217,"io_in_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+219,"io_in_wdata_req_bits_wmask", false,-1, 7,0);
    tracep->declBit(c+1867,"io_in_wdata_rep", false,-1);
    tracep->declBit(c+1868,"io_out_raddr_req_ready", false,-1);
    tracep->declBit(c+1869,"io_out_raddr_req_valid", false,-1);
    tracep->declQuad(c+1870,"io_out_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+1872,"io_out_waddr_req_ready", false,-1);
    tracep->declBit(c+1873,"io_out_waddr_req_valid", false,-1);
    tracep->declQuad(c+1874,"io_out_waddr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+1876,"io_out_rdata_rep_valid", false,-1);
    tracep->declQuad(c+3480,"io_out_rdata_rep_bits_data", false,-1, 63,0);
    tracep->declBit(c+242,"io_out_rdata_rep_bits_last", false,-1);
    tracep->declBit(c+1877,"io_out_wdata_req_ready", false,-1);
    tracep->declBit(c+1878,"io_out_wdata_req_valid", false,-1);
    tracep->declQuad(c+1879,"io_out_wdata_req_bits_data", false,-1, 63,0);
    tracep->declBit(c+1881,"io_out_wdata_req_bits_last", false,-1);
    tracep->declBit(c+1882,"io_out_wb_valid", false,-1);
    tracep->declBus(c+3547,"io_out_wb_bits_breap", false,-1, 1,0);
    tracep->declBit(c+3509,"Cache_data_clock", false,-1);
    tracep->declBit(c+1895,"Cache_data_io_in_valid", false,-1);
    tracep->declQuad(c+212,"Cache_data_io_in_addr", false,-1, 63,0);
    tracep->declQuad(c+1896,"Cache_data_io_write_bus_addr", false,-1, 63,0);
    tracep->declBit(c+1898,"Cache_data_io_write_bus_valid", false,-1);
    tracep->declBus(c+1899,"Cache_data_io_write_bus_waymask", false,-1, 1,0);
    tracep->declArray(c+1900,"Cache_data_io_write_bus_wdata", false,-1, 511,0);
    tracep->declBit(c+1895,"Cache_data_io_out_valid", false,-1);
    tracep->declQuad(c+1916,"Cache_data_io_out_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+1918,"Cache_data_io_out_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+1920,"Cache_data_io_out_bits_meat_valid_0", false,-1);
    tracep->declBit(c+1921,"Cache_data_io_out_bits_meat_valid_1", false,-1);
    tracep->declArray(c+1922,"Cache_data_io_out_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+1938,"Cache_data_io_out_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+1954,"Cache_data_io_out_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBus(c+1956,"Cache_data_io_out_bits_ctrl_data_index", false,-1, 4,0);
    tracep->declBus(c+1957,"Cache_data_io_out_bits_ctrl_data_offset", false,-1, 5,0);
    tracep->declBit(c+1958,"Scanf_io_in_valid", false,-1);
    tracep->declQuad(c+1916,"Scanf_io_in_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+1918,"Scanf_io_in_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+1920,"Scanf_io_in_bits_meat_valid_0", false,-1);
    tracep->declBit(c+1921,"Scanf_io_in_bits_meat_valid_1", false,-1);
    tracep->declArray(c+1922,"Scanf_io_in_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+1938,"Scanf_io_in_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+1954,"Scanf_io_in_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBus(c+1956,"Scanf_io_in_bits_ctrl_data_index", false,-1, 4,0);
    tracep->declBit(c+1959,"Scanf_io_out_bits_hit", false,-1);
    tracep->declArray(c+1960,"Scanf_io_out_bits_data", false,-1, 511,0);
    tracep->declBus(c+1956,"Scanf_io_out_bits_meta_ctrl_data_index", false,-1, 4,0);
    tracep->declBit(c+1976,"Scanf_io_out_bits_hit_way_0", false,-1);
    tracep->declBit(c+1977,"Scanf_io_out_bits_hit_way_1", false,-1);
    tracep->declQuad(c+1916,"Scanf_io_out_bits_tag_0", false,-1, 52,0);
    tracep->declQuad(c+1918,"Scanf_io_out_bits_tag_1", false,-1, 52,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+1978+i*1,"lru", true,(i+0));
    }
    tracep->declBit(c+2010,"lru_lru_w_MPORT_en", false,-1);
    tracep->declBus(c+2011,"lru_lru_w_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+2012,"lru_lru_w_MPORT_data", false,-1);
    tracep->declBit(c+3514,"lru_MPORT_data", false,-1);
    tracep->declBus(c+1956,"lru_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+3514,"lru_MPORT_mask", false,-1);
    tracep->declBit(c+2013,"lru_MPORT_en", false,-1);
    tracep->declBit(c+3556,"lru_MPORT_1_data", false,-1);
    tracep->declBus(c+1956,"lru_MPORT_1_addr", false,-1, 4,0);
    tracep->declBit(c+3514,"lru_MPORT_1_mask", false,-1);
    tracep->declBit(c+2014,"lru_MPORT_1_en", false,-1);
    tracep->declBit(c+3556,"lru_MPORT_2_data", false,-1);
    tracep->declBus(c+1956,"lru_MPORT_2_addr", false,-1, 4,0);
    tracep->declBit(c+3514,"lru_MPORT_2_mask", false,-1);
    tracep->declBit(c+2015,"lru_MPORT_2_en", false,-1);
    tracep->declBit(c+3514,"lru_MPORT_3_data", false,-1);
    tracep->declBus(c+1956,"lru_MPORT_3_addr", false,-1, 4,0);
    tracep->declBit(c+3514,"lru_MPORT_3_mask", false,-1);
    tracep->declBit(c+2016,"lru_MPORT_3_en", false,-1);
    tracep->declBit(c+2010,"lru_lru_w_MPORT_en_pipe_0", false,-1);
    tracep->declBus(c+2011,"lru_lru_w_MPORT_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+2017+i*1,"dirt_0", true,(i+0));
    }
    tracep->declBit(c+2049,"dirt_0_dirt_w_en", false,-1);
    tracep->declBus(c+2050,"dirt_0_dirt_w_addr", false,-1, 4,0);
    tracep->declBit(c+2051,"dirt_0_dirt_w_data", false,-1);
    tracep->declBit(c+3514,"dirt_0_MPORT_4_data", false,-1);
    tracep->declBus(c+1956,"dirt_0_MPORT_4_addr", false,-1, 4,0);
    tracep->declBit(c+2052,"dirt_0_MPORT_4_mask", false,-1);
    tracep->declBit(c+2053,"dirt_0_MPORT_4_en", false,-1);
    tracep->declBit(c+2049,"dirt_0_dirt_w_en_pipe_0", false,-1);
    tracep->declBus(c+2050,"dirt_0_dirt_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+2054+i*1,"dirt_1", true,(i+0));
    }
    tracep->declBit(c+2086,"dirt_1_dirt_w_en", false,-1);
    tracep->declBus(c+2087,"dirt_1_dirt_w_addr", false,-1, 4,0);
    tracep->declBit(c+2088,"dirt_1_dirt_w_data", false,-1);
    tracep->declBit(c+3514,"dirt_1_MPORT_4_data", false,-1);
    tracep->declBus(c+1956,"dirt_1_MPORT_4_addr", false,-1, 4,0);
    tracep->declBit(c+2089,"dirt_1_MPORT_4_mask", false,-1);
    tracep->declBit(c+2053,"dirt_1_MPORT_4_en", false,-1);
    tracep->declBit(c+2086,"dirt_1_dirt_w_en_pipe_0", false,-1);
    tracep->declBus(c+2087,"dirt_1_dirt_w_addr_pipe_0", false,-1, 4,0);
    tracep->declBus(c+2090,"state", false,-1, 2,0);
    tracep->declBus(c+2091,"read_state", false,-1, 1,0);
    tracep->declBus(c+2092,"write_state", false,-1, 1,0);
    tracep->declArray(c+2093,"data_line_reg", false,-1, 511,0);
    tracep->declQuad(c+2109,"mem_addr_reg", false,-1, 63,0);
    tracep->declBit(c+2111,"lru_r", false,-1);
    tracep->declBus(c+2112,"count_write", false,-1, 3,0);
    tracep->declQuad(c+2113,"mem_write_addr_reg", false,-1, 63,0);
    tracep->declArray(c+2115,"mem_write_data_reg", false,-1, 511,0);
    tracep->declBit(c+2012,"lru_w", false,-1);
    tracep->declBit(c+1976,"hit_way_0", false,-1);
    tracep->declBit(c+1977,"hit_way_1", false,-1);
    tracep->declQuad(c+2131,"hit_data", false,-1, 63,0);
    tracep->declQuad(c+2133,"mem_data", false,-1, 63,0);
    tracep->declBit(c+1958,"Scanf_io_in_valid_REG", false,-1);
    tracep->declQuad(c+2135,"wmaskextend_Genmask", false,-1, 63,0);
    tracep->declQuad(c+2137,"wmaskextend_lo_lo_lo", false,-1, 63,0);
    tracep->declArray(c+2139,"wmaskextend_lo_lo", false,-1, 127,0);
    tracep->declQuad(c+2143,"wmaskextend_lo_hi_lo", false,-1, 63,0);
    tracep->declArray(c+2145,"wmaskextend_lo", false,-1, 255,0);
    tracep->declQuad(c+2153,"wmaskextend_hi_lo_lo", false,-1, 63,0);
    tracep->declArray(c+2155,"wmaskextend_hi_lo", false,-1, 127,0);
    tracep->declQuad(c+2159,"wmaskextend_hi_hi_lo", false,-1, 63,0);
    tracep->declArray(c+2161,"wmaskextend_hi", false,-1, 255,0);
    tracep->declArray(c+2169,"wmaskextend", false,-1, 511,0);
    tracep->declArray(c+2185,"wdata_extend", false,-1, 511,0);
    tracep->declBus(c+2201,"waymask", false,-1, 1,0);
    tracep->pushNamePrefix("Cache_data ");
    tracep->declBit(c+3509,"clock", false,-1);
    tracep->declBit(c+1895,"io_in_valid", false,-1);
    tracep->declQuad(c+212,"io_in_addr", false,-1, 63,0);
    tracep->declQuad(c+1896,"io_write_bus_addr", false,-1, 63,0);
    tracep->declBit(c+1898,"io_write_bus_valid", false,-1);
    tracep->declBus(c+1899,"io_write_bus_waymask", false,-1, 1,0);
    tracep->declArray(c+1900,"io_write_bus_wdata", false,-1, 511,0);
    tracep->declBit(c+1895,"io_out_valid", false,-1);
    tracep->declQuad(c+1916,"io_out_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+1918,"io_out_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+1920,"io_out_bits_meat_valid_0", false,-1);
    tracep->declBit(c+1921,"io_out_bits_meat_valid_1", false,-1);
    tracep->declArray(c+1922,"io_out_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+1938,"io_out_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+1954,"io_out_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBus(c+1956,"io_out_bits_ctrl_data_index", false,-1, 4,0);
    tracep->declBus(c+1957,"io_out_bits_ctrl_data_offset", false,-1, 5,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declArray(c+2202+i*16,"data_0", true,(i+0), 511,0);
    }
    tracep->declBit(c+2714,"data_0_data_w_en", false,-1);
    tracep->declBus(c+2715,"data_0_data_w_addr", false,-1, 4,0);
    tracep->declArray(c+1922,"data_0_data_w_data", false,-1, 511,0);
    tracep->declArray(c+1900,"data_0_MPORT_data", false,-1, 511,0);
    tracep->declBus(c+2716,"data_0_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+2717,"data_0_MPORT_mask", false,-1);
    tracep->declBit(c+1898,"data_0_MPORT_en", false,-1);
    tracep->declBit(c+2714,"data_0_data_w_en_pipe_0", false,-1);
    tracep->declBus(c+2715,"data_0_data_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declArray(c+2718+i*16,"data_1", true,(i+0), 511,0);
    }
    tracep->declBit(c+3230,"data_1_data_w_en", false,-1);
    tracep->declBus(c+3231,"data_1_data_w_addr", false,-1, 4,0);
    tracep->declArray(c+1938,"data_1_data_w_data", false,-1, 511,0);
    tracep->declArray(c+1900,"data_1_MPORT_data", false,-1, 511,0);
    tracep->declBus(c+2716,"data_1_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+3232,"data_1_MPORT_mask", false,-1);
    tracep->declBit(c+1898,"data_1_MPORT_en", false,-1);
    tracep->declBit(c+3230,"data_1_data_w_en_pipe_0", false,-1);
    tracep->declBus(c+3231,"data_1_data_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+3233+i*2,"TAG_0", true,(i+0), 52,0);
    }
    tracep->declBit(c+3297,"TAG_0_tag_w_en", false,-1);
    tracep->declBus(c+3298,"TAG_0_tag_w_addr", false,-1, 4,0);
    tracep->declQuad(c+1916,"TAG_0_tag_w_data", false,-1, 52,0);
    tracep->declQuad(c+3299,"TAG_0_MPORT_1_data", false,-1, 52,0);
    tracep->declBus(c+2716,"TAG_0_MPORT_1_addr", false,-1, 4,0);
    tracep->declBit(c+2717,"TAG_0_MPORT_1_mask", false,-1);
    tracep->declBit(c+1898,"TAG_0_MPORT_1_en", false,-1);
    tracep->declBit(c+3297,"TAG_0_tag_w_en_pipe_0", false,-1);
    tracep->declBus(c+3298,"TAG_0_tag_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+3301+i*2,"TAG_1", true,(i+0), 52,0);
    }
    tracep->declBit(c+3365,"TAG_1_tag_w_en", false,-1);
    tracep->declBus(c+3366,"TAG_1_tag_w_addr", false,-1, 4,0);
    tracep->declQuad(c+1918,"TAG_1_tag_w_data", false,-1, 52,0);
    tracep->declQuad(c+3299,"TAG_1_MPORT_1_data", false,-1, 52,0);
    tracep->declBus(c+2716,"TAG_1_MPORT_1_addr", false,-1, 4,0);
    tracep->declBit(c+3232,"TAG_1_MPORT_1_mask", false,-1);
    tracep->declBit(c+1898,"TAG_1_MPORT_1_en", false,-1);
    tracep->declBit(c+3365,"TAG_1_tag_w_en_pipe_0", false,-1);
    tracep->declBus(c+3366,"TAG_1_tag_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+3367+i*1,"data_valid_0", true,(i+0));
    }
    tracep->declBit(c+3399,"data_valid_0_valid_w_en", false,-1);
    tracep->declBus(c+3400,"data_valid_0_valid_w_addr", false,-1, 4,0);
    tracep->declBit(c+1920,"data_valid_0_valid_w_data", false,-1);
    tracep->declBit(c+3514,"data_valid_0_MPORT_2_data", false,-1);
    tracep->declBus(c+2716,"data_valid_0_MPORT_2_addr", false,-1, 4,0);
    tracep->declBit(c+2717,"data_valid_0_MPORT_2_mask", false,-1);
    tracep->declBit(c+1898,"data_valid_0_MPORT_2_en", false,-1);
    tracep->declBit(c+3399,"data_valid_0_valid_w_en_pipe_0", false,-1);
    tracep->declBus(c+3400,"data_valid_0_valid_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+3401+i*1,"data_valid_1", true,(i+0));
    }
    tracep->declBit(c+3433,"data_valid_1_valid_w_en", false,-1);
    tracep->declBus(c+3434,"data_valid_1_valid_w_addr", false,-1, 4,0);
    tracep->declBit(c+1921,"data_valid_1_valid_w_data", false,-1);
    tracep->declBit(c+3514,"data_valid_1_MPORT_2_data", false,-1);
    tracep->declBus(c+2716,"data_valid_1_MPORT_2_addr", false,-1, 4,0);
    tracep->declBit(c+3232,"data_valid_1_MPORT_2_mask", false,-1);
    tracep->declBit(c+1898,"data_valid_1_MPORT_2_en", false,-1);
    tracep->declBit(c+3433,"data_valid_1_valid_w_en_pipe_0", false,-1);
    tracep->declBus(c+3434,"data_valid_1_valid_w_addr_pipe_0", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Scanf ");
    tracep->declBit(c+1958,"io_in_valid", false,-1);
    tracep->declQuad(c+1916,"io_in_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+1918,"io_in_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+1920,"io_in_bits_meat_valid_0", false,-1);
    tracep->declBit(c+1921,"io_in_bits_meat_valid_1", false,-1);
    tracep->declArray(c+1922,"io_in_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+1938,"io_in_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+1954,"io_in_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBus(c+1956,"io_in_bits_ctrl_data_index", false,-1, 4,0);
    tracep->declBit(c+1959,"io_out_bits_hit", false,-1);
    tracep->declArray(c+1960,"io_out_bits_data", false,-1, 511,0);
    tracep->declBus(c+1956,"io_out_bits_meta_ctrl_data_index", false,-1, 4,0);
    tracep->declBit(c+1976,"io_out_bits_hit_way_0", false,-1);
    tracep->declBit(c+1977,"io_out_bits_hit_way_1", false,-1);
    tracep->declQuad(c+1916,"io_out_bits_tag_0", false,-1, 52,0);
    tracep->declQuad(c+1918,"io_out_bits_tag_1", false,-1, 52,0);
    tracep->declBit(c+3435,"hit_way_0_result", false,-1);
    tracep->declBit(c+3436,"hit_way_1_result", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("birdge ");
    tracep->declBit(c+3509,"clock", false,-1);
    tracep->declBit(c+3510,"reset", false,-1);
    tracep->declBit(c+1883,"io_in_addr_req_valid", false,-1);
    tracep->declQuad(c+212,"io_in_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+214,"io_in_addr_req_bits_ce", false,-1);
    tracep->declBit(c+215,"io_in_addr_req_bits_we", false,-1);
    tracep->declBit(c+1884,"io_in_rdata_rep_ready", false,-1);
    tracep->declBit(c+1885,"io_in_rdata_rep_valid", false,-1);
    tracep->declQuad(c+3480,"io_in_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+1886,"io_in_wdata_req_valid", false,-1);
    tracep->declQuad(c+217,"io_in_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+219,"io_in_wdata_req_bits_wmask", false,-1, 7,0);
    tracep->declBit(c+1887,"io_in_wdata_rep", false,-1);
    tracep->declBit(c+1888,"io_out_raddr_req_ready", false,-1);
    tracep->declBit(c+1889,"io_out_raddr_req_valid", false,-1);
    tracep->declQuad(c+212,"io_out_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+1890,"io_out_waddr_req_ready", false,-1);
    tracep->declBit(c+1891,"io_out_waddr_req_valid", false,-1);
    tracep->declQuad(c+212,"io_out_waddr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+1884,"io_out_rdata_rep_ready", false,-1);
    tracep->declBit(c+1885,"io_out_rdata_rep_valid", false,-1);
    tracep->declQuad(c+3480,"io_out_rdata_rep_bits_data", false,-1, 63,0);
    tracep->declBit(c+242,"io_out_rdata_rep_bits_last", false,-1);
    tracep->declBit(c+1892,"io_out_wdata_req_ready", false,-1);
    tracep->declBit(c+1886,"io_out_wdata_req_valid", false,-1);
    tracep->declQuad(c+217,"io_out_wdata_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+219,"io_out_wdata_req_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+1893,"io_out_wdata_req_bits_last", false,-1);
    tracep->declBit(c+1894,"io_out_wb_ready", false,-1);
    tracep->declBit(c+1887,"io_out_wb_valid", false,-1);
    tracep->declBus(c+3547,"io_out_wb_bits_breap", false,-1, 1,0);
    tracep->declBus(c+3437,"read_state", false,-1, 1,0);
    tracep->declBus(c+3438,"write_state", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("WB ");
    tracep->declBit(c+221,"io_in_valid", false,-1);
    tracep->declBit(c+222,"io_in_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+223,"io_in_bits_ctrl_signal_rfWen", false,-1);
    tracep->declQuad(c+224,"io_in_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+226,"io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+227,"io_in_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBit(c+229,"io_in_bits_ctrl_flow_skip", false,-1);
    tracep->declBus(c+186,"io_in_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declQuad(c+230,"io_in_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declBit(c+3514,"io_out_ready", false,-1);
    tracep->declBit(c+221,"io_out_valid", false,-1);
    tracep->declBit(c+232,"io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declQuad(c+224,"io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+226,"io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+227,"io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBit(c+229,"io_out_bits_ctrl_flow_skip", false,-1);
    tracep->declBus(c+186,"io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+187,"io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+230,"io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("bypass ");
    tracep->declBus(c+30,"io_EX_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+42,"io_EX_rf_rfWen", false,-1);
    tracep->declQuad(c+3474,"io_EX_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+198,"io_MEM_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+210,"io_MEM_rf_rfWen", false,-1);
    tracep->declQuad(c+3476,"io_MEM_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+186,"io_WB_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+187,"io_WB_rf_rfWen", false,-1);
    tracep->declQuad(c+230,"io_WB_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+233,"io_Reg1", false,-1, 63,0);
    tracep->declBus(c+14,"io_reg_index1", false,-1, 4,0);
    tracep->declQuad(c+235,"io_Reg2", false,-1, 63,0);
    tracep->declBus(c+15,"io_reg_index2", false,-1, 4,0);
    tracep->declQuad(c+3443,"io_Bypass_REG1", false,-1, 63,0);
    tracep->declQuad(c+3445,"io_Bypass_REG2", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_bypass ");
    tracep->declBus(c+198,"io_MEM_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+210,"io_MEM_rf_rfWen", false,-1);
    tracep->declQuad(c+3476,"io_MEM_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+31,"io_Reg1", false,-1, 63,0);
    tracep->declBus(c+26,"io_reg_index1", false,-1, 4,0);
    tracep->declQuad(c+33,"io_Reg2", false,-1, 63,0);
    tracep->declBus(c+27,"io_reg_index2", false,-1, 4,0);
    tracep->declQuad(c+3470,"io_Bypass_REG1", false,-1, 63,0);
    tracep->declQuad(c+3472,"io_Bypass_REG2", false,-1, 63,0);
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
    VlWide<16>/*511:0*/ __Vtemp_h48a7178e__0;
    VlWide<16>/*511:0*/ __Vtemp_h4453b49e__0;
    VlWide<16>/*511:0*/ __Vtemp_hc2882e76__0;
    VlWide<4>/*127:0*/ __Vtemp_h84c74001__0;
    VlWide<4>/*127:0*/ __Vtemp_h8248920c__0;
    VlWide<4>/*127:0*/ __Vtemp_h14069084__0;
    VlWide<4>/*127:0*/ __Vtemp_hf92011cd__0;
    VlWide<4>/*127:0*/ __Vtemp_h6acab13b__0;
    // Body
    bufp->fullBit(oldp+1,(vlSelf->CoreTop__DOT__EX_io_branchIO_is_jump));
    bufp->fullBit(oldp+2,(vlSelf->CoreTop__DOT__EX_io_in_ready));
    bufp->fullQData(oldp+3,(vlSelf->CoreTop__DOT__IF__DOT__temp),64);
    bufp->fullQData(oldp+5,((((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                              & (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit))
                              ? vlSelf->CoreTop__DOT__ICACHE__DOT__hit_data
                              : vlSelf->CoreTop__DOT__ICACHE__DOT__mem_data)),64);
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
    bufp->fullCData(oldp+14,((0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+15,((0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                       >> 0x14U))),5);
    bufp->fullBit(oldp+16,(((IData)(vlSelf->CoreTop__DOT__valid) 
                            & (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_3))));
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
    bufp->fullBit(oldp+21,(vlSelf->CoreTop__DOT__valid_1));
    bufp->fullCData(oldp+22,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src1Type),3);
    bufp->fullCData(oldp+23,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src2Type),3);
    bufp->fullCData(oldp+24,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType),3);
    bufp->fullBit(oldp+25,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_inst_valid));
    bufp->fullCData(oldp+26,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfSrc1),5);
    bufp->fullCData(oldp+27,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfSrc2),5);
    bufp->fullBit(oldp+28,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfWen));
    bufp->fullCData(oldp+29,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype),7);
    bufp->fullCData(oldp+30,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest),5);
    bufp->fullQData(oldp+31,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_src1),64);
    bufp->fullQData(oldp+33,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_src2),64);
    bufp->fullQData(oldp+35,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm),64);
    bufp->fullQData(oldp+37,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC),64);
    bufp->fullIData(oldp+39,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_inst),32);
    bufp->fullBit(oldp+40,((1U & (~ (IData)(vlSelf->CoreTop__DOT__MEM__DOT___io_out_valid_T_6)))));
    bufp->fullBit(oldp+41,(vlSelf->CoreTop__DOT__EX_io_out_valid));
    bufp->fullBit(oldp+42,(vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfWen));
    bufp->fullBit(oldp+43,(((0x42U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                            & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_inst_valid))));
    bufp->fullBit(oldp+44,(vlSelf->CoreTop__DOT__DIP_io_is_break_REG_1));
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
    bufp->fullBit(oldp+115,(vlSelf->CoreTop__DOT__DIP_io_is_skip_REG));
    bufp->fullQData(oldp+116,(vlSelf->CoreTop__DOT__rf[0]),64);
    bufp->fullQData(oldp+118,(vlSelf->CoreTop__DOT__rf[1]),64);
    bufp->fullQData(oldp+120,(vlSelf->CoreTop__DOT__rf[2]),64);
    bufp->fullQData(oldp+122,(vlSelf->CoreTop__DOT__rf[3]),64);
    bufp->fullQData(oldp+124,(vlSelf->CoreTop__DOT__rf[4]),64);
    bufp->fullQData(oldp+126,(vlSelf->CoreTop__DOT__rf[5]),64);
    bufp->fullQData(oldp+128,(vlSelf->CoreTop__DOT__rf[6]),64);
    bufp->fullQData(oldp+130,(vlSelf->CoreTop__DOT__rf[7]),64);
    bufp->fullQData(oldp+132,(vlSelf->CoreTop__DOT__rf[8]),64);
    bufp->fullQData(oldp+134,(vlSelf->CoreTop__DOT__rf[9]),64);
    bufp->fullQData(oldp+136,(vlSelf->CoreTop__DOT__rf[10]),64);
    bufp->fullQData(oldp+138,(vlSelf->CoreTop__DOT__rf[11]),64);
    bufp->fullQData(oldp+140,(vlSelf->CoreTop__DOT__rf[12]),64);
    bufp->fullQData(oldp+142,(vlSelf->CoreTop__DOT__rf[13]),64);
    bufp->fullQData(oldp+144,(vlSelf->CoreTop__DOT__rf[14]),64);
    bufp->fullQData(oldp+146,(vlSelf->CoreTop__DOT__rf[15]),64);
    bufp->fullQData(oldp+148,(vlSelf->CoreTop__DOT__rf[16]),64);
    bufp->fullQData(oldp+150,(vlSelf->CoreTop__DOT__rf[17]),64);
    bufp->fullQData(oldp+152,(vlSelf->CoreTop__DOT__rf[18]),64);
    bufp->fullQData(oldp+154,(vlSelf->CoreTop__DOT__rf[19]),64);
    bufp->fullQData(oldp+156,(vlSelf->CoreTop__DOT__rf[20]),64);
    bufp->fullQData(oldp+158,(vlSelf->CoreTop__DOT__rf[21]),64);
    bufp->fullQData(oldp+160,(vlSelf->CoreTop__DOT__rf[22]),64);
    bufp->fullQData(oldp+162,(vlSelf->CoreTop__DOT__rf[23]),64);
    bufp->fullQData(oldp+164,(vlSelf->CoreTop__DOT__rf[24]),64);
    bufp->fullQData(oldp+166,(vlSelf->CoreTop__DOT__rf[25]),64);
    bufp->fullQData(oldp+168,(vlSelf->CoreTop__DOT__rf[26]),64);
    bufp->fullQData(oldp+170,(vlSelf->CoreTop__DOT__rf[27]),64);
    bufp->fullQData(oldp+172,(vlSelf->CoreTop__DOT__rf[28]),64);
    bufp->fullQData(oldp+174,(vlSelf->CoreTop__DOT__rf[29]),64);
    bufp->fullQData(oldp+176,(vlSelf->CoreTop__DOT__rf[30]),64);
    bufp->fullQData(oldp+178,(vlSelf->CoreTop__DOT__rf[31]),64);
    bufp->fullQData(oldp+180,(vlSelf->CoreTop__DOT__rf
                              [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                         >> 0xfU))]),64);
    bufp->fullQData(oldp+182,(vlSelf->CoreTop__DOT__rf
                              [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                         >> 0x14U))]),64);
    bufp->fullQData(oldp+184,(((0U == (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest))
                                ? 0ULL : vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfData)),64);
    bufp->fullCData(oldp+186,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest),5);
    bufp->fullBit(oldp+187,(vlSelf->CoreTop__DOT__WB_io_out_bits_ctrl_rf_rfWen));
    bufp->fullBit(oldp+188,(vlSelf->CoreTop__DOT__valid_2));
    bufp->fullCData(oldp+189,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_fuType),3);
    bufp->fullBit(oldp+190,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_inst_valid));
    bufp->fullBit(oldp+191,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_rfWen));
    bufp->fullCData(oldp+192,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype),7);
    bufp->fullQData(oldp+193,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_PC),64);
    bufp->fullIData(oldp+195,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_inst),32);
    bufp->fullQData(oldp+196,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_Dnpc),64);
    bufp->fullCData(oldp+198,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest),5);
    bufp->fullQData(oldp+199,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfData),64);
    bufp->fullQData(oldp+201,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src1),64);
    bufp->fullQData(oldp+203,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2),64);
    bufp->fullQData(oldp+205,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_Imm),64);
    bufp->fullBit(oldp+207,(vlSelf->CoreTop__DOT__MEM_io_out_valid));
    bufp->fullBit(oldp+208,(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_signal_inst_valid));
    bufp->fullBit(oldp+209,((((0xa0000048ULL == vlSelf->CoreTop__DOT__MEM__DOT__addr_temp) 
                              | (0xa00003f8ULL == vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)) 
                             | ((0xa0000000ULL <= vlSelf->CoreTop__DOT__MEM__DOT__addr_temp) 
                                & (0xa1200000ULL >= vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))));
    bufp->fullBit(oldp+210,(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfWen));
    bufp->fullBit(oldp+211,(vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_valid));
    bufp->fullQData(oldp+212,(vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr),64);
    bufp->fullBit(oldp+214,(vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_ce));
    bufp->fullBit(oldp+215,(vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_we));
    bufp->fullBit(oldp+216,(vlSelf->CoreTop__DOT__MMIO_io_in_rdata_rep_valid));
    bufp->fullQData(oldp+217,(vlSelf->CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wdata),64);
    bufp->fullCData(oldp+219,(vlSelf->CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wmask),8);
    bufp->fullBit(oldp+220,(vlSelf->CoreTop__DOT__MMIO_io_in_wdata_rep));
    bufp->fullBit(oldp+221,(vlSelf->CoreTop__DOT__valid_3));
    bufp->fullBit(oldp+222,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_inst_valid));
    bufp->fullBit(oldp+223,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_rfWen));
    bufp->fullQData(oldp+224,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_PC),64);
    bufp->fullIData(oldp+226,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_inst),32);
    bufp->fullQData(oldp+227,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_Dnpc),64);
    bufp->fullBit(oldp+229,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_skip));
    bufp->fullQData(oldp+230,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfData),64);
    bufp->fullBit(oldp+232,(((IData)(vlSelf->CoreTop__DOT__valid_3) 
                             & (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_inst_valid))));
    bufp->fullQData(oldp+233,(((0U == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                >> 0xfU)))
                                ? 0ULL : vlSelf->CoreTop__DOT__rf
                               [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                          >> 0xfU))])),64);
    bufp->fullQData(oldp+235,(((0U == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                >> 0x14U)))
                                ? 0ULL : vlSelf->CoreTop__DOT__rf
                               [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                          >> 0x14U))])),64);
    bufp->fullBit(oldp+237,(((~ (((IData)(vlSelf->CoreTop__DOT__MMIO_io_out_raddr_req_valid) 
                                  | (IData)(vlSelf->CoreTop__DOT__MMIO_io_out_waddr_req_valid)) 
                                 & (~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)))) 
                             & (((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state)) 
                                 & (~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)))
                                 ? (0U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state))
                                 : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state) 
                                    & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r) 
                                       & (0U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state))))))));
    bufp->fullBit(oldp+238,((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state))));
    bufp->fullQData(oldp+239,(vlSelf->CoreTop__DOT__ICACHE_io_out_raddr_req_bits_addr),64);
    bufp->fullBit(oldp+241,(vlSelf->CoreTop__DOT__ARBITER_io_in2_rdata_rep_valid));
    bufp->fullBit(oldp+242,(vlSelf->CoreTop__DOT__MMEM_rd_last));
    bufp->fullBit(oldp+243,(((~ (((IData)(vlSelf->CoreTop__DOT__MMIO_io_out_raddr_req_valid) 
                                  | (IData)(vlSelf->CoreTop__DOT__MMIO_io_out_waddr_req_valid)) 
                                 & (~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)))) 
                             & (((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state)) 
                                 & (~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)))
                                 ? (1U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_state))
                                 : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state) 
                                    & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r) 
                                       & (1U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_state))))))));
    bufp->fullBit(oldp+244,(((((IData)(vlSelf->CoreTop__DOT__MMIO_io_out_raddr_req_valid) 
                               | (IData)(vlSelf->CoreTop__DOT__MMIO_io_out_waddr_req_valid)) 
                              & (~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)))
                              ? (IData)(vlSelf->CoreTop__DOT__MMIO_io_out_raddr_req_valid)
                              : (((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state)) 
                                  & (~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)))
                                  ? (1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state))
                                  : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                                      ? ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)
                                          ? (1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state))
                                          : (IData)(vlSelf->CoreTop__DOT__MMIO_io_out_raddr_req_valid))
                                      : (IData)(vlSelf->CoreTop__DOT__MMIO_io_out_raddr_req_valid))))));
    bufp->fullBit(oldp+245,((0U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state))));
    bufp->fullQData(oldp+246,(((((IData)(vlSelf->CoreTop__DOT__MMIO_io_out_raddr_req_valid) 
                                 | (IData)(vlSelf->CoreTop__DOT__MMIO_io_out_waddr_req_valid)) 
                                & (~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)))
                                ? vlSelf->CoreTop__DOT__MMIO_io_out_raddr_req_bits_addr
                                : (((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state)) 
                                    & (~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)))
                                    ? vlSelf->CoreTop__DOT__ICACHE_io_out_raddr_req_bits_addr
                                    : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                                        ? ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)
                                            ? vlSelf->CoreTop__DOT__ICACHE_io_out_raddr_req_bits_addr
                                            : vlSelf->CoreTop__DOT__MMIO_io_out_raddr_req_bits_addr)
                                        : vlSelf->CoreTop__DOT__ICACHE_io_out_raddr_req_bits_addr)))),64);
    bufp->fullCData(oldp+248,(((((IData)(vlSelf->CoreTop__DOT__MMIO_io_out_raddr_req_valid) 
                                 | (IData)(vlSelf->CoreTop__DOT__MMIO_io_out_waddr_req_valid)) 
                                & (~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)))
                                ? (IData)(vlSelf->CoreTop__DOT__MMIO_io_out_raddr_req_bits_len)
                                : (((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state)) 
                                    & (~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)))
                                    ? 7U : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                                             ? ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)
                                                 ? 7U
                                                 : (IData)(vlSelf->CoreTop__DOT__MMIO_io_out_raddr_req_bits_len))
                                             : 7U)))),8);
    bufp->fullBit(oldp+249,((2U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state))));
    bufp->fullBit(oldp+250,(vlSelf->CoreTop__DOT__ARBITER_io_out_rdata_rep_ready));
    bufp->fullBit(oldp+251,(((((IData)(vlSelf->CoreTop__DOT__MMIO_io_out_raddr_req_valid) 
                               | (IData)(vlSelf->CoreTop__DOT__MMIO_io_out_waddr_req_valid)) 
                              & (~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)))
                              ? (IData)(vlSelf->CoreTop__DOT__MMIO_io_out_waddr_req_valid)
                              : ((~ ((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state)) 
                                     & (~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)))) 
                                 & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                                     ? ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)) 
                                        & (IData)(vlSelf->CoreTop__DOT__MMIO_io_out_waddr_req_valid))
                                     : (IData)(vlSelf->CoreTop__DOT__MMIO_io_out_waddr_req_valid))))));
    bufp->fullBit(oldp+252,((0U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_state))));
    bufp->fullQData(oldp+253,(((((IData)(vlSelf->CoreTop__DOT__MMIO_io_out_raddr_req_valid) 
                                 | (IData)(vlSelf->CoreTop__DOT__MMIO_io_out_waddr_req_valid)) 
                                & (~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)))
                                ? vlSelf->CoreTop__DOT__MMIO_io_out_waddr_req_bits_addr
                                : (((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state)) 
                                    & (~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)))
                                    ? 0ULL : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                                               ? ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)
                                                   ? 0ULL
                                                   : vlSelf->CoreTop__DOT__MMIO_io_out_waddr_req_bits_addr)
                                               : 0ULL)))),64);
    bufp->fullCData(oldp+255,(((((IData)(vlSelf->CoreTop__DOT__MMIO_io_out_raddr_req_valid) 
                                 | (IData)(vlSelf->CoreTop__DOT__MMIO_io_out_waddr_req_valid)) 
                                & (~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)))
                                ? ((((IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_valid) 
                                     & (0xa0000000ULL 
                                        <= vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr)) 
                                    & (0xa2000000ULL 
                                       >= vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr))
                                    ? 0U : 7U) : ((
                                                   (1U 
                                                    == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state)) 
                                                   & (~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)))
                                                   ? 7U
                                                   : 
                                                  ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                                                    ? 
                                                   ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)
                                                     ? 7U
                                                     : 
                                                    ((((IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_valid) 
                                                       & (0xa0000000ULL 
                                                          <= vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr)) 
                                                      & (0xa2000000ULL 
                                                         >= vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr))
                                                      ? 0U
                                                      : 7U))
                                                    : 7U)))),8);
    bufp->fullBit(oldp+256,(((((IData)(vlSelf->CoreTop__DOT__MMIO_io_out_raddr_req_valid) 
                               | (IData)(vlSelf->CoreTop__DOT__MMIO_io_out_waddr_req_valid)) 
                              & (~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)))
                              ? (IData)(vlSelf->CoreTop__DOT__MMIO_io_out_wdata_req_valid)
                              : ((~ ((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state)) 
                                     & (~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)))) 
                                 & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                                     ? ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)) 
                                        & (IData)(vlSelf->CoreTop__DOT__MMIO_io_out_wdata_req_valid))
                                     : (IData)(vlSelf->CoreTop__DOT__MMIO_io_out_wdata_req_valid))))));
    bufp->fullBit(oldp+257,(vlSelf->CoreTop__DOT__MMEM_wd_ready));
    bufp->fullQData(oldp+258,(((((IData)(vlSelf->CoreTop__DOT__MMIO_io_out_raddr_req_valid) 
                                 | (IData)(vlSelf->CoreTop__DOT__MMIO_io_out_waddr_req_valid)) 
                                & (~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)))
                                ? vlSelf->CoreTop__DOT__MMIO_io_out_wdata_req_bits_data
                                : (((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state)) 
                                    & (~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)))
                                    ? 0ULL : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                                               ? ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)
                                                   ? 0ULL
                                                   : vlSelf->CoreTop__DOT__MMIO_io_out_wdata_req_bits_data)
                                               : 0ULL)))),64);
    bufp->fullCData(oldp+260,(((((IData)(vlSelf->CoreTop__DOT__MMIO_io_out_raddr_req_valid) 
                                 | (IData)(vlSelf->CoreTop__DOT__MMIO_io_out_waddr_req_valid)) 
                                & (~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)))
                                ? (IData)(vlSelf->CoreTop__DOT__MMIO_io_out_wdata_req_bits_wstrb)
                                : (((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state)) 
                                    & (~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)))
                                    ? 0U : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                                             ? ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)
                                                 ? 0U
                                                 : (IData)(vlSelf->CoreTop__DOT__MMIO_io_out_wdata_req_bits_wstrb))
                                             : 0U)))),8);
    bufp->fullBit(oldp+261,(vlSelf->CoreTop__DOT__ARBITER_io_out_wdata_req_bits_last));
    bufp->fullBit(oldp+262,((1U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_state))));
    bufp->fullBit(oldp+263,(((((IData)(vlSelf->CoreTop__DOT__MMIO_io_out_raddr_req_valid) 
                               | (IData)(vlSelf->CoreTop__DOT__MMIO_io_out_waddr_req_valid)) 
                              & (~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)))
                              ? (IData)(vlSelf->CoreTop__DOT__MMIO_io_out_wb_ready)
                              : (((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state)) 
                                  & (~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state))) 
                                 | ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                                     ? ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r) 
                                        | (IData)(vlSelf->CoreTop__DOT__MMIO_io_out_wb_ready))
                                     : (IData)(vlSelf->CoreTop__DOT__MMIO_io_out_wb_ready))))));
    bufp->fullBit(oldp+264,(vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_ready));
    bufp->fullBit(oldp+265,(vlSelf->CoreTop__DOT__MMIO_io_out_raddr_req_valid));
    bufp->fullQData(oldp+266,(vlSelf->CoreTop__DOT__MMIO_io_out_raddr_req_bits_addr),64);
    bufp->fullCData(oldp+268,(vlSelf->CoreTop__DOT__MMIO_io_out_raddr_req_bits_len),8);
    bufp->fullBit(oldp+269,(vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_ready));
    bufp->fullBit(oldp+270,(vlSelf->CoreTop__DOT__MMIO_io_out_waddr_req_valid));
    bufp->fullQData(oldp+271,(vlSelf->CoreTop__DOT__MMIO_io_out_waddr_req_bits_addr),64);
    bufp->fullCData(oldp+273,(((((IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_valid) 
                                 & (0xa0000000ULL <= vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr)) 
                                & (0xa2000000ULL >= vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr))
                                ? 0U : 7U)),8);
    bufp->fullBit(oldp+274,(vlSelf->CoreTop__DOT__MMIO_io_out_rdata_rep_ready));
    bufp->fullBit(oldp+275,(vlSelf->CoreTop__DOT__ARBITER_io_in1_rdata_rep_valid));
    bufp->fullBit(oldp+276,(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_ready));
    bufp->fullBit(oldp+277,(vlSelf->CoreTop__DOT__MMIO_io_out_wdata_req_valid));
    bufp->fullQData(oldp+278,(vlSelf->CoreTop__DOT__MMIO_io_out_wdata_req_bits_data),64);
    bufp->fullCData(oldp+280,(vlSelf->CoreTop__DOT__MMIO_io_out_wdata_req_bits_wstrb),8);
    bufp->fullBit(oldp+281,(vlSelf->CoreTop__DOT__MMIO_io_out_wdata_req_bits_last));
    bufp->fullBit(oldp+282,(vlSelf->CoreTop__DOT__MMIO_io_out_wb_ready));
    bufp->fullBit(oldp+283,(vlSelf->CoreTop__DOT__ARBITER_io_in1_wb_valid));
    bufp->fullBit(oldp+284,(vlSelf->CoreTop__DOT__DIP_io_is_break_REG));
    bufp->fullBit(oldp+285,(vlSelf->CoreTop__DOT__ARBITER__DOT__state));
    bufp->fullBit(oldp+286,(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r));
    bufp->fullQData(oldp+287,(vlSelf->CoreTop__DOT__DIP__DOT__rf[0]),64);
    bufp->fullQData(oldp+289,(vlSelf->CoreTop__DOT__DIP__DOT__rf[1]),64);
    bufp->fullQData(oldp+291,(vlSelf->CoreTop__DOT__DIP__DOT__rf[2]),64);
    bufp->fullQData(oldp+293,(vlSelf->CoreTop__DOT__DIP__DOT__rf[3]),64);
    bufp->fullQData(oldp+295,(vlSelf->CoreTop__DOT__DIP__DOT__rf[4]),64);
    bufp->fullQData(oldp+297,(vlSelf->CoreTop__DOT__DIP__DOT__rf[5]),64);
    bufp->fullQData(oldp+299,(vlSelf->CoreTop__DOT__DIP__DOT__rf[6]),64);
    bufp->fullQData(oldp+301,(vlSelf->CoreTop__DOT__DIP__DOT__rf[7]),64);
    bufp->fullQData(oldp+303,(vlSelf->CoreTop__DOT__DIP__DOT__rf[8]),64);
    bufp->fullQData(oldp+305,(vlSelf->CoreTop__DOT__DIP__DOT__rf[9]),64);
    bufp->fullQData(oldp+307,(vlSelf->CoreTop__DOT__DIP__DOT__rf[10]),64);
    bufp->fullQData(oldp+309,(vlSelf->CoreTop__DOT__DIP__DOT__rf[11]),64);
    bufp->fullQData(oldp+311,(vlSelf->CoreTop__DOT__DIP__DOT__rf[12]),64);
    bufp->fullQData(oldp+313,(vlSelf->CoreTop__DOT__DIP__DOT__rf[13]),64);
    bufp->fullQData(oldp+315,(vlSelf->CoreTop__DOT__DIP__DOT__rf[14]),64);
    bufp->fullQData(oldp+317,(vlSelf->CoreTop__DOT__DIP__DOT__rf[15]),64);
    bufp->fullQData(oldp+319,(vlSelf->CoreTop__DOT__DIP__DOT__rf[16]),64);
    bufp->fullQData(oldp+321,(vlSelf->CoreTop__DOT__DIP__DOT__rf[17]),64);
    bufp->fullQData(oldp+323,(vlSelf->CoreTop__DOT__DIP__DOT__rf[18]),64);
    bufp->fullQData(oldp+325,(vlSelf->CoreTop__DOT__DIP__DOT__rf[19]),64);
    bufp->fullQData(oldp+327,(vlSelf->CoreTop__DOT__DIP__DOT__rf[20]),64);
    bufp->fullQData(oldp+329,(vlSelf->CoreTop__DOT__DIP__DOT__rf[21]),64);
    bufp->fullQData(oldp+331,(vlSelf->CoreTop__DOT__DIP__DOT__rf[22]),64);
    bufp->fullQData(oldp+333,(vlSelf->CoreTop__DOT__DIP__DOT__rf[23]),64);
    bufp->fullQData(oldp+335,(vlSelf->CoreTop__DOT__DIP__DOT__rf[24]),64);
    bufp->fullQData(oldp+337,(vlSelf->CoreTop__DOT__DIP__DOT__rf[25]),64);
    bufp->fullQData(oldp+339,(vlSelf->CoreTop__DOT__DIP__DOT__rf[26]),64);
    bufp->fullQData(oldp+341,(vlSelf->CoreTop__DOT__DIP__DOT__rf[27]),64);
    bufp->fullQData(oldp+343,(vlSelf->CoreTop__DOT__DIP__DOT__rf[28]),64);
    bufp->fullQData(oldp+345,(vlSelf->CoreTop__DOT__DIP__DOT__rf[29]),64);
    bufp->fullQData(oldp+347,(vlSelf->CoreTop__DOT__DIP__DOT__rf[30]),64);
    bufp->fullQData(oldp+349,(vlSelf->CoreTop__DOT__DIP__DOT__rf[31]),64);
    bufp->fullIData(oldp+351,(vlSelf->CoreTop__DOT__DIP__DOT__IN[0]),32);
    bufp->fullIData(oldp+352,(vlSelf->CoreTop__DOT__DIP__DOT__IN[1]),32);
    bufp->fullIData(oldp+353,(vlSelf->CoreTop__DOT__DIP__DOT__IN[2]),32);
    bufp->fullIData(oldp+354,(vlSelf->CoreTop__DOT__DIP__DOT__IN[3]),32);
    bufp->fullIData(oldp+355,(vlSelf->CoreTop__DOT__DIP__DOT__IN[4]),32);
    bufp->fullIData(oldp+356,(vlSelf->CoreTop__DOT__DIP__DOT__IN[5]),32);
    bufp->fullIData(oldp+357,(vlSelf->CoreTop__DOT__DIP__DOT__IN[6]),32);
    bufp->fullQData(oldp+358,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mepc_REG_1),64);
    bufp->fullQData(oldp+360,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mcause_REG_1),64);
    bufp->fullQData(oldp+362,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mstatus_REG_1),64);
    bufp->fullQData(oldp+364,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mtvec_REG_1),64);
    bufp->fullBit(oldp+366,(vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_valid));
    bufp->fullBit(oldp+367,((0x44U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count))));
    bufp->fullQData(oldp+368,((((QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[0U])))),64);
    bufp->fullBit(oldp+370,(((IData)(vlSelf->CoreTop__DOT__EX__DOT__is_div) 
                             & (2U != (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state)))));
    bufp->fullBit(oldp+371,(vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_flow_div_signed));
    bufp->fullBit(oldp+372,((2U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state))));
    bufp->fullBit(oldp+373,(vlSelf->CoreTop__DOT__EX__DOT__is_mul));
    bufp->fullBit(oldp+374,(vlSelf->CoreTop__DOT__EX__DOT__is_div));
    bufp->fullBit(oldp+375,(vlSelf->CoreTop__DOT__EX__DOT__is_divw));
    bufp->fullQData(oldp+376,(vlSelf->CoreTop__DOT__EX__DOT__mepc),64);
    bufp->fullQData(oldp+378,(vlSelf->CoreTop__DOT__EX__DOT__mcause),64);
    bufp->fullQData(oldp+380,(vlSelf->CoreTop__DOT__EX__DOT__mstatus),64);
    bufp->fullQData(oldp+382,(vlSelf->CoreTop__DOT__EX__DOT__mtvec),64);
    bufp->fullQData(oldp+384,(vlSelf->CoreTop__DOT__EX__DOT__mie),64);
    bufp->fullQData(oldp+386,(vlSelf->CoreTop__DOT__EX__DOT__mip),64);
    bufp->fullBit(oldp+388,((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[0U] 
                             >> 0x1fU)));
    bufp->fullQData(oldp+389,(((3U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType))
                                ? (4ULL + vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC)
                                : 0ULL)),64);
    bufp->fullQData(oldp+391,(((0x6bU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
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
    bufp->fullQData(oldp+393,(vlSelf->CoreTop__DOT__EX__DOT__csr_data),64);
    bufp->fullQData(oldp+395,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mtvec_REG),64);
    bufp->fullQData(oldp+397,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mcause_REG),64);
    bufp->fullQData(oldp+399,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mepc_REG),64);
    bufp->fullQData(oldp+401,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mstatus_REG),64);
    bufp->fullQData(oldp+403,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[0]),64);
    bufp->fullQData(oldp+405,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[1]),64);
    bufp->fullQData(oldp+407,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[2]),64);
    bufp->fullQData(oldp+409,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[3]),64);
    bufp->fullQData(oldp+411,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[4]),64);
    bufp->fullQData(oldp+413,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[5]),64);
    bufp->fullWData(oldp+415,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend),128);
    bufp->fullQData(oldp+419,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divisor),64);
    bufp->fullQData(oldp+421,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S),64);
    bufp->fullCData(oldp+423,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state),2);
    bufp->fullCData(oldp+424,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__count),6);
    bufp->fullBit(oldp+425,((0x3fU == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__count))));
    bufp->fullBit(oldp+426,(((1U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state)) 
                             & (0x3fU == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__count)))));
    bufp->fullWData(oldp+427,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div),65);
    bufp->fullQData(oldp+430,((- vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S)),64);
    bufp->fullQData(oldp+432,((- (((QData)((IData)(
                                                   vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[3U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[2U]))))),64);
    bufp->fullCData(oldp+434,((7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U])),3);
    bufp->fullWData(oldp+435,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand),132);
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
    bufp->fullWData(oldp+440,(__Vtemp_h791e8ef8__0),132);
    bufp->fullBit(oldp+445,(((0U != (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U])) 
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
    bufp->fullWData(oldp+446,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier),66);
    bufp->fullWData(oldp+449,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p),132);
    bufp->fullCData(oldp+454,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count),7);
    bufp->fullWData(oldp+455,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__temp),132);
    bufp->fullBit(oldp+460,((1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__temp[4U] 
                                   >> 3U))));
    bufp->fullBit(oldp+461,(((IData)(vlSelf->CoreTop__DOT__EX_io_in_ready) 
                             & (0U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)))));
    bufp->fullQData(oldp+462,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data_io_write_bus_addr),64);
    bufp->fullBit(oldp+464,((3U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state))));
    bufp->fullCData(oldp+465,(((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r)
                                ? 2U : 1U)),2);
    bufp->fullWData(oldp+466,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data_io_write_bus_wdata),512);
    bufp->fullQData(oldp+482,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_tag_w_data),53);
    bufp->fullQData(oldp+484,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_data),53);
    bufp->fullBit(oldp+486,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0
                            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0]));
    bufp->fullBit(oldp+487,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1
                            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_addr_pipe_0]));
    __Vtemp_h48a7178e__0[0U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][0U];
    __Vtemp_h48a7178e__0[1U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][1U];
    __Vtemp_h48a7178e__0[2U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][2U];
    __Vtemp_h48a7178e__0[3U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][3U];
    __Vtemp_h48a7178e__0[4U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][4U];
    __Vtemp_h48a7178e__0[5U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][5U];
    __Vtemp_h48a7178e__0[6U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][6U];
    __Vtemp_h48a7178e__0[7U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][7U];
    __Vtemp_h48a7178e__0[8U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][8U];
    __Vtemp_h48a7178e__0[9U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][9U];
    __Vtemp_h48a7178e__0[0xaU] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][0xaU];
    __Vtemp_h48a7178e__0[0xbU] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][0xbU];
    __Vtemp_h48a7178e__0[0xcU] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][0xcU];
    __Vtemp_h48a7178e__0[0xdU] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][0xdU];
    __Vtemp_h48a7178e__0[0xeU] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][0xeU];
    __Vtemp_h48a7178e__0[0xfU] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][0xfU];
    bufp->fullWData(oldp+488,(__Vtemp_h48a7178e__0),512);
    __Vtemp_h4453b49e__0[0U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0U];
    __Vtemp_h4453b49e__0[1U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][1U];
    __Vtemp_h4453b49e__0[2U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][2U];
    __Vtemp_h4453b49e__0[3U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][3U];
    __Vtemp_h4453b49e__0[4U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][4U];
    __Vtemp_h4453b49e__0[5U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][5U];
    __Vtemp_h4453b49e__0[6U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][6U];
    __Vtemp_h4453b49e__0[7U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][7U];
    __Vtemp_h4453b49e__0[8U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][8U];
    __Vtemp_h4453b49e__0[9U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][9U];
    __Vtemp_h4453b49e__0[0xaU] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0xaU];
    __Vtemp_h4453b49e__0[0xbU] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0xbU];
    __Vtemp_h4453b49e__0[0xcU] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0xcU];
    __Vtemp_h4453b49e__0[0xdU] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0xdU];
    __Vtemp_h4453b49e__0[0xeU] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0xeU];
    __Vtemp_h4453b49e__0[0xfU] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0xfU];
    bufp->fullWData(oldp+504,(__Vtemp_h4453b49e__0),512);
    bufp->fullQData(oldp+520,((vlSelf->CoreTop__DOT__IF__DOT__temp 
                               >> 0xbU)),53);
    bufp->fullCData(oldp+522,((0x1fU & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                >> 6U)))),5);
    bufp->fullCData(oldp+523,((0x3fU & (IData)(vlSelf->CoreTop__DOT__IF__DOT__temp))),6);
    bufp->fullBit(oldp+524,(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_in_valid_REG));
    bufp->fullBit(oldp+525,(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit));
    bufp->fullWData(oldp+526,(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data),512);
    bufp->fullBit(oldp+542,(((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT___hit_way_0_T) 
                             & ((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                 >> 0xbU) == vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_tag_w_data))));
    bufp->fullBit(oldp+543,(((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT___hit_way_1_T) 
                             & ((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                 >> 0xbU) == vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_data))));
    bufp->fullBit(oldp+544,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[0]));
    bufp->fullBit(oldp+545,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[1]));
    bufp->fullBit(oldp+546,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[2]));
    bufp->fullBit(oldp+547,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[3]));
    bufp->fullBit(oldp+548,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[4]));
    bufp->fullBit(oldp+549,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[5]));
    bufp->fullBit(oldp+550,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[6]));
    bufp->fullBit(oldp+551,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[7]));
    bufp->fullBit(oldp+552,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[8]));
    bufp->fullBit(oldp+553,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[9]));
    bufp->fullBit(oldp+554,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[10]));
    bufp->fullBit(oldp+555,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[11]));
    bufp->fullBit(oldp+556,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[12]));
    bufp->fullBit(oldp+557,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[13]));
    bufp->fullBit(oldp+558,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[14]));
    bufp->fullBit(oldp+559,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[15]));
    bufp->fullBit(oldp+560,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[16]));
    bufp->fullBit(oldp+561,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[17]));
    bufp->fullBit(oldp+562,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[18]));
    bufp->fullBit(oldp+563,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[19]));
    bufp->fullBit(oldp+564,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[20]));
    bufp->fullBit(oldp+565,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[21]));
    bufp->fullBit(oldp+566,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[22]));
    bufp->fullBit(oldp+567,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[23]));
    bufp->fullBit(oldp+568,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[24]));
    bufp->fullBit(oldp+569,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[25]));
    bufp->fullBit(oldp+570,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[26]));
    bufp->fullBit(oldp+571,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[27]));
    bufp->fullBit(oldp+572,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[28]));
    bufp->fullBit(oldp+573,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[29]));
    bufp->fullBit(oldp+574,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[30]));
    bufp->fullBit(oldp+575,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[31]));
    bufp->fullBit(oldp+576,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_lru_w_MPORT_en_pipe_0));
    bufp->fullCData(oldp+577,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_lru_w_MPORT_addr_pipe_0),5);
    bufp->fullBit(oldp+578,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru
                            [vlSelf->CoreTop__DOT__ICACHE__DOT__lru_lru_w_MPORT_addr_pipe_0]));
    bufp->fullBit(oldp+579,(((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                             & ((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                & ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit) 
                                   & ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT___hit_way_0_T) 
                                      & ((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                          >> 0xbU) 
                                         == vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_tag_w_data)))))));
    bufp->fullBit(oldp+580,(((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                             & ((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                & ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit) 
                                   & ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT___hit_way_1_T) 
                                      & ((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                          >> 0xbU) 
                                         == vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_data)))))));
    bufp->fullBit(oldp+581,(((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                             & ((1U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                & ((2U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                   & ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT___T_5) 
                                      & (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r)))))));
    bufp->fullBit(oldp+582,(((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                             & ((1U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                & ((2U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                   & ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT___T_5) 
                                      & (~ (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r))))))));
    bufp->fullCData(oldp+583,(vlSelf->CoreTop__DOT__ICACHE__DOT__state),3);
    bufp->fullCData(oldp+584,(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state),2);
    bufp->fullWData(oldp+585,(vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg),512);
    bufp->fullQData(oldp+601,(vlSelf->CoreTop__DOT__ICACHE__DOT__mem_addr_reg),64);
    bufp->fullBit(oldp+603,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r));
    bufp->fullQData(oldp+604,(vlSelf->CoreTop__DOT__ICACHE__DOT__hit_data),64);
    bufp->fullQData(oldp+606,(vlSelf->CoreTop__DOT__ICACHE__DOT__mem_data),64);
    bufp->fullWData(oldp+608,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[0]),512);
    bufp->fullWData(oldp+624,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[1]),512);
    bufp->fullWData(oldp+640,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[2]),512);
    bufp->fullWData(oldp+656,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[3]),512);
    bufp->fullWData(oldp+672,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[4]),512);
    bufp->fullWData(oldp+688,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[5]),512);
    bufp->fullWData(oldp+704,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[6]),512);
    bufp->fullWData(oldp+720,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[7]),512);
    bufp->fullWData(oldp+736,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[8]),512);
    bufp->fullWData(oldp+752,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[9]),512);
    bufp->fullWData(oldp+768,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[10]),512);
    bufp->fullWData(oldp+784,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[11]),512);
    bufp->fullWData(oldp+800,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[12]),512);
    bufp->fullWData(oldp+816,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[13]),512);
    bufp->fullWData(oldp+832,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[14]),512);
    bufp->fullWData(oldp+848,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[15]),512);
    bufp->fullWData(oldp+864,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[16]),512);
    bufp->fullWData(oldp+880,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[17]),512);
    bufp->fullWData(oldp+896,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[18]),512);
    bufp->fullWData(oldp+912,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[19]),512);
    bufp->fullWData(oldp+928,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[20]),512);
    bufp->fullWData(oldp+944,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[21]),512);
    bufp->fullWData(oldp+960,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[22]),512);
    bufp->fullWData(oldp+976,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[23]),512);
    bufp->fullWData(oldp+992,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[24]),512);
    bufp->fullWData(oldp+1008,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[25]),512);
    bufp->fullWData(oldp+1024,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[26]),512);
    bufp->fullWData(oldp+1040,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[27]),512);
    bufp->fullWData(oldp+1056,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[28]),512);
    bufp->fullWData(oldp+1072,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[29]),512);
    bufp->fullWData(oldp+1088,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[30]),512);
    bufp->fullWData(oldp+1104,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[31]),512);
    bufp->fullBit(oldp+1120,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_en_pipe_0));
    bufp->fullCData(oldp+1121,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0),5);
    bufp->fullCData(oldp+1122,((0x1fU & (IData)((vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data_io_write_bus_addr 
                                                 >> 6U)))),5);
    bufp->fullBit(oldp+1123,(((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r)
                               ? 0U : 1U)));
    bufp->fullWData(oldp+1124,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[0]),512);
    bufp->fullWData(oldp+1140,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[1]),512);
    bufp->fullWData(oldp+1156,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[2]),512);
    bufp->fullWData(oldp+1172,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[3]),512);
    bufp->fullWData(oldp+1188,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[4]),512);
    bufp->fullWData(oldp+1204,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[5]),512);
    bufp->fullWData(oldp+1220,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[6]),512);
    bufp->fullWData(oldp+1236,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[7]),512);
    bufp->fullWData(oldp+1252,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[8]),512);
    bufp->fullWData(oldp+1268,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[9]),512);
    bufp->fullWData(oldp+1284,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[10]),512);
    bufp->fullWData(oldp+1300,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[11]),512);
    bufp->fullWData(oldp+1316,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[12]),512);
    bufp->fullWData(oldp+1332,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[13]),512);
    bufp->fullWData(oldp+1348,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[14]),512);
    bufp->fullWData(oldp+1364,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[15]),512);
    bufp->fullWData(oldp+1380,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[16]),512);
    bufp->fullWData(oldp+1396,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[17]),512);
    bufp->fullWData(oldp+1412,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[18]),512);
    bufp->fullWData(oldp+1428,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[19]),512);
    bufp->fullWData(oldp+1444,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[20]),512);
    bufp->fullWData(oldp+1460,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[21]),512);
    bufp->fullWData(oldp+1476,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[22]),512);
    bufp->fullWData(oldp+1492,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[23]),512);
    bufp->fullWData(oldp+1508,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[24]),512);
    bufp->fullWData(oldp+1524,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[25]),512);
    bufp->fullWData(oldp+1540,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[26]),512);
    bufp->fullWData(oldp+1556,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[27]),512);
    bufp->fullWData(oldp+1572,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[28]),512);
    bufp->fullWData(oldp+1588,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[29]),512);
    bufp->fullWData(oldp+1604,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[30]),512);
    bufp->fullWData(oldp+1620,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[31]),512);
    bufp->fullBit(oldp+1636,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_en_pipe_0));
    bufp->fullCData(oldp+1637,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0),5);
    bufp->fullBit(oldp+1638,((1U & (((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r)
                                      ? 2U : 1U) >> 1U))));
    bufp->fullQData(oldp+1639,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[0]),53);
    bufp->fullQData(oldp+1641,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[1]),53);
    bufp->fullQData(oldp+1643,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[2]),53);
    bufp->fullQData(oldp+1645,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[3]),53);
    bufp->fullQData(oldp+1647,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[4]),53);
    bufp->fullQData(oldp+1649,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[5]),53);
    bufp->fullQData(oldp+1651,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[6]),53);
    bufp->fullQData(oldp+1653,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[7]),53);
    bufp->fullQData(oldp+1655,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[8]),53);
    bufp->fullQData(oldp+1657,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[9]),53);
    bufp->fullQData(oldp+1659,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[10]),53);
    bufp->fullQData(oldp+1661,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[11]),53);
    bufp->fullQData(oldp+1663,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[12]),53);
    bufp->fullQData(oldp+1665,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[13]),53);
    bufp->fullQData(oldp+1667,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[14]),53);
    bufp->fullQData(oldp+1669,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[15]),53);
    bufp->fullQData(oldp+1671,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[16]),53);
    bufp->fullQData(oldp+1673,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[17]),53);
    bufp->fullQData(oldp+1675,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[18]),53);
    bufp->fullQData(oldp+1677,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[19]),53);
    bufp->fullQData(oldp+1679,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[20]),53);
    bufp->fullQData(oldp+1681,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[21]),53);
    bufp->fullQData(oldp+1683,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[22]),53);
    bufp->fullQData(oldp+1685,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[23]),53);
    bufp->fullQData(oldp+1687,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[24]),53);
    bufp->fullQData(oldp+1689,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[25]),53);
    bufp->fullQData(oldp+1691,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[26]),53);
    bufp->fullQData(oldp+1693,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[27]),53);
    bufp->fullQData(oldp+1695,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[28]),53);
    bufp->fullQData(oldp+1697,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[29]),53);
    bufp->fullQData(oldp+1699,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[30]),53);
    bufp->fullQData(oldp+1701,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[31]),53);
    bufp->fullBit(oldp+1703,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_tag_w_en_pipe_0));
    bufp->fullCData(oldp+1704,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_tag_w_addr_pipe_0),5);
    bufp->fullQData(oldp+1705,((vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data_io_write_bus_addr 
                                >> 0xbU)),53);
    bufp->fullQData(oldp+1707,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[0]),53);
    bufp->fullQData(oldp+1709,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[1]),53);
    bufp->fullQData(oldp+1711,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[2]),53);
    bufp->fullQData(oldp+1713,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[3]),53);
    bufp->fullQData(oldp+1715,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[4]),53);
    bufp->fullQData(oldp+1717,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[5]),53);
    bufp->fullQData(oldp+1719,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[6]),53);
    bufp->fullQData(oldp+1721,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[7]),53);
    bufp->fullQData(oldp+1723,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[8]),53);
    bufp->fullQData(oldp+1725,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[9]),53);
    bufp->fullQData(oldp+1727,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[10]),53);
    bufp->fullQData(oldp+1729,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[11]),53);
    bufp->fullQData(oldp+1731,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[12]),53);
    bufp->fullQData(oldp+1733,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[13]),53);
    bufp->fullQData(oldp+1735,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[14]),53);
    bufp->fullQData(oldp+1737,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[15]),53);
    bufp->fullQData(oldp+1739,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[16]),53);
    bufp->fullQData(oldp+1741,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[17]),53);
    bufp->fullQData(oldp+1743,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[18]),53);
    bufp->fullQData(oldp+1745,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[19]),53);
    bufp->fullQData(oldp+1747,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[20]),53);
    bufp->fullQData(oldp+1749,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[21]),53);
    bufp->fullQData(oldp+1751,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[22]),53);
    bufp->fullQData(oldp+1753,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[23]),53);
    bufp->fullQData(oldp+1755,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[24]),53);
    bufp->fullQData(oldp+1757,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[25]),53);
    bufp->fullQData(oldp+1759,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[26]),53);
    bufp->fullQData(oldp+1761,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[27]),53);
    bufp->fullQData(oldp+1763,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[28]),53);
    bufp->fullQData(oldp+1765,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[29]),53);
    bufp->fullQData(oldp+1767,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[30]),53);
    bufp->fullQData(oldp+1769,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[31]),53);
    bufp->fullBit(oldp+1771,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_en_pipe_0));
    bufp->fullCData(oldp+1772,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0),5);
    bufp->fullBit(oldp+1773,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[0]));
    bufp->fullBit(oldp+1774,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[1]));
    bufp->fullBit(oldp+1775,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[2]));
    bufp->fullBit(oldp+1776,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[3]));
    bufp->fullBit(oldp+1777,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[4]));
    bufp->fullBit(oldp+1778,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[5]));
    bufp->fullBit(oldp+1779,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[6]));
    bufp->fullBit(oldp+1780,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[7]));
    bufp->fullBit(oldp+1781,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[8]));
    bufp->fullBit(oldp+1782,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[9]));
    bufp->fullBit(oldp+1783,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[10]));
    bufp->fullBit(oldp+1784,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[11]));
    bufp->fullBit(oldp+1785,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[12]));
    bufp->fullBit(oldp+1786,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[13]));
    bufp->fullBit(oldp+1787,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[14]));
    bufp->fullBit(oldp+1788,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[15]));
    bufp->fullBit(oldp+1789,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[16]));
    bufp->fullBit(oldp+1790,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[17]));
    bufp->fullBit(oldp+1791,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[18]));
    bufp->fullBit(oldp+1792,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[19]));
    bufp->fullBit(oldp+1793,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[20]));
    bufp->fullBit(oldp+1794,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[21]));
    bufp->fullBit(oldp+1795,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[22]));
    bufp->fullBit(oldp+1796,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[23]));
    bufp->fullBit(oldp+1797,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[24]));
    bufp->fullBit(oldp+1798,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[25]));
    bufp->fullBit(oldp+1799,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[26]));
    bufp->fullBit(oldp+1800,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[27]));
    bufp->fullBit(oldp+1801,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[28]));
    bufp->fullBit(oldp+1802,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[29]));
    bufp->fullBit(oldp+1803,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[30]));
    bufp->fullBit(oldp+1804,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[31]));
    bufp->fullBit(oldp+1805,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_en_pipe_0));
    bufp->fullCData(oldp+1806,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0),5);
    bufp->fullBit(oldp+1807,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[0]));
    bufp->fullBit(oldp+1808,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[1]));
    bufp->fullBit(oldp+1809,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[2]));
    bufp->fullBit(oldp+1810,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[3]));
    bufp->fullBit(oldp+1811,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[4]));
    bufp->fullBit(oldp+1812,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[5]));
    bufp->fullBit(oldp+1813,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[6]));
    bufp->fullBit(oldp+1814,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[7]));
    bufp->fullBit(oldp+1815,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[8]));
    bufp->fullBit(oldp+1816,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[9]));
    bufp->fullBit(oldp+1817,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[10]));
    bufp->fullBit(oldp+1818,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[11]));
    bufp->fullBit(oldp+1819,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[12]));
    bufp->fullBit(oldp+1820,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[13]));
    bufp->fullBit(oldp+1821,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[14]));
    bufp->fullBit(oldp+1822,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[15]));
    bufp->fullBit(oldp+1823,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[16]));
    bufp->fullBit(oldp+1824,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[17]));
    bufp->fullBit(oldp+1825,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[18]));
    bufp->fullBit(oldp+1826,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[19]));
    bufp->fullBit(oldp+1827,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[20]));
    bufp->fullBit(oldp+1828,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[21]));
    bufp->fullBit(oldp+1829,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[22]));
    bufp->fullBit(oldp+1830,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[23]));
    bufp->fullBit(oldp+1831,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[24]));
    bufp->fullBit(oldp+1832,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[25]));
    bufp->fullBit(oldp+1833,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[26]));
    bufp->fullBit(oldp+1834,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[27]));
    bufp->fullBit(oldp+1835,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[28]));
    bufp->fullBit(oldp+1836,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[29]));
    bufp->fullBit(oldp+1837,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[30]));
    bufp->fullBit(oldp+1838,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[31]));
    bufp->fullBit(oldp+1839,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_en_pipe_0));
    bufp->fullCData(oldp+1840,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_addr_pipe_0),5);
    bufp->fullBit(oldp+1841,(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_0_result));
    bufp->fullBit(oldp+1842,(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_1_result));
    bufp->fullCData(oldp+1843,(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0),4);
    bufp->fullBit(oldp+1844,(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_3));
    bufp->fullCData(oldp+1845,((((7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                  ? 2U : 0U) | ((3U 
                                                 == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                                 ? 2U
                                                 : 0U))),2);
    bufp->fullBit(oldp+1846,((((8U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)) 
                               | (7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))) 
                              | (3U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)))));
    bufp->fullBit(oldp+1847,((vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                              >> 0x1fU)));
    bufp->fullBit(oldp+1848,((1U & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                    >> 0x13U))));
    bufp->fullBit(oldp+1849,((vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                              >> 0x1fU)));
    bufp->fullIData(oldp+1850,(((1U & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                               >> 2U)))
                                 ? (IData)(((((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                              & (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit))
                                              ? vlSelf->CoreTop__DOT__ICACHE__DOT__hit_data
                                              : vlSelf->CoreTop__DOT__ICACHE__DOT__mem_data) 
                                            >> 0x20U))
                                 : (IData)((((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                             & (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit))
                                             ? vlSelf->CoreTop__DOT__ICACHE__DOT__hit_data
                                             : vlSelf->CoreTop__DOT__ICACHE__DOT__mem_data)))),32);
    bufp->fullQData(oldp+1851,(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp),64);
    bufp->fullCData(oldp+1853,(vlSelf->CoreTop__DOT__MMEM__DOT__read_state),2);
    bufp->fullCData(oldp+1854,(vlSelf->CoreTop__DOT__MMEM__DOT__write_state),2);
    bufp->fullCData(oldp+1855,(vlSelf->CoreTop__DOT__MMEM__DOT__read_next_state),2);
    bufp->fullCData(oldp+1856,(vlSelf->CoreTop__DOT__MMEM__DOT__write_next_state),2);
    bufp->fullQData(oldp+1857,(vlSelf->CoreTop__DOT__MMEM__DOT__write_addr_buffer),64);
    bufp->fullQData(oldp+1859,(vlSelf->CoreTop__DOT__MMEM__DOT__read_addr_buffer),64);
    bufp->fullCData(oldp+1861,(vlSelf->CoreTop__DOT__MMEM__DOT__read_count),8);
    bufp->fullBit(oldp+1862,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_valid));
    bufp->fullBit(oldp+1863,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_rdata_rep_ready));
    bufp->fullBit(oldp+1864,((((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_bits_rdata_T_1) 
                               | ((2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                  & (3U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state)))) 
                              & (~ (IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_we)))));
    bufp->fullQData(oldp+1865,((((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                 & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit))
                                 ? ((0U == (7U & (IData)(
                                                         (vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr 
                                                          >> 3U))))
                                     ? (((QData)((IData)(
                                                         vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0U])))
                                     : ((1U == (7U 
                                                & (IData)(
                                                          (vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr 
                                                           >> 3U))))
                                         ? (((QData)((IData)(
                                                             vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[2U])))
                                         : ((2U == 
                                             (7U & (IData)(
                                                           (vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr 
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
                                                            (vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr 
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
                                                             (vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr 
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
                                                              (vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr 
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
                                                               (vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr 
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
                                                                (vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr 
                                                                 >> 3U))))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xfU])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xeU])))
                                                     : 0ULL))))))))
                                 : ((0U == (7U & (IData)(
                                                         (vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr 
                                                          >> 3U))))
                                     ? (((QData)((IData)(
                                                         vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0U])))
                                     : ((1U == (7U 
                                                & (IData)(
                                                          (vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr 
                                                           >> 3U))))
                                         ? (((QData)((IData)(
                                                             vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[2U])))
                                         : ((2U == 
                                             (7U & (IData)(
                                                           (vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr 
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
                                                            (vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr 
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
                                                             (vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr 
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
                                                              (vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr 
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
                                                               (vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr 
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
                                                                (vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr 
                                                                 >> 3U))))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xfU])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xeU])))
                                                     : 0ULL)))))))))),64);
    bufp->fullBit(oldp+1867,(((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___Cache_data_io_write_bus_valid_T_3) 
                              | ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_valid_T_4) 
                                 & (IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_we)))));
    bufp->fullBit(oldp+1868,(((~ (((IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_valid) 
                                   & (0xa0000000ULL 
                                      <= vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr)) 
                                  & (0xa2000000ULL 
                                     >= vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr))) 
                              & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_ready))));
    bufp->fullBit(oldp+1869,((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state))));
    bufp->fullQData(oldp+1870,(((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state))
                                 ? vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_addr_reg
                                 : 0ULL)),64);
    bufp->fullBit(oldp+1872,(((~ (((IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_valid) 
                                   & (0xa0000000ULL 
                                      <= vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr)) 
                                  & (0xa2000000ULL 
                                     >= vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr))) 
                              & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_ready))));
    bufp->fullBit(oldp+1873,((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state))));
    bufp->fullQData(oldp+1874,(((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state))
                                 ? vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_addr_reg
                                 : 0ULL)),64);
    bufp->fullBit(oldp+1876,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_rdata_rep_valid));
    bufp->fullBit(oldp+1877,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_wdata_req_ready));
    bufp->fullBit(oldp+1878,((2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state))));
    bufp->fullQData(oldp+1879,((((QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0U])))),64);
    bufp->fullBit(oldp+1881,((7U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count_write))));
    bufp->fullBit(oldp+1882,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_wb_valid));
    bufp->fullBit(oldp+1883,(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_addr_req_valid));
    bufp->fullBit(oldp+1884,(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready));
    bufp->fullBit(oldp+1885,(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_out_rdata_rep_valid));
    bufp->fullBit(oldp+1886,(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_wdata_req_valid));
    bufp->fullBit(oldp+1887,(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_out_wb_valid));
    bufp->fullBit(oldp+1888,(((((IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_valid) 
                                & (0xa0000000ULL <= vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr)) 
                               & (0xa2000000ULL >= vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr)) 
                              & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_ready))));
    bufp->fullBit(oldp+1889,((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__read_state))));
    bufp->fullBit(oldp+1890,(((((IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_valid) 
                                & (0xa0000000ULL <= vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr)) 
                               & (0xa2000000ULL >= vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr)) 
                              & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_ready))));
    bufp->fullBit(oldp+1891,((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state))));
    bufp->fullBit(oldp+1892,(((((IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_valid) 
                                & (0xa0000000ULL <= vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr)) 
                               & (0xa2000000ULL >= vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr)) 
                              & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_ready))));
    bufp->fullBit(oldp+1893,((2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state))));
    bufp->fullBit(oldp+1894,((3U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state))));
    bufp->fullBit(oldp+1895,(((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_valid) 
                              & (0U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)))));
    bufp->fullQData(oldp+1896,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_addr),64);
    bufp->fullBit(oldp+1898,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_valid));
    bufp->fullCData(oldp+1899,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_waymask),2);
    bufp->fullWData(oldp+1900,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_wdata),512);
    bufp->fullQData(oldp+1916,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_tag_w_data),53);
    bufp->fullQData(oldp+1918,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1_tag_w_data),53);
    bufp->fullBit(oldp+1920,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0
                             [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0]));
    bufp->fullBit(oldp+1921,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1
                             [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_addr_pipe_0]));
    bufp->fullWData(oldp+1922,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data),512);
    bufp->fullWData(oldp+1938,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data),512);
    bufp->fullQData(oldp+1954,((vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr 
                                >> 0xbU)),53);
    bufp->fullCData(oldp+1956,((0x1fU & (IData)((vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr 
                                                 >> 6U)))),5);
    bufp->fullCData(oldp+1957,((0x3fU & (IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr))),6);
    bufp->fullBit(oldp+1958,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_in_valid_REG));
    bufp->fullBit(oldp+1959,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit));
    bufp->fullWData(oldp+1960,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data),512);
    bufp->fullBit(oldp+1976,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit_way_0));
    bufp->fullBit(oldp+1977,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit_way_1));
    bufp->fullBit(oldp+1978,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[0]));
    bufp->fullBit(oldp+1979,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[1]));
    bufp->fullBit(oldp+1980,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[2]));
    bufp->fullBit(oldp+1981,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[3]));
    bufp->fullBit(oldp+1982,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[4]));
    bufp->fullBit(oldp+1983,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[5]));
    bufp->fullBit(oldp+1984,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[6]));
    bufp->fullBit(oldp+1985,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[7]));
    bufp->fullBit(oldp+1986,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[8]));
    bufp->fullBit(oldp+1987,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[9]));
    bufp->fullBit(oldp+1988,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[10]));
    bufp->fullBit(oldp+1989,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[11]));
    bufp->fullBit(oldp+1990,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[12]));
    bufp->fullBit(oldp+1991,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[13]));
    bufp->fullBit(oldp+1992,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[14]));
    bufp->fullBit(oldp+1993,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[15]));
    bufp->fullBit(oldp+1994,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[16]));
    bufp->fullBit(oldp+1995,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[17]));
    bufp->fullBit(oldp+1996,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[18]));
    bufp->fullBit(oldp+1997,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[19]));
    bufp->fullBit(oldp+1998,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[20]));
    bufp->fullBit(oldp+1999,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[21]));
    bufp->fullBit(oldp+2000,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[22]));
    bufp->fullBit(oldp+2001,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[23]));
    bufp->fullBit(oldp+2002,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[24]));
    bufp->fullBit(oldp+2003,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[25]));
    bufp->fullBit(oldp+2004,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[26]));
    bufp->fullBit(oldp+2005,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[27]));
    bufp->fullBit(oldp+2006,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[28]));
    bufp->fullBit(oldp+2007,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[29]));
    bufp->fullBit(oldp+2008,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[30]));
    bufp->fullBit(oldp+2009,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[31]));
    bufp->fullBit(oldp+2010,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_en_pipe_0));
    bufp->fullCData(oldp+2011,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_addr_pipe_0),5);
    bufp->fullBit(oldp+2012,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_data));
    bufp->fullBit(oldp+2013,(((0U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                              & ((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                 & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit) 
                                    & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit_way_0))))));
    bufp->fullBit(oldp+2014,(((0U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                              & ((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                 & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit) 
                                    & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit_way_1))))));
    bufp->fullBit(oldp+2015,(((0U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                              & ((1U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                 & ((2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                    & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___T_8) 
                                       & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_r)))))));
    bufp->fullBit(oldp+2016,(((0U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                              & ((1U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                 & ((2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                    & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___T_8) 
                                       & (~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_r))))))));
    bufp->fullBit(oldp+2017,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[0]));
    bufp->fullBit(oldp+2018,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[1]));
    bufp->fullBit(oldp+2019,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[2]));
    bufp->fullBit(oldp+2020,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[3]));
    bufp->fullBit(oldp+2021,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[4]));
    bufp->fullBit(oldp+2022,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[5]));
    bufp->fullBit(oldp+2023,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[6]));
    bufp->fullBit(oldp+2024,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[7]));
    bufp->fullBit(oldp+2025,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[8]));
    bufp->fullBit(oldp+2026,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[9]));
    bufp->fullBit(oldp+2027,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[10]));
    bufp->fullBit(oldp+2028,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[11]));
    bufp->fullBit(oldp+2029,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[12]));
    bufp->fullBit(oldp+2030,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[13]));
    bufp->fullBit(oldp+2031,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[14]));
    bufp->fullBit(oldp+2032,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[15]));
    bufp->fullBit(oldp+2033,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[16]));
    bufp->fullBit(oldp+2034,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[17]));
    bufp->fullBit(oldp+2035,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[18]));
    bufp->fullBit(oldp+2036,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[19]));
    bufp->fullBit(oldp+2037,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[20]));
    bufp->fullBit(oldp+2038,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[21]));
    bufp->fullBit(oldp+2039,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[22]));
    bufp->fullBit(oldp+2040,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[23]));
    bufp->fullBit(oldp+2041,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[24]));
    bufp->fullBit(oldp+2042,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[25]));
    bufp->fullBit(oldp+2043,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[26]));
    bufp->fullBit(oldp+2044,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[27]));
    bufp->fullBit(oldp+2045,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[28]));
    bufp->fullBit(oldp+2046,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[29]));
    bufp->fullBit(oldp+2047,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[30]));
    bufp->fullBit(oldp+2048,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[31]));
    bufp->fullBit(oldp+2049,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0_dirt_w_en_pipe_0));
    bufp->fullCData(oldp+2050,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0_dirt_w_addr_pipe_0),5);
    bufp->fullBit(oldp+2051,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0
                             [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0_dirt_w_addr_pipe_0]));
    bufp->fullBit(oldp+2052,((1U & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__waymask))));
    bufp->fullBit(oldp+2053,(((IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_we) 
                              & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___T_61))));
    bufp->fullBit(oldp+2054,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[0]));
    bufp->fullBit(oldp+2055,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[1]));
    bufp->fullBit(oldp+2056,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[2]));
    bufp->fullBit(oldp+2057,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[3]));
    bufp->fullBit(oldp+2058,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[4]));
    bufp->fullBit(oldp+2059,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[5]));
    bufp->fullBit(oldp+2060,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[6]));
    bufp->fullBit(oldp+2061,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[7]));
    bufp->fullBit(oldp+2062,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[8]));
    bufp->fullBit(oldp+2063,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[9]));
    bufp->fullBit(oldp+2064,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[10]));
    bufp->fullBit(oldp+2065,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[11]));
    bufp->fullBit(oldp+2066,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[12]));
    bufp->fullBit(oldp+2067,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[13]));
    bufp->fullBit(oldp+2068,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[14]));
    bufp->fullBit(oldp+2069,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[15]));
    bufp->fullBit(oldp+2070,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[16]));
    bufp->fullBit(oldp+2071,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[17]));
    bufp->fullBit(oldp+2072,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[18]));
    bufp->fullBit(oldp+2073,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[19]));
    bufp->fullBit(oldp+2074,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[20]));
    bufp->fullBit(oldp+2075,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[21]));
    bufp->fullBit(oldp+2076,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[22]));
    bufp->fullBit(oldp+2077,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[23]));
    bufp->fullBit(oldp+2078,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[24]));
    bufp->fullBit(oldp+2079,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[25]));
    bufp->fullBit(oldp+2080,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[26]));
    bufp->fullBit(oldp+2081,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[27]));
    bufp->fullBit(oldp+2082,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[28]));
    bufp->fullBit(oldp+2083,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[29]));
    bufp->fullBit(oldp+2084,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[30]));
    bufp->fullBit(oldp+2085,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[31]));
    bufp->fullBit(oldp+2086,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1_dirt_w_en_pipe_0));
    bufp->fullCData(oldp+2087,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1_dirt_w_addr_pipe_0),5);
    bufp->fullBit(oldp+2088,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1
                             [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1_dirt_w_addr_pipe_0]));
    bufp->fullBit(oldp+2089,((1U & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__waymask) 
                                    >> 1U))));
    bufp->fullCData(oldp+2090,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state),3);
    bufp->fullCData(oldp+2091,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state),2);
    bufp->fullCData(oldp+2092,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state),2);
    bufp->fullWData(oldp+2093,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg),512);
    bufp->fullQData(oldp+2109,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_addr_reg),64);
    bufp->fullBit(oldp+2111,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_r));
    bufp->fullCData(oldp+2112,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count_write),4);
    bufp->fullQData(oldp+2113,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_addr_reg),64);
    bufp->fullWData(oldp+2115,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg),512);
    bufp->fullQData(oldp+2131,(((0U == (7U & (IData)(
                                                     (vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr 
                                                      >> 3U))))
                                 ? (((QData)((IData)(
                                                     vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0U])))
                                 : ((1U == (7U & (IData)(
                                                         (vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr 
                                                          >> 3U))))
                                     ? (((QData)((IData)(
                                                         vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[2U])))
                                     : ((2U == (7U 
                                                & (IData)(
                                                          (vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr 
                                                           >> 3U))))
                                         ? (((QData)((IData)(
                                                             vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[5U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[4U])))
                                         : ((3U == 
                                             (7U & (IData)(
                                                           (vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr 
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
                                                            (vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr 
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
                                                             (vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr 
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
                                                              (vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr 
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
                                                               (vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr 
                                                                >> 3U))))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xfU])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xeU])))
                                                    : 0ULL))))))))),64);
    bufp->fullQData(oldp+2133,(((0U == (7U & (IData)(
                                                     (vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr 
                                                      >> 3U))))
                                 ? (((QData)((IData)(
                                                     vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0U])))
                                 : ((1U == (7U & (IData)(
                                                         (vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr 
                                                          >> 3U))))
                                     ? (((QData)((IData)(
                                                         vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[2U])))
                                     : ((2U == (7U 
                                                & (IData)(
                                                          (vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr 
                                                           >> 3U))))
                                         ? (((QData)((IData)(
                                                             vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[5U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[4U])))
                                         : ((3U == 
                                             (7U & (IData)(
                                                           (vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr 
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
                                                            (vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr 
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
                                                             (vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr 
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
                                                              (vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr 
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
                                                               (vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr 
                                                                >> 3U))))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xfU])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xeU])))
                                                    : 0ULL))))))))),64);
    bufp->fullQData(oldp+2135,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask),64);
    bufp->fullQData(oldp+2137,((((QData)((IData)(((
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                >> 7U)))
                                                     ? 0xffU
                                                     : 0U) 
                                                   << 0x18U) 
                                                  | ((((1U 
                                                        & (IData)(
                                                                  (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                   >> 6U)))
                                                        ? 0xffU
                                                        : 0U) 
                                                      << 0x10U) 
                                                     | ((((1U 
                                                           & (IData)(
                                                                     (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                      >> 5U)))
                                                           ? 0xffU
                                                           : 0U) 
                                                         << 8U) 
                                                        | ((1U 
                                                            & (IData)(
                                                                      (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                       >> 4U)))
                                                            ? 0xffU
                                                            : 0U)))))) 
                                 << 0x20U) | (QData)((IData)(
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
                                                                        : 0U)))))))),64);
    bufp->fullWData(oldp+2139,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo_lo),128);
    bufp->fullQData(oldp+2143,((((QData)((IData)(((
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                >> 0x17U)))
                                                     ? 0xffU
                                                     : 0U) 
                                                   << 0x18U) 
                                                  | ((((1U 
                                                        & (IData)(
                                                                  (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                   >> 0x16U)))
                                                        ? 0xffU
                                                        : 0U) 
                                                      << 0x10U) 
                                                     | ((((1U 
                                                           & (IData)(
                                                                     (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                      >> 0x15U)))
                                                           ? 0xffU
                                                           : 0U) 
                                                         << 8U) 
                                                        | ((1U 
                                                            & (IData)(
                                                                      (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                       >> 0x14U)))
                                                            ? 0xffU
                                                            : 0U)))))) 
                                 << 0x20U) | (QData)((IData)(
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
                                                                        : 0U)))))))),64);
    bufp->fullWData(oldp+2145,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo),256);
    bufp->fullQData(oldp+2153,((((QData)((IData)(((
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                >> 0x27U)))
                                                     ? 0xffU
                                                     : 0U) 
                                                   << 0x18U) 
                                                  | ((((1U 
                                                        & (IData)(
                                                                  (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                   >> 0x26U)))
                                                        ? 0xffU
                                                        : 0U) 
                                                      << 0x10U) 
                                                     | ((((1U 
                                                           & (IData)(
                                                                     (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                      >> 0x25U)))
                                                           ? 0xffU
                                                           : 0U) 
                                                         << 8U) 
                                                        | ((1U 
                                                            & (IData)(
                                                                      (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                       >> 0x24U)))
                                                            ? 0xffU
                                                            : 0U)))))) 
                                 << 0x20U) | (QData)((IData)(
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
                                                                        : 0U)))))))),64);
    bufp->fullWData(oldp+2155,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi_lo),128);
    bufp->fullQData(oldp+2159,((((QData)((IData)(((
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                >> 0x37U)))
                                                     ? 0xffU
                                                     : 0U) 
                                                   << 0x18U) 
                                                  | ((((1U 
                                                        & (IData)(
                                                                  (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                   >> 0x36U)))
                                                        ? 0xffU
                                                        : 0U) 
                                                      << 0x10U) 
                                                     | ((((1U 
                                                           & (IData)(
                                                                     (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                      >> 0x35U)))
                                                           ? 0xffU
                                                           : 0U) 
                                                         << 8U) 
                                                        | ((1U 
                                                            & (IData)(
                                                                      (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                       >> 0x34U)))
                                                            ? 0xffU
                                                            : 0U)))))) 
                                 << 0x20U) | (QData)((IData)(
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
                                                                        : 0U)))))))),64);
    bufp->fullWData(oldp+2161,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi),256);
    bufp->fullWData(oldp+2169,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend),512);
    __Vtemp_hc2882e76__0[0U] = (IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wdata);
    __Vtemp_hc2882e76__0[1U] = (IData)((vlSelf->CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wdata 
                                        >> 0x20U));
    __Vtemp_hc2882e76__0[2U] = (IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wdata);
    __Vtemp_hc2882e76__0[3U] = (IData)((vlSelf->CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wdata 
                                        >> 0x20U));
    __Vtemp_hc2882e76__0[4U] = (IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wdata);
    __Vtemp_hc2882e76__0[5U] = (IData)((vlSelf->CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wdata 
                                        >> 0x20U));
    __Vtemp_hc2882e76__0[6U] = (IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wdata);
    __Vtemp_hc2882e76__0[7U] = (IData)((vlSelf->CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wdata 
                                        >> 0x20U));
    __Vtemp_hc2882e76__0[8U] = (IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wdata);
    __Vtemp_hc2882e76__0[9U] = (IData)((vlSelf->CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wdata 
                                        >> 0x20U));
    __Vtemp_hc2882e76__0[0xaU] = (IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wdata);
    __Vtemp_hc2882e76__0[0xbU] = (IData)((vlSelf->CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wdata 
                                          >> 0x20U));
    __Vtemp_hc2882e76__0[0xcU] = (IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wdata);
    __Vtemp_hc2882e76__0[0xdU] = (IData)((vlSelf->CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wdata 
                                          >> 0x20U));
    __Vtemp_hc2882e76__0[0xeU] = (IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wdata);
    __Vtemp_hc2882e76__0[0xfU] = (IData)((vlSelf->CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wdata 
                                          >> 0x20U));
    bufp->fullWData(oldp+2185,(__Vtemp_hc2882e76__0),512);
    bufp->fullCData(oldp+2201,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__waymask),2);
    bufp->fullWData(oldp+2202,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[0]),512);
    bufp->fullWData(oldp+2218,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[1]),512);
    bufp->fullWData(oldp+2234,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[2]),512);
    bufp->fullWData(oldp+2250,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[3]),512);
    bufp->fullWData(oldp+2266,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[4]),512);
    bufp->fullWData(oldp+2282,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[5]),512);
    bufp->fullWData(oldp+2298,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[6]),512);
    bufp->fullWData(oldp+2314,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[7]),512);
    bufp->fullWData(oldp+2330,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[8]),512);
    bufp->fullWData(oldp+2346,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[9]),512);
    bufp->fullWData(oldp+2362,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[10]),512);
    bufp->fullWData(oldp+2378,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[11]),512);
    bufp->fullWData(oldp+2394,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[12]),512);
    bufp->fullWData(oldp+2410,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[13]),512);
    bufp->fullWData(oldp+2426,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[14]),512);
    bufp->fullWData(oldp+2442,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[15]),512);
    bufp->fullWData(oldp+2458,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[16]),512);
    bufp->fullWData(oldp+2474,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[17]),512);
    bufp->fullWData(oldp+2490,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[18]),512);
    bufp->fullWData(oldp+2506,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[19]),512);
    bufp->fullWData(oldp+2522,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[20]),512);
    bufp->fullWData(oldp+2538,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[21]),512);
    bufp->fullWData(oldp+2554,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[22]),512);
    bufp->fullWData(oldp+2570,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[23]),512);
    bufp->fullWData(oldp+2586,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[24]),512);
    bufp->fullWData(oldp+2602,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[25]),512);
    bufp->fullWData(oldp+2618,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[26]),512);
    bufp->fullWData(oldp+2634,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[27]),512);
    bufp->fullWData(oldp+2650,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[28]),512);
    bufp->fullWData(oldp+2666,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[29]),512);
    bufp->fullWData(oldp+2682,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[30]),512);
    bufp->fullWData(oldp+2698,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[31]),512);
    bufp->fullBit(oldp+2714,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_en_pipe_0));
    bufp->fullCData(oldp+2715,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0),5);
    bufp->fullCData(oldp+2716,((0x1fU & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_addr 
                                                 >> 6U)))),5);
    bufp->fullBit(oldp+2717,((1U & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_waymask))));
    bufp->fullWData(oldp+2718,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[0]),512);
    bufp->fullWData(oldp+2734,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[1]),512);
    bufp->fullWData(oldp+2750,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[2]),512);
    bufp->fullWData(oldp+2766,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[3]),512);
    bufp->fullWData(oldp+2782,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[4]),512);
    bufp->fullWData(oldp+2798,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[5]),512);
    bufp->fullWData(oldp+2814,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[6]),512);
    bufp->fullWData(oldp+2830,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[7]),512);
    bufp->fullWData(oldp+2846,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[8]),512);
    bufp->fullWData(oldp+2862,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[9]),512);
    bufp->fullWData(oldp+2878,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[10]),512);
    bufp->fullWData(oldp+2894,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[11]),512);
    bufp->fullWData(oldp+2910,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[12]),512);
    bufp->fullWData(oldp+2926,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[13]),512);
    bufp->fullWData(oldp+2942,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[14]),512);
    bufp->fullWData(oldp+2958,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[15]),512);
    bufp->fullWData(oldp+2974,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[16]),512);
    bufp->fullWData(oldp+2990,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[17]),512);
    bufp->fullWData(oldp+3006,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[18]),512);
    bufp->fullWData(oldp+3022,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[19]),512);
    bufp->fullWData(oldp+3038,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[20]),512);
    bufp->fullWData(oldp+3054,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[21]),512);
    bufp->fullWData(oldp+3070,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[22]),512);
    bufp->fullWData(oldp+3086,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[23]),512);
    bufp->fullWData(oldp+3102,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[24]),512);
    bufp->fullWData(oldp+3118,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[25]),512);
    bufp->fullWData(oldp+3134,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[26]),512);
    bufp->fullWData(oldp+3150,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[27]),512);
    bufp->fullWData(oldp+3166,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[28]),512);
    bufp->fullWData(oldp+3182,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[29]),512);
    bufp->fullWData(oldp+3198,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[30]),512);
    bufp->fullWData(oldp+3214,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[31]),512);
    bufp->fullBit(oldp+3230,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_en_pipe_0));
    bufp->fullCData(oldp+3231,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0),5);
    bufp->fullBit(oldp+3232,((1U & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_waymask) 
                                    >> 1U))));
    bufp->fullQData(oldp+3233,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[0]),53);
    bufp->fullQData(oldp+3235,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[1]),53);
    bufp->fullQData(oldp+3237,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[2]),53);
    bufp->fullQData(oldp+3239,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[3]),53);
    bufp->fullQData(oldp+3241,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[4]),53);
    bufp->fullQData(oldp+3243,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[5]),53);
    bufp->fullQData(oldp+3245,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[6]),53);
    bufp->fullQData(oldp+3247,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[7]),53);
    bufp->fullQData(oldp+3249,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[8]),53);
    bufp->fullQData(oldp+3251,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[9]),53);
    bufp->fullQData(oldp+3253,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[10]),53);
    bufp->fullQData(oldp+3255,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[11]),53);
    bufp->fullQData(oldp+3257,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[12]),53);
    bufp->fullQData(oldp+3259,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[13]),53);
    bufp->fullQData(oldp+3261,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[14]),53);
    bufp->fullQData(oldp+3263,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[15]),53);
    bufp->fullQData(oldp+3265,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[16]),53);
    bufp->fullQData(oldp+3267,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[17]),53);
    bufp->fullQData(oldp+3269,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[18]),53);
    bufp->fullQData(oldp+3271,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[19]),53);
    bufp->fullQData(oldp+3273,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[20]),53);
    bufp->fullQData(oldp+3275,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[21]),53);
    bufp->fullQData(oldp+3277,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[22]),53);
    bufp->fullQData(oldp+3279,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[23]),53);
    bufp->fullQData(oldp+3281,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[24]),53);
    bufp->fullQData(oldp+3283,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[25]),53);
    bufp->fullQData(oldp+3285,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[26]),53);
    bufp->fullQData(oldp+3287,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[27]),53);
    bufp->fullQData(oldp+3289,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[28]),53);
    bufp->fullQData(oldp+3291,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[29]),53);
    bufp->fullQData(oldp+3293,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[30]),53);
    bufp->fullQData(oldp+3295,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[31]),53);
    bufp->fullBit(oldp+3297,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_tag_w_en_pipe_0));
    bufp->fullCData(oldp+3298,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_tag_w_addr_pipe_0),5);
    bufp->fullQData(oldp+3299,((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_addr 
                                >> 0xbU)),53);
    bufp->fullQData(oldp+3301,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[0]),53);
    bufp->fullQData(oldp+3303,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[1]),53);
    bufp->fullQData(oldp+3305,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[2]),53);
    bufp->fullQData(oldp+3307,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[3]),53);
    bufp->fullQData(oldp+3309,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[4]),53);
    bufp->fullQData(oldp+3311,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[5]),53);
    bufp->fullQData(oldp+3313,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[6]),53);
    bufp->fullQData(oldp+3315,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[7]),53);
    bufp->fullQData(oldp+3317,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[8]),53);
    bufp->fullQData(oldp+3319,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[9]),53);
    bufp->fullQData(oldp+3321,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[10]),53);
    bufp->fullQData(oldp+3323,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[11]),53);
    bufp->fullQData(oldp+3325,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[12]),53);
    bufp->fullQData(oldp+3327,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[13]),53);
    bufp->fullQData(oldp+3329,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[14]),53);
    bufp->fullQData(oldp+3331,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[15]),53);
    bufp->fullQData(oldp+3333,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[16]),53);
    bufp->fullQData(oldp+3335,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[17]),53);
    bufp->fullQData(oldp+3337,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[18]),53);
    bufp->fullQData(oldp+3339,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[19]),53);
    bufp->fullQData(oldp+3341,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[20]),53);
    bufp->fullQData(oldp+3343,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[21]),53);
    bufp->fullQData(oldp+3345,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[22]),53);
    bufp->fullQData(oldp+3347,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[23]),53);
    bufp->fullQData(oldp+3349,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[24]),53);
    bufp->fullQData(oldp+3351,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[25]),53);
    bufp->fullQData(oldp+3353,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[26]),53);
    bufp->fullQData(oldp+3355,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[27]),53);
    bufp->fullQData(oldp+3357,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[28]),53);
    bufp->fullQData(oldp+3359,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[29]),53);
    bufp->fullQData(oldp+3361,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[30]),53);
    bufp->fullQData(oldp+3363,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[31]),53);
    bufp->fullBit(oldp+3365,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1_tag_w_en_pipe_0));
    bufp->fullCData(oldp+3366,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0),5);
    bufp->fullBit(oldp+3367,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[0]));
    bufp->fullBit(oldp+3368,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[1]));
    bufp->fullBit(oldp+3369,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[2]));
    bufp->fullBit(oldp+3370,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[3]));
    bufp->fullBit(oldp+3371,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[4]));
    bufp->fullBit(oldp+3372,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[5]));
    bufp->fullBit(oldp+3373,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[6]));
    bufp->fullBit(oldp+3374,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[7]));
    bufp->fullBit(oldp+3375,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[8]));
    bufp->fullBit(oldp+3376,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[9]));
    bufp->fullBit(oldp+3377,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[10]));
    bufp->fullBit(oldp+3378,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[11]));
    bufp->fullBit(oldp+3379,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[12]));
    bufp->fullBit(oldp+3380,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[13]));
    bufp->fullBit(oldp+3381,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[14]));
    bufp->fullBit(oldp+3382,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[15]));
    bufp->fullBit(oldp+3383,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[16]));
    bufp->fullBit(oldp+3384,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[17]));
    bufp->fullBit(oldp+3385,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[18]));
    bufp->fullBit(oldp+3386,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[19]));
    bufp->fullBit(oldp+3387,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[20]));
    bufp->fullBit(oldp+3388,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[21]));
    bufp->fullBit(oldp+3389,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[22]));
    bufp->fullBit(oldp+3390,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[23]));
    bufp->fullBit(oldp+3391,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[24]));
    bufp->fullBit(oldp+3392,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[25]));
    bufp->fullBit(oldp+3393,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[26]));
    bufp->fullBit(oldp+3394,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[27]));
    bufp->fullBit(oldp+3395,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[28]));
    bufp->fullBit(oldp+3396,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[29]));
    bufp->fullBit(oldp+3397,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[30]));
    bufp->fullBit(oldp+3398,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[31]));
    bufp->fullBit(oldp+3399,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_en_pipe_0));
    bufp->fullCData(oldp+3400,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0),5);
    bufp->fullBit(oldp+3401,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[0]));
    bufp->fullBit(oldp+3402,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[1]));
    bufp->fullBit(oldp+3403,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[2]));
    bufp->fullBit(oldp+3404,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[3]));
    bufp->fullBit(oldp+3405,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[4]));
    bufp->fullBit(oldp+3406,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[5]));
    bufp->fullBit(oldp+3407,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[6]));
    bufp->fullBit(oldp+3408,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[7]));
    bufp->fullBit(oldp+3409,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[8]));
    bufp->fullBit(oldp+3410,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[9]));
    bufp->fullBit(oldp+3411,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[10]));
    bufp->fullBit(oldp+3412,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[11]));
    bufp->fullBit(oldp+3413,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[12]));
    bufp->fullBit(oldp+3414,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[13]));
    bufp->fullBit(oldp+3415,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[14]));
    bufp->fullBit(oldp+3416,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[15]));
    bufp->fullBit(oldp+3417,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[16]));
    bufp->fullBit(oldp+3418,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[17]));
    bufp->fullBit(oldp+3419,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[18]));
    bufp->fullBit(oldp+3420,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[19]));
    bufp->fullBit(oldp+3421,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[20]));
    bufp->fullBit(oldp+3422,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[21]));
    bufp->fullBit(oldp+3423,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[22]));
    bufp->fullBit(oldp+3424,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[23]));
    bufp->fullBit(oldp+3425,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[24]));
    bufp->fullBit(oldp+3426,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[25]));
    bufp->fullBit(oldp+3427,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[26]));
    bufp->fullBit(oldp+3428,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[27]));
    bufp->fullBit(oldp+3429,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[28]));
    bufp->fullBit(oldp+3430,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[29]));
    bufp->fullBit(oldp+3431,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[30]));
    bufp->fullBit(oldp+3432,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[31]));
    bufp->fullBit(oldp+3433,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_en_pipe_0));
    bufp->fullCData(oldp+3434,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_addr_pipe_0),5);
    bufp->fullBit(oldp+3435,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_0_result));
    bufp->fullBit(oldp+3436,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_1_result));
    bufp->fullCData(oldp+3437,(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__read_state),2);
    bufp->fullCData(oldp+3438,(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state),2);
    bufp->fullBit(oldp+3439,(((((IData)(vlSelf->CoreTop__DOT__EX__DOT__branch_flag) 
                                & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_inst_valid)) 
                               & (IData)(vlSelf->CoreTop__DOT__valid_1)) 
                              & (~ (IData)(vlSelf->CoreTop__DOT__MEM__DOT___io_out_valid_T_6)))));
    bufp->fullQData(oldp+3440,(((0x19U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                 ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1
                                 : vlSelf->CoreTop__DOT__EX__DOT___GEN_289)),64);
    bufp->fullIData(oldp+3442,(((IData)(vlSelf->CoreTop__DOT__EX_io_is_flush)
                                 ? 0U : ((1U & (IData)(
                                                       (vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                        >> 2U)))
                                          ? (IData)(
                                                    ((((1U 
                                                        == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                                       & (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit))
                                                       ? vlSelf->CoreTop__DOT__ICACHE__DOT__hit_data
                                                       : vlSelf->CoreTop__DOT__ICACHE__DOT__mem_data) 
                                                     >> 0x20U))
                                          : (IData)(
                                                    (((1U 
                                                       == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                                      & (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit))
                                                      ? vlSelf->CoreTop__DOT__ICACHE__DOT__hit_data
                                                      : vlSelf->CoreTop__DOT__ICACHE__DOT__mem_data))))),32);
    bufp->fullQData(oldp+3443,(((((IData)(vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfWen) 
                                  & ((IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest) 
                                     == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                  >> 0xfU)))) 
                                 & (0U != (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest)))
                                 ? vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfData
                                 : ((((IData)(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfWen) 
                                      & ((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest) 
                                         == (0x1fU 
                                             & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
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
                                         : ((0U == 
                                             (0x1fU 
                                              & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                 >> 0xfU)))
                                             ? 0ULL
                                             : vlSelf->CoreTop__DOT__rf
                                            [(0x1fU 
                                              & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                 >> 0xfU))]))))),64);
    bufp->fullQData(oldp+3445,(((((IData)(vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfWen) 
                                  & ((IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest) 
                                     == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                  >> 0x14U)))) 
                                 & (0U != (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest)))
                                 ? vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfData
                                 : ((((IData)(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfWen) 
                                      & ((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest) 
                                         == (0x1fU 
                                             & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
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
                                         : ((0U == 
                                             (0x1fU 
                                              & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                 >> 0x14U)))
                                             ? 0ULL
                                             : vlSelf->CoreTop__DOT__rf
                                            [(0x1fU 
                                              & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                 >> 0x14U))]))))),64);
    bufp->fullBit(oldp+3447,((1U & (~ (((0U == ((0x13U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                 ? 0x40U
                                                 : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_316))) 
                                        | (IData)(vlSelf->CoreTop__DOT__EX_io_is_flush)) 
                                       | (~ (IData)(vlSelf->CoreTop__DOT__valid)))))));
    bufp->fullQData(oldp+3448,(((0U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src1Type))
                                 ? vlSelf->CoreTop__DOT__mem_bypass_io_Bypass_REG1
                                 : vlSelf->CoreTop__DOT__EX__DOT___GEN_1)),64);
    bufp->fullQData(oldp+3450,(((0U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src2Type))
                                 ? vlSelf->CoreTop__DOT__mem_bypass_io_Bypass_REG2
                                 : vlSelf->CoreTop__DOT__EX__DOT___GEN_3)),64);
    bufp->fullQData(oldp+3452,(((IData)(vlSelf->CoreTop__DOT__EX__DOT__is_mul)
                                 ? vlSelf->CoreTop__DOT__EX__DOT___shift_result_T
                                 : (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT___shift_result_T)))),64);
    bufp->fullQData(oldp+3454,(((IData)(vlSelf->CoreTop__DOT__EX__DOT__is_mul)
                                 ? vlSelf->CoreTop__DOT__EX__DOT__src2
                                 : (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)))),64);
    bufp->fullQData(oldp+3456,(((0x40U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                 ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1
                                 : ((0x1aU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                     ? vlSelf->CoreTop__DOT__EX__DOT__src2
                                     : ((0x68U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                         ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_7
                                         : ((0x44U 
                                             == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                             ? (vlSelf->CoreTop__DOT__EX__DOT___shift_result_T 
                                                | vlSelf->CoreTop__DOT__EX__DOT__src2)
                                             : ((0x69U 
                                                 == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                 ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_10
                                                 : 
                                                ((0x71U 
                                                  == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                  ? 
                                                 (vlSelf->CoreTop__DOT__EX__DOT___shift_result_T 
                                                  & vlSelf->CoreTop__DOT__EX__DOT__src2)
                                                  : vlSelf->CoreTop__DOT__EX__DOT___GEN_145))))))),64);
    bufp->fullQData(oldp+3458,(((0x6aU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                 ? ((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T 
                                     < vlSelf->CoreTop__DOT__EX__DOT__src2)
                                     ? 1ULL : 0ULL)
                                 : ((2U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                     ? (VL_LTS_IQQ(64, vlSelf->CoreTop__DOT__EX__DOT___shift_result_T, vlSelf->CoreTop__DOT__EX__DOT__src2)
                                         ? 1ULL : 0ULL)
                                     : 0ULL))),64);
    VL_EXTEND_WQ(127,64, __Vtemp_h84c74001__0, VL_SHIFTRS_QQI(64,64,5, vlSelf->CoreTop__DOT__EX__DOT___shift_result_T, 
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
    VL_EXTEND_WQ(127,64, __Vtemp_h14069084__0, vlSelf->CoreTop__DOT__EX__DOT___shift_result_T);
    VL_SHIFTL_WWI(127,127,6, __Vtemp_hf92011cd__0, __Vtemp_h14069084__0, 
                  (0x3fU & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)));
    VL_EXTEND_WQ(127,64, __Vtemp_h6acab13b__0, ((0x75U 
                                                 == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                 ? 
                                                (vlSelf->CoreTop__DOT__EX__DOT___shift_result_T 
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
                                                      VL_SHIFTRS_QQI(64,64,6, vlSelf->CoreTop__DOT__EX__DOT___shift_result_T, 
                                                                     (0x3fU 
                                                                      & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)))
                                                       : 0ULL))))))));
    bufp->fullQData(oldp+3460,((((QData)((IData)(((0x6eU 
                                                   == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                   ? 
                                                  __Vtemp_h84c74001__0[1U]
                                                   : 
                                                  ((0x73U 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? 
                                                   __Vtemp_h8248920c__0[1U]
                                                    : 
                                                   ((0x41U 
                                                     == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                     ? 
                                                    __Vtemp_hf92011cd__0[1U]
                                                     : 
                                                    __Vtemp_h6acab13b__0[1U]))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((0x6eU 
                                                               == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                               ? 
                                                              __Vtemp_h84c74001__0[0U]
                                                               : 
                                                              ((0x73U 
                                                                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                                ? 
                                                               __Vtemp_h8248920c__0[0U]
                                                                : 
                                                               ((0x41U 
                                                                 == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                                 ? 
                                                                __Vtemp_hf92011cd__0[0U]
                                                                 : 
                                                                __Vtemp_h6acab13b__0[0U]))))))),64);
    bufp->fullQData(oldp+3462,((((((0U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                                    ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_13
                                    : 0ULL) | ((1U 
                                                == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                                                ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_18
                                                : 0ULL)) 
                                 | ((2U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                                     ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_18
                                     : 0ULL)) | ((3U 
                                                  == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                                                  ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_13
                                                  : 0ULL))),64);
    bufp->fullQData(oldp+3464,((((((0U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                                    ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_16
                                    : 0ULL) | ((1U 
                                                == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                                                ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_16
                                                : 0ULL)) 
                                 | ((2U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                                     ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_26
                                     : 0ULL)) | ((3U 
                                                  == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                                                  ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_26
                                                  : 0ULL))),64);
    bufp->fullQData(oldp+3466,(((0x45U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                 ? vlSelf->CoreTop__DOT__MMIO_io_in_rdata_rep_bits_rdata
                                 : ((0x47U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                     ? ((1U & (IData)(
                                                      (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                       >> 2U)))
                                         ? (((QData)((IData)(
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlSelf->CoreTop__DOT__MMIO_io_in_rdata_rep_bits_rdata 
                                                                          >> 0x3fU)))
                                                               ? 0xffffffffU
                                                               : 0U))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              (vlSelf->CoreTop__DOT__MMIO_io_in_rdata_rep_bits_rdata 
                                                               >> 0x20U))))
                                         : (((QData)((IData)(
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlSelf->CoreTop__DOT__MMIO_io_in_rdata_rep_bits_rdata 
                                                                          >> 0x1fU)))
                                                               ? 0xffffffffU
                                                               : 0U))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->CoreTop__DOT__MMIO_io_in_rdata_rep_bits_rdata))))
                                     : ((0x11U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                         ? ((1U & (IData)(
                                                          (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                           >> 2U)))
                                             ? (QData)((IData)(
                                                               (vlSelf->CoreTop__DOT__MMIO_io_in_rdata_rep_bits_rdata 
                                                                >> 0x20U)))
                                             : (QData)((IData)(vlSelf->CoreTop__DOT__MMIO_io_in_rdata_rep_bits_rdata)))
                                         : ((0x6fU 
                                             == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                             ? (QData)((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_27))
                                             : ((0xeU 
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
                                                   : 0ULL)))))))),64);
    bufp->fullBit(oldp+3468,(vlSelf->CoreTop__DOT__ICACHE_io_in_rdata_rep_valid));
    bufp->fullBit(oldp+3469,(vlSelf->CoreTop__DOT__EX_io_is_flush));
    bufp->fullQData(oldp+3470,(vlSelf->CoreTop__DOT__mem_bypass_io_Bypass_REG1),64);
    bufp->fullQData(oldp+3472,(vlSelf->CoreTop__DOT__mem_bypass_io_Bypass_REG2),64);
    bufp->fullQData(oldp+3474,(vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfData),64);
    bufp->fullQData(oldp+3476,(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfData),64);
    bufp->fullQData(oldp+3478,(vlSelf->CoreTop__DOT__MMIO_io_in_rdata_rep_bits_rdata),64);
    bufp->fullQData(oldp+3480,(vlSelf->CoreTop__DOT__MMEM__DOT__rdata),64);
    bufp->fullQData(oldp+3482,(vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src1),64);
    bufp->fullQData(oldp+3484,(vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src2),64);
    bufp->fullQData(oldp+3486,(vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_quotient),64);
    bufp->fullQData(oldp+3488,(vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_remainder),64);
    bufp->fullQData(oldp+3490,(vlSelf->CoreTop__DOT__EX__DOT___shift_result_T),64);
    bufp->fullQData(oldp+3492,(vlSelf->CoreTop__DOT__EX__DOT__src2),64);
    bufp->fullBit(oldp+3494,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1 
                                            >> 0x1fU)))));
    bufp->fullBit(oldp+3495,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_quotient 
                                            >> 0x1fU)))));
    bufp->fullBit(oldp+3496,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_remainder 
                                            >> 0x1fU)))));
    bufp->fullBit(oldp+3497,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_10 
                                            >> 0x1fU)))));
    bufp->fullBit(oldp+3498,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_5[0U] 
                              >> 0x1fU)));
    bufp->fullBit(oldp+3499,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_16[0U] 
                              >> 0x1fU)));
    bufp->fullBit(oldp+3500,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_25 
                              >> 0x1fU)));
    bufp->fullBit(oldp+3501,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_31 
                              >> 0x1fU)));
    bufp->fullBit(oldp+3502,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T 
                                            >> 0x1fU)))));
    bufp->fullBit(oldp+3503,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__src2 
                                            >> 0x1fU)))));
    bufp->fullBit(oldp+3504,(vlSelf->CoreTop__DOT__EX__DOT__branch_flag));
    bufp->fullBit(oldp+3505,((1U & (IData)((vlSelf->CoreTop__DOT__MMIO_io_in_rdata_rep_bits_rdata 
                                            >> 0x3fU)))));
    bufp->fullBit(oldp+3506,((1U & (IData)((vlSelf->CoreTop__DOT__MMIO_io_in_rdata_rep_bits_rdata 
                                            >> 0x1fU)))));
    bufp->fullBit(oldp+3507,((1U & ((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_27) 
                                    >> 7U))));
    bufp->fullBit(oldp+3508,((1U & ((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_44) 
                                    >> 0xfU))));
    bufp->fullBit(oldp+3509,(vlSelf->clock));
    bufp->fullBit(oldp+3510,(vlSelf->reset));
    bufp->fullQData(oldp+3511,(vlSelf->io_pc),64);
    bufp->fullIData(oldp+3513,(vlSelf->io_inst),32);
    bufp->fullBit(oldp+3514,(1U));
    bufp->fullCData(oldp+3515,(0U),5);
    bufp->fullCData(oldp+3516,(1U),5);
    bufp->fullCData(oldp+3517,(2U),5);
    bufp->fullCData(oldp+3518,(3U),5);
    bufp->fullCData(oldp+3519,(4U),5);
    bufp->fullCData(oldp+3520,(5U),5);
    bufp->fullCData(oldp+3521,(6U),5);
    bufp->fullCData(oldp+3522,(7U),5);
    bufp->fullCData(oldp+3523,(8U),5);
    bufp->fullCData(oldp+3524,(9U),5);
    bufp->fullCData(oldp+3525,(0xaU),5);
    bufp->fullCData(oldp+3526,(0xbU),5);
    bufp->fullCData(oldp+3527,(0xcU),5);
    bufp->fullCData(oldp+3528,(0xdU),5);
    bufp->fullCData(oldp+3529,(0xeU),5);
    bufp->fullCData(oldp+3530,(0xfU),5);
    bufp->fullCData(oldp+3531,(0x10U),5);
    bufp->fullCData(oldp+3532,(0x11U),5);
    bufp->fullCData(oldp+3533,(0x12U),5);
    bufp->fullCData(oldp+3534,(0x13U),5);
    bufp->fullCData(oldp+3535,(0x14U),5);
    bufp->fullCData(oldp+3536,(0x15U),5);
    bufp->fullCData(oldp+3537,(0x16U),5);
    bufp->fullCData(oldp+3538,(0x17U),5);
    bufp->fullCData(oldp+3539,(0x18U),5);
    bufp->fullCData(oldp+3540,(0x19U),5);
    bufp->fullCData(oldp+3541,(0x1aU),5);
    bufp->fullCData(oldp+3542,(0x1bU),5);
    bufp->fullCData(oldp+3543,(0x1cU),5);
    bufp->fullCData(oldp+3544,(0x1dU),5);
    bufp->fullCData(oldp+3545,(0x1eU),5);
    bufp->fullCData(oldp+3546,(0x1fU),5);
    bufp->fullCData(oldp+3547,(0U),2);
    bufp->fullCData(oldp+3548,(1U),4);
    bufp->fullCData(oldp+3549,(3U),3);
    bufp->fullCData(oldp+3550,(0U),3);
    bufp->fullCData(oldp+3551,(1U),2);
    bufp->fullCData(oldp+3552,(0U),4);
    bufp->fullCData(oldp+3553,(vlSelf->CoreTop__DOT__MMEM_rd_id),4);
    bufp->fullCData(oldp+3554,(vlSelf->CoreTop__DOT__MMEM_rd_resp),2);
    bufp->fullCData(oldp+3555,(vlSelf->CoreTop__DOT__MMEM_wr_id),4);
    bufp->fullBit(oldp+3556,(0U));
    bufp->fullIData(oldp+3557,(0x40U),32);
    bufp->fullCData(oldp+3558,(2U),2);
}
