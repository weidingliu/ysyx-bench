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
    tracep->declBit(c+3433,"EX_clock", false,-1);
    tracep->declBit(c+3434,"EX_reset", false,-1);
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
    tracep->declBit(c+3442,"rf_bypass_io_Reg1_MPORT_en", false,-1);
    tracep->declBus(c+25,"rf_bypass_io_Reg1_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+201,"rf_bypass_io_Reg1_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3442,"rf_bypass_io_Reg2_MPORT_en", false,-1);
    tracep->declBus(c+26,"rf_bypass_io_Reg2_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+203,"rf_bypass_io_Reg2_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3442,"rf_DIP_io_rf_0_MPORT_en", false,-1);
    tracep->declBus(c+3443,"rf_DIP_io_rf_0_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+66,"rf_DIP_io_rf_0_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3442,"rf_DIP_io_rf_1_MPORT_en", false,-1);
    tracep->declBus(c+3444,"rf_DIP_io_rf_1_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+68,"rf_DIP_io_rf_1_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3442,"rf_DIP_io_rf_2_MPORT_en", false,-1);
    tracep->declBus(c+3445,"rf_DIP_io_rf_2_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+70,"rf_DIP_io_rf_2_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3442,"rf_DIP_io_rf_3_MPORT_en", false,-1);
    tracep->declBus(c+3446,"rf_DIP_io_rf_3_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+72,"rf_DIP_io_rf_3_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3442,"rf_DIP_io_rf_4_MPORT_en", false,-1);
    tracep->declBus(c+3447,"rf_DIP_io_rf_4_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+74,"rf_DIP_io_rf_4_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3442,"rf_DIP_io_rf_5_MPORT_en", false,-1);
    tracep->declBus(c+3448,"rf_DIP_io_rf_5_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+76,"rf_DIP_io_rf_5_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3442,"rf_DIP_io_rf_6_MPORT_en", false,-1);
    tracep->declBus(c+3449,"rf_DIP_io_rf_6_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+78,"rf_DIP_io_rf_6_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3442,"rf_DIP_io_rf_7_MPORT_en", false,-1);
    tracep->declBus(c+3450,"rf_DIP_io_rf_7_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+80,"rf_DIP_io_rf_7_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3442,"rf_DIP_io_rf_8_MPORT_en", false,-1);
    tracep->declBus(c+3451,"rf_DIP_io_rf_8_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+82,"rf_DIP_io_rf_8_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3442,"rf_DIP_io_rf_9_MPORT_en", false,-1);
    tracep->declBus(c+3452,"rf_DIP_io_rf_9_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+84,"rf_DIP_io_rf_9_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3442,"rf_DIP_io_rf_10_MPORT_en", false,-1);
    tracep->declBus(c+3453,"rf_DIP_io_rf_10_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+86,"rf_DIP_io_rf_10_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3442,"rf_DIP_io_rf_11_MPORT_en", false,-1);
    tracep->declBus(c+3454,"rf_DIP_io_rf_11_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+88,"rf_DIP_io_rf_11_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3442,"rf_DIP_io_rf_12_MPORT_en", false,-1);
    tracep->declBus(c+3455,"rf_DIP_io_rf_12_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+90,"rf_DIP_io_rf_12_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3442,"rf_DIP_io_rf_13_MPORT_en", false,-1);
    tracep->declBus(c+3456,"rf_DIP_io_rf_13_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+92,"rf_DIP_io_rf_13_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3442,"rf_DIP_io_rf_14_MPORT_en", false,-1);
    tracep->declBus(c+3457,"rf_DIP_io_rf_14_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+94,"rf_DIP_io_rf_14_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3442,"rf_DIP_io_rf_15_MPORT_en", false,-1);
    tracep->declBus(c+3458,"rf_DIP_io_rf_15_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+96,"rf_DIP_io_rf_15_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3442,"rf_DIP_io_rf_16_MPORT_en", false,-1);
    tracep->declBus(c+3459,"rf_DIP_io_rf_16_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+98,"rf_DIP_io_rf_16_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3442,"rf_DIP_io_rf_17_MPORT_en", false,-1);
    tracep->declBus(c+3460,"rf_DIP_io_rf_17_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+100,"rf_DIP_io_rf_17_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3442,"rf_DIP_io_rf_18_MPORT_en", false,-1);
    tracep->declBus(c+3461,"rf_DIP_io_rf_18_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+102,"rf_DIP_io_rf_18_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3442,"rf_DIP_io_rf_19_MPORT_en", false,-1);
    tracep->declBus(c+3462,"rf_DIP_io_rf_19_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+104,"rf_DIP_io_rf_19_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3442,"rf_DIP_io_rf_20_MPORT_en", false,-1);
    tracep->declBus(c+3463,"rf_DIP_io_rf_20_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+106,"rf_DIP_io_rf_20_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3442,"rf_DIP_io_rf_21_MPORT_en", false,-1);
    tracep->declBus(c+3464,"rf_DIP_io_rf_21_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+108,"rf_DIP_io_rf_21_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3442,"rf_DIP_io_rf_22_MPORT_en", false,-1);
    tracep->declBus(c+3465,"rf_DIP_io_rf_22_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+110,"rf_DIP_io_rf_22_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3442,"rf_DIP_io_rf_23_MPORT_en", false,-1);
    tracep->declBus(c+3466,"rf_DIP_io_rf_23_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+112,"rf_DIP_io_rf_23_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3442,"rf_DIP_io_rf_24_MPORT_en", false,-1);
    tracep->declBus(c+3467,"rf_DIP_io_rf_24_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+114,"rf_DIP_io_rf_24_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3442,"rf_DIP_io_rf_25_MPORT_en", false,-1);
    tracep->declBus(c+3468,"rf_DIP_io_rf_25_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+116,"rf_DIP_io_rf_25_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3442,"rf_DIP_io_rf_26_MPORT_en", false,-1);
    tracep->declBus(c+3469,"rf_DIP_io_rf_26_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+118,"rf_DIP_io_rf_26_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3442,"rf_DIP_io_rf_27_MPORT_en", false,-1);
    tracep->declBus(c+3470,"rf_DIP_io_rf_27_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+120,"rf_DIP_io_rf_27_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3442,"rf_DIP_io_rf_28_MPORT_en", false,-1);
    tracep->declBus(c+3471,"rf_DIP_io_rf_28_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+122,"rf_DIP_io_rf_28_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3442,"rf_DIP_io_rf_29_MPORT_en", false,-1);
    tracep->declBus(c+3472,"rf_DIP_io_rf_29_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+124,"rf_DIP_io_rf_29_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3442,"rf_DIP_io_rf_30_MPORT_en", false,-1);
    tracep->declBus(c+3473,"rf_DIP_io_rf_30_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+126,"rf_DIP_io_rf_30_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+3442,"rf_DIP_io_rf_31_MPORT_en", false,-1);
    tracep->declBus(c+3474,"rf_DIP_io_rf_31_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+128,"rf_DIP_io_rf_31_MPORT_data", false,-1, 63,0);
    tracep->declQuad(c+205,"rf_MPORT_data", false,-1, 63,0);
    tracep->declBus(c+207,"rf_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+3442,"rf_MPORT_mask", false,-1);
    tracep->declBit(c+208,"rf_MPORT_en", false,-1);
    tracep->declQuad(c+209,"mem_addr", false,-1, 63,0);
    tracep->declBit(c+3434,"mem_reset", false,-1);
    tracep->declBit(c+3433,"mem_clk", false,-1);
    tracep->declBit(c+211,"mem_we", false,-1);
    tracep->declBit(c+212,"mem_ce", false,-1);
    tracep->declQuad(c+213,"mem_wdata", false,-1, 63,0);
    tracep->declQuad(c+3438,"mem_rdata", false,-1, 63,0);
    tracep->declBus(c+3475,"mem_wmask", false,-1, 7,0);
    tracep->declBit(c+55,"MEM_io_in_ready", false,-1);
    tracep->declBit(c+215,"MEM_io_in_valid", false,-1);
    tracep->declBus(c+216,"MEM_io_in_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+217,"MEM_io_in_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+218,"MEM_io_in_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+219,"MEM_io_in_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+220,"MEM_io_in_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+222,"MEM_io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+223,"MEM_io_in_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+225,"MEM_io_in_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declQuad(c+226,"MEM_io_in_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+228,"MEM_io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+230,"MEM_io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+232,"MEM_io_in_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declBit(c+3442,"MEM_io_out_ready", false,-1);
    tracep->declBit(c+234,"MEM_io_out_valid", false,-1);
    tracep->declBit(c+235,"MEM_io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+218,"MEM_io_out_bits_ctrl_signal_rfWen", false,-1);
    tracep->declQuad(c+220,"MEM_io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+222,"MEM_io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+223,"MEM_io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBit(c+236,"MEM_io_out_bits_ctrl_flow_skip", false,-1);
    tracep->declBus(c+225,"MEM_io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+237,"MEM_io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+238,"MEM_io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declBit(c+240,"MEM_io_cache_io_addr_req_valid", false,-1);
    tracep->declQuad(c+241,"MEM_io_cache_io_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+243,"MEM_io_cache_io_addr_req_bits_we", false,-1);
    tracep->declBit(c+244,"MEM_io_cache_io_rdata_rep_valid", false,-1);
    tracep->declQuad(c+245,"MEM_io_cache_io_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+247,"MEM_io_cache_io_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+249,"MEM_io_cache_io_wdata_req_bits_wmask", false,-1, 7,0);
    tracep->declBit(c+250,"MEM_io_cache_io_wdata_rep", false,-1);
    tracep->declBit(c+251,"WB_io_in_valid", false,-1);
    tracep->declBit(c+252,"WB_io_in_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+253,"WB_io_in_bits_ctrl_signal_rfWen", false,-1);
    tracep->declQuad(c+254,"WB_io_in_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+256,"WB_io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+257,"WB_io_in_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBit(c+259,"WB_io_in_bits_ctrl_flow_skip", false,-1);
    tracep->declBus(c+207,"WB_io_in_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declQuad(c+260,"WB_io_in_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declBit(c+3442,"WB_io_out_ready", false,-1);
    tracep->declBit(c+251,"WB_io_out_valid", false,-1);
    tracep->declBit(c+262,"WB_io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declQuad(c+254,"WB_io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+256,"WB_io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+257,"WB_io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBit(c+259,"WB_io_out_bits_ctrl_flow_skip", false,-1);
    tracep->declBus(c+207,"WB_io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+208,"WB_io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+260,"WB_io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+41,"bypass_io_EX_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+57,"bypass_io_EX_rf_rfWen", false,-1);
    tracep->declQuad(c+58,"bypass_io_EX_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+225,"bypass_io_MEM_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+237,"bypass_io_MEM_rf_rfWen", false,-1);
    tracep->declQuad(c+238,"bypass_io_MEM_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+207,"bypass_io_WB_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+208,"bypass_io_WB_rf_rfWen", false,-1);
    tracep->declQuad(c+260,"bypass_io_WB_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+263,"bypass_io_Reg1", false,-1, 63,0);
    tracep->declBus(c+25,"bypass_io_reg_index1", false,-1, 4,0);
    tracep->declQuad(c+265,"bypass_io_Reg2", false,-1, 63,0);
    tracep->declBus(c+26,"bypass_io_reg_index2", false,-1, 4,0);
    tracep->declQuad(c+17,"bypass_io_Bypass_REG1", false,-1, 63,0);
    tracep->declQuad(c+19,"bypass_io_Bypass_REG2", false,-1, 63,0);
    tracep->declBus(c+225,"mem_bypass_io_MEM_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+237,"mem_bypass_io_MEM_rf_rfWen", false,-1);
    tracep->declQuad(c+238,"mem_bypass_io_MEM_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+42,"mem_bypass_io_Reg1", false,-1, 63,0);
    tracep->declBus(c+37,"mem_bypass_io_reg_index1", false,-1, 4,0);
    tracep->declQuad(c+44,"mem_bypass_io_Reg2", false,-1, 63,0);
    tracep->declBus(c+38,"mem_bypass_io_reg_index2", false,-1, 4,0);
    tracep->declQuad(c+51,"mem_bypass_io_Bypass_REG1", false,-1, 63,0);
    tracep->declQuad(c+53,"mem_bypass_io_Bypass_REG2", false,-1, 63,0);
    tracep->declBit(c+3433,"ICACHE_clock", false,-1);
    tracep->declBit(c+3434,"ICACHE_reset", false,-1);
    tracep->declBit(c+5,"ICACHE_io_in_addr_req_valid", false,-1);
    tracep->declQuad(c+6,"ICACHE_io_in_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+5,"ICACHE_io_in_rdata_rep_ready", false,-1);
    tracep->declBit(c+8,"ICACHE_io_in_rdata_rep_valid", false,-1);
    tracep->declQuad(c+9,"ICACHE_io_in_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+12,"ICACHE_io_flush", false,-1);
    tracep->declQuad(c+267,"ICACHE_io_out_bits_addr", false,-1, 63,0);
    tracep->declBit(c+269,"ICACHE_io_out_bits_ce", false,-1);
    tracep->declQuad(c+3440,"ICACHE_io_mem_rdata", false,-1, 63,0);
    tracep->declQuad(c+267,"IFMEM_addr", false,-1, 63,0);
    tracep->declBit(c+3434,"IFMEM_reset", false,-1);
    tracep->declBit(c+3433,"IFMEM_clk", false,-1);
    tracep->declBit(c+3476,"IFMEM_we", false,-1);
    tracep->declBit(c+269,"IFMEM_ce", false,-1);
    tracep->declQuad(c+3477,"IFMEM_wdata", false,-1, 63,0);
    tracep->declQuad(c+3440,"IFMEM_rdata", false,-1, 63,0);
    tracep->declBus(c+3479,"IFMEM_wmask", false,-1, 7,0);
    tracep->declBit(c+3433,"DCACHE_clock", false,-1);
    tracep->declBit(c+3434,"DCACHE_reset", false,-1);
    tracep->declBit(c+240,"DCACHE_io_in_addr_req_valid", false,-1);
    tracep->declQuad(c+241,"DCACHE_io_in_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+243,"DCACHE_io_in_addr_req_bits_we", false,-1);
    tracep->declBit(c+244,"DCACHE_io_in_rdata_rep_valid", false,-1);
    tracep->declQuad(c+245,"DCACHE_io_in_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+247,"DCACHE_io_in_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+249,"DCACHE_io_in_wdata_req_bits_wmask", false,-1, 7,0);
    tracep->declBit(c+250,"DCACHE_io_in_wdata_rep", false,-1);
    tracep->declQuad(c+209,"DCACHE_io_out_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+213,"DCACHE_io_out_bits_wdata", false,-1, 63,0);
    tracep->declBit(c+212,"DCACHE_io_out_bits_ce", false,-1);
    tracep->declBit(c+211,"DCACHE_io_out_bits_we", false,-1);
    tracep->declQuad(c+3438,"DCACHE_io_mem_rdata", false,-1, 63,0);
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
    tracep->declBit(c+215,"valid_2", false,-1);
    tracep->declBus(c+216,"MEM_io_in_bits_r_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+217,"MEM_io_in_bits_r_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+218,"MEM_io_in_bits_r_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+219,"MEM_io_in_bits_r_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+220,"MEM_io_in_bits_r_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+222,"MEM_io_in_bits_r_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+223,"MEM_io_in_bits_r_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+225,"MEM_io_in_bits_r_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declQuad(c+226,"MEM_io_in_bits_r_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+228,"MEM_io_in_bits_r_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+230,"MEM_io_in_bits_r_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+232,"MEM_io_in_bits_r_ctrl_data_Imm", false,-1, 63,0);
    tracep->declBit(c+251,"valid_3", false,-1);
    tracep->declBit(c+252,"WB_io_in_bits_r_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+253,"WB_io_in_bits_r_ctrl_signal_rfWen", false,-1);
    tracep->declQuad(c+254,"WB_io_in_bits_r_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+256,"WB_io_in_bits_r_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+257,"WB_io_in_bits_r_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBit(c+259,"WB_io_in_bits_r_ctrl_flow_skip", false,-1);
    tracep->declBus(c+207,"WB_io_in_bits_r_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declQuad(c+260,"WB_io_in_bits_r_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declBit(c+270,"DIP_io_is_break_REG", false,-1);
    tracep->declBit(c+65,"DIP_io_is_break_REG_1", false,-1);
    tracep->declBus(c+130,"DIP_io_inst_REG", false,-1, 31,0);
    tracep->declBit(c+136,"DIP_io_is_skip_REG", false,-1);
    tracep->declBit(c+133,"DIP_io_inst_valid_REG", false,-1);
    tracep->declQuad(c+131,"DIP_io_pc_REG", false,-1, 63,0);
    tracep->declQuad(c+134,"DIP_io_dnpc_REG", false,-1, 63,0);
    tracep->pushNamePrefix("DCACHE ");
    tracep->declBit(c+3433,"clock", false,-1);
    tracep->declBit(c+3434,"reset", false,-1);
    tracep->declBit(c+240,"io_in_addr_req_valid", false,-1);
    tracep->declQuad(c+241,"io_in_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+243,"io_in_addr_req_bits_we", false,-1);
    tracep->declBit(c+244,"io_in_rdata_rep_valid", false,-1);
    tracep->declQuad(c+245,"io_in_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+247,"io_in_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+249,"io_in_wdata_req_bits_wmask", false,-1, 7,0);
    tracep->declBit(c+250,"io_in_wdata_rep", false,-1);
    tracep->declQuad(c+209,"io_out_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+213,"io_out_bits_wdata", false,-1, 63,0);
    tracep->declBit(c+212,"io_out_bits_ce", false,-1);
    tracep->declBit(c+211,"io_out_bits_we", false,-1);
    tracep->declQuad(c+3438,"io_mem_rdata", false,-1, 63,0);
    tracep->declBit(c+3433,"Cache_data_clock", false,-1);
    tracep->declBit(c+271,"Cache_data_io_in_valid", false,-1);
    tracep->declQuad(c+241,"Cache_data_io_in_addr", false,-1, 63,0);
    tracep->declQuad(c+272,"Cache_data_io_write_bus_addr", false,-1, 63,0);
    tracep->declBit(c+274,"Cache_data_io_write_bus_valid", false,-1);
    tracep->declBus(c+275,"Cache_data_io_write_bus_waymask", false,-1, 1,0);
    tracep->declArray(c+276,"Cache_data_io_write_bus_wdata", false,-1, 511,0);
    tracep->declBit(c+271,"Cache_data_io_out_valid", false,-1);
    tracep->declQuad(c+292,"Cache_data_io_out_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+294,"Cache_data_io_out_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+296,"Cache_data_io_out_bits_meat_valid_0", false,-1);
    tracep->declBit(c+297,"Cache_data_io_out_bits_meat_valid_1", false,-1);
    tracep->declArray(c+298,"Cache_data_io_out_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+314,"Cache_data_io_out_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+330,"Cache_data_io_out_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBus(c+332,"Cache_data_io_out_bits_ctrl_data_index", false,-1, 4,0);
    tracep->declBus(c+333,"Cache_data_io_out_bits_ctrl_data_offset", false,-1, 5,0);
    tracep->declBit(c+334,"Scanf_io_in_valid", false,-1);
    tracep->declQuad(c+292,"Scanf_io_in_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+294,"Scanf_io_in_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+296,"Scanf_io_in_bits_meat_valid_0", false,-1);
    tracep->declBit(c+297,"Scanf_io_in_bits_meat_valid_1", false,-1);
    tracep->declArray(c+298,"Scanf_io_in_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+314,"Scanf_io_in_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+330,"Scanf_io_in_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBit(c+335,"Scanf_io_out_bits_hit", false,-1);
    tracep->declArray(c+336,"Scanf_io_out_bits_data", false,-1, 511,0);
    tracep->declBit(c+352,"Scanf_io_out_bits_hit_way_0", false,-1);
    tracep->declBit(c+353,"Scanf_io_out_bits_hit_way_1", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+354+i*1,"lru", true,(i+0));
    }
    tracep->declBit(c+386,"lru_lru_w_MPORT_en", false,-1);
    tracep->declBus(c+387,"lru_lru_w_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+388,"lru_lru_w_MPORT_data", false,-1);
    tracep->declBit(c+3442,"lru_MPORT_data", false,-1);
    tracep->declBus(c+332,"lru_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+3442,"lru_MPORT_mask", false,-1);
    tracep->declBit(c+389,"lru_MPORT_en", false,-1);
    tracep->declBit(c+3476,"lru_MPORT_1_data", false,-1);
    tracep->declBus(c+332,"lru_MPORT_1_addr", false,-1, 4,0);
    tracep->declBit(c+3442,"lru_MPORT_1_mask", false,-1);
    tracep->declBit(c+390,"lru_MPORT_1_en", false,-1);
    tracep->declBit(c+3476,"lru_MPORT_2_data", false,-1);
    tracep->declBus(c+332,"lru_MPORT_2_addr", false,-1, 4,0);
    tracep->declBit(c+3442,"lru_MPORT_2_mask", false,-1);
    tracep->declBit(c+391,"lru_MPORT_2_en", false,-1);
    tracep->declBit(c+3442,"lru_MPORT_3_data", false,-1);
    tracep->declBus(c+332,"lru_MPORT_3_addr", false,-1, 4,0);
    tracep->declBit(c+3442,"lru_MPORT_3_mask", false,-1);
    tracep->declBit(c+392,"lru_MPORT_3_en", false,-1);
    tracep->declBit(c+386,"lru_lru_w_MPORT_en_pipe_0", false,-1);
    tracep->declBus(c+387,"lru_lru_w_MPORT_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+393+i*1,"dirt_0", true,(i+0));
    }
    tracep->declBit(c+425,"dirt_0_dirt_w_en", false,-1);
    tracep->declBus(c+426,"dirt_0_dirt_w_addr", false,-1, 4,0);
    tracep->declBit(c+427,"dirt_0_dirt_w_data", false,-1);
    tracep->declBit(c+3442,"dirt_0_MPORT_4_data", false,-1);
    tracep->declBus(c+332,"dirt_0_MPORT_4_addr", false,-1, 4,0);
    tracep->declBit(c+428,"dirt_0_MPORT_4_mask", false,-1);
    tracep->declBit(c+429,"dirt_0_MPORT_4_en", false,-1);
    tracep->declBit(c+425,"dirt_0_dirt_w_en_pipe_0", false,-1);
    tracep->declBus(c+426,"dirt_0_dirt_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+430+i*1,"dirt_1", true,(i+0));
    }
    tracep->declBit(c+462,"dirt_1_dirt_w_en", false,-1);
    tracep->declBus(c+426,"dirt_1_dirt_w_addr", false,-1, 4,0);
    tracep->declBit(c+463,"dirt_1_dirt_w_data", false,-1);
    tracep->declBit(c+3442,"dirt_1_MPORT_4_data", false,-1);
    tracep->declBus(c+332,"dirt_1_MPORT_4_addr", false,-1, 4,0);
    tracep->declBit(c+464,"dirt_1_MPORT_4_mask", false,-1);
    tracep->declBit(c+429,"dirt_1_MPORT_4_en", false,-1);
    tracep->declBit(c+462,"dirt_1_dirt_w_en_pipe_0", false,-1);
    tracep->declBus(c+426,"dirt_1_dirt_w_addr_pipe_0", false,-1, 4,0);
    tracep->declBus(c+465,"state", false,-1, 1,0);
    tracep->declArray(c+466,"data_line_reg", false,-1, 511,0);
    tracep->declQuad(c+482,"mem_addr_reg", false,-1, 63,0);
    tracep->declBit(c+484,"lru_r", false,-1);
    tracep->declBus(c+485,"count", false,-1, 3,0);
    tracep->declBit(c+486,"s", false,-1);
    tracep->declBus(c+487,"count_write", false,-1, 3,0);
    tracep->declBit(c+488,"s_w", false,-1);
    tracep->declQuad(c+489,"mem_write_addr_reg", false,-1, 63,0);
    tracep->declArray(c+491,"mem_write_data_reg", false,-1, 511,0);
    tracep->declArray(c+507,"hit__write_data", false,-1, 511,0);
    tracep->declBit(c+523,"hit_way_r_0", false,-1);
    tracep->declBit(c+524,"hit_way_r_1", false,-1);
    tracep->declBit(c+352,"hit_way_0", false,-1);
    tracep->declBit(c+353,"hit_way_1", false,-1);
    tracep->declBit(c+388,"lru_w", false,-1);
    tracep->declQuad(c+525,"hit_data", false,-1, 63,0);
    tracep->declQuad(c+527,"mem_data", false,-1, 63,0);
    tracep->declBit(c+334,"Scanf_io_in_valid_REG", false,-1);
    tracep->declQuad(c+529,"wmaskextend_Genmask", false,-1, 63,0);
    tracep->declQuad(c+531,"wmaskextend_lo_lo_lo", false,-1, 63,0);
    tracep->declArray(c+533,"wmaskextend_lo_lo", false,-1, 127,0);
    tracep->declQuad(c+537,"wmaskextend_lo_hi_lo", false,-1, 63,0);
    tracep->declArray(c+539,"wmaskextend_lo", false,-1, 255,0);
    tracep->declQuad(c+547,"wmaskextend_hi_lo_lo", false,-1, 63,0);
    tracep->declArray(c+549,"wmaskextend_hi_lo", false,-1, 127,0);
    tracep->declQuad(c+553,"wmaskextend_hi_hi_lo", false,-1, 63,0);
    tracep->declArray(c+555,"wmaskextend_hi", false,-1, 255,0);
    tracep->declArray(c+563,"wmaskextend", false,-1, 511,0);
    tracep->declArray(c+579,"wdata_extend", false,-1, 511,0);
    tracep->declBus(c+595,"waymask", false,-1, 1,0);
    tracep->pushNamePrefix("Cache_data ");
    tracep->declBit(c+3433,"clock", false,-1);
    tracep->declBit(c+271,"io_in_valid", false,-1);
    tracep->declQuad(c+241,"io_in_addr", false,-1, 63,0);
    tracep->declQuad(c+272,"io_write_bus_addr", false,-1, 63,0);
    tracep->declBit(c+274,"io_write_bus_valid", false,-1);
    tracep->declBus(c+275,"io_write_bus_waymask", false,-1, 1,0);
    tracep->declArray(c+276,"io_write_bus_wdata", false,-1, 511,0);
    tracep->declBit(c+271,"io_out_valid", false,-1);
    tracep->declQuad(c+292,"io_out_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+294,"io_out_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+296,"io_out_bits_meat_valid_0", false,-1);
    tracep->declBit(c+297,"io_out_bits_meat_valid_1", false,-1);
    tracep->declArray(c+298,"io_out_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+314,"io_out_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+330,"io_out_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBus(c+332,"io_out_bits_ctrl_data_index", false,-1, 4,0);
    tracep->declBus(c+333,"io_out_bits_ctrl_data_offset", false,-1, 5,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declArray(c+596+i*16,"data_0", true,(i+0), 511,0);
    }
    tracep->declBit(c+1108,"data_0_data_w_en", false,-1);
    tracep->declBus(c+1109,"data_0_data_w_addr", false,-1, 4,0);
    tracep->declArray(c+298,"data_0_data_w_data", false,-1, 511,0);
    tracep->declArray(c+276,"data_0_MPORT_data", false,-1, 511,0);
    tracep->declBus(c+1110,"data_0_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+1111,"data_0_MPORT_mask", false,-1);
    tracep->declBit(c+274,"data_0_MPORT_en", false,-1);
    tracep->declBit(c+1108,"data_0_data_w_en_pipe_0", false,-1);
    tracep->declBus(c+1109,"data_0_data_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declArray(c+1112+i*16,"data_1", true,(i+0), 511,0);
    }
    tracep->declBit(c+1624,"data_1_data_w_en", false,-1);
    tracep->declBus(c+1625,"data_1_data_w_addr", false,-1, 4,0);
    tracep->declArray(c+314,"data_1_data_w_data", false,-1, 511,0);
    tracep->declArray(c+276,"data_1_MPORT_data", false,-1, 511,0);
    tracep->declBus(c+1110,"data_1_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+1626,"data_1_MPORT_mask", false,-1);
    tracep->declBit(c+274,"data_1_MPORT_en", false,-1);
    tracep->declBit(c+1624,"data_1_data_w_en_pipe_0", false,-1);
    tracep->declBus(c+1625,"data_1_data_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+1627+i*2,"TAG_0", true,(i+0), 52,0);
    }
    tracep->declBit(c+1691,"TAG_0_tag_w_en", false,-1);
    tracep->declBus(c+1692,"TAG_0_tag_w_addr", false,-1, 4,0);
    tracep->declQuad(c+292,"TAG_0_tag_w_data", false,-1, 52,0);
    tracep->declQuad(c+1693,"TAG_0_MPORT_1_data", false,-1, 52,0);
    tracep->declBus(c+1110,"TAG_0_MPORT_1_addr", false,-1, 4,0);
    tracep->declBit(c+1111,"TAG_0_MPORT_1_mask", false,-1);
    tracep->declBit(c+274,"TAG_0_MPORT_1_en", false,-1);
    tracep->declBit(c+1691,"TAG_0_tag_w_en_pipe_0", false,-1);
    tracep->declBus(c+1692,"TAG_0_tag_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+1695+i*2,"TAG_1", true,(i+0), 52,0);
    }
    tracep->declBit(c+1759,"TAG_1_tag_w_en", false,-1);
    tracep->declBus(c+1760,"TAG_1_tag_w_addr", false,-1, 4,0);
    tracep->declQuad(c+294,"TAG_1_tag_w_data", false,-1, 52,0);
    tracep->declQuad(c+1693,"TAG_1_MPORT_1_data", false,-1, 52,0);
    tracep->declBus(c+1110,"TAG_1_MPORT_1_addr", false,-1, 4,0);
    tracep->declBit(c+1626,"TAG_1_MPORT_1_mask", false,-1);
    tracep->declBit(c+274,"TAG_1_MPORT_1_en", false,-1);
    tracep->declBit(c+1759,"TAG_1_tag_w_en_pipe_0", false,-1);
    tracep->declBus(c+1760,"TAG_1_tag_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+1761+i*1,"data_valid_0", true,(i+0));
    }
    tracep->declBit(c+1793,"data_valid_0_valid_w_en", false,-1);
    tracep->declBus(c+1794,"data_valid_0_valid_w_addr", false,-1, 4,0);
    tracep->declBit(c+296,"data_valid_0_valid_w_data", false,-1);
    tracep->declBit(c+3442,"data_valid_0_MPORT_2_data", false,-1);
    tracep->declBus(c+1110,"data_valid_0_MPORT_2_addr", false,-1, 4,0);
    tracep->declBit(c+1111,"data_valid_0_MPORT_2_mask", false,-1);
    tracep->declBit(c+274,"data_valid_0_MPORT_2_en", false,-1);
    tracep->declBit(c+1793,"data_valid_0_valid_w_en_pipe_0", false,-1);
    tracep->declBus(c+1794,"data_valid_0_valid_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+1795+i*1,"data_valid_1", true,(i+0));
    }
    tracep->declBit(c+1827,"data_valid_1_valid_w_en", false,-1);
    tracep->declBus(c+1828,"data_valid_1_valid_w_addr", false,-1, 4,0);
    tracep->declBit(c+297,"data_valid_1_valid_w_data", false,-1);
    tracep->declBit(c+3442,"data_valid_1_MPORT_2_data", false,-1);
    tracep->declBus(c+1110,"data_valid_1_MPORT_2_addr", false,-1, 4,0);
    tracep->declBit(c+1626,"data_valid_1_MPORT_2_mask", false,-1);
    tracep->declBit(c+274,"data_valid_1_MPORT_2_en", false,-1);
    tracep->declBit(c+1827,"data_valid_1_valid_w_en_pipe_0", false,-1);
    tracep->declBus(c+1828,"data_valid_1_valid_w_addr_pipe_0", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Scanf ");
    tracep->declBit(c+334,"io_in_valid", false,-1);
    tracep->declQuad(c+292,"io_in_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+294,"io_in_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+296,"io_in_bits_meat_valid_0", false,-1);
    tracep->declBit(c+297,"io_in_bits_meat_valid_1", false,-1);
    tracep->declArray(c+298,"io_in_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+314,"io_in_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+330,"io_in_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBit(c+335,"io_out_bits_hit", false,-1);
    tracep->declArray(c+336,"io_out_bits_data", false,-1, 511,0);
    tracep->declBit(c+352,"io_out_bits_hit_way_0", false,-1);
    tracep->declBit(c+353,"io_out_bits_hit_way_1", false,-1);
    tracep->declBit(c+352,"hit_way_0_result", false,-1);
    tracep->declBit(c+353,"hit_way_1_result", false,-1);
    tracep->popNamePrefix(2);
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
        tracep->declQuad(c+1829+i*2,"rf", true,(i+0), 63,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+1893+i*1,"IN", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EX ");
    tracep->declBit(c+3433,"clock", false,-1);
    tracep->declBit(c+3434,"reset", false,-1);
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
    tracep->declQuad(c+1900,"CSRDIFF_mepc", false,-1, 63,0);
    tracep->declQuad(c+1902,"CSRDIFF_mcause", false,-1, 63,0);
    tracep->declQuad(c+1904,"CSRDIFF_mstatus", false,-1, 63,0);
    tracep->declQuad(c+1906,"CSRDIFF_mtvec", false,-1, 63,0);
    tracep->declBit(c+3433,"mul_clock", false,-1);
    tracep->declBit(c+3434,"mul_reset", false,-1);
    tracep->declBit(c+1908,"mul_io_in_valid", false,-1);
    tracep->declQuad(c+1909,"mul_io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+1911,"mul_io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declBit(c+1913,"mul_io_out_valid", false,-1);
    tracep->declQuad(c+1914,"mul_io_out_bits_result_result_lo", false,-1, 63,0);
    tracep->declBit(c+3433,"div_clock", false,-1);
    tracep->declBit(c+3434,"div_reset", false,-1);
    tracep->declBit(c+1916,"div_io_in_valid", false,-1);
    tracep->declBit(c+1917,"div_io_in_bits_ctrl_flow_div_signed", false,-1);
    tracep->declQuad(c+1918,"div_io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+1920,"div_io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declBit(c+1922,"div_io_out_valid", false,-1);
    tracep->declQuad(c+1923,"div_io_out_bits_result_quotient", false,-1, 63,0);
    tracep->declQuad(c+1925,"div_io_out_bits_result_remainder", false,-1, 63,0);
    tracep->declBit(c+1927,"is_mul", false,-1);
    tracep->declBit(c+1928,"is_div", false,-1);
    tracep->declBit(c+1929,"is_divw", false,-1);
    tracep->declBit(c+1917,"is_div_sign", false,-1);
    tracep->declQuad(c+1930,"mepc", false,-1, 63,0);
    tracep->declQuad(c+1932,"mcause", false,-1, 63,0);
    tracep->declQuad(c+1934,"mstatus", false,-1, 63,0);
    tracep->declQuad(c+1936,"mtvec", false,-1, 63,0);
    tracep->declQuad(c+1938,"mie", false,-1, 63,0);
    tracep->declQuad(c+1940,"mip", false,-1, 63,0);
    tracep->declQuad(c+1942,"src1", false,-1, 63,0);
    tracep->declQuad(c+1944,"src2", false,-1, 63,0);
    tracep->declBit(c+1946,"alu_result_sign", false,-1);
    tracep->declBit(c+1947,"alu_result_sign_2", false,-1);
    tracep->declBit(c+1948,"alu_result_sign_3", false,-1);
    tracep->declBit(c+1949,"alu_result_sign_4", false,-1);
    tracep->declBit(c+1950,"alu_result_sign_6", false,-1);
    tracep->declQuad(c+1951,"alu_result", false,-1, 63,0);
    tracep->declBit(c+1953,"shift_result_sign", false,-1);
    tracep->declBit(c+1954,"shift_result_sign_1", false,-1);
    tracep->declBit(c+1955,"shift_result_sign_2", false,-1);
    tracep->declBit(c+1956,"shift_result_sign_3", false,-1);
    tracep->declBit(c+1957,"div_io_in_bits_ctrl_data_src1_sign", false,-1);
    tracep->declBit(c+1958,"div_io_in_bits_ctrl_data_src2_sign", false,-1);
    tracep->declQuad(c+1959,"compar_result", false,-1, 63,0);
    tracep->declQuad(c+1961,"jump_result", false,-1, 63,0);
    tracep->declQuad(c+1963,"shift_result", false,-1, 63,0);
    tracep->declQuad(c+1965,"branch_result", false,-1, 63,0);
    tracep->declBit(c+1967,"branch_flag", false,-1);
    tracep->declQuad(c+1968,"csr_data", false,-1, 63,0);
    tracep->declQuad(c+1970,"CSRDIFF_io_mtvec_REG", false,-1, 63,0);
    tracep->declQuad(c+1906,"CSRDIFF_io_mtvec_REG_1", false,-1, 63,0);
    tracep->declQuad(c+1972,"CSRDIFF_io_mcause_REG", false,-1, 63,0);
    tracep->declQuad(c+1902,"CSRDIFF_io_mcause_REG_1", false,-1, 63,0);
    tracep->declQuad(c+1974,"CSRDIFF_io_mepc_REG", false,-1, 63,0);
    tracep->declQuad(c+1900,"CSRDIFF_io_mepc_REG_1", false,-1, 63,0);
    tracep->declQuad(c+1976,"CSRDIFF_io_mstatus_REG", false,-1, 63,0);
    tracep->declQuad(c+1904,"CSRDIFF_io_mstatus_REG_1", false,-1, 63,0);
    tracep->pushNamePrefix("CSRDIFF ");
    tracep->declQuad(c+1900,"mepc", false,-1, 63,0);
    tracep->declQuad(c+1902,"mcause", false,-1, 63,0);
    tracep->declQuad(c+1904,"mstatus", false,-1, 63,0);
    tracep->declQuad(c+1906,"mtvec", false,-1, 63,0);
    for (int i = 0; i < 6; ++i) {
        tracep->declQuad(c+1978+i*2,"inst_csr", true,(i+0), 63,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("div ");
    tracep->declBit(c+3433,"clock", false,-1);
    tracep->declBit(c+3434,"reset", false,-1);
    tracep->declBit(c+1916,"io_in_valid", false,-1);
    tracep->declBit(c+1917,"io_in_bits_ctrl_flow_div_signed", false,-1);
    tracep->declQuad(c+1918,"io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+1920,"io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declBit(c+1922,"io_out_valid", false,-1);
    tracep->declQuad(c+1923,"io_out_bits_result_quotient", false,-1, 63,0);
    tracep->declQuad(c+1925,"io_out_bits_result_remainder", false,-1, 63,0);
    tracep->declArray(c+1990,"dividend", false,-1, 127,0);
    tracep->declQuad(c+1994,"divisor", false,-1, 63,0);
    tracep->declQuad(c+1996,"S", false,-1, 63,0);
    tracep->declBus(c+1998,"state", false,-1, 1,0);
    tracep->declBus(c+1999,"count", false,-1, 5,0);
    tracep->declBit(c+2000,"wrap_wrap", false,-1);
    tracep->declBit(c+2001,"s", false,-1);
    tracep->declArray(c+2002,"res_div", false,-1, 64,0);
    tracep->declQuad(c+2005,"negative_s", false,-1, 63,0);
    tracep->declQuad(c+2007,"negative_r", false,-1, 63,0);
    tracep->declQuad(c+2009,"s_o", false,-1, 63,0);
    tracep->declQuad(c+2011,"r_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mul ");
    tracep->declBit(c+3433,"clock", false,-1);
    tracep->declBit(c+3434,"reset", false,-1);
    tracep->declBit(c+1908,"io_in_valid", false,-1);
    tracep->declQuad(c+1909,"io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+1911,"io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declBit(c+1913,"io_out_valid", false,-1);
    tracep->declQuad(c+1914,"io_out_bits_result_result_lo", false,-1, 63,0);
    tracep->declBit(c+3433,"mult_clock", false,-1);
    tracep->declBit(c+3434,"mult_reset", false,-1);
    tracep->declBit(c+1908,"mult_io_in_valid", false,-1);
    tracep->declQuad(c+1909,"mult_io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+1911,"mult_io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declBit(c+1913,"mult_io_out_valid", false,-1);
    tracep->declQuad(c+1914,"mult_io_out_bits_result_result_lo", false,-1, 63,0);
    tracep->pushNamePrefix("mult ");
    tracep->declBit(c+3433,"clock", false,-1);
    tracep->declBit(c+3434,"reset", false,-1);
    tracep->declBit(c+1908,"io_in_valid", false,-1);
    tracep->declQuad(c+1909,"io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+1911,"io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declBit(c+1913,"io_out_valid", false,-1);
    tracep->declQuad(c+1914,"io_out_bits_result_result_lo", false,-1, 63,0);
    tracep->declBus(c+2013,"partial_io_y_3", false,-1, 2,0);
    tracep->declArray(c+2014,"partial_io_x", false,-1, 131,0);
    tracep->declArray(c+2019,"partial_io_p", false,-1, 131,0);
    tracep->declBit(c+2024,"partial_io_c", false,-1);
    tracep->declArray(c+2025,"multiplier", false,-1, 65,0);
    tracep->declArray(c+2014,"multiplicand", false,-1, 131,0);
    tracep->declArray(c+2028,"p", false,-1, 131,0);
    tracep->declBus(c+2033,"count", false,-1, 6,0);
    tracep->declArray(c+2034,"temp", false,-1, 131,0);
    tracep->declBit(c+2039,"p_sign", false,-1);
    tracep->pushNamePrefix("partial ");
    tracep->declBus(c+2013,"io_y_3", false,-1, 2,0);
    tracep->declArray(c+2014,"io_x", false,-1, 131,0);
    tracep->declArray(c+2019,"io_p", false,-1, 131,0);
    tracep->declBit(c+2024,"io_c", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("ICACHE ");
    tracep->declBit(c+3433,"clock", false,-1);
    tracep->declBit(c+3434,"reset", false,-1);
    tracep->declBit(c+5,"io_in_addr_req_valid", false,-1);
    tracep->declQuad(c+6,"io_in_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+5,"io_in_rdata_rep_ready", false,-1);
    tracep->declBit(c+8,"io_in_rdata_rep_valid", false,-1);
    tracep->declQuad(c+9,"io_in_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+12,"io_flush", false,-1);
    tracep->declQuad(c+267,"io_out_bits_addr", false,-1, 63,0);
    tracep->declBit(c+269,"io_out_bits_ce", false,-1);
    tracep->declQuad(c+3440,"io_mem_rdata", false,-1, 63,0);
    tracep->declBit(c+3433,"Cache_data_clock", false,-1);
    tracep->declBit(c+2040,"Cache_data_io_in_valid", false,-1);
    tracep->declQuad(c+6,"Cache_data_io_in_addr", false,-1, 63,0);
    tracep->declQuad(c+2041,"Cache_data_io_write_bus_addr", false,-1, 63,0);
    tracep->declBit(c+2043,"Cache_data_io_write_bus_valid", false,-1);
    tracep->declBus(c+2044,"Cache_data_io_write_bus_waymask", false,-1, 1,0);
    tracep->declArray(c+2045,"Cache_data_io_write_bus_wdata", false,-1, 511,0);
    tracep->declBit(c+2040,"Cache_data_io_out_valid", false,-1);
    tracep->declQuad(c+2061,"Cache_data_io_out_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+2063,"Cache_data_io_out_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+2065,"Cache_data_io_out_bits_meat_valid_0", false,-1);
    tracep->declBit(c+2066,"Cache_data_io_out_bits_meat_valid_1", false,-1);
    tracep->declArray(c+2067,"Cache_data_io_out_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+2083,"Cache_data_io_out_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+2099,"Cache_data_io_out_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBus(c+2101,"Cache_data_io_out_bits_ctrl_data_index", false,-1, 4,0);
    tracep->declBus(c+2102,"Cache_data_io_out_bits_ctrl_data_offset", false,-1, 5,0);
    tracep->declBit(c+2103,"Scanf_io_in_valid", false,-1);
    tracep->declQuad(c+2061,"Scanf_io_in_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+2063,"Scanf_io_in_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+2065,"Scanf_io_in_bits_meat_valid_0", false,-1);
    tracep->declBit(c+2066,"Scanf_io_in_bits_meat_valid_1", false,-1);
    tracep->declArray(c+2067,"Scanf_io_in_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+2083,"Scanf_io_in_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+2099,"Scanf_io_in_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBit(c+2104,"Scanf_io_out_bits_hit", false,-1);
    tracep->declArray(c+2105,"Scanf_io_out_bits_data", false,-1, 511,0);
    tracep->declBit(c+2121,"Scanf_io_out_bits_hit_way_0", false,-1);
    tracep->declBit(c+2122,"Scanf_io_out_bits_hit_way_1", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+2123+i*1,"lru", true,(i+0));
    }
    tracep->declBit(c+2155,"lru_lru_w_MPORT_en", false,-1);
    tracep->declBus(c+2156,"lru_lru_w_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+2157,"lru_lru_w_MPORT_data", false,-1);
    tracep->declBit(c+3442,"lru_MPORT_data", false,-1);
    tracep->declBus(c+2101,"lru_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+3442,"lru_MPORT_mask", false,-1);
    tracep->declBit(c+2158,"lru_MPORT_en", false,-1);
    tracep->declBit(c+3476,"lru_MPORT_1_data", false,-1);
    tracep->declBus(c+2101,"lru_MPORT_1_addr", false,-1, 4,0);
    tracep->declBit(c+3442,"lru_MPORT_1_mask", false,-1);
    tracep->declBit(c+2159,"lru_MPORT_1_en", false,-1);
    tracep->declBit(c+3476,"lru_MPORT_2_data", false,-1);
    tracep->declBus(c+2101,"lru_MPORT_2_addr", false,-1, 4,0);
    tracep->declBit(c+3442,"lru_MPORT_2_mask", false,-1);
    tracep->declBit(c+2160,"lru_MPORT_2_en", false,-1);
    tracep->declBit(c+3442,"lru_MPORT_3_data", false,-1);
    tracep->declBus(c+2101,"lru_MPORT_3_addr", false,-1, 4,0);
    tracep->declBit(c+3442,"lru_MPORT_3_mask", false,-1);
    tracep->declBit(c+2161,"lru_MPORT_3_en", false,-1);
    tracep->declBit(c+2155,"lru_lru_w_MPORT_en_pipe_0", false,-1);
    tracep->declBus(c+2156,"lru_lru_w_MPORT_addr_pipe_0", false,-1, 4,0);
    tracep->declBus(c+2162,"state", false,-1, 1,0);
    tracep->declArray(c+2163,"data_line_reg", false,-1, 511,0);
    tracep->declQuad(c+267,"mem_addr_reg", false,-1, 63,0);
    tracep->declBit(c+2179,"lru_r", false,-1);
    tracep->declBus(c+2180,"count", false,-1, 3,0);
    tracep->declBit(c+2043,"s", false,-1);
    tracep->declBit(c+2121,"hit_way_0", false,-1);
    tracep->declBit(c+2122,"hit_way_1", false,-1);
    tracep->declBit(c+2157,"lru_w", false,-1);
    tracep->declQuad(c+2181,"hit_data", false,-1, 63,0);
    tracep->declQuad(c+2183,"mem_data", false,-1, 63,0);
    tracep->declBit(c+2103,"Scanf_io_in_valid_REG", false,-1);
    tracep->pushNamePrefix("Cache_data ");
    tracep->declBit(c+3433,"clock", false,-1);
    tracep->declBit(c+2040,"io_in_valid", false,-1);
    tracep->declQuad(c+6,"io_in_addr", false,-1, 63,0);
    tracep->declQuad(c+2041,"io_write_bus_addr", false,-1, 63,0);
    tracep->declBit(c+2043,"io_write_bus_valid", false,-1);
    tracep->declBus(c+2044,"io_write_bus_waymask", false,-1, 1,0);
    tracep->declArray(c+2045,"io_write_bus_wdata", false,-1, 511,0);
    tracep->declBit(c+2040,"io_out_valid", false,-1);
    tracep->declQuad(c+2061,"io_out_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+2063,"io_out_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+2065,"io_out_bits_meat_valid_0", false,-1);
    tracep->declBit(c+2066,"io_out_bits_meat_valid_1", false,-1);
    tracep->declArray(c+2067,"io_out_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+2083,"io_out_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+2099,"io_out_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBus(c+2101,"io_out_bits_ctrl_data_index", false,-1, 4,0);
    tracep->declBus(c+2102,"io_out_bits_ctrl_data_offset", false,-1, 5,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declArray(c+2185+i*16,"data_0", true,(i+0), 511,0);
    }
    tracep->declBit(c+2697,"data_0_data_w_en", false,-1);
    tracep->declBus(c+2698,"data_0_data_w_addr", false,-1, 4,0);
    tracep->declArray(c+2067,"data_0_data_w_data", false,-1, 511,0);
    tracep->declArray(c+2045,"data_0_MPORT_data", false,-1, 511,0);
    tracep->declBus(c+2699,"data_0_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+2700,"data_0_MPORT_mask", false,-1);
    tracep->declBit(c+2043,"data_0_MPORT_en", false,-1);
    tracep->declBit(c+2697,"data_0_data_w_en_pipe_0", false,-1);
    tracep->declBus(c+2698,"data_0_data_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declArray(c+2701+i*16,"data_1", true,(i+0), 511,0);
    }
    tracep->declBit(c+3213,"data_1_data_w_en", false,-1);
    tracep->declBus(c+2698,"data_1_data_w_addr", false,-1, 4,0);
    tracep->declArray(c+2083,"data_1_data_w_data", false,-1, 511,0);
    tracep->declArray(c+2045,"data_1_MPORT_data", false,-1, 511,0);
    tracep->declBus(c+2699,"data_1_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+3214,"data_1_MPORT_mask", false,-1);
    tracep->declBit(c+2043,"data_1_MPORT_en", false,-1);
    tracep->declBit(c+3213,"data_1_data_w_en_pipe_0", false,-1);
    tracep->declBus(c+2698,"data_1_data_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+3215+i*2,"TAG_0", true,(i+0), 52,0);
    }
    tracep->declBit(c+3279,"TAG_0_tag_w_en", false,-1);
    tracep->declBus(c+3280,"TAG_0_tag_w_addr", false,-1, 4,0);
    tracep->declQuad(c+2061,"TAG_0_tag_w_data", false,-1, 52,0);
    tracep->declQuad(c+3281,"TAG_0_MPORT_1_data", false,-1, 52,0);
    tracep->declBus(c+2699,"TAG_0_MPORT_1_addr", false,-1, 4,0);
    tracep->declBit(c+2700,"TAG_0_MPORT_1_mask", false,-1);
    tracep->declBit(c+2043,"TAG_0_MPORT_1_en", false,-1);
    tracep->declBit(c+3279,"TAG_0_tag_w_en_pipe_0", false,-1);
    tracep->declBus(c+3280,"TAG_0_tag_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+3283+i*2,"TAG_1", true,(i+0), 52,0);
    }
    tracep->declBit(c+3347,"TAG_1_tag_w_en", false,-1);
    tracep->declBus(c+3348,"TAG_1_tag_w_addr", false,-1, 4,0);
    tracep->declQuad(c+2063,"TAG_1_tag_w_data", false,-1, 52,0);
    tracep->declQuad(c+3281,"TAG_1_MPORT_1_data", false,-1, 52,0);
    tracep->declBus(c+2699,"TAG_1_MPORT_1_addr", false,-1, 4,0);
    tracep->declBit(c+3214,"TAG_1_MPORT_1_mask", false,-1);
    tracep->declBit(c+2043,"TAG_1_MPORT_1_en", false,-1);
    tracep->declBit(c+3347,"TAG_1_tag_w_en_pipe_0", false,-1);
    tracep->declBus(c+3348,"TAG_1_tag_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+3349+i*1,"data_valid_0", true,(i+0));
    }
    tracep->declBit(c+3381,"data_valid_0_valid_w_en", false,-1);
    tracep->declBus(c+3382,"data_valid_0_valid_w_addr", false,-1, 4,0);
    tracep->declBit(c+2065,"data_valid_0_valid_w_data", false,-1);
    tracep->declBit(c+3442,"data_valid_0_MPORT_2_data", false,-1);
    tracep->declBus(c+2699,"data_valid_0_MPORT_2_addr", false,-1, 4,0);
    tracep->declBit(c+2700,"data_valid_0_MPORT_2_mask", false,-1);
    tracep->declBit(c+2043,"data_valid_0_MPORT_2_en", false,-1);
    tracep->declBit(c+3381,"data_valid_0_valid_w_en_pipe_0", false,-1);
    tracep->declBus(c+3382,"data_valid_0_valid_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+3383+i*1,"data_valid_1", true,(i+0));
    }
    tracep->declBit(c+3415,"data_valid_1_valid_w_en", false,-1);
    tracep->declBus(c+3416,"data_valid_1_valid_w_addr", false,-1, 4,0);
    tracep->declBit(c+2066,"data_valid_1_valid_w_data", false,-1);
    tracep->declBit(c+3442,"data_valid_1_MPORT_2_data", false,-1);
    tracep->declBus(c+2699,"data_valid_1_MPORT_2_addr", false,-1, 4,0);
    tracep->declBit(c+3214,"data_valid_1_MPORT_2_mask", false,-1);
    tracep->declBit(c+2043,"data_valid_1_MPORT_2_en", false,-1);
    tracep->declBit(c+3415,"data_valid_1_valid_w_en_pipe_0", false,-1);
    tracep->declBus(c+3416,"data_valid_1_valid_w_addr_pipe_0", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Scanf ");
    tracep->declBit(c+2103,"io_in_valid", false,-1);
    tracep->declQuad(c+2061,"io_in_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+2063,"io_in_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+2065,"io_in_bits_meat_valid_0", false,-1);
    tracep->declBit(c+2066,"io_in_bits_meat_valid_1", false,-1);
    tracep->declArray(c+2067,"io_in_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+2083,"io_in_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+2099,"io_in_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBit(c+2104,"io_out_bits_hit", false,-1);
    tracep->declArray(c+2105,"io_out_bits_data", false,-1, 511,0);
    tracep->declBit(c+2121,"io_out_bits_hit_way_0", false,-1);
    tracep->declBit(c+2122,"io_out_bits_hit_way_1", false,-1);
    tracep->declBit(c+3417,"hit_way_0_result", false,-1);
    tracep->declBit(c+3418,"hit_way_1_result", false,-1);
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
    tracep->declBus(c+3419,"Inst_decode_0", false,-1, 3,0);
    tracep->declBus(c+28,"Inst_decode_2", false,-1, 6,0);
    tracep->declBit(c+3420,"Inst_decode_3", false,-1);
    tracep->declBus(c+3421,"srctype1", false,-1, 1,0);
    tracep->declBit(c+3422,"srctype2", false,-1);
    tracep->declBit(c+3423,"sign", false,-1);
    tracep->declBit(c+3424,"sign_1", false,-1);
    tracep->declBit(c+3425,"sign_2", false,-1);
    tracep->declBit(c+3425,"sign_3", false,-1);
    tracep->declBit(c+3423,"sign_4", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IF ");
    tracep->declBit(c+3433,"clock", false,-1);
    tracep->declBit(c+3434,"reset", false,-1);
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
    tracep->declBus(c+3426,"inst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IFMEM ");
    tracep->declBit(c+3434,"reset", false,-1);
    tracep->declBit(c+3433,"clk", false,-1);
    tracep->declQuad(c+267,"addr", false,-1, 63,0);
    tracep->declBit(c+3476,"we", false,-1);
    tracep->declBit(c+269,"ce", false,-1);
    tracep->declQuad(c+3477,"wdata", false,-1, 63,0);
    tracep->declQuad(c+3440,"rdata", false,-1, 63,0);
    tracep->declBus(c+3479,"wmask", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MEM ");
    tracep->declBit(c+55,"io_in_ready", false,-1);
    tracep->declBit(c+215,"io_in_valid", false,-1);
    tracep->declBus(c+216,"io_in_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+217,"io_in_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+218,"io_in_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+219,"io_in_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+220,"io_in_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+222,"io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+223,"io_in_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+225,"io_in_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declQuad(c+226,"io_in_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+228,"io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+230,"io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+232,"io_in_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declBit(c+3442,"io_out_ready", false,-1);
    tracep->declBit(c+234,"io_out_valid", false,-1);
    tracep->declBit(c+235,"io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+218,"io_out_bits_ctrl_signal_rfWen", false,-1);
    tracep->declQuad(c+220,"io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+222,"io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+223,"io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBit(c+236,"io_out_bits_ctrl_flow_skip", false,-1);
    tracep->declBus(c+225,"io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+237,"io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+238,"io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declBit(c+240,"io_cache_io_addr_req_valid", false,-1);
    tracep->declQuad(c+241,"io_cache_io_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+243,"io_cache_io_addr_req_bits_we", false,-1);
    tracep->declBit(c+244,"io_cache_io_rdata_rep_valid", false,-1);
    tracep->declQuad(c+245,"io_cache_io_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+247,"io_cache_io_wdata_req_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+249,"io_cache_io_wdata_req_bits_wmask", false,-1, 7,0);
    tracep->declBit(c+250,"io_cache_io_wdata_rep", false,-1);
    tracep->declQuad(c+241,"addr_temp", false,-1, 63,0);
    tracep->declBit(c+3427,"mem_result_sign", false,-1);
    tracep->declBit(c+3428,"mem_result_sign_1", false,-1);
    tracep->declBit(c+3429,"mem_result_sign_2", false,-1);
    tracep->declBit(c+3430,"mem_result_sign_3", false,-1);
    tracep->declQuad(c+3431,"mem_result", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WB ");
    tracep->declBit(c+251,"io_in_valid", false,-1);
    tracep->declBit(c+252,"io_in_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+253,"io_in_bits_ctrl_signal_rfWen", false,-1);
    tracep->declQuad(c+254,"io_in_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+256,"io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+257,"io_in_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBit(c+259,"io_in_bits_ctrl_flow_skip", false,-1);
    tracep->declBus(c+207,"io_in_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declQuad(c+260,"io_in_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declBit(c+3442,"io_out_ready", false,-1);
    tracep->declBit(c+251,"io_out_valid", false,-1);
    tracep->declBit(c+262,"io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declQuad(c+254,"io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+256,"io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+257,"io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBit(c+259,"io_out_bits_ctrl_flow_skip", false,-1);
    tracep->declBus(c+207,"io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+208,"io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+260,"io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("bypass ");
    tracep->declBus(c+41,"io_EX_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+57,"io_EX_rf_rfWen", false,-1);
    tracep->declQuad(c+58,"io_EX_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+225,"io_MEM_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+237,"io_MEM_rf_rfWen", false,-1);
    tracep->declQuad(c+238,"io_MEM_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+207,"io_WB_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+208,"io_WB_rf_rfWen", false,-1);
    tracep->declQuad(c+260,"io_WB_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+263,"io_Reg1", false,-1, 63,0);
    tracep->declBus(c+25,"io_reg_index1", false,-1, 4,0);
    tracep->declQuad(c+265,"io_Reg2", false,-1, 63,0);
    tracep->declBus(c+26,"io_reg_index2", false,-1, 4,0);
    tracep->declQuad(c+17,"io_Bypass_REG1", false,-1, 63,0);
    tracep->declQuad(c+19,"io_Bypass_REG2", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem ");
    tracep->declBit(c+3434,"reset", false,-1);
    tracep->declBit(c+3433,"clk", false,-1);
    tracep->declQuad(c+209,"addr", false,-1, 63,0);
    tracep->declBit(c+211,"we", false,-1);
    tracep->declBit(c+212,"ce", false,-1);
    tracep->declQuad(c+213,"wdata", false,-1, 63,0);
    tracep->declQuad(c+3438,"rdata", false,-1, 63,0);
    tracep->declBus(c+3475,"wmask", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_bypass ");
    tracep->declBus(c+225,"io_MEM_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+237,"io_MEM_rf_rfWen", false,-1);
    tracep->declQuad(c+238,"io_MEM_rf_rfData", false,-1, 63,0);
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
    VlWide<16>/*511:0*/ __Vtemp_h0c9dabf6__0;
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
    bufp->fullQData(oldp+209,(((3U == (IData)(vlSelf->CoreTop__DOT__DCACHE__DOT__state))
                                ? vlSelf->CoreTop__DOT__DCACHE__DOT__mem_write_addr_reg
                                : vlSelf->CoreTop__DOT__DCACHE__DOT__mem_addr_reg)),64);
    bufp->fullBit(oldp+211,((3U == (IData)(vlSelf->CoreTop__DOT__DCACHE__DOT__state))));
    bufp->fullBit(oldp+212,(((2U == (IData)(vlSelf->CoreTop__DOT__DCACHE__DOT__state)) 
                             | (3U == (IData)(vlSelf->CoreTop__DOT__DCACHE__DOT__state)))));
    bufp->fullQData(oldp+213,((((QData)((IData)(vlSelf->CoreTop__DOT__DCACHE__DOT__mem_write_data_reg[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->CoreTop__DOT__DCACHE__DOT__mem_write_data_reg[0U])))),64);
    bufp->fullBit(oldp+215,(vlSelf->CoreTop__DOT__valid_2));
    bufp->fullCData(oldp+216,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_fuType),3);
    bufp->fullBit(oldp+217,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_inst_valid));
    bufp->fullBit(oldp+218,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_rfWen));
    bufp->fullCData(oldp+219,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype),7);
    bufp->fullQData(oldp+220,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_PC),64);
    bufp->fullIData(oldp+222,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_inst),32);
    bufp->fullQData(oldp+223,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_Dnpc),64);
    bufp->fullCData(oldp+225,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest),5);
    bufp->fullQData(oldp+226,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfData),64);
    bufp->fullQData(oldp+228,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src1),64);
    bufp->fullQData(oldp+230,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2),64);
    bufp->fullQData(oldp+232,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_Imm),64);
    bufp->fullBit(oldp+234,(vlSelf->CoreTop__DOT__MEM_io_out_valid));
    bufp->fullBit(oldp+235,(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_signal_inst_valid));
    bufp->fullBit(oldp+236,((((0xa0000048ULL == vlSelf->CoreTop__DOT__MEM__DOT__addr_temp) 
                              | (0xa00003f8ULL == vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)) 
                             | ((0xa0000000ULL <= vlSelf->CoreTop__DOT__MEM__DOT__addr_temp) 
                                & (0xa1200000ULL >= vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))));
    bufp->fullBit(oldp+237,(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfWen));
    bufp->fullQData(oldp+238,(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfData),64);
    bufp->fullBit(oldp+240,(vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_valid));
    bufp->fullQData(oldp+241,(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp),64);
    bufp->fullBit(oldp+243,(vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_we));
    bufp->fullBit(oldp+244,(vlSelf->CoreTop__DOT__DCACHE_io_in_rdata_rep_valid));
    bufp->fullQData(oldp+245,(vlSelf->CoreTop__DOT__DCACHE_io_in_rdata_rep_bits_rdata),64);
    bufp->fullQData(oldp+247,(((0x46U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
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
    bufp->fullCData(oldp+249,(((0x46U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                ? 0xffU : (IData)(vlSelf->CoreTop__DOT__MEM__DOT___GEN_32))),8);
    bufp->fullBit(oldp+250,(vlSelf->CoreTop__DOT__DCACHE_io_in_wdata_rep));
    bufp->fullBit(oldp+251,(vlSelf->CoreTop__DOT__valid_3));
    bufp->fullBit(oldp+252,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_inst_valid));
    bufp->fullBit(oldp+253,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_rfWen));
    bufp->fullQData(oldp+254,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_PC),64);
    bufp->fullIData(oldp+256,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_inst),32);
    bufp->fullQData(oldp+257,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_Dnpc),64);
    bufp->fullBit(oldp+259,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_skip));
    bufp->fullQData(oldp+260,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfData),64);
    bufp->fullBit(oldp+262,(((IData)(vlSelf->CoreTop__DOT__valid_3) 
                             & (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_inst_valid))));
    bufp->fullQData(oldp+263,(((0U == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                >> 0xfU)))
                                ? 0ULL : vlSelf->CoreTop__DOT__rf
                               [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                          >> 0xfU))])),64);
    bufp->fullQData(oldp+265,(((0U == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                >> 0x14U)))
                                ? 0ULL : vlSelf->CoreTop__DOT__rf
                               [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                          >> 0x14U))])),64);
    bufp->fullQData(oldp+267,(vlSelf->CoreTop__DOT__ICACHE__DOT__mem_addr_reg),64);
    bufp->fullBit(oldp+269,((2U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state))));
    bufp->fullBit(oldp+270,(vlSelf->CoreTop__DOT__DIP_io_is_break_REG));
    bufp->fullBit(oldp+271,(((IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_valid) 
                             & (0U == (IData)(vlSelf->CoreTop__DOT__DCACHE__DOT__state)))));
    bufp->fullQData(oldp+272,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data_io_write_bus_addr),64);
    bufp->fullBit(oldp+274,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data_io_write_bus_valid));
    bufp->fullCData(oldp+275,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data_io_write_bus_waymask),2);
    bufp->fullWData(oldp+276,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data_io_write_bus_wdata),512);
    bufp->fullQData(oldp+292,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_tag_w_data),53);
    bufp->fullQData(oldp+294,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1_tag_w_data),53);
    bufp->fullBit(oldp+296,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0
                            [vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0]));
    bufp->fullBit(oldp+297,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1
                            [vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_addr_pipe_0]));
    bufp->fullWData(oldp+298,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data),512);
    bufp->fullWData(oldp+314,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data),512);
    bufp->fullQData(oldp+330,((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                               >> 0xbU)),53);
    bufp->fullCData(oldp+332,((0x1fU & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                >> 6U)))),5);
    bufp->fullCData(oldp+333,((0x3fU & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp))),6);
    bufp->fullBit(oldp+334,(vlSelf->CoreTop__DOT__DCACHE__DOT__Scanf_io_in_valid_REG));
    bufp->fullBit(oldp+335,(vlSelf->CoreTop__DOT__DCACHE__DOT__Scanf_io_out_bits_hit));
    bufp->fullWData(oldp+336,(vlSelf->CoreTop__DOT__DCACHE__DOT__Scanf_io_out_bits_data),512);
    bufp->fullBit(oldp+352,(vlSelf->CoreTop__DOT__DCACHE__DOT__Scanf__DOT__hit_way_0_result));
    bufp->fullBit(oldp+353,(vlSelf->CoreTop__DOT__DCACHE__DOT__Scanf__DOT__hit_way_1_result));
    bufp->fullBit(oldp+354,(vlSelf->CoreTop__DOT__DCACHE__DOT__lru[0]));
    bufp->fullBit(oldp+355,(vlSelf->CoreTop__DOT__DCACHE__DOT__lru[1]));
    bufp->fullBit(oldp+356,(vlSelf->CoreTop__DOT__DCACHE__DOT__lru[2]));
    bufp->fullBit(oldp+357,(vlSelf->CoreTop__DOT__DCACHE__DOT__lru[3]));
    bufp->fullBit(oldp+358,(vlSelf->CoreTop__DOT__DCACHE__DOT__lru[4]));
    bufp->fullBit(oldp+359,(vlSelf->CoreTop__DOT__DCACHE__DOT__lru[5]));
    bufp->fullBit(oldp+360,(vlSelf->CoreTop__DOT__DCACHE__DOT__lru[6]));
    bufp->fullBit(oldp+361,(vlSelf->CoreTop__DOT__DCACHE__DOT__lru[7]));
    bufp->fullBit(oldp+362,(vlSelf->CoreTop__DOT__DCACHE__DOT__lru[8]));
    bufp->fullBit(oldp+363,(vlSelf->CoreTop__DOT__DCACHE__DOT__lru[9]));
    bufp->fullBit(oldp+364,(vlSelf->CoreTop__DOT__DCACHE__DOT__lru[10]));
    bufp->fullBit(oldp+365,(vlSelf->CoreTop__DOT__DCACHE__DOT__lru[11]));
    bufp->fullBit(oldp+366,(vlSelf->CoreTop__DOT__DCACHE__DOT__lru[12]));
    bufp->fullBit(oldp+367,(vlSelf->CoreTop__DOT__DCACHE__DOT__lru[13]));
    bufp->fullBit(oldp+368,(vlSelf->CoreTop__DOT__DCACHE__DOT__lru[14]));
    bufp->fullBit(oldp+369,(vlSelf->CoreTop__DOT__DCACHE__DOT__lru[15]));
    bufp->fullBit(oldp+370,(vlSelf->CoreTop__DOT__DCACHE__DOT__lru[16]));
    bufp->fullBit(oldp+371,(vlSelf->CoreTop__DOT__DCACHE__DOT__lru[17]));
    bufp->fullBit(oldp+372,(vlSelf->CoreTop__DOT__DCACHE__DOT__lru[18]));
    bufp->fullBit(oldp+373,(vlSelf->CoreTop__DOT__DCACHE__DOT__lru[19]));
    bufp->fullBit(oldp+374,(vlSelf->CoreTop__DOT__DCACHE__DOT__lru[20]));
    bufp->fullBit(oldp+375,(vlSelf->CoreTop__DOT__DCACHE__DOT__lru[21]));
    bufp->fullBit(oldp+376,(vlSelf->CoreTop__DOT__DCACHE__DOT__lru[22]));
    bufp->fullBit(oldp+377,(vlSelf->CoreTop__DOT__DCACHE__DOT__lru[23]));
    bufp->fullBit(oldp+378,(vlSelf->CoreTop__DOT__DCACHE__DOT__lru[24]));
    bufp->fullBit(oldp+379,(vlSelf->CoreTop__DOT__DCACHE__DOT__lru[25]));
    bufp->fullBit(oldp+380,(vlSelf->CoreTop__DOT__DCACHE__DOT__lru[26]));
    bufp->fullBit(oldp+381,(vlSelf->CoreTop__DOT__DCACHE__DOT__lru[27]));
    bufp->fullBit(oldp+382,(vlSelf->CoreTop__DOT__DCACHE__DOT__lru[28]));
    bufp->fullBit(oldp+383,(vlSelf->CoreTop__DOT__DCACHE__DOT__lru[29]));
    bufp->fullBit(oldp+384,(vlSelf->CoreTop__DOT__DCACHE__DOT__lru[30]));
    bufp->fullBit(oldp+385,(vlSelf->CoreTop__DOT__DCACHE__DOT__lru[31]));
    bufp->fullBit(oldp+386,(vlSelf->CoreTop__DOT__DCACHE__DOT__lru_lru_w_MPORT_en_pipe_0));
    bufp->fullCData(oldp+387,(vlSelf->CoreTop__DOT__DCACHE__DOT__lru_lru_w_MPORT_addr_pipe_0),5);
    bufp->fullBit(oldp+388,(vlSelf->CoreTop__DOT__DCACHE__DOT__lru_lru_w_MPORT_data));
    bufp->fullBit(oldp+389,(((0U != (IData)(vlSelf->CoreTop__DOT__DCACHE__DOT__state)) 
                             & ((1U == (IData)(vlSelf->CoreTop__DOT__DCACHE__DOT__state)) 
                                & ((IData)(vlSelf->CoreTop__DOT__DCACHE__DOT__Scanf_io_out_bits_hit) 
                                   & (IData)(vlSelf->CoreTop__DOT__DCACHE__DOT__Scanf__DOT__hit_way_0_result))))));
    bufp->fullBit(oldp+390,(((0U != (IData)(vlSelf->CoreTop__DOT__DCACHE__DOT__state)) 
                             & ((1U == (IData)(vlSelf->CoreTop__DOT__DCACHE__DOT__state)) 
                                & ((IData)(vlSelf->CoreTop__DOT__DCACHE__DOT__Scanf_io_out_bits_hit) 
                                   & (IData)(vlSelf->CoreTop__DOT__DCACHE__DOT__Scanf__DOT__hit_way_1_result))))));
    bufp->fullBit(oldp+391,(((0U != (IData)(vlSelf->CoreTop__DOT__DCACHE__DOT__state)) 
                             & ((1U != (IData)(vlSelf->CoreTop__DOT__DCACHE__DOT__state)) 
                                & ((2U == (IData)(vlSelf->CoreTop__DOT__DCACHE__DOT__state)) 
                                   & ((8U == (IData)(vlSelf->CoreTop__DOT__DCACHE__DOT__count)) 
                                      & (IData)(vlSelf->CoreTop__DOT__DCACHE__DOT__lru_r)))))));
    bufp->fullBit(oldp+392,(((0U != (IData)(vlSelf->CoreTop__DOT__DCACHE__DOT__state)) 
                             & ((1U != (IData)(vlSelf->CoreTop__DOT__DCACHE__DOT__state)) 
                                & ((2U == (IData)(vlSelf->CoreTop__DOT__DCACHE__DOT__state)) 
                                   & ((8U == (IData)(vlSelf->CoreTop__DOT__DCACHE__DOT__count)) 
                                      & (~ (IData)(vlSelf->CoreTop__DOT__DCACHE__DOT__lru_r))))))));
    bufp->fullBit(oldp+393,(vlSelf->CoreTop__DOT__DCACHE__DOT__dirt_0[0]));
    bufp->fullBit(oldp+394,(vlSelf->CoreTop__DOT__DCACHE__DOT__dirt_0[1]));
    bufp->fullBit(oldp+395,(vlSelf->CoreTop__DOT__DCACHE__DOT__dirt_0[2]));
    bufp->fullBit(oldp+396,(vlSelf->CoreTop__DOT__DCACHE__DOT__dirt_0[3]));
    bufp->fullBit(oldp+397,(vlSelf->CoreTop__DOT__DCACHE__DOT__dirt_0[4]));
    bufp->fullBit(oldp+398,(vlSelf->CoreTop__DOT__DCACHE__DOT__dirt_0[5]));
    bufp->fullBit(oldp+399,(vlSelf->CoreTop__DOT__DCACHE__DOT__dirt_0[6]));
    bufp->fullBit(oldp+400,(vlSelf->CoreTop__DOT__DCACHE__DOT__dirt_0[7]));
    bufp->fullBit(oldp+401,(vlSelf->CoreTop__DOT__DCACHE__DOT__dirt_0[8]));
    bufp->fullBit(oldp+402,(vlSelf->CoreTop__DOT__DCACHE__DOT__dirt_0[9]));
    bufp->fullBit(oldp+403,(vlSelf->CoreTop__DOT__DCACHE__DOT__dirt_0[10]));
    bufp->fullBit(oldp+404,(vlSelf->CoreTop__DOT__DCACHE__DOT__dirt_0[11]));
    bufp->fullBit(oldp+405,(vlSelf->CoreTop__DOT__DCACHE__DOT__dirt_0[12]));
    bufp->fullBit(oldp+406,(vlSelf->CoreTop__DOT__DCACHE__DOT__dirt_0[13]));
    bufp->fullBit(oldp+407,(vlSelf->CoreTop__DOT__DCACHE__DOT__dirt_0[14]));
    bufp->fullBit(oldp+408,(vlSelf->CoreTop__DOT__DCACHE__DOT__dirt_0[15]));
    bufp->fullBit(oldp+409,(vlSelf->CoreTop__DOT__DCACHE__DOT__dirt_0[16]));
    bufp->fullBit(oldp+410,(vlSelf->CoreTop__DOT__DCACHE__DOT__dirt_0[17]));
    bufp->fullBit(oldp+411,(vlSelf->CoreTop__DOT__DCACHE__DOT__dirt_0[18]));
    bufp->fullBit(oldp+412,(vlSelf->CoreTop__DOT__DCACHE__DOT__dirt_0[19]));
    bufp->fullBit(oldp+413,(vlSelf->CoreTop__DOT__DCACHE__DOT__dirt_0[20]));
    bufp->fullBit(oldp+414,(vlSelf->CoreTop__DOT__DCACHE__DOT__dirt_0[21]));
    bufp->fullBit(oldp+415,(vlSelf->CoreTop__DOT__DCACHE__DOT__dirt_0[22]));
    bufp->fullBit(oldp+416,(vlSelf->CoreTop__DOT__DCACHE__DOT__dirt_0[23]));
    bufp->fullBit(oldp+417,(vlSelf->CoreTop__DOT__DCACHE__DOT__dirt_0[24]));
    bufp->fullBit(oldp+418,(vlSelf->CoreTop__DOT__DCACHE__DOT__dirt_0[25]));
    bufp->fullBit(oldp+419,(vlSelf->CoreTop__DOT__DCACHE__DOT__dirt_0[26]));
    bufp->fullBit(oldp+420,(vlSelf->CoreTop__DOT__DCACHE__DOT__dirt_0[27]));
    bufp->fullBit(oldp+421,(vlSelf->CoreTop__DOT__DCACHE__DOT__dirt_0[28]));
    bufp->fullBit(oldp+422,(vlSelf->CoreTop__DOT__DCACHE__DOT__dirt_0[29]));
    bufp->fullBit(oldp+423,(vlSelf->CoreTop__DOT__DCACHE__DOT__dirt_0[30]));
    bufp->fullBit(oldp+424,(vlSelf->CoreTop__DOT__DCACHE__DOT__dirt_0[31]));
    bufp->fullBit(oldp+425,(vlSelf->CoreTop__DOT__DCACHE__DOT__dirt_0_dirt_w_en_pipe_0));
    bufp->fullCData(oldp+426,(vlSelf->CoreTop__DOT__DCACHE__DOT__dirt_1_dirt_w_addr_pipe_0),5);
    bufp->fullBit(oldp+427,(vlSelf->CoreTop__DOT__DCACHE__DOT__dirt_0
                            [vlSelf->CoreTop__DOT__DCACHE__DOT__dirt_1_dirt_w_addr_pipe_0]));
    bufp->fullBit(oldp+428,((1U & (IData)(vlSelf->CoreTop__DOT__DCACHE__DOT__waymask))));
    bufp->fullBit(oldp+429,(((IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_we) 
                             & (IData)(vlSelf->CoreTop__DOT__DCACHE__DOT___io_in_rdata_rep_valid_T_5))));
    bufp->fullBit(oldp+430,(vlSelf->CoreTop__DOT__DCACHE__DOT__dirt_1[0]));
    bufp->fullBit(oldp+431,(vlSelf->CoreTop__DOT__DCACHE__DOT__dirt_1[1]));
    bufp->fullBit(oldp+432,(vlSelf->CoreTop__DOT__DCACHE__DOT__dirt_1[2]));
    bufp->fullBit(oldp+433,(vlSelf->CoreTop__DOT__DCACHE__DOT__dirt_1[3]));
    bufp->fullBit(oldp+434,(vlSelf->CoreTop__DOT__DCACHE__DOT__dirt_1[4]));
    bufp->fullBit(oldp+435,(vlSelf->CoreTop__DOT__DCACHE__DOT__dirt_1[5]));
    bufp->fullBit(oldp+436,(vlSelf->CoreTop__DOT__DCACHE__DOT__dirt_1[6]));
    bufp->fullBit(oldp+437,(vlSelf->CoreTop__DOT__DCACHE__DOT__dirt_1[7]));
    bufp->fullBit(oldp+438,(vlSelf->CoreTop__DOT__DCACHE__DOT__dirt_1[8]));
    bufp->fullBit(oldp+439,(vlSelf->CoreTop__DOT__DCACHE__DOT__dirt_1[9]));
    bufp->fullBit(oldp+440,(vlSelf->CoreTop__DOT__DCACHE__DOT__dirt_1[10]));
    bufp->fullBit(oldp+441,(vlSelf->CoreTop__DOT__DCACHE__DOT__dirt_1[11]));
    bufp->fullBit(oldp+442,(vlSelf->CoreTop__DOT__DCACHE__DOT__dirt_1[12]));
    bufp->fullBit(oldp+443,(vlSelf->CoreTop__DOT__DCACHE__DOT__dirt_1[13]));
    bufp->fullBit(oldp+444,(vlSelf->CoreTop__DOT__DCACHE__DOT__dirt_1[14]));
    bufp->fullBit(oldp+445,(vlSelf->CoreTop__DOT__DCACHE__DOT__dirt_1[15]));
    bufp->fullBit(oldp+446,(vlSelf->CoreTop__DOT__DCACHE__DOT__dirt_1[16]));
    bufp->fullBit(oldp+447,(vlSelf->CoreTop__DOT__DCACHE__DOT__dirt_1[17]));
    bufp->fullBit(oldp+448,(vlSelf->CoreTop__DOT__DCACHE__DOT__dirt_1[18]));
    bufp->fullBit(oldp+449,(vlSelf->CoreTop__DOT__DCACHE__DOT__dirt_1[19]));
    bufp->fullBit(oldp+450,(vlSelf->CoreTop__DOT__DCACHE__DOT__dirt_1[20]));
    bufp->fullBit(oldp+451,(vlSelf->CoreTop__DOT__DCACHE__DOT__dirt_1[21]));
    bufp->fullBit(oldp+452,(vlSelf->CoreTop__DOT__DCACHE__DOT__dirt_1[22]));
    bufp->fullBit(oldp+453,(vlSelf->CoreTop__DOT__DCACHE__DOT__dirt_1[23]));
    bufp->fullBit(oldp+454,(vlSelf->CoreTop__DOT__DCACHE__DOT__dirt_1[24]));
    bufp->fullBit(oldp+455,(vlSelf->CoreTop__DOT__DCACHE__DOT__dirt_1[25]));
    bufp->fullBit(oldp+456,(vlSelf->CoreTop__DOT__DCACHE__DOT__dirt_1[26]));
    bufp->fullBit(oldp+457,(vlSelf->CoreTop__DOT__DCACHE__DOT__dirt_1[27]));
    bufp->fullBit(oldp+458,(vlSelf->CoreTop__DOT__DCACHE__DOT__dirt_1[28]));
    bufp->fullBit(oldp+459,(vlSelf->CoreTop__DOT__DCACHE__DOT__dirt_1[29]));
    bufp->fullBit(oldp+460,(vlSelf->CoreTop__DOT__DCACHE__DOT__dirt_1[30]));
    bufp->fullBit(oldp+461,(vlSelf->CoreTop__DOT__DCACHE__DOT__dirt_1[31]));
    bufp->fullBit(oldp+462,(vlSelf->CoreTop__DOT__DCACHE__DOT__dirt_1_dirt_w_en_pipe_0));
    bufp->fullBit(oldp+463,(vlSelf->CoreTop__DOT__DCACHE__DOT__dirt_1
                            [vlSelf->CoreTop__DOT__DCACHE__DOT__dirt_1_dirt_w_addr_pipe_0]));
    bufp->fullBit(oldp+464,((1U & ((IData)(vlSelf->CoreTop__DOT__DCACHE__DOT__waymask) 
                                   >> 1U))));
    bufp->fullCData(oldp+465,(vlSelf->CoreTop__DOT__DCACHE__DOT__state),2);
    bufp->fullWData(oldp+466,(vlSelf->CoreTop__DOT__DCACHE__DOT__data_line_reg),512);
    bufp->fullQData(oldp+482,(vlSelf->CoreTop__DOT__DCACHE__DOT__mem_addr_reg),64);
    bufp->fullBit(oldp+484,(vlSelf->CoreTop__DOT__DCACHE__DOT__lru_r));
    bufp->fullCData(oldp+485,(vlSelf->CoreTop__DOT__DCACHE__DOT__count),4);
    bufp->fullBit(oldp+486,((8U == (IData)(vlSelf->CoreTop__DOT__DCACHE__DOT__count))));
    bufp->fullCData(oldp+487,(vlSelf->CoreTop__DOT__DCACHE__DOT__count_write),4);
    bufp->fullBit(oldp+488,((8U == (IData)(vlSelf->CoreTop__DOT__DCACHE__DOT__count_write))));
    bufp->fullQData(oldp+489,(vlSelf->CoreTop__DOT__DCACHE__DOT__mem_write_addr_reg),64);
    bufp->fullWData(oldp+491,(vlSelf->CoreTop__DOT__DCACHE__DOT__mem_write_data_reg),512);
    bufp->fullWData(oldp+507,(vlSelf->CoreTop__DOT__DCACHE__DOT__hit___05Fwrite_data),512);
    bufp->fullBit(oldp+523,(vlSelf->CoreTop__DOT__DCACHE__DOT__hit_way_r_0));
    bufp->fullBit(oldp+524,(vlSelf->CoreTop__DOT__DCACHE__DOT__hit_way_r_1));
    bufp->fullQData(oldp+525,(((0U == (7U & (IData)(
                                                    (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                     >> 3U))))
                                ? (((QData)((IData)(
                                                    vlSelf->CoreTop__DOT__DCACHE__DOT__Scanf_io_out_bits_data[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->CoreTop__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0U])))
                                : ((1U == (7U & (IData)(
                                                        (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                         >> 3U))))
                                    ? (((QData)((IData)(
                                                        vlSelf->CoreTop__DOT__DCACHE__DOT__Scanf_io_out_bits_data[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->CoreTop__DOT__DCACHE__DOT__Scanf_io_out_bits_data[2U])))
                                    : ((2U == (7U & (IData)(
                                                            (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                             >> 3U))))
                                        ? (((QData)((IData)(
                                                            vlSelf->CoreTop__DOT__DCACHE__DOT__Scanf_io_out_bits_data[5U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->CoreTop__DOT__DCACHE__DOT__Scanf_io_out_bits_data[4U])))
                                        : ((3U == (7U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                              >> 3U))))
                                            ? (((QData)((IData)(
                                                                vlSelf->CoreTop__DOT__DCACHE__DOT__Scanf_io_out_bits_data[7U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->CoreTop__DOT__DCACHE__DOT__Scanf_io_out_bits_data[6U])))
                                            : ((4U 
                                                == 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                            >> 3U))))
                                                ? (
                                                   ((QData)((IData)(
                                                                    vlSelf->CoreTop__DOT__DCACHE__DOT__Scanf_io_out_bits_data[9U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->CoreTop__DOT__DCACHE__DOT__Scanf_io_out_bits_data[8U])))
                                                : (
                                                   (5U 
                                                    == 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                                >> 3U))))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->CoreTop__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xbU])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->CoreTop__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xaU])))
                                                    : 
                                                   ((6U 
                                                     == 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                                 >> 3U))))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelf->CoreTop__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xdU])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->CoreTop__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xcU])))
                                                     : 
                                                    ((7U 
                                                      == 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                                  >> 3U))))
                                                      ? 
                                                     (((QData)((IData)(
                                                                       vlSelf->CoreTop__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xfU])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->CoreTop__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xeU])))
                                                      : 0ULL))))))))),64);
    bufp->fullQData(oldp+527,(((0U == (7U & (IData)(
                                                    (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                     >> 3U))))
                                ? (((QData)((IData)(
                                                    vlSelf->CoreTop__DOT__DCACHE__DOT__data_line_reg[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->CoreTop__DOT__DCACHE__DOT__data_line_reg[0U])))
                                : ((1U == (7U & (IData)(
                                                        (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                         >> 3U))))
                                    ? (((QData)((IData)(
                                                        vlSelf->CoreTop__DOT__DCACHE__DOT__data_line_reg[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->CoreTop__DOT__DCACHE__DOT__data_line_reg[2U])))
                                    : ((2U == (7U & (IData)(
                                                            (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                             >> 3U))))
                                        ? (((QData)((IData)(
                                                            vlSelf->CoreTop__DOT__DCACHE__DOT__data_line_reg[5U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->CoreTop__DOT__DCACHE__DOT__data_line_reg[4U])))
                                        : ((3U == (7U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                              >> 3U))))
                                            ? (((QData)((IData)(
                                                                vlSelf->CoreTop__DOT__DCACHE__DOT__data_line_reg[7U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->CoreTop__DOT__DCACHE__DOT__data_line_reg[6U])))
                                            : ((4U 
                                                == 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                            >> 3U))))
                                                ? (
                                                   ((QData)((IData)(
                                                                    vlSelf->CoreTop__DOT__DCACHE__DOT__data_line_reg[9U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->CoreTop__DOT__DCACHE__DOT__data_line_reg[8U])))
                                                : (
                                                   (5U 
                                                    == 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                                >> 3U))))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->CoreTop__DOT__DCACHE__DOT__data_line_reg[0xbU])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->CoreTop__DOT__DCACHE__DOT__data_line_reg[0xaU])))
                                                    : 
                                                   ((6U 
                                                     == 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                                 >> 3U))))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelf->CoreTop__DOT__DCACHE__DOT__data_line_reg[0xdU])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->CoreTop__DOT__DCACHE__DOT__data_line_reg[0xcU])))
                                                     : 
                                                    ((7U 
                                                      == 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                                  >> 3U))))
                                                      ? 
                                                     (((QData)((IData)(
                                                                       vlSelf->CoreTop__DOT__DCACHE__DOT__data_line_reg[0xfU])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->CoreTop__DOT__DCACHE__DOT__data_line_reg[0xeU])))
                                                      : 0ULL))))))))),64);
    bufp->fullQData(oldp+529,(vlSelf->CoreTop__DOT__DCACHE__DOT__wmaskextend_Genmask),64);
    bufp->fullQData(oldp+531,((((QData)((IData)((((
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->CoreTop__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                               >> 7U)))
                                                    ? 0xffU
                                                    : 0U) 
                                                  << 0x18U) 
                                                 | ((((1U 
                                                       & (IData)(
                                                                 (vlSelf->CoreTop__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                  >> 6U)))
                                                       ? 0xffU
                                                       : 0U) 
                                                     << 0x10U) 
                                                    | ((((1U 
                                                          & (IData)(
                                                                    (vlSelf->CoreTop__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                     >> 5U)))
                                                          ? 0xffU
                                                          : 0U) 
                                                        << 8U) 
                                                       | ((1U 
                                                           & (IData)(
                                                                     (vlSelf->CoreTop__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                      >> 4U)))
                                                           ? 0xffU
                                                           : 0U)))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((((1U 
                                                                & (IData)(
                                                                          (vlSelf->CoreTop__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                           >> 3U)))
                                                                ? 0xffU
                                                                : 0U) 
                                                              << 0x18U) 
                                                             | ((((1U 
                                                                   & (IData)(
                                                                             (vlSelf->CoreTop__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                              >> 2U)))
                                                                   ? 0xffU
                                                                   : 0U) 
                                                                 << 0x10U) 
                                                                | ((((1U 
                                                                      & (IData)(
                                                                                (vlSelf->CoreTop__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 1U)))
                                                                      ? 0xffU
                                                                      : 0U) 
                                                                    << 8U) 
                                                                   | ((1U 
                                                                       & (IData)(vlSelf->CoreTop__DOT__DCACHE__DOT__wmaskextend_Genmask))
                                                                       ? 0xffU
                                                                       : 0U)))))))),64);
    bufp->fullWData(oldp+533,(vlSelf->CoreTop__DOT__DCACHE__DOT__wmaskextend_lo_lo),128);
    bufp->fullQData(oldp+537,((((QData)((IData)((((
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->CoreTop__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                               >> 0x17U)))
                                                    ? 0xffU
                                                    : 0U) 
                                                  << 0x18U) 
                                                 | ((((1U 
                                                       & (IData)(
                                                                 (vlSelf->CoreTop__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                  >> 0x16U)))
                                                       ? 0xffU
                                                       : 0U) 
                                                     << 0x10U) 
                                                    | ((((1U 
                                                          & (IData)(
                                                                    (vlSelf->CoreTop__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                     >> 0x15U)))
                                                          ? 0xffU
                                                          : 0U) 
                                                        << 8U) 
                                                       | ((1U 
                                                           & (IData)(
                                                                     (vlSelf->CoreTop__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                      >> 0x14U)))
                                                           ? 0xffU
                                                           : 0U)))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((((1U 
                                                                & (IData)(
                                                                          (vlSelf->CoreTop__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                           >> 0x13U)))
                                                                ? 0xffU
                                                                : 0U) 
                                                              << 0x18U) 
                                                             | ((((1U 
                                                                   & (IData)(
                                                                             (vlSelf->CoreTop__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                              >> 0x12U)))
                                                                   ? 0xffU
                                                                   : 0U) 
                                                                 << 0x10U) 
                                                                | ((((1U 
                                                                      & (IData)(
                                                                                (vlSelf->CoreTop__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x11U)))
                                                                      ? 0xffU
                                                                      : 0U) 
                                                                    << 8U) 
                                                                   | ((1U 
                                                                       & (IData)(
                                                                                (vlSelf->CoreTop__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x10U)))
                                                                       ? 0xffU
                                                                       : 0U)))))))),64);
    bufp->fullWData(oldp+539,(vlSelf->CoreTop__DOT__DCACHE__DOT__wmaskextend_lo),256);
    bufp->fullQData(oldp+547,((((QData)((IData)((((
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->CoreTop__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                               >> 0x27U)))
                                                    ? 0xffU
                                                    : 0U) 
                                                  << 0x18U) 
                                                 | ((((1U 
                                                       & (IData)(
                                                                 (vlSelf->CoreTop__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                  >> 0x26U)))
                                                       ? 0xffU
                                                       : 0U) 
                                                     << 0x10U) 
                                                    | ((((1U 
                                                          & (IData)(
                                                                    (vlSelf->CoreTop__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                     >> 0x25U)))
                                                          ? 0xffU
                                                          : 0U) 
                                                        << 8U) 
                                                       | ((1U 
                                                           & (IData)(
                                                                     (vlSelf->CoreTop__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                      >> 0x24U)))
                                                           ? 0xffU
                                                           : 0U)))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((((1U 
                                                                & (IData)(
                                                                          (vlSelf->CoreTop__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                           >> 0x23U)))
                                                                ? 0xffU
                                                                : 0U) 
                                                              << 0x18U) 
                                                             | ((((1U 
                                                                   & (IData)(
                                                                             (vlSelf->CoreTop__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                              >> 0x22U)))
                                                                   ? 0xffU
                                                                   : 0U) 
                                                                 << 0x10U) 
                                                                | ((((1U 
                                                                      & (IData)(
                                                                                (vlSelf->CoreTop__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x21U)))
                                                                      ? 0xffU
                                                                      : 0U) 
                                                                    << 8U) 
                                                                   | ((1U 
                                                                       & (IData)(
                                                                                (vlSelf->CoreTop__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x20U)))
                                                                       ? 0xffU
                                                                       : 0U)))))))),64);
    bufp->fullWData(oldp+549,(vlSelf->CoreTop__DOT__DCACHE__DOT__wmaskextend_hi_lo),128);
    bufp->fullQData(oldp+553,((((QData)((IData)((((
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->CoreTop__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                               >> 0x37U)))
                                                    ? 0xffU
                                                    : 0U) 
                                                  << 0x18U) 
                                                 | ((((1U 
                                                       & (IData)(
                                                                 (vlSelf->CoreTop__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                  >> 0x36U)))
                                                       ? 0xffU
                                                       : 0U) 
                                                     << 0x10U) 
                                                    | ((((1U 
                                                          & (IData)(
                                                                    (vlSelf->CoreTop__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                     >> 0x35U)))
                                                          ? 0xffU
                                                          : 0U) 
                                                        << 8U) 
                                                       | ((1U 
                                                           & (IData)(
                                                                     (vlSelf->CoreTop__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                      >> 0x34U)))
                                                           ? 0xffU
                                                           : 0U)))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((((1U 
                                                                & (IData)(
                                                                          (vlSelf->CoreTop__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                           >> 0x33U)))
                                                                ? 0xffU
                                                                : 0U) 
                                                              << 0x18U) 
                                                             | ((((1U 
                                                                   & (IData)(
                                                                             (vlSelf->CoreTop__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                              >> 0x32U)))
                                                                   ? 0xffU
                                                                   : 0U) 
                                                                 << 0x10U) 
                                                                | ((((1U 
                                                                      & (IData)(
                                                                                (vlSelf->CoreTop__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x31U)))
                                                                      ? 0xffU
                                                                      : 0U) 
                                                                    << 8U) 
                                                                   | ((1U 
                                                                       & (IData)(
                                                                                (vlSelf->CoreTop__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x30U)))
                                                                       ? 0xffU
                                                                       : 0U)))))))),64);
    bufp->fullWData(oldp+555,(vlSelf->CoreTop__DOT__DCACHE__DOT__wmaskextend_hi),256);
    bufp->fullWData(oldp+563,(vlSelf->CoreTop__DOT__DCACHE__DOT__wmaskextend),512);
    __Vtemp_h0c9dabf6__0[0U] = (IData)(((0x46U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                         ? vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2
                                         : ((0x70U 
                                             == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                             ? ((0U 
                                                 == 
                                                 (3U 
                                                  & (IData)(
                                                            (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                             >> 1U))))
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2))))
                                                 : 
                                                ((1U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                              >> 1U))))
                                                  ? 
                                                 ((QData)((IData)(
                                                                  (0xffffU 
                                                                   & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)))) 
                                                  << 0x10U)
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                               >> 1U))))
                                                   ? 
                                                  ((QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)))) 
                                                   << 0x20U)
                                                   : 
                                                  ((3U 
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
                                             : ((0x74U 
                                                 == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                                 ? vlSelf->CoreTop__DOT__MEM__DOT___wdata_temp_T_21
                                                 : 
                                                ((0x77U 
                                                  == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                              >> 2U)))
                                                   ? 
                                                  ((QData)((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)) 
                                                   << 0x20U)
                                                   : (QData)((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)))
                                                  : 0ULL)))));
    __Vtemp_h0c9dabf6__0[1U] = (IData)((((0x46U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                          ? vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2
                                          : ((0x70U 
                                              == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                              ? ((0U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                              >> 1U))))
                                                  ? (QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2))))
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                               >> 1U))))
                                                   ? 
                                                  ((QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)))) 
                                                   << 0x10U)
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                                >> 1U))))
                                                    ? 
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)))) 
                                                    << 0x20U)
                                                    : 
                                                   ((3U 
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
                                              : ((0x74U 
                                                  == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                                  ? vlSelf->CoreTop__DOT__MEM__DOT___wdata_temp_T_21
                                                  : 
                                                 ((0x77U 
                                                   == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                               >> 2U)))
                                                    ? 
                                                   ((QData)((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)) 
                                                    << 0x20U)
                                                    : (QData)((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)))
                                                   : 0ULL)))) 
                                        >> 0x20U));
    __Vtemp_h0c9dabf6__0[2U] = (IData)(((0x46U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                         ? vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2
                                         : ((0x70U 
                                             == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                             ? ((0U 
                                                 == 
                                                 (3U 
                                                  & (IData)(
                                                            (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                             >> 1U))))
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2))))
                                                 : 
                                                ((1U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                              >> 1U))))
                                                  ? 
                                                 ((QData)((IData)(
                                                                  (0xffffU 
                                                                   & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)))) 
                                                  << 0x10U)
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                               >> 1U))))
                                                   ? 
                                                  ((QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)))) 
                                                   << 0x20U)
                                                   : 
                                                  ((3U 
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
                                             : ((0x74U 
                                                 == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                                 ? vlSelf->CoreTop__DOT__MEM__DOT___wdata_temp_T_21
                                                 : 
                                                ((0x77U 
                                                  == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                              >> 2U)))
                                                   ? 
                                                  ((QData)((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)) 
                                                   << 0x20U)
                                                   : (QData)((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)))
                                                  : 0ULL)))));
    __Vtemp_h0c9dabf6__0[3U] = (IData)((((0x46U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                          ? vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2
                                          : ((0x70U 
                                              == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                              ? ((0U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                              >> 1U))))
                                                  ? (QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2))))
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                               >> 1U))))
                                                   ? 
                                                  ((QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)))) 
                                                   << 0x10U)
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                                >> 1U))))
                                                    ? 
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)))) 
                                                    << 0x20U)
                                                    : 
                                                   ((3U 
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
                                              : ((0x74U 
                                                  == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                                  ? vlSelf->CoreTop__DOT__MEM__DOT___wdata_temp_T_21
                                                  : 
                                                 ((0x77U 
                                                   == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                               >> 2U)))
                                                    ? 
                                                   ((QData)((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)) 
                                                    << 0x20U)
                                                    : (QData)((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)))
                                                   : 0ULL)))) 
                                        >> 0x20U));
    __Vtemp_h0c9dabf6__0[4U] = (IData)(((0x46U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                         ? vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2
                                         : ((0x70U 
                                             == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                             ? ((0U 
                                                 == 
                                                 (3U 
                                                  & (IData)(
                                                            (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                             >> 1U))))
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2))))
                                                 : 
                                                ((1U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                              >> 1U))))
                                                  ? 
                                                 ((QData)((IData)(
                                                                  (0xffffU 
                                                                   & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)))) 
                                                  << 0x10U)
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                               >> 1U))))
                                                   ? 
                                                  ((QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)))) 
                                                   << 0x20U)
                                                   : 
                                                  ((3U 
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
                                             : ((0x74U 
                                                 == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                                 ? vlSelf->CoreTop__DOT__MEM__DOT___wdata_temp_T_21
                                                 : 
                                                ((0x77U 
                                                  == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                              >> 2U)))
                                                   ? 
                                                  ((QData)((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)) 
                                                   << 0x20U)
                                                   : (QData)((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)))
                                                  : 0ULL)))));
    __Vtemp_h0c9dabf6__0[5U] = (IData)((((0x46U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                          ? vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2
                                          : ((0x70U 
                                              == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                              ? ((0U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                              >> 1U))))
                                                  ? (QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2))))
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                               >> 1U))))
                                                   ? 
                                                  ((QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)))) 
                                                   << 0x10U)
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                                >> 1U))))
                                                    ? 
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)))) 
                                                    << 0x20U)
                                                    : 
                                                   ((3U 
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
                                              : ((0x74U 
                                                  == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                                  ? vlSelf->CoreTop__DOT__MEM__DOT___wdata_temp_T_21
                                                  : 
                                                 ((0x77U 
                                                   == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                               >> 2U)))
                                                    ? 
                                                   ((QData)((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)) 
                                                    << 0x20U)
                                                    : (QData)((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)))
                                                   : 0ULL)))) 
                                        >> 0x20U));
    __Vtemp_h0c9dabf6__0[6U] = (IData)(((0x46U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                         ? vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2
                                         : ((0x70U 
                                             == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                             ? ((0U 
                                                 == 
                                                 (3U 
                                                  & (IData)(
                                                            (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                             >> 1U))))
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2))))
                                                 : 
                                                ((1U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                              >> 1U))))
                                                  ? 
                                                 ((QData)((IData)(
                                                                  (0xffffU 
                                                                   & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)))) 
                                                  << 0x10U)
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                               >> 1U))))
                                                   ? 
                                                  ((QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)))) 
                                                   << 0x20U)
                                                   : 
                                                  ((3U 
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
                                             : ((0x74U 
                                                 == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                                 ? vlSelf->CoreTop__DOT__MEM__DOT___wdata_temp_T_21
                                                 : 
                                                ((0x77U 
                                                  == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                              >> 2U)))
                                                   ? 
                                                  ((QData)((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)) 
                                                   << 0x20U)
                                                   : (QData)((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)))
                                                  : 0ULL)))));
    __Vtemp_h0c9dabf6__0[7U] = (IData)((((0x46U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                          ? vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2
                                          : ((0x70U 
                                              == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                              ? ((0U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                              >> 1U))))
                                                  ? (QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2))))
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                               >> 1U))))
                                                   ? 
                                                  ((QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)))) 
                                                   << 0x10U)
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                                >> 1U))))
                                                    ? 
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)))) 
                                                    << 0x20U)
                                                    : 
                                                   ((3U 
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
                                              : ((0x74U 
                                                  == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                                  ? vlSelf->CoreTop__DOT__MEM__DOT___wdata_temp_T_21
                                                  : 
                                                 ((0x77U 
                                                   == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                               >> 2U)))
                                                    ? 
                                                   ((QData)((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)) 
                                                    << 0x20U)
                                                    : (QData)((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)))
                                                   : 0ULL)))) 
                                        >> 0x20U));
    __Vtemp_h0c9dabf6__0[8U] = (IData)(((0x46U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                         ? vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2
                                         : ((0x70U 
                                             == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                             ? ((0U 
                                                 == 
                                                 (3U 
                                                  & (IData)(
                                                            (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                             >> 1U))))
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2))))
                                                 : 
                                                ((1U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                              >> 1U))))
                                                  ? 
                                                 ((QData)((IData)(
                                                                  (0xffffU 
                                                                   & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)))) 
                                                  << 0x10U)
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                               >> 1U))))
                                                   ? 
                                                  ((QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)))) 
                                                   << 0x20U)
                                                   : 
                                                  ((3U 
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
                                             : ((0x74U 
                                                 == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                                 ? vlSelf->CoreTop__DOT__MEM__DOT___wdata_temp_T_21
                                                 : 
                                                ((0x77U 
                                                  == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                              >> 2U)))
                                                   ? 
                                                  ((QData)((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)) 
                                                   << 0x20U)
                                                   : (QData)((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)))
                                                  : 0ULL)))));
    __Vtemp_h0c9dabf6__0[9U] = (IData)((((0x46U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                          ? vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2
                                          : ((0x70U 
                                              == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                              ? ((0U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                              >> 1U))))
                                                  ? (QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2))))
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                               >> 1U))))
                                                   ? 
                                                  ((QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)))) 
                                                   << 0x10U)
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                                >> 1U))))
                                                    ? 
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)))) 
                                                    << 0x20U)
                                                    : 
                                                   ((3U 
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
                                              : ((0x74U 
                                                  == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                                  ? vlSelf->CoreTop__DOT__MEM__DOT___wdata_temp_T_21
                                                  : 
                                                 ((0x77U 
                                                   == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                               >> 2U)))
                                                    ? 
                                                   ((QData)((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)) 
                                                    << 0x20U)
                                                    : (QData)((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)))
                                                   : 0ULL)))) 
                                        >> 0x20U));
    __Vtemp_h0c9dabf6__0[0xaU] = (IData)(((0x46U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                           ? vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2
                                           : ((0x70U 
                                               == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                               ? ((0U 
                                                   == 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                               >> 1U))))
                                                   ? (QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2))))
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                                >> 1U))))
                                                    ? 
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)))) 
                                                    << 0x10U)
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (3U 
                                                      & (IData)(
                                                                (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                                 >> 1U))))
                                                     ? 
                                                    ((QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)))) 
                                                     << 0x20U)
                                                     : 
                                                    ((3U 
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
                                               : ((0x74U 
                                                   == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                                   ? vlSelf->CoreTop__DOT__MEM__DOT___wdata_temp_T_21
                                                   : 
                                                  ((0x77U 
                                                    == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                                >> 2U)))
                                                     ? 
                                                    ((QData)((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)) 
                                                     << 0x20U)
                                                     : (QData)((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)))
                                                    : 0ULL)))));
    __Vtemp_h0c9dabf6__0[0xbU] = (IData)((((0x46U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                            ? vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2
                                            : ((0x70U 
                                                == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                                ? (
                                                   (0U 
                                                    == 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                                >> 1U))))
                                                    ? (QData)((IData)(
                                                                      (0xffffU 
                                                                       & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2))))
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (3U 
                                                      & (IData)(
                                                                (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                                 >> 1U))))
                                                     ? 
                                                    ((QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)))) 
                                                     << 0x10U)
                                                     : 
                                                    ((2U 
                                                      == 
                                                      (3U 
                                                       & (IData)(
                                                                 (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                                  >> 1U))))
                                                      ? 
                                                     ((QData)((IData)(
                                                                      (0xffffU 
                                                                       & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)))) 
                                                      << 0x20U)
                                                      : 
                                                     ((3U 
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
                                                : (
                                                   (0x74U 
                                                    == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? vlSelf->CoreTop__DOT__MEM__DOT___wdata_temp_T_21
                                                    : 
                                                   ((0x77U 
                                                     == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                                 >> 2U)))
                                                      ? 
                                                     ((QData)((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)) 
                                                      << 0x20U)
                                                      : (QData)((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)))
                                                     : 0ULL)))) 
                                          >> 0x20U));
    __Vtemp_h0c9dabf6__0[0xcU] = (IData)(((0x46U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                           ? vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2
                                           : ((0x70U 
                                               == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                               ? ((0U 
                                                   == 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                               >> 1U))))
                                                   ? (QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2))))
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                                >> 1U))))
                                                    ? 
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)))) 
                                                    << 0x10U)
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (3U 
                                                      & (IData)(
                                                                (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                                 >> 1U))))
                                                     ? 
                                                    ((QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)))) 
                                                     << 0x20U)
                                                     : 
                                                    ((3U 
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
                                               : ((0x74U 
                                                   == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                                   ? vlSelf->CoreTop__DOT__MEM__DOT___wdata_temp_T_21
                                                   : 
                                                  ((0x77U 
                                                    == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                                >> 2U)))
                                                     ? 
                                                    ((QData)((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)) 
                                                     << 0x20U)
                                                     : (QData)((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)))
                                                    : 0ULL)))));
    __Vtemp_h0c9dabf6__0[0xdU] = (IData)((((0x46U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                            ? vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2
                                            : ((0x70U 
                                                == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                                ? (
                                                   (0U 
                                                    == 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                                >> 1U))))
                                                    ? (QData)((IData)(
                                                                      (0xffffU 
                                                                       & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2))))
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (3U 
                                                      & (IData)(
                                                                (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                                 >> 1U))))
                                                     ? 
                                                    ((QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)))) 
                                                     << 0x10U)
                                                     : 
                                                    ((2U 
                                                      == 
                                                      (3U 
                                                       & (IData)(
                                                                 (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                                  >> 1U))))
                                                      ? 
                                                     ((QData)((IData)(
                                                                      (0xffffU 
                                                                       & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)))) 
                                                      << 0x20U)
                                                      : 
                                                     ((3U 
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
                                                : (
                                                   (0x74U 
                                                    == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? vlSelf->CoreTop__DOT__MEM__DOT___wdata_temp_T_21
                                                    : 
                                                   ((0x77U 
                                                     == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                                 >> 2U)))
                                                      ? 
                                                     ((QData)((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)) 
                                                      << 0x20U)
                                                      : (QData)((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)))
                                                     : 0ULL)))) 
                                          >> 0x20U));
    __Vtemp_h0c9dabf6__0[0xeU] = (IData)(((0x46U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                           ? vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2
                                           : ((0x70U 
                                               == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                               ? ((0U 
                                                   == 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                               >> 1U))))
                                                   ? (QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2))))
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                                >> 1U))))
                                                    ? 
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)))) 
                                                    << 0x10U)
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (3U 
                                                      & (IData)(
                                                                (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                                 >> 1U))))
                                                     ? 
                                                    ((QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)))) 
                                                     << 0x20U)
                                                     : 
                                                    ((3U 
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
                                               : ((0x74U 
                                                   == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                                   ? vlSelf->CoreTop__DOT__MEM__DOT___wdata_temp_T_21
                                                   : 
                                                  ((0x77U 
                                                    == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                                >> 2U)))
                                                     ? 
                                                    ((QData)((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)) 
                                                     << 0x20U)
                                                     : (QData)((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)))
                                                    : 0ULL)))));
    __Vtemp_h0c9dabf6__0[0xfU] = (IData)((((0x46U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                            ? vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2
                                            : ((0x70U 
                                                == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                                ? (
                                                   (0U 
                                                    == 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                                >> 1U))))
                                                    ? (QData)((IData)(
                                                                      (0xffffU 
                                                                       & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2))))
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (3U 
                                                      & (IData)(
                                                                (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                                 >> 1U))))
                                                     ? 
                                                    ((QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)))) 
                                                     << 0x10U)
                                                     : 
                                                    ((2U 
                                                      == 
                                                      (3U 
                                                       & (IData)(
                                                                 (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                                  >> 1U))))
                                                      ? 
                                                     ((QData)((IData)(
                                                                      (0xffffU 
                                                                       & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)))) 
                                                      << 0x20U)
                                                      : 
                                                     ((3U 
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
                                                : (
                                                   (0x74U 
                                                    == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? vlSelf->CoreTop__DOT__MEM__DOT___wdata_temp_T_21
                                                    : 
                                                   ((0x77U 
                                                     == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                                 >> 2U)))
                                                      ? 
                                                     ((QData)((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)) 
                                                      << 0x20U)
                                                      : (QData)((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)))
                                                     : 0ULL)))) 
                                          >> 0x20U));
    bufp->fullWData(oldp+579,(__Vtemp_h0c9dabf6__0),512);
    bufp->fullCData(oldp+595,(vlSelf->CoreTop__DOT__DCACHE__DOT__waymask),2);
    bufp->fullWData(oldp+596,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_0[0]),512);
    bufp->fullWData(oldp+612,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_0[1]),512);
    bufp->fullWData(oldp+628,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_0[2]),512);
    bufp->fullWData(oldp+644,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_0[3]),512);
    bufp->fullWData(oldp+660,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_0[4]),512);
    bufp->fullWData(oldp+676,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_0[5]),512);
    bufp->fullWData(oldp+692,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_0[6]),512);
    bufp->fullWData(oldp+708,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_0[7]),512);
    bufp->fullWData(oldp+724,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_0[8]),512);
    bufp->fullWData(oldp+740,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_0[9]),512);
    bufp->fullWData(oldp+756,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_0[10]),512);
    bufp->fullWData(oldp+772,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_0[11]),512);
    bufp->fullWData(oldp+788,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_0[12]),512);
    bufp->fullWData(oldp+804,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_0[13]),512);
    bufp->fullWData(oldp+820,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_0[14]),512);
    bufp->fullWData(oldp+836,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_0[15]),512);
    bufp->fullWData(oldp+852,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_0[16]),512);
    bufp->fullWData(oldp+868,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_0[17]),512);
    bufp->fullWData(oldp+884,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_0[18]),512);
    bufp->fullWData(oldp+900,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_0[19]),512);
    bufp->fullWData(oldp+916,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_0[20]),512);
    bufp->fullWData(oldp+932,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_0[21]),512);
    bufp->fullWData(oldp+948,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_0[22]),512);
    bufp->fullWData(oldp+964,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_0[23]),512);
    bufp->fullWData(oldp+980,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_0[24]),512);
    bufp->fullWData(oldp+996,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_0[25]),512);
    bufp->fullWData(oldp+1012,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_0[26]),512);
    bufp->fullWData(oldp+1028,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_0[27]),512);
    bufp->fullWData(oldp+1044,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_0[28]),512);
    bufp->fullWData(oldp+1060,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_0[29]),512);
    bufp->fullWData(oldp+1076,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_0[30]),512);
    bufp->fullWData(oldp+1092,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_0[31]),512);
    bufp->fullBit(oldp+1108,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_en_pipe_0));
    bufp->fullCData(oldp+1109,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0),5);
    bufp->fullCData(oldp+1110,((0x1fU & (IData)((vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data_io_write_bus_addr 
                                                 >> 6U)))),5);
    bufp->fullBit(oldp+1111,((1U & (IData)(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data_io_write_bus_waymask))));
    bufp->fullWData(oldp+1112,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_1[0]),512);
    bufp->fullWData(oldp+1128,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_1[1]),512);
    bufp->fullWData(oldp+1144,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_1[2]),512);
    bufp->fullWData(oldp+1160,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_1[3]),512);
    bufp->fullWData(oldp+1176,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_1[4]),512);
    bufp->fullWData(oldp+1192,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_1[5]),512);
    bufp->fullWData(oldp+1208,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_1[6]),512);
    bufp->fullWData(oldp+1224,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_1[7]),512);
    bufp->fullWData(oldp+1240,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_1[8]),512);
    bufp->fullWData(oldp+1256,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_1[9]),512);
    bufp->fullWData(oldp+1272,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_1[10]),512);
    bufp->fullWData(oldp+1288,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_1[11]),512);
    bufp->fullWData(oldp+1304,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_1[12]),512);
    bufp->fullWData(oldp+1320,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_1[13]),512);
    bufp->fullWData(oldp+1336,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_1[14]),512);
    bufp->fullWData(oldp+1352,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_1[15]),512);
    bufp->fullWData(oldp+1368,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_1[16]),512);
    bufp->fullWData(oldp+1384,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_1[17]),512);
    bufp->fullWData(oldp+1400,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_1[18]),512);
    bufp->fullWData(oldp+1416,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_1[19]),512);
    bufp->fullWData(oldp+1432,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_1[20]),512);
    bufp->fullWData(oldp+1448,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_1[21]),512);
    bufp->fullWData(oldp+1464,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_1[22]),512);
    bufp->fullWData(oldp+1480,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_1[23]),512);
    bufp->fullWData(oldp+1496,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_1[24]),512);
    bufp->fullWData(oldp+1512,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_1[25]),512);
    bufp->fullWData(oldp+1528,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_1[26]),512);
    bufp->fullWData(oldp+1544,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_1[27]),512);
    bufp->fullWData(oldp+1560,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_1[28]),512);
    bufp->fullWData(oldp+1576,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_1[29]),512);
    bufp->fullWData(oldp+1592,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_1[30]),512);
    bufp->fullWData(oldp+1608,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_1[31]),512);
    bufp->fullBit(oldp+1624,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_en_pipe_0));
    bufp->fullCData(oldp+1625,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0),5);
    bufp->fullBit(oldp+1626,((1U & ((IData)(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data_io_write_bus_waymask) 
                                    >> 1U))));
    bufp->fullQData(oldp+1627,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[0]),53);
    bufp->fullQData(oldp+1629,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[1]),53);
    bufp->fullQData(oldp+1631,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[2]),53);
    bufp->fullQData(oldp+1633,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[3]),53);
    bufp->fullQData(oldp+1635,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[4]),53);
    bufp->fullQData(oldp+1637,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[5]),53);
    bufp->fullQData(oldp+1639,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[6]),53);
    bufp->fullQData(oldp+1641,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[7]),53);
    bufp->fullQData(oldp+1643,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[8]),53);
    bufp->fullQData(oldp+1645,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[9]),53);
    bufp->fullQData(oldp+1647,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[10]),53);
    bufp->fullQData(oldp+1649,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[11]),53);
    bufp->fullQData(oldp+1651,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[12]),53);
    bufp->fullQData(oldp+1653,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[13]),53);
    bufp->fullQData(oldp+1655,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[14]),53);
    bufp->fullQData(oldp+1657,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[15]),53);
    bufp->fullQData(oldp+1659,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[16]),53);
    bufp->fullQData(oldp+1661,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[17]),53);
    bufp->fullQData(oldp+1663,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[18]),53);
    bufp->fullQData(oldp+1665,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[19]),53);
    bufp->fullQData(oldp+1667,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[20]),53);
    bufp->fullQData(oldp+1669,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[21]),53);
    bufp->fullQData(oldp+1671,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[22]),53);
    bufp->fullQData(oldp+1673,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[23]),53);
    bufp->fullQData(oldp+1675,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[24]),53);
    bufp->fullQData(oldp+1677,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[25]),53);
    bufp->fullQData(oldp+1679,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[26]),53);
    bufp->fullQData(oldp+1681,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[27]),53);
    bufp->fullQData(oldp+1683,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[28]),53);
    bufp->fullQData(oldp+1685,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[29]),53);
    bufp->fullQData(oldp+1687,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[30]),53);
    bufp->fullQData(oldp+1689,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[31]),53);
    bufp->fullBit(oldp+1691,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_tag_w_en_pipe_0));
    bufp->fullCData(oldp+1692,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_tag_w_addr_pipe_0),5);
    bufp->fullQData(oldp+1693,((vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data_io_write_bus_addr 
                                >> 0xbU)),53);
    bufp->fullQData(oldp+1695,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[0]),53);
    bufp->fullQData(oldp+1697,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[1]),53);
    bufp->fullQData(oldp+1699,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[2]),53);
    bufp->fullQData(oldp+1701,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[3]),53);
    bufp->fullQData(oldp+1703,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[4]),53);
    bufp->fullQData(oldp+1705,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[5]),53);
    bufp->fullQData(oldp+1707,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[6]),53);
    bufp->fullQData(oldp+1709,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[7]),53);
    bufp->fullQData(oldp+1711,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[8]),53);
    bufp->fullQData(oldp+1713,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[9]),53);
    bufp->fullQData(oldp+1715,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[10]),53);
    bufp->fullQData(oldp+1717,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[11]),53);
    bufp->fullQData(oldp+1719,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[12]),53);
    bufp->fullQData(oldp+1721,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[13]),53);
    bufp->fullQData(oldp+1723,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[14]),53);
    bufp->fullQData(oldp+1725,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[15]),53);
    bufp->fullQData(oldp+1727,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[16]),53);
    bufp->fullQData(oldp+1729,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[17]),53);
    bufp->fullQData(oldp+1731,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[18]),53);
    bufp->fullQData(oldp+1733,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[19]),53);
    bufp->fullQData(oldp+1735,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[20]),53);
    bufp->fullQData(oldp+1737,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[21]),53);
    bufp->fullQData(oldp+1739,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[22]),53);
    bufp->fullQData(oldp+1741,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[23]),53);
    bufp->fullQData(oldp+1743,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[24]),53);
    bufp->fullQData(oldp+1745,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[25]),53);
    bufp->fullQData(oldp+1747,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[26]),53);
    bufp->fullQData(oldp+1749,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[27]),53);
    bufp->fullQData(oldp+1751,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[28]),53);
    bufp->fullQData(oldp+1753,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[29]),53);
    bufp->fullQData(oldp+1755,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[30]),53);
    bufp->fullQData(oldp+1757,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[31]),53);
    bufp->fullBit(oldp+1759,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1_tag_w_en_pipe_0));
    bufp->fullCData(oldp+1760,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0),5);
    bufp->fullBit(oldp+1761,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[0]));
    bufp->fullBit(oldp+1762,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[1]));
    bufp->fullBit(oldp+1763,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[2]));
    bufp->fullBit(oldp+1764,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[3]));
    bufp->fullBit(oldp+1765,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[4]));
    bufp->fullBit(oldp+1766,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[5]));
    bufp->fullBit(oldp+1767,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[6]));
    bufp->fullBit(oldp+1768,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[7]));
    bufp->fullBit(oldp+1769,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[8]));
    bufp->fullBit(oldp+1770,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[9]));
    bufp->fullBit(oldp+1771,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[10]));
    bufp->fullBit(oldp+1772,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[11]));
    bufp->fullBit(oldp+1773,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[12]));
    bufp->fullBit(oldp+1774,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[13]));
    bufp->fullBit(oldp+1775,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[14]));
    bufp->fullBit(oldp+1776,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[15]));
    bufp->fullBit(oldp+1777,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[16]));
    bufp->fullBit(oldp+1778,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[17]));
    bufp->fullBit(oldp+1779,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[18]));
    bufp->fullBit(oldp+1780,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[19]));
    bufp->fullBit(oldp+1781,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[20]));
    bufp->fullBit(oldp+1782,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[21]));
    bufp->fullBit(oldp+1783,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[22]));
    bufp->fullBit(oldp+1784,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[23]));
    bufp->fullBit(oldp+1785,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[24]));
    bufp->fullBit(oldp+1786,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[25]));
    bufp->fullBit(oldp+1787,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[26]));
    bufp->fullBit(oldp+1788,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[27]));
    bufp->fullBit(oldp+1789,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[28]));
    bufp->fullBit(oldp+1790,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[29]));
    bufp->fullBit(oldp+1791,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[30]));
    bufp->fullBit(oldp+1792,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[31]));
    bufp->fullBit(oldp+1793,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_en_pipe_0));
    bufp->fullCData(oldp+1794,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0),5);
    bufp->fullBit(oldp+1795,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[0]));
    bufp->fullBit(oldp+1796,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[1]));
    bufp->fullBit(oldp+1797,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[2]));
    bufp->fullBit(oldp+1798,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[3]));
    bufp->fullBit(oldp+1799,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[4]));
    bufp->fullBit(oldp+1800,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[5]));
    bufp->fullBit(oldp+1801,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[6]));
    bufp->fullBit(oldp+1802,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[7]));
    bufp->fullBit(oldp+1803,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[8]));
    bufp->fullBit(oldp+1804,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[9]));
    bufp->fullBit(oldp+1805,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[10]));
    bufp->fullBit(oldp+1806,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[11]));
    bufp->fullBit(oldp+1807,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[12]));
    bufp->fullBit(oldp+1808,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[13]));
    bufp->fullBit(oldp+1809,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[14]));
    bufp->fullBit(oldp+1810,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[15]));
    bufp->fullBit(oldp+1811,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[16]));
    bufp->fullBit(oldp+1812,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[17]));
    bufp->fullBit(oldp+1813,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[18]));
    bufp->fullBit(oldp+1814,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[19]));
    bufp->fullBit(oldp+1815,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[20]));
    bufp->fullBit(oldp+1816,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[21]));
    bufp->fullBit(oldp+1817,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[22]));
    bufp->fullBit(oldp+1818,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[23]));
    bufp->fullBit(oldp+1819,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[24]));
    bufp->fullBit(oldp+1820,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[25]));
    bufp->fullBit(oldp+1821,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[26]));
    bufp->fullBit(oldp+1822,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[27]));
    bufp->fullBit(oldp+1823,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[28]));
    bufp->fullBit(oldp+1824,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[29]));
    bufp->fullBit(oldp+1825,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[30]));
    bufp->fullBit(oldp+1826,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[31]));
    bufp->fullBit(oldp+1827,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_en_pipe_0));
    bufp->fullCData(oldp+1828,(vlSelf->CoreTop__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_addr_pipe_0),5);
    bufp->fullQData(oldp+1829,(vlSelf->CoreTop__DOT__DIP__DOT__rf[0]),64);
    bufp->fullQData(oldp+1831,(vlSelf->CoreTop__DOT__DIP__DOT__rf[1]),64);
    bufp->fullQData(oldp+1833,(vlSelf->CoreTop__DOT__DIP__DOT__rf[2]),64);
    bufp->fullQData(oldp+1835,(vlSelf->CoreTop__DOT__DIP__DOT__rf[3]),64);
    bufp->fullQData(oldp+1837,(vlSelf->CoreTop__DOT__DIP__DOT__rf[4]),64);
    bufp->fullQData(oldp+1839,(vlSelf->CoreTop__DOT__DIP__DOT__rf[5]),64);
    bufp->fullQData(oldp+1841,(vlSelf->CoreTop__DOT__DIP__DOT__rf[6]),64);
    bufp->fullQData(oldp+1843,(vlSelf->CoreTop__DOT__DIP__DOT__rf[7]),64);
    bufp->fullQData(oldp+1845,(vlSelf->CoreTop__DOT__DIP__DOT__rf[8]),64);
    bufp->fullQData(oldp+1847,(vlSelf->CoreTop__DOT__DIP__DOT__rf[9]),64);
    bufp->fullQData(oldp+1849,(vlSelf->CoreTop__DOT__DIP__DOT__rf[10]),64);
    bufp->fullQData(oldp+1851,(vlSelf->CoreTop__DOT__DIP__DOT__rf[11]),64);
    bufp->fullQData(oldp+1853,(vlSelf->CoreTop__DOT__DIP__DOT__rf[12]),64);
    bufp->fullQData(oldp+1855,(vlSelf->CoreTop__DOT__DIP__DOT__rf[13]),64);
    bufp->fullQData(oldp+1857,(vlSelf->CoreTop__DOT__DIP__DOT__rf[14]),64);
    bufp->fullQData(oldp+1859,(vlSelf->CoreTop__DOT__DIP__DOT__rf[15]),64);
    bufp->fullQData(oldp+1861,(vlSelf->CoreTop__DOT__DIP__DOT__rf[16]),64);
    bufp->fullQData(oldp+1863,(vlSelf->CoreTop__DOT__DIP__DOT__rf[17]),64);
    bufp->fullQData(oldp+1865,(vlSelf->CoreTop__DOT__DIP__DOT__rf[18]),64);
    bufp->fullQData(oldp+1867,(vlSelf->CoreTop__DOT__DIP__DOT__rf[19]),64);
    bufp->fullQData(oldp+1869,(vlSelf->CoreTop__DOT__DIP__DOT__rf[20]),64);
    bufp->fullQData(oldp+1871,(vlSelf->CoreTop__DOT__DIP__DOT__rf[21]),64);
    bufp->fullQData(oldp+1873,(vlSelf->CoreTop__DOT__DIP__DOT__rf[22]),64);
    bufp->fullQData(oldp+1875,(vlSelf->CoreTop__DOT__DIP__DOT__rf[23]),64);
    bufp->fullQData(oldp+1877,(vlSelf->CoreTop__DOT__DIP__DOT__rf[24]),64);
    bufp->fullQData(oldp+1879,(vlSelf->CoreTop__DOT__DIP__DOT__rf[25]),64);
    bufp->fullQData(oldp+1881,(vlSelf->CoreTop__DOT__DIP__DOT__rf[26]),64);
    bufp->fullQData(oldp+1883,(vlSelf->CoreTop__DOT__DIP__DOT__rf[27]),64);
    bufp->fullQData(oldp+1885,(vlSelf->CoreTop__DOT__DIP__DOT__rf[28]),64);
    bufp->fullQData(oldp+1887,(vlSelf->CoreTop__DOT__DIP__DOT__rf[29]),64);
    bufp->fullQData(oldp+1889,(vlSelf->CoreTop__DOT__DIP__DOT__rf[30]),64);
    bufp->fullQData(oldp+1891,(vlSelf->CoreTop__DOT__DIP__DOT__rf[31]),64);
    bufp->fullIData(oldp+1893,(vlSelf->CoreTop__DOT__DIP__DOT__IN[0]),32);
    bufp->fullIData(oldp+1894,(vlSelf->CoreTop__DOT__DIP__DOT__IN[1]),32);
    bufp->fullIData(oldp+1895,(vlSelf->CoreTop__DOT__DIP__DOT__IN[2]),32);
    bufp->fullIData(oldp+1896,(vlSelf->CoreTop__DOT__DIP__DOT__IN[3]),32);
    bufp->fullIData(oldp+1897,(vlSelf->CoreTop__DOT__DIP__DOT__IN[4]),32);
    bufp->fullIData(oldp+1898,(vlSelf->CoreTop__DOT__DIP__DOT__IN[5]),32);
    bufp->fullIData(oldp+1899,(vlSelf->CoreTop__DOT__DIP__DOT__IN[6]),32);
    bufp->fullQData(oldp+1900,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mepc_REG_1),64);
    bufp->fullQData(oldp+1902,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mcause_REG_1),64);
    bufp->fullQData(oldp+1904,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mstatus_REG_1),64);
    bufp->fullQData(oldp+1906,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mtvec_REG_1),64);
    bufp->fullBit(oldp+1908,(vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_valid));
    bufp->fullQData(oldp+1909,(((IData)(vlSelf->CoreTop__DOT__EX__DOT__is_mul)
                                 ? vlSelf->CoreTop__DOT__EX__DOT__src1
                                 : (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__src1)))),64);
    bufp->fullQData(oldp+1911,(((IData)(vlSelf->CoreTop__DOT__EX__DOT__is_mul)
                                 ? vlSelf->CoreTop__DOT__EX__DOT__src2
                                 : (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)))),64);
    bufp->fullBit(oldp+1913,((0x44U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count))));
    bufp->fullQData(oldp+1914,((((QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[0U])))),64);
    bufp->fullBit(oldp+1916,(((IData)(vlSelf->CoreTop__DOT__EX__DOT__is_div) 
                              & (2U != (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state)))));
    bufp->fullBit(oldp+1917,(vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_flow_div_signed));
    bufp->fullQData(oldp+1918,(vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src1),64);
    bufp->fullQData(oldp+1920,(vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src2),64);
    bufp->fullBit(oldp+1922,((2U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state))));
    bufp->fullQData(oldp+1923,(vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_quotient),64);
    bufp->fullQData(oldp+1925,(vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_remainder),64);
    bufp->fullBit(oldp+1927,(vlSelf->CoreTop__DOT__EX__DOT__is_mul));
    bufp->fullBit(oldp+1928,(vlSelf->CoreTop__DOT__EX__DOT__is_div));
    bufp->fullBit(oldp+1929,(vlSelf->CoreTop__DOT__EX__DOT__is_divw));
    bufp->fullQData(oldp+1930,(vlSelf->CoreTop__DOT__EX__DOT__mepc),64);
    bufp->fullQData(oldp+1932,(vlSelf->CoreTop__DOT__EX__DOT__mcause),64);
    bufp->fullQData(oldp+1934,(vlSelf->CoreTop__DOT__EX__DOT__mstatus),64);
    bufp->fullQData(oldp+1936,(vlSelf->CoreTop__DOT__EX__DOT__mtvec),64);
    bufp->fullQData(oldp+1938,(vlSelf->CoreTop__DOT__EX__DOT__mie),64);
    bufp->fullQData(oldp+1940,(vlSelf->CoreTop__DOT__EX__DOT__mip),64);
    bufp->fullQData(oldp+1942,(vlSelf->CoreTop__DOT__EX__DOT__src1),64);
    bufp->fullQData(oldp+1944,(vlSelf->CoreTop__DOT__EX__DOT__src2),64);
    bufp->fullBit(oldp+1946,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1 
                                            >> 0x1fU)))));
    bufp->fullBit(oldp+1947,((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[0U] 
                              >> 0x1fU)));
    bufp->fullBit(oldp+1948,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_quotient 
                                            >> 0x1fU)))));
    bufp->fullBit(oldp+1949,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_remainder 
                                            >> 0x1fU)))));
    bufp->fullBit(oldp+1950,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_10 
                                            >> 0x1fU)))));
    bufp->fullQData(oldp+1951,(((0x40U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
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
    bufp->fullBit(oldp+1953,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_5[0U] 
                              >> 0x1fU)));
    bufp->fullBit(oldp+1954,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_16[0U] 
                              >> 0x1fU)));
    bufp->fullBit(oldp+1955,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_25 
                              >> 0x1fU)));
    bufp->fullBit(oldp+1956,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_31 
                              >> 0x1fU)));
    bufp->fullBit(oldp+1957,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__src1 
                                            >> 0x1fU)))));
    bufp->fullBit(oldp+1958,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__src2 
                                            >> 0x1fU)))));
    bufp->fullQData(oldp+1959,(((0x6aU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                 ? ((vlSelf->CoreTop__DOT__EX__DOT__src1 
                                     < vlSelf->CoreTop__DOT__EX__DOT__src2)
                                     ? 1ULL : 0ULL)
                                 : ((2U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                     ? (VL_LTS_IQQ(64, vlSelf->CoreTop__DOT__EX__DOT__src1, vlSelf->CoreTop__DOT__EX__DOT__src2)
                                         ? 1ULL : 0ULL)
                                     : 0ULL))),64);
    bufp->fullQData(oldp+1961,(((3U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType))
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
    bufp->fullQData(oldp+1963,((((QData)((IData)(((0x6eU 
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
    bufp->fullQData(oldp+1965,(((0x6bU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                 ? vlSelf->CoreTop__DOT__EX__DOT___branch_result_T_1
                                 : ((0x6cU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                     ? vlSelf->CoreTop__DOT__EX__DOT___branch_result_T_1
                                     : ((0x76U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                         ? vlSelf->CoreTop__DOT__EX__DOT___branch_result_T_1
                                         : ((0x7bU 
                                             == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                             ? vlSelf->CoreTop__DOT__EX__DOT___branch_result_T_1
                                             : ((0xbU 
                                                 == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                 ? vlSelf->CoreTop__DOT__EX__DOT___branch_result_T_1
                                                 : 
                                                ((0xcU 
                                                  == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                  ? vlSelf->CoreTop__DOT__EX__DOT___branch_result_T_1
                                                  : 0ULL))))))),64);
    bufp->fullBit(oldp+1967,(vlSelf->CoreTop__DOT__EX__DOT__branch_flag));
    bufp->fullQData(oldp+1968,(vlSelf->CoreTop__DOT__EX__DOT__csr_data),64);
    bufp->fullQData(oldp+1970,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mtvec_REG),64);
    bufp->fullQData(oldp+1972,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mcause_REG),64);
    bufp->fullQData(oldp+1974,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mepc_REG),64);
    bufp->fullQData(oldp+1976,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mstatus_REG),64);
    bufp->fullQData(oldp+1978,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[0]),64);
    bufp->fullQData(oldp+1980,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[1]),64);
    bufp->fullQData(oldp+1982,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[2]),64);
    bufp->fullQData(oldp+1984,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[3]),64);
    bufp->fullQData(oldp+1986,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[4]),64);
    bufp->fullQData(oldp+1988,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[5]),64);
    bufp->fullWData(oldp+1990,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend),128);
    bufp->fullQData(oldp+1994,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divisor),64);
    bufp->fullQData(oldp+1996,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S),64);
    bufp->fullCData(oldp+1998,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state),2);
    bufp->fullCData(oldp+1999,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__count),6);
    bufp->fullBit(oldp+2000,((0x3fU == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__count))));
    bufp->fullBit(oldp+2001,(((1U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state)) 
                              & (0x3fU == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__count)))));
    bufp->fullWData(oldp+2002,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div),65);
    bufp->fullQData(oldp+2005,((- vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S)),64);
    bufp->fullQData(oldp+2007,((- (((QData)((IData)(
                                                    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[2U]))))),64);
    bufp->fullQData(oldp+2009,((((((0U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
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
    bufp->fullQData(oldp+2011,((((((0U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
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
    bufp->fullCData(oldp+2013,((7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U])),3);
    bufp->fullWData(oldp+2014,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand),132);
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
    bufp->fullWData(oldp+2019,(__Vtemp_h791e8ef8__0),132);
    bufp->fullBit(oldp+2024,(((0U != (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U])) 
                              & ((1U != (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U])) 
                                 & ((2U != (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U])) 
                                    & ((3U != (7U & 
                                               vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U])) 
                                       & ((4U == (7U 
                                                  & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U])) 
                                          | ((5U == 
                                              (7U & 
                                               vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U])) 
                                             | (6U 
                                                == 
                                                (7U 
                                                 & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))))))))));
    bufp->fullWData(oldp+2025,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier),66);
    bufp->fullWData(oldp+2028,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p),132);
    bufp->fullCData(oldp+2033,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count),7);
    bufp->fullWData(oldp+2034,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__temp),132);
    bufp->fullBit(oldp+2039,((1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__temp[4U] 
                                    >> 3U))));
    bufp->fullBit(oldp+2040,(((IData)(vlSelf->CoreTop__DOT__EX_io_in_ready) 
                              & (0U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)))));
    bufp->fullQData(oldp+2041,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data_io_write_bus_addr),64);
    bufp->fullBit(oldp+2043,((8U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__count))));
    bufp->fullCData(oldp+2044,(((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r)
                                 ? 2U : 1U)),2);
    bufp->fullWData(oldp+2045,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data_io_write_bus_wdata),512);
    bufp->fullQData(oldp+2061,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_tag_w_data),53);
    bufp->fullQData(oldp+2063,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_data),53);
    bufp->fullBit(oldp+2065,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0
                             [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0]));
    bufp->fullBit(oldp+2066,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1
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
    bufp->fullWData(oldp+2067,(__Vtemp_hf989eec7__0),512);
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
    bufp->fullWData(oldp+2083,(__Vtemp_h4453b49e__0),512);
    bufp->fullQData(oldp+2099,((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                >> 0xbU)),53);
    bufp->fullCData(oldp+2101,((0x1fU & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                 >> 6U)))),5);
    bufp->fullCData(oldp+2102,((0x3fU & (IData)(vlSelf->CoreTop__DOT__IF__DOT__temp))),6);
    bufp->fullBit(oldp+2103,(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_in_valid_REG));
    bufp->fullBit(oldp+2104,(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit));
    bufp->fullWData(oldp+2105,(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data),512);
    bufp->fullBit(oldp+2121,(((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT___hit_way_0_T) 
                              & ((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                  >> 0xbU) == vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_tag_w_data))));
    bufp->fullBit(oldp+2122,(((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT___hit_way_1_T) 
                              & ((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                  >> 0xbU) == vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_data))));
    bufp->fullBit(oldp+2123,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[0]));
    bufp->fullBit(oldp+2124,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[1]));
    bufp->fullBit(oldp+2125,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[2]));
    bufp->fullBit(oldp+2126,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[3]));
    bufp->fullBit(oldp+2127,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[4]));
    bufp->fullBit(oldp+2128,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[5]));
    bufp->fullBit(oldp+2129,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[6]));
    bufp->fullBit(oldp+2130,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[7]));
    bufp->fullBit(oldp+2131,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[8]));
    bufp->fullBit(oldp+2132,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[9]));
    bufp->fullBit(oldp+2133,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[10]));
    bufp->fullBit(oldp+2134,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[11]));
    bufp->fullBit(oldp+2135,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[12]));
    bufp->fullBit(oldp+2136,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[13]));
    bufp->fullBit(oldp+2137,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[14]));
    bufp->fullBit(oldp+2138,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[15]));
    bufp->fullBit(oldp+2139,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[16]));
    bufp->fullBit(oldp+2140,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[17]));
    bufp->fullBit(oldp+2141,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[18]));
    bufp->fullBit(oldp+2142,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[19]));
    bufp->fullBit(oldp+2143,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[20]));
    bufp->fullBit(oldp+2144,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[21]));
    bufp->fullBit(oldp+2145,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[22]));
    bufp->fullBit(oldp+2146,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[23]));
    bufp->fullBit(oldp+2147,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[24]));
    bufp->fullBit(oldp+2148,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[25]));
    bufp->fullBit(oldp+2149,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[26]));
    bufp->fullBit(oldp+2150,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[27]));
    bufp->fullBit(oldp+2151,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[28]));
    bufp->fullBit(oldp+2152,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[29]));
    bufp->fullBit(oldp+2153,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[30]));
    bufp->fullBit(oldp+2154,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[31]));
    bufp->fullBit(oldp+2155,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_lru_w_MPORT_en_pipe_0));
    bufp->fullCData(oldp+2156,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_lru_w_MPORT_addr_pipe_0),5);
    bufp->fullBit(oldp+2157,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru
                             [vlSelf->CoreTop__DOT__ICACHE__DOT__lru_lru_w_MPORT_addr_pipe_0]));
    bufp->fullBit(oldp+2158,(((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                              & ((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                 & ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit) 
                                    & ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT___hit_way_0_T) 
                                       & ((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                           >> 0xbU) 
                                          == vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_tag_w_data)))))));
    bufp->fullBit(oldp+2159,(((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                              & ((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                 & ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit) 
                                    & ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT___hit_way_1_T) 
                                       & ((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                           >> 0xbU) 
                                          == vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_data)))))));
    bufp->fullBit(oldp+2160,(((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                              & ((1U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                 & ((2U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                    & (((IData)(vlSelf->CoreTop__DOT__EX_io_in_ready) 
                                        & (8U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__count))) 
                                       & (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r)))))));
    bufp->fullBit(oldp+2161,(((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                              & ((1U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                 & ((2U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                    & (((IData)(vlSelf->CoreTop__DOT__EX_io_in_ready) 
                                        & (8U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__count))) 
                                       & (~ (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r))))))));
    bufp->fullCData(oldp+2162,(vlSelf->CoreTop__DOT__ICACHE__DOT__state),2);
    bufp->fullWData(oldp+2163,(vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg),512);
    bufp->fullBit(oldp+2179,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r));
    bufp->fullCData(oldp+2180,(vlSelf->CoreTop__DOT__ICACHE__DOT__count),4);
    bufp->fullQData(oldp+2181,(vlSelf->CoreTop__DOT__ICACHE__DOT__hit_data),64);
    bufp->fullQData(oldp+2183,(vlSelf->CoreTop__DOT__ICACHE__DOT__mem_data),64);
    bufp->fullWData(oldp+2185,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[0]),512);
    bufp->fullWData(oldp+2201,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[1]),512);
    bufp->fullWData(oldp+2217,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[2]),512);
    bufp->fullWData(oldp+2233,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[3]),512);
    bufp->fullWData(oldp+2249,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[4]),512);
    bufp->fullWData(oldp+2265,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[5]),512);
    bufp->fullWData(oldp+2281,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[6]),512);
    bufp->fullWData(oldp+2297,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[7]),512);
    bufp->fullWData(oldp+2313,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[8]),512);
    bufp->fullWData(oldp+2329,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[9]),512);
    bufp->fullWData(oldp+2345,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[10]),512);
    bufp->fullWData(oldp+2361,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[11]),512);
    bufp->fullWData(oldp+2377,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[12]),512);
    bufp->fullWData(oldp+2393,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[13]),512);
    bufp->fullWData(oldp+2409,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[14]),512);
    bufp->fullWData(oldp+2425,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[15]),512);
    bufp->fullWData(oldp+2441,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[16]),512);
    bufp->fullWData(oldp+2457,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[17]),512);
    bufp->fullWData(oldp+2473,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[18]),512);
    bufp->fullWData(oldp+2489,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[19]),512);
    bufp->fullWData(oldp+2505,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[20]),512);
    bufp->fullWData(oldp+2521,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[21]),512);
    bufp->fullWData(oldp+2537,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[22]),512);
    bufp->fullWData(oldp+2553,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[23]),512);
    bufp->fullWData(oldp+2569,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[24]),512);
    bufp->fullWData(oldp+2585,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[25]),512);
    bufp->fullWData(oldp+2601,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[26]),512);
    bufp->fullWData(oldp+2617,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[27]),512);
    bufp->fullWData(oldp+2633,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[28]),512);
    bufp->fullWData(oldp+2649,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[29]),512);
    bufp->fullWData(oldp+2665,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[30]),512);
    bufp->fullWData(oldp+2681,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[31]),512);
    bufp->fullBit(oldp+2697,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_en_pipe_0));
    bufp->fullCData(oldp+2698,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0),5);
    bufp->fullCData(oldp+2699,((0x1fU & (IData)((vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data_io_write_bus_addr 
                                                 >> 6U)))),5);
    bufp->fullBit(oldp+2700,(((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r)
                               ? 0U : 1U)));
    bufp->fullWData(oldp+2701,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[0]),512);
    bufp->fullWData(oldp+2717,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[1]),512);
    bufp->fullWData(oldp+2733,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[2]),512);
    bufp->fullWData(oldp+2749,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[3]),512);
    bufp->fullWData(oldp+2765,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[4]),512);
    bufp->fullWData(oldp+2781,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[5]),512);
    bufp->fullWData(oldp+2797,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[6]),512);
    bufp->fullWData(oldp+2813,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[7]),512);
    bufp->fullWData(oldp+2829,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[8]),512);
    bufp->fullWData(oldp+2845,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[9]),512);
    bufp->fullWData(oldp+2861,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[10]),512);
    bufp->fullWData(oldp+2877,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[11]),512);
    bufp->fullWData(oldp+2893,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[12]),512);
    bufp->fullWData(oldp+2909,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[13]),512);
    bufp->fullWData(oldp+2925,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[14]),512);
    bufp->fullWData(oldp+2941,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[15]),512);
    bufp->fullWData(oldp+2957,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[16]),512);
    bufp->fullWData(oldp+2973,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[17]),512);
    bufp->fullWData(oldp+2989,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[18]),512);
    bufp->fullWData(oldp+3005,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[19]),512);
    bufp->fullWData(oldp+3021,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[20]),512);
    bufp->fullWData(oldp+3037,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[21]),512);
    bufp->fullWData(oldp+3053,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[22]),512);
    bufp->fullWData(oldp+3069,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[23]),512);
    bufp->fullWData(oldp+3085,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[24]),512);
    bufp->fullWData(oldp+3101,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[25]),512);
    bufp->fullWData(oldp+3117,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[26]),512);
    bufp->fullWData(oldp+3133,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[27]),512);
    bufp->fullWData(oldp+3149,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[28]),512);
    bufp->fullWData(oldp+3165,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[29]),512);
    bufp->fullWData(oldp+3181,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[30]),512);
    bufp->fullWData(oldp+3197,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[31]),512);
    bufp->fullBit(oldp+3213,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_en_pipe_0));
    bufp->fullBit(oldp+3214,((1U & (((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r)
                                      ? 2U : 1U) >> 1U))));
    bufp->fullQData(oldp+3215,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[0]),53);
    bufp->fullQData(oldp+3217,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[1]),53);
    bufp->fullQData(oldp+3219,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[2]),53);
    bufp->fullQData(oldp+3221,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[3]),53);
    bufp->fullQData(oldp+3223,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[4]),53);
    bufp->fullQData(oldp+3225,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[5]),53);
    bufp->fullQData(oldp+3227,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[6]),53);
    bufp->fullQData(oldp+3229,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[7]),53);
    bufp->fullQData(oldp+3231,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[8]),53);
    bufp->fullQData(oldp+3233,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[9]),53);
    bufp->fullQData(oldp+3235,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[10]),53);
    bufp->fullQData(oldp+3237,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[11]),53);
    bufp->fullQData(oldp+3239,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[12]),53);
    bufp->fullQData(oldp+3241,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[13]),53);
    bufp->fullQData(oldp+3243,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[14]),53);
    bufp->fullQData(oldp+3245,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[15]),53);
    bufp->fullQData(oldp+3247,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[16]),53);
    bufp->fullQData(oldp+3249,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[17]),53);
    bufp->fullQData(oldp+3251,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[18]),53);
    bufp->fullQData(oldp+3253,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[19]),53);
    bufp->fullQData(oldp+3255,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[20]),53);
    bufp->fullQData(oldp+3257,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[21]),53);
    bufp->fullQData(oldp+3259,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[22]),53);
    bufp->fullQData(oldp+3261,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[23]),53);
    bufp->fullQData(oldp+3263,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[24]),53);
    bufp->fullQData(oldp+3265,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[25]),53);
    bufp->fullQData(oldp+3267,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[26]),53);
    bufp->fullQData(oldp+3269,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[27]),53);
    bufp->fullQData(oldp+3271,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[28]),53);
    bufp->fullQData(oldp+3273,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[29]),53);
    bufp->fullQData(oldp+3275,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[30]),53);
    bufp->fullQData(oldp+3277,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[31]),53);
    bufp->fullBit(oldp+3279,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_tag_w_en_pipe_0));
    bufp->fullCData(oldp+3280,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_tag_w_addr_pipe_0),5);
    bufp->fullQData(oldp+3281,((vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data_io_write_bus_addr 
                                >> 0xbU)),53);
    bufp->fullQData(oldp+3283,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[0]),53);
    bufp->fullQData(oldp+3285,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[1]),53);
    bufp->fullQData(oldp+3287,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[2]),53);
    bufp->fullQData(oldp+3289,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[3]),53);
    bufp->fullQData(oldp+3291,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[4]),53);
    bufp->fullQData(oldp+3293,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[5]),53);
    bufp->fullQData(oldp+3295,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[6]),53);
    bufp->fullQData(oldp+3297,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[7]),53);
    bufp->fullQData(oldp+3299,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[8]),53);
    bufp->fullQData(oldp+3301,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[9]),53);
    bufp->fullQData(oldp+3303,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[10]),53);
    bufp->fullQData(oldp+3305,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[11]),53);
    bufp->fullQData(oldp+3307,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[12]),53);
    bufp->fullQData(oldp+3309,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[13]),53);
    bufp->fullQData(oldp+3311,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[14]),53);
    bufp->fullQData(oldp+3313,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[15]),53);
    bufp->fullQData(oldp+3315,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[16]),53);
    bufp->fullQData(oldp+3317,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[17]),53);
    bufp->fullQData(oldp+3319,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[18]),53);
    bufp->fullQData(oldp+3321,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[19]),53);
    bufp->fullQData(oldp+3323,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[20]),53);
    bufp->fullQData(oldp+3325,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[21]),53);
    bufp->fullQData(oldp+3327,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[22]),53);
    bufp->fullQData(oldp+3329,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[23]),53);
    bufp->fullQData(oldp+3331,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[24]),53);
    bufp->fullQData(oldp+3333,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[25]),53);
    bufp->fullQData(oldp+3335,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[26]),53);
    bufp->fullQData(oldp+3337,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[27]),53);
    bufp->fullQData(oldp+3339,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[28]),53);
    bufp->fullQData(oldp+3341,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[29]),53);
    bufp->fullQData(oldp+3343,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[30]),53);
    bufp->fullQData(oldp+3345,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[31]),53);
    bufp->fullBit(oldp+3347,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_en_pipe_0));
    bufp->fullCData(oldp+3348,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0),5);
    bufp->fullBit(oldp+3349,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[0]));
    bufp->fullBit(oldp+3350,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[1]));
    bufp->fullBit(oldp+3351,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[2]));
    bufp->fullBit(oldp+3352,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[3]));
    bufp->fullBit(oldp+3353,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[4]));
    bufp->fullBit(oldp+3354,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[5]));
    bufp->fullBit(oldp+3355,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[6]));
    bufp->fullBit(oldp+3356,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[7]));
    bufp->fullBit(oldp+3357,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[8]));
    bufp->fullBit(oldp+3358,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[9]));
    bufp->fullBit(oldp+3359,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[10]));
    bufp->fullBit(oldp+3360,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[11]));
    bufp->fullBit(oldp+3361,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[12]));
    bufp->fullBit(oldp+3362,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[13]));
    bufp->fullBit(oldp+3363,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[14]));
    bufp->fullBit(oldp+3364,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[15]));
    bufp->fullBit(oldp+3365,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[16]));
    bufp->fullBit(oldp+3366,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[17]));
    bufp->fullBit(oldp+3367,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[18]));
    bufp->fullBit(oldp+3368,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[19]));
    bufp->fullBit(oldp+3369,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[20]));
    bufp->fullBit(oldp+3370,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[21]));
    bufp->fullBit(oldp+3371,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[22]));
    bufp->fullBit(oldp+3372,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[23]));
    bufp->fullBit(oldp+3373,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[24]));
    bufp->fullBit(oldp+3374,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[25]));
    bufp->fullBit(oldp+3375,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[26]));
    bufp->fullBit(oldp+3376,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[27]));
    bufp->fullBit(oldp+3377,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[28]));
    bufp->fullBit(oldp+3378,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[29]));
    bufp->fullBit(oldp+3379,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[30]));
    bufp->fullBit(oldp+3380,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[31]));
    bufp->fullBit(oldp+3381,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_en_pipe_0));
    bufp->fullCData(oldp+3382,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0),5);
    bufp->fullBit(oldp+3383,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[0]));
    bufp->fullBit(oldp+3384,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[1]));
    bufp->fullBit(oldp+3385,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[2]));
    bufp->fullBit(oldp+3386,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[3]));
    bufp->fullBit(oldp+3387,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[4]));
    bufp->fullBit(oldp+3388,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[5]));
    bufp->fullBit(oldp+3389,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[6]));
    bufp->fullBit(oldp+3390,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[7]));
    bufp->fullBit(oldp+3391,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[8]));
    bufp->fullBit(oldp+3392,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[9]));
    bufp->fullBit(oldp+3393,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[10]));
    bufp->fullBit(oldp+3394,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[11]));
    bufp->fullBit(oldp+3395,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[12]));
    bufp->fullBit(oldp+3396,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[13]));
    bufp->fullBit(oldp+3397,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[14]));
    bufp->fullBit(oldp+3398,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[15]));
    bufp->fullBit(oldp+3399,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[16]));
    bufp->fullBit(oldp+3400,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[17]));
    bufp->fullBit(oldp+3401,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[18]));
    bufp->fullBit(oldp+3402,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[19]));
    bufp->fullBit(oldp+3403,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[20]));
    bufp->fullBit(oldp+3404,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[21]));
    bufp->fullBit(oldp+3405,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[22]));
    bufp->fullBit(oldp+3406,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[23]));
    bufp->fullBit(oldp+3407,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[24]));
    bufp->fullBit(oldp+3408,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[25]));
    bufp->fullBit(oldp+3409,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[26]));
    bufp->fullBit(oldp+3410,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[27]));
    bufp->fullBit(oldp+3411,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[28]));
    bufp->fullBit(oldp+3412,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[29]));
    bufp->fullBit(oldp+3413,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[30]));
    bufp->fullBit(oldp+3414,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[31]));
    bufp->fullBit(oldp+3415,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_en_pipe_0));
    bufp->fullCData(oldp+3416,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_addr_pipe_0),5);
    bufp->fullBit(oldp+3417,(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_0_result));
    bufp->fullBit(oldp+3418,(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_1_result));
    bufp->fullCData(oldp+3419,(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0),4);
    bufp->fullBit(oldp+3420,(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_3));
    bufp->fullCData(oldp+3421,((((7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                  ? 2U : 0U) | ((3U 
                                                 == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                                 ? 2U
                                                 : 0U))),2);
    bufp->fullBit(oldp+3422,((((8U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)) 
                               | (7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))) 
                              | (3U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)))));
    bufp->fullBit(oldp+3423,((vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                              >> 0x1fU)));
    bufp->fullBit(oldp+3424,((1U & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                    >> 0x13U))));
    bufp->fullBit(oldp+3425,((vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                              >> 0x1fU)));
    bufp->fullIData(oldp+3426,(((1U & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
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
    bufp->fullBit(oldp+3427,((1U & (IData)((vlSelf->CoreTop__DOT__DCACHE_io_in_rdata_rep_bits_rdata 
                                            >> 0x3fU)))));
    bufp->fullBit(oldp+3428,((1U & (IData)((vlSelf->CoreTop__DOT__DCACHE_io_in_rdata_rep_bits_rdata 
                                            >> 0x1fU)))));
    bufp->fullBit(oldp+3429,((1U & ((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_27) 
                                    >> 7U))));
    bufp->fullBit(oldp+3430,((1U & ((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_44) 
                                    >> 0xfU))));
    bufp->fullQData(oldp+3431,(((0x45U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                 ? vlSelf->CoreTop__DOT__DCACHE_io_in_rdata_rep_bits_rdata
                                 : ((0x47U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                     ? ((1U & (IData)(
                                                      (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                       >> 2U)))
                                         ? (((QData)((IData)(
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlSelf->CoreTop__DOT__DCACHE_io_in_rdata_rep_bits_rdata 
                                                                          >> 0x3fU)))
                                                               ? 0xffffffffU
                                                               : 0U))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              (vlSelf->CoreTop__DOT__DCACHE_io_in_rdata_rep_bits_rdata 
                                                               >> 0x20U))))
                                         : (((QData)((IData)(
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlSelf->CoreTop__DOT__DCACHE_io_in_rdata_rep_bits_rdata 
                                                                          >> 0x1fU)))
                                                               ? 0xffffffffU
                                                               : 0U))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->CoreTop__DOT__DCACHE_io_in_rdata_rep_bits_rdata))))
                                     : ((0x11U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                         ? ((1U & (IData)(
                                                          (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                           >> 2U)))
                                             ? (QData)((IData)(
                                                               (vlSelf->CoreTop__DOT__DCACHE_io_in_rdata_rep_bits_rdata 
                                                                >> 0x20U)))
                                             : (QData)((IData)(vlSelf->CoreTop__DOT__DCACHE_io_in_rdata_rep_bits_rdata)))
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
    bufp->fullBit(oldp+3433,(vlSelf->clock));
    bufp->fullBit(oldp+3434,(vlSelf->reset));
    bufp->fullQData(oldp+3435,(vlSelf->io_pc),64);
    bufp->fullIData(oldp+3437,(vlSelf->io_inst),32);
    bufp->fullQData(oldp+3438,(vlSelf->CoreTop__DOT__mem_rdata),64);
    bufp->fullQData(oldp+3440,(vlSelf->CoreTop__DOT__IFMEM_rdata),64);
    bufp->fullBit(oldp+3442,(1U));
    bufp->fullCData(oldp+3443,(0U),5);
    bufp->fullCData(oldp+3444,(1U),5);
    bufp->fullCData(oldp+3445,(2U),5);
    bufp->fullCData(oldp+3446,(3U),5);
    bufp->fullCData(oldp+3447,(4U),5);
    bufp->fullCData(oldp+3448,(5U),5);
    bufp->fullCData(oldp+3449,(6U),5);
    bufp->fullCData(oldp+3450,(7U),5);
    bufp->fullCData(oldp+3451,(8U),5);
    bufp->fullCData(oldp+3452,(9U),5);
    bufp->fullCData(oldp+3453,(0xaU),5);
    bufp->fullCData(oldp+3454,(0xbU),5);
    bufp->fullCData(oldp+3455,(0xcU),5);
    bufp->fullCData(oldp+3456,(0xdU),5);
    bufp->fullCData(oldp+3457,(0xeU),5);
    bufp->fullCData(oldp+3458,(0xfU),5);
    bufp->fullCData(oldp+3459,(0x10U),5);
    bufp->fullCData(oldp+3460,(0x11U),5);
    bufp->fullCData(oldp+3461,(0x12U),5);
    bufp->fullCData(oldp+3462,(0x13U),5);
    bufp->fullCData(oldp+3463,(0x14U),5);
    bufp->fullCData(oldp+3464,(0x15U),5);
    bufp->fullCData(oldp+3465,(0x16U),5);
    bufp->fullCData(oldp+3466,(0x17U),5);
    bufp->fullCData(oldp+3467,(0x18U),5);
    bufp->fullCData(oldp+3468,(0x19U),5);
    bufp->fullCData(oldp+3469,(0x1aU),5);
    bufp->fullCData(oldp+3470,(0x1bU),5);
    bufp->fullCData(oldp+3471,(0x1cU),5);
    bufp->fullCData(oldp+3472,(0x1dU),5);
    bufp->fullCData(oldp+3473,(0x1eU),5);
    bufp->fullCData(oldp+3474,(0x1fU),5);
    bufp->fullCData(oldp+3475,(0xffU),8);
    bufp->fullBit(oldp+3476,(0U));
    bufp->fullQData(oldp+3477,(0ULL),64);
    bufp->fullCData(oldp+3479,(0U),8);
}
