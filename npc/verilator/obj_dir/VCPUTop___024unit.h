// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCPUTop.h for the primary calling header

#ifndef VERILATED_VCPUTOP___024UNIT_H_
#define VERILATED_VCPUTOP___024UNIT_H_  // guard

#include "verilated.h"

class VCPUTop__Syms;

class VCPUTop___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    VCPUTop__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCPUTop___024unit(VCPUTop__Syms* symsp, const char* name);
    ~VCPUTop___024unit();
    VL_UNCOPYABLE(VCPUTop___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
