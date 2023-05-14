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
    tracep->declBit(c+3433,"clock", false,-1);
    tracep->declBit(c+3434,"reset", false,-1);
    tracep->declQuad(c+3435,"io_pc", false,-1, 63,0);
    tracep->declBus(c+3437,"io_inst", false,-1, 31,0);
    tracep->pushNamePrefix("CoreTop ");
    tracep->declBit(c+3433,"clock", false,-1);
    tracep->declBit(c+3434,"reset", false,-1);
    tracep->declQuad(c+3435,"io_pc", false,-1, 63,0);
    tracep->declBus(c+3437,"io_inst", false,-1, 31,0);
    tracep->declBit(c+3433,"IF_clock", false,-1);
    tracep->declBit(c+3434,"IF_reset", false,-1);
    tracep->declBit(c+3361,"IF_io_branch_io_is_branch", false,-1);
    tracep->declBit(c+1,"IF_io_branch_io_is_jump", false,-1);
    tracep->declQuad(c+3362,"IF_io_branch_io_dnpc", false,-1, 63,0);
    tracep->declBit(c+2,"IF_io_cache_req_addr_req_valid", false,-1);
    tracep->declQuad(c+3,"IF_io_cache_req_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+2,"IF_io_cache_req_rdata_rep_ready", false,-1);
    tracep->declBit(c+3390,"IF_io_cache_req_rdata_rep_valid", false,-1);
    tracep->declQuad(c+5,"IF_io_cache_req_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+2,"IF_io_out_ready", false,-1);
    tracep->declBit(c+3390,"IF_io_out_valid", false,-1);
    tracep->declQuad(c+3,"IF_io_out_bits_PC", false,-1, 63,0);
    tracep->declBus(c+3364,"IF_io_out_bits_Inst", false,-1, 31,0);
    tracep->declBit(c+3391,"IF_io_flush", false,-1);
    tracep->declBit(c+2,"ID_io_in_ready", false,-1);
    tracep->declBit(c+7,"ID_io_in_valid", false,-1);
    tracep->declQuad(c+8,"ID_io_in_bits_PC", false,-1, 63,0);
    tracep->declBus(c+10,"ID_io_in_bits_Inst", false,-1, 31,0);
    tracep->declQuad(c+3365,"ID_io_REG1", false,-1, 63,0);
    tracep->declQuad(c+3367,"ID_io_REG2", false,-1, 63,0);
    tracep->declBit(c+3391,"ID_io_flush", false,-1);
    tracep->declBit(c+2,"ID_io_out_ready", false,-1);
    tracep->declBit(c+7,"ID_io_out_valid", false,-1);
    tracep->declBus(c+11,"ID_io_out_bits_ctrl_signal_src1Type", false,-1, 2,0);
    tracep->declBus(c+12,"ID_io_out_bits_ctrl_signal_src2Type", false,-1, 2,0);
    tracep->declBus(c+13,"ID_io_out_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+3369,"ID_io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBus(c+14,"ID_io_out_bits_ctrl_signal_rfSrc1", false,-1, 4,0);
    tracep->declBus(c+15,"ID_io_out_bits_ctrl_signal_rfSrc2", false,-1, 4,0);
    tracep->declBit(c+16,"ID_io_out_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+17,"ID_io_out_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declBus(c+18,"ID_io_out_bits_ctrl_signal_rfDest", false,-1, 4,0);
    tracep->declQuad(c+3365,"ID_io_out_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+3367,"ID_io_out_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+19,"ID_io_out_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declQuad(c+8,"ID_io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+10,"ID_io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declBit(c+3433,"EX_clock", false,-1);
    tracep->declBit(c+3434,"EX_reset", false,-1);
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
    tracep->declQuad(c+3392,"EX_io_src1", false,-1, 63,0);
    tracep->declQuad(c+3394,"EX_io_src2", false,-1, 63,0);
    tracep->declBit(c+3361,"EX_io_branchIO_is_branch", false,-1);
    tracep->declBit(c+1,"EX_io_branchIO_is_jump", false,-1);
    tracep->declQuad(c+3362,"EX_io_branchIO_dnpc", false,-1, 63,0);
    tracep->declBit(c+40,"EX_io_out_ready", false,-1);
    tracep->declBit(c+41,"EX_io_out_valid", false,-1);
    tracep->declBus(c+24,"EX_io_out_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+25,"EX_io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+28,"EX_io_out_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+29,"EX_io_out_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+37,"EX_io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+39,"EX_io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+3362,"EX_io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+30,"EX_io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+42,"EX_io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+3396,"EX_io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+3370,"EX_io_out_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+3372,"EX_io_out_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+35,"EX_io_out_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declBit(c+43,"EX_io_is_break", false,-1);
    tracep->declBit(c+3391,"EX_io_is_flush", false,-1);
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
    tracep->declBit(c+3438,"rf_bypass_io_Reg1_MPORT_en", false,-1);
    tracep->declBus(c+14,"rf_bypass_io_Reg1_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+180,"rf_bypass_io_Reg1_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3438,"rf_bypass_io_Reg2_MPORT_en", false,-1);
    tracep->declBus(c+15,"rf_bypass_io_Reg2_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+182,"rf_bypass_io_Reg2_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3438,"rf_DIP_io_rf_0_MPORT_en", false,-1);
    tracep->declBus(c+3439,"rf_DIP_io_rf_0_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+45,"rf_DIP_io_rf_0_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3438,"rf_DIP_io_rf_1_MPORT_en", false,-1);
    tracep->declBus(c+3440,"rf_DIP_io_rf_1_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+47,"rf_DIP_io_rf_1_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3438,"rf_DIP_io_rf_2_MPORT_en", false,-1);
    tracep->declBus(c+3441,"rf_DIP_io_rf_2_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+49,"rf_DIP_io_rf_2_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3438,"rf_DIP_io_rf_3_MPORT_en", false,-1);
    tracep->declBus(c+3442,"rf_DIP_io_rf_3_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+51,"rf_DIP_io_rf_3_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3438,"rf_DIP_io_rf_4_MPORT_en", false,-1);
    tracep->declBus(c+3443,"rf_DIP_io_rf_4_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+53,"rf_DIP_io_rf_4_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3438,"rf_DIP_io_rf_5_MPORT_en", false,-1);
    tracep->declBus(c+3444,"rf_DIP_io_rf_5_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+55,"rf_DIP_io_rf_5_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3438,"rf_DIP_io_rf_6_MPORT_en", false,-1);
    tracep->declBus(c+3445,"rf_DIP_io_rf_6_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+57,"rf_DIP_io_rf_6_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3438,"rf_DIP_io_rf_7_MPORT_en", false,-1);
    tracep->declBus(c+3446,"rf_DIP_io_rf_7_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+59,"rf_DIP_io_rf_7_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3438,"rf_DIP_io_rf_8_MPORT_en", false,-1);
    tracep->declBus(c+3447,"rf_DIP_io_rf_8_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+61,"rf_DIP_io_rf_8_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3438,"rf_DIP_io_rf_9_MPORT_en", false,-1);
    tracep->declBus(c+3448,"rf_DIP_io_rf_9_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+63,"rf_DIP_io_rf_9_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3438,"rf_DIP_io_rf_10_MPORT_en", false,-1);
    tracep->declBus(c+3449,"rf_DIP_io_rf_10_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+65,"rf_DIP_io_rf_10_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3438,"rf_DIP_io_rf_11_MPORT_en", false,-1);
    tracep->declBus(c+3450,"rf_DIP_io_rf_11_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+67,"rf_DIP_io_rf_11_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3438,"rf_DIP_io_rf_12_MPORT_en", false,-1);
    tracep->declBus(c+3451,"rf_DIP_io_rf_12_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+69,"rf_DIP_io_rf_12_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3438,"rf_DIP_io_rf_13_MPORT_en", false,-1);
    tracep->declBus(c+3452,"rf_DIP_io_rf_13_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+71,"rf_DIP_io_rf_13_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3438,"rf_DIP_io_rf_14_MPORT_en", false,-1);
    tracep->declBus(c+3453,"rf_DIP_io_rf_14_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+73,"rf_DIP_io_rf_14_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3438,"rf_DIP_io_rf_15_MPORT_en", false,-1);
    tracep->declBus(c+3454,"rf_DIP_io_rf_15_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+75,"rf_DIP_io_rf_15_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3438,"rf_DIP_io_rf_16_MPORT_en", false,-1);
    tracep->declBus(c+3455,"rf_DIP_io_rf_16_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+77,"rf_DIP_io_rf_16_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3438,"rf_DIP_io_rf_17_MPORT_en", false,-1);
    tracep->declBus(c+3456,"rf_DIP_io_rf_17_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+79,"rf_DIP_io_rf_17_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3438,"rf_DIP_io_rf_18_MPORT_en", false,-1);
    tracep->declBus(c+3457,"rf_DIP_io_rf_18_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+81,"rf_DIP_io_rf_18_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3438,"rf_DIP_io_rf_19_MPORT_en", false,-1);
    tracep->declBus(c+3458,"rf_DIP_io_rf_19_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+83,"rf_DIP_io_rf_19_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3438,"rf_DIP_io_rf_20_MPORT_en", false,-1);
    tracep->declBus(c+3459,"rf_DIP_io_rf_20_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+85,"rf_DIP_io_rf_20_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3438,"rf_DIP_io_rf_21_MPORT_en", false,-1);
    tracep->declBus(c+3460,"rf_DIP_io_rf_21_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+87,"rf_DIP_io_rf_21_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3438,"rf_DIP_io_rf_22_MPORT_en", false,-1);
    tracep->declBus(c+3461,"rf_DIP_io_rf_22_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+89,"rf_DIP_io_rf_22_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3438,"rf_DIP_io_rf_23_MPORT_en", false,-1);
    tracep->declBus(c+3462,"rf_DIP_io_rf_23_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+91,"rf_DIP_io_rf_23_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3438,"rf_DIP_io_rf_24_MPORT_en", false,-1);
    tracep->declBus(c+3463,"rf_DIP_io_rf_24_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+93,"rf_DIP_io_rf_24_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3438,"rf_DIP_io_rf_25_MPORT_en", false,-1);
    tracep->declBus(c+3464,"rf_DIP_io_rf_25_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+95,"rf_DIP_io_rf_25_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3438,"rf_DIP_io_rf_26_MPORT_en", false,-1);
    tracep->declBus(c+3465,"rf_DIP_io_rf_26_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+97,"rf_DIP_io_rf_26_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3438,"rf_DIP_io_rf_27_MPORT_en", false,-1);
    tracep->declBus(c+3466,"rf_DIP_io_rf_27_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+99,"rf_DIP_io_rf_27_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3438,"rf_DIP_io_rf_28_MPORT_en", false,-1);
    tracep->declBus(c+3467,"rf_DIP_io_rf_28_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+101,"rf_DIP_io_rf_28_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3438,"rf_DIP_io_rf_29_MPORT_en", false,-1);
    tracep->declBus(c+3468,"rf_DIP_io_rf_29_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+103,"rf_DIP_io_rf_29_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3438,"rf_DIP_io_rf_30_MPORT_en", false,-1);
    tracep->declBus(c+3469,"rf_DIP_io_rf_30_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+105,"rf_DIP_io_rf_30_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3438,"rf_DIP_io_rf_31_MPORT_en", false,-1);
    tracep->declBus(c+3470,"rf_DIP_io_rf_31_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+107,"rf_DIP_io_rf_31_MPORT_data", false,-1, 63,0);
    tracep->declQuad(c+184,"rf_MPORT_data", false,-1, 63,0);
    tracep->declBus(c+186,"rf_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+3438,"rf_MPORT_mask", false,-1);
    tracep->declBit(c+187,"rf_MPORT_en", false,-1);
    tracep->declQuad(c+188,"mem_addr", false,-1, 63,0);
    tracep->declBit(c+3434,"mem_reset", false,-1);
    tracep->declBit(c+3433,"mem_clk", false,-1);
    tracep->declBit(c+190,"mem_we", false,-1);
    tracep->declBit(c+191,"mem_ce", false,-1);
    tracep->declQuad(c+192,"mem_wdata", false,-1, 63,0);
    tracep->declQuad(c+3398,"mem_rdata", false,-1, 63,0);
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
    tracep->declBit(c+3438,"MEM_io_out_ready", false,-1);
    tracep->declBit(c+214,"MEM_io_out_valid", false,-1);
    tracep->declBit(c+215,"MEM_io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+198,"MEM_io_out_bits_ctrl_signal_rfWen", false,-1);
    tracep->declQuad(c+200,"MEM_io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+202,"MEM_io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+203,"MEM_io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBit(c+216,"MEM_io_out_bits_ctrl_flow_skip", false,-1);
    tracep->declBus(c+205,"MEM_io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+217,"MEM_io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+3400,"MEM_io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declBit(c+218,"MEM_io_cache_io_addr_req_valid", false,-1);
    tracep->declQuad(c+219,"MEM_io_cache_io_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+221,"MEM_io_cache_io_addr_req_bits_ce", false,-1);
    tracep->declBit(c+222,"MEM_io_cache_io_addr_req_bits_we", false,-1);
    tracep->declBit(c+223,"MEM_io_cache_io_rdata_rep_valid", false,-1);
    tracep->declQuad(c+3402,"MEM_io_cache_io_rdata_rep_bits_rdata", false,-1, 63,0);
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
    tracep->declBit(c+3438,"WB_io_out_ready", false,-1);
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
    tracep->declQuad(c+3396,"bypass_io_EX_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+205,"bypass_io_MEM_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+217,"bypass_io_MEM_rf_rfWen", false,-1);
    tracep->declQuad(c+3400,"bypass_io_MEM_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+186,"bypass_io_WB_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+187,"bypass_io_WB_rf_rfWen", false,-1);
    tracep->declQuad(c+237,"bypass_io_WB_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+240,"bypass_io_Reg1", false,-1, 63,0);
    tracep->declBus(c+14,"bypass_io_reg_index1", false,-1, 4,0);
    tracep->declQuad(c+242,"bypass_io_Reg2", false,-1, 63,0);
    tracep->declBus(c+15,"bypass_io_reg_index2", false,-1, 4,0);
    tracep->declQuad(c+3365,"bypass_io_Bypass_REG1", false,-1, 63,0);
    tracep->declQuad(c+3367,"bypass_io_Bypass_REG2", false,-1, 63,0);
    tracep->declBus(c+205,"mem_bypass_io_MEM_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+217,"mem_bypass_io_MEM_rf_rfWen", false,-1);
    tracep->declQuad(c+3400,"mem_bypass_io_MEM_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+31,"mem_bypass_io_Reg1", false,-1, 63,0);
    tracep->declBus(c+26,"mem_bypass_io_reg_index1", false,-1, 4,0);
    tracep->declQuad(c+33,"mem_bypass_io_Reg2", false,-1, 63,0);
    tracep->declBus(c+27,"mem_bypass_io_reg_index2", false,-1, 4,0);
    tracep->declQuad(c+3392,"mem_bypass_io_Bypass_REG1", false,-1, 63,0);
    tracep->declQuad(c+3394,"mem_bypass_io_Bypass_REG2", false,-1, 63,0);
    tracep->declBit(c+3433,"ICACHE_clock", false,-1);
    tracep->declBit(c+3434,"ICACHE_reset", false,-1);
    tracep->declBit(c+2,"ICACHE_io_in_addr_req_valid", false,-1);
    tracep->declQuad(c+3,"ICACHE_io_in_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+2,"ICACHE_io_in_rdata_rep_ready", false,-1);
    tracep->declBit(c+3390,"ICACHE_io_in_rdata_rep_valid", false,-1);
    tracep->declQuad(c+5,"ICACHE_io_in_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+3391,"ICACHE_io_flush", false,-1);
    tracep->declQuad(c+244,"ICACHE_io_out_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+246,"ICACHE_io_out_addr_req_bits_ce", false,-1);
    tracep->declQuad(c+3404,"ICACHE_io_out_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+244,"IFMEM_addr", false,-1, 63,0);
    tracep->declBit(c+3434,"IFMEM_reset", false,-1);
    tracep->declBit(c+3433,"IFMEM_clk", false,-1);
    tracep->declBit(c+3471,"IFMEM_we", false,-1);
    tracep->declBit(c+246,"IFMEM_ce", false,-1);
    tracep->declQuad(c+3472,"IFMEM_wdata", false,-1, 63,0);
    tracep->declQuad(c+3404,"IFMEM_rdata", false,-1, 63,0);
    tracep->declBus(c+3474,"IFMEM_wmask", false,-1, 7,0);
    tracep->declBit(c+3433,"MMIO_clock", false,-1);
    tracep->declBit(c+3434,"MMIO_reset", false,-1);
    tracep->declBit(c+218,"MMIO_io_in_addr_req_valid", false,-1);
    tracep->declQuad(c+219,"MMIO_io_in_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+221,"MMIO_io_in_addr_req_bits_ce", false,-1);
    tracep->declBit(c+222,"MMIO_io_in_addr_req_bits_we", false,-1);
    tracep->declBit(c+223,"MMIO_io_in_rdata_rep_valid", false,-1);
    tracep->declQuad(c+3402,"MMIO_io_in_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+224,"MMIO_io_in_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+226,"MMIO_io_in_wdata_req_bits_wmask", false,-1, 7,0);
    tracep->declBit(c+227,"MMIO_io_in_wdata_rep", false,-1);
    tracep->declQuad(c+188,"MMIO_io_out_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+191,"MMIO_io_out_addr_req_bits_ce", false,-1);
    tracep->declBit(c+190,"MMIO_io_out_addr_req_bits_we", false,-1);
    tracep->declQuad(c+3398,"MMIO_io_out_rdata_rep_bits_rdata", false,-1, 63,0);
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
    tracep->declBit(c+247,"DIP_io_is_break_REG", false,-1);
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
        tracep->declQuad(c+248+i*2,"rf", true,(i+0), 63,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+312+i*1,"IN", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EX ");
    tracep->declBit(c+3433,"clock", false,-1);
    tracep->declBit(c+3434,"reset", false,-1);
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
    tracep->declQuad(c+3392,"io_src1", false,-1, 63,0);
    tracep->declQuad(c+3394,"io_src2", false,-1, 63,0);
    tracep->declBit(c+3361,"io_branchIO_is_branch", false,-1);
    tracep->declBit(c+1,"io_branchIO_is_jump", false,-1);
    tracep->declQuad(c+3362,"io_branchIO_dnpc", false,-1, 63,0);
    tracep->declBit(c+40,"io_out_ready", false,-1);
    tracep->declBit(c+41,"io_out_valid", false,-1);
    tracep->declBus(c+24,"io_out_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+25,"io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+28,"io_out_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+29,"io_out_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+37,"io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+39,"io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+3362,"io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+30,"io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+42,"io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+3396,"io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+3370,"io_out_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+3372,"io_out_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+35,"io_out_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declBit(c+43,"io_is_break", false,-1);
    tracep->declBit(c+3391,"io_is_flush", false,-1);
    tracep->declQuad(c+319,"CSRDIFF_mepc", false,-1, 63,0);
    tracep->declQuad(c+321,"CSRDIFF_mcause", false,-1, 63,0);
    tracep->declQuad(c+323,"CSRDIFF_mstatus", false,-1, 63,0);
    tracep->declQuad(c+325,"CSRDIFF_mtvec", false,-1, 63,0);
    tracep->declBit(c+3433,"mul_clock", false,-1);
    tracep->declBit(c+3434,"mul_reset", false,-1);
    tracep->declBit(c+327,"mul_io_in_valid", false,-1);
    tracep->declQuad(c+3374,"mul_io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+3376,"mul_io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declBit(c+328,"mul_io_out_valid", false,-1);
    tracep->declQuad(c+329,"mul_io_out_bits_result_result_lo", false,-1, 63,0);
    tracep->declBit(c+3433,"div_clock", false,-1);
    tracep->declBit(c+3434,"div_reset", false,-1);
    tracep->declBit(c+331,"div_io_in_valid", false,-1);
    tracep->declBit(c+332,"div_io_in_bits_ctrl_flow_div_signed", false,-1);
    tracep->declQuad(c+3406,"div_io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+3408,"div_io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declBit(c+333,"div_io_out_valid", false,-1);
    tracep->declQuad(c+3410,"div_io_out_bits_result_quotient", false,-1, 63,0);
    tracep->declQuad(c+3412,"div_io_out_bits_result_remainder", false,-1, 63,0);
    tracep->declBit(c+334,"is_mul", false,-1);
    tracep->declBit(c+335,"is_div", false,-1);
    tracep->declBit(c+336,"is_divw", false,-1);
    tracep->declBit(c+332,"is_div_sign", false,-1);
    tracep->declQuad(c+337,"mepc", false,-1, 63,0);
    tracep->declQuad(c+339,"mcause", false,-1, 63,0);
    tracep->declQuad(c+341,"mstatus", false,-1, 63,0);
    tracep->declQuad(c+343,"mtvec", false,-1, 63,0);
    tracep->declQuad(c+345,"mie", false,-1, 63,0);
    tracep->declQuad(c+347,"mip", false,-1, 63,0);
    tracep->declQuad(c+3414,"src1", false,-1, 63,0);
    tracep->declQuad(c+3416,"src2", false,-1, 63,0);
    tracep->declBit(c+3418,"alu_result_sign", false,-1);
    tracep->declBit(c+349,"alu_result_sign_2", false,-1);
    tracep->declBit(c+3419,"alu_result_sign_3", false,-1);
    tracep->declBit(c+3420,"alu_result_sign_4", false,-1);
    tracep->declBit(c+3421,"alu_result_sign_6", false,-1);
    tracep->declQuad(c+3378,"alu_result", false,-1, 63,0);
    tracep->declBit(c+3422,"shift_result_sign", false,-1);
    tracep->declBit(c+3423,"shift_result_sign_1", false,-1);
    tracep->declBit(c+3424,"shift_result_sign_2", false,-1);
    tracep->declBit(c+3425,"shift_result_sign_3", false,-1);
    tracep->declBit(c+3426,"div_io_in_bits_ctrl_data_src1_sign", false,-1);
    tracep->declBit(c+3427,"div_io_in_bits_ctrl_data_src2_sign", false,-1);
    tracep->declQuad(c+3380,"compar_result", false,-1, 63,0);
    tracep->declQuad(c+350,"jump_result", false,-1, 63,0);
    tracep->declQuad(c+3382,"shift_result", false,-1, 63,0);
    tracep->declQuad(c+352,"branch_result", false,-1, 63,0);
    tracep->declBit(c+3428,"branch_flag", false,-1);
    tracep->declQuad(c+354,"csr_data", false,-1, 63,0);
    tracep->declQuad(c+356,"CSRDIFF_io_mtvec_REG", false,-1, 63,0);
    tracep->declQuad(c+325,"CSRDIFF_io_mtvec_REG_1", false,-1, 63,0);
    tracep->declQuad(c+358,"CSRDIFF_io_mcause_REG", false,-1, 63,0);
    tracep->declQuad(c+321,"CSRDIFF_io_mcause_REG_1", false,-1, 63,0);
    tracep->declQuad(c+360,"CSRDIFF_io_mepc_REG", false,-1, 63,0);
    tracep->declQuad(c+319,"CSRDIFF_io_mepc_REG_1", false,-1, 63,0);
    tracep->declQuad(c+362,"CSRDIFF_io_mstatus_REG", false,-1, 63,0);
    tracep->declQuad(c+323,"CSRDIFF_io_mstatus_REG_1", false,-1, 63,0);
    tracep->pushNamePrefix("CSRDIFF ");
    tracep->declQuad(c+319,"mepc", false,-1, 63,0);
    tracep->declQuad(c+321,"mcause", false,-1, 63,0);
    tracep->declQuad(c+323,"mstatus", false,-1, 63,0);
    tracep->declQuad(c+325,"mtvec", false,-1, 63,0);
    for (int i = 0; i < 6; ++i) {
        tracep->declQuad(c+364+i*2,"inst_csr", true,(i+0), 63,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("div ");
    tracep->declBit(c+3433,"clock", false,-1);
    tracep->declBit(c+3434,"reset", false,-1);
    tracep->declBit(c+331,"io_in_valid", false,-1);
    tracep->declBit(c+332,"io_in_bits_ctrl_flow_div_signed", false,-1);
    tracep->declQuad(c+3406,"io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+3408,"io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declBit(c+333,"io_out_valid", false,-1);
    tracep->declQuad(c+3410,"io_out_bits_result_quotient", false,-1, 63,0);
    tracep->declQuad(c+3412,"io_out_bits_result_remainder", false,-1, 63,0);
    tracep->declArray(c+376,"dividend", false,-1, 127,0);
    tracep->declQuad(c+380,"divisor", false,-1, 63,0);
    tracep->declQuad(c+382,"S", false,-1, 63,0);
    tracep->declBus(c+384,"state", false,-1, 1,0);
    tracep->declBus(c+385,"count", false,-1, 5,0);
    tracep->declBit(c+386,"wrap_wrap", false,-1);
    tracep->declBit(c+387,"s", false,-1);
    tracep->declArray(c+388,"res_div", false,-1, 64,0);
    tracep->declQuad(c+391,"negative_s", false,-1, 63,0);
    tracep->declQuad(c+393,"negative_r", false,-1, 63,0);
    tracep->declQuad(c+3384,"s_o", false,-1, 63,0);
    tracep->declQuad(c+3386,"r_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mul ");
    tracep->declBit(c+3433,"clock", false,-1);
    tracep->declBit(c+3434,"reset", false,-1);
    tracep->declBit(c+327,"io_in_valid", false,-1);
    tracep->declQuad(c+3374,"io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+3376,"io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declBit(c+328,"io_out_valid", false,-1);
    tracep->declQuad(c+329,"io_out_bits_result_result_lo", false,-1, 63,0);
    tracep->declBit(c+3433,"mult_clock", false,-1);
    tracep->declBit(c+3434,"mult_reset", false,-1);
    tracep->declBit(c+327,"mult_io_in_valid", false,-1);
    tracep->declQuad(c+3374,"mult_io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+3376,"mult_io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declBit(c+328,"mult_io_out_valid", false,-1);
    tracep->declQuad(c+329,"mult_io_out_bits_result_result_lo", false,-1, 63,0);
    tracep->pushNamePrefix("mult ");
    tracep->declBit(c+3433,"clock", false,-1);
    tracep->declBit(c+3434,"reset", false,-1);
    tracep->declBit(c+327,"io_in_valid", false,-1);
    tracep->declQuad(c+3374,"io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+3376,"io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declBit(c+328,"io_out_valid", false,-1);
    tracep->declQuad(c+329,"io_out_bits_result_result_lo", false,-1, 63,0);
    tracep->declBus(c+395,"partial_io_y_3", false,-1, 2,0);
    tracep->declArray(c+396,"partial_io_x", false,-1, 131,0);
    tracep->declArray(c+401,"partial_io_p", false,-1, 131,0);
    tracep->declBit(c+406,"partial_io_c", false,-1);
    tracep->declArray(c+407,"multiplier", false,-1, 65,0);
    tracep->declArray(c+396,"multiplicand", false,-1, 131,0);
    tracep->declArray(c+410,"p", false,-1, 131,0);
    tracep->declBus(c+415,"count", false,-1, 6,0);
    tracep->declArray(c+416,"temp", false,-1, 131,0);
    tracep->declBit(c+421,"p_sign", false,-1);
    tracep->pushNamePrefix("partial ");
    tracep->declBus(c+395,"io_y_3", false,-1, 2,0);
    tracep->declArray(c+396,"io_x", false,-1, 131,0);
    tracep->declArray(c+401,"io_p", false,-1, 131,0);
    tracep->declBit(c+406,"io_c", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("ICACHE ");
    tracep->declBit(c+3433,"clock", false,-1);
    tracep->declBit(c+3434,"reset", false,-1);
    tracep->declBit(c+2,"io_in_addr_req_valid", false,-1);
    tracep->declQuad(c+3,"io_in_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+2,"io_in_rdata_rep_ready", false,-1);
    tracep->declBit(c+3390,"io_in_rdata_rep_valid", false,-1);
    tracep->declQuad(c+5,"io_in_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+3391,"io_flush", false,-1);
    tracep->declQuad(c+244,"io_out_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+246,"io_out_addr_req_bits_ce", false,-1);
    tracep->declQuad(c+3404,"io_out_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+3433,"Cache_data_clock", false,-1);
    tracep->declBit(c+422,"Cache_data_io_in_valid", false,-1);
    tracep->declQuad(c+3,"Cache_data_io_in_addr", false,-1, 63,0);
    tracep->declQuad(c+423,"Cache_data_io_write_bus_addr", false,-1, 63,0);
    tracep->declBit(c+425,"Cache_data_io_write_bus_valid", false,-1);
    tracep->declBus(c+426,"Cache_data_io_write_bus_waymask", false,-1, 1,0);
    tracep->declArray(c+427,"Cache_data_io_write_bus_wdata", false,-1, 511,0);
    tracep->declBit(c+422,"Cache_data_io_out_valid", false,-1);
    tracep->declQuad(c+443,"Cache_data_io_out_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+445,"Cache_data_io_out_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+447,"Cache_data_io_out_bits_meat_valid_0", false,-1);
    tracep->declBit(c+448,"Cache_data_io_out_bits_meat_valid_1", false,-1);
    tracep->declArray(c+449,"Cache_data_io_out_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+465,"Cache_data_io_out_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+481,"Cache_data_io_out_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBus(c+483,"Cache_data_io_out_bits_ctrl_data_index", false,-1, 4,0);
    tracep->declBus(c+484,"Cache_data_io_out_bits_ctrl_data_offset", false,-1, 5,0);
    tracep->declBit(c+485,"Scanf_io_in_valid", false,-1);
    tracep->declQuad(c+443,"Scanf_io_in_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+445,"Scanf_io_in_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+447,"Scanf_io_in_bits_meat_valid_0", false,-1);
    tracep->declBit(c+448,"Scanf_io_in_bits_meat_valid_1", false,-1);
    tracep->declArray(c+449,"Scanf_io_in_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+465,"Scanf_io_in_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+481,"Scanf_io_in_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBit(c+486,"Scanf_io_out_bits_hit", false,-1);
    tracep->declArray(c+487,"Scanf_io_out_bits_data", false,-1, 511,0);
    tracep->declBit(c+503,"Scanf_io_out_bits_hit_way_0", false,-1);
    tracep->declBit(c+504,"Scanf_io_out_bits_hit_way_1", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+505+i*1,"lru", true,(i+0));
    }
    tracep->declBit(c+537,"lru_lru_w_MPORT_en", false,-1);
    tracep->declBus(c+538,"lru_lru_w_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+539,"lru_lru_w_MPORT_data", false,-1);
    tracep->declBit(c+3438,"lru_MPORT_data", false,-1);
    tracep->declBus(c+483,"lru_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+3438,"lru_MPORT_mask", false,-1);
    tracep->declBit(c+540,"lru_MPORT_en", false,-1);
    tracep->declBit(c+3471,"lru_MPORT_1_data", false,-1);
    tracep->declBus(c+483,"lru_MPORT_1_addr", false,-1, 4,0);
    tracep->declBit(c+3438,"lru_MPORT_1_mask", false,-1);
    tracep->declBit(c+541,"lru_MPORT_1_en", false,-1);
    tracep->declBit(c+3471,"lru_MPORT_2_data", false,-1);
    tracep->declBus(c+483,"lru_MPORT_2_addr", false,-1, 4,0);
    tracep->declBit(c+3438,"lru_MPORT_2_mask", false,-1);
    tracep->declBit(c+542,"lru_MPORT_2_en", false,-1);
    tracep->declBit(c+3438,"lru_MPORT_3_data", false,-1);
    tracep->declBus(c+483,"lru_MPORT_3_addr", false,-1, 4,0);
    tracep->declBit(c+3438,"lru_MPORT_3_mask", false,-1);
    tracep->declBit(c+543,"lru_MPORT_3_en", false,-1);
    tracep->declBit(c+537,"lru_lru_w_MPORT_en_pipe_0", false,-1);
    tracep->declBus(c+538,"lru_lru_w_MPORT_addr_pipe_0", false,-1, 4,0);
    tracep->declBus(c+544,"state", false,-1, 1,0);
    tracep->declArray(c+545,"data_line_reg", false,-1, 511,0);
    tracep->declQuad(c+244,"mem_addr_reg", false,-1, 63,0);
    tracep->declBit(c+561,"lru_r", false,-1);
    tracep->declBus(c+562,"count", false,-1, 3,0);
    tracep->declBit(c+425,"s", false,-1);
    tracep->declBit(c+503,"hit_way_0", false,-1);
    tracep->declBit(c+504,"hit_way_1", false,-1);
    tracep->declBit(c+539,"lru_w", false,-1);
    tracep->declQuad(c+563,"hit_data", false,-1, 63,0);
    tracep->declQuad(c+565,"mem_data", false,-1, 63,0);
    tracep->declBit(c+485,"Scanf_io_in_valid_REG", false,-1);
    tracep->pushNamePrefix("Cache_data ");
    tracep->declBit(c+3433,"clock", false,-1);
    tracep->declBit(c+422,"io_in_valid", false,-1);
    tracep->declQuad(c+3,"io_in_addr", false,-1, 63,0);
    tracep->declQuad(c+423,"io_write_bus_addr", false,-1, 63,0);
    tracep->declBit(c+425,"io_write_bus_valid", false,-1);
    tracep->declBus(c+426,"io_write_bus_waymask", false,-1, 1,0);
    tracep->declArray(c+427,"io_write_bus_wdata", false,-1, 511,0);
    tracep->declBit(c+422,"io_out_valid", false,-1);
    tracep->declQuad(c+443,"io_out_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+445,"io_out_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+447,"io_out_bits_meat_valid_0", false,-1);
    tracep->declBit(c+448,"io_out_bits_meat_valid_1", false,-1);
    tracep->declArray(c+449,"io_out_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+465,"io_out_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+481,"io_out_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBus(c+483,"io_out_bits_ctrl_data_index", false,-1, 4,0);
    tracep->declBus(c+484,"io_out_bits_ctrl_data_offset", false,-1, 5,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declArray(c+567+i*16,"data_0", true,(i+0), 511,0);
    }
    tracep->declBit(c+1079,"data_0_data_w_en", false,-1);
    tracep->declBus(c+1080,"data_0_data_w_addr", false,-1, 4,0);
    tracep->declArray(c+449,"data_0_data_w_data", false,-1, 511,0);
    tracep->declArray(c+427,"data_0_MPORT_data", false,-1, 511,0);
    tracep->declBus(c+1081,"data_0_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+1082,"data_0_MPORT_mask", false,-1);
    tracep->declBit(c+425,"data_0_MPORT_en", false,-1);
    tracep->declBit(c+1079,"data_0_data_w_en_pipe_0", false,-1);
    tracep->declBus(c+1080,"data_0_data_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declArray(c+1083+i*16,"data_1", true,(i+0), 511,0);
    }
    tracep->declBit(c+1595,"data_1_data_w_en", false,-1);
    tracep->declBus(c+1080,"data_1_data_w_addr", false,-1, 4,0);
    tracep->declArray(c+465,"data_1_data_w_data", false,-1, 511,0);
    tracep->declArray(c+427,"data_1_MPORT_data", false,-1, 511,0);
    tracep->declBus(c+1081,"data_1_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+1596,"data_1_MPORT_mask", false,-1);
    tracep->declBit(c+425,"data_1_MPORT_en", false,-1);
    tracep->declBit(c+1595,"data_1_data_w_en_pipe_0", false,-1);
    tracep->declBus(c+1080,"data_1_data_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+1597+i*2,"TAG_0", true,(i+0), 52,0);
    }
    tracep->declBit(c+1661,"TAG_0_tag_w_en", false,-1);
    tracep->declBus(c+1662,"TAG_0_tag_w_addr", false,-1, 4,0);
    tracep->declQuad(c+443,"TAG_0_tag_w_data", false,-1, 52,0);
    tracep->declQuad(c+1663,"TAG_0_MPORT_1_data", false,-1, 52,0);
    tracep->declBus(c+1081,"TAG_0_MPORT_1_addr", false,-1, 4,0);
    tracep->declBit(c+1082,"TAG_0_MPORT_1_mask", false,-1);
    tracep->declBit(c+425,"TAG_0_MPORT_1_en", false,-1);
    tracep->declBit(c+1661,"TAG_0_tag_w_en_pipe_0", false,-1);
    tracep->declBus(c+1662,"TAG_0_tag_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+1665+i*2,"TAG_1", true,(i+0), 52,0);
    }
    tracep->declBit(c+1729,"TAG_1_tag_w_en", false,-1);
    tracep->declBus(c+1730,"TAG_1_tag_w_addr", false,-1, 4,0);
    tracep->declQuad(c+445,"TAG_1_tag_w_data", false,-1, 52,0);
    tracep->declQuad(c+1663,"TAG_1_MPORT_1_data", false,-1, 52,0);
    tracep->declBus(c+1081,"TAG_1_MPORT_1_addr", false,-1, 4,0);
    tracep->declBit(c+1596,"TAG_1_MPORT_1_mask", false,-1);
    tracep->declBit(c+425,"TAG_1_MPORT_1_en", false,-1);
    tracep->declBit(c+1729,"TAG_1_tag_w_en_pipe_0", false,-1);
    tracep->declBus(c+1730,"TAG_1_tag_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+1731+i*1,"data_valid_0", true,(i+0));
    }
    tracep->declBit(c+1763,"data_valid_0_valid_w_en", false,-1);
    tracep->declBus(c+1764,"data_valid_0_valid_w_addr", false,-1, 4,0);
    tracep->declBit(c+447,"data_valid_0_valid_w_data", false,-1);
    tracep->declBit(c+3438,"data_valid_0_MPORT_2_data", false,-1);
    tracep->declBus(c+1081,"data_valid_0_MPORT_2_addr", false,-1, 4,0);
    tracep->declBit(c+1082,"data_valid_0_MPORT_2_mask", false,-1);
    tracep->declBit(c+425,"data_valid_0_MPORT_2_en", false,-1);
    tracep->declBit(c+1763,"data_valid_0_valid_w_en_pipe_0", false,-1);
    tracep->declBus(c+1764,"data_valid_0_valid_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+1765+i*1,"data_valid_1", true,(i+0));
    }
    tracep->declBit(c+1797,"data_valid_1_valid_w_en", false,-1);
    tracep->declBus(c+1798,"data_valid_1_valid_w_addr", false,-1, 4,0);
    tracep->declBit(c+448,"data_valid_1_valid_w_data", false,-1);
    tracep->declBit(c+3438,"data_valid_1_MPORT_2_data", false,-1);
    tracep->declBus(c+1081,"data_valid_1_MPORT_2_addr", false,-1, 4,0);
    tracep->declBit(c+1596,"data_valid_1_MPORT_2_mask", false,-1);
    tracep->declBit(c+425,"data_valid_1_MPORT_2_en", false,-1);
    tracep->declBit(c+1797,"data_valid_1_valid_w_en_pipe_0", false,-1);
    tracep->declBus(c+1798,"data_valid_1_valid_w_addr_pipe_0", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Scanf ");
    tracep->declBit(c+485,"io_in_valid", false,-1);
    tracep->declQuad(c+443,"io_in_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+445,"io_in_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+447,"io_in_bits_meat_valid_0", false,-1);
    tracep->declBit(c+448,"io_in_bits_meat_valid_1", false,-1);
    tracep->declArray(c+449,"io_in_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+465,"io_in_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+481,"io_in_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBit(c+486,"io_out_bits_hit", false,-1);
    tracep->declArray(c+487,"io_out_bits_data", false,-1, 511,0);
    tracep->declBit(c+503,"io_out_bits_hit_way_0", false,-1);
    tracep->declBit(c+504,"io_out_bits_hit_way_1", false,-1);
    tracep->declBit(c+1799,"hit_way_0_result", false,-1);
    tracep->declBit(c+1800,"hit_way_1_result", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ID ");
    tracep->declBit(c+2,"io_in_ready", false,-1);
    tracep->declBit(c+7,"io_in_valid", false,-1);
    tracep->declQuad(c+8,"io_in_bits_PC", false,-1, 63,0);
    tracep->declBus(c+10,"io_in_bits_Inst", false,-1, 31,0);
    tracep->declQuad(c+3365,"io_REG1", false,-1, 63,0);
    tracep->declQuad(c+3367,"io_REG2", false,-1, 63,0);
    tracep->declBit(c+3391,"io_flush", false,-1);
    tracep->declBit(c+2,"io_out_ready", false,-1);
    tracep->declBit(c+7,"io_out_valid", false,-1);
    tracep->declBus(c+11,"io_out_bits_ctrl_signal_src1Type", false,-1, 2,0);
    tracep->declBus(c+12,"io_out_bits_ctrl_signal_src2Type", false,-1, 2,0);
    tracep->declBus(c+13,"io_out_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+3369,"io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBus(c+14,"io_out_bits_ctrl_signal_rfSrc1", false,-1, 4,0);
    tracep->declBus(c+15,"io_out_bits_ctrl_signal_rfSrc2", false,-1, 4,0);
    tracep->declBit(c+16,"io_out_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+17,"io_out_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declBus(c+18,"io_out_bits_ctrl_signal_rfDest", false,-1, 4,0);
    tracep->declQuad(c+3365,"io_out_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+3367,"io_out_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+19,"io_out_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declQuad(c+8,"io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+10,"io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declBus(c+18,"rd", false,-1, 4,0);
    tracep->declBus(c+1801,"Inst_decode_0", false,-1, 3,0);
    tracep->declBus(c+17,"Inst_decode_2", false,-1, 6,0);
    tracep->declBit(c+1802,"Inst_decode_3", false,-1);
    tracep->declBus(c+1803,"srctype1", false,-1, 1,0);
    tracep->declBit(c+1804,"srctype2", false,-1);
    tracep->declBit(c+1805,"sign", false,-1);
    tracep->declBit(c+1806,"sign_1", false,-1);
    tracep->declBit(c+1807,"sign_2", false,-1);
    tracep->declBit(c+1807,"sign_3", false,-1);
    tracep->declBit(c+1805,"sign_4", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IF ");
    tracep->declBit(c+3433,"clock", false,-1);
    tracep->declBit(c+3434,"reset", false,-1);
    tracep->declBit(c+3361,"io_branch_io_is_branch", false,-1);
    tracep->declBit(c+1,"io_branch_io_is_jump", false,-1);
    tracep->declQuad(c+3362,"io_branch_io_dnpc", false,-1, 63,0);
    tracep->declBit(c+2,"io_cache_req_addr_req_valid", false,-1);
    tracep->declQuad(c+3,"io_cache_req_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+2,"io_cache_req_rdata_rep_ready", false,-1);
    tracep->declBit(c+3390,"io_cache_req_rdata_rep_valid", false,-1);
    tracep->declQuad(c+5,"io_cache_req_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+2,"io_out_ready", false,-1);
    tracep->declBit(c+3390,"io_out_valid", false,-1);
    tracep->declQuad(c+3,"io_out_bits_PC", false,-1, 63,0);
    tracep->declBus(c+3364,"io_out_bits_Inst", false,-1, 31,0);
    tracep->declBit(c+3391,"io_flush", false,-1);
    tracep->declQuad(c+3,"temp", false,-1, 63,0);
    tracep->declBus(c+1808,"inst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IFMEM ");
    tracep->declBit(c+3434,"reset", false,-1);
    tracep->declBit(c+3433,"clk", false,-1);
    tracep->declQuad(c+244,"addr", false,-1, 63,0);
    tracep->declBit(c+3471,"we", false,-1);
    tracep->declBit(c+246,"ce", false,-1);
    tracep->declQuad(c+3472,"wdata", false,-1, 63,0);
    tracep->declQuad(c+3404,"rdata", false,-1, 63,0);
    tracep->declBus(c+3474,"wmask", false,-1, 7,0);
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
    tracep->declBit(c+3438,"io_out_ready", false,-1);
    tracep->declBit(c+214,"io_out_valid", false,-1);
    tracep->declBit(c+215,"io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+198,"io_out_bits_ctrl_signal_rfWen", false,-1);
    tracep->declQuad(c+200,"io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+202,"io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+203,"io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBit(c+216,"io_out_bits_ctrl_flow_skip", false,-1);
    tracep->declBus(c+205,"io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+217,"io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+3400,"io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declBit(c+218,"io_cache_io_addr_req_valid", false,-1);
    tracep->declQuad(c+219,"io_cache_io_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+221,"io_cache_io_addr_req_bits_ce", false,-1);
    tracep->declBit(c+222,"io_cache_io_addr_req_bits_we", false,-1);
    tracep->declBit(c+223,"io_cache_io_rdata_rep_valid", false,-1);
    tracep->declQuad(c+3402,"io_cache_io_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+224,"io_cache_io_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+226,"io_cache_io_wdata_req_bits_wmask", false,-1, 7,0);
    tracep->declBit(c+227,"io_cache_io_wdata_rep", false,-1);
    tracep->declQuad(c+219,"addr_temp", false,-1, 63,0);
    tracep->declBit(c+3429,"mem_result_sign", false,-1);
    tracep->declBit(c+3430,"mem_result_sign_1", false,-1);
    tracep->declBit(c+3431,"mem_result_sign_2", false,-1);
    tracep->declBit(c+3432,"mem_result_sign_3", false,-1);
    tracep->declQuad(c+3388,"mem_result", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MMIO ");
    tracep->declBit(c+3433,"clock", false,-1);
    tracep->declBit(c+3434,"reset", false,-1);
    tracep->declBit(c+218,"io_in_addr_req_valid", false,-1);
    tracep->declQuad(c+219,"io_in_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+221,"io_in_addr_req_bits_ce", false,-1);
    tracep->declBit(c+222,"io_in_addr_req_bits_we", false,-1);
    tracep->declBit(c+223,"io_in_rdata_rep_valid", false,-1);
    tracep->declQuad(c+3402,"io_in_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+224,"io_in_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+226,"io_in_wdata_req_bits_wmask", false,-1, 7,0);
    tracep->declBit(c+227,"io_in_wdata_rep", false,-1);
    tracep->declQuad(c+188,"io_out_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+191,"io_out_addr_req_bits_ce", false,-1);
    tracep->declBit(c+190,"io_out_addr_req_bits_we", false,-1);
    tracep->declQuad(c+3398,"io_out_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+192,"io_out_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+194,"io_out_wdata_req_bits_wmask", false,-1, 7,0);
    tracep->declBit(c+3433,"DCACHE_clock", false,-1);
    tracep->declBit(c+3434,"DCACHE_reset", false,-1);
    tracep->declBit(c+1809,"DCACHE_io_in_addr_req_valid", false,-1);
    tracep->declQuad(c+219,"DCACHE_io_in_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+222,"DCACHE_io_in_addr_req_bits_we", false,-1);
    tracep->declBit(c+1810,"DCACHE_io_in_rdata_rep_valid", false,-1);
    tracep->declQuad(c+1811,"DCACHE_io_in_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+224,"DCACHE_io_in_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+226,"DCACHE_io_in_wdata_req_bits_wmask", false,-1, 7,0);
    tracep->declBit(c+1813,"DCACHE_io_in_wdata_rep", false,-1);
    tracep->declQuad(c+1814,"DCACHE_io_out_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+1816,"DCACHE_io_out_addr_req_bits_ce", false,-1);
    tracep->declBit(c+1817,"DCACHE_io_out_addr_req_bits_we", false,-1);
    tracep->declQuad(c+3398,"DCACHE_io_out_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+1818,"DCACHE_io_out_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->pushNamePrefix("DCACHE ");
    tracep->declBit(c+3433,"clock", false,-1);
    tracep->declBit(c+3434,"reset", false,-1);
    tracep->declBit(c+1809,"io_in_addr_req_valid", false,-1);
    tracep->declQuad(c+219,"io_in_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+222,"io_in_addr_req_bits_we", false,-1);
    tracep->declBit(c+1810,"io_in_rdata_rep_valid", false,-1);
    tracep->declQuad(c+1811,"io_in_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+224,"io_in_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+226,"io_in_wdata_req_bits_wmask", false,-1, 7,0);
    tracep->declBit(c+1813,"io_in_wdata_rep", false,-1);
    tracep->declQuad(c+1814,"io_out_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+1816,"io_out_addr_req_bits_ce", false,-1);
    tracep->declBit(c+1817,"io_out_addr_req_bits_we", false,-1);
    tracep->declQuad(c+3398,"io_out_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+1818,"io_out_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->declBit(c+3433,"Cache_data_clock", false,-1);
    tracep->declBit(c+1820,"Cache_data_io_in_valid", false,-1);
    tracep->declQuad(c+219,"Cache_data_io_in_addr", false,-1, 63,0);
    tracep->declQuad(c+1821,"Cache_data_io_write_bus_addr", false,-1, 63,0);
    tracep->declBit(c+1823,"Cache_data_io_write_bus_valid", false,-1);
    tracep->declBus(c+1824,"Cache_data_io_write_bus_waymask", false,-1, 1,0);
    tracep->declArray(c+1825,"Cache_data_io_write_bus_wdata", false,-1, 511,0);
    tracep->declBit(c+1820,"Cache_data_io_out_valid", false,-1);
    tracep->declQuad(c+1841,"Cache_data_io_out_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+1843,"Cache_data_io_out_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+1845,"Cache_data_io_out_bits_meat_valid_0", false,-1);
    tracep->declBit(c+1846,"Cache_data_io_out_bits_meat_valid_1", false,-1);
    tracep->declArray(c+1847,"Cache_data_io_out_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+1863,"Cache_data_io_out_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+1879,"Cache_data_io_out_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBus(c+1881,"Cache_data_io_out_bits_ctrl_data_index", false,-1, 4,0);
    tracep->declBus(c+1882,"Cache_data_io_out_bits_ctrl_data_offset", false,-1, 5,0);
    tracep->declBit(c+1883,"Scanf_io_in_valid", false,-1);
    tracep->declQuad(c+1841,"Scanf_io_in_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+1843,"Scanf_io_in_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+1845,"Scanf_io_in_bits_meat_valid_0", false,-1);
    tracep->declBit(c+1846,"Scanf_io_in_bits_meat_valid_1", false,-1);
    tracep->declArray(c+1847,"Scanf_io_in_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+1863,"Scanf_io_in_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+1879,"Scanf_io_in_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBit(c+1884,"Scanf_io_out_bits_hit", false,-1);
    tracep->declArray(c+1885,"Scanf_io_out_bits_data", false,-1, 511,0);
    tracep->declBit(c+1901,"Scanf_io_out_bits_hit_way_0", false,-1);
    tracep->declBit(c+1902,"Scanf_io_out_bits_hit_way_1", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+1903+i*1,"lru", true,(i+0));
    }
    tracep->declBit(c+1935,"lru_lru_w_MPORT_en", false,-1);
    tracep->declBus(c+1936,"lru_lru_w_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+1937,"lru_lru_w_MPORT_data", false,-1);
    tracep->declBit(c+3438,"lru_MPORT_data", false,-1);
    tracep->declBus(c+1881,"lru_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+3438,"lru_MPORT_mask", false,-1);
    tracep->declBit(c+1938,"lru_MPORT_en", false,-1);
    tracep->declBit(c+3471,"lru_MPORT_1_data", false,-1);
    tracep->declBus(c+1881,"lru_MPORT_1_addr", false,-1, 4,0);
    tracep->declBit(c+3438,"lru_MPORT_1_mask", false,-1);
    tracep->declBit(c+1939,"lru_MPORT_1_en", false,-1);
    tracep->declBit(c+3471,"lru_MPORT_2_data", false,-1);
    tracep->declBus(c+1881,"lru_MPORT_2_addr", false,-1, 4,0);
    tracep->declBit(c+3438,"lru_MPORT_2_mask", false,-1);
    tracep->declBit(c+1940,"lru_MPORT_2_en", false,-1);
    tracep->declBit(c+3438,"lru_MPORT_3_data", false,-1);
    tracep->declBus(c+1881,"lru_MPORT_3_addr", false,-1, 4,0);
    tracep->declBit(c+3438,"lru_MPORT_3_mask", false,-1);
    tracep->declBit(c+1941,"lru_MPORT_3_en", false,-1);
    tracep->declBit(c+1935,"lru_lru_w_MPORT_en_pipe_0", false,-1);
    tracep->declBus(c+1936,"lru_lru_w_MPORT_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+1942+i*1,"dirt_0", true,(i+0));
    }
    tracep->declBit(c+1974,"dirt_0_dirt_w_en", false,-1);
    tracep->declBus(c+1936,"dirt_0_dirt_w_addr", false,-1, 4,0);
    tracep->declBit(c+1975,"dirt_0_dirt_w_data", false,-1);
    tracep->declBit(c+3438,"dirt_0_MPORT_4_data", false,-1);
    tracep->declBus(c+1881,"dirt_0_MPORT_4_addr", false,-1, 4,0);
    tracep->declBit(c+1976,"dirt_0_MPORT_4_mask", false,-1);
    tracep->declBit(c+1977,"dirt_0_MPORT_4_en", false,-1);
    tracep->declBit(c+1974,"dirt_0_dirt_w_en_pipe_0", false,-1);
    tracep->declBus(c+1936,"dirt_0_dirt_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+1978+i*1,"dirt_1", true,(i+0));
    }
    tracep->declBit(c+2010,"dirt_1_dirt_w_en", false,-1);
    tracep->declBus(c+1936,"dirt_1_dirt_w_addr", false,-1, 4,0);
    tracep->declBit(c+2011,"dirt_1_dirt_w_data", false,-1);
    tracep->declBit(c+3438,"dirt_1_MPORT_4_data", false,-1);
    tracep->declBus(c+1881,"dirt_1_MPORT_4_addr", false,-1, 4,0);
    tracep->declBit(c+2012,"dirt_1_MPORT_4_mask", false,-1);
    tracep->declBit(c+1977,"dirt_1_MPORT_4_en", false,-1);
    tracep->declBit(c+2010,"dirt_1_dirt_w_en_pipe_0", false,-1);
    tracep->declBus(c+1936,"dirt_1_dirt_w_addr_pipe_0", false,-1, 4,0);
    tracep->declBus(c+2013,"state", false,-1, 1,0);
    tracep->declArray(c+2014,"data_line_reg", false,-1, 511,0);
    tracep->declQuad(c+2030,"mem_addr_reg", false,-1, 63,0);
    tracep->declBit(c+2032,"lru_r", false,-1);
    tracep->declBus(c+2033,"count", false,-1, 3,0);
    tracep->declBit(c+2034,"s", false,-1);
    tracep->declBus(c+2035,"count_write", false,-1, 3,0);
    tracep->declBit(c+2036,"s_w", false,-1);
    tracep->declQuad(c+2037,"mem_write_addr_reg", false,-1, 63,0);
    tracep->declArray(c+2039,"mem_write_data_reg", false,-1, 511,0);
    tracep->declBit(c+1937,"lru_w", false,-1);
    tracep->declBit(c+1901,"hit_way_0", false,-1);
    tracep->declBit(c+1902,"hit_way_1", false,-1);
    tracep->declQuad(c+2055,"hit_data", false,-1, 63,0);
    tracep->declQuad(c+2057,"mem_data", false,-1, 63,0);
    tracep->declBit(c+1883,"Scanf_io_in_valid_REG", false,-1);
    tracep->declQuad(c+2059,"wmaskextend_Genmask", false,-1, 63,0);
    tracep->declQuad(c+2061,"wmaskextend_lo_lo_lo", false,-1, 63,0);
    tracep->declArray(c+2063,"wmaskextend_lo_lo", false,-1, 127,0);
    tracep->declQuad(c+2067,"wmaskextend_lo_hi_lo", false,-1, 63,0);
    tracep->declArray(c+2069,"wmaskextend_lo", false,-1, 255,0);
    tracep->declQuad(c+2077,"wmaskextend_hi_lo_lo", false,-1, 63,0);
    tracep->declArray(c+2079,"wmaskextend_hi_lo", false,-1, 127,0);
    tracep->declQuad(c+2083,"wmaskextend_hi_hi_lo", false,-1, 63,0);
    tracep->declArray(c+2085,"wmaskextend_hi", false,-1, 255,0);
    tracep->declArray(c+2093,"wmaskextend", false,-1, 511,0);
    tracep->declArray(c+2109,"wdata_extend", false,-1, 511,0);
    tracep->declBus(c+2125,"waymask", false,-1, 1,0);
    tracep->pushNamePrefix("Cache_data ");
    tracep->declBit(c+3433,"clock", false,-1);
    tracep->declBit(c+1820,"io_in_valid", false,-1);
    tracep->declQuad(c+219,"io_in_addr", false,-1, 63,0);
    tracep->declQuad(c+1821,"io_write_bus_addr", false,-1, 63,0);
    tracep->declBit(c+1823,"io_write_bus_valid", false,-1);
    tracep->declBus(c+1824,"io_write_bus_waymask", false,-1, 1,0);
    tracep->declArray(c+1825,"io_write_bus_wdata", false,-1, 511,0);
    tracep->declBit(c+1820,"io_out_valid", false,-1);
    tracep->declQuad(c+1841,"io_out_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+1843,"io_out_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+1845,"io_out_bits_meat_valid_0", false,-1);
    tracep->declBit(c+1846,"io_out_bits_meat_valid_1", false,-1);
    tracep->declArray(c+1847,"io_out_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+1863,"io_out_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+1879,"io_out_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBus(c+1881,"io_out_bits_ctrl_data_index", false,-1, 4,0);
    tracep->declBus(c+1882,"io_out_bits_ctrl_data_offset", false,-1, 5,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declArray(c+2126+i*16,"data_0", true,(i+0), 511,0);
    }
    tracep->declBit(c+2638,"data_0_data_w_en", false,-1);
    tracep->declBus(c+2639,"data_0_data_w_addr", false,-1, 4,0);
    tracep->declArray(c+1847,"data_0_data_w_data", false,-1, 511,0);
    tracep->declArray(c+1825,"data_0_MPORT_data", false,-1, 511,0);
    tracep->declBus(c+2640,"data_0_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+2641,"data_0_MPORT_mask", false,-1);
    tracep->declBit(c+1823,"data_0_MPORT_en", false,-1);
    tracep->declBit(c+2638,"data_0_data_w_en_pipe_0", false,-1);
    tracep->declBus(c+2639,"data_0_data_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declArray(c+2642+i*16,"data_1", true,(i+0), 511,0);
    }
    tracep->declBit(c+3154,"data_1_data_w_en", false,-1);
    tracep->declBus(c+3155,"data_1_data_w_addr", false,-1, 4,0);
    tracep->declArray(c+1863,"data_1_data_w_data", false,-1, 511,0);
    tracep->declArray(c+1825,"data_1_MPORT_data", false,-1, 511,0);
    tracep->declBus(c+2640,"data_1_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+3156,"data_1_MPORT_mask", false,-1);
    tracep->declBit(c+1823,"data_1_MPORT_en", false,-1);
    tracep->declBit(c+3154,"data_1_data_w_en_pipe_0", false,-1);
    tracep->declBus(c+3155,"data_1_data_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+3157+i*2,"TAG_0", true,(i+0), 52,0);
    }
    tracep->declBit(c+3221,"TAG_0_tag_w_en", false,-1);
    tracep->declBus(c+3222,"TAG_0_tag_w_addr", false,-1, 4,0);
    tracep->declQuad(c+1841,"TAG_0_tag_w_data", false,-1, 52,0);
    tracep->declQuad(c+3223,"TAG_0_MPORT_1_data", false,-1, 52,0);
    tracep->declBus(c+2640,"TAG_0_MPORT_1_addr", false,-1, 4,0);
    tracep->declBit(c+2641,"TAG_0_MPORT_1_mask", false,-1);
    tracep->declBit(c+1823,"TAG_0_MPORT_1_en", false,-1);
    tracep->declBit(c+3221,"TAG_0_tag_w_en_pipe_0", false,-1);
    tracep->declBus(c+3222,"TAG_0_tag_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+3225+i*2,"TAG_1", true,(i+0), 52,0);
    }
    tracep->declBit(c+3289,"TAG_1_tag_w_en", false,-1);
    tracep->declBus(c+3290,"TAG_1_tag_w_addr", false,-1, 4,0);
    tracep->declQuad(c+1843,"TAG_1_tag_w_data", false,-1, 52,0);
    tracep->declQuad(c+3223,"TAG_1_MPORT_1_data", false,-1, 52,0);
    tracep->declBus(c+2640,"TAG_1_MPORT_1_addr", false,-1, 4,0);
    tracep->declBit(c+3156,"TAG_1_MPORT_1_mask", false,-1);
    tracep->declBit(c+1823,"TAG_1_MPORT_1_en", false,-1);
    tracep->declBit(c+3289,"TAG_1_tag_w_en_pipe_0", false,-1);
    tracep->declBus(c+3290,"TAG_1_tag_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+3291+i*1,"data_valid_0", true,(i+0));
    }
    tracep->declBit(c+3323,"data_valid_0_valid_w_en", false,-1);
    tracep->declBus(c+3324,"data_valid_0_valid_w_addr", false,-1, 4,0);
    tracep->declBit(c+1845,"data_valid_0_valid_w_data", false,-1);
    tracep->declBit(c+3438,"data_valid_0_MPORT_2_data", false,-1);
    tracep->declBus(c+2640,"data_valid_0_MPORT_2_addr", false,-1, 4,0);
    tracep->declBit(c+2641,"data_valid_0_MPORT_2_mask", false,-1);
    tracep->declBit(c+1823,"data_valid_0_MPORT_2_en", false,-1);
    tracep->declBit(c+3323,"data_valid_0_valid_w_en_pipe_0", false,-1);
    tracep->declBus(c+3324,"data_valid_0_valid_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+3325+i*1,"data_valid_1", true,(i+0));
    }
    tracep->declBit(c+3357,"data_valid_1_valid_w_en", false,-1);
    tracep->declBus(c+3358,"data_valid_1_valid_w_addr", false,-1, 4,0);
    tracep->declBit(c+1846,"data_valid_1_valid_w_data", false,-1);
    tracep->declBit(c+3438,"data_valid_1_MPORT_2_data", false,-1);
    tracep->declBus(c+2640,"data_valid_1_MPORT_2_addr", false,-1, 4,0);
    tracep->declBit(c+3156,"data_valid_1_MPORT_2_mask", false,-1);
    tracep->declBit(c+1823,"data_valid_1_MPORT_2_en", false,-1);
    tracep->declBit(c+3357,"data_valid_1_valid_w_en_pipe_0", false,-1);
    tracep->declBus(c+3358,"data_valid_1_valid_w_addr_pipe_0", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Scanf ");
    tracep->declBit(c+1883,"io_in_valid", false,-1);
    tracep->declQuad(c+1841,"io_in_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+1843,"io_in_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+1845,"io_in_bits_meat_valid_0", false,-1);
    tracep->declBit(c+1846,"io_in_bits_meat_valid_1", false,-1);
    tracep->declArray(c+1847,"io_in_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+1863,"io_in_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+1879,"io_in_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBit(c+1884,"io_out_bits_hit", false,-1);
    tracep->declArray(c+1885,"io_out_bits_data", false,-1, 511,0);
    tracep->declBit(c+1901,"io_out_bits_hit_way_0", false,-1);
    tracep->declBit(c+1902,"io_out_bits_hit_way_1", false,-1);
    tracep->declBit(c+3359,"hit_way_0_result", false,-1);
    tracep->declBit(c+3360,"hit_way_1_result", false,-1);
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
    tracep->declBit(c+3438,"io_out_ready", false,-1);
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
    tracep->declQuad(c+3396,"io_EX_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+205,"io_MEM_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+217,"io_MEM_rf_rfWen", false,-1);
    tracep->declQuad(c+3400,"io_MEM_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+186,"io_WB_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+187,"io_WB_rf_rfWen", false,-1);
    tracep->declQuad(c+237,"io_WB_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+240,"io_Reg1", false,-1, 63,0);
    tracep->declBus(c+14,"io_reg_index1", false,-1, 4,0);
    tracep->declQuad(c+242,"io_Reg2", false,-1, 63,0);
    tracep->declBus(c+15,"io_reg_index2", false,-1, 4,0);
    tracep->declQuad(c+3365,"io_Bypass_REG1", false,-1, 63,0);
    tracep->declQuad(c+3367,"io_Bypass_REG2", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem ");
    tracep->declBit(c+3434,"reset", false,-1);
    tracep->declBit(c+3433,"clk", false,-1);
    tracep->declQuad(c+188,"addr", false,-1, 63,0);
    tracep->declBit(c+190,"we", false,-1);
    tracep->declBit(c+191,"ce", false,-1);
    tracep->declQuad(c+192,"wdata", false,-1, 63,0);
    tracep->declQuad(c+3398,"rdata", false,-1, 63,0);
    tracep->declBus(c+194,"wmask", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_bypass ");
    tracep->declBus(c+205,"io_MEM_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+217,"io_MEM_rf_rfWen", false,-1);
    tracep->declQuad(c+3400,"io_MEM_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+31,"io_Reg1", false,-1, 63,0);
    tracep->declBus(c+26,"io_reg_index1", false,-1, 4,0);
    tracep->declQuad(c+33,"io_Reg2", false,-1, 63,0);
    tracep->declBus(c+27,"io_reg_index2", false,-1, 4,0);
    tracep->declQuad(c+3392,"io_Bypass_REG1", false,-1, 63,0);
    tracep->declQuad(c+3394,"io_Bypass_REG2", false,-1, 63,0);
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
                                  : (3U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)))
                              : (3U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)))));
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
    bufp->fullQData(oldp+244,(vlSelf->CoreTop__DOT__ICACHE__DOT__mem_addr_reg),64);
    bufp->fullBit(oldp+246,((2U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state))));
    bufp->fullBit(oldp+247,(vlSelf->CoreTop__DOT__DIP_io_is_break_REG));
    bufp->fullQData(oldp+248,(vlSelf->CoreTop__DOT__DIP__DOT__rf[0]),64);
    bufp->fullQData(oldp+250,(vlSelf->CoreTop__DOT__DIP__DOT__rf[1]),64);
    bufp->fullQData(oldp+252,(vlSelf->CoreTop__DOT__DIP__DOT__rf[2]),64);
    bufp->fullQData(oldp+254,(vlSelf->CoreTop__DOT__DIP__DOT__rf[3]),64);
    bufp->fullQData(oldp+256,(vlSelf->CoreTop__DOT__DIP__DOT__rf[4]),64);
    bufp->fullQData(oldp+258,(vlSelf->CoreTop__DOT__DIP__DOT__rf[5]),64);
    bufp->fullQData(oldp+260,(vlSelf->CoreTop__DOT__DIP__DOT__rf[6]),64);
    bufp->fullQData(oldp+262,(vlSelf->CoreTop__DOT__DIP__DOT__rf[7]),64);
    bufp->fullQData(oldp+264,(vlSelf->CoreTop__DOT__DIP__DOT__rf[8]),64);
    bufp->fullQData(oldp+266,(vlSelf->CoreTop__DOT__DIP__DOT__rf[9]),64);
    bufp->fullQData(oldp+268,(vlSelf->CoreTop__DOT__DIP__DOT__rf[10]),64);
    bufp->fullQData(oldp+270,(vlSelf->CoreTop__DOT__DIP__DOT__rf[11]),64);
    bufp->fullQData(oldp+272,(vlSelf->CoreTop__DOT__DIP__DOT__rf[12]),64);
    bufp->fullQData(oldp+274,(vlSelf->CoreTop__DOT__DIP__DOT__rf[13]),64);
    bufp->fullQData(oldp+276,(vlSelf->CoreTop__DOT__DIP__DOT__rf[14]),64);
    bufp->fullQData(oldp+278,(vlSelf->CoreTop__DOT__DIP__DOT__rf[15]),64);
    bufp->fullQData(oldp+280,(vlSelf->CoreTop__DOT__DIP__DOT__rf[16]),64);
    bufp->fullQData(oldp+282,(vlSelf->CoreTop__DOT__DIP__DOT__rf[17]),64);
    bufp->fullQData(oldp+284,(vlSelf->CoreTop__DOT__DIP__DOT__rf[18]),64);
    bufp->fullQData(oldp+286,(vlSelf->CoreTop__DOT__DIP__DOT__rf[19]),64);
    bufp->fullQData(oldp+288,(vlSelf->CoreTop__DOT__DIP__DOT__rf[20]),64);
    bufp->fullQData(oldp+290,(vlSelf->CoreTop__DOT__DIP__DOT__rf[21]),64);
    bufp->fullQData(oldp+292,(vlSelf->CoreTop__DOT__DIP__DOT__rf[22]),64);
    bufp->fullQData(oldp+294,(vlSelf->CoreTop__DOT__DIP__DOT__rf[23]),64);
    bufp->fullQData(oldp+296,(vlSelf->CoreTop__DOT__DIP__DOT__rf[24]),64);
    bufp->fullQData(oldp+298,(vlSelf->CoreTop__DOT__DIP__DOT__rf[25]),64);
    bufp->fullQData(oldp+300,(vlSelf->CoreTop__DOT__DIP__DOT__rf[26]),64);
    bufp->fullQData(oldp+302,(vlSelf->CoreTop__DOT__DIP__DOT__rf[27]),64);
    bufp->fullQData(oldp+304,(vlSelf->CoreTop__DOT__DIP__DOT__rf[28]),64);
    bufp->fullQData(oldp+306,(vlSelf->CoreTop__DOT__DIP__DOT__rf[29]),64);
    bufp->fullQData(oldp+308,(vlSelf->CoreTop__DOT__DIP__DOT__rf[30]),64);
    bufp->fullQData(oldp+310,(vlSelf->CoreTop__DOT__DIP__DOT__rf[31]),64);
    bufp->fullIData(oldp+312,(vlSelf->CoreTop__DOT__DIP__DOT__IN[0]),32);
    bufp->fullIData(oldp+313,(vlSelf->CoreTop__DOT__DIP__DOT__IN[1]),32);
    bufp->fullIData(oldp+314,(vlSelf->CoreTop__DOT__DIP__DOT__IN[2]),32);
    bufp->fullIData(oldp+315,(vlSelf->CoreTop__DOT__DIP__DOT__IN[3]),32);
    bufp->fullIData(oldp+316,(vlSelf->CoreTop__DOT__DIP__DOT__IN[4]),32);
    bufp->fullIData(oldp+317,(vlSelf->CoreTop__DOT__DIP__DOT__IN[5]),32);
    bufp->fullIData(oldp+318,(vlSelf->CoreTop__DOT__DIP__DOT__IN[6]),32);
    bufp->fullQData(oldp+319,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mepc_REG_1),64);
    bufp->fullQData(oldp+321,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mcause_REG_1),64);
    bufp->fullQData(oldp+323,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mstatus_REG_1),64);
    bufp->fullQData(oldp+325,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mtvec_REG_1),64);
    bufp->fullBit(oldp+327,(vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_valid));
    bufp->fullBit(oldp+328,((0x44U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count))));
    bufp->fullQData(oldp+329,((((QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[0U])))),64);
    bufp->fullBit(oldp+331,(((IData)(vlSelf->CoreTop__DOT__EX__DOT__is_div) 
                             & (2U != (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state)))));
    bufp->fullBit(oldp+332,(vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_flow_div_signed));
    bufp->fullBit(oldp+333,((2U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state))));
    bufp->fullBit(oldp+334,(vlSelf->CoreTop__DOT__EX__DOT__is_mul));
    bufp->fullBit(oldp+335,(vlSelf->CoreTop__DOT__EX__DOT__is_div));
    bufp->fullBit(oldp+336,(vlSelf->CoreTop__DOT__EX__DOT__is_divw));
    bufp->fullQData(oldp+337,(vlSelf->CoreTop__DOT__EX__DOT__mepc),64);
    bufp->fullQData(oldp+339,(vlSelf->CoreTop__DOT__EX__DOT__mcause),64);
    bufp->fullQData(oldp+341,(vlSelf->CoreTop__DOT__EX__DOT__mstatus),64);
    bufp->fullQData(oldp+343,(vlSelf->CoreTop__DOT__EX__DOT__mtvec),64);
    bufp->fullQData(oldp+345,(vlSelf->CoreTop__DOT__EX__DOT__mie),64);
    bufp->fullQData(oldp+347,(vlSelf->CoreTop__DOT__EX__DOT__mip),64);
    bufp->fullBit(oldp+349,((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[0U] 
                             >> 0x1fU)));
    bufp->fullQData(oldp+350,(((3U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType))
                                ? (4ULL + vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC)
                                : 0ULL)),64);
    bufp->fullQData(oldp+352,(((0x6bU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
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
    bufp->fullQData(oldp+354,(vlSelf->CoreTop__DOT__EX__DOT__csr_data),64);
    bufp->fullQData(oldp+356,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mtvec_REG),64);
    bufp->fullQData(oldp+358,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mcause_REG),64);
    bufp->fullQData(oldp+360,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mepc_REG),64);
    bufp->fullQData(oldp+362,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mstatus_REG),64);
    bufp->fullQData(oldp+364,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[0]),64);
    bufp->fullQData(oldp+366,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[1]),64);
    bufp->fullQData(oldp+368,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[2]),64);
    bufp->fullQData(oldp+370,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[3]),64);
    bufp->fullQData(oldp+372,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[4]),64);
    bufp->fullQData(oldp+374,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[5]),64);
    bufp->fullWData(oldp+376,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend),128);
    bufp->fullQData(oldp+380,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divisor),64);
    bufp->fullQData(oldp+382,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S),64);
    bufp->fullCData(oldp+384,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state),2);
    bufp->fullCData(oldp+385,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__count),6);
    bufp->fullBit(oldp+386,((0x3fU == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__count))));
    bufp->fullBit(oldp+387,(((1U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state)) 
                             & (0x3fU == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__count)))));
    bufp->fullWData(oldp+388,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div),65);
    bufp->fullQData(oldp+391,((- vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S)),64);
    bufp->fullQData(oldp+393,((- (((QData)((IData)(
                                                   vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[3U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[2U]))))),64);
    bufp->fullCData(oldp+395,((7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U])),3);
    bufp->fullWData(oldp+396,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand),132);
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
    bufp->fullWData(oldp+401,(__Vtemp_h791e8ef8__0),132);
    bufp->fullBit(oldp+406,(((0U != (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U])) 
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
    bufp->fullWData(oldp+407,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier),66);
    bufp->fullWData(oldp+410,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p),132);
    bufp->fullCData(oldp+415,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count),7);
    bufp->fullWData(oldp+416,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__temp),132);
    bufp->fullBit(oldp+421,((1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__temp[4U] 
                                   >> 3U))));
    bufp->fullBit(oldp+422,(((IData)(vlSelf->CoreTop__DOT__EX_io_in_ready) 
                             & (0U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)))));
    bufp->fullQData(oldp+423,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data_io_write_bus_addr),64);
    bufp->fullBit(oldp+425,((8U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__count))));
    bufp->fullCData(oldp+426,(((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r)
                                ? 2U : 1U)),2);
    bufp->fullWData(oldp+427,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data_io_write_bus_wdata),512);
    bufp->fullQData(oldp+443,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_tag_w_data),53);
    bufp->fullQData(oldp+445,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_data),53);
    bufp->fullBit(oldp+447,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0
                            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0]));
    bufp->fullBit(oldp+448,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1
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
    bufp->fullWData(oldp+449,(__Vtemp_hf989eec7__0),512);
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
    bufp->fullWData(oldp+465,(__Vtemp_h4453b49e__0),512);
    bufp->fullQData(oldp+481,((vlSelf->CoreTop__DOT__IF__DOT__temp 
                               >> 0xbU)),53);
    bufp->fullCData(oldp+483,((0x1fU & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                >> 6U)))),5);
    bufp->fullCData(oldp+484,((0x3fU & (IData)(vlSelf->CoreTop__DOT__IF__DOT__temp))),6);
    bufp->fullBit(oldp+485,(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_in_valid_REG));
    bufp->fullBit(oldp+486,(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit));
    bufp->fullWData(oldp+487,(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data),512);
    bufp->fullBit(oldp+503,(((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT___hit_way_0_T) 
                             & ((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                 >> 0xbU) == vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_tag_w_data))));
    bufp->fullBit(oldp+504,(((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT___hit_way_1_T) 
                             & ((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                 >> 0xbU) == vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_data))));
    bufp->fullBit(oldp+505,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[0]));
    bufp->fullBit(oldp+506,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[1]));
    bufp->fullBit(oldp+507,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[2]));
    bufp->fullBit(oldp+508,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[3]));
    bufp->fullBit(oldp+509,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[4]));
    bufp->fullBit(oldp+510,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[5]));
    bufp->fullBit(oldp+511,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[6]));
    bufp->fullBit(oldp+512,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[7]));
    bufp->fullBit(oldp+513,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[8]));
    bufp->fullBit(oldp+514,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[9]));
    bufp->fullBit(oldp+515,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[10]));
    bufp->fullBit(oldp+516,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[11]));
    bufp->fullBit(oldp+517,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[12]));
    bufp->fullBit(oldp+518,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[13]));
    bufp->fullBit(oldp+519,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[14]));
    bufp->fullBit(oldp+520,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[15]));
    bufp->fullBit(oldp+521,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[16]));
    bufp->fullBit(oldp+522,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[17]));
    bufp->fullBit(oldp+523,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[18]));
    bufp->fullBit(oldp+524,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[19]));
    bufp->fullBit(oldp+525,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[20]));
    bufp->fullBit(oldp+526,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[21]));
    bufp->fullBit(oldp+527,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[22]));
    bufp->fullBit(oldp+528,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[23]));
    bufp->fullBit(oldp+529,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[24]));
    bufp->fullBit(oldp+530,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[25]));
    bufp->fullBit(oldp+531,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[26]));
    bufp->fullBit(oldp+532,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[27]));
    bufp->fullBit(oldp+533,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[28]));
    bufp->fullBit(oldp+534,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[29]));
    bufp->fullBit(oldp+535,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[30]));
    bufp->fullBit(oldp+536,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[31]));
    bufp->fullBit(oldp+537,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_lru_w_MPORT_en_pipe_0));
    bufp->fullCData(oldp+538,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_lru_w_MPORT_addr_pipe_0),5);
    bufp->fullBit(oldp+539,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru
                            [vlSelf->CoreTop__DOT__ICACHE__DOT__lru_lru_w_MPORT_addr_pipe_0]));
    bufp->fullBit(oldp+540,(((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                             & ((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                & ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit) 
                                   & ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT___hit_way_0_T) 
                                      & ((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                          >> 0xbU) 
                                         == vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_tag_w_data)))))));
    bufp->fullBit(oldp+541,(((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                             & ((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                & ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit) 
                                   & ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT___hit_way_1_T) 
                                      & ((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                          >> 0xbU) 
                                         == vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_data)))))));
    bufp->fullBit(oldp+542,(((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                             & ((1U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                & ((2U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                   & (((IData)(vlSelf->CoreTop__DOT__EX_io_in_ready) 
                                       & (8U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__count))) 
                                      & (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r)))))));
    bufp->fullBit(oldp+543,(((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                             & ((1U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                & ((2U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                   & (((IData)(vlSelf->CoreTop__DOT__EX_io_in_ready) 
                                       & (8U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__count))) 
                                      & (~ (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r))))))));
    bufp->fullCData(oldp+544,(vlSelf->CoreTop__DOT__ICACHE__DOT__state),2);
    bufp->fullWData(oldp+545,(vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg),512);
    bufp->fullBit(oldp+561,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r));
    bufp->fullCData(oldp+562,(vlSelf->CoreTop__DOT__ICACHE__DOT__count),4);
    bufp->fullQData(oldp+563,(vlSelf->CoreTop__DOT__ICACHE__DOT__hit_data),64);
    bufp->fullQData(oldp+565,(vlSelf->CoreTop__DOT__ICACHE__DOT__mem_data),64);
    bufp->fullWData(oldp+567,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[0]),512);
    bufp->fullWData(oldp+583,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[1]),512);
    bufp->fullWData(oldp+599,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[2]),512);
    bufp->fullWData(oldp+615,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[3]),512);
    bufp->fullWData(oldp+631,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[4]),512);
    bufp->fullWData(oldp+647,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[5]),512);
    bufp->fullWData(oldp+663,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[6]),512);
    bufp->fullWData(oldp+679,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[7]),512);
    bufp->fullWData(oldp+695,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[8]),512);
    bufp->fullWData(oldp+711,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[9]),512);
    bufp->fullWData(oldp+727,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[10]),512);
    bufp->fullWData(oldp+743,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[11]),512);
    bufp->fullWData(oldp+759,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[12]),512);
    bufp->fullWData(oldp+775,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[13]),512);
    bufp->fullWData(oldp+791,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[14]),512);
    bufp->fullWData(oldp+807,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[15]),512);
    bufp->fullWData(oldp+823,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[16]),512);
    bufp->fullWData(oldp+839,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[17]),512);
    bufp->fullWData(oldp+855,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[18]),512);
    bufp->fullWData(oldp+871,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[19]),512);
    bufp->fullWData(oldp+887,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[20]),512);
    bufp->fullWData(oldp+903,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[21]),512);
    bufp->fullWData(oldp+919,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[22]),512);
    bufp->fullWData(oldp+935,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[23]),512);
    bufp->fullWData(oldp+951,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[24]),512);
    bufp->fullWData(oldp+967,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[25]),512);
    bufp->fullWData(oldp+983,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[26]),512);
    bufp->fullWData(oldp+999,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[27]),512);
    bufp->fullWData(oldp+1015,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[28]),512);
    bufp->fullWData(oldp+1031,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[29]),512);
    bufp->fullWData(oldp+1047,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[30]),512);
    bufp->fullWData(oldp+1063,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[31]),512);
    bufp->fullBit(oldp+1079,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_en_pipe_0));
    bufp->fullCData(oldp+1080,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0),5);
    bufp->fullCData(oldp+1081,((0x1fU & (IData)((vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data_io_write_bus_addr 
                                                 >> 6U)))),5);
    bufp->fullBit(oldp+1082,(((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r)
                               ? 0U : 1U)));
    bufp->fullWData(oldp+1083,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[0]),512);
    bufp->fullWData(oldp+1099,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[1]),512);
    bufp->fullWData(oldp+1115,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[2]),512);
    bufp->fullWData(oldp+1131,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[3]),512);
    bufp->fullWData(oldp+1147,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[4]),512);
    bufp->fullWData(oldp+1163,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[5]),512);
    bufp->fullWData(oldp+1179,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[6]),512);
    bufp->fullWData(oldp+1195,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[7]),512);
    bufp->fullWData(oldp+1211,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[8]),512);
    bufp->fullWData(oldp+1227,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[9]),512);
    bufp->fullWData(oldp+1243,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[10]),512);
    bufp->fullWData(oldp+1259,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[11]),512);
    bufp->fullWData(oldp+1275,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[12]),512);
    bufp->fullWData(oldp+1291,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[13]),512);
    bufp->fullWData(oldp+1307,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[14]),512);
    bufp->fullWData(oldp+1323,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[15]),512);
    bufp->fullWData(oldp+1339,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[16]),512);
    bufp->fullWData(oldp+1355,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[17]),512);
    bufp->fullWData(oldp+1371,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[18]),512);
    bufp->fullWData(oldp+1387,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[19]),512);
    bufp->fullWData(oldp+1403,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[20]),512);
    bufp->fullWData(oldp+1419,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[21]),512);
    bufp->fullWData(oldp+1435,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[22]),512);
    bufp->fullWData(oldp+1451,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[23]),512);
    bufp->fullWData(oldp+1467,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[24]),512);
    bufp->fullWData(oldp+1483,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[25]),512);
    bufp->fullWData(oldp+1499,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[26]),512);
    bufp->fullWData(oldp+1515,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[27]),512);
    bufp->fullWData(oldp+1531,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[28]),512);
    bufp->fullWData(oldp+1547,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[29]),512);
    bufp->fullWData(oldp+1563,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[30]),512);
    bufp->fullWData(oldp+1579,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[31]),512);
    bufp->fullBit(oldp+1595,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_en_pipe_0));
    bufp->fullBit(oldp+1596,((1U & (((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r)
                                      ? 2U : 1U) >> 1U))));
    bufp->fullQData(oldp+1597,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[0]),53);
    bufp->fullQData(oldp+1599,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[1]),53);
    bufp->fullQData(oldp+1601,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[2]),53);
    bufp->fullQData(oldp+1603,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[3]),53);
    bufp->fullQData(oldp+1605,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[4]),53);
    bufp->fullQData(oldp+1607,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[5]),53);
    bufp->fullQData(oldp+1609,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[6]),53);
    bufp->fullQData(oldp+1611,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[7]),53);
    bufp->fullQData(oldp+1613,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[8]),53);
    bufp->fullQData(oldp+1615,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[9]),53);
    bufp->fullQData(oldp+1617,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[10]),53);
    bufp->fullQData(oldp+1619,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[11]),53);
    bufp->fullQData(oldp+1621,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[12]),53);
    bufp->fullQData(oldp+1623,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[13]),53);
    bufp->fullQData(oldp+1625,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[14]),53);
    bufp->fullQData(oldp+1627,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[15]),53);
    bufp->fullQData(oldp+1629,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[16]),53);
    bufp->fullQData(oldp+1631,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[17]),53);
    bufp->fullQData(oldp+1633,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[18]),53);
    bufp->fullQData(oldp+1635,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[19]),53);
    bufp->fullQData(oldp+1637,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[20]),53);
    bufp->fullQData(oldp+1639,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[21]),53);
    bufp->fullQData(oldp+1641,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[22]),53);
    bufp->fullQData(oldp+1643,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[23]),53);
    bufp->fullQData(oldp+1645,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[24]),53);
    bufp->fullQData(oldp+1647,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[25]),53);
    bufp->fullQData(oldp+1649,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[26]),53);
    bufp->fullQData(oldp+1651,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[27]),53);
    bufp->fullQData(oldp+1653,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[28]),53);
    bufp->fullQData(oldp+1655,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[29]),53);
    bufp->fullQData(oldp+1657,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[30]),53);
    bufp->fullQData(oldp+1659,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[31]),53);
    bufp->fullBit(oldp+1661,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_tag_w_en_pipe_0));
    bufp->fullCData(oldp+1662,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_tag_w_addr_pipe_0),5);
    bufp->fullQData(oldp+1663,((vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data_io_write_bus_addr 
                                >> 0xbU)),53);
    bufp->fullQData(oldp+1665,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[0]),53);
    bufp->fullQData(oldp+1667,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[1]),53);
    bufp->fullQData(oldp+1669,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[2]),53);
    bufp->fullQData(oldp+1671,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[3]),53);
    bufp->fullQData(oldp+1673,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[4]),53);
    bufp->fullQData(oldp+1675,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[5]),53);
    bufp->fullQData(oldp+1677,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[6]),53);
    bufp->fullQData(oldp+1679,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[7]),53);
    bufp->fullQData(oldp+1681,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[8]),53);
    bufp->fullQData(oldp+1683,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[9]),53);
    bufp->fullQData(oldp+1685,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[10]),53);
    bufp->fullQData(oldp+1687,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[11]),53);
    bufp->fullQData(oldp+1689,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[12]),53);
    bufp->fullQData(oldp+1691,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[13]),53);
    bufp->fullQData(oldp+1693,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[14]),53);
    bufp->fullQData(oldp+1695,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[15]),53);
    bufp->fullQData(oldp+1697,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[16]),53);
    bufp->fullQData(oldp+1699,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[17]),53);
    bufp->fullQData(oldp+1701,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[18]),53);
    bufp->fullQData(oldp+1703,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[19]),53);
    bufp->fullQData(oldp+1705,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[20]),53);
    bufp->fullQData(oldp+1707,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[21]),53);
    bufp->fullQData(oldp+1709,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[22]),53);
    bufp->fullQData(oldp+1711,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[23]),53);
    bufp->fullQData(oldp+1713,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[24]),53);
    bufp->fullQData(oldp+1715,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[25]),53);
    bufp->fullQData(oldp+1717,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[26]),53);
    bufp->fullQData(oldp+1719,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[27]),53);
    bufp->fullQData(oldp+1721,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[28]),53);
    bufp->fullQData(oldp+1723,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[29]),53);
    bufp->fullQData(oldp+1725,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[30]),53);
    bufp->fullQData(oldp+1727,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[31]),53);
    bufp->fullBit(oldp+1729,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_en_pipe_0));
    bufp->fullCData(oldp+1730,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0),5);
    bufp->fullBit(oldp+1731,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[0]));
    bufp->fullBit(oldp+1732,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[1]));
    bufp->fullBit(oldp+1733,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[2]));
    bufp->fullBit(oldp+1734,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[3]));
    bufp->fullBit(oldp+1735,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[4]));
    bufp->fullBit(oldp+1736,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[5]));
    bufp->fullBit(oldp+1737,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[6]));
    bufp->fullBit(oldp+1738,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[7]));
    bufp->fullBit(oldp+1739,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[8]));
    bufp->fullBit(oldp+1740,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[9]));
    bufp->fullBit(oldp+1741,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[10]));
    bufp->fullBit(oldp+1742,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[11]));
    bufp->fullBit(oldp+1743,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[12]));
    bufp->fullBit(oldp+1744,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[13]));
    bufp->fullBit(oldp+1745,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[14]));
    bufp->fullBit(oldp+1746,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[15]));
    bufp->fullBit(oldp+1747,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[16]));
    bufp->fullBit(oldp+1748,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[17]));
    bufp->fullBit(oldp+1749,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[18]));
    bufp->fullBit(oldp+1750,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[19]));
    bufp->fullBit(oldp+1751,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[20]));
    bufp->fullBit(oldp+1752,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[21]));
    bufp->fullBit(oldp+1753,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[22]));
    bufp->fullBit(oldp+1754,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[23]));
    bufp->fullBit(oldp+1755,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[24]));
    bufp->fullBit(oldp+1756,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[25]));
    bufp->fullBit(oldp+1757,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[26]));
    bufp->fullBit(oldp+1758,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[27]));
    bufp->fullBit(oldp+1759,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[28]));
    bufp->fullBit(oldp+1760,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[29]));
    bufp->fullBit(oldp+1761,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[30]));
    bufp->fullBit(oldp+1762,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[31]));
    bufp->fullBit(oldp+1763,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_en_pipe_0));
    bufp->fullCData(oldp+1764,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0),5);
    bufp->fullBit(oldp+1765,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[0]));
    bufp->fullBit(oldp+1766,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[1]));
    bufp->fullBit(oldp+1767,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[2]));
    bufp->fullBit(oldp+1768,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[3]));
    bufp->fullBit(oldp+1769,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[4]));
    bufp->fullBit(oldp+1770,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[5]));
    bufp->fullBit(oldp+1771,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[6]));
    bufp->fullBit(oldp+1772,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[7]));
    bufp->fullBit(oldp+1773,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[8]));
    bufp->fullBit(oldp+1774,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[9]));
    bufp->fullBit(oldp+1775,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[10]));
    bufp->fullBit(oldp+1776,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[11]));
    bufp->fullBit(oldp+1777,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[12]));
    bufp->fullBit(oldp+1778,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[13]));
    bufp->fullBit(oldp+1779,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[14]));
    bufp->fullBit(oldp+1780,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[15]));
    bufp->fullBit(oldp+1781,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[16]));
    bufp->fullBit(oldp+1782,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[17]));
    bufp->fullBit(oldp+1783,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[18]));
    bufp->fullBit(oldp+1784,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[19]));
    bufp->fullBit(oldp+1785,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[20]));
    bufp->fullBit(oldp+1786,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[21]));
    bufp->fullBit(oldp+1787,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[22]));
    bufp->fullBit(oldp+1788,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[23]));
    bufp->fullBit(oldp+1789,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[24]));
    bufp->fullBit(oldp+1790,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[25]));
    bufp->fullBit(oldp+1791,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[26]));
    bufp->fullBit(oldp+1792,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[27]));
    bufp->fullBit(oldp+1793,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[28]));
    bufp->fullBit(oldp+1794,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[29]));
    bufp->fullBit(oldp+1795,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[30]));
    bufp->fullBit(oldp+1796,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[31]));
    bufp->fullBit(oldp+1797,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_en_pipe_0));
    bufp->fullCData(oldp+1798,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_addr_pipe_0),5);
    bufp->fullBit(oldp+1799,(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_0_result));
    bufp->fullBit(oldp+1800,(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_1_result));
    bufp->fullCData(oldp+1801,(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0),4);
    bufp->fullBit(oldp+1802,(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_3));
    bufp->fullCData(oldp+1803,((((7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                  ? 2U : 0U) | ((3U 
                                                 == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                                 ? 2U
                                                 : 0U))),2);
    bufp->fullBit(oldp+1804,((((8U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)) 
                               | (7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))) 
                              | (3U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)))));
    bufp->fullBit(oldp+1805,((vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                              >> 0x1fU)));
    bufp->fullBit(oldp+1806,((1U & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                    >> 0x13U))));
    bufp->fullBit(oldp+1807,((vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                              >> 0x1fU)));
    bufp->fullIData(oldp+1808,(((1U & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
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
    bufp->fullBit(oldp+1809,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_valid));
    bufp->fullBit(oldp+1810,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_rdata_rep_valid));
    bufp->fullQData(oldp+1811,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_rdata_rep_bits_rdata),64);
    bufp->fullBit(oldp+1813,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_rep));
    bufp->fullQData(oldp+1814,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_addr_req_bits_addr),64);
    bufp->fullBit(oldp+1816,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_addr_req_bits_ce));
    bufp->fullBit(oldp+1817,((3U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state))));
    bufp->fullQData(oldp+1818,((((QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0U])))),64);
    bufp->fullBit(oldp+1820,(((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_valid) 
                              & (0U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)))));
    bufp->fullQData(oldp+1821,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_addr),64);
    bufp->fullBit(oldp+1823,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_valid));
    bufp->fullCData(oldp+1824,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_waymask),2);
    bufp->fullWData(oldp+1825,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_wdata),512);
    bufp->fullQData(oldp+1841,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_tag_w_data),53);
    bufp->fullQData(oldp+1843,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1_tag_w_data),53);
    bufp->fullBit(oldp+1845,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0
                             [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0]));
    bufp->fullBit(oldp+1846,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1
                             [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_addr_pipe_0]));
    bufp->fullWData(oldp+1847,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data),512);
    bufp->fullWData(oldp+1863,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data),512);
    bufp->fullQData(oldp+1879,((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                >> 0xbU)),53);
    bufp->fullCData(oldp+1881,((0x1fU & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                 >> 6U)))),5);
    bufp->fullCData(oldp+1882,((0x3fU & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp))),6);
    bufp->fullBit(oldp+1883,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_in_valid_REG));
    bufp->fullBit(oldp+1884,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit));
    bufp->fullWData(oldp+1885,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data),512);
    bufp->fullBit(oldp+1901,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit_way_0));
    bufp->fullBit(oldp+1902,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit_way_1));
    bufp->fullBit(oldp+1903,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[0]));
    bufp->fullBit(oldp+1904,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[1]));
    bufp->fullBit(oldp+1905,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[2]));
    bufp->fullBit(oldp+1906,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[3]));
    bufp->fullBit(oldp+1907,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[4]));
    bufp->fullBit(oldp+1908,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[5]));
    bufp->fullBit(oldp+1909,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[6]));
    bufp->fullBit(oldp+1910,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[7]));
    bufp->fullBit(oldp+1911,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[8]));
    bufp->fullBit(oldp+1912,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[9]));
    bufp->fullBit(oldp+1913,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[10]));
    bufp->fullBit(oldp+1914,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[11]));
    bufp->fullBit(oldp+1915,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[12]));
    bufp->fullBit(oldp+1916,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[13]));
    bufp->fullBit(oldp+1917,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[14]));
    bufp->fullBit(oldp+1918,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[15]));
    bufp->fullBit(oldp+1919,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[16]));
    bufp->fullBit(oldp+1920,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[17]));
    bufp->fullBit(oldp+1921,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[18]));
    bufp->fullBit(oldp+1922,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[19]));
    bufp->fullBit(oldp+1923,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[20]));
    bufp->fullBit(oldp+1924,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[21]));
    bufp->fullBit(oldp+1925,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[22]));
    bufp->fullBit(oldp+1926,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[23]));
    bufp->fullBit(oldp+1927,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[24]));
    bufp->fullBit(oldp+1928,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[25]));
    bufp->fullBit(oldp+1929,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[26]));
    bufp->fullBit(oldp+1930,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[27]));
    bufp->fullBit(oldp+1931,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[28]));
    bufp->fullBit(oldp+1932,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[29]));
    bufp->fullBit(oldp+1933,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[30]));
    bufp->fullBit(oldp+1934,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[31]));
    bufp->fullBit(oldp+1935,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_en_pipe_0));
    bufp->fullCData(oldp+1936,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_addr_pipe_0),5);
    bufp->fullBit(oldp+1937,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_data));
    bufp->fullBit(oldp+1938,(((0U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                              & ((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                 & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit) 
                                    & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit_way_0))))));
    bufp->fullBit(oldp+1939,(((0U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                              & ((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                 & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit) 
                                    & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit_way_1))))));
    bufp->fullBit(oldp+1940,(((0U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                              & ((1U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                 & ((2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                    & ((8U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count)) 
                                       & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_r)))))));
    bufp->fullBit(oldp+1941,(((0U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                              & ((1U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                 & ((2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                    & ((8U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count)) 
                                       & (~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_r))))))));
    bufp->fullBit(oldp+1942,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[0]));
    bufp->fullBit(oldp+1943,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[1]));
    bufp->fullBit(oldp+1944,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[2]));
    bufp->fullBit(oldp+1945,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[3]));
    bufp->fullBit(oldp+1946,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[4]));
    bufp->fullBit(oldp+1947,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[5]));
    bufp->fullBit(oldp+1948,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[6]));
    bufp->fullBit(oldp+1949,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[7]));
    bufp->fullBit(oldp+1950,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[8]));
    bufp->fullBit(oldp+1951,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[9]));
    bufp->fullBit(oldp+1952,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[10]));
    bufp->fullBit(oldp+1953,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[11]));
    bufp->fullBit(oldp+1954,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[12]));
    bufp->fullBit(oldp+1955,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[13]));
    bufp->fullBit(oldp+1956,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[14]));
    bufp->fullBit(oldp+1957,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[15]));
    bufp->fullBit(oldp+1958,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[16]));
    bufp->fullBit(oldp+1959,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[17]));
    bufp->fullBit(oldp+1960,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[18]));
    bufp->fullBit(oldp+1961,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[19]));
    bufp->fullBit(oldp+1962,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[20]));
    bufp->fullBit(oldp+1963,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[21]));
    bufp->fullBit(oldp+1964,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[22]));
    bufp->fullBit(oldp+1965,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[23]));
    bufp->fullBit(oldp+1966,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[24]));
    bufp->fullBit(oldp+1967,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[25]));
    bufp->fullBit(oldp+1968,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[26]));
    bufp->fullBit(oldp+1969,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[27]));
    bufp->fullBit(oldp+1970,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[28]));
    bufp->fullBit(oldp+1971,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[29]));
    bufp->fullBit(oldp+1972,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[30]));
    bufp->fullBit(oldp+1973,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[31]));
    bufp->fullBit(oldp+1974,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0_dirt_w_en_pipe_0));
    bufp->fullBit(oldp+1975,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0
                             [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_addr_pipe_0]));
    bufp->fullBit(oldp+1976,((1U & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__waymask))));
    bufp->fullBit(oldp+1977,(((IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_we) 
                              & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_valid_T_5))));
    bufp->fullBit(oldp+1978,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[0]));
    bufp->fullBit(oldp+1979,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[1]));
    bufp->fullBit(oldp+1980,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[2]));
    bufp->fullBit(oldp+1981,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[3]));
    bufp->fullBit(oldp+1982,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[4]));
    bufp->fullBit(oldp+1983,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[5]));
    bufp->fullBit(oldp+1984,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[6]));
    bufp->fullBit(oldp+1985,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[7]));
    bufp->fullBit(oldp+1986,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[8]));
    bufp->fullBit(oldp+1987,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[9]));
    bufp->fullBit(oldp+1988,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[10]));
    bufp->fullBit(oldp+1989,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[11]));
    bufp->fullBit(oldp+1990,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[12]));
    bufp->fullBit(oldp+1991,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[13]));
    bufp->fullBit(oldp+1992,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[14]));
    bufp->fullBit(oldp+1993,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[15]));
    bufp->fullBit(oldp+1994,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[16]));
    bufp->fullBit(oldp+1995,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[17]));
    bufp->fullBit(oldp+1996,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[18]));
    bufp->fullBit(oldp+1997,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[19]));
    bufp->fullBit(oldp+1998,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[20]));
    bufp->fullBit(oldp+1999,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[21]));
    bufp->fullBit(oldp+2000,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[22]));
    bufp->fullBit(oldp+2001,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[23]));
    bufp->fullBit(oldp+2002,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[24]));
    bufp->fullBit(oldp+2003,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[25]));
    bufp->fullBit(oldp+2004,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[26]));
    bufp->fullBit(oldp+2005,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[27]));
    bufp->fullBit(oldp+2006,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[28]));
    bufp->fullBit(oldp+2007,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[29]));
    bufp->fullBit(oldp+2008,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[30]));
    bufp->fullBit(oldp+2009,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[31]));
    bufp->fullBit(oldp+2010,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1_dirt_w_en_pipe_0));
    bufp->fullBit(oldp+2011,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1
                             [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_addr_pipe_0]));
    bufp->fullBit(oldp+2012,((1U & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__waymask) 
                                    >> 1U))));
    bufp->fullCData(oldp+2013,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state),2);
    bufp->fullWData(oldp+2014,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg),512);
    bufp->fullQData(oldp+2030,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_addr_reg),64);
    bufp->fullBit(oldp+2032,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_r));
    bufp->fullCData(oldp+2033,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count),4);
    bufp->fullBit(oldp+2034,((8U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count))));
    bufp->fullCData(oldp+2035,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count_write),4);
    bufp->fullBit(oldp+2036,((8U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count_write))));
    bufp->fullQData(oldp+2037,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_addr_reg),64);
    bufp->fullWData(oldp+2039,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg),512);
    bufp->fullQData(oldp+2055,(((0U == (7U & (IData)(
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
    bufp->fullQData(oldp+2057,(((0U == (7U & (IData)(
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
    bufp->fullQData(oldp+2059,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask),64);
    bufp->fullQData(oldp+2061,((((QData)((IData)(((
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
    bufp->fullWData(oldp+2063,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo_lo),128);
    bufp->fullQData(oldp+2067,((((QData)((IData)(((
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
    bufp->fullWData(oldp+2069,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo),256);
    bufp->fullQData(oldp+2077,((((QData)((IData)(((
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
    bufp->fullWData(oldp+2079,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi_lo),128);
    bufp->fullQData(oldp+2083,((((QData)((IData)(((
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
    bufp->fullWData(oldp+2085,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi),256);
    bufp->fullWData(oldp+2093,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend),512);
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
    bufp->fullWData(oldp+2109,(__Vtemp_hc2882e76__0),512);
    bufp->fullCData(oldp+2125,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__waymask),2);
    bufp->fullWData(oldp+2126,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[0]),512);
    bufp->fullWData(oldp+2142,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[1]),512);
    bufp->fullWData(oldp+2158,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[2]),512);
    bufp->fullWData(oldp+2174,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[3]),512);
    bufp->fullWData(oldp+2190,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[4]),512);
    bufp->fullWData(oldp+2206,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[5]),512);
    bufp->fullWData(oldp+2222,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[6]),512);
    bufp->fullWData(oldp+2238,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[7]),512);
    bufp->fullWData(oldp+2254,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[8]),512);
    bufp->fullWData(oldp+2270,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[9]),512);
    bufp->fullWData(oldp+2286,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[10]),512);
    bufp->fullWData(oldp+2302,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[11]),512);
    bufp->fullWData(oldp+2318,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[12]),512);
    bufp->fullWData(oldp+2334,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[13]),512);
    bufp->fullWData(oldp+2350,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[14]),512);
    bufp->fullWData(oldp+2366,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[15]),512);
    bufp->fullWData(oldp+2382,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[16]),512);
    bufp->fullWData(oldp+2398,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[17]),512);
    bufp->fullWData(oldp+2414,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[18]),512);
    bufp->fullWData(oldp+2430,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[19]),512);
    bufp->fullWData(oldp+2446,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[20]),512);
    bufp->fullWData(oldp+2462,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[21]),512);
    bufp->fullWData(oldp+2478,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[22]),512);
    bufp->fullWData(oldp+2494,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[23]),512);
    bufp->fullWData(oldp+2510,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[24]),512);
    bufp->fullWData(oldp+2526,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[25]),512);
    bufp->fullWData(oldp+2542,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[26]),512);
    bufp->fullWData(oldp+2558,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[27]),512);
    bufp->fullWData(oldp+2574,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[28]),512);
    bufp->fullWData(oldp+2590,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[29]),512);
    bufp->fullWData(oldp+2606,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[30]),512);
    bufp->fullWData(oldp+2622,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[31]),512);
    bufp->fullBit(oldp+2638,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_en_pipe_0));
    bufp->fullCData(oldp+2639,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0),5);
    bufp->fullCData(oldp+2640,((0x1fU & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_addr 
                                                 >> 6U)))),5);
    bufp->fullBit(oldp+2641,((1U & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_waymask))));
    bufp->fullWData(oldp+2642,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[0]),512);
    bufp->fullWData(oldp+2658,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[1]),512);
    bufp->fullWData(oldp+2674,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[2]),512);
    bufp->fullWData(oldp+2690,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[3]),512);
    bufp->fullWData(oldp+2706,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[4]),512);
    bufp->fullWData(oldp+2722,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[5]),512);
    bufp->fullWData(oldp+2738,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[6]),512);
    bufp->fullWData(oldp+2754,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[7]),512);
    bufp->fullWData(oldp+2770,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[8]),512);
    bufp->fullWData(oldp+2786,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[9]),512);
    bufp->fullWData(oldp+2802,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[10]),512);
    bufp->fullWData(oldp+2818,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[11]),512);
    bufp->fullWData(oldp+2834,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[12]),512);
    bufp->fullWData(oldp+2850,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[13]),512);
    bufp->fullWData(oldp+2866,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[14]),512);
    bufp->fullWData(oldp+2882,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[15]),512);
    bufp->fullWData(oldp+2898,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[16]),512);
    bufp->fullWData(oldp+2914,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[17]),512);
    bufp->fullWData(oldp+2930,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[18]),512);
    bufp->fullWData(oldp+2946,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[19]),512);
    bufp->fullWData(oldp+2962,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[20]),512);
    bufp->fullWData(oldp+2978,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[21]),512);
    bufp->fullWData(oldp+2994,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[22]),512);
    bufp->fullWData(oldp+3010,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[23]),512);
    bufp->fullWData(oldp+3026,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[24]),512);
    bufp->fullWData(oldp+3042,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[25]),512);
    bufp->fullWData(oldp+3058,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[26]),512);
    bufp->fullWData(oldp+3074,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[27]),512);
    bufp->fullWData(oldp+3090,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[28]),512);
    bufp->fullWData(oldp+3106,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[29]),512);
    bufp->fullWData(oldp+3122,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[30]),512);
    bufp->fullWData(oldp+3138,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[31]),512);
    bufp->fullBit(oldp+3154,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_en_pipe_0));
    bufp->fullCData(oldp+3155,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0),5);
    bufp->fullBit(oldp+3156,((1U & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_waymask) 
                                    >> 1U))));
    bufp->fullQData(oldp+3157,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[0]),53);
    bufp->fullQData(oldp+3159,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[1]),53);
    bufp->fullQData(oldp+3161,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[2]),53);
    bufp->fullQData(oldp+3163,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[3]),53);
    bufp->fullQData(oldp+3165,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[4]),53);
    bufp->fullQData(oldp+3167,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[5]),53);
    bufp->fullQData(oldp+3169,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[6]),53);
    bufp->fullQData(oldp+3171,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[7]),53);
    bufp->fullQData(oldp+3173,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[8]),53);
    bufp->fullQData(oldp+3175,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[9]),53);
    bufp->fullQData(oldp+3177,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[10]),53);
    bufp->fullQData(oldp+3179,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[11]),53);
    bufp->fullQData(oldp+3181,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[12]),53);
    bufp->fullQData(oldp+3183,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[13]),53);
    bufp->fullQData(oldp+3185,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[14]),53);
    bufp->fullQData(oldp+3187,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[15]),53);
    bufp->fullQData(oldp+3189,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[16]),53);
    bufp->fullQData(oldp+3191,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[17]),53);
    bufp->fullQData(oldp+3193,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[18]),53);
    bufp->fullQData(oldp+3195,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[19]),53);
    bufp->fullQData(oldp+3197,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[20]),53);
    bufp->fullQData(oldp+3199,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[21]),53);
    bufp->fullQData(oldp+3201,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[22]),53);
    bufp->fullQData(oldp+3203,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[23]),53);
    bufp->fullQData(oldp+3205,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[24]),53);
    bufp->fullQData(oldp+3207,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[25]),53);
    bufp->fullQData(oldp+3209,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[26]),53);
    bufp->fullQData(oldp+3211,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[27]),53);
    bufp->fullQData(oldp+3213,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[28]),53);
    bufp->fullQData(oldp+3215,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[29]),53);
    bufp->fullQData(oldp+3217,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[30]),53);
    bufp->fullQData(oldp+3219,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[31]),53);
    bufp->fullBit(oldp+3221,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_tag_w_en_pipe_0));
    bufp->fullCData(oldp+3222,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_tag_w_addr_pipe_0),5);
    bufp->fullQData(oldp+3223,((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_addr 
                                >> 0xbU)),53);
    bufp->fullQData(oldp+3225,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[0]),53);
    bufp->fullQData(oldp+3227,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[1]),53);
    bufp->fullQData(oldp+3229,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[2]),53);
    bufp->fullQData(oldp+3231,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[3]),53);
    bufp->fullQData(oldp+3233,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[4]),53);
    bufp->fullQData(oldp+3235,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[5]),53);
    bufp->fullQData(oldp+3237,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[6]),53);
    bufp->fullQData(oldp+3239,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[7]),53);
    bufp->fullQData(oldp+3241,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[8]),53);
    bufp->fullQData(oldp+3243,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[9]),53);
    bufp->fullQData(oldp+3245,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[10]),53);
    bufp->fullQData(oldp+3247,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[11]),53);
    bufp->fullQData(oldp+3249,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[12]),53);
    bufp->fullQData(oldp+3251,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[13]),53);
    bufp->fullQData(oldp+3253,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[14]),53);
    bufp->fullQData(oldp+3255,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[15]),53);
    bufp->fullQData(oldp+3257,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[16]),53);
    bufp->fullQData(oldp+3259,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[17]),53);
    bufp->fullQData(oldp+3261,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[18]),53);
    bufp->fullQData(oldp+3263,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[19]),53);
    bufp->fullQData(oldp+3265,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[20]),53);
    bufp->fullQData(oldp+3267,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[21]),53);
    bufp->fullQData(oldp+3269,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[22]),53);
    bufp->fullQData(oldp+3271,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[23]),53);
    bufp->fullQData(oldp+3273,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[24]),53);
    bufp->fullQData(oldp+3275,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[25]),53);
    bufp->fullQData(oldp+3277,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[26]),53);
    bufp->fullQData(oldp+3279,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[27]),53);
    bufp->fullQData(oldp+3281,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[28]),53);
    bufp->fullQData(oldp+3283,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[29]),53);
    bufp->fullQData(oldp+3285,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[30]),53);
    bufp->fullQData(oldp+3287,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[31]),53);
    bufp->fullBit(oldp+3289,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1_tag_w_en_pipe_0));
    bufp->fullCData(oldp+3290,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0),5);
    bufp->fullBit(oldp+3291,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[0]));
    bufp->fullBit(oldp+3292,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[1]));
    bufp->fullBit(oldp+3293,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[2]));
    bufp->fullBit(oldp+3294,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[3]));
    bufp->fullBit(oldp+3295,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[4]));
    bufp->fullBit(oldp+3296,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[5]));
    bufp->fullBit(oldp+3297,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[6]));
    bufp->fullBit(oldp+3298,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[7]));
    bufp->fullBit(oldp+3299,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[8]));
    bufp->fullBit(oldp+3300,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[9]));
    bufp->fullBit(oldp+3301,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[10]));
    bufp->fullBit(oldp+3302,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[11]));
    bufp->fullBit(oldp+3303,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[12]));
    bufp->fullBit(oldp+3304,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[13]));
    bufp->fullBit(oldp+3305,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[14]));
    bufp->fullBit(oldp+3306,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[15]));
    bufp->fullBit(oldp+3307,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[16]));
    bufp->fullBit(oldp+3308,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[17]));
    bufp->fullBit(oldp+3309,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[18]));
    bufp->fullBit(oldp+3310,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[19]));
    bufp->fullBit(oldp+3311,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[20]));
    bufp->fullBit(oldp+3312,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[21]));
    bufp->fullBit(oldp+3313,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[22]));
    bufp->fullBit(oldp+3314,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[23]));
    bufp->fullBit(oldp+3315,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[24]));
    bufp->fullBit(oldp+3316,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[25]));
    bufp->fullBit(oldp+3317,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[26]));
    bufp->fullBit(oldp+3318,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[27]));
    bufp->fullBit(oldp+3319,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[28]));
    bufp->fullBit(oldp+3320,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[29]));
    bufp->fullBit(oldp+3321,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[30]));
    bufp->fullBit(oldp+3322,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[31]));
    bufp->fullBit(oldp+3323,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_en_pipe_0));
    bufp->fullCData(oldp+3324,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0),5);
    bufp->fullBit(oldp+3325,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[0]));
    bufp->fullBit(oldp+3326,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[1]));
    bufp->fullBit(oldp+3327,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[2]));
    bufp->fullBit(oldp+3328,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[3]));
    bufp->fullBit(oldp+3329,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[4]));
    bufp->fullBit(oldp+3330,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[5]));
    bufp->fullBit(oldp+3331,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[6]));
    bufp->fullBit(oldp+3332,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[7]));
    bufp->fullBit(oldp+3333,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[8]));
    bufp->fullBit(oldp+3334,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[9]));
    bufp->fullBit(oldp+3335,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[10]));
    bufp->fullBit(oldp+3336,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[11]));
    bufp->fullBit(oldp+3337,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[12]));
    bufp->fullBit(oldp+3338,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[13]));
    bufp->fullBit(oldp+3339,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[14]));
    bufp->fullBit(oldp+3340,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[15]));
    bufp->fullBit(oldp+3341,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[16]));
    bufp->fullBit(oldp+3342,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[17]));
    bufp->fullBit(oldp+3343,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[18]));
    bufp->fullBit(oldp+3344,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[19]));
    bufp->fullBit(oldp+3345,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[20]));
    bufp->fullBit(oldp+3346,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[21]));
    bufp->fullBit(oldp+3347,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[22]));
    bufp->fullBit(oldp+3348,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[23]));
    bufp->fullBit(oldp+3349,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[24]));
    bufp->fullBit(oldp+3350,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[25]));
    bufp->fullBit(oldp+3351,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[26]));
    bufp->fullBit(oldp+3352,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[27]));
    bufp->fullBit(oldp+3353,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[28]));
    bufp->fullBit(oldp+3354,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[29]));
    bufp->fullBit(oldp+3355,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[30]));
    bufp->fullBit(oldp+3356,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[31]));
    bufp->fullBit(oldp+3357,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_en_pipe_0));
    bufp->fullCData(oldp+3358,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_addr_pipe_0),5);
    bufp->fullBit(oldp+3359,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_0_result));
    bufp->fullBit(oldp+3360,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_1_result));
    bufp->fullBit(oldp+3361,((((IData)(vlSelf->CoreTop__DOT__EX__DOT__branch_flag) 
                               & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_inst_valid)) 
                              & (IData)(vlSelf->CoreTop__DOT__valid_1))));
    bufp->fullQData(oldp+3362,(((0x19U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                 ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1
                                 : vlSelf->CoreTop__DOT__EX__DOT___GEN_289)),64);
    bufp->fullIData(oldp+3364,(((IData)(vlSelf->CoreTop__DOT__EX_io_is_flush)
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
    bufp->fullQData(oldp+3365,(((((IData)(vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfWen) 
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
    bufp->fullQData(oldp+3367,(((((IData)(vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfWen) 
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
    bufp->fullBit(oldp+3369,((1U & (~ (((0U == ((0x13U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                 ? 0x40U
                                                 : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_316))) 
                                        | (IData)(vlSelf->CoreTop__DOT__EX_io_is_flush)) 
                                       | (~ (IData)(vlSelf->CoreTop__DOT__valid)))))));
    bufp->fullQData(oldp+3370,(((0U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src1Type))
                                 ? vlSelf->CoreTop__DOT__mem_bypass_io_Bypass_REG1
                                 : vlSelf->CoreTop__DOT__EX__DOT___GEN_1)),64);
    bufp->fullQData(oldp+3372,(((0U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src2Type))
                                 ? vlSelf->CoreTop__DOT__mem_bypass_io_Bypass_REG2
                                 : vlSelf->CoreTop__DOT__EX__DOT___GEN_3)),64);
    bufp->fullQData(oldp+3374,(((IData)(vlSelf->CoreTop__DOT__EX__DOT__is_mul)
                                 ? vlSelf->CoreTop__DOT__EX__DOT__src1
                                 : (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__src1)))),64);
    bufp->fullQData(oldp+3376,(((IData)(vlSelf->CoreTop__DOT__EX__DOT__is_mul)
                                 ? vlSelf->CoreTop__DOT__EX__DOT__src2
                                 : (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)))),64);
    bufp->fullQData(oldp+3378,(((0x40U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
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
    bufp->fullQData(oldp+3380,(((0x6aU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
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
    bufp->fullQData(oldp+3382,((((QData)((IData)(((0x6eU 
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
    bufp->fullQData(oldp+3384,((((((0U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
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
    bufp->fullQData(oldp+3386,((((((0U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
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
    bufp->fullQData(oldp+3388,(((0x45U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
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
    bufp->fullBit(oldp+3390,(vlSelf->CoreTop__DOT__ICACHE_io_in_rdata_rep_valid));
    bufp->fullBit(oldp+3391,(vlSelf->CoreTop__DOT__EX_io_is_flush));
    bufp->fullQData(oldp+3392,(vlSelf->CoreTop__DOT__mem_bypass_io_Bypass_REG1),64);
    bufp->fullQData(oldp+3394,(vlSelf->CoreTop__DOT__mem_bypass_io_Bypass_REG2),64);
    bufp->fullQData(oldp+3396,(vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfData),64);
    bufp->fullQData(oldp+3398,(vlSelf->CoreTop__DOT__mem_rdata),64);
    bufp->fullQData(oldp+3400,(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfData),64);
    bufp->fullQData(oldp+3402,(vlSelf->CoreTop__DOT__MMIO_io_in_rdata_rep_bits_rdata),64);
    bufp->fullQData(oldp+3404,(vlSelf->CoreTop__DOT__IFMEM_rdata),64);
    bufp->fullQData(oldp+3406,(vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src1),64);
    bufp->fullQData(oldp+3408,(vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src2),64);
    bufp->fullQData(oldp+3410,(vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_quotient),64);
    bufp->fullQData(oldp+3412,(vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_remainder),64);
    bufp->fullQData(oldp+3414,(vlSelf->CoreTop__DOT__EX__DOT__src1),64);
    bufp->fullQData(oldp+3416,(vlSelf->CoreTop__DOT__EX__DOT__src2),64);
    bufp->fullBit(oldp+3418,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1 
                                            >> 0x1fU)))));
    bufp->fullBit(oldp+3419,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_quotient 
                                            >> 0x1fU)))));
    bufp->fullBit(oldp+3420,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_remainder 
                                            >> 0x1fU)))));
    bufp->fullBit(oldp+3421,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_10 
                                            >> 0x1fU)))));
    bufp->fullBit(oldp+3422,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_5[0U] 
                              >> 0x1fU)));
    bufp->fullBit(oldp+3423,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_16[0U] 
                              >> 0x1fU)));
    bufp->fullBit(oldp+3424,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_25 
                              >> 0x1fU)));
    bufp->fullBit(oldp+3425,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_31 
                              >> 0x1fU)));
    bufp->fullBit(oldp+3426,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__src1 
                                            >> 0x1fU)))));
    bufp->fullBit(oldp+3427,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__src2 
                                            >> 0x1fU)))));
    bufp->fullBit(oldp+3428,(vlSelf->CoreTop__DOT__EX__DOT__branch_flag));
    bufp->fullBit(oldp+3429,((1U & (IData)((vlSelf->CoreTop__DOT__MMIO_io_in_rdata_rep_bits_rdata 
                                            >> 0x3fU)))));
    bufp->fullBit(oldp+3430,((1U & (IData)((vlSelf->CoreTop__DOT__MMIO_io_in_rdata_rep_bits_rdata 
                                            >> 0x1fU)))));
    bufp->fullBit(oldp+3431,((1U & ((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_27) 
                                    >> 7U))));
    bufp->fullBit(oldp+3432,((1U & ((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_44) 
                                    >> 0xfU))));
    bufp->fullBit(oldp+3433,(vlSelf->clock));
    bufp->fullBit(oldp+3434,(vlSelf->reset));
    bufp->fullQData(oldp+3435,(vlSelf->io_pc),64);
    bufp->fullIData(oldp+3437,(vlSelf->io_inst),32);
    bufp->fullBit(oldp+3438,(1U));
    bufp->fullCData(oldp+3439,(0U),5);
    bufp->fullCData(oldp+3440,(1U),5);
    bufp->fullCData(oldp+3441,(2U),5);
    bufp->fullCData(oldp+3442,(3U),5);
    bufp->fullCData(oldp+3443,(4U),5);
    bufp->fullCData(oldp+3444,(5U),5);
    bufp->fullCData(oldp+3445,(6U),5);
    bufp->fullCData(oldp+3446,(7U),5);
    bufp->fullCData(oldp+3447,(8U),5);
    bufp->fullCData(oldp+3448,(9U),5);
    bufp->fullCData(oldp+3449,(0xaU),5);
    bufp->fullCData(oldp+3450,(0xbU),5);
    bufp->fullCData(oldp+3451,(0xcU),5);
    bufp->fullCData(oldp+3452,(0xdU),5);
    bufp->fullCData(oldp+3453,(0xeU),5);
    bufp->fullCData(oldp+3454,(0xfU),5);
    bufp->fullCData(oldp+3455,(0x10U),5);
    bufp->fullCData(oldp+3456,(0x11U),5);
    bufp->fullCData(oldp+3457,(0x12U),5);
    bufp->fullCData(oldp+3458,(0x13U),5);
    bufp->fullCData(oldp+3459,(0x14U),5);
    bufp->fullCData(oldp+3460,(0x15U),5);
    bufp->fullCData(oldp+3461,(0x16U),5);
    bufp->fullCData(oldp+3462,(0x17U),5);
    bufp->fullCData(oldp+3463,(0x18U),5);
    bufp->fullCData(oldp+3464,(0x19U),5);
    bufp->fullCData(oldp+3465,(0x1aU),5);
    bufp->fullCData(oldp+3466,(0x1bU),5);
    bufp->fullCData(oldp+3467,(0x1cU),5);
    bufp->fullCData(oldp+3468,(0x1dU),5);
    bufp->fullCData(oldp+3469,(0x1eU),5);
    bufp->fullCData(oldp+3470,(0x1fU),5);
    bufp->fullBit(oldp+3471,(0U));
    bufp->fullQData(oldp+3472,(0ULL),64);
    bufp->fullCData(oldp+3474,(0U),8);
}
