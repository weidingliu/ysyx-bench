// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPUTop.h for the primary calling header

#include "verilated.h"

#include "VCPUTop__Syms.h"
#include "VCPUTop___024root.h"

void VCPUTop___024root___ctor_var_reset(VCPUTop___024root* vlSelf);

VCPUTop___024root::VCPUTop___024root(VCPUTop__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VCPUTop___024root___ctor_var_reset(this);
}

void VCPUTop___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VCPUTop___024root::~VCPUTop___024root() {
}
