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
    tracep->declBit(c+3481,"clock", false,-1);
    tracep->declBit(c+3482,"reset", false,-1);
    tracep->declQuad(c+3483,"io_pc", false,-1, 63,0);
    tracep->declBus(c+3485,"io_inst", false,-1, 31,0);
    tracep->pushNamePrefix("CoreTop ");
    tracep->declBit(c+3481,"clock", false,-1);
    tracep->declBit(c+3482,"reset", false,-1);
    tracep->declQuad(c+3483,"io_pc", false,-1, 63,0);
    tracep->declBus(c+3485,"io_inst", false,-1, 31,0);
    tracep->declBit(c+3481,"IF_clock", false,-1);
    tracep->declBit(c+3482,"IF_reset", false,-1);
    tracep->declBit(c+1,"IF_io_branch_io_is_branch", false,-1);
    tracep->declBit(c+67,"IF_io_branch_io_is_jump", false,-1);
    tracep->declQuad(c+2,"IF_io_branch_io_dnpc", false,-1, 63,0);
    tracep->declBit(c+68,"IF_io_cache_req_addr_req_valid", false,-1);
    tracep->declQuad(c+3483,"IF_io_cache_req_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+68,"IF_io_cache_req_rdata_rep_ready", false,-1);
    tracep->declBit(c+4,"IF_io_cache_req_rdata_rep_valid", false,-1);
    tracep->declQuad(c+69,"IF_io_cache_req_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+68,"IF_io_out_ready", false,-1);
    tracep->declBit(c+4,"IF_io_out_valid", false,-1);
    tracep->declQuad(c+3483,"IF_io_out_bits_PC", false,-1, 63,0);
    tracep->declBus(c+5,"IF_io_out_bits_Inst", false,-1, 31,0);
    tracep->declBit(c+6,"IF_io_flush", false,-1);
    tracep->declBit(c+68,"ID_io_in_ready", false,-1);
    tracep->declBit(c+71,"ID_io_in_valid", false,-1);
    tracep->declQuad(c+72,"ID_io_in_bits_PC", false,-1, 63,0);
    tracep->declBus(c+74,"ID_io_in_bits_Inst", false,-1, 31,0);
    tracep->declQuad(c+7,"ID_io_REG1", false,-1, 63,0);
    tracep->declQuad(c+9,"ID_io_REG2", false,-1, 63,0);
    tracep->declBit(c+6,"ID_io_flush", false,-1);
    tracep->declBit(c+68,"ID_io_out_ready", false,-1);
    tracep->declBit(c+71,"ID_io_out_valid", false,-1);
    tracep->declBus(c+75,"ID_io_out_bits_ctrl_signal_src1Type", false,-1, 2,0);
    tracep->declBus(c+76,"ID_io_out_bits_ctrl_signal_src2Type", false,-1, 2,0);
    tracep->declBus(c+77,"ID_io_out_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+11,"ID_io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBus(c+78,"ID_io_out_bits_ctrl_signal_rfSrc1", false,-1, 4,0);
    tracep->declBus(c+79,"ID_io_out_bits_ctrl_signal_rfSrc2", false,-1, 4,0);
    tracep->declBit(c+80,"ID_io_out_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+81,"ID_io_out_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declBus(c+82,"ID_io_out_bits_ctrl_signal_rfDest", false,-1, 4,0);
    tracep->declQuad(c+7,"ID_io_out_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+9,"ID_io_out_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+83,"ID_io_out_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declQuad(c+72,"ID_io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+74,"ID_io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declBit(c+3481,"EX_clock", false,-1);
    tracep->declBit(c+3482,"EX_reset", false,-1);
    tracep->declBit(c+68,"EX_io_in_ready", false,-1);
    tracep->declBit(c+85,"EX_io_in_valid", false,-1);
    tracep->declBus(c+86,"EX_io_in_bits_ctrl_signal_src1Type", false,-1, 2,0);
    tracep->declBus(c+87,"EX_io_in_bits_ctrl_signal_src2Type", false,-1, 2,0);
    tracep->declBus(c+88,"EX_io_in_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+89,"EX_io_in_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBus(c+90,"EX_io_in_bits_ctrl_signal_rfSrc1", false,-1, 4,0);
    tracep->declBus(c+91,"EX_io_in_bits_ctrl_signal_rfSrc2", false,-1, 4,0);
    tracep->declBit(c+92,"EX_io_in_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+93,"EX_io_in_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declBus(c+94,"EX_io_in_bits_ctrl_signal_rfDest", false,-1, 4,0);
    tracep->declQuad(c+95,"EX_io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+97,"EX_io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+99,"EX_io_in_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declQuad(c+101,"EX_io_in_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+103,"EX_io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+12,"EX_io_src1", false,-1, 63,0);
    tracep->declQuad(c+14,"EX_io_src2", false,-1, 63,0);
    tracep->declBit(c+1,"EX_io_branchIO_is_branch", false,-1);
    tracep->declBit(c+67,"EX_io_branchIO_is_jump", false,-1);
    tracep->declQuad(c+2,"EX_io_branchIO_dnpc", false,-1, 63,0);
    tracep->declBit(c+104,"EX_io_out_ready", false,-1);
    tracep->declBit(c+105,"EX_io_out_valid", false,-1);
    tracep->declBus(c+88,"EX_io_out_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+89,"EX_io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+92,"EX_io_out_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+93,"EX_io_out_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+101,"EX_io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+103,"EX_io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+2,"EX_io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+94,"EX_io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+106,"EX_io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+16,"EX_io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+18,"EX_io_out_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+20,"EX_io_out_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+99,"EX_io_out_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declBit(c+107,"EX_io_is_break", false,-1);
    tracep->declBit(c+6,"EX_io_is_flush", false,-1);
    tracep->declBit(c+108,"DIP_is_break", false,-1);
    tracep->declQuad(c+109,"DIP_rf_0", false,-1, 63,0);
    tracep->declQuad(c+111,"DIP_rf_1", false,-1, 63,0);
    tracep->declQuad(c+113,"DIP_rf_2", false,-1, 63,0);
    tracep->declQuad(c+115,"DIP_rf_3", false,-1, 63,0);
    tracep->declQuad(c+117,"DIP_rf_4", false,-1, 63,0);
    tracep->declQuad(c+119,"DIP_rf_5", false,-1, 63,0);
    tracep->declQuad(c+121,"DIP_rf_6", false,-1, 63,0);
    tracep->declQuad(c+123,"DIP_rf_7", false,-1, 63,0);
    tracep->declQuad(c+125,"DIP_rf_8", false,-1, 63,0);
    tracep->declQuad(c+127,"DIP_rf_9", false,-1, 63,0);
    tracep->declQuad(c+129,"DIP_rf_10", false,-1, 63,0);
    tracep->declQuad(c+131,"DIP_rf_11", false,-1, 63,0);
    tracep->declQuad(c+133,"DIP_rf_12", false,-1, 63,0);
    tracep->declQuad(c+135,"DIP_rf_13", false,-1, 63,0);
    tracep->declQuad(c+137,"DIP_rf_14", false,-1, 63,0);
    tracep->declQuad(c+139,"DIP_rf_15", false,-1, 63,0);
    tracep->declQuad(c+141,"DIP_rf_16", false,-1, 63,0);
    tracep->declQuad(c+143,"DIP_rf_17", false,-1, 63,0);
    tracep->declQuad(c+145,"DIP_rf_18", false,-1, 63,0);
    tracep->declQuad(c+147,"DIP_rf_19", false,-1, 63,0);
    tracep->declQuad(c+149,"DIP_rf_20", false,-1, 63,0);
    tracep->declQuad(c+151,"DIP_rf_21", false,-1, 63,0);
    tracep->declQuad(c+153,"DIP_rf_22", false,-1, 63,0);
    tracep->declQuad(c+155,"DIP_rf_23", false,-1, 63,0);
    tracep->declQuad(c+157,"DIP_rf_24", false,-1, 63,0);
    tracep->declQuad(c+159,"DIP_rf_25", false,-1, 63,0);
    tracep->declQuad(c+161,"DIP_rf_26", false,-1, 63,0);
    tracep->declQuad(c+163,"DIP_rf_27", false,-1, 63,0);
    tracep->declQuad(c+165,"DIP_rf_28", false,-1, 63,0);
    tracep->declQuad(c+167,"DIP_rf_29", false,-1, 63,0);
    tracep->declQuad(c+169,"DIP_rf_30", false,-1, 63,0);
    tracep->declQuad(c+171,"DIP_rf_31", false,-1, 63,0);
    tracep->declBus(c+173,"DIP_inst", false,-1, 31,0);
    tracep->declQuad(c+174,"DIP_pc", false,-1, 63,0);
    tracep->declBit(c+176,"DIP_inst_valid", false,-1);
    tracep->declQuad(c+177,"DIP_dnpc", false,-1, 63,0);
    tracep->declBit(c+179,"DIP_is_skip", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+180+i*2,"rf", true,(i+0), 63,0);
    }
    tracep->declBit(c+3486,"rf_bypass_io_Reg1_MPORT_en", false,-1);
    tracep->declBus(c+78,"rf_bypass_io_Reg1_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+244,"rf_bypass_io_Reg1_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3486,"rf_bypass_io_Reg2_MPORT_en", false,-1);
    tracep->declBus(c+79,"rf_bypass_io_Reg2_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+246,"rf_bypass_io_Reg2_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3486,"rf_DIP_io_rf_0_MPORT_en", false,-1);
    tracep->declBus(c+3487,"rf_DIP_io_rf_0_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+109,"rf_DIP_io_rf_0_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3486,"rf_DIP_io_rf_1_MPORT_en", false,-1);
    tracep->declBus(c+3488,"rf_DIP_io_rf_1_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+111,"rf_DIP_io_rf_1_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3486,"rf_DIP_io_rf_2_MPORT_en", false,-1);
    tracep->declBus(c+3489,"rf_DIP_io_rf_2_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+113,"rf_DIP_io_rf_2_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3486,"rf_DIP_io_rf_3_MPORT_en", false,-1);
    tracep->declBus(c+3490,"rf_DIP_io_rf_3_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+115,"rf_DIP_io_rf_3_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3486,"rf_DIP_io_rf_4_MPORT_en", false,-1);
    tracep->declBus(c+3491,"rf_DIP_io_rf_4_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+117,"rf_DIP_io_rf_4_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3486,"rf_DIP_io_rf_5_MPORT_en", false,-1);
    tracep->declBus(c+3492,"rf_DIP_io_rf_5_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+119,"rf_DIP_io_rf_5_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3486,"rf_DIP_io_rf_6_MPORT_en", false,-1);
    tracep->declBus(c+3493,"rf_DIP_io_rf_6_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+121,"rf_DIP_io_rf_6_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3486,"rf_DIP_io_rf_7_MPORT_en", false,-1);
    tracep->declBus(c+3494,"rf_DIP_io_rf_7_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+123,"rf_DIP_io_rf_7_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3486,"rf_DIP_io_rf_8_MPORT_en", false,-1);
    tracep->declBus(c+3495,"rf_DIP_io_rf_8_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+125,"rf_DIP_io_rf_8_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3486,"rf_DIP_io_rf_9_MPORT_en", false,-1);
    tracep->declBus(c+3496,"rf_DIP_io_rf_9_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+127,"rf_DIP_io_rf_9_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3486,"rf_DIP_io_rf_10_MPORT_en", false,-1);
    tracep->declBus(c+3497,"rf_DIP_io_rf_10_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+129,"rf_DIP_io_rf_10_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3486,"rf_DIP_io_rf_11_MPORT_en", false,-1);
    tracep->declBus(c+3498,"rf_DIP_io_rf_11_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+131,"rf_DIP_io_rf_11_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3486,"rf_DIP_io_rf_12_MPORT_en", false,-1);
    tracep->declBus(c+3499,"rf_DIP_io_rf_12_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+133,"rf_DIP_io_rf_12_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3486,"rf_DIP_io_rf_13_MPORT_en", false,-1);
    tracep->declBus(c+3500,"rf_DIP_io_rf_13_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+135,"rf_DIP_io_rf_13_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3486,"rf_DIP_io_rf_14_MPORT_en", false,-1);
    tracep->declBus(c+3501,"rf_DIP_io_rf_14_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+137,"rf_DIP_io_rf_14_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3486,"rf_DIP_io_rf_15_MPORT_en", false,-1);
    tracep->declBus(c+3502,"rf_DIP_io_rf_15_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+139,"rf_DIP_io_rf_15_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3486,"rf_DIP_io_rf_16_MPORT_en", false,-1);
    tracep->declBus(c+3503,"rf_DIP_io_rf_16_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+141,"rf_DIP_io_rf_16_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3486,"rf_DIP_io_rf_17_MPORT_en", false,-1);
    tracep->declBus(c+3504,"rf_DIP_io_rf_17_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+143,"rf_DIP_io_rf_17_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3486,"rf_DIP_io_rf_18_MPORT_en", false,-1);
    tracep->declBus(c+3505,"rf_DIP_io_rf_18_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+145,"rf_DIP_io_rf_18_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3486,"rf_DIP_io_rf_19_MPORT_en", false,-1);
    tracep->declBus(c+3506,"rf_DIP_io_rf_19_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+147,"rf_DIP_io_rf_19_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3486,"rf_DIP_io_rf_20_MPORT_en", false,-1);
    tracep->declBus(c+3507,"rf_DIP_io_rf_20_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+149,"rf_DIP_io_rf_20_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3486,"rf_DIP_io_rf_21_MPORT_en", false,-1);
    tracep->declBus(c+3508,"rf_DIP_io_rf_21_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+151,"rf_DIP_io_rf_21_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3486,"rf_DIP_io_rf_22_MPORT_en", false,-1);
    tracep->declBus(c+3509,"rf_DIP_io_rf_22_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+153,"rf_DIP_io_rf_22_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3486,"rf_DIP_io_rf_23_MPORT_en", false,-1);
    tracep->declBus(c+3510,"rf_DIP_io_rf_23_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+155,"rf_DIP_io_rf_23_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3486,"rf_DIP_io_rf_24_MPORT_en", false,-1);
    tracep->declBus(c+3511,"rf_DIP_io_rf_24_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+157,"rf_DIP_io_rf_24_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3486,"rf_DIP_io_rf_25_MPORT_en", false,-1);
    tracep->declBus(c+3512,"rf_DIP_io_rf_25_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+159,"rf_DIP_io_rf_25_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3486,"rf_DIP_io_rf_26_MPORT_en", false,-1);
    tracep->declBus(c+3513,"rf_DIP_io_rf_26_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+161,"rf_DIP_io_rf_26_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3486,"rf_DIP_io_rf_27_MPORT_en", false,-1);
    tracep->declBus(c+3514,"rf_DIP_io_rf_27_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+163,"rf_DIP_io_rf_27_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3486,"rf_DIP_io_rf_28_MPORT_en", false,-1);
    tracep->declBus(c+3515,"rf_DIP_io_rf_28_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+165,"rf_DIP_io_rf_28_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3486,"rf_DIP_io_rf_29_MPORT_en", false,-1);
    tracep->declBus(c+3516,"rf_DIP_io_rf_29_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+167,"rf_DIP_io_rf_29_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3486,"rf_DIP_io_rf_30_MPORT_en", false,-1);
    tracep->declBus(c+3517,"rf_DIP_io_rf_30_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+169,"rf_DIP_io_rf_30_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3486,"rf_DIP_io_rf_31_MPORT_en", false,-1);
    tracep->declBus(c+3518,"rf_DIP_io_rf_31_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+171,"rf_DIP_io_rf_31_MPORT_data", false,-1, 63,0);
    tracep->declQuad(c+248,"rf_MPORT_data", false,-1, 63,0);
    tracep->declBus(c+250,"rf_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+3486,"rf_MPORT_mask", false,-1);
    tracep->declBit(c+251,"rf_MPORT_en", false,-1);
    tracep->declBit(c+104,"MEM_io_in_ready", false,-1);
    tracep->declBit(c+252,"MEM_io_in_valid", false,-1);
    tracep->declBus(c+253,"MEM_io_in_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+254,"MEM_io_in_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+255,"MEM_io_in_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+256,"MEM_io_in_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+257,"MEM_io_in_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+259,"MEM_io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+260,"MEM_io_in_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+262,"MEM_io_in_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declQuad(c+263,"MEM_io_in_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+265,"MEM_io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+267,"MEM_io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+269,"MEM_io_in_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declBit(c+3486,"MEM_io_out_ready", false,-1);
    tracep->declBit(c+271,"MEM_io_out_valid", false,-1);
    tracep->declBit(c+272,"MEM_io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+255,"MEM_io_out_bits_ctrl_signal_rfWen", false,-1);
    tracep->declQuad(c+257,"MEM_io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+259,"MEM_io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+260,"MEM_io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBit(c+273,"MEM_io_out_bits_ctrl_flow_skip", false,-1);
    tracep->declBus(c+262,"MEM_io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+274,"MEM_io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+22,"MEM_io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declBit(c+275,"MEM_io_cache_io_addr_req_valid", false,-1);
    tracep->declQuad(c+276,"MEM_io_cache_io_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+275,"MEM_io_cache_io_addr_req_bits_ce", false,-1);
    tracep->declBit(c+278,"MEM_io_cache_io_addr_req_bits_we", false,-1);
    tracep->declBit(c+279,"MEM_io_cache_io_rdata_rep_valid", false,-1);
    tracep->declQuad(c+24,"MEM_io_cache_io_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+280,"MEM_io_cache_io_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+282,"MEM_io_cache_io_wdata_req_bits_wmask", false,-1, 7,0);
    tracep->declBit(c+283,"MEM_io_cache_io_wdata_rep", false,-1);
    tracep->declBit(c+284,"WB_io_in_valid", false,-1);
    tracep->declBit(c+285,"WB_io_in_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+286,"WB_io_in_bits_ctrl_signal_rfWen", false,-1);
    tracep->declQuad(c+287,"WB_io_in_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+3485,"WB_io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+289,"WB_io_in_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBit(c+291,"WB_io_in_bits_ctrl_flow_skip", false,-1);
    tracep->declBus(c+250,"WB_io_in_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declQuad(c+292,"WB_io_in_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declBit(c+3486,"WB_io_out_ready", false,-1);
    tracep->declBit(c+284,"WB_io_out_valid", false,-1);
    tracep->declBit(c+294,"WB_io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declQuad(c+287,"WB_io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+3485,"WB_io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+289,"WB_io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBit(c+291,"WB_io_out_bits_ctrl_flow_skip", false,-1);
    tracep->declBus(c+250,"WB_io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+251,"WB_io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+292,"WB_io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+94,"bypass_io_EX_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+106,"bypass_io_EX_rf_rfWen", false,-1);
    tracep->declQuad(c+16,"bypass_io_EX_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+262,"bypass_io_MEM_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+274,"bypass_io_MEM_rf_rfWen", false,-1);
    tracep->declQuad(c+22,"bypass_io_MEM_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+250,"bypass_io_WB_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+251,"bypass_io_WB_rf_rfWen", false,-1);
    tracep->declQuad(c+292,"bypass_io_WB_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+295,"bypass_io_Reg1", false,-1, 63,0);
    tracep->declBus(c+78,"bypass_io_reg_index1", false,-1, 4,0);
    tracep->declQuad(c+297,"bypass_io_Reg2", false,-1, 63,0);
    tracep->declBus(c+79,"bypass_io_reg_index2", false,-1, 4,0);
    tracep->declQuad(c+7,"bypass_io_Bypass_REG1", false,-1, 63,0);
    tracep->declQuad(c+9,"bypass_io_Bypass_REG2", false,-1, 63,0);
    tracep->declBus(c+262,"mem_bypass_io_MEM_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+274,"mem_bypass_io_MEM_rf_rfWen", false,-1);
    tracep->declQuad(c+22,"mem_bypass_io_MEM_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+95,"mem_bypass_io_Reg1", false,-1, 63,0);
    tracep->declBus(c+90,"mem_bypass_io_reg_index1", false,-1, 4,0);
    tracep->declQuad(c+97,"mem_bypass_io_Reg2", false,-1, 63,0);
    tracep->declBus(c+91,"mem_bypass_io_reg_index2", false,-1, 4,0);
    tracep->declQuad(c+12,"mem_bypass_io_Bypass_REG1", false,-1, 63,0);
    tracep->declQuad(c+14,"mem_bypass_io_Bypass_REG2", false,-1, 63,0);
    tracep->declBit(c+3481,"ICACHE_clock", false,-1);
    tracep->declBit(c+3482,"ICACHE_reset", false,-1);
    tracep->declBit(c+68,"ICACHE_io_in_addr_req_valid", false,-1);
    tracep->declQuad(c+3483,"ICACHE_io_in_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+68,"ICACHE_io_in_rdata_rep_ready", false,-1);
    tracep->declBit(c+4,"ICACHE_io_in_rdata_rep_valid", false,-1);
    tracep->declQuad(c+69,"ICACHE_io_in_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+6,"ICACHE_io_flush", false,-1);
    tracep->declBit(c+299,"ICACHE_io_out_raddr_req_ready", false,-1);
    tracep->declBit(c+300,"ICACHE_io_out_raddr_req_valid", false,-1);
    tracep->declQuad(c+301,"ICACHE_io_out_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+303,"ICACHE_io_out_rdata_rep_valid", false,-1);
    tracep->declQuad(c+26,"ICACHE_io_out_rdata_rep_bits_data", false,-1, 63,0);
    tracep->declBit(c+304,"ICACHE_io_out_rdata_rep_bits_last", false,-1);
    tracep->declBit(c+305,"ICACHE_io_out_wb_valid", false,-1);
    tracep->declBus(c+3519,"ICACHE_io_out_wb_bits_breap", false,-1, 1,0);
    tracep->declBit(c+3482,"MMEM_reset", false,-1);
    tracep->declBit(c+3481,"MMEM_clk", false,-1);
    tracep->declBit(c+306,"MMEM_ar_valid", false,-1);
    tracep->declBit(c+307,"MMEM_ar_ready", false,-1);
    tracep->declQuad(c+308,"MMEM_ar_addr", false,-1, 63,0);
    tracep->declBus(c+3520,"MMEM_ar_id", false,-1, 3,0);
    tracep->declBus(c+310,"MMEM_ar_len", false,-1, 7,0);
    tracep->declBus(c+3521,"MMEM_ar_size", false,-1, 2,0);
    tracep->declBus(c+3522,"MMEM_ar_prot", false,-1, 2,0);
    tracep->declBus(c+3523,"MMEM_ar_burst", false,-1, 1,0);
    tracep->declBus(c+3519,"MMEM_ar_lock", false,-1, 1,0);
    tracep->declBus(c+3524,"MMEM_ar_cache", false,-1, 3,0);
    tracep->declBit(c+311,"MMEM_rd_valid", false,-1);
    tracep->declBit(c+3486,"MMEM_rd_ready", false,-1);
    tracep->declQuad(c+26,"MMEM_rd_data", false,-1, 63,0);
    tracep->declBus(c+3525,"MMEM_rd_id", false,-1, 3,0);
    tracep->declBus(c+3526,"MMEM_rd_resp", false,-1, 1,0);
    tracep->declBit(c+304,"MMEM_rd_last", false,-1);
    tracep->declBit(c+312,"MMEM_aw_valid", false,-1);
    tracep->declBit(c+313,"MMEM_aw_ready", false,-1);
    tracep->declQuad(c+314,"MMEM_aw_addr", false,-1, 63,0);
    tracep->declBus(c+3520,"MMEM_aw_id", false,-1, 3,0);
    tracep->declBus(c+310,"MMEM_aw_len", false,-1, 7,0);
    tracep->declBus(c+3521,"MMEM_aw_size", false,-1, 2,0);
    tracep->declBus(c+3522,"MMEM_aw_prot", false,-1, 2,0);
    tracep->declBus(c+3523,"MMEM_aw_burst", false,-1, 1,0);
    tracep->declBus(c+3519,"MMEM_aw_lock", false,-1, 1,0);
    tracep->declBus(c+3524,"MMEM_aw_cache", false,-1, 3,0);
    tracep->declBit(c+316,"MMEM_wd_valid", false,-1);
    tracep->declBit(c+317,"MMEM_wd_ready", false,-1);
    tracep->declQuad(c+318,"MMEM_wd_data", false,-1, 63,0);
    tracep->declBus(c+320,"MMEM_wstrb", false,-1, 7,0);
    tracep->declBus(c+3520,"MMEM_wd_id", false,-1, 3,0);
    tracep->declBit(c+321,"MMEM_wd_last", false,-1);
    tracep->declBit(c+322,"MMEM_wr_valid", false,-1);
    tracep->declBit(c+323,"MMEM_wr_ready", false,-1);
    tracep->declBus(c+3519,"MMEM_wr_breap", false,-1, 1,0);
    tracep->declBus(c+3527,"MMEM_wr_id", false,-1, 3,0);
    tracep->declBit(c+3481,"ARBITER_clock", false,-1);
    tracep->declBit(c+3482,"ARBITER_reset", false,-1);
    tracep->declBit(c+324,"ARBITER_io_in1_raddr_req_ready", false,-1);
    tracep->declBit(c+325,"ARBITER_io_in1_raddr_req_valid", false,-1);
    tracep->declQuad(c+326,"ARBITER_io_in1_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBus(c+328,"ARBITER_io_in1_raddr_req_bits_len", false,-1, 7,0);
    tracep->declBit(c+329,"ARBITER_io_in1_waddr_req_ready", false,-1);
    tracep->declBit(c+330,"ARBITER_io_in1_waddr_req_valid", false,-1);
    tracep->declQuad(c+331,"ARBITER_io_in1_waddr_req_bits_addr", false,-1, 63,0);
    tracep->declBus(c+328,"ARBITER_io_in1_waddr_req_bits_len", false,-1, 7,0);
    tracep->declBit(c+3486,"ARBITER_io_in1_rdata_rep_ready", false,-1);
    tracep->declBit(c+333,"ARBITER_io_in1_rdata_rep_valid", false,-1);
    tracep->declQuad(c+26,"ARBITER_io_in1_rdata_rep_bits_data", false,-1, 63,0);
    tracep->declBit(c+304,"ARBITER_io_in1_rdata_rep_bits_last", false,-1);
    tracep->declBit(c+334,"ARBITER_io_in1_wdata_req_ready", false,-1);
    tracep->declBit(c+335,"ARBITER_io_in1_wdata_req_valid", false,-1);
    tracep->declQuad(c+336,"ARBITER_io_in1_wdata_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+338,"ARBITER_io_in1_wdata_req_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+339,"ARBITER_io_in1_wdata_req_bits_last", false,-1);
    tracep->declBit(c+340,"ARBITER_io_in1_wb_ready", false,-1);
    tracep->declBit(c+341,"ARBITER_io_in1_wb_valid", false,-1);
    tracep->declBus(c+3519,"ARBITER_io_in1_wb_bits_breap", false,-1, 1,0);
    tracep->declBit(c+299,"ARBITER_io_in2_raddr_req_ready", false,-1);
    tracep->declBit(c+300,"ARBITER_io_in2_raddr_req_valid", false,-1);
    tracep->declQuad(c+301,"ARBITER_io_in2_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+303,"ARBITER_io_in2_rdata_rep_valid", false,-1);
    tracep->declQuad(c+26,"ARBITER_io_in2_rdata_rep_bits_data", false,-1, 63,0);
    tracep->declBit(c+304,"ARBITER_io_in2_rdata_rep_bits_last", false,-1);
    tracep->declBit(c+305,"ARBITER_io_in2_wb_valid", false,-1);
    tracep->declBus(c+3519,"ARBITER_io_in2_wb_bits_breap", false,-1, 1,0);
    tracep->declBit(c+307,"ARBITER_io_out_raddr_req_ready", false,-1);
    tracep->declBit(c+306,"ARBITER_io_out_raddr_req_valid", false,-1);
    tracep->declQuad(c+308,"ARBITER_io_out_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBus(c+310,"ARBITER_io_out_raddr_req_bits_len", false,-1, 7,0);
    tracep->declBit(c+313,"ARBITER_io_out_waddr_req_ready", false,-1);
    tracep->declBit(c+312,"ARBITER_io_out_waddr_req_valid", false,-1);
    tracep->declQuad(c+314,"ARBITER_io_out_waddr_req_bits_addr", false,-1, 63,0);
    tracep->declBus(c+310,"ARBITER_io_out_waddr_req_bits_len", false,-1, 7,0);
    tracep->declBit(c+3486,"ARBITER_io_out_rdata_rep_ready", false,-1);
    tracep->declBit(c+311,"ARBITER_io_out_rdata_rep_valid", false,-1);
    tracep->declQuad(c+26,"ARBITER_io_out_rdata_rep_bits_data", false,-1, 63,0);
    tracep->declBit(c+304,"ARBITER_io_out_rdata_rep_bits_last", false,-1);
    tracep->declBit(c+317,"ARBITER_io_out_wdata_req_ready", false,-1);
    tracep->declBit(c+316,"ARBITER_io_out_wdata_req_valid", false,-1);
    tracep->declQuad(c+318,"ARBITER_io_out_wdata_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+320,"ARBITER_io_out_wdata_req_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+321,"ARBITER_io_out_wdata_req_bits_last", false,-1);
    tracep->declBit(c+323,"ARBITER_io_out_wb_ready", false,-1);
    tracep->declBit(c+322,"ARBITER_io_out_wb_valid", false,-1);
    tracep->declBus(c+3519,"ARBITER_io_out_wb_bits_breap", false,-1, 1,0);
    tracep->declBit(c+3481,"MMIO_clock", false,-1);
    tracep->declBit(c+3482,"MMIO_reset", false,-1);
    tracep->declBit(c+275,"MMIO_io_in_addr_req_valid", false,-1);
    tracep->declQuad(c+276,"MMIO_io_in_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+275,"MMIO_io_in_addr_req_bits_ce", false,-1);
    tracep->declBit(c+278,"MMIO_io_in_addr_req_bits_we", false,-1);
    tracep->declBit(c+279,"MMIO_io_in_rdata_rep_valid", false,-1);
    tracep->declQuad(c+24,"MMIO_io_in_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+280,"MMIO_io_in_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+282,"MMIO_io_in_wdata_req_bits_wmask", false,-1, 7,0);
    tracep->declBit(c+283,"MMIO_io_in_wdata_rep", false,-1);
    tracep->declBit(c+324,"MMIO_io_out_raddr_req_ready", false,-1);
    tracep->declBit(c+325,"MMIO_io_out_raddr_req_valid", false,-1);
    tracep->declQuad(c+326,"MMIO_io_out_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBus(c+328,"MMIO_io_out_raddr_req_bits_len", false,-1, 7,0);
    tracep->declBit(c+329,"MMIO_io_out_waddr_req_ready", false,-1);
    tracep->declBit(c+330,"MMIO_io_out_waddr_req_valid", false,-1);
    tracep->declQuad(c+331,"MMIO_io_out_waddr_req_bits_addr", false,-1, 63,0);
    tracep->declBus(c+328,"MMIO_io_out_waddr_req_bits_len", false,-1, 7,0);
    tracep->declBit(c+3486,"MMIO_io_out_rdata_rep_ready", false,-1);
    tracep->declBit(c+333,"MMIO_io_out_rdata_rep_valid", false,-1);
    tracep->declQuad(c+26,"MMIO_io_out_rdata_rep_bits_data", false,-1, 63,0);
    tracep->declBit(c+304,"MMIO_io_out_rdata_rep_bits_last", false,-1);
    tracep->declBit(c+334,"MMIO_io_out_wdata_req_ready", false,-1);
    tracep->declBit(c+335,"MMIO_io_out_wdata_req_valid", false,-1);
    tracep->declQuad(c+336,"MMIO_io_out_wdata_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+338,"MMIO_io_out_wdata_req_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+339,"MMIO_io_out_wdata_req_bits_last", false,-1);
    tracep->declBit(c+340,"MMIO_io_out_wb_ready", false,-1);
    tracep->declBit(c+341,"MMIO_io_out_wb_valid", false,-1);
    tracep->declBus(c+3519,"MMIO_io_out_wb_bits_breap", false,-1, 1,0);
    tracep->declBit(c+71,"valid", false,-1);
    tracep->declQuad(c+72,"ID_io_in_bits_r_PC", false,-1, 63,0);
    tracep->declBus(c+74,"ID_io_in_bits_r_Inst", false,-1, 31,0);
    tracep->declBit(c+85,"valid_1", false,-1);
    tracep->declBus(c+86,"EX_io_in_bits_r_ctrl_signal_src1Type", false,-1, 2,0);
    tracep->declBus(c+87,"EX_io_in_bits_r_ctrl_signal_src2Type", false,-1, 2,0);
    tracep->declBus(c+88,"EX_io_in_bits_r_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+89,"EX_io_in_bits_r_ctrl_signal_inst_valid", false,-1);
    tracep->declBus(c+90,"EX_io_in_bits_r_ctrl_signal_rfSrc1", false,-1, 4,0);
    tracep->declBus(c+91,"EX_io_in_bits_r_ctrl_signal_rfSrc2", false,-1, 4,0);
    tracep->declBit(c+92,"EX_io_in_bits_r_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+93,"EX_io_in_bits_r_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declBus(c+94,"EX_io_in_bits_r_ctrl_signal_rfDest", false,-1, 4,0);
    tracep->declQuad(c+95,"EX_io_in_bits_r_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+97,"EX_io_in_bits_r_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+99,"EX_io_in_bits_r_ctrl_data_Imm", false,-1, 63,0);
    tracep->declQuad(c+101,"EX_io_in_bits_r_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+103,"EX_io_in_bits_r_ctrl_flow_inst", false,-1, 31,0);
    tracep->declBit(c+252,"valid_2", false,-1);
    tracep->declBus(c+253,"MEM_io_in_bits_r_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+254,"MEM_io_in_bits_r_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+255,"MEM_io_in_bits_r_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+256,"MEM_io_in_bits_r_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+257,"MEM_io_in_bits_r_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+259,"MEM_io_in_bits_r_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+260,"MEM_io_in_bits_r_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+262,"MEM_io_in_bits_r_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declQuad(c+263,"MEM_io_in_bits_r_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+265,"MEM_io_in_bits_r_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+267,"MEM_io_in_bits_r_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+269,"MEM_io_in_bits_r_ctrl_data_Imm", false,-1, 63,0);
    tracep->declBit(c+284,"valid_3", false,-1);
    tracep->declBit(c+285,"WB_io_in_bits_r_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+286,"WB_io_in_bits_r_ctrl_signal_rfWen", false,-1);
    tracep->declQuad(c+287,"WB_io_in_bits_r_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+342,"WB_io_in_bits_r_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+289,"WB_io_in_bits_r_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBit(c+291,"WB_io_in_bits_r_ctrl_flow_skip", false,-1);
    tracep->declBus(c+250,"WB_io_in_bits_r_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declQuad(c+292,"WB_io_in_bits_r_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declBit(c+343,"DIP_io_is_break_REG", false,-1);
    tracep->declBit(c+108,"DIP_io_is_break_REG_1", false,-1);
    tracep->declBus(c+173,"DIP_io_inst_REG", false,-1, 31,0);
    tracep->declBit(c+179,"DIP_io_is_skip_REG", false,-1);
    tracep->declBit(c+176,"DIP_io_inst_valid_REG", false,-1);
    tracep->declQuad(c+174,"DIP_io_pc_REG", false,-1, 63,0);
    tracep->declQuad(c+177,"DIP_io_dnpc_REG", false,-1, 63,0);
    tracep->pushNamePrefix("ARBITER ");
    tracep->declBit(c+3481,"clock", false,-1);
    tracep->declBit(c+3482,"reset", false,-1);
    tracep->declBit(c+324,"io_in1_raddr_req_ready", false,-1);
    tracep->declBit(c+325,"io_in1_raddr_req_valid", false,-1);
    tracep->declQuad(c+326,"io_in1_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBus(c+328,"io_in1_raddr_req_bits_len", false,-1, 7,0);
    tracep->declBit(c+329,"io_in1_waddr_req_ready", false,-1);
    tracep->declBit(c+330,"io_in1_waddr_req_valid", false,-1);
    tracep->declQuad(c+331,"io_in1_waddr_req_bits_addr", false,-1, 63,0);
    tracep->declBus(c+328,"io_in1_waddr_req_bits_len", false,-1, 7,0);
    tracep->declBit(c+3486,"io_in1_rdata_rep_ready", false,-1);
    tracep->declBit(c+333,"io_in1_rdata_rep_valid", false,-1);
    tracep->declQuad(c+26,"io_in1_rdata_rep_bits_data", false,-1, 63,0);
    tracep->declBit(c+304,"io_in1_rdata_rep_bits_last", false,-1);
    tracep->declBit(c+334,"io_in1_wdata_req_ready", false,-1);
    tracep->declBit(c+335,"io_in1_wdata_req_valid", false,-1);
    tracep->declQuad(c+336,"io_in1_wdata_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+338,"io_in1_wdata_req_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+339,"io_in1_wdata_req_bits_last", false,-1);
    tracep->declBit(c+340,"io_in1_wb_ready", false,-1);
    tracep->declBit(c+341,"io_in1_wb_valid", false,-1);
    tracep->declBus(c+3519,"io_in1_wb_bits_breap", false,-1, 1,0);
    tracep->declBit(c+299,"io_in2_raddr_req_ready", false,-1);
    tracep->declBit(c+300,"io_in2_raddr_req_valid", false,-1);
    tracep->declQuad(c+301,"io_in2_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+303,"io_in2_rdata_rep_valid", false,-1);
    tracep->declQuad(c+26,"io_in2_rdata_rep_bits_data", false,-1, 63,0);
    tracep->declBit(c+304,"io_in2_rdata_rep_bits_last", false,-1);
    tracep->declBit(c+305,"io_in2_wb_valid", false,-1);
    tracep->declBus(c+3519,"io_in2_wb_bits_breap", false,-1, 1,0);
    tracep->declBit(c+307,"io_out_raddr_req_ready", false,-1);
    tracep->declBit(c+306,"io_out_raddr_req_valid", false,-1);
    tracep->declQuad(c+308,"io_out_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBus(c+310,"io_out_raddr_req_bits_len", false,-1, 7,0);
    tracep->declBit(c+313,"io_out_waddr_req_ready", false,-1);
    tracep->declBit(c+312,"io_out_waddr_req_valid", false,-1);
    tracep->declQuad(c+314,"io_out_waddr_req_bits_addr", false,-1, 63,0);
    tracep->declBus(c+310,"io_out_waddr_req_bits_len", false,-1, 7,0);
    tracep->declBit(c+3486,"io_out_rdata_rep_ready", false,-1);
    tracep->declBit(c+311,"io_out_rdata_rep_valid", false,-1);
    tracep->declQuad(c+26,"io_out_rdata_rep_bits_data", false,-1, 63,0);
    tracep->declBit(c+304,"io_out_rdata_rep_bits_last", false,-1);
    tracep->declBit(c+317,"io_out_wdata_req_ready", false,-1);
    tracep->declBit(c+316,"io_out_wdata_req_valid", false,-1);
    tracep->declQuad(c+318,"io_out_wdata_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+320,"io_out_wdata_req_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+321,"io_out_wdata_req_bits_last", false,-1);
    tracep->declBit(c+323,"io_out_wb_ready", false,-1);
    tracep->declBit(c+322,"io_out_wb_valid", false,-1);
    tracep->declBus(c+3519,"io_out_wb_bits_breap", false,-1, 1,0);
    tracep->declBit(c+344,"state", false,-1);
    tracep->declBit(c+345,"choose_r", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("DIP ");
    tracep->declBit(c+108,"is_break", false,-1);
    tracep->declBus(c+173,"inst", false,-1, 31,0);
    tracep->declQuad(c+109,"rf_0", false,-1, 63,0);
    tracep->declQuad(c+111,"rf_1", false,-1, 63,0);
    tracep->declQuad(c+113,"rf_2", false,-1, 63,0);
    tracep->declQuad(c+115,"rf_3", false,-1, 63,0);
    tracep->declQuad(c+117,"rf_4", false,-1, 63,0);
    tracep->declQuad(c+119,"rf_5", false,-1, 63,0);
    tracep->declQuad(c+121,"rf_6", false,-1, 63,0);
    tracep->declQuad(c+123,"rf_7", false,-1, 63,0);
    tracep->declQuad(c+125,"rf_8", false,-1, 63,0);
    tracep->declQuad(c+127,"rf_9", false,-1, 63,0);
    tracep->declQuad(c+129,"rf_10", false,-1, 63,0);
    tracep->declQuad(c+131,"rf_11", false,-1, 63,0);
    tracep->declQuad(c+133,"rf_12", false,-1, 63,0);
    tracep->declQuad(c+135,"rf_13", false,-1, 63,0);
    tracep->declQuad(c+137,"rf_14", false,-1, 63,0);
    tracep->declQuad(c+139,"rf_15", false,-1, 63,0);
    tracep->declQuad(c+141,"rf_16", false,-1, 63,0);
    tracep->declQuad(c+143,"rf_17", false,-1, 63,0);
    tracep->declQuad(c+145,"rf_18", false,-1, 63,0);
    tracep->declQuad(c+147,"rf_19", false,-1, 63,0);
    tracep->declQuad(c+149,"rf_20", false,-1, 63,0);
    tracep->declQuad(c+151,"rf_21", false,-1, 63,0);
    tracep->declQuad(c+153,"rf_22", false,-1, 63,0);
    tracep->declQuad(c+155,"rf_23", false,-1, 63,0);
    tracep->declQuad(c+157,"rf_24", false,-1, 63,0);
    tracep->declQuad(c+159,"rf_25", false,-1, 63,0);
    tracep->declQuad(c+161,"rf_26", false,-1, 63,0);
    tracep->declQuad(c+163,"rf_27", false,-1, 63,0);
    tracep->declQuad(c+165,"rf_28", false,-1, 63,0);
    tracep->declQuad(c+167,"rf_29", false,-1, 63,0);
    tracep->declQuad(c+169,"rf_30", false,-1, 63,0);
    tracep->declQuad(c+171,"rf_31", false,-1, 63,0);
    tracep->declBit(c+176,"inst_valid", false,-1);
    tracep->declBit(c+179,"is_skip", false,-1);
    tracep->declQuad(c+174,"pc", false,-1, 63,0);
    tracep->declQuad(c+177,"dnpc", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+346+i*2,"rf", true,(i+0), 63,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+410+i*1,"IN", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EX ");
    tracep->declBit(c+3481,"clock", false,-1);
    tracep->declBit(c+3482,"reset", false,-1);
    tracep->declBit(c+68,"io_in_ready", false,-1);
    tracep->declBit(c+85,"io_in_valid", false,-1);
    tracep->declBus(c+86,"io_in_bits_ctrl_signal_src1Type", false,-1, 2,0);
    tracep->declBus(c+87,"io_in_bits_ctrl_signal_src2Type", false,-1, 2,0);
    tracep->declBus(c+88,"io_in_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+89,"io_in_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBus(c+90,"io_in_bits_ctrl_signal_rfSrc1", false,-1, 4,0);
    tracep->declBus(c+91,"io_in_bits_ctrl_signal_rfSrc2", false,-1, 4,0);
    tracep->declBit(c+92,"io_in_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+93,"io_in_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declBus(c+94,"io_in_bits_ctrl_signal_rfDest", false,-1, 4,0);
    tracep->declQuad(c+95,"io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+97,"io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+99,"io_in_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declQuad(c+101,"io_in_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+103,"io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+12,"io_src1", false,-1, 63,0);
    tracep->declQuad(c+14,"io_src2", false,-1, 63,0);
    tracep->declBit(c+1,"io_branchIO_is_branch", false,-1);
    tracep->declBit(c+67,"io_branchIO_is_jump", false,-1);
    tracep->declQuad(c+2,"io_branchIO_dnpc", false,-1, 63,0);
    tracep->declBit(c+104,"io_out_ready", false,-1);
    tracep->declBit(c+105,"io_out_valid", false,-1);
    tracep->declBus(c+88,"io_out_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+89,"io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+92,"io_out_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+93,"io_out_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+101,"io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+103,"io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+2,"io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+94,"io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+106,"io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+16,"io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+18,"io_out_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+20,"io_out_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+99,"io_out_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declBit(c+107,"io_is_break", false,-1);
    tracep->declBit(c+6,"io_is_flush", false,-1);
    tracep->declQuad(c+417,"CSRDIFF_mepc", false,-1, 63,0);
    tracep->declQuad(c+419,"CSRDIFF_mcause", false,-1, 63,0);
    tracep->declQuad(c+421,"CSRDIFF_mstatus", false,-1, 63,0);
    tracep->declQuad(c+423,"CSRDIFF_mtvec", false,-1, 63,0);
    tracep->declBit(c+3481,"mul_clock", false,-1);
    tracep->declBit(c+3482,"mul_reset", false,-1);
    tracep->declBit(c+425,"mul_io_in_valid", false,-1);
    tracep->declQuad(c+28,"mul_io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+30,"mul_io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declBit(c+426,"mul_io_out_valid", false,-1);
    tracep->declQuad(c+427,"mul_io_out_bits_result_result_lo", false,-1, 63,0);
    tracep->declBit(c+3481,"div_clock", false,-1);
    tracep->declBit(c+3482,"div_reset", false,-1);
    tracep->declBit(c+429,"div_io_in_valid", false,-1);
    tracep->declBit(c+430,"div_io_in_bits_ctrl_flow_div_signed", false,-1);
    tracep->declQuad(c+32,"div_io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+34,"div_io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declBit(c+431,"div_io_out_valid", false,-1);
    tracep->declQuad(c+36,"div_io_out_bits_result_quotient", false,-1, 63,0);
    tracep->declQuad(c+38,"div_io_out_bits_result_remainder", false,-1, 63,0);
    tracep->declBit(c+432,"is_mul", false,-1);
    tracep->declBit(c+433,"is_div", false,-1);
    tracep->declBit(c+434,"is_divw", false,-1);
    tracep->declBit(c+430,"is_div_sign", false,-1);
    tracep->declQuad(c+435,"mepc", false,-1, 63,0);
    tracep->declQuad(c+437,"mcause", false,-1, 63,0);
    tracep->declQuad(c+439,"mstatus", false,-1, 63,0);
    tracep->declQuad(c+441,"mtvec", false,-1, 63,0);
    tracep->declQuad(c+443,"mie", false,-1, 63,0);
    tracep->declQuad(c+445,"mip", false,-1, 63,0);
    tracep->declQuad(c+18,"src1", false,-1, 63,0);
    tracep->declQuad(c+20,"src2", false,-1, 63,0);
    tracep->declBit(c+40,"alu_result_sign", false,-1);
    tracep->declBit(c+447,"alu_result_sign_2", false,-1);
    tracep->declBit(c+41,"alu_result_sign_3", false,-1);
    tracep->declBit(c+42,"alu_result_sign_4", false,-1);
    tracep->declBit(c+43,"alu_result_sign_6", false,-1);
    tracep->declQuad(c+44,"alu_result", false,-1, 63,0);
    tracep->declBit(c+46,"shift_result_sign", false,-1);
    tracep->declBit(c+47,"shift_result_sign_1", false,-1);
    tracep->declBit(c+48,"shift_result_sign_2", false,-1);
    tracep->declBit(c+49,"shift_result_sign_3", false,-1);
    tracep->declBit(c+50,"div_io_in_bits_ctrl_data_src1_sign", false,-1);
    tracep->declBit(c+51,"div_io_in_bits_ctrl_data_src2_sign", false,-1);
    tracep->declQuad(c+52,"compar_result", false,-1, 63,0);
    tracep->declQuad(c+448,"jump_result", false,-1, 63,0);
    tracep->declQuad(c+54,"shift_result", false,-1, 63,0);
    tracep->declQuad(c+450,"branch_result", false,-1, 63,0);
    tracep->declBit(c+56,"branch_flag", false,-1);
    tracep->declQuad(c+452,"csr_data", false,-1, 63,0);
    tracep->declQuad(c+454,"CSRDIFF_io_mtvec_REG", false,-1, 63,0);
    tracep->declQuad(c+423,"CSRDIFF_io_mtvec_REG_1", false,-1, 63,0);
    tracep->declQuad(c+456,"CSRDIFF_io_mcause_REG", false,-1, 63,0);
    tracep->declQuad(c+419,"CSRDIFF_io_mcause_REG_1", false,-1, 63,0);
    tracep->declQuad(c+458,"CSRDIFF_io_mepc_REG", false,-1, 63,0);
    tracep->declQuad(c+417,"CSRDIFF_io_mepc_REG_1", false,-1, 63,0);
    tracep->declQuad(c+460,"CSRDIFF_io_mstatus_REG", false,-1, 63,0);
    tracep->declQuad(c+421,"CSRDIFF_io_mstatus_REG_1", false,-1, 63,0);
    tracep->pushNamePrefix("CSRDIFF ");
    tracep->declQuad(c+417,"mepc", false,-1, 63,0);
    tracep->declQuad(c+419,"mcause", false,-1, 63,0);
    tracep->declQuad(c+421,"mstatus", false,-1, 63,0);
    tracep->declQuad(c+423,"mtvec", false,-1, 63,0);
    for (int i = 0; i < 6; ++i) {
        tracep->declQuad(c+462+i*2,"inst_csr", true,(i+0), 63,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("div ");
    tracep->declBit(c+3481,"clock", false,-1);
    tracep->declBit(c+3482,"reset", false,-1);
    tracep->declBit(c+429,"io_in_valid", false,-1);
    tracep->declBit(c+430,"io_in_bits_ctrl_flow_div_signed", false,-1);
    tracep->declQuad(c+32,"io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+34,"io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declBit(c+431,"io_out_valid", false,-1);
    tracep->declQuad(c+36,"io_out_bits_result_quotient", false,-1, 63,0);
    tracep->declQuad(c+38,"io_out_bits_result_remainder", false,-1, 63,0);
    tracep->declArray(c+474,"dividend", false,-1, 127,0);
    tracep->declQuad(c+478,"divisor", false,-1, 63,0);
    tracep->declQuad(c+480,"S", false,-1, 63,0);
    tracep->declBus(c+482,"state", false,-1, 1,0);
    tracep->declBus(c+483,"count", false,-1, 5,0);
    tracep->declBit(c+484,"wrap_wrap", false,-1);
    tracep->declBit(c+485,"s", false,-1);
    tracep->declArray(c+486,"res_div", false,-1, 64,0);
    tracep->declQuad(c+489,"negative_s", false,-1, 63,0);
    tracep->declQuad(c+491,"negative_r", false,-1, 63,0);
    tracep->declQuad(c+57,"s_o", false,-1, 63,0);
    tracep->declQuad(c+59,"r_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mul ");
    tracep->declBit(c+3481,"clock", false,-1);
    tracep->declBit(c+3482,"reset", false,-1);
    tracep->declBit(c+425,"io_in_valid", false,-1);
    tracep->declQuad(c+28,"io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+30,"io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declBit(c+426,"io_out_valid", false,-1);
    tracep->declQuad(c+427,"io_out_bits_result_result_lo", false,-1, 63,0);
    tracep->declBit(c+3481,"mult_clock", false,-1);
    tracep->declBit(c+3482,"mult_reset", false,-1);
    tracep->declBit(c+425,"mult_io_in_valid", false,-1);
    tracep->declQuad(c+28,"mult_io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+30,"mult_io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declBit(c+426,"mult_io_out_valid", false,-1);
    tracep->declQuad(c+427,"mult_io_out_bits_result_result_lo", false,-1, 63,0);
    tracep->pushNamePrefix("mult ");
    tracep->declBit(c+3481,"clock", false,-1);
    tracep->declBit(c+3482,"reset", false,-1);
    tracep->declBit(c+425,"io_in_valid", false,-1);
    tracep->declQuad(c+28,"io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+30,"io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declBit(c+426,"io_out_valid", false,-1);
    tracep->declQuad(c+427,"io_out_bits_result_result_lo", false,-1, 63,0);
    tracep->declBus(c+493,"partial_io_y_3", false,-1, 2,0);
    tracep->declArray(c+494,"partial_io_x", false,-1, 131,0);
    tracep->declArray(c+499,"partial_io_p", false,-1, 131,0);
    tracep->declBit(c+504,"partial_io_c", false,-1);
    tracep->declArray(c+505,"multiplier", false,-1, 65,0);
    tracep->declArray(c+494,"multiplicand", false,-1, 131,0);
    tracep->declArray(c+508,"p", false,-1, 131,0);
    tracep->declBus(c+513,"count", false,-1, 6,0);
    tracep->declArray(c+514,"temp", false,-1, 131,0);
    tracep->declBit(c+519,"p_sign", false,-1);
    tracep->pushNamePrefix("partial ");
    tracep->declBus(c+493,"io_y_3", false,-1, 2,0);
    tracep->declArray(c+494,"io_x", false,-1, 131,0);
    tracep->declArray(c+499,"io_p", false,-1, 131,0);
    tracep->declBit(c+504,"io_c", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("ICACHE ");
    tracep->declBit(c+3481,"clock", false,-1);
    tracep->declBit(c+3482,"reset", false,-1);
    tracep->declBit(c+68,"io_in_addr_req_valid", false,-1);
    tracep->declQuad(c+3483,"io_in_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+68,"io_in_rdata_rep_ready", false,-1);
    tracep->declBit(c+4,"io_in_rdata_rep_valid", false,-1);
    tracep->declQuad(c+69,"io_in_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+6,"io_flush", false,-1);
    tracep->declBit(c+299,"io_out_raddr_req_ready", false,-1);
    tracep->declBit(c+300,"io_out_raddr_req_valid", false,-1);
    tracep->declQuad(c+301,"io_out_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+303,"io_out_rdata_rep_valid", false,-1);
    tracep->declQuad(c+26,"io_out_rdata_rep_bits_data", false,-1, 63,0);
    tracep->declBit(c+304,"io_out_rdata_rep_bits_last", false,-1);
    tracep->declBit(c+305,"io_out_wb_valid", false,-1);
    tracep->declBus(c+3519,"io_out_wb_bits_breap", false,-1, 1,0);
    tracep->declBit(c+3481,"Cache_data_clock", false,-1);
    tracep->declBit(c+520,"Cache_data_io_in_valid", false,-1);
    tracep->declQuad(c+3483,"Cache_data_io_in_addr", false,-1, 63,0);
    tracep->declQuad(c+521,"Cache_data_io_write_bus_addr", false,-1, 63,0);
    tracep->declBit(c+523,"Cache_data_io_write_bus_valid", false,-1);
    tracep->declBus(c+524,"Cache_data_io_write_bus_waymask", false,-1, 1,0);
    tracep->declArray(c+525,"Cache_data_io_write_bus_wdata", false,-1, 511,0);
    tracep->declBit(c+520,"Cache_data_io_out_valid", false,-1);
    tracep->declQuad(c+541,"Cache_data_io_out_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+543,"Cache_data_io_out_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+545,"Cache_data_io_out_bits_meat_valid_0", false,-1);
    tracep->declBit(c+546,"Cache_data_io_out_bits_meat_valid_1", false,-1);
    tracep->declArray(c+547,"Cache_data_io_out_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+563,"Cache_data_io_out_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+579,"Cache_data_io_out_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBus(c+581,"Cache_data_io_out_bits_ctrl_data_index", false,-1, 4,0);
    tracep->declBus(c+582,"Cache_data_io_out_bits_ctrl_data_offset", false,-1, 5,0);
    tracep->declBit(c+583,"Scanf_io_in_valid", false,-1);
    tracep->declQuad(c+541,"Scanf_io_in_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+543,"Scanf_io_in_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+545,"Scanf_io_in_bits_meat_valid_0", false,-1);
    tracep->declBit(c+546,"Scanf_io_in_bits_meat_valid_1", false,-1);
    tracep->declArray(c+547,"Scanf_io_in_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+563,"Scanf_io_in_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+579,"Scanf_io_in_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBus(c+581,"Scanf_io_in_bits_ctrl_data_index", false,-1, 4,0);
    tracep->declBit(c+584,"Scanf_io_out_bits_hit", false,-1);
    tracep->declArray(c+585,"Scanf_io_out_bits_data", false,-1, 511,0);
    tracep->declBus(c+581,"Scanf_io_out_bits_meta_ctrl_data_index", false,-1, 4,0);
    tracep->declBit(c+601,"Scanf_io_out_bits_hit_way_0", false,-1);
    tracep->declBit(c+602,"Scanf_io_out_bits_hit_way_1", false,-1);
    tracep->declQuad(c+541,"Scanf_io_out_bits_tag_0", false,-1, 52,0);
    tracep->declQuad(c+543,"Scanf_io_out_bits_tag_1", false,-1, 52,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+603+i*1,"lru", true,(i+0));
    }
    tracep->declBit(c+635,"lru_lru_w_MPORT_en", false,-1);
    tracep->declBus(c+636,"lru_lru_w_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+637,"lru_lru_w_MPORT_data", false,-1);
    tracep->declBit(c+3486,"lru_MPORT_data", false,-1);
    tracep->declBus(c+581,"lru_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+3486,"lru_MPORT_mask", false,-1);
    tracep->declBit(c+638,"lru_MPORT_en", false,-1);
    tracep->declBit(c+3528,"lru_MPORT_1_data", false,-1);
    tracep->declBus(c+581,"lru_MPORT_1_addr", false,-1, 4,0);
    tracep->declBit(c+3486,"lru_MPORT_1_mask", false,-1);
    tracep->declBit(c+639,"lru_MPORT_1_en", false,-1);
    tracep->declBit(c+3528,"lru_MPORT_2_data", false,-1);
    tracep->declBus(c+581,"lru_MPORT_2_addr", false,-1, 4,0);
    tracep->declBit(c+3486,"lru_MPORT_2_mask", false,-1);
    tracep->declBit(c+640,"lru_MPORT_2_en", false,-1);
    tracep->declBit(c+3486,"lru_MPORT_3_data", false,-1);
    tracep->declBus(c+581,"lru_MPORT_3_addr", false,-1, 4,0);
    tracep->declBit(c+3486,"lru_MPORT_3_mask", false,-1);
    tracep->declBit(c+641,"lru_MPORT_3_en", false,-1);
    tracep->declBit(c+635,"lru_lru_w_MPORT_en_pipe_0", false,-1);
    tracep->declBus(c+636,"lru_lru_w_MPORT_addr_pipe_0", false,-1, 4,0);
    tracep->declBus(c+642,"state", false,-1, 2,0);
    tracep->declBus(c+643,"read_state", false,-1, 1,0);
    tracep->declArray(c+644,"data_line_reg", false,-1, 511,0);
    tracep->declQuad(c+660,"mem_addr_reg", false,-1, 63,0);
    tracep->declBit(c+662,"lru_r", false,-1);
    tracep->declBit(c+601,"hit_way_0", false,-1);
    tracep->declBit(c+602,"hit_way_1", false,-1);
    tracep->declBit(c+637,"lru_w", false,-1);
    tracep->declQuad(c+663,"hit_data", false,-1, 63,0);
    tracep->declQuad(c+665,"mem_data", false,-1, 63,0);
    tracep->declBit(c+583,"Scanf_io_in_valid_REG", false,-1);
    tracep->pushNamePrefix("Cache_data ");
    tracep->declBit(c+3481,"clock", false,-1);
    tracep->declBit(c+520,"io_in_valid", false,-1);
    tracep->declQuad(c+3483,"io_in_addr", false,-1, 63,0);
    tracep->declQuad(c+521,"io_write_bus_addr", false,-1, 63,0);
    tracep->declBit(c+523,"io_write_bus_valid", false,-1);
    tracep->declBus(c+524,"io_write_bus_waymask", false,-1, 1,0);
    tracep->declArray(c+525,"io_write_bus_wdata", false,-1, 511,0);
    tracep->declBit(c+520,"io_out_valid", false,-1);
    tracep->declQuad(c+541,"io_out_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+543,"io_out_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+545,"io_out_bits_meat_valid_0", false,-1);
    tracep->declBit(c+546,"io_out_bits_meat_valid_1", false,-1);
    tracep->declArray(c+547,"io_out_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+563,"io_out_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+579,"io_out_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBus(c+581,"io_out_bits_ctrl_data_index", false,-1, 4,0);
    tracep->declBus(c+582,"io_out_bits_ctrl_data_offset", false,-1, 5,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declArray(c+667+i*16,"data_0", true,(i+0), 511,0);
    }
    tracep->declBit(c+1179,"data_0_data_w_en", false,-1);
    tracep->declBus(c+1180,"data_0_data_w_addr", false,-1, 4,0);
    tracep->declArray(c+547,"data_0_data_w_data", false,-1, 511,0);
    tracep->declArray(c+525,"data_0_MPORT_data", false,-1, 511,0);
    tracep->declBus(c+1181,"data_0_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+1182,"data_0_MPORT_mask", false,-1);
    tracep->declBit(c+523,"data_0_MPORT_en", false,-1);
    tracep->declBit(c+1179,"data_0_data_w_en_pipe_0", false,-1);
    tracep->declBus(c+1180,"data_0_data_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declArray(c+1183+i*16,"data_1", true,(i+0), 511,0);
    }
    tracep->declBit(c+1695,"data_1_data_w_en", false,-1);
    tracep->declBus(c+1180,"data_1_data_w_addr", false,-1, 4,0);
    tracep->declArray(c+563,"data_1_data_w_data", false,-1, 511,0);
    tracep->declArray(c+525,"data_1_MPORT_data", false,-1, 511,0);
    tracep->declBus(c+1181,"data_1_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+662,"data_1_MPORT_mask", false,-1);
    tracep->declBit(c+523,"data_1_MPORT_en", false,-1);
    tracep->declBit(c+1695,"data_1_data_w_en_pipe_0", false,-1);
    tracep->declBus(c+1180,"data_1_data_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+1696+i*2,"TAG_0", true,(i+0), 52,0);
    }
    tracep->declBit(c+1760,"TAG_0_tag_w_en", false,-1);
    tracep->declBus(c+1180,"TAG_0_tag_w_addr", false,-1, 4,0);
    tracep->declQuad(c+541,"TAG_0_tag_w_data", false,-1, 52,0);
    tracep->declQuad(c+1761,"TAG_0_MPORT_1_data", false,-1, 52,0);
    tracep->declBus(c+1181,"TAG_0_MPORT_1_addr", false,-1, 4,0);
    tracep->declBit(c+1182,"TAG_0_MPORT_1_mask", false,-1);
    tracep->declBit(c+523,"TAG_0_MPORT_1_en", false,-1);
    tracep->declBit(c+1760,"TAG_0_tag_w_en_pipe_0", false,-1);
    tracep->declBus(c+1180,"TAG_0_tag_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+1763+i*2,"TAG_1", true,(i+0), 52,0);
    }
    tracep->declBit(c+1827,"TAG_1_tag_w_en", false,-1);
    tracep->declBus(c+1180,"TAG_1_tag_w_addr", false,-1, 4,0);
    tracep->declQuad(c+543,"TAG_1_tag_w_data", false,-1, 52,0);
    tracep->declQuad(c+1761,"TAG_1_MPORT_1_data", false,-1, 52,0);
    tracep->declBus(c+1181,"TAG_1_MPORT_1_addr", false,-1, 4,0);
    tracep->declBit(c+662,"TAG_1_MPORT_1_mask", false,-1);
    tracep->declBit(c+523,"TAG_1_MPORT_1_en", false,-1);
    tracep->declBit(c+1827,"TAG_1_tag_w_en_pipe_0", false,-1);
    tracep->declBus(c+1180,"TAG_1_tag_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+1828+i*1,"data_valid_0", true,(i+0));
    }
    tracep->declBit(c+1860,"data_valid_0_valid_w_en", false,-1);
    tracep->declBus(c+1180,"data_valid_0_valid_w_addr", false,-1, 4,0);
    tracep->declBit(c+545,"data_valid_0_valid_w_data", false,-1);
    tracep->declBit(c+3486,"data_valid_0_MPORT_2_data", false,-1);
    tracep->declBus(c+1181,"data_valid_0_MPORT_2_addr", false,-1, 4,0);
    tracep->declBit(c+1182,"data_valid_0_MPORT_2_mask", false,-1);
    tracep->declBit(c+523,"data_valid_0_MPORT_2_en", false,-1);
    tracep->declBit(c+1860,"data_valid_0_valid_w_en_pipe_0", false,-1);
    tracep->declBus(c+1180,"data_valid_0_valid_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+1861+i*1,"data_valid_1", true,(i+0));
    }
    tracep->declBit(c+1893,"data_valid_1_valid_w_en", false,-1);
    tracep->declBus(c+1180,"data_valid_1_valid_w_addr", false,-1, 4,0);
    tracep->declBit(c+546,"data_valid_1_valid_w_data", false,-1);
    tracep->declBit(c+3486,"data_valid_1_MPORT_2_data", false,-1);
    tracep->declBus(c+1181,"data_valid_1_MPORT_2_addr", false,-1, 4,0);
    tracep->declBit(c+662,"data_valid_1_MPORT_2_mask", false,-1);
    tracep->declBit(c+523,"data_valid_1_MPORT_2_en", false,-1);
    tracep->declBit(c+1893,"data_valid_1_valid_w_en_pipe_0", false,-1);
    tracep->declBus(c+1180,"data_valid_1_valid_w_addr_pipe_0", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Scanf ");
    tracep->declBit(c+583,"io_in_valid", false,-1);
    tracep->declQuad(c+541,"io_in_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+543,"io_in_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+545,"io_in_bits_meat_valid_0", false,-1);
    tracep->declBit(c+546,"io_in_bits_meat_valid_1", false,-1);
    tracep->declArray(c+547,"io_in_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+563,"io_in_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+579,"io_in_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBus(c+581,"io_in_bits_ctrl_data_index", false,-1, 4,0);
    tracep->declBit(c+584,"io_out_bits_hit", false,-1);
    tracep->declArray(c+585,"io_out_bits_data", false,-1, 511,0);
    tracep->declBus(c+581,"io_out_bits_meta_ctrl_data_index", false,-1, 4,0);
    tracep->declBit(c+601,"io_out_bits_hit_way_0", false,-1);
    tracep->declBit(c+602,"io_out_bits_hit_way_1", false,-1);
    tracep->declQuad(c+541,"io_out_bits_tag_0", false,-1, 52,0);
    tracep->declQuad(c+543,"io_out_bits_tag_1", false,-1, 52,0);
    tracep->declBit(c+601,"hit_way_0_result", false,-1);
    tracep->declBit(c+602,"hit_way_1_result", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ID ");
    tracep->declBit(c+68,"io_in_ready", false,-1);
    tracep->declBit(c+71,"io_in_valid", false,-1);
    tracep->declQuad(c+72,"io_in_bits_PC", false,-1, 63,0);
    tracep->declBus(c+74,"io_in_bits_Inst", false,-1, 31,0);
    tracep->declQuad(c+7,"io_REG1", false,-1, 63,0);
    tracep->declQuad(c+9,"io_REG2", false,-1, 63,0);
    tracep->declBit(c+6,"io_flush", false,-1);
    tracep->declBit(c+68,"io_out_ready", false,-1);
    tracep->declBit(c+71,"io_out_valid", false,-1);
    tracep->declBus(c+75,"io_out_bits_ctrl_signal_src1Type", false,-1, 2,0);
    tracep->declBus(c+76,"io_out_bits_ctrl_signal_src2Type", false,-1, 2,0);
    tracep->declBus(c+77,"io_out_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+11,"io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBus(c+78,"io_out_bits_ctrl_signal_rfSrc1", false,-1, 4,0);
    tracep->declBus(c+79,"io_out_bits_ctrl_signal_rfSrc2", false,-1, 4,0);
    tracep->declBit(c+80,"io_out_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+81,"io_out_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declBus(c+82,"io_out_bits_ctrl_signal_rfDest", false,-1, 4,0);
    tracep->declQuad(c+7,"io_out_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+9,"io_out_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+83,"io_out_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declQuad(c+72,"io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+74,"io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declBus(c+82,"rd", false,-1, 4,0);
    tracep->declBus(c+1894,"Inst_decode_0", false,-1, 3,0);
    tracep->declBus(c+81,"Inst_decode_2", false,-1, 6,0);
    tracep->declBit(c+1895,"Inst_decode_3", false,-1);
    tracep->declBus(c+1896,"srctype1", false,-1, 1,0);
    tracep->declBit(c+1897,"srctype2", false,-1);
    tracep->declBit(c+1898,"sign", false,-1);
    tracep->declBit(c+1899,"sign_1", false,-1);
    tracep->declBit(c+1898,"sign_2", false,-1);
    tracep->declBit(c+1898,"sign_3", false,-1);
    tracep->declBit(c+1898,"sign_4", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IF ");
    tracep->declBit(c+3481,"clock", false,-1);
    tracep->declBit(c+3482,"reset", false,-1);
    tracep->declBit(c+1,"io_branch_io_is_branch", false,-1);
    tracep->declBit(c+67,"io_branch_io_is_jump", false,-1);
    tracep->declQuad(c+2,"io_branch_io_dnpc", false,-1, 63,0);
    tracep->declBit(c+68,"io_cache_req_addr_req_valid", false,-1);
    tracep->declQuad(c+3483,"io_cache_req_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+68,"io_cache_req_rdata_rep_ready", false,-1);
    tracep->declBit(c+4,"io_cache_req_rdata_rep_valid", false,-1);
    tracep->declQuad(c+69,"io_cache_req_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+68,"io_out_ready", false,-1);
    tracep->declBit(c+4,"io_out_valid", false,-1);
    tracep->declQuad(c+3483,"io_out_bits_PC", false,-1, 63,0);
    tracep->declBus(c+5,"io_out_bits_Inst", false,-1, 31,0);
    tracep->declBit(c+6,"io_flush", false,-1);
    tracep->declQuad(c+1900,"temp", false,-1, 63,0);
    tracep->declBus(c+1902,"inst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MEM ");
    tracep->declBit(c+104,"io_in_ready", false,-1);
    tracep->declBit(c+252,"io_in_valid", false,-1);
    tracep->declBus(c+253,"io_in_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+254,"io_in_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+255,"io_in_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+256,"io_in_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+257,"io_in_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+259,"io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+260,"io_in_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+262,"io_in_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declQuad(c+263,"io_in_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+265,"io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+267,"io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+269,"io_in_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declBit(c+3486,"io_out_ready", false,-1);
    tracep->declBit(c+271,"io_out_valid", false,-1);
    tracep->declBit(c+272,"io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+255,"io_out_bits_ctrl_signal_rfWen", false,-1);
    tracep->declQuad(c+257,"io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+259,"io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+260,"io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBit(c+273,"io_out_bits_ctrl_flow_skip", false,-1);
    tracep->declBus(c+262,"io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+274,"io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+22,"io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declBit(c+275,"io_cache_io_addr_req_valid", false,-1);
    tracep->declQuad(c+276,"io_cache_io_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+275,"io_cache_io_addr_req_bits_ce", false,-1);
    tracep->declBit(c+278,"io_cache_io_addr_req_bits_we", false,-1);
    tracep->declBit(c+279,"io_cache_io_rdata_rep_valid", false,-1);
    tracep->declQuad(c+24,"io_cache_io_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+280,"io_cache_io_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+282,"io_cache_io_wdata_req_bits_wmask", false,-1, 7,0);
    tracep->declBit(c+283,"io_cache_io_wdata_rep", false,-1);
    tracep->declQuad(c+276,"addr_temp", false,-1, 63,0);
    tracep->declBit(c+61,"mem_result_sign", false,-1);
    tracep->declBit(c+62,"mem_result_sign_1", false,-1);
    tracep->declBit(c+63,"mem_result_sign_2", false,-1);
    tracep->declBit(c+64,"mem_result_sign_3", false,-1);
    tracep->declQuad(c+65,"mem_result", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MMEM ");
    tracep->declBus(c+3529,"BUS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+3529,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+3481,"clk", false,-1);
    tracep->declBit(c+3482,"reset", false,-1);
    tracep->declBit(c+306,"ar_valid", false,-1);
    tracep->declBit(c+307,"ar_ready", false,-1);
    tracep->declBus(c+3520,"ar_id", false,-1, 3,0);
    tracep->declBus(c+310,"ar_len", false,-1, 7,0);
    tracep->declBus(c+3521,"ar_size", false,-1, 2,0);
    tracep->declQuad(c+308,"ar_addr", false,-1, 63,0);
    tracep->declBus(c+3522,"ar_prot", false,-1, 2,0);
    tracep->declBus(c+3523,"ar_burst", false,-1, 1,0);
    tracep->declBus(c+3519,"ar_lock", false,-1, 1,0);
    tracep->declBus(c+3524,"ar_cache", false,-1, 3,0);
    tracep->declBit(c+312,"aw_valid", false,-1);
    tracep->declBit(c+313,"aw_ready", false,-1);
    tracep->declBus(c+3520,"aw_id", false,-1, 3,0);
    tracep->declBus(c+310,"aw_len", false,-1, 7,0);
    tracep->declBus(c+3521,"aw_size", false,-1, 2,0);
    tracep->declQuad(c+314,"aw_addr", false,-1, 63,0);
    tracep->declBus(c+3522,"aw_prot", false,-1, 2,0);
    tracep->declBus(c+3523,"aw_burst", false,-1, 1,0);
    tracep->declBus(c+3519,"aw_lock", false,-1, 1,0);
    tracep->declBus(c+3524,"aw_cache", false,-1, 3,0);
    tracep->declBit(c+311,"rd_valid", false,-1);
    tracep->declBit(c+3486,"rd_ready", false,-1);
    tracep->declBus(c+3525,"rd_id", false,-1, 3,0);
    tracep->declQuad(c+26,"rd_data", false,-1, 63,0);
    tracep->declBus(c+3526,"rd_resp", false,-1, 1,0);
    tracep->declBit(c+304,"rd_last", false,-1);
    tracep->declBit(c+316,"wd_valid", false,-1);
    tracep->declBit(c+317,"wd_ready", false,-1);
    tracep->declBus(c+3520,"wd_id", false,-1, 3,0);
    tracep->declQuad(c+318,"wd_data", false,-1, 63,0);
    tracep->declBus(c+320,"wstrb", false,-1, 7,0);
    tracep->declBit(c+321,"wd_last", false,-1);
    tracep->declBit(c+322,"wr_valid", false,-1);
    tracep->declBit(c+323,"wr_ready", false,-1);
    tracep->declBus(c+3527,"wr_id", false,-1, 3,0);
    tracep->declBus(c+3519,"wr_breap", false,-1, 1,0);
    tracep->declBus(c+3519,"idle", false,-1, 1,0);
    tracep->declBus(c+3523,"ready", false,-1, 1,0);
    tracep->declBus(c+3530,"data_transform", false,-1, 1,0);
    tracep->declBus(c+1903,"read_state", false,-1, 1,0);
    tracep->declBus(c+1904,"write_state", false,-1, 1,0);
    tracep->declBus(c+1905,"read_next_state", false,-1, 1,0);
    tracep->declBus(c+1906,"write_next_state", false,-1, 1,0);
    tracep->declQuad(c+26,"rdata", false,-1, 63,0);
    tracep->declQuad(c+1907,"write_addr_buffer", false,-1, 63,0);
    tracep->declQuad(c+1909,"read_addr_buffer", false,-1, 63,0);
    tracep->declBus(c+1911,"read_count", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MMIO ");
    tracep->declBit(c+3481,"clock", false,-1);
    tracep->declBit(c+3482,"reset", false,-1);
    tracep->declBit(c+275,"io_in_addr_req_valid", false,-1);
    tracep->declQuad(c+276,"io_in_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+275,"io_in_addr_req_bits_ce", false,-1);
    tracep->declBit(c+278,"io_in_addr_req_bits_we", false,-1);
    tracep->declBit(c+279,"io_in_rdata_rep_valid", false,-1);
    tracep->declQuad(c+24,"io_in_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+280,"io_in_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+282,"io_in_wdata_req_bits_wmask", false,-1, 7,0);
    tracep->declBit(c+283,"io_in_wdata_rep", false,-1);
    tracep->declBit(c+324,"io_out_raddr_req_ready", false,-1);
    tracep->declBit(c+325,"io_out_raddr_req_valid", false,-1);
    tracep->declQuad(c+326,"io_out_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBus(c+328,"io_out_raddr_req_bits_len", false,-1, 7,0);
    tracep->declBit(c+329,"io_out_waddr_req_ready", false,-1);
    tracep->declBit(c+330,"io_out_waddr_req_valid", false,-1);
    tracep->declQuad(c+331,"io_out_waddr_req_bits_addr", false,-1, 63,0);
    tracep->declBus(c+328,"io_out_waddr_req_bits_len", false,-1, 7,0);
    tracep->declBit(c+3486,"io_out_rdata_rep_ready", false,-1);
    tracep->declBit(c+333,"io_out_rdata_rep_valid", false,-1);
    tracep->declQuad(c+26,"io_out_rdata_rep_bits_data", false,-1, 63,0);
    tracep->declBit(c+304,"io_out_rdata_rep_bits_last", false,-1);
    tracep->declBit(c+334,"io_out_wdata_req_ready", false,-1);
    tracep->declBit(c+335,"io_out_wdata_req_valid", false,-1);
    tracep->declQuad(c+336,"io_out_wdata_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+338,"io_out_wdata_req_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+339,"io_out_wdata_req_bits_last", false,-1);
    tracep->declBit(c+340,"io_out_wb_ready", false,-1);
    tracep->declBit(c+341,"io_out_wb_valid", false,-1);
    tracep->declBus(c+3519,"io_out_wb_bits_breap", false,-1, 1,0);
    tracep->declBit(c+3481,"DCACHE_clock", false,-1);
    tracep->declBit(c+3482,"DCACHE_reset", false,-1);
    tracep->declBit(c+1912,"DCACHE_io_in_addr_req_valid", false,-1);
    tracep->declQuad(c+276,"DCACHE_io_in_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+278,"DCACHE_io_in_addr_req_bits_we", false,-1);
    tracep->declBit(c+1913,"DCACHE_io_in_rdata_rep_ready", false,-1);
    tracep->declBit(c+1914,"DCACHE_io_in_rdata_rep_valid", false,-1);
    tracep->declQuad(c+1915,"DCACHE_io_in_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+280,"DCACHE_io_in_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+282,"DCACHE_io_in_wdata_req_bits_wmask", false,-1, 7,0);
    tracep->declBit(c+1917,"DCACHE_io_in_wdata_rep", false,-1);
    tracep->declBit(c+1918,"DCACHE_io_out_raddr_req_ready", false,-1);
    tracep->declBit(c+1919,"DCACHE_io_out_raddr_req_valid", false,-1);
    tracep->declQuad(c+1920,"DCACHE_io_out_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+1922,"DCACHE_io_out_waddr_req_ready", false,-1);
    tracep->declBit(c+1923,"DCACHE_io_out_waddr_req_valid", false,-1);
    tracep->declQuad(c+1924,"DCACHE_io_out_waddr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+1926,"DCACHE_io_out_rdata_rep_valid", false,-1);
    tracep->declQuad(c+26,"DCACHE_io_out_rdata_rep_bits_data", false,-1, 63,0);
    tracep->declBit(c+304,"DCACHE_io_out_rdata_rep_bits_last", false,-1);
    tracep->declBit(c+1927,"DCACHE_io_out_wdata_req_ready", false,-1);
    tracep->declBit(c+1928,"DCACHE_io_out_wdata_req_valid", false,-1);
    tracep->declQuad(c+1929,"DCACHE_io_out_wdata_req_bits_data", false,-1, 63,0);
    tracep->declBit(c+1931,"DCACHE_io_out_wdata_req_bits_last", false,-1);
    tracep->declBit(c+1932,"DCACHE_io_out_wb_valid", false,-1);
    tracep->declBus(c+3519,"DCACHE_io_out_wb_bits_breap", false,-1, 1,0);
    tracep->declBit(c+3481,"birdge_clock", false,-1);
    tracep->declBit(c+3482,"birdge_reset", false,-1);
    tracep->declBit(c+1933,"birdge_io_in_addr_req_valid", false,-1);
    tracep->declQuad(c+276,"birdge_io_in_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+275,"birdge_io_in_addr_req_bits_ce", false,-1);
    tracep->declBit(c+278,"birdge_io_in_addr_req_bits_we", false,-1);
    tracep->declBit(c+1934,"birdge_io_in_rdata_rep_ready", false,-1);
    tracep->declBit(c+1935,"birdge_io_in_rdata_rep_valid", false,-1);
    tracep->declQuad(c+26,"birdge_io_in_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+1934,"birdge_io_in_wdata_req_valid", false,-1);
    tracep->declQuad(c+280,"birdge_io_in_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+282,"birdge_io_in_wdata_req_bits_wmask", false,-1, 7,0);
    tracep->declBit(c+1936,"birdge_io_in_wdata_rep", false,-1);
    tracep->declBit(c+1937,"birdge_io_out_raddr_req_ready", false,-1);
    tracep->declBit(c+1938,"birdge_io_out_raddr_req_valid", false,-1);
    tracep->declQuad(c+276,"birdge_io_out_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+1939,"birdge_io_out_waddr_req_ready", false,-1);
    tracep->declBit(c+1940,"birdge_io_out_waddr_req_valid", false,-1);
    tracep->declQuad(c+276,"birdge_io_out_waddr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+1934,"birdge_io_out_rdata_rep_ready", false,-1);
    tracep->declBit(c+1935,"birdge_io_out_rdata_rep_valid", false,-1);
    tracep->declQuad(c+26,"birdge_io_out_rdata_rep_bits_data", false,-1, 63,0);
    tracep->declBit(c+304,"birdge_io_out_rdata_rep_bits_last", false,-1);
    tracep->declBit(c+1941,"birdge_io_out_wdata_req_ready", false,-1);
    tracep->declBit(c+1934,"birdge_io_out_wdata_req_valid", false,-1);
    tracep->declQuad(c+280,"birdge_io_out_wdata_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+282,"birdge_io_out_wdata_req_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+1942,"birdge_io_out_wdata_req_bits_last", false,-1);
    tracep->declBit(c+1943,"birdge_io_out_wb_ready", false,-1);
    tracep->declBit(c+1936,"birdge_io_out_wb_valid", false,-1);
    tracep->declBus(c+3519,"birdge_io_out_wb_bits_breap", false,-1, 1,0);
    tracep->pushNamePrefix("DCACHE ");
    tracep->declBit(c+3481,"clock", false,-1);
    tracep->declBit(c+3482,"reset", false,-1);
    tracep->declBit(c+1912,"io_in_addr_req_valid", false,-1);
    tracep->declQuad(c+276,"io_in_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+278,"io_in_addr_req_bits_we", false,-1);
    tracep->declBit(c+1913,"io_in_rdata_rep_ready", false,-1);
    tracep->declBit(c+1914,"io_in_rdata_rep_valid", false,-1);
    tracep->declQuad(c+1915,"io_in_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+280,"io_in_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+282,"io_in_wdata_req_bits_wmask", false,-1, 7,0);
    tracep->declBit(c+1917,"io_in_wdata_rep", false,-1);
    tracep->declBit(c+1918,"io_out_raddr_req_ready", false,-1);
    tracep->declBit(c+1919,"io_out_raddr_req_valid", false,-1);
    tracep->declQuad(c+1920,"io_out_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+1922,"io_out_waddr_req_ready", false,-1);
    tracep->declBit(c+1923,"io_out_waddr_req_valid", false,-1);
    tracep->declQuad(c+1924,"io_out_waddr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+1926,"io_out_rdata_rep_valid", false,-1);
    tracep->declQuad(c+26,"io_out_rdata_rep_bits_data", false,-1, 63,0);
    tracep->declBit(c+304,"io_out_rdata_rep_bits_last", false,-1);
    tracep->declBit(c+1927,"io_out_wdata_req_ready", false,-1);
    tracep->declBit(c+1928,"io_out_wdata_req_valid", false,-1);
    tracep->declQuad(c+1929,"io_out_wdata_req_bits_data", false,-1, 63,0);
    tracep->declBit(c+1931,"io_out_wdata_req_bits_last", false,-1);
    tracep->declBit(c+1932,"io_out_wb_valid", false,-1);
    tracep->declBus(c+3519,"io_out_wb_bits_breap", false,-1, 1,0);
    tracep->declBit(c+3481,"Cache_data_clock", false,-1);
    tracep->declBit(c+1944,"Cache_data_io_in_valid", false,-1);
    tracep->declQuad(c+276,"Cache_data_io_in_addr", false,-1, 63,0);
    tracep->declQuad(c+1945,"Cache_data_io_write_bus_addr", false,-1, 63,0);
    tracep->declBit(c+1947,"Cache_data_io_write_bus_valid", false,-1);
    tracep->declBus(c+1948,"Cache_data_io_write_bus_waymask", false,-1, 1,0);
    tracep->declArray(c+1949,"Cache_data_io_write_bus_wdata", false,-1, 511,0);
    tracep->declBit(c+1944,"Cache_data_io_out_valid", false,-1);
    tracep->declQuad(c+1965,"Cache_data_io_out_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+1967,"Cache_data_io_out_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+1969,"Cache_data_io_out_bits_meat_valid_0", false,-1);
    tracep->declBit(c+1970,"Cache_data_io_out_bits_meat_valid_1", false,-1);
    tracep->declArray(c+1971,"Cache_data_io_out_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+1987,"Cache_data_io_out_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+2003,"Cache_data_io_out_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBus(c+2005,"Cache_data_io_out_bits_ctrl_data_index", false,-1, 4,0);
    tracep->declBus(c+2006,"Cache_data_io_out_bits_ctrl_data_offset", false,-1, 5,0);
    tracep->declBit(c+2007,"Scanf_io_in_valid", false,-1);
    tracep->declQuad(c+1965,"Scanf_io_in_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+1967,"Scanf_io_in_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+1969,"Scanf_io_in_bits_meat_valid_0", false,-1);
    tracep->declBit(c+1970,"Scanf_io_in_bits_meat_valid_1", false,-1);
    tracep->declArray(c+1971,"Scanf_io_in_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+1987,"Scanf_io_in_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+2003,"Scanf_io_in_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBus(c+2005,"Scanf_io_in_bits_ctrl_data_index", false,-1, 4,0);
    tracep->declBit(c+2008,"Scanf_io_out_bits_hit", false,-1);
    tracep->declArray(c+2009,"Scanf_io_out_bits_data", false,-1, 511,0);
    tracep->declBus(c+2005,"Scanf_io_out_bits_meta_ctrl_data_index", false,-1, 4,0);
    tracep->declBit(c+2025,"Scanf_io_out_bits_hit_way_0", false,-1);
    tracep->declBit(c+2026,"Scanf_io_out_bits_hit_way_1", false,-1);
    tracep->declQuad(c+1965,"Scanf_io_out_bits_tag_0", false,-1, 52,0);
    tracep->declQuad(c+1967,"Scanf_io_out_bits_tag_1", false,-1, 52,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+2027+i*1,"lru", true,(i+0));
    }
    tracep->declBit(c+2059,"lru_lru_w_MPORT_en", false,-1);
    tracep->declBus(c+2060,"lru_lru_w_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+2061,"lru_lru_w_MPORT_data", false,-1);
    tracep->declBit(c+3486,"lru_MPORT_data", false,-1);
    tracep->declBus(c+2005,"lru_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+3486,"lru_MPORT_mask", false,-1);
    tracep->declBit(c+2062,"lru_MPORT_en", false,-1);
    tracep->declBit(c+3528,"lru_MPORT_1_data", false,-1);
    tracep->declBus(c+2005,"lru_MPORT_1_addr", false,-1, 4,0);
    tracep->declBit(c+3486,"lru_MPORT_1_mask", false,-1);
    tracep->declBit(c+2063,"lru_MPORT_1_en", false,-1);
    tracep->declBit(c+3528,"lru_MPORT_2_data", false,-1);
    tracep->declBus(c+2005,"lru_MPORT_2_addr", false,-1, 4,0);
    tracep->declBit(c+3486,"lru_MPORT_2_mask", false,-1);
    tracep->declBit(c+2064,"lru_MPORT_2_en", false,-1);
    tracep->declBit(c+3486,"lru_MPORT_3_data", false,-1);
    tracep->declBus(c+2005,"lru_MPORT_3_addr", false,-1, 4,0);
    tracep->declBit(c+3486,"lru_MPORT_3_mask", false,-1);
    tracep->declBit(c+2065,"lru_MPORT_3_en", false,-1);
    tracep->declBit(c+2059,"lru_lru_w_MPORT_en_pipe_0", false,-1);
    tracep->declBus(c+2060,"lru_lru_w_MPORT_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+2066+i*1,"dirt_0", true,(i+0));
    }
    tracep->declBit(c+2098,"dirt_0_dirt_w_en", false,-1);
    tracep->declBus(c+2099,"dirt_0_dirt_w_addr", false,-1, 4,0);
    tracep->declBit(c+2100,"dirt_0_dirt_w_data", false,-1);
    tracep->declBit(c+3486,"dirt_0_MPORT_4_data", false,-1);
    tracep->declBus(c+2005,"dirt_0_MPORT_4_addr", false,-1, 4,0);
    tracep->declBit(c+2101,"dirt_0_MPORT_4_mask", false,-1);
    tracep->declBit(c+2102,"dirt_0_MPORT_4_en", false,-1);
    tracep->declBit(c+2098,"dirt_0_dirt_w_en_pipe_0", false,-1);
    tracep->declBus(c+2099,"dirt_0_dirt_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+2103+i*1,"dirt_1", true,(i+0));
    }
    tracep->declBit(c+2135,"dirt_1_dirt_w_en", false,-1);
    tracep->declBus(c+2099,"dirt_1_dirt_w_addr", false,-1, 4,0);
    tracep->declBit(c+2136,"dirt_1_dirt_w_data", false,-1);
    tracep->declBit(c+3486,"dirt_1_MPORT_4_data", false,-1);
    tracep->declBus(c+2005,"dirt_1_MPORT_4_addr", false,-1, 4,0);
    tracep->declBit(c+2137,"dirt_1_MPORT_4_mask", false,-1);
    tracep->declBit(c+2102,"dirt_1_MPORT_4_en", false,-1);
    tracep->declBit(c+2135,"dirt_1_dirt_w_en_pipe_0", false,-1);
    tracep->declBus(c+2099,"dirt_1_dirt_w_addr_pipe_0", false,-1, 4,0);
    tracep->declBus(c+2138,"state", false,-1, 2,0);
    tracep->declBus(c+2139,"read_state", false,-1, 1,0);
    tracep->declBus(c+2140,"write_state", false,-1, 1,0);
    tracep->declArray(c+2141,"data_line_reg", false,-1, 511,0);
    tracep->declQuad(c+2157,"mem_addr_reg", false,-1, 63,0);
    tracep->declBit(c+2159,"lru_r", false,-1);
    tracep->declBus(c+2160,"count_write", false,-1, 3,0);
    tracep->declQuad(c+2161,"mem_write_addr_reg", false,-1, 63,0);
    tracep->declArray(c+2163,"mem_write_data_reg", false,-1, 511,0);
    tracep->declBit(c+2061,"lru_w", false,-1);
    tracep->declBit(c+2025,"hit_way_0", false,-1);
    tracep->declBit(c+2026,"hit_way_1", false,-1);
    tracep->declQuad(c+2179,"hit_data", false,-1, 63,0);
    tracep->declQuad(c+2181,"mem_data", false,-1, 63,0);
    tracep->declBit(c+2007,"Scanf_io_in_valid_REG", false,-1);
    tracep->declQuad(c+2183,"wmaskextend_Genmask", false,-1, 63,0);
    tracep->declQuad(c+2185,"wmaskextend_lo_lo_lo", false,-1, 63,0);
    tracep->declArray(c+2187,"wmaskextend_lo_lo", false,-1, 127,0);
    tracep->declQuad(c+2191,"wmaskextend_lo_hi_lo", false,-1, 63,0);
    tracep->declArray(c+2193,"wmaskextend_lo", false,-1, 255,0);
    tracep->declQuad(c+2201,"wmaskextend_hi_lo_lo", false,-1, 63,0);
    tracep->declArray(c+2203,"wmaskextend_hi_lo", false,-1, 127,0);
    tracep->declQuad(c+2207,"wmaskextend_hi_hi_lo", false,-1, 63,0);
    tracep->declArray(c+2209,"wmaskextend_hi", false,-1, 255,0);
    tracep->declArray(c+2217,"wmaskextend", false,-1, 511,0);
    tracep->declArray(c+2233,"wdata_extend", false,-1, 511,0);
    tracep->declBus(c+1948,"waymask", false,-1, 1,0);
    tracep->pushNamePrefix("Cache_data ");
    tracep->declBit(c+3481,"clock", false,-1);
    tracep->declBit(c+1944,"io_in_valid", false,-1);
    tracep->declQuad(c+276,"io_in_addr", false,-1, 63,0);
    tracep->declQuad(c+1945,"io_write_bus_addr", false,-1, 63,0);
    tracep->declBit(c+1947,"io_write_bus_valid", false,-1);
    tracep->declBus(c+1948,"io_write_bus_waymask", false,-1, 1,0);
    tracep->declArray(c+1949,"io_write_bus_wdata", false,-1, 511,0);
    tracep->declBit(c+1944,"io_out_valid", false,-1);
    tracep->declQuad(c+1965,"io_out_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+1967,"io_out_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+1969,"io_out_bits_meat_valid_0", false,-1);
    tracep->declBit(c+1970,"io_out_bits_meat_valid_1", false,-1);
    tracep->declArray(c+1971,"io_out_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+1987,"io_out_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+2003,"io_out_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBus(c+2005,"io_out_bits_ctrl_data_index", false,-1, 4,0);
    tracep->declBus(c+2006,"io_out_bits_ctrl_data_offset", false,-1, 5,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declArray(c+2249+i*16,"data_0", true,(i+0), 511,0);
    }
    tracep->declBit(c+2761,"data_0_data_w_en", false,-1);
    tracep->declBus(c+2762,"data_0_data_w_addr", false,-1, 4,0);
    tracep->declArray(c+1971,"data_0_data_w_data", false,-1, 511,0);
    tracep->declArray(c+1949,"data_0_MPORT_data", false,-1, 511,0);
    tracep->declBus(c+2763,"data_0_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+2101,"data_0_MPORT_mask", false,-1);
    tracep->declBit(c+1947,"data_0_MPORT_en", false,-1);
    tracep->declBit(c+2761,"data_0_data_w_en_pipe_0", false,-1);
    tracep->declBus(c+2762,"data_0_data_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declArray(c+2764+i*16,"data_1", true,(i+0), 511,0);
    }
    tracep->declBit(c+3276,"data_1_data_w_en", false,-1);
    tracep->declBus(c+2762,"data_1_data_w_addr", false,-1, 4,0);
    tracep->declArray(c+1987,"data_1_data_w_data", false,-1, 511,0);
    tracep->declArray(c+1949,"data_1_MPORT_data", false,-1, 511,0);
    tracep->declBus(c+2763,"data_1_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+2137,"data_1_MPORT_mask", false,-1);
    tracep->declBit(c+1947,"data_1_MPORT_en", false,-1);
    tracep->declBit(c+3276,"data_1_data_w_en_pipe_0", false,-1);
    tracep->declBus(c+2762,"data_1_data_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+3277+i*2,"TAG_0", true,(i+0), 52,0);
    }
    tracep->declBit(c+3341,"TAG_0_tag_w_en", false,-1);
    tracep->declBus(c+3342,"TAG_0_tag_w_addr", false,-1, 4,0);
    tracep->declQuad(c+1965,"TAG_0_tag_w_data", false,-1, 52,0);
    tracep->declQuad(c+3343,"TAG_0_MPORT_1_data", false,-1, 52,0);
    tracep->declBus(c+2763,"TAG_0_MPORT_1_addr", false,-1, 4,0);
    tracep->declBit(c+2101,"TAG_0_MPORT_1_mask", false,-1);
    tracep->declBit(c+1947,"TAG_0_MPORT_1_en", false,-1);
    tracep->declBit(c+3341,"TAG_0_tag_w_en_pipe_0", false,-1);
    tracep->declBus(c+3342,"TAG_0_tag_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+3345+i*2,"TAG_1", true,(i+0), 52,0);
    }
    tracep->declBit(c+3409,"TAG_1_tag_w_en", false,-1);
    tracep->declBus(c+3410,"TAG_1_tag_w_addr", false,-1, 4,0);
    tracep->declQuad(c+1967,"TAG_1_tag_w_data", false,-1, 52,0);
    tracep->declQuad(c+3343,"TAG_1_MPORT_1_data", false,-1, 52,0);
    tracep->declBus(c+2763,"TAG_1_MPORT_1_addr", false,-1, 4,0);
    tracep->declBit(c+2137,"TAG_1_MPORT_1_mask", false,-1);
    tracep->declBit(c+1947,"TAG_1_MPORT_1_en", false,-1);
    tracep->declBit(c+3409,"TAG_1_tag_w_en_pipe_0", false,-1);
    tracep->declBus(c+3410,"TAG_1_tag_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+3411+i*1,"data_valid_0", true,(i+0));
    }
    tracep->declBit(c+3443,"data_valid_0_valid_w_en", false,-1);
    tracep->declBus(c+3444,"data_valid_0_valid_w_addr", false,-1, 4,0);
    tracep->declBit(c+1969,"data_valid_0_valid_w_data", false,-1);
    tracep->declBit(c+3486,"data_valid_0_MPORT_2_data", false,-1);
    tracep->declBus(c+2763,"data_valid_0_MPORT_2_addr", false,-1, 4,0);
    tracep->declBit(c+2101,"data_valid_0_MPORT_2_mask", false,-1);
    tracep->declBit(c+1947,"data_valid_0_MPORT_2_en", false,-1);
    tracep->declBit(c+3443,"data_valid_0_valid_w_en_pipe_0", false,-1);
    tracep->declBus(c+3444,"data_valid_0_valid_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+3445+i*1,"data_valid_1", true,(i+0));
    }
    tracep->declBit(c+3477,"data_valid_1_valid_w_en", false,-1);
    tracep->declBus(c+3478,"data_valid_1_valid_w_addr", false,-1, 4,0);
    tracep->declBit(c+1970,"data_valid_1_valid_w_data", false,-1);
    tracep->declBit(c+3486,"data_valid_1_MPORT_2_data", false,-1);
    tracep->declBus(c+2763,"data_valid_1_MPORT_2_addr", false,-1, 4,0);
    tracep->declBit(c+2137,"data_valid_1_MPORT_2_mask", false,-1);
    tracep->declBit(c+1947,"data_valid_1_MPORT_2_en", false,-1);
    tracep->declBit(c+3477,"data_valid_1_valid_w_en_pipe_0", false,-1);
    tracep->declBus(c+3478,"data_valid_1_valid_w_addr_pipe_0", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Scanf ");
    tracep->declBit(c+2007,"io_in_valid", false,-1);
    tracep->declQuad(c+1965,"io_in_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+1967,"io_in_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+1969,"io_in_bits_meat_valid_0", false,-1);
    tracep->declBit(c+1970,"io_in_bits_meat_valid_1", false,-1);
    tracep->declArray(c+1971,"io_in_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+1987,"io_in_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+2003,"io_in_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBus(c+2005,"io_in_bits_ctrl_data_index", false,-1, 4,0);
    tracep->declBit(c+2008,"io_out_bits_hit", false,-1);
    tracep->declArray(c+2009,"io_out_bits_data", false,-1, 511,0);
    tracep->declBus(c+2005,"io_out_bits_meta_ctrl_data_index", false,-1, 4,0);
    tracep->declBit(c+2025,"io_out_bits_hit_way_0", false,-1);
    tracep->declBit(c+2026,"io_out_bits_hit_way_1", false,-1);
    tracep->declQuad(c+1965,"io_out_bits_tag_0", false,-1, 52,0);
    tracep->declQuad(c+1967,"io_out_bits_tag_1", false,-1, 52,0);
    tracep->declBit(c+2025,"hit_way_0_result", false,-1);
    tracep->declBit(c+2026,"hit_way_1_result", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("birdge ");
    tracep->declBit(c+3481,"clock", false,-1);
    tracep->declBit(c+3482,"reset", false,-1);
    tracep->declBit(c+1933,"io_in_addr_req_valid", false,-1);
    tracep->declQuad(c+276,"io_in_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+275,"io_in_addr_req_bits_ce", false,-1);
    tracep->declBit(c+278,"io_in_addr_req_bits_we", false,-1);
    tracep->declBit(c+1934,"io_in_rdata_rep_ready", false,-1);
    tracep->declBit(c+1935,"io_in_rdata_rep_valid", false,-1);
    tracep->declQuad(c+26,"io_in_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+1934,"io_in_wdata_req_valid", false,-1);
    tracep->declQuad(c+280,"io_in_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+282,"io_in_wdata_req_bits_wmask", false,-1, 7,0);
    tracep->declBit(c+1936,"io_in_wdata_rep", false,-1);
    tracep->declBit(c+1937,"io_out_raddr_req_ready", false,-1);
    tracep->declBit(c+1938,"io_out_raddr_req_valid", false,-1);
    tracep->declQuad(c+276,"io_out_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+1939,"io_out_waddr_req_ready", false,-1);
    tracep->declBit(c+1940,"io_out_waddr_req_valid", false,-1);
    tracep->declQuad(c+276,"io_out_waddr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+1934,"io_out_rdata_rep_ready", false,-1);
    tracep->declBit(c+1935,"io_out_rdata_rep_valid", false,-1);
    tracep->declQuad(c+26,"io_out_rdata_rep_bits_data", false,-1, 63,0);
    tracep->declBit(c+304,"io_out_rdata_rep_bits_last", false,-1);
    tracep->declBit(c+1941,"io_out_wdata_req_ready", false,-1);
    tracep->declBit(c+1934,"io_out_wdata_req_valid", false,-1);
    tracep->declQuad(c+280,"io_out_wdata_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+282,"io_out_wdata_req_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+1942,"io_out_wdata_req_bits_last", false,-1);
    tracep->declBit(c+1943,"io_out_wb_ready", false,-1);
    tracep->declBit(c+1936,"io_out_wb_valid", false,-1);
    tracep->declBus(c+3519,"io_out_wb_bits_breap", false,-1, 1,0);
    tracep->declBus(c+3479,"read_state", false,-1, 1,0);
    tracep->declBus(c+3480,"write_state", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("WB ");
    tracep->declBit(c+284,"io_in_valid", false,-1);
    tracep->declBit(c+285,"io_in_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+286,"io_in_bits_ctrl_signal_rfWen", false,-1);
    tracep->declQuad(c+287,"io_in_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+3485,"io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+289,"io_in_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBit(c+291,"io_in_bits_ctrl_flow_skip", false,-1);
    tracep->declBus(c+250,"io_in_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declQuad(c+292,"io_in_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declBit(c+3486,"io_out_ready", false,-1);
    tracep->declBit(c+284,"io_out_valid", false,-1);
    tracep->declBit(c+294,"io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declQuad(c+287,"io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+3485,"io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+289,"io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBit(c+291,"io_out_bits_ctrl_flow_skip", false,-1);
    tracep->declBus(c+250,"io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+251,"io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+292,"io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("bypass ");
    tracep->declBus(c+94,"io_EX_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+106,"io_EX_rf_rfWen", false,-1);
    tracep->declQuad(c+16,"io_EX_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+262,"io_MEM_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+274,"io_MEM_rf_rfWen", false,-1);
    tracep->declQuad(c+22,"io_MEM_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+250,"io_WB_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+251,"io_WB_rf_rfWen", false,-1);
    tracep->declQuad(c+292,"io_WB_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+295,"io_Reg1", false,-1, 63,0);
    tracep->declBus(c+78,"io_reg_index1", false,-1, 4,0);
    tracep->declQuad(c+297,"io_Reg2", false,-1, 63,0);
    tracep->declBus(c+79,"io_reg_index2", false,-1, 4,0);
    tracep->declQuad(c+7,"io_Bypass_REG1", false,-1, 63,0);
    tracep->declQuad(c+9,"io_Bypass_REG2", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_bypass ");
    tracep->declBus(c+262,"io_MEM_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+274,"io_MEM_rf_rfWen", false,-1);
    tracep->declQuad(c+22,"io_MEM_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+95,"io_Reg1", false,-1, 63,0);
    tracep->declBus(c+90,"io_reg_index1", false,-1, 4,0);
    tracep->declQuad(c+97,"io_Reg2", false,-1, 63,0);
    tracep->declBus(c+91,"io_reg_index2", false,-1, 4,0);
    tracep->declQuad(c+12,"io_Bypass_REG1", false,-1, 63,0);
    tracep->declQuad(c+14,"io_Bypass_REG2", false,-1, 63,0);
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
    bufp->fullBit(oldp+1,(((IData)(vlSelf->CoreTop__DOT__EX__DOT__branch_flag) 
                           & (IData)(vlSelf->CoreTop__DOT__EX__DOT____VdfgTmp_hcef3c28f__0))));
    bufp->fullQData(oldp+2,(vlSelf->CoreTop__DOT__IF_io_branch_io_dnpc),64);
    bufp->fullBit(oldp+4,(vlSelf->CoreTop__DOT__IF_io_cache_req_rdata_rep_valid));
    bufp->fullIData(oldp+5,(((IData)(vlSelf->CoreTop__DOT__IF_io_flush)
                              ? 0U : ((1U & (IData)(
                                                    (vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                     >> 2U)))
                                       ? (IData)((vlSelf->CoreTop__DOT__IF_io_cache_req_rdata_rep_bits_rdata 
                                                  >> 0x20U))
                                       : (IData)(vlSelf->CoreTop__DOT__IF_io_cache_req_rdata_rep_bits_rdata)))),32);
    bufp->fullBit(oldp+6,(vlSelf->CoreTop__DOT__IF_io_flush));
    bufp->fullQData(oldp+7,((((IData)(vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfWen) 
                              & (((IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest) 
                                  == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                               >> 0xfU))) 
                                 & (0U != (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest))))
                              ? vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfData
                              : (((IData)(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfWen) 
                                  & (((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest) 
                                      == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                   >> 0xfU))) 
                                     & (0U != (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest))))
                                  ? vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfData
                                  : (((IData)(vlSelf->CoreTop__DOT__rf_MPORT_en) 
                                      & (((IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest) 
                                          == (0x1fU 
                                              & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                 >> 0xfU))) 
                                         & (0U != (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest))))
                                      ? vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfData
                                      : ((0U == (0x1fU 
                                                 & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                    >> 0xfU)))
                                          ? 0ULL : 
                                         vlSelf->CoreTop__DOT__rf
                                         [(0x1fU & 
                                           (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                            >> 0xfU))]))))),64);
    bufp->fullQData(oldp+9,((((IData)(vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfWen) 
                              & (((IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest) 
                                  == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                               >> 0x14U))) 
                                 & (0U != (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest))))
                              ? vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfData
                              : (((IData)(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfWen) 
                                  & (((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest) 
                                      == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                   >> 0x14U))) 
                                     & (0U != (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest))))
                                  ? vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfData
                                  : (((IData)(vlSelf->CoreTop__DOT__rf_MPORT_en) 
                                      & (((IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest) 
                                          == (0x1fU 
                                              & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                 >> 0x14U))) 
                                         & (0U != (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest))))
                                      ? vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfData
                                      : ((0U == (0x1fU 
                                                 & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                    >> 0x14U)))
                                          ? 0ULL : 
                                         vlSelf->CoreTop__DOT__rf
                                         [(0x1fU & 
                                           (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                            >> 0x14U))]))))),64);
    bufp->fullBit(oldp+11,((1U & (~ ((0U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_2)) 
                                     | ((~ (IData)(vlSelf->CoreTop__DOT__valid)) 
                                        | (IData)(vlSelf->CoreTop__DOT__IF_io_flush)))))));
    bufp->fullQData(oldp+12,((((IData)(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfWen) 
                               & (((IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfSrc1) 
                                   == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest)) 
                                  & (0U != (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest))))
                               ? vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfData
                               : vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_src1)),64);
    bufp->fullQData(oldp+14,((((IData)(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfWen) 
                               & (((IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfSrc2) 
                                   == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest)) 
                                  & (0U != (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest))))
                               ? vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfData
                               : vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_src2)),64);
    bufp->fullQData(oldp+16,(vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfData),64);
    bufp->fullQData(oldp+18,(vlSelf->CoreTop__DOT__EX__DOT__src1),64);
    bufp->fullQData(oldp+20,(vlSelf->CoreTop__DOT__EX__DOT__src2),64);
    bufp->fullQData(oldp+22,(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfData),64);
    bufp->fullQData(oldp+24,(vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata),64);
    bufp->fullQData(oldp+26,(vlSelf->CoreTop__DOT__MMEM__DOT__rdata),64);
    bufp->fullQData(oldp+28,(((IData)(vlSelf->CoreTop__DOT__EX__DOT__is_mul)
                               ? vlSelf->CoreTop__DOT__EX__DOT__src1
                               : (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__src1)))),64);
    bufp->fullQData(oldp+30,(((IData)(vlSelf->CoreTop__DOT__EX__DOT__is_mul)
                               ? vlSelf->CoreTop__DOT__EX__DOT__src2
                               : (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)))),64);
    bufp->fullQData(oldp+32,(vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src1),64);
    bufp->fullQData(oldp+34,(vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src2),64);
    bufp->fullQData(oldp+36,(vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_quotient),64);
    bufp->fullQData(oldp+38,(vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_remainder),64);
    bufp->fullBit(oldp+40,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1 
                                          >> 0x1fU)))));
    bufp->fullBit(oldp+41,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_quotient 
                                          >> 0x1fU)))));
    bufp->fullBit(oldp+42,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_remainder 
                                          >> 0x1fU)))));
    bufp->fullBit(oldp+43,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_10 
                                          >> 0x1fU)))));
    bufp->fullQData(oldp+44,(((0x40U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
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
                                               : ((0x71U 
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
    bufp->fullBit(oldp+46,((__Vtemp_h0fbea1b2__0[0U] 
                            >> 0x1fU)));
    __Vtemp_h8004274a__0[0U] = (IData)(vlSelf->CoreTop__DOT__EX__DOT__src1);
    __Vtemp_h8004274a__0[1U] = 0U;
    __Vtemp_h8004274a__0[2U] = 0U;
    VL_SHIFTL_WWI(95,95,6, __Vtemp_h29cbf8c2__0, __Vtemp_h8004274a__0, 
                  (0x3fU & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)));
    bufp->fullBit(oldp+47,((__Vtemp_h29cbf8c2__0[0U] 
                            >> 0x1fU)));
    bufp->fullBit(oldp+48,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_25 
                            >> 0x1fU)));
    bufp->fullBit(oldp+49,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_31 
                            >> 0x1fU)));
    bufp->fullBit(oldp+50,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__src1 
                                          >> 0x1fU)))));
    bufp->fullBit(oldp+51,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__src2 
                                          >> 0x1fU)))));
    bufp->fullQData(oldp+52,(((0x6aU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                               ? ((IData)(vlSelf->CoreTop__DOT__EX__DOT___compar_result_T)
                                   ? 1ULL : 0ULL) : 
                              ((2U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                ? ((IData)(vlSelf->CoreTop__DOT__EX__DOT___compar_result_T_4)
                                    ? 1ULL : 0ULL) : 0ULL))),64);
    bufp->fullQData(oldp+54,((((QData)((IData)(((0x6eU 
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
    bufp->fullBit(oldp+56,(vlSelf->CoreTop__DOT__EX__DOT__branch_flag));
    bufp->fullQData(oldp+57,((((((0U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
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
    bufp->fullQData(oldp+59,((((((0U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
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
    bufp->fullBit(oldp+61,((1U & (IData)((vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata 
                                          >> 0x3fU)))));
    bufp->fullBit(oldp+62,((1U & (IData)((vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata 
                                          >> 0x1fU)))));
    bufp->fullBit(oldp+63,((1U & ((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_27) 
                                  >> 7U))));
    bufp->fullBit(oldp+64,((1U & ((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_44) 
                                  >> 0xfU))));
    bufp->fullQData(oldp+65,(((0x45U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
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
    bufp->fullBit(oldp+67,(vlSelf->CoreTop__DOT__IF_io_branch_io_is_jump));
    bufp->fullBit(oldp+68,(vlSelf->CoreTop__DOT__IF_io_cache_req_addr_req_valid));
    bufp->fullQData(oldp+69,(vlSelf->CoreTop__DOT__IF_io_cache_req_rdata_rep_bits_rdata),64);
    bufp->fullBit(oldp+71,(vlSelf->CoreTop__DOT__valid));
    bufp->fullQData(oldp+72,(vlSelf->CoreTop__DOT__ID_io_in_bits_r_PC),64);
    bufp->fullIData(oldp+74,(vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst),32);
    bufp->fullCData(oldp+75,((((7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                ? 2U : 0U) | ((3U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                               ? 2U
                                               : 0U))),3);
    bufp->fullCData(oldp+76,(((8U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)) 
                              | ((7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)) 
                                 | (3U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))))),3);
    bufp->fullCData(oldp+77,(((0x13U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
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
    bufp->fullCData(oldp+78,((0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+79,((0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                       >> 0x14U))),5);
    bufp->fullBit(oldp+80,(((IData)(vlSelf->CoreTop__DOT__valid) 
                            & (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_3))));
    bufp->fullCData(oldp+81,(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_2),7);
    bufp->fullCData(oldp+82,((0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                       >> 7U))),5);
    bufp->fullQData(oldp+83,(((((((8U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
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
    bufp->fullBit(oldp+85,(vlSelf->CoreTop__DOT__valid_1));
    bufp->fullCData(oldp+86,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src1Type),3);
    bufp->fullCData(oldp+87,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src2Type),3);
    bufp->fullCData(oldp+88,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType),3);
    bufp->fullBit(oldp+89,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_inst_valid));
    bufp->fullCData(oldp+90,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfSrc1),5);
    bufp->fullCData(oldp+91,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfSrc2),5);
    bufp->fullBit(oldp+92,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfWen));
    bufp->fullCData(oldp+93,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype),7);
    bufp->fullCData(oldp+94,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest),5);
    bufp->fullQData(oldp+95,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_src1),64);
    bufp->fullQData(oldp+97,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_src2),64);
    bufp->fullQData(oldp+99,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm),64);
    bufp->fullQData(oldp+101,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC),64);
    bufp->fullIData(oldp+103,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_inst),32);
    bufp->fullBit(oldp+104,((1U & (~ (IData)(vlSelf->CoreTop__DOT__MEM__DOT___io_out_valid_T_6)))));
    bufp->fullBit(oldp+105,(((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_valid)) 
                             & ((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__div_io_in_valid)) 
                                & (IData)(vlSelf->CoreTop__DOT__valid_1)))));
    bufp->fullBit(oldp+106,(vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfWen));
    bufp->fullBit(oldp+107,(((0x42U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                             & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_inst_valid))));
    bufp->fullBit(oldp+108,(vlSelf->CoreTop__DOT__DIP_io_is_break_REG_1));
    bufp->fullQData(oldp+109,(vlSelf->CoreTop__DOT__rf
                              [0U]),64);
    bufp->fullQData(oldp+111,(vlSelf->CoreTop__DOT__rf
                              [1U]),64);
    bufp->fullQData(oldp+113,(vlSelf->CoreTop__DOT__rf
                              [2U]),64);
    bufp->fullQData(oldp+115,(vlSelf->CoreTop__DOT__rf
                              [3U]),64);
    bufp->fullQData(oldp+117,(vlSelf->CoreTop__DOT__rf
                              [4U]),64);
    bufp->fullQData(oldp+119,(vlSelf->CoreTop__DOT__rf
                              [5U]),64);
    bufp->fullQData(oldp+121,(vlSelf->CoreTop__DOT__rf
                              [6U]),64);
    bufp->fullQData(oldp+123,(vlSelf->CoreTop__DOT__rf
                              [7U]),64);
    bufp->fullQData(oldp+125,(vlSelf->CoreTop__DOT__rf
                              [8U]),64);
    bufp->fullQData(oldp+127,(vlSelf->CoreTop__DOT__rf
                              [9U]),64);
    bufp->fullQData(oldp+129,(vlSelf->CoreTop__DOT__rf
                              [0xaU]),64);
    bufp->fullQData(oldp+131,(vlSelf->CoreTop__DOT__rf
                              [0xbU]),64);
    bufp->fullQData(oldp+133,(vlSelf->CoreTop__DOT__rf
                              [0xcU]),64);
    bufp->fullQData(oldp+135,(vlSelf->CoreTop__DOT__rf
                              [0xdU]),64);
    bufp->fullQData(oldp+137,(vlSelf->CoreTop__DOT__rf
                              [0xeU]),64);
    bufp->fullQData(oldp+139,(vlSelf->CoreTop__DOT__rf
                              [0xfU]),64);
    bufp->fullQData(oldp+141,(vlSelf->CoreTop__DOT__rf
                              [0x10U]),64);
    bufp->fullQData(oldp+143,(vlSelf->CoreTop__DOT__rf
                              [0x11U]),64);
    bufp->fullQData(oldp+145,(vlSelf->CoreTop__DOT__rf
                              [0x12U]),64);
    bufp->fullQData(oldp+147,(vlSelf->CoreTop__DOT__rf
                              [0x13U]),64);
    bufp->fullQData(oldp+149,(vlSelf->CoreTop__DOT__rf
                              [0x14U]),64);
    bufp->fullQData(oldp+151,(vlSelf->CoreTop__DOT__rf
                              [0x15U]),64);
    bufp->fullQData(oldp+153,(vlSelf->CoreTop__DOT__rf
                              [0x16U]),64);
    bufp->fullQData(oldp+155,(vlSelf->CoreTop__DOT__rf
                              [0x17U]),64);
    bufp->fullQData(oldp+157,(vlSelf->CoreTop__DOT__rf
                              [0x18U]),64);
    bufp->fullQData(oldp+159,(vlSelf->CoreTop__DOT__rf
                              [0x19U]),64);
    bufp->fullQData(oldp+161,(vlSelf->CoreTop__DOT__rf
                              [0x1aU]),64);
    bufp->fullQData(oldp+163,(vlSelf->CoreTop__DOT__rf
                              [0x1bU]),64);
    bufp->fullQData(oldp+165,(vlSelf->CoreTop__DOT__rf
                              [0x1cU]),64);
    bufp->fullQData(oldp+167,(vlSelf->CoreTop__DOT__rf
                              [0x1dU]),64);
    bufp->fullQData(oldp+169,(vlSelf->CoreTop__DOT__rf
                              [0x1eU]),64);
    bufp->fullQData(oldp+171,(vlSelf->CoreTop__DOT__rf
                              [0x1fU]),64);
    bufp->fullIData(oldp+173,(vlSelf->CoreTop__DOT__DIP_io_inst_REG),32);
    bufp->fullQData(oldp+174,(vlSelf->CoreTop__DOT__DIP_io_pc_REG),64);
    bufp->fullBit(oldp+176,(vlSelf->CoreTop__DOT__DIP_io_inst_valid_REG));
    bufp->fullQData(oldp+177,(vlSelf->CoreTop__DOT__DIP_io_dnpc_REG),64);
    bufp->fullBit(oldp+179,(vlSelf->CoreTop__DOT__DIP_io_is_skip_REG));
    bufp->fullQData(oldp+180,(vlSelf->CoreTop__DOT__rf[0]),64);
    bufp->fullQData(oldp+182,(vlSelf->CoreTop__DOT__rf[1]),64);
    bufp->fullQData(oldp+184,(vlSelf->CoreTop__DOT__rf[2]),64);
    bufp->fullQData(oldp+186,(vlSelf->CoreTop__DOT__rf[3]),64);
    bufp->fullQData(oldp+188,(vlSelf->CoreTop__DOT__rf[4]),64);
    bufp->fullQData(oldp+190,(vlSelf->CoreTop__DOT__rf[5]),64);
    bufp->fullQData(oldp+192,(vlSelf->CoreTop__DOT__rf[6]),64);
    bufp->fullQData(oldp+194,(vlSelf->CoreTop__DOT__rf[7]),64);
    bufp->fullQData(oldp+196,(vlSelf->CoreTop__DOT__rf[8]),64);
    bufp->fullQData(oldp+198,(vlSelf->CoreTop__DOT__rf[9]),64);
    bufp->fullQData(oldp+200,(vlSelf->CoreTop__DOT__rf[10]),64);
    bufp->fullQData(oldp+202,(vlSelf->CoreTop__DOT__rf[11]),64);
    bufp->fullQData(oldp+204,(vlSelf->CoreTop__DOT__rf[12]),64);
    bufp->fullQData(oldp+206,(vlSelf->CoreTop__DOT__rf[13]),64);
    bufp->fullQData(oldp+208,(vlSelf->CoreTop__DOT__rf[14]),64);
    bufp->fullQData(oldp+210,(vlSelf->CoreTop__DOT__rf[15]),64);
    bufp->fullQData(oldp+212,(vlSelf->CoreTop__DOT__rf[16]),64);
    bufp->fullQData(oldp+214,(vlSelf->CoreTop__DOT__rf[17]),64);
    bufp->fullQData(oldp+216,(vlSelf->CoreTop__DOT__rf[18]),64);
    bufp->fullQData(oldp+218,(vlSelf->CoreTop__DOT__rf[19]),64);
    bufp->fullQData(oldp+220,(vlSelf->CoreTop__DOT__rf[20]),64);
    bufp->fullQData(oldp+222,(vlSelf->CoreTop__DOT__rf[21]),64);
    bufp->fullQData(oldp+224,(vlSelf->CoreTop__DOT__rf[22]),64);
    bufp->fullQData(oldp+226,(vlSelf->CoreTop__DOT__rf[23]),64);
    bufp->fullQData(oldp+228,(vlSelf->CoreTop__DOT__rf[24]),64);
    bufp->fullQData(oldp+230,(vlSelf->CoreTop__DOT__rf[25]),64);
    bufp->fullQData(oldp+232,(vlSelf->CoreTop__DOT__rf[26]),64);
    bufp->fullQData(oldp+234,(vlSelf->CoreTop__DOT__rf[27]),64);
    bufp->fullQData(oldp+236,(vlSelf->CoreTop__DOT__rf[28]),64);
    bufp->fullQData(oldp+238,(vlSelf->CoreTop__DOT__rf[29]),64);
    bufp->fullQData(oldp+240,(vlSelf->CoreTop__DOT__rf[30]),64);
    bufp->fullQData(oldp+242,(vlSelf->CoreTop__DOT__rf[31]),64);
    bufp->fullQData(oldp+244,(vlSelf->CoreTop__DOT__rf
                              [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                         >> 0xfU))]),64);
    bufp->fullQData(oldp+246,(vlSelf->CoreTop__DOT__rf
                              [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                         >> 0x14U))]),64);
    bufp->fullQData(oldp+248,(((0U == (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest))
                                ? 0ULL : vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfData)),64);
    bufp->fullCData(oldp+250,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest),5);
    bufp->fullBit(oldp+251,(vlSelf->CoreTop__DOT__rf_MPORT_en));
    bufp->fullBit(oldp+252,(vlSelf->CoreTop__DOT__valid_2));
    bufp->fullCData(oldp+253,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_fuType),3);
    bufp->fullBit(oldp+254,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_inst_valid));
    bufp->fullBit(oldp+255,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_rfWen));
    bufp->fullCData(oldp+256,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype),7);
    bufp->fullQData(oldp+257,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_PC),64);
    bufp->fullIData(oldp+259,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_inst),32);
    bufp->fullQData(oldp+260,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_Dnpc),64);
    bufp->fullCData(oldp+262,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest),5);
    bufp->fullQData(oldp+263,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfData),64);
    bufp->fullQData(oldp+265,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src1),64);
    bufp->fullQData(oldp+267,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2),64);
    bufp->fullQData(oldp+269,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_Imm),64);
    bufp->fullBit(oldp+271,(vlSelf->CoreTop__DOT__MEM_io_out_valid));
    bufp->fullBit(oldp+272,(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_signal_inst_valid));
    bufp->fullBit(oldp+273,(((0xa0000048ULL == vlSelf->CoreTop__DOT__MEM__DOT__addr_temp) 
                             | ((0xa00003f8ULL == vlSelf->CoreTop__DOT__MEM__DOT__addr_temp) 
                                | ((0xa0000000ULL <= vlSelf->CoreTop__DOT__MEM__DOT__addr_temp) 
                                   & (0xa1200000ULL 
                                      >= vlSelf->CoreTop__DOT__MEM__DOT__addr_temp))))));
    bufp->fullBit(oldp+274,(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfWen));
    bufp->fullBit(oldp+275,(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_addr_req_bits_ce));
    bufp->fullQData(oldp+276,(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp),64);
    bufp->fullBit(oldp+278,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_bits_we));
    bufp->fullBit(oldp+279,(((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)
                              ? (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_valid)
                              : ((~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_bits_we)) 
                                 & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_bits_rdata_T_1) 
                                    | (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_valid_T_4))))));
    bufp->fullQData(oldp+280,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata),64);
    bufp->fullCData(oldp+282,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wmask),8);
    bufp->fullBit(oldp+283,(((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)
                              ? (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_out_wb_valid)
                              : ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___Cache_data_io_write_bus_valid_T_3) 
                                 | ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_valid_T_4) 
                                    & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_bits_we))))));
    bufp->fullBit(oldp+284,(vlSelf->CoreTop__DOT__valid_3));
    bufp->fullBit(oldp+285,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_inst_valid));
    bufp->fullBit(oldp+286,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_rfWen));
    bufp->fullQData(oldp+287,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_PC),64);
    bufp->fullQData(oldp+289,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_Dnpc),64);
    bufp->fullBit(oldp+291,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_skip));
    bufp->fullQData(oldp+292,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfData),64);
    bufp->fullBit(oldp+294,(((IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_inst_valid) 
                             & (IData)(vlSelf->CoreTop__DOT__valid_3))));
    bufp->fullQData(oldp+295,(((0U == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                >> 0xfU)))
                                ? 0ULL : vlSelf->CoreTop__DOT__rf
                               [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                          >> 0xfU))])),64);
    bufp->fullQData(oldp+297,(((0U == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                >> 0x14U)))
                                ? 0ULL : vlSelf->CoreTop__DOT__rf
                               [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                          >> 0x14U))])),64);
    bufp->fullBit(oldp+299,(((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)) 
                             & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)
                                 ? (0U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state))
                                 : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state) 
                                    & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r) 
                                       & (0U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state))))))));
    bufp->fullBit(oldp+300,((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state))));
    bufp->fullQData(oldp+301,(vlSelf->CoreTop__DOT__ICACHE_io_out_raddr_req_bits_addr),64);
    bufp->fullBit(oldp+303,(vlSelf->CoreTop__DOT__ICACHE_io_out_rdata_rep_valid));
    bufp->fullBit(oldp+304,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_rdata_rep_bits_last));
    bufp->fullBit(oldp+305,(((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)) 
                             & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)
                                 ? (1U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_state))
                                 : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state) 
                                    & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r) 
                                       & (1U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_state))))))));
    bufp->fullBit(oldp+306,(((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)
                              ? (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_valid)
                              : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)
                                  ? (1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state))
                                  : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                                      ? ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)
                                          ? (1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state))
                                          : (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_valid))
                                      : (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_valid))))));
    bufp->fullBit(oldp+307,((0U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state))));
    bufp->fullQData(oldp+308,(((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)
                                ? vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_bits_addr
                                : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)
                                    ? vlSelf->CoreTop__DOT__ICACHE_io_out_raddr_req_bits_addr
                                    : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                                        ? ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)
                                            ? vlSelf->CoreTop__DOT__ICACHE_io_out_raddr_req_bits_addr
                                            : vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_bits_addr)
                                        : vlSelf->CoreTop__DOT__ICACHE_io_out_raddr_req_bits_addr)))),64);
    bufp->fullCData(oldp+310,(((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)
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
    bufp->fullBit(oldp+311,((2U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state))));
    bufp->fullBit(oldp+312,(((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)
                              ? (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_valid)
                              : ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)) 
                                 & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                                     ? ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)) 
                                        & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_valid))
                                     : (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_valid))))));
    bufp->fullBit(oldp+313,((0U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_state))));
    bufp->fullQData(oldp+314,(((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)
                                ? vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_bits_addr
                                : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)
                                    ? 0ULL : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                                               ? ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)
                                                   ? 0ULL
                                                   : vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_bits_addr)
                                               : 0ULL)))),64);
    bufp->fullBit(oldp+316,(((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)
                              ? (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_valid)
                              : ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)) 
                                 & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                                     ? ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)) 
                                        & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_valid))
                                     : (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_valid))))));
    bufp->fullBit(oldp+317,(vlSelf->CoreTop__DOT__MMEM_wd_ready));
    bufp->fullQData(oldp+318,(((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)
                                ? vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_data
                                : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)
                                    ? 0ULL : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                                               ? ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)
                                                   ? 0ULL
                                                   : vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_data)
                                               : 0ULL)))),64);
    bufp->fullCData(oldp+320,(((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)
                                ? (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_wstrb)
                                : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)
                                    ? 0U : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                                             ? ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)
                                                 ? 0U
                                                 : (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_wstrb))
                                             : 0U)))),8);
    bufp->fullBit(oldp+321,(vlSelf->CoreTop__DOT__MMEM_wd_last));
    bufp->fullBit(oldp+322,((1U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_state))));
    bufp->fullBit(oldp+323,(((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)
                              ? (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wb_ready)
                              : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0) 
                                 | ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                                     ? ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r) 
                                        | (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wb_ready))
                                     : (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wb_ready))))));
    bufp->fullBit(oldp+324,(vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_ready));
    bufp->fullBit(oldp+325,(vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_valid));
    bufp->fullQData(oldp+326,(vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_bits_addr),64);
    bufp->fullCData(oldp+328,(((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)
                                ? 0U : 7U)),8);
    bufp->fullBit(oldp+329,(vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_ready));
    bufp->fullBit(oldp+330,(vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_valid));
    bufp->fullQData(oldp+331,(vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_bits_addr),64);
    bufp->fullBit(oldp+333,(vlSelf->CoreTop__DOT__ARBITER_io_in1_rdata_rep_valid));
    bufp->fullBit(oldp+334,(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_ready));
    bufp->fullBit(oldp+335,(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_valid));
    bufp->fullQData(oldp+336,(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_data),64);
    bufp->fullCData(oldp+338,(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_wstrb),8);
    bufp->fullBit(oldp+339,(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_last));
    bufp->fullBit(oldp+340,(vlSelf->CoreTop__DOT__ARBITER_io_in1_wb_ready));
    bufp->fullBit(oldp+341,(vlSelf->CoreTop__DOT__ARBITER_io_in1_wb_valid));
    bufp->fullIData(oldp+342,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_inst),32);
    bufp->fullBit(oldp+343,(vlSelf->CoreTop__DOT__DIP_io_is_break_REG));
    bufp->fullBit(oldp+344,(vlSelf->CoreTop__DOT__ARBITER__DOT__state));
    bufp->fullBit(oldp+345,(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r));
    bufp->fullQData(oldp+346,(vlSelf->CoreTop__DOT__DIP__DOT__rf[0]),64);
    bufp->fullQData(oldp+348,(vlSelf->CoreTop__DOT__DIP__DOT__rf[1]),64);
    bufp->fullQData(oldp+350,(vlSelf->CoreTop__DOT__DIP__DOT__rf[2]),64);
    bufp->fullQData(oldp+352,(vlSelf->CoreTop__DOT__DIP__DOT__rf[3]),64);
    bufp->fullQData(oldp+354,(vlSelf->CoreTop__DOT__DIP__DOT__rf[4]),64);
    bufp->fullQData(oldp+356,(vlSelf->CoreTop__DOT__DIP__DOT__rf[5]),64);
    bufp->fullQData(oldp+358,(vlSelf->CoreTop__DOT__DIP__DOT__rf[6]),64);
    bufp->fullQData(oldp+360,(vlSelf->CoreTop__DOT__DIP__DOT__rf[7]),64);
    bufp->fullQData(oldp+362,(vlSelf->CoreTop__DOT__DIP__DOT__rf[8]),64);
    bufp->fullQData(oldp+364,(vlSelf->CoreTop__DOT__DIP__DOT__rf[9]),64);
    bufp->fullQData(oldp+366,(vlSelf->CoreTop__DOT__DIP__DOT__rf[10]),64);
    bufp->fullQData(oldp+368,(vlSelf->CoreTop__DOT__DIP__DOT__rf[11]),64);
    bufp->fullQData(oldp+370,(vlSelf->CoreTop__DOT__DIP__DOT__rf[12]),64);
    bufp->fullQData(oldp+372,(vlSelf->CoreTop__DOT__DIP__DOT__rf[13]),64);
    bufp->fullQData(oldp+374,(vlSelf->CoreTop__DOT__DIP__DOT__rf[14]),64);
    bufp->fullQData(oldp+376,(vlSelf->CoreTop__DOT__DIP__DOT__rf[15]),64);
    bufp->fullQData(oldp+378,(vlSelf->CoreTop__DOT__DIP__DOT__rf[16]),64);
    bufp->fullQData(oldp+380,(vlSelf->CoreTop__DOT__DIP__DOT__rf[17]),64);
    bufp->fullQData(oldp+382,(vlSelf->CoreTop__DOT__DIP__DOT__rf[18]),64);
    bufp->fullQData(oldp+384,(vlSelf->CoreTop__DOT__DIP__DOT__rf[19]),64);
    bufp->fullQData(oldp+386,(vlSelf->CoreTop__DOT__DIP__DOT__rf[20]),64);
    bufp->fullQData(oldp+388,(vlSelf->CoreTop__DOT__DIP__DOT__rf[21]),64);
    bufp->fullQData(oldp+390,(vlSelf->CoreTop__DOT__DIP__DOT__rf[22]),64);
    bufp->fullQData(oldp+392,(vlSelf->CoreTop__DOT__DIP__DOT__rf[23]),64);
    bufp->fullQData(oldp+394,(vlSelf->CoreTop__DOT__DIP__DOT__rf[24]),64);
    bufp->fullQData(oldp+396,(vlSelf->CoreTop__DOT__DIP__DOT__rf[25]),64);
    bufp->fullQData(oldp+398,(vlSelf->CoreTop__DOT__DIP__DOT__rf[26]),64);
    bufp->fullQData(oldp+400,(vlSelf->CoreTop__DOT__DIP__DOT__rf[27]),64);
    bufp->fullQData(oldp+402,(vlSelf->CoreTop__DOT__DIP__DOT__rf[28]),64);
    bufp->fullQData(oldp+404,(vlSelf->CoreTop__DOT__DIP__DOT__rf[29]),64);
    bufp->fullQData(oldp+406,(vlSelf->CoreTop__DOT__DIP__DOT__rf[30]),64);
    bufp->fullQData(oldp+408,(vlSelf->CoreTop__DOT__DIP__DOT__rf[31]),64);
    bufp->fullIData(oldp+410,(vlSelf->CoreTop__DOT__DIP__DOT__IN[0]),32);
    bufp->fullIData(oldp+411,(vlSelf->CoreTop__DOT__DIP__DOT__IN[1]),32);
    bufp->fullIData(oldp+412,(vlSelf->CoreTop__DOT__DIP__DOT__IN[2]),32);
    bufp->fullIData(oldp+413,(vlSelf->CoreTop__DOT__DIP__DOT__IN[3]),32);
    bufp->fullIData(oldp+414,(vlSelf->CoreTop__DOT__DIP__DOT__IN[4]),32);
    bufp->fullIData(oldp+415,(vlSelf->CoreTop__DOT__DIP__DOT__IN[5]),32);
    bufp->fullIData(oldp+416,(vlSelf->CoreTop__DOT__DIP__DOT__IN[6]),32);
    bufp->fullQData(oldp+417,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mepc_REG_1),64);
    bufp->fullQData(oldp+419,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mcause_REG_1),64);
    bufp->fullQData(oldp+421,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mstatus_REG_1),64);
    bufp->fullQData(oldp+423,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mtvec_REG_1),64);
    bufp->fullBit(oldp+425,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_valid));
    bufp->fullBit(oldp+426,((0x44U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count))));
    bufp->fullQData(oldp+427,((((QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[0U])))),64);
    bufp->fullBit(oldp+429,(vlSelf->CoreTop__DOT__EX__DOT__div_io_in_valid));
    bufp->fullBit(oldp+430,(vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_flow_div_signed));
    bufp->fullBit(oldp+431,((2U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state))));
    bufp->fullBit(oldp+432,(vlSelf->CoreTop__DOT__EX__DOT__is_mul));
    bufp->fullBit(oldp+433,(((((((0x43U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                                 | (0x13U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) 
                                | (IData)(vlSelf->CoreTop__DOT__EX__DOT___is_divw_T_2)) 
                               | ((0x12U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                                  | (0xfU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)))) 
                              | (IData)(vlSelf->CoreTop__DOT__EX__DOT____VdfgTmp_h08208b49__0)) 
                             & (IData)(vlSelf->CoreTop__DOT__EX__DOT____VdfgTmp_h1a4c5317__0))));
    bufp->fullBit(oldp+434,(vlSelf->CoreTop__DOT__EX__DOT__is_divw));
    bufp->fullQData(oldp+435,(vlSelf->CoreTop__DOT__EX__DOT__mepc),64);
    bufp->fullQData(oldp+437,(vlSelf->CoreTop__DOT__EX__DOT__mcause),64);
    bufp->fullQData(oldp+439,(vlSelf->CoreTop__DOT__EX__DOT__mstatus),64);
    bufp->fullQData(oldp+441,(vlSelf->CoreTop__DOT__EX__DOT__mtvec),64);
    bufp->fullQData(oldp+443,(vlSelf->CoreTop__DOT__EX__DOT__mie),64);
    bufp->fullQData(oldp+445,(vlSelf->CoreTop__DOT__EX__DOT__mip),64);
    bufp->fullBit(oldp+447,((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[0U] 
                             >> 0x1fU)));
    bufp->fullQData(oldp+448,(((3U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType))
                                ? (4ULL + vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC)
                                : 0ULL)),64);
    bufp->fullQData(oldp+450,(((0x6bU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
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
    bufp->fullQData(oldp+452,(vlSelf->CoreTop__DOT__EX__DOT__csr_data),64);
    bufp->fullQData(oldp+454,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mtvec_REG),64);
    bufp->fullQData(oldp+456,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mcause_REG),64);
    bufp->fullQData(oldp+458,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mepc_REG),64);
    bufp->fullQData(oldp+460,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mstatus_REG),64);
    bufp->fullQData(oldp+462,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[0]),64);
    bufp->fullQData(oldp+464,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[1]),64);
    bufp->fullQData(oldp+466,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[2]),64);
    bufp->fullQData(oldp+468,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[3]),64);
    bufp->fullQData(oldp+470,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[4]),64);
    bufp->fullQData(oldp+472,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[5]),64);
    bufp->fullWData(oldp+474,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend),128);
    bufp->fullQData(oldp+478,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divisor),64);
    bufp->fullQData(oldp+480,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S),64);
    bufp->fullCData(oldp+482,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state),2);
    bufp->fullCData(oldp+483,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__count),6);
    bufp->fullBit(oldp+484,((0x3fU == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__count))));
    bufp->fullBit(oldp+485,(((1U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state)) 
                             & (0x3fU == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__count)))));
    bufp->fullWData(oldp+486,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div),65);
    bufp->fullQData(oldp+489,((- vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S)),64);
    bufp->fullQData(oldp+491,((- (((QData)((IData)(
                                                   vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[3U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[2U]))))),64);
    bufp->fullCData(oldp+493,((7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U])),3);
    bufp->fullWData(oldp+494,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand),132);
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
    bufp->fullWData(oldp+499,(__Vtemp_h559cd7fe__0),132);
    bufp->fullBit(oldp+504,(((0U != (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U])) 
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
    bufp->fullWData(oldp+505,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier),66);
    bufp->fullWData(oldp+508,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p),132);
    bufp->fullCData(oldp+513,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count),7);
    bufp->fullWData(oldp+514,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__temp),132);
    bufp->fullBit(oldp+519,((1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__temp[4U] 
                                   >> 3U))));
    bufp->fullBit(oldp+520,(((IData)(vlSelf->CoreTop__DOT__IF_io_cache_req_addr_req_valid) 
                             & (0U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)))));
    bufp->fullQData(oldp+521,(((3U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state))
                                ? vlSelf->CoreTop__DOT__IF__DOT__temp
                                : 0ULL)),64);
    bufp->fullBit(oldp+523,((3U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state))));
    bufp->fullCData(oldp+524,(((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r)
                                ? 2U : 1U)),2);
    bufp->fullWData(oldp+525,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data),512);
    bufp->fullQData(oldp+541,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0
                              [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0]),53);
    bufp->fullQData(oldp+543,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1
                              [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0]),53);
    bufp->fullBit(oldp+545,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0
                            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0]));
    bufp->fullBit(oldp+546,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1
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
    bufp->fullWData(oldp+547,(__Vtemp_h6ff33a25__0),512);
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
    bufp->fullWData(oldp+563,(__Vtemp_he7310ca3__0),512);
    bufp->fullQData(oldp+579,((vlSelf->CoreTop__DOT__IF__DOT__temp 
                               >> 0xbU)),53);
    bufp->fullCData(oldp+581,((0x1fU & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                >> 6U)))),5);
    bufp->fullCData(oldp+582,((0x3fU & (IData)(vlSelf->CoreTop__DOT__IF__DOT__temp))),6);
    bufp->fullBit(oldp+583,(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_in_valid_REG));
    bufp->fullBit(oldp+584,(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit));
    bufp->fullWData(oldp+585,(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data),512);
    bufp->fullBit(oldp+601,(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_0_result));
    bufp->fullBit(oldp+602,(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_1_result));
    bufp->fullBit(oldp+603,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[0]));
    bufp->fullBit(oldp+604,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[1]));
    bufp->fullBit(oldp+605,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[2]));
    bufp->fullBit(oldp+606,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[3]));
    bufp->fullBit(oldp+607,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[4]));
    bufp->fullBit(oldp+608,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[5]));
    bufp->fullBit(oldp+609,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[6]));
    bufp->fullBit(oldp+610,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[7]));
    bufp->fullBit(oldp+611,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[8]));
    bufp->fullBit(oldp+612,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[9]));
    bufp->fullBit(oldp+613,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[10]));
    bufp->fullBit(oldp+614,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[11]));
    bufp->fullBit(oldp+615,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[12]));
    bufp->fullBit(oldp+616,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[13]));
    bufp->fullBit(oldp+617,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[14]));
    bufp->fullBit(oldp+618,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[15]));
    bufp->fullBit(oldp+619,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[16]));
    bufp->fullBit(oldp+620,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[17]));
    bufp->fullBit(oldp+621,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[18]));
    bufp->fullBit(oldp+622,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[19]));
    bufp->fullBit(oldp+623,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[20]));
    bufp->fullBit(oldp+624,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[21]));
    bufp->fullBit(oldp+625,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[22]));
    bufp->fullBit(oldp+626,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[23]));
    bufp->fullBit(oldp+627,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[24]));
    bufp->fullBit(oldp+628,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[25]));
    bufp->fullBit(oldp+629,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[26]));
    bufp->fullBit(oldp+630,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[27]));
    bufp->fullBit(oldp+631,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[28]));
    bufp->fullBit(oldp+632,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[29]));
    bufp->fullBit(oldp+633,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[30]));
    bufp->fullBit(oldp+634,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[31]));
    bufp->fullBit(oldp+635,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_lru_w_MPORT_en_pipe_0));
    bufp->fullCData(oldp+636,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_lru_w_MPORT_addr_pipe_0),5);
    bufp->fullBit(oldp+637,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru
                            [vlSelf->CoreTop__DOT__ICACHE__DOT__lru_lru_w_MPORT_addr_pipe_0]));
    bufp->fullBit(oldp+638,(((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                             & ((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                & ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit) 
                                   & (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_0_result))))));
    bufp->fullBit(oldp+639,(((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                             & ((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                & ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit) 
                                   & (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_1_result))))));
    bufp->fullBit(oldp+640,(((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                             & ((1U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                & ((2U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                   & ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT___T_5) 
                                      & (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r)))))));
    bufp->fullBit(oldp+641,(((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                             & ((1U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                & ((2U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                   & ((~ (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r)) 
                                      & (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT___T_5)))))));
    bufp->fullCData(oldp+642,(vlSelf->CoreTop__DOT__ICACHE__DOT__state),3);
    bufp->fullCData(oldp+643,(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state),2);
    bufp->fullWData(oldp+644,(vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg),512);
    bufp->fullQData(oldp+660,(vlSelf->CoreTop__DOT__ICACHE__DOT__mem_addr_reg),64);
    bufp->fullBit(oldp+662,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r));
    bufp->fullQData(oldp+663,(((0U == (7U & (IData)(
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
    bufp->fullQData(oldp+665,(((0U == (7U & (IData)(
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
    bufp->fullWData(oldp+667,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[0]),512);
    bufp->fullWData(oldp+683,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[1]),512);
    bufp->fullWData(oldp+699,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[2]),512);
    bufp->fullWData(oldp+715,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[3]),512);
    bufp->fullWData(oldp+731,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[4]),512);
    bufp->fullWData(oldp+747,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[5]),512);
    bufp->fullWData(oldp+763,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[6]),512);
    bufp->fullWData(oldp+779,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[7]),512);
    bufp->fullWData(oldp+795,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[8]),512);
    bufp->fullWData(oldp+811,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[9]),512);
    bufp->fullWData(oldp+827,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[10]),512);
    bufp->fullWData(oldp+843,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[11]),512);
    bufp->fullWData(oldp+859,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[12]),512);
    bufp->fullWData(oldp+875,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[13]),512);
    bufp->fullWData(oldp+891,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[14]),512);
    bufp->fullWData(oldp+907,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[15]),512);
    bufp->fullWData(oldp+923,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[16]),512);
    bufp->fullWData(oldp+939,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[17]),512);
    bufp->fullWData(oldp+955,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[18]),512);
    bufp->fullWData(oldp+971,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[19]),512);
    bufp->fullWData(oldp+987,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[20]),512);
    bufp->fullWData(oldp+1003,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[21]),512);
    bufp->fullWData(oldp+1019,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[22]),512);
    bufp->fullWData(oldp+1035,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[23]),512);
    bufp->fullWData(oldp+1051,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[24]),512);
    bufp->fullWData(oldp+1067,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[25]),512);
    bufp->fullWData(oldp+1083,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[26]),512);
    bufp->fullWData(oldp+1099,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[27]),512);
    bufp->fullWData(oldp+1115,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[28]),512);
    bufp->fullWData(oldp+1131,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[29]),512);
    bufp->fullWData(oldp+1147,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[30]),512);
    bufp->fullWData(oldp+1163,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[31]),512);
    bufp->fullBit(oldp+1179,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_en_pipe_0));
    bufp->fullCData(oldp+1180,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0),5);
    bufp->fullCData(oldp+1181,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_addr),5);
    bufp->fullBit(oldp+1182,((1U & (~ (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r)))));
    bufp->fullWData(oldp+1183,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[0]),512);
    bufp->fullWData(oldp+1199,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[1]),512);
    bufp->fullWData(oldp+1215,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[2]),512);
    bufp->fullWData(oldp+1231,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[3]),512);
    bufp->fullWData(oldp+1247,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[4]),512);
    bufp->fullWData(oldp+1263,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[5]),512);
    bufp->fullWData(oldp+1279,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[6]),512);
    bufp->fullWData(oldp+1295,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[7]),512);
    bufp->fullWData(oldp+1311,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[8]),512);
    bufp->fullWData(oldp+1327,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[9]),512);
    bufp->fullWData(oldp+1343,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[10]),512);
    bufp->fullWData(oldp+1359,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[11]),512);
    bufp->fullWData(oldp+1375,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[12]),512);
    bufp->fullWData(oldp+1391,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[13]),512);
    bufp->fullWData(oldp+1407,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[14]),512);
    bufp->fullWData(oldp+1423,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[15]),512);
    bufp->fullWData(oldp+1439,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[16]),512);
    bufp->fullWData(oldp+1455,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[17]),512);
    bufp->fullWData(oldp+1471,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[18]),512);
    bufp->fullWData(oldp+1487,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[19]),512);
    bufp->fullWData(oldp+1503,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[20]),512);
    bufp->fullWData(oldp+1519,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[21]),512);
    bufp->fullWData(oldp+1535,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[22]),512);
    bufp->fullWData(oldp+1551,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[23]),512);
    bufp->fullWData(oldp+1567,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[24]),512);
    bufp->fullWData(oldp+1583,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[25]),512);
    bufp->fullWData(oldp+1599,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[26]),512);
    bufp->fullWData(oldp+1615,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[27]),512);
    bufp->fullWData(oldp+1631,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[28]),512);
    bufp->fullWData(oldp+1647,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[29]),512);
    bufp->fullWData(oldp+1663,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[30]),512);
    bufp->fullWData(oldp+1679,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[31]),512);
    bufp->fullBit(oldp+1695,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_en_pipe_0));
    bufp->fullQData(oldp+1696,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[0]),53);
    bufp->fullQData(oldp+1698,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[1]),53);
    bufp->fullQData(oldp+1700,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[2]),53);
    bufp->fullQData(oldp+1702,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[3]),53);
    bufp->fullQData(oldp+1704,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[4]),53);
    bufp->fullQData(oldp+1706,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[5]),53);
    bufp->fullQData(oldp+1708,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[6]),53);
    bufp->fullQData(oldp+1710,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[7]),53);
    bufp->fullQData(oldp+1712,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[8]),53);
    bufp->fullQData(oldp+1714,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[9]),53);
    bufp->fullQData(oldp+1716,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[10]),53);
    bufp->fullQData(oldp+1718,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[11]),53);
    bufp->fullQData(oldp+1720,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[12]),53);
    bufp->fullQData(oldp+1722,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[13]),53);
    bufp->fullQData(oldp+1724,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[14]),53);
    bufp->fullQData(oldp+1726,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[15]),53);
    bufp->fullQData(oldp+1728,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[16]),53);
    bufp->fullQData(oldp+1730,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[17]),53);
    bufp->fullQData(oldp+1732,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[18]),53);
    bufp->fullQData(oldp+1734,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[19]),53);
    bufp->fullQData(oldp+1736,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[20]),53);
    bufp->fullQData(oldp+1738,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[21]),53);
    bufp->fullQData(oldp+1740,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[22]),53);
    bufp->fullQData(oldp+1742,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[23]),53);
    bufp->fullQData(oldp+1744,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[24]),53);
    bufp->fullQData(oldp+1746,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[25]),53);
    bufp->fullQData(oldp+1748,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[26]),53);
    bufp->fullQData(oldp+1750,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[27]),53);
    bufp->fullQData(oldp+1752,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[28]),53);
    bufp->fullQData(oldp+1754,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[29]),53);
    bufp->fullQData(oldp+1756,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[30]),53);
    bufp->fullQData(oldp+1758,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[31]),53);
    bufp->fullBit(oldp+1760,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_tag_w_en_pipe_0));
    bufp->fullQData(oldp+1761,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_MPORT_1_data),53);
    bufp->fullQData(oldp+1763,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[0]),53);
    bufp->fullQData(oldp+1765,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[1]),53);
    bufp->fullQData(oldp+1767,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[2]),53);
    bufp->fullQData(oldp+1769,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[3]),53);
    bufp->fullQData(oldp+1771,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[4]),53);
    bufp->fullQData(oldp+1773,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[5]),53);
    bufp->fullQData(oldp+1775,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[6]),53);
    bufp->fullQData(oldp+1777,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[7]),53);
    bufp->fullQData(oldp+1779,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[8]),53);
    bufp->fullQData(oldp+1781,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[9]),53);
    bufp->fullQData(oldp+1783,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[10]),53);
    bufp->fullQData(oldp+1785,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[11]),53);
    bufp->fullQData(oldp+1787,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[12]),53);
    bufp->fullQData(oldp+1789,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[13]),53);
    bufp->fullQData(oldp+1791,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[14]),53);
    bufp->fullQData(oldp+1793,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[15]),53);
    bufp->fullQData(oldp+1795,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[16]),53);
    bufp->fullQData(oldp+1797,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[17]),53);
    bufp->fullQData(oldp+1799,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[18]),53);
    bufp->fullQData(oldp+1801,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[19]),53);
    bufp->fullQData(oldp+1803,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[20]),53);
    bufp->fullQData(oldp+1805,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[21]),53);
    bufp->fullQData(oldp+1807,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[22]),53);
    bufp->fullQData(oldp+1809,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[23]),53);
    bufp->fullQData(oldp+1811,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[24]),53);
    bufp->fullQData(oldp+1813,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[25]),53);
    bufp->fullQData(oldp+1815,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[26]),53);
    bufp->fullQData(oldp+1817,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[27]),53);
    bufp->fullQData(oldp+1819,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[28]),53);
    bufp->fullQData(oldp+1821,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[29]),53);
    bufp->fullQData(oldp+1823,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[30]),53);
    bufp->fullQData(oldp+1825,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[31]),53);
    bufp->fullBit(oldp+1827,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_en_pipe_0));
    bufp->fullBit(oldp+1828,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[0]));
    bufp->fullBit(oldp+1829,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[1]));
    bufp->fullBit(oldp+1830,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[2]));
    bufp->fullBit(oldp+1831,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[3]));
    bufp->fullBit(oldp+1832,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[4]));
    bufp->fullBit(oldp+1833,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[5]));
    bufp->fullBit(oldp+1834,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[6]));
    bufp->fullBit(oldp+1835,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[7]));
    bufp->fullBit(oldp+1836,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[8]));
    bufp->fullBit(oldp+1837,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[9]));
    bufp->fullBit(oldp+1838,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[10]));
    bufp->fullBit(oldp+1839,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[11]));
    bufp->fullBit(oldp+1840,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[12]));
    bufp->fullBit(oldp+1841,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[13]));
    bufp->fullBit(oldp+1842,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[14]));
    bufp->fullBit(oldp+1843,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[15]));
    bufp->fullBit(oldp+1844,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[16]));
    bufp->fullBit(oldp+1845,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[17]));
    bufp->fullBit(oldp+1846,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[18]));
    bufp->fullBit(oldp+1847,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[19]));
    bufp->fullBit(oldp+1848,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[20]));
    bufp->fullBit(oldp+1849,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[21]));
    bufp->fullBit(oldp+1850,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[22]));
    bufp->fullBit(oldp+1851,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[23]));
    bufp->fullBit(oldp+1852,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[24]));
    bufp->fullBit(oldp+1853,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[25]));
    bufp->fullBit(oldp+1854,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[26]));
    bufp->fullBit(oldp+1855,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[27]));
    bufp->fullBit(oldp+1856,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[28]));
    bufp->fullBit(oldp+1857,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[29]));
    bufp->fullBit(oldp+1858,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[30]));
    bufp->fullBit(oldp+1859,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[31]));
    bufp->fullBit(oldp+1860,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_en_pipe_0));
    bufp->fullBit(oldp+1861,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[0]));
    bufp->fullBit(oldp+1862,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[1]));
    bufp->fullBit(oldp+1863,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[2]));
    bufp->fullBit(oldp+1864,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[3]));
    bufp->fullBit(oldp+1865,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[4]));
    bufp->fullBit(oldp+1866,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[5]));
    bufp->fullBit(oldp+1867,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[6]));
    bufp->fullBit(oldp+1868,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[7]));
    bufp->fullBit(oldp+1869,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[8]));
    bufp->fullBit(oldp+1870,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[9]));
    bufp->fullBit(oldp+1871,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[10]));
    bufp->fullBit(oldp+1872,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[11]));
    bufp->fullBit(oldp+1873,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[12]));
    bufp->fullBit(oldp+1874,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[13]));
    bufp->fullBit(oldp+1875,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[14]));
    bufp->fullBit(oldp+1876,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[15]));
    bufp->fullBit(oldp+1877,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[16]));
    bufp->fullBit(oldp+1878,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[17]));
    bufp->fullBit(oldp+1879,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[18]));
    bufp->fullBit(oldp+1880,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[19]));
    bufp->fullBit(oldp+1881,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[20]));
    bufp->fullBit(oldp+1882,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[21]));
    bufp->fullBit(oldp+1883,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[22]));
    bufp->fullBit(oldp+1884,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[23]));
    bufp->fullBit(oldp+1885,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[24]));
    bufp->fullBit(oldp+1886,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[25]));
    bufp->fullBit(oldp+1887,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[26]));
    bufp->fullBit(oldp+1888,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[27]));
    bufp->fullBit(oldp+1889,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[28]));
    bufp->fullBit(oldp+1890,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[29]));
    bufp->fullBit(oldp+1891,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[30]));
    bufp->fullBit(oldp+1892,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[31]));
    bufp->fullBit(oldp+1893,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_en_pipe_0));
    bufp->fullCData(oldp+1894,(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0),4);
    bufp->fullBit(oldp+1895,(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_3));
    bufp->fullCData(oldp+1896,((((7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                  ? 2U : 0U) | ((3U 
                                                 == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                                 ? 2U
                                                 : 0U))),2);
    bufp->fullBit(oldp+1897,(((8U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)) 
                              | ((7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)) 
                                 | (3U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))))));
    bufp->fullBit(oldp+1898,((vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                              >> 0x1fU)));
    bufp->fullBit(oldp+1899,((1U & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                    >> 0x13U))));
    bufp->fullQData(oldp+1900,(vlSelf->CoreTop__DOT__IF__DOT__temp),64);
    bufp->fullIData(oldp+1902,(((1U & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                               >> 2U)))
                                 ? (IData)((vlSelf->CoreTop__DOT__IF_io_cache_req_rdata_rep_bits_rdata 
                                            >> 0x20U))
                                 : (IData)(vlSelf->CoreTop__DOT__IF_io_cache_req_rdata_rep_bits_rdata))),32);
    bufp->fullCData(oldp+1903,(vlSelf->CoreTop__DOT__MMEM__DOT__read_state),2);
    bufp->fullCData(oldp+1904,(vlSelf->CoreTop__DOT__MMEM__DOT__write_state),2);
    bufp->fullCData(oldp+1905,(vlSelf->CoreTop__DOT__MMEM__DOT__read_next_state),2);
    bufp->fullCData(oldp+1906,(vlSelf->CoreTop__DOT__MMEM__DOT__write_next_state),2);
    bufp->fullQData(oldp+1907,(vlSelf->CoreTop__DOT__MMEM__DOT__write_addr_buffer),64);
    bufp->fullQData(oldp+1909,(vlSelf->CoreTop__DOT__MMEM__DOT__read_addr_buffer),64);
    bufp->fullCData(oldp+1911,(vlSelf->CoreTop__DOT__MMEM__DOT__read_count),8);
    bufp->fullBit(oldp+1912,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_valid));
    bufp->fullBit(oldp+1913,((1U & (~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)))));
    bufp->fullBit(oldp+1914,(((~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_bits_we)) 
                              & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_bits_rdata_T_1) 
                                 | (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_valid_T_4)))));
    bufp->fullQData(oldp+1915,(((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_bits_rdata_T_1)
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
    bufp->fullBit(oldp+1917,(((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___Cache_data_io_write_bus_valid_T_3) 
                              | ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_valid_T_4) 
                                 & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_bits_we)))));
    bufp->fullBit(oldp+1918,(((~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)) 
                              & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_ready))));
    bufp->fullBit(oldp+1919,((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state))));
    bufp->fullQData(oldp+1920,(((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state))
                                 ? vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_addr_reg
                                 : 0ULL)),64);
    bufp->fullBit(oldp+1922,(((~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)) 
                              & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_ready))));
    bufp->fullBit(oldp+1923,((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state))));
    bufp->fullQData(oldp+1924,(((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state))
                                 ? vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_addr_reg
                                 : 0ULL)),64);
    bufp->fullBit(oldp+1926,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_rdata_rep_valid));
    bufp->fullBit(oldp+1927,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_wdata_req_ready));
    bufp->fullBit(oldp+1928,((2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state))));
    bufp->fullQData(oldp+1929,((((QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0U])))),64);
    bufp->fullBit(oldp+1931,((7U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count_write))));
    bufp->fullBit(oldp+1932,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_wb_valid));
    bufp->fullBit(oldp+1933,(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_addr_req_valid));
    bufp->fullBit(oldp+1934,(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready));
    bufp->fullBit(oldp+1935,(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_valid));
    bufp->fullBit(oldp+1936,(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_out_wb_valid));
    bufp->fullBit(oldp+1937,(((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready) 
                              & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_ready))));
    bufp->fullBit(oldp+1938,((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__read_state))));
    bufp->fullBit(oldp+1939,(((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready) 
                              & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_ready))));
    bufp->fullBit(oldp+1940,((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state))));
    bufp->fullBit(oldp+1941,(((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready) 
                              & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_ready))));
    bufp->fullBit(oldp+1942,((2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state))));
    bufp->fullBit(oldp+1943,((3U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state))));
    bufp->fullBit(oldp+1944,(((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_valid) 
                              & (0U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)))));
    bufp->fullQData(oldp+1945,(((IData)(vlSelf->__VdfgTmp_h5a5a8c61__0)
                                 ? vlSelf->CoreTop__DOT__MEM__DOT__addr_temp
                                 : 0ULL)),64);
    bufp->fullBit(oldp+1947,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_en));
    bufp->fullCData(oldp+1948,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_waymask),2);
    bufp->fullWData(oldp+1949,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data),512);
    bufp->fullQData(oldp+1965,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_tag_w_data),53);
    bufp->fullQData(oldp+1967,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1_tag_w_data),53);
    bufp->fullBit(oldp+1969,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0
                             [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0]));
    bufp->fullBit(oldp+1970,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1
                             [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_addr_pipe_0]));
    bufp->fullWData(oldp+1971,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data),512);
    bufp->fullWData(oldp+1987,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data),512);
    bufp->fullQData(oldp+2003,((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                >> 0xbU)),53);
    bufp->fullCData(oldp+2005,((0x1fU & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                 >> 6U)))),5);
    bufp->fullCData(oldp+2006,((0x3fU & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp))),6);
    bufp->fullBit(oldp+2007,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_in_valid_REG));
    bufp->fullBit(oldp+2008,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit));
    bufp->fullWData(oldp+2009,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data),512);
    bufp->fullBit(oldp+2025,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_0_result));
    bufp->fullBit(oldp+2026,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_1_result));
    bufp->fullBit(oldp+2027,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[0]));
    bufp->fullBit(oldp+2028,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[1]));
    bufp->fullBit(oldp+2029,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[2]));
    bufp->fullBit(oldp+2030,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[3]));
    bufp->fullBit(oldp+2031,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[4]));
    bufp->fullBit(oldp+2032,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[5]));
    bufp->fullBit(oldp+2033,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[6]));
    bufp->fullBit(oldp+2034,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[7]));
    bufp->fullBit(oldp+2035,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[8]));
    bufp->fullBit(oldp+2036,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[9]));
    bufp->fullBit(oldp+2037,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[10]));
    bufp->fullBit(oldp+2038,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[11]));
    bufp->fullBit(oldp+2039,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[12]));
    bufp->fullBit(oldp+2040,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[13]));
    bufp->fullBit(oldp+2041,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[14]));
    bufp->fullBit(oldp+2042,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[15]));
    bufp->fullBit(oldp+2043,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[16]));
    bufp->fullBit(oldp+2044,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[17]));
    bufp->fullBit(oldp+2045,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[18]));
    bufp->fullBit(oldp+2046,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[19]));
    bufp->fullBit(oldp+2047,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[20]));
    bufp->fullBit(oldp+2048,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[21]));
    bufp->fullBit(oldp+2049,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[22]));
    bufp->fullBit(oldp+2050,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[23]));
    bufp->fullBit(oldp+2051,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[24]));
    bufp->fullBit(oldp+2052,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[25]));
    bufp->fullBit(oldp+2053,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[26]));
    bufp->fullBit(oldp+2054,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[27]));
    bufp->fullBit(oldp+2055,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[28]));
    bufp->fullBit(oldp+2056,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[29]));
    bufp->fullBit(oldp+2057,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[30]));
    bufp->fullBit(oldp+2058,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[31]));
    bufp->fullBit(oldp+2059,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_en_pipe_0));
    bufp->fullCData(oldp+2060,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_addr_pipe_0),5);
    bufp->fullBit(oldp+2061,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_data));
    bufp->fullBit(oldp+2062,(((0U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                              & ((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                 & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit) 
                                    & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_0_result))))));
    bufp->fullBit(oldp+2063,(((0U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                              & ((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                 & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit) 
                                    & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_1_result))))));
    bufp->fullBit(oldp+2064,(((0U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                              & ((1U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                 & ((2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                    & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___T_8) 
                                       & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_r)))))));
    bufp->fullBit(oldp+2065,(((0U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                              & ((1U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                 & ((2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                    & ((~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_r)) 
                                       & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___T_8)))))));
    bufp->fullBit(oldp+2066,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[0]));
    bufp->fullBit(oldp+2067,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[1]));
    bufp->fullBit(oldp+2068,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[2]));
    bufp->fullBit(oldp+2069,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[3]));
    bufp->fullBit(oldp+2070,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[4]));
    bufp->fullBit(oldp+2071,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[5]));
    bufp->fullBit(oldp+2072,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[6]));
    bufp->fullBit(oldp+2073,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[7]));
    bufp->fullBit(oldp+2074,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[8]));
    bufp->fullBit(oldp+2075,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[9]));
    bufp->fullBit(oldp+2076,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[10]));
    bufp->fullBit(oldp+2077,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[11]));
    bufp->fullBit(oldp+2078,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[12]));
    bufp->fullBit(oldp+2079,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[13]));
    bufp->fullBit(oldp+2080,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[14]));
    bufp->fullBit(oldp+2081,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[15]));
    bufp->fullBit(oldp+2082,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[16]));
    bufp->fullBit(oldp+2083,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[17]));
    bufp->fullBit(oldp+2084,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[18]));
    bufp->fullBit(oldp+2085,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[19]));
    bufp->fullBit(oldp+2086,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[20]));
    bufp->fullBit(oldp+2087,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[21]));
    bufp->fullBit(oldp+2088,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[22]));
    bufp->fullBit(oldp+2089,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[23]));
    bufp->fullBit(oldp+2090,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[24]));
    bufp->fullBit(oldp+2091,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[25]));
    bufp->fullBit(oldp+2092,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[26]));
    bufp->fullBit(oldp+2093,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[27]));
    bufp->fullBit(oldp+2094,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[28]));
    bufp->fullBit(oldp+2095,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[29]));
    bufp->fullBit(oldp+2096,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[30]));
    bufp->fullBit(oldp+2097,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[31]));
    bufp->fullBit(oldp+2098,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0_dirt_w_en_pipe_0));
    bufp->fullCData(oldp+2099,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1_dirt_w_addr_pipe_0),5);
    bufp->fullBit(oldp+2100,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0
                             [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1_dirt_w_addr_pipe_0]));
    bufp->fullBit(oldp+2101,((1U & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_waymask))));
    bufp->fullBit(oldp+2102,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0_MPORT_4_en));
    bufp->fullBit(oldp+2103,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[0]));
    bufp->fullBit(oldp+2104,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[1]));
    bufp->fullBit(oldp+2105,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[2]));
    bufp->fullBit(oldp+2106,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[3]));
    bufp->fullBit(oldp+2107,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[4]));
    bufp->fullBit(oldp+2108,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[5]));
    bufp->fullBit(oldp+2109,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[6]));
    bufp->fullBit(oldp+2110,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[7]));
    bufp->fullBit(oldp+2111,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[8]));
    bufp->fullBit(oldp+2112,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[9]));
    bufp->fullBit(oldp+2113,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[10]));
    bufp->fullBit(oldp+2114,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[11]));
    bufp->fullBit(oldp+2115,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[12]));
    bufp->fullBit(oldp+2116,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[13]));
    bufp->fullBit(oldp+2117,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[14]));
    bufp->fullBit(oldp+2118,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[15]));
    bufp->fullBit(oldp+2119,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[16]));
    bufp->fullBit(oldp+2120,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[17]));
    bufp->fullBit(oldp+2121,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[18]));
    bufp->fullBit(oldp+2122,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[19]));
    bufp->fullBit(oldp+2123,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[20]));
    bufp->fullBit(oldp+2124,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[21]));
    bufp->fullBit(oldp+2125,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[22]));
    bufp->fullBit(oldp+2126,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[23]));
    bufp->fullBit(oldp+2127,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[24]));
    bufp->fullBit(oldp+2128,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[25]));
    bufp->fullBit(oldp+2129,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[26]));
    bufp->fullBit(oldp+2130,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[27]));
    bufp->fullBit(oldp+2131,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[28]));
    bufp->fullBit(oldp+2132,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[29]));
    bufp->fullBit(oldp+2133,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[30]));
    bufp->fullBit(oldp+2134,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[31]));
    bufp->fullBit(oldp+2135,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1_dirt_w_en_pipe_0));
    bufp->fullBit(oldp+2136,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1
                             [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1_dirt_w_addr_pipe_0]));
    bufp->fullBit(oldp+2137,((1U & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_waymask) 
                                    >> 1U))));
    bufp->fullCData(oldp+2138,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state),3);
    bufp->fullCData(oldp+2139,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state),2);
    bufp->fullCData(oldp+2140,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state),2);
    bufp->fullWData(oldp+2141,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg),512);
    bufp->fullQData(oldp+2157,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_addr_reg),64);
    bufp->fullBit(oldp+2159,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_r));
    bufp->fullCData(oldp+2160,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count_write),4);
    bufp->fullQData(oldp+2161,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_addr_reg),64);
    bufp->fullWData(oldp+2163,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg),512);
    bufp->fullQData(oldp+2179,(((0U == (7U & (IData)(
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
    bufp->fullQData(oldp+2181,(((0U == (7U & (IData)(
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
    bufp->fullQData(oldp+2183,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask),64);
    bufp->fullQData(oldp+2185,((((QData)((IData)(((1U 
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
    bufp->fullWData(oldp+2187,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo_lo),128);
    bufp->fullQData(oldp+2191,((((QData)((IData)(((1U 
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
    bufp->fullWData(oldp+2193,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo),256);
    bufp->fullQData(oldp+2201,((((QData)((IData)(((1U 
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
    bufp->fullWData(oldp+2203,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi_lo),128);
    bufp->fullQData(oldp+2207,((((QData)((IData)(((1U 
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
    bufp->fullWData(oldp+2209,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi),256);
    bufp->fullWData(oldp+2217,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend),512);
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
    bufp->fullWData(oldp+2233,(__Vtemp_hc34456c3__0),512);
    bufp->fullWData(oldp+2249,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[0]),512);
    bufp->fullWData(oldp+2265,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[1]),512);
    bufp->fullWData(oldp+2281,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[2]),512);
    bufp->fullWData(oldp+2297,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[3]),512);
    bufp->fullWData(oldp+2313,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[4]),512);
    bufp->fullWData(oldp+2329,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[5]),512);
    bufp->fullWData(oldp+2345,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[6]),512);
    bufp->fullWData(oldp+2361,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[7]),512);
    bufp->fullWData(oldp+2377,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[8]),512);
    bufp->fullWData(oldp+2393,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[9]),512);
    bufp->fullWData(oldp+2409,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[10]),512);
    bufp->fullWData(oldp+2425,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[11]),512);
    bufp->fullWData(oldp+2441,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[12]),512);
    bufp->fullWData(oldp+2457,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[13]),512);
    bufp->fullWData(oldp+2473,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[14]),512);
    bufp->fullWData(oldp+2489,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[15]),512);
    bufp->fullWData(oldp+2505,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[16]),512);
    bufp->fullWData(oldp+2521,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[17]),512);
    bufp->fullWData(oldp+2537,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[18]),512);
    bufp->fullWData(oldp+2553,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[19]),512);
    bufp->fullWData(oldp+2569,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[20]),512);
    bufp->fullWData(oldp+2585,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[21]),512);
    bufp->fullWData(oldp+2601,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[22]),512);
    bufp->fullWData(oldp+2617,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[23]),512);
    bufp->fullWData(oldp+2633,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[24]),512);
    bufp->fullWData(oldp+2649,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[25]),512);
    bufp->fullWData(oldp+2665,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[26]),512);
    bufp->fullWData(oldp+2681,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[27]),512);
    bufp->fullWData(oldp+2697,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[28]),512);
    bufp->fullWData(oldp+2713,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[29]),512);
    bufp->fullWData(oldp+2729,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[30]),512);
    bufp->fullWData(oldp+2745,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[31]),512);
    bufp->fullBit(oldp+2761,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_en_pipe_0));
    bufp->fullCData(oldp+2762,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0),5);
    bufp->fullCData(oldp+2763,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_addr),5);
    bufp->fullWData(oldp+2764,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[0]),512);
    bufp->fullWData(oldp+2780,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[1]),512);
    bufp->fullWData(oldp+2796,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[2]),512);
    bufp->fullWData(oldp+2812,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[3]),512);
    bufp->fullWData(oldp+2828,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[4]),512);
    bufp->fullWData(oldp+2844,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[5]),512);
    bufp->fullWData(oldp+2860,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[6]),512);
    bufp->fullWData(oldp+2876,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[7]),512);
    bufp->fullWData(oldp+2892,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[8]),512);
    bufp->fullWData(oldp+2908,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[9]),512);
    bufp->fullWData(oldp+2924,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[10]),512);
    bufp->fullWData(oldp+2940,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[11]),512);
    bufp->fullWData(oldp+2956,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[12]),512);
    bufp->fullWData(oldp+2972,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[13]),512);
    bufp->fullWData(oldp+2988,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[14]),512);
    bufp->fullWData(oldp+3004,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[15]),512);
    bufp->fullWData(oldp+3020,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[16]),512);
    bufp->fullWData(oldp+3036,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[17]),512);
    bufp->fullWData(oldp+3052,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[18]),512);
    bufp->fullWData(oldp+3068,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[19]),512);
    bufp->fullWData(oldp+3084,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[20]),512);
    bufp->fullWData(oldp+3100,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[21]),512);
    bufp->fullWData(oldp+3116,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[22]),512);
    bufp->fullWData(oldp+3132,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[23]),512);
    bufp->fullWData(oldp+3148,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[24]),512);
    bufp->fullWData(oldp+3164,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[25]),512);
    bufp->fullWData(oldp+3180,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[26]),512);
    bufp->fullWData(oldp+3196,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[27]),512);
    bufp->fullWData(oldp+3212,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[28]),512);
    bufp->fullWData(oldp+3228,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[29]),512);
    bufp->fullWData(oldp+3244,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[30]),512);
    bufp->fullWData(oldp+3260,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[31]),512);
    bufp->fullBit(oldp+3276,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_en_pipe_0));
    bufp->fullQData(oldp+3277,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[0]),53);
    bufp->fullQData(oldp+3279,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[1]),53);
    bufp->fullQData(oldp+3281,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[2]),53);
    bufp->fullQData(oldp+3283,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[3]),53);
    bufp->fullQData(oldp+3285,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[4]),53);
    bufp->fullQData(oldp+3287,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[5]),53);
    bufp->fullQData(oldp+3289,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[6]),53);
    bufp->fullQData(oldp+3291,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[7]),53);
    bufp->fullQData(oldp+3293,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[8]),53);
    bufp->fullQData(oldp+3295,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[9]),53);
    bufp->fullQData(oldp+3297,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[10]),53);
    bufp->fullQData(oldp+3299,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[11]),53);
    bufp->fullQData(oldp+3301,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[12]),53);
    bufp->fullQData(oldp+3303,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[13]),53);
    bufp->fullQData(oldp+3305,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[14]),53);
    bufp->fullQData(oldp+3307,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[15]),53);
    bufp->fullQData(oldp+3309,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[16]),53);
    bufp->fullQData(oldp+3311,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[17]),53);
    bufp->fullQData(oldp+3313,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[18]),53);
    bufp->fullQData(oldp+3315,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[19]),53);
    bufp->fullQData(oldp+3317,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[20]),53);
    bufp->fullQData(oldp+3319,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[21]),53);
    bufp->fullQData(oldp+3321,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[22]),53);
    bufp->fullQData(oldp+3323,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[23]),53);
    bufp->fullQData(oldp+3325,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[24]),53);
    bufp->fullQData(oldp+3327,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[25]),53);
    bufp->fullQData(oldp+3329,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[26]),53);
    bufp->fullQData(oldp+3331,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[27]),53);
    bufp->fullQData(oldp+3333,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[28]),53);
    bufp->fullQData(oldp+3335,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[29]),53);
    bufp->fullQData(oldp+3337,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[30]),53);
    bufp->fullQData(oldp+3339,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[31]),53);
    bufp->fullBit(oldp+3341,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_tag_w_en_pipe_0));
    bufp->fullCData(oldp+3342,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_tag_w_addr_pipe_0),5);
    bufp->fullQData(oldp+3343,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_MPORT_1_data),53);
    bufp->fullQData(oldp+3345,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[0]),53);
    bufp->fullQData(oldp+3347,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[1]),53);
    bufp->fullQData(oldp+3349,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[2]),53);
    bufp->fullQData(oldp+3351,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[3]),53);
    bufp->fullQData(oldp+3353,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[4]),53);
    bufp->fullQData(oldp+3355,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[5]),53);
    bufp->fullQData(oldp+3357,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[6]),53);
    bufp->fullQData(oldp+3359,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[7]),53);
    bufp->fullQData(oldp+3361,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[8]),53);
    bufp->fullQData(oldp+3363,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[9]),53);
    bufp->fullQData(oldp+3365,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[10]),53);
    bufp->fullQData(oldp+3367,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[11]),53);
    bufp->fullQData(oldp+3369,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[12]),53);
    bufp->fullQData(oldp+3371,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[13]),53);
    bufp->fullQData(oldp+3373,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[14]),53);
    bufp->fullQData(oldp+3375,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[15]),53);
    bufp->fullQData(oldp+3377,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[16]),53);
    bufp->fullQData(oldp+3379,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[17]),53);
    bufp->fullQData(oldp+3381,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[18]),53);
    bufp->fullQData(oldp+3383,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[19]),53);
    bufp->fullQData(oldp+3385,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[20]),53);
    bufp->fullQData(oldp+3387,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[21]),53);
    bufp->fullQData(oldp+3389,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[22]),53);
    bufp->fullQData(oldp+3391,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[23]),53);
    bufp->fullQData(oldp+3393,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[24]),53);
    bufp->fullQData(oldp+3395,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[25]),53);
    bufp->fullQData(oldp+3397,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[26]),53);
    bufp->fullQData(oldp+3399,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[27]),53);
    bufp->fullQData(oldp+3401,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[28]),53);
    bufp->fullQData(oldp+3403,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[29]),53);
    bufp->fullQData(oldp+3405,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[30]),53);
    bufp->fullQData(oldp+3407,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[31]),53);
    bufp->fullBit(oldp+3409,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1_tag_w_en_pipe_0));
    bufp->fullCData(oldp+3410,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0),5);
    bufp->fullBit(oldp+3411,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[0]));
    bufp->fullBit(oldp+3412,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[1]));
    bufp->fullBit(oldp+3413,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[2]));
    bufp->fullBit(oldp+3414,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[3]));
    bufp->fullBit(oldp+3415,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[4]));
    bufp->fullBit(oldp+3416,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[5]));
    bufp->fullBit(oldp+3417,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[6]));
    bufp->fullBit(oldp+3418,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[7]));
    bufp->fullBit(oldp+3419,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[8]));
    bufp->fullBit(oldp+3420,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[9]));
    bufp->fullBit(oldp+3421,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[10]));
    bufp->fullBit(oldp+3422,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[11]));
    bufp->fullBit(oldp+3423,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[12]));
    bufp->fullBit(oldp+3424,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[13]));
    bufp->fullBit(oldp+3425,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[14]));
    bufp->fullBit(oldp+3426,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[15]));
    bufp->fullBit(oldp+3427,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[16]));
    bufp->fullBit(oldp+3428,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[17]));
    bufp->fullBit(oldp+3429,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[18]));
    bufp->fullBit(oldp+3430,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[19]));
    bufp->fullBit(oldp+3431,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[20]));
    bufp->fullBit(oldp+3432,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[21]));
    bufp->fullBit(oldp+3433,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[22]));
    bufp->fullBit(oldp+3434,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[23]));
    bufp->fullBit(oldp+3435,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[24]));
    bufp->fullBit(oldp+3436,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[25]));
    bufp->fullBit(oldp+3437,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[26]));
    bufp->fullBit(oldp+3438,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[27]));
    bufp->fullBit(oldp+3439,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[28]));
    bufp->fullBit(oldp+3440,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[29]));
    bufp->fullBit(oldp+3441,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[30]));
    bufp->fullBit(oldp+3442,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[31]));
    bufp->fullBit(oldp+3443,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_en_pipe_0));
    bufp->fullCData(oldp+3444,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0),5);
    bufp->fullBit(oldp+3445,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[0]));
    bufp->fullBit(oldp+3446,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[1]));
    bufp->fullBit(oldp+3447,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[2]));
    bufp->fullBit(oldp+3448,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[3]));
    bufp->fullBit(oldp+3449,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[4]));
    bufp->fullBit(oldp+3450,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[5]));
    bufp->fullBit(oldp+3451,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[6]));
    bufp->fullBit(oldp+3452,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[7]));
    bufp->fullBit(oldp+3453,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[8]));
    bufp->fullBit(oldp+3454,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[9]));
    bufp->fullBit(oldp+3455,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[10]));
    bufp->fullBit(oldp+3456,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[11]));
    bufp->fullBit(oldp+3457,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[12]));
    bufp->fullBit(oldp+3458,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[13]));
    bufp->fullBit(oldp+3459,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[14]));
    bufp->fullBit(oldp+3460,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[15]));
    bufp->fullBit(oldp+3461,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[16]));
    bufp->fullBit(oldp+3462,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[17]));
    bufp->fullBit(oldp+3463,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[18]));
    bufp->fullBit(oldp+3464,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[19]));
    bufp->fullBit(oldp+3465,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[20]));
    bufp->fullBit(oldp+3466,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[21]));
    bufp->fullBit(oldp+3467,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[22]));
    bufp->fullBit(oldp+3468,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[23]));
    bufp->fullBit(oldp+3469,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[24]));
    bufp->fullBit(oldp+3470,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[25]));
    bufp->fullBit(oldp+3471,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[26]));
    bufp->fullBit(oldp+3472,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[27]));
    bufp->fullBit(oldp+3473,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[28]));
    bufp->fullBit(oldp+3474,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[29]));
    bufp->fullBit(oldp+3475,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[30]));
    bufp->fullBit(oldp+3476,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[31]));
    bufp->fullBit(oldp+3477,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_en_pipe_0));
    bufp->fullCData(oldp+3478,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_addr_pipe_0),5);
    bufp->fullCData(oldp+3479,(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__read_state),2);
    bufp->fullCData(oldp+3480,(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state),2);
    bufp->fullBit(oldp+3481,(vlSelf->clock));
    bufp->fullBit(oldp+3482,(vlSelf->reset));
    bufp->fullQData(oldp+3483,(vlSelf->io_pc),64);
    bufp->fullIData(oldp+3485,(vlSelf->io_inst),32);
    bufp->fullBit(oldp+3486,(1U));
    bufp->fullCData(oldp+3487,(0U),5);
    bufp->fullCData(oldp+3488,(1U),5);
    bufp->fullCData(oldp+3489,(2U),5);
    bufp->fullCData(oldp+3490,(3U),5);
    bufp->fullCData(oldp+3491,(4U),5);
    bufp->fullCData(oldp+3492,(5U),5);
    bufp->fullCData(oldp+3493,(6U),5);
    bufp->fullCData(oldp+3494,(7U),5);
    bufp->fullCData(oldp+3495,(8U),5);
    bufp->fullCData(oldp+3496,(9U),5);
    bufp->fullCData(oldp+3497,(0xaU),5);
    bufp->fullCData(oldp+3498,(0xbU),5);
    bufp->fullCData(oldp+3499,(0xcU),5);
    bufp->fullCData(oldp+3500,(0xdU),5);
    bufp->fullCData(oldp+3501,(0xeU),5);
    bufp->fullCData(oldp+3502,(0xfU),5);
    bufp->fullCData(oldp+3503,(0x10U),5);
    bufp->fullCData(oldp+3504,(0x11U),5);
    bufp->fullCData(oldp+3505,(0x12U),5);
    bufp->fullCData(oldp+3506,(0x13U),5);
    bufp->fullCData(oldp+3507,(0x14U),5);
    bufp->fullCData(oldp+3508,(0x15U),5);
    bufp->fullCData(oldp+3509,(0x16U),5);
    bufp->fullCData(oldp+3510,(0x17U),5);
    bufp->fullCData(oldp+3511,(0x18U),5);
    bufp->fullCData(oldp+3512,(0x19U),5);
    bufp->fullCData(oldp+3513,(0x1aU),5);
    bufp->fullCData(oldp+3514,(0x1bU),5);
    bufp->fullCData(oldp+3515,(0x1cU),5);
    bufp->fullCData(oldp+3516,(0x1dU),5);
    bufp->fullCData(oldp+3517,(0x1eU),5);
    bufp->fullCData(oldp+3518,(0x1fU),5);
    bufp->fullCData(oldp+3519,(0U),2);
    bufp->fullCData(oldp+3520,(1U),4);
    bufp->fullCData(oldp+3521,(3U),3);
    bufp->fullCData(oldp+3522,(0U),3);
    bufp->fullCData(oldp+3523,(1U),2);
    bufp->fullCData(oldp+3524,(0U),4);
    bufp->fullCData(oldp+3525,(vlSelf->CoreTop__DOT__MMEM_rd_id),4);
    bufp->fullCData(oldp+3526,(vlSelf->CoreTop__DOT__MMEM_rd_resp),2);
    bufp->fullCData(oldp+3527,(vlSelf->CoreTop__DOT__MMEM_wr_id),4);
    bufp->fullBit(oldp+3528,(0U));
    bufp->fullIData(oldp+3529,(0x40U),32);
    bufp->fullCData(oldp+3530,(2U),2);
}
