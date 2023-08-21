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
    tracep->declBit(c+3695,"clock", false,-1);
    tracep->declBit(c+3696,"reset", false,-1);
    tracep->declQuad(c+3697,"io_pc", false,-1, 63,0);
    tracep->declBus(c+3699,"io_inst", false,-1, 31,0);
    tracep->pushNamePrefix("CoreTop ");
    tracep->declBit(c+3695,"clock", false,-1);
    tracep->declBit(c+3696,"reset", false,-1);
    tracep->declQuad(c+3697,"io_pc", false,-1, 63,0);
    tracep->declBus(c+3699,"io_inst", false,-1, 31,0);
    tracep->declBit(c+3695,"IF_clock", false,-1);
    tracep->declBit(c+3696,"IF_reset", false,-1);
    tracep->declBit(c+17,"IF_io_branch_io_is_branch", false,-1);
    tracep->declBit(c+18,"IF_io_branch_io_is_jump", false,-1);
    tracep->declQuad(c+19,"IF_io_branch_io_dnpc", false,-1, 63,0);
    tracep->declBit(c+21,"IF_io_cache_req_addr_req_valid", false,-1);
    tracep->declQuad(c+3697,"IF_io_cache_req_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+22,"IF_io_cache_req_rdata_rep_ready", false,-1);
    tracep->declBit(c+23,"IF_io_cache_req_rdata_rep_valid", false,-1);
    tracep->declQuad(c+24,"IF_io_cache_req_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+22,"IF_io_out_ready", false,-1);
    tracep->declBit(c+23,"IF_io_out_valid", false,-1);
    tracep->declQuad(c+3697,"IF_io_out_bits_PC", false,-1, 63,0);
    tracep->declBus(c+26,"IF_io_out_bits_Inst", false,-1, 31,0);
    tracep->declBit(c+27,"IF_io_flush", false,-1);
    tracep->declBit(c+28,"IF_io_mret_flush", false,-1);
    tracep->declBit(c+29,"IF_io_excp_flush", false,-1);
    tracep->declQuad(c+30,"IF_io_mtvec", false,-1, 63,0);
    tracep->declQuad(c+32,"IF_io_mret", false,-1, 63,0);
    tracep->declBit(c+34,"IF_io_wb_stall", false,-1);
    tracep->declBit(c+35,"IF_io_ex_stall", false,-1);
    tracep->declBit(c+36,"ID_io_in_valid", false,-1);
    tracep->declQuad(c+37,"ID_io_in_bits_PC", false,-1, 63,0);
    tracep->declBus(c+39,"ID_io_in_bits_Inst", false,-1, 31,0);
    tracep->declQuad(c+1,"ID_io_REG1", false,-1, 63,0);
    tracep->declQuad(c+3,"ID_io_REG2", false,-1, 63,0);
    tracep->declBit(c+27,"ID_io_flush", false,-1);
    tracep->declBit(c+40,"ID_io_ex_is_mem", false,-1);
    tracep->declBus(c+41,"ID_io_ex_reg_rfDest", false,-1, 4,0);
    tracep->declBit(c+42,"ID_io_ex_reg_rfWen", false,-1);
    tracep->declBit(c+43,"ID_io_out_ready", false,-1);
    tracep->declBit(c+44,"ID_io_out_valid", false,-1);
    tracep->declBus(c+45,"ID_io_out_bits_ctrl_signal_src1Type", false,-1, 2,0);
    tracep->declBus(c+46,"ID_io_out_bits_ctrl_signal_src2Type", false,-1, 2,0);
    tracep->declBus(c+47,"ID_io_out_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+48,"ID_io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBus(c+49,"ID_io_out_bits_ctrl_signal_rfSrc1", false,-1, 4,0);
    tracep->declBus(c+50,"ID_io_out_bits_ctrl_signal_rfSrc2", false,-1, 4,0);
    tracep->declBit(c+51,"ID_io_out_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+52,"ID_io_out_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declBus(c+53,"ID_io_out_bits_ctrl_signal_rfDest", false,-1, 4,0);
    tracep->declBit(c+54,"ID_io_out_bits_ctrl_signal_ertn_flush", false,-1);
    tracep->declBit(c+55,"ID_io_out_bits_ctrl_signal_excp_flush", false,-1);
    tracep->declQuad(c+1,"ID_io_out_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+3,"ID_io_out_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+56,"ID_io_out_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declQuad(c+37,"ID_io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+39,"ID_io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declBus(c+58,"ID_io_out_bits_ctrl_csr_csr_idx", false,-1, 11,0);
    tracep->declBit(c+3695,"EX_clock", false,-1);
    tracep->declBit(c+3696,"EX_reset", false,-1);
    tracep->declBit(c+43,"EX_io_in_ready", false,-1);
    tracep->declBit(c+59,"EX_io_in_valid", false,-1);
    tracep->declBus(c+60,"EX_io_in_bits_ctrl_signal_src1Type", false,-1, 2,0);
    tracep->declBus(c+61,"EX_io_in_bits_ctrl_signal_src2Type", false,-1, 2,0);
    tracep->declBus(c+62,"EX_io_in_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+63,"EX_io_in_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+64,"EX_io_in_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+65,"EX_io_in_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declBus(c+41,"EX_io_in_bits_ctrl_signal_rfDest", false,-1, 4,0);
    tracep->declBit(c+66,"EX_io_in_bits_ctrl_signal_ertn_flush", false,-1);
    tracep->declBit(c+67,"EX_io_in_bits_ctrl_signal_excp_flush", false,-1);
    tracep->declQuad(c+68,"EX_io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+70,"EX_io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+72,"EX_io_in_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declQuad(c+74,"EX_io_in_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+76,"EX_io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declBus(c+77,"EX_io_in_bits_ctrl_csr_csr_idx", false,-1, 11,0);
    tracep->declBit(c+40,"EX_io_is_mem", false,-1);
    tracep->declBit(c+17,"EX_io_branchIO_is_branch", false,-1);
    tracep->declBit(c+18,"EX_io_branchIO_is_jump", false,-1);
    tracep->declQuad(c+19,"EX_io_branchIO_dnpc", false,-1, 63,0);
    tracep->declBit(c+78,"EX_io_out_ready", false,-1);
    tracep->declBit(c+79,"EX_io_out_valid", false,-1);
    tracep->declBus(c+62,"EX_io_out_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+63,"EX_io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+64,"EX_io_out_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+65,"EX_io_out_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declBit(c+66,"EX_io_out_bits_ctrl_signal_ertn_flush", false,-1);
    tracep->declBit(c+67,"EX_io_out_bits_ctrl_signal_excp_flush", false,-1);
    tracep->declQuad(c+74,"EX_io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+76,"EX_io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+19,"EX_io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+41,"EX_io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+42,"EX_io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+80,"EX_io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+82,"EX_io_out_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+84,"EX_io_out_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+72,"EX_io_out_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declQuad(c+86,"EX_io_out_bits_ctrl_csr_csr_data", false,-1, 63,0);
    tracep->declBit(c+88,"EX_io_out_bits_ctrl_csr_csr_en", false,-1);
    tracep->declBus(c+89,"EX_io_out_bits_ctrl_csr_csr_idx", false,-1, 11,0);
    tracep->declBit(c+90,"EX_io_is_break", false,-1);
    tracep->declBit(c+27,"EX_io_is_flush", false,-1);
    tracep->declBit(c+91,"EX_io_icache_busy", false,-1);
    tracep->declQuad(c+92,"EX_io_csr_rd_io_rd_data", false,-1, 63,0);
    tracep->declBus(c+89,"EX_io_csr_rd_io_csr_addr", false,-1, 11,0);
    tracep->declBit(c+35,"EX_io_stall", false,-1);
    tracep->declBit(c+94,"DIP_is_break", false,-1);
    tracep->declQuad(c+95,"DIP_rf_0", false,-1, 63,0);
    tracep->declQuad(c+97,"DIP_rf_1", false,-1, 63,0);
    tracep->declQuad(c+99,"DIP_rf_2", false,-1, 63,0);
    tracep->declQuad(c+101,"DIP_rf_3", false,-1, 63,0);
    tracep->declQuad(c+103,"DIP_rf_4", false,-1, 63,0);
    tracep->declQuad(c+105,"DIP_rf_5", false,-1, 63,0);
    tracep->declQuad(c+107,"DIP_rf_6", false,-1, 63,0);
    tracep->declQuad(c+109,"DIP_rf_7", false,-1, 63,0);
    tracep->declQuad(c+111,"DIP_rf_8", false,-1, 63,0);
    tracep->declQuad(c+113,"DIP_rf_9", false,-1, 63,0);
    tracep->declQuad(c+115,"DIP_rf_10", false,-1, 63,0);
    tracep->declQuad(c+117,"DIP_rf_11", false,-1, 63,0);
    tracep->declQuad(c+119,"DIP_rf_12", false,-1, 63,0);
    tracep->declQuad(c+121,"DIP_rf_13", false,-1, 63,0);
    tracep->declQuad(c+123,"DIP_rf_14", false,-1, 63,0);
    tracep->declQuad(c+125,"DIP_rf_15", false,-1, 63,0);
    tracep->declQuad(c+127,"DIP_rf_16", false,-1, 63,0);
    tracep->declQuad(c+129,"DIP_rf_17", false,-1, 63,0);
    tracep->declQuad(c+131,"DIP_rf_18", false,-1, 63,0);
    tracep->declQuad(c+133,"DIP_rf_19", false,-1, 63,0);
    tracep->declQuad(c+135,"DIP_rf_20", false,-1, 63,0);
    tracep->declQuad(c+137,"DIP_rf_21", false,-1, 63,0);
    tracep->declQuad(c+139,"DIP_rf_22", false,-1, 63,0);
    tracep->declQuad(c+141,"DIP_rf_23", false,-1, 63,0);
    tracep->declQuad(c+143,"DIP_rf_24", false,-1, 63,0);
    tracep->declQuad(c+145,"DIP_rf_25", false,-1, 63,0);
    tracep->declQuad(c+147,"DIP_rf_26", false,-1, 63,0);
    tracep->declQuad(c+149,"DIP_rf_27", false,-1, 63,0);
    tracep->declQuad(c+151,"DIP_rf_28", false,-1, 63,0);
    tracep->declQuad(c+153,"DIP_rf_29", false,-1, 63,0);
    tracep->declQuad(c+155,"DIP_rf_30", false,-1, 63,0);
    tracep->declQuad(c+157,"DIP_rf_31", false,-1, 63,0);
    tracep->declBus(c+159,"DIP_inst", false,-1, 31,0);
    tracep->declQuad(c+160,"DIP_pc", false,-1, 63,0);
    tracep->declBit(c+162,"DIP_inst_valid", false,-1);
    tracep->declQuad(c+163,"DIP_dnpc", false,-1, 63,0);
    tracep->declBit(c+165,"DIP_is_skip", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+166+i*2,"rf", true,(i+0), 63,0);
    }
    tracep->declBit(c+3700,"rf_bypass_io_Reg1_MPORT_en", false,-1);
    tracep->declBus(c+49,"rf_bypass_io_Reg1_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+230,"rf_bypass_io_Reg1_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3700,"rf_bypass_io_Reg2_MPORT_en", false,-1);
    tracep->declBus(c+50,"rf_bypass_io_Reg2_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+232,"rf_bypass_io_Reg2_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3700,"rf_DIP_io_rf_0_MPORT_en", false,-1);
    tracep->declBus(c+3701,"rf_DIP_io_rf_0_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+95,"rf_DIP_io_rf_0_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3700,"rf_DIP_io_rf_1_MPORT_en", false,-1);
    tracep->declBus(c+3702,"rf_DIP_io_rf_1_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+97,"rf_DIP_io_rf_1_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3700,"rf_DIP_io_rf_2_MPORT_en", false,-1);
    tracep->declBus(c+3703,"rf_DIP_io_rf_2_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+99,"rf_DIP_io_rf_2_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3700,"rf_DIP_io_rf_3_MPORT_en", false,-1);
    tracep->declBus(c+3704,"rf_DIP_io_rf_3_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+101,"rf_DIP_io_rf_3_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3700,"rf_DIP_io_rf_4_MPORT_en", false,-1);
    tracep->declBus(c+3705,"rf_DIP_io_rf_4_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+103,"rf_DIP_io_rf_4_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3700,"rf_DIP_io_rf_5_MPORT_en", false,-1);
    tracep->declBus(c+3706,"rf_DIP_io_rf_5_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+105,"rf_DIP_io_rf_5_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3700,"rf_DIP_io_rf_6_MPORT_en", false,-1);
    tracep->declBus(c+3707,"rf_DIP_io_rf_6_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+107,"rf_DIP_io_rf_6_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3700,"rf_DIP_io_rf_7_MPORT_en", false,-1);
    tracep->declBus(c+3708,"rf_DIP_io_rf_7_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+109,"rf_DIP_io_rf_7_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3700,"rf_DIP_io_rf_8_MPORT_en", false,-1);
    tracep->declBus(c+3709,"rf_DIP_io_rf_8_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+111,"rf_DIP_io_rf_8_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3700,"rf_DIP_io_rf_9_MPORT_en", false,-1);
    tracep->declBus(c+3710,"rf_DIP_io_rf_9_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+113,"rf_DIP_io_rf_9_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3700,"rf_DIP_io_rf_10_MPORT_en", false,-1);
    tracep->declBus(c+3711,"rf_DIP_io_rf_10_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+115,"rf_DIP_io_rf_10_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3700,"rf_DIP_io_rf_11_MPORT_en", false,-1);
    tracep->declBus(c+3712,"rf_DIP_io_rf_11_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+117,"rf_DIP_io_rf_11_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3700,"rf_DIP_io_rf_12_MPORT_en", false,-1);
    tracep->declBus(c+3713,"rf_DIP_io_rf_12_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+119,"rf_DIP_io_rf_12_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3700,"rf_DIP_io_rf_13_MPORT_en", false,-1);
    tracep->declBus(c+3714,"rf_DIP_io_rf_13_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+121,"rf_DIP_io_rf_13_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3700,"rf_DIP_io_rf_14_MPORT_en", false,-1);
    tracep->declBus(c+3715,"rf_DIP_io_rf_14_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+123,"rf_DIP_io_rf_14_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3700,"rf_DIP_io_rf_15_MPORT_en", false,-1);
    tracep->declBus(c+3716,"rf_DIP_io_rf_15_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+125,"rf_DIP_io_rf_15_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3700,"rf_DIP_io_rf_16_MPORT_en", false,-1);
    tracep->declBus(c+3717,"rf_DIP_io_rf_16_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+127,"rf_DIP_io_rf_16_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3700,"rf_DIP_io_rf_17_MPORT_en", false,-1);
    tracep->declBus(c+3718,"rf_DIP_io_rf_17_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+129,"rf_DIP_io_rf_17_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3700,"rf_DIP_io_rf_18_MPORT_en", false,-1);
    tracep->declBus(c+3719,"rf_DIP_io_rf_18_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+131,"rf_DIP_io_rf_18_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3700,"rf_DIP_io_rf_19_MPORT_en", false,-1);
    tracep->declBus(c+3720,"rf_DIP_io_rf_19_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+133,"rf_DIP_io_rf_19_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3700,"rf_DIP_io_rf_20_MPORT_en", false,-1);
    tracep->declBus(c+3721,"rf_DIP_io_rf_20_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+135,"rf_DIP_io_rf_20_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3700,"rf_DIP_io_rf_21_MPORT_en", false,-1);
    tracep->declBus(c+3722,"rf_DIP_io_rf_21_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+137,"rf_DIP_io_rf_21_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3700,"rf_DIP_io_rf_22_MPORT_en", false,-1);
    tracep->declBus(c+3723,"rf_DIP_io_rf_22_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+139,"rf_DIP_io_rf_22_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3700,"rf_DIP_io_rf_23_MPORT_en", false,-1);
    tracep->declBus(c+3724,"rf_DIP_io_rf_23_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+141,"rf_DIP_io_rf_23_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3700,"rf_DIP_io_rf_24_MPORT_en", false,-1);
    tracep->declBus(c+3725,"rf_DIP_io_rf_24_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+143,"rf_DIP_io_rf_24_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3700,"rf_DIP_io_rf_25_MPORT_en", false,-1);
    tracep->declBus(c+3726,"rf_DIP_io_rf_25_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+145,"rf_DIP_io_rf_25_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3700,"rf_DIP_io_rf_26_MPORT_en", false,-1);
    tracep->declBus(c+3727,"rf_DIP_io_rf_26_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+147,"rf_DIP_io_rf_26_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3700,"rf_DIP_io_rf_27_MPORT_en", false,-1);
    tracep->declBus(c+3728,"rf_DIP_io_rf_27_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+149,"rf_DIP_io_rf_27_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3700,"rf_DIP_io_rf_28_MPORT_en", false,-1);
    tracep->declBus(c+3729,"rf_DIP_io_rf_28_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+151,"rf_DIP_io_rf_28_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3700,"rf_DIP_io_rf_29_MPORT_en", false,-1);
    tracep->declBus(c+3730,"rf_DIP_io_rf_29_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+153,"rf_DIP_io_rf_29_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3700,"rf_DIP_io_rf_30_MPORT_en", false,-1);
    tracep->declBus(c+3731,"rf_DIP_io_rf_30_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+155,"rf_DIP_io_rf_30_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3700,"rf_DIP_io_rf_31_MPORT_en", false,-1);
    tracep->declBus(c+3732,"rf_DIP_io_rf_31_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+157,"rf_DIP_io_rf_31_MPORT_data", false,-1, 63,0);
    tracep->declQuad(c+234,"rf_MPORT_data", false,-1, 63,0);
    tracep->declBus(c+236,"rf_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+3700,"rf_MPORT_mask", false,-1);
    tracep->declBit(c+237,"rf_MPORT_en", false,-1);
    tracep->declBit(c+78,"MEM_io_in_ready", false,-1);
    tracep->declBit(c+238,"MEM_io_in_valid", false,-1);
    tracep->declBus(c+239,"MEM_io_in_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+240,"MEM_io_in_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+241,"MEM_io_in_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+242,"MEM_io_in_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declBit(c+243,"MEM_io_in_bits_ctrl_signal_ertn_flush", false,-1);
    tracep->declBit(c+244,"MEM_io_in_bits_ctrl_signal_excp_flush", false,-1);
    tracep->declQuad(c+245,"MEM_io_in_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+247,"MEM_io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+248,"MEM_io_in_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+250,"MEM_io_in_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declQuad(c+251,"MEM_io_in_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+253,"MEM_io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+255,"MEM_io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+257,"MEM_io_in_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declQuad(c+259,"MEM_io_in_bits_ctrl_csr_csr_data", false,-1, 63,0);
    tracep->declBit(c+261,"MEM_io_in_bits_ctrl_csr_csr_en", false,-1);
    tracep->declBus(c+262,"MEM_io_in_bits_ctrl_csr_csr_idx", false,-1, 11,0);
    tracep->declBit(c+263,"MEM_io_out_ready", false,-1);
    tracep->declBit(c+264,"MEM_io_out_valid", false,-1);
    tracep->declBit(c+265,"MEM_io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+241,"MEM_io_out_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBit(c+243,"MEM_io_out_bits_ctrl_signal_ertn_flush", false,-1);
    tracep->declBit(c+244,"MEM_io_out_bits_ctrl_signal_excp_flush", false,-1);
    tracep->declQuad(c+245,"MEM_io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+247,"MEM_io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+248,"MEM_io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBit(c+266,"MEM_io_out_bits_ctrl_flow_skip", false,-1);
    tracep->declBus(c+250,"MEM_io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+267,"MEM_io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+5,"MEM_io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+259,"MEM_io_out_bits_ctrl_csr_csr_data", false,-1, 63,0);
    tracep->declBit(c+268,"MEM_io_out_bits_ctrl_csr_csr_en", false,-1);
    tracep->declBus(c+262,"MEM_io_out_bits_ctrl_csr_csr_idx", false,-1, 11,0);
    tracep->declBit(c+269,"MEM_io_cache_io_addr_req_valid", false,-1);
    tracep->declQuad(c+270,"MEM_io_cache_io_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+269,"MEM_io_cache_io_addr_req_bits_ce", false,-1);
    tracep->declBit(c+272,"MEM_io_cache_io_addr_req_bits_we", false,-1);
    tracep->declBit(c+273,"MEM_io_cache_io_rdata_rep_valid", false,-1);
    tracep->declQuad(c+7,"MEM_io_cache_io_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+274,"MEM_io_cache_io_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+276,"MEM_io_cache_io_wdata_req_bits_wmask", false,-1, 7,0);
    tracep->declBit(c+277,"MEM_io_cache_io_wdata_rep", false,-1);
    tracep->declBit(c+263,"WB_io_in_ready", false,-1);
    tracep->declBit(c+278,"WB_io_in_valid", false,-1);
    tracep->declBit(c+279,"WB_io_in_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+280,"WB_io_in_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBit(c+281,"WB_io_in_bits_ctrl_signal_ertn_flush", false,-1);
    tracep->declBit(c+282,"WB_io_in_bits_ctrl_signal_excp_flush", false,-1);
    tracep->declQuad(c+283,"WB_io_in_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+3699,"WB_io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+285,"WB_io_in_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBit(c+287,"WB_io_in_bits_ctrl_flow_skip", false,-1);
    tracep->declBus(c+236,"WB_io_in_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declQuad(c+288,"WB_io_in_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+290,"WB_io_in_bits_ctrl_csr_csr_data", false,-1, 63,0);
    tracep->declBit(c+292,"WB_io_in_bits_ctrl_csr_csr_en", false,-1);
    tracep->declBus(c+293,"WB_io_in_bits_ctrl_csr_csr_idx", false,-1, 11,0);
    tracep->declBit(c+3700,"WB_io_out_ready", false,-1);
    tracep->declBit(c+294,"WB_io_out_valid", false,-1);
    tracep->declBit(c+295,"WB_io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+28,"WB_io_out_bits_ctrl_signal_ertn_flush", false,-1);
    tracep->declBit(c+29,"WB_io_out_bits_ctrl_signal_excp_flush", false,-1);
    tracep->declQuad(c+283,"WB_io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+3699,"WB_io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+285,"WB_io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBit(c+287,"WB_io_out_bits_ctrl_flow_skip", false,-1);
    tracep->declBus(c+236,"WB_io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+237,"WB_io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+288,"WB_io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+290,"WB_io_out_bits_ctrl_csr_csr_data", false,-1, 63,0);
    tracep->declBit(c+296,"WB_io_out_bits_ctrl_csr_csr_en", false,-1);
    tracep->declBus(c+293,"WB_io_out_bits_ctrl_csr_csr_idx", false,-1, 11,0);
    tracep->declBit(c+91,"WB_io_icache_busy", false,-1);
    tracep->declBit(c+34,"WB_io_stall", false,-1);
    tracep->declBus(c+41,"bypass_io_EX_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+42,"bypass_io_EX_rf_rfWen", false,-1);
    tracep->declQuad(c+80,"bypass_io_EX_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+250,"bypass_io_MEM_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+267,"bypass_io_MEM_rf_rfWen", false,-1);
    tracep->declQuad(c+5,"bypass_io_MEM_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+236,"bypass_io_WB_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+237,"bypass_io_WB_rf_rfWen", false,-1);
    tracep->declQuad(c+288,"bypass_io_WB_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+297,"bypass_io_Reg1", false,-1, 63,0);
    tracep->declBus(c+49,"bypass_io_reg_index1", false,-1, 4,0);
    tracep->declQuad(c+299,"bypass_io_Reg2", false,-1, 63,0);
    tracep->declBus(c+50,"bypass_io_reg_index2", false,-1, 4,0);
    tracep->declQuad(c+1,"bypass_io_Bypass_REG1", false,-1, 63,0);
    tracep->declQuad(c+3,"bypass_io_Bypass_REG2", false,-1, 63,0);
    tracep->declBit(c+3695,"ICACHE_clock", false,-1);
    tracep->declBit(c+3696,"ICACHE_reset", false,-1);
    tracep->declBit(c+21,"ICACHE_io_in_addr_req_valid", false,-1);
    tracep->declQuad(c+3697,"ICACHE_io_in_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+22,"ICACHE_io_in_rdata_rep_ready", false,-1);
    tracep->declBit(c+23,"ICACHE_io_in_rdata_rep_valid", false,-1);
    tracep->declQuad(c+24,"ICACHE_io_in_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+91,"ICACHE_io_cache_busy", false,-1);
    tracep->declBit(c+301,"ICACHE_io_out_raddr_req_ready", false,-1);
    tracep->declBit(c+302,"ICACHE_io_out_raddr_req_valid", false,-1);
    tracep->declQuad(c+303,"ICACHE_io_out_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+305,"ICACHE_io_out_rdata_rep_valid", false,-1);
    tracep->declQuad(c+9,"ICACHE_io_out_rdata_rep_bits_data", false,-1, 63,0);
    tracep->declBit(c+306,"ICACHE_io_out_rdata_rep_bits_last", false,-1);
    tracep->declBit(c+307,"ICACHE_io_out_wb_valid", false,-1);
    tracep->declBus(c+3733,"ICACHE_io_out_wb_bits_breap", false,-1, 1,0);
    tracep->declBit(c+3696,"MMEM_reset", false,-1);
    tracep->declBit(c+3695,"MMEM_clk", false,-1);
    tracep->declBit(c+308,"MMEM_ar_valid", false,-1);
    tracep->declBit(c+309,"MMEM_ar_ready", false,-1);
    tracep->declQuad(c+310,"MMEM_ar_addr", false,-1, 63,0);
    tracep->declBus(c+3734,"MMEM_ar_id", false,-1, 3,0);
    tracep->declBus(c+312,"MMEM_ar_len", false,-1, 7,0);
    tracep->declBus(c+3735,"MMEM_ar_size", false,-1, 2,0);
    tracep->declBus(c+3736,"MMEM_ar_prot", false,-1, 2,0);
    tracep->declBus(c+3737,"MMEM_ar_burst", false,-1, 1,0);
    tracep->declBus(c+3733,"MMEM_ar_lock", false,-1, 1,0);
    tracep->declBus(c+3738,"MMEM_ar_cache", false,-1, 3,0);
    tracep->declBit(c+313,"MMEM_rd_valid", false,-1);
    tracep->declBit(c+3700,"MMEM_rd_ready", false,-1);
    tracep->declQuad(c+9,"MMEM_rd_data", false,-1, 63,0);
    tracep->declBus(c+3739,"MMEM_rd_id", false,-1, 3,0);
    tracep->declBus(c+3740,"MMEM_rd_resp", false,-1, 1,0);
    tracep->declBit(c+306,"MMEM_rd_last", false,-1);
    tracep->declBit(c+314,"MMEM_aw_valid", false,-1);
    tracep->declBit(c+315,"MMEM_aw_ready", false,-1);
    tracep->declQuad(c+316,"MMEM_aw_addr", false,-1, 63,0);
    tracep->declBus(c+3734,"MMEM_aw_id", false,-1, 3,0);
    tracep->declBus(c+312,"MMEM_aw_len", false,-1, 7,0);
    tracep->declBus(c+3735,"MMEM_aw_size", false,-1, 2,0);
    tracep->declBus(c+3736,"MMEM_aw_prot", false,-1, 2,0);
    tracep->declBus(c+3737,"MMEM_aw_burst", false,-1, 1,0);
    tracep->declBus(c+3733,"MMEM_aw_lock", false,-1, 1,0);
    tracep->declBus(c+3738,"MMEM_aw_cache", false,-1, 3,0);
    tracep->declBit(c+318,"MMEM_wd_valid", false,-1);
    tracep->declBit(c+319,"MMEM_wd_ready", false,-1);
    tracep->declQuad(c+320,"MMEM_wd_data", false,-1, 63,0);
    tracep->declBus(c+322,"MMEM_wstrb", false,-1, 7,0);
    tracep->declBus(c+3734,"MMEM_wd_id", false,-1, 3,0);
    tracep->declBit(c+323,"MMEM_wd_last", false,-1);
    tracep->declBit(c+324,"MMEM_wr_valid", false,-1);
    tracep->declBit(c+325,"MMEM_wr_ready", false,-1);
    tracep->declBus(c+3733,"MMEM_wr_breap", false,-1, 1,0);
    tracep->declBus(c+3741,"MMEM_wr_id", false,-1, 3,0);
    tracep->declBit(c+3695,"ARBITER_clock", false,-1);
    tracep->declBit(c+3696,"ARBITER_reset", false,-1);
    tracep->declBit(c+326,"ARBITER_io_in1_raddr_req_ready", false,-1);
    tracep->declBit(c+327,"ARBITER_io_in1_raddr_req_valid", false,-1);
    tracep->declQuad(c+328,"ARBITER_io_in1_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBus(c+330,"ARBITER_io_in1_raddr_req_bits_len", false,-1, 7,0);
    tracep->declBit(c+331,"ARBITER_io_in1_waddr_req_ready", false,-1);
    tracep->declBit(c+332,"ARBITER_io_in1_waddr_req_valid", false,-1);
    tracep->declQuad(c+333,"ARBITER_io_in1_waddr_req_bits_addr", false,-1, 63,0);
    tracep->declBus(c+330,"ARBITER_io_in1_waddr_req_bits_len", false,-1, 7,0);
    tracep->declBit(c+3700,"ARBITER_io_in1_rdata_rep_ready", false,-1);
    tracep->declBit(c+335,"ARBITER_io_in1_rdata_rep_valid", false,-1);
    tracep->declQuad(c+9,"ARBITER_io_in1_rdata_rep_bits_data", false,-1, 63,0);
    tracep->declBit(c+306,"ARBITER_io_in1_rdata_rep_bits_last", false,-1);
    tracep->declBit(c+336,"ARBITER_io_in1_wdata_req_ready", false,-1);
    tracep->declBit(c+337,"ARBITER_io_in1_wdata_req_valid", false,-1);
    tracep->declQuad(c+338,"ARBITER_io_in1_wdata_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+340,"ARBITER_io_in1_wdata_req_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+341,"ARBITER_io_in1_wdata_req_bits_last", false,-1);
    tracep->declBit(c+342,"ARBITER_io_in1_wb_ready", false,-1);
    tracep->declBit(c+343,"ARBITER_io_in1_wb_valid", false,-1);
    tracep->declBus(c+3733,"ARBITER_io_in1_wb_bits_breap", false,-1, 1,0);
    tracep->declBit(c+301,"ARBITER_io_in2_raddr_req_ready", false,-1);
    tracep->declBit(c+302,"ARBITER_io_in2_raddr_req_valid", false,-1);
    tracep->declQuad(c+303,"ARBITER_io_in2_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+305,"ARBITER_io_in2_rdata_rep_valid", false,-1);
    tracep->declQuad(c+9,"ARBITER_io_in2_rdata_rep_bits_data", false,-1, 63,0);
    tracep->declBit(c+306,"ARBITER_io_in2_rdata_rep_bits_last", false,-1);
    tracep->declBit(c+307,"ARBITER_io_in2_wb_valid", false,-1);
    tracep->declBus(c+3733,"ARBITER_io_in2_wb_bits_breap", false,-1, 1,0);
    tracep->declBit(c+309,"ARBITER_io_out_raddr_req_ready", false,-1);
    tracep->declBit(c+308,"ARBITER_io_out_raddr_req_valid", false,-1);
    tracep->declQuad(c+310,"ARBITER_io_out_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBus(c+312,"ARBITER_io_out_raddr_req_bits_len", false,-1, 7,0);
    tracep->declBit(c+315,"ARBITER_io_out_waddr_req_ready", false,-1);
    tracep->declBit(c+314,"ARBITER_io_out_waddr_req_valid", false,-1);
    tracep->declQuad(c+316,"ARBITER_io_out_waddr_req_bits_addr", false,-1, 63,0);
    tracep->declBus(c+312,"ARBITER_io_out_waddr_req_bits_len", false,-1, 7,0);
    tracep->declBit(c+3700,"ARBITER_io_out_rdata_rep_ready", false,-1);
    tracep->declBit(c+313,"ARBITER_io_out_rdata_rep_valid", false,-1);
    tracep->declQuad(c+9,"ARBITER_io_out_rdata_rep_bits_data", false,-1, 63,0);
    tracep->declBit(c+306,"ARBITER_io_out_rdata_rep_bits_last", false,-1);
    tracep->declBit(c+319,"ARBITER_io_out_wdata_req_ready", false,-1);
    tracep->declBit(c+318,"ARBITER_io_out_wdata_req_valid", false,-1);
    tracep->declQuad(c+320,"ARBITER_io_out_wdata_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+322,"ARBITER_io_out_wdata_req_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+323,"ARBITER_io_out_wdata_req_bits_last", false,-1);
    tracep->declBit(c+325,"ARBITER_io_out_wb_ready", false,-1);
    tracep->declBit(c+324,"ARBITER_io_out_wb_valid", false,-1);
    tracep->declBus(c+3733,"ARBITER_io_out_wb_bits_breap", false,-1, 1,0);
    tracep->declBit(c+3695,"MMIO_clock", false,-1);
    tracep->declBit(c+3696,"MMIO_reset", false,-1);
    tracep->declBit(c+269,"MMIO_io_in_addr_req_valid", false,-1);
    tracep->declQuad(c+270,"MMIO_io_in_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+269,"MMIO_io_in_addr_req_bits_ce", false,-1);
    tracep->declBit(c+272,"MMIO_io_in_addr_req_bits_we", false,-1);
    tracep->declBit(c+273,"MMIO_io_in_rdata_rep_valid", false,-1);
    tracep->declQuad(c+7,"MMIO_io_in_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+274,"MMIO_io_in_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+276,"MMIO_io_in_wdata_req_bits_wmask", false,-1, 7,0);
    tracep->declBit(c+277,"MMIO_io_in_wdata_rep", false,-1);
    tracep->declBit(c+326,"MMIO_io_out_raddr_req_ready", false,-1);
    tracep->declBit(c+327,"MMIO_io_out_raddr_req_valid", false,-1);
    tracep->declQuad(c+328,"MMIO_io_out_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBus(c+330,"MMIO_io_out_raddr_req_bits_len", false,-1, 7,0);
    tracep->declBit(c+331,"MMIO_io_out_waddr_req_ready", false,-1);
    tracep->declBit(c+332,"MMIO_io_out_waddr_req_valid", false,-1);
    tracep->declQuad(c+333,"MMIO_io_out_waddr_req_bits_addr", false,-1, 63,0);
    tracep->declBus(c+330,"MMIO_io_out_waddr_req_bits_len", false,-1, 7,0);
    tracep->declBit(c+3700,"MMIO_io_out_rdata_rep_ready", false,-1);
    tracep->declBit(c+335,"MMIO_io_out_rdata_rep_valid", false,-1);
    tracep->declQuad(c+9,"MMIO_io_out_rdata_rep_bits_data", false,-1, 63,0);
    tracep->declBit(c+306,"MMIO_io_out_rdata_rep_bits_last", false,-1);
    tracep->declBit(c+336,"MMIO_io_out_wdata_req_ready", false,-1);
    tracep->declBit(c+337,"MMIO_io_out_wdata_req_valid", false,-1);
    tracep->declQuad(c+338,"MMIO_io_out_wdata_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+340,"MMIO_io_out_wdata_req_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+341,"MMIO_io_out_wdata_req_bits_last", false,-1);
    tracep->declBit(c+342,"MMIO_io_out_wb_ready", false,-1);
    tracep->declBit(c+343,"MMIO_io_out_wb_valid", false,-1);
    tracep->declBus(c+3733,"MMIO_io_out_wb_bits_breap", false,-1, 1,0);
    tracep->declBit(c+3695,"CSR_clock", false,-1);
    tracep->declBit(c+3696,"CSR_reset", false,-1);
    tracep->declQuad(c+92,"CSR_io_rd_rd_data", false,-1, 63,0);
    tracep->declBus(c+89,"CSR_io_rd_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+290,"CSR_io_wr_csr_data", false,-1, 63,0);
    tracep->declBit(c+296,"CSR_io_wr_csr_en", false,-1);
    tracep->declBus(c+293,"CSR_io_wr_csr_idx", false,-1, 11,0);
    tracep->declBit(c+29,"CSR_io_excp_flush", false,-1);
    tracep->declBit(c+28,"CSR_io_mert_flush", false,-1);
    tracep->declQuad(c+283,"CSR_io_epc", false,-1, 63,0);
    tracep->declQuad(c+30,"CSR_io_mtvec_o", false,-1, 63,0);
    tracep->declQuad(c+32,"CSR_io_mepc_o", false,-1, 63,0);
    tracep->declBus(c+344,"head", false,-1, 5,0);
    tracep->declBus(c+345,"tail", false,-1, 5,0);
    tracep->declBit(c+346,"empty", false,-1);
    tracep->declBit(c+347,"full", false,-1);
    tracep->declQuad(c+348,"buffer_0_PC", false,-1, 63,0);
    tracep->declBus(c+350,"buffer_0_Inst", false,-1, 31,0);
    tracep->declQuad(c+351,"buffer_1_PC", false,-1, 63,0);
    tracep->declBus(c+353,"buffer_1_Inst", false,-1, 31,0);
    tracep->declQuad(c+354,"buffer_2_PC", false,-1, 63,0);
    tracep->declBus(c+356,"buffer_2_Inst", false,-1, 31,0);
    tracep->declQuad(c+357,"buffer_3_PC", false,-1, 63,0);
    tracep->declBus(c+359,"buffer_3_Inst", false,-1, 31,0);
    tracep->declQuad(c+360,"buffer_4_PC", false,-1, 63,0);
    tracep->declBus(c+362,"buffer_4_Inst", false,-1, 31,0);
    tracep->declQuad(c+363,"buffer_5_PC", false,-1, 63,0);
    tracep->declBus(c+365,"buffer_5_Inst", false,-1, 31,0);
    tracep->declQuad(c+366,"buffer_6_PC", false,-1, 63,0);
    tracep->declBus(c+368,"buffer_6_Inst", false,-1, 31,0);
    tracep->declQuad(c+369,"buffer_7_PC", false,-1, 63,0);
    tracep->declBus(c+371,"buffer_7_Inst", false,-1, 31,0);
    tracep->declQuad(c+372,"buffer_8_PC", false,-1, 63,0);
    tracep->declBus(c+374,"buffer_8_Inst", false,-1, 31,0);
    tracep->declQuad(c+375,"buffer_9_PC", false,-1, 63,0);
    tracep->declBus(c+377,"buffer_9_Inst", false,-1, 31,0);
    tracep->declQuad(c+378,"buffer_10_PC", false,-1, 63,0);
    tracep->declBus(c+380,"buffer_10_Inst", false,-1, 31,0);
    tracep->declQuad(c+381,"buffer_11_PC", false,-1, 63,0);
    tracep->declBus(c+383,"buffer_11_Inst", false,-1, 31,0);
    tracep->declQuad(c+384,"buffer_12_PC", false,-1, 63,0);
    tracep->declBus(c+386,"buffer_12_Inst", false,-1, 31,0);
    tracep->declQuad(c+387,"buffer_13_PC", false,-1, 63,0);
    tracep->declBus(c+389,"buffer_13_Inst", false,-1, 31,0);
    tracep->declQuad(c+390,"buffer_14_PC", false,-1, 63,0);
    tracep->declBus(c+392,"buffer_14_Inst", false,-1, 31,0);
    tracep->declQuad(c+393,"buffer_15_PC", false,-1, 63,0);
    tracep->declBus(c+395,"buffer_15_Inst", false,-1, 31,0);
    tracep->declQuad(c+396,"buffer_16_PC", false,-1, 63,0);
    tracep->declBus(c+398,"buffer_16_Inst", false,-1, 31,0);
    tracep->declQuad(c+399,"buffer_17_PC", false,-1, 63,0);
    tracep->declBus(c+401,"buffer_17_Inst", false,-1, 31,0);
    tracep->declQuad(c+402,"buffer_18_PC", false,-1, 63,0);
    tracep->declBus(c+404,"buffer_18_Inst", false,-1, 31,0);
    tracep->declQuad(c+405,"buffer_19_PC", false,-1, 63,0);
    tracep->declBus(c+407,"buffer_19_Inst", false,-1, 31,0);
    tracep->declQuad(c+408,"buffer_20_PC", false,-1, 63,0);
    tracep->declBus(c+410,"buffer_20_Inst", false,-1, 31,0);
    tracep->declQuad(c+411,"buffer_21_PC", false,-1, 63,0);
    tracep->declBus(c+413,"buffer_21_Inst", false,-1, 31,0);
    tracep->declQuad(c+414,"buffer_22_PC", false,-1, 63,0);
    tracep->declBus(c+416,"buffer_22_Inst", false,-1, 31,0);
    tracep->declQuad(c+417,"buffer_23_PC", false,-1, 63,0);
    tracep->declBus(c+419,"buffer_23_Inst", false,-1, 31,0);
    tracep->declQuad(c+420,"buffer_24_PC", false,-1, 63,0);
    tracep->declBus(c+422,"buffer_24_Inst", false,-1, 31,0);
    tracep->declQuad(c+423,"buffer_25_PC", false,-1, 63,0);
    tracep->declBus(c+425,"buffer_25_Inst", false,-1, 31,0);
    tracep->declQuad(c+426,"buffer_26_PC", false,-1, 63,0);
    tracep->declBus(c+428,"buffer_26_Inst", false,-1, 31,0);
    tracep->declQuad(c+429,"buffer_27_PC", false,-1, 63,0);
    tracep->declBus(c+431,"buffer_27_Inst", false,-1, 31,0);
    tracep->declQuad(c+432,"buffer_28_PC", false,-1, 63,0);
    tracep->declBus(c+434,"buffer_28_Inst", false,-1, 31,0);
    tracep->declQuad(c+435,"buffer_29_PC", false,-1, 63,0);
    tracep->declBus(c+437,"buffer_29_Inst", false,-1, 31,0);
    tracep->declQuad(c+438,"buffer_30_PC", false,-1, 63,0);
    tracep->declBus(c+440,"buffer_30_Inst", false,-1, 31,0);
    tracep->declQuad(c+441,"buffer_31_PC", false,-1, 63,0);
    tracep->declBus(c+443,"buffer_31_Inst", false,-1, 31,0);
    tracep->declBit(c+59,"valid", false,-1);
    tracep->declBus(c+60,"EX_io_in_bits_r_ctrl_signal_src1Type", false,-1, 2,0);
    tracep->declBus(c+61,"EX_io_in_bits_r_ctrl_signal_src2Type", false,-1, 2,0);
    tracep->declBus(c+62,"EX_io_in_bits_r_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+63,"EX_io_in_bits_r_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+64,"EX_io_in_bits_r_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+65,"EX_io_in_bits_r_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declBus(c+41,"EX_io_in_bits_r_ctrl_signal_rfDest", false,-1, 4,0);
    tracep->declBit(c+66,"EX_io_in_bits_r_ctrl_signal_ertn_flush", false,-1);
    tracep->declBit(c+67,"EX_io_in_bits_r_ctrl_signal_excp_flush", false,-1);
    tracep->declQuad(c+68,"EX_io_in_bits_r_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+70,"EX_io_in_bits_r_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+72,"EX_io_in_bits_r_ctrl_data_Imm", false,-1, 63,0);
    tracep->declQuad(c+74,"EX_io_in_bits_r_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+76,"EX_io_in_bits_r_ctrl_flow_inst", false,-1, 31,0);
    tracep->declBus(c+77,"EX_io_in_bits_r_ctrl_csr_csr_idx", false,-1, 11,0);
    tracep->declBit(c+238,"valid_1", false,-1);
    tracep->declBus(c+239,"MEM_io_in_bits_r_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+240,"MEM_io_in_bits_r_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+241,"MEM_io_in_bits_r_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+242,"MEM_io_in_bits_r_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declBit(c+243,"MEM_io_in_bits_r_ctrl_signal_ertn_flush", false,-1);
    tracep->declBit(c+244,"MEM_io_in_bits_r_ctrl_signal_excp_flush", false,-1);
    tracep->declQuad(c+245,"MEM_io_in_bits_r_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+247,"MEM_io_in_bits_r_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+248,"MEM_io_in_bits_r_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+250,"MEM_io_in_bits_r_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declQuad(c+251,"MEM_io_in_bits_r_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+253,"MEM_io_in_bits_r_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+255,"MEM_io_in_bits_r_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+257,"MEM_io_in_bits_r_ctrl_data_Imm", false,-1, 63,0);
    tracep->declQuad(c+259,"MEM_io_in_bits_r_ctrl_csr_csr_data", false,-1, 63,0);
    tracep->declBit(c+261,"MEM_io_in_bits_r_ctrl_csr_csr_en", false,-1);
    tracep->declBus(c+262,"MEM_io_in_bits_r_ctrl_csr_csr_idx", false,-1, 11,0);
    tracep->declBit(c+278,"valid_2", false,-1);
    tracep->declBit(c+279,"WB_io_in_bits_r_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+280,"WB_io_in_bits_r_ctrl_signal_rfWen", false,-1);
    tracep->declBit(c+281,"WB_io_in_bits_r_ctrl_signal_ertn_flush", false,-1);
    tracep->declBit(c+282,"WB_io_in_bits_r_ctrl_signal_excp_flush", false,-1);
    tracep->declQuad(c+283,"WB_io_in_bits_r_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+444,"WB_io_in_bits_r_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+285,"WB_io_in_bits_r_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBit(c+287,"WB_io_in_bits_r_ctrl_flow_skip", false,-1);
    tracep->declBus(c+236,"WB_io_in_bits_r_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declQuad(c+288,"WB_io_in_bits_r_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+290,"WB_io_in_bits_r_ctrl_csr_csr_data", false,-1, 63,0);
    tracep->declBit(c+292,"WB_io_in_bits_r_ctrl_csr_csr_en", false,-1);
    tracep->declBus(c+293,"WB_io_in_bits_r_ctrl_csr_csr_idx", false,-1, 11,0);
    tracep->declBit(c+445,"DIP_io_is_break_REG", false,-1);
    tracep->declBit(c+94,"DIP_io_is_break_REG_1", false,-1);
    tracep->declBus(c+159,"DIP_io_inst_REG", false,-1, 31,0);
    tracep->declBit(c+165,"DIP_io_is_skip_REG", false,-1);
    tracep->declBit(c+162,"DIP_io_inst_valid_REG", false,-1);
    tracep->declQuad(c+160,"DIP_io_pc_REG", false,-1, 63,0);
    tracep->declQuad(c+163,"DIP_io_dnpc_REG", false,-1, 63,0);
    tracep->pushNamePrefix("ARBITER ");
    tracep->declBit(c+3695,"clock", false,-1);
    tracep->declBit(c+3696,"reset", false,-1);
    tracep->declBit(c+326,"io_in1_raddr_req_ready", false,-1);
    tracep->declBit(c+327,"io_in1_raddr_req_valid", false,-1);
    tracep->declQuad(c+328,"io_in1_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBus(c+330,"io_in1_raddr_req_bits_len", false,-1, 7,0);
    tracep->declBit(c+331,"io_in1_waddr_req_ready", false,-1);
    tracep->declBit(c+332,"io_in1_waddr_req_valid", false,-1);
    tracep->declQuad(c+333,"io_in1_waddr_req_bits_addr", false,-1, 63,0);
    tracep->declBus(c+330,"io_in1_waddr_req_bits_len", false,-1, 7,0);
    tracep->declBit(c+3700,"io_in1_rdata_rep_ready", false,-1);
    tracep->declBit(c+335,"io_in1_rdata_rep_valid", false,-1);
    tracep->declQuad(c+9,"io_in1_rdata_rep_bits_data", false,-1, 63,0);
    tracep->declBit(c+306,"io_in1_rdata_rep_bits_last", false,-1);
    tracep->declBit(c+336,"io_in1_wdata_req_ready", false,-1);
    tracep->declBit(c+337,"io_in1_wdata_req_valid", false,-1);
    tracep->declQuad(c+338,"io_in1_wdata_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+340,"io_in1_wdata_req_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+341,"io_in1_wdata_req_bits_last", false,-1);
    tracep->declBit(c+342,"io_in1_wb_ready", false,-1);
    tracep->declBit(c+343,"io_in1_wb_valid", false,-1);
    tracep->declBus(c+3733,"io_in1_wb_bits_breap", false,-1, 1,0);
    tracep->declBit(c+301,"io_in2_raddr_req_ready", false,-1);
    tracep->declBit(c+302,"io_in2_raddr_req_valid", false,-1);
    tracep->declQuad(c+303,"io_in2_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+305,"io_in2_rdata_rep_valid", false,-1);
    tracep->declQuad(c+9,"io_in2_rdata_rep_bits_data", false,-1, 63,0);
    tracep->declBit(c+306,"io_in2_rdata_rep_bits_last", false,-1);
    tracep->declBit(c+307,"io_in2_wb_valid", false,-1);
    tracep->declBus(c+3733,"io_in2_wb_bits_breap", false,-1, 1,0);
    tracep->declBit(c+309,"io_out_raddr_req_ready", false,-1);
    tracep->declBit(c+308,"io_out_raddr_req_valid", false,-1);
    tracep->declQuad(c+310,"io_out_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBus(c+312,"io_out_raddr_req_bits_len", false,-1, 7,0);
    tracep->declBit(c+315,"io_out_waddr_req_ready", false,-1);
    tracep->declBit(c+314,"io_out_waddr_req_valid", false,-1);
    tracep->declQuad(c+316,"io_out_waddr_req_bits_addr", false,-1, 63,0);
    tracep->declBus(c+312,"io_out_waddr_req_bits_len", false,-1, 7,0);
    tracep->declBit(c+3700,"io_out_rdata_rep_ready", false,-1);
    tracep->declBit(c+313,"io_out_rdata_rep_valid", false,-1);
    tracep->declQuad(c+9,"io_out_rdata_rep_bits_data", false,-1, 63,0);
    tracep->declBit(c+306,"io_out_rdata_rep_bits_last", false,-1);
    tracep->declBit(c+319,"io_out_wdata_req_ready", false,-1);
    tracep->declBit(c+318,"io_out_wdata_req_valid", false,-1);
    tracep->declQuad(c+320,"io_out_wdata_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+322,"io_out_wdata_req_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+323,"io_out_wdata_req_bits_last", false,-1);
    tracep->declBit(c+325,"io_out_wb_ready", false,-1);
    tracep->declBit(c+324,"io_out_wb_valid", false,-1);
    tracep->declBus(c+3733,"io_out_wb_bits_breap", false,-1, 1,0);
    tracep->declBit(c+446,"state", false,-1);
    tracep->declBit(c+447,"choose_r", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CSR ");
    tracep->declBit(c+3695,"clock", false,-1);
    tracep->declBit(c+3696,"reset", false,-1);
    tracep->declQuad(c+92,"io_rd_rd_data", false,-1, 63,0);
    tracep->declBus(c+89,"io_rd_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+290,"io_wr_csr_data", false,-1, 63,0);
    tracep->declBit(c+296,"io_wr_csr_en", false,-1);
    tracep->declBus(c+293,"io_wr_csr_idx", false,-1, 11,0);
    tracep->declBit(c+29,"io_excp_flush", false,-1);
    tracep->declBit(c+28,"io_mert_flush", false,-1);
    tracep->declQuad(c+283,"io_epc", false,-1, 63,0);
    tracep->declQuad(c+30,"io_mtvec_o", false,-1, 63,0);
    tracep->declQuad(c+32,"io_mepc_o", false,-1, 63,0);
    tracep->declQuad(c+32,"CSRDIFF_mepc", false,-1, 63,0);
    tracep->declQuad(c+448,"CSRDIFF_mcause", false,-1, 63,0);
    tracep->declQuad(c+450,"CSRDIFF_mstatus", false,-1, 63,0);
    tracep->declQuad(c+30,"CSRDIFF_mtvec", false,-1, 63,0);
    tracep->declQuad(c+32,"mepc", false,-1, 63,0);
    tracep->declQuad(c+448,"mcause", false,-1, 63,0);
    tracep->declQuad(c+450,"mstatus", false,-1, 63,0);
    tracep->declQuad(c+30,"mtvec", false,-1, 63,0);
    tracep->declQuad(c+452,"mie", false,-1, 63,0);
    tracep->declQuad(c+454,"mip", false,-1, 63,0);
    tracep->pushNamePrefix("CSRDIFF ");
    tracep->declQuad(c+32,"mepc", false,-1, 63,0);
    tracep->declQuad(c+448,"mcause", false,-1, 63,0);
    tracep->declQuad(c+450,"mstatus", false,-1, 63,0);
    tracep->declQuad(c+30,"mtvec", false,-1, 63,0);
    for (int i = 0; i < 6; ++i) {
        tracep->declQuad(c+456+i*2,"inst_csr", true,(i+0), 63,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("DIP ");
    tracep->declBit(c+94,"is_break", false,-1);
    tracep->declBus(c+159,"inst", false,-1, 31,0);
    tracep->declQuad(c+95,"rf_0", false,-1, 63,0);
    tracep->declQuad(c+97,"rf_1", false,-1, 63,0);
    tracep->declQuad(c+99,"rf_2", false,-1, 63,0);
    tracep->declQuad(c+101,"rf_3", false,-1, 63,0);
    tracep->declQuad(c+103,"rf_4", false,-1, 63,0);
    tracep->declQuad(c+105,"rf_5", false,-1, 63,0);
    tracep->declQuad(c+107,"rf_6", false,-1, 63,0);
    tracep->declQuad(c+109,"rf_7", false,-1, 63,0);
    tracep->declQuad(c+111,"rf_8", false,-1, 63,0);
    tracep->declQuad(c+113,"rf_9", false,-1, 63,0);
    tracep->declQuad(c+115,"rf_10", false,-1, 63,0);
    tracep->declQuad(c+117,"rf_11", false,-1, 63,0);
    tracep->declQuad(c+119,"rf_12", false,-1, 63,0);
    tracep->declQuad(c+121,"rf_13", false,-1, 63,0);
    tracep->declQuad(c+123,"rf_14", false,-1, 63,0);
    tracep->declQuad(c+125,"rf_15", false,-1, 63,0);
    tracep->declQuad(c+127,"rf_16", false,-1, 63,0);
    tracep->declQuad(c+129,"rf_17", false,-1, 63,0);
    tracep->declQuad(c+131,"rf_18", false,-1, 63,0);
    tracep->declQuad(c+133,"rf_19", false,-1, 63,0);
    tracep->declQuad(c+135,"rf_20", false,-1, 63,0);
    tracep->declQuad(c+137,"rf_21", false,-1, 63,0);
    tracep->declQuad(c+139,"rf_22", false,-1, 63,0);
    tracep->declQuad(c+141,"rf_23", false,-1, 63,0);
    tracep->declQuad(c+143,"rf_24", false,-1, 63,0);
    tracep->declQuad(c+145,"rf_25", false,-1, 63,0);
    tracep->declQuad(c+147,"rf_26", false,-1, 63,0);
    tracep->declQuad(c+149,"rf_27", false,-1, 63,0);
    tracep->declQuad(c+151,"rf_28", false,-1, 63,0);
    tracep->declQuad(c+153,"rf_29", false,-1, 63,0);
    tracep->declQuad(c+155,"rf_30", false,-1, 63,0);
    tracep->declQuad(c+157,"rf_31", false,-1, 63,0);
    tracep->declBit(c+162,"inst_valid", false,-1);
    tracep->declBit(c+165,"is_skip", false,-1);
    tracep->declQuad(c+160,"pc", false,-1, 63,0);
    tracep->declQuad(c+163,"dnpc", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+468+i*2,"rf", true,(i+0), 63,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+532+i*1,"IN", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EX ");
    tracep->declBit(c+3695,"clock", false,-1);
    tracep->declBit(c+3696,"reset", false,-1);
    tracep->declBit(c+43,"io_in_ready", false,-1);
    tracep->declBit(c+59,"io_in_valid", false,-1);
    tracep->declBus(c+60,"io_in_bits_ctrl_signal_src1Type", false,-1, 2,0);
    tracep->declBus(c+61,"io_in_bits_ctrl_signal_src2Type", false,-1, 2,0);
    tracep->declBus(c+62,"io_in_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+63,"io_in_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+64,"io_in_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+65,"io_in_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declBus(c+41,"io_in_bits_ctrl_signal_rfDest", false,-1, 4,0);
    tracep->declBit(c+66,"io_in_bits_ctrl_signal_ertn_flush", false,-1);
    tracep->declBit(c+67,"io_in_bits_ctrl_signal_excp_flush", false,-1);
    tracep->declQuad(c+68,"io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+70,"io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+72,"io_in_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declQuad(c+74,"io_in_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+76,"io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declBus(c+77,"io_in_bits_ctrl_csr_csr_idx", false,-1, 11,0);
    tracep->declBit(c+40,"io_is_mem", false,-1);
    tracep->declBit(c+17,"io_branchIO_is_branch", false,-1);
    tracep->declBit(c+18,"io_branchIO_is_jump", false,-1);
    tracep->declQuad(c+19,"io_branchIO_dnpc", false,-1, 63,0);
    tracep->declBit(c+78,"io_out_ready", false,-1);
    tracep->declBit(c+79,"io_out_valid", false,-1);
    tracep->declBus(c+62,"io_out_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+63,"io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+64,"io_out_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+65,"io_out_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declBit(c+66,"io_out_bits_ctrl_signal_ertn_flush", false,-1);
    tracep->declBit(c+67,"io_out_bits_ctrl_signal_excp_flush", false,-1);
    tracep->declQuad(c+74,"io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+76,"io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+19,"io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+41,"io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+42,"io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+80,"io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+82,"io_out_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+84,"io_out_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+72,"io_out_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declQuad(c+86,"io_out_bits_ctrl_csr_csr_data", false,-1, 63,0);
    tracep->declBit(c+88,"io_out_bits_ctrl_csr_csr_en", false,-1);
    tracep->declBus(c+89,"io_out_bits_ctrl_csr_csr_idx", false,-1, 11,0);
    tracep->declBit(c+90,"io_is_break", false,-1);
    tracep->declBit(c+27,"io_is_flush", false,-1);
    tracep->declBit(c+91,"io_icache_busy", false,-1);
    tracep->declQuad(c+92,"io_csr_rd_io_rd_data", false,-1, 63,0);
    tracep->declBus(c+89,"io_csr_rd_io_csr_addr", false,-1, 11,0);
    tracep->declBit(c+35,"io_stall", false,-1);
    tracep->declBit(c+3695,"mul_clock", false,-1);
    tracep->declBit(c+3696,"mul_reset", false,-1);
    tracep->declBit(c+539,"mul_io_in_valid", false,-1);
    tracep->declQuad(c+540,"mul_io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+542,"mul_io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declBit(c+544,"mul_io_out_valid", false,-1);
    tracep->declQuad(c+545,"mul_io_out_bits_result_result_lo", false,-1, 63,0);
    tracep->declBit(c+3695,"div_clock", false,-1);
    tracep->declBit(c+3696,"div_reset", false,-1);
    tracep->declBit(c+547,"div_io_in_valid", false,-1);
    tracep->declBit(c+548,"div_io_in_bits_ctrl_flow_div_signed", false,-1);
    tracep->declQuad(c+549,"div_io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+551,"div_io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declBit(c+553,"div_io_out_valid", false,-1);
    tracep->declQuad(c+554,"div_io_out_bits_result_quotient", false,-1, 63,0);
    tracep->declQuad(c+556,"div_io_out_bits_result_remainder", false,-1, 63,0);
    tracep->declBit(c+558,"is_mul", false,-1);
    tracep->declBit(c+559,"is_div", false,-1);
    tracep->declBit(c+560,"is_divw", false,-1);
    tracep->declBit(c+548,"is_div_sign", false,-1);
    tracep->declQuad(c+82,"src1", false,-1, 63,0);
    tracep->declQuad(c+84,"src2", false,-1, 63,0);
    tracep->declBit(c+561,"alu_result_sign", false,-1);
    tracep->declBit(c+562,"alu_result_sign_2", false,-1);
    tracep->declBit(c+563,"alu_result_sign_3", false,-1);
    tracep->declBit(c+564,"alu_result_sign_4", false,-1);
    tracep->declBit(c+565,"alu_result_sign_6", false,-1);
    tracep->declQuad(c+566,"alu_result", false,-1, 63,0);
    tracep->declBit(c+568,"shift_result_sign", false,-1);
    tracep->declBit(c+569,"shift_result_sign_1", false,-1);
    tracep->declBit(c+570,"shift_result_sign_2", false,-1);
    tracep->declBit(c+571,"shift_result_sign_3", false,-1);
    tracep->declBit(c+572,"div_io_in_bits_ctrl_data_src1_sign", false,-1);
    tracep->declBit(c+573,"div_io_in_bits_ctrl_data_src2_sign", false,-1);
    tracep->declQuad(c+574,"compar_result", false,-1, 63,0);
    tracep->declQuad(c+576,"jump_result", false,-1, 63,0);
    tracep->declQuad(c+578,"shift_result", false,-1, 63,0);
    tracep->declQuad(c+580,"branch_result", false,-1, 63,0);
    tracep->declBit(c+582,"branch_flag", false,-1);
    tracep->declBit(c+583,"is_branch", false,-1);
    tracep->declBit(c+584,"is_jump", false,-1);
    tracep->pushNamePrefix("div ");
    tracep->declBit(c+3695,"clock", false,-1);
    tracep->declBit(c+3696,"reset", false,-1);
    tracep->declBit(c+547,"io_in_valid", false,-1);
    tracep->declBit(c+548,"io_in_bits_ctrl_flow_div_signed", false,-1);
    tracep->declQuad(c+549,"io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+551,"io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declBit(c+553,"io_out_valid", false,-1);
    tracep->declQuad(c+554,"io_out_bits_result_quotient", false,-1, 63,0);
    tracep->declQuad(c+556,"io_out_bits_result_remainder", false,-1, 63,0);
    tracep->declBit(c+3695,"divi_clock", false,-1);
    tracep->declBit(c+3696,"divi_reset", false,-1);
    tracep->declBit(c+547,"divi_io_in_valid", false,-1);
    tracep->declBit(c+548,"divi_io_in_bits_ctrl_flow_div_signed", false,-1);
    tracep->declQuad(c+549,"divi_io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+551,"divi_io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declBit(c+553,"divi_io_out_valid", false,-1);
    tracep->declQuad(c+554,"divi_io_out_bits_result_quotient", false,-1, 63,0);
    tracep->declQuad(c+556,"divi_io_out_bits_result_remainder", false,-1, 63,0);
    tracep->pushNamePrefix("divi ");
    tracep->declBit(c+3695,"clock", false,-1);
    tracep->declBit(c+3696,"reset", false,-1);
    tracep->declBit(c+547,"io_in_valid", false,-1);
    tracep->declBit(c+548,"io_in_bits_ctrl_flow_div_signed", false,-1);
    tracep->declQuad(c+549,"io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+551,"io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declBit(c+553,"io_out_valid", false,-1);
    tracep->declQuad(c+554,"io_out_bits_result_quotient", false,-1, 63,0);
    tracep->declQuad(c+556,"io_out_bits_result_remainder", false,-1, 63,0);
    tracep->declBus(c+585,"state", false,-1, 2,0);
    tracep->declBit(c+586,"NewReq", false,-1);
    tracep->declArray(c+587,"shiftReg", false,-1, 128,0);
    tracep->declArray(c+592,"hi", false,-1, 64,0);
    tracep->declQuad(c+595,"lo", false,-1, 63,0);
    tracep->declBit(c+597,"aSign", false,-1);
    tracep->declQuad(c+598,"aVal", false,-1, 63,0);
    tracep->declBit(c+600,"bSign", false,-1);
    tracep->declQuad(c+601,"bVal", false,-1, 63,0);
    tracep->declBit(c+603,"qSign", false,-1);
    tracep->declArray(c+604,"aValx2Reg", false,-1, 64,0);
    tracep->declBus(c+607,"value", false,-1, 5,0);
    tracep->declBus(c+608,"cntShift_hi", false,-1, 31,0);
    tracep->declBus(c+609,"cntShift_lo", false,-1, 31,0);
    tracep->declBit(c+610,"cntShift_useHi", false,-1);
    tracep->declBus(c+611,"cntShift_hi_1", false,-1, 15,0);
    tracep->declBus(c+612,"cntShift_lo_1", false,-1, 15,0);
    tracep->declBit(c+613,"cntShift_useHi_1", false,-1);
    tracep->declBus(c+614,"cntShift_hi_2", false,-1, 7,0);
    tracep->declBus(c+615,"cntShift_lo_2", false,-1, 7,0);
    tracep->declBit(c+616,"cntShift_useHi_2", false,-1);
    tracep->declBus(c+617,"cntShift_hi_3", false,-1, 3,0);
    tracep->declBus(c+618,"cntShift_lo_3", false,-1, 3,0);
    tracep->declBit(c+619,"cntShift_useHi_3", false,-1);
    tracep->declBus(c+620,"cntShift_hi_4", false,-1, 3,0);
    tracep->declBus(c+621,"cntShift_lo_4", false,-1, 3,0);
    tracep->declBit(c+622,"cntShift_useHi_4", false,-1);
    tracep->declBus(c+623,"cntShift_hi_5", false,-1, 7,0);
    tracep->declBus(c+624,"cntShift_lo_5", false,-1, 7,0);
    tracep->declBit(c+625,"cntShift_useHi_5", false,-1);
    tracep->declBus(c+626,"cntShift_hi_6", false,-1, 3,0);
    tracep->declBus(c+627,"cntShift_lo_6", false,-1, 3,0);
    tracep->declBit(c+628,"cntShift_useHi_6", false,-1);
    tracep->declBus(c+629,"cntShift_hi_7", false,-1, 3,0);
    tracep->declBus(c+630,"cntShift_lo_7", false,-1, 3,0);
    tracep->declBit(c+631,"cntShift_useHi_7", false,-1);
    tracep->declBus(c+632,"cntShift_hi_8", false,-1, 15,0);
    tracep->declBus(c+633,"cntShift_lo_8", false,-1, 15,0);
    tracep->declBit(c+634,"cntShift_useHi_8", false,-1);
    tracep->declBus(c+635,"cntShift_hi_9", false,-1, 7,0);
    tracep->declBus(c+636,"cntShift_lo_9", false,-1, 7,0);
    tracep->declBit(c+637,"cntShift_useHi_9", false,-1);
    tracep->declBus(c+638,"cntShift_hi_10", false,-1, 3,0);
    tracep->declBus(c+639,"cntShift_lo_10", false,-1, 3,0);
    tracep->declBit(c+640,"cntShift_useHi_10", false,-1);
    tracep->declBus(c+641,"cntShift_hi_11", false,-1, 3,0);
    tracep->declBus(c+642,"cntShift_lo_11", false,-1, 3,0);
    tracep->declBit(c+643,"cntShift_useHi_11", false,-1);
    tracep->declBus(c+644,"cntShift_hi_12", false,-1, 7,0);
    tracep->declBus(c+645,"cntShift_lo_12", false,-1, 7,0);
    tracep->declBit(c+646,"cntShift_useHi_12", false,-1);
    tracep->declBus(c+647,"cntShift_hi_13", false,-1, 3,0);
    tracep->declBus(c+648,"cntShift_lo_13", false,-1, 3,0);
    tracep->declBit(c+649,"cntShift_useHi_13", false,-1);
    tracep->declBus(c+650,"cntShift_hi_14", false,-1, 3,0);
    tracep->declBus(c+651,"cntShift_lo_14", false,-1, 3,0);
    tracep->declBit(c+652,"cntShift_useHi_14", false,-1);
    tracep->declBit(c+653,"cntShift_hi_15", false,-1);
    tracep->declQuad(c+654,"cntShift_lo_15", false,-1, 63,0);
    tracep->declBit(c+653,"cntShift_useHi_15", false,-1);
    tracep->declBus(c+656,"cntShift_hi_16", false,-1, 31,0);
    tracep->declBus(c+657,"cntShift_lo_16", false,-1, 31,0);
    tracep->declBit(c+658,"cntShift_useHi_16", false,-1);
    tracep->declBus(c+659,"cntShift_hi_17", false,-1, 15,0);
    tracep->declBus(c+660,"cntShift_lo_17", false,-1, 15,0);
    tracep->declBit(c+661,"cntShift_useHi_17", false,-1);
    tracep->declBus(c+662,"cntShift_hi_18", false,-1, 7,0);
    tracep->declBus(c+663,"cntShift_lo_18", false,-1, 7,0);
    tracep->declBit(c+664,"cntShift_useHi_18", false,-1);
    tracep->declBus(c+665,"cntShift_hi_19", false,-1, 3,0);
    tracep->declBus(c+666,"cntShift_lo_19", false,-1, 3,0);
    tracep->declBit(c+667,"cntShift_useHi_19", false,-1);
    tracep->declBus(c+668,"cntShift_hi_20", false,-1, 3,0);
    tracep->declBus(c+669,"cntShift_lo_20", false,-1, 3,0);
    tracep->declBit(c+670,"cntShift_useHi_20", false,-1);
    tracep->declBus(c+671,"cntShift_hi_21", false,-1, 7,0);
    tracep->declBus(c+672,"cntShift_lo_21", false,-1, 7,0);
    tracep->declBit(c+673,"cntShift_useHi_21", false,-1);
    tracep->declBus(c+674,"cntShift_hi_22", false,-1, 3,0);
    tracep->declBus(c+675,"cntShift_lo_22", false,-1, 3,0);
    tracep->declBit(c+676,"cntShift_useHi_22", false,-1);
    tracep->declBus(c+677,"cntShift_hi_23", false,-1, 3,0);
    tracep->declBus(c+678,"cntShift_lo_23", false,-1, 3,0);
    tracep->declBit(c+679,"cntShift_useHi_23", false,-1);
    tracep->declBus(c+680,"cntShift_hi_24", false,-1, 15,0);
    tracep->declBus(c+681,"cntShift_lo_24", false,-1, 15,0);
    tracep->declBit(c+682,"cntShift_useHi_24", false,-1);
    tracep->declBus(c+683,"cntShift_hi_25", false,-1, 7,0);
    tracep->declBus(c+684,"cntShift_lo_25", false,-1, 7,0);
    tracep->declBit(c+685,"cntShift_useHi_25", false,-1);
    tracep->declBus(c+686,"cntShift_hi_26", false,-1, 3,0);
    tracep->declBus(c+687,"cntShift_lo_26", false,-1, 3,0);
    tracep->declBit(c+688,"cntShift_useHi_26", false,-1);
    tracep->declBus(c+689,"cntShift_hi_27", false,-1, 3,0);
    tracep->declBus(c+690,"cntShift_lo_27", false,-1, 3,0);
    tracep->declBit(c+691,"cntShift_useHi_27", false,-1);
    tracep->declBus(c+692,"cntShift_hi_28", false,-1, 7,0);
    tracep->declBus(c+693,"cntShift_lo_28", false,-1, 7,0);
    tracep->declBit(c+694,"cntShift_useHi_28", false,-1);
    tracep->declBus(c+695,"cntShift_hi_29", false,-1, 3,0);
    tracep->declBus(c+696,"cntShift_lo_29", false,-1, 3,0);
    tracep->declBit(c+697,"cntShift_useHi_29", false,-1);
    tracep->declBus(c+698,"cntShift_hi_30", false,-1, 3,0);
    tracep->declBus(c+699,"cntShift_lo_30", false,-1, 3,0);
    tracep->declBit(c+700,"cntShift_useHi_30", false,-1);
    tracep->declBus(c+701,"cntShift", false,-1, 6,0);
    tracep->declBit(c+702,"enough", false,-1);
    tracep->declBit(c+703,"wrap", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mul ");
    tracep->declBit(c+3695,"clock", false,-1);
    tracep->declBit(c+3696,"reset", false,-1);
    tracep->declBit(c+539,"io_in_valid", false,-1);
    tracep->declQuad(c+540,"io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+542,"io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declBit(c+544,"io_out_valid", false,-1);
    tracep->declQuad(c+545,"io_out_bits_result_result_lo", false,-1, 63,0);
    tracep->declBit(c+3695,"mult_clock", false,-1);
    tracep->declBit(c+3696,"mult_reset", false,-1);
    tracep->declBit(c+539,"mult_io_in_valid", false,-1);
    tracep->declQuad(c+540,"mult_io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+542,"mult_io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declBit(c+544,"mult_io_out_valid", false,-1);
    tracep->declQuad(c+545,"mult_io_out_bits_result_result_lo", false,-1, 63,0);
    tracep->pushNamePrefix("mult ");
    tracep->declBit(c+3695,"clock", false,-1);
    tracep->declBit(c+3696,"reset", false,-1);
    tracep->declBit(c+539,"io_in_valid", false,-1);
    tracep->declQuad(c+540,"io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+542,"io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declBit(c+544,"io_out_valid", false,-1);
    tracep->declQuad(c+545,"io_out_bits_result_result_lo", false,-1, 63,0);
    tracep->declBus(c+704,"partial_io_y_3", false,-1, 2,0);
    tracep->declArray(c+705,"partial_io_x", false,-1, 131,0);
    tracep->declArray(c+710,"partial_io_p", false,-1, 131,0);
    tracep->declBit(c+715,"partial_io_c", false,-1);
    tracep->declArray(c+716,"multiplier", false,-1, 65,0);
    tracep->declArray(c+705,"multiplicand", false,-1, 131,0);
    tracep->declArray(c+719,"p", false,-1, 131,0);
    tracep->declBus(c+724,"count", false,-1, 6,0);
    tracep->declArray(c+725,"temp", false,-1, 131,0);
    tracep->declBit(c+730,"p_sign", false,-1);
    tracep->pushNamePrefix("partial ");
    tracep->declBus(c+704,"io_y_3", false,-1, 2,0);
    tracep->declArray(c+705,"io_x", false,-1, 131,0);
    tracep->declArray(c+710,"io_p", false,-1, 131,0);
    tracep->declBit(c+715,"io_c", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("ICACHE ");
    tracep->declBit(c+3695,"clock", false,-1);
    tracep->declBit(c+3696,"reset", false,-1);
    tracep->declBit(c+21,"io_in_addr_req_valid", false,-1);
    tracep->declQuad(c+3697,"io_in_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+22,"io_in_rdata_rep_ready", false,-1);
    tracep->declBit(c+23,"io_in_rdata_rep_valid", false,-1);
    tracep->declQuad(c+24,"io_in_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+91,"io_cache_busy", false,-1);
    tracep->declBit(c+301,"io_out_raddr_req_ready", false,-1);
    tracep->declBit(c+302,"io_out_raddr_req_valid", false,-1);
    tracep->declQuad(c+303,"io_out_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+305,"io_out_rdata_rep_valid", false,-1);
    tracep->declQuad(c+9,"io_out_rdata_rep_bits_data", false,-1, 63,0);
    tracep->declBit(c+306,"io_out_rdata_rep_bits_last", false,-1);
    tracep->declBit(c+307,"io_out_wb_valid", false,-1);
    tracep->declBus(c+3733,"io_out_wb_bits_breap", false,-1, 1,0);
    tracep->declBit(c+3695,"Cache_data_clock", false,-1);
    tracep->declBit(c+731,"Cache_data_io_in_valid", false,-1);
    tracep->declQuad(c+3697,"Cache_data_io_in_addr", false,-1, 63,0);
    tracep->declQuad(c+732,"Cache_data_io_write_bus_addr", false,-1, 63,0);
    tracep->declBit(c+734,"Cache_data_io_write_bus_valid", false,-1);
    tracep->declBus(c+735,"Cache_data_io_write_bus_waymask", false,-1, 1,0);
    tracep->declArray(c+736,"Cache_data_io_write_bus_wdata", false,-1, 511,0);
    tracep->declBit(c+731,"Cache_data_io_out_valid", false,-1);
    tracep->declQuad(c+752,"Cache_data_io_out_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+754,"Cache_data_io_out_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+756,"Cache_data_io_out_bits_meat_valid_0", false,-1);
    tracep->declBit(c+757,"Cache_data_io_out_bits_meat_valid_1", false,-1);
    tracep->declArray(c+758,"Cache_data_io_out_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+774,"Cache_data_io_out_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+790,"Cache_data_io_out_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBus(c+792,"Cache_data_io_out_bits_ctrl_data_index", false,-1, 4,0);
    tracep->declBus(c+793,"Cache_data_io_out_bits_ctrl_data_offset", false,-1, 5,0);
    tracep->declBit(c+794,"Scanf_io_in_valid", false,-1);
    tracep->declQuad(c+752,"Scanf_io_in_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+754,"Scanf_io_in_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+756,"Scanf_io_in_bits_meat_valid_0", false,-1);
    tracep->declBit(c+757,"Scanf_io_in_bits_meat_valid_1", false,-1);
    tracep->declArray(c+758,"Scanf_io_in_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+774,"Scanf_io_in_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+790,"Scanf_io_in_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBus(c+792,"Scanf_io_in_bits_ctrl_data_index", false,-1, 4,0);
    tracep->declBit(c+795,"Scanf_io_out_bits_hit", false,-1);
    tracep->declArray(c+796,"Scanf_io_out_bits_data", false,-1, 511,0);
    tracep->declBus(c+792,"Scanf_io_out_bits_meta_ctrl_data_index", false,-1, 4,0);
    tracep->declBit(c+812,"Scanf_io_out_bits_hit_way_0", false,-1);
    tracep->declBit(c+813,"Scanf_io_out_bits_hit_way_1", false,-1);
    tracep->declQuad(c+752,"Scanf_io_out_bits_tag_0", false,-1, 52,0);
    tracep->declQuad(c+754,"Scanf_io_out_bits_tag_1", false,-1, 52,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+814+i*1,"lru", true,(i+0));
    }
    tracep->declBit(c+846,"lru_lru_w_MPORT_en", false,-1);
    tracep->declBus(c+847,"lru_lru_w_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+848,"lru_lru_w_MPORT_data", false,-1);
    tracep->declBit(c+3700,"lru_MPORT_data", false,-1);
    tracep->declBus(c+792,"lru_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+3700,"lru_MPORT_mask", false,-1);
    tracep->declBit(c+849,"lru_MPORT_en", false,-1);
    tracep->declBit(c+3742,"lru_MPORT_1_data", false,-1);
    tracep->declBus(c+792,"lru_MPORT_1_addr", false,-1, 4,0);
    tracep->declBit(c+3700,"lru_MPORT_1_mask", false,-1);
    tracep->declBit(c+850,"lru_MPORT_1_en", false,-1);
    tracep->declBit(c+3742,"lru_MPORT_2_data", false,-1);
    tracep->declBus(c+792,"lru_MPORT_2_addr", false,-1, 4,0);
    tracep->declBit(c+3700,"lru_MPORT_2_mask", false,-1);
    tracep->declBit(c+851,"lru_MPORT_2_en", false,-1);
    tracep->declBit(c+3700,"lru_MPORT_3_data", false,-1);
    tracep->declBus(c+792,"lru_MPORT_3_addr", false,-1, 4,0);
    tracep->declBit(c+3700,"lru_MPORT_3_mask", false,-1);
    tracep->declBit(c+852,"lru_MPORT_3_en", false,-1);
    tracep->declBit(c+846,"lru_lru_w_MPORT_en_pipe_0", false,-1);
    tracep->declBus(c+847,"lru_lru_w_MPORT_addr_pipe_0", false,-1, 4,0);
    tracep->declBus(c+853,"state", false,-1, 2,0);
    tracep->declBus(c+854,"read_state", false,-1, 1,0);
    tracep->declArray(c+855,"data_line_reg", false,-1, 511,0);
    tracep->declQuad(c+871,"mem_addr_reg", false,-1, 63,0);
    tracep->declBit(c+873,"lru_r", false,-1);
    tracep->declBit(c+812,"hit_way_0", false,-1);
    tracep->declBit(c+813,"hit_way_1", false,-1);
    tracep->declBit(c+848,"lru_w", false,-1);
    tracep->declQuad(c+874,"hit_data", false,-1, 63,0);
    tracep->declQuad(c+876,"mem_data", false,-1, 63,0);
    tracep->declBit(c+794,"Scanf_io_in_valid_REG", false,-1);
    tracep->pushNamePrefix("Cache_data ");
    tracep->declBit(c+3695,"clock", false,-1);
    tracep->declBit(c+731,"io_in_valid", false,-1);
    tracep->declQuad(c+3697,"io_in_addr", false,-1, 63,0);
    tracep->declQuad(c+732,"io_write_bus_addr", false,-1, 63,0);
    tracep->declBit(c+734,"io_write_bus_valid", false,-1);
    tracep->declBus(c+735,"io_write_bus_waymask", false,-1, 1,0);
    tracep->declArray(c+736,"io_write_bus_wdata", false,-1, 511,0);
    tracep->declBit(c+731,"io_out_valid", false,-1);
    tracep->declQuad(c+752,"io_out_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+754,"io_out_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+756,"io_out_bits_meat_valid_0", false,-1);
    tracep->declBit(c+757,"io_out_bits_meat_valid_1", false,-1);
    tracep->declArray(c+758,"io_out_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+774,"io_out_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+790,"io_out_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBus(c+792,"io_out_bits_ctrl_data_index", false,-1, 4,0);
    tracep->declBus(c+793,"io_out_bits_ctrl_data_offset", false,-1, 5,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declArray(c+878+i*16,"data_0", true,(i+0), 511,0);
    }
    tracep->declBit(c+1390,"data_0_data_w_en", false,-1);
    tracep->declBus(c+1391,"data_0_data_w_addr", false,-1, 4,0);
    tracep->declArray(c+758,"data_0_data_w_data", false,-1, 511,0);
    tracep->declArray(c+736,"data_0_MPORT_data", false,-1, 511,0);
    tracep->declBus(c+1392,"data_0_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+1393,"data_0_MPORT_mask", false,-1);
    tracep->declBit(c+734,"data_0_MPORT_en", false,-1);
    tracep->declBit(c+1390,"data_0_data_w_en_pipe_0", false,-1);
    tracep->declBus(c+1391,"data_0_data_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declArray(c+1394+i*16,"data_1", true,(i+0), 511,0);
    }
    tracep->declBit(c+1906,"data_1_data_w_en", false,-1);
    tracep->declBus(c+1907,"data_1_data_w_addr", false,-1, 4,0);
    tracep->declArray(c+774,"data_1_data_w_data", false,-1, 511,0);
    tracep->declArray(c+736,"data_1_MPORT_data", false,-1, 511,0);
    tracep->declBus(c+1392,"data_1_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+873,"data_1_MPORT_mask", false,-1);
    tracep->declBit(c+734,"data_1_MPORT_en", false,-1);
    tracep->declBit(c+1906,"data_1_data_w_en_pipe_0", false,-1);
    tracep->declBus(c+1907,"data_1_data_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+1908+i*2,"TAG_0", true,(i+0), 52,0);
    }
    tracep->declBit(c+1972,"TAG_0_tag_w_en", false,-1);
    tracep->declBus(c+1973,"TAG_0_tag_w_addr", false,-1, 4,0);
    tracep->declQuad(c+752,"TAG_0_tag_w_data", false,-1, 52,0);
    tracep->declQuad(c+1974,"TAG_0_MPORT_1_data", false,-1, 52,0);
    tracep->declBus(c+1392,"TAG_0_MPORT_1_addr", false,-1, 4,0);
    tracep->declBit(c+1393,"TAG_0_MPORT_1_mask", false,-1);
    tracep->declBit(c+734,"TAG_0_MPORT_1_en", false,-1);
    tracep->declBit(c+1972,"TAG_0_tag_w_en_pipe_0", false,-1);
    tracep->declBus(c+1973,"TAG_0_tag_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+1976+i*2,"TAG_1", true,(i+0), 52,0);
    }
    tracep->declBit(c+2040,"TAG_1_tag_w_en", false,-1);
    tracep->declBus(c+1973,"TAG_1_tag_w_addr", false,-1, 4,0);
    tracep->declQuad(c+754,"TAG_1_tag_w_data", false,-1, 52,0);
    tracep->declQuad(c+1974,"TAG_1_MPORT_1_data", false,-1, 52,0);
    tracep->declBus(c+1392,"TAG_1_MPORT_1_addr", false,-1, 4,0);
    tracep->declBit(c+873,"TAG_1_MPORT_1_mask", false,-1);
    tracep->declBit(c+734,"TAG_1_MPORT_1_en", false,-1);
    tracep->declBit(c+2040,"TAG_1_tag_w_en_pipe_0", false,-1);
    tracep->declBus(c+1973,"TAG_1_tag_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+2041+i*1,"data_valid_0", true,(i+0));
    }
    tracep->declBit(c+2073,"data_valid_0_valid_w_en", false,-1);
    tracep->declBus(c+1973,"data_valid_0_valid_w_addr", false,-1, 4,0);
    tracep->declBit(c+756,"data_valid_0_valid_w_data", false,-1);
    tracep->declBit(c+3700,"data_valid_0_MPORT_2_data", false,-1);
    tracep->declBus(c+1392,"data_valid_0_MPORT_2_addr", false,-1, 4,0);
    tracep->declBit(c+1393,"data_valid_0_MPORT_2_mask", false,-1);
    tracep->declBit(c+734,"data_valid_0_MPORT_2_en", false,-1);
    tracep->declBit(c+2073,"data_valid_0_valid_w_en_pipe_0", false,-1);
    tracep->declBus(c+1973,"data_valid_0_valid_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+2074+i*1,"data_valid_1", true,(i+0));
    }
    tracep->declBit(c+2106,"data_valid_1_valid_w_en", false,-1);
    tracep->declBus(c+1973,"data_valid_1_valid_w_addr", false,-1, 4,0);
    tracep->declBit(c+757,"data_valid_1_valid_w_data", false,-1);
    tracep->declBit(c+3700,"data_valid_1_MPORT_2_data", false,-1);
    tracep->declBus(c+1392,"data_valid_1_MPORT_2_addr", false,-1, 4,0);
    tracep->declBit(c+873,"data_valid_1_MPORT_2_mask", false,-1);
    tracep->declBit(c+734,"data_valid_1_MPORT_2_en", false,-1);
    tracep->declBit(c+2106,"data_valid_1_valid_w_en_pipe_0", false,-1);
    tracep->declBus(c+1973,"data_valid_1_valid_w_addr_pipe_0", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Scanf ");
    tracep->declBit(c+794,"io_in_valid", false,-1);
    tracep->declQuad(c+752,"io_in_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+754,"io_in_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+756,"io_in_bits_meat_valid_0", false,-1);
    tracep->declBit(c+757,"io_in_bits_meat_valid_1", false,-1);
    tracep->declArray(c+758,"io_in_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+774,"io_in_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+790,"io_in_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBus(c+792,"io_in_bits_ctrl_data_index", false,-1, 4,0);
    tracep->declBit(c+795,"io_out_bits_hit", false,-1);
    tracep->declArray(c+796,"io_out_bits_data", false,-1, 511,0);
    tracep->declBus(c+792,"io_out_bits_meta_ctrl_data_index", false,-1, 4,0);
    tracep->declBit(c+812,"io_out_bits_hit_way_0", false,-1);
    tracep->declBit(c+813,"io_out_bits_hit_way_1", false,-1);
    tracep->declQuad(c+752,"io_out_bits_tag_0", false,-1, 52,0);
    tracep->declQuad(c+754,"io_out_bits_tag_1", false,-1, 52,0);
    tracep->declBit(c+812,"hit_way_0_result", false,-1);
    tracep->declBit(c+813,"hit_way_1_result", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ID ");
    tracep->declBit(c+36,"io_in_valid", false,-1);
    tracep->declQuad(c+37,"io_in_bits_PC", false,-1, 63,0);
    tracep->declBus(c+39,"io_in_bits_Inst", false,-1, 31,0);
    tracep->declQuad(c+1,"io_REG1", false,-1, 63,0);
    tracep->declQuad(c+3,"io_REG2", false,-1, 63,0);
    tracep->declBit(c+27,"io_flush", false,-1);
    tracep->declBit(c+40,"io_ex_is_mem", false,-1);
    tracep->declBus(c+41,"io_ex_reg_rfDest", false,-1, 4,0);
    tracep->declBit(c+42,"io_ex_reg_rfWen", false,-1);
    tracep->declBit(c+43,"io_out_ready", false,-1);
    tracep->declBit(c+44,"io_out_valid", false,-1);
    tracep->declBus(c+45,"io_out_bits_ctrl_signal_src1Type", false,-1, 2,0);
    tracep->declBus(c+46,"io_out_bits_ctrl_signal_src2Type", false,-1, 2,0);
    tracep->declBus(c+47,"io_out_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+48,"io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBus(c+49,"io_out_bits_ctrl_signal_rfSrc1", false,-1, 4,0);
    tracep->declBus(c+50,"io_out_bits_ctrl_signal_rfSrc2", false,-1, 4,0);
    tracep->declBit(c+51,"io_out_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+52,"io_out_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declBus(c+53,"io_out_bits_ctrl_signal_rfDest", false,-1, 4,0);
    tracep->declBit(c+54,"io_out_bits_ctrl_signal_ertn_flush", false,-1);
    tracep->declBit(c+55,"io_out_bits_ctrl_signal_excp_flush", false,-1);
    tracep->declQuad(c+1,"io_out_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+3,"io_out_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+56,"io_out_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declQuad(c+37,"io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+39,"io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declBus(c+58,"io_out_bits_ctrl_csr_csr_idx", false,-1, 11,0);
    tracep->declBus(c+49,"rs", false,-1, 4,0);
    tracep->declBus(c+50,"rt", false,-1, 4,0);
    tracep->declBus(c+53,"rd", false,-1, 4,0);
    tracep->declBus(c+2107,"Inst_decode_0", false,-1, 3,0);
    tracep->declBus(c+52,"Inst_decode_2", false,-1, 6,0);
    tracep->declBit(c+2108,"Inst_decode_3", false,-1);
    tracep->declBus(c+2109,"srctype1", false,-1, 1,0);
    tracep->declBit(c+2110,"srctype2", false,-1);
    tracep->declBit(c+2111,"sign", false,-1);
    tracep->declBit(c+2112,"sign_1", false,-1);
    tracep->declBit(c+2111,"sign_2", false,-1);
    tracep->declBit(c+2111,"sign_3", false,-1);
    tracep->declBit(c+2111,"sign_4", false,-1);
    tracep->declQuad(c+56,"imm", false,-1, 63,0);
    tracep->declBit(c+2113,"stall_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IF ");
    tracep->declBit(c+3695,"clock", false,-1);
    tracep->declBit(c+3696,"reset", false,-1);
    tracep->declBit(c+17,"io_branch_io_is_branch", false,-1);
    tracep->declBit(c+18,"io_branch_io_is_jump", false,-1);
    tracep->declQuad(c+19,"io_branch_io_dnpc", false,-1, 63,0);
    tracep->declBit(c+21,"io_cache_req_addr_req_valid", false,-1);
    tracep->declQuad(c+3697,"io_cache_req_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+22,"io_cache_req_rdata_rep_ready", false,-1);
    tracep->declBit(c+23,"io_cache_req_rdata_rep_valid", false,-1);
    tracep->declQuad(c+24,"io_cache_req_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+22,"io_out_ready", false,-1);
    tracep->declBit(c+23,"io_out_valid", false,-1);
    tracep->declQuad(c+3697,"io_out_bits_PC", false,-1, 63,0);
    tracep->declBus(c+26,"io_out_bits_Inst", false,-1, 31,0);
    tracep->declBit(c+27,"io_flush", false,-1);
    tracep->declBit(c+28,"io_mret_flush", false,-1);
    tracep->declBit(c+29,"io_excp_flush", false,-1);
    tracep->declQuad(c+30,"io_mtvec", false,-1, 63,0);
    tracep->declQuad(c+32,"io_mret", false,-1, 63,0);
    tracep->declBit(c+34,"io_wb_stall", false,-1);
    tracep->declBit(c+35,"io_ex_stall", false,-1);
    tracep->declQuad(c+2114,"temp", false,-1, 63,0);
    tracep->declBus(c+2116,"inst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MEM ");
    tracep->declBit(c+78,"io_in_ready", false,-1);
    tracep->declBit(c+238,"io_in_valid", false,-1);
    tracep->declBus(c+239,"io_in_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+240,"io_in_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+241,"io_in_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+242,"io_in_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declBit(c+243,"io_in_bits_ctrl_signal_ertn_flush", false,-1);
    tracep->declBit(c+244,"io_in_bits_ctrl_signal_excp_flush", false,-1);
    tracep->declQuad(c+245,"io_in_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+247,"io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+248,"io_in_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+250,"io_in_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declQuad(c+251,"io_in_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+253,"io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+255,"io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+257,"io_in_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declQuad(c+259,"io_in_bits_ctrl_csr_csr_data", false,-1, 63,0);
    tracep->declBit(c+261,"io_in_bits_ctrl_csr_csr_en", false,-1);
    tracep->declBus(c+262,"io_in_bits_ctrl_csr_csr_idx", false,-1, 11,0);
    tracep->declBit(c+263,"io_out_ready", false,-1);
    tracep->declBit(c+264,"io_out_valid", false,-1);
    tracep->declBit(c+265,"io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+241,"io_out_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBit(c+243,"io_out_bits_ctrl_signal_ertn_flush", false,-1);
    tracep->declBit(c+244,"io_out_bits_ctrl_signal_excp_flush", false,-1);
    tracep->declQuad(c+245,"io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+247,"io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+248,"io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBit(c+266,"io_out_bits_ctrl_flow_skip", false,-1);
    tracep->declBus(c+250,"io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+267,"io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+5,"io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+259,"io_out_bits_ctrl_csr_csr_data", false,-1, 63,0);
    tracep->declBit(c+268,"io_out_bits_ctrl_csr_csr_en", false,-1);
    tracep->declBus(c+262,"io_out_bits_ctrl_csr_csr_idx", false,-1, 11,0);
    tracep->declBit(c+269,"io_cache_io_addr_req_valid", false,-1);
    tracep->declQuad(c+270,"io_cache_io_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+269,"io_cache_io_addr_req_bits_ce", false,-1);
    tracep->declBit(c+272,"io_cache_io_addr_req_bits_we", false,-1);
    tracep->declBit(c+273,"io_cache_io_rdata_rep_valid", false,-1);
    tracep->declQuad(c+7,"io_cache_io_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+274,"io_cache_io_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+276,"io_cache_io_wdata_req_bits_wmask", false,-1, 7,0);
    tracep->declBit(c+277,"io_cache_io_wdata_rep", false,-1);
    tracep->declQuad(c+270,"addr_temp", false,-1, 63,0);
    tracep->declBit(c+11,"mem_result_sign", false,-1);
    tracep->declBit(c+12,"mem_result_sign_1", false,-1);
    tracep->declBit(c+13,"mem_result_sign_2", false,-1);
    tracep->declBit(c+14,"mem_result_sign_3", false,-1);
    tracep->declQuad(c+15,"mem_result", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MMEM ");
    tracep->declBus(c+3743,"BUS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+3743,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+3695,"clk", false,-1);
    tracep->declBit(c+3696,"reset", false,-1);
    tracep->declBit(c+308,"ar_valid", false,-1);
    tracep->declBit(c+309,"ar_ready", false,-1);
    tracep->declBus(c+3734,"ar_id", false,-1, 3,0);
    tracep->declBus(c+312,"ar_len", false,-1, 7,0);
    tracep->declBus(c+3735,"ar_size", false,-1, 2,0);
    tracep->declQuad(c+310,"ar_addr", false,-1, 63,0);
    tracep->declBus(c+3736,"ar_prot", false,-1, 2,0);
    tracep->declBus(c+3737,"ar_burst", false,-1, 1,0);
    tracep->declBus(c+3733,"ar_lock", false,-1, 1,0);
    tracep->declBus(c+3738,"ar_cache", false,-1, 3,0);
    tracep->declBit(c+314,"aw_valid", false,-1);
    tracep->declBit(c+315,"aw_ready", false,-1);
    tracep->declBus(c+3734,"aw_id", false,-1, 3,0);
    tracep->declBus(c+312,"aw_len", false,-1, 7,0);
    tracep->declBus(c+3735,"aw_size", false,-1, 2,0);
    tracep->declQuad(c+316,"aw_addr", false,-1, 63,0);
    tracep->declBus(c+3736,"aw_prot", false,-1, 2,0);
    tracep->declBus(c+3737,"aw_burst", false,-1, 1,0);
    tracep->declBus(c+3733,"aw_lock", false,-1, 1,0);
    tracep->declBus(c+3738,"aw_cache", false,-1, 3,0);
    tracep->declBit(c+313,"rd_valid", false,-1);
    tracep->declBit(c+3700,"rd_ready", false,-1);
    tracep->declBus(c+3739,"rd_id", false,-1, 3,0);
    tracep->declQuad(c+9,"rd_data", false,-1, 63,0);
    tracep->declBus(c+3740,"rd_resp", false,-1, 1,0);
    tracep->declBit(c+306,"rd_last", false,-1);
    tracep->declBit(c+318,"wd_valid", false,-1);
    tracep->declBit(c+319,"wd_ready", false,-1);
    tracep->declBus(c+3734,"wd_id", false,-1, 3,0);
    tracep->declQuad(c+320,"wd_data", false,-1, 63,0);
    tracep->declBus(c+322,"wstrb", false,-1, 7,0);
    tracep->declBit(c+323,"wd_last", false,-1);
    tracep->declBit(c+324,"wr_valid", false,-1);
    tracep->declBit(c+325,"wr_ready", false,-1);
    tracep->declBus(c+3741,"wr_id", false,-1, 3,0);
    tracep->declBus(c+3733,"wr_breap", false,-1, 1,0);
    tracep->declBus(c+3733,"idle", false,-1, 1,0);
    tracep->declBus(c+3737,"ready", false,-1, 1,0);
    tracep->declBus(c+3744,"data_transform", false,-1, 1,0);
    tracep->declBus(c+2117,"read_state", false,-1, 1,0);
    tracep->declBus(c+2118,"write_state", false,-1, 1,0);
    tracep->declBus(c+2119,"read_next_state", false,-1, 1,0);
    tracep->declBus(c+2120,"write_next_state", false,-1, 1,0);
    tracep->declQuad(c+9,"rdata", false,-1, 63,0);
    tracep->declQuad(c+2121,"write_addr_buffer", false,-1, 63,0);
    tracep->declQuad(c+2123,"read_addr_buffer", false,-1, 63,0);
    tracep->declBus(c+2125,"read_count", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MMIO ");
    tracep->declBit(c+3695,"clock", false,-1);
    tracep->declBit(c+3696,"reset", false,-1);
    tracep->declBit(c+269,"io_in_addr_req_valid", false,-1);
    tracep->declQuad(c+270,"io_in_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+269,"io_in_addr_req_bits_ce", false,-1);
    tracep->declBit(c+272,"io_in_addr_req_bits_we", false,-1);
    tracep->declBit(c+273,"io_in_rdata_rep_valid", false,-1);
    tracep->declQuad(c+7,"io_in_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+274,"io_in_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+276,"io_in_wdata_req_bits_wmask", false,-1, 7,0);
    tracep->declBit(c+277,"io_in_wdata_rep", false,-1);
    tracep->declBit(c+326,"io_out_raddr_req_ready", false,-1);
    tracep->declBit(c+327,"io_out_raddr_req_valid", false,-1);
    tracep->declQuad(c+328,"io_out_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBus(c+330,"io_out_raddr_req_bits_len", false,-1, 7,0);
    tracep->declBit(c+331,"io_out_waddr_req_ready", false,-1);
    tracep->declBit(c+332,"io_out_waddr_req_valid", false,-1);
    tracep->declQuad(c+333,"io_out_waddr_req_bits_addr", false,-1, 63,0);
    tracep->declBus(c+330,"io_out_waddr_req_bits_len", false,-1, 7,0);
    tracep->declBit(c+3700,"io_out_rdata_rep_ready", false,-1);
    tracep->declBit(c+335,"io_out_rdata_rep_valid", false,-1);
    tracep->declQuad(c+9,"io_out_rdata_rep_bits_data", false,-1, 63,0);
    tracep->declBit(c+306,"io_out_rdata_rep_bits_last", false,-1);
    tracep->declBit(c+336,"io_out_wdata_req_ready", false,-1);
    tracep->declBit(c+337,"io_out_wdata_req_valid", false,-1);
    tracep->declQuad(c+338,"io_out_wdata_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+340,"io_out_wdata_req_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+341,"io_out_wdata_req_bits_last", false,-1);
    tracep->declBit(c+342,"io_out_wb_ready", false,-1);
    tracep->declBit(c+343,"io_out_wb_valid", false,-1);
    tracep->declBus(c+3733,"io_out_wb_bits_breap", false,-1, 1,0);
    tracep->declBit(c+3695,"DCACHE_clock", false,-1);
    tracep->declBit(c+3696,"DCACHE_reset", false,-1);
    tracep->declBit(c+2126,"DCACHE_io_in_addr_req_valid", false,-1);
    tracep->declQuad(c+270,"DCACHE_io_in_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+272,"DCACHE_io_in_addr_req_bits_we", false,-1);
    tracep->declBit(c+2127,"DCACHE_io_in_rdata_rep_ready", false,-1);
    tracep->declBit(c+2128,"DCACHE_io_in_rdata_rep_valid", false,-1);
    tracep->declQuad(c+2129,"DCACHE_io_in_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+274,"DCACHE_io_in_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+276,"DCACHE_io_in_wdata_req_bits_wmask", false,-1, 7,0);
    tracep->declBit(c+2131,"DCACHE_io_in_wdata_rep", false,-1);
    tracep->declBit(c+2132,"DCACHE_io_out_raddr_req_ready", false,-1);
    tracep->declBit(c+2133,"DCACHE_io_out_raddr_req_valid", false,-1);
    tracep->declQuad(c+2134,"DCACHE_io_out_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+2136,"DCACHE_io_out_waddr_req_ready", false,-1);
    tracep->declBit(c+2137,"DCACHE_io_out_waddr_req_valid", false,-1);
    tracep->declQuad(c+2138,"DCACHE_io_out_waddr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+2140,"DCACHE_io_out_rdata_rep_valid", false,-1);
    tracep->declQuad(c+9,"DCACHE_io_out_rdata_rep_bits_data", false,-1, 63,0);
    tracep->declBit(c+306,"DCACHE_io_out_rdata_rep_bits_last", false,-1);
    tracep->declBit(c+2141,"DCACHE_io_out_wdata_req_ready", false,-1);
    tracep->declBit(c+2142,"DCACHE_io_out_wdata_req_valid", false,-1);
    tracep->declQuad(c+2143,"DCACHE_io_out_wdata_req_bits_data", false,-1, 63,0);
    tracep->declBit(c+2145,"DCACHE_io_out_wdata_req_bits_last", false,-1);
    tracep->declBit(c+2146,"DCACHE_io_out_wb_valid", false,-1);
    tracep->declBus(c+3733,"DCACHE_io_out_wb_bits_breap", false,-1, 1,0);
    tracep->declBit(c+3695,"birdge_clock", false,-1);
    tracep->declBit(c+3696,"birdge_reset", false,-1);
    tracep->declBit(c+2147,"birdge_io_in_addr_req_valid", false,-1);
    tracep->declQuad(c+270,"birdge_io_in_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+269,"birdge_io_in_addr_req_bits_ce", false,-1);
    tracep->declBit(c+272,"birdge_io_in_addr_req_bits_we", false,-1);
    tracep->declBit(c+2148,"birdge_io_in_rdata_rep_ready", false,-1);
    tracep->declBit(c+2149,"birdge_io_in_rdata_rep_valid", false,-1);
    tracep->declQuad(c+9,"birdge_io_in_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+2148,"birdge_io_in_wdata_req_valid", false,-1);
    tracep->declQuad(c+274,"birdge_io_in_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+276,"birdge_io_in_wdata_req_bits_wmask", false,-1, 7,0);
    tracep->declBit(c+2150,"birdge_io_in_wdata_rep", false,-1);
    tracep->declBit(c+2151,"birdge_io_out_raddr_req_ready", false,-1);
    tracep->declBit(c+2152,"birdge_io_out_raddr_req_valid", false,-1);
    tracep->declQuad(c+270,"birdge_io_out_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+2153,"birdge_io_out_waddr_req_ready", false,-1);
    tracep->declBit(c+2154,"birdge_io_out_waddr_req_valid", false,-1);
    tracep->declQuad(c+270,"birdge_io_out_waddr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+2148,"birdge_io_out_rdata_rep_ready", false,-1);
    tracep->declBit(c+2149,"birdge_io_out_rdata_rep_valid", false,-1);
    tracep->declQuad(c+9,"birdge_io_out_rdata_rep_bits_data", false,-1, 63,0);
    tracep->declBit(c+306,"birdge_io_out_rdata_rep_bits_last", false,-1);
    tracep->declBit(c+2155,"birdge_io_out_wdata_req_ready", false,-1);
    tracep->declBit(c+2148,"birdge_io_out_wdata_req_valid", false,-1);
    tracep->declQuad(c+274,"birdge_io_out_wdata_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+276,"birdge_io_out_wdata_req_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+2156,"birdge_io_out_wdata_req_bits_last", false,-1);
    tracep->declBit(c+2157,"birdge_io_out_wb_ready", false,-1);
    tracep->declBit(c+2150,"birdge_io_out_wb_valid", false,-1);
    tracep->declBus(c+3733,"birdge_io_out_wb_bits_breap", false,-1, 1,0);
    tracep->pushNamePrefix("DCACHE ");
    tracep->declBit(c+3695,"clock", false,-1);
    tracep->declBit(c+3696,"reset", false,-1);
    tracep->declBit(c+2126,"io_in_addr_req_valid", false,-1);
    tracep->declQuad(c+270,"io_in_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+272,"io_in_addr_req_bits_we", false,-1);
    tracep->declBit(c+2127,"io_in_rdata_rep_ready", false,-1);
    tracep->declBit(c+2128,"io_in_rdata_rep_valid", false,-1);
    tracep->declQuad(c+2129,"io_in_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+274,"io_in_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+276,"io_in_wdata_req_bits_wmask", false,-1, 7,0);
    tracep->declBit(c+2131,"io_in_wdata_rep", false,-1);
    tracep->declBit(c+2132,"io_out_raddr_req_ready", false,-1);
    tracep->declBit(c+2133,"io_out_raddr_req_valid", false,-1);
    tracep->declQuad(c+2134,"io_out_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+2136,"io_out_waddr_req_ready", false,-1);
    tracep->declBit(c+2137,"io_out_waddr_req_valid", false,-1);
    tracep->declQuad(c+2138,"io_out_waddr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+2140,"io_out_rdata_rep_valid", false,-1);
    tracep->declQuad(c+9,"io_out_rdata_rep_bits_data", false,-1, 63,0);
    tracep->declBit(c+306,"io_out_rdata_rep_bits_last", false,-1);
    tracep->declBit(c+2141,"io_out_wdata_req_ready", false,-1);
    tracep->declBit(c+2142,"io_out_wdata_req_valid", false,-1);
    tracep->declQuad(c+2143,"io_out_wdata_req_bits_data", false,-1, 63,0);
    tracep->declBit(c+2145,"io_out_wdata_req_bits_last", false,-1);
    tracep->declBit(c+2146,"io_out_wb_valid", false,-1);
    tracep->declBus(c+3733,"io_out_wb_bits_breap", false,-1, 1,0);
    tracep->declBit(c+3695,"Cache_data_clock", false,-1);
    tracep->declBit(c+2158,"Cache_data_io_in_valid", false,-1);
    tracep->declQuad(c+270,"Cache_data_io_in_addr", false,-1, 63,0);
    tracep->declQuad(c+2159,"Cache_data_io_write_bus_addr", false,-1, 63,0);
    tracep->declBit(c+2161,"Cache_data_io_write_bus_valid", false,-1);
    tracep->declBus(c+2162,"Cache_data_io_write_bus_waymask", false,-1, 1,0);
    tracep->declArray(c+2163,"Cache_data_io_write_bus_wdata", false,-1, 511,0);
    tracep->declBit(c+2158,"Cache_data_io_out_valid", false,-1);
    tracep->declQuad(c+2179,"Cache_data_io_out_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+2181,"Cache_data_io_out_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+2183,"Cache_data_io_out_bits_meat_valid_0", false,-1);
    tracep->declBit(c+2184,"Cache_data_io_out_bits_meat_valid_1", false,-1);
    tracep->declArray(c+2185,"Cache_data_io_out_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+2201,"Cache_data_io_out_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+2217,"Cache_data_io_out_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBus(c+2219,"Cache_data_io_out_bits_ctrl_data_index", false,-1, 4,0);
    tracep->declBus(c+2220,"Cache_data_io_out_bits_ctrl_data_offset", false,-1, 5,0);
    tracep->declBit(c+2221,"Scanf_io_in_valid", false,-1);
    tracep->declQuad(c+2179,"Scanf_io_in_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+2181,"Scanf_io_in_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+2183,"Scanf_io_in_bits_meat_valid_0", false,-1);
    tracep->declBit(c+2184,"Scanf_io_in_bits_meat_valid_1", false,-1);
    tracep->declArray(c+2185,"Scanf_io_in_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+2201,"Scanf_io_in_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+2217,"Scanf_io_in_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBus(c+2219,"Scanf_io_in_bits_ctrl_data_index", false,-1, 4,0);
    tracep->declBit(c+2222,"Scanf_io_out_bits_hit", false,-1);
    tracep->declArray(c+2223,"Scanf_io_out_bits_data", false,-1, 511,0);
    tracep->declBus(c+2219,"Scanf_io_out_bits_meta_ctrl_data_index", false,-1, 4,0);
    tracep->declBit(c+2239,"Scanf_io_out_bits_hit_way_0", false,-1);
    tracep->declBit(c+2240,"Scanf_io_out_bits_hit_way_1", false,-1);
    tracep->declQuad(c+2179,"Scanf_io_out_bits_tag_0", false,-1, 52,0);
    tracep->declQuad(c+2181,"Scanf_io_out_bits_tag_1", false,-1, 52,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+2241+i*1,"lru", true,(i+0));
    }
    tracep->declBit(c+2273,"lru_lru_w_MPORT_en", false,-1);
    tracep->declBus(c+2274,"lru_lru_w_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+2275,"lru_lru_w_MPORT_data", false,-1);
    tracep->declBit(c+3700,"lru_MPORT_data", false,-1);
    tracep->declBus(c+2219,"lru_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+3700,"lru_MPORT_mask", false,-1);
    tracep->declBit(c+2276,"lru_MPORT_en", false,-1);
    tracep->declBit(c+3742,"lru_MPORT_1_data", false,-1);
    tracep->declBus(c+2219,"lru_MPORT_1_addr", false,-1, 4,0);
    tracep->declBit(c+3700,"lru_MPORT_1_mask", false,-1);
    tracep->declBit(c+2277,"lru_MPORT_1_en", false,-1);
    tracep->declBit(c+3742,"lru_MPORT_2_data", false,-1);
    tracep->declBus(c+2219,"lru_MPORT_2_addr", false,-1, 4,0);
    tracep->declBit(c+3700,"lru_MPORT_2_mask", false,-1);
    tracep->declBit(c+2278,"lru_MPORT_2_en", false,-1);
    tracep->declBit(c+3700,"lru_MPORT_3_data", false,-1);
    tracep->declBus(c+2219,"lru_MPORT_3_addr", false,-1, 4,0);
    tracep->declBit(c+3700,"lru_MPORT_3_mask", false,-1);
    tracep->declBit(c+2279,"lru_MPORT_3_en", false,-1);
    tracep->declBit(c+2273,"lru_lru_w_MPORT_en_pipe_0", false,-1);
    tracep->declBus(c+2274,"lru_lru_w_MPORT_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+2280+i*1,"dirt_0", true,(i+0));
    }
    tracep->declBit(c+2312,"dirt_0_dirt_w_en", false,-1);
    tracep->declBus(c+2313,"dirt_0_dirt_w_addr", false,-1, 4,0);
    tracep->declBit(c+2314,"dirt_0_dirt_w_data", false,-1);
    tracep->declBit(c+3700,"dirt_0_MPORT_4_data", false,-1);
    tracep->declBus(c+2219,"dirt_0_MPORT_4_addr", false,-1, 4,0);
    tracep->declBit(c+2315,"dirt_0_MPORT_4_mask", false,-1);
    tracep->declBit(c+2316,"dirt_0_MPORT_4_en", false,-1);
    tracep->declBit(c+2312,"dirt_0_dirt_w_en_pipe_0", false,-1);
    tracep->declBus(c+2313,"dirt_0_dirt_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+2317+i*1,"dirt_1", true,(i+0));
    }
    tracep->declBit(c+2349,"dirt_1_dirt_w_en", false,-1);
    tracep->declBus(c+2350,"dirt_1_dirt_w_addr", false,-1, 4,0);
    tracep->declBit(c+2351,"dirt_1_dirt_w_data", false,-1);
    tracep->declBit(c+3700,"dirt_1_MPORT_4_data", false,-1);
    tracep->declBus(c+2219,"dirt_1_MPORT_4_addr", false,-1, 4,0);
    tracep->declBit(c+2352,"dirt_1_MPORT_4_mask", false,-1);
    tracep->declBit(c+2316,"dirt_1_MPORT_4_en", false,-1);
    tracep->declBit(c+2349,"dirt_1_dirt_w_en_pipe_0", false,-1);
    tracep->declBus(c+2350,"dirt_1_dirt_w_addr_pipe_0", false,-1, 4,0);
    tracep->declBus(c+2353,"state", false,-1, 2,0);
    tracep->declBus(c+2354,"read_state", false,-1, 1,0);
    tracep->declBus(c+2355,"write_state", false,-1, 1,0);
    tracep->declArray(c+2356,"data_line_reg", false,-1, 511,0);
    tracep->declQuad(c+2372,"mem_addr_reg", false,-1, 63,0);
    tracep->declBit(c+2374,"lru_r", false,-1);
    tracep->declBus(c+2375,"count_write", false,-1, 3,0);
    tracep->declQuad(c+2376,"mem_write_addr_reg", false,-1, 63,0);
    tracep->declArray(c+2378,"mem_write_data_reg", false,-1, 511,0);
    tracep->declBit(c+2275,"lru_w", false,-1);
    tracep->declBit(c+2239,"hit_way_0", false,-1);
    tracep->declBit(c+2240,"hit_way_1", false,-1);
    tracep->declQuad(c+2394,"hit_data", false,-1, 63,0);
    tracep->declQuad(c+2396,"mem_data", false,-1, 63,0);
    tracep->declBit(c+2221,"Scanf_io_in_valid_REG", false,-1);
    tracep->declQuad(c+2398,"wmaskextend_Genmask", false,-1, 63,0);
    tracep->declQuad(c+2400,"wmaskextend_lo_lo_lo", false,-1, 63,0);
    tracep->declArray(c+2402,"wmaskextend_lo_lo", false,-1, 127,0);
    tracep->declQuad(c+2406,"wmaskextend_lo_hi_lo", false,-1, 63,0);
    tracep->declArray(c+2408,"wmaskextend_lo", false,-1, 255,0);
    tracep->declQuad(c+2416,"wmaskextend_hi_lo_lo", false,-1, 63,0);
    tracep->declArray(c+2418,"wmaskextend_hi_lo", false,-1, 127,0);
    tracep->declQuad(c+2422,"wmaskextend_hi_hi_lo", false,-1, 63,0);
    tracep->declArray(c+2424,"wmaskextend_hi", false,-1, 255,0);
    tracep->declArray(c+2432,"wmaskextend", false,-1, 511,0);
    tracep->declArray(c+2448,"wdata_extend", false,-1, 511,0);
    tracep->declBus(c+2162,"waymask", false,-1, 1,0);
    tracep->pushNamePrefix("Cache_data ");
    tracep->declBit(c+3695,"clock", false,-1);
    tracep->declBit(c+2158,"io_in_valid", false,-1);
    tracep->declQuad(c+270,"io_in_addr", false,-1, 63,0);
    tracep->declQuad(c+2159,"io_write_bus_addr", false,-1, 63,0);
    tracep->declBit(c+2161,"io_write_bus_valid", false,-1);
    tracep->declBus(c+2162,"io_write_bus_waymask", false,-1, 1,0);
    tracep->declArray(c+2163,"io_write_bus_wdata", false,-1, 511,0);
    tracep->declBit(c+2158,"io_out_valid", false,-1);
    tracep->declQuad(c+2179,"io_out_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+2181,"io_out_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+2183,"io_out_bits_meat_valid_0", false,-1);
    tracep->declBit(c+2184,"io_out_bits_meat_valid_1", false,-1);
    tracep->declArray(c+2185,"io_out_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+2201,"io_out_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+2217,"io_out_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBus(c+2219,"io_out_bits_ctrl_data_index", false,-1, 4,0);
    tracep->declBus(c+2220,"io_out_bits_ctrl_data_offset", false,-1, 5,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declArray(c+2464+i*16,"data_0", true,(i+0), 511,0);
    }
    tracep->declBit(c+2976,"data_0_data_w_en", false,-1);
    tracep->declBus(c+2977,"data_0_data_w_addr", false,-1, 4,0);
    tracep->declArray(c+2185,"data_0_data_w_data", false,-1, 511,0);
    tracep->declArray(c+2163,"data_0_MPORT_data", false,-1, 511,0);
    tracep->declBus(c+2978,"data_0_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+2315,"data_0_MPORT_mask", false,-1);
    tracep->declBit(c+2161,"data_0_MPORT_en", false,-1);
    tracep->declBit(c+2976,"data_0_data_w_en_pipe_0", false,-1);
    tracep->declBus(c+2977,"data_0_data_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declArray(c+2979+i*16,"data_1", true,(i+0), 511,0);
    }
    tracep->declBit(c+3491,"data_1_data_w_en", false,-1);
    tracep->declBus(c+3492,"data_1_data_w_addr", false,-1, 4,0);
    tracep->declArray(c+2201,"data_1_data_w_data", false,-1, 511,0);
    tracep->declArray(c+2163,"data_1_MPORT_data", false,-1, 511,0);
    tracep->declBus(c+2978,"data_1_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+2352,"data_1_MPORT_mask", false,-1);
    tracep->declBit(c+2161,"data_1_MPORT_en", false,-1);
    tracep->declBit(c+3491,"data_1_data_w_en_pipe_0", false,-1);
    tracep->declBus(c+3492,"data_1_data_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+3493+i*2,"TAG_0", true,(i+0), 52,0);
    }
    tracep->declBit(c+3557,"TAG_0_tag_w_en", false,-1);
    tracep->declBus(c+3558,"TAG_0_tag_w_addr", false,-1, 4,0);
    tracep->declQuad(c+2179,"TAG_0_tag_w_data", false,-1, 52,0);
    tracep->declQuad(c+3559,"TAG_0_MPORT_1_data", false,-1, 52,0);
    tracep->declBus(c+2978,"TAG_0_MPORT_1_addr", false,-1, 4,0);
    tracep->declBit(c+2315,"TAG_0_MPORT_1_mask", false,-1);
    tracep->declBit(c+2161,"TAG_0_MPORT_1_en", false,-1);
    tracep->declBit(c+3557,"TAG_0_tag_w_en_pipe_0", false,-1);
    tracep->declBus(c+3558,"TAG_0_tag_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+3561+i*2,"TAG_1", true,(i+0), 52,0);
    }
    tracep->declBit(c+3625,"TAG_1_tag_w_en", false,-1);
    tracep->declBus(c+3626,"TAG_1_tag_w_addr", false,-1, 4,0);
    tracep->declQuad(c+2181,"TAG_1_tag_w_data", false,-1, 52,0);
    tracep->declQuad(c+3559,"TAG_1_MPORT_1_data", false,-1, 52,0);
    tracep->declBus(c+2978,"TAG_1_MPORT_1_addr", false,-1, 4,0);
    tracep->declBit(c+2352,"TAG_1_MPORT_1_mask", false,-1);
    tracep->declBit(c+2161,"TAG_1_MPORT_1_en", false,-1);
    tracep->declBit(c+3625,"TAG_1_tag_w_en_pipe_0", false,-1);
    tracep->declBus(c+3626,"TAG_1_tag_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+3627+i*1,"data_valid_0", true,(i+0));
    }
    tracep->declBit(c+3659,"data_valid_0_valid_w_en", false,-1);
    tracep->declBus(c+3626,"data_valid_0_valid_w_addr", false,-1, 4,0);
    tracep->declBit(c+2183,"data_valid_0_valid_w_data", false,-1);
    tracep->declBit(c+3700,"data_valid_0_MPORT_2_data", false,-1);
    tracep->declBus(c+2978,"data_valid_0_MPORT_2_addr", false,-1, 4,0);
    tracep->declBit(c+2315,"data_valid_0_MPORT_2_mask", false,-1);
    tracep->declBit(c+2161,"data_valid_0_MPORT_2_en", false,-1);
    tracep->declBit(c+3659,"data_valid_0_valid_w_en_pipe_0", false,-1);
    tracep->declBus(c+3626,"data_valid_0_valid_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+3660+i*1,"data_valid_1", true,(i+0));
    }
    tracep->declBit(c+3692,"data_valid_1_valid_w_en", false,-1);
    tracep->declBus(c+3626,"data_valid_1_valid_w_addr", false,-1, 4,0);
    tracep->declBit(c+2184,"data_valid_1_valid_w_data", false,-1);
    tracep->declBit(c+3700,"data_valid_1_MPORT_2_data", false,-1);
    tracep->declBus(c+2978,"data_valid_1_MPORT_2_addr", false,-1, 4,0);
    tracep->declBit(c+2352,"data_valid_1_MPORT_2_mask", false,-1);
    tracep->declBit(c+2161,"data_valid_1_MPORT_2_en", false,-1);
    tracep->declBit(c+3692,"data_valid_1_valid_w_en_pipe_0", false,-1);
    tracep->declBus(c+3626,"data_valid_1_valid_w_addr_pipe_0", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Scanf ");
    tracep->declBit(c+2221,"io_in_valid", false,-1);
    tracep->declQuad(c+2179,"io_in_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+2181,"io_in_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+2183,"io_in_bits_meat_valid_0", false,-1);
    tracep->declBit(c+2184,"io_in_bits_meat_valid_1", false,-1);
    tracep->declArray(c+2185,"io_in_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+2201,"io_in_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+2217,"io_in_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBus(c+2219,"io_in_bits_ctrl_data_index", false,-1, 4,0);
    tracep->declBit(c+2222,"io_out_bits_hit", false,-1);
    tracep->declArray(c+2223,"io_out_bits_data", false,-1, 511,0);
    tracep->declBus(c+2219,"io_out_bits_meta_ctrl_data_index", false,-1, 4,0);
    tracep->declBit(c+2239,"io_out_bits_hit_way_0", false,-1);
    tracep->declBit(c+2240,"io_out_bits_hit_way_1", false,-1);
    tracep->declQuad(c+2179,"io_out_bits_tag_0", false,-1, 52,0);
    tracep->declQuad(c+2181,"io_out_bits_tag_1", false,-1, 52,0);
    tracep->declBit(c+2239,"hit_way_0_result", false,-1);
    tracep->declBit(c+2240,"hit_way_1_result", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("birdge ");
    tracep->declBit(c+3695,"clock", false,-1);
    tracep->declBit(c+3696,"reset", false,-1);
    tracep->declBit(c+2147,"io_in_addr_req_valid", false,-1);
    tracep->declQuad(c+270,"io_in_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+269,"io_in_addr_req_bits_ce", false,-1);
    tracep->declBit(c+272,"io_in_addr_req_bits_we", false,-1);
    tracep->declBit(c+2148,"io_in_rdata_rep_ready", false,-1);
    tracep->declBit(c+2149,"io_in_rdata_rep_valid", false,-1);
    tracep->declQuad(c+9,"io_in_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+2148,"io_in_wdata_req_valid", false,-1);
    tracep->declQuad(c+274,"io_in_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+276,"io_in_wdata_req_bits_wmask", false,-1, 7,0);
    tracep->declBit(c+2150,"io_in_wdata_rep", false,-1);
    tracep->declBit(c+2151,"io_out_raddr_req_ready", false,-1);
    tracep->declBit(c+2152,"io_out_raddr_req_valid", false,-1);
    tracep->declQuad(c+270,"io_out_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+2153,"io_out_waddr_req_ready", false,-1);
    tracep->declBit(c+2154,"io_out_waddr_req_valid", false,-1);
    tracep->declQuad(c+270,"io_out_waddr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+2148,"io_out_rdata_rep_ready", false,-1);
    tracep->declBit(c+2149,"io_out_rdata_rep_valid", false,-1);
    tracep->declQuad(c+9,"io_out_rdata_rep_bits_data", false,-1, 63,0);
    tracep->declBit(c+306,"io_out_rdata_rep_bits_last", false,-1);
    tracep->declBit(c+2155,"io_out_wdata_req_ready", false,-1);
    tracep->declBit(c+2148,"io_out_wdata_req_valid", false,-1);
    tracep->declQuad(c+274,"io_out_wdata_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+276,"io_out_wdata_req_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+2156,"io_out_wdata_req_bits_last", false,-1);
    tracep->declBit(c+2157,"io_out_wb_ready", false,-1);
    tracep->declBit(c+2150,"io_out_wb_valid", false,-1);
    tracep->declBus(c+3733,"io_out_wb_bits_breap", false,-1, 1,0);
    tracep->declBus(c+3693,"read_state", false,-1, 1,0);
    tracep->declBus(c+3694,"write_state", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("WB ");
    tracep->declBit(c+263,"io_in_ready", false,-1);
    tracep->declBit(c+278,"io_in_valid", false,-1);
    tracep->declBit(c+279,"io_in_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+280,"io_in_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBit(c+281,"io_in_bits_ctrl_signal_ertn_flush", false,-1);
    tracep->declBit(c+282,"io_in_bits_ctrl_signal_excp_flush", false,-1);
    tracep->declQuad(c+283,"io_in_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+3699,"io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+285,"io_in_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBit(c+287,"io_in_bits_ctrl_flow_skip", false,-1);
    tracep->declBus(c+236,"io_in_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declQuad(c+288,"io_in_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+290,"io_in_bits_ctrl_csr_csr_data", false,-1, 63,0);
    tracep->declBit(c+292,"io_in_bits_ctrl_csr_csr_en", false,-1);
    tracep->declBus(c+293,"io_in_bits_ctrl_csr_csr_idx", false,-1, 11,0);
    tracep->declBit(c+3700,"io_out_ready", false,-1);
    tracep->declBit(c+294,"io_out_valid", false,-1);
    tracep->declBit(c+295,"io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+28,"io_out_bits_ctrl_signal_ertn_flush", false,-1);
    tracep->declBit(c+29,"io_out_bits_ctrl_signal_excp_flush", false,-1);
    tracep->declQuad(c+283,"io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+3699,"io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+285,"io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBit(c+287,"io_out_bits_ctrl_flow_skip", false,-1);
    tracep->declBus(c+236,"io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+237,"io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+288,"io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+290,"io_out_bits_ctrl_csr_csr_data", false,-1, 63,0);
    tracep->declBit(c+296,"io_out_bits_ctrl_csr_csr_en", false,-1);
    tracep->declBus(c+293,"io_out_bits_ctrl_csr_csr_idx", false,-1, 11,0);
    tracep->declBit(c+91,"io_icache_busy", false,-1);
    tracep->declBit(c+34,"io_stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("bypass ");
    tracep->declBus(c+41,"io_EX_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+42,"io_EX_rf_rfWen", false,-1);
    tracep->declQuad(c+80,"io_EX_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+250,"io_MEM_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+267,"io_MEM_rf_rfWen", false,-1);
    tracep->declQuad(c+5,"io_MEM_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+236,"io_WB_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+237,"io_WB_rf_rfWen", false,-1);
    tracep->declQuad(c+288,"io_WB_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+297,"io_Reg1", false,-1, 63,0);
    tracep->declBus(c+49,"io_reg_index1", false,-1, 4,0);
    tracep->declQuad(c+299,"io_Reg2", false,-1, 63,0);
    tracep->declBus(c+50,"io_reg_index2", false,-1, 4,0);
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
    VlWide<3>/*95:0*/ __Vtemp_h890baa9f__0;
    VlWide<5>/*159:0*/ __Vtemp_h559cd7fe__0;
    VlWide<16>/*511:0*/ __Vtemp_h55336ec1__0;
    VlWide<16>/*511:0*/ __Vtemp_hba2e3c61__0;
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
    bufp->fullBit(oldp+28,(vlSelf->CoreTop__DOT__IF_io_mret_flush));
    bufp->fullBit(oldp+29,(vlSelf->CoreTop__DOT__IF_io_excp_flush));
    bufp->fullQData(oldp+30,(vlSelf->CoreTop__DOT__CSR__DOT__mtvec),64);
    bufp->fullQData(oldp+32,(vlSelf->CoreTop__DOT__CSR__DOT__mepc),64);
    bufp->fullBit(oldp+34,(vlSelf->CoreTop__DOT__IF_io_wb_stall));
    bufp->fullBit(oldp+35,(vlSelf->CoreTop__DOT__IF_io_ex_stall));
    bufp->fullBit(oldp+36,((1U & (~ (IData)(vlSelf->CoreTop__DOT__empty)))));
    bufp->fullQData(oldp+37,(((0x1fU == (0x1fU & (IData)(vlSelf->CoreTop__DOT__tail)))
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
    bufp->fullIData(oldp+39,(vlSelf->CoreTop__DOT__ID_io_in_bits_Inst),32);
    bufp->fullBit(oldp+40,(((IData)(vlSelf->CoreTop__DOT__valid) 
                            & ((4U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType)) 
                               & ((((0xeU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                                    | (0x6fU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) 
                                   | ((0x45U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                                      | ((3U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                                         | (4U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))))) 
                                  | ((0x47U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                                     | (0x11U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))))))));
    bufp->fullCData(oldp+41,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest),5);
    bufp->fullBit(oldp+42,(vlSelf->CoreTop__DOT__ID_io_ex_reg_rfWen));
    bufp->fullBit(oldp+43,(((~ ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_valid) 
                                  | (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_in_valid)) 
                                 & (IData)(vlSelf->CoreTop__DOT__valid)) 
                                | (IData)(vlSelf->CoreTop__DOT__EX__DOT____VdfgTmp_hd56c994a__0))) 
                            & (IData)(vlSelf->CoreTop__DOT__EX_io_out_ready))));
    bufp->fullBit(oldp+44,((1U & ((~ (((IData)(vlSelf->CoreTop__DOT__valid) 
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
    bufp->fullCData(oldp+45,((((7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                ? 2U : 0U) | ((3U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                               ? 2U
                                               : 0U))),3);
    bufp->fullCData(oldp+46,(((8U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)) 
                              | ((7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)) 
                                 | (3U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))))),3);
    bufp->fullCData(oldp+47,(((0x13U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
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
    bufp->fullBit(oldp+48,((1U & (~ ((0U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_2)) 
                                     | ((IData)(vlSelf->CoreTop__DOT__empty) 
                                        | (IData)(vlSelf->CoreTop__DOT__IF_io_flush)))))));
    bufp->fullCData(oldp+49,((0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+50,((0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                       >> 0x14U))),5);
    bufp->fullBit(oldp+51,(((~ (IData)(vlSelf->CoreTop__DOT__empty)) 
                            & (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_3))));
    bufp->fullCData(oldp+52,(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_2),7);
    bufp->fullCData(oldp+53,((0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                       >> 7U))),5);
    bufp->fullBit(oldp+54,((0x18U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_2))));
    bufp->fullBit(oldp+55,((0x17U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_2))));
    bufp->fullQData(oldp+56,(vlSelf->CoreTop__DOT__ID__DOT__imm),64);
    bufp->fullSData(oldp+58,((0xfffU & (IData)(vlSelf->CoreTop__DOT__ID__DOT__imm))),12);
    bufp->fullBit(oldp+59,(vlSelf->CoreTop__DOT__valid));
    bufp->fullCData(oldp+60,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src1Type),3);
    bufp->fullCData(oldp+61,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src2Type),3);
    bufp->fullCData(oldp+62,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType),3);
    bufp->fullBit(oldp+63,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_inst_valid));
    bufp->fullBit(oldp+64,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfWen));
    bufp->fullCData(oldp+65,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype),7);
    bufp->fullBit(oldp+66,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_ertn_flush));
    bufp->fullBit(oldp+67,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_excp_flush));
    bufp->fullQData(oldp+68,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_src1),64);
    bufp->fullQData(oldp+70,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_src2),64);
    bufp->fullQData(oldp+72,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm),64);
    bufp->fullQData(oldp+74,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC),64);
    bufp->fullIData(oldp+76,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_inst),32);
    bufp->fullSData(oldp+77,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_csr_csr_idx),12);
    bufp->fullBit(oldp+78,(vlSelf->CoreTop__DOT__EX_io_out_ready));
    bufp->fullBit(oldp+79,(((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_valid)) 
                            & ((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_in_valid)) 
                               & ((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT____VdfgTmp_hd56c994a__0)) 
                                  & (IData)(vlSelf->CoreTop__DOT__valid))))));
    bufp->fullQData(oldp+80,(vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfData),64);
    bufp->fullQData(oldp+82,(vlSelf->CoreTop__DOT__EX__DOT__src1),64);
    bufp->fullQData(oldp+84,(vlSelf->CoreTop__DOT__EX__DOT__src2),64);
    bufp->fullQData(oldp+86,(((0x40U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
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
    bufp->fullBit(oldp+88,(((0x18U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                            | ((0x15U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                               | (0x16U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))))));
    bufp->fullSData(oldp+89,(vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_csr_csr_idx),12);
    bufp->fullBit(oldp+90,(((0x42U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                            & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_inst_valid))));
    bufp->fullBit(oldp+91,((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state))));
    bufp->fullQData(oldp+92,(vlSelf->CoreTop__DOT__EX_io_csr_rd_io_rd_data),64);
    bufp->fullBit(oldp+94,(vlSelf->CoreTop__DOT__DIP_io_is_break_REG_1));
    bufp->fullQData(oldp+95,(vlSelf->CoreTop__DOT__rf
                             [0U]),64);
    bufp->fullQData(oldp+97,(vlSelf->CoreTop__DOT__rf
                             [1U]),64);
    bufp->fullQData(oldp+99,(vlSelf->CoreTop__DOT__rf
                             [2U]),64);
    bufp->fullQData(oldp+101,(vlSelf->CoreTop__DOT__rf
                              [3U]),64);
    bufp->fullQData(oldp+103,(vlSelf->CoreTop__DOT__rf
                              [4U]),64);
    bufp->fullQData(oldp+105,(vlSelf->CoreTop__DOT__rf
                              [5U]),64);
    bufp->fullQData(oldp+107,(vlSelf->CoreTop__DOT__rf
                              [6U]),64);
    bufp->fullQData(oldp+109,(vlSelf->CoreTop__DOT__rf
                              [7U]),64);
    bufp->fullQData(oldp+111,(vlSelf->CoreTop__DOT__rf
                              [8U]),64);
    bufp->fullQData(oldp+113,(vlSelf->CoreTop__DOT__rf
                              [9U]),64);
    bufp->fullQData(oldp+115,(vlSelf->CoreTop__DOT__rf
                              [0xaU]),64);
    bufp->fullQData(oldp+117,(vlSelf->CoreTop__DOT__rf
                              [0xbU]),64);
    bufp->fullQData(oldp+119,(vlSelf->CoreTop__DOT__rf
                              [0xcU]),64);
    bufp->fullQData(oldp+121,(vlSelf->CoreTop__DOT__rf
                              [0xdU]),64);
    bufp->fullQData(oldp+123,(vlSelf->CoreTop__DOT__rf
                              [0xeU]),64);
    bufp->fullQData(oldp+125,(vlSelf->CoreTop__DOT__rf
                              [0xfU]),64);
    bufp->fullQData(oldp+127,(vlSelf->CoreTop__DOT__rf
                              [0x10U]),64);
    bufp->fullQData(oldp+129,(vlSelf->CoreTop__DOT__rf
                              [0x11U]),64);
    bufp->fullQData(oldp+131,(vlSelf->CoreTop__DOT__rf
                              [0x12U]),64);
    bufp->fullQData(oldp+133,(vlSelf->CoreTop__DOT__rf
                              [0x13U]),64);
    bufp->fullQData(oldp+135,(vlSelf->CoreTop__DOT__rf
                              [0x14U]),64);
    bufp->fullQData(oldp+137,(vlSelf->CoreTop__DOT__rf
                              [0x15U]),64);
    bufp->fullQData(oldp+139,(vlSelf->CoreTop__DOT__rf
                              [0x16U]),64);
    bufp->fullQData(oldp+141,(vlSelf->CoreTop__DOT__rf
                              [0x17U]),64);
    bufp->fullQData(oldp+143,(vlSelf->CoreTop__DOT__rf
                              [0x18U]),64);
    bufp->fullQData(oldp+145,(vlSelf->CoreTop__DOT__rf
                              [0x19U]),64);
    bufp->fullQData(oldp+147,(vlSelf->CoreTop__DOT__rf
                              [0x1aU]),64);
    bufp->fullQData(oldp+149,(vlSelf->CoreTop__DOT__rf
                              [0x1bU]),64);
    bufp->fullQData(oldp+151,(vlSelf->CoreTop__DOT__rf
                              [0x1cU]),64);
    bufp->fullQData(oldp+153,(vlSelf->CoreTop__DOT__rf
                              [0x1dU]),64);
    bufp->fullQData(oldp+155,(vlSelf->CoreTop__DOT__rf
                              [0x1eU]),64);
    bufp->fullQData(oldp+157,(vlSelf->CoreTop__DOT__rf
                              [0x1fU]),64);
    bufp->fullIData(oldp+159,(vlSelf->CoreTop__DOT__DIP_io_inst_REG),32);
    bufp->fullQData(oldp+160,(vlSelf->CoreTop__DOT__DIP_io_pc_REG),64);
    bufp->fullBit(oldp+162,(vlSelf->CoreTop__DOT__DIP_io_inst_valid_REG));
    bufp->fullQData(oldp+163,(vlSelf->CoreTop__DOT__DIP_io_dnpc_REG),64);
    bufp->fullBit(oldp+165,(vlSelf->CoreTop__DOT__DIP_io_is_skip_REG));
    bufp->fullQData(oldp+166,(vlSelf->CoreTop__DOT__rf[0]),64);
    bufp->fullQData(oldp+168,(vlSelf->CoreTop__DOT__rf[1]),64);
    bufp->fullQData(oldp+170,(vlSelf->CoreTop__DOT__rf[2]),64);
    bufp->fullQData(oldp+172,(vlSelf->CoreTop__DOT__rf[3]),64);
    bufp->fullQData(oldp+174,(vlSelf->CoreTop__DOT__rf[4]),64);
    bufp->fullQData(oldp+176,(vlSelf->CoreTop__DOT__rf[5]),64);
    bufp->fullQData(oldp+178,(vlSelf->CoreTop__DOT__rf[6]),64);
    bufp->fullQData(oldp+180,(vlSelf->CoreTop__DOT__rf[7]),64);
    bufp->fullQData(oldp+182,(vlSelf->CoreTop__DOT__rf[8]),64);
    bufp->fullQData(oldp+184,(vlSelf->CoreTop__DOT__rf[9]),64);
    bufp->fullQData(oldp+186,(vlSelf->CoreTop__DOT__rf[10]),64);
    bufp->fullQData(oldp+188,(vlSelf->CoreTop__DOT__rf[11]),64);
    bufp->fullQData(oldp+190,(vlSelf->CoreTop__DOT__rf[12]),64);
    bufp->fullQData(oldp+192,(vlSelf->CoreTop__DOT__rf[13]),64);
    bufp->fullQData(oldp+194,(vlSelf->CoreTop__DOT__rf[14]),64);
    bufp->fullQData(oldp+196,(vlSelf->CoreTop__DOT__rf[15]),64);
    bufp->fullQData(oldp+198,(vlSelf->CoreTop__DOT__rf[16]),64);
    bufp->fullQData(oldp+200,(vlSelf->CoreTop__DOT__rf[17]),64);
    bufp->fullQData(oldp+202,(vlSelf->CoreTop__DOT__rf[18]),64);
    bufp->fullQData(oldp+204,(vlSelf->CoreTop__DOT__rf[19]),64);
    bufp->fullQData(oldp+206,(vlSelf->CoreTop__DOT__rf[20]),64);
    bufp->fullQData(oldp+208,(vlSelf->CoreTop__DOT__rf[21]),64);
    bufp->fullQData(oldp+210,(vlSelf->CoreTop__DOT__rf[22]),64);
    bufp->fullQData(oldp+212,(vlSelf->CoreTop__DOT__rf[23]),64);
    bufp->fullQData(oldp+214,(vlSelf->CoreTop__DOT__rf[24]),64);
    bufp->fullQData(oldp+216,(vlSelf->CoreTop__DOT__rf[25]),64);
    bufp->fullQData(oldp+218,(vlSelf->CoreTop__DOT__rf[26]),64);
    bufp->fullQData(oldp+220,(vlSelf->CoreTop__DOT__rf[27]),64);
    bufp->fullQData(oldp+222,(vlSelf->CoreTop__DOT__rf[28]),64);
    bufp->fullQData(oldp+224,(vlSelf->CoreTop__DOT__rf[29]),64);
    bufp->fullQData(oldp+226,(vlSelf->CoreTop__DOT__rf[30]),64);
    bufp->fullQData(oldp+228,(vlSelf->CoreTop__DOT__rf[31]),64);
    bufp->fullQData(oldp+230,(vlSelf->CoreTop__DOT__rf
                              [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                         >> 0xfU))]),64);
    bufp->fullQData(oldp+232,(vlSelf->CoreTop__DOT__rf
                              [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                         >> 0x14U))]),64);
    bufp->fullQData(oldp+234,(((0U == (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest))
                                ? 0ULL : vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfData)),64);
    bufp->fullCData(oldp+236,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest),5);
    bufp->fullBit(oldp+237,(vlSelf->CoreTop__DOT__rf_MPORT_en));
    bufp->fullBit(oldp+238,(vlSelf->CoreTop__DOT__valid_1));
    bufp->fullCData(oldp+239,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_fuType),3);
    bufp->fullBit(oldp+240,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_inst_valid));
    bufp->fullBit(oldp+241,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_rfWen));
    bufp->fullCData(oldp+242,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype),7);
    bufp->fullBit(oldp+243,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_ertn_flush));
    bufp->fullBit(oldp+244,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_excp_flush));
    bufp->fullQData(oldp+245,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_PC),64);
    bufp->fullIData(oldp+247,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_inst),32);
    bufp->fullQData(oldp+248,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_Dnpc),64);
    bufp->fullCData(oldp+250,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest),5);
    bufp->fullQData(oldp+251,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfData),64);
    bufp->fullQData(oldp+253,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src1),64);
    bufp->fullQData(oldp+255,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2),64);
    bufp->fullQData(oldp+257,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_Imm),64);
    bufp->fullQData(oldp+259,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_csr_csr_data),64);
    bufp->fullBit(oldp+261,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_csr_csr_en));
    bufp->fullSData(oldp+262,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_csr_csr_idx),12);
    bufp->fullBit(oldp+263,((1U & (~ (IData)(vlSelf->CoreTop__DOT__IF_io_wb_stall)))));
    bufp->fullBit(oldp+264,((1U & (~ ((~ (IData)(vlSelf->CoreTop__DOT__valid_1)) 
                                      | (IData)(vlSelf->CoreTop__DOT__MEM__DOT___io_out_valid_T_6))))));
    bufp->fullBit(oldp+265,(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_signal_inst_valid));
    bufp->fullBit(oldp+266,(((0xa0000048ULL == vlSelf->CoreTop__DOT__MEM__DOT__addr_temp) 
                             | ((0xa00003f8ULL == vlSelf->CoreTop__DOT__MEM__DOT__addr_temp) 
                                | ((0xa0000000ULL <= vlSelf->CoreTop__DOT__MEM__DOT__addr_temp) 
                                   & (0xa1200000ULL 
                                      >= vlSelf->CoreTop__DOT__MEM__DOT__addr_temp))))));
    bufp->fullBit(oldp+267,(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfWen));
    bufp->fullBit(oldp+268,(((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_csr_csr_en) 
                             & (IData)(vlSelf->CoreTop__DOT__valid_1))));
    bufp->fullBit(oldp+269,(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_addr_req_bits_ce));
    bufp->fullQData(oldp+270,(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp),64);
    bufp->fullBit(oldp+272,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_bits_we));
    bufp->fullBit(oldp+273,(((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)
                              ? (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_valid)
                              : ((~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_bits_we)) 
                                 & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_bits_rdata_T_1) 
                                    | (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_valid_T_4))))));
    bufp->fullQData(oldp+274,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata),64);
    bufp->fullCData(oldp+276,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wmask),8);
    bufp->fullBit(oldp+277,(((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)
                              ? (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_out_wb_valid)
                              : ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___Cache_data_io_write_bus_valid_T_3) 
                                 | ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_valid_T_4) 
                                    & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_bits_we))))));
    bufp->fullBit(oldp+278,(vlSelf->CoreTop__DOT__valid_2));
    bufp->fullBit(oldp+279,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_inst_valid));
    bufp->fullBit(oldp+280,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_rfWen));
    bufp->fullBit(oldp+281,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_ertn_flush));
    bufp->fullBit(oldp+282,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_excp_flush));
    bufp->fullQData(oldp+283,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_PC),64);
    bufp->fullQData(oldp+285,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_Dnpc),64);
    bufp->fullBit(oldp+287,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_skip));
    bufp->fullQData(oldp+288,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfData),64);
    bufp->fullQData(oldp+290,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_csr_csr_data),64);
    bufp->fullBit(oldp+292,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_csr_csr_en));
    bufp->fullSData(oldp+293,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_csr_csr_idx),12);
    bufp->fullBit(oldp+294,(vlSelf->CoreTop__DOT__WB_io_out_valid));
    bufp->fullBit(oldp+295,(((IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_inst_valid) 
                             & (IData)(vlSelf->CoreTop__DOT__valid_2))));
    bufp->fullBit(oldp+296,(vlSelf->CoreTop__DOT__WB_io_out_bits_ctrl_csr_csr_en));
    bufp->fullQData(oldp+297,(((0U == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                >> 0xfU)))
                                ? 0ULL : vlSelf->CoreTop__DOT__rf
                               [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                          >> 0xfU))])),64);
    bufp->fullQData(oldp+299,(((0U == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                >> 0x14U)))
                                ? 0ULL : vlSelf->CoreTop__DOT__rf
                               [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                          >> 0x14U))])),64);
    bufp->fullBit(oldp+301,(((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)) 
                             & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)
                                 ? (0U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state))
                                 : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state) 
                                    & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r) 
                                       & (0U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state))))))));
    bufp->fullBit(oldp+302,((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state))));
    bufp->fullQData(oldp+303,(vlSelf->CoreTop__DOT__ICACHE_io_out_raddr_req_bits_addr),64);
    bufp->fullBit(oldp+305,(vlSelf->CoreTop__DOT__ICACHE_io_out_rdata_rep_valid));
    bufp->fullBit(oldp+306,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_rdata_rep_bits_last));
    bufp->fullBit(oldp+307,(((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)) 
                             & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)
                                 ? (1U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_state))
                                 : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state) 
                                    & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r) 
                                       & (1U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_state))))))));
    bufp->fullBit(oldp+308,(((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)
                              ? (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_valid)
                              : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)
                                  ? (1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state))
                                  : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                                      ? ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)
                                          ? (1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state))
                                          : (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_valid))
                                      : (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_valid))))));
    bufp->fullBit(oldp+309,((0U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state))));
    bufp->fullQData(oldp+310,(((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)
                                ? vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_bits_addr
                                : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)
                                    ? vlSelf->CoreTop__DOT__ICACHE_io_out_raddr_req_bits_addr
                                    : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                                        ? ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)
                                            ? vlSelf->CoreTop__DOT__ICACHE_io_out_raddr_req_bits_addr
                                            : vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_bits_addr)
                                        : vlSelf->CoreTop__DOT__ICACHE_io_out_raddr_req_bits_addr)))),64);
    bufp->fullCData(oldp+312,(((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)
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
    bufp->fullBit(oldp+313,((2U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state))));
    bufp->fullBit(oldp+314,(((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)
                              ? (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_valid)
                              : ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)) 
                                 & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                                     ? ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)) 
                                        & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_valid))
                                     : (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_valid))))));
    bufp->fullBit(oldp+315,((0U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_state))));
    bufp->fullQData(oldp+316,(((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)
                                ? vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_bits_addr
                                : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)
                                    ? 0ULL : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                                               ? ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)
                                                   ? 0ULL
                                                   : vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_bits_addr)
                                               : 0ULL)))),64);
    bufp->fullBit(oldp+318,(((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)
                              ? (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_valid)
                              : ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)) 
                                 & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                                     ? ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)) 
                                        & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_valid))
                                     : (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_valid))))));
    bufp->fullBit(oldp+319,(vlSelf->CoreTop__DOT__MMEM_wd_ready));
    bufp->fullQData(oldp+320,(((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)
                                ? vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_data
                                : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)
                                    ? 0ULL : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                                               ? ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)
                                                   ? 0ULL
                                                   : vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_data)
                                               : 0ULL)))),64);
    bufp->fullCData(oldp+322,(((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)
                                ? (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_wstrb)
                                : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)
                                    ? 0U : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                                             ? ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)
                                                 ? 0U
                                                 : (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_wstrb))
                                             : 0U)))),8);
    bufp->fullBit(oldp+323,(vlSelf->CoreTop__DOT__MMEM_wd_last));
    bufp->fullBit(oldp+324,((1U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_state))));
    bufp->fullBit(oldp+325,(((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)
                              ? (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wb_ready)
                              : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0) 
                                 | ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                                     ? ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r) 
                                        | (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wb_ready))
                                     : (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wb_ready))))));
    bufp->fullBit(oldp+326,(vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_ready));
    bufp->fullBit(oldp+327,(vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_valid));
    bufp->fullQData(oldp+328,(vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_bits_addr),64);
    bufp->fullCData(oldp+330,(((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)
                                ? 0U : 7U)),8);
    bufp->fullBit(oldp+331,(vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_ready));
    bufp->fullBit(oldp+332,(vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_valid));
    bufp->fullQData(oldp+333,(vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_bits_addr),64);
    bufp->fullBit(oldp+335,(vlSelf->CoreTop__DOT__ARBITER_io_in1_rdata_rep_valid));
    bufp->fullBit(oldp+336,(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_ready));
    bufp->fullBit(oldp+337,(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_valid));
    bufp->fullQData(oldp+338,(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_data),64);
    bufp->fullCData(oldp+340,(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_wstrb),8);
    bufp->fullBit(oldp+341,(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_last));
    bufp->fullBit(oldp+342,(vlSelf->CoreTop__DOT__ARBITER_io_in1_wb_ready));
    bufp->fullBit(oldp+343,(vlSelf->CoreTop__DOT__ARBITER_io_in1_wb_valid));
    bufp->fullCData(oldp+344,(vlSelf->CoreTop__DOT__head),6);
    bufp->fullCData(oldp+345,(vlSelf->CoreTop__DOT__tail),6);
    bufp->fullBit(oldp+346,(vlSelf->CoreTop__DOT__empty));
    bufp->fullBit(oldp+347,(vlSelf->CoreTop__DOT__full));
    bufp->fullQData(oldp+348,(vlSelf->CoreTop__DOT__buffer_0_PC),64);
    bufp->fullIData(oldp+350,(vlSelf->CoreTop__DOT__buffer_0_Inst),32);
    bufp->fullQData(oldp+351,(vlSelf->CoreTop__DOT__buffer_1_PC),64);
    bufp->fullIData(oldp+353,(vlSelf->CoreTop__DOT__buffer_1_Inst),32);
    bufp->fullQData(oldp+354,(vlSelf->CoreTop__DOT__buffer_2_PC),64);
    bufp->fullIData(oldp+356,(vlSelf->CoreTop__DOT__buffer_2_Inst),32);
    bufp->fullQData(oldp+357,(vlSelf->CoreTop__DOT__buffer_3_PC),64);
    bufp->fullIData(oldp+359,(vlSelf->CoreTop__DOT__buffer_3_Inst),32);
    bufp->fullQData(oldp+360,(vlSelf->CoreTop__DOT__buffer_4_PC),64);
    bufp->fullIData(oldp+362,(vlSelf->CoreTop__DOT__buffer_4_Inst),32);
    bufp->fullQData(oldp+363,(vlSelf->CoreTop__DOT__buffer_5_PC),64);
    bufp->fullIData(oldp+365,(vlSelf->CoreTop__DOT__buffer_5_Inst),32);
    bufp->fullQData(oldp+366,(vlSelf->CoreTop__DOT__buffer_6_PC),64);
    bufp->fullIData(oldp+368,(vlSelf->CoreTop__DOT__buffer_6_Inst),32);
    bufp->fullQData(oldp+369,(vlSelf->CoreTop__DOT__buffer_7_PC),64);
    bufp->fullIData(oldp+371,(vlSelf->CoreTop__DOT__buffer_7_Inst),32);
    bufp->fullQData(oldp+372,(vlSelf->CoreTop__DOT__buffer_8_PC),64);
    bufp->fullIData(oldp+374,(vlSelf->CoreTop__DOT__buffer_8_Inst),32);
    bufp->fullQData(oldp+375,(vlSelf->CoreTop__DOT__buffer_9_PC),64);
    bufp->fullIData(oldp+377,(vlSelf->CoreTop__DOT__buffer_9_Inst),32);
    bufp->fullQData(oldp+378,(vlSelf->CoreTop__DOT__buffer_10_PC),64);
    bufp->fullIData(oldp+380,(vlSelf->CoreTop__DOT__buffer_10_Inst),32);
    bufp->fullQData(oldp+381,(vlSelf->CoreTop__DOT__buffer_11_PC),64);
    bufp->fullIData(oldp+383,(vlSelf->CoreTop__DOT__buffer_11_Inst),32);
    bufp->fullQData(oldp+384,(vlSelf->CoreTop__DOT__buffer_12_PC),64);
    bufp->fullIData(oldp+386,(vlSelf->CoreTop__DOT__buffer_12_Inst),32);
    bufp->fullQData(oldp+387,(vlSelf->CoreTop__DOT__buffer_13_PC),64);
    bufp->fullIData(oldp+389,(vlSelf->CoreTop__DOT__buffer_13_Inst),32);
    bufp->fullQData(oldp+390,(vlSelf->CoreTop__DOT__buffer_14_PC),64);
    bufp->fullIData(oldp+392,(vlSelf->CoreTop__DOT__buffer_14_Inst),32);
    bufp->fullQData(oldp+393,(vlSelf->CoreTop__DOT__buffer_15_PC),64);
    bufp->fullIData(oldp+395,(vlSelf->CoreTop__DOT__buffer_15_Inst),32);
    bufp->fullQData(oldp+396,(vlSelf->CoreTop__DOT__buffer_16_PC),64);
    bufp->fullIData(oldp+398,(vlSelf->CoreTop__DOT__buffer_16_Inst),32);
    bufp->fullQData(oldp+399,(vlSelf->CoreTop__DOT__buffer_17_PC),64);
    bufp->fullIData(oldp+401,(vlSelf->CoreTop__DOT__buffer_17_Inst),32);
    bufp->fullQData(oldp+402,(vlSelf->CoreTop__DOT__buffer_18_PC),64);
    bufp->fullIData(oldp+404,(vlSelf->CoreTop__DOT__buffer_18_Inst),32);
    bufp->fullQData(oldp+405,(vlSelf->CoreTop__DOT__buffer_19_PC),64);
    bufp->fullIData(oldp+407,(vlSelf->CoreTop__DOT__buffer_19_Inst),32);
    bufp->fullQData(oldp+408,(vlSelf->CoreTop__DOT__buffer_20_PC),64);
    bufp->fullIData(oldp+410,(vlSelf->CoreTop__DOT__buffer_20_Inst),32);
    bufp->fullQData(oldp+411,(vlSelf->CoreTop__DOT__buffer_21_PC),64);
    bufp->fullIData(oldp+413,(vlSelf->CoreTop__DOT__buffer_21_Inst),32);
    bufp->fullQData(oldp+414,(vlSelf->CoreTop__DOT__buffer_22_PC),64);
    bufp->fullIData(oldp+416,(vlSelf->CoreTop__DOT__buffer_22_Inst),32);
    bufp->fullQData(oldp+417,(vlSelf->CoreTop__DOT__buffer_23_PC),64);
    bufp->fullIData(oldp+419,(vlSelf->CoreTop__DOT__buffer_23_Inst),32);
    bufp->fullQData(oldp+420,(vlSelf->CoreTop__DOT__buffer_24_PC),64);
    bufp->fullIData(oldp+422,(vlSelf->CoreTop__DOT__buffer_24_Inst),32);
    bufp->fullQData(oldp+423,(vlSelf->CoreTop__DOT__buffer_25_PC),64);
    bufp->fullIData(oldp+425,(vlSelf->CoreTop__DOT__buffer_25_Inst),32);
    bufp->fullQData(oldp+426,(vlSelf->CoreTop__DOT__buffer_26_PC),64);
    bufp->fullIData(oldp+428,(vlSelf->CoreTop__DOT__buffer_26_Inst),32);
    bufp->fullQData(oldp+429,(vlSelf->CoreTop__DOT__buffer_27_PC),64);
    bufp->fullIData(oldp+431,(vlSelf->CoreTop__DOT__buffer_27_Inst),32);
    bufp->fullQData(oldp+432,(vlSelf->CoreTop__DOT__buffer_28_PC),64);
    bufp->fullIData(oldp+434,(vlSelf->CoreTop__DOT__buffer_28_Inst),32);
    bufp->fullQData(oldp+435,(vlSelf->CoreTop__DOT__buffer_29_PC),64);
    bufp->fullIData(oldp+437,(vlSelf->CoreTop__DOT__buffer_29_Inst),32);
    bufp->fullQData(oldp+438,(vlSelf->CoreTop__DOT__buffer_30_PC),64);
    bufp->fullIData(oldp+440,(vlSelf->CoreTop__DOT__buffer_30_Inst),32);
    bufp->fullQData(oldp+441,(vlSelf->CoreTop__DOT__buffer_31_PC),64);
    bufp->fullIData(oldp+443,(vlSelf->CoreTop__DOT__buffer_31_Inst),32);
    bufp->fullIData(oldp+444,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_inst),32);
    bufp->fullBit(oldp+445,(vlSelf->CoreTop__DOT__DIP_io_is_break_REG));
    bufp->fullBit(oldp+446,(vlSelf->CoreTop__DOT__ARBITER__DOT__state));
    bufp->fullBit(oldp+447,(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r));
    bufp->fullQData(oldp+448,(vlSelf->CoreTop__DOT__CSR__DOT__mcause),64);
    bufp->fullQData(oldp+450,(vlSelf->CoreTop__DOT__CSR__DOT__mstatus),64);
    bufp->fullQData(oldp+452,(vlSelf->CoreTop__DOT__CSR__DOT__mie),64);
    bufp->fullQData(oldp+454,(vlSelf->CoreTop__DOT__CSR__DOT__mip),64);
    bufp->fullQData(oldp+456,(vlSelf->CoreTop__DOT__CSR__DOT__CSRDIFF__DOT__inst_csr[0]),64);
    bufp->fullQData(oldp+458,(vlSelf->CoreTop__DOT__CSR__DOT__CSRDIFF__DOT__inst_csr[1]),64);
    bufp->fullQData(oldp+460,(vlSelf->CoreTop__DOT__CSR__DOT__CSRDIFF__DOT__inst_csr[2]),64);
    bufp->fullQData(oldp+462,(vlSelf->CoreTop__DOT__CSR__DOT__CSRDIFF__DOT__inst_csr[3]),64);
    bufp->fullQData(oldp+464,(vlSelf->CoreTop__DOT__CSR__DOT__CSRDIFF__DOT__inst_csr[4]),64);
    bufp->fullQData(oldp+466,(vlSelf->CoreTop__DOT__CSR__DOT__CSRDIFF__DOT__inst_csr[5]),64);
    bufp->fullQData(oldp+468,(vlSelf->CoreTop__DOT__DIP__DOT__rf[0]),64);
    bufp->fullQData(oldp+470,(vlSelf->CoreTop__DOT__DIP__DOT__rf[1]),64);
    bufp->fullQData(oldp+472,(vlSelf->CoreTop__DOT__DIP__DOT__rf[2]),64);
    bufp->fullQData(oldp+474,(vlSelf->CoreTop__DOT__DIP__DOT__rf[3]),64);
    bufp->fullQData(oldp+476,(vlSelf->CoreTop__DOT__DIP__DOT__rf[4]),64);
    bufp->fullQData(oldp+478,(vlSelf->CoreTop__DOT__DIP__DOT__rf[5]),64);
    bufp->fullQData(oldp+480,(vlSelf->CoreTop__DOT__DIP__DOT__rf[6]),64);
    bufp->fullQData(oldp+482,(vlSelf->CoreTop__DOT__DIP__DOT__rf[7]),64);
    bufp->fullQData(oldp+484,(vlSelf->CoreTop__DOT__DIP__DOT__rf[8]),64);
    bufp->fullQData(oldp+486,(vlSelf->CoreTop__DOT__DIP__DOT__rf[9]),64);
    bufp->fullQData(oldp+488,(vlSelf->CoreTop__DOT__DIP__DOT__rf[10]),64);
    bufp->fullQData(oldp+490,(vlSelf->CoreTop__DOT__DIP__DOT__rf[11]),64);
    bufp->fullQData(oldp+492,(vlSelf->CoreTop__DOT__DIP__DOT__rf[12]),64);
    bufp->fullQData(oldp+494,(vlSelf->CoreTop__DOT__DIP__DOT__rf[13]),64);
    bufp->fullQData(oldp+496,(vlSelf->CoreTop__DOT__DIP__DOT__rf[14]),64);
    bufp->fullQData(oldp+498,(vlSelf->CoreTop__DOT__DIP__DOT__rf[15]),64);
    bufp->fullQData(oldp+500,(vlSelf->CoreTop__DOT__DIP__DOT__rf[16]),64);
    bufp->fullQData(oldp+502,(vlSelf->CoreTop__DOT__DIP__DOT__rf[17]),64);
    bufp->fullQData(oldp+504,(vlSelf->CoreTop__DOT__DIP__DOT__rf[18]),64);
    bufp->fullQData(oldp+506,(vlSelf->CoreTop__DOT__DIP__DOT__rf[19]),64);
    bufp->fullQData(oldp+508,(vlSelf->CoreTop__DOT__DIP__DOT__rf[20]),64);
    bufp->fullQData(oldp+510,(vlSelf->CoreTop__DOT__DIP__DOT__rf[21]),64);
    bufp->fullQData(oldp+512,(vlSelf->CoreTop__DOT__DIP__DOT__rf[22]),64);
    bufp->fullQData(oldp+514,(vlSelf->CoreTop__DOT__DIP__DOT__rf[23]),64);
    bufp->fullQData(oldp+516,(vlSelf->CoreTop__DOT__DIP__DOT__rf[24]),64);
    bufp->fullQData(oldp+518,(vlSelf->CoreTop__DOT__DIP__DOT__rf[25]),64);
    bufp->fullQData(oldp+520,(vlSelf->CoreTop__DOT__DIP__DOT__rf[26]),64);
    bufp->fullQData(oldp+522,(vlSelf->CoreTop__DOT__DIP__DOT__rf[27]),64);
    bufp->fullQData(oldp+524,(vlSelf->CoreTop__DOT__DIP__DOT__rf[28]),64);
    bufp->fullQData(oldp+526,(vlSelf->CoreTop__DOT__DIP__DOT__rf[29]),64);
    bufp->fullQData(oldp+528,(vlSelf->CoreTop__DOT__DIP__DOT__rf[30]),64);
    bufp->fullQData(oldp+530,(vlSelf->CoreTop__DOT__DIP__DOT__rf[31]),64);
    bufp->fullIData(oldp+532,(vlSelf->CoreTop__DOT__DIP__DOT__IN[0]),32);
    bufp->fullIData(oldp+533,(vlSelf->CoreTop__DOT__DIP__DOT__IN[1]),32);
    bufp->fullIData(oldp+534,(vlSelf->CoreTop__DOT__DIP__DOT__IN[2]),32);
    bufp->fullIData(oldp+535,(vlSelf->CoreTop__DOT__DIP__DOT__IN[3]),32);
    bufp->fullIData(oldp+536,(vlSelf->CoreTop__DOT__DIP__DOT__IN[4]),32);
    bufp->fullIData(oldp+537,(vlSelf->CoreTop__DOT__DIP__DOT__IN[5]),32);
    bufp->fullIData(oldp+538,(vlSelf->CoreTop__DOT__DIP__DOT__IN[6]),32);
    bufp->fullBit(oldp+539,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_valid));
    bufp->fullQData(oldp+540,(((IData)(vlSelf->CoreTop__DOT__EX__DOT__is_mul)
                                ? vlSelf->CoreTop__DOT__EX__DOT__src1
                                : (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__src1)))),64);
    bufp->fullQData(oldp+542,(((IData)(vlSelf->CoreTop__DOT__EX__DOT__is_mul)
                                ? vlSelf->CoreTop__DOT__EX__DOT__src2
                                : (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)))),64);
    bufp->fullBit(oldp+544,((0x44U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count))));
    bufp->fullQData(oldp+545,((((QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[0U])))),64);
    bufp->fullBit(oldp+547,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_in_valid));
    bufp->fullBit(oldp+548,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_in_bits_ctrl_flow_div_signed));
    bufp->fullQData(oldp+549,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_in_bits_ctrl_data_src1),64);
    bufp->fullQData(oldp+551,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_in_bits_ctrl_data_src2),64);
    bufp->fullBit(oldp+553,((4U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__state))));
    bufp->fullQData(oldp+554,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_out_bits_result_quotient),64);
    bufp->fullQData(oldp+556,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_out_bits_result_remainder),64);
    bufp->fullBit(oldp+558,(vlSelf->CoreTop__DOT__EX__DOT__is_mul));
    bufp->fullBit(oldp+559,(((((((0x43U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                                 | (0x13U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) 
                                | (IData)(vlSelf->CoreTop__DOT__EX__DOT___is_divw_T_2)) 
                               | ((0x12U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                                  | (0xfU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)))) 
                              | (IData)(vlSelf->CoreTop__DOT__EX__DOT____VdfgTmp_h08208b49__0)) 
                             & (IData)(vlSelf->CoreTop__DOT__EX__DOT____VdfgTmp_h1a4c5317__0))));
    bufp->fullBit(oldp+560,(vlSelf->CoreTop__DOT__EX__DOT__is_divw));
    bufp->fullBit(oldp+561,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+562,((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[0U] 
                             >> 0x1fU)));
    bufp->fullBit(oldp+563,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_out_bits_result_quotient 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+564,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_out_bits_result_remainder 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+565,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_10 
                                           >> 0x1fU)))));
    bufp->fullQData(oldp+566,(((0x40U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
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
    bufp->fullBit(oldp+568,((__Vtemp_h0fbea1b2__0[0U] 
                             >> 0x1fU)));
    __Vtemp_h8004274a__0[0U] = (IData)(vlSelf->CoreTop__DOT__EX__DOT__src1);
    __Vtemp_h8004274a__0[1U] = 0U;
    __Vtemp_h8004274a__0[2U] = 0U;
    VL_SHIFTL_WWI(95,95,6, __Vtemp_h29cbf8c2__0, __Vtemp_h8004274a__0, 
                  (0x3fU & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)));
    bufp->fullBit(oldp+569,((__Vtemp_h29cbf8c2__0[0U] 
                             >> 0x1fU)));
    bufp->fullBit(oldp+570,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_25 
                             >> 0x1fU)));
    bufp->fullBit(oldp+571,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_31 
                             >> 0x1fU)));
    bufp->fullBit(oldp+572,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__src1 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+573,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__src2 
                                           >> 0x1fU)))));
    bufp->fullQData(oldp+574,(((0x6aU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                ? ((IData)(vlSelf->CoreTop__DOT__EX__DOT___compar_result_T)
                                    ? 1ULL : 0ULL) : 
                               ((2U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                 ? ((IData)(vlSelf->CoreTop__DOT__EX__DOT___compar_result_T_4)
                                     ? 1ULL : 0ULL)
                                 : 0ULL))),64);
    bufp->fullQData(oldp+576,(((3U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType))
                                ? (4ULL + vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC)
                                : 0ULL)),64);
    bufp->fullQData(oldp+578,((((QData)((IData)(((0x6eU 
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
    bufp->fullQData(oldp+580,(((0x6bU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
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
    bufp->fullBit(oldp+582,(vlSelf->CoreTop__DOT__EX__DOT__branch_flag));
    bufp->fullBit(oldp+583,(vlSelf->CoreTop__DOT__EX__DOT__is_branch));
    bufp->fullBit(oldp+584,(vlSelf->CoreTop__DOT__EX__DOT__is_jump));
    bufp->fullCData(oldp+585,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__state),3);
    bufp->fullBit(oldp+586,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__NewReq));
    bufp->fullWData(oldp+587,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg),129);
    __Vtemp_h890baa9f__0[0U] = vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[2U];
    __Vtemp_h890baa9f__0[1U] = vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[3U];
    __Vtemp_h890baa9f__0[2U] = (1U & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[4U]);
    bufp->fullWData(oldp+592,(__Vtemp_h890baa9f__0),65);
    bufp->fullQData(oldp+595,((((QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[0U])))),64);
    bufp->fullBit(oldp+597,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aSign));
    bufp->fullQData(oldp+598,(((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aSign)
                                ? (- vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_in_bits_ctrl_data_src1)
                                : vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_in_bits_ctrl_data_src1)),64);
    bufp->fullBit(oldp+600,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bSign));
    bufp->fullQData(oldp+601,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal),64);
    bufp->fullBit(oldp+603,(((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aSign) 
                             ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bSign))));
    bufp->fullWData(oldp+604,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg),65);
    bufp->fullCData(oldp+607,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__value),6);
    bufp->fullIData(oldp+608,((IData)((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                       >> 0x20U))),32);
    bufp->fullIData(oldp+609,((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal)),32);
    bufp->fullBit(oldp+610,((0U != (IData)((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                            >> 0x20U)))));
    bufp->fullSData(oldp+611,((0xffffU & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                  >> 0x30U)))),16);
    bufp->fullSData(oldp+612,((0xffffU & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                  >> 0x20U)))),16);
    bufp->fullBit(oldp+613,((0U != (0xffffU & (IData)(
                                                      (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                       >> 0x30U))))));
    bufp->fullCData(oldp+614,((0xffU & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                >> 0x38U)))),8);
    bufp->fullCData(oldp+615,((0xffU & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                >> 0x30U)))),8);
    bufp->fullBit(oldp+616,((0U != (0xffU & (IData)(
                                                    (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                     >> 0x38U))))));
    bufp->fullCData(oldp+617,((0xfU & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                               >> 0x3cU)))),4);
    bufp->fullCData(oldp+618,((0xfU & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                               >> 0x38U)))),4);
    bufp->fullBit(oldp+619,((0U != (0xfU & (IData)(
                                                   (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                    >> 0x3cU))))));
    bufp->fullCData(oldp+620,((0xfU & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                               >> 0x34U)))),4);
    bufp->fullCData(oldp+621,((0xfU & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                               >> 0x30U)))),4);
    bufp->fullBit(oldp+622,((0U != (0xfU & (IData)(
                                                   (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                    >> 0x34U))))));
    bufp->fullCData(oldp+623,((0xffU & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                >> 0x28U)))),8);
    bufp->fullCData(oldp+624,((0xffU & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                >> 0x20U)))),8);
    bufp->fullBit(oldp+625,((0U != (0xffU & (IData)(
                                                    (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                     >> 0x28U))))));
    bufp->fullCData(oldp+626,((0xfU & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                               >> 0x2cU)))),4);
    bufp->fullCData(oldp+627,((0xfU & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                               >> 0x28U)))),4);
    bufp->fullBit(oldp+628,((0U != (0xfU & (IData)(
                                                   (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                    >> 0x2cU))))));
    bufp->fullCData(oldp+629,((0xfU & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                               >> 0x24U)))),4);
    bufp->fullCData(oldp+630,((0xfU & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                               >> 0x20U)))),4);
    bufp->fullBit(oldp+631,((0U != (0xfU & (IData)(
                                                   (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                    >> 0x24U))))));
    bufp->fullSData(oldp+632,((0xffffU & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                  >> 0x10U)))),16);
    bufp->fullSData(oldp+633,((0xffffU & (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal))),16);
    bufp->fullBit(oldp+634,((0U != (0xffffU & (IData)(
                                                      (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                       >> 0x10U))))));
    bufp->fullCData(oldp+635,((0xffU & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                >> 0x18U)))),8);
    bufp->fullCData(oldp+636,((0xffU & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                >> 0x10U)))),8);
    bufp->fullBit(oldp+637,((0U != (0xffU & (IData)(
                                                    (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                     >> 0x18U))))));
    bufp->fullCData(oldp+638,((0xfU & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                               >> 0x1cU)))),4);
    bufp->fullCData(oldp+639,((0xfU & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                               >> 0x18U)))),4);
    bufp->fullBit(oldp+640,((0U != (0xfU & (IData)(
                                                   (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                    >> 0x1cU))))));
    bufp->fullCData(oldp+641,((0xfU & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                               >> 0x14U)))),4);
    bufp->fullCData(oldp+642,((0xfU & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                               >> 0x10U)))),4);
    bufp->fullBit(oldp+643,((0U != (0xfU & (IData)(
                                                   (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                    >> 0x14U))))));
    bufp->fullCData(oldp+644,((0xffU & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                >> 8U)))),8);
    bufp->fullCData(oldp+645,((0xffU & (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal))),8);
    bufp->fullBit(oldp+646,((0U != (0xffU & (IData)(
                                                    (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                     >> 8U))))));
    bufp->fullCData(oldp+647,((0xfU & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                               >> 0xcU)))),4);
    bufp->fullCData(oldp+648,((0xfU & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                               >> 8U)))),4);
    bufp->fullBit(oldp+649,((0U != (0xfU & (IData)(
                                                   (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                    >> 0xcU))))));
    bufp->fullCData(oldp+650,((0xfU & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                               >> 4U)))),4);
    bufp->fullCData(oldp+651,((0xfU & (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal))),4);
    bufp->fullBit(oldp+652,((0U != (0xfU & (IData)(
                                                   (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal 
                                                    >> 4U))))));
    bufp->fullBit(oldp+653,((1U & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[2U])));
    bufp->fullQData(oldp+654,((((QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U])))),64);
    bufp->fullIData(oldp+656,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U]),32);
    bufp->fullIData(oldp+657,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U]),32);
    bufp->fullBit(oldp+658,((0U != vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U])));
    bufp->fullSData(oldp+659,((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U] 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+660,((0xffffU & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U])),16);
    bufp->fullBit(oldp+661,((0U != (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U] 
                                    >> 0x10U))));
    bufp->fullCData(oldp+662,((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U] 
                               >> 0x18U)),8);
    bufp->fullCData(oldp+663,((0xffU & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U] 
                                        >> 0x10U))),8);
    bufp->fullBit(oldp+664,((0U != (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U] 
                                    >> 0x18U))));
    bufp->fullCData(oldp+665,((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U] 
                               >> 0x1cU)),4);
    bufp->fullCData(oldp+666,((0xfU & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U] 
                                       >> 0x18U))),4);
    bufp->fullBit(oldp+667,((0U != (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U] 
                                    >> 0x1cU))));
    bufp->fullCData(oldp+668,((0xfU & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U] 
                                       >> 0x14U))),4);
    bufp->fullCData(oldp+669,((0xfU & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U] 
                                       >> 0x10U))),4);
    bufp->fullBit(oldp+670,((0U != (0xfU & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U] 
                                            >> 0x14U)))));
    bufp->fullCData(oldp+671,((0xffU & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U] 
                                        >> 8U))),8);
    bufp->fullCData(oldp+672,((0xffU & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U])),8);
    bufp->fullBit(oldp+673,((0U != (0xffU & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U] 
                                             >> 8U)))));
    bufp->fullCData(oldp+674,((0xfU & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U] 
                                       >> 0xcU))),4);
    bufp->fullCData(oldp+675,((0xfU & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U] 
                                       >> 8U))),4);
    bufp->fullBit(oldp+676,((0U != (0xfU & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U] 
                                            >> 0xcU)))));
    bufp->fullCData(oldp+677,((0xfU & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U] 
                                       >> 4U))),4);
    bufp->fullCData(oldp+678,((0xfU & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U])),4);
    bufp->fullBit(oldp+679,((0U != (0xfU & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U] 
                                            >> 4U)))));
    bufp->fullSData(oldp+680,((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U] 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+681,((0xffffU & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U])),16);
    bufp->fullBit(oldp+682,((0U != (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U] 
                                    >> 0x10U))));
    bufp->fullCData(oldp+683,((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U] 
                               >> 0x18U)),8);
    bufp->fullCData(oldp+684,((0xffU & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U] 
                                        >> 0x10U))),8);
    bufp->fullBit(oldp+685,((0U != (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U] 
                                    >> 0x18U))));
    bufp->fullCData(oldp+686,((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U] 
                               >> 0x1cU)),4);
    bufp->fullCData(oldp+687,((0xfU & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U] 
                                       >> 0x18U))),4);
    bufp->fullBit(oldp+688,((0U != (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U] 
                                    >> 0x1cU))));
    bufp->fullCData(oldp+689,((0xfU & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U] 
                                       >> 0x14U))),4);
    bufp->fullCData(oldp+690,((0xfU & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U] 
                                       >> 0x10U))),4);
    bufp->fullBit(oldp+691,((0U != (0xfU & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U] 
                                            >> 0x14U)))));
    bufp->fullCData(oldp+692,((0xffU & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U] 
                                        >> 8U))),8);
    bufp->fullCData(oldp+693,((0xffU & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U])),8);
    bufp->fullBit(oldp+694,((0U != (0xffU & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U] 
                                             >> 8U)))));
    bufp->fullCData(oldp+695,((0xfU & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U] 
                                       >> 0xcU))),4);
    bufp->fullCData(oldp+696,((0xfU & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U] 
                                       >> 8U))),4);
    bufp->fullBit(oldp+697,((0U != (0xfU & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U] 
                                            >> 0xcU)))));
    bufp->fullCData(oldp+698,((0xfU & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U] 
                                       >> 4U))),4);
    bufp->fullCData(oldp+699,((0xfU & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U])),4);
    bufp->fullBit(oldp+700,((0U != (0xfU & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U] 
                                            >> 4U)))));
    bufp->fullCData(oldp+701,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__cntShift),7);
    bufp->fullBit(oldp+702,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__enough));
    bufp->fullBit(oldp+703,((0x3fU == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__value))));
    bufp->fullCData(oldp+704,((7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U])),3);
    bufp->fullWData(oldp+705,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand),132);
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
    bufp->fullWData(oldp+710,(__Vtemp_h559cd7fe__0),132);
    bufp->fullBit(oldp+715,(((0U != (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U])) 
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
    bufp->fullWData(oldp+716,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier),66);
    bufp->fullWData(oldp+719,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p),132);
    bufp->fullCData(oldp+724,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count),7);
    bufp->fullWData(oldp+725,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__temp),132);
    bufp->fullBit(oldp+730,((1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__temp[4U] 
                                   >> 3U))));
    bufp->fullBit(oldp+731,(((IData)(vlSelf->CoreTop__DOT__IF_io_cache_req_addr_req_valid) 
                             & (0U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)))));
    bufp->fullQData(oldp+732,(((3U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state))
                                ? vlSelf->CoreTop__DOT__IF__DOT__temp
                                : 0ULL)),64);
    bufp->fullBit(oldp+734,((3U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state))));
    bufp->fullCData(oldp+735,(((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r)
                                ? 2U : 1U)),2);
    bufp->fullWData(oldp+736,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data),512);
    bufp->fullQData(oldp+752,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0
                              [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0]),53);
    bufp->fullQData(oldp+754,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1
                              [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0]),53);
    bufp->fullBit(oldp+756,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0
                            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0]));
    bufp->fullBit(oldp+757,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1
                            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0]));
    __Vtemp_h55336ec1__0[0U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][0U];
    __Vtemp_h55336ec1__0[1U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][1U];
    __Vtemp_h55336ec1__0[2U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][2U];
    __Vtemp_h55336ec1__0[3U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][3U];
    __Vtemp_h55336ec1__0[4U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][4U];
    __Vtemp_h55336ec1__0[5U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][5U];
    __Vtemp_h55336ec1__0[6U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][6U];
    __Vtemp_h55336ec1__0[7U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][7U];
    __Vtemp_h55336ec1__0[8U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][8U];
    __Vtemp_h55336ec1__0[9U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][9U];
    __Vtemp_h55336ec1__0[0xaU] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][0xaU];
    __Vtemp_h55336ec1__0[0xbU] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][0xbU];
    __Vtemp_h55336ec1__0[0xcU] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][0xcU];
    __Vtemp_h55336ec1__0[0xdU] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][0xdU];
    __Vtemp_h55336ec1__0[0xeU] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][0xeU];
    __Vtemp_h55336ec1__0[0xfU] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][0xfU];
    bufp->fullWData(oldp+758,(__Vtemp_h55336ec1__0),512);
    __Vtemp_hba2e3c61__0[0U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0U];
    __Vtemp_hba2e3c61__0[1U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][1U];
    __Vtemp_hba2e3c61__0[2U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][2U];
    __Vtemp_hba2e3c61__0[3U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][3U];
    __Vtemp_hba2e3c61__0[4U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][4U];
    __Vtemp_hba2e3c61__0[5U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][5U];
    __Vtemp_hba2e3c61__0[6U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][6U];
    __Vtemp_hba2e3c61__0[7U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][7U];
    __Vtemp_hba2e3c61__0[8U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][8U];
    __Vtemp_hba2e3c61__0[9U] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][9U];
    __Vtemp_hba2e3c61__0[0xaU] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0xaU];
    __Vtemp_hba2e3c61__0[0xbU] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0xbU];
    __Vtemp_hba2e3c61__0[0xcU] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0xcU];
    __Vtemp_hba2e3c61__0[0xdU] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0xdU];
    __Vtemp_hba2e3c61__0[0xeU] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0xeU];
    __Vtemp_hba2e3c61__0[0xfU] = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0xfU];
    bufp->fullWData(oldp+774,(__Vtemp_hba2e3c61__0),512);
    bufp->fullQData(oldp+790,((vlSelf->CoreTop__DOT__IF__DOT__temp 
                               >> 0xbU)),53);
    bufp->fullCData(oldp+792,((0x1fU & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                >> 6U)))),5);
    bufp->fullCData(oldp+793,((0x3fU & (IData)(vlSelf->CoreTop__DOT__IF__DOT__temp))),6);
    bufp->fullBit(oldp+794,(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_in_valid_REG));
    bufp->fullBit(oldp+795,(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit));
    bufp->fullWData(oldp+796,(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data),512);
    bufp->fullBit(oldp+812,(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_0_result));
    bufp->fullBit(oldp+813,(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_1_result));
    bufp->fullBit(oldp+814,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[0]));
    bufp->fullBit(oldp+815,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[1]));
    bufp->fullBit(oldp+816,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[2]));
    bufp->fullBit(oldp+817,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[3]));
    bufp->fullBit(oldp+818,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[4]));
    bufp->fullBit(oldp+819,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[5]));
    bufp->fullBit(oldp+820,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[6]));
    bufp->fullBit(oldp+821,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[7]));
    bufp->fullBit(oldp+822,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[8]));
    bufp->fullBit(oldp+823,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[9]));
    bufp->fullBit(oldp+824,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[10]));
    bufp->fullBit(oldp+825,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[11]));
    bufp->fullBit(oldp+826,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[12]));
    bufp->fullBit(oldp+827,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[13]));
    bufp->fullBit(oldp+828,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[14]));
    bufp->fullBit(oldp+829,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[15]));
    bufp->fullBit(oldp+830,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[16]));
    bufp->fullBit(oldp+831,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[17]));
    bufp->fullBit(oldp+832,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[18]));
    bufp->fullBit(oldp+833,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[19]));
    bufp->fullBit(oldp+834,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[20]));
    bufp->fullBit(oldp+835,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[21]));
    bufp->fullBit(oldp+836,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[22]));
    bufp->fullBit(oldp+837,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[23]));
    bufp->fullBit(oldp+838,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[24]));
    bufp->fullBit(oldp+839,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[25]));
    bufp->fullBit(oldp+840,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[26]));
    bufp->fullBit(oldp+841,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[27]));
    bufp->fullBit(oldp+842,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[28]));
    bufp->fullBit(oldp+843,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[29]));
    bufp->fullBit(oldp+844,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[30]));
    bufp->fullBit(oldp+845,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[31]));
    bufp->fullBit(oldp+846,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_lru_w_MPORT_en_pipe_0));
    bufp->fullCData(oldp+847,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_lru_w_MPORT_addr_pipe_0),5);
    bufp->fullBit(oldp+848,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru
                            [vlSelf->CoreTop__DOT__ICACHE__DOT__lru_lru_w_MPORT_addr_pipe_0]));
    bufp->fullBit(oldp+849,(((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                             & ((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                & ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit) 
                                   & (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_0_result))))));
    bufp->fullBit(oldp+850,(((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                             & ((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                & ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit) 
                                   & (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_1_result))))));
    bufp->fullBit(oldp+851,(((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                             & ((1U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                & ((2U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                   & ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT___T_5) 
                                      & (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r)))))));
    bufp->fullBit(oldp+852,(((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                             & ((1U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                & ((2U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                   & ((~ (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r)) 
                                      & (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT___T_5)))))));
    bufp->fullCData(oldp+853,(vlSelf->CoreTop__DOT__ICACHE__DOT__state),3);
    bufp->fullCData(oldp+854,(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state),2);
    bufp->fullWData(oldp+855,(vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg),512);
    bufp->fullQData(oldp+871,(vlSelf->CoreTop__DOT__ICACHE__DOT__mem_addr_reg),64);
    bufp->fullBit(oldp+873,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r));
    bufp->fullQData(oldp+874,(((0U == (7U & (IData)(
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
    bufp->fullQData(oldp+876,(((0U == (7U & (IData)(
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
    bufp->fullWData(oldp+878,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[0]),512);
    bufp->fullWData(oldp+894,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[1]),512);
    bufp->fullWData(oldp+910,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[2]),512);
    bufp->fullWData(oldp+926,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[3]),512);
    bufp->fullWData(oldp+942,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[4]),512);
    bufp->fullWData(oldp+958,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[5]),512);
    bufp->fullWData(oldp+974,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[6]),512);
    bufp->fullWData(oldp+990,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[7]),512);
    bufp->fullWData(oldp+1006,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[8]),512);
    bufp->fullWData(oldp+1022,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[9]),512);
    bufp->fullWData(oldp+1038,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[10]),512);
    bufp->fullWData(oldp+1054,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[11]),512);
    bufp->fullWData(oldp+1070,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[12]),512);
    bufp->fullWData(oldp+1086,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[13]),512);
    bufp->fullWData(oldp+1102,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[14]),512);
    bufp->fullWData(oldp+1118,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[15]),512);
    bufp->fullWData(oldp+1134,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[16]),512);
    bufp->fullWData(oldp+1150,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[17]),512);
    bufp->fullWData(oldp+1166,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[18]),512);
    bufp->fullWData(oldp+1182,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[19]),512);
    bufp->fullWData(oldp+1198,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[20]),512);
    bufp->fullWData(oldp+1214,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[21]),512);
    bufp->fullWData(oldp+1230,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[22]),512);
    bufp->fullWData(oldp+1246,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[23]),512);
    bufp->fullWData(oldp+1262,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[24]),512);
    bufp->fullWData(oldp+1278,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[25]),512);
    bufp->fullWData(oldp+1294,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[26]),512);
    bufp->fullWData(oldp+1310,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[27]),512);
    bufp->fullWData(oldp+1326,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[28]),512);
    bufp->fullWData(oldp+1342,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[29]),512);
    bufp->fullWData(oldp+1358,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[30]),512);
    bufp->fullWData(oldp+1374,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[31]),512);
    bufp->fullBit(oldp+1390,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_en_pipe_0));
    bufp->fullCData(oldp+1391,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0),5);
    bufp->fullCData(oldp+1392,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_addr),5);
    bufp->fullBit(oldp+1393,((1U & (~ (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r)))));
    bufp->fullWData(oldp+1394,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[0]),512);
    bufp->fullWData(oldp+1410,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[1]),512);
    bufp->fullWData(oldp+1426,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[2]),512);
    bufp->fullWData(oldp+1442,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[3]),512);
    bufp->fullWData(oldp+1458,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[4]),512);
    bufp->fullWData(oldp+1474,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[5]),512);
    bufp->fullWData(oldp+1490,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[6]),512);
    bufp->fullWData(oldp+1506,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[7]),512);
    bufp->fullWData(oldp+1522,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[8]),512);
    bufp->fullWData(oldp+1538,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[9]),512);
    bufp->fullWData(oldp+1554,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[10]),512);
    bufp->fullWData(oldp+1570,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[11]),512);
    bufp->fullWData(oldp+1586,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[12]),512);
    bufp->fullWData(oldp+1602,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[13]),512);
    bufp->fullWData(oldp+1618,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[14]),512);
    bufp->fullWData(oldp+1634,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[15]),512);
    bufp->fullWData(oldp+1650,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[16]),512);
    bufp->fullWData(oldp+1666,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[17]),512);
    bufp->fullWData(oldp+1682,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[18]),512);
    bufp->fullWData(oldp+1698,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[19]),512);
    bufp->fullWData(oldp+1714,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[20]),512);
    bufp->fullWData(oldp+1730,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[21]),512);
    bufp->fullWData(oldp+1746,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[22]),512);
    bufp->fullWData(oldp+1762,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[23]),512);
    bufp->fullWData(oldp+1778,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[24]),512);
    bufp->fullWData(oldp+1794,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[25]),512);
    bufp->fullWData(oldp+1810,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[26]),512);
    bufp->fullWData(oldp+1826,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[27]),512);
    bufp->fullWData(oldp+1842,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[28]),512);
    bufp->fullWData(oldp+1858,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[29]),512);
    bufp->fullWData(oldp+1874,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[30]),512);
    bufp->fullWData(oldp+1890,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[31]),512);
    bufp->fullBit(oldp+1906,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_en_pipe_0));
    bufp->fullCData(oldp+1907,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0),5);
    bufp->fullQData(oldp+1908,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[0]),53);
    bufp->fullQData(oldp+1910,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[1]),53);
    bufp->fullQData(oldp+1912,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[2]),53);
    bufp->fullQData(oldp+1914,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[3]),53);
    bufp->fullQData(oldp+1916,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[4]),53);
    bufp->fullQData(oldp+1918,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[5]),53);
    bufp->fullQData(oldp+1920,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[6]),53);
    bufp->fullQData(oldp+1922,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[7]),53);
    bufp->fullQData(oldp+1924,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[8]),53);
    bufp->fullQData(oldp+1926,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[9]),53);
    bufp->fullQData(oldp+1928,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[10]),53);
    bufp->fullQData(oldp+1930,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[11]),53);
    bufp->fullQData(oldp+1932,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[12]),53);
    bufp->fullQData(oldp+1934,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[13]),53);
    bufp->fullQData(oldp+1936,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[14]),53);
    bufp->fullQData(oldp+1938,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[15]),53);
    bufp->fullQData(oldp+1940,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[16]),53);
    bufp->fullQData(oldp+1942,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[17]),53);
    bufp->fullQData(oldp+1944,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[18]),53);
    bufp->fullQData(oldp+1946,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[19]),53);
    bufp->fullQData(oldp+1948,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[20]),53);
    bufp->fullQData(oldp+1950,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[21]),53);
    bufp->fullQData(oldp+1952,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[22]),53);
    bufp->fullQData(oldp+1954,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[23]),53);
    bufp->fullQData(oldp+1956,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[24]),53);
    bufp->fullQData(oldp+1958,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[25]),53);
    bufp->fullQData(oldp+1960,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[26]),53);
    bufp->fullQData(oldp+1962,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[27]),53);
    bufp->fullQData(oldp+1964,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[28]),53);
    bufp->fullQData(oldp+1966,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[29]),53);
    bufp->fullQData(oldp+1968,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[30]),53);
    bufp->fullQData(oldp+1970,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[31]),53);
    bufp->fullBit(oldp+1972,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_tag_w_en_pipe_0));
    bufp->fullCData(oldp+1973,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0),5);
    bufp->fullQData(oldp+1974,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_MPORT_1_data),53);
    bufp->fullQData(oldp+1976,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[0]),53);
    bufp->fullQData(oldp+1978,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[1]),53);
    bufp->fullQData(oldp+1980,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[2]),53);
    bufp->fullQData(oldp+1982,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[3]),53);
    bufp->fullQData(oldp+1984,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[4]),53);
    bufp->fullQData(oldp+1986,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[5]),53);
    bufp->fullQData(oldp+1988,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[6]),53);
    bufp->fullQData(oldp+1990,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[7]),53);
    bufp->fullQData(oldp+1992,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[8]),53);
    bufp->fullQData(oldp+1994,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[9]),53);
    bufp->fullQData(oldp+1996,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[10]),53);
    bufp->fullQData(oldp+1998,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[11]),53);
    bufp->fullQData(oldp+2000,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[12]),53);
    bufp->fullQData(oldp+2002,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[13]),53);
    bufp->fullQData(oldp+2004,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[14]),53);
    bufp->fullQData(oldp+2006,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[15]),53);
    bufp->fullQData(oldp+2008,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[16]),53);
    bufp->fullQData(oldp+2010,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[17]),53);
    bufp->fullQData(oldp+2012,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[18]),53);
    bufp->fullQData(oldp+2014,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[19]),53);
    bufp->fullQData(oldp+2016,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[20]),53);
    bufp->fullQData(oldp+2018,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[21]),53);
    bufp->fullQData(oldp+2020,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[22]),53);
    bufp->fullQData(oldp+2022,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[23]),53);
    bufp->fullQData(oldp+2024,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[24]),53);
    bufp->fullQData(oldp+2026,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[25]),53);
    bufp->fullQData(oldp+2028,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[26]),53);
    bufp->fullQData(oldp+2030,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[27]),53);
    bufp->fullQData(oldp+2032,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[28]),53);
    bufp->fullQData(oldp+2034,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[29]),53);
    bufp->fullQData(oldp+2036,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[30]),53);
    bufp->fullQData(oldp+2038,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[31]),53);
    bufp->fullBit(oldp+2040,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_en_pipe_0));
    bufp->fullBit(oldp+2041,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[0]));
    bufp->fullBit(oldp+2042,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[1]));
    bufp->fullBit(oldp+2043,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[2]));
    bufp->fullBit(oldp+2044,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[3]));
    bufp->fullBit(oldp+2045,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[4]));
    bufp->fullBit(oldp+2046,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[5]));
    bufp->fullBit(oldp+2047,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[6]));
    bufp->fullBit(oldp+2048,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[7]));
    bufp->fullBit(oldp+2049,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[8]));
    bufp->fullBit(oldp+2050,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[9]));
    bufp->fullBit(oldp+2051,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[10]));
    bufp->fullBit(oldp+2052,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[11]));
    bufp->fullBit(oldp+2053,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[12]));
    bufp->fullBit(oldp+2054,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[13]));
    bufp->fullBit(oldp+2055,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[14]));
    bufp->fullBit(oldp+2056,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[15]));
    bufp->fullBit(oldp+2057,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[16]));
    bufp->fullBit(oldp+2058,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[17]));
    bufp->fullBit(oldp+2059,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[18]));
    bufp->fullBit(oldp+2060,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[19]));
    bufp->fullBit(oldp+2061,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[20]));
    bufp->fullBit(oldp+2062,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[21]));
    bufp->fullBit(oldp+2063,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[22]));
    bufp->fullBit(oldp+2064,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[23]));
    bufp->fullBit(oldp+2065,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[24]));
    bufp->fullBit(oldp+2066,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[25]));
    bufp->fullBit(oldp+2067,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[26]));
    bufp->fullBit(oldp+2068,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[27]));
    bufp->fullBit(oldp+2069,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[28]));
    bufp->fullBit(oldp+2070,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[29]));
    bufp->fullBit(oldp+2071,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[30]));
    bufp->fullBit(oldp+2072,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[31]));
    bufp->fullBit(oldp+2073,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_en_pipe_0));
    bufp->fullBit(oldp+2074,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[0]));
    bufp->fullBit(oldp+2075,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[1]));
    bufp->fullBit(oldp+2076,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[2]));
    bufp->fullBit(oldp+2077,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[3]));
    bufp->fullBit(oldp+2078,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[4]));
    bufp->fullBit(oldp+2079,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[5]));
    bufp->fullBit(oldp+2080,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[6]));
    bufp->fullBit(oldp+2081,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[7]));
    bufp->fullBit(oldp+2082,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[8]));
    bufp->fullBit(oldp+2083,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[9]));
    bufp->fullBit(oldp+2084,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[10]));
    bufp->fullBit(oldp+2085,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[11]));
    bufp->fullBit(oldp+2086,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[12]));
    bufp->fullBit(oldp+2087,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[13]));
    bufp->fullBit(oldp+2088,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[14]));
    bufp->fullBit(oldp+2089,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[15]));
    bufp->fullBit(oldp+2090,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[16]));
    bufp->fullBit(oldp+2091,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[17]));
    bufp->fullBit(oldp+2092,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[18]));
    bufp->fullBit(oldp+2093,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[19]));
    bufp->fullBit(oldp+2094,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[20]));
    bufp->fullBit(oldp+2095,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[21]));
    bufp->fullBit(oldp+2096,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[22]));
    bufp->fullBit(oldp+2097,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[23]));
    bufp->fullBit(oldp+2098,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[24]));
    bufp->fullBit(oldp+2099,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[25]));
    bufp->fullBit(oldp+2100,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[26]));
    bufp->fullBit(oldp+2101,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[27]));
    bufp->fullBit(oldp+2102,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[28]));
    bufp->fullBit(oldp+2103,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[29]));
    bufp->fullBit(oldp+2104,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[30]));
    bufp->fullBit(oldp+2105,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[31]));
    bufp->fullBit(oldp+2106,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_en_pipe_0));
    bufp->fullCData(oldp+2107,(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0),4);
    bufp->fullBit(oldp+2108,(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_3));
    bufp->fullCData(oldp+2109,((((7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                  ? 2U : 0U) | ((3U 
                                                 == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                                 ? 2U
                                                 : 0U))),2);
    bufp->fullBit(oldp+2110,(((8U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)) 
                              | ((7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)) 
                                 | (3U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))))));
    bufp->fullBit(oldp+2111,((vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                              >> 0x1fU)));
    bufp->fullBit(oldp+2112,((1U & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                    >> 0x13U))));
    bufp->fullBit(oldp+2113,((((IData)(vlSelf->CoreTop__DOT__valid) 
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
    bufp->fullQData(oldp+2114,(vlSelf->CoreTop__DOT__IF__DOT__temp),64);
    bufp->fullIData(oldp+2116,(((1U & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                               >> 2U)))
                                 ? (IData)((vlSelf->CoreTop__DOT__IF_io_cache_req_rdata_rep_bits_rdata 
                                            >> 0x20U))
                                 : (IData)(vlSelf->CoreTop__DOT__IF_io_cache_req_rdata_rep_bits_rdata))),32);
    bufp->fullCData(oldp+2117,(vlSelf->CoreTop__DOT__MMEM__DOT__read_state),2);
    bufp->fullCData(oldp+2118,(vlSelf->CoreTop__DOT__MMEM__DOT__write_state),2);
    bufp->fullCData(oldp+2119,(vlSelf->CoreTop__DOT__MMEM__DOT__read_next_state),2);
    bufp->fullCData(oldp+2120,(vlSelf->CoreTop__DOT__MMEM__DOT__write_next_state),2);
    bufp->fullQData(oldp+2121,(vlSelf->CoreTop__DOT__MMEM__DOT__write_addr_buffer),64);
    bufp->fullQData(oldp+2123,(vlSelf->CoreTop__DOT__MMEM__DOT__read_addr_buffer),64);
    bufp->fullCData(oldp+2125,(vlSelf->CoreTop__DOT__MMEM__DOT__read_count),8);
    bufp->fullBit(oldp+2126,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_valid));
    bufp->fullBit(oldp+2127,((1U & (~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)))));
    bufp->fullBit(oldp+2128,(((~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_bits_we)) 
                              & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_bits_rdata_T_1) 
                                 | (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_valid_T_4)))));
    bufp->fullQData(oldp+2129,(((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_bits_rdata_T_1)
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
    bufp->fullBit(oldp+2131,(((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___Cache_data_io_write_bus_valid_T_3) 
                              | ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_valid_T_4) 
                                 & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_bits_we)))));
    bufp->fullBit(oldp+2132,(((~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)) 
                              & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_ready))));
    bufp->fullBit(oldp+2133,((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state))));
    bufp->fullQData(oldp+2134,(((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state))
                                 ? vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_addr_reg
                                 : 0ULL)),64);
    bufp->fullBit(oldp+2136,(((~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)) 
                              & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_ready))));
    bufp->fullBit(oldp+2137,((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state))));
    bufp->fullQData(oldp+2138,(((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state))
                                 ? vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_addr_reg
                                 : 0ULL)),64);
    bufp->fullBit(oldp+2140,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_rdata_rep_valid));
    bufp->fullBit(oldp+2141,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_wdata_req_ready));
    bufp->fullBit(oldp+2142,((2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state))));
    bufp->fullQData(oldp+2143,((((QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0U])))),64);
    bufp->fullBit(oldp+2145,((7U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count_write))));
    bufp->fullBit(oldp+2146,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_wb_valid));
    bufp->fullBit(oldp+2147,(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_addr_req_valid));
    bufp->fullBit(oldp+2148,(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready));
    bufp->fullBit(oldp+2149,(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_valid));
    bufp->fullBit(oldp+2150,(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_out_wb_valid));
    bufp->fullBit(oldp+2151,(((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready) 
                              & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_ready))));
    bufp->fullBit(oldp+2152,((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__read_state))));
    bufp->fullBit(oldp+2153,(((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready) 
                              & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_ready))));
    bufp->fullBit(oldp+2154,((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state))));
    bufp->fullBit(oldp+2155,(((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready) 
                              & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_ready))));
    bufp->fullBit(oldp+2156,((2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state))));
    bufp->fullBit(oldp+2157,((3U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state))));
    bufp->fullBit(oldp+2158,(((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_valid) 
                              & (0U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)))));
    bufp->fullQData(oldp+2159,(((IData)(vlSelf->__VdfgTmp_h5a5a8c61__0)
                                 ? vlSelf->CoreTop__DOT__MEM__DOT__addr_temp
                                 : 0ULL)),64);
    bufp->fullBit(oldp+2161,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_en));
    bufp->fullCData(oldp+2162,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_waymask),2);
    bufp->fullWData(oldp+2163,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data),512);
    bufp->fullQData(oldp+2179,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_tag_w_data),53);
    bufp->fullQData(oldp+2181,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1_tag_w_data),53);
    bufp->fullBit(oldp+2183,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0
                             [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0]));
    bufp->fullBit(oldp+2184,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1
                             [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0]));
    bufp->fullWData(oldp+2185,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data),512);
    bufp->fullWData(oldp+2201,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data),512);
    bufp->fullQData(oldp+2217,((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                >> 0xbU)),53);
    bufp->fullCData(oldp+2219,((0x1fU & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                 >> 6U)))),5);
    bufp->fullCData(oldp+2220,((0x3fU & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp))),6);
    bufp->fullBit(oldp+2221,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_in_valid_REG));
    bufp->fullBit(oldp+2222,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit));
    bufp->fullWData(oldp+2223,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data),512);
    bufp->fullBit(oldp+2239,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_0_result));
    bufp->fullBit(oldp+2240,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_1_result));
    bufp->fullBit(oldp+2241,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[0]));
    bufp->fullBit(oldp+2242,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[1]));
    bufp->fullBit(oldp+2243,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[2]));
    bufp->fullBit(oldp+2244,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[3]));
    bufp->fullBit(oldp+2245,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[4]));
    bufp->fullBit(oldp+2246,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[5]));
    bufp->fullBit(oldp+2247,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[6]));
    bufp->fullBit(oldp+2248,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[7]));
    bufp->fullBit(oldp+2249,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[8]));
    bufp->fullBit(oldp+2250,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[9]));
    bufp->fullBit(oldp+2251,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[10]));
    bufp->fullBit(oldp+2252,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[11]));
    bufp->fullBit(oldp+2253,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[12]));
    bufp->fullBit(oldp+2254,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[13]));
    bufp->fullBit(oldp+2255,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[14]));
    bufp->fullBit(oldp+2256,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[15]));
    bufp->fullBit(oldp+2257,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[16]));
    bufp->fullBit(oldp+2258,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[17]));
    bufp->fullBit(oldp+2259,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[18]));
    bufp->fullBit(oldp+2260,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[19]));
    bufp->fullBit(oldp+2261,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[20]));
    bufp->fullBit(oldp+2262,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[21]));
    bufp->fullBit(oldp+2263,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[22]));
    bufp->fullBit(oldp+2264,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[23]));
    bufp->fullBit(oldp+2265,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[24]));
    bufp->fullBit(oldp+2266,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[25]));
    bufp->fullBit(oldp+2267,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[26]));
    bufp->fullBit(oldp+2268,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[27]));
    bufp->fullBit(oldp+2269,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[28]));
    bufp->fullBit(oldp+2270,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[29]));
    bufp->fullBit(oldp+2271,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[30]));
    bufp->fullBit(oldp+2272,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[31]));
    bufp->fullBit(oldp+2273,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_en_pipe_0));
    bufp->fullCData(oldp+2274,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_addr_pipe_0),5);
    bufp->fullBit(oldp+2275,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_data));
    bufp->fullBit(oldp+2276,(((0U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                              & ((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                 & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit) 
                                    & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_0_result))))));
    bufp->fullBit(oldp+2277,(((0U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                              & ((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                 & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit) 
                                    & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_1_result))))));
    bufp->fullBit(oldp+2278,(((0U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                              & ((1U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                 & ((2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                    & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___T_8) 
                                       & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_r)))))));
    bufp->fullBit(oldp+2279,(((0U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                              & ((1U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                 & ((2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                    & ((~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_r)) 
                                       & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___T_8)))))));
    bufp->fullBit(oldp+2280,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[0]));
    bufp->fullBit(oldp+2281,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[1]));
    bufp->fullBit(oldp+2282,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[2]));
    bufp->fullBit(oldp+2283,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[3]));
    bufp->fullBit(oldp+2284,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[4]));
    bufp->fullBit(oldp+2285,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[5]));
    bufp->fullBit(oldp+2286,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[6]));
    bufp->fullBit(oldp+2287,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[7]));
    bufp->fullBit(oldp+2288,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[8]));
    bufp->fullBit(oldp+2289,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[9]));
    bufp->fullBit(oldp+2290,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[10]));
    bufp->fullBit(oldp+2291,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[11]));
    bufp->fullBit(oldp+2292,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[12]));
    bufp->fullBit(oldp+2293,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[13]));
    bufp->fullBit(oldp+2294,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[14]));
    bufp->fullBit(oldp+2295,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[15]));
    bufp->fullBit(oldp+2296,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[16]));
    bufp->fullBit(oldp+2297,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[17]));
    bufp->fullBit(oldp+2298,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[18]));
    bufp->fullBit(oldp+2299,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[19]));
    bufp->fullBit(oldp+2300,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[20]));
    bufp->fullBit(oldp+2301,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[21]));
    bufp->fullBit(oldp+2302,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[22]));
    bufp->fullBit(oldp+2303,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[23]));
    bufp->fullBit(oldp+2304,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[24]));
    bufp->fullBit(oldp+2305,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[25]));
    bufp->fullBit(oldp+2306,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[26]));
    bufp->fullBit(oldp+2307,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[27]));
    bufp->fullBit(oldp+2308,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[28]));
    bufp->fullBit(oldp+2309,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[29]));
    bufp->fullBit(oldp+2310,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[30]));
    bufp->fullBit(oldp+2311,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[31]));
    bufp->fullBit(oldp+2312,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0_dirt_w_en_pipe_0));
    bufp->fullCData(oldp+2313,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0_dirt_w_addr_pipe_0),5);
    bufp->fullBit(oldp+2314,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0
                             [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0_dirt_w_addr_pipe_0]));
    bufp->fullBit(oldp+2315,((1U & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_waymask))));
    bufp->fullBit(oldp+2316,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0_MPORT_4_en));
    bufp->fullBit(oldp+2317,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[0]));
    bufp->fullBit(oldp+2318,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[1]));
    bufp->fullBit(oldp+2319,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[2]));
    bufp->fullBit(oldp+2320,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[3]));
    bufp->fullBit(oldp+2321,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[4]));
    bufp->fullBit(oldp+2322,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[5]));
    bufp->fullBit(oldp+2323,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[6]));
    bufp->fullBit(oldp+2324,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[7]));
    bufp->fullBit(oldp+2325,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[8]));
    bufp->fullBit(oldp+2326,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[9]));
    bufp->fullBit(oldp+2327,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[10]));
    bufp->fullBit(oldp+2328,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[11]));
    bufp->fullBit(oldp+2329,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[12]));
    bufp->fullBit(oldp+2330,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[13]));
    bufp->fullBit(oldp+2331,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[14]));
    bufp->fullBit(oldp+2332,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[15]));
    bufp->fullBit(oldp+2333,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[16]));
    bufp->fullBit(oldp+2334,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[17]));
    bufp->fullBit(oldp+2335,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[18]));
    bufp->fullBit(oldp+2336,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[19]));
    bufp->fullBit(oldp+2337,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[20]));
    bufp->fullBit(oldp+2338,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[21]));
    bufp->fullBit(oldp+2339,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[22]));
    bufp->fullBit(oldp+2340,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[23]));
    bufp->fullBit(oldp+2341,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[24]));
    bufp->fullBit(oldp+2342,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[25]));
    bufp->fullBit(oldp+2343,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[26]));
    bufp->fullBit(oldp+2344,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[27]));
    bufp->fullBit(oldp+2345,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[28]));
    bufp->fullBit(oldp+2346,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[29]));
    bufp->fullBit(oldp+2347,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[30]));
    bufp->fullBit(oldp+2348,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[31]));
    bufp->fullBit(oldp+2349,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1_dirt_w_en_pipe_0));
    bufp->fullCData(oldp+2350,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1_dirt_w_addr_pipe_0),5);
    bufp->fullBit(oldp+2351,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1
                             [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1_dirt_w_addr_pipe_0]));
    bufp->fullBit(oldp+2352,((1U & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_waymask) 
                                    >> 1U))));
    bufp->fullCData(oldp+2353,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state),3);
    bufp->fullCData(oldp+2354,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state),2);
    bufp->fullCData(oldp+2355,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state),2);
    bufp->fullWData(oldp+2356,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg),512);
    bufp->fullQData(oldp+2372,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_addr_reg),64);
    bufp->fullBit(oldp+2374,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_r));
    bufp->fullCData(oldp+2375,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count_write),4);
    bufp->fullQData(oldp+2376,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_addr_reg),64);
    bufp->fullWData(oldp+2378,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg),512);
    bufp->fullQData(oldp+2394,(((0U == (7U & (IData)(
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
    bufp->fullQData(oldp+2396,(((0U == (7U & (IData)(
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
    bufp->fullQData(oldp+2398,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask),64);
    bufp->fullQData(oldp+2400,((((QData)((IData)(((1U 
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
    bufp->fullWData(oldp+2402,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo_lo),128);
    bufp->fullQData(oldp+2406,((((QData)((IData)(((1U 
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
    bufp->fullWData(oldp+2408,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo),256);
    bufp->fullQData(oldp+2416,((((QData)((IData)(((1U 
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
    bufp->fullWData(oldp+2418,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi_lo),128);
    bufp->fullQData(oldp+2422,((((QData)((IData)(((1U 
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
    bufp->fullWData(oldp+2424,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi),256);
    bufp->fullWData(oldp+2432,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend),512);
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
    bufp->fullWData(oldp+2448,(__Vtemp_hc34456c3__0),512);
    bufp->fullWData(oldp+2464,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[0]),512);
    bufp->fullWData(oldp+2480,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[1]),512);
    bufp->fullWData(oldp+2496,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[2]),512);
    bufp->fullWData(oldp+2512,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[3]),512);
    bufp->fullWData(oldp+2528,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[4]),512);
    bufp->fullWData(oldp+2544,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[5]),512);
    bufp->fullWData(oldp+2560,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[6]),512);
    bufp->fullWData(oldp+2576,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[7]),512);
    bufp->fullWData(oldp+2592,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[8]),512);
    bufp->fullWData(oldp+2608,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[9]),512);
    bufp->fullWData(oldp+2624,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[10]),512);
    bufp->fullWData(oldp+2640,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[11]),512);
    bufp->fullWData(oldp+2656,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[12]),512);
    bufp->fullWData(oldp+2672,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[13]),512);
    bufp->fullWData(oldp+2688,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[14]),512);
    bufp->fullWData(oldp+2704,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[15]),512);
    bufp->fullWData(oldp+2720,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[16]),512);
    bufp->fullWData(oldp+2736,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[17]),512);
    bufp->fullWData(oldp+2752,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[18]),512);
    bufp->fullWData(oldp+2768,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[19]),512);
    bufp->fullWData(oldp+2784,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[20]),512);
    bufp->fullWData(oldp+2800,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[21]),512);
    bufp->fullWData(oldp+2816,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[22]),512);
    bufp->fullWData(oldp+2832,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[23]),512);
    bufp->fullWData(oldp+2848,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[24]),512);
    bufp->fullWData(oldp+2864,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[25]),512);
    bufp->fullWData(oldp+2880,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[26]),512);
    bufp->fullWData(oldp+2896,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[27]),512);
    bufp->fullWData(oldp+2912,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[28]),512);
    bufp->fullWData(oldp+2928,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[29]),512);
    bufp->fullWData(oldp+2944,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[30]),512);
    bufp->fullWData(oldp+2960,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[31]),512);
    bufp->fullBit(oldp+2976,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_en_pipe_0));
    bufp->fullCData(oldp+2977,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0),5);
    bufp->fullCData(oldp+2978,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_addr),5);
    bufp->fullWData(oldp+2979,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[0]),512);
    bufp->fullWData(oldp+2995,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[1]),512);
    bufp->fullWData(oldp+3011,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[2]),512);
    bufp->fullWData(oldp+3027,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[3]),512);
    bufp->fullWData(oldp+3043,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[4]),512);
    bufp->fullWData(oldp+3059,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[5]),512);
    bufp->fullWData(oldp+3075,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[6]),512);
    bufp->fullWData(oldp+3091,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[7]),512);
    bufp->fullWData(oldp+3107,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[8]),512);
    bufp->fullWData(oldp+3123,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[9]),512);
    bufp->fullWData(oldp+3139,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[10]),512);
    bufp->fullWData(oldp+3155,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[11]),512);
    bufp->fullWData(oldp+3171,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[12]),512);
    bufp->fullWData(oldp+3187,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[13]),512);
    bufp->fullWData(oldp+3203,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[14]),512);
    bufp->fullWData(oldp+3219,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[15]),512);
    bufp->fullWData(oldp+3235,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[16]),512);
    bufp->fullWData(oldp+3251,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[17]),512);
    bufp->fullWData(oldp+3267,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[18]),512);
    bufp->fullWData(oldp+3283,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[19]),512);
    bufp->fullWData(oldp+3299,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[20]),512);
    bufp->fullWData(oldp+3315,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[21]),512);
    bufp->fullWData(oldp+3331,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[22]),512);
    bufp->fullWData(oldp+3347,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[23]),512);
    bufp->fullWData(oldp+3363,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[24]),512);
    bufp->fullWData(oldp+3379,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[25]),512);
    bufp->fullWData(oldp+3395,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[26]),512);
    bufp->fullWData(oldp+3411,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[27]),512);
    bufp->fullWData(oldp+3427,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[28]),512);
    bufp->fullWData(oldp+3443,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[29]),512);
    bufp->fullWData(oldp+3459,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[30]),512);
    bufp->fullWData(oldp+3475,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[31]),512);
    bufp->fullBit(oldp+3491,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_en_pipe_0));
    bufp->fullCData(oldp+3492,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0),5);
    bufp->fullQData(oldp+3493,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[0]),53);
    bufp->fullQData(oldp+3495,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[1]),53);
    bufp->fullQData(oldp+3497,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[2]),53);
    bufp->fullQData(oldp+3499,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[3]),53);
    bufp->fullQData(oldp+3501,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[4]),53);
    bufp->fullQData(oldp+3503,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[5]),53);
    bufp->fullQData(oldp+3505,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[6]),53);
    bufp->fullQData(oldp+3507,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[7]),53);
    bufp->fullQData(oldp+3509,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[8]),53);
    bufp->fullQData(oldp+3511,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[9]),53);
    bufp->fullQData(oldp+3513,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[10]),53);
    bufp->fullQData(oldp+3515,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[11]),53);
    bufp->fullQData(oldp+3517,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[12]),53);
    bufp->fullQData(oldp+3519,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[13]),53);
    bufp->fullQData(oldp+3521,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[14]),53);
    bufp->fullQData(oldp+3523,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[15]),53);
    bufp->fullQData(oldp+3525,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[16]),53);
    bufp->fullQData(oldp+3527,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[17]),53);
    bufp->fullQData(oldp+3529,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[18]),53);
    bufp->fullQData(oldp+3531,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[19]),53);
    bufp->fullQData(oldp+3533,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[20]),53);
    bufp->fullQData(oldp+3535,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[21]),53);
    bufp->fullQData(oldp+3537,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[22]),53);
    bufp->fullQData(oldp+3539,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[23]),53);
    bufp->fullQData(oldp+3541,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[24]),53);
    bufp->fullQData(oldp+3543,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[25]),53);
    bufp->fullQData(oldp+3545,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[26]),53);
    bufp->fullQData(oldp+3547,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[27]),53);
    bufp->fullQData(oldp+3549,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[28]),53);
    bufp->fullQData(oldp+3551,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[29]),53);
    bufp->fullQData(oldp+3553,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[30]),53);
    bufp->fullQData(oldp+3555,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[31]),53);
    bufp->fullBit(oldp+3557,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_tag_w_en_pipe_0));
    bufp->fullCData(oldp+3558,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_tag_w_addr_pipe_0),5);
    bufp->fullQData(oldp+3559,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_MPORT_1_data),53);
    bufp->fullQData(oldp+3561,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[0]),53);
    bufp->fullQData(oldp+3563,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[1]),53);
    bufp->fullQData(oldp+3565,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[2]),53);
    bufp->fullQData(oldp+3567,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[3]),53);
    bufp->fullQData(oldp+3569,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[4]),53);
    bufp->fullQData(oldp+3571,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[5]),53);
    bufp->fullQData(oldp+3573,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[6]),53);
    bufp->fullQData(oldp+3575,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[7]),53);
    bufp->fullQData(oldp+3577,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[8]),53);
    bufp->fullQData(oldp+3579,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[9]),53);
    bufp->fullQData(oldp+3581,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[10]),53);
    bufp->fullQData(oldp+3583,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[11]),53);
    bufp->fullQData(oldp+3585,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[12]),53);
    bufp->fullQData(oldp+3587,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[13]),53);
    bufp->fullQData(oldp+3589,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[14]),53);
    bufp->fullQData(oldp+3591,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[15]),53);
    bufp->fullQData(oldp+3593,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[16]),53);
    bufp->fullQData(oldp+3595,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[17]),53);
    bufp->fullQData(oldp+3597,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[18]),53);
    bufp->fullQData(oldp+3599,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[19]),53);
    bufp->fullQData(oldp+3601,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[20]),53);
    bufp->fullQData(oldp+3603,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[21]),53);
    bufp->fullQData(oldp+3605,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[22]),53);
    bufp->fullQData(oldp+3607,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[23]),53);
    bufp->fullQData(oldp+3609,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[24]),53);
    bufp->fullQData(oldp+3611,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[25]),53);
    bufp->fullQData(oldp+3613,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[26]),53);
    bufp->fullQData(oldp+3615,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[27]),53);
    bufp->fullQData(oldp+3617,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[28]),53);
    bufp->fullQData(oldp+3619,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[29]),53);
    bufp->fullQData(oldp+3621,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[30]),53);
    bufp->fullQData(oldp+3623,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[31]),53);
    bufp->fullBit(oldp+3625,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1_tag_w_en_pipe_0));
    bufp->fullCData(oldp+3626,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0),5);
    bufp->fullBit(oldp+3627,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[0]));
    bufp->fullBit(oldp+3628,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[1]));
    bufp->fullBit(oldp+3629,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[2]));
    bufp->fullBit(oldp+3630,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[3]));
    bufp->fullBit(oldp+3631,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[4]));
    bufp->fullBit(oldp+3632,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[5]));
    bufp->fullBit(oldp+3633,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[6]));
    bufp->fullBit(oldp+3634,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[7]));
    bufp->fullBit(oldp+3635,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[8]));
    bufp->fullBit(oldp+3636,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[9]));
    bufp->fullBit(oldp+3637,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[10]));
    bufp->fullBit(oldp+3638,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[11]));
    bufp->fullBit(oldp+3639,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[12]));
    bufp->fullBit(oldp+3640,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[13]));
    bufp->fullBit(oldp+3641,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[14]));
    bufp->fullBit(oldp+3642,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[15]));
    bufp->fullBit(oldp+3643,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[16]));
    bufp->fullBit(oldp+3644,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[17]));
    bufp->fullBit(oldp+3645,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[18]));
    bufp->fullBit(oldp+3646,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[19]));
    bufp->fullBit(oldp+3647,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[20]));
    bufp->fullBit(oldp+3648,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[21]));
    bufp->fullBit(oldp+3649,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[22]));
    bufp->fullBit(oldp+3650,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[23]));
    bufp->fullBit(oldp+3651,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[24]));
    bufp->fullBit(oldp+3652,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[25]));
    bufp->fullBit(oldp+3653,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[26]));
    bufp->fullBit(oldp+3654,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[27]));
    bufp->fullBit(oldp+3655,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[28]));
    bufp->fullBit(oldp+3656,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[29]));
    bufp->fullBit(oldp+3657,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[30]));
    bufp->fullBit(oldp+3658,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[31]));
    bufp->fullBit(oldp+3659,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_en_pipe_0));
    bufp->fullBit(oldp+3660,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[0]));
    bufp->fullBit(oldp+3661,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[1]));
    bufp->fullBit(oldp+3662,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[2]));
    bufp->fullBit(oldp+3663,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[3]));
    bufp->fullBit(oldp+3664,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[4]));
    bufp->fullBit(oldp+3665,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[5]));
    bufp->fullBit(oldp+3666,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[6]));
    bufp->fullBit(oldp+3667,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[7]));
    bufp->fullBit(oldp+3668,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[8]));
    bufp->fullBit(oldp+3669,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[9]));
    bufp->fullBit(oldp+3670,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[10]));
    bufp->fullBit(oldp+3671,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[11]));
    bufp->fullBit(oldp+3672,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[12]));
    bufp->fullBit(oldp+3673,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[13]));
    bufp->fullBit(oldp+3674,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[14]));
    bufp->fullBit(oldp+3675,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[15]));
    bufp->fullBit(oldp+3676,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[16]));
    bufp->fullBit(oldp+3677,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[17]));
    bufp->fullBit(oldp+3678,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[18]));
    bufp->fullBit(oldp+3679,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[19]));
    bufp->fullBit(oldp+3680,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[20]));
    bufp->fullBit(oldp+3681,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[21]));
    bufp->fullBit(oldp+3682,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[22]));
    bufp->fullBit(oldp+3683,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[23]));
    bufp->fullBit(oldp+3684,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[24]));
    bufp->fullBit(oldp+3685,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[25]));
    bufp->fullBit(oldp+3686,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[26]));
    bufp->fullBit(oldp+3687,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[27]));
    bufp->fullBit(oldp+3688,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[28]));
    bufp->fullBit(oldp+3689,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[29]));
    bufp->fullBit(oldp+3690,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[30]));
    bufp->fullBit(oldp+3691,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[31]));
    bufp->fullBit(oldp+3692,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_en_pipe_0));
    bufp->fullCData(oldp+3693,(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__read_state),2);
    bufp->fullCData(oldp+3694,(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state),2);
    bufp->fullBit(oldp+3695,(vlSelf->clock));
    bufp->fullBit(oldp+3696,(vlSelf->reset));
    bufp->fullQData(oldp+3697,(vlSelf->io_pc),64);
    bufp->fullIData(oldp+3699,(vlSelf->io_inst),32);
    bufp->fullBit(oldp+3700,(1U));
    bufp->fullCData(oldp+3701,(0U),5);
    bufp->fullCData(oldp+3702,(1U),5);
    bufp->fullCData(oldp+3703,(2U),5);
    bufp->fullCData(oldp+3704,(3U),5);
    bufp->fullCData(oldp+3705,(4U),5);
    bufp->fullCData(oldp+3706,(5U),5);
    bufp->fullCData(oldp+3707,(6U),5);
    bufp->fullCData(oldp+3708,(7U),5);
    bufp->fullCData(oldp+3709,(8U),5);
    bufp->fullCData(oldp+3710,(9U),5);
    bufp->fullCData(oldp+3711,(0xaU),5);
    bufp->fullCData(oldp+3712,(0xbU),5);
    bufp->fullCData(oldp+3713,(0xcU),5);
    bufp->fullCData(oldp+3714,(0xdU),5);
    bufp->fullCData(oldp+3715,(0xeU),5);
    bufp->fullCData(oldp+3716,(0xfU),5);
    bufp->fullCData(oldp+3717,(0x10U),5);
    bufp->fullCData(oldp+3718,(0x11U),5);
    bufp->fullCData(oldp+3719,(0x12U),5);
    bufp->fullCData(oldp+3720,(0x13U),5);
    bufp->fullCData(oldp+3721,(0x14U),5);
    bufp->fullCData(oldp+3722,(0x15U),5);
    bufp->fullCData(oldp+3723,(0x16U),5);
    bufp->fullCData(oldp+3724,(0x17U),5);
    bufp->fullCData(oldp+3725,(0x18U),5);
    bufp->fullCData(oldp+3726,(0x19U),5);
    bufp->fullCData(oldp+3727,(0x1aU),5);
    bufp->fullCData(oldp+3728,(0x1bU),5);
    bufp->fullCData(oldp+3729,(0x1cU),5);
    bufp->fullCData(oldp+3730,(0x1dU),5);
    bufp->fullCData(oldp+3731,(0x1eU),5);
    bufp->fullCData(oldp+3732,(0x1fU),5);
    bufp->fullCData(oldp+3733,(0U),2);
    bufp->fullCData(oldp+3734,(1U),4);
    bufp->fullCData(oldp+3735,(3U),3);
    bufp->fullCData(oldp+3736,(0U),3);
    bufp->fullCData(oldp+3737,(1U),2);
    bufp->fullCData(oldp+3738,(0U),4);
    bufp->fullCData(oldp+3739,(vlSelf->CoreTop__DOT__MMEM_rd_id),4);
    bufp->fullCData(oldp+3740,(vlSelf->CoreTop__DOT__MMEM_rd_resp),2);
    bufp->fullCData(oldp+3741,(vlSelf->CoreTop__DOT__MMEM_wr_id),4);
    bufp->fullBit(oldp+3742,(0U));
    bufp->fullIData(oldp+3743,(0x40U),32);
    bufp->fullCData(oldp+3744,(2U),2);
}
