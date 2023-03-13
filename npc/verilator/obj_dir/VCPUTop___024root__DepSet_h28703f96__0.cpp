// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPUTop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VCPUTop___024root.h"

VL_INLINE_OPT void VCPUTop___024root___sequent__TOP__0(VCPUTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPUTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUTop___024root___sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__CPUTop__DOT__rf__v0;
    QData/*63:0*/ __Vdlyvval__CPUTop__DOT__rf__v0;
    CData/*0:0*/ __Vdlyvset__CPUTop__DOT__rf__v0;
    // Body
    __Vdlyvset__CPUTop__DOT__rf__v0 = 0U;
    vlSelf->CPUTop__DOT__io_time_int_REG = vlSelf->CPUTop__DOT__EX_io1_time_int;
    if (((0x13U == (0x707fU & vlSelf->CPUTop__DOT__IFM_inst)) 
         | ((0x1013U == (0xfc00707fU & vlSelf->CPUTop__DOT__IFM_inst)) 
            | ((0x17U == (0x7fU & vlSelf->CPUTop__DOT__IFM_inst)) 
               | ((0x37U == (0x7fU & vlSelf->CPUTop__DOT__IFM_inst)) 
                  | ((0x6013U == (0x707fU & vlSelf->CPUTop__DOT__IFM_inst)) 
                     | ((0x6fU == (0x7fU & vlSelf->CPUTop__DOT__IFM_inst)) 
                        | ((0x67U == (0x707fU & vlSelf->CPUTop__DOT__IFM_inst)) 
                           | ((0x3003U == (0x707fU 
                                           & vlSelf->CPUTop__DOT__IFM_inst)) 
                              | ((0x3023U != (0x707fU 
                                              & vlSelf->CPUTop__DOT__IFM_inst)) 
                                 & ((0x2003U == (0x707fU 
                                                 & vlSelf->CPUTop__DOT__IFM_inst)) 
                                    | ((0x3bU == (0xfe00707fU 
                                                  & vlSelf->CPUTop__DOT__IFM_inst)) 
                                       | ((0x40000033U 
                                           == (0xfe00707fU 
                                               & vlSelf->CPUTop__DOT__IFM_inst)) 
                                          | ((0x3013U 
                                              == (0x707fU 
                                                  & vlSelf->CPUTop__DOT__IFM_inst)) 
                                             | ((0x63U 
                                                 != 
                                                 (0x707fU 
                                                  & vlSelf->CPUTop__DOT__IFM_inst)) 
                                                & (IData)(vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_366)))))))))))))))) {
        __Vdlyvval__CPUTop__DOT__rf__v0 = ((0U == (0x1fU 
                                                   & (vlSelf->CPUTop__DOT__IFM_inst 
                                                      >> 7U)))
                                            ? 0ULL : vlSelf->CPUTop__DOT__EX_io1_result);
        __Vdlyvset__CPUTop__DOT__rf__v0 = 1U;
        __Vdlyvdim0__CPUTop__DOT__rf__v0 = (0x1fU & 
                                            (vlSelf->CPUTop__DOT__IFM_inst 
                                             >> 7U));
    }
    if (vlSelf->CPUTop__DOT__EX_io1_time_int) {
        vlSelf->CPUTop__DOT__EX__DOT__mepc = vlSelf->CPUTop__DOT__IF__DOT__temp;
    } else if ((0x17U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))) {
        vlSelf->CPUTop__DOT__EX__DOT__mepc = vlSelf->CPUTop__DOT__IF__DOT__temp;
    } else if ((0x40U != (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))) {
        if ((0x68U != (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))) {
            vlSelf->CPUTop__DOT__EX__DOT__mepc = vlSelf->CPUTop__DOT__EX__DOT___GEN_203;
        }
    }
    if (vlSelf->reset) {
        vlSelf->CPUTop__DOT__mmio__DOT__mtime = 0ULL;
        vlSelf->CPUTop__DOT__mmio__DOT__mtimecmp = 0x7d0ULL;
        vlSelf->CPUTop__DOT__EX__DOT__mstatus = 0ULL;
        vlSelf->CPUTop__DOT__EX__DOT__mie = 0ULL;
        vlSelf->CPUTop__DOT__EX__DOT__mip = 0ULL;
        vlSelf->CPUTop__DOT__EX__DOT__mcause = 0ULL;
        vlSelf->CPUTop__DOT__IF__DOT__temp = 0x80000000ULL;
        vlSelf->CPUTop__DOT__EX__DOT__mtvec = 0ULL;
    } else {
        vlSelf->CPUTop__DOT__mmio__DOT__mtime = (((IData)(vlSelf->CPUTop__DOT__mmio__DOT__flag) 
                                                  & (~ (IData)(vlSelf->CPUTop__DOT__ID__DOT___io_mem_we_T_12)))
                                                  ? 
                                                 ((0x4000U 
                                                   == 
                                                   (0xffffU 
                                                    & (IData)(
                                                              (vlSelf->CPUTop__DOT__EX_io1_addr 
                                                               >> 0x30U))))
                                                   ? vlSelf->CPUTop__DOT__mmio__DOT___mtime_T_1
                                                   : 
                                                  ((0xbff8U 
                                                    == 
                                                    (0xffffU 
                                                     & (IData)(
                                                               (vlSelf->CPUTop__DOT__EX_io1_addr 
                                                                >> 0x30U))))
                                                    ? vlSelf->CPUTop__DOT__EX_io1_wdata
                                                    : vlSelf->CPUTop__DOT__mmio__DOT___mtime_T_1))
                                                  : vlSelf->CPUTop__DOT__mmio__DOT___mtime_T_1);
        if (vlSelf->CPUTop__DOT__EX_io1_time_int) {
            vlSelf->CPUTop__DOT__mmio__DOT__mtimecmp 
                = vlSelf->CPUTop__DOT__mmio__DOT___T_11;
            vlSelf->CPUTop__DOT__EX__DOT__mip = vlSelf->CPUTop__DOT__EX__DOT___T_242;
            vlSelf->CPUTop__DOT__EX__DOT__mcause = 7ULL;
        } else {
            if (((IData)(vlSelf->CPUTop__DOT__mmio__DOT__flag) 
                 & (~ (IData)(vlSelf->CPUTop__DOT__ID__DOT___io_mem_we_T_12)))) {
                if ((0x4000U == (0xffffU & (IData)(
                                                   (vlSelf->CPUTop__DOT__EX_io1_addr 
                                                    >> 0x30U))))) {
                    vlSelf->CPUTop__DOT__mmio__DOT__mtimecmp 
                        = vlSelf->CPUTop__DOT__EX_io1_wdata;
                }
            }
            if ((0x40U != (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))) {
                if ((0x68U != (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))) {
                    vlSelf->CPUTop__DOT__EX__DOT__mip 
                        = vlSelf->CPUTop__DOT__EX__DOT___GEN_206;
                }
            }
            if ((0x17U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))) {
                vlSelf->CPUTop__DOT__EX__DOT__mcause = 0xbULL;
            } else if ((0x40U != (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))) {
                vlSelf->CPUTop__DOT__EX__DOT__mcause 
                    = vlSelf->CPUTop__DOT__EX__DOT___GEN_211;
            }
        }
        vlSelf->CPUTop__DOT__IF__DOT__temp = (((3U 
                                                == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype)) 
                                               | ((0x6bU 
                                                   == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                   ? 
                                                  (vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_58 
                                                   == vlSelf->CPUTop__DOT__EX__DOT__src2)
                                                   : (IData)(vlSelf->CPUTop__DOT__EX__DOT___GEN_250)))
                                               ? ((IData)(vlSelf->CPUTop__DOT__EX_io1_time_int)
                                                   ? vlSelf->CPUTop__DOT__EX__DOT__mtvec
                                                   : 
                                                  ((0x19U 
                                                    == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                    ? vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_1
                                                    : 
                                                   ((0x48U 
                                                     == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                     ? 
                                                    (0xfffffffffffffffeULL 
                                                     & vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_1)
                                                     : 
                                                    ((0x6bU 
                                                      == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                      ? vlSelf->CPUTop__DOT__EX__DOT___dnpc_T_9
                                                      : 
                                                     ((0x6cU 
                                                       == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                       ? vlSelf->CPUTop__DOT__EX__DOT___dnpc_T_9
                                                       : 
                                                      ((0x76U 
                                                        == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                        ? vlSelf->CPUTop__DOT__EX__DOT___dnpc_T_9
                                                        : 
                                                       ((0xcU 
                                                         == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                         ? vlSelf->CPUTop__DOT__EX__DOT___dnpc_T_9
                                                         : 
                                                        ((0x7bU 
                                                          == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                          ? vlSelf->CPUTop__DOT__EX__DOT___dnpc_T_9
                                                          : 
                                                         ((0xbU 
                                                           == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                           ? vlSelf->CPUTop__DOT__EX__DOT___dnpc_T_9
                                                           : 
                                                          ((0x17U 
                                                            == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                            ? vlSelf->CPUTop__DOT__EX__DOT__csr_data
                                                            : 
                                                           ((0x18U 
                                                             == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                             ? vlSelf->CPUTop__DOT__EX__DOT__csr_data
                                                             : 0ULL)))))))))))
                                               : vlSelf->CPUTop__DOT__IF__DOT___temp_T_2);
        if ((0x40U != (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))) {
            if ((0x68U != (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))) {
                if ((0x44U != (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))) {
                    vlSelf->CPUTop__DOT__EX__DOT__mstatus 
                        = vlSelf->CPUTop__DOT__EX__DOT___GEN_194;
                    vlSelf->CPUTop__DOT__EX__DOT__mie 
                        = vlSelf->CPUTop__DOT__EX__DOT___GEN_198;
                    vlSelf->CPUTop__DOT__EX__DOT__mtvec 
                        = vlSelf->CPUTop__DOT__EX__DOT___GEN_195;
                }
            }
        }
    }
    if (__Vdlyvset__CPUTop__DOT__rf__v0) {
        vlSelf->CPUTop__DOT__rf[__Vdlyvdim0__CPUTop__DOT__rf__v0] 
            = __Vdlyvval__CPUTop__DOT__rf__v0;
    }
    vlSelf->io_time_int = vlSelf->CPUTop__DOT__io_time_int_REG;
    vlSelf->CPUTop__DOT__mmio__DOT___mtime_T_1 = (1ULL 
                                                  + vlSelf->CPUTop__DOT__mmio__DOT__mtime);
    vlSelf->CPUTop__DOT__mmio__DOT___T_11 = (0x20000ULL 
                                             + vlSelf->CPUTop__DOT__mmio__DOT__mtimecmp);
    vlSelf->CPUTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[2U] 
        = vlSelf->CPUTop__DOT__EX__DOT__mstatus;
    vlSelf->CPUTop__DOT__EX__DOT___T_242 = (0x80ULL 
                                            | vlSelf->CPUTop__DOT__EX__DOT__mip);
    vlSelf->CPUTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[1U] 
        = vlSelf->CPUTop__DOT__EX__DOT__mcause;
    vlSelf->CPUTop__DOT__DIP__DOT__rf[0U] = vlSelf->CPUTop__DOT__rf
        [0U];
    vlSelf->CPUTop__DOT__DIP__DOT__rf[1U] = vlSelf->CPUTop__DOT__rf
        [1U];
    vlSelf->CPUTop__DOT__DIP__DOT__rf[2U] = vlSelf->CPUTop__DOT__rf
        [2U];
    vlSelf->CPUTop__DOT__DIP__DOT__rf[3U] = vlSelf->CPUTop__DOT__rf
        [3U];
    vlSelf->CPUTop__DOT__DIP__DOT__rf[4U] = vlSelf->CPUTop__DOT__rf
        [4U];
    vlSelf->CPUTop__DOT__DIP__DOT__rf[5U] = vlSelf->CPUTop__DOT__rf
        [5U];
    vlSelf->CPUTop__DOT__DIP__DOT__rf[6U] = vlSelf->CPUTop__DOT__rf
        [6U];
    vlSelf->CPUTop__DOT__DIP__DOT__rf[7U] = vlSelf->CPUTop__DOT__rf
        [7U];
    vlSelf->CPUTop__DOT__DIP__DOT__rf[8U] = vlSelf->CPUTop__DOT__rf
        [8U];
    vlSelf->CPUTop__DOT__DIP__DOT__rf[9U] = vlSelf->CPUTop__DOT__rf
        [9U];
    vlSelf->CPUTop__DOT__DIP__DOT__rf[0xaU] = vlSelf->CPUTop__DOT__rf
        [0xaU];
    vlSelf->CPUTop__DOT__DIP__DOT__rf[0xbU] = vlSelf->CPUTop__DOT__rf
        [0xbU];
    vlSelf->CPUTop__DOT__DIP__DOT__rf[0xcU] = vlSelf->CPUTop__DOT__rf
        [0xcU];
    vlSelf->CPUTop__DOT__DIP__DOT__rf[0xdU] = vlSelf->CPUTop__DOT__rf
        [0xdU];
    vlSelf->CPUTop__DOT__DIP__DOT__rf[0xeU] = vlSelf->CPUTop__DOT__rf
        [0xeU];
    vlSelf->CPUTop__DOT__DIP__DOT__rf[0xfU] = vlSelf->CPUTop__DOT__rf
        [0xfU];
    vlSelf->CPUTop__DOT__DIP__DOT__rf[0x10U] = vlSelf->CPUTop__DOT__rf
        [0x10U];
    vlSelf->CPUTop__DOT__DIP__DOT__rf[0x11U] = vlSelf->CPUTop__DOT__rf
        [0x11U];
    vlSelf->CPUTop__DOT__DIP__DOT__rf[0x12U] = vlSelf->CPUTop__DOT__rf
        [0x12U];
    vlSelf->CPUTop__DOT__DIP__DOT__rf[0x13U] = vlSelf->CPUTop__DOT__rf
        [0x13U];
    vlSelf->CPUTop__DOT__DIP__DOT__rf[0x14U] = vlSelf->CPUTop__DOT__rf
        [0x14U];
    vlSelf->CPUTop__DOT__DIP__DOT__rf[0x15U] = vlSelf->CPUTop__DOT__rf
        [0x15U];
    vlSelf->CPUTop__DOT__DIP__DOT__rf[0x16U] = vlSelf->CPUTop__DOT__rf
        [0x16U];
    vlSelf->CPUTop__DOT__DIP__DOT__rf[0x17U] = vlSelf->CPUTop__DOT__rf
        [0x17U];
    vlSelf->CPUTop__DOT__DIP__DOT__rf[0x18U] = vlSelf->CPUTop__DOT__rf
        [0x18U];
    vlSelf->CPUTop__DOT__DIP__DOT__rf[0x19U] = vlSelf->CPUTop__DOT__rf
        [0x19U];
    vlSelf->CPUTop__DOT__DIP__DOT__rf[0x1aU] = vlSelf->CPUTop__DOT__rf
        [0x1aU];
    vlSelf->CPUTop__DOT__DIP__DOT__rf[0x1bU] = vlSelf->CPUTop__DOT__rf
        [0x1bU];
    vlSelf->CPUTop__DOT__DIP__DOT__rf[0x1cU] = vlSelf->CPUTop__DOT__rf
        [0x1cU];
    vlSelf->CPUTop__DOT__DIP__DOT__rf[0x1dU] = vlSelf->CPUTop__DOT__rf
        [0x1dU];
    vlSelf->CPUTop__DOT__DIP__DOT__rf[0x1eU] = vlSelf->CPUTop__DOT__rf
        [0x1eU];
    vlSelf->CPUTop__DOT__DIP__DOT__rf[0x1fU] = vlSelf->CPUTop__DOT__rf
        [0x1fU];
    vlSelf->CPUTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[0U] 
        = vlSelf->CPUTop__DOT__EX__DOT__mepc;
    vlSelf->CPUTop__DOT__EX_io1_time_int = (((IData)(
                                                     (vlSelf->CPUTop__DOT__EX__DOT__mstatus 
                                                      >> 3U)) 
                                             & (IData)(
                                                       (vlSelf->CPUTop__DOT__EX__DOT__mie 
                                                        >> 7U))) 
                                            & (vlSelf->CPUTop__DOT__mmio__DOT__mtime 
                                               >= vlSelf->CPUTop__DOT__mmio__DOT__mtimecmp));
    vlSelf->io_pc = vlSelf->CPUTop__DOT__IF__DOT__temp;
    vlSelf->CPUTop__DOT__IF__DOT___temp_T_2 = (4ULL 
                                               + vlSelf->CPUTop__DOT__IF__DOT__temp);
    vlSelf->CPUTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[3U] 
        = vlSelf->CPUTop__DOT__EX__DOT__mtvec;
}

void VCPUTop___024root___combo__TOP__0(VCPUTop___024root* vlSelf);

void VCPUTop___024root___eval(VCPUTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPUTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUTop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VCPUTop___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    VCPUTop___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

#ifdef VL_DEBUG
void VCPUTop___024root___eval_debug_assertions(VCPUTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPUTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUTop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
