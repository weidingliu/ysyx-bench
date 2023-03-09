// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VCPUTOP__DPI_H_
#define VERILATED_VCPUTOP__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at vsrc/MEM.v:1:30
    extern void pmem_read(long long raddr, long long* rdata);
    // DPI import at vsrc/MEM.v:3:30
    extern void pmem_write(long long waddr, long long wdata, char wmask);
    // DPI import at vsrc/CSR_DIFF.v:1:30
    extern void set_csr(const svOpenArrayHandle a);
    // DPI import at vsrc/DIP_model.v:3:30
    extern void set_gpr_ptr(const svOpenArrayHandle a);
    // DPI import at vsrc/DIP_model.v:5:30
    extern void set_pc(const svOpenArrayHandle inst);

#ifdef __cplusplus
}
#endif

#endif  // guard
