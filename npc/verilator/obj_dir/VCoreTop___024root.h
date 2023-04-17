// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCoreTop.h for the primary calling header

#ifndef VERILATED_VCORETOP___024ROOT_H_
#define VERILATED_VCORETOP___024ROOT_H_  // guard

#include "verilated.h"

class VCoreTop__Syms;
class VCoreTop___024unit;


class VCoreTop___024root final : public VerilatedModule {
  public:
    // CELLS
    VCoreTop___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        VL_IN8(reset,0,0);
        CData/*0:0*/ CoreTop__DOT__ID_io_out_bits_ctrl_signal_rfWen;
        CData/*0:0*/ CoreTop__DOT__EX_io_branchIO_is_jump;
        CData/*0:0*/ CoreTop__DOT__EX_io_is_flush;
        CData/*0:0*/ CoreTop__DOT__valid;
        CData/*0:0*/ CoreTop__DOT__valid_1;
        CData/*2:0*/ CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src1Type;
        CData/*2:0*/ CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src2Type;
        CData/*2:0*/ CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType;
        CData/*0:0*/ CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_inst_valid;
        CData/*0:0*/ CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfWen;
        CData/*6:0*/ CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype;
        CData/*4:0*/ CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest;
        CData/*0:0*/ CoreTop__DOT__valid_2;
        CData/*2:0*/ CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_fuType;
        CData/*0:0*/ CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_inst_valid;
        CData/*6:0*/ CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype;
        CData/*4:0*/ CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest;
        CData/*0:0*/ CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfWen;
        CData/*0:0*/ CoreTop__DOT__valid_3;
        CData/*0:0*/ CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_inst_valid;
        CData/*4:0*/ CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest;
        CData/*0:0*/ CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfWen;
        CData/*0:0*/ CoreTop__DOT__DIP_io_inst_valid_REG;
        CData/*3:0*/ CoreTop__DOT__ID__DOT___Inst_decode_T_144;
        CData/*3:0*/ CoreTop__DOT__ID__DOT___Inst_decode_T_159;
        CData/*3:0*/ CoreTop__DOT__ID__DOT___Inst_decode_T_174;
        CData/*3:0*/ CoreTop__DOT__ID__DOT___Inst_decode_T_189;
        CData/*3:0*/ CoreTop__DOT__ID__DOT__Inst_decode_0;
        CData/*2:0*/ CoreTop__DOT__ID__DOT___Inst_decode_T_209;
        CData/*2:0*/ CoreTop__DOT__ID__DOT___Inst_decode_T_224;
        CData/*2:0*/ CoreTop__DOT__ID__DOT___Inst_decode_T_239;
        CData/*6:0*/ CoreTop__DOT__ID__DOT___Inst_decode_T_268;
        CData/*6:0*/ CoreTop__DOT__ID__DOT___Inst_decode_T_283;
        CData/*6:0*/ CoreTop__DOT__ID__DOT___Inst_decode_T_298;
        CData/*6:0*/ CoreTop__DOT__ID__DOT___Inst_decode_T_313;
        CData/*6:0*/ CoreTop__DOT__ID__DOT___Inst_decode_T_316;
        CData/*0:0*/ CoreTop__DOT__ID__DOT___Inst_decode_T_363;
        CData/*0:0*/ CoreTop__DOT__EX__DOT__branch_flag;
        CData/*7:0*/ CoreTop__DOT__MEM__DOT___GEN_32;
        CData/*7:0*/ CoreTop__DOT__MEM__DOT___mem_result_T_27;
        CData/*0:0*/ __Vclklast__TOP__clock;
        SData/*15:0*/ CoreTop__DOT__MEM__DOT___mem_result_T_44;
        VL_OUT(io_inst,31,0);
        IData/*31:0*/ CoreTop__DOT__ID_io_in_bits_r_Inst;
        IData/*31:0*/ CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_inst;
        IData/*31:0*/ CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_inst;
        IData/*31:0*/ CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_inst;
        IData/*31:0*/ CoreTop__DOT__DIP_io_inst_REG;
        IData/*31:0*/ CoreTop__DOT__io_inst_REG;
        VlWide<4>/*127:0*/ CoreTop__DOT__EX__DOT___alu_result_T_19;
        IData/*31:0*/ CoreTop__DOT__EX__DOT___alu_result_T_38;
        IData/*31:0*/ CoreTop__DOT__EX__DOT___GEN_22;
        IData/*31:0*/ CoreTop__DOT__EX__DOT___alu_result_T_64;
        VlWide<3>/*94:0*/ CoreTop__DOT__EX__DOT___shift_result_T_5;
        VlWide<3>/*94:0*/ CoreTop__DOT__EX__DOT___shift_result_T_16;
        IData/*31:0*/ CoreTop__DOT__EX__DOT___shift_result_T_25;
        IData/*31:0*/ CoreTop__DOT__EX__DOT___shift_result_T_31;
        VL_OUT64(io_pc,63,0);
        QData/*63:0*/ CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfData;
        QData/*63:0*/ CoreTop__DOT__mem_rdata;
        QData/*63:0*/ CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfData;
        QData/*63:0*/ CoreTop__DOT__ID_io_in_bits_r_PC;
    };
    struct {
        QData/*63:0*/ CoreTop__DOT__EX_io_in_bits_r_ctrl_data_src1;
        QData/*63:0*/ CoreTop__DOT__EX_io_in_bits_r_ctrl_data_src2;
        QData/*63:0*/ CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm;
        QData/*63:0*/ CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC;
        QData/*63:0*/ CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_PC;
        QData/*63:0*/ CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_Dnpc;
        QData/*63:0*/ CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfData;
        QData/*63:0*/ CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src1;
        QData/*63:0*/ CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2;
        QData/*63:0*/ CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_Imm;
        QData/*63:0*/ CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_PC;
        QData/*63:0*/ CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_Dnpc;
        QData/*63:0*/ CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfData;
        QData/*63:0*/ CoreTop__DOT__DIP_io_pc_REG;
        QData/*63:0*/ CoreTop__DOT__DIP_io_dnpc_REG;
        QData/*63:0*/ CoreTop__DOT__IF__DOT__temp;
        QData/*63:0*/ CoreTop__DOT__IF__DOT___temp_T_2;
        QData/*63:0*/ CoreTop__DOT__IFM__DOT__rdata;
        QData/*63:0*/ CoreTop__DOT__EX__DOT___GEN_1;
        QData/*63:0*/ CoreTop__DOT__EX__DOT___GEN_3;
        QData/*63:0*/ CoreTop__DOT__EX__DOT__src2;
        QData/*63:0*/ CoreTop__DOT__EX__DOT___alu_result_T_1;
        QData/*63:0*/ CoreTop__DOT__EX__DOT___alu_result_T_7;
        QData/*63:0*/ CoreTop__DOT__EX__DOT___alu_result_T_10;
        QData/*32:0*/ CoreTop__DOT__EX__DOT___alu_result_T_28;
        QData/*63:0*/ CoreTop__DOT__EX__DOT___alu_result_T_58;
        QData/*63:0*/ CoreTop__DOT__EX__DOT___GEN_14;
        QData/*63:0*/ CoreTop__DOT__EX__DOT___shift_result_T_28;
        QData/*63:0*/ CoreTop__DOT__EX__DOT___shift_result_T_35;
        QData/*63:0*/ CoreTop__DOT__EX__DOT___GEN_36;
        QData/*63:0*/ CoreTop__DOT__EX__DOT___branch_result_T_1;
        QData/*63:0*/ CoreTop__DOT__EX__DOT___dnpc_T_11;
        QData/*63:0*/ CoreTop__DOT__EX__DOT___GEN_60;
        QData/*63:0*/ CoreTop__DOT__MEM__DOT___addr_temp_T_1;
        QData/*63:0*/ CoreTop__DOT__MEM__DOT___GEN_16;
        QData/*63:0*/ CoreTop__DOT__MEM__DOT__addr_temp;
        QData/*63:0*/ CoreTop__DOT__MEM__DOT___wdata_temp_T_21;
        QData/*63:0*/ __Vtask_pmem_read__0__rdata;
        QData/*63:0*/ __Vtask_pmem_read__4__rdata;
        VlUnpacked<QData/*63:0*/, 32> CoreTop__DOT__rf;
        VlUnpacked<QData/*63:0*/, 32> CoreTop__DOT__DIP__DOT__rf;
        VlUnpacked<IData/*31:0*/, 6> CoreTop__DOT__DIP__DOT__IN;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };

    // INTERNAL VARIABLES
    VCoreTop__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCoreTop___024root(VCoreTop__Syms* symsp, const char* name);
    ~VCoreTop___024root();
    VL_UNCOPYABLE(VCoreTop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
