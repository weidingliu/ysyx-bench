// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPUTop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VCPUTop__Syms.h"
#include "VCPUTop___024unit.h"

extern "C" void set_gpr_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void VCPUTop___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(const VlUnpacked<QData/*63:0*/, 32> &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VCPUTop___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit\n"); );
    // Body
    static const int a__Vopenprops__ulims[2] = {31, 0};
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0, VerilatedVarProps::Unpacked(), 1, a__Vopenprops__ulims);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_gpr_ptr(&a__Vopenarray);
}

extern "C" void set_pc(const svBitVecVal* pc);

VL_INLINE_OPT void VCPUTop___024unit____Vdpiimwrap_set_pc_TOP____024unit(QData/*63:0*/ pc) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VCPUTop___024unit____Vdpiimwrap_set_pc_TOP____024unit\n"); );
    // Body
    svBitVecVal pc__Vcvt[2];
    for (size_t pc__Vidx = 0; pc__Vidx < 1; ++pc__Vidx) VL_SET_SVBV_Q(64, pc__Vcvt + 2 * pc__Vidx, pc);
    set_pc(pc__Vcvt);
}
