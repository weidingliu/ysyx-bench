// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCPUTop.h for the primary calling header

#ifndef VERILATED_VCPUTOP___024ROOT_H_
#define VERILATED_VCPUTOP___024ROOT_H_  // guard

#include "verilated.h"

class VCPUTop__Syms;

class VCPUTop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*1:0*/ CPUTop__DOT__ID__DOT__Inst_decode_0;
    CData/*0:0*/ __Vclklast__TOP__clock;
    VL_IN(io_inst,31,0);
    VL_OUT64(io_pc,63,0);
    VL_OUT64(io_result,63,0);
    QData/*63:0*/ CPUTop__DOT__EX_io1_result;
    QData/*63:0*/ CPUTop__DOT__IF__DOT__temp;
    QData/*63:0*/ CPUTop__DOT__IF__DOT___temp_T_1;
    VlUnpacked<QData/*63:0*/, 32> CPUTop__DOT__rf;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

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
