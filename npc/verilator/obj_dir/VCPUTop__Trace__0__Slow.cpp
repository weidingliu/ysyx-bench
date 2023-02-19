// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCPUTop__Syms.h"


VL_ATTR_COLD void VCPUTop___024root__trace_init_sub__TOP__0(VCPUTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCPUTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUTop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+228,"clock", false,-1);
    tracep->declBit(c+229,"reset", false,-1);
    tracep->declQuad(c+230,"io_pc", false,-1, 63,0);
    tracep->declBus(c+232,"io_inst", false,-1, 31,0);
    tracep->declQuad(c+233,"io_result", false,-1, 63,0);
    tracep->pushNamePrefix("CPUTop ");
    tracep->declBit(c+228,"clock", false,-1);
    tracep->declBit(c+229,"reset", false,-1);
    tracep->declQuad(c+230,"io_pc", false,-1, 63,0);
    tracep->declBus(c+232,"io_inst", false,-1, 31,0);
    tracep->declQuad(c+233,"io_result", false,-1, 63,0);
    tracep->declBit(c+228,"IF_clock", false,-1);
    tracep->declBit(c+229,"IF_reset", false,-1);
    tracep->declQuad(c+235,"IF_io_dnpc", false,-1, 63,0);
    tracep->declBit(c+1,"IF_io_is_jump", false,-1);
    tracep->declBit(c+237,"IF_io_is_branch", false,-1);
    tracep->declQuad(c+34,"IF_io_pc", false,-1, 63,0);
    tracep->declBus(c+232,"ID_io_inst", false,-1, 31,0);
    tracep->declBus(c+2,"ID_io_ctrlIO_src1type", false,-1, 2,0);
    tracep->declBus(c+3,"ID_io_ctrlIO_src2type", false,-1, 2,0);
    tracep->declBus(c+238,"ID_io_ctrlIO_src1", false,-1, 4,0);
    tracep->declBus(c+239,"ID_io_ctrlIO_src2", false,-1, 4,0);
    tracep->declBus(c+240,"ID_io_ctrlIO_rd", false,-1, 4,0);
    tracep->declBus(c+4,"ID_io_ctrlIO_futype", false,-1, 2,0);
    tracep->declBus(c+5,"ID_io_ctrlIO_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+6,"ID_io_ctrlIO_Imm", false,-1, 63,0);
    tracep->declBit(c+241,"ID_io_rd_en", false,-1);
    tracep->declBit(c+242,"ID_io_mem_we", false,-1);
    tracep->declBus(c+2,"EX_io_src1type", false,-1, 2,0);
    tracep->declBus(c+3,"EX_io_src2type", false,-1, 2,0);
    tracep->declBus(c+238,"EX_io_src1", false,-1, 4,0);
    tracep->declBus(c+239,"EX_io_src2", false,-1, 4,0);
    tracep->declBus(c+4,"EX_io_futype", false,-1, 2,0);
    tracep->declBus(c+5,"EX_io_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+6,"EX_io_Imm", false,-1, 63,0);
    tracep->declQuad(c+243,"EX_io1_REG1", false,-1, 63,0);
    tracep->declQuad(c+245,"EX_io1_REG2", false,-1, 63,0);
    tracep->declQuad(c+34,"EX_io1_PC", false,-1, 63,0);
    tracep->declQuad(c+8,"EX_io1_result", false,-1, 63,0);
    tracep->declBit(c+10,"EX_io1_is_break", false,-1);
    tracep->declBit(c+1,"EX_io1_is_jump", false,-1);
    tracep->declBit(c+237,"EX_io1_is_branch", false,-1);
    tracep->declQuad(c+235,"EX_io1_dnpc", false,-1, 63,0);
    tracep->declQuad(c+11,"EX_io1_addr", false,-1, 63,0);
    tracep->declQuad(c+13,"EX_io1_rdata", false,-1, 63,0);
    tracep->declQuad(c+15,"EX_io1_wdata", false,-1, 63,0);
    tracep->declBus(c+17,"EX_io1_wmask", false,-1, 7,0);
    tracep->declBit(c+10,"DIP_is_break", false,-1);
    tracep->declQuad(c+36,"DIP_rf_0", false,-1, 63,0);
    tracep->declQuad(c+38,"DIP_rf_1", false,-1, 63,0);
    tracep->declQuad(c+40,"DIP_rf_2", false,-1, 63,0);
    tracep->declQuad(c+42,"DIP_rf_3", false,-1, 63,0);
    tracep->declQuad(c+44,"DIP_rf_4", false,-1, 63,0);
    tracep->declQuad(c+46,"DIP_rf_5", false,-1, 63,0);
    tracep->declQuad(c+48,"DIP_rf_6", false,-1, 63,0);
    tracep->declQuad(c+50,"DIP_rf_7", false,-1, 63,0);
    tracep->declQuad(c+52,"DIP_rf_8", false,-1, 63,0);
    tracep->declQuad(c+54,"DIP_rf_9", false,-1, 63,0);
    tracep->declQuad(c+56,"DIP_rf_10", false,-1, 63,0);
    tracep->declQuad(c+58,"DIP_rf_11", false,-1, 63,0);
    tracep->declQuad(c+60,"DIP_rf_12", false,-1, 63,0);
    tracep->declQuad(c+62,"DIP_rf_13", false,-1, 63,0);
    tracep->declQuad(c+64,"DIP_rf_14", false,-1, 63,0);
    tracep->declQuad(c+66,"DIP_rf_15", false,-1, 63,0);
    tracep->declQuad(c+68,"DIP_rf_16", false,-1, 63,0);
    tracep->declQuad(c+70,"DIP_rf_17", false,-1, 63,0);
    tracep->declQuad(c+72,"DIP_rf_18", false,-1, 63,0);
    tracep->declQuad(c+74,"DIP_rf_19", false,-1, 63,0);
    tracep->declQuad(c+76,"DIP_rf_20", false,-1, 63,0);
    tracep->declQuad(c+78,"DIP_rf_21", false,-1, 63,0);
    tracep->declQuad(c+80,"DIP_rf_22", false,-1, 63,0);
    tracep->declQuad(c+82,"DIP_rf_23", false,-1, 63,0);
    tracep->declQuad(c+84,"DIP_rf_24", false,-1, 63,0);
    tracep->declQuad(c+86,"DIP_rf_25", false,-1, 63,0);
    tracep->declQuad(c+88,"DIP_rf_26", false,-1, 63,0);
    tracep->declQuad(c+90,"DIP_rf_27", false,-1, 63,0);
    tracep->declQuad(c+92,"DIP_rf_28", false,-1, 63,0);
    tracep->declQuad(c+94,"DIP_rf_29", false,-1, 63,0);
    tracep->declQuad(c+96,"DIP_rf_30", false,-1, 63,0);
    tracep->declQuad(c+98,"DIP_rf_31", false,-1, 63,0);
    tracep->declBus(c+232,"DIP_inst", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+100+i*2,"rf", true,(i+0), 63,0);
    }
    tracep->declBit(c+261,"rf_EX_io1_REG1_MPORT_en", false,-1);
    tracep->declBus(c+238,"rf_EX_io1_REG1_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+247,"rf_EX_io1_REG1_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+261,"rf_EX_io1_REG2_MPORT_en", false,-1);
    tracep->declBus(c+239,"rf_EX_io1_REG2_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+249,"rf_EX_io1_REG2_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+261,"rf_DIP_io_rf_0_MPORT_en", false,-1);
    tracep->declBus(c+262,"rf_DIP_io_rf_0_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+36,"rf_DIP_io_rf_0_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+261,"rf_DIP_io_rf_1_MPORT_en", false,-1);
    tracep->declBus(c+263,"rf_DIP_io_rf_1_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+38,"rf_DIP_io_rf_1_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+261,"rf_DIP_io_rf_2_MPORT_en", false,-1);
    tracep->declBus(c+264,"rf_DIP_io_rf_2_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+40,"rf_DIP_io_rf_2_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+261,"rf_DIP_io_rf_3_MPORT_en", false,-1);
    tracep->declBus(c+265,"rf_DIP_io_rf_3_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+42,"rf_DIP_io_rf_3_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+261,"rf_DIP_io_rf_4_MPORT_en", false,-1);
    tracep->declBus(c+266,"rf_DIP_io_rf_4_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+44,"rf_DIP_io_rf_4_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+261,"rf_DIP_io_rf_5_MPORT_en", false,-1);
    tracep->declBus(c+267,"rf_DIP_io_rf_5_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+46,"rf_DIP_io_rf_5_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+261,"rf_DIP_io_rf_6_MPORT_en", false,-1);
    tracep->declBus(c+268,"rf_DIP_io_rf_6_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+48,"rf_DIP_io_rf_6_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+261,"rf_DIP_io_rf_7_MPORT_en", false,-1);
    tracep->declBus(c+269,"rf_DIP_io_rf_7_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+50,"rf_DIP_io_rf_7_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+261,"rf_DIP_io_rf_8_MPORT_en", false,-1);
    tracep->declBus(c+270,"rf_DIP_io_rf_8_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+52,"rf_DIP_io_rf_8_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+261,"rf_DIP_io_rf_9_MPORT_en", false,-1);
    tracep->declBus(c+271,"rf_DIP_io_rf_9_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+54,"rf_DIP_io_rf_9_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+261,"rf_DIP_io_rf_10_MPORT_en", false,-1);
    tracep->declBus(c+272,"rf_DIP_io_rf_10_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+56,"rf_DIP_io_rf_10_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+261,"rf_DIP_io_rf_11_MPORT_en", false,-1);
    tracep->declBus(c+273,"rf_DIP_io_rf_11_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+58,"rf_DIP_io_rf_11_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+261,"rf_DIP_io_rf_12_MPORT_en", false,-1);
    tracep->declBus(c+274,"rf_DIP_io_rf_12_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+60,"rf_DIP_io_rf_12_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+261,"rf_DIP_io_rf_13_MPORT_en", false,-1);
    tracep->declBus(c+275,"rf_DIP_io_rf_13_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+62,"rf_DIP_io_rf_13_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+261,"rf_DIP_io_rf_14_MPORT_en", false,-1);
    tracep->declBus(c+276,"rf_DIP_io_rf_14_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+64,"rf_DIP_io_rf_14_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+261,"rf_DIP_io_rf_15_MPORT_en", false,-1);
    tracep->declBus(c+277,"rf_DIP_io_rf_15_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+66,"rf_DIP_io_rf_15_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+261,"rf_DIP_io_rf_16_MPORT_en", false,-1);
    tracep->declBus(c+278,"rf_DIP_io_rf_16_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+68,"rf_DIP_io_rf_16_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+261,"rf_DIP_io_rf_17_MPORT_en", false,-1);
    tracep->declBus(c+279,"rf_DIP_io_rf_17_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+70,"rf_DIP_io_rf_17_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+261,"rf_DIP_io_rf_18_MPORT_en", false,-1);
    tracep->declBus(c+280,"rf_DIP_io_rf_18_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+72,"rf_DIP_io_rf_18_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+261,"rf_DIP_io_rf_19_MPORT_en", false,-1);
    tracep->declBus(c+281,"rf_DIP_io_rf_19_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+74,"rf_DIP_io_rf_19_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+261,"rf_DIP_io_rf_20_MPORT_en", false,-1);
    tracep->declBus(c+282,"rf_DIP_io_rf_20_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+76,"rf_DIP_io_rf_20_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+261,"rf_DIP_io_rf_21_MPORT_en", false,-1);
    tracep->declBus(c+283,"rf_DIP_io_rf_21_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+78,"rf_DIP_io_rf_21_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+261,"rf_DIP_io_rf_22_MPORT_en", false,-1);
    tracep->declBus(c+284,"rf_DIP_io_rf_22_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+80,"rf_DIP_io_rf_22_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+261,"rf_DIP_io_rf_23_MPORT_en", false,-1);
    tracep->declBus(c+285,"rf_DIP_io_rf_23_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+82,"rf_DIP_io_rf_23_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+261,"rf_DIP_io_rf_24_MPORT_en", false,-1);
    tracep->declBus(c+286,"rf_DIP_io_rf_24_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+84,"rf_DIP_io_rf_24_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+261,"rf_DIP_io_rf_25_MPORT_en", false,-1);
    tracep->declBus(c+287,"rf_DIP_io_rf_25_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+86,"rf_DIP_io_rf_25_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+261,"rf_DIP_io_rf_26_MPORT_en", false,-1);
    tracep->declBus(c+288,"rf_DIP_io_rf_26_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+88,"rf_DIP_io_rf_26_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+261,"rf_DIP_io_rf_27_MPORT_en", false,-1);
    tracep->declBus(c+289,"rf_DIP_io_rf_27_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+90,"rf_DIP_io_rf_27_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+261,"rf_DIP_io_rf_28_MPORT_en", false,-1);
    tracep->declBus(c+290,"rf_DIP_io_rf_28_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+92,"rf_DIP_io_rf_28_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+261,"rf_DIP_io_rf_29_MPORT_en", false,-1);
    tracep->declBus(c+291,"rf_DIP_io_rf_29_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+94,"rf_DIP_io_rf_29_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+261,"rf_DIP_io_rf_30_MPORT_en", false,-1);
    tracep->declBus(c+292,"rf_DIP_io_rf_30_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+96,"rf_DIP_io_rf_30_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+261,"rf_DIP_io_rf_31_MPORT_en", false,-1);
    tracep->declBus(c+293,"rf_DIP_io_rf_31_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+98,"rf_DIP_io_rf_31_MPORT_data", false,-1, 63,0);
    tracep->declQuad(c+251,"rf_MPORT_data", false,-1, 63,0);
    tracep->declBus(c+240,"rf_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+261,"rf_MPORT_mask", false,-1);
    tracep->declBit(c+241,"rf_MPORT_en", false,-1);
    tracep->declQuad(c+11,"mem_addr", false,-1, 63,0);
    tracep->declBit(c+242,"mem_we", false,-1);
    tracep->declBit(c+18,"mem_ce", false,-1);
    tracep->declQuad(c+15,"mem_wdata", false,-1, 63,0);
    tracep->declQuad(c+13,"mem_rdata", false,-1, 63,0);
    tracep->declBus(c+17,"mem_wmask", false,-1, 7,0);
    tracep->declBus(c+238,"src1add", false,-1, 4,0);
    tracep->declBus(c+239,"src2add", false,-1, 4,0);
    tracep->pushNamePrefix("DIP ");
    tracep->declBit(c+10,"is_break", false,-1);
    tracep->declBus(c+232,"inst", false,-1, 31,0);
    tracep->declQuad(c+36,"rf_0", false,-1, 63,0);
    tracep->declQuad(c+38,"rf_1", false,-1, 63,0);
    tracep->declQuad(c+40,"rf_2", false,-1, 63,0);
    tracep->declQuad(c+42,"rf_3", false,-1, 63,0);
    tracep->declQuad(c+44,"rf_4", false,-1, 63,0);
    tracep->declQuad(c+46,"rf_5", false,-1, 63,0);
    tracep->declQuad(c+48,"rf_6", false,-1, 63,0);
    tracep->declQuad(c+50,"rf_7", false,-1, 63,0);
    tracep->declQuad(c+52,"rf_8", false,-1, 63,0);
    tracep->declQuad(c+54,"rf_9", false,-1, 63,0);
    tracep->declQuad(c+56,"rf_10", false,-1, 63,0);
    tracep->declQuad(c+58,"rf_11", false,-1, 63,0);
    tracep->declQuad(c+60,"rf_12", false,-1, 63,0);
    tracep->declQuad(c+62,"rf_13", false,-1, 63,0);
    tracep->declQuad(c+64,"rf_14", false,-1, 63,0);
    tracep->declQuad(c+66,"rf_15", false,-1, 63,0);
    tracep->declQuad(c+68,"rf_16", false,-1, 63,0);
    tracep->declQuad(c+70,"rf_17", false,-1, 63,0);
    tracep->declQuad(c+72,"rf_18", false,-1, 63,0);
    tracep->declQuad(c+74,"rf_19", false,-1, 63,0);
    tracep->declQuad(c+76,"rf_20", false,-1, 63,0);
    tracep->declQuad(c+78,"rf_21", false,-1, 63,0);
    tracep->declQuad(c+80,"rf_22", false,-1, 63,0);
    tracep->declQuad(c+82,"rf_23", false,-1, 63,0);
    tracep->declQuad(c+84,"rf_24", false,-1, 63,0);
    tracep->declQuad(c+86,"rf_25", false,-1, 63,0);
    tracep->declQuad(c+88,"rf_26", false,-1, 63,0);
    tracep->declQuad(c+90,"rf_27", false,-1, 63,0);
    tracep->declQuad(c+92,"rf_28", false,-1, 63,0);
    tracep->declQuad(c+94,"rf_29", false,-1, 63,0);
    tracep->declQuad(c+96,"rf_30", false,-1, 63,0);
    tracep->declQuad(c+98,"rf_31", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+164+i*2,"rf", true,(i+0), 63,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EX ");
    tracep->declBus(c+2,"io_src1type", false,-1, 2,0);
    tracep->declBus(c+3,"io_src2type", false,-1, 2,0);
    tracep->declBus(c+238,"io_src1", false,-1, 4,0);
    tracep->declBus(c+239,"io_src2", false,-1, 4,0);
    tracep->declBus(c+4,"io_futype", false,-1, 2,0);
    tracep->declBus(c+5,"io_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+6,"io_Imm", false,-1, 63,0);
    tracep->declQuad(c+243,"io1_REG1", false,-1, 63,0);
    tracep->declQuad(c+245,"io1_REG2", false,-1, 63,0);
    tracep->declQuad(c+34,"io1_PC", false,-1, 63,0);
    tracep->declQuad(c+8,"io1_result", false,-1, 63,0);
    tracep->declBit(c+10,"io1_is_break", false,-1);
    tracep->declBit(c+1,"io1_is_jump", false,-1);
    tracep->declBit(c+237,"io1_is_branch", false,-1);
    tracep->declQuad(c+235,"io1_dnpc", false,-1, 63,0);
    tracep->declQuad(c+11,"io1_addr", false,-1, 63,0);
    tracep->declQuad(c+13,"io1_rdata", false,-1, 63,0);
    tracep->declQuad(c+15,"io1_wdata", false,-1, 63,0);
    tracep->declBus(c+17,"io1_wmask", false,-1, 7,0);
    tracep->declQuad(c+19,"src1", false,-1, 63,0);
    tracep->declQuad(c+21,"src2", false,-1, 63,0);
    tracep->declBit(c+23,"alu_result_sign", false,-1);
    tracep->declQuad(c+24,"alu_result", false,-1, 63,0);
    tracep->declBit(c+26,"mem_result_sign", false,-1);
    tracep->declQuad(c+27,"mem_result", false,-1, 63,0);
    tracep->declQuad(c+29,"compar_result", false,-1, 63,0);
    tracep->declQuad(c+253,"jump_result", false,-1, 63,0);
    tracep->declQuad(c+255,"branch_result", false,-1, 63,0);
    tracep->declBit(c+237,"branch_flag", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ID ");
    tracep->declBus(c+232,"io_inst", false,-1, 31,0);
    tracep->declBus(c+2,"io_ctrlIO_src1type", false,-1, 2,0);
    tracep->declBus(c+3,"io_ctrlIO_src2type", false,-1, 2,0);
    tracep->declBus(c+238,"io_ctrlIO_src1", false,-1, 4,0);
    tracep->declBus(c+239,"io_ctrlIO_src2", false,-1, 4,0);
    tracep->declBus(c+240,"io_ctrlIO_rd", false,-1, 4,0);
    tracep->declBus(c+4,"io_ctrlIO_futype", false,-1, 2,0);
    tracep->declBus(c+5,"io_ctrlIO_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+6,"io_ctrlIO_Imm", false,-1, 63,0);
    tracep->declBit(c+241,"io_rd_en", false,-1);
    tracep->declBit(c+242,"io_mem_we", false,-1);
    tracep->declBus(c+240,"rd", false,-1, 4,0);
    tracep->declBus(c+31,"Inst_decode_0", false,-1, 3,0);
    tracep->declBus(c+257,"Inst_decode_2", false,-1, 6,0);
    tracep->declBus(c+32,"srctype_0", false,-1, 1,0);
    tracep->declBit(c+33,"srctype_1", false,-1);
    tracep->declBit(c+258,"sign", false,-1);
    tracep->declBit(c+259,"sign_1", false,-1);
    tracep->declBit(c+260,"sign_2", false,-1);
    tracep->declBit(c+260,"sign_3", false,-1);
    tracep->declBit(c+258,"sign_4", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IF ");
    tracep->declBit(c+228,"clock", false,-1);
    tracep->declBit(c+229,"reset", false,-1);
    tracep->declQuad(c+235,"io_dnpc", false,-1, 63,0);
    tracep->declBit(c+1,"io_is_jump", false,-1);
    tracep->declBit(c+237,"io_is_branch", false,-1);
    tracep->declQuad(c+34,"io_pc", false,-1, 63,0);
    tracep->declQuad(c+34,"temp", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem ");
    tracep->declQuad(c+11,"addr", false,-1, 63,0);
    tracep->declBit(c+242,"we", false,-1);
    tracep->declBit(c+18,"ce", false,-1);
    tracep->declQuad(c+15,"wdata", false,-1, 63,0);
    tracep->declQuad(c+13,"rdata", false,-1, 63,0);
    tracep->declBus(c+17,"wmask", false,-1, 7,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VCPUTop___024root__trace_init_top(VCPUTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCPUTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUTop___024root__trace_init_top\n"); );
    // Body
    VCPUTop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VCPUTop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VCPUTop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VCPUTop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VCPUTop___024root__trace_register(VCPUTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCPUTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUTop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VCPUTop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VCPUTop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VCPUTop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VCPUTop___024root__trace_full_sub_0(VCPUTop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VCPUTop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUTop___024root__trace_full_top_0\n"); );
    // Init
    VCPUTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCPUTop___024root*>(voidSelf);
    VCPUTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VCPUTop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VCPUTop___024root__trace_full_sub_0(VCPUTop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VCPUTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUTop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,((3U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype))));
    bufp->fullCData(oldp+2,(vlSelf->CPUTop__DOT__ID__DOT___io_ctrlIO_src1type_T_2),3);
    bufp->fullCData(oldp+3,(vlSelf->CPUTop__DOT__ID__DOT__srctype_1),3);
    bufp->fullCData(oldp+4,(vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype),3);
    bufp->fullCData(oldp+5,(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype),7);
    bufp->fullQData(oldp+6,(vlSelf->CPUTop__DOT__ID_io_ctrlIO_Imm),64);
    bufp->fullQData(oldp+8,(vlSelf->CPUTop__DOT__EX_io1_result),64);
    bufp->fullBit(oldp+10,((0x42U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))));
    bufp->fullQData(oldp+11,(((0x45U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                               ? vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_1
                               : ((0x46U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                   ? vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_3
                                   : ((0x47U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                       ? vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_3
                                       : 0ULL)))),64);
    bufp->fullQData(oldp+13,(vlSelf->CPUTop__DOT__mem_rdata),64);
    bufp->fullQData(oldp+15,(((0x45U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                               ? 0ULL : ((0x47U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                          ? 0ULL : 
                                         ((0x46U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                           ? vlSelf->CPUTop__DOT__EX__DOT__src2
                                           : 0ULL)))),64);
    bufp->fullCData(oldp+17,(((0x45U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                               ? 0U : ((0x47U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                        ? 0U : ((0x46U 
                                                 == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                 ? 0xffU
                                                 : 0U)))),8);
    bufp->fullBit(oldp+18,((4U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype))));
    bufp->fullQData(oldp+19,(vlSelf->CPUTop__DOT__EX__DOT__src1),64);
    bufp->fullQData(oldp+21,(vlSelf->CPUTop__DOT__EX__DOT__src2),64);
    bufp->fullBit(oldp+23,((1U & (IData)((vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_1 
                                          >> 0x1fU)))));
    bufp->fullQData(oldp+24,(((0x40U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                               ? vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_1
                               : ((0x68U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                   ? (((QData)((IData)(
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_1 
                                                                    >> 0x1fU)))
                                                         ? 0xffffffffU
                                                         : 0U))) 
                                       << 0x20U) | (QData)((IData)(vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_1)))
                                   : ((0x44U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                       ? (vlSelf->CPUTop__DOT__EX__DOT__src1 
                                          | vlSelf->CPUTop__DOT__EX__DOT__src2)
                                       : ((0x69U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                           ? (vlSelf->CPUTop__DOT__EX__DOT__src1 
                                              - vlSelf->CPUTop__DOT__EX__DOT__src2)
                                           : 0ULL))))),64);
    bufp->fullBit(oldp+26,((1U & (IData)((vlSelf->CPUTop__DOT__mem_rdata 
                                          >> 0x1fU)))));
    bufp->fullQData(oldp+27,(((0x45U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                               ? vlSelf->CPUTop__DOT__mem_rdata
                               : ((0x47U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                   ? (((QData)((IData)(
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->CPUTop__DOT__mem_rdata 
                                                                    >> 0x1fU)))
                                                         ? 0xffffffffU
                                                         : 0U))) 
                                       << 0x20U) | (QData)((IData)(vlSelf->CPUTop__DOT__mem_rdata)))
                                   : 0ULL))),64);
    bufp->fullQData(oldp+29,(((0x6aU == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                               ? ((vlSelf->CPUTop__DOT__EX__DOT__src1 
                                   < vlSelf->CPUTop__DOT__EX__DOT__src2)
                                   ? 1ULL : 0ULL) : 0ULL)),64);
    bufp->fullCData(oldp+31,(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0),4);
    bufp->fullCData(oldp+32,(((8U == (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0))
                               ? 0U : ((7U == (7U & (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0)))
                                        ? 2U : ((3U 
                                                 == 
                                                 (3U 
                                                  & (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0)))
                                                 ? 2U
                                                 : 0U)))),2);
    bufp->fullBit(oldp+33,(vlSelf->CPUTop__DOT__ID__DOT__srctype_1));
    bufp->fullQData(oldp+34,(vlSelf->CPUTop__DOT__IF__DOT__temp),64);
    bufp->fullQData(oldp+36,(vlSelf->CPUTop__DOT__rf
                             [0U]),64);
    bufp->fullQData(oldp+38,(vlSelf->CPUTop__DOT__rf
                             [1U]),64);
    bufp->fullQData(oldp+40,(vlSelf->CPUTop__DOT__rf
                             [2U]),64);
    bufp->fullQData(oldp+42,(vlSelf->CPUTop__DOT__rf
                             [3U]),64);
    bufp->fullQData(oldp+44,(vlSelf->CPUTop__DOT__rf
                             [4U]),64);
    bufp->fullQData(oldp+46,(vlSelf->CPUTop__DOT__rf
                             [5U]),64);
    bufp->fullQData(oldp+48,(vlSelf->CPUTop__DOT__rf
                             [6U]),64);
    bufp->fullQData(oldp+50,(vlSelf->CPUTop__DOT__rf
                             [7U]),64);
    bufp->fullQData(oldp+52,(vlSelf->CPUTop__DOT__rf
                             [8U]),64);
    bufp->fullQData(oldp+54,(vlSelf->CPUTop__DOT__rf
                             [9U]),64);
    bufp->fullQData(oldp+56,(vlSelf->CPUTop__DOT__rf
                             [0xaU]),64);
    bufp->fullQData(oldp+58,(vlSelf->CPUTop__DOT__rf
                             [0xbU]),64);
    bufp->fullQData(oldp+60,(vlSelf->CPUTop__DOT__rf
                             [0xcU]),64);
    bufp->fullQData(oldp+62,(vlSelf->CPUTop__DOT__rf
                             [0xdU]),64);
    bufp->fullQData(oldp+64,(vlSelf->CPUTop__DOT__rf
                             [0xeU]),64);
    bufp->fullQData(oldp+66,(vlSelf->CPUTop__DOT__rf
                             [0xfU]),64);
    bufp->fullQData(oldp+68,(vlSelf->CPUTop__DOT__rf
                             [0x10U]),64);
    bufp->fullQData(oldp+70,(vlSelf->CPUTop__DOT__rf
                             [0x11U]),64);
    bufp->fullQData(oldp+72,(vlSelf->CPUTop__DOT__rf
                             [0x12U]),64);
    bufp->fullQData(oldp+74,(vlSelf->CPUTop__DOT__rf
                             [0x13U]),64);
    bufp->fullQData(oldp+76,(vlSelf->CPUTop__DOT__rf
                             [0x14U]),64);
    bufp->fullQData(oldp+78,(vlSelf->CPUTop__DOT__rf
                             [0x15U]),64);
    bufp->fullQData(oldp+80,(vlSelf->CPUTop__DOT__rf
                             [0x16U]),64);
    bufp->fullQData(oldp+82,(vlSelf->CPUTop__DOT__rf
                             [0x17U]),64);
    bufp->fullQData(oldp+84,(vlSelf->CPUTop__DOT__rf
                             [0x18U]),64);
    bufp->fullQData(oldp+86,(vlSelf->CPUTop__DOT__rf
                             [0x19U]),64);
    bufp->fullQData(oldp+88,(vlSelf->CPUTop__DOT__rf
                             [0x1aU]),64);
    bufp->fullQData(oldp+90,(vlSelf->CPUTop__DOT__rf
                             [0x1bU]),64);
    bufp->fullQData(oldp+92,(vlSelf->CPUTop__DOT__rf
                             [0x1cU]),64);
    bufp->fullQData(oldp+94,(vlSelf->CPUTop__DOT__rf
                             [0x1dU]),64);
    bufp->fullQData(oldp+96,(vlSelf->CPUTop__DOT__rf
                             [0x1eU]),64);
    bufp->fullQData(oldp+98,(vlSelf->CPUTop__DOT__rf
                             [0x1fU]),64);
    bufp->fullQData(oldp+100,(vlSelf->CPUTop__DOT__rf[0]),64);
    bufp->fullQData(oldp+102,(vlSelf->CPUTop__DOT__rf[1]),64);
    bufp->fullQData(oldp+104,(vlSelf->CPUTop__DOT__rf[2]),64);
    bufp->fullQData(oldp+106,(vlSelf->CPUTop__DOT__rf[3]),64);
    bufp->fullQData(oldp+108,(vlSelf->CPUTop__DOT__rf[4]),64);
    bufp->fullQData(oldp+110,(vlSelf->CPUTop__DOT__rf[5]),64);
    bufp->fullQData(oldp+112,(vlSelf->CPUTop__DOT__rf[6]),64);
    bufp->fullQData(oldp+114,(vlSelf->CPUTop__DOT__rf[7]),64);
    bufp->fullQData(oldp+116,(vlSelf->CPUTop__DOT__rf[8]),64);
    bufp->fullQData(oldp+118,(vlSelf->CPUTop__DOT__rf[9]),64);
    bufp->fullQData(oldp+120,(vlSelf->CPUTop__DOT__rf[10]),64);
    bufp->fullQData(oldp+122,(vlSelf->CPUTop__DOT__rf[11]),64);
    bufp->fullQData(oldp+124,(vlSelf->CPUTop__DOT__rf[12]),64);
    bufp->fullQData(oldp+126,(vlSelf->CPUTop__DOT__rf[13]),64);
    bufp->fullQData(oldp+128,(vlSelf->CPUTop__DOT__rf[14]),64);
    bufp->fullQData(oldp+130,(vlSelf->CPUTop__DOT__rf[15]),64);
    bufp->fullQData(oldp+132,(vlSelf->CPUTop__DOT__rf[16]),64);
    bufp->fullQData(oldp+134,(vlSelf->CPUTop__DOT__rf[17]),64);
    bufp->fullQData(oldp+136,(vlSelf->CPUTop__DOT__rf[18]),64);
    bufp->fullQData(oldp+138,(vlSelf->CPUTop__DOT__rf[19]),64);
    bufp->fullQData(oldp+140,(vlSelf->CPUTop__DOT__rf[20]),64);
    bufp->fullQData(oldp+142,(vlSelf->CPUTop__DOT__rf[21]),64);
    bufp->fullQData(oldp+144,(vlSelf->CPUTop__DOT__rf[22]),64);
    bufp->fullQData(oldp+146,(vlSelf->CPUTop__DOT__rf[23]),64);
    bufp->fullQData(oldp+148,(vlSelf->CPUTop__DOT__rf[24]),64);
    bufp->fullQData(oldp+150,(vlSelf->CPUTop__DOT__rf[25]),64);
    bufp->fullQData(oldp+152,(vlSelf->CPUTop__DOT__rf[26]),64);
    bufp->fullQData(oldp+154,(vlSelf->CPUTop__DOT__rf[27]),64);
    bufp->fullQData(oldp+156,(vlSelf->CPUTop__DOT__rf[28]),64);
    bufp->fullQData(oldp+158,(vlSelf->CPUTop__DOT__rf[29]),64);
    bufp->fullQData(oldp+160,(vlSelf->CPUTop__DOT__rf[30]),64);
    bufp->fullQData(oldp+162,(vlSelf->CPUTop__DOT__rf[31]),64);
    bufp->fullQData(oldp+164,(vlSelf->CPUTop__DOT__DIP__DOT__rf[0]),64);
    bufp->fullQData(oldp+166,(vlSelf->CPUTop__DOT__DIP__DOT__rf[1]),64);
    bufp->fullQData(oldp+168,(vlSelf->CPUTop__DOT__DIP__DOT__rf[2]),64);
    bufp->fullQData(oldp+170,(vlSelf->CPUTop__DOT__DIP__DOT__rf[3]),64);
    bufp->fullQData(oldp+172,(vlSelf->CPUTop__DOT__DIP__DOT__rf[4]),64);
    bufp->fullQData(oldp+174,(vlSelf->CPUTop__DOT__DIP__DOT__rf[5]),64);
    bufp->fullQData(oldp+176,(vlSelf->CPUTop__DOT__DIP__DOT__rf[6]),64);
    bufp->fullQData(oldp+178,(vlSelf->CPUTop__DOT__DIP__DOT__rf[7]),64);
    bufp->fullQData(oldp+180,(vlSelf->CPUTop__DOT__DIP__DOT__rf[8]),64);
    bufp->fullQData(oldp+182,(vlSelf->CPUTop__DOT__DIP__DOT__rf[9]),64);
    bufp->fullQData(oldp+184,(vlSelf->CPUTop__DOT__DIP__DOT__rf[10]),64);
    bufp->fullQData(oldp+186,(vlSelf->CPUTop__DOT__DIP__DOT__rf[11]),64);
    bufp->fullQData(oldp+188,(vlSelf->CPUTop__DOT__DIP__DOT__rf[12]),64);
    bufp->fullQData(oldp+190,(vlSelf->CPUTop__DOT__DIP__DOT__rf[13]),64);
    bufp->fullQData(oldp+192,(vlSelf->CPUTop__DOT__DIP__DOT__rf[14]),64);
    bufp->fullQData(oldp+194,(vlSelf->CPUTop__DOT__DIP__DOT__rf[15]),64);
    bufp->fullQData(oldp+196,(vlSelf->CPUTop__DOT__DIP__DOT__rf[16]),64);
    bufp->fullQData(oldp+198,(vlSelf->CPUTop__DOT__DIP__DOT__rf[17]),64);
    bufp->fullQData(oldp+200,(vlSelf->CPUTop__DOT__DIP__DOT__rf[18]),64);
    bufp->fullQData(oldp+202,(vlSelf->CPUTop__DOT__DIP__DOT__rf[19]),64);
    bufp->fullQData(oldp+204,(vlSelf->CPUTop__DOT__DIP__DOT__rf[20]),64);
    bufp->fullQData(oldp+206,(vlSelf->CPUTop__DOT__DIP__DOT__rf[21]),64);
    bufp->fullQData(oldp+208,(vlSelf->CPUTop__DOT__DIP__DOT__rf[22]),64);
    bufp->fullQData(oldp+210,(vlSelf->CPUTop__DOT__DIP__DOT__rf[23]),64);
    bufp->fullQData(oldp+212,(vlSelf->CPUTop__DOT__DIP__DOT__rf[24]),64);
    bufp->fullQData(oldp+214,(vlSelf->CPUTop__DOT__DIP__DOT__rf[25]),64);
    bufp->fullQData(oldp+216,(vlSelf->CPUTop__DOT__DIP__DOT__rf[26]),64);
    bufp->fullQData(oldp+218,(vlSelf->CPUTop__DOT__DIP__DOT__rf[27]),64);
    bufp->fullQData(oldp+220,(vlSelf->CPUTop__DOT__DIP__DOT__rf[28]),64);
    bufp->fullQData(oldp+222,(vlSelf->CPUTop__DOT__DIP__DOT__rf[29]),64);
    bufp->fullQData(oldp+224,(vlSelf->CPUTop__DOT__DIP__DOT__rf[30]),64);
    bufp->fullQData(oldp+226,(vlSelf->CPUTop__DOT__DIP__DOT__rf[31]),64);
    bufp->fullBit(oldp+228,(vlSelf->clock));
    bufp->fullBit(oldp+229,(vlSelf->reset));
    bufp->fullQData(oldp+230,(vlSelf->io_pc),64);
    bufp->fullIData(oldp+232,(vlSelf->io_inst),32);
    bufp->fullQData(oldp+233,(vlSelf->io_result),64);
    bufp->fullQData(oldp+235,(((0x19U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                ? vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_1
                                : ((0x48U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                    ? (0xfffffffffffffffeULL 
                                       & vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_1)
                                    : ((0x6bU == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                        ? (((0x6bU 
                                             == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype)) 
                                            & ((0x1fU 
                                                & (vlSelf->io_inst 
                                                   >> 0xfU)) 
                                               == (0x1fU 
                                                   & (vlSelf->io_inst 
                                                      >> 0x14U))))
                                            ? ((0x6bU 
                                                == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                ? (vlSelf->CPUTop__DOT__IF__DOT__temp 
                                                   + vlSelf->CPUTop__DOT__ID_io_ctrlIO_Imm)
                                                : 0ULL)
                                            : (4ULL 
                                               + vlSelf->CPUTop__DOT__IF__DOT__temp))
                                        : 0ULL)))),64);
    bufp->fullBit(oldp+237,(((0x6bU == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype)) 
                             & ((0x1fU & (vlSelf->io_inst 
                                          >> 0xfU)) 
                                == (0x1fU & (vlSelf->io_inst 
                                             >> 0x14U))))));
    bufp->fullCData(oldp+238,((0x1fU & (vlSelf->io_inst 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+239,((0x1fU & (vlSelf->io_inst 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+240,((0x1fU & (vlSelf->io_inst 
                                        >> 7U))),5);
    bufp->fullBit(oldp+241,(((0x13U == (0x707fU & vlSelf->io_inst)) 
                             | ((0x1013U == (0xfc00707fU 
                                             & vlSelf->io_inst)) 
                                | ((0x17U == (0x7fU 
                                              & vlSelf->io_inst)) 
                                   | ((0x37U == (0x7fU 
                                                 & vlSelf->io_inst)) 
                                      | ((0x6013U == 
                                          (0x707fU 
                                           & vlSelf->io_inst)) 
                                         | ((0x6fU 
                                             == (0x7fU 
                                                 & vlSelf->io_inst)) 
                                            | ((0x67U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->io_inst)) 
                                               | ((0x3003U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->io_inst)) 
                                                  | ((0x3023U 
                                                      != 
                                                      (0x707fU 
                                                       & vlSelf->io_inst)) 
                                                     & ((0x2003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->io_inst)) 
                                                        | ((0x3bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->io_inst)) 
                                                           | ((0x40000033U 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->io_inst)) 
                                                              | ((0x3013U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlSelf->io_inst)) 
                                                                 | (0x63U 
                                                                    == 
                                                                    (0x707fU 
                                                                     & vlSelf->io_inst)))))))))))))))));
    bufp->fullBit(oldp+242,((0x45U != ((0x13U == (0x707fU 
                                                  & vlSelf->io_inst))
                                        ? 0x40U : (IData)(vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_71)))));
    bufp->fullQData(oldp+243,(((0U == (0x1fU & (vlSelf->io_inst 
                                                >> 0xfU)))
                                ? 0ULL : vlSelf->CPUTop__DOT__rf
                               [(0x1fU & (vlSelf->io_inst 
                                          >> 0xfU))])),64);
    bufp->fullQData(oldp+245,(((0U == (0x1fU & (vlSelf->io_inst 
                                                >> 0x14U)))
                                ? 0ULL : vlSelf->CPUTop__DOT__rf
                               [(0x1fU & (vlSelf->io_inst 
                                          >> 0x14U))])),64);
    bufp->fullQData(oldp+247,(vlSelf->CPUTop__DOT__rf
                              [(0x1fU & (vlSelf->io_inst 
                                         >> 0xfU))]),64);
    bufp->fullQData(oldp+249,(vlSelf->CPUTop__DOT__rf
                              [(0x1fU & (vlSelf->io_inst 
                                         >> 0x14U))]),64);
    bufp->fullQData(oldp+251,(((0U == (0x1fU & (vlSelf->io_inst 
                                                >> 7U)))
                                ? 0ULL : vlSelf->CPUTop__DOT__EX_io1_result)),64);
    bufp->fullQData(oldp+253,(((3U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype))
                                ? (4ULL + vlSelf->CPUTop__DOT__IF__DOT__temp)
                                : 0ULL)),64);
    bufp->fullQData(oldp+255,(((0x6bU == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                ? (vlSelf->CPUTop__DOT__IF__DOT__temp 
                                   + vlSelf->CPUTop__DOT__ID_io_ctrlIO_Imm)
                                : 0ULL)),64);
    bufp->fullCData(oldp+257,(((0x13U == (0x707fU & vlSelf->io_inst))
                                ? 0x40U : (IData)(vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_71))),7);
    bufp->fullBit(oldp+258,((vlSelf->io_inst >> 0x1fU)));
    bufp->fullBit(oldp+259,((1U & (vlSelf->io_inst 
                                   >> 0x13U))));
    bufp->fullBit(oldp+260,((vlSelf->io_inst >> 0x1fU)));
    bufp->fullBit(oldp+261,(1U));
    bufp->fullCData(oldp+262,(0U),5);
    bufp->fullCData(oldp+263,(1U),5);
    bufp->fullCData(oldp+264,(2U),5);
    bufp->fullCData(oldp+265,(3U),5);
    bufp->fullCData(oldp+266,(4U),5);
    bufp->fullCData(oldp+267,(5U),5);
    bufp->fullCData(oldp+268,(6U),5);
    bufp->fullCData(oldp+269,(7U),5);
    bufp->fullCData(oldp+270,(8U),5);
    bufp->fullCData(oldp+271,(9U),5);
    bufp->fullCData(oldp+272,(0xaU),5);
    bufp->fullCData(oldp+273,(0xbU),5);
    bufp->fullCData(oldp+274,(0xcU),5);
    bufp->fullCData(oldp+275,(0xdU),5);
    bufp->fullCData(oldp+276,(0xeU),5);
    bufp->fullCData(oldp+277,(0xfU),5);
    bufp->fullCData(oldp+278,(0x10U),5);
    bufp->fullCData(oldp+279,(0x11U),5);
    bufp->fullCData(oldp+280,(0x12U),5);
    bufp->fullCData(oldp+281,(0x13U),5);
    bufp->fullCData(oldp+282,(0x14U),5);
    bufp->fullCData(oldp+283,(0x15U),5);
    bufp->fullCData(oldp+284,(0x16U),5);
    bufp->fullCData(oldp+285,(0x17U),5);
    bufp->fullCData(oldp+286,(0x18U),5);
    bufp->fullCData(oldp+287,(0x19U),5);
    bufp->fullCData(oldp+288,(0x1aU),5);
    bufp->fullCData(oldp+289,(0x1bU),5);
    bufp->fullCData(oldp+290,(0x1cU),5);
    bufp->fullCData(oldp+291,(0x1dU),5);
    bufp->fullCData(oldp+292,(0x1eU),5);
    bufp->fullCData(oldp+293,(0x1fU),5);
}
