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
    tracep->declBit(c+1868,"clock", false,-1);
    tracep->declBit(c+1869,"reset", false,-1);
    tracep->declQuad(c+1870,"io_pc", false,-1, 63,0);
    tracep->declBus(c+1872,"io_inst", false,-1, 31,0);
    tracep->pushNamePrefix("CoreTop ");
    tracep->declBit(c+1868,"clock", false,-1);
    tracep->declBit(c+1869,"reset", false,-1);
    tracep->declQuad(c+1870,"io_pc", false,-1, 63,0);
    tracep->declBus(c+1872,"io_inst", false,-1, 31,0);
    tracep->declBit(c+1868,"IF_clock", false,-1);
    tracep->declBit(c+1869,"IF_reset", false,-1);
    tracep->declBit(c+1798,"IF_io_branch_io_is_branch", false,-1);
    tracep->declBit(c+1,"IF_io_branch_io_is_jump", false,-1);
    tracep->declQuad(c+1799,"IF_io_branch_io_dnpc", false,-1, 63,0);
    tracep->declBit(c+2,"IF_io_cache_req_addr_req_valid", false,-1);
    tracep->declQuad(c+3,"IF_io_cache_req_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+2,"IF_io_cache_req_rdata_rep_ready", false,-1);
    tracep->declBit(c+1827,"IF_io_cache_req_rdata_rep_valid", false,-1);
    tracep->declQuad(c+5,"IF_io_cache_req_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+2,"IF_io_out_ready", false,-1);
    tracep->declBit(c+1827,"IF_io_out_valid", false,-1);
    tracep->declQuad(c+3,"IF_io_out_bits_PC", false,-1, 63,0);
    tracep->declBus(c+1801,"IF_io_out_bits_Inst", false,-1, 31,0);
    tracep->declBit(c+1828,"IF_io_flush", false,-1);
    tracep->declBit(c+2,"ID_io_in_ready", false,-1);
    tracep->declBit(c+7,"ID_io_in_valid", false,-1);
    tracep->declQuad(c+8,"ID_io_in_bits_PC", false,-1, 63,0);
    tracep->declBus(c+10,"ID_io_in_bits_Inst", false,-1, 31,0);
    tracep->declQuad(c+1802,"ID_io_REG1", false,-1, 63,0);
    tracep->declQuad(c+1804,"ID_io_REG2", false,-1, 63,0);
    tracep->declBit(c+1828,"ID_io_flush", false,-1);
    tracep->declBit(c+2,"ID_io_out_ready", false,-1);
    tracep->declBit(c+7,"ID_io_out_valid", false,-1);
    tracep->declBus(c+11,"ID_io_out_bits_ctrl_signal_src1Type", false,-1, 2,0);
    tracep->declBus(c+12,"ID_io_out_bits_ctrl_signal_src2Type", false,-1, 2,0);
    tracep->declBus(c+13,"ID_io_out_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+1806,"ID_io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBus(c+14,"ID_io_out_bits_ctrl_signal_rfSrc1", false,-1, 4,0);
    tracep->declBus(c+15,"ID_io_out_bits_ctrl_signal_rfSrc2", false,-1, 4,0);
    tracep->declBit(c+16,"ID_io_out_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+17,"ID_io_out_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declBus(c+18,"ID_io_out_bits_ctrl_signal_rfDest", false,-1, 4,0);
    tracep->declQuad(c+1802,"ID_io_out_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+1804,"ID_io_out_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+19,"ID_io_out_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declQuad(c+8,"ID_io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+10,"ID_io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declBit(c+1868,"EX_clock", false,-1);
    tracep->declBit(c+1869,"EX_reset", false,-1);
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
    tracep->declQuad(c+1829,"EX_io_src1", false,-1, 63,0);
    tracep->declQuad(c+1831,"EX_io_src2", false,-1, 63,0);
    tracep->declBit(c+1798,"EX_io_branchIO_is_branch", false,-1);
    tracep->declBit(c+1,"EX_io_branchIO_is_jump", false,-1);
    tracep->declQuad(c+1799,"EX_io_branchIO_dnpc", false,-1, 63,0);
    tracep->declBit(c+1873,"EX_io_out_ready", false,-1);
    tracep->declBit(c+40,"EX_io_out_valid", false,-1);
    tracep->declBus(c+24,"EX_io_out_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+25,"EX_io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+28,"EX_io_out_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+29,"EX_io_out_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+37,"EX_io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+39,"EX_io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+1799,"EX_io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+30,"EX_io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+41,"EX_io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+1833,"EX_io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+1807,"EX_io_out_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+1809,"EX_io_out_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+35,"EX_io_out_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declBit(c+42,"EX_io_is_break", false,-1);
    tracep->declBit(c+1828,"EX_io_is_flush", false,-1);
    tracep->declBit(c+43,"DIP_is_break", false,-1);
    tracep->declQuad(c+44,"DIP_rf_0", false,-1, 63,0);
    tracep->declQuad(c+46,"DIP_rf_1", false,-1, 63,0);
    tracep->declQuad(c+48,"DIP_rf_2", false,-1, 63,0);
    tracep->declQuad(c+50,"DIP_rf_3", false,-1, 63,0);
    tracep->declQuad(c+52,"DIP_rf_4", false,-1, 63,0);
    tracep->declQuad(c+54,"DIP_rf_5", false,-1, 63,0);
    tracep->declQuad(c+56,"DIP_rf_6", false,-1, 63,0);
    tracep->declQuad(c+58,"DIP_rf_7", false,-1, 63,0);
    tracep->declQuad(c+60,"DIP_rf_8", false,-1, 63,0);
    tracep->declQuad(c+62,"DIP_rf_9", false,-1, 63,0);
    tracep->declQuad(c+64,"DIP_rf_10", false,-1, 63,0);
    tracep->declQuad(c+66,"DIP_rf_11", false,-1, 63,0);
    tracep->declQuad(c+68,"DIP_rf_12", false,-1, 63,0);
    tracep->declQuad(c+70,"DIP_rf_13", false,-1, 63,0);
    tracep->declQuad(c+72,"DIP_rf_14", false,-1, 63,0);
    tracep->declQuad(c+74,"DIP_rf_15", false,-1, 63,0);
    tracep->declQuad(c+76,"DIP_rf_16", false,-1, 63,0);
    tracep->declQuad(c+78,"DIP_rf_17", false,-1, 63,0);
    tracep->declQuad(c+80,"DIP_rf_18", false,-1, 63,0);
    tracep->declQuad(c+82,"DIP_rf_19", false,-1, 63,0);
    tracep->declQuad(c+84,"DIP_rf_20", false,-1, 63,0);
    tracep->declQuad(c+86,"DIP_rf_21", false,-1, 63,0);
    tracep->declQuad(c+88,"DIP_rf_22", false,-1, 63,0);
    tracep->declQuad(c+90,"DIP_rf_23", false,-1, 63,0);
    tracep->declQuad(c+92,"DIP_rf_24", false,-1, 63,0);
    tracep->declQuad(c+94,"DIP_rf_25", false,-1, 63,0);
    tracep->declQuad(c+96,"DIP_rf_26", false,-1, 63,0);
    tracep->declQuad(c+98,"DIP_rf_27", false,-1, 63,0);
    tracep->declQuad(c+100,"DIP_rf_28", false,-1, 63,0);
    tracep->declQuad(c+102,"DIP_rf_29", false,-1, 63,0);
    tracep->declQuad(c+104,"DIP_rf_30", false,-1, 63,0);
    tracep->declQuad(c+106,"DIP_rf_31", false,-1, 63,0);
    tracep->declBus(c+108,"DIP_inst", false,-1, 31,0);
    tracep->declQuad(c+109,"DIP_pc", false,-1, 63,0);
    tracep->declBit(c+111,"DIP_inst_valid", false,-1);
    tracep->declQuad(c+112,"DIP_dnpc", false,-1, 63,0);
    tracep->declBit(c+114,"DIP_is_skip", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+115+i*2,"rf", true,(i+0), 63,0);
    }
    tracep->declBit(c+1873,"rf_bypass_io_Reg1_MPORT_en", false,-1);
    tracep->declBus(c+14,"rf_bypass_io_Reg1_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+179,"rf_bypass_io_Reg1_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+1873,"rf_bypass_io_Reg2_MPORT_en", false,-1);
    tracep->declBus(c+15,"rf_bypass_io_Reg2_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+181,"rf_bypass_io_Reg2_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+1873,"rf_DIP_io_rf_0_MPORT_en", false,-1);
    tracep->declBus(c+1874,"rf_DIP_io_rf_0_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+44,"rf_DIP_io_rf_0_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+1873,"rf_DIP_io_rf_1_MPORT_en", false,-1);
    tracep->declBus(c+1875,"rf_DIP_io_rf_1_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+46,"rf_DIP_io_rf_1_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+1873,"rf_DIP_io_rf_2_MPORT_en", false,-1);
    tracep->declBus(c+1876,"rf_DIP_io_rf_2_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+48,"rf_DIP_io_rf_2_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+1873,"rf_DIP_io_rf_3_MPORT_en", false,-1);
    tracep->declBus(c+1877,"rf_DIP_io_rf_3_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+50,"rf_DIP_io_rf_3_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+1873,"rf_DIP_io_rf_4_MPORT_en", false,-1);
    tracep->declBus(c+1878,"rf_DIP_io_rf_4_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+52,"rf_DIP_io_rf_4_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+1873,"rf_DIP_io_rf_5_MPORT_en", false,-1);
    tracep->declBus(c+1879,"rf_DIP_io_rf_5_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+54,"rf_DIP_io_rf_5_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+1873,"rf_DIP_io_rf_6_MPORT_en", false,-1);
    tracep->declBus(c+1880,"rf_DIP_io_rf_6_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+56,"rf_DIP_io_rf_6_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+1873,"rf_DIP_io_rf_7_MPORT_en", false,-1);
    tracep->declBus(c+1881,"rf_DIP_io_rf_7_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+58,"rf_DIP_io_rf_7_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+1873,"rf_DIP_io_rf_8_MPORT_en", false,-1);
    tracep->declBus(c+1882,"rf_DIP_io_rf_8_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+60,"rf_DIP_io_rf_8_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+1873,"rf_DIP_io_rf_9_MPORT_en", false,-1);
    tracep->declBus(c+1883,"rf_DIP_io_rf_9_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+62,"rf_DIP_io_rf_9_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+1873,"rf_DIP_io_rf_10_MPORT_en", false,-1);
    tracep->declBus(c+1884,"rf_DIP_io_rf_10_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+64,"rf_DIP_io_rf_10_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+1873,"rf_DIP_io_rf_11_MPORT_en", false,-1);
    tracep->declBus(c+1885,"rf_DIP_io_rf_11_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+66,"rf_DIP_io_rf_11_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+1873,"rf_DIP_io_rf_12_MPORT_en", false,-1);
    tracep->declBus(c+1886,"rf_DIP_io_rf_12_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+68,"rf_DIP_io_rf_12_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+1873,"rf_DIP_io_rf_13_MPORT_en", false,-1);
    tracep->declBus(c+1887,"rf_DIP_io_rf_13_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+70,"rf_DIP_io_rf_13_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+1873,"rf_DIP_io_rf_14_MPORT_en", false,-1);
    tracep->declBus(c+1888,"rf_DIP_io_rf_14_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+72,"rf_DIP_io_rf_14_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+1873,"rf_DIP_io_rf_15_MPORT_en", false,-1);
    tracep->declBus(c+1889,"rf_DIP_io_rf_15_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+74,"rf_DIP_io_rf_15_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+1873,"rf_DIP_io_rf_16_MPORT_en", false,-1);
    tracep->declBus(c+1890,"rf_DIP_io_rf_16_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+76,"rf_DIP_io_rf_16_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+1873,"rf_DIP_io_rf_17_MPORT_en", false,-1);
    tracep->declBus(c+1891,"rf_DIP_io_rf_17_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+78,"rf_DIP_io_rf_17_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+1873,"rf_DIP_io_rf_18_MPORT_en", false,-1);
    tracep->declBus(c+1892,"rf_DIP_io_rf_18_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+80,"rf_DIP_io_rf_18_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+1873,"rf_DIP_io_rf_19_MPORT_en", false,-1);
    tracep->declBus(c+1893,"rf_DIP_io_rf_19_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+82,"rf_DIP_io_rf_19_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+1873,"rf_DIP_io_rf_20_MPORT_en", false,-1);
    tracep->declBus(c+1894,"rf_DIP_io_rf_20_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+84,"rf_DIP_io_rf_20_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+1873,"rf_DIP_io_rf_21_MPORT_en", false,-1);
    tracep->declBus(c+1895,"rf_DIP_io_rf_21_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+86,"rf_DIP_io_rf_21_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+1873,"rf_DIP_io_rf_22_MPORT_en", false,-1);
    tracep->declBus(c+1896,"rf_DIP_io_rf_22_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+88,"rf_DIP_io_rf_22_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+1873,"rf_DIP_io_rf_23_MPORT_en", false,-1);
    tracep->declBus(c+1897,"rf_DIP_io_rf_23_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+90,"rf_DIP_io_rf_23_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+1873,"rf_DIP_io_rf_24_MPORT_en", false,-1);
    tracep->declBus(c+1898,"rf_DIP_io_rf_24_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+92,"rf_DIP_io_rf_24_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+1873,"rf_DIP_io_rf_25_MPORT_en", false,-1);
    tracep->declBus(c+1899,"rf_DIP_io_rf_25_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+94,"rf_DIP_io_rf_25_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+1873,"rf_DIP_io_rf_26_MPORT_en", false,-1);
    tracep->declBus(c+1900,"rf_DIP_io_rf_26_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+96,"rf_DIP_io_rf_26_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+1873,"rf_DIP_io_rf_27_MPORT_en", false,-1);
    tracep->declBus(c+1901,"rf_DIP_io_rf_27_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+98,"rf_DIP_io_rf_27_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+1873,"rf_DIP_io_rf_28_MPORT_en", false,-1);
    tracep->declBus(c+1902,"rf_DIP_io_rf_28_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+100,"rf_DIP_io_rf_28_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+1873,"rf_DIP_io_rf_29_MPORT_en", false,-1);
    tracep->declBus(c+1903,"rf_DIP_io_rf_29_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+102,"rf_DIP_io_rf_29_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+1873,"rf_DIP_io_rf_30_MPORT_en", false,-1);
    tracep->declBus(c+1904,"rf_DIP_io_rf_30_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+104,"rf_DIP_io_rf_30_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+1873,"rf_DIP_io_rf_31_MPORT_en", false,-1);
    tracep->declBus(c+1905,"rf_DIP_io_rf_31_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+106,"rf_DIP_io_rf_31_MPORT_data", false,-1, 63,0);
    tracep->declQuad(c+183,"rf_MPORT_data", false,-1, 63,0);
    tracep->declBus(c+185,"rf_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+1873,"rf_MPORT_mask", false,-1);
    tracep->declBit(c+186,"rf_MPORT_en", false,-1);
    tracep->declQuad(c+187,"mem_addr", false,-1, 63,0);
    tracep->declBit(c+1869,"mem_reset", false,-1);
    tracep->declBit(c+1868,"mem_clk", false,-1);
    tracep->declBit(c+189,"mem_we", false,-1);
    tracep->declBit(c+190,"mem_ce", false,-1);
    tracep->declQuad(c+191,"mem_wdata", false,-1, 63,0);
    tracep->declQuad(c+1835,"mem_rdata", false,-1, 63,0);
    tracep->declBus(c+193,"mem_wmask", false,-1, 7,0);
    tracep->declBit(c+194,"MEM_io_in_valid", false,-1);
    tracep->declBus(c+195,"MEM_io_in_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+196,"MEM_io_in_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+197,"MEM_io_in_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+198,"MEM_io_in_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+199,"MEM_io_in_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+201,"MEM_io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+202,"MEM_io_in_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+204,"MEM_io_in_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declQuad(c+205,"MEM_io_in_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+207,"MEM_io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+209,"MEM_io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+211,"MEM_io_in_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declBit(c+1873,"MEM_io_out_ready", false,-1);
    tracep->declBit(c+194,"MEM_io_out_valid", false,-1);
    tracep->declBit(c+213,"MEM_io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+197,"MEM_io_out_bits_ctrl_signal_rfWen", false,-1);
    tracep->declQuad(c+199,"MEM_io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+201,"MEM_io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+202,"MEM_io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBit(c+214,"MEM_io_out_bits_ctrl_flow_skip", false,-1);
    tracep->declBus(c+204,"MEM_io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+215,"MEM_io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+1837,"MEM_io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+187,"MEM_io_mem_addr", false,-1, 63,0);
    tracep->declQuad(c+1835,"MEM_io_mem_rdata", false,-1, 63,0);
    tracep->declQuad(c+191,"MEM_io_mem_wdata", false,-1, 63,0);
    tracep->declBus(c+193,"MEM_io_mem_wmask", false,-1, 7,0);
    tracep->declBit(c+190,"MEM_io_mem_ce", false,-1);
    tracep->declBit(c+189,"MEM_io_mem_we", false,-1);
    tracep->declBit(c+216,"WB_io_in_valid", false,-1);
    tracep->declBit(c+217,"WB_io_in_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+218,"WB_io_in_bits_ctrl_signal_rfWen", false,-1);
    tracep->declQuad(c+219,"WB_io_in_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+221,"WB_io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+222,"WB_io_in_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBit(c+224,"WB_io_in_bits_ctrl_flow_skip", false,-1);
    tracep->declBus(c+185,"WB_io_in_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declQuad(c+225,"WB_io_in_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declBit(c+1873,"WB_io_out_ready", false,-1);
    tracep->declBit(c+216,"WB_io_out_valid", false,-1);
    tracep->declBit(c+227,"WB_io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declQuad(c+219,"WB_io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+221,"WB_io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+222,"WB_io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBit(c+224,"WB_io_out_bits_ctrl_flow_skip", false,-1);
    tracep->declBus(c+185,"WB_io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+186,"WB_io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+225,"WB_io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+30,"bypass_io_EX_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+41,"bypass_io_EX_rf_rfWen", false,-1);
    tracep->declQuad(c+1833,"bypass_io_EX_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+204,"bypass_io_MEM_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+215,"bypass_io_MEM_rf_rfWen", false,-1);
    tracep->declQuad(c+1837,"bypass_io_MEM_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+185,"bypass_io_WB_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+186,"bypass_io_WB_rf_rfWen", false,-1);
    tracep->declQuad(c+225,"bypass_io_WB_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+228,"bypass_io_Reg1", false,-1, 63,0);
    tracep->declBus(c+14,"bypass_io_reg_index1", false,-1, 4,0);
    tracep->declQuad(c+230,"bypass_io_Reg2", false,-1, 63,0);
    tracep->declBus(c+15,"bypass_io_reg_index2", false,-1, 4,0);
    tracep->declQuad(c+1802,"bypass_io_Bypass_REG1", false,-1, 63,0);
    tracep->declQuad(c+1804,"bypass_io_Bypass_REG2", false,-1, 63,0);
    tracep->declBus(c+204,"mem_bypass_io_MEM_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+215,"mem_bypass_io_MEM_rf_rfWen", false,-1);
    tracep->declQuad(c+1837,"mem_bypass_io_MEM_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+31,"mem_bypass_io_Reg1", false,-1, 63,0);
    tracep->declBus(c+26,"mem_bypass_io_reg_index1", false,-1, 4,0);
    tracep->declQuad(c+33,"mem_bypass_io_Reg2", false,-1, 63,0);
    tracep->declBus(c+27,"mem_bypass_io_reg_index2", false,-1, 4,0);
    tracep->declQuad(c+1829,"mem_bypass_io_Bypass_REG1", false,-1, 63,0);
    tracep->declQuad(c+1831,"mem_bypass_io_Bypass_REG2", false,-1, 63,0);
    tracep->declBit(c+1868,"ICACHE_clock", false,-1);
    tracep->declBit(c+1869,"ICACHE_reset", false,-1);
    tracep->declBit(c+2,"ICACHE_io_in_addr_req_valid", false,-1);
    tracep->declQuad(c+3,"ICACHE_io_in_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+2,"ICACHE_io_in_rdata_rep_ready", false,-1);
    tracep->declBit(c+1827,"ICACHE_io_in_rdata_rep_valid", false,-1);
    tracep->declQuad(c+5,"ICACHE_io_in_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+1828,"ICACHE_io_flush", false,-1);
    tracep->declQuad(c+232,"ICACHE_io_out_bits_addr", false,-1, 63,0);
    tracep->declBit(c+234,"ICACHE_io_out_bits_ce", false,-1);
    tracep->declQuad(c+1839,"ICACHE_io_mem_rdata", false,-1, 63,0);
    tracep->declQuad(c+232,"IFMEM_addr", false,-1, 63,0);
    tracep->declBit(c+1869,"IFMEM_reset", false,-1);
    tracep->declBit(c+1868,"IFMEM_clk", false,-1);
    tracep->declBit(c+1906,"IFMEM_we", false,-1);
    tracep->declBit(c+234,"IFMEM_ce", false,-1);
    tracep->declQuad(c+1907,"IFMEM_wdata", false,-1, 63,0);
    tracep->declQuad(c+1839,"IFMEM_rdata", false,-1, 63,0);
    tracep->declBus(c+1909,"IFMEM_wmask", false,-1, 7,0);
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
    tracep->declBit(c+194,"valid_2", false,-1);
    tracep->declBus(c+195,"MEM_io_in_bits_r_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+196,"MEM_io_in_bits_r_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+197,"MEM_io_in_bits_r_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+198,"MEM_io_in_bits_r_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+199,"MEM_io_in_bits_r_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+201,"MEM_io_in_bits_r_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+202,"MEM_io_in_bits_r_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+204,"MEM_io_in_bits_r_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declQuad(c+205,"MEM_io_in_bits_r_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+207,"MEM_io_in_bits_r_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+209,"MEM_io_in_bits_r_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+211,"MEM_io_in_bits_r_ctrl_data_Imm", false,-1, 63,0);
    tracep->declBit(c+216,"valid_3", false,-1);
    tracep->declBit(c+217,"WB_io_in_bits_r_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+218,"WB_io_in_bits_r_ctrl_signal_rfWen", false,-1);
    tracep->declQuad(c+219,"WB_io_in_bits_r_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+221,"WB_io_in_bits_r_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+222,"WB_io_in_bits_r_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBit(c+224,"WB_io_in_bits_r_ctrl_flow_skip", false,-1);
    tracep->declBus(c+185,"WB_io_in_bits_r_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declQuad(c+225,"WB_io_in_bits_r_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declBit(c+235,"DIP_io_is_break_REG", false,-1);
    tracep->declBit(c+43,"DIP_io_is_break_REG_1", false,-1);
    tracep->declBus(c+108,"DIP_io_inst_REG", false,-1, 31,0);
    tracep->declBit(c+114,"DIP_io_is_skip_REG", false,-1);
    tracep->declBit(c+111,"DIP_io_inst_valid_REG", false,-1);
    tracep->declQuad(c+109,"DIP_io_pc_REG", false,-1, 63,0);
    tracep->declQuad(c+112,"DIP_io_dnpc_REG", false,-1, 63,0);
    tracep->pushNamePrefix("DIP ");
    tracep->declBit(c+43,"is_break", false,-1);
    tracep->declBus(c+108,"inst", false,-1, 31,0);
    tracep->declQuad(c+44,"rf_0", false,-1, 63,0);
    tracep->declQuad(c+46,"rf_1", false,-1, 63,0);
    tracep->declQuad(c+48,"rf_2", false,-1, 63,0);
    tracep->declQuad(c+50,"rf_3", false,-1, 63,0);
    tracep->declQuad(c+52,"rf_4", false,-1, 63,0);
    tracep->declQuad(c+54,"rf_5", false,-1, 63,0);
    tracep->declQuad(c+56,"rf_6", false,-1, 63,0);
    tracep->declQuad(c+58,"rf_7", false,-1, 63,0);
    tracep->declQuad(c+60,"rf_8", false,-1, 63,0);
    tracep->declQuad(c+62,"rf_9", false,-1, 63,0);
    tracep->declQuad(c+64,"rf_10", false,-1, 63,0);
    tracep->declQuad(c+66,"rf_11", false,-1, 63,0);
    tracep->declQuad(c+68,"rf_12", false,-1, 63,0);
    tracep->declQuad(c+70,"rf_13", false,-1, 63,0);
    tracep->declQuad(c+72,"rf_14", false,-1, 63,0);
    tracep->declQuad(c+74,"rf_15", false,-1, 63,0);
    tracep->declQuad(c+76,"rf_16", false,-1, 63,0);
    tracep->declQuad(c+78,"rf_17", false,-1, 63,0);
    tracep->declQuad(c+80,"rf_18", false,-1, 63,0);
    tracep->declQuad(c+82,"rf_19", false,-1, 63,0);
    tracep->declQuad(c+84,"rf_20", false,-1, 63,0);
    tracep->declQuad(c+86,"rf_21", false,-1, 63,0);
    tracep->declQuad(c+88,"rf_22", false,-1, 63,0);
    tracep->declQuad(c+90,"rf_23", false,-1, 63,0);
    tracep->declQuad(c+92,"rf_24", false,-1, 63,0);
    tracep->declQuad(c+94,"rf_25", false,-1, 63,0);
    tracep->declQuad(c+96,"rf_26", false,-1, 63,0);
    tracep->declQuad(c+98,"rf_27", false,-1, 63,0);
    tracep->declQuad(c+100,"rf_28", false,-1, 63,0);
    tracep->declQuad(c+102,"rf_29", false,-1, 63,0);
    tracep->declQuad(c+104,"rf_30", false,-1, 63,0);
    tracep->declQuad(c+106,"rf_31", false,-1, 63,0);
    tracep->declBit(c+111,"inst_valid", false,-1);
    tracep->declBit(c+114,"is_skip", false,-1);
    tracep->declQuad(c+109,"pc", false,-1, 63,0);
    tracep->declQuad(c+112,"dnpc", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+236+i*2,"rf", true,(i+0), 63,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+300+i*1,"IN", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EX ");
    tracep->declBit(c+1868,"clock", false,-1);
    tracep->declBit(c+1869,"reset", false,-1);
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
    tracep->declQuad(c+1829,"io_src1", false,-1, 63,0);
    tracep->declQuad(c+1831,"io_src2", false,-1, 63,0);
    tracep->declBit(c+1798,"io_branchIO_is_branch", false,-1);
    tracep->declBit(c+1,"io_branchIO_is_jump", false,-1);
    tracep->declQuad(c+1799,"io_branchIO_dnpc", false,-1, 63,0);
    tracep->declBit(c+1873,"io_out_ready", false,-1);
    tracep->declBit(c+40,"io_out_valid", false,-1);
    tracep->declBus(c+24,"io_out_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+25,"io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+28,"io_out_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+29,"io_out_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+37,"io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+39,"io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+1799,"io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+30,"io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+41,"io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+1833,"io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+1807,"io_out_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+1809,"io_out_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+35,"io_out_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declBit(c+42,"io_is_break", false,-1);
    tracep->declBit(c+1828,"io_is_flush", false,-1);
    tracep->declQuad(c+307,"CSRDIFF_mepc", false,-1, 63,0);
    tracep->declQuad(c+309,"CSRDIFF_mcause", false,-1, 63,0);
    tracep->declQuad(c+311,"CSRDIFF_mstatus", false,-1, 63,0);
    tracep->declQuad(c+313,"CSRDIFF_mtvec", false,-1, 63,0);
    tracep->declBit(c+1868,"mul_clock", false,-1);
    tracep->declBit(c+1869,"mul_reset", false,-1);
    tracep->declBit(c+315,"mul_io_in_valid", false,-1);
    tracep->declQuad(c+1811,"mul_io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+1813,"mul_io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declBit(c+316,"mul_io_out_valid", false,-1);
    tracep->declQuad(c+317,"mul_io_out_bits_result_result_lo", false,-1, 63,0);
    tracep->declBit(c+1868,"div_clock", false,-1);
    tracep->declBit(c+1869,"div_reset", false,-1);
    tracep->declBit(c+319,"div_io_in_valid", false,-1);
    tracep->declBit(c+320,"div_io_in_bits_ctrl_flow_div_signed", false,-1);
    tracep->declQuad(c+1841,"div_io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+1843,"div_io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declBit(c+321,"div_io_out_valid", false,-1);
    tracep->declQuad(c+1845,"div_io_out_bits_result_quotient", false,-1, 63,0);
    tracep->declQuad(c+1847,"div_io_out_bits_result_remainder", false,-1, 63,0);
    tracep->declBit(c+322,"is_mul", false,-1);
    tracep->declBit(c+323,"is_div", false,-1);
    tracep->declBit(c+324,"is_divw", false,-1);
    tracep->declBit(c+320,"is_div_sign", false,-1);
    tracep->declQuad(c+325,"mepc", false,-1, 63,0);
    tracep->declQuad(c+327,"mcause", false,-1, 63,0);
    tracep->declQuad(c+329,"mstatus", false,-1, 63,0);
    tracep->declQuad(c+331,"mtvec", false,-1, 63,0);
    tracep->declQuad(c+333,"mie", false,-1, 63,0);
    tracep->declQuad(c+335,"mip", false,-1, 63,0);
    tracep->declQuad(c+1849,"src1", false,-1, 63,0);
    tracep->declQuad(c+1851,"src2", false,-1, 63,0);
    tracep->declBit(c+1853,"alu_result_sign", false,-1);
    tracep->declBit(c+337,"alu_result_sign_2", false,-1);
    tracep->declBit(c+1854,"alu_result_sign_3", false,-1);
    tracep->declBit(c+1855,"alu_result_sign_4", false,-1);
    tracep->declBit(c+1856,"alu_result_sign_6", false,-1);
    tracep->declQuad(c+1815,"alu_result", false,-1, 63,0);
    tracep->declBit(c+1857,"shift_result_sign", false,-1);
    tracep->declBit(c+1858,"shift_result_sign_1", false,-1);
    tracep->declBit(c+1859,"shift_result_sign_2", false,-1);
    tracep->declBit(c+1860,"shift_result_sign_3", false,-1);
    tracep->declBit(c+1861,"div_io_in_bits_ctrl_data_src1_sign", false,-1);
    tracep->declBit(c+1862,"div_io_in_bits_ctrl_data_src2_sign", false,-1);
    tracep->declQuad(c+1817,"compar_result", false,-1, 63,0);
    tracep->declQuad(c+338,"jump_result", false,-1, 63,0);
    tracep->declQuad(c+1819,"shift_result", false,-1, 63,0);
    tracep->declQuad(c+340,"branch_result", false,-1, 63,0);
    tracep->declBit(c+1863,"branch_flag", false,-1);
    tracep->declQuad(c+342,"csr_data", false,-1, 63,0);
    tracep->declQuad(c+344,"CSRDIFF_io_mtvec_REG", false,-1, 63,0);
    tracep->declQuad(c+313,"CSRDIFF_io_mtvec_REG_1", false,-1, 63,0);
    tracep->declQuad(c+346,"CSRDIFF_io_mcause_REG", false,-1, 63,0);
    tracep->declQuad(c+309,"CSRDIFF_io_mcause_REG_1", false,-1, 63,0);
    tracep->declQuad(c+348,"CSRDIFF_io_mepc_REG", false,-1, 63,0);
    tracep->declQuad(c+307,"CSRDIFF_io_mepc_REG_1", false,-1, 63,0);
    tracep->declQuad(c+350,"CSRDIFF_io_mstatus_REG", false,-1, 63,0);
    tracep->declQuad(c+311,"CSRDIFF_io_mstatus_REG_1", false,-1, 63,0);
    tracep->pushNamePrefix("CSRDIFF ");
    tracep->declQuad(c+307,"mepc", false,-1, 63,0);
    tracep->declQuad(c+309,"mcause", false,-1, 63,0);
    tracep->declQuad(c+311,"mstatus", false,-1, 63,0);
    tracep->declQuad(c+313,"mtvec", false,-1, 63,0);
    for (int i = 0; i < 6; ++i) {
        tracep->declQuad(c+352+i*2,"inst_csr", true,(i+0), 63,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("div ");
    tracep->declBit(c+1868,"clock", false,-1);
    tracep->declBit(c+1869,"reset", false,-1);
    tracep->declBit(c+319,"io_in_valid", false,-1);
    tracep->declBit(c+320,"io_in_bits_ctrl_flow_div_signed", false,-1);
    tracep->declQuad(c+1841,"io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+1843,"io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declBit(c+321,"io_out_valid", false,-1);
    tracep->declQuad(c+1845,"io_out_bits_result_quotient", false,-1, 63,0);
    tracep->declQuad(c+1847,"io_out_bits_result_remainder", false,-1, 63,0);
    tracep->declArray(c+364,"dividend", false,-1, 127,0);
    tracep->declQuad(c+368,"divisor", false,-1, 63,0);
    tracep->declQuad(c+370,"S", false,-1, 63,0);
    tracep->declBus(c+372,"state", false,-1, 1,0);
    tracep->declBus(c+373,"count", false,-1, 5,0);
    tracep->declBit(c+374,"wrap_wrap", false,-1);
    tracep->declBit(c+375,"s", false,-1);
    tracep->declArray(c+376,"res_div", false,-1, 64,0);
    tracep->declQuad(c+379,"negative_s", false,-1, 63,0);
    tracep->declQuad(c+381,"negative_r", false,-1, 63,0);
    tracep->declQuad(c+1821,"s_o", false,-1, 63,0);
    tracep->declQuad(c+1823,"r_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mul ");
    tracep->declBit(c+1868,"clock", false,-1);
    tracep->declBit(c+1869,"reset", false,-1);
    tracep->declBit(c+315,"io_in_valid", false,-1);
    tracep->declQuad(c+1811,"io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+1813,"io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declBit(c+316,"io_out_valid", false,-1);
    tracep->declQuad(c+317,"io_out_bits_result_result_lo", false,-1, 63,0);
    tracep->declBit(c+1868,"mult_clock", false,-1);
    tracep->declBit(c+1869,"mult_reset", false,-1);
    tracep->declBit(c+315,"mult_io_in_valid", false,-1);
    tracep->declQuad(c+1811,"mult_io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+1813,"mult_io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declBit(c+316,"mult_io_out_valid", false,-1);
    tracep->declQuad(c+317,"mult_io_out_bits_result_result_lo", false,-1, 63,0);
    tracep->pushNamePrefix("mult ");
    tracep->declBit(c+1868,"clock", false,-1);
    tracep->declBit(c+1869,"reset", false,-1);
    tracep->declBit(c+315,"io_in_valid", false,-1);
    tracep->declQuad(c+1811,"io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+1813,"io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declBit(c+316,"io_out_valid", false,-1);
    tracep->declQuad(c+317,"io_out_bits_result_result_lo", false,-1, 63,0);
    tracep->declBus(c+383,"partial_io_y_3", false,-1, 2,0);
    tracep->declArray(c+384,"partial_io_x", false,-1, 131,0);
    tracep->declArray(c+389,"partial_io_p", false,-1, 131,0);
    tracep->declBit(c+394,"partial_io_c", false,-1);
    tracep->declArray(c+395,"multiplier", false,-1, 65,0);
    tracep->declArray(c+384,"multiplicand", false,-1, 131,0);
    tracep->declArray(c+398,"p", false,-1, 131,0);
    tracep->declBus(c+403,"count", false,-1, 6,0);
    tracep->declArray(c+404,"temp", false,-1, 131,0);
    tracep->declBit(c+409,"p_sign", false,-1);
    tracep->pushNamePrefix("partial ");
    tracep->declBus(c+383,"io_y_3", false,-1, 2,0);
    tracep->declArray(c+384,"io_x", false,-1, 131,0);
    tracep->declArray(c+389,"io_p", false,-1, 131,0);
    tracep->declBit(c+394,"io_c", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("ICACHE ");
    tracep->declBit(c+1868,"clock", false,-1);
    tracep->declBit(c+1869,"reset", false,-1);
    tracep->declBit(c+2,"io_in_addr_req_valid", false,-1);
    tracep->declQuad(c+3,"io_in_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+2,"io_in_rdata_rep_ready", false,-1);
    tracep->declBit(c+1827,"io_in_rdata_rep_valid", false,-1);
    tracep->declQuad(c+5,"io_in_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+1828,"io_flush", false,-1);
    tracep->declQuad(c+232,"io_out_bits_addr", false,-1, 63,0);
    tracep->declBit(c+234,"io_out_bits_ce", false,-1);
    tracep->declQuad(c+1839,"io_mem_rdata", false,-1, 63,0);
    tracep->declBit(c+1868,"Cache_data_clock", false,-1);
    tracep->declBit(c+410,"Cache_data_io_in_valid", false,-1);
    tracep->declQuad(c+3,"Cache_data_io_in_addr", false,-1, 63,0);
    tracep->declQuad(c+411,"Cache_data_io_write_bus_addr", false,-1, 63,0);
    tracep->declBit(c+413,"Cache_data_io_write_bus_valid", false,-1);
    tracep->declBus(c+414,"Cache_data_io_write_bus_waymask", false,-1, 1,0);
    tracep->declArray(c+415,"Cache_data_io_write_bus_wdata", false,-1, 511,0);
    tracep->declBit(c+410,"Cache_data_io_out_valid", false,-1);
    tracep->declQuad(c+431,"Cache_data_io_out_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+433,"Cache_data_io_out_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+435,"Cache_data_io_out_bits_meat_valid_0", false,-1);
    tracep->declBit(c+436,"Cache_data_io_out_bits_meat_valid_1", false,-1);
    tracep->declArray(c+437,"Cache_data_io_out_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+453,"Cache_data_io_out_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+469,"Cache_data_io_out_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBus(c+471,"Cache_data_io_out_bits_ctrl_data_index", false,-1, 4,0);
    tracep->declBit(c+472,"Scanf_io_in_valid", false,-1);
    tracep->declQuad(c+431,"Scanf_io_in_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+433,"Scanf_io_in_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+435,"Scanf_io_in_bits_meat_valid_0", false,-1);
    tracep->declBit(c+436,"Scanf_io_in_bits_meat_valid_1", false,-1);
    tracep->declArray(c+437,"Scanf_io_in_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+453,"Scanf_io_in_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+469,"Scanf_io_in_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBit(c+473,"Scanf_io_out_bits_hit", false,-1);
    tracep->declArray(c+474,"Scanf_io_out_bits_data", false,-1, 511,0);
    tracep->declBit(c+490,"Scanf_io_out_bits_hit_way_0", false,-1);
    tracep->declBit(c+491,"Scanf_io_out_bits_hit_way_1", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+492+i*1,"lru", true,(i+0));
    }
    tracep->declBit(c+524,"lru_lru_w_MPORT_en", false,-1);
    tracep->declBus(c+525,"lru_lru_w_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+526,"lru_lru_w_MPORT_data", false,-1);
    tracep->declBit(c+1873,"lru_MPORT_data", false,-1);
    tracep->declBus(c+471,"lru_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+1873,"lru_MPORT_mask", false,-1);
    tracep->declBit(c+527,"lru_MPORT_en", false,-1);
    tracep->declBit(c+1906,"lru_MPORT_1_data", false,-1);
    tracep->declBus(c+471,"lru_MPORT_1_addr", false,-1, 4,0);
    tracep->declBit(c+1873,"lru_MPORT_1_mask", false,-1);
    tracep->declBit(c+528,"lru_MPORT_1_en", false,-1);
    tracep->declBit(c+1906,"lru_MPORT_2_data", false,-1);
    tracep->declBus(c+471,"lru_MPORT_2_addr", false,-1, 4,0);
    tracep->declBit(c+1873,"lru_MPORT_2_mask", false,-1);
    tracep->declBit(c+529,"lru_MPORT_2_en", false,-1);
    tracep->declBit(c+1873,"lru_MPORT_3_data", false,-1);
    tracep->declBus(c+471,"lru_MPORT_3_addr", false,-1, 4,0);
    tracep->declBit(c+1873,"lru_MPORT_3_mask", false,-1);
    tracep->declBit(c+530,"lru_MPORT_3_en", false,-1);
    tracep->declBit(c+524,"lru_lru_w_MPORT_en_pipe_0", false,-1);
    tracep->declBus(c+525,"lru_lru_w_MPORT_addr_pipe_0", false,-1, 4,0);
    tracep->declBus(c+531,"state", false,-1, 1,0);
    tracep->declArray(c+532,"data_line_reg", false,-1, 511,0);
    tracep->declQuad(c+232,"mem_addr_reg", false,-1, 63,0);
    tracep->declBit(c+548,"lru_r", false,-1);
    tracep->declBus(c+549,"count", false,-1, 3,0);
    tracep->declBit(c+413,"s", false,-1);
    tracep->declBit(c+490,"hit_way_0", false,-1);
    tracep->declBit(c+491,"hit_way_1", false,-1);
    tracep->declBit(c+526,"lru_w", false,-1);
    tracep->declQuad(c+550,"hit_data", false,-1, 63,0);
    tracep->declQuad(c+552,"mem_data", false,-1, 63,0);
    tracep->declBit(c+472,"Scanf_io_in_valid_REG", false,-1);
    tracep->pushNamePrefix("Cache_data ");
    tracep->declBit(c+1868,"clock", false,-1);
    tracep->declBit(c+410,"io_in_valid", false,-1);
    tracep->declQuad(c+3,"io_in_addr", false,-1, 63,0);
    tracep->declQuad(c+411,"io_write_bus_addr", false,-1, 63,0);
    tracep->declBit(c+413,"io_write_bus_valid", false,-1);
    tracep->declBus(c+414,"io_write_bus_waymask", false,-1, 1,0);
    tracep->declArray(c+415,"io_write_bus_wdata", false,-1, 511,0);
    tracep->declBit(c+410,"io_out_valid", false,-1);
    tracep->declQuad(c+431,"io_out_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+433,"io_out_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+435,"io_out_bits_meat_valid_0", false,-1);
    tracep->declBit(c+436,"io_out_bits_meat_valid_1", false,-1);
    tracep->declArray(c+437,"io_out_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+453,"io_out_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+469,"io_out_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBus(c+471,"io_out_bits_ctrl_data_index", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declArray(c+554+i*16,"data_0", true,(i+0), 511,0);
    }
    tracep->declBit(c+1066,"data_0_data_w_en", false,-1);
    tracep->declBus(c+1067,"data_0_data_w_addr", false,-1, 4,0);
    tracep->declArray(c+437,"data_0_data_w_data", false,-1, 511,0);
    tracep->declArray(c+415,"data_0_MPORT_data", false,-1, 511,0);
    tracep->declBus(c+1068,"data_0_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+1069,"data_0_MPORT_mask", false,-1);
    tracep->declBit(c+413,"data_0_MPORT_en", false,-1);
    tracep->declBit(c+1066,"data_0_data_w_en_pipe_0", false,-1);
    tracep->declBus(c+1067,"data_0_data_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declArray(c+1070+i*16,"data_1", true,(i+0), 511,0);
    }
    tracep->declBit(c+1582,"data_1_data_w_en", false,-1);
    tracep->declBus(c+1067,"data_1_data_w_addr", false,-1, 4,0);
    tracep->declArray(c+453,"data_1_data_w_data", false,-1, 511,0);
    tracep->declArray(c+415,"data_1_MPORT_data", false,-1, 511,0);
    tracep->declBus(c+1068,"data_1_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+1583,"data_1_MPORT_mask", false,-1);
    tracep->declBit(c+413,"data_1_MPORT_en", false,-1);
    tracep->declBit(c+1582,"data_1_data_w_en_pipe_0", false,-1);
    tracep->declBus(c+1067,"data_1_data_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+1584+i*2,"TAG_0", true,(i+0), 52,0);
    }
    tracep->declBit(c+1648,"TAG_0_tag_w_en", false,-1);
    tracep->declBus(c+1649,"TAG_0_tag_w_addr", false,-1, 4,0);
    tracep->declQuad(c+431,"TAG_0_tag_w_data", false,-1, 52,0);
    tracep->declQuad(c+1650,"TAG_0_MPORT_1_data", false,-1, 52,0);
    tracep->declBus(c+1068,"TAG_0_MPORT_1_addr", false,-1, 4,0);
    tracep->declBit(c+1069,"TAG_0_MPORT_1_mask", false,-1);
    tracep->declBit(c+413,"TAG_0_MPORT_1_en", false,-1);
    tracep->declBit(c+1648,"TAG_0_tag_w_en_pipe_0", false,-1);
    tracep->declBus(c+1649,"TAG_0_tag_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+1652+i*2,"TAG_1", true,(i+0), 52,0);
    }
    tracep->declBit(c+1716,"TAG_1_tag_w_en", false,-1);
    tracep->declBus(c+1717,"TAG_1_tag_w_addr", false,-1, 4,0);
    tracep->declQuad(c+433,"TAG_1_tag_w_data", false,-1, 52,0);
    tracep->declQuad(c+1650,"TAG_1_MPORT_1_data", false,-1, 52,0);
    tracep->declBus(c+1068,"TAG_1_MPORT_1_addr", false,-1, 4,0);
    tracep->declBit(c+1583,"TAG_1_MPORT_1_mask", false,-1);
    tracep->declBit(c+413,"TAG_1_MPORT_1_en", false,-1);
    tracep->declBit(c+1716,"TAG_1_tag_w_en_pipe_0", false,-1);
    tracep->declBus(c+1717,"TAG_1_tag_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+1718+i*1,"data_valid_0", true,(i+0));
    }
    tracep->declBit(c+1750,"data_valid_0_valid_w_en", false,-1);
    tracep->declBus(c+1751,"data_valid_0_valid_w_addr", false,-1, 4,0);
    tracep->declBit(c+435,"data_valid_0_valid_w_data", false,-1);
    tracep->declBit(c+1873,"data_valid_0_MPORT_2_data", false,-1);
    tracep->declBus(c+1068,"data_valid_0_MPORT_2_addr", false,-1, 4,0);
    tracep->declBit(c+1069,"data_valid_0_MPORT_2_mask", false,-1);
    tracep->declBit(c+413,"data_valid_0_MPORT_2_en", false,-1);
    tracep->declBit(c+1750,"data_valid_0_valid_w_en_pipe_0", false,-1);
    tracep->declBus(c+1751,"data_valid_0_valid_w_addr_pipe_0", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+1752+i*1,"data_valid_1", true,(i+0));
    }
    tracep->declBit(c+1784,"data_valid_1_valid_w_en", false,-1);
    tracep->declBus(c+1785,"data_valid_1_valid_w_addr", false,-1, 4,0);
    tracep->declBit(c+436,"data_valid_1_valid_w_data", false,-1);
    tracep->declBit(c+1873,"data_valid_1_MPORT_2_data", false,-1);
    tracep->declBus(c+1068,"data_valid_1_MPORT_2_addr", false,-1, 4,0);
    tracep->declBit(c+1583,"data_valid_1_MPORT_2_mask", false,-1);
    tracep->declBit(c+413,"data_valid_1_MPORT_2_en", false,-1);
    tracep->declBit(c+1784,"data_valid_1_valid_w_en_pipe_0", false,-1);
    tracep->declBus(c+1785,"data_valid_1_valid_w_addr_pipe_0", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Scanf ");
    tracep->declBit(c+472,"io_in_valid", false,-1);
    tracep->declQuad(c+431,"io_in_bits_meat_tag_0", false,-1, 52,0);
    tracep->declQuad(c+433,"io_in_bits_meat_tag_1", false,-1, 52,0);
    tracep->declBit(c+435,"io_in_bits_meat_valid_0", false,-1);
    tracep->declBit(c+436,"io_in_bits_meat_valid_1", false,-1);
    tracep->declArray(c+437,"io_in_bits_data_data_0", false,-1, 511,0);
    tracep->declArray(c+453,"io_in_bits_data_data_1", false,-1, 511,0);
    tracep->declQuad(c+469,"io_in_bits_ctrl_data_tag", false,-1, 52,0);
    tracep->declBit(c+473,"io_out_bits_hit", false,-1);
    tracep->declArray(c+474,"io_out_bits_data", false,-1, 511,0);
    tracep->declBit(c+490,"io_out_bits_hit_way_0", false,-1);
    tracep->declBit(c+491,"io_out_bits_hit_way_1", false,-1);
    tracep->declBit(c+1786,"hit_way_0_result", false,-1);
    tracep->declBit(c+1787,"hit_way_1_result", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ID ");
    tracep->declBit(c+2,"io_in_ready", false,-1);
    tracep->declBit(c+7,"io_in_valid", false,-1);
    tracep->declQuad(c+8,"io_in_bits_PC", false,-1, 63,0);
    tracep->declBus(c+10,"io_in_bits_Inst", false,-1, 31,0);
    tracep->declQuad(c+1802,"io_REG1", false,-1, 63,0);
    tracep->declQuad(c+1804,"io_REG2", false,-1, 63,0);
    tracep->declBit(c+1828,"io_flush", false,-1);
    tracep->declBit(c+2,"io_out_ready", false,-1);
    tracep->declBit(c+7,"io_out_valid", false,-1);
    tracep->declBus(c+11,"io_out_bits_ctrl_signal_src1Type", false,-1, 2,0);
    tracep->declBus(c+12,"io_out_bits_ctrl_signal_src2Type", false,-1, 2,0);
    tracep->declBus(c+13,"io_out_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+1806,"io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBus(c+14,"io_out_bits_ctrl_signal_rfSrc1", false,-1, 4,0);
    tracep->declBus(c+15,"io_out_bits_ctrl_signal_rfSrc2", false,-1, 4,0);
    tracep->declBit(c+16,"io_out_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+17,"io_out_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declBus(c+18,"io_out_bits_ctrl_signal_rfDest", false,-1, 4,0);
    tracep->declQuad(c+1802,"io_out_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+1804,"io_out_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+19,"io_out_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declQuad(c+8,"io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+10,"io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declBus(c+18,"rd", false,-1, 4,0);
    tracep->declBus(c+1788,"Inst_decode_0", false,-1, 3,0);
    tracep->declBus(c+17,"Inst_decode_2", false,-1, 6,0);
    tracep->declBit(c+1789,"Inst_decode_3", false,-1);
    tracep->declBus(c+1790,"srctype1", false,-1, 1,0);
    tracep->declBit(c+1791,"srctype2", false,-1);
    tracep->declBit(c+1792,"sign", false,-1);
    tracep->declBit(c+1793,"sign_1", false,-1);
    tracep->declBit(c+1794,"sign_2", false,-1);
    tracep->declBit(c+1794,"sign_3", false,-1);
    tracep->declBit(c+1792,"sign_4", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IF ");
    tracep->declBit(c+1868,"clock", false,-1);
    tracep->declBit(c+1869,"reset", false,-1);
    tracep->declBit(c+1798,"io_branch_io_is_branch", false,-1);
    tracep->declBit(c+1,"io_branch_io_is_jump", false,-1);
    tracep->declQuad(c+1799,"io_branch_io_dnpc", false,-1, 63,0);
    tracep->declBit(c+2,"io_cache_req_addr_req_valid", false,-1);
    tracep->declQuad(c+3,"io_cache_req_addr_req_bits_addr", false,-1, 63,0);
    tracep->declBit(c+2,"io_cache_req_rdata_rep_ready", false,-1);
    tracep->declBit(c+1827,"io_cache_req_rdata_rep_valid", false,-1);
    tracep->declQuad(c+5,"io_cache_req_rdata_rep_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+2,"io_out_ready", false,-1);
    tracep->declBit(c+1827,"io_out_valid", false,-1);
    tracep->declQuad(c+3,"io_out_bits_PC", false,-1, 63,0);
    tracep->declBus(c+1801,"io_out_bits_Inst", false,-1, 31,0);
    tracep->declBit(c+1828,"io_flush", false,-1);
    tracep->declQuad(c+3,"temp", false,-1, 63,0);
    tracep->declBus(c+1795,"inst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IFMEM ");
    tracep->declBit(c+1869,"reset", false,-1);
    tracep->declBit(c+1868,"clk", false,-1);
    tracep->declQuad(c+232,"addr", false,-1, 63,0);
    tracep->declBit(c+1906,"we", false,-1);
    tracep->declBit(c+234,"ce", false,-1);
    tracep->declQuad(c+1907,"wdata", false,-1, 63,0);
    tracep->declQuad(c+1839,"rdata", false,-1, 63,0);
    tracep->declBus(c+1909,"wmask", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MEM ");
    tracep->declBit(c+194,"io_in_valid", false,-1);
    tracep->declBus(c+195,"io_in_bits_ctrl_signal_fuType", false,-1, 2,0);
    tracep->declBit(c+196,"io_in_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+197,"io_in_bits_ctrl_signal_rfWen", false,-1);
    tracep->declBus(c+198,"io_in_bits_ctrl_signal_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+199,"io_in_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+201,"io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+202,"io_in_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBus(c+204,"io_in_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declQuad(c+205,"io_in_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+207,"io_in_bits_ctrl_data_src1", false,-1, 63,0);
    tracep->declQuad(c+209,"io_in_bits_ctrl_data_src2", false,-1, 63,0);
    tracep->declQuad(c+211,"io_in_bits_ctrl_data_Imm", false,-1, 63,0);
    tracep->declBit(c+1873,"io_out_ready", false,-1);
    tracep->declBit(c+194,"io_out_valid", false,-1);
    tracep->declBit(c+213,"io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+197,"io_out_bits_ctrl_signal_rfWen", false,-1);
    tracep->declQuad(c+199,"io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+201,"io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+202,"io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBit(c+214,"io_out_bits_ctrl_flow_skip", false,-1);
    tracep->declBus(c+204,"io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+215,"io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+1837,"io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+187,"io_mem_addr", false,-1, 63,0);
    tracep->declQuad(c+1835,"io_mem_rdata", false,-1, 63,0);
    tracep->declQuad(c+191,"io_mem_wdata", false,-1, 63,0);
    tracep->declBus(c+193,"io_mem_wmask", false,-1, 7,0);
    tracep->declBit(c+190,"io_mem_ce", false,-1);
    tracep->declBit(c+189,"io_mem_we", false,-1);
    tracep->declQuad(c+1796,"addr_temp", false,-1, 63,0);
    tracep->declBit(c+1864,"mem_result_sign", false,-1);
    tracep->declBit(c+1865,"mem_result_sign_1", false,-1);
    tracep->declBit(c+1866,"mem_result_sign_2", false,-1);
    tracep->declBit(c+1867,"mem_result_sign_3", false,-1);
    tracep->declQuad(c+1825,"mem_result", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WB ");
    tracep->declBit(c+216,"io_in_valid", false,-1);
    tracep->declBit(c+217,"io_in_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declBit(c+218,"io_in_bits_ctrl_signal_rfWen", false,-1);
    tracep->declQuad(c+219,"io_in_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+221,"io_in_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+222,"io_in_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBit(c+224,"io_in_bits_ctrl_flow_skip", false,-1);
    tracep->declBus(c+185,"io_in_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declQuad(c+225,"io_in_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->declBit(c+1873,"io_out_ready", false,-1);
    tracep->declBit(c+216,"io_out_valid", false,-1);
    tracep->declBit(c+227,"io_out_bits_ctrl_signal_inst_valid", false,-1);
    tracep->declQuad(c+219,"io_out_bits_ctrl_flow_PC", false,-1, 63,0);
    tracep->declBus(c+221,"io_out_bits_ctrl_flow_inst", false,-1, 31,0);
    tracep->declQuad(c+222,"io_out_bits_ctrl_flow_Dnpc", false,-1, 63,0);
    tracep->declBit(c+224,"io_out_bits_ctrl_flow_skip", false,-1);
    tracep->declBus(c+185,"io_out_bits_ctrl_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+186,"io_out_bits_ctrl_rf_rfWen", false,-1);
    tracep->declQuad(c+225,"io_out_bits_ctrl_rf_rfData", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("bypass ");
    tracep->declBus(c+30,"io_EX_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+41,"io_EX_rf_rfWen", false,-1);
    tracep->declQuad(c+1833,"io_EX_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+204,"io_MEM_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+215,"io_MEM_rf_rfWen", false,-1);
    tracep->declQuad(c+1837,"io_MEM_rf_rfData", false,-1, 63,0);
    tracep->declBus(c+185,"io_WB_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+186,"io_WB_rf_rfWen", false,-1);
    tracep->declQuad(c+225,"io_WB_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+228,"io_Reg1", false,-1, 63,0);
    tracep->declBus(c+14,"io_reg_index1", false,-1, 4,0);
    tracep->declQuad(c+230,"io_Reg2", false,-1, 63,0);
    tracep->declBus(c+15,"io_reg_index2", false,-1, 4,0);
    tracep->declQuad(c+1802,"io_Bypass_REG1", false,-1, 63,0);
    tracep->declQuad(c+1804,"io_Bypass_REG2", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem ");
    tracep->declBit(c+1869,"reset", false,-1);
    tracep->declBit(c+1868,"clk", false,-1);
    tracep->declQuad(c+187,"addr", false,-1, 63,0);
    tracep->declBit(c+189,"we", false,-1);
    tracep->declBit(c+190,"ce", false,-1);
    tracep->declQuad(c+191,"wdata", false,-1, 63,0);
    tracep->declQuad(c+1835,"rdata", false,-1, 63,0);
    tracep->declBus(c+193,"wmask", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_bypass ");
    tracep->declBus(c+204,"io_MEM_rf_rfDest", false,-1, 4,0);
    tracep->declBit(c+215,"io_MEM_rf_rfWen", false,-1);
    tracep->declQuad(c+1837,"io_MEM_rf_rfData", false,-1, 63,0);
    tracep->declQuad(c+31,"io_Reg1", false,-1, 63,0);
    tracep->declBus(c+26,"io_reg_index1", false,-1, 4,0);
    tracep->declQuad(c+33,"io_Reg2", false,-1, 63,0);
    tracep->declBus(c+27,"io_reg_index2", false,-1, 4,0);
    tracep->declQuad(c+1829,"io_Bypass_REG1", false,-1, 63,0);
    tracep->declQuad(c+1831,"io_Bypass_REG2", false,-1, 63,0);
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
    VlWide<4>/*127:0*/ __Vtemp_h7a2d1147__0;
    VlWide<4>/*127:0*/ __Vtemp_h8248920c__0;
    VlWide<4>/*127:0*/ __Vtemp_h14069084__0;
    VlWide<4>/*127:0*/ __Vtemp_h02754327__0;
    VlWide<4>/*127:0*/ __Vtemp_he2247138__0;
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
    bufp->fullBit(oldp+40,(vlSelf->CoreTop__DOT__EX_io_out_valid));
    bufp->fullBit(oldp+41,(vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfWen));
    bufp->fullBit(oldp+42,(((0x42U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                            & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_inst_valid))));
    bufp->fullBit(oldp+43,(vlSelf->CoreTop__DOT__DIP_io_is_break_REG_1));
    bufp->fullQData(oldp+44,(vlSelf->CoreTop__DOT__rf
                             [0U]),64);
    bufp->fullQData(oldp+46,(vlSelf->CoreTop__DOT__rf
                             [1U]),64);
    bufp->fullQData(oldp+48,(vlSelf->CoreTop__DOT__rf
                             [2U]),64);
    bufp->fullQData(oldp+50,(vlSelf->CoreTop__DOT__rf
                             [3U]),64);
    bufp->fullQData(oldp+52,(vlSelf->CoreTop__DOT__rf
                             [4U]),64);
    bufp->fullQData(oldp+54,(vlSelf->CoreTop__DOT__rf
                             [5U]),64);
    bufp->fullQData(oldp+56,(vlSelf->CoreTop__DOT__rf
                             [6U]),64);
    bufp->fullQData(oldp+58,(vlSelf->CoreTop__DOT__rf
                             [7U]),64);
    bufp->fullQData(oldp+60,(vlSelf->CoreTop__DOT__rf
                             [8U]),64);
    bufp->fullQData(oldp+62,(vlSelf->CoreTop__DOT__rf
                             [9U]),64);
    bufp->fullQData(oldp+64,(vlSelf->CoreTop__DOT__rf
                             [0xaU]),64);
    bufp->fullQData(oldp+66,(vlSelf->CoreTop__DOT__rf
                             [0xbU]),64);
    bufp->fullQData(oldp+68,(vlSelf->CoreTop__DOT__rf
                             [0xcU]),64);
    bufp->fullQData(oldp+70,(vlSelf->CoreTop__DOT__rf
                             [0xdU]),64);
    bufp->fullQData(oldp+72,(vlSelf->CoreTop__DOT__rf
                             [0xeU]),64);
    bufp->fullQData(oldp+74,(vlSelf->CoreTop__DOT__rf
                             [0xfU]),64);
    bufp->fullQData(oldp+76,(vlSelf->CoreTop__DOT__rf
                             [0x10U]),64);
    bufp->fullQData(oldp+78,(vlSelf->CoreTop__DOT__rf
                             [0x11U]),64);
    bufp->fullQData(oldp+80,(vlSelf->CoreTop__DOT__rf
                             [0x12U]),64);
    bufp->fullQData(oldp+82,(vlSelf->CoreTop__DOT__rf
                             [0x13U]),64);
    bufp->fullQData(oldp+84,(vlSelf->CoreTop__DOT__rf
                             [0x14U]),64);
    bufp->fullQData(oldp+86,(vlSelf->CoreTop__DOT__rf
                             [0x15U]),64);
    bufp->fullQData(oldp+88,(vlSelf->CoreTop__DOT__rf
                             [0x16U]),64);
    bufp->fullQData(oldp+90,(vlSelf->CoreTop__DOT__rf
                             [0x17U]),64);
    bufp->fullQData(oldp+92,(vlSelf->CoreTop__DOT__rf
                             [0x18U]),64);
    bufp->fullQData(oldp+94,(vlSelf->CoreTop__DOT__rf
                             [0x19U]),64);
    bufp->fullQData(oldp+96,(vlSelf->CoreTop__DOT__rf
                             [0x1aU]),64);
    bufp->fullQData(oldp+98,(vlSelf->CoreTop__DOT__rf
                             [0x1bU]),64);
    bufp->fullQData(oldp+100,(vlSelf->CoreTop__DOT__rf
                              [0x1cU]),64);
    bufp->fullQData(oldp+102,(vlSelf->CoreTop__DOT__rf
                              [0x1dU]),64);
    bufp->fullQData(oldp+104,(vlSelf->CoreTop__DOT__rf
                              [0x1eU]),64);
    bufp->fullQData(oldp+106,(vlSelf->CoreTop__DOT__rf
                              [0x1fU]),64);
    bufp->fullIData(oldp+108,(vlSelf->CoreTop__DOT__DIP_io_inst_REG),32);
    bufp->fullQData(oldp+109,(vlSelf->CoreTop__DOT__DIP_io_pc_REG),64);
    bufp->fullBit(oldp+111,(vlSelf->CoreTop__DOT__DIP_io_inst_valid_REG));
    bufp->fullQData(oldp+112,(vlSelf->CoreTop__DOT__DIP_io_dnpc_REG),64);
    bufp->fullBit(oldp+114,(vlSelf->CoreTop__DOT__DIP_io_is_skip_REG));
    bufp->fullQData(oldp+115,(vlSelf->CoreTop__DOT__rf[0]),64);
    bufp->fullQData(oldp+117,(vlSelf->CoreTop__DOT__rf[1]),64);
    bufp->fullQData(oldp+119,(vlSelf->CoreTop__DOT__rf[2]),64);
    bufp->fullQData(oldp+121,(vlSelf->CoreTop__DOT__rf[3]),64);
    bufp->fullQData(oldp+123,(vlSelf->CoreTop__DOT__rf[4]),64);
    bufp->fullQData(oldp+125,(vlSelf->CoreTop__DOT__rf[5]),64);
    bufp->fullQData(oldp+127,(vlSelf->CoreTop__DOT__rf[6]),64);
    bufp->fullQData(oldp+129,(vlSelf->CoreTop__DOT__rf[7]),64);
    bufp->fullQData(oldp+131,(vlSelf->CoreTop__DOT__rf[8]),64);
    bufp->fullQData(oldp+133,(vlSelf->CoreTop__DOT__rf[9]),64);
    bufp->fullQData(oldp+135,(vlSelf->CoreTop__DOT__rf[10]),64);
    bufp->fullQData(oldp+137,(vlSelf->CoreTop__DOT__rf[11]),64);
    bufp->fullQData(oldp+139,(vlSelf->CoreTop__DOT__rf[12]),64);
    bufp->fullQData(oldp+141,(vlSelf->CoreTop__DOT__rf[13]),64);
    bufp->fullQData(oldp+143,(vlSelf->CoreTop__DOT__rf[14]),64);
    bufp->fullQData(oldp+145,(vlSelf->CoreTop__DOT__rf[15]),64);
    bufp->fullQData(oldp+147,(vlSelf->CoreTop__DOT__rf[16]),64);
    bufp->fullQData(oldp+149,(vlSelf->CoreTop__DOT__rf[17]),64);
    bufp->fullQData(oldp+151,(vlSelf->CoreTop__DOT__rf[18]),64);
    bufp->fullQData(oldp+153,(vlSelf->CoreTop__DOT__rf[19]),64);
    bufp->fullQData(oldp+155,(vlSelf->CoreTop__DOT__rf[20]),64);
    bufp->fullQData(oldp+157,(vlSelf->CoreTop__DOT__rf[21]),64);
    bufp->fullQData(oldp+159,(vlSelf->CoreTop__DOT__rf[22]),64);
    bufp->fullQData(oldp+161,(vlSelf->CoreTop__DOT__rf[23]),64);
    bufp->fullQData(oldp+163,(vlSelf->CoreTop__DOT__rf[24]),64);
    bufp->fullQData(oldp+165,(vlSelf->CoreTop__DOT__rf[25]),64);
    bufp->fullQData(oldp+167,(vlSelf->CoreTop__DOT__rf[26]),64);
    bufp->fullQData(oldp+169,(vlSelf->CoreTop__DOT__rf[27]),64);
    bufp->fullQData(oldp+171,(vlSelf->CoreTop__DOT__rf[28]),64);
    bufp->fullQData(oldp+173,(vlSelf->CoreTop__DOT__rf[29]),64);
    bufp->fullQData(oldp+175,(vlSelf->CoreTop__DOT__rf[30]),64);
    bufp->fullQData(oldp+177,(vlSelf->CoreTop__DOT__rf[31]),64);
    bufp->fullQData(oldp+179,(vlSelf->CoreTop__DOT__rf
                              [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                         >> 0xfU))]),64);
    bufp->fullQData(oldp+181,(vlSelf->CoreTop__DOT__rf
                              [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                         >> 0x14U))]),64);
    bufp->fullQData(oldp+183,(((0U == (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest))
                                ? 0ULL : vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfData)),64);
    bufp->fullCData(oldp+185,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest),5);
    bufp->fullBit(oldp+186,(vlSelf->CoreTop__DOT__WB_io_out_bits_ctrl_rf_rfWen));
    bufp->fullQData(oldp+187,(((0x45U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                ? vlSelf->CoreTop__DOT__MEM__DOT___addr_temp_T_1
                                : vlSelf->CoreTop__DOT__MEM__DOT___GEN_16)),64);
    bufp->fullBit(oldp+189,(((0x45U != (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype)) 
                             & ((0x46U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype)) 
                                | ((0x70U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype)) 
                                   | ((0x47U != (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype)) 
                                      & ((0x11U != (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype)) 
                                         & ((0x6fU 
                                             != (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype)) 
                                            & ((0xeU 
                                                != (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype)) 
                                               & ((0x74U 
                                                   == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype)) 
                                                  | (0x77U 
                                                     == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))))))))))));
    bufp->fullBit(oldp+190,((((4U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_fuType)) 
                              & (IData)(vlSelf->CoreTop__DOT__valid_2)) 
                             & (IData)(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_signal_inst_valid))));
    bufp->fullQData(oldp+191,(((0x46U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
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
    bufp->fullCData(oldp+193,(((0x46U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                ? 0xffU : (IData)(vlSelf->CoreTop__DOT__MEM__DOT___GEN_32))),8);
    bufp->fullBit(oldp+194,(vlSelf->CoreTop__DOT__valid_2));
    bufp->fullCData(oldp+195,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_fuType),3);
    bufp->fullBit(oldp+196,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_inst_valid));
    bufp->fullBit(oldp+197,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_rfWen));
    bufp->fullCData(oldp+198,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype),7);
    bufp->fullQData(oldp+199,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_PC),64);
    bufp->fullIData(oldp+201,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_inst),32);
    bufp->fullQData(oldp+202,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_Dnpc),64);
    bufp->fullCData(oldp+204,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest),5);
    bufp->fullQData(oldp+205,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfData),64);
    bufp->fullQData(oldp+207,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src1),64);
    bufp->fullQData(oldp+209,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2),64);
    bufp->fullQData(oldp+211,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_Imm),64);
    bufp->fullBit(oldp+213,(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_signal_inst_valid));
    bufp->fullBit(oldp+214,((((0xa0000048ULL == vlSelf->CoreTop__DOT__MEM__DOT__addr_temp) 
                              | (0xa00003f8ULL == vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)) 
                             | ((0xa0000000ULL <= vlSelf->CoreTop__DOT__MEM__DOT__addr_temp) 
                                & (0xa1200000ULL >= vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))));
    bufp->fullBit(oldp+215,(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfWen));
    bufp->fullBit(oldp+216,(vlSelf->CoreTop__DOT__valid_3));
    bufp->fullBit(oldp+217,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_inst_valid));
    bufp->fullBit(oldp+218,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_rfWen));
    bufp->fullQData(oldp+219,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_PC),64);
    bufp->fullIData(oldp+221,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_inst),32);
    bufp->fullQData(oldp+222,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_Dnpc),64);
    bufp->fullBit(oldp+224,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_skip));
    bufp->fullQData(oldp+225,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfData),64);
    bufp->fullBit(oldp+227,(((IData)(vlSelf->CoreTop__DOT__valid_3) 
                             & (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_inst_valid))));
    bufp->fullQData(oldp+228,(((0U == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                >> 0xfU)))
                                ? 0ULL : vlSelf->CoreTop__DOT__rf
                               [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                          >> 0xfU))])),64);
    bufp->fullQData(oldp+230,(((0U == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                >> 0x14U)))
                                ? 0ULL : vlSelf->CoreTop__DOT__rf
                               [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                          >> 0x14U))])),64);
    bufp->fullQData(oldp+232,(vlSelf->CoreTop__DOT__ICACHE__DOT__mem_addr_reg),64);
    bufp->fullBit(oldp+234,((2U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state))));
    bufp->fullBit(oldp+235,(vlSelf->CoreTop__DOT__DIP_io_is_break_REG));
    bufp->fullQData(oldp+236,(vlSelf->CoreTop__DOT__DIP__DOT__rf[0]),64);
    bufp->fullQData(oldp+238,(vlSelf->CoreTop__DOT__DIP__DOT__rf[1]),64);
    bufp->fullQData(oldp+240,(vlSelf->CoreTop__DOT__DIP__DOT__rf[2]),64);
    bufp->fullQData(oldp+242,(vlSelf->CoreTop__DOT__DIP__DOT__rf[3]),64);
    bufp->fullQData(oldp+244,(vlSelf->CoreTop__DOT__DIP__DOT__rf[4]),64);
    bufp->fullQData(oldp+246,(vlSelf->CoreTop__DOT__DIP__DOT__rf[5]),64);
    bufp->fullQData(oldp+248,(vlSelf->CoreTop__DOT__DIP__DOT__rf[6]),64);
    bufp->fullQData(oldp+250,(vlSelf->CoreTop__DOT__DIP__DOT__rf[7]),64);
    bufp->fullQData(oldp+252,(vlSelf->CoreTop__DOT__DIP__DOT__rf[8]),64);
    bufp->fullQData(oldp+254,(vlSelf->CoreTop__DOT__DIP__DOT__rf[9]),64);
    bufp->fullQData(oldp+256,(vlSelf->CoreTop__DOT__DIP__DOT__rf[10]),64);
    bufp->fullQData(oldp+258,(vlSelf->CoreTop__DOT__DIP__DOT__rf[11]),64);
    bufp->fullQData(oldp+260,(vlSelf->CoreTop__DOT__DIP__DOT__rf[12]),64);
    bufp->fullQData(oldp+262,(vlSelf->CoreTop__DOT__DIP__DOT__rf[13]),64);
    bufp->fullQData(oldp+264,(vlSelf->CoreTop__DOT__DIP__DOT__rf[14]),64);
    bufp->fullQData(oldp+266,(vlSelf->CoreTop__DOT__DIP__DOT__rf[15]),64);
    bufp->fullQData(oldp+268,(vlSelf->CoreTop__DOT__DIP__DOT__rf[16]),64);
    bufp->fullQData(oldp+270,(vlSelf->CoreTop__DOT__DIP__DOT__rf[17]),64);
    bufp->fullQData(oldp+272,(vlSelf->CoreTop__DOT__DIP__DOT__rf[18]),64);
    bufp->fullQData(oldp+274,(vlSelf->CoreTop__DOT__DIP__DOT__rf[19]),64);
    bufp->fullQData(oldp+276,(vlSelf->CoreTop__DOT__DIP__DOT__rf[20]),64);
    bufp->fullQData(oldp+278,(vlSelf->CoreTop__DOT__DIP__DOT__rf[21]),64);
    bufp->fullQData(oldp+280,(vlSelf->CoreTop__DOT__DIP__DOT__rf[22]),64);
    bufp->fullQData(oldp+282,(vlSelf->CoreTop__DOT__DIP__DOT__rf[23]),64);
    bufp->fullQData(oldp+284,(vlSelf->CoreTop__DOT__DIP__DOT__rf[24]),64);
    bufp->fullQData(oldp+286,(vlSelf->CoreTop__DOT__DIP__DOT__rf[25]),64);
    bufp->fullQData(oldp+288,(vlSelf->CoreTop__DOT__DIP__DOT__rf[26]),64);
    bufp->fullQData(oldp+290,(vlSelf->CoreTop__DOT__DIP__DOT__rf[27]),64);
    bufp->fullQData(oldp+292,(vlSelf->CoreTop__DOT__DIP__DOT__rf[28]),64);
    bufp->fullQData(oldp+294,(vlSelf->CoreTop__DOT__DIP__DOT__rf[29]),64);
    bufp->fullQData(oldp+296,(vlSelf->CoreTop__DOT__DIP__DOT__rf[30]),64);
    bufp->fullQData(oldp+298,(vlSelf->CoreTop__DOT__DIP__DOT__rf[31]),64);
    bufp->fullIData(oldp+300,(vlSelf->CoreTop__DOT__DIP__DOT__IN[0]),32);
    bufp->fullIData(oldp+301,(vlSelf->CoreTop__DOT__DIP__DOT__IN[1]),32);
    bufp->fullIData(oldp+302,(vlSelf->CoreTop__DOT__DIP__DOT__IN[2]),32);
    bufp->fullIData(oldp+303,(vlSelf->CoreTop__DOT__DIP__DOT__IN[3]),32);
    bufp->fullIData(oldp+304,(vlSelf->CoreTop__DOT__DIP__DOT__IN[4]),32);
    bufp->fullIData(oldp+305,(vlSelf->CoreTop__DOT__DIP__DOT__IN[5]),32);
    bufp->fullIData(oldp+306,(vlSelf->CoreTop__DOT__DIP__DOT__IN[6]),32);
    bufp->fullQData(oldp+307,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mepc_REG_1),64);
    bufp->fullQData(oldp+309,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mcause_REG_1),64);
    bufp->fullQData(oldp+311,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mstatus_REG_1),64);
    bufp->fullQData(oldp+313,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mtvec_REG_1),64);
    bufp->fullBit(oldp+315,(vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_valid));
    bufp->fullBit(oldp+316,((0x44U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count))));
    bufp->fullQData(oldp+317,((((QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[0U])))),64);
    bufp->fullBit(oldp+319,(((IData)(vlSelf->CoreTop__DOT__EX__DOT__is_div) 
                             & (2U != (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state)))));
    bufp->fullBit(oldp+320,(vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_flow_div_signed));
    bufp->fullBit(oldp+321,((2U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state))));
    bufp->fullBit(oldp+322,(vlSelf->CoreTop__DOT__EX__DOT__is_mul));
    bufp->fullBit(oldp+323,(vlSelf->CoreTop__DOT__EX__DOT__is_div));
    bufp->fullBit(oldp+324,(vlSelf->CoreTop__DOT__EX__DOT__is_divw));
    bufp->fullQData(oldp+325,(vlSelf->CoreTop__DOT__EX__DOT__mepc),64);
    bufp->fullQData(oldp+327,(vlSelf->CoreTop__DOT__EX__DOT__mcause),64);
    bufp->fullQData(oldp+329,(vlSelf->CoreTop__DOT__EX__DOT__mstatus),64);
    bufp->fullQData(oldp+331,(vlSelf->CoreTop__DOT__EX__DOT__mtvec),64);
    bufp->fullQData(oldp+333,(vlSelf->CoreTop__DOT__EX__DOT__mie),64);
    bufp->fullQData(oldp+335,(vlSelf->CoreTop__DOT__EX__DOT__mip),64);
    bufp->fullBit(oldp+337,((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[0U] 
                             >> 0x1fU)));
    bufp->fullQData(oldp+338,(((3U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType))
                                ? (4ULL + vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC)
                                : 0ULL)),64);
    bufp->fullQData(oldp+340,(((0x6bU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
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
    bufp->fullQData(oldp+342,(vlSelf->CoreTop__DOT__EX__DOT__csr_data),64);
    bufp->fullQData(oldp+344,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mtvec_REG),64);
    bufp->fullQData(oldp+346,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mcause_REG),64);
    bufp->fullQData(oldp+348,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mepc_REG),64);
    bufp->fullQData(oldp+350,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mstatus_REG),64);
    bufp->fullQData(oldp+352,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[0]),64);
    bufp->fullQData(oldp+354,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[1]),64);
    bufp->fullQData(oldp+356,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[2]),64);
    bufp->fullQData(oldp+358,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[3]),64);
    bufp->fullQData(oldp+360,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[4]),64);
    bufp->fullQData(oldp+362,(vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[5]),64);
    bufp->fullWData(oldp+364,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend),128);
    bufp->fullQData(oldp+368,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divisor),64);
    bufp->fullQData(oldp+370,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S),64);
    bufp->fullCData(oldp+372,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state),2);
    bufp->fullCData(oldp+373,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__count),6);
    bufp->fullBit(oldp+374,((0x3fU == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__count))));
    bufp->fullBit(oldp+375,(((1U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state)) 
                             & (0x3fU == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__count)))));
    bufp->fullWData(oldp+376,(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div),65);
    bufp->fullQData(oldp+379,((- vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S)),64);
    bufp->fullQData(oldp+381,((- (((QData)((IData)(
                                                   vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[3U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[2U]))))),64);
    bufp->fullCData(oldp+383,((7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U])),3);
    bufp->fullWData(oldp+384,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand),132);
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
    bufp->fullWData(oldp+389,(__Vtemp_h791e8ef8__0),132);
    bufp->fullBit(oldp+394,(((0U != (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U])) 
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
    bufp->fullWData(oldp+395,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier),66);
    bufp->fullWData(oldp+398,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p),132);
    bufp->fullCData(oldp+403,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count),7);
    bufp->fullWData(oldp+404,(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__temp),132);
    bufp->fullBit(oldp+409,((1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__temp[4U] 
                                   >> 3U))));
    bufp->fullBit(oldp+410,(((IData)(vlSelf->CoreTop__DOT__EX_io_in_ready) 
                             & (0U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)))));
    bufp->fullQData(oldp+411,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data_io_write_bus_addr),64);
    bufp->fullBit(oldp+413,((8U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__count))));
    bufp->fullCData(oldp+414,(((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r)
                                ? 2U : 1U)),2);
    bufp->fullWData(oldp+415,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data_io_write_bus_wdata),512);
    bufp->fullQData(oldp+431,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_tag_w_data),53);
    bufp->fullQData(oldp+433,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_data),53);
    bufp->fullBit(oldp+435,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0
                            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0]));
    bufp->fullBit(oldp+436,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1
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
    bufp->fullWData(oldp+437,(__Vtemp_hf989eec7__0),512);
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
    bufp->fullWData(oldp+453,(__Vtemp_h4453b49e__0),512);
    bufp->fullQData(oldp+469,((vlSelf->CoreTop__DOT__IF__DOT__temp 
                               >> 0xbU)),53);
    bufp->fullCData(oldp+471,((0x1fU & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                >> 6U)))),5);
    bufp->fullBit(oldp+472,(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_in_valid_REG));
    bufp->fullBit(oldp+473,(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit));
    bufp->fullWData(oldp+474,(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data),512);
    bufp->fullBit(oldp+490,(((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT___hit_way_0_T) 
                             & ((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                 >> 0xbU) == vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_tag_w_data))));
    bufp->fullBit(oldp+491,(((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT___hit_way_1_T) 
                             & ((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                 >> 0xbU) == vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_data))));
    bufp->fullBit(oldp+492,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[0]));
    bufp->fullBit(oldp+493,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[1]));
    bufp->fullBit(oldp+494,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[2]));
    bufp->fullBit(oldp+495,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[3]));
    bufp->fullBit(oldp+496,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[4]));
    bufp->fullBit(oldp+497,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[5]));
    bufp->fullBit(oldp+498,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[6]));
    bufp->fullBit(oldp+499,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[7]));
    bufp->fullBit(oldp+500,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[8]));
    bufp->fullBit(oldp+501,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[9]));
    bufp->fullBit(oldp+502,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[10]));
    bufp->fullBit(oldp+503,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[11]));
    bufp->fullBit(oldp+504,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[12]));
    bufp->fullBit(oldp+505,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[13]));
    bufp->fullBit(oldp+506,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[14]));
    bufp->fullBit(oldp+507,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[15]));
    bufp->fullBit(oldp+508,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[16]));
    bufp->fullBit(oldp+509,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[17]));
    bufp->fullBit(oldp+510,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[18]));
    bufp->fullBit(oldp+511,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[19]));
    bufp->fullBit(oldp+512,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[20]));
    bufp->fullBit(oldp+513,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[21]));
    bufp->fullBit(oldp+514,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[22]));
    bufp->fullBit(oldp+515,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[23]));
    bufp->fullBit(oldp+516,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[24]));
    bufp->fullBit(oldp+517,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[25]));
    bufp->fullBit(oldp+518,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[26]));
    bufp->fullBit(oldp+519,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[27]));
    bufp->fullBit(oldp+520,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[28]));
    bufp->fullBit(oldp+521,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[29]));
    bufp->fullBit(oldp+522,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[30]));
    bufp->fullBit(oldp+523,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru[31]));
    bufp->fullBit(oldp+524,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_lru_w_MPORT_en_pipe_0));
    bufp->fullCData(oldp+525,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_lru_w_MPORT_addr_pipe_0),5);
    bufp->fullBit(oldp+526,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru
                            [vlSelf->CoreTop__DOT__ICACHE__DOT__lru_lru_w_MPORT_addr_pipe_0]));
    bufp->fullBit(oldp+527,(((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                             & ((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                & ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit) 
                                   & ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT___hit_way_0_T) 
                                      & ((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                          >> 0xbU) 
                                         == vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_tag_w_data)))))));
    bufp->fullBit(oldp+528,(((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                             & ((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                & ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit) 
                                   & ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT___hit_way_1_T) 
                                      & ((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                          >> 0xbU) 
                                         == vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_data)))))));
    bufp->fullBit(oldp+529,(((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                             & ((1U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                & ((2U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                   & (((IData)(vlSelf->CoreTop__DOT__EX_io_in_ready) 
                                       & (8U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__count))) 
                                      & (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r)))))));
    bufp->fullBit(oldp+530,(((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                             & ((1U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                & ((2U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                   & (((IData)(vlSelf->CoreTop__DOT__EX_io_in_ready) 
                                       & (8U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__count))) 
                                      & (~ (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r))))))));
    bufp->fullCData(oldp+531,(vlSelf->CoreTop__DOT__ICACHE__DOT__state),2);
    bufp->fullWData(oldp+532,(vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg),512);
    bufp->fullBit(oldp+548,(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r));
    bufp->fullCData(oldp+549,(vlSelf->CoreTop__DOT__ICACHE__DOT__count),4);
    bufp->fullQData(oldp+550,(vlSelf->CoreTop__DOT__ICACHE__DOT__hit_data),64);
    bufp->fullQData(oldp+552,(vlSelf->CoreTop__DOT__ICACHE__DOT__mem_data),64);
    bufp->fullWData(oldp+554,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[0]),512);
    bufp->fullWData(oldp+570,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[1]),512);
    bufp->fullWData(oldp+586,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[2]),512);
    bufp->fullWData(oldp+602,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[3]),512);
    bufp->fullWData(oldp+618,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[4]),512);
    bufp->fullWData(oldp+634,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[5]),512);
    bufp->fullWData(oldp+650,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[6]),512);
    bufp->fullWData(oldp+666,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[7]),512);
    bufp->fullWData(oldp+682,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[8]),512);
    bufp->fullWData(oldp+698,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[9]),512);
    bufp->fullWData(oldp+714,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[10]),512);
    bufp->fullWData(oldp+730,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[11]),512);
    bufp->fullWData(oldp+746,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[12]),512);
    bufp->fullWData(oldp+762,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[13]),512);
    bufp->fullWData(oldp+778,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[14]),512);
    bufp->fullWData(oldp+794,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[15]),512);
    bufp->fullWData(oldp+810,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[16]),512);
    bufp->fullWData(oldp+826,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[17]),512);
    bufp->fullWData(oldp+842,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[18]),512);
    bufp->fullWData(oldp+858,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[19]),512);
    bufp->fullWData(oldp+874,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[20]),512);
    bufp->fullWData(oldp+890,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[21]),512);
    bufp->fullWData(oldp+906,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[22]),512);
    bufp->fullWData(oldp+922,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[23]),512);
    bufp->fullWData(oldp+938,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[24]),512);
    bufp->fullWData(oldp+954,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[25]),512);
    bufp->fullWData(oldp+970,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[26]),512);
    bufp->fullWData(oldp+986,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[27]),512);
    bufp->fullWData(oldp+1002,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[28]),512);
    bufp->fullWData(oldp+1018,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[29]),512);
    bufp->fullWData(oldp+1034,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[30]),512);
    bufp->fullWData(oldp+1050,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[31]),512);
    bufp->fullBit(oldp+1066,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_en_pipe_0));
    bufp->fullCData(oldp+1067,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0),5);
    bufp->fullCData(oldp+1068,((0x1fU & (IData)((vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data_io_write_bus_addr 
                                                 >> 6U)))),5);
    bufp->fullBit(oldp+1069,(((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r)
                               ? 0U : 1U)));
    bufp->fullWData(oldp+1070,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[0]),512);
    bufp->fullWData(oldp+1086,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[1]),512);
    bufp->fullWData(oldp+1102,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[2]),512);
    bufp->fullWData(oldp+1118,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[3]),512);
    bufp->fullWData(oldp+1134,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[4]),512);
    bufp->fullWData(oldp+1150,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[5]),512);
    bufp->fullWData(oldp+1166,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[6]),512);
    bufp->fullWData(oldp+1182,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[7]),512);
    bufp->fullWData(oldp+1198,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[8]),512);
    bufp->fullWData(oldp+1214,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[9]),512);
    bufp->fullWData(oldp+1230,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[10]),512);
    bufp->fullWData(oldp+1246,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[11]),512);
    bufp->fullWData(oldp+1262,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[12]),512);
    bufp->fullWData(oldp+1278,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[13]),512);
    bufp->fullWData(oldp+1294,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[14]),512);
    bufp->fullWData(oldp+1310,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[15]),512);
    bufp->fullWData(oldp+1326,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[16]),512);
    bufp->fullWData(oldp+1342,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[17]),512);
    bufp->fullWData(oldp+1358,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[18]),512);
    bufp->fullWData(oldp+1374,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[19]),512);
    bufp->fullWData(oldp+1390,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[20]),512);
    bufp->fullWData(oldp+1406,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[21]),512);
    bufp->fullWData(oldp+1422,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[22]),512);
    bufp->fullWData(oldp+1438,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[23]),512);
    bufp->fullWData(oldp+1454,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[24]),512);
    bufp->fullWData(oldp+1470,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[25]),512);
    bufp->fullWData(oldp+1486,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[26]),512);
    bufp->fullWData(oldp+1502,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[27]),512);
    bufp->fullWData(oldp+1518,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[28]),512);
    bufp->fullWData(oldp+1534,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[29]),512);
    bufp->fullWData(oldp+1550,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[30]),512);
    bufp->fullWData(oldp+1566,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[31]),512);
    bufp->fullBit(oldp+1582,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_en_pipe_0));
    bufp->fullBit(oldp+1583,((1U & (((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r)
                                      ? 2U : 1U) >> 1U))));
    bufp->fullQData(oldp+1584,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[0]),53);
    bufp->fullQData(oldp+1586,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[1]),53);
    bufp->fullQData(oldp+1588,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[2]),53);
    bufp->fullQData(oldp+1590,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[3]),53);
    bufp->fullQData(oldp+1592,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[4]),53);
    bufp->fullQData(oldp+1594,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[5]),53);
    bufp->fullQData(oldp+1596,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[6]),53);
    bufp->fullQData(oldp+1598,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[7]),53);
    bufp->fullQData(oldp+1600,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[8]),53);
    bufp->fullQData(oldp+1602,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[9]),53);
    bufp->fullQData(oldp+1604,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[10]),53);
    bufp->fullQData(oldp+1606,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[11]),53);
    bufp->fullQData(oldp+1608,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[12]),53);
    bufp->fullQData(oldp+1610,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[13]),53);
    bufp->fullQData(oldp+1612,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[14]),53);
    bufp->fullQData(oldp+1614,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[15]),53);
    bufp->fullQData(oldp+1616,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[16]),53);
    bufp->fullQData(oldp+1618,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[17]),53);
    bufp->fullQData(oldp+1620,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[18]),53);
    bufp->fullQData(oldp+1622,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[19]),53);
    bufp->fullQData(oldp+1624,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[20]),53);
    bufp->fullQData(oldp+1626,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[21]),53);
    bufp->fullQData(oldp+1628,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[22]),53);
    bufp->fullQData(oldp+1630,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[23]),53);
    bufp->fullQData(oldp+1632,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[24]),53);
    bufp->fullQData(oldp+1634,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[25]),53);
    bufp->fullQData(oldp+1636,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[26]),53);
    bufp->fullQData(oldp+1638,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[27]),53);
    bufp->fullQData(oldp+1640,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[28]),53);
    bufp->fullQData(oldp+1642,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[29]),53);
    bufp->fullQData(oldp+1644,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[30]),53);
    bufp->fullQData(oldp+1646,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[31]),53);
    bufp->fullBit(oldp+1648,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_tag_w_en_pipe_0));
    bufp->fullCData(oldp+1649,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_tag_w_addr_pipe_0),5);
    bufp->fullQData(oldp+1650,((vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data_io_write_bus_addr 
                                >> 0xbU)),53);
    bufp->fullQData(oldp+1652,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[0]),53);
    bufp->fullQData(oldp+1654,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[1]),53);
    bufp->fullQData(oldp+1656,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[2]),53);
    bufp->fullQData(oldp+1658,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[3]),53);
    bufp->fullQData(oldp+1660,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[4]),53);
    bufp->fullQData(oldp+1662,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[5]),53);
    bufp->fullQData(oldp+1664,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[6]),53);
    bufp->fullQData(oldp+1666,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[7]),53);
    bufp->fullQData(oldp+1668,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[8]),53);
    bufp->fullQData(oldp+1670,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[9]),53);
    bufp->fullQData(oldp+1672,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[10]),53);
    bufp->fullQData(oldp+1674,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[11]),53);
    bufp->fullQData(oldp+1676,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[12]),53);
    bufp->fullQData(oldp+1678,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[13]),53);
    bufp->fullQData(oldp+1680,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[14]),53);
    bufp->fullQData(oldp+1682,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[15]),53);
    bufp->fullQData(oldp+1684,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[16]),53);
    bufp->fullQData(oldp+1686,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[17]),53);
    bufp->fullQData(oldp+1688,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[18]),53);
    bufp->fullQData(oldp+1690,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[19]),53);
    bufp->fullQData(oldp+1692,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[20]),53);
    bufp->fullQData(oldp+1694,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[21]),53);
    bufp->fullQData(oldp+1696,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[22]),53);
    bufp->fullQData(oldp+1698,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[23]),53);
    bufp->fullQData(oldp+1700,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[24]),53);
    bufp->fullQData(oldp+1702,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[25]),53);
    bufp->fullQData(oldp+1704,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[26]),53);
    bufp->fullQData(oldp+1706,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[27]),53);
    bufp->fullQData(oldp+1708,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[28]),53);
    bufp->fullQData(oldp+1710,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[29]),53);
    bufp->fullQData(oldp+1712,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[30]),53);
    bufp->fullQData(oldp+1714,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[31]),53);
    bufp->fullBit(oldp+1716,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_en_pipe_0));
    bufp->fullCData(oldp+1717,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0),5);
    bufp->fullBit(oldp+1718,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[0]));
    bufp->fullBit(oldp+1719,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[1]));
    bufp->fullBit(oldp+1720,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[2]));
    bufp->fullBit(oldp+1721,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[3]));
    bufp->fullBit(oldp+1722,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[4]));
    bufp->fullBit(oldp+1723,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[5]));
    bufp->fullBit(oldp+1724,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[6]));
    bufp->fullBit(oldp+1725,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[7]));
    bufp->fullBit(oldp+1726,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[8]));
    bufp->fullBit(oldp+1727,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[9]));
    bufp->fullBit(oldp+1728,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[10]));
    bufp->fullBit(oldp+1729,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[11]));
    bufp->fullBit(oldp+1730,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[12]));
    bufp->fullBit(oldp+1731,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[13]));
    bufp->fullBit(oldp+1732,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[14]));
    bufp->fullBit(oldp+1733,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[15]));
    bufp->fullBit(oldp+1734,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[16]));
    bufp->fullBit(oldp+1735,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[17]));
    bufp->fullBit(oldp+1736,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[18]));
    bufp->fullBit(oldp+1737,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[19]));
    bufp->fullBit(oldp+1738,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[20]));
    bufp->fullBit(oldp+1739,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[21]));
    bufp->fullBit(oldp+1740,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[22]));
    bufp->fullBit(oldp+1741,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[23]));
    bufp->fullBit(oldp+1742,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[24]));
    bufp->fullBit(oldp+1743,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[25]));
    bufp->fullBit(oldp+1744,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[26]));
    bufp->fullBit(oldp+1745,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[27]));
    bufp->fullBit(oldp+1746,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[28]));
    bufp->fullBit(oldp+1747,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[29]));
    bufp->fullBit(oldp+1748,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[30]));
    bufp->fullBit(oldp+1749,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[31]));
    bufp->fullBit(oldp+1750,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_en_pipe_0));
    bufp->fullCData(oldp+1751,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0),5);
    bufp->fullBit(oldp+1752,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[0]));
    bufp->fullBit(oldp+1753,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[1]));
    bufp->fullBit(oldp+1754,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[2]));
    bufp->fullBit(oldp+1755,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[3]));
    bufp->fullBit(oldp+1756,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[4]));
    bufp->fullBit(oldp+1757,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[5]));
    bufp->fullBit(oldp+1758,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[6]));
    bufp->fullBit(oldp+1759,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[7]));
    bufp->fullBit(oldp+1760,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[8]));
    bufp->fullBit(oldp+1761,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[9]));
    bufp->fullBit(oldp+1762,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[10]));
    bufp->fullBit(oldp+1763,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[11]));
    bufp->fullBit(oldp+1764,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[12]));
    bufp->fullBit(oldp+1765,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[13]));
    bufp->fullBit(oldp+1766,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[14]));
    bufp->fullBit(oldp+1767,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[15]));
    bufp->fullBit(oldp+1768,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[16]));
    bufp->fullBit(oldp+1769,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[17]));
    bufp->fullBit(oldp+1770,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[18]));
    bufp->fullBit(oldp+1771,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[19]));
    bufp->fullBit(oldp+1772,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[20]));
    bufp->fullBit(oldp+1773,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[21]));
    bufp->fullBit(oldp+1774,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[22]));
    bufp->fullBit(oldp+1775,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[23]));
    bufp->fullBit(oldp+1776,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[24]));
    bufp->fullBit(oldp+1777,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[25]));
    bufp->fullBit(oldp+1778,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[26]));
    bufp->fullBit(oldp+1779,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[27]));
    bufp->fullBit(oldp+1780,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[28]));
    bufp->fullBit(oldp+1781,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[29]));
    bufp->fullBit(oldp+1782,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[30]));
    bufp->fullBit(oldp+1783,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[31]));
    bufp->fullBit(oldp+1784,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_en_pipe_0));
    bufp->fullCData(oldp+1785,(vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_addr_pipe_0),5);
    bufp->fullBit(oldp+1786,(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_0_result));
    bufp->fullBit(oldp+1787,(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_1_result));
    bufp->fullCData(oldp+1788,(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0),4);
    bufp->fullBit(oldp+1789,(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_3));
    bufp->fullCData(oldp+1790,((((7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                  ? 2U : 0U) | ((3U 
                                                 == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                                 ? 2U
                                                 : 0U))),2);
    bufp->fullBit(oldp+1791,((((8U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)) 
                               | (7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))) 
                              | (3U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)))));
    bufp->fullBit(oldp+1792,((vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                              >> 0x1fU)));
    bufp->fullBit(oldp+1793,((1U & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                    >> 0x13U))));
    bufp->fullBit(oldp+1794,((vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                              >> 0x1fU)));
    bufp->fullIData(oldp+1795,(((1U & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
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
    bufp->fullQData(oldp+1796,(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp),64);
    bufp->fullBit(oldp+1798,((((IData)(vlSelf->CoreTop__DOT__EX__DOT__branch_flag) 
                               & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_inst_valid)) 
                              & (IData)(vlSelf->CoreTop__DOT__valid_1))));
    bufp->fullQData(oldp+1799,(((0x19U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                 ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1
                                 : vlSelf->CoreTop__DOT__EX__DOT___GEN_289)),64);
    bufp->fullIData(oldp+1801,(((IData)(vlSelf->CoreTop__DOT__EX_io_is_flush)
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
    bufp->fullQData(oldp+1802,(((((IData)(vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfWen) 
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
    bufp->fullQData(oldp+1804,(((((IData)(vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfWen) 
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
    bufp->fullBit(oldp+1806,((1U & (~ (((0U == ((0x13U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                 ? 0x40U
                                                 : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_316))) 
                                        | (IData)(vlSelf->CoreTop__DOT__EX_io_is_flush)) 
                                       | (~ (IData)(vlSelf->CoreTop__DOT__valid)))))));
    bufp->fullQData(oldp+1807,(((0U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src1Type))
                                 ? vlSelf->CoreTop__DOT__mem_bypass_io_Bypass_REG1
                                 : vlSelf->CoreTop__DOT__EX__DOT___GEN_1)),64);
    bufp->fullQData(oldp+1809,(((0U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src2Type))
                                 ? vlSelf->CoreTop__DOT__mem_bypass_io_Bypass_REG2
                                 : vlSelf->CoreTop__DOT__EX__DOT___GEN_3)),64);
    bufp->fullQData(oldp+1811,(((IData)(vlSelf->CoreTop__DOT__EX__DOT__is_mul)
                                 ? vlSelf->CoreTop__DOT__EX__DOT___shift_result_T
                                 : (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT___shift_result_T)))),64);
    bufp->fullQData(oldp+1813,(((IData)(vlSelf->CoreTop__DOT__EX__DOT__is_mul)
                                 ? vlSelf->CoreTop__DOT__EX__DOT___compar_result_T_3
                                 : (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT___compar_result_T_3)))),64);
    bufp->fullQData(oldp+1815,(((0x40U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                 ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1
                                 : ((0x1aU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                     ? vlSelf->CoreTop__DOT__EX__DOT___compar_result_T_3
                                     : ((0x68U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                         ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_7
                                         : ((0x44U 
                                             == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                             ? (vlSelf->CoreTop__DOT__EX__DOT___shift_result_T 
                                                | vlSelf->CoreTop__DOT__EX__DOT___compar_result_T_3)
                                             : ((0x69U 
                                                 == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                 ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_10
                                                 : 
                                                ((0x71U 
                                                  == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                  ? 
                                                 (vlSelf->CoreTop__DOT__EX__DOT___shift_result_T 
                                                  & vlSelf->CoreTop__DOT__EX__DOT___compar_result_T_3)
                                                  : vlSelf->CoreTop__DOT__EX__DOT___GEN_145))))))),64);
    bufp->fullQData(oldp+1817,(((0x6aU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                 ? ((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T 
                                     < vlSelf->CoreTop__DOT__EX__DOT___compar_result_T_3)
                                     ? 1ULL : 0ULL)
                                 : ((2U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                     ? (VL_LTS_IQQ(64, vlSelf->CoreTop__DOT__EX__DOT___shift_result_T, vlSelf->CoreTop__DOT__EX__DOT___compar_result_T_3)
                                         ? 1ULL : 0ULL)
                                     : 0ULL))),64);
    VL_EXTEND_WQ(127,64, __Vtemp_h7a2d1147__0, VL_SHIFTRS_QQI(64,64,5, vlSelf->CoreTop__DOT__EX__DOT___shift_result_T, 
                                                              (0x1fU 
                                                               & (IData)(vlSelf->CoreTop__DOT__EX__DOT___compar_result_T_3))));
    VL_EXTEND_WQ(127,64, __Vtemp_h8248920c__0, (((QData)((IData)(
                                                                 ((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_5[0U] 
                                                                   >> 0x1fU)
                                                                   ? 0xffffffffU
                                                                   : 0U))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_5[0U]))));
    VL_EXTEND_WQ(127,64, __Vtemp_h14069084__0, vlSelf->CoreTop__DOT__EX__DOT___shift_result_T);
    VL_SHIFTL_WWI(127,127,6, __Vtemp_h02754327__0, __Vtemp_h14069084__0, 
                  (0x3fU & (IData)(vlSelf->CoreTop__DOT__EX__DOT___compar_result_T_3)));
    VL_EXTEND_WQ(127,64, __Vtemp_he2247138__0, ((0x75U 
                                                 == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                 ? 
                                                (vlSelf->CoreTop__DOT__EX__DOT___shift_result_T 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT___compar_result_T_3)))
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
                                                                      & (IData)(vlSelf->CoreTop__DOT__EX__DOT___compar_result_T_3)))
                                                       : 0ULL))))))));
    bufp->fullQData(oldp+1819,((((QData)((IData)(((0x6eU 
                                                   == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                   ? 
                                                  __Vtemp_h7a2d1147__0[1U]
                                                   : 
                                                  ((0x73U 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? 
                                                   __Vtemp_h8248920c__0[1U]
                                                    : 
                                                   ((0x41U 
                                                     == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                     ? 
                                                    __Vtemp_h02754327__0[1U]
                                                     : 
                                                    __Vtemp_he2247138__0[1U]))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((0x6eU 
                                                               == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                               ? 
                                                              __Vtemp_h7a2d1147__0[0U]
                                                               : 
                                                              ((0x73U 
                                                                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                                ? 
                                                               __Vtemp_h8248920c__0[0U]
                                                                : 
                                                               ((0x41U 
                                                                 == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                                 ? 
                                                                __Vtemp_h02754327__0[0U]
                                                                 : 
                                                                __Vtemp_he2247138__0[0U]))))))),64);
    bufp->fullQData(oldp+1821,((((((0U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
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
    bufp->fullQData(oldp+1823,((((((0U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
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
    bufp->fullQData(oldp+1825,(((0x45U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                 ? vlSelf->CoreTop__DOT__mem_rdata
                                 : ((0x47U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                     ? ((1U & (IData)(
                                                      (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                       >> 2U)))
                                         ? (((QData)((IData)(
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlSelf->CoreTop__DOT__mem_rdata 
                                                                          >> 0x3fU)))
                                                               ? 0xffffffffU
                                                               : 0U))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              (vlSelf->CoreTop__DOT__mem_rdata 
                                                               >> 0x20U))))
                                         : (((QData)((IData)(
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlSelf->CoreTop__DOT__mem_rdata 
                                                                          >> 0x1fU)))
                                                               ? 0xffffffffU
                                                               : 0U))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->CoreTop__DOT__mem_rdata))))
                                     : ((0x11U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                         ? ((1U & (IData)(
                                                          (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                           >> 2U)))
                                             ? (QData)((IData)(
                                                               (vlSelf->CoreTop__DOT__mem_rdata 
                                                                >> 0x20U)))
                                             : (QData)((IData)(vlSelf->CoreTop__DOT__mem_rdata)))
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
    bufp->fullBit(oldp+1827,(vlSelf->CoreTop__DOT__ICACHE_io_in_rdata_rep_valid));
    bufp->fullBit(oldp+1828,(vlSelf->CoreTop__DOT__EX_io_is_flush));
    bufp->fullQData(oldp+1829,(vlSelf->CoreTop__DOT__mem_bypass_io_Bypass_REG1),64);
    bufp->fullQData(oldp+1831,(vlSelf->CoreTop__DOT__mem_bypass_io_Bypass_REG2),64);
    bufp->fullQData(oldp+1833,(vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfData),64);
    bufp->fullQData(oldp+1835,(vlSelf->CoreTop__DOT__mem_rdata),64);
    bufp->fullQData(oldp+1837,(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfData),64);
    bufp->fullQData(oldp+1839,(vlSelf->CoreTop__DOT__IFMEM_rdata),64);
    bufp->fullQData(oldp+1841,(vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src1),64);
    bufp->fullQData(oldp+1843,(vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src2),64);
    bufp->fullQData(oldp+1845,(vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_quotient),64);
    bufp->fullQData(oldp+1847,(vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_remainder),64);
    bufp->fullQData(oldp+1849,(vlSelf->CoreTop__DOT__EX__DOT___shift_result_T),64);
    bufp->fullQData(oldp+1851,(vlSelf->CoreTop__DOT__EX__DOT___compar_result_T_3),64);
    bufp->fullBit(oldp+1853,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1 
                                            >> 0x1fU)))));
    bufp->fullBit(oldp+1854,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_quotient 
                                            >> 0x1fU)))));
    bufp->fullBit(oldp+1855,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_remainder 
                                            >> 0x1fU)))));
    bufp->fullBit(oldp+1856,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_10 
                                            >> 0x1fU)))));
    bufp->fullBit(oldp+1857,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_5[0U] 
                              >> 0x1fU)));
    bufp->fullBit(oldp+1858,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_16[0U] 
                              >> 0x1fU)));
    bufp->fullBit(oldp+1859,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_25 
                              >> 0x1fU)));
    bufp->fullBit(oldp+1860,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_31 
                              >> 0x1fU)));
    bufp->fullBit(oldp+1861,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T 
                                            >> 0x1fU)))));
    bufp->fullBit(oldp+1862,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT___compar_result_T_3 
                                            >> 0x1fU)))));
    bufp->fullBit(oldp+1863,(vlSelf->CoreTop__DOT__EX__DOT__branch_flag));
    bufp->fullBit(oldp+1864,((1U & (IData)((vlSelf->CoreTop__DOT__mem_rdata 
                                            >> 0x3fU)))));
    bufp->fullBit(oldp+1865,((1U & (IData)((vlSelf->CoreTop__DOT__mem_rdata 
                                            >> 0x1fU)))));
    bufp->fullBit(oldp+1866,((1U & ((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_27) 
                                    >> 7U))));
    bufp->fullBit(oldp+1867,((1U & ((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_44) 
                                    >> 0xfU))));
    bufp->fullBit(oldp+1868,(vlSelf->clock));
    bufp->fullBit(oldp+1869,(vlSelf->reset));
    bufp->fullQData(oldp+1870,(vlSelf->io_pc),64);
    bufp->fullIData(oldp+1872,(vlSelf->io_inst),32);
    bufp->fullBit(oldp+1873,(1U));
    bufp->fullCData(oldp+1874,(0U),5);
    bufp->fullCData(oldp+1875,(1U),5);
    bufp->fullCData(oldp+1876,(2U),5);
    bufp->fullCData(oldp+1877,(3U),5);
    bufp->fullCData(oldp+1878,(4U),5);
    bufp->fullCData(oldp+1879,(5U),5);
    bufp->fullCData(oldp+1880,(6U),5);
    bufp->fullCData(oldp+1881,(7U),5);
    bufp->fullCData(oldp+1882,(8U),5);
    bufp->fullCData(oldp+1883,(9U),5);
    bufp->fullCData(oldp+1884,(0xaU),5);
    bufp->fullCData(oldp+1885,(0xbU),5);
    bufp->fullCData(oldp+1886,(0xcU),5);
    bufp->fullCData(oldp+1887,(0xdU),5);
    bufp->fullCData(oldp+1888,(0xeU),5);
    bufp->fullCData(oldp+1889,(0xfU),5);
    bufp->fullCData(oldp+1890,(0x10U),5);
    bufp->fullCData(oldp+1891,(0x11U),5);
    bufp->fullCData(oldp+1892,(0x12U),5);
    bufp->fullCData(oldp+1893,(0x13U),5);
    bufp->fullCData(oldp+1894,(0x14U),5);
    bufp->fullCData(oldp+1895,(0x15U),5);
    bufp->fullCData(oldp+1896,(0x16U),5);
    bufp->fullCData(oldp+1897,(0x17U),5);
    bufp->fullCData(oldp+1898,(0x18U),5);
    bufp->fullCData(oldp+1899,(0x19U),5);
    bufp->fullCData(oldp+1900,(0x1aU),5);
    bufp->fullCData(oldp+1901,(0x1bU),5);
    bufp->fullCData(oldp+1902,(0x1cU),5);
    bufp->fullCData(oldp+1903,(0x1dU),5);
    bufp->fullCData(oldp+1904,(0x1eU),5);
    bufp->fullCData(oldp+1905,(0x1fU),5);
    bufp->fullBit(oldp+1906,(0U));
    bufp->fullQData(oldp+1907,(0ULL),64);
    bufp->fullCData(oldp+1909,(0U),8);
}
