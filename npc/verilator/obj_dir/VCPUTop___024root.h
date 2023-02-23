// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCPUTop.h for the primary calling header

#ifndef VERILATED_VCPUTOP___024ROOT_H_
#define VERILATED_VCPUTOP___024ROOT_H_  // guard

#include "verilated.h"

class VCPUTop__Syms;
class VCPUTop___024unit;


class VCPUTop___024root final : public VerilatedModule {
  public:
    // CELLS
    VCPUTop___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*2:0*/ CPUTop__DOT__ID_io_ctrlIO_futype;
    CData/*6:0*/ CPUTop__DOT__ID_io_ctrlIO_aluoptype;
    CData/*3:0*/ CPUTop__DOT__ID__DOT___Inst_decode_T_69;
    CData/*3:0*/ CPUTop__DOT__ID__DOT__Inst_decode_0;
    CData/*2:0*/ CPUTop__DOT__ID__DOT___Inst_decode_T_97;
    CData/*6:0*/ CPUTop__DOT__ID__DOT___Inst_decode_T_120;
    CData/*6:0*/ CPUTop__DOT__ID__DOT___Inst_decode_T_131;
    CData/*0:0*/ CPUTop__DOT__ID__DOT___Inst_decode_T_150;
    CData/*0:0*/ CPUTop__DOT__ID__DOT__srctype2;
    CData/*1:0*/ CPUTop__DOT__ID__DOT___io_ctrlIO_src1type_T_2;
    CData/*0:0*/ CPUTop__DOT__EX__DOT___GEN_48;
    CData/*0:0*/ __Vclklast__TOP__clock;
    VL_IN(io_inst,31,0);
    IData/*31:0*/ CPUTop__DOT__IFM_inst;
    VlWide<3>/*94:0*/ CPUTop__DOT__EX__DOT___shift_result_T_3;
    VL_OUT64(io_pc,63,0);
    VL_OUT64(io_result,63,0);
    QData/*63:0*/ CPUTop__DOT__ID_io_ctrlIO_Imm;
    QData/*63:0*/ CPUTop__DOT__EX_io1_result;
    QData/*63:0*/ CPUTop__DOT__mem_rdata;
    QData/*63:0*/ CPUTop__DOT__IF__DOT__temp;
    QData/*63:0*/ CPUTop__DOT__IF__DOT___temp_T_2;
    QData/*63:0*/ CPUTop__DOT__IFM__DOT__rdata;
    QData/*63:0*/ CPUTop__DOT__EX__DOT__src1;
    QData/*63:0*/ CPUTop__DOT__EX__DOT__src2;
    QData/*63:0*/ CPUTop__DOT__EX__DOT___addr_temp_T_1;
    QData/*63:0*/ CPUTop__DOT__EX__DOT___addr_temp_T_3;
    QData/*63:0*/ CPUTop__DOT__EX__DOT___GEN_8;
    QData/*63:0*/ CPUTop__DOT__EX__DOT__addr_temp;
    QData/*63:0*/ CPUTop__DOT__EX__DOT___GEN_28;
    QData/*63:0*/ CPUTop__DOT__EX__DOT___alu_result_T_7;
    QData/*63:0*/ CPUTop__DOT__EX__DOT___GEN_45;
    QData/*63:0*/ CPUTop__DOT__EX__DOT___branch_result_T_1;
    QData/*63:0*/ CPUTop__DOT__EX__DOT___dnpc_T_9;
    QData/*63:0*/ __Vtask_pmem_read__0__rdata;
    QData/*63:0*/ __Vtask_pmem_read__4__rdata;
    VlUnpacked<QData/*63:0*/, 32> CPUTop__DOT__rf;
    VlUnpacked<QData/*63:0*/, 32> CPUTop__DOT__DIP__DOT__rf;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VCPUTop__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCPUTop___024root(VCPUTop__Syms* symsp, const char* name);
    ~VCPUTop___024root();
    VL_UNCOPYABLE(VCPUTop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
