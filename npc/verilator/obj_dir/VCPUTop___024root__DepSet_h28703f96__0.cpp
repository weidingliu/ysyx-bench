// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPUTop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VCPUTop___024root.h"

VL_INLINE_OPT void VCPUTop___024root___combo__TOP__0(VCPUTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPUTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUTop___024root___combo__TOP__0\n"); );
    // Body
    if ((0x6fU == (0x7fU & vlSelf->io_inst))) {
        vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_77 = 3U;
        vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_57 = 7U;
    } else if ((0x67U == (0x707fU & vlSelf->io_inst))) {
        vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_77 = 3U;
        vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_57 = 8U;
    } else if ((0x3003U == (0x707fU & vlSelf->io_inst))) {
        vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_77 = 4U;
        vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_57 = 8U;
    } else if ((0x3023U == (0x707fU & vlSelf->io_inst))) {
        vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_77 = 4U;
        vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_57 = 9U;
    } else if ((0x2003U == (0x707fU & vlSelf->io_inst))) {
        vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_77 = 4U;
        vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_57 = 8U;
    } else if ((0x3bU == (0xfe00707fU & vlSelf->io_inst))) {
        vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_77 = 0U;
        vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_57 = 5U;
    } else if ((0x40000033U == (0xfe00707fU & vlSelf->io_inst))) {
        vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_77 = 0U;
        vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_57 = 5U;
    } else if ((0x3013U == (0x707fU & vlSelf->io_inst))) {
        vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_77 = 5U;
        vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_57 = 8U;
    } else if ((0x63U == (0x707fU & vlSelf->io_inst))) {
        vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_77 = 2U;
        vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_57 = 0xbU;
    } else if ((0x1063U == (0x707fU & vlSelf->io_inst))) {
        vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_77 = 2U;
        vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_57 = 0xbU;
    } else if ((0x1bU == (0x707fU & vlSelf->io_inst))) {
        vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_77 = 0U;
        vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_57 = 8U;
    } else if ((0x33U == (0xfe00707fU & vlSelf->io_inst))) {
        vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_77 = 0U;
        vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_57 = 5U;
    } else if ((0x40005013U == (0xfc00707fU & vlSelf->io_inst))) {
        vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_77 = 1U;
        vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_57 = 8U;
    } else if ((0x4003U == (0x707fU & vlSelf->io_inst))) {
        vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_77 = 4U;
        vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_57 = 8U;
    } else if ((0x1023U == (0x707fU & vlSelf->io_inst))) {
        vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_77 = 4U;
        vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_57 = 9U;
    } else {
        vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_77 = 0U;
        vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_57 = 0U;
    }
    vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_96 
        = ((0x67U == (0x707fU & vlSelf->io_inst)) ? 0x48U
            : ((0x3003U == (0x707fU & vlSelf->io_inst))
                ? 0x45U : ((0x3023U == (0x707fU & vlSelf->io_inst))
                            ? 0x46U : ((0x2003U == 
                                        (0x707fU & vlSelf->io_inst))
                                        ? 0x47U : (
                                                   (0x3bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 0x68U
                                                    : 
                                                   ((0x40000033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 0x69U
                                                     : 
                                                    ((0x3013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 0x6aU
                                                      : 
                                                     ((0x63U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->io_inst))
                                                       ? 0x6bU
                                                       : 
                                                      ((0x1063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->io_inst))
                                                        ? 0x6cU
                                                        : 
                                                       ((0x1bU 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->io_inst))
                                                         ? 0x6dU
                                                         : 
                                                        ((0x33U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->io_inst))
                                                          ? 0x40U
                                                          : 
                                                         ((0x40005013U 
                                                           == 
                                                           (0xfc00707fU 
                                                            & vlSelf->io_inst))
                                                           ? 0x6eU
                                                           : 
                                                          ((0x4003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->io_inst))
                                                            ? 0x6fU
                                                            : 
                                                           ((0x1023U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->io_inst))
                                                             ? 0x70U
                                                             : 
                                                            ((0x100073U 
                                                              == vlSelf->io_inst)
                                                              ? 0x42U
                                                              : 0U)))))))))))))));
    vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_101 
        = ((0x1013U == (0xfc00707fU & vlSelf->io_inst))
            ? 0x41U : ((0x17U == (0x7fU & vlSelf->io_inst))
                        ? 0x40U : ((0x37U == (0x7fU 
                                              & vlSelf->io_inst))
                                    ? 0x40U : ((0x6013U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->io_inst))
                                                ? 0x44U
                                                : (
                                                   (0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->io_inst))
                                                    ? 0x19U
                                                    : (IData)(vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_96))))));
    vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0 = (
                                                   (0x13U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 8U
                                                    : 
                                                   ((0x1013U 
                                                     == 
                                                     (0xfc00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 8U
                                                     : 
                                                    ((0x17U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->io_inst))
                                                      ? 3U
                                                      : 
                                                     ((0x37U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->io_inst))
                                                       ? 3U
                                                       : 
                                                      ((0x6013U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->io_inst))
                                                        ? 8U
                                                        : (IData)(vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_57))))));
    vlSelf->CPUTop__DOT__ID__DOT__srctype2 = (((8U 
                                                == (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0)) 
                                               | (7U 
                                                  == (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0))) 
                                              | (3U 
                                                 == (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0)));
    vlSelf->CPUTop__DOT__ID_io_ctrlIO_Imm = ((((((8U 
                                                  == (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0))
                                                  ? 
                                                 ((((vlSelf->io_inst 
                                                     >> 0x1fU)
                                                     ? 0xfffffffffffffULL
                                                     : 0ULL) 
                                                   << 0xcU) 
                                                  | (QData)((IData)(
                                                                    (vlSelf->io_inst 
                                                                     >> 0x14U))))
                                                  : 0ULL) 
                                                | ((7U 
                                                    == (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0))
                                                    ? 
                                                   ((((0x80000U 
                                                       & vlSelf->io_inst)
                                                       ? 0xfffffffffffULL
                                                       : 0ULL) 
                                                     << 0x14U) 
                                                    | (QData)((IData)(
                                                                      ((0xff000U 
                                                                        & vlSelf->io_inst) 
                                                                       | ((0x800U 
                                                                           & (vlSelf->io_inst 
                                                                              >> 9U)) 
                                                                          | (0x7feU 
                                                                             & (vlSelf->io_inst 
                                                                                >> 0x14U)))))))
                                                    : 0ULL)) 
                                               | ((3U 
                                                   == (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    ((vlSelf->io_inst 
                                                                      >> 0x1fU)
                                                                      ? 0xffffffffU
                                                                      : 0U))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     (0xfffff000U 
                                                                      & vlSelf->io_inst))))
                                                   : 0ULL)) 
                                              | ((9U 
                                                  == (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0))
                                                  ? 
                                                 ((((vlSelf->io_inst 
                                                     >> 0x1fU)
                                                     ? 0xfffffffffffffULL
                                                     : 0ULL) 
                                                   << 0xcU) 
                                                  | (QData)((IData)(
                                                                    ((0xfe0U 
                                                                      & (vlSelf->io_inst 
                                                                         >> 0x14U)) 
                                                                     | (0x1fU 
                                                                        & (vlSelf->io_inst 
                                                                           >> 7U))))))
                                                  : 0ULL)) 
                                             | ((0xbU 
                                                 == (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0))
                                                 ? 
                                                ((((vlSelf->io_inst 
                                                    >> 0x1fU)
                                                    ? 0x7ffffffffffffULL
                                                    : 0ULL) 
                                                  << 0xdU) 
                                                 | (QData)((IData)(
                                                                   ((0x1000U 
                                                                     & (vlSelf->io_inst 
                                                                        >> 0x13U)) 
                                                                    | ((0x800U 
                                                                        & (vlSelf->io_inst 
                                                                           << 4U)) 
                                                                       | ((0x7e0U 
                                                                           & (vlSelf->io_inst 
                                                                              >> 0x14U)) 
                                                                          | (0x1eU 
                                                                             & (vlSelf->io_inst 
                                                                                >> 7U))))))))
                                                 : 0ULL));
    vlSelf->CPUTop__DOT__ID__DOT___io_ctrlIO_src1type_T_2 
        = ((0x37U == (0x7fU & vlSelf->io_inst)) ? 3U
            : (((7U == (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0))
                 ? 2U : 0U) | ((3U == (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0))
                                ? 2U : 0U)));
}

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
    vlSelf->CPUTop__DOT__IF__DOT__temp = ((IData)(vlSelf->reset)
                                           ? 0x80000000ULL
                                           : (((3U 
                                                == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype)) 
                                               | ((0x6bU 
                                                   == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                   ? 
                                                  (vlSelf->CPUTop__DOT__EX__DOT__src1 
                                                   == vlSelf->CPUTop__DOT__EX__DOT__src2)
                                                   : (IData)(vlSelf->CPUTop__DOT__EX__DOT___GEN_37)))
                                               ? ((0x19U 
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
                                                      : 0ULL))))
                                               : vlSelf->CPUTop__DOT__IF__DOT___temp_T_2));
    if (((0x13U == (0x707fU & vlSelf->io_inst)) | (
                                                   (0x1013U 
                                                    == 
                                                    (0xfc00707fU 
                                                     & vlSelf->io_inst)) 
                                                   | ((0x17U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->io_inst)) 
                                                      | ((0x37U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->io_inst)) 
                                                         | ((0x6013U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->io_inst)) 
                                                            | ((0x6fU 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelf->io_inst)) 
                                                               | ((0x67U 
                                                                   == 
                                                                   (0x707fU 
                                                                    & vlSelf->io_inst)) 
                                                                  | ((0x3003U 
                                                                      == 
                                                                      (0x707fU 
                                                                       & vlSelf->io_inst)) 
                                                                     | ((0x3023U 
                                                                         != 
                                                                         (0x707fU 
                                                                          & vlSelf->io_inst)) 
                                                                        & ((0x2003U 
                                                                            == 
                                                                            (0x707fU 
                                                                             & vlSelf->io_inst)) 
                                                                           | ((0x3bU 
                                                                               == 
                                                                               (0xfe00707fU 
                                                                                & vlSelf->io_inst)) 
                                                                              | ((0x40000033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                | ((0x3013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                | ((0x63U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                & ((0x1063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                & ((0x1bU 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                | ((0x33U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                | ((0x40005013U 
                                                                                == 
                                                                                (0xfc00707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                | (0x4003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->io_inst))))))))))))))))))))) {
        __Vdlyvval__CPUTop__DOT__rf__v0 = ((0U == (0x1fU 
                                                   & (vlSelf->io_inst 
                                                      >> 7U)))
                                            ? 0ULL : vlSelf->CPUTop__DOT__EX_io1_result);
        __Vdlyvset__CPUTop__DOT__rf__v0 = 1U;
        __Vdlyvdim0__CPUTop__DOT__rf__v0 = (0x1fU & 
                                            (vlSelf->io_inst 
                                             >> 7U));
    }
    if (__Vdlyvset__CPUTop__DOT__rf__v0) {
        vlSelf->CPUTop__DOT__rf[__Vdlyvdim0__CPUTop__DOT__rf__v0] 
            = __Vdlyvval__CPUTop__DOT__rf__v0;
    }
    vlSelf->io_pc = vlSelf->CPUTop__DOT__IF__DOT__temp;
    vlSelf->CPUTop__DOT__IF__DOT___temp_T_2 = (4ULL 
                                               + vlSelf->CPUTop__DOT__IF__DOT__temp);
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
}

void VCPUTop___024root___combo__TOP__1(VCPUTop___024root* vlSelf);

void VCPUTop___024root___eval(VCPUTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPUTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUTop___024root___eval\n"); );
    // Body
    VCPUTop___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VCPUTop___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    VCPUTop___024root___combo__TOP__1(vlSelf);
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
