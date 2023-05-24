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
    tracep->declBit(c+3443,"clock", false,-1);
    tracep->declBit(c+3444,"reset", false,-1);
    tracep->declQuad(c+3445,"io_pc", false,-1, 63,0);
    tracep->declBus(c+3447,"io_inst", false,-1, 31,0);
    tracep->pushNamePrefix("CoreTop ");
    tracep->declBit(c+3443,"clock", false,-1);
    tracep->declBit(c+3444,"reset", false,-1);
    tracep->declQuad(c+3445,"io_pc", false,-1, 63,0);
    tracep->declBus(c+3447,"io_inst", false,-1, 31,0);
    tracep->declBit(c+3443,"IF_clock", false,-1);
    tracep->declBit(c+3444,"IF_reset", false,-1);
    tracep->declBit(c+3372,"IF_io_branch_io_is_branch", false,-1);
    tracep->declBit(c+1,"IF_io_branch_io_is_jump", false,-1);
    tracep->declQuad(c+3373,"IF_io_branch_io_dnpc", false,-1, 63,0);
    tracep->declBit(c+2,"IF_io_cache_req_addr_req_valid", false,-1);
    tracep->declQuad(c+3,"IF_io_cache_req_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+2,"IF_io_cache_req_rdata_rep_ready", false,-1);
    tracep->declBit(c+3401,"IF_io_cache_req_rdata_rep_valid", false,-1);
    tracep->declQuad(c+5,"IF_io_cache_req_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+2,"IF_io_out_ready", false,-1);
    tracep->declBit(c+3401,"IF_io_out_valid", false,-1);
    tracep->declQuad(c+3,"IF_io_out_bits_PC", false,-1, 63,0);
    tracep->declBus(c+3375,"IF_io_out_bits_Inst", false,-1, 31,0);
    tracep->declBit(c+3402,"IF_io_flush", false,-1);
    tracep->declBit(c+2,"ID_io_in_ready", false,-1);
    tracep->declBit(c+7,"ID_io_in_valid", false,-1);
    tracep->declQuad(c+8,"ID_io_in_bits_PC", false,-1, 63,0);
    tracep->declBus(c+10,"ID_io_in_bits_Inst", false,-1, 31,0);
    tracep->declQuad(c+3376,"ID_io_REG1", false,-1, 63,0);
    tracep->declQuad(c+3378,"ID_io_REG2", false,-1, 63,0);
    tracep->declBit(c+3402,"ID_io_flush", false,-1);
    tracep->declBit(c+2,"ID_io_out_ready", false,-1);
    tracep->declBit(c+7,"ID_io_out_valid", false,-1);
    tracep->declBus(c+11,"ID_io_out_bits_ctrl_signal_src1Type", false,-1, 2,0);
    tracep->declBus(c+12,"ID_io_out_bits_ctrl_signal_src2Type", false,-1, 2,0);
    tracep->declBus(c+13,"ID_io_out_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+3380,"ID_io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBus(c+14,"ID_io_out_bits_ctrl_signal_rfSrc1", false,-1, 4,0);
    tracep->declBus(c+15,"ID_io_out_bits_ctrl_signal_rfSrc2", false,-1, 4,0);
    tracep->declBit(c+16,"ID_io_out_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+17,"ID_io_out_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declBus(c+18,"ID_io_out_bits_ctrl_signal_rfDest", false,-1, 4,0);
    tracep->declQuad(c+3376,"ID_io_out_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+3378,"ID_io_out_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+19,"ID_io_out_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declQuad(c+8,"ID_io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+10,"ID_io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declBit(c+3443,"EX_clock", false,-1);
    tracep->declBit(c+3444,"EX_reset", false,-1);
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
    tracep->declQuad(c+3403,"EX_io_src1", false,-1, 63,0);
    tracep->declQuad(c+3405,"EX_io_src2", false,-1, 63,0);
    tracep->declBit(c+3372,"EX_io_branchIO_is_branch", false,-1);
    tracep->declBit(c+1,"EX_io_branchIO_is_jump", false,-1);
    tracep->declQuad(c+3373,"EX_io_branchIO_dnpc", false,-1, 63,0);
    tracep->declBit(c+40,"EX_io_out_ready", false,-1);
    tracep->declBit(c+41,"EX_io_out_valid", false,-1);
    tracep->declBus(c+24,"EX_io_out_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+25,"EX_io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+28,"EX_io_out_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+29,"EX_io_out_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+37,"EX_io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+39,"EX_io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+3373,"EX_io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+30,"EX_io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+42,"EX_io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+3407,"EX_io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+3381,"EX_io_out_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+3383,"EX_io_out_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+35,"EX_io_out_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declBit(c+43,"EX_io_is_break", false,-1);
    tracep->declBit(c+3402,"EX_io_is_flush", false,-1);
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
    tracep->declBit(c+3448,"rf_bypass_io_Reg1_MPORT_en", false,-1);
    tracep->declBus(c+14,"rf_bypass_io_Reg1_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+180,"rf_bypass_io_Reg1_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3448,"rf_bypass_io_Reg2_MPORT_en", false,-1);
    tracep->declBus(c+15,"rf_bypass_io_Reg2_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+182,"rf_bypass_io_Reg2_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3448,"rf_DIP_io_rf_0_MPORT_en", false,-1);
    tracep->declBus(c+3449,"rf_DIP_io_rf_0_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+45,"rf_DIP_io_rf_0_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3448,"rf_DIP_io_rf_1_MPORT_en", false,-1);
    tracep->declBus(c+3450,"rf_DIP_io_rf_1_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+47,"rf_DIP_io_rf_1_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3448,"rf_DIP_io_rf_2_MPORT_en", false,-1);
    tracep->declBus(c+3451,"rf_DIP_io_rf_2_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+49,"rf_DIP_io_rf_2_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3448,"rf_DIP_io_rf_3_MPORT_en", false,-1);
    tracep->declBus(c+3452,"rf_DIP_io_rf_3_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+51,"rf_DIP_io_rf_3_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3448,"rf_DIP_io_rf_4_MPORT_en", false,-1);
    tracep->declBus(c+3453,"rf_DIP_io_rf_4_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+53,"rf_DIP_io_rf_4_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3448,"rf_DIP_io_rf_5_MPORT_en", false,-1);
    tracep->declBus(c+3454,"rf_DIP_io_rf_5_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+55,"rf_DIP_io_rf_5_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3448,"rf_DIP_io_rf_6_MPORT_en", false,-1);
    tracep->declBus(c+3455,"rf_DIP_io_rf_6_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+57,"rf_DIP_io_rf_6_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3448,"rf_DIP_io_rf_7_MPORT_en", false,-1);
    tracep->declBus(c+3456,"rf_DIP_io_rf_7_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+59,"rf_DIP_io_rf_7_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3448,"rf_DIP_io_rf_8_MPORT_en", false,-1);
    tracep->declBus(c+3457,"rf_DIP_io_rf_8_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+61,"rf_DIP_io_rf_8_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3448,"rf_DIP_io_rf_9_MPORT_en", false,-1);
    tracep->declBus(c+3458,"rf_DIP_io_rf_9_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+63,"rf_DIP_io_rf_9_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3448,"rf_DIP_io_rf_10_MPORT_en", false,-1);
    tracep->declBus(c+3459,"rf_DIP_io_rf_10_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+65,"rf_DIP_io_rf_10_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3448,"rf_DIP_io_rf_11_MPORT_en", false,-1);
    tracep->declBus(c+3460,"rf_DIP_io_rf_11_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+67,"rf_DIP_io_rf_11_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3448,"rf_DIP_io_rf_12_MPORT_en", false,-1);
    tracep->declBus(c+3461,"rf_DIP_io_rf_12_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+69,"rf_DIP_io_rf_12_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3448,"rf_DIP_io_rf_13_MPORT_en", false,-1);
    tracep->declBus(c+3462,"rf_DIP_io_rf_13_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+71,"rf_DIP_io_rf_13_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3448,"rf_DIP_io_rf_14_MPORT_en", false,-1);
    tracep->declBus(c+3463,"rf_DIP_io_rf_14_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+73,"rf_DIP_io_rf_14_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3448,"rf_DIP_io_rf_15_MPORT_en", false,-1);
    tracep->declBus(c+3464,"rf_DIP_io_rf_15_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+75,"rf_DIP_io_rf_15_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3448,"rf_DIP_io_rf_16_MPORT_en", false,-1);
    tracep->declBus(c+3465,"rf_DIP_io_rf_16_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+77,"rf_DIP_io_rf_16_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3448,"rf_DIP_io_rf_17_MPORT_en", false,-1);
    tracep->declBus(c+3466,"rf_DIP_io_rf_17_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+79,"rf_DIP_io_rf_17_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3448,"rf_DIP_io_rf_18_MPORT_en", false,-1);
    tracep->declBus(c+3467,"rf_DIP_io_rf_18_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+81,"rf_DIP_io_rf_18_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3448,"rf_DIP_io_rf_19_MPORT_en", false,-1);
    tracep->declBus(c+3468,"rf_DIP_io_rf_19_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+83,"rf_DIP_io_rf_19_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3448,"rf_DIP_io_rf_20_MPORT_en", false,-1);
    tracep->declBus(c+3469,"rf_DIP_io_rf_20_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+85,"rf_DIP_io_rf_20_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3448,"rf_DIP_io_rf_21_MPORT_en", false,-1);
    tracep->declBus(c+3470,"rf_DIP_io_rf_21_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+87,"rf_DIP_io_rf_21_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3448,"rf_DIP_io_rf_22_MPORT_en", false,-1);
    tracep->declBus(c+3471,"rf_DIP_io_rf_22_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+89,"rf_DIP_io_rf_22_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3448,"rf_DIP_io_rf_23_MPORT_en", false,-1);
    tracep->declBus(c+3472,"rf_DIP_io_rf_23_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+91,"rf_DIP_io_rf_23_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3448,"rf_DIP_io_rf_24_MPORT_en", false,-1);
    tracep->declBus(c+3473,"rf_DIP_io_rf_24_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+93,"rf_DIP_io_rf_24_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3448,"rf_DIP_io_rf_25_MPORT_en", false,-1);
    tracep->declBus(c+3474,"rf_DIP_io_rf_25_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+95,"rf_DIP_io_rf_25_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3448,"rf_DIP_io_rf_26_MPORT_en", false,-1);
    tracep->declBus(c+3475,"rf_DIP_io_rf_26_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+97,"rf_DIP_io_rf_26_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3448,"rf_DIP_io_rf_27_MPORT_en", false,-1);
    tracep->declBus(c+3476,"rf_DIP_io_rf_27_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+99,"rf_DIP_io_rf_27_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3448,"rf_DIP_io_rf_28_MPORT_en", false,-1);
    tracep->declBus(c+3477,"rf_DIP_io_rf_28_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+101,"rf_DIP_io_rf_28_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3448,"rf_DIP_io_rf_29_MPORT_en", false,-1);
    tracep->declBus(c+3478,"rf_DIP_io_rf_29_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+103,"rf_DIP_io_rf_29_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3448,"rf_DIP_io_rf_30_MPORT_en", false,-1);
    tracep->declBus(c+3479,"rf_DIP_io_rf_30_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+105,"rf_DIP_io_rf_30_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3448,"rf_DIP_io_rf_31_MPORT_en", false,-1);
    tracep->declBus(c+3480,"rf_DIP_io_rf_31_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+107,"rf_DIP_io_rf_31_MPORT_data", false,-1, 63,0);
    tracep->declQuad(c+184,"rf_MPORT_data", false,-1, 63,0);
    tracep->declBus(c+186,"rf_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+3448,"rf_MPORT_mask", false,-1);
    tracep->declBit(c+187,"rf_MPORT_en", false,-1);
    tracep->declQuad(c+188,"mem_addr", false,-1, 63,0);
    tracep->declBit(c+3444,"mem_reset", false,-1);
    tracep->declBit(c+3443,"mem_clk", false,-1);
    tracep->declBit(c+190,"mem_we", false,-1);
    tracep->declBit(c+191,"mem_ce", false,-1);
    tracep->declQuad(c+192,"mem_wdata", false,-1, 63,0);
    tracep->declQuad(c+3409,"mem_rdata", false,-1, 63,0);
    tracep->declBus(c+194,"mem_wmask", false,-1, 7,0);
    tracep->declBit(c+40,"MEM_io_in_ready", false,-1);
    tracep->declBit(c+195,"MEM_io_in_valid", false,-1);
    tracep->declBus(c+196,"MEM_io_in_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+197,"MEM_io_in_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+198,"MEM_io_in_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+199,"MEM_io_in_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+200,"MEM_io_in_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+202,"MEM_io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+203,"MEM_io_in_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+205,"MEM_io_in_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declQuad(c+206,"MEM_io_in_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+208,"MEM_io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+210,"MEM_io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+212,"MEM_io_in_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declBit(c+3448,"MEM_io_out_ready", false,-1);
    tracep->declBit(c+214,"MEM_io_out_valid", false,-1);
    tracep->declBit(c+215,"MEM_io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+198,"MEM_io_out_bits_ctrl_signal_rfWen", false,-1);
    tracep->declQuad(c+200,"MEM_io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+202,"MEM_io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+203,"MEM_io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBit(c+216,"MEM_io_out_bits_ctrl_flow_skip", false,-1);
    tracep->declBus(c+205,"MEM_io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+217,"MEM_io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+3411,"MEM_io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declBit(c+218,"MEM_io_cache_io_addr_req_valid", false,-1);
    tracep->declQuad(c+219,"MEM_io_cache_io_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+221,"MEM_io_cache_io_addr_req_bits_ce", false,-1);
    tracep->declBit(c+222,"MEM_io_cache_io_addr_req_bits_we", false,-1);
    tracep->declBit(c+223,"MEM_io_cache_io_rdata_rep_valid", false,-1);
    tracep->declQuad(c+3413,"MEM_io_cache_io_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+224,"MEM_io_cache_io_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+226,"MEM_io_cache_io_wdata_req_bits_wmask", false,-1, 7,0);
    tracep->declBit(c+227,"MEM_io_cache_io_wdata_rep", false,-1);
    tracep->declBit(c+228,"WB_io_in_valid", false,-1);
    tracep->declBit(c+229,"WB_io_in_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+230,"WB_io_in_bits_ctrl_signal_rfWen", false,-1);
    tracep->declQuad(c+231,"WB_io_in_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+233,"WB_io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+234,"WB_io_in_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBit(c+236,"WB_io_in_bits_ctrl_flow_skip", false,-1);
    tracep->declBus(c+186,"WB_io_in_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declQuad(c+237,"WB_io_in_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declBit(c+3448,"WB_io_out_ready", false,-1);
    tracep->declBit(c+228,"WB_io_out_valid", false,-1);
    tracep->declBit(c+239,"WB_io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declQuad(c+231,"WB_io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+233,"WB_io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+234,"WB_io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBit(c+236,"WB_io_out_bits_ctrl_flow_skip", false,-1);
    tracep->declBus(c+186,"WB_io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+187,"WB_io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+237,"WB_io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+30,"bypass_io_EX_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+42,"bypass_io_EX_rf_rfWen", false,-1);
    tracep->declQuad(c+3407,"bypass_io_EX_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+205,"bypass_io_MEM_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+217,"bypass_io_MEM_rf_rfWen", false,-1);
    tracep->declQuad(c+3411,"bypass_io_MEM_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+186,"bypass_io_WB_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+187,"bypass_io_WB_rf_rfWen", false,-1);
    tracep->declQuad(c+237,"bypass_io_WB_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+240,"bypass_io_Reg1", false,-1, 63,0);
    tracep->declBus(c+14,"bypass_io_reg_index1", false,-1, 4,0);
    tracep->declQuad(c+242,"bypass_io_Reg2", false,-1, 63,0);
    tracep->declBus(c+15,"bypass_io_reg_index2", false,-1, 4,0);
    tracep->declQuad(c+3376,"bypass_io_Bypass_REG1", false,-1, 63,0);
    tracep->declQuad(c+3378,"bypass_io_Bypass_REG2", false,-1, 63,0);
    tracep->declBus(c+205,"mem_bypass_io_MEM_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+217,"mem_bypass_io_MEM_rf_rfWen", false,-1);
    tracep->declQuad(c+3411,"mem_bypass_io_MEM_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+31,"mem_bypass_io_Reg1", false,-1, 63,0);
    tracep->declBus(c+26,"mem_bypass_io_reg_index1", false,-1, 4,0);
    tracep->declQuad(c+33,"mem_bypass_io_Reg2", false,-1, 63,0);
    tracep->declBus(c+27,"mem_bypass_io_reg_index2", false,-1, 4,0);
    tracep->declQuad(c+3403,"mem_bypass_io_Bypass_REG1", false,-1, 63,0);
    tracep->declQuad(c+3405,"mem_bypass_io_Bypass_REG2", false,-1, 63,0);
    tracep->declBit(c+3443,"ICACHE_clock", false,-1);
    tracep->declBit(c+3444,"ICACHE_reset", false,-1);
    tracep->declBit(c+2,"ICACHE_io_in_addr_req_valid", false,-1);
    tracep->declQuad(c+3,"ICACHE_io_in_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+2,"ICACHE_io_in_rdata_rep_ready", false,-1);
    tracep->declBit(c+3401,"ICACHE_io_in_rdata_rep_valid", false,-1);
    tracep->declQuad(c+5,"ICACHE_io_in_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+3402,"ICACHE_io_flush", false,-1);
    tracep->declBit(c+244,"ICACHE_io_out_addr_req_ready", false,-1);
    tracep->declBit(c+245,"ICACHE_io_out_addr_req_valid", false,-1);
    tracep->declQuad(c+246,"ICACHE_io_out_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+245,"ICACHE_io_out_addr_req_bits_ce", false,-1);
    tracep->declBit(c+248,"ICACHE_io_out_rdata_rep_valid", false,-1);
    tracep->declQuad(c+249,"ICACHE_io_out_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+3443,"If_axi_birdge_clock", false,-1);
    tracep->declBit(c+3444,"If_axi_birdge_reset", false,-1);
    tracep->declBit(c+244,"If_axi_birdge_io_in_addr_req_ready", false,-1);
    tracep->declBit(c+245,"If_axi_birdge_io_in_addr_req_valid", false,-1);
    tracep->declQuad(c+246,"If_axi_birdge_io_in_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+245,"If_axi_birdge_io_in_addr_req_bits_ce", false,-1);
    tracep->declBit(c+248,"If_axi_birdge_io_in_rdata_rep_valid", false,-1);
    tracep->declQuad(c+249,"If_axi_birdge_io_in_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+251,"If_axi_birdge_io_out_raddr_req_valid", false,-1);
    tracep->declQuad(c+246,"If_axi_birdge_io_out_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+246,"If_axi_birdge_io_out_waddr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+252,"If_axi_birdge_io_out_rdata_rep_valid", false,-1);
    tracep->declQuad(c+249,"If_axi_birdge_io_out_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+253,"If_axi_birdge_io_out_wb_ready", false,-1);
    tracep->declBit(c+254,"If_axi_birdge_io_out_wb_valid", false,-1);
    tracep->declBit(c+3444,"IFMEM_reset", false,-1);
    tracep->declBit(c+3443,"IFMEM_clk", false,-1);
    tracep->declBit(c+251,"IFMEM_ar_valid", false,-1);
    tracep->declBit(c+255,"IFMEM_ar_ready", false,-1);
    tracep->declQuad(c+246,"IFMEM_araddr", false,-1, 63,0);
    tracep->declBit(c+252,"IFMEM_r_valid", false,-1);
    tracep->declBit(c+3448,"IFMEM_r_ready", false,-1);
    tracep->declQuad(c+249,"IFMEM_rdata", false,-1, 63,0);
    tracep->declBit(c+3481,"IFMEM_aw_valid", false,-1);
    tracep->declBit(c+255,"IFMEM_aw_ready", false,-1);
    tracep->declQuad(c+246,"IFMEM_awaddr", false,-1, 63,0);
    tracep->declBit(c+3481,"IFMEM_w_valid", false,-1);
    tracep->declBit(c+255,"IFMEM_w_ready", false,-1);
    tracep->declQuad(c+3482,"IFMEM_wdata", false,-1, 63,0);
    tracep->declBus(c+3484,"IFMEM_wstrb", false,-1, 7,0);
    tracep->declBit(c+254,"IFMEM_bvalid", false,-1);
    tracep->declBit(c+253,"IFMEM_bready", false,-1);
    tracep->declBus(c+3485,"IFMEM_bresp", false,-1, 1,0);
    tracep->declBit(c+3443,"MMIO_clock", false,-1);
    tracep->declBit(c+3444,"MMIO_reset", false,-1);
    tracep->declBit(c+218,"MMIO_io_in_addr_req_valid", false,-1);
    tracep->declQuad(c+219,"MMIO_io_in_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+221,"MMIO_io_in_addr_req_bits_ce", false,-1);
    tracep->declBit(c+222,"MMIO_io_in_addr_req_bits_we", false,-1);
    tracep->declBit(c+223,"MMIO_io_in_rdata_rep_valid", false,-1);
    tracep->declQuad(c+3413,"MMIO_io_in_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+224,"MMIO_io_in_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+226,"MMIO_io_in_wdata_req_bits_wmask", false,-1, 7,0);
    tracep->declBit(c+227,"MMIO_io_in_wdata_rep", false,-1);
    tracep->declQuad(c+188,"MMIO_io_out_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+191,"MMIO_io_out_addr_req_bits_ce", false,-1);
    tracep->declBit(c+190,"MMIO_io_out_addr_req_bits_we", false,-1);
    tracep->declQuad(c+3409,"MMIO_io_out_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+192,"MMIO_io_out_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+194,"MMIO_io_out_wdata_req_bits_wmask", false,-1, 7,0);
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
    tracep->declBit(c+195,"valid_2", false,-1);
    tracep->declBus(c+196,"MEM_io_in_bits_r_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+197,"MEM_io_in_bits_r_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+198,"MEM_io_in_bits_r_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+199,"MEM_io_in_bits_r_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+200,"MEM_io_in_bits_r_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+202,"MEM_io_in_bits_r_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+203,"MEM_io_in_bits_r_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+205,"MEM_io_in_bits_r_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declQuad(c+206,"MEM_io_in_bits_r_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+208,"MEM_io_in_bits_r_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+210,"MEM_io_in_bits_r_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+212,"MEM_io_in_bits_r_ctrl_data_Imm", false,-1, 63,0);
    tracep->declBit(c+228,"valid_3", false,-1);
    tracep->declBit(c+229,"WB_io_in_bits_r_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+230,"WB_io_in_bits_r_ctrl_signal_rfWen", false,-1);
    tracep->declQuad(c+231,"WB_io_in_bits_r_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+233,"WB_io_in_bits_r_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+234,"WB_io_in_bits_r_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBit(c+236,"WB_io_in_bits_r_ctrl_flow_skip", false,-1);
    tracep->declBus(c+186,"WB_io_in_bits_r_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declQuad(c+237,"WB_io_in_bits_r_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declBit(c+256,"DIP_io_is_break_REG", false,-1);
    tracep->declBit(c+44,"DIP_io_is_break_REG_1", false,-1);
    tracep->declBus(c+109,"DIP_io_inst_REG", false,-1, 31,0);
    tracep->declBit(c+115,"DIP_io_is_skip_REG", false,-1);
    tracep->declBit(c+112,"DIP_io_inst_valid_REG", false,-1);
    tracep->declQuad(c+110,"DIP_io_pc_REG", false,-1, 63,0);
    tracep->declQuad(c+113,"DIP_io_dnpc_REG", false,-1, 63,0);
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
        tracep->declQuad(c+257+i*2,"rf", true,(i+0), 63,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+321+i*1,"IN", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EX ");
    tracep->declBit(c+3443,"clock", false,-1);
    tracep->declBit(c+3444,"reset", false,-1);
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
    tracep->declQuad(c+3403,"io_src1", false,-1, 63,0);
    tracep->declQuad(c+3405,"io_src2", false,-1, 63,0);
    tracep->declBit(c+3372,"io_branchIO_is_branch", false,-1);
    tracep->declBit(c+1,"io_branchIO_is_jump", false,-1);
    tracep->declQuad(c+3373,"io_branchIO_dnpc", false,-1, 63,0);
    tracep->declBit(c+40,"io_out_ready", false,-1);
    tracep->declBit(c+41,"io_out_valid", false,-1);
    tracep->declBus(c+24,"io_out_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+25,"io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+28,"io_out_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+29,"io_out_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+37,"io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+39,"io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+3373,"io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+30,"io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+42,"io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+3407,"io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+3381,"io_out_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+3383,"io_out_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+35,"io_out_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declBit(c+43,"io_is_break", false,-1);
    tracep->declBit(c+3402,"io_is_flush", false,-1);
    tracep->declQuad(c+328,"CSRDIFF_mepc", false,-1, 63,0);
    tracep->declQuad(c+330,"CSRDIFF_mcause", false,-1, 63,0);
    tracep->declQuad(c+332,"CSRDIFF_mstatus", false,-1, 63,0);
    tracep->declQuad(c+334,"CSRDIFF_mtvec", false,-1, 63,0);
    tracep->declBit(c+3443,"mul_clock", false,-1);
    tracep->declBit(c+3444,"mul_reset", false,-1);
    tracep->declBit(c+336,"mul_io_in_valid", false,-1);
    tracep->declQuad(c+3385,"mul_io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+3387,"mul_io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declBit(c+337,"mul_io_out_valid", false,-1);
    tracep->declQuad(c+338,"mul_io_out_bits_result_result_lo", false,-1, 63,0);
    tracep->declBit(c+3443,"div_clock", false,-1);
    tracep->declBit(c+3444,"div_reset", false,-1);
    tracep->declBit(c+340,"div_io_in_valid", false,-1);
    tracep->declBit(c+341,"div_io_in_bits_ctrl_flow_div_signed", false,-1);
    tracep->declQuad(c+3415,"div_io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+3417,"div_io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declBit(c+342,"div_io_out_valid", false,-1);
    tracep->declQuad(c+3419,"div_io_out_bits_result_quotient", false,-1, 63,0);
    tracep->declQuad(c+3421,"div_io_out_bits_result_remainder", false,-1, 63,0);
    tracep->declBit(c+343,"is_mul", false,-1);
    tracep->declBit(c+344,"is_div", false,-1);
    tracep->declBit(c+345,"is_divw", false,-1);
    tracep->declBit(c+341,"is_div_sign", false,-1);
    tracep->declQuad(c+346,"mepc", false,-1, 63,0);
    tracep->declQuad(c+348,"mcause", false,-1, 63,0);
    tracep->declQuad(c+350,"mstatus", false,-1, 63,0);
    tracep->declQuad(c+352,"mtvec", false,-1, 63,0);
    tracep->declQuad(c+354,"mie", false,-1, 63,0);
    tracep->declQuad(c+356,"mip", false,-1, 63,0);
    tracep->declQuad(c+3423,"src1", false,-1, 63,0);
    tracep->declQuad(c+3425,"src2", false,-1, 63,0);
    tracep->declBit(c+3427,"alu_result_sign", false,-1);
    tracep->declBit(c+358,"alu_result_sign_2", false,-1);
    tracep->declBit(c+3428,"alu_result_sign_3", false,-1);
    tracep->declBit(c+3429,"alu_result_sign_4", false,-1);
    tracep->declBit(c+3430,"alu_result_sign_6", false,-1);
    tracep->declQuad(c+3389,"alu_result", false,-1, 63,0);
    tracep->declBit(c+3431,"shift_result_sign", false,-1);
    tracep->declBit(c+3432,"shift_result_sign_1", false,-1);
    tracep->declBit(c+3433,"shift_result_sign_2", false,-1);
    tracep->declBit(c+3434,"shift_result_sign_3", false,-1);
    tracep->declBit(c+3435,"div_io_in_bits_ctrl_data_src1_sign", false,-1);
    tracep->declBit(c+3436,"div_io_in_bits_ctrl_data_src2_sign", false,-1);
    tracep->declQuad(c+3391,"compar_result", false,-1, 63,0);
    tracep->declQuad(c+359,"jump_result", false,-1, 63,0);
    tracep->declQuad(c+3393,"shift_result", false,-1, 63,0);
    tracep->declQuad(c+361,"branch_result", false,-1, 63,0);
    tracep->declBit(c+3437,"branch_flag", false,-1);
    tracep->declQuad(c+363,"csr_data", false,-1, 63,0);
    tracep->declQuad(c+365,"CSRDIFF_io_mtvec_REG", false,-1, 63,0);
    tracep->declQuad(c+334,"CSRDIFF_io_mtvec_REG_1", false,-1, 63,0);
    tracep->declQuad(c+367,"CSRDIFF_io_mcause_REG", false,-1, 63,0);
    tracep->declQuad(c+330,"CSRDIFF_io_mcause_REG_1", false,-1, 63,0);
    tracep->declQuad(c+369,"CSRDIFF_io_mepc_REG", false,-1, 63,0);
    tracep->declQuad(c+328,"CSRDIFF_io_mepc_REG_1", false,-1, 63,0);
    tracep->declQuad(c+371,"CSRDIFF_io_mstatus_REG", false,-1, 63,0);
    tracep->declQuad(c+332,"CSRDIFF_io_mstatus_REG_1", false,-1, 63,0);
    tracep->pushNamePrefix("CSRDIFF ");
    tracep->declQuad(c+328,"mepc", false,-1, 63,0);
    tracep->declQuad(c+330,"mcause", false,-1, 63,0);
    tracep->declQuad(c+332,"mstatus", false,-1, 63,0);
    tracep->declQuad(c+334,"mtvec", false,-1, 63,0);
    for (int i = 0; i < 6; ++i) {
        tracep->declQuad(c+373+i*2,"inst_csr", true,(i+0), 63,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("div ");
    tracep->declBit(c+3443,"clock", false,-1);
    tracep->declBit(c+3444,"reset", false,-1);
    tracep->declBit(c+340,"io_in_valid", false,-1);
    tracep->declBit(c+341,"io_in_bits_ctrl_flow_div_signed", false,-1);
    tracep->declQuad(c+3415,"io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+3417,"io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declBit(c+342,"io_out_valid", false,-1);
    tracep->declQuad(c+3419,"io_out_bits_result_quotient", false,-1, 63,0);
    tracep->declQuad(c+3421,"io_out_bits_result_remainder", false,-1, 63,0);
    tracep->declArray(c+385,"dividend", false,-1, 127,0);
    tracep->declQuad(c+389,"divisor", false,-1, 63,0);
    tracep->declQuad(c+391,"S", false,-1, 63,0);
    tracep->declBus(c+393,"state", false,-1, 1,0);
    tracep->declBus(c+394,"count", false,-1, 5,0);
    tracep->declBit(c+395,"wrap_wrap", false,-1);
    tracep->declBit(c+396,"s", false,-1);
    tracep->declArray(c+397,"res_div", false,-1, 64,0);
    tracep->declQuad(c+400,"negative_s", false,-1, 63,0);
    tracep->declQuad(c+402,"negative_r", false,-1, 63,0);
    tracep->declQuad(c+3395,"s_o", false,-1, 63,0);
    tracep->declQuad(c+3397,"r_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mul ");
    tracep->declBit(c+3443,"clock", false,-1);
    tracep->declBit(c+3444,"reset", false,-1);
    tracep->declBit(c+336,"io_in_valid", false,-1);
    tracep->declQuad(c+3385,"io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+3387,"io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declBit(c+337,"io_out_valid", false,-1);
    tracep->declQuad(c+338,"io_out_bits_result_result_lo", false,-1, 63,0);
    tracep->declBit(c+3443,"mult_clock", false,-1);
    tracep->declBit(c+3444,"mult_reset", false,-1);
    tracep->declBit(c+336,"mult_io_in_valid", false,-1);
    tracep->declQuad(c+3385,"mult_io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+3387,"mult_io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declBit(c+337,"mult_io_out_valid", false,-1);
    tracep->declQuad(c+338,"mult_io_out_bits_result_result_lo", false,-1, 63,0);
    tracep->pushNamePrefix("mult ");
    tracep->declBit(c+3443,"clock", false,-1);
    tracep->declBit(c+3444,"reset", false,-1);
    tracep->declBit(c+336,"io_in_valid", false,-1);
    tracep->declQuad(c+3385,"io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+3387,"io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declBit(c+337,"io_out_valid", false,-1);
    tracep->declQuad(c+338,"io_out_bits_result_result_lo", false,-1, 63,0);
    tracep->declBus(c+404,"partial_io_y_3", false,-1, 2,0);
    tracep->declArray(c+405,"partial_io_x", false,-1, 131,0);
    tracep->declArray(c+410,"partial_io_p", false,-1, 131,0);
    tracep->declBit(c+415,"partial_io_c", false,-1);
    tracep->declArray(c+416,"multiplier", false,-1, 65,0);
    tracep->declArray(c+405,"multiplicand", false,-1, 131,0);
    tracep->declArray(c+419,"p", false,-1, 131,0);
    tracep->declBus(c+424,"count", false,-1, 6,0);
    tracep->declArray(c+425,"temp", false,-1, 131,0);
    tracep->declBit(c+430,"p_sign", false,-1);
    tracep->pushNamePrefix("partial ");
    tracep->declBus(c+404,"io_y_3", false,-1, 2,0);
    tracep->declArray(c+405,"io_x", false,-1, 131,0);
    tracep->declArray(c+410,"io_p", false,-1, 131,0);
    tracep->declBit(c+415,"io_c", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("ICACHE ");
    tracep->declBit(c+3443,"clock", false,-1);
    tracep->declBit(c+3444,"reset", false,-1);
    tracep->declBit(c+2,"io_in_addr_req_valid", false,-1);
    tracep->declQuad(c+3,"io_in_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+2,"io_in_rdata_rep_ready", false,-1);
    tracep->declBit(c+3401,"io_in_rdata_rep_valid", false,-1);
    tracep->declQuad(c+5,"io_in_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+3402,"io_flush", false,-1);
    tracep->declBit(c+244,"io_out_addr_req_ready", false,-1);
    tracep->declBit(c+245,"io_out_addr_req_valid", false,-1);
    tracep->declQuad(c+246,"io_out_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+245,"io_out_addr_req_bits_ce", false,-1);
    tracep->declBit(c+248,"io_out_rdata_rep_valid", false,-1);
    tracep->declQuad(c+249,"io_out_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+3443,"Cache_data_clock", false,-1);
    tracep->declBit(c+431,"Cache_data_io_in_valid", false,-1);
    tracep->declQuad(c+3,"Cache_data_io_in_addr", false,-1, 63,0);
    tracep->declQuad(c+432,"Cache_data_io_write_bus_addr", false,-1, 63,0);
    tracep->declBit(c+434,"Cache_data_io_write_bus_valid", false,-1);
    tracep->declBus(c+435,"Cache_data_io_write_bus_waymask", false,-1, 1,0);
    tracep->declArray(c+436,"Cache_data_io_write_bus_wdata", false,-1, 511,0);
    tracep->declBit(c+431,"Cache_data_io_out_valid", false,-1);
    tracep->declQuad(c+452,"Cache_data_io_out_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+454,"Cache_data_io_out_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+456,"Cache_data_io_out_bits_meat_valid_0", false,-1);
    tracep->declBit(c+457,"Cache_data_io_out_bits_meat_valid_1", false,-1);
    tracep->declArray(c+458,"Cache_data_io_out_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+474,"Cache_data_io_out_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+490,"Cache_data_io_out_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBus(c+492,"Cache_data_io_out_bits_ctrl_data_index", false,-1, 4,0);
    tracep->declBus(c+493,"Cache_data_io_out_bits_ctrl_data_offset", false,-1, 5,0);
    tracep->declBit(c+494,"Scanf_io_in_valid", false,-1);
    tracep->declQuad(c+452,"Scanf_io_in_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+454,"Scanf_io_in_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+456,"Scanf_io_in_bits_meat_valid_0", false,-1);
    tracep->declBit(c+457,"Scanf_io_in_bits_meat_valid_1", false,-1);
    tracep->declArray(c+458,"Scanf_io_in_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+474,"Scanf_io_in_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+490,"Scanf_io_in_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBus(c+492,"Scanf_io_in_bits_ctrl_data_index", false,-1, 4,0);
    tracep->declBit(c+495,"Scanf_io_out_bits_hit", false,-1);
    tracep->declArray(c+496,"Scanf_io_out_bits_data", false,-1, 511,0);
    tracep->declBus(c+492,"Scanf_io_out_bits_meta_ctrl_data_index", false,-1, 4,0);
    tracep->declBit(c+512,"Scanf_io_out_bits_hit_way_0", false,-1);
    tracep->declBit(c+513,"Scanf_io_out_bits_hit_way_1", false,-1);
    tracep->declQuad(c+452,"Scanf_io_out_bits_tag_0", false,-1, 52,0);
    tracep->declQuad(c+454,"Scanf_io_out_bits_tag_1", false,-1, 52,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+514+i*1,"lru", true,(i+0));
    }
    tracep->declBit(c+546,"lru_lru_w_MPORT_en", false,-1);
    tracep->declBus(c+547,"lru_lru_w_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+548,"lru_lru_w_MPORT_data", false,-1);
    tracep->declBit(c+3448,"lru_MPORT_data", false,-1);
    tracep->declBus(c+492,"lru_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+3448,"lru_MPORT_mask", false,-1);
    tracep->declBit(c+549,"lru_MPORT_en", false,-1);
    tracep->declBit(c+3481,"lru_MPORT_1_data", false,-1);
    tracep->declBus(c+492,"lru_MPORT_1_addr", false,-1, 4,0);
    tracep->declBit(c+3448,"lru_MPORT_1_mask", false,-1);
    tracep->declBit(c+550,"lru_MPORT_1_en", false,-1);
    tracep->declBit(c+3481,"lru_MPORT_2_data", false,-1);
    tracep->declBus(c+492,"lru_MPORT_2_addr", false,-1, 4,0);
    tracep->declBit(c+3448,"lru_MPORT_2_mask", false,-1);
    tracep->declBit(c+551,"lru_MPORT_2_en", false,-1);
    tracep->declBit(c+3448,"lru_MPORT_3_data", false,-1);
    tracep->declBus(c+492,"lru_MPORT_3_addr", false,-1, 4,0);
    tracep->declBit(c+3448,"lru_MPORT_3_mask", false,-1);
    tracep->declBit(c+552,"lru_MPORT_3_en", false,-1);
    tracep->declBit(c+546,"lru_lru_w_MPORT_en_pipe_0", false,-1);
    tracep->declBus(c+547,"lru_lru_w_MPORT_addr_pipe_0", false,-1, 4,0);
    tracep->declBus(c+553,"state", false,-1, 1,0);
    tracep->declArray(c+554,"data_line_reg", false,-1, 511,0);
    tracep->declQuad(c+246,"mem_addr_reg", false,-1, 63,0);
    tracep->declBit(c+570,"lru_r", false,-1);
    tracep->declBus(c+571,"count", false,-1, 3,0);
    tracep->declBit(c+434,"s", false,-1);
    tracep->declBit(c+512,"hit_way_0", false,-1);
    tracep->declBit(c+513,"hit_way_1", false,-1);
    tracep->declBit(c+548,"lru_w", false,-1);
    tracep->declQuad(c+572,"hit_data", false,-1, 63,0);
    tracep->declQuad(c+574,"mem_data", false,-1, 63,0);
    tracep->declBit(c+494,"Scanf_io_in_valid_REG", false,-1);
    tracep->pushNamePrefix("Cache_data ");
    tracep->declBit(c+3443,"clock", false,-1);
    tracep->declBit(c+431,"io_in_valid", false,-1);
    tracep->declQuad(c+3,"io_in_addr", false,-1, 63,0);
    tracep->declQuad(c+432,"io_write_bus_addr", false,-1, 63,0);
    tracep->declBit(c+434,"io_write_bus_valid", false,-1);
    tracep->declBus(c+435,"io_write_bus_waymask", false,-1, 1,0);
    tracep->declArray(c+436,"io_write_bus_wdata", false,-1, 511,0);
    tracep->declBit(c+431,"io_out_valid", false,-1);
    tracep->declQuad(c+452,"io_out_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+454,"io_out_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+456,"io_out_bits_meat_valid_0", false,-1);
    tracep->declBit(c+457,"io_out_bits_meat_valid_1", false,-1);
    tracep->declArray(c+458,"io_out_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+474,"io_out_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+490,"io_out_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBus(c+492,"io_out_bits_ctrl_data_index", false,-1, 4,0);
    tracep->declBus(c+493,"io_out_bits_ctrl_data_offset", false,-1, 5,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declArray(c+576+i*16,"data_0", true,(i+0), 511,0);
    }
    tracep->declBit(c+1088,"data_0_data_w_en", false,-1);
    tracep->declBus(c+1089,"data_0_data_w_addr", false,-1, 4,0);
    tracep->declArray(c+458,"data_0_data_w_data", false,-1, 511,0);
    tracep->declArray(c+436,"data_0_MPORT_data", false,-1, 511,0);
    tracep->declBus(c+1090,"data_0_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+1091,"data_0_MPORT_mask", false,-1);
    tracep->declBit(c+434,"data_0_MPORT_en", false,-1);
    tracep->declBit(c+1088,"data_0_data_w_en_pipe_0", false,-1);
    tracep->declBus(c+1089,"data_0_data_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declArray(c+1092+i*16,"data_1", true,(i+0), 511,0);
    }
    tracep->declBit(c+1604,"data_1_data_w_en", false,-1);
    tracep->declBus(c+1089,"data_1_data_w_addr", false,-1, 4,0);
    tracep->declArray(c+474,"data_1_data_w_data", false,-1, 511,0);
    tracep->declArray(c+436,"data_1_MPORT_data", false,-1, 511,0);
    tracep->declBus(c+1090,"data_1_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+1605,"data_1_MPORT_mask", false,-1);
    tracep->declBit(c+434,"data_1_MPORT_en", false,-1);
    tracep->declBit(c+1604,"data_1_data_w_en_pipe_0", false,-1);
    tracep->declBus(c+1089,"data_1_data_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+1606+i*2,"TAG_0", true,(i+0), 52,0);
    }
    tracep->declBit(c+1670,"TAG_0_tag_w_en", false,-1);
    tracep->declBus(c+1671,"TAG_0_tag_w_addr", false,-1, 4,0);
    tracep->declQuad(c+452,"TAG_0_tag_w_data", false,-1, 52,0);
    tracep->declQuad(c+1672,"TAG_0_MPORT_1_data", false,-1, 52,0);
    tracep->declBus(c+1090,"TAG_0_MPORT_1_addr", false,-1, 4,0);
    tracep->declBit(c+1091,"TAG_0_MPORT_1_mask", false,-1);
    tracep->declBit(c+434,"TAG_0_MPORT_1_en", false,-1);
    tracep->declBit(c+1670,"TAG_0_tag_w_en_pipe_0", false,-1);
    tracep->declBus(c+1671,"TAG_0_tag_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+1674+i*2,"TAG_1", true,(i+0), 52,0);
    }
    tracep->declBit(c+1738,"TAG_1_tag_w_en", false,-1);
    tracep->declBus(c+1739,"TAG_1_tag_w_addr", false,-1, 4,0);
    tracep->declQuad(c+454,"TAG_1_tag_w_data", false,-1, 52,0);
    tracep->declQuad(c+1672,"TAG_1_MPORT_1_data", false,-1, 52,0);
    tracep->declBus(c+1090,"TAG_1_MPORT_1_addr", false,-1, 4,0);
    tracep->declBit(c+1605,"TAG_1_MPORT_1_mask", false,-1);
    tracep->declBit(c+434,"TAG_1_MPORT_1_en", false,-1);
    tracep->declBit(c+1738,"TAG_1_tag_w_en_pipe_0", false,-1);
    tracep->declBus(c+1739,"TAG_1_tag_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+1740+i*1,"data_valid_0", true,(i+0));
    }
    tracep->declBit(c+1772,"data_valid_0_valid_w_en", false,-1);
    tracep->declBus(c+1773,"data_valid_0_valid_w_addr", false,-1, 4,0);
    tracep->declBit(c+456,"data_valid_0_valid_w_data", false,-1);
    tracep->declBit(c+3448,"data_valid_0_MPORT_2_data", false,-1);
    tracep->declBus(c+1090,"data_valid_0_MPORT_2_addr", false,-1, 4,0);
    tracep->declBit(c+1091,"data_valid_0_MPORT_2_mask", false,-1);
    tracep->declBit(c+434,"data_valid_0_MPORT_2_en", false,-1);
    tracep->declBit(c+1772,"data_valid_0_valid_w_en_pipe_0", false,-1);
    tracep->declBus(c+1773,"data_valid_0_valid_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+1774+i*1,"data_valid_1", true,(i+0));
    }
    tracep->declBit(c+1806,"data_valid_1_valid_w_en", false,-1);
    tracep->declBus(c+1807,"data_valid_1_valid_w_addr", false,-1, 4,0);
    tracep->declBit(c+457,"data_valid_1_valid_w_data", false,-1);
    tracep->declBit(c+3448,"data_valid_1_MPORT_2_data", false,-1);
    tracep->declBus(c+1090,"data_valid_1_MPORT_2_addr", false,-1, 4,0);
    tracep->declBit(c+1605,"data_valid_1_MPORT_2_mask", false,-1);
    tracep->declBit(c+434,"data_valid_1_MPORT_2_en", false,-1);
    tracep->declBit(c+1806,"data_valid_1_valid_w_en_pipe_0", false,-1);
    tracep->declBus(c+1807,"data_valid_1_valid_w_addr_pipe_0", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Scanf ");
    tracep->declBit(c+494,"io_in_valid", false,-1);
    tracep->declQuad(c+452,"io_in_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+454,"io_in_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+456,"io_in_bits_meat_valid_0", false,-1);
    tracep->declBit(c+457,"io_in_bits_meat_valid_1", false,-1);
    tracep->declArray(c+458,"io_in_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+474,"io_in_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+490,"io_in_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBus(c+492,"io_in_bits_ctrl_data_index", false,-1, 4,0);
    tracep->declBit(c+495,"io_out_bits_hit", false,-1);
    tracep->declArray(c+496,"io_out_bits_data", false,-1, 511,0);
    tracep->declBus(c+492,"io_out_bits_meta_ctrl_data_index", false,-1, 4,0);
    tracep->declBit(c+512,"io_out_bits_hit_way_0", false,-1);
    tracep->declBit(c+513,"io_out_bits_hit_way_1", false,-1);
    tracep->declQuad(c+452,"io_out_bits_tag_0", false,-1, 52,0);
    tracep->declQuad(c+454,"io_out_bits_tag_1", false,-1, 52,0);
    tracep->declBit(c+1808,"hit_way_0_result", false,-1);
    tracep->declBit(c+1809,"hit_way_1_result", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ID ");
    tracep->declBit(c+2,"io_in_ready", false,-1);
    tracep->declBit(c+7,"io_in_valid", false,-1);
    tracep->declQuad(c+8,"io_in_bits_PC", false,-1, 63,0);
    tracep->declBus(c+10,"io_in_bits_Inst", false,-1, 31,0);
    tracep->declQuad(c+3376,"io_REG1", false,-1, 63,0);
    tracep->declQuad(c+3378,"io_REG2", false,-1, 63,0);
    tracep->declBit(c+3402,"io_flush", false,-1);
    tracep->declBit(c+2,"io_out_ready", false,-1);
    tracep->declBit(c+7,"io_out_valid", false,-1);
    tracep->declBus(c+11,"io_out_bits_ctrl_signal_src1Type", false,-1, 2,0);
    tracep->declBus(c+12,"io_out_bits_ctrl_signal_src2Type", false,-1, 2,0);
    tracep->declBus(c+13,"io_out_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+3380,"io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBus(c+14,"io_out_bits_ctrl_signal_rfSrc1", false,-1, 4,0);
    tracep->declBus(c+15,"io_out_bits_ctrl_signal_rfSrc2", false,-1, 4,0);
    tracep->declBit(c+16,"io_out_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+17,"io_out_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declBus(c+18,"io_out_bits_ctrl_signal_rfDest", false,-1, 4,0);
    tracep->declQuad(c+3376,"io_out_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+3378,"io_out_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+19,"io_out_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declQuad(c+8,"io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+10,"io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declBus(c+18,"rd", false,-1, 4,0);
    tracep->declBus(c+1810,"Inst_decode_0", false,-1, 3,0);
    tracep->declBus(c+17,"Inst_decode_2", false,-1, 6,0);
    tracep->declBit(c+1811,"Inst_decode_3", false,-1);
    tracep->declBus(c+1812,"srctype1", false,-1, 1,0);
    tracep->declBit(c+1813,"srctype2", false,-1);
    tracep->declBit(c+1814,"sign", false,-1);
    tracep->declBit(c+1815,"sign_1", false,-1);
    tracep->declBit(c+1816,"sign_2", false,-1);
    tracep->declBit(c+1816,"sign_3", false,-1);
    tracep->declBit(c+1814,"sign_4", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IF ");
    tracep->declBit(c+3443,"clock", false,-1);
    tracep->declBit(c+3444,"reset", false,-1);
    tracep->declBit(c+3372,"io_branch_io_is_branch", false,-1);
    tracep->declBit(c+1,"io_branch_io_is_jump", false,-1);
    tracep->declQuad(c+3373,"io_branch_io_dnpc", false,-1, 63,0);
    tracep->declBit(c+2,"io_cache_req_addr_req_valid", false,-1);
    tracep->declQuad(c+3,"io_cache_req_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+2,"io_cache_req_rdata_rep_ready", false,-1);
    tracep->declBit(c+3401,"io_cache_req_rdata_rep_valid", false,-1);
    tracep->declQuad(c+5,"io_cache_req_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+2,"io_out_ready", false,-1);
    tracep->declBit(c+3401,"io_out_valid", false,-1);
    tracep->declQuad(c+3,"io_out_bits_PC", false,-1, 63,0);
    tracep->declBus(c+3375,"io_out_bits_Inst", false,-1, 31,0);
    tracep->declBit(c+3402,"io_flush", false,-1);
    tracep->declQuad(c+3,"temp", false,-1, 63,0);
    tracep->declBus(c+1817,"inst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IFMEM ");
    tracep->declBit(c+3444,"reset", false,-1);
    tracep->declBit(c+3443,"clk", false,-1);
    tracep->declBit(c+251,"ar_valid", false,-1);
    tracep->declBit(c+255,"ar_ready", false,-1);
    tracep->declQuad(c+246,"araddr", false,-1, 63,0);
    tracep->declBit(c+252,"r_valid", false,-1);
    tracep->declBit(c+3448,"r_ready", false,-1);
    tracep->declQuad(c+249,"rdata", false,-1, 63,0);
    tracep->declBit(c+3481,"aw_valid", false,-1);
    tracep->declBit(c+255,"aw_ready", false,-1);
    tracep->declQuad(c+246,"awaddr", false,-1, 63,0);
    tracep->declBit(c+3481,"w_valid", false,-1);
    tracep->declBit(c+255,"w_ready", false,-1);
    tracep->declQuad(c+3482,"wdata", false,-1, 63,0);
    tracep->declBus(c+3484,"wstrb", false,-1, 7,0);
    tracep->declBit(c+254,"bvalid", false,-1);
    tracep->declBit(c+253,"bready", false,-1);
    tracep->declBus(c+3485,"bresp", false,-1, 1,0);
    tracep->declBus(c+3486,"idle", false,-1, 1,0);
    tracep->declBus(c+3487,"read_busy", false,-1, 1,0);
    tracep->declBus(c+3488,"write_busy", false,-1, 1,0);
    tracep->declBus(c+3489,"wait_bus", false,-1, 1,0);
    tracep->declBus(c+1818,"state", false,-1, 1,0);
    tracep->declBus(c+3438,"next_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("If_axi_birdge ");
    tracep->declBit(c+3443,"clock", false,-1);
    tracep->declBit(c+3444,"reset", false,-1);
    tracep->declBit(c+244,"io_in_addr_req_ready", false,-1);
    tracep->declBit(c+245,"io_in_addr_req_valid", false,-1);
    tracep->declQuad(c+246,"io_in_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+245,"io_in_addr_req_bits_ce", false,-1);
    tracep->declBit(c+248,"io_in_rdata_rep_valid", false,-1);
    tracep->declQuad(c+249,"io_in_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+251,"io_out_raddr_req_valid", false,-1);
    tracep->declQuad(c+246,"io_out_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+246,"io_out_waddr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+252,"io_out_rdata_rep_valid", false,-1);
    tracep->declQuad(c+249,"io_out_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+253,"io_out_wb_ready", false,-1);
    tracep->declBit(c+254,"io_out_wb_valid", false,-1);
    tracep->declBus(c+1819,"state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MEM ");
    tracep->declBit(c+40,"io_in_ready", false,-1);
    tracep->declBit(c+195,"io_in_valid", false,-1);
    tracep->declBus(c+196,"io_in_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+197,"io_in_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+198,"io_in_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+199,"io_in_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+200,"io_in_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+202,"io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+203,"io_in_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+205,"io_in_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declQuad(c+206,"io_in_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+208,"io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+210,"io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+212,"io_in_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declBit(c+3448,"io_out_ready", false,-1);
    tracep->declBit(c+214,"io_out_valid", false,-1);
    tracep->declBit(c+215,"io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+198,"io_out_bits_ctrl_signal_rfWen", false,-1);
    tracep->declQuad(c+200,"io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+202,"io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+203,"io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBit(c+216,"io_out_bits_ctrl_flow_skip", false,-1);
    tracep->declBus(c+205,"io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+217,"io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+3411,"io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declBit(c+218,"io_cache_io_addr_req_valid", false,-1);
    tracep->declQuad(c+219,"io_cache_io_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+221,"io_cache_io_addr_req_bits_ce", false,-1);
    tracep->declBit(c+222,"io_cache_io_addr_req_bits_we", false,-1);
    tracep->declBit(c+223,"io_cache_io_rdata_rep_valid", false,-1);
    tracep->declQuad(c+3413,"io_cache_io_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+224,"io_cache_io_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+226,"io_cache_io_wdata_req_bits_wmask", false,-1, 7,0);
    tracep->declBit(c+227,"io_cache_io_wdata_rep", false,-1);
    tracep->declQuad(c+219,"addr_temp", false,-1, 63,0);
    tracep->declBit(c+3439,"mem_result_sign", false,-1);
    tracep->declBit(c+3440,"mem_result_sign_1", false,-1);
    tracep->declBit(c+3441,"mem_result_sign_2", false,-1);
    tracep->declBit(c+3442,"mem_result_sign_3", false,-1);
    tracep->declQuad(c+3399,"mem_result", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MMIO ");
    tracep->declBit(c+3443,"clock", false,-1);
    tracep->declBit(c+3444,"reset", false,-1);
    tracep->declBit(c+218,"io_in_addr_req_valid", false,-1);
    tracep->declQuad(c+219,"io_in_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+221,"io_in_addr_req_bits_ce", false,-1);
    tracep->declBit(c+222,"io_in_addr_req_bits_we", false,-1);
    tracep->declBit(c+223,"io_in_rdata_rep_valid", false,-1);
    tracep->declQuad(c+3413,"io_in_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+224,"io_in_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+226,"io_in_wdata_req_bits_wmask", false,-1, 7,0);
    tracep->declBit(c+227,"io_in_wdata_rep", false,-1);
    tracep->declQuad(c+188,"io_out_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+191,"io_out_addr_req_bits_ce", false,-1);
    tracep->declBit(c+190,"io_out_addr_req_bits_we", false,-1);
    tracep->declQuad(c+3409,"io_out_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+192,"io_out_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+194,"io_out_wdata_req_bits_wmask", false,-1, 7,0);
    tracep->declBit(c+3443,"DCACHE_clock", false,-1);
    tracep->declBit(c+3444,"DCACHE_reset", false,-1);
    tracep->declBit(c+1820,"DCACHE_io_in_addr_req_valid", false,-1);
    tracep->declQuad(c+219,"DCACHE_io_in_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+222,"DCACHE_io_in_addr_req_bits_we", false,-1);
    tracep->declBit(c+1821,"DCACHE_io_in_rdata_rep_valid", false,-1);
    tracep->declQuad(c+1822,"DCACHE_io_in_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+224,"DCACHE_io_in_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+226,"DCACHE_io_in_wdata_req_bits_wmask", false,-1, 7,0);
    tracep->declBit(c+1824,"DCACHE_io_in_wdata_rep", false,-1);
    tracep->declQuad(c+1825,"DCACHE_io_out_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+1827,"DCACHE_io_out_addr_req_bits_ce", false,-1);
    tracep->declBit(c+1828,"DCACHE_io_out_addr_req_bits_we", false,-1);
    tracep->declQuad(c+3409,"DCACHE_io_out_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+1829,"DCACHE_io_out_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->pushNamePrefix("DCACHE ");
    tracep->declBit(c+3443,"clock", false,-1);
    tracep->declBit(c+3444,"reset", false,-1);
    tracep->declBit(c+1820,"io_in_addr_req_valid", false,-1);
    tracep->declQuad(c+219,"io_in_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+222,"io_in_addr_req_bits_we", false,-1);
    tracep->declBit(c+1821,"io_in_rdata_rep_valid", false,-1);
    tracep->declQuad(c+1822,"io_in_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+224,"io_in_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+226,"io_in_wdata_req_bits_wmask", false,-1, 7,0);
    tracep->declBit(c+1824,"io_in_wdata_rep", false,-1);
    tracep->declQuad(c+1825,"io_out_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+1827,"io_out_addr_req_bits_ce", false,-1);
    tracep->declBit(c+1828,"io_out_addr_req_bits_we", false,-1);
    tracep->declQuad(c+3409,"io_out_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+1829,"io_out_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->declBit(c+3443,"Cache_data_clock", false,-1);
    tracep->declBit(c+1831,"Cache_data_io_in_valid", false,-1);
    tracep->declQuad(c+219,"Cache_data_io_in_addr", false,-1, 63,0);
    tracep->declQuad(c+1832,"Cache_data_io_write_bus_addr", false,-1, 63,0);
    tracep->declBit(c+1834,"Cache_data_io_write_bus_valid", false,-1);
    tracep->declBus(c+1835,"Cache_data_io_write_bus_waymask", false,-1, 1,0);
    tracep->declArray(c+1836,"Cache_data_io_write_bus_wdata", false,-1, 511,0);
    tracep->declBit(c+1831,"Cache_data_io_out_valid", false,-1);
    tracep->declQuad(c+1852,"Cache_data_io_out_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+1854,"Cache_data_io_out_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+1856,"Cache_data_io_out_bits_meat_valid_0", false,-1);
    tracep->declBit(c+1857,"Cache_data_io_out_bits_meat_valid_1", false,-1);
    tracep->declArray(c+1858,"Cache_data_io_out_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+1874,"Cache_data_io_out_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+1890,"Cache_data_io_out_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBus(c+1892,"Cache_data_io_out_bits_ctrl_data_index", false,-1, 4,0);
    tracep->declBus(c+1893,"Cache_data_io_out_bits_ctrl_data_offset", false,-1, 5,0);
    tracep->declBit(c+1894,"Scanf_io_in_valid", false,-1);
    tracep->declQuad(c+1852,"Scanf_io_in_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+1854,"Scanf_io_in_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+1856,"Scanf_io_in_bits_meat_valid_0", false,-1);
    tracep->declBit(c+1857,"Scanf_io_in_bits_meat_valid_1", false,-1);
    tracep->declArray(c+1858,"Scanf_io_in_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+1874,"Scanf_io_in_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+1890,"Scanf_io_in_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBus(c+1892,"Scanf_io_in_bits_ctrl_data_index", false,-1, 4,0);
    tracep->declBit(c+1895,"Scanf_io_out_bits_hit", false,-1);
    tracep->declArray(c+1896,"Scanf_io_out_bits_data", false,-1, 511,0);
    tracep->declBus(c+1892,"Scanf_io_out_bits_meta_ctrl_data_index", false,-1, 4,0);
    tracep->declBit(c+1912,"Scanf_io_out_bits_hit_way_0", false,-1);
    tracep->declBit(c+1913,"Scanf_io_out_bits_hit_way_1", false,-1);
    tracep->declQuad(c+1852,"Scanf_io_out_bits_tag_0", false,-1, 52,0);
    tracep->declQuad(c+1854,"Scanf_io_out_bits_tag_1", false,-1, 52,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+1914+i*1,"lru", true,(i+0));
    }
    tracep->declBit(c+1946,"lru_lru_w_MPORT_en", false,-1);
    tracep->declBus(c+1947,"lru_lru_w_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+1948,"lru_lru_w_MPORT_data", false,-1);
    tracep->declBit(c+3448,"lru_MPORT_data", false,-1);
    tracep->declBus(c+1892,"lru_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+3448,"lru_MPORT_mask", false,-1);
    tracep->declBit(c+1949,"lru_MPORT_en", false,-1);
    tracep->declBit(c+3481,"lru_MPORT_1_data", false,-1);
    tracep->declBus(c+1892,"lru_MPORT_1_addr", false,-1, 4,0);
    tracep->declBit(c+3448,"lru_MPORT_1_mask", false,-1);
    tracep->declBit(c+1950,"lru_MPORT_1_en", false,-1);
    tracep->declBit(c+3481,"lru_MPORT_2_data", false,-1);
    tracep->declBus(c+1892,"lru_MPORT_2_addr", false,-1, 4,0);
    tracep->declBit(c+3448,"lru_MPORT_2_mask", false,-1);
    tracep->declBit(c+1951,"lru_MPORT_2_en", false,-1);
    tracep->declBit(c+3448,"lru_MPORT_3_data", false,-1);
    tracep->declBus(c+1892,"lru_MPORT_3_addr", false,-1, 4,0);
    tracep->declBit(c+3448,"lru_MPORT_3_mask", false,-1);
    tracep->declBit(c+1952,"lru_MPORT_3_en", false,-1);
    tracep->declBit(c+1946,"lru_lru_w_MPORT_en_pipe_0", false,-1);
    tracep->declBus(c+1947,"lru_lru_w_MPORT_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+1953+i*1,"dirt_0", true,(i+0));
    }
    tracep->declBit(c+1985,"dirt_0_dirt_w_en", false,-1);
    tracep->declBus(c+1947,"dirt_0_dirt_w_addr", false,-1, 4,0);
    tracep->declBit(c+1986,"dirt_0_dirt_w_data", false,-1);
    tracep->declBit(c+3448,"dirt_0_MPORT_4_data", false,-1);
    tracep->declBus(c+1892,"dirt_0_MPORT_4_addr", false,-1, 4,0);
    tracep->declBit(c+1987,"dirt_0_MPORT_4_mask", false,-1);
    tracep->declBit(c+1988,"dirt_0_MPORT_4_en", false,-1);
    tracep->declBit(c+1985,"dirt_0_dirt_w_en_pipe_0", false,-1);
    tracep->declBus(c+1947,"dirt_0_dirt_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+1989+i*1,"dirt_1", true,(i+0));
    }
    tracep->declBit(c+2021,"dirt_1_dirt_w_en", false,-1);
    tracep->declBus(c+1947,"dirt_1_dirt_w_addr", false,-1, 4,0);
    tracep->declBit(c+2022,"dirt_1_dirt_w_data", false,-1);
    tracep->declBit(c+3448,"dirt_1_MPORT_4_data", false,-1);
    tracep->declBus(c+1892,"dirt_1_MPORT_4_addr", false,-1, 4,0);
    tracep->declBit(c+2023,"dirt_1_MPORT_4_mask", false,-1);
    tracep->declBit(c+1988,"dirt_1_MPORT_4_en", false,-1);
    tracep->declBit(c+2021,"dirt_1_dirt_w_en_pipe_0", false,-1);
    tracep->declBus(c+1947,"dirt_1_dirt_w_addr_pipe_0", false,-1, 4,0);
    tracep->declBus(c+2024,"state", false,-1, 1,0);
    tracep->declArray(c+2025,"data_line_reg", false,-1, 511,0);
    tracep->declQuad(c+2041,"mem_addr_reg", false,-1, 63,0);
    tracep->declBit(c+2043,"lru_r", false,-1);
    tracep->declBus(c+2044,"count", false,-1, 3,0);
    tracep->declBit(c+2045,"s", false,-1);
    tracep->declBus(c+2046,"count_write", false,-1, 3,0);
    tracep->declBit(c+2047,"s_w", false,-1);
    tracep->declQuad(c+2048,"mem_write_addr_reg", false,-1, 63,0);
    tracep->declArray(c+2050,"mem_write_data_reg", false,-1, 511,0);
    tracep->declBit(c+1948,"lru_w", false,-1);
    tracep->declBit(c+1912,"hit_way_0", false,-1);
    tracep->declBit(c+1913,"hit_way_1", false,-1);
    tracep->declQuad(c+2066,"hit_data", false,-1, 63,0);
    tracep->declQuad(c+2068,"mem_data", false,-1, 63,0);
    tracep->declBit(c+1894,"Scanf_io_in_valid_REG", false,-1);
    tracep->declQuad(c+2070,"wmaskextend_Genmask", false,-1, 63,0);
    tracep->declQuad(c+2072,"wmaskextend_lo_lo_lo", false,-1, 63,0);
    tracep->declArray(c+2074,"wmaskextend_lo_lo", false,-1, 127,0);
    tracep->declQuad(c+2078,"wmaskextend_lo_hi_lo", false,-1, 63,0);
    tracep->declArray(c+2080,"wmaskextend_lo", false,-1, 255,0);
    tracep->declQuad(c+2088,"wmaskextend_hi_lo_lo", false,-1, 63,0);
    tracep->declArray(c+2090,"wmaskextend_hi_lo", false,-1, 127,0);
    tracep->declQuad(c+2094,"wmaskextend_hi_hi_lo", false,-1, 63,0);
    tracep->declArray(c+2096,"wmaskextend_hi", false,-1, 255,0);
    tracep->declArray(c+2104,"wmaskextend", false,-1, 511,0);
    tracep->declArray(c+2120,"wdata_extend", false,-1, 511,0);
    tracep->declBus(c+2136,"waymask", false,-1, 1,0);
    tracep->pushNamePrefix("Cache_data ");
    tracep->declBit(c+3443,"clock", false,-1);
    tracep->declBit(c+1831,"io_in_valid", false,-1);
    tracep->declQuad(c+219,"io_in_addr", false,-1, 63,0);
    tracep->declQuad(c+1832,"io_write_bus_addr", false,-1, 63,0);
    tracep->declBit(c+1834,"io_write_bus_valid", false,-1);
    tracep->declBus(c+1835,"io_write_bus_waymask", false,-1, 1,0);
    tracep->declArray(c+1836,"io_write_bus_wdata", false,-1, 511,0);
    tracep->declBit(c+1831,"io_out_valid", false,-1);
    tracep->declQuad(c+1852,"io_out_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+1854,"io_out_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+1856,"io_out_bits_meat_valid_0", false,-1);
    tracep->declBit(c+1857,"io_out_bits_meat_valid_1", false,-1);
    tracep->declArray(c+1858,"io_out_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+1874,"io_out_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+1890,"io_out_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBus(c+1892,"io_out_bits_ctrl_data_index", false,-1, 4,0);
    tracep->declBus(c+1893,"io_out_bits_ctrl_data_offset", false,-1, 5,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declArray(c+2137+i*16,"data_0", true,(i+0), 511,0);
    }
    tracep->declBit(c+2649,"data_0_data_w_en", false,-1);
    tracep->declBus(c+2650,"data_0_data_w_addr", false,-1, 4,0);
    tracep->declArray(c+1858,"data_0_data_w_data", false,-1, 511,0);
    tracep->declArray(c+1836,"data_0_MPORT_data", false,-1, 511,0);
    tracep->declBus(c+2651,"data_0_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+2652,"data_0_MPORT_mask", false,-1);
    tracep->declBit(c+1834,"data_0_MPORT_en", false,-1);
    tracep->declBit(c+2649,"data_0_data_w_en_pipe_0", false,-1);
    tracep->declBus(c+2650,"data_0_data_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declArray(c+2653+i*16,"data_1", true,(i+0), 511,0);
    }
    tracep->declBit(c+3165,"data_1_data_w_en", false,-1);
    tracep->declBus(c+3166,"data_1_data_w_addr", false,-1, 4,0);
    tracep->declArray(c+1874,"data_1_data_w_data", false,-1, 511,0);
    tracep->declArray(c+1836,"data_1_MPORT_data", false,-1, 511,0);
    tracep->declBus(c+2651,"data_1_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+3167,"data_1_MPORT_mask", false,-1);
    tracep->declBit(c+1834,"data_1_MPORT_en", false,-1);
    tracep->declBit(c+3165,"data_1_data_w_en_pipe_0", false,-1);
    tracep->declBus(c+3166,"data_1_data_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+3168+i*2,"TAG_0", true,(i+0), 52,0);
    }
    tracep->declBit(c+3232,"TAG_0_tag_w_en", false,-1);
    tracep->declBus(c+3233,"TAG_0_tag_w_addr", false,-1, 4,0);
    tracep->declQuad(c+1852,"TAG_0_tag_w_data", false,-1, 52,0);
    tracep->declQuad(c+3234,"TAG_0_MPORT_1_data", false,-1, 52,0);
    tracep->declBus(c+2651,"TAG_0_MPORT_1_addr", false,-1, 4,0);
    tracep->declBit(c+2652,"TAG_0_MPORT_1_mask", false,-1);
    tracep->declBit(c+1834,"TAG_0_MPORT_1_en", false,-1);
    tracep->declBit(c+3232,"TAG_0_tag_w_en_pipe_0", false,-1);
    tracep->declBus(c+3233,"TAG_0_tag_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+3236+i*2,"TAG_1", true,(i+0), 52,0);
    }
    tracep->declBit(c+3300,"TAG_1_tag_w_en", false,-1);
    tracep->declBus(c+3301,"TAG_1_tag_w_addr", false,-1, 4,0);
    tracep->declQuad(c+1854,"TAG_1_tag_w_data", false,-1, 52,0);
    tracep->declQuad(c+3234,"TAG_1_MPORT_1_data", false,-1, 52,0);
    tracep->declBus(c+2651,"TAG_1_MPORT_1_addr", false,-1, 4,0);
    tracep->declBit(c+3167,"TAG_1_MPORT_1_mask", false,-1);
    tracep->declBit(c+1834,"TAG_1_MPORT_1_en", false,-1);
    tracep->declBit(c+3300,"TAG_1_tag_w_en_pipe_0", false,-1);
    tracep->declBus(c+3301,"TAG_1_tag_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+3302+i*1,"data_valid_0", true,(i+0));
    }
    tracep->declBit(c+3334,"data_valid_0_valid_w_en", false,-1);
    tracep->declBus(c+3335,"data_valid_0_valid_w_addr", false,-1, 4,0);
    tracep->declBit(c+1856,"data_valid_0_valid_w_data", false,-1);
    tracep->declBit(c+3448,"data_valid_0_MPORT_2_data", false,-1);
    tracep->declBus(c+2651,"data_valid_0_MPORT_2_addr", false,-1, 4,0);
    tracep->declBit(c+2652,"data_valid_0_MPORT_2_mask", false,-1);
    tracep->declBit(c+1834,"data_valid_0_MPORT_2_en", false,-1);
    tracep->declBit(c+3334,"data_valid_0_valid_w_en_pipe_0", false,-1);
    tracep->declBus(c+3335,"data_valid_0_valid_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+3336+i*1,"data_valid_1", true,(i+0));
    }
    tracep->declBit(c+3368,"data_valid_1_valid_w_en", false,-1);
    tracep->declBus(c+3369,"data_valid_1_valid_w_addr", false,-1, 4,0);
    tracep->declBit(c+1857,"data_valid_1_valid_w_data", false,-1);
    tracep->declBit(c+3448,"data_valid_1_MPORT_2_data", false,-1);
    tracep->declBus(c+2651,"data_valid_1_MPORT_2_addr", false,-1, 4,0);
    tracep->declBit(c+3167,"data_valid_1_MPORT_2_mask", false,-1);
    tracep->declBit(c+1834,"data_valid_1_MPORT_2_en", false,-1);
    tracep->declBit(c+3368,"data_valid_1_valid_w_en_pipe_0", false,-1);
    tracep->declBus(c+3369,"data_valid_1_valid_w_addr_pipe_0", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Scanf ");
    tracep->declBit(c+1894,"io_in_valid", false,-1);
    tracep->declQuad(c+1852,"io_in_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+1854,"io_in_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+1856,"io_in_bits_meat_valid_0", false,-1);
    tracep->declBit(c+1857,"io_in_bits_meat_valid_1", false,-1);
    tracep->declArray(c+1858,"io_in_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+1874,"io_in_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+1890,"io_in_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBus(c+1892,"io_in_bits_ctrl_data_index", false,-1, 4,0);
    tracep->declBit(c+1895,"io_out_bits_hit", false,-1);
    tracep->declArray(c+1896,"io_out_bits_data", false,-1, 511,0);
    tracep->declBus(c+1892,"io_out_bits_meta_ctrl_data_index", false,-1, 4,0);
    tracep->declBit(c+1912,"io_out_bits_hit_way_0", false,-1);
    tracep->declBit(c+1913,"io_out_bits_hit_way_1", false,-1);
    tracep->declQuad(c+1852,"io_out_bits_tag_0", false,-1, 52,0);
    tracep->declQuad(c+1854,"io_out_bits_tag_1", false,-1, 52,0);
    tracep->declBit(c+3370,"hit_way_0_result", false,-1);
    tracep->declBit(c+3371,"hit_way_1_result", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("WB ");
    tracep->declBit(c+228,"io_in_valid", false,-1);
    tracep->declBit(c+229,"io_in_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+230,"io_in_bits_ctrl_signal_rfWen", false,-1);
    tracep->declQuad(c+231,"io_in_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+233,"io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+234,"io_in_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBit(c+236,"io_in_bits_ctrl_flow_skip", false,-1);
    tracep->declBus(c+186,"io_in_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declQuad(c+237,"io_in_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declBit(c+3448,"io_out_ready", false,-1);
    tracep->declBit(c+228,"io_out_valid", false,-1);
    tracep->declBit(c+239,"io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declQuad(c+231,"io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+233,"io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+234,"io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBit(c+236,"io_out_bits_ctrl_flow_skip", false,-1);
    tracep->declBus(c+186,"io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+187,"io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+237,"io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("bypass ");
    tracep->declBus(c+30,"io_EX_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+42,"io_EX_rf_rfWen", false,-1);
    tracep->declQuad(c+3407,"io_EX_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+205,"io_MEM_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+217,"io_MEM_rf_rfWen", false,-1);
    tracep->declQuad(c+3411,"io_MEM_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+186,"io_WB_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+187,"io_WB_rf_rfWen", false,-1);
    tracep->declQuad(c+237,"io_WB_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+240,"io_Reg1", false,-1, 63,0);
    tracep->declBus(c+14,"io_reg_index1", false,-1, 4,0);
    tracep->declQuad(c+242,"io_Reg2", false,-1, 63,0);
    tracep->declBus(c+15,"io_reg_index2", false,-1, 4,0);
    tracep->declQuad(c+3376,"io_Bypass_REG1", false,-1, 63,0);
    tracep->declQuad(c+3378,"io_Bypass_REG2", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem ");
    tracep->declBit(c+3444,"reset", false,-1);
    tracep->declBit(c+3443,"clk", false,-1);
    tracep->declQuad(c+188,"addr", false,-1, 63,0);
    tracep->declBit(c+190,"we", false,-1);
    tracep->declBit(c+191,"ce", false,-1);
    tracep->declQuad(c+192,"wdata", false,-1, 63,0);
    tracep->declQuad(c+3409,"rdata", false,-1, 63,0);
    tracep->declBus(c+194,"wmask", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_bypass ");
    tracep->declBus(c+205,"io_MEM_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+217,"io_MEM_rf_rfWen", false,-1);
    tracep->declQuad(c+3411,"io_MEM_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+31,"io_Reg1", false,-1, 63,0);
    tracep->declBus(c+26,"io_reg_index1", false,-1, 4,0);
    tracep->declQuad(c+33,"io_Reg2", false,-1, 63,0);
    tracep->declBus(c+27,"io_reg_index2", false,-1, 4,0);
    tracep->declQuad(c+3403,"io_Bypass_REG1", false,-1, 63,0);
    tracep->declQuad(c+3405,"io_Bypass_REG2", false,-1, 63,0);
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
    VlWide<16>/*511:0*/ __Vtemp_hf989eec7__0;
    VlWide<16>/*511:0*/ __Vtemp_h4453b49e__0;
    VlWide<16>/*511:0*/ __Vtemp_hc2882e76__0;
    VlWide<4>/*127:0*/ __Vtemp_hb5acfd9b__0;
    VlWide<4>/*127:0*/ __Vtemp_h8248920c__0;
    VlWide<4>/*127:0*/ __Vtemp_h32213b7b__0;
    VlWide<4>/*127:0*/ __Vtemp_hf98c7323__0;
    VlWide<4>/*127:0*/ __Vtemp_h9a785a5b__0;
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
    bufp->fullQData(oldp+188,(((IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_valid)
                                ? (((0xa0000000ULL 
                                     <= vlSelf->CoreTop__DOT__MEM__DOT__addr_temp) 
                                    & (0xa2000000ULL 
                                       >= vlSelf->CoreTop__DOT__MEM__DOT__addr_temp))
                                    ? vlSelf->CoreTop__DOT__MEM__DOT__addr_temp
                                    : vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_addr_req_bits_addr)
                                : vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_addr_req_bits_addr)),64);
    bufp->fullBit(oldp+190,(((IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_valid)
                              ? (((0xa0000000ULL <= vlSelf->CoreTop__DOT__MEM__DOT__addr_temp) 
                                  & (0xa2000000ULL 
                                     >= vlSelf->CoreTop__DOT__MEM__DOT__addr_temp))
                                  ? (IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_we)
                                  : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_addr_req_bits_we))
                              : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_addr_req_bits_we))));
    bufp->fullBit(oldp+191,(((IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_valid)
                              ? (((0xa0000000ULL <= vlSelf->CoreTop__DOT__MEM__DOT__addr_temp) 
                                  & (0xa2000000ULL 
                                     >= vlSelf->CoreTop__DOT__MEM__DOT__addr_temp))
                                  ? (((4U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_fuType)) 
                                      & (IData)(vlSelf->CoreTop__DOT__valid_2)) 
                                     & (IData)(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_signal_inst_valid))
                                  : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_addr_req_bits_ce))
                              : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_addr_req_bits_ce))));
    bufp->fullQData(oldp+192,(((IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_valid)
                                ? (((0xa0000000ULL 
                                     <= vlSelf->CoreTop__DOT__MEM__DOT__addr_temp) 
                                    & (0xa2000000ULL 
                                       >= vlSelf->CoreTop__DOT__MEM__DOT__addr_temp))
                                    ? vlSelf->CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wdata
                                    : (((QData)((IData)(
                                                        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0U]))))
                                : (((QData)((IData)(
                                                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0U]))))),64);
    bufp->fullCData(oldp+194,(((IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_valid)
                                ? (((0xa0000000ULL 
                                     <= vlSelf->CoreTop__DOT__MEM__DOT__addr_temp) 
                                    & (0xa2000000ULL 
                                       >= vlSelf->CoreTop__DOT__MEM__DOT__addr_temp))
                                    ? (IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wmask)
                                    : 0xffU) : 0xffU)),8);
    bufp->fullBit(oldp+195,(vlSelf->CoreTop__DOT__valid_2));
    bufp->fullCData(oldp+196,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_fuType),3);
    bufp->fullBit(oldp+197,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_inst_valid));
    bufp->fullBit(oldp+198,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_rfWen));
    bufp->fullCData(oldp+199,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype),7);
    bufp->fullQData(oldp+200,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_PC),64);
    bufp->fullIData(oldp+202,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_inst),32);
    bufp->fullQData(oldp+203,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_Dnpc),64);
    bufp->fullCData(oldp+205,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest),5);
    bufp->fullQData(oldp+206,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfData),64);
    bufp->fullQData(oldp+208,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src1),64);
    bufp->fullQData(oldp+210,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2),64);
    bufp->fullQData(oldp+212,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_Imm),64);
    bufp->fullBit(oldp+214,(vlSelf->CoreTop__DOT__MEM_io_out_valid));
    bufp->fullBit(oldp+215,(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_signal_inst_valid));
    bufp->fullBit(oldp+216,((((0xa0000048ULL == vlSelf->CoreTop__DOT__MEM__DOT__addr_temp) 
                              | (0xa00003f8ULL == vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)) 
                             | ((0xa0000000ULL <= vlSelf->CoreTop__DOT__MEM__DOT__addr_temp) 
                                & (0xa1200000ULL >= vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))));
    bufp->fullBit(oldp+217,(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfWen));
    bufp->fullBit(oldp+218,(vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_valid));
    bufp->fullQData(oldp+219,(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp),64);
    bufp->fullBit(oldp+221,((((4U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_fuType)) 
                              & (IData)(vlSelf->CoreTop__DOT__valid_2)) 
                             & (IData)(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_signal_inst_valid))));
    bufp->fullBit(oldp+222,(vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_we));
    bufp->fullBit(oldp+223,(vlSelf->CoreTop__DOT__MMIO_io_in_rdata_rep_valid));
    bufp->fullQData(oldp+224,(vlSelf->CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wdata),64);
    bufp->fullCData(oldp+226,(vlSelf->CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wmask),8);
    bufp->fullBit(oldp+227,(vlSelf->CoreTop__DOT__MMIO_io_in_wdata_rep));
    bufp->fullBit(oldp+228,(vlSelf->CoreTop__DOT__valid_3));
    bufp->fullBit(oldp+229,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_inst_valid));
    bufp->fullBit(oldp+230,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_rfWen));
    bufp->fullQData(oldp+231,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_PC),64);
    bufp->fullIData(oldp+233,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_inst),32);
    bufp->fullQData(oldp+234,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_Dnpc),64);
    bufp->fullBit(oldp+236,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_skip));
    bufp->fullQData(oldp+237,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfData),64);
    bufp->fullBit(oldp+239,(((IData)(vlSelf->CoreTop__DOT__valid_3) 
                             & (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_inst_valid))));
    bufp->fullQData(oldp+240,(((0U == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                >> 0xfU)))
                                ? 0ULL : vlSelf->CoreTop__DOT__rf
                               [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                          >> 0xfU))])),64);
    bufp->fullQData(oldp+242,(((0U == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                >> 0x14U)))
                                ? 0ULL : vlSelf->CoreTop__DOT__rf
                               [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                          >> 0x14U))])),64);
    bufp->fullBit(oldp+244,((0U == (IData)(vlSelf->CoreTop__DOT__If_axi_birdge__DOT__state))));
    bufp->fullBit(oldp+245,((2U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state))));
    bufp->fullQData(oldp+246,(vlSelf->CoreTop__DOT__ICACHE__DOT__mem_addr_reg),64);
    bufp->fullBit(oldp+248,(vlSelf->CoreTop__DOT__If_axi_birdge_io_in_rdata_rep_valid));
    bufp->fullQData(oldp+249,(vlSelf->CoreTop__DOT__IFMEM_rdata),64);
    bufp->fullBit(oldp+251,(vlSelf->CoreTop__DOT__If_axi_birdge_io_out_raddr_req_valid));
    bufp->fullBit(oldp+252,(vlSelf->CoreTop__DOT__IFMEM_r_valid));
    bufp->fullBit(oldp+253,((2U == (IData)(vlSelf->CoreTop__DOT__If_axi_birdge__DOT__state))));
    bufp->fullBit(oldp+254,(vlSelf->CoreTop__DOT__IFMEM_bvalid));
    bufp->fullBit(oldp+255,((0U == (IData)(vlSelf->CoreTop__DOT__IFMEM__DOT__state))));
    bufp->fullBit(oldp+256,(vlSelf->CoreTop__DOT__DIP_io_is_break_REG));
    bufp->fullQData(oldp+257,(vlSelf->CoreTop__DOT__DIP__DOT__rf[0]),64);
    bufp->fullQData(oldp+259,(vlSelf->CoreTop__DOT__DIP__DOT__rf[1]),64);
    bufp->fullQData(oldp+261,(vlSelf->CoreTop__DOT__DIP__DOT__rf[2]),64);
    bufp->fullQData(oldp+263,(vlSelf->CoreTop__DOT__DIP__DOT__rf[3]),64);
    bufp->fullQData(oldp+265,(vlSelf->CoreTop__DOT__DIP__DOT__rf[4]),64);
    bufp->fullQData(oldp+267,(vlSelf->CoreTop__DOT__DIP__DOT__rf[5]),64);
    bufp->fullQData(oldp+269,(vlSelf->CoreTop__DOT__DIP__DOT__rf[6]),64);
    bufp->fullQData(oldp+271,(vlSelf->CoreTop__DOT__DIP__DOT__rf[7]),64);
    bufp->fullQData(oldp+273,(vlSelf->CoreTop__DOT__DIP__DOT__rf[8]),64);
    bufp->fullQData(oldp+275,(vlSelf->CoreTop__DOT__DIP__DOT__rf[9]),64);
    bufp->fullQData(oldp+277,(vlSelf->CoreTop__DOT__DIP__DOT__rf[10]),64);
    bufp->fullQData(oldp+279,(vlSelf->CoreTop__DOT__DIP__DOT__rf[11]),64);
    bufp->fullQData(oldp+281,(vlSelf->CoreTop__DOT__DIP__DOT__rf[12]),64);
    bufp->fullQData(oldp+283,(vlSelf->CoreTop__DOT__DIP__DOT__rf[13]),64);
    bufp->fullQData(oldp+285,(vlSelf->CoreTop__DOT__DIP__DOT__rf[14]),64);
    bufp->fullQData(oldp+287,(vlSelf->CoreTop__DOT__DIP__DOT__rf[15]),64);
    bufp->fullQData(oldp+289,(vlSelf->CoreTop__DOT__DIP__DOT__rf[16]),64);
    bufp->fullQData(oldp+291,(vlSelf->CoreTop__DOT__DIP__DOT__rf[17]),64);
    bufp->fullQData(oldp+293,(vlSelf->CoreTop__DOT__DIP__DOT__rf[18]),64);
    bufp->fullQData(oldp+295,(vlSelf->CoreTop__DOT__DIP__DOT__rf[19]),64);
    bufp->fullQData(oldp+297,(vlSelf->CoreTop__DOT__DIP__DOT__rf[20]),64);
    bufp->fullQData(oldp+299,(vlSelf->CoreTop__DOT__DIP__DOT__rf[21]),64);
    bufp->fullQData(oldp+301,(vlSelf->CoreTop__DOT__DIP__DOT__rf[22]),64);
    bufp->fullQData(oldp+303,(vlSelf->CoreTop__DOT__DIP__DOT__rf[23]),64);
    bufp->fullQData(oldp+305,(vlSelf->CoreTop__DOT__DIP__DOT__rf[24]),64);
    bufp->fullQData(oldp+307,(vlSelf->CoreTop__DOT__DIP__DOT__rf[25]),64);
    bufp->fullQData(oldp+309,(vlSelf->CoreTop__DOT__DIP__DOT__rf[26]),64);
    bufp->fullQData(oldp+311,(vlSelf->CoreTop__DOT__DIP__DOT__rf[27]),64);
    bufp->fullQData(oldp+313,(vlSelf->CoreTop__DOT__DIP__DOT__rf[28]),64);
    bufp->fullQData(oldp+315,(vlSelf->CoreTop__DOT__DIP__DOT__rf[29]),64);
    bufp->fullQData(oldp+317,(vlSelf->CoreTop__DOT__DIP__DOT__rf[30]),64);
    bufp->fullQData(oldp+319,(vlSelf->CoreTop__DOT__DIP__DOT__rf[31]),64);
    bufp->fullIData(oldp+321,(vlSelf->CoreTop__DOT__DIP__DOT__IN[0]),32);
    bufp->fullIData(oldp+322,(vlSelf->CoreTop__DOT__DIP__DOT__IN[1]),32);
    bufp->fullIData(oldp+323,(vlSelf->CoreTop__DOT__DIP__DOT__IN[2]),32);
    bufp->fullIData(oldp+324,(vlSelf->CoreTop__DOT__DIP__DOT__IN[3]),32);
    bufp->fullIData(oldp+325,(vlSelf->CoreTop__DOT__DIP__DOT__IN[4]),32);
    bufp->fullIData(oldp+326,(vlSelf->CoreTop__DOT__DIP__DOT__IN[5]),32);
    bufp->fullIData(oldp+327,(vlSelf->CoreTop__DOT__DIP__DOT__IN[6]),32);
    bufp->fullQData(oldp+328,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mepc_REG_1),64);
    bufp->fullQData(oldp+330,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mcause_REG_1),64);
    bufp->fullQData(oldp+332,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mstatus_REG_1),64);
    bufp->fullQData(oldp+334,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mtvec_REG_1),64);
    bufp->fullBit(oldp+336,(vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_valid));
    bufp->fullBit(oldp+337,((0x44U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count))));
    bufp->fullQData(oldp+338,((((QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[0U])))),64);
    bufp->fullBit(oldp+340,(((IData)(vlSelf->CoreTop__DOT__EX__DOT__is_div) 
                             & (2U != (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state)))));
    bufp->fullBit(oldp+341,(vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_flow_div_signed));
    bufp->fullBit(oldp+342,((2U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state))));
    bufp->fullBit(oldp+343,(vlSelf->CoreTop__DOT__EX__DOT__is_mul));
    bufp->fullBit(oldp+344,(vlSelf->CoreTop__DOT__EX__DOT__is_div));
    bufp->fullBit(oldp+345,(vlSelf->CoreTop__DOT__EX__DOT__is_divw));
    bufp->fullQData(oldp+346,(vlSelf->CoreTop__DOT__EX__DOT__mepc),64);
    bufp->fullQData(oldp+348,(vlSelf->CoreTop__DOT__EX__DOT__mcause),64);
    bufp->fullQData(oldp+350,(vlSelf->CoreTop__DOT__EX__DOT__mstatus),64);
    bufp->fullQData(oldp+352,(vlSelf->CoreTop__DOT__EX__DOT__mtvec),64);
    bufp->fullQData(oldp+354,(vlSelf->CoreTop__DOT__EX__DOT__mie),64);
    bufp->fullQData(oldp+356,(vlSelf->CoreTop__DOT__EX__DOT__mip),64);
    bufp->fullBit(oldp+358,((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[0U] 
                             >> 0x1fU)));
    bufp->fullQData(oldp+359,(((3U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType))
                                ? (4ULL + vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC)
                                : 0ULL)),64);
    bufp->fullQData(oldp+361,(((0x6bU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
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
    bufp->fullQData(oldp+363,(vlSelf->CoreTop__DOT__EX__DOT__csr_data),64);
    bufp->fullQData(oldp+365,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mtvec_REG),64);
    bufp->fullQData(oldp+367,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mcause_REG),64);
    bufp->fullQData(oldp+369,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mepc_REG),64);
    bufp->fullQData(oldp+371,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mstatus_REG),64);
    bufp->fullQData(oldp+373,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[0]),64);
    bufp->fullQData(oldp+375,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[1]),64);
    bufp->fullQData(oldp+377,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[2]),64);
    bufp->fullQData(oldp+379,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[3]),64);
    bufp->fullQData(oldp+381,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[4]),64);
    bufp->fullQData(oldp+383,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[5]),64);
    bufp->fullWData(oldp+385,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend),128);
    bufp->fullQData(oldp+389,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divisor),64);
    bufp->fullQData(oldp+391,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S),64);
    bufp->fullCData(oldp+393,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state),2);
    bufp->fullCData(oldp+394,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__count),6);
    bufp->fullBit(oldp+395,((0x3fU == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__count))));
    bufp->fullBit(oldp+396,(((1U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state)) 
                             & (0x3fU == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__count)))));
    bufp->fullWData(oldp+397,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div),65);
    bufp->fullQData(oldp+400,((- vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S)),64);
    bufp->fullQData(oldp+402,((- (((QData)((IData)(
                                                   vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[3U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[2U]))))),64);
    bufp->fullCData(oldp+404,((7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U])),3);
    bufp->fullWData(oldp+405,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand),132);
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
    bufp->fullWData(oldp+410,(__Vtemp_h791e8ef8__0),132);
    bufp->fullBit(oldp+415,(((0U != (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U])) 
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
    bufp->fullWData(oldp+416,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier),66);
    bufp->fullWData(oldp+419,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p),132);
    bufp->fullCData(oldp+424,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count),7);
    bufp->fullWData(oldp+425,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__temp),132);
    bufp->fullBit(oldp+430,((1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__temp[4U] 
                                   >> 3U))));
    bufp->fullBit(oldp+431,(((IData)(vlSelf->CoreTop__DOT__EX_io_in_ready) 
                             & (0U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)))));
    bufp->fullQData(oldp+432,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data_io_write_bus_addr),64);
    bufp->fullBit(oldp+434,((8U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__count))));
    bufp->fullCData(oldp+435,(((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r)
                                ? 2U : 1U)),2);
    bufp->fullWData(oldp+436,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data_io_write_bus_wdata),512);
    bufp->fullQData(oldp+452,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_tag_w_data),53);
    bufp->fullQData(oldp+454,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_data),53);
    bufp->fullBit(oldp+456,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0
                            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0]));
    bufp->fullBit(oldp+457,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1
                            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_addr_pipe_0]));
    __Vtemp_hf989eec7__0[0U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0U];
    __Vtemp_hf989eec7__0[1U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][1U];
    __Vtemp_hf989eec7__0[2U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][2U];
    __Vtemp_hf989eec7__0[3U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][3U];
    __Vtemp_hf989eec7__0[4U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][4U];
    __Vtemp_hf989eec7__0[5U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][5U];
    __Vtemp_hf989eec7__0[6U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][6U];
    __Vtemp_hf989eec7__0[7U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][7U];
    __Vtemp_hf989eec7__0[8U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][8U];
    __Vtemp_hf989eec7__0[9U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][9U];
    __Vtemp_hf989eec7__0[0xaU] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0xaU];
    __Vtemp_hf989eec7__0[0xbU] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0xbU];
    __Vtemp_hf989eec7__0[0xcU] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0xcU];
    __Vtemp_hf989eec7__0[0xdU] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0xdU];
    __Vtemp_hf989eec7__0[0xeU] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0xeU];
    __Vtemp_hf989eec7__0[0xfU] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0xfU];
    bufp->fullWData(oldp+458,(__Vtemp_hf989eec7__0),512);
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
    bufp->fullWData(oldp+474,(__Vtemp_h4453b49e__0),512);
    bufp->fullQData(oldp+490,((vlSelf->CoreTop__DOT__IF__DOT__temp 
                               >> 0xbU)),53);
    bufp->fullCData(oldp+492,((0x1fU & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                >> 6U)))),5);
    bufp->fullCData(oldp+493,((0x3fU & (IData)(vlSelf->CoreTop__DOT__IF__DOT__temp))),6);
    bufp->fullBit(oldp+494,(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_in_valid_REG));
    bufp->fullBit(oldp+495,(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit));
    bufp->fullWData(oldp+496,(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data),512);
    bufp->fullBit(oldp+512,(((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT___hit_way_0_T) 
                             & ((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                 >> 0xbU) == vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_tag_w_data))));
    bufp->fullBit(oldp+513,(((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT___hit_way_1_T) 
                             & ((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                 >> 0xbU) == vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_data))));
    bufp->fullBit(oldp+514,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[0]));
    bufp->fullBit(oldp+515,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[1]));
    bufp->fullBit(oldp+516,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[2]));
    bufp->fullBit(oldp+517,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[3]));
    bufp->fullBit(oldp+518,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[4]));
    bufp->fullBit(oldp+519,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[5]));
    bufp->fullBit(oldp+520,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[6]));
    bufp->fullBit(oldp+521,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[7]));
    bufp->fullBit(oldp+522,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[8]));
    bufp->fullBit(oldp+523,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[9]));
    bufp->fullBit(oldp+524,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[10]));
    bufp->fullBit(oldp+525,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[11]));
    bufp->fullBit(oldp+526,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[12]));
    bufp->fullBit(oldp+527,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[13]));
    bufp->fullBit(oldp+528,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[14]));
    bufp->fullBit(oldp+529,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[15]));
    bufp->fullBit(oldp+530,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[16]));
    bufp->fullBit(oldp+531,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[17]));
    bufp->fullBit(oldp+532,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[18]));
    bufp->fullBit(oldp+533,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[19]));
    bufp->fullBit(oldp+534,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[20]));
    bufp->fullBit(oldp+535,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[21]));
    bufp->fullBit(oldp+536,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[22]));
    bufp->fullBit(oldp+537,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[23]));
    bufp->fullBit(oldp+538,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[24]));
    bufp->fullBit(oldp+539,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[25]));
    bufp->fullBit(oldp+540,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[26]));
    bufp->fullBit(oldp+541,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[27]));
    bufp->fullBit(oldp+542,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[28]));
    bufp->fullBit(oldp+543,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[29]));
    bufp->fullBit(oldp+544,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[30]));
    bufp->fullBit(oldp+545,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[31]));
    bufp->fullBit(oldp+546,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_lru_w_MPORT_en_pipe_0));
    bufp->fullCData(oldp+547,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_lru_w_MPORT_addr_pipe_0),5);
    bufp->fullBit(oldp+548,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru
                            [vlSelf->CoreTop__DOT__ICACHE__DOT__lru_lru_w_MPORT_addr_pipe_0]));
    bufp->fullBit(oldp+549,(((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                             & ((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                & ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit) 
                                   & ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT___hit_way_0_T) 
                                      & ((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                          >> 0xbU) 
                                         == vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_tag_w_data)))))));
    bufp->fullBit(oldp+550,(((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                             & ((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                & ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit) 
                                   & ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT___hit_way_1_T) 
                                      & ((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                          >> 0xbU) 
                                         == vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_data)))))));
    bufp->fullBit(oldp+551,(((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                             & ((1U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                & ((2U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                   & (((IData)(vlSelf->CoreTop__DOT__EX_io_in_ready) 
                                       & (8U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__count))) 
                                      & (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r)))))));
    bufp->fullBit(oldp+552,(((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                             & ((1U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                & ((2U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                   & (((IData)(vlSelf->CoreTop__DOT__EX_io_in_ready) 
                                       & (8U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__count))) 
                                      & (~ (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r))))))));
    bufp->fullCData(oldp+553,(vlSelf->CoreTop__DOT__ICACHE__DOT__state),2);
    bufp->fullWData(oldp+554,(vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg),512);
    bufp->fullBit(oldp+570,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r));
    bufp->fullCData(oldp+571,(vlSelf->CoreTop__DOT__ICACHE__DOT__count),4);
    bufp->fullQData(oldp+572,(vlSelf->CoreTop__DOT__ICACHE__DOT__hit_data),64);
    bufp->fullQData(oldp+574,(vlSelf->CoreTop__DOT__ICACHE__DOT__mem_data),64);
    bufp->fullWData(oldp+576,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[0]),512);
    bufp->fullWData(oldp+592,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[1]),512);
    bufp->fullWData(oldp+608,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[2]),512);
    bufp->fullWData(oldp+624,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[3]),512);
    bufp->fullWData(oldp+640,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[4]),512);
    bufp->fullWData(oldp+656,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[5]),512);
    bufp->fullWData(oldp+672,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[6]),512);
    bufp->fullWData(oldp+688,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[7]),512);
    bufp->fullWData(oldp+704,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[8]),512);
    bufp->fullWData(oldp+720,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[9]),512);
    bufp->fullWData(oldp+736,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[10]),512);
    bufp->fullWData(oldp+752,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[11]),512);
    bufp->fullWData(oldp+768,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[12]),512);
    bufp->fullWData(oldp+784,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[13]),512);
    bufp->fullWData(oldp+800,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[14]),512);
    bufp->fullWData(oldp+816,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[15]),512);
    bufp->fullWData(oldp+832,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[16]),512);
    bufp->fullWData(oldp+848,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[17]),512);
    bufp->fullWData(oldp+864,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[18]),512);
    bufp->fullWData(oldp+880,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[19]),512);
    bufp->fullWData(oldp+896,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[20]),512);
    bufp->fullWData(oldp+912,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[21]),512);
    bufp->fullWData(oldp+928,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[22]),512);
    bufp->fullWData(oldp+944,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[23]),512);
    bufp->fullWData(oldp+960,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[24]),512);
    bufp->fullWData(oldp+976,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[25]),512);
    bufp->fullWData(oldp+992,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[26]),512);
    bufp->fullWData(oldp+1008,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[27]),512);
    bufp->fullWData(oldp+1024,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[28]),512);
    bufp->fullWData(oldp+1040,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[29]),512);
    bufp->fullWData(oldp+1056,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[30]),512);
    bufp->fullWData(oldp+1072,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[31]),512);
    bufp->fullBit(oldp+1088,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_en_pipe_0));
    bufp->fullCData(oldp+1089,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0),5);
    bufp->fullCData(oldp+1090,((0x1fU & (IData)((vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data_io_write_bus_addr 
                                                 >> 6U)))),5);
    bufp->fullBit(oldp+1091,(((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r)
                               ? 0U : 1U)));
    bufp->fullWData(oldp+1092,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[0]),512);
    bufp->fullWData(oldp+1108,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[1]),512);
    bufp->fullWData(oldp+1124,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[2]),512);
    bufp->fullWData(oldp+1140,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[3]),512);
    bufp->fullWData(oldp+1156,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[4]),512);
    bufp->fullWData(oldp+1172,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[5]),512);
    bufp->fullWData(oldp+1188,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[6]),512);
    bufp->fullWData(oldp+1204,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[7]),512);
    bufp->fullWData(oldp+1220,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[8]),512);
    bufp->fullWData(oldp+1236,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[9]),512);
    bufp->fullWData(oldp+1252,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[10]),512);
    bufp->fullWData(oldp+1268,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[11]),512);
    bufp->fullWData(oldp+1284,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[12]),512);
    bufp->fullWData(oldp+1300,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[13]),512);
    bufp->fullWData(oldp+1316,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[14]),512);
    bufp->fullWData(oldp+1332,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[15]),512);
    bufp->fullWData(oldp+1348,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[16]),512);
    bufp->fullWData(oldp+1364,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[17]),512);
    bufp->fullWData(oldp+1380,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[18]),512);
    bufp->fullWData(oldp+1396,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[19]),512);
    bufp->fullWData(oldp+1412,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[20]),512);
    bufp->fullWData(oldp+1428,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[21]),512);
    bufp->fullWData(oldp+1444,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[22]),512);
    bufp->fullWData(oldp+1460,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[23]),512);
    bufp->fullWData(oldp+1476,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[24]),512);
    bufp->fullWData(oldp+1492,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[25]),512);
    bufp->fullWData(oldp+1508,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[26]),512);
    bufp->fullWData(oldp+1524,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[27]),512);
    bufp->fullWData(oldp+1540,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[28]),512);
    bufp->fullWData(oldp+1556,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[29]),512);
    bufp->fullWData(oldp+1572,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[30]),512);
    bufp->fullWData(oldp+1588,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[31]),512);
    bufp->fullBit(oldp+1604,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_en_pipe_0));
    bufp->fullBit(oldp+1605,((1U & (((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r)
                                      ? 2U : 1U) >> 1U))));
    bufp->fullQData(oldp+1606,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[0]),53);
    bufp->fullQData(oldp+1608,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[1]),53);
    bufp->fullQData(oldp+1610,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[2]),53);
    bufp->fullQData(oldp+1612,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[3]),53);
    bufp->fullQData(oldp+1614,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[4]),53);
    bufp->fullQData(oldp+1616,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[5]),53);
    bufp->fullQData(oldp+1618,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[6]),53);
    bufp->fullQData(oldp+1620,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[7]),53);
    bufp->fullQData(oldp+1622,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[8]),53);
    bufp->fullQData(oldp+1624,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[9]),53);
    bufp->fullQData(oldp+1626,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[10]),53);
    bufp->fullQData(oldp+1628,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[11]),53);
    bufp->fullQData(oldp+1630,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[12]),53);
    bufp->fullQData(oldp+1632,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[13]),53);
    bufp->fullQData(oldp+1634,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[14]),53);
    bufp->fullQData(oldp+1636,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[15]),53);
    bufp->fullQData(oldp+1638,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[16]),53);
    bufp->fullQData(oldp+1640,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[17]),53);
    bufp->fullQData(oldp+1642,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[18]),53);
    bufp->fullQData(oldp+1644,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[19]),53);
    bufp->fullQData(oldp+1646,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[20]),53);
    bufp->fullQData(oldp+1648,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[21]),53);
    bufp->fullQData(oldp+1650,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[22]),53);
    bufp->fullQData(oldp+1652,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[23]),53);
    bufp->fullQData(oldp+1654,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[24]),53);
    bufp->fullQData(oldp+1656,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[25]),53);
    bufp->fullQData(oldp+1658,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[26]),53);
    bufp->fullQData(oldp+1660,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[27]),53);
    bufp->fullQData(oldp+1662,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[28]),53);
    bufp->fullQData(oldp+1664,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[29]),53);
    bufp->fullQData(oldp+1666,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[30]),53);
    bufp->fullQData(oldp+1668,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[31]),53);
    bufp->fullBit(oldp+1670,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_tag_w_en_pipe_0));
    bufp->fullCData(oldp+1671,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_tag_w_addr_pipe_0),5);
    bufp->fullQData(oldp+1672,((vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data_io_write_bus_addr 
                                >> 0xbU)),53);
    bufp->fullQData(oldp+1674,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[0]),53);
    bufp->fullQData(oldp+1676,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[1]),53);
    bufp->fullQData(oldp+1678,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[2]),53);
    bufp->fullQData(oldp+1680,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[3]),53);
    bufp->fullQData(oldp+1682,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[4]),53);
    bufp->fullQData(oldp+1684,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[5]),53);
    bufp->fullQData(oldp+1686,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[6]),53);
    bufp->fullQData(oldp+1688,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[7]),53);
    bufp->fullQData(oldp+1690,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[8]),53);
    bufp->fullQData(oldp+1692,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[9]),53);
    bufp->fullQData(oldp+1694,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[10]),53);
    bufp->fullQData(oldp+1696,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[11]),53);
    bufp->fullQData(oldp+1698,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[12]),53);
    bufp->fullQData(oldp+1700,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[13]),53);
    bufp->fullQData(oldp+1702,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[14]),53);
    bufp->fullQData(oldp+1704,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[15]),53);
    bufp->fullQData(oldp+1706,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[16]),53);
    bufp->fullQData(oldp+1708,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[17]),53);
    bufp->fullQData(oldp+1710,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[18]),53);
    bufp->fullQData(oldp+1712,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[19]),53);
    bufp->fullQData(oldp+1714,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[20]),53);
    bufp->fullQData(oldp+1716,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[21]),53);
    bufp->fullQData(oldp+1718,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[22]),53);
    bufp->fullQData(oldp+1720,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[23]),53);
    bufp->fullQData(oldp+1722,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[24]),53);
    bufp->fullQData(oldp+1724,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[25]),53);
    bufp->fullQData(oldp+1726,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[26]),53);
    bufp->fullQData(oldp+1728,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[27]),53);
    bufp->fullQData(oldp+1730,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[28]),53);
    bufp->fullQData(oldp+1732,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[29]),53);
    bufp->fullQData(oldp+1734,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[30]),53);
    bufp->fullQData(oldp+1736,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[31]),53);
    bufp->fullBit(oldp+1738,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_en_pipe_0));
    bufp->fullCData(oldp+1739,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0),5);
    bufp->fullBit(oldp+1740,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[0]));
    bufp->fullBit(oldp+1741,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[1]));
    bufp->fullBit(oldp+1742,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[2]));
    bufp->fullBit(oldp+1743,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[3]));
    bufp->fullBit(oldp+1744,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[4]));
    bufp->fullBit(oldp+1745,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[5]));
    bufp->fullBit(oldp+1746,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[6]));
    bufp->fullBit(oldp+1747,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[7]));
    bufp->fullBit(oldp+1748,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[8]));
    bufp->fullBit(oldp+1749,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[9]));
    bufp->fullBit(oldp+1750,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[10]));
    bufp->fullBit(oldp+1751,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[11]));
    bufp->fullBit(oldp+1752,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[12]));
    bufp->fullBit(oldp+1753,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[13]));
    bufp->fullBit(oldp+1754,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[14]));
    bufp->fullBit(oldp+1755,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[15]));
    bufp->fullBit(oldp+1756,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[16]));
    bufp->fullBit(oldp+1757,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[17]));
    bufp->fullBit(oldp+1758,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[18]));
    bufp->fullBit(oldp+1759,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[19]));
    bufp->fullBit(oldp+1760,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[20]));
    bufp->fullBit(oldp+1761,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[21]));
    bufp->fullBit(oldp+1762,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[22]));
    bufp->fullBit(oldp+1763,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[23]));
    bufp->fullBit(oldp+1764,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[24]));
    bufp->fullBit(oldp+1765,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[25]));
    bufp->fullBit(oldp+1766,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[26]));
    bufp->fullBit(oldp+1767,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[27]));
    bufp->fullBit(oldp+1768,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[28]));
    bufp->fullBit(oldp+1769,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[29]));
    bufp->fullBit(oldp+1770,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[30]));
    bufp->fullBit(oldp+1771,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[31]));
    bufp->fullBit(oldp+1772,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_en_pipe_0));
    bufp->fullCData(oldp+1773,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0),5);
    bufp->fullBit(oldp+1774,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[0]));
    bufp->fullBit(oldp+1775,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[1]));
    bufp->fullBit(oldp+1776,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[2]));
    bufp->fullBit(oldp+1777,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[3]));
    bufp->fullBit(oldp+1778,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[4]));
    bufp->fullBit(oldp+1779,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[5]));
    bufp->fullBit(oldp+1780,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[6]));
    bufp->fullBit(oldp+1781,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[7]));
    bufp->fullBit(oldp+1782,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[8]));
    bufp->fullBit(oldp+1783,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[9]));
    bufp->fullBit(oldp+1784,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[10]));
    bufp->fullBit(oldp+1785,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[11]));
    bufp->fullBit(oldp+1786,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[12]));
    bufp->fullBit(oldp+1787,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[13]));
    bufp->fullBit(oldp+1788,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[14]));
    bufp->fullBit(oldp+1789,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[15]));
    bufp->fullBit(oldp+1790,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[16]));
    bufp->fullBit(oldp+1791,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[17]));
    bufp->fullBit(oldp+1792,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[18]));
    bufp->fullBit(oldp+1793,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[19]));
    bufp->fullBit(oldp+1794,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[20]));
    bufp->fullBit(oldp+1795,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[21]));
    bufp->fullBit(oldp+1796,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[22]));
    bufp->fullBit(oldp+1797,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[23]));
    bufp->fullBit(oldp+1798,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[24]));
    bufp->fullBit(oldp+1799,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[25]));
    bufp->fullBit(oldp+1800,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[26]));
    bufp->fullBit(oldp+1801,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[27]));
    bufp->fullBit(oldp+1802,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[28]));
    bufp->fullBit(oldp+1803,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[29]));
    bufp->fullBit(oldp+1804,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[30]));
    bufp->fullBit(oldp+1805,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[31]));
    bufp->fullBit(oldp+1806,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_en_pipe_0));
    bufp->fullCData(oldp+1807,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_addr_pipe_0),5);
    bufp->fullBit(oldp+1808,(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_0_result));
    bufp->fullBit(oldp+1809,(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_1_result));
    bufp->fullCData(oldp+1810,(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0),4);
    bufp->fullBit(oldp+1811,(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_3));
    bufp->fullCData(oldp+1812,((((7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                  ? 2U : 0U) | ((3U 
                                                 == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                                 ? 2U
                                                 : 0U))),2);
    bufp->fullBit(oldp+1813,((((8U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)) 
                               | (7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))) 
                              | (3U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)))));
    bufp->fullBit(oldp+1814,((vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                              >> 0x1fU)));
    bufp->fullBit(oldp+1815,((1U & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                    >> 0x13U))));
    bufp->fullBit(oldp+1816,((vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                              >> 0x1fU)));
    bufp->fullIData(oldp+1817,(((1U & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
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
    bufp->fullCData(oldp+1818,(vlSelf->CoreTop__DOT__IFMEM__DOT__state),2);
    bufp->fullCData(oldp+1819,(vlSelf->CoreTop__DOT__If_axi_birdge__DOT__state),2);
    bufp->fullBit(oldp+1820,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_valid));
    bufp->fullBit(oldp+1821,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_rdata_rep_valid));
    bufp->fullQData(oldp+1822,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_rdata_rep_bits_rdata),64);
    bufp->fullBit(oldp+1824,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_rep));
    bufp->fullQData(oldp+1825,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_addr_req_bits_addr),64);
    bufp->fullBit(oldp+1827,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_addr_req_bits_ce));
    bufp->fullBit(oldp+1828,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_addr_req_bits_we));
    bufp->fullQData(oldp+1829,((((QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0U])))),64);
    bufp->fullBit(oldp+1831,(((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_valid) 
                              & (0U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)))));
    bufp->fullQData(oldp+1832,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_addr),64);
    bufp->fullBit(oldp+1834,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_valid));
    bufp->fullCData(oldp+1835,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_waymask),2);
    bufp->fullWData(oldp+1836,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_wdata),512);
    bufp->fullQData(oldp+1852,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_tag_w_data),53);
    bufp->fullQData(oldp+1854,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1_tag_w_data),53);
    bufp->fullBit(oldp+1856,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0
                             [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0]));
    bufp->fullBit(oldp+1857,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1
                             [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_addr_pipe_0]));
    bufp->fullWData(oldp+1858,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data),512);
    bufp->fullWData(oldp+1874,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data),512);
    bufp->fullQData(oldp+1890,((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                >> 0xbU)),53);
    bufp->fullCData(oldp+1892,((0x1fU & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                 >> 6U)))),5);
    bufp->fullCData(oldp+1893,((0x3fU & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp))),6);
    bufp->fullBit(oldp+1894,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_in_valid_REG));
    bufp->fullBit(oldp+1895,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit));
    bufp->fullWData(oldp+1896,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data),512);
    bufp->fullBit(oldp+1912,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit_way_0));
    bufp->fullBit(oldp+1913,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit_way_1));
    bufp->fullBit(oldp+1914,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[0]));
    bufp->fullBit(oldp+1915,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[1]));
    bufp->fullBit(oldp+1916,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[2]));
    bufp->fullBit(oldp+1917,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[3]));
    bufp->fullBit(oldp+1918,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[4]));
    bufp->fullBit(oldp+1919,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[5]));
    bufp->fullBit(oldp+1920,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[6]));
    bufp->fullBit(oldp+1921,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[7]));
    bufp->fullBit(oldp+1922,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[8]));
    bufp->fullBit(oldp+1923,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[9]));
    bufp->fullBit(oldp+1924,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[10]));
    bufp->fullBit(oldp+1925,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[11]));
    bufp->fullBit(oldp+1926,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[12]));
    bufp->fullBit(oldp+1927,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[13]));
    bufp->fullBit(oldp+1928,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[14]));
    bufp->fullBit(oldp+1929,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[15]));
    bufp->fullBit(oldp+1930,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[16]));
    bufp->fullBit(oldp+1931,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[17]));
    bufp->fullBit(oldp+1932,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[18]));
    bufp->fullBit(oldp+1933,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[19]));
    bufp->fullBit(oldp+1934,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[20]));
    bufp->fullBit(oldp+1935,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[21]));
    bufp->fullBit(oldp+1936,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[22]));
    bufp->fullBit(oldp+1937,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[23]));
    bufp->fullBit(oldp+1938,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[24]));
    bufp->fullBit(oldp+1939,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[25]));
    bufp->fullBit(oldp+1940,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[26]));
    bufp->fullBit(oldp+1941,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[27]));
    bufp->fullBit(oldp+1942,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[28]));
    bufp->fullBit(oldp+1943,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[29]));
    bufp->fullBit(oldp+1944,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[30]));
    bufp->fullBit(oldp+1945,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[31]));
    bufp->fullBit(oldp+1946,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_en_pipe_0));
    bufp->fullCData(oldp+1947,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_addr_pipe_0),5);
    bufp->fullBit(oldp+1948,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_data));
    bufp->fullBit(oldp+1949,(((0U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                              & ((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                 & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit) 
                                    & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit_way_0))))));
    bufp->fullBit(oldp+1950,(((0U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                              & ((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                 & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit) 
                                    & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit_way_1))))));
    bufp->fullBit(oldp+1951,(((0U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                              & ((1U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                 & ((2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                    & ((8U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count)) 
                                       & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_r)))))));
    bufp->fullBit(oldp+1952,(((0U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                              & ((1U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                 & ((2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                    & ((8U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count)) 
                                       & (~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_r))))))));
    bufp->fullBit(oldp+1953,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[0]));
    bufp->fullBit(oldp+1954,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[1]));
    bufp->fullBit(oldp+1955,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[2]));
    bufp->fullBit(oldp+1956,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[3]));
    bufp->fullBit(oldp+1957,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[4]));
    bufp->fullBit(oldp+1958,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[5]));
    bufp->fullBit(oldp+1959,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[6]));
    bufp->fullBit(oldp+1960,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[7]));
    bufp->fullBit(oldp+1961,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[8]));
    bufp->fullBit(oldp+1962,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[9]));
    bufp->fullBit(oldp+1963,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[10]));
    bufp->fullBit(oldp+1964,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[11]));
    bufp->fullBit(oldp+1965,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[12]));
    bufp->fullBit(oldp+1966,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[13]));
    bufp->fullBit(oldp+1967,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[14]));
    bufp->fullBit(oldp+1968,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[15]));
    bufp->fullBit(oldp+1969,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[16]));
    bufp->fullBit(oldp+1970,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[17]));
    bufp->fullBit(oldp+1971,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[18]));
    bufp->fullBit(oldp+1972,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[19]));
    bufp->fullBit(oldp+1973,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[20]));
    bufp->fullBit(oldp+1974,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[21]));
    bufp->fullBit(oldp+1975,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[22]));
    bufp->fullBit(oldp+1976,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[23]));
    bufp->fullBit(oldp+1977,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[24]));
    bufp->fullBit(oldp+1978,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[25]));
    bufp->fullBit(oldp+1979,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[26]));
    bufp->fullBit(oldp+1980,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[27]));
    bufp->fullBit(oldp+1981,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[28]));
    bufp->fullBit(oldp+1982,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[29]));
    bufp->fullBit(oldp+1983,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[30]));
    bufp->fullBit(oldp+1984,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[31]));
    bufp->fullBit(oldp+1985,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0_dirt_w_en_pipe_0));
    bufp->fullBit(oldp+1986,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0
                             [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_addr_pipe_0]));
    bufp->fullBit(oldp+1987,((1U & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__waymask))));
    bufp->fullBit(oldp+1988,(((IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_we) 
                              & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_valid_T_5))));
    bufp->fullBit(oldp+1989,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[0]));
    bufp->fullBit(oldp+1990,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[1]));
    bufp->fullBit(oldp+1991,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[2]));
    bufp->fullBit(oldp+1992,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[3]));
    bufp->fullBit(oldp+1993,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[4]));
    bufp->fullBit(oldp+1994,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[5]));
    bufp->fullBit(oldp+1995,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[6]));
    bufp->fullBit(oldp+1996,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[7]));
    bufp->fullBit(oldp+1997,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[8]));
    bufp->fullBit(oldp+1998,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[9]));
    bufp->fullBit(oldp+1999,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[10]));
    bufp->fullBit(oldp+2000,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[11]));
    bufp->fullBit(oldp+2001,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[12]));
    bufp->fullBit(oldp+2002,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[13]));
    bufp->fullBit(oldp+2003,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[14]));
    bufp->fullBit(oldp+2004,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[15]));
    bufp->fullBit(oldp+2005,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[16]));
    bufp->fullBit(oldp+2006,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[17]));
    bufp->fullBit(oldp+2007,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[18]));
    bufp->fullBit(oldp+2008,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[19]));
    bufp->fullBit(oldp+2009,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[20]));
    bufp->fullBit(oldp+2010,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[21]));
    bufp->fullBit(oldp+2011,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[22]));
    bufp->fullBit(oldp+2012,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[23]));
    bufp->fullBit(oldp+2013,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[24]));
    bufp->fullBit(oldp+2014,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[25]));
    bufp->fullBit(oldp+2015,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[26]));
    bufp->fullBit(oldp+2016,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[27]));
    bufp->fullBit(oldp+2017,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[28]));
    bufp->fullBit(oldp+2018,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[29]));
    bufp->fullBit(oldp+2019,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[30]));
    bufp->fullBit(oldp+2020,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[31]));
    bufp->fullBit(oldp+2021,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1_dirt_w_en_pipe_0));
    bufp->fullBit(oldp+2022,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1
                             [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_addr_pipe_0]));
    bufp->fullBit(oldp+2023,((1U & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__waymask) 
                                    >> 1U))));
    bufp->fullCData(oldp+2024,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state),2);
    bufp->fullWData(oldp+2025,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg),512);
    bufp->fullQData(oldp+2041,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_addr_reg),64);
    bufp->fullBit(oldp+2043,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_r));
    bufp->fullCData(oldp+2044,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count),4);
    bufp->fullBit(oldp+2045,((8U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count))));
    bufp->fullCData(oldp+2046,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count_write),4);
    bufp->fullBit(oldp+2047,((8U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count_write))));
    bufp->fullQData(oldp+2048,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_addr_reg),64);
    bufp->fullWData(oldp+2050,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg),512);
    bufp->fullQData(oldp+2066,(((0U == (7U & (IData)(
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
    bufp->fullQData(oldp+2068,(((0U == (7U & (IData)(
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
    bufp->fullQData(oldp+2070,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask),64);
    bufp->fullQData(oldp+2072,((((QData)((IData)(((
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
    bufp->fullWData(oldp+2074,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo_lo),128);
    bufp->fullQData(oldp+2078,((((QData)((IData)(((
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
    bufp->fullWData(oldp+2080,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo),256);
    bufp->fullQData(oldp+2088,((((QData)((IData)(((
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
    bufp->fullWData(oldp+2090,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi_lo),128);
    bufp->fullQData(oldp+2094,((((QData)((IData)(((
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
    bufp->fullWData(oldp+2096,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi),256);
    bufp->fullWData(oldp+2104,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend),512);
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
    bufp->fullWData(oldp+2120,(__Vtemp_hc2882e76__0),512);
    bufp->fullCData(oldp+2136,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__waymask),2);
    bufp->fullWData(oldp+2137,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[0]),512);
    bufp->fullWData(oldp+2153,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[1]),512);
    bufp->fullWData(oldp+2169,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[2]),512);
    bufp->fullWData(oldp+2185,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[3]),512);
    bufp->fullWData(oldp+2201,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[4]),512);
    bufp->fullWData(oldp+2217,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[5]),512);
    bufp->fullWData(oldp+2233,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[6]),512);
    bufp->fullWData(oldp+2249,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[7]),512);
    bufp->fullWData(oldp+2265,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[8]),512);
    bufp->fullWData(oldp+2281,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[9]),512);
    bufp->fullWData(oldp+2297,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[10]),512);
    bufp->fullWData(oldp+2313,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[11]),512);
    bufp->fullWData(oldp+2329,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[12]),512);
    bufp->fullWData(oldp+2345,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[13]),512);
    bufp->fullWData(oldp+2361,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[14]),512);
    bufp->fullWData(oldp+2377,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[15]),512);
    bufp->fullWData(oldp+2393,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[16]),512);
    bufp->fullWData(oldp+2409,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[17]),512);
    bufp->fullWData(oldp+2425,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[18]),512);
    bufp->fullWData(oldp+2441,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[19]),512);
    bufp->fullWData(oldp+2457,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[20]),512);
    bufp->fullWData(oldp+2473,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[21]),512);
    bufp->fullWData(oldp+2489,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[22]),512);
    bufp->fullWData(oldp+2505,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[23]),512);
    bufp->fullWData(oldp+2521,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[24]),512);
    bufp->fullWData(oldp+2537,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[25]),512);
    bufp->fullWData(oldp+2553,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[26]),512);
    bufp->fullWData(oldp+2569,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[27]),512);
    bufp->fullWData(oldp+2585,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[28]),512);
    bufp->fullWData(oldp+2601,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[29]),512);
    bufp->fullWData(oldp+2617,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[30]),512);
    bufp->fullWData(oldp+2633,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[31]),512);
    bufp->fullBit(oldp+2649,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_en_pipe_0));
    bufp->fullCData(oldp+2650,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0),5);
    bufp->fullCData(oldp+2651,((0x1fU & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_addr 
                                                 >> 6U)))),5);
    bufp->fullBit(oldp+2652,((1U & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_waymask))));
    bufp->fullWData(oldp+2653,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[0]),512);
    bufp->fullWData(oldp+2669,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[1]),512);
    bufp->fullWData(oldp+2685,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[2]),512);
    bufp->fullWData(oldp+2701,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[3]),512);
    bufp->fullWData(oldp+2717,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[4]),512);
    bufp->fullWData(oldp+2733,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[5]),512);
    bufp->fullWData(oldp+2749,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[6]),512);
    bufp->fullWData(oldp+2765,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[7]),512);
    bufp->fullWData(oldp+2781,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[8]),512);
    bufp->fullWData(oldp+2797,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[9]),512);
    bufp->fullWData(oldp+2813,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[10]),512);
    bufp->fullWData(oldp+2829,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[11]),512);
    bufp->fullWData(oldp+2845,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[12]),512);
    bufp->fullWData(oldp+2861,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[13]),512);
    bufp->fullWData(oldp+2877,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[14]),512);
    bufp->fullWData(oldp+2893,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[15]),512);
    bufp->fullWData(oldp+2909,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[16]),512);
    bufp->fullWData(oldp+2925,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[17]),512);
    bufp->fullWData(oldp+2941,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[18]),512);
    bufp->fullWData(oldp+2957,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[19]),512);
    bufp->fullWData(oldp+2973,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[20]),512);
    bufp->fullWData(oldp+2989,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[21]),512);
    bufp->fullWData(oldp+3005,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[22]),512);
    bufp->fullWData(oldp+3021,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[23]),512);
    bufp->fullWData(oldp+3037,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[24]),512);
    bufp->fullWData(oldp+3053,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[25]),512);
    bufp->fullWData(oldp+3069,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[26]),512);
    bufp->fullWData(oldp+3085,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[27]),512);
    bufp->fullWData(oldp+3101,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[28]),512);
    bufp->fullWData(oldp+3117,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[29]),512);
    bufp->fullWData(oldp+3133,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[30]),512);
    bufp->fullWData(oldp+3149,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[31]),512);
    bufp->fullBit(oldp+3165,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_en_pipe_0));
    bufp->fullCData(oldp+3166,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0),5);
    bufp->fullBit(oldp+3167,((1U & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_waymask) 
                                    >> 1U))));
    bufp->fullQData(oldp+3168,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[0]),53);
    bufp->fullQData(oldp+3170,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[1]),53);
    bufp->fullQData(oldp+3172,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[2]),53);
    bufp->fullQData(oldp+3174,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[3]),53);
    bufp->fullQData(oldp+3176,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[4]),53);
    bufp->fullQData(oldp+3178,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[5]),53);
    bufp->fullQData(oldp+3180,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[6]),53);
    bufp->fullQData(oldp+3182,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[7]),53);
    bufp->fullQData(oldp+3184,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[8]),53);
    bufp->fullQData(oldp+3186,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[9]),53);
    bufp->fullQData(oldp+3188,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[10]),53);
    bufp->fullQData(oldp+3190,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[11]),53);
    bufp->fullQData(oldp+3192,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[12]),53);
    bufp->fullQData(oldp+3194,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[13]),53);
    bufp->fullQData(oldp+3196,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[14]),53);
    bufp->fullQData(oldp+3198,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[15]),53);
    bufp->fullQData(oldp+3200,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[16]),53);
    bufp->fullQData(oldp+3202,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[17]),53);
    bufp->fullQData(oldp+3204,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[18]),53);
    bufp->fullQData(oldp+3206,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[19]),53);
    bufp->fullQData(oldp+3208,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[20]),53);
    bufp->fullQData(oldp+3210,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[21]),53);
    bufp->fullQData(oldp+3212,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[22]),53);
    bufp->fullQData(oldp+3214,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[23]),53);
    bufp->fullQData(oldp+3216,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[24]),53);
    bufp->fullQData(oldp+3218,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[25]),53);
    bufp->fullQData(oldp+3220,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[26]),53);
    bufp->fullQData(oldp+3222,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[27]),53);
    bufp->fullQData(oldp+3224,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[28]),53);
    bufp->fullQData(oldp+3226,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[29]),53);
    bufp->fullQData(oldp+3228,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[30]),53);
    bufp->fullQData(oldp+3230,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[31]),53);
    bufp->fullBit(oldp+3232,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_tag_w_en_pipe_0));
    bufp->fullCData(oldp+3233,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_tag_w_addr_pipe_0),5);
    bufp->fullQData(oldp+3234,((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_addr 
                                >> 0xbU)),53);
    bufp->fullQData(oldp+3236,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[0]),53);
    bufp->fullQData(oldp+3238,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[1]),53);
    bufp->fullQData(oldp+3240,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[2]),53);
    bufp->fullQData(oldp+3242,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[3]),53);
    bufp->fullQData(oldp+3244,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[4]),53);
    bufp->fullQData(oldp+3246,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[5]),53);
    bufp->fullQData(oldp+3248,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[6]),53);
    bufp->fullQData(oldp+3250,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[7]),53);
    bufp->fullQData(oldp+3252,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[8]),53);
    bufp->fullQData(oldp+3254,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[9]),53);
    bufp->fullQData(oldp+3256,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[10]),53);
    bufp->fullQData(oldp+3258,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[11]),53);
    bufp->fullQData(oldp+3260,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[12]),53);
    bufp->fullQData(oldp+3262,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[13]),53);
    bufp->fullQData(oldp+3264,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[14]),53);
    bufp->fullQData(oldp+3266,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[15]),53);
    bufp->fullQData(oldp+3268,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[16]),53);
    bufp->fullQData(oldp+3270,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[17]),53);
    bufp->fullQData(oldp+3272,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[18]),53);
    bufp->fullQData(oldp+3274,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[19]),53);
    bufp->fullQData(oldp+3276,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[20]),53);
    bufp->fullQData(oldp+3278,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[21]),53);
    bufp->fullQData(oldp+3280,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[22]),53);
    bufp->fullQData(oldp+3282,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[23]),53);
    bufp->fullQData(oldp+3284,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[24]),53);
    bufp->fullQData(oldp+3286,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[25]),53);
    bufp->fullQData(oldp+3288,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[26]),53);
    bufp->fullQData(oldp+3290,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[27]),53);
    bufp->fullQData(oldp+3292,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[28]),53);
    bufp->fullQData(oldp+3294,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[29]),53);
    bufp->fullQData(oldp+3296,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[30]),53);
    bufp->fullQData(oldp+3298,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[31]),53);
    bufp->fullBit(oldp+3300,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1_tag_w_en_pipe_0));
    bufp->fullCData(oldp+3301,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0),5);
    bufp->fullBit(oldp+3302,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[0]));
    bufp->fullBit(oldp+3303,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[1]));
    bufp->fullBit(oldp+3304,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[2]));
    bufp->fullBit(oldp+3305,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[3]));
    bufp->fullBit(oldp+3306,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[4]));
    bufp->fullBit(oldp+3307,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[5]));
    bufp->fullBit(oldp+3308,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[6]));
    bufp->fullBit(oldp+3309,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[7]));
    bufp->fullBit(oldp+3310,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[8]));
    bufp->fullBit(oldp+3311,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[9]));
    bufp->fullBit(oldp+3312,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[10]));
    bufp->fullBit(oldp+3313,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[11]));
    bufp->fullBit(oldp+3314,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[12]));
    bufp->fullBit(oldp+3315,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[13]));
    bufp->fullBit(oldp+3316,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[14]));
    bufp->fullBit(oldp+3317,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[15]));
    bufp->fullBit(oldp+3318,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[16]));
    bufp->fullBit(oldp+3319,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[17]));
    bufp->fullBit(oldp+3320,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[18]));
    bufp->fullBit(oldp+3321,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[19]));
    bufp->fullBit(oldp+3322,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[20]));
    bufp->fullBit(oldp+3323,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[21]));
    bufp->fullBit(oldp+3324,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[22]));
    bufp->fullBit(oldp+3325,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[23]));
    bufp->fullBit(oldp+3326,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[24]));
    bufp->fullBit(oldp+3327,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[25]));
    bufp->fullBit(oldp+3328,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[26]));
    bufp->fullBit(oldp+3329,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[27]));
    bufp->fullBit(oldp+3330,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[28]));
    bufp->fullBit(oldp+3331,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[29]));
    bufp->fullBit(oldp+3332,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[30]));
    bufp->fullBit(oldp+3333,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[31]));
    bufp->fullBit(oldp+3334,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_en_pipe_0));
    bufp->fullCData(oldp+3335,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0),5);
    bufp->fullBit(oldp+3336,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[0]));
    bufp->fullBit(oldp+3337,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[1]));
    bufp->fullBit(oldp+3338,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[2]));
    bufp->fullBit(oldp+3339,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[3]));
    bufp->fullBit(oldp+3340,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[4]));
    bufp->fullBit(oldp+3341,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[5]));
    bufp->fullBit(oldp+3342,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[6]));
    bufp->fullBit(oldp+3343,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[7]));
    bufp->fullBit(oldp+3344,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[8]));
    bufp->fullBit(oldp+3345,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[9]));
    bufp->fullBit(oldp+3346,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[10]));
    bufp->fullBit(oldp+3347,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[11]));
    bufp->fullBit(oldp+3348,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[12]));
    bufp->fullBit(oldp+3349,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[13]));
    bufp->fullBit(oldp+3350,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[14]));
    bufp->fullBit(oldp+3351,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[15]));
    bufp->fullBit(oldp+3352,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[16]));
    bufp->fullBit(oldp+3353,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[17]));
    bufp->fullBit(oldp+3354,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[18]));
    bufp->fullBit(oldp+3355,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[19]));
    bufp->fullBit(oldp+3356,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[20]));
    bufp->fullBit(oldp+3357,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[21]));
    bufp->fullBit(oldp+3358,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[22]));
    bufp->fullBit(oldp+3359,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[23]));
    bufp->fullBit(oldp+3360,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[24]));
    bufp->fullBit(oldp+3361,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[25]));
    bufp->fullBit(oldp+3362,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[26]));
    bufp->fullBit(oldp+3363,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[27]));
    bufp->fullBit(oldp+3364,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[28]));
    bufp->fullBit(oldp+3365,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[29]));
    bufp->fullBit(oldp+3366,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[30]));
    bufp->fullBit(oldp+3367,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[31]));
    bufp->fullBit(oldp+3368,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_en_pipe_0));
    bufp->fullCData(oldp+3369,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_addr_pipe_0),5);
    bufp->fullBit(oldp+3370,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_0_result));
    bufp->fullBit(oldp+3371,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_1_result));
    bufp->fullBit(oldp+3372,((((IData)(vlSelf->CoreTop__DOT__EX__DOT__branch_flag) 
                               & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_inst_valid)) 
                              & (IData)(vlSelf->CoreTop__DOT__valid_1))));
    bufp->fullQData(oldp+3373,(((0x19U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                 ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1
                                 : vlSelf->CoreTop__DOT__EX__DOT___GEN_289)),64);
    bufp->fullIData(oldp+3375,(((IData)(vlSelf->CoreTop__DOT__EX_io_is_flush)
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
    bufp->fullQData(oldp+3376,(((((IData)(vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfWen) 
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
    bufp->fullQData(oldp+3378,(((((IData)(vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfWen) 
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
    bufp->fullBit(oldp+3380,((1U & (~ (((0U == ((0x13U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                 ? 0x40U
                                                 : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_316))) 
                                        | (IData)(vlSelf->CoreTop__DOT__EX_io_is_flush)) 
                                       | (~ (IData)(vlSelf->CoreTop__DOT__valid)))))));
    bufp->fullQData(oldp+3381,(((0U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src1Type))
                                 ? vlSelf->CoreTop__DOT__mem_bypass_io_Bypass_REG1
                                 : vlSelf->CoreTop__DOT__EX__DOT___GEN_1)),64);
    bufp->fullQData(oldp+3383,(((0U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src2Type))
                                 ? vlSelf->CoreTop__DOT__mem_bypass_io_Bypass_REG2
                                 : vlSelf->CoreTop__DOT__EX__DOT___GEN_3)),64);
    bufp->fullQData(oldp+3385,(((IData)(vlSelf->CoreTop__DOT__EX__DOT__is_mul)
                                 ? vlSelf->CoreTop__DOT__EX__DOT__src1
                                 : (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__src1)))),64);
    bufp->fullQData(oldp+3387,(((IData)(vlSelf->CoreTop__DOT__EX__DOT__is_mul)
                                 ? vlSelf->CoreTop__DOT__EX__DOT__src2
                                 : (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)))),64);
    bufp->fullQData(oldp+3389,(((0x40U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                 ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1
                                 : ((0x1aU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                     ? vlSelf->CoreTop__DOT__EX__DOT__src2
                                     : ((0x68U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                         ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_7
                                         : ((0x44U 
                                             == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                             ? (vlSelf->CoreTop__DOT__EX__DOT__src1 
                                                | vlSelf->CoreTop__DOT__EX__DOT__src2)
                                             : ((0x69U 
                                                 == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                 ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_10
                                                 : 
                                                ((0x71U 
                                                  == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                  ? 
                                                 (vlSelf->CoreTop__DOT__EX__DOT__src1 
                                                  & vlSelf->CoreTop__DOT__EX__DOT__src2)
                                                  : vlSelf->CoreTop__DOT__EX__DOT___GEN_145))))))),64);
    bufp->fullQData(oldp+3391,(((0x6aU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                 ? ((vlSelf->CoreTop__DOT__EX__DOT__src1 
                                     < vlSelf->CoreTop__DOT__EX__DOT__src2)
                                     ? 1ULL : 0ULL)
                                 : ((2U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                     ? (VL_LTS_IQQ(64, vlSelf->CoreTop__DOT__EX__DOT__src1, vlSelf->CoreTop__DOT__EX__DOT__src2)
                                         ? 1ULL : 0ULL)
                                     : 0ULL))),64);
    VL_EXTEND_WQ(127,64, __Vtemp_hb5acfd9b__0, VL_SHIFTRS_QQI(64,64,5, vlSelf->CoreTop__DOT__EX__DOT__src1, 
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
    VL_EXTEND_WQ(127,64, __Vtemp_h9a785a5b__0, ((0x75U 
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
                                                      VL_SHIFTRS_QQI(64,64,6, vlSelf->CoreTop__DOT__EX__DOT__src1, 
                                                                     (0x3fU 
                                                                      & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)))
                                                       : 0ULL))))))));
    bufp->fullQData(oldp+3393,((((QData)((IData)(((0x6eU 
                                                   == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                   ? 
                                                  __Vtemp_hb5acfd9b__0[1U]
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
                                                    __Vtemp_h9a785a5b__0[1U]))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((0x6eU 
                                                               == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                               ? 
                                                              __Vtemp_hb5acfd9b__0[0U]
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
                                                                __Vtemp_h9a785a5b__0[0U]))))))),64);
    bufp->fullQData(oldp+3395,((((((0U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
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
    bufp->fullQData(oldp+3397,((((((0U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
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
    bufp->fullQData(oldp+3399,(((0x45U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
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
    bufp->fullBit(oldp+3401,(vlSelf->CoreTop__DOT__ICACHE_io_in_rdata_rep_valid));
    bufp->fullBit(oldp+3402,(vlSelf->CoreTop__DOT__EX_io_is_flush));
    bufp->fullQData(oldp+3403,(vlSelf->CoreTop__DOT__mem_bypass_io_Bypass_REG1),64);
    bufp->fullQData(oldp+3405,(vlSelf->CoreTop__DOT__mem_bypass_io_Bypass_REG2),64);
    bufp->fullQData(oldp+3407,(vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfData),64);
    bufp->fullQData(oldp+3409,(vlSelf->CoreTop__DOT__mem_rdata),64);
    bufp->fullQData(oldp+3411,(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfData),64);
    bufp->fullQData(oldp+3413,(vlSelf->CoreTop__DOT__MMIO_io_in_rdata_rep_bits_rdata),64);
    bufp->fullQData(oldp+3415,(vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src1),64);
    bufp->fullQData(oldp+3417,(vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src2),64);
    bufp->fullQData(oldp+3419,(vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_quotient),64);
    bufp->fullQData(oldp+3421,(vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_remainder),64);
    bufp->fullQData(oldp+3423,(vlSelf->CoreTop__DOT__EX__DOT__src1),64);
    bufp->fullQData(oldp+3425,(vlSelf->CoreTop__DOT__EX__DOT__src2),64);
    bufp->fullBit(oldp+3427,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1 
                                            >> 0x1fU)))));
    bufp->fullBit(oldp+3428,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_quotient 
                                            >> 0x1fU)))));
    bufp->fullBit(oldp+3429,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_remainder 
                                            >> 0x1fU)))));
    bufp->fullBit(oldp+3430,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_10 
                                            >> 0x1fU)))));
    bufp->fullBit(oldp+3431,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_5[0U] 
                              >> 0x1fU)));
    bufp->fullBit(oldp+3432,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_16[0U] 
                              >> 0x1fU)));
    bufp->fullBit(oldp+3433,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_25 
                              >> 0x1fU)));
    bufp->fullBit(oldp+3434,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_31 
                              >> 0x1fU)));
    bufp->fullBit(oldp+3435,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__src1 
                                            >> 0x1fU)))));
    bufp->fullBit(oldp+3436,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__src2 
                                            >> 0x1fU)))));
    bufp->fullBit(oldp+3437,(vlSelf->CoreTop__DOT__EX__DOT__branch_flag));
    bufp->fullCData(oldp+3438,(vlSelf->CoreTop__DOT__IFMEM__DOT__next_state),2);
    bufp->fullBit(oldp+3439,((1U & (IData)((vlSelf->CoreTop__DOT__MMIO_io_in_rdata_rep_bits_rdata 
                                            >> 0x3fU)))));
    bufp->fullBit(oldp+3440,((1U & (IData)((vlSelf->CoreTop__DOT__MMIO_io_in_rdata_rep_bits_rdata 
                                            >> 0x1fU)))));
    bufp->fullBit(oldp+3441,((1U & ((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_27) 
                                    >> 7U))));
    bufp->fullBit(oldp+3442,((1U & ((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_44) 
                                    >> 0xfU))));
    bufp->fullBit(oldp+3443,(vlSelf->clock));
    bufp->fullBit(oldp+3444,(vlSelf->reset));
    bufp->fullQData(oldp+3445,(vlSelf->io_pc),64);
    bufp->fullIData(oldp+3447,(vlSelf->io_inst),32);
    bufp->fullBit(oldp+3448,(1U));
    bufp->fullCData(oldp+3449,(0U),5);
    bufp->fullCData(oldp+3450,(1U),5);
    bufp->fullCData(oldp+3451,(2U),5);
    bufp->fullCData(oldp+3452,(3U),5);
    bufp->fullCData(oldp+3453,(4U),5);
    bufp->fullCData(oldp+3454,(5U),5);
    bufp->fullCData(oldp+3455,(6U),5);
    bufp->fullCData(oldp+3456,(7U),5);
    bufp->fullCData(oldp+3457,(8U),5);
    bufp->fullCData(oldp+3458,(9U),5);
    bufp->fullCData(oldp+3459,(0xaU),5);
    bufp->fullCData(oldp+3460,(0xbU),5);
    bufp->fullCData(oldp+3461,(0xcU),5);
    bufp->fullCData(oldp+3462,(0xdU),5);
    bufp->fullCData(oldp+3463,(0xeU),5);
    bufp->fullCData(oldp+3464,(0xfU),5);
    bufp->fullCData(oldp+3465,(0x10U),5);
    bufp->fullCData(oldp+3466,(0x11U),5);
    bufp->fullCData(oldp+3467,(0x12U),5);
    bufp->fullCData(oldp+3468,(0x13U),5);
    bufp->fullCData(oldp+3469,(0x14U),5);
    bufp->fullCData(oldp+3470,(0x15U),5);
    bufp->fullCData(oldp+3471,(0x16U),5);
    bufp->fullCData(oldp+3472,(0x17U),5);
    bufp->fullCData(oldp+3473,(0x18U),5);
    bufp->fullCData(oldp+3474,(0x19U),5);
    bufp->fullCData(oldp+3475,(0x1aU),5);
    bufp->fullCData(oldp+3476,(0x1bU),5);
    bufp->fullCData(oldp+3477,(0x1cU),5);
    bufp->fullCData(oldp+3478,(0x1dU),5);
    bufp->fullCData(oldp+3479,(0x1eU),5);
    bufp->fullCData(oldp+3480,(0x1fU),5);
    bufp->fullBit(oldp+3481,(0U));
    bufp->fullQData(oldp+3482,(0ULL),64);
    bufp->fullCData(oldp+3484,(0U),8);
    bufp->fullCData(oldp+3485,(vlSelf->CoreTop__DOT__IFMEM_bresp),2);
    bufp->fullCData(oldp+3486,(0U),2);
    bufp->fullCData(oldp+3487,(1U),2);
    bufp->fullCData(oldp+3488,(2U),2);
    bufp->fullCData(oldp+3489,(3U),2);
}
