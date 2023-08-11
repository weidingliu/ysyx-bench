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
    tracep->declBit(c+3599,"clock", false,-1);
    tracep->declBit(c+3600,"reset", false,-1);
    tracep->declQuad(c+3601,"io_pc", false,-1, 63,0);
    tracep->declBus(c+3603,"io_inst", false,-1, 31,0);
    tracep->pushNamePrefix("CoreTop ");
    tracep->declBit(c+3599,"clock", false,-1);
    tracep->declBit(c+3600,"reset", false,-1);
    tracep->declQuad(c+3601,"io_pc", false,-1, 63,0);
    tracep->declBus(c+3603,"io_inst", false,-1, 31,0);
    tracep->declBit(c+3599,"IF_clock", false,-1);
    tracep->declBit(c+3600,"IF_reset", false,-1);
    tracep->declBit(c+17,"IF_io_branch_io_is_branch", false,-1);
    tracep->declBit(c+18,"IF_io_branch_io_is_jump", false,-1);
    tracep->declQuad(c+19,"IF_io_branch_io_dnpc", false,-1, 63,0);
    tracep->declBit(c+21,"IF_io_cache_req_addr_req_valid", false,-1);
    tracep->declQuad(c+3601,"IF_io_cache_req_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+22,"IF_io_cache_req_rdata_rep_ready", false,-1);
    tracep->declBit(c+23,"IF_io_cache_req_rdata_rep_valid", false,-1);
    tracep->declQuad(c+24,"IF_io_cache_req_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+22,"IF_io_out_ready", false,-1);
    tracep->declBit(c+23,"IF_io_out_valid", false,-1);
    tracep->declQuad(c+3601,"IF_io_out_bits_PC", false,-1, 63,0);
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
    tracep->declBit(c+3599,"EX_clock", false,-1);
    tracep->declBit(c+3600,"EX_reset", false,-1);
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
    tracep->declBit(c+3604,"rf_bypass_io_Reg1_MPORT_en", false,-1);
    tracep->declBus(c+49,"rf_bypass_io_Reg1_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+230,"rf_bypass_io_Reg1_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3604,"rf_bypass_io_Reg2_MPORT_en", false,-1);
    tracep->declBus(c+50,"rf_bypass_io_Reg2_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+232,"rf_bypass_io_Reg2_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3604,"rf_DIP_io_rf_0_MPORT_en", false,-1);
    tracep->declBus(c+3605,"rf_DIP_io_rf_0_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+95,"rf_DIP_io_rf_0_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3604,"rf_DIP_io_rf_1_MPORT_en", false,-1);
    tracep->declBus(c+3606,"rf_DIP_io_rf_1_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+97,"rf_DIP_io_rf_1_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3604,"rf_DIP_io_rf_2_MPORT_en", false,-1);
    tracep->declBus(c+3607,"rf_DIP_io_rf_2_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+99,"rf_DIP_io_rf_2_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3604,"rf_DIP_io_rf_3_MPORT_en", false,-1);
    tracep->declBus(c+3608,"rf_DIP_io_rf_3_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+101,"rf_DIP_io_rf_3_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3604,"rf_DIP_io_rf_4_MPORT_en", false,-1);
    tracep->declBus(c+3609,"rf_DIP_io_rf_4_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+103,"rf_DIP_io_rf_4_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3604,"rf_DIP_io_rf_5_MPORT_en", false,-1);
    tracep->declBus(c+3610,"rf_DIP_io_rf_5_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+105,"rf_DIP_io_rf_5_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3604,"rf_DIP_io_rf_6_MPORT_en", false,-1);
    tracep->declBus(c+3611,"rf_DIP_io_rf_6_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+107,"rf_DIP_io_rf_6_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3604,"rf_DIP_io_rf_7_MPORT_en", false,-1);
    tracep->declBus(c+3612,"rf_DIP_io_rf_7_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+109,"rf_DIP_io_rf_7_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3604,"rf_DIP_io_rf_8_MPORT_en", false,-1);
    tracep->declBus(c+3613,"rf_DIP_io_rf_8_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+111,"rf_DIP_io_rf_8_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3604,"rf_DIP_io_rf_9_MPORT_en", false,-1);
    tracep->declBus(c+3614,"rf_DIP_io_rf_9_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+113,"rf_DIP_io_rf_9_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3604,"rf_DIP_io_rf_10_MPORT_en", false,-1);
    tracep->declBus(c+3615,"rf_DIP_io_rf_10_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+115,"rf_DIP_io_rf_10_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3604,"rf_DIP_io_rf_11_MPORT_en", false,-1);
    tracep->declBus(c+3616,"rf_DIP_io_rf_11_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+117,"rf_DIP_io_rf_11_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3604,"rf_DIP_io_rf_12_MPORT_en", false,-1);
    tracep->declBus(c+3617,"rf_DIP_io_rf_12_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+119,"rf_DIP_io_rf_12_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3604,"rf_DIP_io_rf_13_MPORT_en", false,-1);
    tracep->declBus(c+3618,"rf_DIP_io_rf_13_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+121,"rf_DIP_io_rf_13_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3604,"rf_DIP_io_rf_14_MPORT_en", false,-1);
    tracep->declBus(c+3619,"rf_DIP_io_rf_14_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+123,"rf_DIP_io_rf_14_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3604,"rf_DIP_io_rf_15_MPORT_en", false,-1);
    tracep->declBus(c+3620,"rf_DIP_io_rf_15_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+125,"rf_DIP_io_rf_15_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3604,"rf_DIP_io_rf_16_MPORT_en", false,-1);
    tracep->declBus(c+3621,"rf_DIP_io_rf_16_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+127,"rf_DIP_io_rf_16_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3604,"rf_DIP_io_rf_17_MPORT_en", false,-1);
    tracep->declBus(c+3622,"rf_DIP_io_rf_17_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+129,"rf_DIP_io_rf_17_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3604,"rf_DIP_io_rf_18_MPORT_en", false,-1);
    tracep->declBus(c+3623,"rf_DIP_io_rf_18_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+131,"rf_DIP_io_rf_18_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3604,"rf_DIP_io_rf_19_MPORT_en", false,-1);
    tracep->declBus(c+3624,"rf_DIP_io_rf_19_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+133,"rf_DIP_io_rf_19_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3604,"rf_DIP_io_rf_20_MPORT_en", false,-1);
    tracep->declBus(c+3625,"rf_DIP_io_rf_20_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+135,"rf_DIP_io_rf_20_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3604,"rf_DIP_io_rf_21_MPORT_en", false,-1);
    tracep->declBus(c+3626,"rf_DIP_io_rf_21_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+137,"rf_DIP_io_rf_21_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3604,"rf_DIP_io_rf_22_MPORT_en", false,-1);
    tracep->declBus(c+3627,"rf_DIP_io_rf_22_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+139,"rf_DIP_io_rf_22_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3604,"rf_DIP_io_rf_23_MPORT_en", false,-1);
    tracep->declBus(c+3628,"rf_DIP_io_rf_23_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+141,"rf_DIP_io_rf_23_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3604,"rf_DIP_io_rf_24_MPORT_en", false,-1);
    tracep->declBus(c+3629,"rf_DIP_io_rf_24_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+143,"rf_DIP_io_rf_24_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3604,"rf_DIP_io_rf_25_MPORT_en", false,-1);
    tracep->declBus(c+3630,"rf_DIP_io_rf_25_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+145,"rf_DIP_io_rf_25_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3604,"rf_DIP_io_rf_26_MPORT_en", false,-1);
    tracep->declBus(c+3631,"rf_DIP_io_rf_26_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+147,"rf_DIP_io_rf_26_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3604,"rf_DIP_io_rf_27_MPORT_en", false,-1);
    tracep->declBus(c+3632,"rf_DIP_io_rf_27_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+149,"rf_DIP_io_rf_27_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3604,"rf_DIP_io_rf_28_MPORT_en", false,-1);
    tracep->declBus(c+3633,"rf_DIP_io_rf_28_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+151,"rf_DIP_io_rf_28_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3604,"rf_DIP_io_rf_29_MPORT_en", false,-1);
    tracep->declBus(c+3634,"rf_DIP_io_rf_29_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+153,"rf_DIP_io_rf_29_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3604,"rf_DIP_io_rf_30_MPORT_en", false,-1);
    tracep->declBus(c+3635,"rf_DIP_io_rf_30_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+155,"rf_DIP_io_rf_30_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3604,"rf_DIP_io_rf_31_MPORT_en", false,-1);
    tracep->declBus(c+3636,"rf_DIP_io_rf_31_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+157,"rf_DIP_io_rf_31_MPORT_data", false,-1, 63,0);
    tracep->declQuad(c+234,"rf_MPORT_data", false,-1, 63,0);
    tracep->declBus(c+236,"rf_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+3604,"rf_MPORT_mask", false,-1);
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
    tracep->declBus(c+3603,"WB_io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+285,"WB_io_in_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBit(c+287,"WB_io_in_bits_ctrl_flow_skip", false,-1);
    tracep->declBus(c+236,"WB_io_in_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declQuad(c+288,"WB_io_in_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+290,"WB_io_in_bits_ctrl_csr_csr_data", false,-1, 63,0);
    tracep->declBit(c+292,"WB_io_in_bits_ctrl_csr_csr_en", false,-1);
    tracep->declBus(c+293,"WB_io_in_bits_ctrl_csr_csr_idx", false,-1, 11,0);
    tracep->declBit(c+3604,"WB_io_out_ready", false,-1);
    tracep->declBit(c+294,"WB_io_out_valid", false,-1);
    tracep->declBit(c+295,"WB_io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+28,"WB_io_out_bits_ctrl_signal_ertn_flush", false,-1);
    tracep->declBit(c+29,"WB_io_out_bits_ctrl_signal_excp_flush", false,-1);
    tracep->declQuad(c+283,"WB_io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+3603,"WB_io_out_bits_ctrl_flow_inst", false,-1, 31,0);
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
    tracep->declBit(c+3599,"ICACHE_clock", false,-1);
    tracep->declBit(c+3600,"ICACHE_reset", false,-1);
    tracep->declBit(c+21,"ICACHE_io_in_addr_req_valid", false,-1);
    tracep->declQuad(c+3601,"ICACHE_io_in_addr_req_bits_addr", false,-1, 63,0);
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
    tracep->declBus(c+3637,"ICACHE_io_out_wb_bits_breap", false,-1, 1,0);
    tracep->declBit(c+3600,"MMEM_reset", false,-1);
    tracep->declBit(c+3599,"MMEM_clk", false,-1);
    tracep->declBit(c+308,"MMEM_ar_valid", false,-1);
    tracep->declBit(c+309,"MMEM_ar_ready", false,-1);
    tracep->declQuad(c+310,"MMEM_ar_addr", false,-1, 63,0);
    tracep->declBus(c+3638,"MMEM_ar_id", false,-1, 3,0);
    tracep->declBus(c+312,"MMEM_ar_len", false,-1, 7,0);
    tracep->declBus(c+3639,"MMEM_ar_size", false,-1, 2,0);
    tracep->declBus(c+3640,"MMEM_ar_prot", false,-1, 2,0);
    tracep->declBus(c+3641,"MMEM_ar_burst", false,-1, 1,0);
    tracep->declBus(c+3637,"MMEM_ar_lock", false,-1, 1,0);
    tracep->declBus(c+3642,"MMEM_ar_cache", false,-1, 3,0);
    tracep->declBit(c+313,"MMEM_rd_valid", false,-1);
    tracep->declBit(c+3604,"MMEM_rd_ready", false,-1);
    tracep->declQuad(c+9,"MMEM_rd_data", false,-1, 63,0);
    tracep->declBus(c+3643,"MMEM_rd_id", false,-1, 3,0);
    tracep->declBus(c+3644,"MMEM_rd_resp", false,-1, 1,0);
    tracep->declBit(c+306,"MMEM_rd_last", false,-1);
    tracep->declBit(c+314,"MMEM_aw_valid", false,-1);
    tracep->declBit(c+315,"MMEM_aw_ready", false,-1);
    tracep->declQuad(c+316,"MMEM_aw_addr", false,-1, 63,0);
    tracep->declBus(c+3638,"MMEM_aw_id", false,-1, 3,0);
    tracep->declBus(c+312,"MMEM_aw_len", false,-1, 7,0);
    tracep->declBus(c+3639,"MMEM_aw_size", false,-1, 2,0);
    tracep->declBus(c+3640,"MMEM_aw_prot", false,-1, 2,0);
    tracep->declBus(c+3641,"MMEM_aw_burst", false,-1, 1,0);
    tracep->declBus(c+3637,"MMEM_aw_lock", false,-1, 1,0);
    tracep->declBus(c+3642,"MMEM_aw_cache", false,-1, 3,0);
    tracep->declBit(c+318,"MMEM_wd_valid", false,-1);
    tracep->declBit(c+319,"MMEM_wd_ready", false,-1);
    tracep->declQuad(c+320,"MMEM_wd_data", false,-1, 63,0);
    tracep->declBus(c+322,"MMEM_wstrb", false,-1, 7,0);
    tracep->declBus(c+3638,"MMEM_wd_id", false,-1, 3,0);
    tracep->declBit(c+323,"MMEM_wd_last", false,-1);
    tracep->declBit(c+324,"MMEM_wr_valid", false,-1);
    tracep->declBit(c+325,"MMEM_wr_ready", false,-1);
    tracep->declBus(c+3637,"MMEM_wr_breap", false,-1, 1,0);
    tracep->declBus(c+3645,"MMEM_wr_id", false,-1, 3,0);
    tracep->declBit(c+3599,"ARBITER_clock", false,-1);
    tracep->declBit(c+3600,"ARBITER_reset", false,-1);
    tracep->declBit(c+326,"ARBITER_io_in1_raddr_req_ready", false,-1);
    tracep->declBit(c+327,"ARBITER_io_in1_raddr_req_valid", false,-1);
    tracep->declQuad(c+328,"ARBITER_io_in1_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBus(c+330,"ARBITER_io_in1_raddr_req_bits_len", false,-1, 7,0);
    tracep->declBit(c+331,"ARBITER_io_in1_waddr_req_ready", false,-1);
    tracep->declBit(c+332,"ARBITER_io_in1_waddr_req_valid", false,-1);
    tracep->declQuad(c+333,"ARBITER_io_in1_waddr_req_bits_addr", false,-1, 63,0);
    tracep->declBus(c+330,"ARBITER_io_in1_waddr_req_bits_len", false,-1, 7,0);
    tracep->declBit(c+3604,"ARBITER_io_in1_rdata_rep_ready", false,-1);
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
    tracep->declBus(c+3637,"ARBITER_io_in1_wb_bits_breap", false,-1, 1,0);
    tracep->declBit(c+301,"ARBITER_io_in2_raddr_req_ready", false,-1);
    tracep->declBit(c+302,"ARBITER_io_in2_raddr_req_valid", false,-1);
    tracep->declQuad(c+303,"ARBITER_io_in2_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+305,"ARBITER_io_in2_rdata_rep_valid", false,-1);
    tracep->declQuad(c+9,"ARBITER_io_in2_rdata_rep_bits_data", false,-1, 63,0);
    tracep->declBit(c+306,"ARBITER_io_in2_rdata_rep_bits_last", false,-1);
    tracep->declBit(c+307,"ARBITER_io_in2_wb_valid", false,-1);
    tracep->declBus(c+3637,"ARBITER_io_in2_wb_bits_breap", false,-1, 1,0);
    tracep->declBit(c+309,"ARBITER_io_out_raddr_req_ready", false,-1);
    tracep->declBit(c+308,"ARBITER_io_out_raddr_req_valid", false,-1);
    tracep->declQuad(c+310,"ARBITER_io_out_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBus(c+312,"ARBITER_io_out_raddr_req_bits_len", false,-1, 7,0);
    tracep->declBit(c+315,"ARBITER_io_out_waddr_req_ready", false,-1);
    tracep->declBit(c+314,"ARBITER_io_out_waddr_req_valid", false,-1);
    tracep->declQuad(c+316,"ARBITER_io_out_waddr_req_bits_addr", false,-1, 63,0);
    tracep->declBus(c+312,"ARBITER_io_out_waddr_req_bits_len", false,-1, 7,0);
    tracep->declBit(c+3604,"ARBITER_io_out_rdata_rep_ready", false,-1);
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
    tracep->declBus(c+3637,"ARBITER_io_out_wb_bits_breap", false,-1, 1,0);
    tracep->declBit(c+3599,"MMIO_clock", false,-1);
    tracep->declBit(c+3600,"MMIO_reset", false,-1);
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
    tracep->declBit(c+3604,"MMIO_io_out_rdata_rep_ready", false,-1);
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
    tracep->declBus(c+3637,"MMIO_io_out_wb_bits_breap", false,-1, 1,0);
    tracep->declBit(c+3599,"CSR_clock", false,-1);
    tracep->declBit(c+3600,"CSR_reset", false,-1);
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
    tracep->declBit(c+3599,"clock", false,-1);
    tracep->declBit(c+3600,"reset", false,-1);
    tracep->declBit(c+326,"io_in1_raddr_req_ready", false,-1);
    tracep->declBit(c+327,"io_in1_raddr_req_valid", false,-1);
    tracep->declQuad(c+328,"io_in1_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBus(c+330,"io_in1_raddr_req_bits_len", false,-1, 7,0);
    tracep->declBit(c+331,"io_in1_waddr_req_ready", false,-1);
    tracep->declBit(c+332,"io_in1_waddr_req_valid", false,-1);
    tracep->declQuad(c+333,"io_in1_waddr_req_bits_addr", false,-1, 63,0);
    tracep->declBus(c+330,"io_in1_waddr_req_bits_len", false,-1, 7,0);
    tracep->declBit(c+3604,"io_in1_rdata_rep_ready", false,-1);
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
    tracep->declBus(c+3637,"io_in1_wb_bits_breap", false,-1, 1,0);
    tracep->declBit(c+301,"io_in2_raddr_req_ready", false,-1);
    tracep->declBit(c+302,"io_in2_raddr_req_valid", false,-1);
    tracep->declQuad(c+303,"io_in2_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+305,"io_in2_rdata_rep_valid", false,-1);
    tracep->declQuad(c+9,"io_in2_rdata_rep_bits_data", false,-1, 63,0);
    tracep->declBit(c+306,"io_in2_rdata_rep_bits_last", false,-1);
    tracep->declBit(c+307,"io_in2_wb_valid", false,-1);
    tracep->declBus(c+3637,"io_in2_wb_bits_breap", false,-1, 1,0);
    tracep->declBit(c+309,"io_out_raddr_req_ready", false,-1);
    tracep->declBit(c+308,"io_out_raddr_req_valid", false,-1);
    tracep->declQuad(c+310,"io_out_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBus(c+312,"io_out_raddr_req_bits_len", false,-1, 7,0);
    tracep->declBit(c+315,"io_out_waddr_req_ready", false,-1);
    tracep->declBit(c+314,"io_out_waddr_req_valid", false,-1);
    tracep->declQuad(c+316,"io_out_waddr_req_bits_addr", false,-1, 63,0);
    tracep->declBus(c+312,"io_out_waddr_req_bits_len", false,-1, 7,0);
    tracep->declBit(c+3604,"io_out_rdata_rep_ready", false,-1);
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
    tracep->declBus(c+3637,"io_out_wb_bits_breap", false,-1, 1,0);
    tracep->declBit(c+446,"state", false,-1);
    tracep->declBit(c+447,"choose_r", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CSR ");
    tracep->declBit(c+3599,"clock", false,-1);
    tracep->declBit(c+3600,"reset", false,-1);
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
    tracep->declBit(c+3599,"clock", false,-1);
    tracep->declBit(c+3600,"reset", false,-1);
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
    tracep->declBit(c+3599,"mul_clock", false,-1);
    tracep->declBit(c+3600,"mul_reset", false,-1);
    tracep->declBit(c+539,"mul_io_in_valid", false,-1);
    tracep->declQuad(c+540,"mul_io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+542,"mul_io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declBit(c+544,"mul_io_out_valid", false,-1);
    tracep->declQuad(c+545,"mul_io_out_bits_result_result_lo", false,-1, 63,0);
    tracep->declBit(c+3599,"div_clock", false,-1);
    tracep->declBit(c+3600,"div_reset", false,-1);
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
    tracep->declBit(c+3599,"clock", false,-1);
    tracep->declBit(c+3600,"reset", false,-1);
    tracep->declBit(c+547,"io_in_valid", false,-1);
    tracep->declBit(c+548,"io_in_bits_ctrl_flow_div_signed", false,-1);
    tracep->declQuad(c+549,"io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+551,"io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declBit(c+553,"io_out_valid", false,-1);
    tracep->declQuad(c+554,"io_out_bits_result_quotient", false,-1, 63,0);
    tracep->declQuad(c+556,"io_out_bits_result_remainder", false,-1, 63,0);
    tracep->declArray(c+585,"dividend", false,-1, 127,0);
    tracep->declQuad(c+589,"divisor", false,-1, 63,0);
    tracep->declQuad(c+591,"S", false,-1, 63,0);
    tracep->declBus(c+593,"state", false,-1, 1,0);
    tracep->declBus(c+594,"count", false,-1, 5,0);
    tracep->declBit(c+595,"wrap_wrap", false,-1);
    tracep->declBit(c+596,"s", false,-1);
    tracep->declArray(c+597,"res_div", false,-1, 64,0);
    tracep->declQuad(c+600,"negative_s", false,-1, 63,0);
    tracep->declQuad(c+602,"negative_r", false,-1, 63,0);
    tracep->declQuad(c+604,"s_o", false,-1, 63,0);
    tracep->declQuad(c+606,"r_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mul ");
    tracep->declBit(c+3599,"clock", false,-1);
    tracep->declBit(c+3600,"reset", false,-1);
    tracep->declBit(c+539,"io_in_valid", false,-1);
    tracep->declQuad(c+540,"io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+542,"io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declBit(c+544,"io_out_valid", false,-1);
    tracep->declQuad(c+545,"io_out_bits_result_result_lo", false,-1, 63,0);
    tracep->declBit(c+3599,"mult_clock", false,-1);
    tracep->declBit(c+3600,"mult_reset", false,-1);
    tracep->declBit(c+539,"mult_io_in_valid", false,-1);
    tracep->declQuad(c+540,"mult_io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+542,"mult_io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declBit(c+544,"mult_io_out_valid", false,-1);
    tracep->declQuad(c+545,"mult_io_out_bits_result_result_lo", false,-1, 63,0);
    tracep->pushNamePrefix("mult ");
    tracep->declBit(c+3599,"clock", false,-1);
    tracep->declBit(c+3600,"reset", false,-1);
    tracep->declBit(c+539,"io_in_valid", false,-1);
    tracep->declQuad(c+540,"io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+542,"io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declBit(c+544,"io_out_valid", false,-1);
    tracep->declQuad(c+545,"io_out_bits_result_result_lo", false,-1, 63,0);
    tracep->declBus(c+608,"partial_io_y_3", false,-1, 2,0);
    tracep->declArray(c+609,"partial_io_x", false,-1, 131,0);
    tracep->declArray(c+614,"partial_io_p", false,-1, 131,0);
    tracep->declBit(c+619,"partial_io_c", false,-1);
    tracep->declArray(c+620,"multiplier", false,-1, 65,0);
    tracep->declArray(c+609,"multiplicand", false,-1, 131,0);
    tracep->declArray(c+623,"p", false,-1, 131,0);
    tracep->declBus(c+628,"count", false,-1, 6,0);
    tracep->declArray(c+629,"temp", false,-1, 131,0);
    tracep->declBit(c+634,"p_sign", false,-1);
    tracep->pushNamePrefix("partial ");
    tracep->declBus(c+608,"io_y_3", false,-1, 2,0);
    tracep->declArray(c+609,"io_x", false,-1, 131,0);
    tracep->declArray(c+614,"io_p", false,-1, 131,0);
    tracep->declBit(c+619,"io_c", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("ICACHE ");
    tracep->declBit(c+3599,"clock", false,-1);
    tracep->declBit(c+3600,"reset", false,-1);
    tracep->declBit(c+21,"io_in_addr_req_valid", false,-1);
    tracep->declQuad(c+3601,"io_in_addr_req_bits_addr", false,-1, 63,0);
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
    tracep->declBus(c+3637,"io_out_wb_bits_breap", false,-1, 1,0);
    tracep->declBit(c+3599,"Cache_data_clock", false,-1);
    tracep->declBit(c+635,"Cache_data_io_in_valid", false,-1);
    tracep->declQuad(c+3601,"Cache_data_io_in_addr", false,-1, 63,0);
    tracep->declQuad(c+636,"Cache_data_io_write_bus_addr", false,-1, 63,0);
    tracep->declBit(c+638,"Cache_data_io_write_bus_valid", false,-1);
    tracep->declBus(c+639,"Cache_data_io_write_bus_waymask", false,-1, 1,0);
    tracep->declArray(c+640,"Cache_data_io_write_bus_wdata", false,-1, 511,0);
    tracep->declBit(c+635,"Cache_data_io_out_valid", false,-1);
    tracep->declQuad(c+656,"Cache_data_io_out_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+658,"Cache_data_io_out_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+660,"Cache_data_io_out_bits_meat_valid_0", false,-1);
    tracep->declBit(c+661,"Cache_data_io_out_bits_meat_valid_1", false,-1);
    tracep->declArray(c+662,"Cache_data_io_out_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+678,"Cache_data_io_out_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+694,"Cache_data_io_out_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBus(c+696,"Cache_data_io_out_bits_ctrl_data_index", false,-1, 4,0);
    tracep->declBus(c+697,"Cache_data_io_out_bits_ctrl_data_offset", false,-1, 5,0);
    tracep->declBit(c+698,"Scanf_io_in_valid", false,-1);
    tracep->declQuad(c+656,"Scanf_io_in_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+658,"Scanf_io_in_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+660,"Scanf_io_in_bits_meat_valid_0", false,-1);
    tracep->declBit(c+661,"Scanf_io_in_bits_meat_valid_1", false,-1);
    tracep->declArray(c+662,"Scanf_io_in_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+678,"Scanf_io_in_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+694,"Scanf_io_in_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBus(c+696,"Scanf_io_in_bits_ctrl_data_index", false,-1, 4,0);
    tracep->declBit(c+699,"Scanf_io_out_bits_hit", false,-1);
    tracep->declArray(c+700,"Scanf_io_out_bits_data", false,-1, 511,0);
    tracep->declBus(c+696,"Scanf_io_out_bits_meta_ctrl_data_index", false,-1, 4,0);
    tracep->declBit(c+716,"Scanf_io_out_bits_hit_way_0", false,-1);
    tracep->declBit(c+717,"Scanf_io_out_bits_hit_way_1", false,-1);
    tracep->declQuad(c+656,"Scanf_io_out_bits_tag_0", false,-1, 52,0);
    tracep->declQuad(c+658,"Scanf_io_out_bits_tag_1", false,-1, 52,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+718+i*1,"lru", true,(i+0));
    }
    tracep->declBit(c+750,"lru_lru_w_MPORT_en", false,-1);
    tracep->declBus(c+751,"lru_lru_w_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+752,"lru_lru_w_MPORT_data", false,-1);
    tracep->declBit(c+3604,"lru_MPORT_data", false,-1);
    tracep->declBus(c+696,"lru_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+3604,"lru_MPORT_mask", false,-1);
    tracep->declBit(c+753,"lru_MPORT_en", false,-1);
    tracep->declBit(c+3646,"lru_MPORT_1_data", false,-1);
    tracep->declBus(c+696,"lru_MPORT_1_addr", false,-1, 4,0);
    tracep->declBit(c+3604,"lru_MPORT_1_mask", false,-1);
    tracep->declBit(c+754,"lru_MPORT_1_en", false,-1);
    tracep->declBit(c+3646,"lru_MPORT_2_data", false,-1);
    tracep->declBus(c+696,"lru_MPORT_2_addr", false,-1, 4,0);
    tracep->declBit(c+3604,"lru_MPORT_2_mask", false,-1);
    tracep->declBit(c+755,"lru_MPORT_2_en", false,-1);
    tracep->declBit(c+3604,"lru_MPORT_3_data", false,-1);
    tracep->declBus(c+696,"lru_MPORT_3_addr", false,-1, 4,0);
    tracep->declBit(c+3604,"lru_MPORT_3_mask", false,-1);
    tracep->declBit(c+756,"lru_MPORT_3_en", false,-1);
    tracep->declBit(c+750,"lru_lru_w_MPORT_en_pipe_0", false,-1);
    tracep->declBus(c+751,"lru_lru_w_MPORT_addr_pipe_0", false,-1, 4,0);
    tracep->declBus(c+757,"state", false,-1, 2,0);
    tracep->declBus(c+758,"read_state", false,-1, 1,0);
    tracep->declArray(c+759,"data_line_reg", false,-1, 511,0);
    tracep->declQuad(c+775,"mem_addr_reg", false,-1, 63,0);
    tracep->declBit(c+777,"lru_r", false,-1);
    tracep->declBit(c+716,"hit_way_0", false,-1);
    tracep->declBit(c+717,"hit_way_1", false,-1);
    tracep->declBit(c+752,"lru_w", false,-1);
    tracep->declQuad(c+778,"hit_data", false,-1, 63,0);
    tracep->declQuad(c+780,"mem_data", false,-1, 63,0);
    tracep->declBit(c+698,"Scanf_io_in_valid_REG", false,-1);
    tracep->pushNamePrefix("Cache_data ");
    tracep->declBit(c+3599,"clock", false,-1);
    tracep->declBit(c+635,"io_in_valid", false,-1);
    tracep->declQuad(c+3601,"io_in_addr", false,-1, 63,0);
    tracep->declQuad(c+636,"io_write_bus_addr", false,-1, 63,0);
    tracep->declBit(c+638,"io_write_bus_valid", false,-1);
    tracep->declBus(c+639,"io_write_bus_waymask", false,-1, 1,0);
    tracep->declArray(c+640,"io_write_bus_wdata", false,-1, 511,0);
    tracep->declBit(c+635,"io_out_valid", false,-1);
    tracep->declQuad(c+656,"io_out_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+658,"io_out_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+660,"io_out_bits_meat_valid_0", false,-1);
    tracep->declBit(c+661,"io_out_bits_meat_valid_1", false,-1);
    tracep->declArray(c+662,"io_out_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+678,"io_out_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+694,"io_out_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBus(c+696,"io_out_bits_ctrl_data_index", false,-1, 4,0);
    tracep->declBus(c+697,"io_out_bits_ctrl_data_offset", false,-1, 5,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declArray(c+782+i*16,"data_0", true,(i+0), 511,0);
    }
    tracep->declBit(c+1294,"data_0_data_w_en", false,-1);
    tracep->declBus(c+1295,"data_0_data_w_addr", false,-1, 4,0);
    tracep->declArray(c+662,"data_0_data_w_data", false,-1, 511,0);
    tracep->declArray(c+640,"data_0_MPORT_data", false,-1, 511,0);
    tracep->declBus(c+1296,"data_0_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+1297,"data_0_MPORT_mask", false,-1);
    tracep->declBit(c+638,"data_0_MPORT_en", false,-1);
    tracep->declBit(c+1294,"data_0_data_w_en_pipe_0", false,-1);
    tracep->declBus(c+1295,"data_0_data_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declArray(c+1298+i*16,"data_1", true,(i+0), 511,0);
    }
    tracep->declBit(c+1810,"data_1_data_w_en", false,-1);
    tracep->declBus(c+1811,"data_1_data_w_addr", false,-1, 4,0);
    tracep->declArray(c+678,"data_1_data_w_data", false,-1, 511,0);
    tracep->declArray(c+640,"data_1_MPORT_data", false,-1, 511,0);
    tracep->declBus(c+1296,"data_1_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+777,"data_1_MPORT_mask", false,-1);
    tracep->declBit(c+638,"data_1_MPORT_en", false,-1);
    tracep->declBit(c+1810,"data_1_data_w_en_pipe_0", false,-1);
    tracep->declBus(c+1811,"data_1_data_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+1812+i*2,"TAG_0", true,(i+0), 52,0);
    }
    tracep->declBit(c+1876,"TAG_0_tag_w_en", false,-1);
    tracep->declBus(c+1877,"TAG_0_tag_w_addr", false,-1, 4,0);
    tracep->declQuad(c+656,"TAG_0_tag_w_data", false,-1, 52,0);
    tracep->declQuad(c+1878,"TAG_0_MPORT_1_data", false,-1, 52,0);
    tracep->declBus(c+1296,"TAG_0_MPORT_1_addr", false,-1, 4,0);
    tracep->declBit(c+1297,"TAG_0_MPORT_1_mask", false,-1);
    tracep->declBit(c+638,"TAG_0_MPORT_1_en", false,-1);
    tracep->declBit(c+1876,"TAG_0_tag_w_en_pipe_0", false,-1);
    tracep->declBus(c+1877,"TAG_0_tag_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+1880+i*2,"TAG_1", true,(i+0), 52,0);
    }
    tracep->declBit(c+1944,"TAG_1_tag_w_en", false,-1);
    tracep->declBus(c+1877,"TAG_1_tag_w_addr", false,-1, 4,0);
    tracep->declQuad(c+658,"TAG_1_tag_w_data", false,-1, 52,0);
    tracep->declQuad(c+1878,"TAG_1_MPORT_1_data", false,-1, 52,0);
    tracep->declBus(c+1296,"TAG_1_MPORT_1_addr", false,-1, 4,0);
    tracep->declBit(c+777,"TAG_1_MPORT_1_mask", false,-1);
    tracep->declBit(c+638,"TAG_1_MPORT_1_en", false,-1);
    tracep->declBit(c+1944,"TAG_1_tag_w_en_pipe_0", false,-1);
    tracep->declBus(c+1877,"TAG_1_tag_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+1945+i*1,"data_valid_0", true,(i+0));
    }
    tracep->declBit(c+1977,"data_valid_0_valid_w_en", false,-1);
    tracep->declBus(c+1877,"data_valid_0_valid_w_addr", false,-1, 4,0);
    tracep->declBit(c+660,"data_valid_0_valid_w_data", false,-1);
    tracep->declBit(c+3604,"data_valid_0_MPORT_2_data", false,-1);
    tracep->declBus(c+1296,"data_valid_0_MPORT_2_addr", false,-1, 4,0);
    tracep->declBit(c+1297,"data_valid_0_MPORT_2_mask", false,-1);
    tracep->declBit(c+638,"data_valid_0_MPORT_2_en", false,-1);
    tracep->declBit(c+1977,"data_valid_0_valid_w_en_pipe_0", false,-1);
    tracep->declBus(c+1877,"data_valid_0_valid_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+1978+i*1,"data_valid_1", true,(i+0));
    }
    tracep->declBit(c+2010,"data_valid_1_valid_w_en", false,-1);
    tracep->declBus(c+1877,"data_valid_1_valid_w_addr", false,-1, 4,0);
    tracep->declBit(c+661,"data_valid_1_valid_w_data", false,-1);
    tracep->declBit(c+3604,"data_valid_1_MPORT_2_data", false,-1);
    tracep->declBus(c+1296,"data_valid_1_MPORT_2_addr", false,-1, 4,0);
    tracep->declBit(c+777,"data_valid_1_MPORT_2_mask", false,-1);
    tracep->declBit(c+638,"data_valid_1_MPORT_2_en", false,-1);
    tracep->declBit(c+2010,"data_valid_1_valid_w_en_pipe_0", false,-1);
    tracep->declBus(c+1877,"data_valid_1_valid_w_addr_pipe_0", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Scanf ");
    tracep->declBit(c+698,"io_in_valid", false,-1);
    tracep->declQuad(c+656,"io_in_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+658,"io_in_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+660,"io_in_bits_meat_valid_0", false,-1);
    tracep->declBit(c+661,"io_in_bits_meat_valid_1", false,-1);
    tracep->declArray(c+662,"io_in_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+678,"io_in_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+694,"io_in_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBus(c+696,"io_in_bits_ctrl_data_index", false,-1, 4,0);
    tracep->declBit(c+699,"io_out_bits_hit", false,-1);
    tracep->declArray(c+700,"io_out_bits_data", false,-1, 511,0);
    tracep->declBus(c+696,"io_out_bits_meta_ctrl_data_index", false,-1, 4,0);
    tracep->declBit(c+716,"io_out_bits_hit_way_0", false,-1);
    tracep->declBit(c+717,"io_out_bits_hit_way_1", false,-1);
    tracep->declQuad(c+656,"io_out_bits_tag_0", false,-1, 52,0);
    tracep->declQuad(c+658,"io_out_bits_tag_1", false,-1, 52,0);
    tracep->declBit(c+716,"hit_way_0_result", false,-1);
    tracep->declBit(c+717,"hit_way_1_result", false,-1);
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
    tracep->declBus(c+2011,"Inst_decode_0", false,-1, 3,0);
    tracep->declBus(c+52,"Inst_decode_2", false,-1, 6,0);
    tracep->declBit(c+2012,"Inst_decode_3", false,-1);
    tracep->declBus(c+2013,"srctype1", false,-1, 1,0);
    tracep->declBit(c+2014,"srctype2", false,-1);
    tracep->declBit(c+2015,"sign", false,-1);
    tracep->declBit(c+2016,"sign_1", false,-1);
    tracep->declBit(c+2015,"sign_2", false,-1);
    tracep->declBit(c+2015,"sign_3", false,-1);
    tracep->declBit(c+2015,"sign_4", false,-1);
    tracep->declQuad(c+56,"imm", false,-1, 63,0);
    tracep->declBit(c+2017,"stall_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IF ");
    tracep->declBit(c+3599,"clock", false,-1);
    tracep->declBit(c+3600,"reset", false,-1);
    tracep->declBit(c+17,"io_branch_io_is_branch", false,-1);
    tracep->declBit(c+18,"io_branch_io_is_jump", false,-1);
    tracep->declQuad(c+19,"io_branch_io_dnpc", false,-1, 63,0);
    tracep->declBit(c+21,"io_cache_req_addr_req_valid", false,-1);
    tracep->declQuad(c+3601,"io_cache_req_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+22,"io_cache_req_rdata_rep_ready", false,-1);
    tracep->declBit(c+23,"io_cache_req_rdata_rep_valid", false,-1);
    tracep->declQuad(c+24,"io_cache_req_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+22,"io_out_ready", false,-1);
    tracep->declBit(c+23,"io_out_valid", false,-1);
    tracep->declQuad(c+3601,"io_out_bits_PC", false,-1, 63,0);
    tracep->declBus(c+26,"io_out_bits_Inst", false,-1, 31,0);
    tracep->declBit(c+27,"io_flush", false,-1);
    tracep->declBit(c+28,"io_mret_flush", false,-1);
    tracep->declBit(c+29,"io_excp_flush", false,-1);
    tracep->declQuad(c+30,"io_mtvec", false,-1, 63,0);
    tracep->declQuad(c+32,"io_mret", false,-1, 63,0);
    tracep->declBit(c+34,"io_wb_stall", false,-1);
    tracep->declBit(c+35,"io_ex_stall", false,-1);
    tracep->declQuad(c+2018,"temp", false,-1, 63,0);
    tracep->declBus(c+2020,"inst", false,-1, 31,0);
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
    tracep->declBus(c+3647,"BUS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+3647,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+3599,"clk", false,-1);
    tracep->declBit(c+3600,"reset", false,-1);
    tracep->declBit(c+308,"ar_valid", false,-1);
    tracep->declBit(c+309,"ar_ready", false,-1);
    tracep->declBus(c+3638,"ar_id", false,-1, 3,0);
    tracep->declBus(c+312,"ar_len", false,-1, 7,0);
    tracep->declBus(c+3639,"ar_size", false,-1, 2,0);
    tracep->declQuad(c+310,"ar_addr", false,-1, 63,0);
    tracep->declBus(c+3640,"ar_prot", false,-1, 2,0);
    tracep->declBus(c+3641,"ar_burst", false,-1, 1,0);
    tracep->declBus(c+3637,"ar_lock", false,-1, 1,0);
    tracep->declBus(c+3642,"ar_cache", false,-1, 3,0);
    tracep->declBit(c+314,"aw_valid", false,-1);
    tracep->declBit(c+315,"aw_ready", false,-1);
    tracep->declBus(c+3638,"aw_id", false,-1, 3,0);
    tracep->declBus(c+312,"aw_len", false,-1, 7,0);
    tracep->declBus(c+3639,"aw_size", false,-1, 2,0);
    tracep->declQuad(c+316,"aw_addr", false,-1, 63,0);
    tracep->declBus(c+3640,"aw_prot", false,-1, 2,0);
    tracep->declBus(c+3641,"aw_burst", false,-1, 1,0);
    tracep->declBus(c+3637,"aw_lock", false,-1, 1,0);
    tracep->declBus(c+3642,"aw_cache", false,-1, 3,0);
    tracep->declBit(c+313,"rd_valid", false,-1);
    tracep->declBit(c+3604,"rd_ready", false,-1);
    tracep->declBus(c+3643,"rd_id", false,-1, 3,0);
    tracep->declQuad(c+9,"rd_data", false,-1, 63,0);
    tracep->declBus(c+3644,"rd_resp", false,-1, 1,0);
    tracep->declBit(c+306,"rd_last", false,-1);
    tracep->declBit(c+318,"wd_valid", false,-1);
    tracep->declBit(c+319,"wd_ready", false,-1);
    tracep->declBus(c+3638,"wd_id", false,-1, 3,0);
    tracep->declQuad(c+320,"wd_data", false,-1, 63,0);
    tracep->declBus(c+322,"wstrb", false,-1, 7,0);
    tracep->declBit(c+323,"wd_last", false,-1);
    tracep->declBit(c+324,"wr_valid", false,-1);
    tracep->declBit(c+325,"wr_ready", false,-1);
    tracep->declBus(c+3645,"wr_id", false,-1, 3,0);
    tracep->declBus(c+3637,"wr_breap", false,-1, 1,0);
    tracep->declBus(c+3637,"idle", false,-1, 1,0);
    tracep->declBus(c+3641,"ready", false,-1, 1,0);
    tracep->declBus(c+3648,"data_transform", false,-1, 1,0);
    tracep->declBus(c+2021,"read_state", false,-1, 1,0);
    tracep->declBus(c+2022,"write_state", false,-1, 1,0);
    tracep->declBus(c+2023,"read_next_state", false,-1, 1,0);
    tracep->declBus(c+2024,"write_next_state", false,-1, 1,0);
    tracep->declQuad(c+9,"rdata", false,-1, 63,0);
    tracep->declQuad(c+2025,"write_addr_buffer", false,-1, 63,0);
    tracep->declQuad(c+2027,"read_addr_buffer", false,-1, 63,0);
    tracep->declBus(c+2029,"read_count", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MMIO ");
    tracep->declBit(c+3599,"clock", false,-1);
    tracep->declBit(c+3600,"reset", false,-1);
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
    tracep->declBit(c+3604,"io_out_rdata_rep_ready", false,-1);
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
    tracep->declBus(c+3637,"io_out_wb_bits_breap", false,-1, 1,0);
    tracep->declBit(c+3599,"DCACHE_clock", false,-1);
    tracep->declBit(c+3600,"DCACHE_reset", false,-1);
    tracep->declBit(c+2030,"DCACHE_io_in_addr_req_valid", false,-1);
    tracep->declQuad(c+270,"DCACHE_io_in_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+272,"DCACHE_io_in_addr_req_bits_we", false,-1);
    tracep->declBit(c+2031,"DCACHE_io_in_rdata_rep_ready", false,-1);
    tracep->declBit(c+2032,"DCACHE_io_in_rdata_rep_valid", false,-1);
    tracep->declQuad(c+2033,"DCACHE_io_in_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+274,"DCACHE_io_in_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+276,"DCACHE_io_in_wdata_req_bits_wmask", false,-1, 7,0);
    tracep->declBit(c+2035,"DCACHE_io_in_wdata_rep", false,-1);
    tracep->declBit(c+2036,"DCACHE_io_out_raddr_req_ready", false,-1);
    tracep->declBit(c+2037,"DCACHE_io_out_raddr_req_valid", false,-1);
    tracep->declQuad(c+2038,"DCACHE_io_out_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+2040,"DCACHE_io_out_waddr_req_ready", false,-1);
    tracep->declBit(c+2041,"DCACHE_io_out_waddr_req_valid", false,-1);
    tracep->declQuad(c+2042,"DCACHE_io_out_waddr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+2044,"DCACHE_io_out_rdata_rep_valid", false,-1);
    tracep->declQuad(c+9,"DCACHE_io_out_rdata_rep_bits_data", false,-1, 63,0);
    tracep->declBit(c+306,"DCACHE_io_out_rdata_rep_bits_last", false,-1);
    tracep->declBit(c+2045,"DCACHE_io_out_wdata_req_ready", false,-1);
    tracep->declBit(c+2046,"DCACHE_io_out_wdata_req_valid", false,-1);
    tracep->declQuad(c+2047,"DCACHE_io_out_wdata_req_bits_data", false,-1, 63,0);
    tracep->declBit(c+2049,"DCACHE_io_out_wdata_req_bits_last", false,-1);
    tracep->declBit(c+2050,"DCACHE_io_out_wb_valid", false,-1);
    tracep->declBus(c+3637,"DCACHE_io_out_wb_bits_breap", false,-1, 1,0);
    tracep->declBit(c+3599,"birdge_clock", false,-1);
    tracep->declBit(c+3600,"birdge_reset", false,-1);
    tracep->declBit(c+2051,"birdge_io_in_addr_req_valid", false,-1);
    tracep->declQuad(c+270,"birdge_io_in_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+269,"birdge_io_in_addr_req_bits_ce", false,-1);
    tracep->declBit(c+272,"birdge_io_in_addr_req_bits_we", false,-1);
    tracep->declBit(c+2052,"birdge_io_in_rdata_rep_ready", false,-1);
    tracep->declBit(c+2053,"birdge_io_in_rdata_rep_valid", false,-1);
    tracep->declQuad(c+9,"birdge_io_in_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+2052,"birdge_io_in_wdata_req_valid", false,-1);
    tracep->declQuad(c+274,"birdge_io_in_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+276,"birdge_io_in_wdata_req_bits_wmask", false,-1, 7,0);
    tracep->declBit(c+2054,"birdge_io_in_wdata_rep", false,-1);
    tracep->declBit(c+2055,"birdge_io_out_raddr_req_ready", false,-1);
    tracep->declBit(c+2056,"birdge_io_out_raddr_req_valid", false,-1);
    tracep->declQuad(c+270,"birdge_io_out_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+2057,"birdge_io_out_waddr_req_ready", false,-1);
    tracep->declBit(c+2058,"birdge_io_out_waddr_req_valid", false,-1);
    tracep->declQuad(c+270,"birdge_io_out_waddr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+2052,"birdge_io_out_rdata_rep_ready", false,-1);
    tracep->declBit(c+2053,"birdge_io_out_rdata_rep_valid", false,-1);
    tracep->declQuad(c+9,"birdge_io_out_rdata_rep_bits_data", false,-1, 63,0);
    tracep->declBit(c+306,"birdge_io_out_rdata_rep_bits_last", false,-1);
    tracep->declBit(c+2059,"birdge_io_out_wdata_req_ready", false,-1);
    tracep->declBit(c+2052,"birdge_io_out_wdata_req_valid", false,-1);
    tracep->declQuad(c+274,"birdge_io_out_wdata_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+276,"birdge_io_out_wdata_req_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+2060,"birdge_io_out_wdata_req_bits_last", false,-1);
    tracep->declBit(c+2061,"birdge_io_out_wb_ready", false,-1);
    tracep->declBit(c+2054,"birdge_io_out_wb_valid", false,-1);
    tracep->declBus(c+3637,"birdge_io_out_wb_bits_breap", false,-1, 1,0);
    tracep->pushNamePrefix("DCACHE ");
    tracep->declBit(c+3599,"clock", false,-1);
    tracep->declBit(c+3600,"reset", false,-1);
    tracep->declBit(c+2030,"io_in_addr_req_valid", false,-1);
    tracep->declQuad(c+270,"io_in_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+272,"io_in_addr_req_bits_we", false,-1);
    tracep->declBit(c+2031,"io_in_rdata_rep_ready", false,-1);
    tracep->declBit(c+2032,"io_in_rdata_rep_valid", false,-1);
    tracep->declQuad(c+2033,"io_in_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+274,"io_in_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+276,"io_in_wdata_req_bits_wmask", false,-1, 7,0);
    tracep->declBit(c+2035,"io_in_wdata_rep", false,-1);
    tracep->declBit(c+2036,"io_out_raddr_req_ready", false,-1);
    tracep->declBit(c+2037,"io_out_raddr_req_valid", false,-1);
    tracep->declQuad(c+2038,"io_out_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+2040,"io_out_waddr_req_ready", false,-1);
    tracep->declBit(c+2041,"io_out_waddr_req_valid", false,-1);
    tracep->declQuad(c+2042,"io_out_waddr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+2044,"io_out_rdata_rep_valid", false,-1);
    tracep->declQuad(c+9,"io_out_rdata_rep_bits_data", false,-1, 63,0);
    tracep->declBit(c+306,"io_out_rdata_rep_bits_last", false,-1);
    tracep->declBit(c+2045,"io_out_wdata_req_ready", false,-1);
    tracep->declBit(c+2046,"io_out_wdata_req_valid", false,-1);
    tracep->declQuad(c+2047,"io_out_wdata_req_bits_data", false,-1, 63,0);
    tracep->declBit(c+2049,"io_out_wdata_req_bits_last", false,-1);
    tracep->declBit(c+2050,"io_out_wb_valid", false,-1);
    tracep->declBus(c+3637,"io_out_wb_bits_breap", false,-1, 1,0);
    tracep->declBit(c+3599,"Cache_data_clock", false,-1);
    tracep->declBit(c+2062,"Cache_data_io_in_valid", false,-1);
    tracep->declQuad(c+270,"Cache_data_io_in_addr", false,-1, 63,0);
    tracep->declQuad(c+2063,"Cache_data_io_write_bus_addr", false,-1, 63,0);
    tracep->declBit(c+2065,"Cache_data_io_write_bus_valid", false,-1);
    tracep->declBus(c+2066,"Cache_data_io_write_bus_waymask", false,-1, 1,0);
    tracep->declArray(c+2067,"Cache_data_io_write_bus_wdata", false,-1, 511,0);
    tracep->declBit(c+2062,"Cache_data_io_out_valid", false,-1);
    tracep->declQuad(c+2083,"Cache_data_io_out_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+2085,"Cache_data_io_out_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+2087,"Cache_data_io_out_bits_meat_valid_0", false,-1);
    tracep->declBit(c+2088,"Cache_data_io_out_bits_meat_valid_1", false,-1);
    tracep->declArray(c+2089,"Cache_data_io_out_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+2105,"Cache_data_io_out_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+2121,"Cache_data_io_out_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBus(c+2123,"Cache_data_io_out_bits_ctrl_data_index", false,-1, 4,0);
    tracep->declBus(c+2124,"Cache_data_io_out_bits_ctrl_data_offset", false,-1, 5,0);
    tracep->declBit(c+2125,"Scanf_io_in_valid", false,-1);
    tracep->declQuad(c+2083,"Scanf_io_in_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+2085,"Scanf_io_in_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+2087,"Scanf_io_in_bits_meat_valid_0", false,-1);
    tracep->declBit(c+2088,"Scanf_io_in_bits_meat_valid_1", false,-1);
    tracep->declArray(c+2089,"Scanf_io_in_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+2105,"Scanf_io_in_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+2121,"Scanf_io_in_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBus(c+2123,"Scanf_io_in_bits_ctrl_data_index", false,-1, 4,0);
    tracep->declBit(c+2126,"Scanf_io_out_bits_hit", false,-1);
    tracep->declArray(c+2127,"Scanf_io_out_bits_data", false,-1, 511,0);
    tracep->declBus(c+2123,"Scanf_io_out_bits_meta_ctrl_data_index", false,-1, 4,0);
    tracep->declBit(c+2143,"Scanf_io_out_bits_hit_way_0", false,-1);
    tracep->declBit(c+2144,"Scanf_io_out_bits_hit_way_1", false,-1);
    tracep->declQuad(c+2083,"Scanf_io_out_bits_tag_0", false,-1, 52,0);
    tracep->declQuad(c+2085,"Scanf_io_out_bits_tag_1", false,-1, 52,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+2145+i*1,"lru", true,(i+0));
    }
    tracep->declBit(c+2177,"lru_lru_w_MPORT_en", false,-1);
    tracep->declBus(c+2178,"lru_lru_w_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+2179,"lru_lru_w_MPORT_data", false,-1);
    tracep->declBit(c+3604,"lru_MPORT_data", false,-1);
    tracep->declBus(c+2123,"lru_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+3604,"lru_MPORT_mask", false,-1);
    tracep->declBit(c+2180,"lru_MPORT_en", false,-1);
    tracep->declBit(c+3646,"lru_MPORT_1_data", false,-1);
    tracep->declBus(c+2123,"lru_MPORT_1_addr", false,-1, 4,0);
    tracep->declBit(c+3604,"lru_MPORT_1_mask", false,-1);
    tracep->declBit(c+2181,"lru_MPORT_1_en", false,-1);
    tracep->declBit(c+3646,"lru_MPORT_2_data", false,-1);
    tracep->declBus(c+2123,"lru_MPORT_2_addr", false,-1, 4,0);
    tracep->declBit(c+3604,"lru_MPORT_2_mask", false,-1);
    tracep->declBit(c+2182,"lru_MPORT_2_en", false,-1);
    tracep->declBit(c+3604,"lru_MPORT_3_data", false,-1);
    tracep->declBus(c+2123,"lru_MPORT_3_addr", false,-1, 4,0);
    tracep->declBit(c+3604,"lru_MPORT_3_mask", false,-1);
    tracep->declBit(c+2183,"lru_MPORT_3_en", false,-1);
    tracep->declBit(c+2177,"lru_lru_w_MPORT_en_pipe_0", false,-1);
    tracep->declBus(c+2178,"lru_lru_w_MPORT_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+2184+i*1,"dirt_0", true,(i+0));
    }
    tracep->declBit(c+2216,"dirt_0_dirt_w_en", false,-1);
    tracep->declBus(c+2217,"dirt_0_dirt_w_addr", false,-1, 4,0);
    tracep->declBit(c+2218,"dirt_0_dirt_w_data", false,-1);
    tracep->declBit(c+3604,"dirt_0_MPORT_4_data", false,-1);
    tracep->declBus(c+2123,"dirt_0_MPORT_4_addr", false,-1, 4,0);
    tracep->declBit(c+2219,"dirt_0_MPORT_4_mask", false,-1);
    tracep->declBit(c+2220,"dirt_0_MPORT_4_en", false,-1);
    tracep->declBit(c+2216,"dirt_0_dirt_w_en_pipe_0", false,-1);
    tracep->declBus(c+2217,"dirt_0_dirt_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+2221+i*1,"dirt_1", true,(i+0));
    }
    tracep->declBit(c+2253,"dirt_1_dirt_w_en", false,-1);
    tracep->declBus(c+2254,"dirt_1_dirt_w_addr", false,-1, 4,0);
    tracep->declBit(c+2255,"dirt_1_dirt_w_data", false,-1);
    tracep->declBit(c+3604,"dirt_1_MPORT_4_data", false,-1);
    tracep->declBus(c+2123,"dirt_1_MPORT_4_addr", false,-1, 4,0);
    tracep->declBit(c+2256,"dirt_1_MPORT_4_mask", false,-1);
    tracep->declBit(c+2220,"dirt_1_MPORT_4_en", false,-1);
    tracep->declBit(c+2253,"dirt_1_dirt_w_en_pipe_0", false,-1);
    tracep->declBus(c+2254,"dirt_1_dirt_w_addr_pipe_0", false,-1, 4,0);
    tracep->declBus(c+2257,"state", false,-1, 2,0);
    tracep->declBus(c+2258,"read_state", false,-1, 1,0);
    tracep->declBus(c+2259,"write_state", false,-1, 1,0);
    tracep->declArray(c+2260,"data_line_reg", false,-1, 511,0);
    tracep->declQuad(c+2276,"mem_addr_reg", false,-1, 63,0);
    tracep->declBit(c+2278,"lru_r", false,-1);
    tracep->declBus(c+2279,"count_write", false,-1, 3,0);
    tracep->declQuad(c+2280,"mem_write_addr_reg", false,-1, 63,0);
    tracep->declArray(c+2282,"mem_write_data_reg", false,-1, 511,0);
    tracep->declBit(c+2179,"lru_w", false,-1);
    tracep->declBit(c+2143,"hit_way_0", false,-1);
    tracep->declBit(c+2144,"hit_way_1", false,-1);
    tracep->declQuad(c+2298,"hit_data", false,-1, 63,0);
    tracep->declQuad(c+2300,"mem_data", false,-1, 63,0);
    tracep->declBit(c+2125,"Scanf_io_in_valid_REG", false,-1);
    tracep->declQuad(c+2302,"wmaskextend_Genmask", false,-1, 63,0);
    tracep->declQuad(c+2304,"wmaskextend_lo_lo_lo", false,-1, 63,0);
    tracep->declArray(c+2306,"wmaskextend_lo_lo", false,-1, 127,0);
    tracep->declQuad(c+2310,"wmaskextend_lo_hi_lo", false,-1, 63,0);
    tracep->declArray(c+2312,"wmaskextend_lo", false,-1, 255,0);
    tracep->declQuad(c+2320,"wmaskextend_hi_lo_lo", false,-1, 63,0);
    tracep->declArray(c+2322,"wmaskextend_hi_lo", false,-1, 127,0);
    tracep->declQuad(c+2326,"wmaskextend_hi_hi_lo", false,-1, 63,0);
    tracep->declArray(c+2328,"wmaskextend_hi", false,-1, 255,0);
    tracep->declArray(c+2336,"wmaskextend", false,-1, 511,0);
    tracep->declArray(c+2352,"wdata_extend", false,-1, 511,0);
    tracep->declBus(c+2066,"waymask", false,-1, 1,0);
    tracep->pushNamePrefix("Cache_data ");
    tracep->declBit(c+3599,"clock", false,-1);
    tracep->declBit(c+2062,"io_in_valid", false,-1);
    tracep->declQuad(c+270,"io_in_addr", false,-1, 63,0);
    tracep->declQuad(c+2063,"io_write_bus_addr", false,-1, 63,0);
    tracep->declBit(c+2065,"io_write_bus_valid", false,-1);
    tracep->declBus(c+2066,"io_write_bus_waymask", false,-1, 1,0);
    tracep->declArray(c+2067,"io_write_bus_wdata", false,-1, 511,0);
    tracep->declBit(c+2062,"io_out_valid", false,-1);
    tracep->declQuad(c+2083,"io_out_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+2085,"io_out_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+2087,"io_out_bits_meat_valid_0", false,-1);
    tracep->declBit(c+2088,"io_out_bits_meat_valid_1", false,-1);
    tracep->declArray(c+2089,"io_out_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+2105,"io_out_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+2121,"io_out_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBus(c+2123,"io_out_bits_ctrl_data_index", false,-1, 4,0);
    tracep->declBus(c+2124,"io_out_bits_ctrl_data_offset", false,-1, 5,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declArray(c+2368+i*16,"data_0", true,(i+0), 511,0);
    }
    tracep->declBit(c+2880,"data_0_data_w_en", false,-1);
    tracep->declBus(c+2881,"data_0_data_w_addr", false,-1, 4,0);
    tracep->declArray(c+2089,"data_0_data_w_data", false,-1, 511,0);
    tracep->declArray(c+2067,"data_0_MPORT_data", false,-1, 511,0);
    tracep->declBus(c+2882,"data_0_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+2219,"data_0_MPORT_mask", false,-1);
    tracep->declBit(c+2065,"data_0_MPORT_en", false,-1);
    tracep->declBit(c+2880,"data_0_data_w_en_pipe_0", false,-1);
    tracep->declBus(c+2881,"data_0_data_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declArray(c+2883+i*16,"data_1", true,(i+0), 511,0);
    }
    tracep->declBit(c+3395,"data_1_data_w_en", false,-1);
    tracep->declBus(c+3396,"data_1_data_w_addr", false,-1, 4,0);
    tracep->declArray(c+2105,"data_1_data_w_data", false,-1, 511,0);
    tracep->declArray(c+2067,"data_1_MPORT_data", false,-1, 511,0);
    tracep->declBus(c+2882,"data_1_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+2256,"data_1_MPORT_mask", false,-1);
    tracep->declBit(c+2065,"data_1_MPORT_en", false,-1);
    tracep->declBit(c+3395,"data_1_data_w_en_pipe_0", false,-1);
    tracep->declBus(c+3396,"data_1_data_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+3397+i*2,"TAG_0", true,(i+0), 52,0);
    }
    tracep->declBit(c+3461,"TAG_0_tag_w_en", false,-1);
    tracep->declBus(c+3462,"TAG_0_tag_w_addr", false,-1, 4,0);
    tracep->declQuad(c+2083,"TAG_0_tag_w_data", false,-1, 52,0);
    tracep->declQuad(c+3463,"TAG_0_MPORT_1_data", false,-1, 52,0);
    tracep->declBus(c+2882,"TAG_0_MPORT_1_addr", false,-1, 4,0);
    tracep->declBit(c+2219,"TAG_0_MPORT_1_mask", false,-1);
    tracep->declBit(c+2065,"TAG_0_MPORT_1_en", false,-1);
    tracep->declBit(c+3461,"TAG_0_tag_w_en_pipe_0", false,-1);
    tracep->declBus(c+3462,"TAG_0_tag_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+3465+i*2,"TAG_1", true,(i+0), 52,0);
    }
    tracep->declBit(c+3529,"TAG_1_tag_w_en", false,-1);
    tracep->declBus(c+3530,"TAG_1_tag_w_addr", false,-1, 4,0);
    tracep->declQuad(c+2085,"TAG_1_tag_w_data", false,-1, 52,0);
    tracep->declQuad(c+3463,"TAG_1_MPORT_1_data", false,-1, 52,0);
    tracep->declBus(c+2882,"TAG_1_MPORT_1_addr", false,-1, 4,0);
    tracep->declBit(c+2256,"TAG_1_MPORT_1_mask", false,-1);
    tracep->declBit(c+2065,"TAG_1_MPORT_1_en", false,-1);
    tracep->declBit(c+3529,"TAG_1_tag_w_en_pipe_0", false,-1);
    tracep->declBus(c+3530,"TAG_1_tag_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+3531+i*1,"data_valid_0", true,(i+0));
    }
    tracep->declBit(c+3563,"data_valid_0_valid_w_en", false,-1);
    tracep->declBus(c+3530,"data_valid_0_valid_w_addr", false,-1, 4,0);
    tracep->declBit(c+2087,"data_valid_0_valid_w_data", false,-1);
    tracep->declBit(c+3604,"data_valid_0_MPORT_2_data", false,-1);
    tracep->declBus(c+2882,"data_valid_0_MPORT_2_addr", false,-1, 4,0);
    tracep->declBit(c+2219,"data_valid_0_MPORT_2_mask", false,-1);
    tracep->declBit(c+2065,"data_valid_0_MPORT_2_en", false,-1);
    tracep->declBit(c+3563,"data_valid_0_valid_w_en_pipe_0", false,-1);
    tracep->declBus(c+3530,"data_valid_0_valid_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+3564+i*1,"data_valid_1", true,(i+0));
    }
    tracep->declBit(c+3596,"data_valid_1_valid_w_en", false,-1);
    tracep->declBus(c+3530,"data_valid_1_valid_w_addr", false,-1, 4,0);
    tracep->declBit(c+2088,"data_valid_1_valid_w_data", false,-1);
    tracep->declBit(c+3604,"data_valid_1_MPORT_2_data", false,-1);
    tracep->declBus(c+2882,"data_valid_1_MPORT_2_addr", false,-1, 4,0);
    tracep->declBit(c+2256,"data_valid_1_MPORT_2_mask", false,-1);
    tracep->declBit(c+2065,"data_valid_1_MPORT_2_en", false,-1);
    tracep->declBit(c+3596,"data_valid_1_valid_w_en_pipe_0", false,-1);
    tracep->declBus(c+3530,"data_valid_1_valid_w_addr_pipe_0", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Scanf ");
    tracep->declBit(c+2125,"io_in_valid", false,-1);
    tracep->declQuad(c+2083,"io_in_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+2085,"io_in_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+2087,"io_in_bits_meat_valid_0", false,-1);
    tracep->declBit(c+2088,"io_in_bits_meat_valid_1", false,-1);
    tracep->declArray(c+2089,"io_in_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+2105,"io_in_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+2121,"io_in_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBus(c+2123,"io_in_bits_ctrl_data_index", false,-1, 4,0);
    tracep->declBit(c+2126,"io_out_bits_hit", false,-1);
    tracep->declArray(c+2127,"io_out_bits_data", false,-1, 511,0);
    tracep->declBus(c+2123,"io_out_bits_meta_ctrl_data_index", false,-1, 4,0);
    tracep->declBit(c+2143,"io_out_bits_hit_way_0", false,-1);
    tracep->declBit(c+2144,"io_out_bits_hit_way_1", false,-1);
    tracep->declQuad(c+2083,"io_out_bits_tag_0", false,-1, 52,0);
    tracep->declQuad(c+2085,"io_out_bits_tag_1", false,-1, 52,0);
    tracep->declBit(c+2143,"hit_way_0_result", false,-1);
    tracep->declBit(c+2144,"hit_way_1_result", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("birdge ");
    tracep->declBit(c+3599,"clock", false,-1);
    tracep->declBit(c+3600,"reset", false,-1);
    tracep->declBit(c+2051,"io_in_addr_req_valid", false,-1);
    tracep->declQuad(c+270,"io_in_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+269,"io_in_addr_req_bits_ce", false,-1);
    tracep->declBit(c+272,"io_in_addr_req_bits_we", false,-1);
    tracep->declBit(c+2052,"io_in_rdata_rep_ready", false,-1);
    tracep->declBit(c+2053,"io_in_rdata_rep_valid", false,-1);
    tracep->declQuad(c+9,"io_in_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+2052,"io_in_wdata_req_valid", false,-1);
    tracep->declQuad(c+274,"io_in_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+276,"io_in_wdata_req_bits_wmask", false,-1, 7,0);
    tracep->declBit(c+2054,"io_in_wdata_rep", false,-1);
    tracep->declBit(c+2055,"io_out_raddr_req_ready", false,-1);
    tracep->declBit(c+2056,"io_out_raddr_req_valid", false,-1);
    tracep->declQuad(c+270,"io_out_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+2057,"io_out_waddr_req_ready", false,-1);
    tracep->declBit(c+2058,"io_out_waddr_req_valid", false,-1);
    tracep->declQuad(c+270,"io_out_waddr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+2052,"io_out_rdata_rep_ready", false,-1);
    tracep->declBit(c+2053,"io_out_rdata_rep_valid", false,-1);
    tracep->declQuad(c+9,"io_out_rdata_rep_bits_data", false,-1, 63,0);
    tracep->declBit(c+306,"io_out_rdata_rep_bits_last", false,-1);
    tracep->declBit(c+2059,"io_out_wdata_req_ready", false,-1);
    tracep->declBit(c+2052,"io_out_wdata_req_valid", false,-1);
    tracep->declQuad(c+274,"io_out_wdata_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+276,"io_out_wdata_req_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+2060,"io_out_wdata_req_bits_last", false,-1);
    tracep->declBit(c+2061,"io_out_wb_ready", false,-1);
    tracep->declBit(c+2054,"io_out_wb_valid", false,-1);
    tracep->declBus(c+3637,"io_out_wb_bits_breap", false,-1, 1,0);
    tracep->declBus(c+3597,"read_state", false,-1, 1,0);
    tracep->declBus(c+3598,"write_state", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("WB ");
    tracep->declBit(c+263,"io_in_ready", false,-1);
    tracep->declBit(c+278,"io_in_valid", false,-1);
    tracep->declBit(c+279,"io_in_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+280,"io_in_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBit(c+281,"io_in_bits_ctrl_signal_ertn_flush", false,-1);
    tracep->declBit(c+282,"io_in_bits_ctrl_signal_excp_flush", false,-1);
    tracep->declQuad(c+283,"io_in_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+3603,"io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+285,"io_in_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBit(c+287,"io_in_bits_ctrl_flow_skip", false,-1);
    tracep->declBus(c+236,"io_in_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declQuad(c+288,"io_in_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+290,"io_in_bits_ctrl_csr_csr_data", false,-1, 63,0);
    tracep->declBit(c+292,"io_in_bits_ctrl_csr_csr_en", false,-1);
    tracep->declBus(c+293,"io_in_bits_ctrl_csr_csr_idx", false,-1, 11,0);
    tracep->declBit(c+3604,"io_out_ready", false,-1);
    tracep->declBit(c+294,"io_out_valid", false,-1);
    tracep->declBit(c+295,"io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+28,"io_out_bits_ctrl_signal_ertn_flush", false,-1);
    tracep->declBit(c+29,"io_out_bits_ctrl_signal_excp_flush", false,-1);
    tracep->declQuad(c+283,"io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+3603,"io_out_bits_ctrl_flow_inst", false,-1, 31,0);
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
                                  | (IData)(vlSelf->CoreTop__DOT__EX__DOT__div_io_in_valid)) 
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
                            & ((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__div_io_in_valid)) 
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
    bufp->fullBit(oldp+547,(vlSelf->CoreTop__DOT__EX__DOT__div_io_in_valid));
    bufp->fullBit(oldp+548,(vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_flow_div_signed));
    bufp->fullQData(oldp+549,(vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src1),64);
    bufp->fullQData(oldp+551,(vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src2),64);
    bufp->fullBit(oldp+553,((2U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state))));
    bufp->fullQData(oldp+554,(vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_quotient),64);
    bufp->fullQData(oldp+556,(vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_remainder),64);
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
    bufp->fullBit(oldp+563,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_quotient 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+564,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_remainder 
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
    bufp->fullWData(oldp+585,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend),128);
    bufp->fullQData(oldp+589,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divisor),64);
    bufp->fullQData(oldp+591,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S),64);
    bufp->fullCData(oldp+593,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state),2);
    bufp->fullCData(oldp+594,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__count),6);
    bufp->fullBit(oldp+595,((0x3fU == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__count))));
    bufp->fullBit(oldp+596,(((1U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state)) 
                             & (0x3fU == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__count)))));
    bufp->fullWData(oldp+597,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div),65);
    bufp->fullQData(oldp+600,((- vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S)),64);
    bufp->fullQData(oldp+602,((- (((QData)((IData)(
                                                   vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[3U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[2U]))))),64);
    bufp->fullQData(oldp+604,((((((0U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
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
    bufp->fullQData(oldp+606,((((((0U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
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
    bufp->fullCData(oldp+608,((7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U])),3);
    bufp->fullWData(oldp+609,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand),132);
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
    bufp->fullWData(oldp+614,(__Vtemp_h559cd7fe__0),132);
    bufp->fullBit(oldp+619,(((0U != (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U])) 
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
    bufp->fullWData(oldp+620,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier),66);
    bufp->fullWData(oldp+623,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p),132);
    bufp->fullCData(oldp+628,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count),7);
    bufp->fullWData(oldp+629,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__temp),132);
    bufp->fullBit(oldp+634,((1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__temp[4U] 
                                   >> 3U))));
    bufp->fullBit(oldp+635,(((IData)(vlSelf->CoreTop__DOT__IF_io_cache_req_addr_req_valid) 
                             & (0U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)))));
    bufp->fullQData(oldp+636,(((3U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state))
                                ? vlSelf->CoreTop__DOT__IF__DOT__temp
                                : 0ULL)),64);
    bufp->fullBit(oldp+638,((3U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state))));
    bufp->fullCData(oldp+639,(((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r)
                                ? 2U : 1U)),2);
    bufp->fullWData(oldp+640,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data),512);
    bufp->fullQData(oldp+656,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0
                              [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0]),53);
    bufp->fullQData(oldp+658,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1
                              [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0]),53);
    bufp->fullBit(oldp+660,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0
                            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0]));
    bufp->fullBit(oldp+661,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1
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
    bufp->fullWData(oldp+662,(__Vtemp_h55336ec1__0),512);
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
    bufp->fullWData(oldp+678,(__Vtemp_hba2e3c61__0),512);
    bufp->fullQData(oldp+694,((vlSelf->CoreTop__DOT__IF__DOT__temp 
                               >> 0xbU)),53);
    bufp->fullCData(oldp+696,((0x1fU & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                >> 6U)))),5);
    bufp->fullCData(oldp+697,((0x3fU & (IData)(vlSelf->CoreTop__DOT__IF__DOT__temp))),6);
    bufp->fullBit(oldp+698,(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_in_valid_REG));
    bufp->fullBit(oldp+699,(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit));
    bufp->fullWData(oldp+700,(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data),512);
    bufp->fullBit(oldp+716,(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_0_result));
    bufp->fullBit(oldp+717,(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_1_result));
    bufp->fullBit(oldp+718,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[0]));
    bufp->fullBit(oldp+719,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[1]));
    bufp->fullBit(oldp+720,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[2]));
    bufp->fullBit(oldp+721,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[3]));
    bufp->fullBit(oldp+722,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[4]));
    bufp->fullBit(oldp+723,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[5]));
    bufp->fullBit(oldp+724,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[6]));
    bufp->fullBit(oldp+725,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[7]));
    bufp->fullBit(oldp+726,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[8]));
    bufp->fullBit(oldp+727,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[9]));
    bufp->fullBit(oldp+728,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[10]));
    bufp->fullBit(oldp+729,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[11]));
    bufp->fullBit(oldp+730,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[12]));
    bufp->fullBit(oldp+731,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[13]));
    bufp->fullBit(oldp+732,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[14]));
    bufp->fullBit(oldp+733,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[15]));
    bufp->fullBit(oldp+734,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[16]));
    bufp->fullBit(oldp+735,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[17]));
    bufp->fullBit(oldp+736,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[18]));
    bufp->fullBit(oldp+737,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[19]));
    bufp->fullBit(oldp+738,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[20]));
    bufp->fullBit(oldp+739,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[21]));
    bufp->fullBit(oldp+740,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[22]));
    bufp->fullBit(oldp+741,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[23]));
    bufp->fullBit(oldp+742,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[24]));
    bufp->fullBit(oldp+743,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[25]));
    bufp->fullBit(oldp+744,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[26]));
    bufp->fullBit(oldp+745,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[27]));
    bufp->fullBit(oldp+746,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[28]));
    bufp->fullBit(oldp+747,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[29]));
    bufp->fullBit(oldp+748,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[30]));
    bufp->fullBit(oldp+749,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[31]));
    bufp->fullBit(oldp+750,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_lru_w_MPORT_en_pipe_0));
    bufp->fullCData(oldp+751,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_lru_w_MPORT_addr_pipe_0),5);
    bufp->fullBit(oldp+752,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru
                            [vlSelf->CoreTop__DOT__ICACHE__DOT__lru_lru_w_MPORT_addr_pipe_0]));
    bufp->fullBit(oldp+753,(((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                             & ((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                & ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit) 
                                   & (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_0_result))))));
    bufp->fullBit(oldp+754,(((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                             & ((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                & ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit) 
                                   & (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_1_result))))));
    bufp->fullBit(oldp+755,(((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                             & ((1U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                & ((2U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                   & ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT___T_5) 
                                      & (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r)))))));
    bufp->fullBit(oldp+756,(((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                             & ((1U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                & ((2U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                   & ((~ (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r)) 
                                      & (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT___T_5)))))));
    bufp->fullCData(oldp+757,(vlSelf->CoreTop__DOT__ICACHE__DOT__state),3);
    bufp->fullCData(oldp+758,(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state),2);
    bufp->fullWData(oldp+759,(vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg),512);
    bufp->fullQData(oldp+775,(vlSelf->CoreTop__DOT__ICACHE__DOT__mem_addr_reg),64);
    bufp->fullBit(oldp+777,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r));
    bufp->fullQData(oldp+778,(((0U == (7U & (IData)(
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
    bufp->fullQData(oldp+780,(((0U == (7U & (IData)(
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
    bufp->fullWData(oldp+782,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[0]),512);
    bufp->fullWData(oldp+798,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[1]),512);
    bufp->fullWData(oldp+814,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[2]),512);
    bufp->fullWData(oldp+830,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[3]),512);
    bufp->fullWData(oldp+846,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[4]),512);
    bufp->fullWData(oldp+862,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[5]),512);
    bufp->fullWData(oldp+878,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[6]),512);
    bufp->fullWData(oldp+894,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[7]),512);
    bufp->fullWData(oldp+910,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[8]),512);
    bufp->fullWData(oldp+926,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[9]),512);
    bufp->fullWData(oldp+942,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[10]),512);
    bufp->fullWData(oldp+958,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[11]),512);
    bufp->fullWData(oldp+974,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[12]),512);
    bufp->fullWData(oldp+990,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[13]),512);
    bufp->fullWData(oldp+1006,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[14]),512);
    bufp->fullWData(oldp+1022,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[15]),512);
    bufp->fullWData(oldp+1038,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[16]),512);
    bufp->fullWData(oldp+1054,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[17]),512);
    bufp->fullWData(oldp+1070,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[18]),512);
    bufp->fullWData(oldp+1086,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[19]),512);
    bufp->fullWData(oldp+1102,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[20]),512);
    bufp->fullWData(oldp+1118,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[21]),512);
    bufp->fullWData(oldp+1134,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[22]),512);
    bufp->fullWData(oldp+1150,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[23]),512);
    bufp->fullWData(oldp+1166,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[24]),512);
    bufp->fullWData(oldp+1182,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[25]),512);
    bufp->fullWData(oldp+1198,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[26]),512);
    bufp->fullWData(oldp+1214,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[27]),512);
    bufp->fullWData(oldp+1230,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[28]),512);
    bufp->fullWData(oldp+1246,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[29]),512);
    bufp->fullWData(oldp+1262,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[30]),512);
    bufp->fullWData(oldp+1278,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[31]),512);
    bufp->fullBit(oldp+1294,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_en_pipe_0));
    bufp->fullCData(oldp+1295,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0),5);
    bufp->fullCData(oldp+1296,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_addr),5);
    bufp->fullBit(oldp+1297,((1U & (~ (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r)))));
    bufp->fullWData(oldp+1298,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[0]),512);
    bufp->fullWData(oldp+1314,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[1]),512);
    bufp->fullWData(oldp+1330,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[2]),512);
    bufp->fullWData(oldp+1346,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[3]),512);
    bufp->fullWData(oldp+1362,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[4]),512);
    bufp->fullWData(oldp+1378,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[5]),512);
    bufp->fullWData(oldp+1394,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[6]),512);
    bufp->fullWData(oldp+1410,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[7]),512);
    bufp->fullWData(oldp+1426,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[8]),512);
    bufp->fullWData(oldp+1442,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[9]),512);
    bufp->fullWData(oldp+1458,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[10]),512);
    bufp->fullWData(oldp+1474,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[11]),512);
    bufp->fullWData(oldp+1490,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[12]),512);
    bufp->fullWData(oldp+1506,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[13]),512);
    bufp->fullWData(oldp+1522,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[14]),512);
    bufp->fullWData(oldp+1538,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[15]),512);
    bufp->fullWData(oldp+1554,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[16]),512);
    bufp->fullWData(oldp+1570,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[17]),512);
    bufp->fullWData(oldp+1586,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[18]),512);
    bufp->fullWData(oldp+1602,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[19]),512);
    bufp->fullWData(oldp+1618,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[20]),512);
    bufp->fullWData(oldp+1634,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[21]),512);
    bufp->fullWData(oldp+1650,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[22]),512);
    bufp->fullWData(oldp+1666,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[23]),512);
    bufp->fullWData(oldp+1682,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[24]),512);
    bufp->fullWData(oldp+1698,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[25]),512);
    bufp->fullWData(oldp+1714,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[26]),512);
    bufp->fullWData(oldp+1730,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[27]),512);
    bufp->fullWData(oldp+1746,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[28]),512);
    bufp->fullWData(oldp+1762,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[29]),512);
    bufp->fullWData(oldp+1778,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[30]),512);
    bufp->fullWData(oldp+1794,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[31]),512);
    bufp->fullBit(oldp+1810,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_en_pipe_0));
    bufp->fullCData(oldp+1811,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0),5);
    bufp->fullQData(oldp+1812,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[0]),53);
    bufp->fullQData(oldp+1814,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[1]),53);
    bufp->fullQData(oldp+1816,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[2]),53);
    bufp->fullQData(oldp+1818,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[3]),53);
    bufp->fullQData(oldp+1820,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[4]),53);
    bufp->fullQData(oldp+1822,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[5]),53);
    bufp->fullQData(oldp+1824,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[6]),53);
    bufp->fullQData(oldp+1826,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[7]),53);
    bufp->fullQData(oldp+1828,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[8]),53);
    bufp->fullQData(oldp+1830,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[9]),53);
    bufp->fullQData(oldp+1832,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[10]),53);
    bufp->fullQData(oldp+1834,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[11]),53);
    bufp->fullQData(oldp+1836,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[12]),53);
    bufp->fullQData(oldp+1838,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[13]),53);
    bufp->fullQData(oldp+1840,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[14]),53);
    bufp->fullQData(oldp+1842,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[15]),53);
    bufp->fullQData(oldp+1844,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[16]),53);
    bufp->fullQData(oldp+1846,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[17]),53);
    bufp->fullQData(oldp+1848,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[18]),53);
    bufp->fullQData(oldp+1850,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[19]),53);
    bufp->fullQData(oldp+1852,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[20]),53);
    bufp->fullQData(oldp+1854,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[21]),53);
    bufp->fullQData(oldp+1856,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[22]),53);
    bufp->fullQData(oldp+1858,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[23]),53);
    bufp->fullQData(oldp+1860,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[24]),53);
    bufp->fullQData(oldp+1862,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[25]),53);
    bufp->fullQData(oldp+1864,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[26]),53);
    bufp->fullQData(oldp+1866,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[27]),53);
    bufp->fullQData(oldp+1868,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[28]),53);
    bufp->fullQData(oldp+1870,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[29]),53);
    bufp->fullQData(oldp+1872,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[30]),53);
    bufp->fullQData(oldp+1874,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[31]),53);
    bufp->fullBit(oldp+1876,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_tag_w_en_pipe_0));
    bufp->fullCData(oldp+1877,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0),5);
    bufp->fullQData(oldp+1878,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_MPORT_1_data),53);
    bufp->fullQData(oldp+1880,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[0]),53);
    bufp->fullQData(oldp+1882,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[1]),53);
    bufp->fullQData(oldp+1884,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[2]),53);
    bufp->fullQData(oldp+1886,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[3]),53);
    bufp->fullQData(oldp+1888,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[4]),53);
    bufp->fullQData(oldp+1890,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[5]),53);
    bufp->fullQData(oldp+1892,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[6]),53);
    bufp->fullQData(oldp+1894,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[7]),53);
    bufp->fullQData(oldp+1896,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[8]),53);
    bufp->fullQData(oldp+1898,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[9]),53);
    bufp->fullQData(oldp+1900,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[10]),53);
    bufp->fullQData(oldp+1902,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[11]),53);
    bufp->fullQData(oldp+1904,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[12]),53);
    bufp->fullQData(oldp+1906,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[13]),53);
    bufp->fullQData(oldp+1908,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[14]),53);
    bufp->fullQData(oldp+1910,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[15]),53);
    bufp->fullQData(oldp+1912,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[16]),53);
    bufp->fullQData(oldp+1914,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[17]),53);
    bufp->fullQData(oldp+1916,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[18]),53);
    bufp->fullQData(oldp+1918,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[19]),53);
    bufp->fullQData(oldp+1920,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[20]),53);
    bufp->fullQData(oldp+1922,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[21]),53);
    bufp->fullQData(oldp+1924,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[22]),53);
    bufp->fullQData(oldp+1926,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[23]),53);
    bufp->fullQData(oldp+1928,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[24]),53);
    bufp->fullQData(oldp+1930,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[25]),53);
    bufp->fullQData(oldp+1932,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[26]),53);
    bufp->fullQData(oldp+1934,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[27]),53);
    bufp->fullQData(oldp+1936,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[28]),53);
    bufp->fullQData(oldp+1938,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[29]),53);
    bufp->fullQData(oldp+1940,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[30]),53);
    bufp->fullQData(oldp+1942,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[31]),53);
    bufp->fullBit(oldp+1944,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_en_pipe_0));
    bufp->fullBit(oldp+1945,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[0]));
    bufp->fullBit(oldp+1946,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[1]));
    bufp->fullBit(oldp+1947,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[2]));
    bufp->fullBit(oldp+1948,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[3]));
    bufp->fullBit(oldp+1949,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[4]));
    bufp->fullBit(oldp+1950,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[5]));
    bufp->fullBit(oldp+1951,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[6]));
    bufp->fullBit(oldp+1952,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[7]));
    bufp->fullBit(oldp+1953,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[8]));
    bufp->fullBit(oldp+1954,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[9]));
    bufp->fullBit(oldp+1955,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[10]));
    bufp->fullBit(oldp+1956,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[11]));
    bufp->fullBit(oldp+1957,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[12]));
    bufp->fullBit(oldp+1958,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[13]));
    bufp->fullBit(oldp+1959,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[14]));
    bufp->fullBit(oldp+1960,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[15]));
    bufp->fullBit(oldp+1961,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[16]));
    bufp->fullBit(oldp+1962,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[17]));
    bufp->fullBit(oldp+1963,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[18]));
    bufp->fullBit(oldp+1964,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[19]));
    bufp->fullBit(oldp+1965,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[20]));
    bufp->fullBit(oldp+1966,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[21]));
    bufp->fullBit(oldp+1967,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[22]));
    bufp->fullBit(oldp+1968,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[23]));
    bufp->fullBit(oldp+1969,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[24]));
    bufp->fullBit(oldp+1970,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[25]));
    bufp->fullBit(oldp+1971,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[26]));
    bufp->fullBit(oldp+1972,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[27]));
    bufp->fullBit(oldp+1973,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[28]));
    bufp->fullBit(oldp+1974,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[29]));
    bufp->fullBit(oldp+1975,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[30]));
    bufp->fullBit(oldp+1976,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[31]));
    bufp->fullBit(oldp+1977,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_en_pipe_0));
    bufp->fullBit(oldp+1978,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[0]));
    bufp->fullBit(oldp+1979,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[1]));
    bufp->fullBit(oldp+1980,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[2]));
    bufp->fullBit(oldp+1981,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[3]));
    bufp->fullBit(oldp+1982,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[4]));
    bufp->fullBit(oldp+1983,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[5]));
    bufp->fullBit(oldp+1984,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[6]));
    bufp->fullBit(oldp+1985,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[7]));
    bufp->fullBit(oldp+1986,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[8]));
    bufp->fullBit(oldp+1987,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[9]));
    bufp->fullBit(oldp+1988,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[10]));
    bufp->fullBit(oldp+1989,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[11]));
    bufp->fullBit(oldp+1990,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[12]));
    bufp->fullBit(oldp+1991,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[13]));
    bufp->fullBit(oldp+1992,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[14]));
    bufp->fullBit(oldp+1993,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[15]));
    bufp->fullBit(oldp+1994,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[16]));
    bufp->fullBit(oldp+1995,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[17]));
    bufp->fullBit(oldp+1996,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[18]));
    bufp->fullBit(oldp+1997,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[19]));
    bufp->fullBit(oldp+1998,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[20]));
    bufp->fullBit(oldp+1999,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[21]));
    bufp->fullBit(oldp+2000,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[22]));
    bufp->fullBit(oldp+2001,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[23]));
    bufp->fullBit(oldp+2002,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[24]));
    bufp->fullBit(oldp+2003,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[25]));
    bufp->fullBit(oldp+2004,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[26]));
    bufp->fullBit(oldp+2005,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[27]));
    bufp->fullBit(oldp+2006,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[28]));
    bufp->fullBit(oldp+2007,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[29]));
    bufp->fullBit(oldp+2008,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[30]));
    bufp->fullBit(oldp+2009,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[31]));
    bufp->fullBit(oldp+2010,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_en_pipe_0));
    bufp->fullCData(oldp+2011,(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0),4);
    bufp->fullBit(oldp+2012,(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_3));
    bufp->fullCData(oldp+2013,((((7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                  ? 2U : 0U) | ((3U 
                                                 == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                                 ? 2U
                                                 : 0U))),2);
    bufp->fullBit(oldp+2014,(((8U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)) 
                              | ((7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)) 
                                 | (3U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))))));
    bufp->fullBit(oldp+2015,((vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                              >> 0x1fU)));
    bufp->fullBit(oldp+2016,((1U & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                    >> 0x13U))));
    bufp->fullBit(oldp+2017,((((IData)(vlSelf->CoreTop__DOT__valid) 
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
    bufp->fullQData(oldp+2018,(vlSelf->CoreTop__DOT__IF__DOT__temp),64);
    bufp->fullIData(oldp+2020,(((1U & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                               >> 2U)))
                                 ? (IData)((vlSelf->CoreTop__DOT__IF_io_cache_req_rdata_rep_bits_rdata 
                                            >> 0x20U))
                                 : (IData)(vlSelf->CoreTop__DOT__IF_io_cache_req_rdata_rep_bits_rdata))),32);
    bufp->fullCData(oldp+2021,(vlSelf->CoreTop__DOT__MMEM__DOT__read_state),2);
    bufp->fullCData(oldp+2022,(vlSelf->CoreTop__DOT__MMEM__DOT__write_state),2);
    bufp->fullCData(oldp+2023,(vlSelf->CoreTop__DOT__MMEM__DOT__read_next_state),2);
    bufp->fullCData(oldp+2024,(vlSelf->CoreTop__DOT__MMEM__DOT__write_next_state),2);
    bufp->fullQData(oldp+2025,(vlSelf->CoreTop__DOT__MMEM__DOT__write_addr_buffer),64);
    bufp->fullQData(oldp+2027,(vlSelf->CoreTop__DOT__MMEM__DOT__read_addr_buffer),64);
    bufp->fullCData(oldp+2029,(vlSelf->CoreTop__DOT__MMEM__DOT__read_count),8);
    bufp->fullBit(oldp+2030,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_valid));
    bufp->fullBit(oldp+2031,((1U & (~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)))));
    bufp->fullBit(oldp+2032,(((~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_bits_we)) 
                              & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_bits_rdata_T_1) 
                                 | (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_valid_T_4)))));
    bufp->fullQData(oldp+2033,(((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_bits_rdata_T_1)
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
    bufp->fullBit(oldp+2035,(((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___Cache_data_io_write_bus_valid_T_3) 
                              | ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_valid_T_4) 
                                 & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_bits_we)))));
    bufp->fullBit(oldp+2036,(((~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)) 
                              & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_ready))));
    bufp->fullBit(oldp+2037,((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state))));
    bufp->fullQData(oldp+2038,(((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state))
                                 ? vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_addr_reg
                                 : 0ULL)),64);
    bufp->fullBit(oldp+2040,(((~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)) 
                              & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_ready))));
    bufp->fullBit(oldp+2041,((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state))));
    bufp->fullQData(oldp+2042,(((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state))
                                 ? vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_addr_reg
                                 : 0ULL)),64);
    bufp->fullBit(oldp+2044,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_rdata_rep_valid));
    bufp->fullBit(oldp+2045,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_wdata_req_ready));
    bufp->fullBit(oldp+2046,((2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state))));
    bufp->fullQData(oldp+2047,((((QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0U])))),64);
    bufp->fullBit(oldp+2049,((7U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count_write))));
    bufp->fullBit(oldp+2050,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_wb_valid));
    bufp->fullBit(oldp+2051,(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_addr_req_valid));
    bufp->fullBit(oldp+2052,(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready));
    bufp->fullBit(oldp+2053,(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_valid));
    bufp->fullBit(oldp+2054,(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_out_wb_valid));
    bufp->fullBit(oldp+2055,(((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready) 
                              & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_ready))));
    bufp->fullBit(oldp+2056,((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__read_state))));
    bufp->fullBit(oldp+2057,(((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready) 
                              & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_ready))));
    bufp->fullBit(oldp+2058,((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state))));
    bufp->fullBit(oldp+2059,(((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready) 
                              & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_ready))));
    bufp->fullBit(oldp+2060,((2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state))));
    bufp->fullBit(oldp+2061,((3U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state))));
    bufp->fullBit(oldp+2062,(((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_valid) 
                              & (0U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)))));
    bufp->fullQData(oldp+2063,(((IData)(vlSelf->__VdfgTmp_h5a5a8c61__0)
                                 ? vlSelf->CoreTop__DOT__MEM__DOT__addr_temp
                                 : 0ULL)),64);
    bufp->fullBit(oldp+2065,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_en));
    bufp->fullCData(oldp+2066,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_waymask),2);
    bufp->fullWData(oldp+2067,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data),512);
    bufp->fullQData(oldp+2083,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_tag_w_data),53);
    bufp->fullQData(oldp+2085,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1_tag_w_data),53);
    bufp->fullBit(oldp+2087,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0
                             [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0]));
    bufp->fullBit(oldp+2088,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1
                             [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0]));
    bufp->fullWData(oldp+2089,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data),512);
    bufp->fullWData(oldp+2105,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data),512);
    bufp->fullQData(oldp+2121,((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                >> 0xbU)),53);
    bufp->fullCData(oldp+2123,((0x1fU & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                 >> 6U)))),5);
    bufp->fullCData(oldp+2124,((0x3fU & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp))),6);
    bufp->fullBit(oldp+2125,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_in_valid_REG));
    bufp->fullBit(oldp+2126,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit));
    bufp->fullWData(oldp+2127,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data),512);
    bufp->fullBit(oldp+2143,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_0_result));
    bufp->fullBit(oldp+2144,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_1_result));
    bufp->fullBit(oldp+2145,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[0]));
    bufp->fullBit(oldp+2146,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[1]));
    bufp->fullBit(oldp+2147,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[2]));
    bufp->fullBit(oldp+2148,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[3]));
    bufp->fullBit(oldp+2149,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[4]));
    bufp->fullBit(oldp+2150,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[5]));
    bufp->fullBit(oldp+2151,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[6]));
    bufp->fullBit(oldp+2152,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[7]));
    bufp->fullBit(oldp+2153,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[8]));
    bufp->fullBit(oldp+2154,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[9]));
    bufp->fullBit(oldp+2155,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[10]));
    bufp->fullBit(oldp+2156,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[11]));
    bufp->fullBit(oldp+2157,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[12]));
    bufp->fullBit(oldp+2158,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[13]));
    bufp->fullBit(oldp+2159,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[14]));
    bufp->fullBit(oldp+2160,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[15]));
    bufp->fullBit(oldp+2161,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[16]));
    bufp->fullBit(oldp+2162,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[17]));
    bufp->fullBit(oldp+2163,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[18]));
    bufp->fullBit(oldp+2164,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[19]));
    bufp->fullBit(oldp+2165,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[20]));
    bufp->fullBit(oldp+2166,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[21]));
    bufp->fullBit(oldp+2167,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[22]));
    bufp->fullBit(oldp+2168,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[23]));
    bufp->fullBit(oldp+2169,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[24]));
    bufp->fullBit(oldp+2170,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[25]));
    bufp->fullBit(oldp+2171,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[26]));
    bufp->fullBit(oldp+2172,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[27]));
    bufp->fullBit(oldp+2173,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[28]));
    bufp->fullBit(oldp+2174,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[29]));
    bufp->fullBit(oldp+2175,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[30]));
    bufp->fullBit(oldp+2176,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[31]));
    bufp->fullBit(oldp+2177,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_en_pipe_0));
    bufp->fullCData(oldp+2178,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_addr_pipe_0),5);
    bufp->fullBit(oldp+2179,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_data));
    bufp->fullBit(oldp+2180,(((0U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                              & ((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                 & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit) 
                                    & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_0_result))))));
    bufp->fullBit(oldp+2181,(((0U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                              & ((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                 & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit) 
                                    & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_1_result))))));
    bufp->fullBit(oldp+2182,(((0U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                              & ((1U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                 & ((2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                    & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___T_8) 
                                       & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_r)))))));
    bufp->fullBit(oldp+2183,(((0U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                              & ((1U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                 & ((2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                    & ((~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_r)) 
                                       & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___T_8)))))));
    bufp->fullBit(oldp+2184,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[0]));
    bufp->fullBit(oldp+2185,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[1]));
    bufp->fullBit(oldp+2186,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[2]));
    bufp->fullBit(oldp+2187,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[3]));
    bufp->fullBit(oldp+2188,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[4]));
    bufp->fullBit(oldp+2189,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[5]));
    bufp->fullBit(oldp+2190,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[6]));
    bufp->fullBit(oldp+2191,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[7]));
    bufp->fullBit(oldp+2192,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[8]));
    bufp->fullBit(oldp+2193,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[9]));
    bufp->fullBit(oldp+2194,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[10]));
    bufp->fullBit(oldp+2195,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[11]));
    bufp->fullBit(oldp+2196,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[12]));
    bufp->fullBit(oldp+2197,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[13]));
    bufp->fullBit(oldp+2198,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[14]));
    bufp->fullBit(oldp+2199,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[15]));
    bufp->fullBit(oldp+2200,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[16]));
    bufp->fullBit(oldp+2201,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[17]));
    bufp->fullBit(oldp+2202,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[18]));
    bufp->fullBit(oldp+2203,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[19]));
    bufp->fullBit(oldp+2204,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[20]));
    bufp->fullBit(oldp+2205,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[21]));
    bufp->fullBit(oldp+2206,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[22]));
    bufp->fullBit(oldp+2207,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[23]));
    bufp->fullBit(oldp+2208,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[24]));
    bufp->fullBit(oldp+2209,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[25]));
    bufp->fullBit(oldp+2210,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[26]));
    bufp->fullBit(oldp+2211,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[27]));
    bufp->fullBit(oldp+2212,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[28]));
    bufp->fullBit(oldp+2213,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[29]));
    bufp->fullBit(oldp+2214,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[30]));
    bufp->fullBit(oldp+2215,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[31]));
    bufp->fullBit(oldp+2216,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0_dirt_w_en_pipe_0));
    bufp->fullCData(oldp+2217,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0_dirt_w_addr_pipe_0),5);
    bufp->fullBit(oldp+2218,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0
                             [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0_dirt_w_addr_pipe_0]));
    bufp->fullBit(oldp+2219,((1U & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_waymask))));
    bufp->fullBit(oldp+2220,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0_MPORT_4_en));
    bufp->fullBit(oldp+2221,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[0]));
    bufp->fullBit(oldp+2222,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[1]));
    bufp->fullBit(oldp+2223,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[2]));
    bufp->fullBit(oldp+2224,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[3]));
    bufp->fullBit(oldp+2225,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[4]));
    bufp->fullBit(oldp+2226,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[5]));
    bufp->fullBit(oldp+2227,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[6]));
    bufp->fullBit(oldp+2228,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[7]));
    bufp->fullBit(oldp+2229,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[8]));
    bufp->fullBit(oldp+2230,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[9]));
    bufp->fullBit(oldp+2231,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[10]));
    bufp->fullBit(oldp+2232,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[11]));
    bufp->fullBit(oldp+2233,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[12]));
    bufp->fullBit(oldp+2234,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[13]));
    bufp->fullBit(oldp+2235,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[14]));
    bufp->fullBit(oldp+2236,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[15]));
    bufp->fullBit(oldp+2237,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[16]));
    bufp->fullBit(oldp+2238,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[17]));
    bufp->fullBit(oldp+2239,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[18]));
    bufp->fullBit(oldp+2240,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[19]));
    bufp->fullBit(oldp+2241,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[20]));
    bufp->fullBit(oldp+2242,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[21]));
    bufp->fullBit(oldp+2243,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[22]));
    bufp->fullBit(oldp+2244,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[23]));
    bufp->fullBit(oldp+2245,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[24]));
    bufp->fullBit(oldp+2246,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[25]));
    bufp->fullBit(oldp+2247,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[26]));
    bufp->fullBit(oldp+2248,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[27]));
    bufp->fullBit(oldp+2249,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[28]));
    bufp->fullBit(oldp+2250,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[29]));
    bufp->fullBit(oldp+2251,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[30]));
    bufp->fullBit(oldp+2252,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[31]));
    bufp->fullBit(oldp+2253,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1_dirt_w_en_pipe_0));
    bufp->fullCData(oldp+2254,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1_dirt_w_addr_pipe_0),5);
    bufp->fullBit(oldp+2255,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1
                             [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1_dirt_w_addr_pipe_0]));
    bufp->fullBit(oldp+2256,((1U & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_waymask) 
                                    >> 1U))));
    bufp->fullCData(oldp+2257,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state),3);
    bufp->fullCData(oldp+2258,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state),2);
    bufp->fullCData(oldp+2259,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state),2);
    bufp->fullWData(oldp+2260,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg),512);
    bufp->fullQData(oldp+2276,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_addr_reg),64);
    bufp->fullBit(oldp+2278,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_r));
    bufp->fullCData(oldp+2279,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count_write),4);
    bufp->fullQData(oldp+2280,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_addr_reg),64);
    bufp->fullWData(oldp+2282,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg),512);
    bufp->fullQData(oldp+2298,(((0U == (7U & (IData)(
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
    bufp->fullQData(oldp+2300,(((0U == (7U & (IData)(
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
    bufp->fullQData(oldp+2302,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask),64);
    bufp->fullQData(oldp+2304,((((QData)((IData)(((1U 
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
    bufp->fullWData(oldp+2306,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo_lo),128);
    bufp->fullQData(oldp+2310,((((QData)((IData)(((1U 
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
    bufp->fullWData(oldp+2312,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo),256);
    bufp->fullQData(oldp+2320,((((QData)((IData)(((1U 
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
    bufp->fullWData(oldp+2322,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi_lo),128);
    bufp->fullQData(oldp+2326,((((QData)((IData)(((1U 
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
    bufp->fullWData(oldp+2328,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi),256);
    bufp->fullWData(oldp+2336,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend),512);
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
    bufp->fullWData(oldp+2352,(__Vtemp_hc34456c3__0),512);
    bufp->fullWData(oldp+2368,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[0]),512);
    bufp->fullWData(oldp+2384,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[1]),512);
    bufp->fullWData(oldp+2400,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[2]),512);
    bufp->fullWData(oldp+2416,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[3]),512);
    bufp->fullWData(oldp+2432,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[4]),512);
    bufp->fullWData(oldp+2448,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[5]),512);
    bufp->fullWData(oldp+2464,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[6]),512);
    bufp->fullWData(oldp+2480,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[7]),512);
    bufp->fullWData(oldp+2496,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[8]),512);
    bufp->fullWData(oldp+2512,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[9]),512);
    bufp->fullWData(oldp+2528,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[10]),512);
    bufp->fullWData(oldp+2544,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[11]),512);
    bufp->fullWData(oldp+2560,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[12]),512);
    bufp->fullWData(oldp+2576,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[13]),512);
    bufp->fullWData(oldp+2592,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[14]),512);
    bufp->fullWData(oldp+2608,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[15]),512);
    bufp->fullWData(oldp+2624,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[16]),512);
    bufp->fullWData(oldp+2640,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[17]),512);
    bufp->fullWData(oldp+2656,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[18]),512);
    bufp->fullWData(oldp+2672,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[19]),512);
    bufp->fullWData(oldp+2688,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[20]),512);
    bufp->fullWData(oldp+2704,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[21]),512);
    bufp->fullWData(oldp+2720,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[22]),512);
    bufp->fullWData(oldp+2736,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[23]),512);
    bufp->fullWData(oldp+2752,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[24]),512);
    bufp->fullWData(oldp+2768,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[25]),512);
    bufp->fullWData(oldp+2784,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[26]),512);
    bufp->fullWData(oldp+2800,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[27]),512);
    bufp->fullWData(oldp+2816,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[28]),512);
    bufp->fullWData(oldp+2832,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[29]),512);
    bufp->fullWData(oldp+2848,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[30]),512);
    bufp->fullWData(oldp+2864,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[31]),512);
    bufp->fullBit(oldp+2880,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_en_pipe_0));
    bufp->fullCData(oldp+2881,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0),5);
    bufp->fullCData(oldp+2882,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_addr),5);
    bufp->fullWData(oldp+2883,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[0]),512);
    bufp->fullWData(oldp+2899,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[1]),512);
    bufp->fullWData(oldp+2915,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[2]),512);
    bufp->fullWData(oldp+2931,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[3]),512);
    bufp->fullWData(oldp+2947,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[4]),512);
    bufp->fullWData(oldp+2963,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[5]),512);
    bufp->fullWData(oldp+2979,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[6]),512);
    bufp->fullWData(oldp+2995,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[7]),512);
    bufp->fullWData(oldp+3011,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[8]),512);
    bufp->fullWData(oldp+3027,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[9]),512);
    bufp->fullWData(oldp+3043,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[10]),512);
    bufp->fullWData(oldp+3059,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[11]),512);
    bufp->fullWData(oldp+3075,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[12]),512);
    bufp->fullWData(oldp+3091,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[13]),512);
    bufp->fullWData(oldp+3107,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[14]),512);
    bufp->fullWData(oldp+3123,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[15]),512);
    bufp->fullWData(oldp+3139,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[16]),512);
    bufp->fullWData(oldp+3155,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[17]),512);
    bufp->fullWData(oldp+3171,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[18]),512);
    bufp->fullWData(oldp+3187,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[19]),512);
    bufp->fullWData(oldp+3203,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[20]),512);
    bufp->fullWData(oldp+3219,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[21]),512);
    bufp->fullWData(oldp+3235,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[22]),512);
    bufp->fullWData(oldp+3251,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[23]),512);
    bufp->fullWData(oldp+3267,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[24]),512);
    bufp->fullWData(oldp+3283,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[25]),512);
    bufp->fullWData(oldp+3299,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[26]),512);
    bufp->fullWData(oldp+3315,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[27]),512);
    bufp->fullWData(oldp+3331,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[28]),512);
    bufp->fullWData(oldp+3347,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[29]),512);
    bufp->fullWData(oldp+3363,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[30]),512);
    bufp->fullWData(oldp+3379,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[31]),512);
    bufp->fullBit(oldp+3395,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_en_pipe_0));
    bufp->fullCData(oldp+3396,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0),5);
    bufp->fullQData(oldp+3397,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[0]),53);
    bufp->fullQData(oldp+3399,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[1]),53);
    bufp->fullQData(oldp+3401,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[2]),53);
    bufp->fullQData(oldp+3403,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[3]),53);
    bufp->fullQData(oldp+3405,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[4]),53);
    bufp->fullQData(oldp+3407,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[5]),53);
    bufp->fullQData(oldp+3409,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[6]),53);
    bufp->fullQData(oldp+3411,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[7]),53);
    bufp->fullQData(oldp+3413,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[8]),53);
    bufp->fullQData(oldp+3415,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[9]),53);
    bufp->fullQData(oldp+3417,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[10]),53);
    bufp->fullQData(oldp+3419,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[11]),53);
    bufp->fullQData(oldp+3421,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[12]),53);
    bufp->fullQData(oldp+3423,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[13]),53);
    bufp->fullQData(oldp+3425,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[14]),53);
    bufp->fullQData(oldp+3427,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[15]),53);
    bufp->fullQData(oldp+3429,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[16]),53);
    bufp->fullQData(oldp+3431,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[17]),53);
    bufp->fullQData(oldp+3433,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[18]),53);
    bufp->fullQData(oldp+3435,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[19]),53);
    bufp->fullQData(oldp+3437,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[20]),53);
    bufp->fullQData(oldp+3439,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[21]),53);
    bufp->fullQData(oldp+3441,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[22]),53);
    bufp->fullQData(oldp+3443,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[23]),53);
    bufp->fullQData(oldp+3445,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[24]),53);
    bufp->fullQData(oldp+3447,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[25]),53);
    bufp->fullQData(oldp+3449,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[26]),53);
    bufp->fullQData(oldp+3451,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[27]),53);
    bufp->fullQData(oldp+3453,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[28]),53);
    bufp->fullQData(oldp+3455,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[29]),53);
    bufp->fullQData(oldp+3457,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[30]),53);
    bufp->fullQData(oldp+3459,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[31]),53);
    bufp->fullBit(oldp+3461,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_tag_w_en_pipe_0));
    bufp->fullCData(oldp+3462,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_tag_w_addr_pipe_0),5);
    bufp->fullQData(oldp+3463,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_MPORT_1_data),53);
    bufp->fullQData(oldp+3465,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[0]),53);
    bufp->fullQData(oldp+3467,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[1]),53);
    bufp->fullQData(oldp+3469,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[2]),53);
    bufp->fullQData(oldp+3471,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[3]),53);
    bufp->fullQData(oldp+3473,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[4]),53);
    bufp->fullQData(oldp+3475,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[5]),53);
    bufp->fullQData(oldp+3477,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[6]),53);
    bufp->fullQData(oldp+3479,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[7]),53);
    bufp->fullQData(oldp+3481,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[8]),53);
    bufp->fullQData(oldp+3483,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[9]),53);
    bufp->fullQData(oldp+3485,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[10]),53);
    bufp->fullQData(oldp+3487,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[11]),53);
    bufp->fullQData(oldp+3489,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[12]),53);
    bufp->fullQData(oldp+3491,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[13]),53);
    bufp->fullQData(oldp+3493,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[14]),53);
    bufp->fullQData(oldp+3495,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[15]),53);
    bufp->fullQData(oldp+3497,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[16]),53);
    bufp->fullQData(oldp+3499,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[17]),53);
    bufp->fullQData(oldp+3501,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[18]),53);
    bufp->fullQData(oldp+3503,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[19]),53);
    bufp->fullQData(oldp+3505,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[20]),53);
    bufp->fullQData(oldp+3507,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[21]),53);
    bufp->fullQData(oldp+3509,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[22]),53);
    bufp->fullQData(oldp+3511,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[23]),53);
    bufp->fullQData(oldp+3513,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[24]),53);
    bufp->fullQData(oldp+3515,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[25]),53);
    bufp->fullQData(oldp+3517,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[26]),53);
    bufp->fullQData(oldp+3519,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[27]),53);
    bufp->fullQData(oldp+3521,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[28]),53);
    bufp->fullQData(oldp+3523,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[29]),53);
    bufp->fullQData(oldp+3525,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[30]),53);
    bufp->fullQData(oldp+3527,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[31]),53);
    bufp->fullBit(oldp+3529,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1_tag_w_en_pipe_0));
    bufp->fullCData(oldp+3530,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0),5);
    bufp->fullBit(oldp+3531,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[0]));
    bufp->fullBit(oldp+3532,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[1]));
    bufp->fullBit(oldp+3533,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[2]));
    bufp->fullBit(oldp+3534,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[3]));
    bufp->fullBit(oldp+3535,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[4]));
    bufp->fullBit(oldp+3536,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[5]));
    bufp->fullBit(oldp+3537,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[6]));
    bufp->fullBit(oldp+3538,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[7]));
    bufp->fullBit(oldp+3539,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[8]));
    bufp->fullBit(oldp+3540,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[9]));
    bufp->fullBit(oldp+3541,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[10]));
    bufp->fullBit(oldp+3542,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[11]));
    bufp->fullBit(oldp+3543,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[12]));
    bufp->fullBit(oldp+3544,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[13]));
    bufp->fullBit(oldp+3545,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[14]));
    bufp->fullBit(oldp+3546,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[15]));
    bufp->fullBit(oldp+3547,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[16]));
    bufp->fullBit(oldp+3548,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[17]));
    bufp->fullBit(oldp+3549,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[18]));
    bufp->fullBit(oldp+3550,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[19]));
    bufp->fullBit(oldp+3551,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[20]));
    bufp->fullBit(oldp+3552,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[21]));
    bufp->fullBit(oldp+3553,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[22]));
    bufp->fullBit(oldp+3554,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[23]));
    bufp->fullBit(oldp+3555,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[24]));
    bufp->fullBit(oldp+3556,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[25]));
    bufp->fullBit(oldp+3557,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[26]));
    bufp->fullBit(oldp+3558,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[27]));
    bufp->fullBit(oldp+3559,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[28]));
    bufp->fullBit(oldp+3560,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[29]));
    bufp->fullBit(oldp+3561,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[30]));
    bufp->fullBit(oldp+3562,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[31]));
    bufp->fullBit(oldp+3563,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_en_pipe_0));
    bufp->fullBit(oldp+3564,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[0]));
    bufp->fullBit(oldp+3565,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[1]));
    bufp->fullBit(oldp+3566,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[2]));
    bufp->fullBit(oldp+3567,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[3]));
    bufp->fullBit(oldp+3568,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[4]));
    bufp->fullBit(oldp+3569,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[5]));
    bufp->fullBit(oldp+3570,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[6]));
    bufp->fullBit(oldp+3571,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[7]));
    bufp->fullBit(oldp+3572,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[8]));
    bufp->fullBit(oldp+3573,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[9]));
    bufp->fullBit(oldp+3574,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[10]));
    bufp->fullBit(oldp+3575,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[11]));
    bufp->fullBit(oldp+3576,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[12]));
    bufp->fullBit(oldp+3577,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[13]));
    bufp->fullBit(oldp+3578,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[14]));
    bufp->fullBit(oldp+3579,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[15]));
    bufp->fullBit(oldp+3580,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[16]));
    bufp->fullBit(oldp+3581,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[17]));
    bufp->fullBit(oldp+3582,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[18]));
    bufp->fullBit(oldp+3583,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[19]));
    bufp->fullBit(oldp+3584,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[20]));
    bufp->fullBit(oldp+3585,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[21]));
    bufp->fullBit(oldp+3586,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[22]));
    bufp->fullBit(oldp+3587,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[23]));
    bufp->fullBit(oldp+3588,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[24]));
    bufp->fullBit(oldp+3589,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[25]));
    bufp->fullBit(oldp+3590,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[26]));
    bufp->fullBit(oldp+3591,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[27]));
    bufp->fullBit(oldp+3592,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[28]));
    bufp->fullBit(oldp+3593,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[29]));
    bufp->fullBit(oldp+3594,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[30]));
    bufp->fullBit(oldp+3595,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[31]));
    bufp->fullBit(oldp+3596,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_en_pipe_0));
    bufp->fullCData(oldp+3597,(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__read_state),2);
    bufp->fullCData(oldp+3598,(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state),2);
    bufp->fullBit(oldp+3599,(vlSelf->clock));
    bufp->fullBit(oldp+3600,(vlSelf->reset));
    bufp->fullQData(oldp+3601,(vlSelf->io_pc),64);
    bufp->fullIData(oldp+3603,(vlSelf->io_inst),32);
    bufp->fullBit(oldp+3604,(1U));
    bufp->fullCData(oldp+3605,(0U),5);
    bufp->fullCData(oldp+3606,(1U),5);
    bufp->fullCData(oldp+3607,(2U),5);
    bufp->fullCData(oldp+3608,(3U),5);
    bufp->fullCData(oldp+3609,(4U),5);
    bufp->fullCData(oldp+3610,(5U),5);
    bufp->fullCData(oldp+3611,(6U),5);
    bufp->fullCData(oldp+3612,(7U),5);
    bufp->fullCData(oldp+3613,(8U),5);
    bufp->fullCData(oldp+3614,(9U),5);
    bufp->fullCData(oldp+3615,(0xaU),5);
    bufp->fullCData(oldp+3616,(0xbU),5);
    bufp->fullCData(oldp+3617,(0xcU),5);
    bufp->fullCData(oldp+3618,(0xdU),5);
    bufp->fullCData(oldp+3619,(0xeU),5);
    bufp->fullCData(oldp+3620,(0xfU),5);
    bufp->fullCData(oldp+3621,(0x10U),5);
    bufp->fullCData(oldp+3622,(0x11U),5);
    bufp->fullCData(oldp+3623,(0x12U),5);
    bufp->fullCData(oldp+3624,(0x13U),5);
    bufp->fullCData(oldp+3625,(0x14U),5);
    bufp->fullCData(oldp+3626,(0x15U),5);
    bufp->fullCData(oldp+3627,(0x16U),5);
    bufp->fullCData(oldp+3628,(0x17U),5);
    bufp->fullCData(oldp+3629,(0x18U),5);
    bufp->fullCData(oldp+3630,(0x19U),5);
    bufp->fullCData(oldp+3631,(0x1aU),5);
    bufp->fullCData(oldp+3632,(0x1bU),5);
    bufp->fullCData(oldp+3633,(0x1cU),5);
    bufp->fullCData(oldp+3634,(0x1dU),5);
    bufp->fullCData(oldp+3635,(0x1eU),5);
    bufp->fullCData(oldp+3636,(0x1fU),5);
    bufp->fullCData(oldp+3637,(0U),2);
    bufp->fullCData(oldp+3638,(1U),4);
    bufp->fullCData(oldp+3639,(3U),3);
    bufp->fullCData(oldp+3640,(0U),3);
    bufp->fullCData(oldp+3641,(1U),2);
    bufp->fullCData(oldp+3642,(0U),4);
    bufp->fullCData(oldp+3643,(vlSelf->CoreTop__DOT__MMEM_rd_id),4);
    bufp->fullCData(oldp+3644,(vlSelf->CoreTop__DOT__MMEM_rd_resp),2);
    bufp->fullCData(oldp+3645,(vlSelf->CoreTop__DOT__MMEM_wr_id),4);
    bufp->fullBit(oldp+3646,(0U));
    bufp->fullIData(oldp+3647,(0x40U),32);
    bufp->fullCData(oldp+3648,(2U),2);
}
