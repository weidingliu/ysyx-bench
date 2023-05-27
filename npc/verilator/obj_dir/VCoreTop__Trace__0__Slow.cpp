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
    tracep->declBit(c+3453,"clock", false,-1);
    tracep->declBit(c+3454,"reset", false,-1);
    tracep->declQuad(c+3455,"io_pc", false,-1, 63,0);
    tracep->declBus(c+3457,"io_inst", false,-1, 31,0);
    tracep->pushNamePrefix("CoreTop ");
    tracep->declBit(c+3453,"clock", false,-1);
    tracep->declBit(c+3454,"reset", false,-1);
    tracep->declQuad(c+3455,"io_pc", false,-1, 63,0);
    tracep->declBus(c+3457,"io_inst", false,-1, 31,0);
    tracep->declBit(c+3453,"IF_clock", false,-1);
    tracep->declBit(c+3454,"IF_reset", false,-1);
    tracep->declBit(c+1,"IF_io_branch_io_is_branch", false,-1);
    tracep->declBit(c+2,"IF_io_branch_io_is_jump", false,-1);
    tracep->declQuad(c+3,"IF_io_branch_io_dnpc", false,-1, 63,0);
    tracep->declBit(c+5,"IF_io_cache_req_addr_req_valid", false,-1);
    tracep->declQuad(c+6,"IF_io_cache_req_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+5,"IF_io_cache_req_rdata_rep_ready", false,-1);
    tracep->declBit(c+8,"IF_io_cache_req_rdata_rep_valid", false,-1);
    tracep->declQuad(c+9,"IF_io_cache_req_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+5,"IF_io_out_ready", false,-1);
    tracep->declBit(c+8,"IF_io_out_valid", false,-1);
    tracep->declQuad(c+6,"IF_io_out_bits_PC", false,-1, 63,0);
    tracep->declBus(c+11,"IF_io_out_bits_Inst", false,-1, 31,0);
    tracep->declBit(c+12,"IF_io_flush", false,-1);
    tracep->declBit(c+5,"ID_io_in_ready", false,-1);
    tracep->declBit(c+13,"ID_io_in_valid", false,-1);
    tracep->declQuad(c+14,"ID_io_in_bits_PC", false,-1, 63,0);
    tracep->declBus(c+16,"ID_io_in_bits_Inst", false,-1, 31,0);
    tracep->declQuad(c+17,"ID_io_REG1", false,-1, 63,0);
    tracep->declQuad(c+19,"ID_io_REG2", false,-1, 63,0);
    tracep->declBit(c+12,"ID_io_flush", false,-1);
    tracep->declBit(c+5,"ID_io_out_ready", false,-1);
    tracep->declBit(c+13,"ID_io_out_valid", false,-1);
    tracep->declBus(c+21,"ID_io_out_bits_ctrl_signal_src1Type", false,-1, 2,0);
    tracep->declBus(c+22,"ID_io_out_bits_ctrl_signal_src2Type", false,-1, 2,0);
    tracep->declBus(c+23,"ID_io_out_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+24,"ID_io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBus(c+25,"ID_io_out_bits_ctrl_signal_rfSrc1", false,-1, 4,0);
    tracep->declBus(c+26,"ID_io_out_bits_ctrl_signal_rfSrc2", false,-1, 4,0);
    tracep->declBit(c+27,"ID_io_out_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+28,"ID_io_out_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declBus(c+29,"ID_io_out_bits_ctrl_signal_rfDest", false,-1, 4,0);
    tracep->declQuad(c+17,"ID_io_out_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+19,"ID_io_out_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+30,"ID_io_out_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declQuad(c+14,"ID_io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+16,"ID_io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declBit(c+3453,"EX_clock", false,-1);
    tracep->declBit(c+3454,"EX_reset", false,-1);
    tracep->declBit(c+5,"EX_io_in_ready", false,-1);
    tracep->declBit(c+32,"EX_io_in_valid", false,-1);
    tracep->declBus(c+33,"EX_io_in_bits_ctrl_signal_src1Type", false,-1, 2,0);
    tracep->declBus(c+34,"EX_io_in_bits_ctrl_signal_src2Type", false,-1, 2,0);
    tracep->declBus(c+35,"EX_io_in_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+36,"EX_io_in_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBus(c+37,"EX_io_in_bits_ctrl_signal_rfSrc1", false,-1, 4,0);
    tracep->declBus(c+38,"EX_io_in_bits_ctrl_signal_rfSrc2", false,-1, 4,0);
    tracep->declBit(c+39,"EX_io_in_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+40,"EX_io_in_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declBus(c+41,"EX_io_in_bits_ctrl_signal_rfDest", false,-1, 4,0);
    tracep->declQuad(c+42,"EX_io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+44,"EX_io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+46,"EX_io_in_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declQuad(c+48,"EX_io_in_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+50,"EX_io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+51,"EX_io_src1", false,-1, 63,0);
    tracep->declQuad(c+53,"EX_io_src2", false,-1, 63,0);
    tracep->declBit(c+1,"EX_io_branchIO_is_branch", false,-1);
    tracep->declBit(c+2,"EX_io_branchIO_is_jump", false,-1);
    tracep->declQuad(c+3,"EX_io_branchIO_dnpc", false,-1, 63,0);
    tracep->declBit(c+55,"EX_io_out_ready", false,-1);
    tracep->declBit(c+56,"EX_io_out_valid", false,-1);
    tracep->declBus(c+35,"EX_io_out_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+36,"EX_io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+39,"EX_io_out_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+40,"EX_io_out_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+48,"EX_io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+50,"EX_io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+3,"EX_io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+41,"EX_io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+57,"EX_io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+58,"EX_io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+60,"EX_io_out_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+62,"EX_io_out_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+46,"EX_io_out_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declBit(c+64,"EX_io_is_break", false,-1);
    tracep->declBit(c+12,"EX_io_is_flush", false,-1);
    tracep->declBit(c+65,"DIP_is_break", false,-1);
    tracep->declQuad(c+66,"DIP_rf_0", false,-1, 63,0);
    tracep->declQuad(c+68,"DIP_rf_1", false,-1, 63,0);
    tracep->declQuad(c+70,"DIP_rf_2", false,-1, 63,0);
    tracep->declQuad(c+72,"DIP_rf_3", false,-1, 63,0);
    tracep->declQuad(c+74,"DIP_rf_4", false,-1, 63,0);
    tracep->declQuad(c+76,"DIP_rf_5", false,-1, 63,0);
    tracep->declQuad(c+78,"DIP_rf_6", false,-1, 63,0);
    tracep->declQuad(c+80,"DIP_rf_7", false,-1, 63,0);
    tracep->declQuad(c+82,"DIP_rf_8", false,-1, 63,0);
    tracep->declQuad(c+84,"DIP_rf_9", false,-1, 63,0);
    tracep->declQuad(c+86,"DIP_rf_10", false,-1, 63,0);
    tracep->declQuad(c+88,"DIP_rf_11", false,-1, 63,0);
    tracep->declQuad(c+90,"DIP_rf_12", false,-1, 63,0);
    tracep->declQuad(c+92,"DIP_rf_13", false,-1, 63,0);
    tracep->declQuad(c+94,"DIP_rf_14", false,-1, 63,0);
    tracep->declQuad(c+96,"DIP_rf_15", false,-1, 63,0);
    tracep->declQuad(c+98,"DIP_rf_16", false,-1, 63,0);
    tracep->declQuad(c+100,"DIP_rf_17", false,-1, 63,0);
    tracep->declQuad(c+102,"DIP_rf_18", false,-1, 63,0);
    tracep->declQuad(c+104,"DIP_rf_19", false,-1, 63,0);
    tracep->declQuad(c+106,"DIP_rf_20", false,-1, 63,0);
    tracep->declQuad(c+108,"DIP_rf_21", false,-1, 63,0);
    tracep->declQuad(c+110,"DIP_rf_22", false,-1, 63,0);
    tracep->declQuad(c+112,"DIP_rf_23", false,-1, 63,0);
    tracep->declQuad(c+114,"DIP_rf_24", false,-1, 63,0);
    tracep->declQuad(c+116,"DIP_rf_25", false,-1, 63,0);
    tracep->declQuad(c+118,"DIP_rf_26", false,-1, 63,0);
    tracep->declQuad(c+120,"DIP_rf_27", false,-1, 63,0);
    tracep->declQuad(c+122,"DIP_rf_28", false,-1, 63,0);
    tracep->declQuad(c+124,"DIP_rf_29", false,-1, 63,0);
    tracep->declQuad(c+126,"DIP_rf_30", false,-1, 63,0);
    tracep->declQuad(c+128,"DIP_rf_31", false,-1, 63,0);
    tracep->declBus(c+130,"DIP_inst", false,-1, 31,0);
    tracep->declQuad(c+131,"DIP_pc", false,-1, 63,0);
    tracep->declBit(c+133,"DIP_inst_valid", false,-1);
    tracep->declQuad(c+134,"DIP_dnpc", false,-1, 63,0);
    tracep->declBit(c+136,"DIP_is_skip", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+137+i*2,"rf", true,(i+0), 63,0);
    }
    tracep->declBit(c+3460,"rf_bypass_io_Reg1_MPORT_en", false,-1);
    tracep->declBus(c+25,"rf_bypass_io_Reg1_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+201,"rf_bypass_io_Reg1_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3460,"rf_bypass_io_Reg2_MPORT_en", false,-1);
    tracep->declBus(c+26,"rf_bypass_io_Reg2_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+203,"rf_bypass_io_Reg2_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3460,"rf_DIP_io_rf_0_MPORT_en", false,-1);
    tracep->declBus(c+3461,"rf_DIP_io_rf_0_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+66,"rf_DIP_io_rf_0_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3460,"rf_DIP_io_rf_1_MPORT_en", false,-1);
    tracep->declBus(c+3462,"rf_DIP_io_rf_1_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+68,"rf_DIP_io_rf_1_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3460,"rf_DIP_io_rf_2_MPORT_en", false,-1);
    tracep->declBus(c+3463,"rf_DIP_io_rf_2_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+70,"rf_DIP_io_rf_2_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3460,"rf_DIP_io_rf_3_MPORT_en", false,-1);
    tracep->declBus(c+3464,"rf_DIP_io_rf_3_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+72,"rf_DIP_io_rf_3_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3460,"rf_DIP_io_rf_4_MPORT_en", false,-1);
    tracep->declBus(c+3465,"rf_DIP_io_rf_4_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+74,"rf_DIP_io_rf_4_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3460,"rf_DIP_io_rf_5_MPORT_en", false,-1);
    tracep->declBus(c+3466,"rf_DIP_io_rf_5_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+76,"rf_DIP_io_rf_5_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3460,"rf_DIP_io_rf_6_MPORT_en", false,-1);
    tracep->declBus(c+3467,"rf_DIP_io_rf_6_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+78,"rf_DIP_io_rf_6_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3460,"rf_DIP_io_rf_7_MPORT_en", false,-1);
    tracep->declBus(c+3468,"rf_DIP_io_rf_7_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+80,"rf_DIP_io_rf_7_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3460,"rf_DIP_io_rf_8_MPORT_en", false,-1);
    tracep->declBus(c+3469,"rf_DIP_io_rf_8_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+82,"rf_DIP_io_rf_8_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3460,"rf_DIP_io_rf_9_MPORT_en", false,-1);
    tracep->declBus(c+3470,"rf_DIP_io_rf_9_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+84,"rf_DIP_io_rf_9_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3460,"rf_DIP_io_rf_10_MPORT_en", false,-1);
    tracep->declBus(c+3471,"rf_DIP_io_rf_10_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+86,"rf_DIP_io_rf_10_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3460,"rf_DIP_io_rf_11_MPORT_en", false,-1);
    tracep->declBus(c+3472,"rf_DIP_io_rf_11_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+88,"rf_DIP_io_rf_11_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3460,"rf_DIP_io_rf_12_MPORT_en", false,-1);
    tracep->declBus(c+3473,"rf_DIP_io_rf_12_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+90,"rf_DIP_io_rf_12_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3460,"rf_DIP_io_rf_13_MPORT_en", false,-1);
    tracep->declBus(c+3474,"rf_DIP_io_rf_13_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+92,"rf_DIP_io_rf_13_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3460,"rf_DIP_io_rf_14_MPORT_en", false,-1);
    tracep->declBus(c+3475,"rf_DIP_io_rf_14_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+94,"rf_DIP_io_rf_14_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3460,"rf_DIP_io_rf_15_MPORT_en", false,-1);
    tracep->declBus(c+3476,"rf_DIP_io_rf_15_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+96,"rf_DIP_io_rf_15_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3460,"rf_DIP_io_rf_16_MPORT_en", false,-1);
    tracep->declBus(c+3477,"rf_DIP_io_rf_16_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+98,"rf_DIP_io_rf_16_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3460,"rf_DIP_io_rf_17_MPORT_en", false,-1);
    tracep->declBus(c+3478,"rf_DIP_io_rf_17_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+100,"rf_DIP_io_rf_17_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3460,"rf_DIP_io_rf_18_MPORT_en", false,-1);
    tracep->declBus(c+3479,"rf_DIP_io_rf_18_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+102,"rf_DIP_io_rf_18_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3460,"rf_DIP_io_rf_19_MPORT_en", false,-1);
    tracep->declBus(c+3480,"rf_DIP_io_rf_19_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+104,"rf_DIP_io_rf_19_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3460,"rf_DIP_io_rf_20_MPORT_en", false,-1);
    tracep->declBus(c+3481,"rf_DIP_io_rf_20_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+106,"rf_DIP_io_rf_20_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3460,"rf_DIP_io_rf_21_MPORT_en", false,-1);
    tracep->declBus(c+3482,"rf_DIP_io_rf_21_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+108,"rf_DIP_io_rf_21_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3460,"rf_DIP_io_rf_22_MPORT_en", false,-1);
    tracep->declBus(c+3483,"rf_DIP_io_rf_22_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+110,"rf_DIP_io_rf_22_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3460,"rf_DIP_io_rf_23_MPORT_en", false,-1);
    tracep->declBus(c+3484,"rf_DIP_io_rf_23_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+112,"rf_DIP_io_rf_23_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3460,"rf_DIP_io_rf_24_MPORT_en", false,-1);
    tracep->declBus(c+3485,"rf_DIP_io_rf_24_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+114,"rf_DIP_io_rf_24_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3460,"rf_DIP_io_rf_25_MPORT_en", false,-1);
    tracep->declBus(c+3486,"rf_DIP_io_rf_25_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+116,"rf_DIP_io_rf_25_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3460,"rf_DIP_io_rf_26_MPORT_en", false,-1);
    tracep->declBus(c+3487,"rf_DIP_io_rf_26_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+118,"rf_DIP_io_rf_26_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3460,"rf_DIP_io_rf_27_MPORT_en", false,-1);
    tracep->declBus(c+3488,"rf_DIP_io_rf_27_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+120,"rf_DIP_io_rf_27_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3460,"rf_DIP_io_rf_28_MPORT_en", false,-1);
    tracep->declBus(c+3489,"rf_DIP_io_rf_28_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+122,"rf_DIP_io_rf_28_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3460,"rf_DIP_io_rf_29_MPORT_en", false,-1);
    tracep->declBus(c+3490,"rf_DIP_io_rf_29_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+124,"rf_DIP_io_rf_29_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3460,"rf_DIP_io_rf_30_MPORT_en", false,-1);
    tracep->declBus(c+3491,"rf_DIP_io_rf_30_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+126,"rf_DIP_io_rf_30_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3460,"rf_DIP_io_rf_31_MPORT_en", false,-1);
    tracep->declBus(c+3492,"rf_DIP_io_rf_31_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+128,"rf_DIP_io_rf_31_MPORT_data", false,-1, 63,0);
    tracep->declQuad(c+205,"rf_MPORT_data", false,-1, 63,0);
    tracep->declBus(c+207,"rf_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+3460,"rf_MPORT_mask", false,-1);
    tracep->declBit(c+208,"rf_MPORT_en", false,-1);
    tracep->declBit(c+55,"MEM_io_in_ready", false,-1);
    tracep->declBit(c+209,"MEM_io_in_valid", false,-1);
    tracep->declBus(c+210,"MEM_io_in_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+211,"MEM_io_in_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+212,"MEM_io_in_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+213,"MEM_io_in_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+214,"MEM_io_in_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+216,"MEM_io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+217,"MEM_io_in_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+219,"MEM_io_in_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declQuad(c+220,"MEM_io_in_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+222,"MEM_io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+224,"MEM_io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+226,"MEM_io_in_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declBit(c+3460,"MEM_io_out_ready", false,-1);
    tracep->declBit(c+228,"MEM_io_out_valid", false,-1);
    tracep->declBit(c+229,"MEM_io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+212,"MEM_io_out_bits_ctrl_signal_rfWen", false,-1);
    tracep->declQuad(c+214,"MEM_io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+216,"MEM_io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+217,"MEM_io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBit(c+230,"MEM_io_out_bits_ctrl_flow_skip", false,-1);
    tracep->declBus(c+219,"MEM_io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+231,"MEM_io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+232,"MEM_io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declBit(c+234,"MEM_io_cache_io_addr_req_valid", false,-1);
    tracep->declQuad(c+235,"MEM_io_cache_io_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+237,"MEM_io_cache_io_addr_req_bits_ce", false,-1);
    tracep->declBit(c+238,"MEM_io_cache_io_addr_req_bits_we", false,-1);
    tracep->declBit(c+239,"MEM_io_cache_io_rdata_rep_valid", false,-1);
    tracep->declQuad(c+240,"MEM_io_cache_io_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+242,"MEM_io_cache_io_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+244,"MEM_io_cache_io_wdata_req_bits_wmask", false,-1, 7,0);
    tracep->declBit(c+245,"MEM_io_cache_io_wdata_rep", false,-1);
    tracep->declBit(c+246,"WB_io_in_valid", false,-1);
    tracep->declBit(c+247,"WB_io_in_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+248,"WB_io_in_bits_ctrl_signal_rfWen", false,-1);
    tracep->declQuad(c+249,"WB_io_in_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+251,"WB_io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+252,"WB_io_in_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBit(c+254,"WB_io_in_bits_ctrl_flow_skip", false,-1);
    tracep->declBus(c+207,"WB_io_in_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declQuad(c+255,"WB_io_in_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declBit(c+3460,"WB_io_out_ready", false,-1);
    tracep->declBit(c+246,"WB_io_out_valid", false,-1);
    tracep->declBit(c+257,"WB_io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declQuad(c+249,"WB_io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+251,"WB_io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+252,"WB_io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBit(c+254,"WB_io_out_bits_ctrl_flow_skip", false,-1);
    tracep->declBus(c+207,"WB_io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+208,"WB_io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+255,"WB_io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+41,"bypass_io_EX_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+57,"bypass_io_EX_rf_rfWen", false,-1);
    tracep->declQuad(c+58,"bypass_io_EX_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+219,"bypass_io_MEM_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+231,"bypass_io_MEM_rf_rfWen", false,-1);
    tracep->declQuad(c+232,"bypass_io_MEM_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+207,"bypass_io_WB_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+208,"bypass_io_WB_rf_rfWen", false,-1);
    tracep->declQuad(c+255,"bypass_io_WB_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+258,"bypass_io_Reg1", false,-1, 63,0);
    tracep->declBus(c+25,"bypass_io_reg_index1", false,-1, 4,0);
    tracep->declQuad(c+260,"bypass_io_Reg2", false,-1, 63,0);
    tracep->declBus(c+26,"bypass_io_reg_index2", false,-1, 4,0);
    tracep->declQuad(c+17,"bypass_io_Bypass_REG1", false,-1, 63,0);
    tracep->declQuad(c+19,"bypass_io_Bypass_REG2", false,-1, 63,0);
    tracep->declBus(c+219,"mem_bypass_io_MEM_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+231,"mem_bypass_io_MEM_rf_rfWen", false,-1);
    tracep->declQuad(c+232,"mem_bypass_io_MEM_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+42,"mem_bypass_io_Reg1", false,-1, 63,0);
    tracep->declBus(c+37,"mem_bypass_io_reg_index1", false,-1, 4,0);
    tracep->declQuad(c+44,"mem_bypass_io_Reg2", false,-1, 63,0);
    tracep->declBus(c+38,"mem_bypass_io_reg_index2", false,-1, 4,0);
    tracep->declQuad(c+51,"mem_bypass_io_Bypass_REG1", false,-1, 63,0);
    tracep->declQuad(c+53,"mem_bypass_io_Bypass_REG2", false,-1, 63,0);
    tracep->declBit(c+3453,"ICACHE_clock", false,-1);
    tracep->declBit(c+3454,"ICACHE_reset", false,-1);
    tracep->declBit(c+5,"ICACHE_io_in_addr_req_valid", false,-1);
    tracep->declQuad(c+6,"ICACHE_io_in_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+5,"ICACHE_io_in_rdata_rep_ready", false,-1);
    tracep->declBit(c+8,"ICACHE_io_in_rdata_rep_valid", false,-1);
    tracep->declQuad(c+9,"ICACHE_io_in_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+12,"ICACHE_io_flush", false,-1);
    tracep->declBit(c+262,"ICACHE_io_out_addr_req_valid", false,-1);
    tracep->declQuad(c+263,"ICACHE_io_out_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+262,"ICACHE_io_out_addr_req_bits_ce", false,-1);
    tracep->declBit(c+265,"ICACHE_io_out_rdata_rep_valid", false,-1);
    tracep->declQuad(c+266,"ICACHE_io_out_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+3453,"If_axi_birdge_clock", false,-1);
    tracep->declBit(c+3454,"If_axi_birdge_reset", false,-1);
    tracep->declBit(c+262,"If_axi_birdge_io_in_addr_req_valid", false,-1);
    tracep->declQuad(c+263,"If_axi_birdge_io_in_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+262,"If_axi_birdge_io_in_addr_req_bits_ce", false,-1);
    tracep->declBit(c+3493,"If_axi_birdge_io_in_addr_req_bits_we", false,-1);
    tracep->declBit(c+265,"If_axi_birdge_io_in_rdata_rep_valid", false,-1);
    tracep->declQuad(c+266,"If_axi_birdge_io_in_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+3494,"If_axi_birdge_io_in_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+3496,"If_axi_birdge_io_in_wdata_req_bits_wmask", false,-1, 7,0);
    tracep->declBit(c+268,"If_axi_birdge_io_in_wdata_rep", false,-1);
    tracep->declBit(c+269,"If_axi_birdge_io_out_raddr_req_ready", false,-1);
    tracep->declBit(c+270,"If_axi_birdge_io_out_raddr_req_valid", false,-1);
    tracep->declQuad(c+263,"If_axi_birdge_io_out_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+269,"If_axi_birdge_io_out_waddr_req_ready", false,-1);
    tracep->declBit(c+3493,"If_axi_birdge_io_out_waddr_req_valid", false,-1);
    tracep->declQuad(c+263,"If_axi_birdge_io_out_waddr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+3460,"If_axi_birdge_io_out_rdata_rep_ready", false,-1);
    tracep->declBit(c+271,"If_axi_birdge_io_out_rdata_rep_valid", false,-1);
    tracep->declQuad(c+266,"If_axi_birdge_io_out_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+3493,"If_axi_birdge_io_out_wdata_req_valid", false,-1);
    tracep->declQuad(c+3494,"If_axi_birdge_io_out_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+3496,"If_axi_birdge_io_out_wdata_req_bits_wmask", false,-1, 7,0);
    tracep->declBit(c+272,"If_axi_birdge_io_out_wb_ready", false,-1);
    tracep->declBit(c+268,"If_axi_birdge_io_out_wb_valid", false,-1);
    tracep->declBus(c+3497,"If_axi_birdge_io_out_wb_bits", false,-1, 1,0);
    tracep->declBit(c+3453,"MEM_axi_birdge_clock", false,-1);
    tracep->declBit(c+3454,"MEM_axi_birdge_reset", false,-1);
    tracep->declBit(c+273,"MEM_axi_birdge_io_in_addr_req_valid", false,-1);
    tracep->declQuad(c+274,"MEM_axi_birdge_io_in_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+276,"MEM_axi_birdge_io_in_addr_req_bits_ce", false,-1);
    tracep->declBit(c+277,"MEM_axi_birdge_io_in_addr_req_bits_we", false,-1);
    tracep->declBit(c+278,"MEM_axi_birdge_io_in_rdata_rep_valid", false,-1);
    tracep->declQuad(c+279,"MEM_axi_birdge_io_in_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+281,"MEM_axi_birdge_io_in_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+283,"MEM_axi_birdge_io_in_wdata_req_bits_wmask", false,-1, 7,0);
    tracep->declBit(c+284,"MEM_axi_birdge_io_in_wdata_rep", false,-1);
    tracep->declBit(c+285,"MEM_axi_birdge_io_out_raddr_req_ready", false,-1);
    tracep->declBit(c+286,"MEM_axi_birdge_io_out_raddr_req_valid", false,-1);
    tracep->declQuad(c+274,"MEM_axi_birdge_io_out_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+285,"MEM_axi_birdge_io_out_waddr_req_ready", false,-1);
    tracep->declBit(c+287,"MEM_axi_birdge_io_out_waddr_req_valid", false,-1);
    tracep->declQuad(c+274,"MEM_axi_birdge_io_out_waddr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+3460,"MEM_axi_birdge_io_out_rdata_rep_ready", false,-1);
    tracep->declBit(c+288,"MEM_axi_birdge_io_out_rdata_rep_valid", false,-1);
    tracep->declQuad(c+279,"MEM_axi_birdge_io_out_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+289,"MEM_axi_birdge_io_out_wdata_req_valid", false,-1);
    tracep->declQuad(c+281,"MEM_axi_birdge_io_out_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+283,"MEM_axi_birdge_io_out_wdata_req_bits_wmask", false,-1, 7,0);
    tracep->declBit(c+290,"MEM_axi_birdge_io_out_wb_ready", false,-1);
    tracep->declBit(c+284,"MEM_axi_birdge_io_out_wb_valid", false,-1);
    tracep->declBus(c+3497,"MEM_axi_birdge_io_out_wb_bits", false,-1, 1,0);
    tracep->declBit(c+3454,"IFMEM_reset", false,-1);
    tracep->declBit(c+3453,"IFMEM_clk", false,-1);
    tracep->declBit(c+270,"IFMEM_ar_valid", false,-1);
    tracep->declBit(c+269,"IFMEM_ar_ready", false,-1);
    tracep->declQuad(c+263,"IFMEM_araddr", false,-1, 63,0);
    tracep->declBit(c+271,"IFMEM_r_valid", false,-1);
    tracep->declBit(c+3460,"IFMEM_r_ready", false,-1);
    tracep->declQuad(c+266,"IFMEM_rdata", false,-1, 63,0);
    tracep->declBit(c+3493,"IFMEM_aw_valid", false,-1);
    tracep->declBit(c+269,"IFMEM_aw_ready", false,-1);
    tracep->declQuad(c+263,"IFMEM_awaddr", false,-1, 63,0);
    tracep->declBit(c+3493,"IFMEM_w_valid", false,-1);
    tracep->declBit(c+269,"IFMEM_w_ready", false,-1);
    tracep->declQuad(c+3494,"IFMEM_wdata", false,-1, 63,0);
    tracep->declBus(c+3496,"IFMEM_wstrb", false,-1, 7,0);
    tracep->declBit(c+268,"IFMEM_bvalid", false,-1);
    tracep->declBit(c+272,"IFMEM_bready", false,-1);
    tracep->declBus(c+3497,"IFMEM_bresp", false,-1, 1,0);
    tracep->declBit(c+3454,"MMEM_reset", false,-1);
    tracep->declBit(c+3453,"MMEM_clk", false,-1);
    tracep->declBit(c+286,"MMEM_ar_valid", false,-1);
    tracep->declBit(c+285,"MMEM_ar_ready", false,-1);
    tracep->declQuad(c+274,"MMEM_araddr", false,-1, 63,0);
    tracep->declBit(c+288,"MMEM_r_valid", false,-1);
    tracep->declBit(c+3460,"MMEM_r_ready", false,-1);
    tracep->declQuad(c+279,"MMEM_rdata", false,-1, 63,0);
    tracep->declBit(c+287,"MMEM_aw_valid", false,-1);
    tracep->declBit(c+285,"MMEM_aw_ready", false,-1);
    tracep->declQuad(c+274,"MMEM_awaddr", false,-1, 63,0);
    tracep->declBit(c+289,"MMEM_w_valid", false,-1);
    tracep->declBit(c+285,"MMEM_w_ready", false,-1);
    tracep->declQuad(c+281,"MMEM_wdata", false,-1, 63,0);
    tracep->declBus(c+283,"MMEM_wstrb", false,-1, 7,0);
    tracep->declBit(c+284,"MMEM_bvalid", false,-1);
    tracep->declBit(c+290,"MMEM_bready", false,-1);
    tracep->declBus(c+3497,"MMEM_bresp", false,-1, 1,0);
    tracep->declBit(c+3453,"MMIO_clock", false,-1);
    tracep->declBit(c+3454,"MMIO_reset", false,-1);
    tracep->declBit(c+234,"MMIO_io_in_addr_req_valid", false,-1);
    tracep->declQuad(c+235,"MMIO_io_in_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+237,"MMIO_io_in_addr_req_bits_ce", false,-1);
    tracep->declBit(c+238,"MMIO_io_in_addr_req_bits_we", false,-1);
    tracep->declBit(c+239,"MMIO_io_in_rdata_rep_valid", false,-1);
    tracep->declQuad(c+240,"MMIO_io_in_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+242,"MMIO_io_in_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+244,"MMIO_io_in_wdata_req_bits_wmask", false,-1, 7,0);
    tracep->declBit(c+245,"MMIO_io_in_wdata_rep", false,-1);
    tracep->declBit(c+273,"MMIO_io_out_addr_req_valid", false,-1);
    tracep->declQuad(c+274,"MMIO_io_out_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+276,"MMIO_io_out_addr_req_bits_ce", false,-1);
    tracep->declBit(c+277,"MMIO_io_out_addr_req_bits_we", false,-1);
    tracep->declBit(c+278,"MMIO_io_out_rdata_rep_valid", false,-1);
    tracep->declQuad(c+279,"MMIO_io_out_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+281,"MMIO_io_out_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+283,"MMIO_io_out_wdata_req_bits_wmask", false,-1, 7,0);
    tracep->declBit(c+284,"MMIO_io_out_wdata_rep", false,-1);
    tracep->declBit(c+13,"valid", false,-1);
    tracep->declQuad(c+14,"ID_io_in_bits_r_PC", false,-1, 63,0);
    tracep->declBus(c+16,"ID_io_in_bits_r_Inst", false,-1, 31,0);
    tracep->declBit(c+32,"valid_1", false,-1);
    tracep->declBus(c+33,"EX_io_in_bits_r_ctrl_signal_src1Type", false,-1, 2,0);
    tracep->declBus(c+34,"EX_io_in_bits_r_ctrl_signal_src2Type", false,-1, 2,0);
    tracep->declBus(c+35,"EX_io_in_bits_r_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+36,"EX_io_in_bits_r_ctrl_signal_inst_valid", false,-1);
    tracep->declBus(c+37,"EX_io_in_bits_r_ctrl_signal_rfSrc1", false,-1, 4,0);
    tracep->declBus(c+38,"EX_io_in_bits_r_ctrl_signal_rfSrc2", false,-1, 4,0);
    tracep->declBit(c+39,"EX_io_in_bits_r_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+40,"EX_io_in_bits_r_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declBus(c+41,"EX_io_in_bits_r_ctrl_signal_rfDest", false,-1, 4,0);
    tracep->declQuad(c+42,"EX_io_in_bits_r_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+44,"EX_io_in_bits_r_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+46,"EX_io_in_bits_r_ctrl_data_Imm", false,-1, 63,0);
    tracep->declQuad(c+48,"EX_io_in_bits_r_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+50,"EX_io_in_bits_r_ctrl_flow_inst", false,-1, 31,0);
    tracep->declBit(c+209,"valid_2", false,-1);
    tracep->declBus(c+210,"MEM_io_in_bits_r_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+211,"MEM_io_in_bits_r_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+212,"MEM_io_in_bits_r_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+213,"MEM_io_in_bits_r_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+214,"MEM_io_in_bits_r_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+216,"MEM_io_in_bits_r_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+217,"MEM_io_in_bits_r_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+219,"MEM_io_in_bits_r_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declQuad(c+220,"MEM_io_in_bits_r_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+222,"MEM_io_in_bits_r_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+224,"MEM_io_in_bits_r_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+226,"MEM_io_in_bits_r_ctrl_data_Imm", false,-1, 63,0);
    tracep->declBit(c+246,"valid_3", false,-1);
    tracep->declBit(c+247,"WB_io_in_bits_r_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+248,"WB_io_in_bits_r_ctrl_signal_rfWen", false,-1);
    tracep->declQuad(c+249,"WB_io_in_bits_r_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+251,"WB_io_in_bits_r_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+252,"WB_io_in_bits_r_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBit(c+254,"WB_io_in_bits_r_ctrl_flow_skip", false,-1);
    tracep->declBus(c+207,"WB_io_in_bits_r_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declQuad(c+255,"WB_io_in_bits_r_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declBit(c+291,"DIP_io_is_break_REG", false,-1);
    tracep->declBit(c+65,"DIP_io_is_break_REG_1", false,-1);
    tracep->declBus(c+130,"DIP_io_inst_REG", false,-1, 31,0);
    tracep->declBit(c+136,"DIP_io_is_skip_REG", false,-1);
    tracep->declBit(c+133,"DIP_io_inst_valid_REG", false,-1);
    tracep->declQuad(c+131,"DIP_io_pc_REG", false,-1, 63,0);
    tracep->declQuad(c+134,"DIP_io_dnpc_REG", false,-1, 63,0);
    tracep->pushNamePrefix("DIP ");
    tracep->declBit(c+65,"is_break", false,-1);
    tracep->declBus(c+130,"inst", false,-1, 31,0);
    tracep->declQuad(c+66,"rf_0", false,-1, 63,0);
    tracep->declQuad(c+68,"rf_1", false,-1, 63,0);
    tracep->declQuad(c+70,"rf_2", false,-1, 63,0);
    tracep->declQuad(c+72,"rf_3", false,-1, 63,0);
    tracep->declQuad(c+74,"rf_4", false,-1, 63,0);
    tracep->declQuad(c+76,"rf_5", false,-1, 63,0);
    tracep->declQuad(c+78,"rf_6", false,-1, 63,0);
    tracep->declQuad(c+80,"rf_7", false,-1, 63,0);
    tracep->declQuad(c+82,"rf_8", false,-1, 63,0);
    tracep->declQuad(c+84,"rf_9", false,-1, 63,0);
    tracep->declQuad(c+86,"rf_10", false,-1, 63,0);
    tracep->declQuad(c+88,"rf_11", false,-1, 63,0);
    tracep->declQuad(c+90,"rf_12", false,-1, 63,0);
    tracep->declQuad(c+92,"rf_13", false,-1, 63,0);
    tracep->declQuad(c+94,"rf_14", false,-1, 63,0);
    tracep->declQuad(c+96,"rf_15", false,-1, 63,0);
    tracep->declQuad(c+98,"rf_16", false,-1, 63,0);
    tracep->declQuad(c+100,"rf_17", false,-1, 63,0);
    tracep->declQuad(c+102,"rf_18", false,-1, 63,0);
    tracep->declQuad(c+104,"rf_19", false,-1, 63,0);
    tracep->declQuad(c+106,"rf_20", false,-1, 63,0);
    tracep->declQuad(c+108,"rf_21", false,-1, 63,0);
    tracep->declQuad(c+110,"rf_22", false,-1, 63,0);
    tracep->declQuad(c+112,"rf_23", false,-1, 63,0);
    tracep->declQuad(c+114,"rf_24", false,-1, 63,0);
    tracep->declQuad(c+116,"rf_25", false,-1, 63,0);
    tracep->declQuad(c+118,"rf_26", false,-1, 63,0);
    tracep->declQuad(c+120,"rf_27", false,-1, 63,0);
    tracep->declQuad(c+122,"rf_28", false,-1, 63,0);
    tracep->declQuad(c+124,"rf_29", false,-1, 63,0);
    tracep->declQuad(c+126,"rf_30", false,-1, 63,0);
    tracep->declQuad(c+128,"rf_31", false,-1, 63,0);
    tracep->declBit(c+133,"inst_valid", false,-1);
    tracep->declBit(c+136,"is_skip", false,-1);
    tracep->declQuad(c+131,"pc", false,-1, 63,0);
    tracep->declQuad(c+134,"dnpc", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+292+i*2,"rf", true,(i+0), 63,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+356+i*1,"IN", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EX ");
    tracep->declBit(c+3453,"clock", false,-1);
    tracep->declBit(c+3454,"reset", false,-1);
    tracep->declBit(c+5,"io_in_ready", false,-1);
    tracep->declBit(c+32,"io_in_valid", false,-1);
    tracep->declBus(c+33,"io_in_bits_ctrl_signal_src1Type", false,-1, 2,0);
    tracep->declBus(c+34,"io_in_bits_ctrl_signal_src2Type", false,-1, 2,0);
    tracep->declBus(c+35,"io_in_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+36,"io_in_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBus(c+37,"io_in_bits_ctrl_signal_rfSrc1", false,-1, 4,0);
    tracep->declBus(c+38,"io_in_bits_ctrl_signal_rfSrc2", false,-1, 4,0);
    tracep->declBit(c+39,"io_in_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+40,"io_in_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declBus(c+41,"io_in_bits_ctrl_signal_rfDest", false,-1, 4,0);
    tracep->declQuad(c+42,"io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+44,"io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+46,"io_in_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declQuad(c+48,"io_in_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+50,"io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+51,"io_src1", false,-1, 63,0);
    tracep->declQuad(c+53,"io_src2", false,-1, 63,0);
    tracep->declBit(c+1,"io_branchIO_is_branch", false,-1);
    tracep->declBit(c+2,"io_branchIO_is_jump", false,-1);
    tracep->declQuad(c+3,"io_branchIO_dnpc", false,-1, 63,0);
    tracep->declBit(c+55,"io_out_ready", false,-1);
    tracep->declBit(c+56,"io_out_valid", false,-1);
    tracep->declBus(c+35,"io_out_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+36,"io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+39,"io_out_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+40,"io_out_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+48,"io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+50,"io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+3,"io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+41,"io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+57,"io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+58,"io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+60,"io_out_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+62,"io_out_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+46,"io_out_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declBit(c+64,"io_is_break", false,-1);
    tracep->declBit(c+12,"io_is_flush", false,-1);
    tracep->declQuad(c+363,"CSRDIFF_mepc", false,-1, 63,0);
    tracep->declQuad(c+365,"CSRDIFF_mcause", false,-1, 63,0);
    tracep->declQuad(c+367,"CSRDIFF_mstatus", false,-1, 63,0);
    tracep->declQuad(c+369,"CSRDIFF_mtvec", false,-1, 63,0);
    tracep->declBit(c+3453,"mul_clock", false,-1);
    tracep->declBit(c+3454,"mul_reset", false,-1);
    tracep->declBit(c+371,"mul_io_in_valid", false,-1);
    tracep->declQuad(c+372,"mul_io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+374,"mul_io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declBit(c+376,"mul_io_out_valid", false,-1);
    tracep->declQuad(c+377,"mul_io_out_bits_result_result_lo", false,-1, 63,0);
    tracep->declBit(c+3453,"div_clock", false,-1);
    tracep->declBit(c+3454,"div_reset", false,-1);
    tracep->declBit(c+379,"div_io_in_valid", false,-1);
    tracep->declBit(c+380,"div_io_in_bits_ctrl_flow_div_signed", false,-1);
    tracep->declQuad(c+381,"div_io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+383,"div_io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declBit(c+385,"div_io_out_valid", false,-1);
    tracep->declQuad(c+386,"div_io_out_bits_result_quotient", false,-1, 63,0);
    tracep->declQuad(c+388,"div_io_out_bits_result_remainder", false,-1, 63,0);
    tracep->declBit(c+390,"is_mul", false,-1);
    tracep->declBit(c+391,"is_div", false,-1);
    tracep->declBit(c+392,"is_divw", false,-1);
    tracep->declBit(c+380,"is_div_sign", false,-1);
    tracep->declQuad(c+393,"mepc", false,-1, 63,0);
    tracep->declQuad(c+395,"mcause", false,-1, 63,0);
    tracep->declQuad(c+397,"mstatus", false,-1, 63,0);
    tracep->declQuad(c+399,"mtvec", false,-1, 63,0);
    tracep->declQuad(c+401,"mie", false,-1, 63,0);
    tracep->declQuad(c+403,"mip", false,-1, 63,0);
    tracep->declQuad(c+405,"src1", false,-1, 63,0);
    tracep->declQuad(c+407,"src2", false,-1, 63,0);
    tracep->declBit(c+409,"alu_result_sign", false,-1);
    tracep->declBit(c+410,"alu_result_sign_2", false,-1);
    tracep->declBit(c+411,"alu_result_sign_3", false,-1);
    tracep->declBit(c+412,"alu_result_sign_4", false,-1);
    tracep->declBit(c+413,"alu_result_sign_6", false,-1);
    tracep->declQuad(c+414,"alu_result", false,-1, 63,0);
    tracep->declBit(c+416,"shift_result_sign", false,-1);
    tracep->declBit(c+417,"shift_result_sign_1", false,-1);
    tracep->declBit(c+418,"shift_result_sign_2", false,-1);
    tracep->declBit(c+419,"shift_result_sign_3", false,-1);
    tracep->declBit(c+420,"div_io_in_bits_ctrl_data_src1_sign", false,-1);
    tracep->declBit(c+421,"div_io_in_bits_ctrl_data_src2_sign", false,-1);
    tracep->declQuad(c+422,"compar_result", false,-1, 63,0);
    tracep->declQuad(c+424,"jump_result", false,-1, 63,0);
    tracep->declQuad(c+426,"shift_result", false,-1, 63,0);
    tracep->declQuad(c+428,"branch_result", false,-1, 63,0);
    tracep->declBit(c+430,"branch_flag", false,-1);
    tracep->declQuad(c+431,"csr_data", false,-1, 63,0);
    tracep->declQuad(c+433,"CSRDIFF_io_mtvec_REG", false,-1, 63,0);
    tracep->declQuad(c+369,"CSRDIFF_io_mtvec_REG_1", false,-1, 63,0);
    tracep->declQuad(c+435,"CSRDIFF_io_mcause_REG", false,-1, 63,0);
    tracep->declQuad(c+365,"CSRDIFF_io_mcause_REG_1", false,-1, 63,0);
    tracep->declQuad(c+437,"CSRDIFF_io_mepc_REG", false,-1, 63,0);
    tracep->declQuad(c+363,"CSRDIFF_io_mepc_REG_1", false,-1, 63,0);
    tracep->declQuad(c+439,"CSRDIFF_io_mstatus_REG", false,-1, 63,0);
    tracep->declQuad(c+367,"CSRDIFF_io_mstatus_REG_1", false,-1, 63,0);
    tracep->pushNamePrefix("CSRDIFF ");
    tracep->declQuad(c+363,"mepc", false,-1, 63,0);
    tracep->declQuad(c+365,"mcause", false,-1, 63,0);
    tracep->declQuad(c+367,"mstatus", false,-1, 63,0);
    tracep->declQuad(c+369,"mtvec", false,-1, 63,0);
    for (int i = 0; i < 6; ++i) {
        tracep->declQuad(c+441+i*2,"inst_csr", true,(i+0), 63,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("div ");
    tracep->declBit(c+3453,"clock", false,-1);
    tracep->declBit(c+3454,"reset", false,-1);
    tracep->declBit(c+379,"io_in_valid", false,-1);
    tracep->declBit(c+380,"io_in_bits_ctrl_flow_div_signed", false,-1);
    tracep->declQuad(c+381,"io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+383,"io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declBit(c+385,"io_out_valid", false,-1);
    tracep->declQuad(c+386,"io_out_bits_result_quotient", false,-1, 63,0);
    tracep->declQuad(c+388,"io_out_bits_result_remainder", false,-1, 63,0);
    tracep->declArray(c+453,"dividend", false,-1, 127,0);
    tracep->declQuad(c+457,"divisor", false,-1, 63,0);
    tracep->declQuad(c+459,"S", false,-1, 63,0);
    tracep->declBus(c+461,"state", false,-1, 1,0);
    tracep->declBus(c+462,"count", false,-1, 5,0);
    tracep->declBit(c+463,"wrap_wrap", false,-1);
    tracep->declBit(c+464,"s", false,-1);
    tracep->declArray(c+465,"res_div", false,-1, 64,0);
    tracep->declQuad(c+468,"negative_s", false,-1, 63,0);
    tracep->declQuad(c+470,"negative_r", false,-1, 63,0);
    tracep->declQuad(c+472,"s_o", false,-1, 63,0);
    tracep->declQuad(c+474,"r_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mul ");
    tracep->declBit(c+3453,"clock", false,-1);
    tracep->declBit(c+3454,"reset", false,-1);
    tracep->declBit(c+371,"io_in_valid", false,-1);
    tracep->declQuad(c+372,"io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+374,"io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declBit(c+376,"io_out_valid", false,-1);
    tracep->declQuad(c+377,"io_out_bits_result_result_lo", false,-1, 63,0);
    tracep->declBit(c+3453,"mult_clock", false,-1);
    tracep->declBit(c+3454,"mult_reset", false,-1);
    tracep->declBit(c+371,"mult_io_in_valid", false,-1);
    tracep->declQuad(c+372,"mult_io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+374,"mult_io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declBit(c+376,"mult_io_out_valid", false,-1);
    tracep->declQuad(c+377,"mult_io_out_bits_result_result_lo", false,-1, 63,0);
    tracep->pushNamePrefix("mult ");
    tracep->declBit(c+3453,"clock", false,-1);
    tracep->declBit(c+3454,"reset", false,-1);
    tracep->declBit(c+371,"io_in_valid", false,-1);
    tracep->declQuad(c+372,"io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+374,"io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declBit(c+376,"io_out_valid", false,-1);
    tracep->declQuad(c+377,"io_out_bits_result_result_lo", false,-1, 63,0);
    tracep->declBus(c+476,"partial_io_y_3", false,-1, 2,0);
    tracep->declArray(c+477,"partial_io_x", false,-1, 131,0);
    tracep->declArray(c+482,"partial_io_p", false,-1, 131,0);
    tracep->declBit(c+487,"partial_io_c", false,-1);
    tracep->declArray(c+488,"multiplier", false,-1, 65,0);
    tracep->declArray(c+477,"multiplicand", false,-1, 131,0);
    tracep->declArray(c+491,"p", false,-1, 131,0);
    tracep->declBus(c+496,"count", false,-1, 6,0);
    tracep->declArray(c+497,"temp", false,-1, 131,0);
    tracep->declBit(c+502,"p_sign", false,-1);
    tracep->pushNamePrefix("partial ");
    tracep->declBus(c+476,"io_y_3", false,-1, 2,0);
    tracep->declArray(c+477,"io_x", false,-1, 131,0);
    tracep->declArray(c+482,"io_p", false,-1, 131,0);
    tracep->declBit(c+487,"io_c", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("ICACHE ");
    tracep->declBit(c+3453,"clock", false,-1);
    tracep->declBit(c+3454,"reset", false,-1);
    tracep->declBit(c+5,"io_in_addr_req_valid", false,-1);
    tracep->declQuad(c+6,"io_in_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+5,"io_in_rdata_rep_ready", false,-1);
    tracep->declBit(c+8,"io_in_rdata_rep_valid", false,-1);
    tracep->declQuad(c+9,"io_in_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+12,"io_flush", false,-1);
    tracep->declBit(c+262,"io_out_addr_req_valid", false,-1);
    tracep->declQuad(c+263,"io_out_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+262,"io_out_addr_req_bits_ce", false,-1);
    tracep->declBit(c+265,"io_out_rdata_rep_valid", false,-1);
    tracep->declQuad(c+266,"io_out_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+3453,"Cache_data_clock", false,-1);
    tracep->declBit(c+503,"Cache_data_io_in_valid", false,-1);
    tracep->declQuad(c+6,"Cache_data_io_in_addr", false,-1, 63,0);
    tracep->declQuad(c+504,"Cache_data_io_write_bus_addr", false,-1, 63,0);
    tracep->declBit(c+506,"Cache_data_io_write_bus_valid", false,-1);
    tracep->declBus(c+507,"Cache_data_io_write_bus_waymask", false,-1, 1,0);
    tracep->declArray(c+508,"Cache_data_io_write_bus_wdata", false,-1, 511,0);
    tracep->declBit(c+503,"Cache_data_io_out_valid", false,-1);
    tracep->declQuad(c+524,"Cache_data_io_out_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+526,"Cache_data_io_out_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+528,"Cache_data_io_out_bits_meat_valid_0", false,-1);
    tracep->declBit(c+529,"Cache_data_io_out_bits_meat_valid_1", false,-1);
    tracep->declArray(c+530,"Cache_data_io_out_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+546,"Cache_data_io_out_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+562,"Cache_data_io_out_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBus(c+564,"Cache_data_io_out_bits_ctrl_data_index", false,-1, 4,0);
    tracep->declBus(c+565,"Cache_data_io_out_bits_ctrl_data_offset", false,-1, 5,0);
    tracep->declBit(c+566,"Scanf_io_in_valid", false,-1);
    tracep->declQuad(c+524,"Scanf_io_in_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+526,"Scanf_io_in_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+528,"Scanf_io_in_bits_meat_valid_0", false,-1);
    tracep->declBit(c+529,"Scanf_io_in_bits_meat_valid_1", false,-1);
    tracep->declArray(c+530,"Scanf_io_in_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+546,"Scanf_io_in_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+562,"Scanf_io_in_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBus(c+564,"Scanf_io_in_bits_ctrl_data_index", false,-1, 4,0);
    tracep->declBit(c+567,"Scanf_io_out_bits_hit", false,-1);
    tracep->declArray(c+568,"Scanf_io_out_bits_data", false,-1, 511,0);
    tracep->declBus(c+564,"Scanf_io_out_bits_meta_ctrl_data_index", false,-1, 4,0);
    tracep->declBit(c+584,"Scanf_io_out_bits_hit_way_0", false,-1);
    tracep->declBit(c+585,"Scanf_io_out_bits_hit_way_1", false,-1);
    tracep->declQuad(c+524,"Scanf_io_out_bits_tag_0", false,-1, 52,0);
    tracep->declQuad(c+526,"Scanf_io_out_bits_tag_1", false,-1, 52,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+586+i*1,"lru", true,(i+0));
    }
    tracep->declBit(c+618,"lru_lru_w_MPORT_en", false,-1);
    tracep->declBus(c+619,"lru_lru_w_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+620,"lru_lru_w_MPORT_data", false,-1);
    tracep->declBit(c+3460,"lru_MPORT_data", false,-1);
    tracep->declBus(c+564,"lru_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+3460,"lru_MPORT_mask", false,-1);
    tracep->declBit(c+621,"lru_MPORT_en", false,-1);
    tracep->declBit(c+3493,"lru_MPORT_1_data", false,-1);
    tracep->declBus(c+564,"lru_MPORT_1_addr", false,-1, 4,0);
    tracep->declBit(c+3460,"lru_MPORT_1_mask", false,-1);
    tracep->declBit(c+622,"lru_MPORT_1_en", false,-1);
    tracep->declBit(c+3493,"lru_MPORT_2_data", false,-1);
    tracep->declBus(c+564,"lru_MPORT_2_addr", false,-1, 4,0);
    tracep->declBit(c+3460,"lru_MPORT_2_mask", false,-1);
    tracep->declBit(c+623,"lru_MPORT_2_en", false,-1);
    tracep->declBit(c+3460,"lru_MPORT_3_data", false,-1);
    tracep->declBus(c+564,"lru_MPORT_3_addr", false,-1, 4,0);
    tracep->declBit(c+3460,"lru_MPORT_3_mask", false,-1);
    tracep->declBit(c+624,"lru_MPORT_3_en", false,-1);
    tracep->declBit(c+618,"lru_lru_w_MPORT_en_pipe_0", false,-1);
    tracep->declBus(c+619,"lru_lru_w_MPORT_addr_pipe_0", false,-1, 4,0);
    tracep->declBus(c+625,"state", false,-1, 1,0);
    tracep->declArray(c+626,"data_line_reg", false,-1, 511,0);
    tracep->declQuad(c+263,"mem_addr_reg", false,-1, 63,0);
    tracep->declBit(c+642,"lru_r", false,-1);
    tracep->declBus(c+643,"count", false,-1, 3,0);
    tracep->declBit(c+506,"s", false,-1);
    tracep->declBit(c+584,"hit_way_0", false,-1);
    tracep->declBit(c+585,"hit_way_1", false,-1);
    tracep->declBit(c+620,"lru_w", false,-1);
    tracep->declQuad(c+644,"hit_data", false,-1, 63,0);
    tracep->declQuad(c+646,"mem_data", false,-1, 63,0);
    tracep->declBit(c+566,"Scanf_io_in_valid_REG", false,-1);
    tracep->pushNamePrefix("Cache_data ");
    tracep->declBit(c+3453,"clock", false,-1);
    tracep->declBit(c+503,"io_in_valid", false,-1);
    tracep->declQuad(c+6,"io_in_addr", false,-1, 63,0);
    tracep->declQuad(c+504,"io_write_bus_addr", false,-1, 63,0);
    tracep->declBit(c+506,"io_write_bus_valid", false,-1);
    tracep->declBus(c+507,"io_write_bus_waymask", false,-1, 1,0);
    tracep->declArray(c+508,"io_write_bus_wdata", false,-1, 511,0);
    tracep->declBit(c+503,"io_out_valid", false,-1);
    tracep->declQuad(c+524,"io_out_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+526,"io_out_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+528,"io_out_bits_meat_valid_0", false,-1);
    tracep->declBit(c+529,"io_out_bits_meat_valid_1", false,-1);
    tracep->declArray(c+530,"io_out_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+546,"io_out_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+562,"io_out_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBus(c+564,"io_out_bits_ctrl_data_index", false,-1, 4,0);
    tracep->declBus(c+565,"io_out_bits_ctrl_data_offset", false,-1, 5,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declArray(c+648+i*16,"data_0", true,(i+0), 511,0);
    }
    tracep->declBit(c+1160,"data_0_data_w_en", false,-1);
    tracep->declBus(c+1161,"data_0_data_w_addr", false,-1, 4,0);
    tracep->declArray(c+530,"data_0_data_w_data", false,-1, 511,0);
    tracep->declArray(c+508,"data_0_MPORT_data", false,-1, 511,0);
    tracep->declBus(c+1162,"data_0_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+1163,"data_0_MPORT_mask", false,-1);
    tracep->declBit(c+506,"data_0_MPORT_en", false,-1);
    tracep->declBit(c+1160,"data_0_data_w_en_pipe_0", false,-1);
    tracep->declBus(c+1161,"data_0_data_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declArray(c+1164+i*16,"data_1", true,(i+0), 511,0);
    }
    tracep->declBit(c+1676,"data_1_data_w_en", false,-1);
    tracep->declBus(c+1161,"data_1_data_w_addr", false,-1, 4,0);
    tracep->declArray(c+546,"data_1_data_w_data", false,-1, 511,0);
    tracep->declArray(c+508,"data_1_MPORT_data", false,-1, 511,0);
    tracep->declBus(c+1162,"data_1_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+1677,"data_1_MPORT_mask", false,-1);
    tracep->declBit(c+506,"data_1_MPORT_en", false,-1);
    tracep->declBit(c+1676,"data_1_data_w_en_pipe_0", false,-1);
    tracep->declBus(c+1161,"data_1_data_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+1678+i*2,"TAG_0", true,(i+0), 52,0);
    }
    tracep->declBit(c+1742,"TAG_0_tag_w_en", false,-1);
    tracep->declBus(c+1743,"TAG_0_tag_w_addr", false,-1, 4,0);
    tracep->declQuad(c+524,"TAG_0_tag_w_data", false,-1, 52,0);
    tracep->declQuad(c+1744,"TAG_0_MPORT_1_data", false,-1, 52,0);
    tracep->declBus(c+1162,"TAG_0_MPORT_1_addr", false,-1, 4,0);
    tracep->declBit(c+1163,"TAG_0_MPORT_1_mask", false,-1);
    tracep->declBit(c+506,"TAG_0_MPORT_1_en", false,-1);
    tracep->declBit(c+1742,"TAG_0_tag_w_en_pipe_0", false,-1);
    tracep->declBus(c+1743,"TAG_0_tag_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+1746+i*2,"TAG_1", true,(i+0), 52,0);
    }
    tracep->declBit(c+1810,"TAG_1_tag_w_en", false,-1);
    tracep->declBus(c+1811,"TAG_1_tag_w_addr", false,-1, 4,0);
    tracep->declQuad(c+526,"TAG_1_tag_w_data", false,-1, 52,0);
    tracep->declQuad(c+1744,"TAG_1_MPORT_1_data", false,-1, 52,0);
    tracep->declBus(c+1162,"TAG_1_MPORT_1_addr", false,-1, 4,0);
    tracep->declBit(c+1677,"TAG_1_MPORT_1_mask", false,-1);
    tracep->declBit(c+506,"TAG_1_MPORT_1_en", false,-1);
    tracep->declBit(c+1810,"TAG_1_tag_w_en_pipe_0", false,-1);
    tracep->declBus(c+1811,"TAG_1_tag_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+1812+i*1,"data_valid_0", true,(i+0));
    }
    tracep->declBit(c+1844,"data_valid_0_valid_w_en", false,-1);
    tracep->declBus(c+1845,"data_valid_0_valid_w_addr", false,-1, 4,0);
    tracep->declBit(c+528,"data_valid_0_valid_w_data", false,-1);
    tracep->declBit(c+3460,"data_valid_0_MPORT_2_data", false,-1);
    tracep->declBus(c+1162,"data_valid_0_MPORT_2_addr", false,-1, 4,0);
    tracep->declBit(c+1163,"data_valid_0_MPORT_2_mask", false,-1);
    tracep->declBit(c+506,"data_valid_0_MPORT_2_en", false,-1);
    tracep->declBit(c+1844,"data_valid_0_valid_w_en_pipe_0", false,-1);
    tracep->declBus(c+1845,"data_valid_0_valid_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+1846+i*1,"data_valid_1", true,(i+0));
    }
    tracep->declBit(c+1878,"data_valid_1_valid_w_en", false,-1);
    tracep->declBus(c+1879,"data_valid_1_valid_w_addr", false,-1, 4,0);
    tracep->declBit(c+529,"data_valid_1_valid_w_data", false,-1);
    tracep->declBit(c+3460,"data_valid_1_MPORT_2_data", false,-1);
    tracep->declBus(c+1162,"data_valid_1_MPORT_2_addr", false,-1, 4,0);
    tracep->declBit(c+1677,"data_valid_1_MPORT_2_mask", false,-1);
    tracep->declBit(c+506,"data_valid_1_MPORT_2_en", false,-1);
    tracep->declBit(c+1878,"data_valid_1_valid_w_en_pipe_0", false,-1);
    tracep->declBus(c+1879,"data_valid_1_valid_w_addr_pipe_0", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Scanf ");
    tracep->declBit(c+566,"io_in_valid", false,-1);
    tracep->declQuad(c+524,"io_in_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+526,"io_in_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+528,"io_in_bits_meat_valid_0", false,-1);
    tracep->declBit(c+529,"io_in_bits_meat_valid_1", false,-1);
    tracep->declArray(c+530,"io_in_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+546,"io_in_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+562,"io_in_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBus(c+564,"io_in_bits_ctrl_data_index", false,-1, 4,0);
    tracep->declBit(c+567,"io_out_bits_hit", false,-1);
    tracep->declArray(c+568,"io_out_bits_data", false,-1, 511,0);
    tracep->declBus(c+564,"io_out_bits_meta_ctrl_data_index", false,-1, 4,0);
    tracep->declBit(c+584,"io_out_bits_hit_way_0", false,-1);
    tracep->declBit(c+585,"io_out_bits_hit_way_1", false,-1);
    tracep->declQuad(c+524,"io_out_bits_tag_0", false,-1, 52,0);
    tracep->declQuad(c+526,"io_out_bits_tag_1", false,-1, 52,0);
    tracep->declBit(c+1880,"hit_way_0_result", false,-1);
    tracep->declBit(c+1881,"hit_way_1_result", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ID ");
    tracep->declBit(c+5,"io_in_ready", false,-1);
    tracep->declBit(c+13,"io_in_valid", false,-1);
    tracep->declQuad(c+14,"io_in_bits_PC", false,-1, 63,0);
    tracep->declBus(c+16,"io_in_bits_Inst", false,-1, 31,0);
    tracep->declQuad(c+17,"io_REG1", false,-1, 63,0);
    tracep->declQuad(c+19,"io_REG2", false,-1, 63,0);
    tracep->declBit(c+12,"io_flush", false,-1);
    tracep->declBit(c+5,"io_out_ready", false,-1);
    tracep->declBit(c+13,"io_out_valid", false,-1);
    tracep->declBus(c+21,"io_out_bits_ctrl_signal_src1Type", false,-1, 2,0);
    tracep->declBus(c+22,"io_out_bits_ctrl_signal_src2Type", false,-1, 2,0);
    tracep->declBus(c+23,"io_out_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+24,"io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBus(c+25,"io_out_bits_ctrl_signal_rfSrc1", false,-1, 4,0);
    tracep->declBus(c+26,"io_out_bits_ctrl_signal_rfSrc2", false,-1, 4,0);
    tracep->declBit(c+27,"io_out_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+28,"io_out_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declBus(c+29,"io_out_bits_ctrl_signal_rfDest", false,-1, 4,0);
    tracep->declQuad(c+17,"io_out_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+19,"io_out_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+30,"io_out_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declQuad(c+14,"io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+16,"io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declBus(c+29,"rd", false,-1, 4,0);
    tracep->declBus(c+1882,"Inst_decode_0", false,-1, 3,0);
    tracep->declBus(c+28,"Inst_decode_2", false,-1, 6,0);
    tracep->declBit(c+1883,"Inst_decode_3", false,-1);
    tracep->declBus(c+1884,"srctype1", false,-1, 1,0);
    tracep->declBit(c+1885,"srctype2", false,-1);
    tracep->declBit(c+1886,"sign", false,-1);
    tracep->declBit(c+1887,"sign_1", false,-1);
    tracep->declBit(c+1888,"sign_2", false,-1);
    tracep->declBit(c+1888,"sign_3", false,-1);
    tracep->declBit(c+1886,"sign_4", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IF ");
    tracep->declBit(c+3453,"clock", false,-1);
    tracep->declBit(c+3454,"reset", false,-1);
    tracep->declBit(c+1,"io_branch_io_is_branch", false,-1);
    tracep->declBit(c+2,"io_branch_io_is_jump", false,-1);
    tracep->declQuad(c+3,"io_branch_io_dnpc", false,-1, 63,0);
    tracep->declBit(c+5,"io_cache_req_addr_req_valid", false,-1);
    tracep->declQuad(c+6,"io_cache_req_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+5,"io_cache_req_rdata_rep_ready", false,-1);
    tracep->declBit(c+8,"io_cache_req_rdata_rep_valid", false,-1);
    tracep->declQuad(c+9,"io_cache_req_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+5,"io_out_ready", false,-1);
    tracep->declBit(c+8,"io_out_valid", false,-1);
    tracep->declQuad(c+6,"io_out_bits_PC", false,-1, 63,0);
    tracep->declBus(c+11,"io_out_bits_Inst", false,-1, 31,0);
    tracep->declBit(c+12,"io_flush", false,-1);
    tracep->declQuad(c+6,"temp", false,-1, 63,0);
    tracep->declBus(c+1889,"inst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IFMEM ");
    tracep->declBit(c+3454,"reset", false,-1);
    tracep->declBit(c+3453,"clk", false,-1);
    tracep->declBit(c+270,"ar_valid", false,-1);
    tracep->declBit(c+269,"ar_ready", false,-1);
    tracep->declQuad(c+263,"araddr", false,-1, 63,0);
    tracep->declBit(c+271,"r_valid", false,-1);
    tracep->declBit(c+3460,"r_ready", false,-1);
    tracep->declQuad(c+266,"rdata", false,-1, 63,0);
    tracep->declBit(c+3493,"aw_valid", false,-1);
    tracep->declBit(c+269,"aw_ready", false,-1);
    tracep->declQuad(c+263,"awaddr", false,-1, 63,0);
    tracep->declBit(c+3493,"w_valid", false,-1);
    tracep->declBit(c+269,"w_ready", false,-1);
    tracep->declQuad(c+3494,"wdata", false,-1, 63,0);
    tracep->declBus(c+3496,"wstrb", false,-1, 7,0);
    tracep->declBit(c+268,"bvalid", false,-1);
    tracep->declBit(c+272,"bready", false,-1);
    tracep->declBus(c+3497,"bresp", false,-1, 1,0);
    tracep->declBus(c+3497,"idle", false,-1, 1,0);
    tracep->declBus(c+3498,"read_busy", false,-1, 1,0);
    tracep->declBus(c+3499,"write_busy", false,-1, 1,0);
    tracep->declBus(c+3500,"wait_bus", false,-1, 1,0);
    tracep->declBus(c+1890,"state", false,-1, 1,0);
    tracep->declBus(c+3458,"next_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("If_axi_birdge ");
    tracep->declBit(c+3453,"clock", false,-1);
    tracep->declBit(c+3454,"reset", false,-1);
    tracep->declBit(c+262,"io_in_addr_req_valid", false,-1);
    tracep->declQuad(c+263,"io_in_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+262,"io_in_addr_req_bits_ce", false,-1);
    tracep->declBit(c+3493,"io_in_addr_req_bits_we", false,-1);
    tracep->declBit(c+265,"io_in_rdata_rep_valid", false,-1);
    tracep->declQuad(c+266,"io_in_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+3494,"io_in_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+3496,"io_in_wdata_req_bits_wmask", false,-1, 7,0);
    tracep->declBit(c+268,"io_in_wdata_rep", false,-1);
    tracep->declBit(c+269,"io_out_raddr_req_ready", false,-1);
    tracep->declBit(c+270,"io_out_raddr_req_valid", false,-1);
    tracep->declQuad(c+263,"io_out_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+269,"io_out_waddr_req_ready", false,-1);
    tracep->declBit(c+3493,"io_out_waddr_req_valid", false,-1);
    tracep->declQuad(c+263,"io_out_waddr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+3460,"io_out_rdata_rep_ready", false,-1);
    tracep->declBit(c+271,"io_out_rdata_rep_valid", false,-1);
    tracep->declQuad(c+266,"io_out_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+3493,"io_out_wdata_req_valid", false,-1);
    tracep->declQuad(c+3494,"io_out_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+3496,"io_out_wdata_req_bits_wmask", false,-1, 7,0);
    tracep->declBit(c+272,"io_out_wb_ready", false,-1);
    tracep->declBit(c+268,"io_out_wb_valid", false,-1);
    tracep->declBus(c+3497,"io_out_wb_bits", false,-1, 1,0);
    tracep->declBit(c+1891,"ar_state", false,-1);
    tracep->declBit(c+272,"aw_state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MEM ");
    tracep->declBit(c+55,"io_in_ready", false,-1);
    tracep->declBit(c+209,"io_in_valid", false,-1);
    tracep->declBus(c+210,"io_in_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+211,"io_in_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+212,"io_in_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+213,"io_in_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+214,"io_in_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+216,"io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+217,"io_in_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+219,"io_in_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declQuad(c+220,"io_in_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+222,"io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+224,"io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+226,"io_in_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declBit(c+3460,"io_out_ready", false,-1);
    tracep->declBit(c+228,"io_out_valid", false,-1);
    tracep->declBit(c+229,"io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+212,"io_out_bits_ctrl_signal_rfWen", false,-1);
    tracep->declQuad(c+214,"io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+216,"io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+217,"io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBit(c+230,"io_out_bits_ctrl_flow_skip", false,-1);
    tracep->declBus(c+219,"io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+231,"io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+232,"io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declBit(c+234,"io_cache_io_addr_req_valid", false,-1);
    tracep->declQuad(c+235,"io_cache_io_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+237,"io_cache_io_addr_req_bits_ce", false,-1);
    tracep->declBit(c+238,"io_cache_io_addr_req_bits_we", false,-1);
    tracep->declBit(c+239,"io_cache_io_rdata_rep_valid", false,-1);
    tracep->declQuad(c+240,"io_cache_io_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+242,"io_cache_io_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+244,"io_cache_io_wdata_req_bits_wmask", false,-1, 7,0);
    tracep->declBit(c+245,"io_cache_io_wdata_rep", false,-1);
    tracep->declQuad(c+235,"addr_temp", false,-1, 63,0);
    tracep->declBit(c+1892,"mem_result_sign", false,-1);
    tracep->declBit(c+1893,"mem_result_sign_1", false,-1);
    tracep->declBit(c+1894,"mem_result_sign_2", false,-1);
    tracep->declBit(c+1895,"mem_result_sign_3", false,-1);
    tracep->declQuad(c+1896,"mem_result", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MEM_axi_birdge ");
    tracep->declBit(c+3453,"clock", false,-1);
    tracep->declBit(c+3454,"reset", false,-1);
    tracep->declBit(c+273,"io_in_addr_req_valid", false,-1);
    tracep->declQuad(c+274,"io_in_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+276,"io_in_addr_req_bits_ce", false,-1);
    tracep->declBit(c+277,"io_in_addr_req_bits_we", false,-1);
    tracep->declBit(c+278,"io_in_rdata_rep_valid", false,-1);
    tracep->declQuad(c+279,"io_in_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+281,"io_in_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+283,"io_in_wdata_req_bits_wmask", false,-1, 7,0);
    tracep->declBit(c+284,"io_in_wdata_rep", false,-1);
    tracep->declBit(c+285,"io_out_raddr_req_ready", false,-1);
    tracep->declBit(c+286,"io_out_raddr_req_valid", false,-1);
    tracep->declQuad(c+274,"io_out_raddr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+285,"io_out_waddr_req_ready", false,-1);
    tracep->declBit(c+287,"io_out_waddr_req_valid", false,-1);
    tracep->declQuad(c+274,"io_out_waddr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+3460,"io_out_rdata_rep_ready", false,-1);
    tracep->declBit(c+288,"io_out_rdata_rep_valid", false,-1);
    tracep->declQuad(c+279,"io_out_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+289,"io_out_wdata_req_valid", false,-1);
    tracep->declQuad(c+281,"io_out_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+283,"io_out_wdata_req_bits_wmask", false,-1, 7,0);
    tracep->declBit(c+290,"io_out_wb_ready", false,-1);
    tracep->declBit(c+284,"io_out_wb_valid", false,-1);
    tracep->declBus(c+3497,"io_out_wb_bits", false,-1, 1,0);
    tracep->declBit(c+1898,"ar_state", false,-1);
    tracep->declBit(c+290,"aw_state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MMEM ");
    tracep->declBit(c+3454,"reset", false,-1);
    tracep->declBit(c+3453,"clk", false,-1);
    tracep->declBit(c+286,"ar_valid", false,-1);
    tracep->declBit(c+285,"ar_ready", false,-1);
    tracep->declQuad(c+274,"araddr", false,-1, 63,0);
    tracep->declBit(c+288,"r_valid", false,-1);
    tracep->declBit(c+3460,"r_ready", false,-1);
    tracep->declQuad(c+279,"rdata", false,-1, 63,0);
    tracep->declBit(c+287,"aw_valid", false,-1);
    tracep->declBit(c+285,"aw_ready", false,-1);
    tracep->declQuad(c+274,"awaddr", false,-1, 63,0);
    tracep->declBit(c+289,"w_valid", false,-1);
    tracep->declBit(c+285,"w_ready", false,-1);
    tracep->declQuad(c+281,"wdata", false,-1, 63,0);
    tracep->declBus(c+283,"wstrb", false,-1, 7,0);
    tracep->declBit(c+284,"bvalid", false,-1);
    tracep->declBit(c+290,"bready", false,-1);
    tracep->declBus(c+3497,"bresp", false,-1, 1,0);
    tracep->declBus(c+3497,"idle", false,-1, 1,0);
    tracep->declBus(c+3498,"read_busy", false,-1, 1,0);
    tracep->declBus(c+3499,"write_busy", false,-1, 1,0);
    tracep->declBus(c+3500,"wait_bus", false,-1, 1,0);
    tracep->declBus(c+1899,"state", false,-1, 1,0);
    tracep->declBus(c+3459,"next_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MMIO ");
    tracep->declBit(c+3453,"clock", false,-1);
    tracep->declBit(c+3454,"reset", false,-1);
    tracep->declBit(c+234,"io_in_addr_req_valid", false,-1);
    tracep->declQuad(c+235,"io_in_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+237,"io_in_addr_req_bits_ce", false,-1);
    tracep->declBit(c+238,"io_in_addr_req_bits_we", false,-1);
    tracep->declBit(c+239,"io_in_rdata_rep_valid", false,-1);
    tracep->declQuad(c+240,"io_in_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+242,"io_in_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+244,"io_in_wdata_req_bits_wmask", false,-1, 7,0);
    tracep->declBit(c+245,"io_in_wdata_rep", false,-1);
    tracep->declBit(c+273,"io_out_addr_req_valid", false,-1);
    tracep->declQuad(c+274,"io_out_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+276,"io_out_addr_req_bits_ce", false,-1);
    tracep->declBit(c+277,"io_out_addr_req_bits_we", false,-1);
    tracep->declBit(c+278,"io_out_rdata_rep_valid", false,-1);
    tracep->declQuad(c+279,"io_out_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+281,"io_out_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+283,"io_out_wdata_req_bits_wmask", false,-1, 7,0);
    tracep->declBit(c+284,"io_out_wdata_rep", false,-1);
    tracep->declBit(c+3453,"DCACHE_clock", false,-1);
    tracep->declBit(c+3454,"DCACHE_reset", false,-1);
    tracep->declBit(c+1900,"DCACHE_io_in_addr_req_valid", false,-1);
    tracep->declQuad(c+235,"DCACHE_io_in_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+238,"DCACHE_io_in_addr_req_bits_we", false,-1);
    tracep->declBit(c+1901,"DCACHE_io_in_rdata_rep_valid", false,-1);
    tracep->declQuad(c+1902,"DCACHE_io_in_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+242,"DCACHE_io_in_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+244,"DCACHE_io_in_wdata_req_bits_wmask", false,-1, 7,0);
    tracep->declBit(c+1904,"DCACHE_io_in_wdata_rep", false,-1);
    tracep->declBit(c+1905,"DCACHE_io_out_addr_req_valid", false,-1);
    tracep->declQuad(c+1906,"DCACHE_io_out_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+1908,"DCACHE_io_out_addr_req_bits_ce", false,-1);
    tracep->declBit(c+1909,"DCACHE_io_out_addr_req_bits_we", false,-1);
    tracep->declBit(c+278,"DCACHE_io_out_rdata_rep_valid", false,-1);
    tracep->declQuad(c+279,"DCACHE_io_out_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+1910,"DCACHE_io_out_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->declBit(c+284,"DCACHE_io_out_wdata_rep", false,-1);
    tracep->pushNamePrefix("DCACHE ");
    tracep->declBit(c+3453,"clock", false,-1);
    tracep->declBit(c+3454,"reset", false,-1);
    tracep->declBit(c+1900,"io_in_addr_req_valid", false,-1);
    tracep->declQuad(c+235,"io_in_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+238,"io_in_addr_req_bits_we", false,-1);
    tracep->declBit(c+1901,"io_in_rdata_rep_valid", false,-1);
    tracep->declQuad(c+1902,"io_in_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+242,"io_in_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+244,"io_in_wdata_req_bits_wmask", false,-1, 7,0);
    tracep->declBit(c+1904,"io_in_wdata_rep", false,-1);
    tracep->declBit(c+1905,"io_out_addr_req_valid", false,-1);
    tracep->declQuad(c+1906,"io_out_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+1908,"io_out_addr_req_bits_ce", false,-1);
    tracep->declBit(c+1909,"io_out_addr_req_bits_we", false,-1);
    tracep->declBit(c+278,"io_out_rdata_rep_valid", false,-1);
    tracep->declQuad(c+279,"io_out_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+1910,"io_out_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->declBit(c+284,"io_out_wdata_rep", false,-1);
    tracep->declBit(c+3453,"Cache_data_clock", false,-1);
    tracep->declBit(c+1912,"Cache_data_io_in_valid", false,-1);
    tracep->declQuad(c+235,"Cache_data_io_in_addr", false,-1, 63,0);
    tracep->declQuad(c+1913,"Cache_data_io_write_bus_addr", false,-1, 63,0);
    tracep->declBit(c+1915,"Cache_data_io_write_bus_valid", false,-1);
    tracep->declBus(c+1916,"Cache_data_io_write_bus_waymask", false,-1, 1,0);
    tracep->declArray(c+1917,"Cache_data_io_write_bus_wdata", false,-1, 511,0);
    tracep->declBit(c+1912,"Cache_data_io_out_valid", false,-1);
    tracep->declQuad(c+1933,"Cache_data_io_out_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+1935,"Cache_data_io_out_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+1937,"Cache_data_io_out_bits_meat_valid_0", false,-1);
    tracep->declBit(c+1938,"Cache_data_io_out_bits_meat_valid_1", false,-1);
    tracep->declArray(c+1939,"Cache_data_io_out_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+1955,"Cache_data_io_out_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+1971,"Cache_data_io_out_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBus(c+1973,"Cache_data_io_out_bits_ctrl_data_index", false,-1, 4,0);
    tracep->declBus(c+1974,"Cache_data_io_out_bits_ctrl_data_offset", false,-1, 5,0);
    tracep->declBit(c+1975,"Scanf_io_in_valid", false,-1);
    tracep->declQuad(c+1933,"Scanf_io_in_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+1935,"Scanf_io_in_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+1937,"Scanf_io_in_bits_meat_valid_0", false,-1);
    tracep->declBit(c+1938,"Scanf_io_in_bits_meat_valid_1", false,-1);
    tracep->declArray(c+1939,"Scanf_io_in_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+1955,"Scanf_io_in_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+1971,"Scanf_io_in_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBus(c+1973,"Scanf_io_in_bits_ctrl_data_index", false,-1, 4,0);
    tracep->declBit(c+1976,"Scanf_io_out_bits_hit", false,-1);
    tracep->declArray(c+1977,"Scanf_io_out_bits_data", false,-1, 511,0);
    tracep->declBus(c+1973,"Scanf_io_out_bits_meta_ctrl_data_index", false,-1, 4,0);
    tracep->declBit(c+1993,"Scanf_io_out_bits_hit_way_0", false,-1);
    tracep->declBit(c+1994,"Scanf_io_out_bits_hit_way_1", false,-1);
    tracep->declQuad(c+1933,"Scanf_io_out_bits_tag_0", false,-1, 52,0);
    tracep->declQuad(c+1935,"Scanf_io_out_bits_tag_1", false,-1, 52,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+1995+i*1,"lru", true,(i+0));
    }
    tracep->declBit(c+2027,"lru_lru_w_MPORT_en", false,-1);
    tracep->declBus(c+2028,"lru_lru_w_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+2029,"lru_lru_w_MPORT_data", false,-1);
    tracep->declBit(c+3460,"lru_MPORT_data", false,-1);
    tracep->declBus(c+1973,"lru_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+3460,"lru_MPORT_mask", false,-1);
    tracep->declBit(c+2030,"lru_MPORT_en", false,-1);
    tracep->declBit(c+3493,"lru_MPORT_1_data", false,-1);
    tracep->declBus(c+1973,"lru_MPORT_1_addr", false,-1, 4,0);
    tracep->declBit(c+3460,"lru_MPORT_1_mask", false,-1);
    tracep->declBit(c+2031,"lru_MPORT_1_en", false,-1);
    tracep->declBit(c+3493,"lru_MPORT_2_data", false,-1);
    tracep->declBus(c+1973,"lru_MPORT_2_addr", false,-1, 4,0);
    tracep->declBit(c+3460,"lru_MPORT_2_mask", false,-1);
    tracep->declBit(c+2032,"lru_MPORT_2_en", false,-1);
    tracep->declBit(c+3460,"lru_MPORT_3_data", false,-1);
    tracep->declBus(c+1973,"lru_MPORT_3_addr", false,-1, 4,0);
    tracep->declBit(c+3460,"lru_MPORT_3_mask", false,-1);
    tracep->declBit(c+2033,"lru_MPORT_3_en", false,-1);
    tracep->declBit(c+2027,"lru_lru_w_MPORT_en_pipe_0", false,-1);
    tracep->declBus(c+2028,"lru_lru_w_MPORT_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+2034+i*1,"dirt_0", true,(i+0));
    }
    tracep->declBit(c+2066,"dirt_0_dirt_w_en", false,-1);
    tracep->declBus(c+2028,"dirt_0_dirt_w_addr", false,-1, 4,0);
    tracep->declBit(c+2067,"dirt_0_dirt_w_data", false,-1);
    tracep->declBit(c+3460,"dirt_0_MPORT_4_data", false,-1);
    tracep->declBus(c+1973,"dirt_0_MPORT_4_addr", false,-1, 4,0);
    tracep->declBit(c+2068,"dirt_0_MPORT_4_mask", false,-1);
    tracep->declBit(c+2069,"dirt_0_MPORT_4_en", false,-1);
    tracep->declBit(c+2066,"dirt_0_dirt_w_en_pipe_0", false,-1);
    tracep->declBus(c+2028,"dirt_0_dirt_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+2070+i*1,"dirt_1", true,(i+0));
    }
    tracep->declBit(c+2102,"dirt_1_dirt_w_en", false,-1);
    tracep->declBus(c+2028,"dirt_1_dirt_w_addr", false,-1, 4,0);
    tracep->declBit(c+2103,"dirt_1_dirt_w_data", false,-1);
    tracep->declBit(c+3460,"dirt_1_MPORT_4_data", false,-1);
    tracep->declBus(c+1973,"dirt_1_MPORT_4_addr", false,-1, 4,0);
    tracep->declBit(c+2104,"dirt_1_MPORT_4_mask", false,-1);
    tracep->declBit(c+2069,"dirt_1_MPORT_4_en", false,-1);
    tracep->declBit(c+2102,"dirt_1_dirt_w_en_pipe_0", false,-1);
    tracep->declBus(c+2028,"dirt_1_dirt_w_addr_pipe_0", false,-1, 4,0);
    tracep->declBus(c+2105,"state", false,-1, 1,0);
    tracep->declArray(c+2106,"data_line_reg", false,-1, 511,0);
    tracep->declQuad(c+2122,"mem_addr_reg", false,-1, 63,0);
    tracep->declBit(c+2124,"lru_r", false,-1);
    tracep->declBus(c+2125,"count", false,-1, 3,0);
    tracep->declBit(c+2126,"s", false,-1);
    tracep->declBus(c+2127,"count_write", false,-1, 3,0);
    tracep->declBit(c+2128,"s_w", false,-1);
    tracep->declQuad(c+2129,"mem_write_addr_reg", false,-1, 63,0);
    tracep->declArray(c+2131,"mem_write_data_reg", false,-1, 511,0);
    tracep->declBit(c+2029,"lru_w", false,-1);
    tracep->declBit(c+1993,"hit_way_0", false,-1);
    tracep->declBit(c+1994,"hit_way_1", false,-1);
    tracep->declQuad(c+2147,"hit_data", false,-1, 63,0);
    tracep->declQuad(c+2149,"mem_data", false,-1, 63,0);
    tracep->declBit(c+1975,"Scanf_io_in_valid_REG", false,-1);
    tracep->declQuad(c+2151,"wmaskextend_Genmask", false,-1, 63,0);
    tracep->declQuad(c+2153,"wmaskextend_lo_lo_lo", false,-1, 63,0);
    tracep->declArray(c+2155,"wmaskextend_lo_lo", false,-1, 127,0);
    tracep->declQuad(c+2159,"wmaskextend_lo_hi_lo", false,-1, 63,0);
    tracep->declArray(c+2161,"wmaskextend_lo", false,-1, 255,0);
    tracep->declQuad(c+2169,"wmaskextend_hi_lo_lo", false,-1, 63,0);
    tracep->declArray(c+2171,"wmaskextend_hi_lo", false,-1, 127,0);
    tracep->declQuad(c+2175,"wmaskextend_hi_hi_lo", false,-1, 63,0);
    tracep->declArray(c+2177,"wmaskextend_hi", false,-1, 255,0);
    tracep->declArray(c+2185,"wmaskextend", false,-1, 511,0);
    tracep->declArray(c+2201,"wdata_extend", false,-1, 511,0);
    tracep->declBus(c+2217,"waymask", false,-1, 1,0);
    tracep->pushNamePrefix("Cache_data ");
    tracep->declBit(c+3453,"clock", false,-1);
    tracep->declBit(c+1912,"io_in_valid", false,-1);
    tracep->declQuad(c+235,"io_in_addr", false,-1, 63,0);
    tracep->declQuad(c+1913,"io_write_bus_addr", false,-1, 63,0);
    tracep->declBit(c+1915,"io_write_bus_valid", false,-1);
    tracep->declBus(c+1916,"io_write_bus_waymask", false,-1, 1,0);
    tracep->declArray(c+1917,"io_write_bus_wdata", false,-1, 511,0);
    tracep->declBit(c+1912,"io_out_valid", false,-1);
    tracep->declQuad(c+1933,"io_out_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+1935,"io_out_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+1937,"io_out_bits_meat_valid_0", false,-1);
    tracep->declBit(c+1938,"io_out_bits_meat_valid_1", false,-1);
    tracep->declArray(c+1939,"io_out_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+1955,"io_out_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+1971,"io_out_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBus(c+1973,"io_out_bits_ctrl_data_index", false,-1, 4,0);
    tracep->declBus(c+1974,"io_out_bits_ctrl_data_offset", false,-1, 5,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declArray(c+2218+i*16,"data_0", true,(i+0), 511,0);
    }
    tracep->declBit(c+2730,"data_0_data_w_en", false,-1);
    tracep->declBus(c+2731,"data_0_data_w_addr", false,-1, 4,0);
    tracep->declArray(c+1939,"data_0_data_w_data", false,-1, 511,0);
    tracep->declArray(c+1917,"data_0_MPORT_data", false,-1, 511,0);
    tracep->declBus(c+2732,"data_0_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+2733,"data_0_MPORT_mask", false,-1);
    tracep->declBit(c+1915,"data_0_MPORT_en", false,-1);
    tracep->declBit(c+2730,"data_0_data_w_en_pipe_0", false,-1);
    tracep->declBus(c+2731,"data_0_data_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declArray(c+2734+i*16,"data_1", true,(i+0), 511,0);
    }
    tracep->declBit(c+3246,"data_1_data_w_en", false,-1);
    tracep->declBus(c+3247,"data_1_data_w_addr", false,-1, 4,0);
    tracep->declArray(c+1955,"data_1_data_w_data", false,-1, 511,0);
    tracep->declArray(c+1917,"data_1_MPORT_data", false,-1, 511,0);
    tracep->declBus(c+2732,"data_1_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+3248,"data_1_MPORT_mask", false,-1);
    tracep->declBit(c+1915,"data_1_MPORT_en", false,-1);
    tracep->declBit(c+3246,"data_1_data_w_en_pipe_0", false,-1);
    tracep->declBus(c+3247,"data_1_data_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+3249+i*2,"TAG_0", true,(i+0), 52,0);
    }
    tracep->declBit(c+3313,"TAG_0_tag_w_en", false,-1);
    tracep->declBus(c+3314,"TAG_0_tag_w_addr", false,-1, 4,0);
    tracep->declQuad(c+1933,"TAG_0_tag_w_data", false,-1, 52,0);
    tracep->declQuad(c+3315,"TAG_0_MPORT_1_data", false,-1, 52,0);
    tracep->declBus(c+2732,"TAG_0_MPORT_1_addr", false,-1, 4,0);
    tracep->declBit(c+2733,"TAG_0_MPORT_1_mask", false,-1);
    tracep->declBit(c+1915,"TAG_0_MPORT_1_en", false,-1);
    tracep->declBit(c+3313,"TAG_0_tag_w_en_pipe_0", false,-1);
    tracep->declBus(c+3314,"TAG_0_tag_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+3317+i*2,"TAG_1", true,(i+0), 52,0);
    }
    tracep->declBit(c+3381,"TAG_1_tag_w_en", false,-1);
    tracep->declBus(c+3382,"TAG_1_tag_w_addr", false,-1, 4,0);
    tracep->declQuad(c+1935,"TAG_1_tag_w_data", false,-1, 52,0);
    tracep->declQuad(c+3315,"TAG_1_MPORT_1_data", false,-1, 52,0);
    tracep->declBus(c+2732,"TAG_1_MPORT_1_addr", false,-1, 4,0);
    tracep->declBit(c+3248,"TAG_1_MPORT_1_mask", false,-1);
    tracep->declBit(c+1915,"TAG_1_MPORT_1_en", false,-1);
    tracep->declBit(c+3381,"TAG_1_tag_w_en_pipe_0", false,-1);
    tracep->declBus(c+3382,"TAG_1_tag_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+3383+i*1,"data_valid_0", true,(i+0));
    }
    tracep->declBit(c+3415,"data_valid_0_valid_w_en", false,-1);
    tracep->declBus(c+3416,"data_valid_0_valid_w_addr", false,-1, 4,0);
    tracep->declBit(c+1937,"data_valid_0_valid_w_data", false,-1);
    tracep->declBit(c+3460,"data_valid_0_MPORT_2_data", false,-1);
    tracep->declBus(c+2732,"data_valid_0_MPORT_2_addr", false,-1, 4,0);
    tracep->declBit(c+2733,"data_valid_0_MPORT_2_mask", false,-1);
    tracep->declBit(c+1915,"data_valid_0_MPORT_2_en", false,-1);
    tracep->declBit(c+3415,"data_valid_0_valid_w_en_pipe_0", false,-1);
    tracep->declBus(c+3416,"data_valid_0_valid_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+3417+i*1,"data_valid_1", true,(i+0));
    }
    tracep->declBit(c+3449,"data_valid_1_valid_w_en", false,-1);
    tracep->declBus(c+3450,"data_valid_1_valid_w_addr", false,-1, 4,0);
    tracep->declBit(c+1938,"data_valid_1_valid_w_data", false,-1);
    tracep->declBit(c+3460,"data_valid_1_MPORT_2_data", false,-1);
    tracep->declBus(c+2732,"data_valid_1_MPORT_2_addr", false,-1, 4,0);
    tracep->declBit(c+3248,"data_valid_1_MPORT_2_mask", false,-1);
    tracep->declBit(c+1915,"data_valid_1_MPORT_2_en", false,-1);
    tracep->declBit(c+3449,"data_valid_1_valid_w_en_pipe_0", false,-1);
    tracep->declBus(c+3450,"data_valid_1_valid_w_addr_pipe_0", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Scanf ");
    tracep->declBit(c+1975,"io_in_valid", false,-1);
    tracep->declQuad(c+1933,"io_in_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+1935,"io_in_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+1937,"io_in_bits_meat_valid_0", false,-1);
    tracep->declBit(c+1938,"io_in_bits_meat_valid_1", false,-1);
    tracep->declArray(c+1939,"io_in_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+1955,"io_in_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+1971,"io_in_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBus(c+1973,"io_in_bits_ctrl_data_index", false,-1, 4,0);
    tracep->declBit(c+1976,"io_out_bits_hit", false,-1);
    tracep->declArray(c+1977,"io_out_bits_data", false,-1, 511,0);
    tracep->declBus(c+1973,"io_out_bits_meta_ctrl_data_index", false,-1, 4,0);
    tracep->declBit(c+1993,"io_out_bits_hit_way_0", false,-1);
    tracep->declBit(c+1994,"io_out_bits_hit_way_1", false,-1);
    tracep->declQuad(c+1933,"io_out_bits_tag_0", false,-1, 52,0);
    tracep->declQuad(c+1935,"io_out_bits_tag_1", false,-1, 52,0);
    tracep->declBit(c+3451,"hit_way_0_result", false,-1);
    tracep->declBit(c+3452,"hit_way_1_result", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("WB ");
    tracep->declBit(c+246,"io_in_valid", false,-1);
    tracep->declBit(c+247,"io_in_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+248,"io_in_bits_ctrl_signal_rfWen", false,-1);
    tracep->declQuad(c+249,"io_in_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+251,"io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+252,"io_in_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBit(c+254,"io_in_bits_ctrl_flow_skip", false,-1);
    tracep->declBus(c+207,"io_in_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declQuad(c+255,"io_in_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declBit(c+3460,"io_out_ready", false,-1);
    tracep->declBit(c+246,"io_out_valid", false,-1);
    tracep->declBit(c+257,"io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declQuad(c+249,"io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+251,"io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+252,"io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBit(c+254,"io_out_bits_ctrl_flow_skip", false,-1);
    tracep->declBus(c+207,"io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+208,"io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+255,"io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("bypass ");
    tracep->declBus(c+41,"io_EX_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+57,"io_EX_rf_rfWen", false,-1);
    tracep->declQuad(c+58,"io_EX_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+219,"io_MEM_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+231,"io_MEM_rf_rfWen", false,-1);
    tracep->declQuad(c+232,"io_MEM_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+207,"io_WB_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+208,"io_WB_rf_rfWen", false,-1);
    tracep->declQuad(c+255,"io_WB_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+258,"io_Reg1", false,-1, 63,0);
    tracep->declBus(c+25,"io_reg_index1", false,-1, 4,0);
    tracep->declQuad(c+260,"io_Reg2", false,-1, 63,0);
    tracep->declBus(c+26,"io_reg_index2", false,-1, 4,0);
    tracep->declQuad(c+17,"io_Bypass_REG1", false,-1, 63,0);
    tracep->declQuad(c+19,"io_Bypass_REG2", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_bypass ");
    tracep->declBus(c+219,"io_MEM_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+231,"io_MEM_rf_rfWen", false,-1);
    tracep->declQuad(c+232,"io_MEM_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+42,"io_Reg1", false,-1, 63,0);
    tracep->declBus(c+37,"io_reg_index1", false,-1, 4,0);
    tracep->declQuad(c+44,"io_Reg2", false,-1, 63,0);
    tracep->declBus(c+38,"io_reg_index2", false,-1, 4,0);
    tracep->declQuad(c+51,"io_Bypass_REG1", false,-1, 63,0);
    tracep->declQuad(c+53,"io_Bypass_REG2", false,-1, 63,0);
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
    VlWide<4>/*127:0*/ __Vtemp_hb5acfd9b__0;
    VlWide<4>/*127:0*/ __Vtemp_h8248920c__0;
    VlWide<4>/*127:0*/ __Vtemp_h32213b7b__0;
    VlWide<4>/*127:0*/ __Vtemp_hf98c7323__0;
    VlWide<4>/*127:0*/ __Vtemp_h9a785a5b__0;
    VlWide<5>/*159:0*/ __Vtemp_h97a9be20__0;
    VlWide<5>/*159:0*/ __Vtemp_h97a9be20__1;
    VlWide<5>/*159:0*/ __Vtemp_h1a657afd__0;
    VlWide<5>/*159:0*/ __Vtemp_h7a662728__0;
    VlWide<5>/*159:0*/ __Vtemp_h791e8ef8__0;
    VlWide<16>/*511:0*/ __Vtemp_hf989eec7__0;
    VlWide<16>/*511:0*/ __Vtemp_h4453b49e__0;
    VlWide<16>/*511:0*/ __Vtemp_hc2882e76__0;
    // Body
    bufp->fullBit(oldp+1,((((IData)(vlSelf->CoreTop__DOT__EX__DOT__branch_flag) 
                            & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_inst_valid)) 
                           & (IData)(vlSelf->CoreTop__DOT__valid_1))));
    bufp->fullBit(oldp+2,(vlSelf->CoreTop__DOT__EX_io_branchIO_is_jump));
    bufp->fullQData(oldp+3,(((0x19U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                              ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1
                              : vlSelf->CoreTop__DOT__EX__DOT___GEN_289)),64);
    bufp->fullBit(oldp+5,(vlSelf->CoreTop__DOT__EX_io_in_ready));
    bufp->fullQData(oldp+6,(vlSelf->CoreTop__DOT__IF__DOT__temp),64);
    bufp->fullBit(oldp+8,(vlSelf->CoreTop__DOT__ICACHE_io_in_rdata_rep_valid));
    bufp->fullQData(oldp+9,((((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                              & (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit))
                              ? vlSelf->CoreTop__DOT__ICACHE__DOT__hit_data
                              : vlSelf->CoreTop__DOT__ICACHE__DOT__mem_data)),64);
    bufp->fullIData(oldp+11,(((IData)(vlSelf->CoreTop__DOT__EX_io_is_flush)
                               ? 0U : ((1U & (IData)(
                                                     (vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                      >> 2U)))
                                        ? (IData)((
                                                   (((1U 
                                                      == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                                     & (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit))
                                                     ? vlSelf->CoreTop__DOT__ICACHE__DOT__hit_data
                                                     : vlSelf->CoreTop__DOT__ICACHE__DOT__mem_data) 
                                                   >> 0x20U))
                                        : (IData)((
                                                   ((1U 
                                                     == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                                    & (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit))
                                                    ? vlSelf->CoreTop__DOT__ICACHE__DOT__hit_data
                                                    : vlSelf->CoreTop__DOT__ICACHE__DOT__mem_data))))),32);
    bufp->fullBit(oldp+12,(vlSelf->CoreTop__DOT__EX_io_is_flush));
    bufp->fullBit(oldp+13,(vlSelf->CoreTop__DOT__valid));
    bufp->fullQData(oldp+14,(vlSelf->CoreTop__DOT__ID_io_in_bits_r_PC),64);
    bufp->fullIData(oldp+16,(vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst),32);
    bufp->fullQData(oldp+17,(((((IData)(vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfWen) 
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
                                          [(0x1fU & 
                                            (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                             >> 0xfU))]))))),64);
    bufp->fullQData(oldp+19,(((((IData)(vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfWen) 
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
                                          [(0x1fU & 
                                            (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                             >> 0x14U))]))))),64);
    bufp->fullCData(oldp+21,((((7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                ? 2U : 0U) | ((3U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                               ? 2U
                                               : 0U))),3);
    bufp->fullCData(oldp+22,((((8U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)) 
                               | (7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))) 
                              | (3U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)))),3);
    bufp->fullCData(oldp+23,(((0x13U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
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
    bufp->fullBit(oldp+24,((1U & (~ (((0U == ((0x13U 
                                               == (0x707fU 
                                                   & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                               ? 0x40U
                                               : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_316))) 
                                      | (IData)(vlSelf->CoreTop__DOT__EX_io_is_flush)) 
                                     | (~ (IData)(vlSelf->CoreTop__DOT__valid)))))));
    bufp->fullCData(oldp+25,((0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+26,((0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                       >> 0x14U))),5);
    bufp->fullBit(oldp+27,(((IData)(vlSelf->CoreTop__DOT__valid) 
                            & (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_3))));
    bufp->fullCData(oldp+28,(((0x13U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                               ? 0x40U : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_316))),7);
    bufp->fullCData(oldp+29,((0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                       >> 7U))),5);
    bufp->fullQData(oldp+30,(((((((8U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
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
    bufp->fullBit(oldp+32,(vlSelf->CoreTop__DOT__valid_1));
    bufp->fullCData(oldp+33,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src1Type),3);
    bufp->fullCData(oldp+34,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src2Type),3);
    bufp->fullCData(oldp+35,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType),3);
    bufp->fullBit(oldp+36,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_inst_valid));
    bufp->fullCData(oldp+37,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfSrc1),5);
    bufp->fullCData(oldp+38,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfSrc2),5);
    bufp->fullBit(oldp+39,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfWen));
    bufp->fullCData(oldp+40,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype),7);
    bufp->fullCData(oldp+41,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest),5);
    bufp->fullQData(oldp+42,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_src1),64);
    bufp->fullQData(oldp+44,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_src2),64);
    bufp->fullQData(oldp+46,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm),64);
    bufp->fullQData(oldp+48,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC),64);
    bufp->fullIData(oldp+50,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_inst),32);
    bufp->fullQData(oldp+51,(vlSelf->CoreTop__DOT__mem_bypass_io_Bypass_REG1),64);
    bufp->fullQData(oldp+53,(vlSelf->CoreTop__DOT__mem_bypass_io_Bypass_REG2),64);
    bufp->fullBit(oldp+55,((1U & (~ (IData)(vlSelf->CoreTop__DOT__MEM__DOT___io_out_valid_T_6)))));
    bufp->fullBit(oldp+56,(vlSelf->CoreTop__DOT__EX_io_out_valid));
    bufp->fullBit(oldp+57,(vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfWen));
    bufp->fullQData(oldp+58,(vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfData),64);
    bufp->fullQData(oldp+60,(((0U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src1Type))
                               ? vlSelf->CoreTop__DOT__mem_bypass_io_Bypass_REG1
                               : vlSelf->CoreTop__DOT__EX__DOT___GEN_1)),64);
    bufp->fullQData(oldp+62,(((0U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src2Type))
                               ? vlSelf->CoreTop__DOT__mem_bypass_io_Bypass_REG2
                               : vlSelf->CoreTop__DOT__EX__DOT___GEN_3)),64);
    bufp->fullBit(oldp+64,(((0x42U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                            & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_inst_valid))));
    bufp->fullBit(oldp+65,(vlSelf->CoreTop__DOT__DIP_io_is_break_REG_1));
    bufp->fullQData(oldp+66,(vlSelf->CoreTop__DOT__rf
                             [0U]),64);
    bufp->fullQData(oldp+68,(vlSelf->CoreTop__DOT__rf
                             [1U]),64);
    bufp->fullQData(oldp+70,(vlSelf->CoreTop__DOT__rf
                             [2U]),64);
    bufp->fullQData(oldp+72,(vlSelf->CoreTop__DOT__rf
                             [3U]),64);
    bufp->fullQData(oldp+74,(vlSelf->CoreTop__DOT__rf
                             [4U]),64);
    bufp->fullQData(oldp+76,(vlSelf->CoreTop__DOT__rf
                             [5U]),64);
    bufp->fullQData(oldp+78,(vlSelf->CoreTop__DOT__rf
                             [6U]),64);
    bufp->fullQData(oldp+80,(vlSelf->CoreTop__DOT__rf
                             [7U]),64);
    bufp->fullQData(oldp+82,(vlSelf->CoreTop__DOT__rf
                             [8U]),64);
    bufp->fullQData(oldp+84,(vlSelf->CoreTop__DOT__rf
                             [9U]),64);
    bufp->fullQData(oldp+86,(vlSelf->CoreTop__DOT__rf
                             [0xaU]),64);
    bufp->fullQData(oldp+88,(vlSelf->CoreTop__DOT__rf
                             [0xbU]),64);
    bufp->fullQData(oldp+90,(vlSelf->CoreTop__DOT__rf
                             [0xcU]),64);
    bufp->fullQData(oldp+92,(vlSelf->CoreTop__DOT__rf
                             [0xdU]),64);
    bufp->fullQData(oldp+94,(vlSelf->CoreTop__DOT__rf
                             [0xeU]),64);
    bufp->fullQData(oldp+96,(vlSelf->CoreTop__DOT__rf
                             [0xfU]),64);
    bufp->fullQData(oldp+98,(vlSelf->CoreTop__DOT__rf
                             [0x10U]),64);
    bufp->fullQData(oldp+100,(vlSelf->CoreTop__DOT__rf
                              [0x11U]),64);
    bufp->fullQData(oldp+102,(vlSelf->CoreTop__DOT__rf
                              [0x12U]),64);
    bufp->fullQData(oldp+104,(vlSelf->CoreTop__DOT__rf
                              [0x13U]),64);
    bufp->fullQData(oldp+106,(vlSelf->CoreTop__DOT__rf
                              [0x14U]),64);
    bufp->fullQData(oldp+108,(vlSelf->CoreTop__DOT__rf
                              [0x15U]),64);
    bufp->fullQData(oldp+110,(vlSelf->CoreTop__DOT__rf
                              [0x16U]),64);
    bufp->fullQData(oldp+112,(vlSelf->CoreTop__DOT__rf
                              [0x17U]),64);
    bufp->fullQData(oldp+114,(vlSelf->CoreTop__DOT__rf
                              [0x18U]),64);
    bufp->fullQData(oldp+116,(vlSelf->CoreTop__DOT__rf
                              [0x19U]),64);
    bufp->fullQData(oldp+118,(vlSelf->CoreTop__DOT__rf
                              [0x1aU]),64);
    bufp->fullQData(oldp+120,(vlSelf->CoreTop__DOT__rf
                              [0x1bU]),64);
    bufp->fullQData(oldp+122,(vlSelf->CoreTop__DOT__rf
                              [0x1cU]),64);
    bufp->fullQData(oldp+124,(vlSelf->CoreTop__DOT__rf
                              [0x1dU]),64);
    bufp->fullQData(oldp+126,(vlSelf->CoreTop__DOT__rf
                              [0x1eU]),64);
    bufp->fullQData(oldp+128,(vlSelf->CoreTop__DOT__rf
                              [0x1fU]),64);
    bufp->fullIData(oldp+130,(vlSelf->CoreTop__DOT__DIP_io_inst_REG),32);
    bufp->fullQData(oldp+131,(vlSelf->CoreTop__DOT__DIP_io_pc_REG),64);
    bufp->fullBit(oldp+133,(vlSelf->CoreTop__DOT__DIP_io_inst_valid_REG));
    bufp->fullQData(oldp+134,(vlSelf->CoreTop__DOT__DIP_io_dnpc_REG),64);
    bufp->fullBit(oldp+136,(vlSelf->CoreTop__DOT__DIP_io_is_skip_REG));
    bufp->fullQData(oldp+137,(vlSelf->CoreTop__DOT__rf[0]),64);
    bufp->fullQData(oldp+139,(vlSelf->CoreTop__DOT__rf[1]),64);
    bufp->fullQData(oldp+141,(vlSelf->CoreTop__DOT__rf[2]),64);
    bufp->fullQData(oldp+143,(vlSelf->CoreTop__DOT__rf[3]),64);
    bufp->fullQData(oldp+145,(vlSelf->CoreTop__DOT__rf[4]),64);
    bufp->fullQData(oldp+147,(vlSelf->CoreTop__DOT__rf[5]),64);
    bufp->fullQData(oldp+149,(vlSelf->CoreTop__DOT__rf[6]),64);
    bufp->fullQData(oldp+151,(vlSelf->CoreTop__DOT__rf[7]),64);
    bufp->fullQData(oldp+153,(vlSelf->CoreTop__DOT__rf[8]),64);
    bufp->fullQData(oldp+155,(vlSelf->CoreTop__DOT__rf[9]),64);
    bufp->fullQData(oldp+157,(vlSelf->CoreTop__DOT__rf[10]),64);
    bufp->fullQData(oldp+159,(vlSelf->CoreTop__DOT__rf[11]),64);
    bufp->fullQData(oldp+161,(vlSelf->CoreTop__DOT__rf[12]),64);
    bufp->fullQData(oldp+163,(vlSelf->CoreTop__DOT__rf[13]),64);
    bufp->fullQData(oldp+165,(vlSelf->CoreTop__DOT__rf[14]),64);
    bufp->fullQData(oldp+167,(vlSelf->CoreTop__DOT__rf[15]),64);
    bufp->fullQData(oldp+169,(vlSelf->CoreTop__DOT__rf[16]),64);
    bufp->fullQData(oldp+171,(vlSelf->CoreTop__DOT__rf[17]),64);
    bufp->fullQData(oldp+173,(vlSelf->CoreTop__DOT__rf[18]),64);
    bufp->fullQData(oldp+175,(vlSelf->CoreTop__DOT__rf[19]),64);
    bufp->fullQData(oldp+177,(vlSelf->CoreTop__DOT__rf[20]),64);
    bufp->fullQData(oldp+179,(vlSelf->CoreTop__DOT__rf[21]),64);
    bufp->fullQData(oldp+181,(vlSelf->CoreTop__DOT__rf[22]),64);
    bufp->fullQData(oldp+183,(vlSelf->CoreTop__DOT__rf[23]),64);
    bufp->fullQData(oldp+185,(vlSelf->CoreTop__DOT__rf[24]),64);
    bufp->fullQData(oldp+187,(vlSelf->CoreTop__DOT__rf[25]),64);
    bufp->fullQData(oldp+189,(vlSelf->CoreTop__DOT__rf[26]),64);
    bufp->fullQData(oldp+191,(vlSelf->CoreTop__DOT__rf[27]),64);
    bufp->fullQData(oldp+193,(vlSelf->CoreTop__DOT__rf[28]),64);
    bufp->fullQData(oldp+195,(vlSelf->CoreTop__DOT__rf[29]),64);
    bufp->fullQData(oldp+197,(vlSelf->CoreTop__DOT__rf[30]),64);
    bufp->fullQData(oldp+199,(vlSelf->CoreTop__DOT__rf[31]),64);
    bufp->fullQData(oldp+201,(vlSelf->CoreTop__DOT__rf
                              [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                         >> 0xfU))]),64);
    bufp->fullQData(oldp+203,(vlSelf->CoreTop__DOT__rf
                              [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                         >> 0x14U))]),64);
    bufp->fullQData(oldp+205,(((0U == (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest))
                                ? 0ULL : vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfData)),64);
    bufp->fullCData(oldp+207,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest),5);
    bufp->fullBit(oldp+208,(vlSelf->CoreTop__DOT__WB_io_out_bits_ctrl_rf_rfWen));
    bufp->fullBit(oldp+209,(vlSelf->CoreTop__DOT__valid_2));
    bufp->fullCData(oldp+210,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_fuType),3);
    bufp->fullBit(oldp+211,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_inst_valid));
    bufp->fullBit(oldp+212,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_rfWen));
    bufp->fullCData(oldp+213,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype),7);
    bufp->fullQData(oldp+214,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_PC),64);
    bufp->fullIData(oldp+216,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_inst),32);
    bufp->fullQData(oldp+217,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_Dnpc),64);
    bufp->fullCData(oldp+219,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest),5);
    bufp->fullQData(oldp+220,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfData),64);
    bufp->fullQData(oldp+222,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src1),64);
    bufp->fullQData(oldp+224,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2),64);
    bufp->fullQData(oldp+226,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_Imm),64);
    bufp->fullBit(oldp+228,(vlSelf->CoreTop__DOT__MEM_io_out_valid));
    bufp->fullBit(oldp+229,(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_signal_inst_valid));
    bufp->fullBit(oldp+230,((((0xa0000048ULL == vlSelf->CoreTop__DOT__MEM__DOT__addr_temp) 
                              | (0xa00003f8ULL == vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)) 
                             | ((0xa0000000ULL <= vlSelf->CoreTop__DOT__MEM__DOT__addr_temp) 
                                & (0xa1200000ULL >= vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))));
    bufp->fullBit(oldp+231,(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfWen));
    bufp->fullQData(oldp+232,(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfData),64);
    bufp->fullBit(oldp+234,(vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_valid));
    bufp->fullQData(oldp+235,(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp),64);
    bufp->fullBit(oldp+237,((((4U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_fuType)) 
                              & (IData)(vlSelf->CoreTop__DOT__valid_2)) 
                             & (IData)(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_signal_inst_valid))));
    bufp->fullBit(oldp+238,(vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_we));
    bufp->fullBit(oldp+239,(vlSelf->CoreTop__DOT__MMIO_io_in_rdata_rep_valid));
    bufp->fullQData(oldp+240,(vlSelf->CoreTop__DOT__MMIO_io_in_rdata_rep_bits_rdata),64);
    bufp->fullQData(oldp+242,(vlSelf->CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wdata),64);
    bufp->fullCData(oldp+244,(vlSelf->CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wmask),8);
    bufp->fullBit(oldp+245,(vlSelf->CoreTop__DOT__MMIO_io_in_wdata_rep));
    bufp->fullBit(oldp+246,(vlSelf->CoreTop__DOT__valid_3));
    bufp->fullBit(oldp+247,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_inst_valid));
    bufp->fullBit(oldp+248,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_rfWen));
    bufp->fullQData(oldp+249,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_PC),64);
    bufp->fullIData(oldp+251,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_inst),32);
    bufp->fullQData(oldp+252,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_Dnpc),64);
    bufp->fullBit(oldp+254,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_skip));
    bufp->fullQData(oldp+255,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfData),64);
    bufp->fullBit(oldp+257,(((IData)(vlSelf->CoreTop__DOT__valid_3) 
                             & (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_inst_valid))));
    bufp->fullQData(oldp+258,(((0U == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                >> 0xfU)))
                                ? 0ULL : vlSelf->CoreTop__DOT__rf
                               [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                          >> 0xfU))])),64);
    bufp->fullQData(oldp+260,(((0U == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                >> 0x14U)))
                                ? 0ULL : vlSelf->CoreTop__DOT__rf
                               [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                          >> 0x14U))])),64);
    bufp->fullBit(oldp+262,((2U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state))));
    bufp->fullQData(oldp+263,(vlSelf->CoreTop__DOT__ICACHE__DOT__mem_addr_reg),64);
    bufp->fullBit(oldp+265,(vlSelf->CoreTop__DOT__If_axi_birdge_io_in_rdata_rep_valid));
    bufp->fullQData(oldp+266,(vlSelf->CoreTop__DOT__IFMEM_rdata),64);
    bufp->fullBit(oldp+268,(vlSelf->CoreTop__DOT__IFMEM_bvalid));
    bufp->fullBit(oldp+269,((0U == (IData)(vlSelf->CoreTop__DOT__IFMEM__DOT__state))));
    bufp->fullBit(oldp+270,(vlSelf->CoreTop__DOT__If_axi_birdge_io_out_raddr_req_valid));
    bufp->fullBit(oldp+271,(vlSelf->CoreTop__DOT__IFMEM_r_valid));
    bufp->fullBit(oldp+272,(vlSelf->CoreTop__DOT__If_axi_birdge__DOT__aw_state));
    bufp->fullBit(oldp+273,(vlSelf->CoreTop__DOT__MMIO_io_out_addr_req_valid));
    bufp->fullQData(oldp+274,(vlSelf->CoreTop__DOT__MMIO_io_out_addr_req_bits_addr),64);
    bufp->fullBit(oldp+276,(vlSelf->CoreTop__DOT__MMIO_io_out_addr_req_bits_ce));
    bufp->fullBit(oldp+277,(vlSelf->CoreTop__DOT__MMIO_io_out_addr_req_bits_we));
    bufp->fullBit(oldp+278,(vlSelf->CoreTop__DOT__MEM_axi_birdge_io_in_rdata_rep_valid));
    bufp->fullQData(oldp+279,(vlSelf->CoreTop__DOT__MMEM_rdata),64);
    bufp->fullQData(oldp+281,(((IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_valid)
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
    bufp->fullCData(oldp+283,(((IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_valid)
                                ? (((0xa0000000ULL 
                                     <= vlSelf->CoreTop__DOT__MEM__DOT__addr_temp) 
                                    & (0xa2000000ULL 
                                       >= vlSelf->CoreTop__DOT__MEM__DOT__addr_temp))
                                    ? (IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wmask)
                                    : 0xffU) : 0xffU)),8);
    bufp->fullBit(oldp+284,(vlSelf->CoreTop__DOT__MMEM_bvalid));
    bufp->fullBit(oldp+285,((0U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__state))));
    bufp->fullBit(oldp+286,(vlSelf->CoreTop__DOT__MEM_axi_birdge_io_out_raddr_req_valid));
    bufp->fullBit(oldp+287,(vlSelf->CoreTop__DOT__MEM_axi_birdge_io_out_waddr_req_valid));
    bufp->fullBit(oldp+288,(vlSelf->CoreTop__DOT__MMEM_r_valid));
    bufp->fullBit(oldp+289,(((((~ (IData)(vlSelf->CoreTop__DOT__MEM_axi_birdge__DOT__aw_state)) 
                               & (IData)(vlSelf->CoreTop__DOT__MMIO_io_out_addr_req_valid)) 
                              & (IData)(vlSelf->CoreTop__DOT__MMIO_io_out_addr_req_bits_ce)) 
                             & (IData)(vlSelf->CoreTop__DOT__MMIO_io_out_addr_req_bits_we))));
    bufp->fullBit(oldp+290,(vlSelf->CoreTop__DOT__MEM_axi_birdge__DOT__aw_state));
    bufp->fullBit(oldp+291,(vlSelf->CoreTop__DOT__DIP_io_is_break_REG));
    bufp->fullQData(oldp+292,(vlSelf->CoreTop__DOT__DIP__DOT__rf[0]),64);
    bufp->fullQData(oldp+294,(vlSelf->CoreTop__DOT__DIP__DOT__rf[1]),64);
    bufp->fullQData(oldp+296,(vlSelf->CoreTop__DOT__DIP__DOT__rf[2]),64);
    bufp->fullQData(oldp+298,(vlSelf->CoreTop__DOT__DIP__DOT__rf[3]),64);
    bufp->fullQData(oldp+300,(vlSelf->CoreTop__DOT__DIP__DOT__rf[4]),64);
    bufp->fullQData(oldp+302,(vlSelf->CoreTop__DOT__DIP__DOT__rf[5]),64);
    bufp->fullQData(oldp+304,(vlSelf->CoreTop__DOT__DIP__DOT__rf[6]),64);
    bufp->fullQData(oldp+306,(vlSelf->CoreTop__DOT__DIP__DOT__rf[7]),64);
    bufp->fullQData(oldp+308,(vlSelf->CoreTop__DOT__DIP__DOT__rf[8]),64);
    bufp->fullQData(oldp+310,(vlSelf->CoreTop__DOT__DIP__DOT__rf[9]),64);
    bufp->fullQData(oldp+312,(vlSelf->CoreTop__DOT__DIP__DOT__rf[10]),64);
    bufp->fullQData(oldp+314,(vlSelf->CoreTop__DOT__DIP__DOT__rf[11]),64);
    bufp->fullQData(oldp+316,(vlSelf->CoreTop__DOT__DIP__DOT__rf[12]),64);
    bufp->fullQData(oldp+318,(vlSelf->CoreTop__DOT__DIP__DOT__rf[13]),64);
    bufp->fullQData(oldp+320,(vlSelf->CoreTop__DOT__DIP__DOT__rf[14]),64);
    bufp->fullQData(oldp+322,(vlSelf->CoreTop__DOT__DIP__DOT__rf[15]),64);
    bufp->fullQData(oldp+324,(vlSelf->CoreTop__DOT__DIP__DOT__rf[16]),64);
    bufp->fullQData(oldp+326,(vlSelf->CoreTop__DOT__DIP__DOT__rf[17]),64);
    bufp->fullQData(oldp+328,(vlSelf->CoreTop__DOT__DIP__DOT__rf[18]),64);
    bufp->fullQData(oldp+330,(vlSelf->CoreTop__DOT__DIP__DOT__rf[19]),64);
    bufp->fullQData(oldp+332,(vlSelf->CoreTop__DOT__DIP__DOT__rf[20]),64);
    bufp->fullQData(oldp+334,(vlSelf->CoreTop__DOT__DIP__DOT__rf[21]),64);
    bufp->fullQData(oldp+336,(vlSelf->CoreTop__DOT__DIP__DOT__rf[22]),64);
    bufp->fullQData(oldp+338,(vlSelf->CoreTop__DOT__DIP__DOT__rf[23]),64);
    bufp->fullQData(oldp+340,(vlSelf->CoreTop__DOT__DIP__DOT__rf[24]),64);
    bufp->fullQData(oldp+342,(vlSelf->CoreTop__DOT__DIP__DOT__rf[25]),64);
    bufp->fullQData(oldp+344,(vlSelf->CoreTop__DOT__DIP__DOT__rf[26]),64);
    bufp->fullQData(oldp+346,(vlSelf->CoreTop__DOT__DIP__DOT__rf[27]),64);
    bufp->fullQData(oldp+348,(vlSelf->CoreTop__DOT__DIP__DOT__rf[28]),64);
    bufp->fullQData(oldp+350,(vlSelf->CoreTop__DOT__DIP__DOT__rf[29]),64);
    bufp->fullQData(oldp+352,(vlSelf->CoreTop__DOT__DIP__DOT__rf[30]),64);
    bufp->fullQData(oldp+354,(vlSelf->CoreTop__DOT__DIP__DOT__rf[31]),64);
    bufp->fullIData(oldp+356,(vlSelf->CoreTop__DOT__DIP__DOT__IN[0]),32);
    bufp->fullIData(oldp+357,(vlSelf->CoreTop__DOT__DIP__DOT__IN[1]),32);
    bufp->fullIData(oldp+358,(vlSelf->CoreTop__DOT__DIP__DOT__IN[2]),32);
    bufp->fullIData(oldp+359,(vlSelf->CoreTop__DOT__DIP__DOT__IN[3]),32);
    bufp->fullIData(oldp+360,(vlSelf->CoreTop__DOT__DIP__DOT__IN[4]),32);
    bufp->fullIData(oldp+361,(vlSelf->CoreTop__DOT__DIP__DOT__IN[5]),32);
    bufp->fullIData(oldp+362,(vlSelf->CoreTop__DOT__DIP__DOT__IN[6]),32);
    bufp->fullQData(oldp+363,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mepc_REG_1),64);
    bufp->fullQData(oldp+365,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mcause_REG_1),64);
    bufp->fullQData(oldp+367,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mstatus_REG_1),64);
    bufp->fullQData(oldp+369,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mtvec_REG_1),64);
    bufp->fullBit(oldp+371,(vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_valid));
    bufp->fullQData(oldp+372,(((IData)(vlSelf->CoreTop__DOT__EX__DOT__is_mul)
                                ? vlSelf->CoreTop__DOT__EX__DOT__src1
                                : (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__src1)))),64);
    bufp->fullQData(oldp+374,(((IData)(vlSelf->CoreTop__DOT__EX__DOT__is_mul)
                                ? vlSelf->CoreTop__DOT__EX__DOT__src2
                                : (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)))),64);
    bufp->fullBit(oldp+376,((0x44U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count))));
    bufp->fullQData(oldp+377,((((QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[0U])))),64);
    bufp->fullBit(oldp+379,(((IData)(vlSelf->CoreTop__DOT__EX__DOT__is_div) 
                             & (2U != (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state)))));
    bufp->fullBit(oldp+380,(vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_flow_div_signed));
    bufp->fullQData(oldp+381,(vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src1),64);
    bufp->fullQData(oldp+383,(vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src2),64);
    bufp->fullBit(oldp+385,((2U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state))));
    bufp->fullQData(oldp+386,(vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_quotient),64);
    bufp->fullQData(oldp+388,(vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_remainder),64);
    bufp->fullBit(oldp+390,(vlSelf->CoreTop__DOT__EX__DOT__is_mul));
    bufp->fullBit(oldp+391,(vlSelf->CoreTop__DOT__EX__DOT__is_div));
    bufp->fullBit(oldp+392,(vlSelf->CoreTop__DOT__EX__DOT__is_divw));
    bufp->fullQData(oldp+393,(vlSelf->CoreTop__DOT__EX__DOT__mepc),64);
    bufp->fullQData(oldp+395,(vlSelf->CoreTop__DOT__EX__DOT__mcause),64);
    bufp->fullQData(oldp+397,(vlSelf->CoreTop__DOT__EX__DOT__mstatus),64);
    bufp->fullQData(oldp+399,(vlSelf->CoreTop__DOT__EX__DOT__mtvec),64);
    bufp->fullQData(oldp+401,(vlSelf->CoreTop__DOT__EX__DOT__mie),64);
    bufp->fullQData(oldp+403,(vlSelf->CoreTop__DOT__EX__DOT__mip),64);
    bufp->fullQData(oldp+405,(vlSelf->CoreTop__DOT__EX__DOT__src1),64);
    bufp->fullQData(oldp+407,(vlSelf->CoreTop__DOT__EX__DOT__src2),64);
    bufp->fullBit(oldp+409,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+410,((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[0U] 
                             >> 0x1fU)));
    bufp->fullBit(oldp+411,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_quotient 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+412,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_remainder 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+413,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_10 
                                           >> 0x1fU)))));
    bufp->fullQData(oldp+414,(((0x40U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
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
    bufp->fullBit(oldp+416,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_5[0U] 
                             >> 0x1fU)));
    bufp->fullBit(oldp+417,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_16[0U] 
                             >> 0x1fU)));
    bufp->fullBit(oldp+418,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_25 
                             >> 0x1fU)));
    bufp->fullBit(oldp+419,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_31 
                             >> 0x1fU)));
    bufp->fullBit(oldp+420,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__src1 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+421,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__src2 
                                           >> 0x1fU)))));
    bufp->fullQData(oldp+422,(((0x6aU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                ? ((vlSelf->CoreTop__DOT__EX__DOT__src1 
                                    < vlSelf->CoreTop__DOT__EX__DOT__src2)
                                    ? 1ULL : 0ULL) : 
                               ((2U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                 ? (VL_LTS_IQQ(64, vlSelf->CoreTop__DOT__EX__DOT__src1, vlSelf->CoreTop__DOT__EX__DOT__src2)
                                     ? 1ULL : 0ULL)
                                 : 0ULL))),64);
    bufp->fullQData(oldp+424,(((3U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType))
                                ? (4ULL + vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC)
                                : 0ULL)),64);
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
    bufp->fullQData(oldp+426,((((QData)((IData)(((0x6eU 
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
    bufp->fullQData(oldp+428,(((0x6bU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
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
    bufp->fullBit(oldp+430,(vlSelf->CoreTop__DOT__EX__DOT__branch_flag));
    bufp->fullQData(oldp+431,(vlSelf->CoreTop__DOT__EX__DOT__csr_data),64);
    bufp->fullQData(oldp+433,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mtvec_REG),64);
    bufp->fullQData(oldp+435,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mcause_REG),64);
    bufp->fullQData(oldp+437,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mepc_REG),64);
    bufp->fullQData(oldp+439,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mstatus_REG),64);
    bufp->fullQData(oldp+441,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[0]),64);
    bufp->fullQData(oldp+443,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[1]),64);
    bufp->fullQData(oldp+445,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[2]),64);
    bufp->fullQData(oldp+447,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[3]),64);
    bufp->fullQData(oldp+449,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[4]),64);
    bufp->fullQData(oldp+451,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[5]),64);
    bufp->fullWData(oldp+453,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend),128);
    bufp->fullQData(oldp+457,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divisor),64);
    bufp->fullQData(oldp+459,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S),64);
    bufp->fullCData(oldp+461,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state),2);
    bufp->fullCData(oldp+462,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__count),6);
    bufp->fullBit(oldp+463,((0x3fU == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__count))));
    bufp->fullBit(oldp+464,(((1U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state)) 
                             & (0x3fU == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__count)))));
    bufp->fullWData(oldp+465,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div),65);
    bufp->fullQData(oldp+468,((- vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S)),64);
    bufp->fullQData(oldp+470,((- (((QData)((IData)(
                                                   vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[3U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[2U]))))),64);
    bufp->fullQData(oldp+472,((((((0U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
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
    bufp->fullQData(oldp+474,((((((0U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
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
    bufp->fullCData(oldp+476,((7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U])),3);
    bufp->fullWData(oldp+477,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand),132);
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
    bufp->fullWData(oldp+482,(__Vtemp_h791e8ef8__0),132);
    bufp->fullBit(oldp+487,(((0U != (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U])) 
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
    bufp->fullWData(oldp+488,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier),66);
    bufp->fullWData(oldp+491,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p),132);
    bufp->fullCData(oldp+496,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count),7);
    bufp->fullWData(oldp+497,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__temp),132);
    bufp->fullBit(oldp+502,((1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__temp[4U] 
                                   >> 3U))));
    bufp->fullBit(oldp+503,(((IData)(vlSelf->CoreTop__DOT__EX_io_in_ready) 
                             & (0U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)))));
    bufp->fullQData(oldp+504,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data_io_write_bus_addr),64);
    bufp->fullBit(oldp+506,((8U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__count))));
    bufp->fullCData(oldp+507,(((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r)
                                ? 2U : 1U)),2);
    bufp->fullWData(oldp+508,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data_io_write_bus_wdata),512);
    bufp->fullQData(oldp+524,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_tag_w_data),53);
    bufp->fullQData(oldp+526,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_data),53);
    bufp->fullBit(oldp+528,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0
                            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0]));
    bufp->fullBit(oldp+529,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1
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
    bufp->fullWData(oldp+530,(__Vtemp_hf989eec7__0),512);
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
    bufp->fullWData(oldp+546,(__Vtemp_h4453b49e__0),512);
    bufp->fullQData(oldp+562,((vlSelf->CoreTop__DOT__IF__DOT__temp 
                               >> 0xbU)),53);
    bufp->fullCData(oldp+564,((0x1fU & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                >> 6U)))),5);
    bufp->fullCData(oldp+565,((0x3fU & (IData)(vlSelf->CoreTop__DOT__IF__DOT__temp))),6);
    bufp->fullBit(oldp+566,(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_in_valid_REG));
    bufp->fullBit(oldp+567,(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit));
    bufp->fullWData(oldp+568,(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data),512);
    bufp->fullBit(oldp+584,(((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT___hit_way_0_T) 
                             & ((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                 >> 0xbU) == vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_tag_w_data))));
    bufp->fullBit(oldp+585,(((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT___hit_way_1_T) 
                             & ((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                 >> 0xbU) == vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_data))));
    bufp->fullBit(oldp+586,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[0]));
    bufp->fullBit(oldp+587,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[1]));
    bufp->fullBit(oldp+588,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[2]));
    bufp->fullBit(oldp+589,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[3]));
    bufp->fullBit(oldp+590,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[4]));
    bufp->fullBit(oldp+591,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[5]));
    bufp->fullBit(oldp+592,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[6]));
    bufp->fullBit(oldp+593,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[7]));
    bufp->fullBit(oldp+594,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[8]));
    bufp->fullBit(oldp+595,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[9]));
    bufp->fullBit(oldp+596,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[10]));
    bufp->fullBit(oldp+597,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[11]));
    bufp->fullBit(oldp+598,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[12]));
    bufp->fullBit(oldp+599,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[13]));
    bufp->fullBit(oldp+600,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[14]));
    bufp->fullBit(oldp+601,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[15]));
    bufp->fullBit(oldp+602,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[16]));
    bufp->fullBit(oldp+603,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[17]));
    bufp->fullBit(oldp+604,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[18]));
    bufp->fullBit(oldp+605,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[19]));
    bufp->fullBit(oldp+606,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[20]));
    bufp->fullBit(oldp+607,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[21]));
    bufp->fullBit(oldp+608,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[22]));
    bufp->fullBit(oldp+609,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[23]));
    bufp->fullBit(oldp+610,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[24]));
    bufp->fullBit(oldp+611,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[25]));
    bufp->fullBit(oldp+612,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[26]));
    bufp->fullBit(oldp+613,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[27]));
    bufp->fullBit(oldp+614,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[28]));
    bufp->fullBit(oldp+615,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[29]));
    bufp->fullBit(oldp+616,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[30]));
    bufp->fullBit(oldp+617,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[31]));
    bufp->fullBit(oldp+618,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_lru_w_MPORT_en_pipe_0));
    bufp->fullCData(oldp+619,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_lru_w_MPORT_addr_pipe_0),5);
    bufp->fullBit(oldp+620,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru
                            [vlSelf->CoreTop__DOT__ICACHE__DOT__lru_lru_w_MPORT_addr_pipe_0]));
    bufp->fullBit(oldp+621,(((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                             & ((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                & ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit) 
                                   & ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT___hit_way_0_T) 
                                      & ((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                          >> 0xbU) 
                                         == vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_tag_w_data)))))));
    bufp->fullBit(oldp+622,(((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                             & ((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                & ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit) 
                                   & ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT___hit_way_1_T) 
                                      & ((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                          >> 0xbU) 
                                         == vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_data)))))));
    bufp->fullBit(oldp+623,(((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                             & ((1U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                & ((2U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                   & (((IData)(vlSelf->CoreTop__DOT__EX_io_in_ready) 
                                       & (8U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__count))) 
                                      & (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r)))))));
    bufp->fullBit(oldp+624,(((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                             & ((1U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                & ((2U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                   & (((IData)(vlSelf->CoreTop__DOT__EX_io_in_ready) 
                                       & (8U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__count))) 
                                      & (~ (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r))))))));
    bufp->fullCData(oldp+625,(vlSelf->CoreTop__DOT__ICACHE__DOT__state),2);
    bufp->fullWData(oldp+626,(vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg),512);
    bufp->fullBit(oldp+642,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r));
    bufp->fullCData(oldp+643,(vlSelf->CoreTop__DOT__ICACHE__DOT__count),4);
    bufp->fullQData(oldp+644,(vlSelf->CoreTop__DOT__ICACHE__DOT__hit_data),64);
    bufp->fullQData(oldp+646,(vlSelf->CoreTop__DOT__ICACHE__DOT__mem_data),64);
    bufp->fullWData(oldp+648,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[0]),512);
    bufp->fullWData(oldp+664,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[1]),512);
    bufp->fullWData(oldp+680,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[2]),512);
    bufp->fullWData(oldp+696,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[3]),512);
    bufp->fullWData(oldp+712,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[4]),512);
    bufp->fullWData(oldp+728,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[5]),512);
    bufp->fullWData(oldp+744,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[6]),512);
    bufp->fullWData(oldp+760,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[7]),512);
    bufp->fullWData(oldp+776,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[8]),512);
    bufp->fullWData(oldp+792,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[9]),512);
    bufp->fullWData(oldp+808,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[10]),512);
    bufp->fullWData(oldp+824,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[11]),512);
    bufp->fullWData(oldp+840,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[12]),512);
    bufp->fullWData(oldp+856,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[13]),512);
    bufp->fullWData(oldp+872,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[14]),512);
    bufp->fullWData(oldp+888,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[15]),512);
    bufp->fullWData(oldp+904,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[16]),512);
    bufp->fullWData(oldp+920,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[17]),512);
    bufp->fullWData(oldp+936,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[18]),512);
    bufp->fullWData(oldp+952,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[19]),512);
    bufp->fullWData(oldp+968,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[20]),512);
    bufp->fullWData(oldp+984,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[21]),512);
    bufp->fullWData(oldp+1000,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[22]),512);
    bufp->fullWData(oldp+1016,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[23]),512);
    bufp->fullWData(oldp+1032,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[24]),512);
    bufp->fullWData(oldp+1048,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[25]),512);
    bufp->fullWData(oldp+1064,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[26]),512);
    bufp->fullWData(oldp+1080,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[27]),512);
    bufp->fullWData(oldp+1096,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[28]),512);
    bufp->fullWData(oldp+1112,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[29]),512);
    bufp->fullWData(oldp+1128,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[30]),512);
    bufp->fullWData(oldp+1144,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[31]),512);
    bufp->fullBit(oldp+1160,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_en_pipe_0));
    bufp->fullCData(oldp+1161,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0),5);
    bufp->fullCData(oldp+1162,((0x1fU & (IData)((vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data_io_write_bus_addr 
                                                 >> 6U)))),5);
    bufp->fullBit(oldp+1163,(((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r)
                               ? 0U : 1U)));
    bufp->fullWData(oldp+1164,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[0]),512);
    bufp->fullWData(oldp+1180,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[1]),512);
    bufp->fullWData(oldp+1196,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[2]),512);
    bufp->fullWData(oldp+1212,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[3]),512);
    bufp->fullWData(oldp+1228,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[4]),512);
    bufp->fullWData(oldp+1244,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[5]),512);
    bufp->fullWData(oldp+1260,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[6]),512);
    bufp->fullWData(oldp+1276,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[7]),512);
    bufp->fullWData(oldp+1292,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[8]),512);
    bufp->fullWData(oldp+1308,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[9]),512);
    bufp->fullWData(oldp+1324,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[10]),512);
    bufp->fullWData(oldp+1340,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[11]),512);
    bufp->fullWData(oldp+1356,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[12]),512);
    bufp->fullWData(oldp+1372,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[13]),512);
    bufp->fullWData(oldp+1388,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[14]),512);
    bufp->fullWData(oldp+1404,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[15]),512);
    bufp->fullWData(oldp+1420,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[16]),512);
    bufp->fullWData(oldp+1436,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[17]),512);
    bufp->fullWData(oldp+1452,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[18]),512);
    bufp->fullWData(oldp+1468,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[19]),512);
    bufp->fullWData(oldp+1484,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[20]),512);
    bufp->fullWData(oldp+1500,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[21]),512);
    bufp->fullWData(oldp+1516,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[22]),512);
    bufp->fullWData(oldp+1532,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[23]),512);
    bufp->fullWData(oldp+1548,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[24]),512);
    bufp->fullWData(oldp+1564,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[25]),512);
    bufp->fullWData(oldp+1580,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[26]),512);
    bufp->fullWData(oldp+1596,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[27]),512);
    bufp->fullWData(oldp+1612,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[28]),512);
    bufp->fullWData(oldp+1628,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[29]),512);
    bufp->fullWData(oldp+1644,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[30]),512);
    bufp->fullWData(oldp+1660,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[31]),512);
    bufp->fullBit(oldp+1676,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_en_pipe_0));
    bufp->fullBit(oldp+1677,((1U & (((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r)
                                      ? 2U : 1U) >> 1U))));
    bufp->fullQData(oldp+1678,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[0]),53);
    bufp->fullQData(oldp+1680,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[1]),53);
    bufp->fullQData(oldp+1682,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[2]),53);
    bufp->fullQData(oldp+1684,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[3]),53);
    bufp->fullQData(oldp+1686,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[4]),53);
    bufp->fullQData(oldp+1688,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[5]),53);
    bufp->fullQData(oldp+1690,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[6]),53);
    bufp->fullQData(oldp+1692,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[7]),53);
    bufp->fullQData(oldp+1694,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[8]),53);
    bufp->fullQData(oldp+1696,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[9]),53);
    bufp->fullQData(oldp+1698,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[10]),53);
    bufp->fullQData(oldp+1700,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[11]),53);
    bufp->fullQData(oldp+1702,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[12]),53);
    bufp->fullQData(oldp+1704,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[13]),53);
    bufp->fullQData(oldp+1706,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[14]),53);
    bufp->fullQData(oldp+1708,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[15]),53);
    bufp->fullQData(oldp+1710,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[16]),53);
    bufp->fullQData(oldp+1712,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[17]),53);
    bufp->fullQData(oldp+1714,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[18]),53);
    bufp->fullQData(oldp+1716,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[19]),53);
    bufp->fullQData(oldp+1718,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[20]),53);
    bufp->fullQData(oldp+1720,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[21]),53);
    bufp->fullQData(oldp+1722,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[22]),53);
    bufp->fullQData(oldp+1724,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[23]),53);
    bufp->fullQData(oldp+1726,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[24]),53);
    bufp->fullQData(oldp+1728,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[25]),53);
    bufp->fullQData(oldp+1730,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[26]),53);
    bufp->fullQData(oldp+1732,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[27]),53);
    bufp->fullQData(oldp+1734,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[28]),53);
    bufp->fullQData(oldp+1736,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[29]),53);
    bufp->fullQData(oldp+1738,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[30]),53);
    bufp->fullQData(oldp+1740,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[31]),53);
    bufp->fullBit(oldp+1742,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_tag_w_en_pipe_0));
    bufp->fullCData(oldp+1743,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_tag_w_addr_pipe_0),5);
    bufp->fullQData(oldp+1744,((vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data_io_write_bus_addr 
                                >> 0xbU)),53);
    bufp->fullQData(oldp+1746,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[0]),53);
    bufp->fullQData(oldp+1748,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[1]),53);
    bufp->fullQData(oldp+1750,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[2]),53);
    bufp->fullQData(oldp+1752,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[3]),53);
    bufp->fullQData(oldp+1754,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[4]),53);
    bufp->fullQData(oldp+1756,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[5]),53);
    bufp->fullQData(oldp+1758,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[6]),53);
    bufp->fullQData(oldp+1760,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[7]),53);
    bufp->fullQData(oldp+1762,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[8]),53);
    bufp->fullQData(oldp+1764,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[9]),53);
    bufp->fullQData(oldp+1766,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[10]),53);
    bufp->fullQData(oldp+1768,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[11]),53);
    bufp->fullQData(oldp+1770,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[12]),53);
    bufp->fullQData(oldp+1772,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[13]),53);
    bufp->fullQData(oldp+1774,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[14]),53);
    bufp->fullQData(oldp+1776,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[15]),53);
    bufp->fullQData(oldp+1778,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[16]),53);
    bufp->fullQData(oldp+1780,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[17]),53);
    bufp->fullQData(oldp+1782,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[18]),53);
    bufp->fullQData(oldp+1784,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[19]),53);
    bufp->fullQData(oldp+1786,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[20]),53);
    bufp->fullQData(oldp+1788,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[21]),53);
    bufp->fullQData(oldp+1790,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[22]),53);
    bufp->fullQData(oldp+1792,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[23]),53);
    bufp->fullQData(oldp+1794,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[24]),53);
    bufp->fullQData(oldp+1796,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[25]),53);
    bufp->fullQData(oldp+1798,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[26]),53);
    bufp->fullQData(oldp+1800,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[27]),53);
    bufp->fullQData(oldp+1802,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[28]),53);
    bufp->fullQData(oldp+1804,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[29]),53);
    bufp->fullQData(oldp+1806,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[30]),53);
    bufp->fullQData(oldp+1808,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[31]),53);
    bufp->fullBit(oldp+1810,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_en_pipe_0));
    bufp->fullCData(oldp+1811,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0),5);
    bufp->fullBit(oldp+1812,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[0]));
    bufp->fullBit(oldp+1813,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[1]));
    bufp->fullBit(oldp+1814,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[2]));
    bufp->fullBit(oldp+1815,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[3]));
    bufp->fullBit(oldp+1816,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[4]));
    bufp->fullBit(oldp+1817,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[5]));
    bufp->fullBit(oldp+1818,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[6]));
    bufp->fullBit(oldp+1819,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[7]));
    bufp->fullBit(oldp+1820,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[8]));
    bufp->fullBit(oldp+1821,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[9]));
    bufp->fullBit(oldp+1822,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[10]));
    bufp->fullBit(oldp+1823,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[11]));
    bufp->fullBit(oldp+1824,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[12]));
    bufp->fullBit(oldp+1825,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[13]));
    bufp->fullBit(oldp+1826,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[14]));
    bufp->fullBit(oldp+1827,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[15]));
    bufp->fullBit(oldp+1828,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[16]));
    bufp->fullBit(oldp+1829,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[17]));
    bufp->fullBit(oldp+1830,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[18]));
    bufp->fullBit(oldp+1831,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[19]));
    bufp->fullBit(oldp+1832,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[20]));
    bufp->fullBit(oldp+1833,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[21]));
    bufp->fullBit(oldp+1834,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[22]));
    bufp->fullBit(oldp+1835,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[23]));
    bufp->fullBit(oldp+1836,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[24]));
    bufp->fullBit(oldp+1837,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[25]));
    bufp->fullBit(oldp+1838,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[26]));
    bufp->fullBit(oldp+1839,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[27]));
    bufp->fullBit(oldp+1840,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[28]));
    bufp->fullBit(oldp+1841,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[29]));
    bufp->fullBit(oldp+1842,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[30]));
    bufp->fullBit(oldp+1843,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[31]));
    bufp->fullBit(oldp+1844,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_en_pipe_0));
    bufp->fullCData(oldp+1845,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0),5);
    bufp->fullBit(oldp+1846,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[0]));
    bufp->fullBit(oldp+1847,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[1]));
    bufp->fullBit(oldp+1848,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[2]));
    bufp->fullBit(oldp+1849,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[3]));
    bufp->fullBit(oldp+1850,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[4]));
    bufp->fullBit(oldp+1851,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[5]));
    bufp->fullBit(oldp+1852,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[6]));
    bufp->fullBit(oldp+1853,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[7]));
    bufp->fullBit(oldp+1854,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[8]));
    bufp->fullBit(oldp+1855,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[9]));
    bufp->fullBit(oldp+1856,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[10]));
    bufp->fullBit(oldp+1857,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[11]));
    bufp->fullBit(oldp+1858,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[12]));
    bufp->fullBit(oldp+1859,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[13]));
    bufp->fullBit(oldp+1860,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[14]));
    bufp->fullBit(oldp+1861,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[15]));
    bufp->fullBit(oldp+1862,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[16]));
    bufp->fullBit(oldp+1863,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[17]));
    bufp->fullBit(oldp+1864,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[18]));
    bufp->fullBit(oldp+1865,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[19]));
    bufp->fullBit(oldp+1866,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[20]));
    bufp->fullBit(oldp+1867,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[21]));
    bufp->fullBit(oldp+1868,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[22]));
    bufp->fullBit(oldp+1869,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[23]));
    bufp->fullBit(oldp+1870,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[24]));
    bufp->fullBit(oldp+1871,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[25]));
    bufp->fullBit(oldp+1872,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[26]));
    bufp->fullBit(oldp+1873,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[27]));
    bufp->fullBit(oldp+1874,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[28]));
    bufp->fullBit(oldp+1875,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[29]));
    bufp->fullBit(oldp+1876,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[30]));
    bufp->fullBit(oldp+1877,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[31]));
    bufp->fullBit(oldp+1878,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_en_pipe_0));
    bufp->fullCData(oldp+1879,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_addr_pipe_0),5);
    bufp->fullBit(oldp+1880,(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_0_result));
    bufp->fullBit(oldp+1881,(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_1_result));
    bufp->fullCData(oldp+1882,(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0),4);
    bufp->fullBit(oldp+1883,(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_3));
    bufp->fullCData(oldp+1884,((((7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                  ? 2U : 0U) | ((3U 
                                                 == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                                 ? 2U
                                                 : 0U))),2);
    bufp->fullBit(oldp+1885,((((8U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)) 
                               | (7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))) 
                              | (3U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)))));
    bufp->fullBit(oldp+1886,((vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                              >> 0x1fU)));
    bufp->fullBit(oldp+1887,((1U & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                    >> 0x13U))));
    bufp->fullBit(oldp+1888,((vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                              >> 0x1fU)));
    bufp->fullIData(oldp+1889,(((1U & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
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
    bufp->fullCData(oldp+1890,(vlSelf->CoreTop__DOT__IFMEM__DOT__state),2);
    bufp->fullBit(oldp+1891,(vlSelf->CoreTop__DOT__If_axi_birdge__DOT__ar_state));
    bufp->fullBit(oldp+1892,((1U & (IData)((vlSelf->CoreTop__DOT__MMIO_io_in_rdata_rep_bits_rdata 
                                            >> 0x3fU)))));
    bufp->fullBit(oldp+1893,((1U & (IData)((vlSelf->CoreTop__DOT__MMIO_io_in_rdata_rep_bits_rdata 
                                            >> 0x1fU)))));
    bufp->fullBit(oldp+1894,((1U & ((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_27) 
                                    >> 7U))));
    bufp->fullBit(oldp+1895,((1U & ((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_44) 
                                    >> 0xfU))));
    bufp->fullQData(oldp+1896,(((0x45U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
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
    bufp->fullBit(oldp+1898,(vlSelf->CoreTop__DOT__MEM_axi_birdge__DOT__ar_state));
    bufp->fullCData(oldp+1899,(vlSelf->CoreTop__DOT__MMEM__DOT__state),2);
    bufp->fullBit(oldp+1900,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_valid));
    bufp->fullBit(oldp+1901,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_rdata_rep_valid));
    bufp->fullQData(oldp+1902,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_rdata_rep_bits_rdata),64);
    bufp->fullBit(oldp+1904,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_rep));
    bufp->fullBit(oldp+1905,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_addr_req_valid));
    bufp->fullQData(oldp+1906,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_addr_req_bits_addr),64);
    bufp->fullBit(oldp+1908,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_addr_req_bits_ce));
    bufp->fullBit(oldp+1909,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_addr_req_bits_we));
    bufp->fullQData(oldp+1910,((((QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0U])))),64);
    bufp->fullBit(oldp+1912,(((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_valid) 
                              & (0U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)))));
    bufp->fullQData(oldp+1913,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_addr),64);
    bufp->fullBit(oldp+1915,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_valid));
    bufp->fullCData(oldp+1916,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_waymask),2);
    bufp->fullWData(oldp+1917,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_wdata),512);
    bufp->fullQData(oldp+1933,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_tag_w_data),53);
    bufp->fullQData(oldp+1935,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1_tag_w_data),53);
    bufp->fullBit(oldp+1937,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0
                             [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0]));
    bufp->fullBit(oldp+1938,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1
                             [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_addr_pipe_0]));
    bufp->fullWData(oldp+1939,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data),512);
    bufp->fullWData(oldp+1955,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data),512);
    bufp->fullQData(oldp+1971,((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                >> 0xbU)),53);
    bufp->fullCData(oldp+1973,((0x1fU & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                 >> 6U)))),5);
    bufp->fullCData(oldp+1974,((0x3fU & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp))),6);
    bufp->fullBit(oldp+1975,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_in_valid_REG));
    bufp->fullBit(oldp+1976,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit));
    bufp->fullWData(oldp+1977,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data),512);
    bufp->fullBit(oldp+1993,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit_way_0));
    bufp->fullBit(oldp+1994,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit_way_1));
    bufp->fullBit(oldp+1995,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[0]));
    bufp->fullBit(oldp+1996,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[1]));
    bufp->fullBit(oldp+1997,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[2]));
    bufp->fullBit(oldp+1998,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[3]));
    bufp->fullBit(oldp+1999,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[4]));
    bufp->fullBit(oldp+2000,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[5]));
    bufp->fullBit(oldp+2001,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[6]));
    bufp->fullBit(oldp+2002,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[7]));
    bufp->fullBit(oldp+2003,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[8]));
    bufp->fullBit(oldp+2004,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[9]));
    bufp->fullBit(oldp+2005,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[10]));
    bufp->fullBit(oldp+2006,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[11]));
    bufp->fullBit(oldp+2007,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[12]));
    bufp->fullBit(oldp+2008,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[13]));
    bufp->fullBit(oldp+2009,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[14]));
    bufp->fullBit(oldp+2010,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[15]));
    bufp->fullBit(oldp+2011,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[16]));
    bufp->fullBit(oldp+2012,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[17]));
    bufp->fullBit(oldp+2013,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[18]));
    bufp->fullBit(oldp+2014,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[19]));
    bufp->fullBit(oldp+2015,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[20]));
    bufp->fullBit(oldp+2016,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[21]));
    bufp->fullBit(oldp+2017,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[22]));
    bufp->fullBit(oldp+2018,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[23]));
    bufp->fullBit(oldp+2019,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[24]));
    bufp->fullBit(oldp+2020,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[25]));
    bufp->fullBit(oldp+2021,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[26]));
    bufp->fullBit(oldp+2022,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[27]));
    bufp->fullBit(oldp+2023,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[28]));
    bufp->fullBit(oldp+2024,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[29]));
    bufp->fullBit(oldp+2025,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[30]));
    bufp->fullBit(oldp+2026,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[31]));
    bufp->fullBit(oldp+2027,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_en_pipe_0));
    bufp->fullCData(oldp+2028,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_addr_pipe_0),5);
    bufp->fullBit(oldp+2029,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_data));
    bufp->fullBit(oldp+2030,(((0U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                              & ((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                 & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit) 
                                    & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit_way_0))))));
    bufp->fullBit(oldp+2031,(((0U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                              & ((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                 & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit) 
                                    & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit_way_1))))));
    bufp->fullBit(oldp+2032,(((0U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                              & ((1U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                 & ((2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                    & ((8U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count)) 
                                       & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_r)))))));
    bufp->fullBit(oldp+2033,(((0U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                              & ((1U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                 & ((2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                                    & ((8U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count)) 
                                       & (~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_r))))))));
    bufp->fullBit(oldp+2034,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[0]));
    bufp->fullBit(oldp+2035,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[1]));
    bufp->fullBit(oldp+2036,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[2]));
    bufp->fullBit(oldp+2037,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[3]));
    bufp->fullBit(oldp+2038,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[4]));
    bufp->fullBit(oldp+2039,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[5]));
    bufp->fullBit(oldp+2040,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[6]));
    bufp->fullBit(oldp+2041,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[7]));
    bufp->fullBit(oldp+2042,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[8]));
    bufp->fullBit(oldp+2043,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[9]));
    bufp->fullBit(oldp+2044,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[10]));
    bufp->fullBit(oldp+2045,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[11]));
    bufp->fullBit(oldp+2046,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[12]));
    bufp->fullBit(oldp+2047,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[13]));
    bufp->fullBit(oldp+2048,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[14]));
    bufp->fullBit(oldp+2049,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[15]));
    bufp->fullBit(oldp+2050,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[16]));
    bufp->fullBit(oldp+2051,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[17]));
    bufp->fullBit(oldp+2052,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[18]));
    bufp->fullBit(oldp+2053,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[19]));
    bufp->fullBit(oldp+2054,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[20]));
    bufp->fullBit(oldp+2055,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[21]));
    bufp->fullBit(oldp+2056,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[22]));
    bufp->fullBit(oldp+2057,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[23]));
    bufp->fullBit(oldp+2058,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[24]));
    bufp->fullBit(oldp+2059,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[25]));
    bufp->fullBit(oldp+2060,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[26]));
    bufp->fullBit(oldp+2061,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[27]));
    bufp->fullBit(oldp+2062,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[28]));
    bufp->fullBit(oldp+2063,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[29]));
    bufp->fullBit(oldp+2064,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[30]));
    bufp->fullBit(oldp+2065,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[31]));
    bufp->fullBit(oldp+2066,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0_dirt_w_en_pipe_0));
    bufp->fullBit(oldp+2067,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0
                             [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_addr_pipe_0]));
    bufp->fullBit(oldp+2068,((1U & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__waymask))));
    bufp->fullBit(oldp+2069,(((IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_we) 
                              & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_valid_T_5))));
    bufp->fullBit(oldp+2070,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[0]));
    bufp->fullBit(oldp+2071,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[1]));
    bufp->fullBit(oldp+2072,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[2]));
    bufp->fullBit(oldp+2073,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[3]));
    bufp->fullBit(oldp+2074,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[4]));
    bufp->fullBit(oldp+2075,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[5]));
    bufp->fullBit(oldp+2076,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[6]));
    bufp->fullBit(oldp+2077,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[7]));
    bufp->fullBit(oldp+2078,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[8]));
    bufp->fullBit(oldp+2079,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[9]));
    bufp->fullBit(oldp+2080,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[10]));
    bufp->fullBit(oldp+2081,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[11]));
    bufp->fullBit(oldp+2082,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[12]));
    bufp->fullBit(oldp+2083,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[13]));
    bufp->fullBit(oldp+2084,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[14]));
    bufp->fullBit(oldp+2085,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[15]));
    bufp->fullBit(oldp+2086,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[16]));
    bufp->fullBit(oldp+2087,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[17]));
    bufp->fullBit(oldp+2088,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[18]));
    bufp->fullBit(oldp+2089,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[19]));
    bufp->fullBit(oldp+2090,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[20]));
    bufp->fullBit(oldp+2091,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[21]));
    bufp->fullBit(oldp+2092,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[22]));
    bufp->fullBit(oldp+2093,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[23]));
    bufp->fullBit(oldp+2094,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[24]));
    bufp->fullBit(oldp+2095,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[25]));
    bufp->fullBit(oldp+2096,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[26]));
    bufp->fullBit(oldp+2097,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[27]));
    bufp->fullBit(oldp+2098,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[28]));
    bufp->fullBit(oldp+2099,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[29]));
    bufp->fullBit(oldp+2100,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[30]));
    bufp->fullBit(oldp+2101,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[31]));
    bufp->fullBit(oldp+2102,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1_dirt_w_en_pipe_0));
    bufp->fullBit(oldp+2103,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1
                             [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_addr_pipe_0]));
    bufp->fullBit(oldp+2104,((1U & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__waymask) 
                                    >> 1U))));
    bufp->fullCData(oldp+2105,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state),2);
    bufp->fullWData(oldp+2106,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg),512);
    bufp->fullQData(oldp+2122,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_addr_reg),64);
    bufp->fullBit(oldp+2124,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_r));
    bufp->fullCData(oldp+2125,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count),4);
    bufp->fullBit(oldp+2126,((8U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count))));
    bufp->fullCData(oldp+2127,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count_write),4);
    bufp->fullBit(oldp+2128,((8U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count_write))));
    bufp->fullQData(oldp+2129,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_addr_reg),64);
    bufp->fullWData(oldp+2131,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg),512);
    bufp->fullQData(oldp+2147,(((0U == (7U & (IData)(
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
    bufp->fullQData(oldp+2149,(((0U == (7U & (IData)(
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
    bufp->fullQData(oldp+2151,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask),64);
    bufp->fullQData(oldp+2153,((((QData)((IData)(((
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
    bufp->fullWData(oldp+2155,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo_lo),128);
    bufp->fullQData(oldp+2159,((((QData)((IData)(((
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
    bufp->fullWData(oldp+2161,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo),256);
    bufp->fullQData(oldp+2169,((((QData)((IData)(((
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
    bufp->fullWData(oldp+2171,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi_lo),128);
    bufp->fullQData(oldp+2175,((((QData)((IData)(((
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
    bufp->fullWData(oldp+2177,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi),256);
    bufp->fullWData(oldp+2185,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend),512);
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
    bufp->fullWData(oldp+2201,(__Vtemp_hc2882e76__0),512);
    bufp->fullCData(oldp+2217,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__waymask),2);
    bufp->fullWData(oldp+2218,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[0]),512);
    bufp->fullWData(oldp+2234,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[1]),512);
    bufp->fullWData(oldp+2250,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[2]),512);
    bufp->fullWData(oldp+2266,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[3]),512);
    bufp->fullWData(oldp+2282,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[4]),512);
    bufp->fullWData(oldp+2298,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[5]),512);
    bufp->fullWData(oldp+2314,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[6]),512);
    bufp->fullWData(oldp+2330,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[7]),512);
    bufp->fullWData(oldp+2346,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[8]),512);
    bufp->fullWData(oldp+2362,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[9]),512);
    bufp->fullWData(oldp+2378,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[10]),512);
    bufp->fullWData(oldp+2394,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[11]),512);
    bufp->fullWData(oldp+2410,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[12]),512);
    bufp->fullWData(oldp+2426,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[13]),512);
    bufp->fullWData(oldp+2442,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[14]),512);
    bufp->fullWData(oldp+2458,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[15]),512);
    bufp->fullWData(oldp+2474,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[16]),512);
    bufp->fullWData(oldp+2490,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[17]),512);
    bufp->fullWData(oldp+2506,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[18]),512);
    bufp->fullWData(oldp+2522,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[19]),512);
    bufp->fullWData(oldp+2538,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[20]),512);
    bufp->fullWData(oldp+2554,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[21]),512);
    bufp->fullWData(oldp+2570,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[22]),512);
    bufp->fullWData(oldp+2586,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[23]),512);
    bufp->fullWData(oldp+2602,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[24]),512);
    bufp->fullWData(oldp+2618,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[25]),512);
    bufp->fullWData(oldp+2634,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[26]),512);
    bufp->fullWData(oldp+2650,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[27]),512);
    bufp->fullWData(oldp+2666,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[28]),512);
    bufp->fullWData(oldp+2682,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[29]),512);
    bufp->fullWData(oldp+2698,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[30]),512);
    bufp->fullWData(oldp+2714,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[31]),512);
    bufp->fullBit(oldp+2730,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_en_pipe_0));
    bufp->fullCData(oldp+2731,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0),5);
    bufp->fullCData(oldp+2732,((0x1fU & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_addr 
                                                 >> 6U)))),5);
    bufp->fullBit(oldp+2733,((1U & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_waymask))));
    bufp->fullWData(oldp+2734,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[0]),512);
    bufp->fullWData(oldp+2750,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[1]),512);
    bufp->fullWData(oldp+2766,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[2]),512);
    bufp->fullWData(oldp+2782,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[3]),512);
    bufp->fullWData(oldp+2798,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[4]),512);
    bufp->fullWData(oldp+2814,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[5]),512);
    bufp->fullWData(oldp+2830,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[6]),512);
    bufp->fullWData(oldp+2846,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[7]),512);
    bufp->fullWData(oldp+2862,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[8]),512);
    bufp->fullWData(oldp+2878,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[9]),512);
    bufp->fullWData(oldp+2894,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[10]),512);
    bufp->fullWData(oldp+2910,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[11]),512);
    bufp->fullWData(oldp+2926,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[12]),512);
    bufp->fullWData(oldp+2942,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[13]),512);
    bufp->fullWData(oldp+2958,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[14]),512);
    bufp->fullWData(oldp+2974,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[15]),512);
    bufp->fullWData(oldp+2990,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[16]),512);
    bufp->fullWData(oldp+3006,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[17]),512);
    bufp->fullWData(oldp+3022,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[18]),512);
    bufp->fullWData(oldp+3038,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[19]),512);
    bufp->fullWData(oldp+3054,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[20]),512);
    bufp->fullWData(oldp+3070,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[21]),512);
    bufp->fullWData(oldp+3086,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[22]),512);
    bufp->fullWData(oldp+3102,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[23]),512);
    bufp->fullWData(oldp+3118,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[24]),512);
    bufp->fullWData(oldp+3134,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[25]),512);
    bufp->fullWData(oldp+3150,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[26]),512);
    bufp->fullWData(oldp+3166,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[27]),512);
    bufp->fullWData(oldp+3182,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[28]),512);
    bufp->fullWData(oldp+3198,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[29]),512);
    bufp->fullWData(oldp+3214,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[30]),512);
    bufp->fullWData(oldp+3230,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[31]),512);
    bufp->fullBit(oldp+3246,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_en_pipe_0));
    bufp->fullCData(oldp+3247,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0),5);
    bufp->fullBit(oldp+3248,((1U & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_waymask) 
                                    >> 1U))));
    bufp->fullQData(oldp+3249,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[0]),53);
    bufp->fullQData(oldp+3251,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[1]),53);
    bufp->fullQData(oldp+3253,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[2]),53);
    bufp->fullQData(oldp+3255,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[3]),53);
    bufp->fullQData(oldp+3257,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[4]),53);
    bufp->fullQData(oldp+3259,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[5]),53);
    bufp->fullQData(oldp+3261,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[6]),53);
    bufp->fullQData(oldp+3263,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[7]),53);
    bufp->fullQData(oldp+3265,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[8]),53);
    bufp->fullQData(oldp+3267,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[9]),53);
    bufp->fullQData(oldp+3269,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[10]),53);
    bufp->fullQData(oldp+3271,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[11]),53);
    bufp->fullQData(oldp+3273,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[12]),53);
    bufp->fullQData(oldp+3275,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[13]),53);
    bufp->fullQData(oldp+3277,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[14]),53);
    bufp->fullQData(oldp+3279,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[15]),53);
    bufp->fullQData(oldp+3281,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[16]),53);
    bufp->fullQData(oldp+3283,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[17]),53);
    bufp->fullQData(oldp+3285,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[18]),53);
    bufp->fullQData(oldp+3287,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[19]),53);
    bufp->fullQData(oldp+3289,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[20]),53);
    bufp->fullQData(oldp+3291,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[21]),53);
    bufp->fullQData(oldp+3293,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[22]),53);
    bufp->fullQData(oldp+3295,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[23]),53);
    bufp->fullQData(oldp+3297,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[24]),53);
    bufp->fullQData(oldp+3299,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[25]),53);
    bufp->fullQData(oldp+3301,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[26]),53);
    bufp->fullQData(oldp+3303,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[27]),53);
    bufp->fullQData(oldp+3305,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[28]),53);
    bufp->fullQData(oldp+3307,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[29]),53);
    bufp->fullQData(oldp+3309,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[30]),53);
    bufp->fullQData(oldp+3311,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[31]),53);
    bufp->fullBit(oldp+3313,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_tag_w_en_pipe_0));
    bufp->fullCData(oldp+3314,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_tag_w_addr_pipe_0),5);
    bufp->fullQData(oldp+3315,((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_addr 
                                >> 0xbU)),53);
    bufp->fullQData(oldp+3317,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[0]),53);
    bufp->fullQData(oldp+3319,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[1]),53);
    bufp->fullQData(oldp+3321,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[2]),53);
    bufp->fullQData(oldp+3323,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[3]),53);
    bufp->fullQData(oldp+3325,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[4]),53);
    bufp->fullQData(oldp+3327,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[5]),53);
    bufp->fullQData(oldp+3329,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[6]),53);
    bufp->fullQData(oldp+3331,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[7]),53);
    bufp->fullQData(oldp+3333,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[8]),53);
    bufp->fullQData(oldp+3335,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[9]),53);
    bufp->fullQData(oldp+3337,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[10]),53);
    bufp->fullQData(oldp+3339,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[11]),53);
    bufp->fullQData(oldp+3341,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[12]),53);
    bufp->fullQData(oldp+3343,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[13]),53);
    bufp->fullQData(oldp+3345,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[14]),53);
    bufp->fullQData(oldp+3347,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[15]),53);
    bufp->fullQData(oldp+3349,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[16]),53);
    bufp->fullQData(oldp+3351,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[17]),53);
    bufp->fullQData(oldp+3353,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[18]),53);
    bufp->fullQData(oldp+3355,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[19]),53);
    bufp->fullQData(oldp+3357,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[20]),53);
    bufp->fullQData(oldp+3359,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[21]),53);
    bufp->fullQData(oldp+3361,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[22]),53);
    bufp->fullQData(oldp+3363,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[23]),53);
    bufp->fullQData(oldp+3365,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[24]),53);
    bufp->fullQData(oldp+3367,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[25]),53);
    bufp->fullQData(oldp+3369,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[26]),53);
    bufp->fullQData(oldp+3371,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[27]),53);
    bufp->fullQData(oldp+3373,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[28]),53);
    bufp->fullQData(oldp+3375,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[29]),53);
    bufp->fullQData(oldp+3377,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[30]),53);
    bufp->fullQData(oldp+3379,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[31]),53);
    bufp->fullBit(oldp+3381,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1_tag_w_en_pipe_0));
    bufp->fullCData(oldp+3382,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0),5);
    bufp->fullBit(oldp+3383,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[0]));
    bufp->fullBit(oldp+3384,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[1]));
    bufp->fullBit(oldp+3385,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[2]));
    bufp->fullBit(oldp+3386,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[3]));
    bufp->fullBit(oldp+3387,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[4]));
    bufp->fullBit(oldp+3388,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[5]));
    bufp->fullBit(oldp+3389,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[6]));
    bufp->fullBit(oldp+3390,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[7]));
    bufp->fullBit(oldp+3391,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[8]));
    bufp->fullBit(oldp+3392,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[9]));
    bufp->fullBit(oldp+3393,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[10]));
    bufp->fullBit(oldp+3394,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[11]));
    bufp->fullBit(oldp+3395,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[12]));
    bufp->fullBit(oldp+3396,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[13]));
    bufp->fullBit(oldp+3397,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[14]));
    bufp->fullBit(oldp+3398,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[15]));
    bufp->fullBit(oldp+3399,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[16]));
    bufp->fullBit(oldp+3400,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[17]));
    bufp->fullBit(oldp+3401,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[18]));
    bufp->fullBit(oldp+3402,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[19]));
    bufp->fullBit(oldp+3403,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[20]));
    bufp->fullBit(oldp+3404,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[21]));
    bufp->fullBit(oldp+3405,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[22]));
    bufp->fullBit(oldp+3406,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[23]));
    bufp->fullBit(oldp+3407,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[24]));
    bufp->fullBit(oldp+3408,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[25]));
    bufp->fullBit(oldp+3409,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[26]));
    bufp->fullBit(oldp+3410,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[27]));
    bufp->fullBit(oldp+3411,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[28]));
    bufp->fullBit(oldp+3412,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[29]));
    bufp->fullBit(oldp+3413,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[30]));
    bufp->fullBit(oldp+3414,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[31]));
    bufp->fullBit(oldp+3415,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_en_pipe_0));
    bufp->fullCData(oldp+3416,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0),5);
    bufp->fullBit(oldp+3417,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[0]));
    bufp->fullBit(oldp+3418,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[1]));
    bufp->fullBit(oldp+3419,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[2]));
    bufp->fullBit(oldp+3420,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[3]));
    bufp->fullBit(oldp+3421,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[4]));
    bufp->fullBit(oldp+3422,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[5]));
    bufp->fullBit(oldp+3423,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[6]));
    bufp->fullBit(oldp+3424,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[7]));
    bufp->fullBit(oldp+3425,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[8]));
    bufp->fullBit(oldp+3426,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[9]));
    bufp->fullBit(oldp+3427,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[10]));
    bufp->fullBit(oldp+3428,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[11]));
    bufp->fullBit(oldp+3429,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[12]));
    bufp->fullBit(oldp+3430,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[13]));
    bufp->fullBit(oldp+3431,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[14]));
    bufp->fullBit(oldp+3432,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[15]));
    bufp->fullBit(oldp+3433,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[16]));
    bufp->fullBit(oldp+3434,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[17]));
    bufp->fullBit(oldp+3435,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[18]));
    bufp->fullBit(oldp+3436,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[19]));
    bufp->fullBit(oldp+3437,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[20]));
    bufp->fullBit(oldp+3438,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[21]));
    bufp->fullBit(oldp+3439,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[22]));
    bufp->fullBit(oldp+3440,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[23]));
    bufp->fullBit(oldp+3441,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[24]));
    bufp->fullBit(oldp+3442,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[25]));
    bufp->fullBit(oldp+3443,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[26]));
    bufp->fullBit(oldp+3444,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[27]));
    bufp->fullBit(oldp+3445,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[28]));
    bufp->fullBit(oldp+3446,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[29]));
    bufp->fullBit(oldp+3447,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[30]));
    bufp->fullBit(oldp+3448,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[31]));
    bufp->fullBit(oldp+3449,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_en_pipe_0));
    bufp->fullCData(oldp+3450,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_addr_pipe_0),5);
    bufp->fullBit(oldp+3451,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_0_result));
    bufp->fullBit(oldp+3452,(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_1_result));
    bufp->fullBit(oldp+3453,(vlSelf->clock));
    bufp->fullBit(oldp+3454,(vlSelf->reset));
    bufp->fullQData(oldp+3455,(vlSelf->io_pc),64);
    bufp->fullIData(oldp+3457,(vlSelf->io_inst),32);
    bufp->fullCData(oldp+3458,(vlSelf->CoreTop__DOT__IFMEM__DOT__next_state),2);
    bufp->fullCData(oldp+3459,(vlSelf->CoreTop__DOT__MMEM__DOT__next_state),2);
    bufp->fullBit(oldp+3460,(1U));
    bufp->fullCData(oldp+3461,(0U),5);
    bufp->fullCData(oldp+3462,(1U),5);
    bufp->fullCData(oldp+3463,(2U),5);
    bufp->fullCData(oldp+3464,(3U),5);
    bufp->fullCData(oldp+3465,(4U),5);
    bufp->fullCData(oldp+3466,(5U),5);
    bufp->fullCData(oldp+3467,(6U),5);
    bufp->fullCData(oldp+3468,(7U),5);
    bufp->fullCData(oldp+3469,(8U),5);
    bufp->fullCData(oldp+3470,(9U),5);
    bufp->fullCData(oldp+3471,(0xaU),5);
    bufp->fullCData(oldp+3472,(0xbU),5);
    bufp->fullCData(oldp+3473,(0xcU),5);
    bufp->fullCData(oldp+3474,(0xdU),5);
    bufp->fullCData(oldp+3475,(0xeU),5);
    bufp->fullCData(oldp+3476,(0xfU),5);
    bufp->fullCData(oldp+3477,(0x10U),5);
    bufp->fullCData(oldp+3478,(0x11U),5);
    bufp->fullCData(oldp+3479,(0x12U),5);
    bufp->fullCData(oldp+3480,(0x13U),5);
    bufp->fullCData(oldp+3481,(0x14U),5);
    bufp->fullCData(oldp+3482,(0x15U),5);
    bufp->fullCData(oldp+3483,(0x16U),5);
    bufp->fullCData(oldp+3484,(0x17U),5);
    bufp->fullCData(oldp+3485,(0x18U),5);
    bufp->fullCData(oldp+3486,(0x19U),5);
    bufp->fullCData(oldp+3487,(0x1aU),5);
    bufp->fullCData(oldp+3488,(0x1bU),5);
    bufp->fullCData(oldp+3489,(0x1cU),5);
    bufp->fullCData(oldp+3490,(0x1dU),5);
    bufp->fullCData(oldp+3491,(0x1eU),5);
    bufp->fullCData(oldp+3492,(0x1fU),5);
    bufp->fullBit(oldp+3493,(0U));
    bufp->fullQData(oldp+3494,(0ULL),64);
    bufp->fullCData(oldp+3496,(0U),8);
    bufp->fullCData(oldp+3497,(0U),2);
    bufp->fullCData(oldp+3498,(1U),2);
    bufp->fullCData(oldp+3499,(2U),2);
    bufp->fullCData(oldp+3500,(3U),2);
}
