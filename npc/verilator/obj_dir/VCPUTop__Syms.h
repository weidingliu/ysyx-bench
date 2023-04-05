// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCPUTOP__SYMS_H_
#define VERILATED_VCPUTOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VCPUTop.h"

// INCLUDE MODULE CLASSES
#include "VCPUTop___024root.h"
#include "VCPUTop___024unit.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class VCPUTop__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VCPUTop* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VCPUTop___024root              TOP;
    VCPUTop___024unit              TOP____024unit;

    // CONSTRUCTORS
    VCPUTop__Syms(VerilatedContext* contextp, const char* namep, VCPUTop* modelp);
    ~VCPUTop__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
