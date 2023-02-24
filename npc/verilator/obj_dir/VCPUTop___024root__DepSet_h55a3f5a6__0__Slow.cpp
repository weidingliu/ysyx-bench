// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPUTop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VCPUTop__Syms.h"
#include "VCPUTop___024root.h"

void VCPUTop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &rdata);
void VCPUTop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask);

VL_ATTR_COLD void VCPUTop___024root___settle__TOP__0(VCPUTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPUTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUTop___024root___settle__TOP__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_hc42fb149__0;
    VlWide<3>/*95:0*/ __Vtemp_h525afdda__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7c16809__0;
    VlWide<4>/*127:0*/ __Vtemp_h5746bcbf__0;
    VlWide<4>/*127:0*/ __Vtemp_hc42a596f__0;
    VlWide<4>/*127:0*/ __Vtemp_h15b68c39__0;
    VlWide<4>/*127:0*/ __Vtemp_h79e8d8bf__0;
    // Body
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
    VCPUTop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->CPUTop__DOT__IF__DOT__temp, vlSelf->__Vtask_pmem_read__0__rdata);
    vlSelf->CPUTop__DOT__IFM__DOT__rdata = vlSelf->__Vtask_pmem_read__0__rdata;
    vlSelf->CPUTop__DOT__IFM_inst = ((1U & (IData)(
                                                   (vlSelf->CPUTop__DOT__IF__DOT__temp 
                                                    >> 2U)))
                                      ? (IData)((vlSelf->CPUTop__DOT__IFM__DOT__rdata 
                                                 >> 0x20U))
                                      : (IData)(vlSelf->CPUTop__DOT__IFM__DOT__rdata));
    vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_174 
        = ((0x3023U != (0x707fU & vlSelf->CPUTop__DOT__IFM_inst)) 
           & ((0x2003U == (0x707fU & vlSelf->CPUTop__DOT__IFM_inst)) 
              | ((0x3bU == (0xfe00707fU & vlSelf->CPUTop__DOT__IFM_inst)) 
                 | ((0x40000033U == (0xfe00707fU & vlSelf->CPUTop__DOT__IFM_inst)) 
                    | ((0x3013U == (0x707fU & vlSelf->CPUTop__DOT__IFM_inst)) 
                       | ((0x63U != (0x707fU & vlSelf->CPUTop__DOT__IFM_inst)) 
                          & ((0x1063U != (0x707fU & vlSelf->CPUTop__DOT__IFM_inst)) 
                             & ((0x1bU == (0x707fU 
                                           & vlSelf->CPUTop__DOT__IFM_inst)) 
                                | ((0x33U == (0xfe00707fU 
                                              & vlSelf->CPUTop__DOT__IFM_inst)) 
                                   | ((0x40005013U 
                                       == (0xfc00707fU 
                                           & vlSelf->CPUTop__DOT__IFM_inst)) 
                                      | ((0x4003U == 
                                          (0x707fU 
                                           & vlSelf->CPUTop__DOT__IFM_inst)) 
                                         | ((0x1023U 
                                             != (0x707fU 
                                                 & vlSelf->CPUTop__DOT__IFM_inst)) 
                                            & ((0x7033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->CPUTop__DOT__IFM_inst)) 
                                               | ((0x3033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->CPUTop__DOT__IFM_inst)) 
                                                  | ((0x4013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->CPUTop__DOT__IFM_inst)) 
                                                     | ((0x103bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->CPUTop__DOT__IFM_inst)) 
                                                        | ((0x7013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->CPUTop__DOT__IFM_inst)) 
                                                           | ((0x6033U 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->CPUTop__DOT__IFM_inst)) 
                                                              | ((0x23U 
                                                                  != 
                                                                  (0x707fU 
                                                                   & vlSelf->CPUTop__DOT__IFM_inst)) 
                                                                 & (0x5013U 
                                                                    == 
                                                                    (0xfc00707fU 
                                                                     & vlSelf->CPUTop__DOT__IFM_inst)))))))))))))))))))));
    if ((0x1bU == (0x707fU & vlSelf->CPUTop__DOT__IFM_inst))) {
        vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_107 = 0U;
        vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_77 = 8U;
    } else if ((0x33U == (0xfe00707fU & vlSelf->CPUTop__DOT__IFM_inst))) {
        vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_107 = 0U;
        vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_77 = 5U;
    } else if ((0x40005013U == (0xfc00707fU & vlSelf->CPUTop__DOT__IFM_inst))) {
        vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_107 = 1U;
        vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_77 = 8U;
    } else if ((0x4003U == (0x707fU & vlSelf->CPUTop__DOT__IFM_inst))) {
        vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_107 = 4U;
        vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_77 = 8U;
    } else if ((0x1023U == (0x707fU & vlSelf->CPUTop__DOT__IFM_inst))) {
        vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_107 = 4U;
        vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_77 = 9U;
    } else if ((0x7033U == (0xfe00707fU & vlSelf->CPUTop__DOT__IFM_inst))) {
        vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_107 = 0U;
        vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_77 = 5U;
    } else if ((0x3033U == (0xfe00707fU & vlSelf->CPUTop__DOT__IFM_inst))) {
        vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_107 = 5U;
        vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_77 = 5U;
    } else if ((0x4013U == (0x707fU & vlSelf->CPUTop__DOT__IFM_inst))) {
        vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_107 = 0U;
        vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_77 = 8U;
    } else if ((0x103bU == (0xfe00707fU & vlSelf->CPUTop__DOT__IFM_inst))) {
        vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_107 = 1U;
        vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_77 = 5U;
    } else if ((0x7013U == (0x707fU & vlSelf->CPUTop__DOT__IFM_inst))) {
        vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_107 = 0U;
        vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_77 = 8U;
    } else if ((0x6033U == (0xfe00707fU & vlSelf->CPUTop__DOT__IFM_inst))) {
        vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_107 = 0U;
        vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_77 = 5U;
    } else if ((0x23U == (0x707fU & vlSelf->CPUTop__DOT__IFM_inst))) {
        vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_107 = 4U;
        vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_77 = 9U;
    } else if ((0x5013U == (0xfc00707fU & vlSelf->CPUTop__DOT__IFM_inst))) {
        vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_107 = 1U;
        vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_77 = 8U;
    } else if ((0x5063U == (0x707fU & vlSelf->CPUTop__DOT__IFM_inst))) {
        vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_107 = 2U;
        vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_77 = 0xbU;
    } else if ((0x2023U == (0x707fU & vlSelf->CPUTop__DOT__IFM_inst))) {
        vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_107 = 4U;
        vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_77 = 9U;
    } else {
        vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_107 = 0U;
        vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_77 = 0U;
    }
    vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_136 
        = ((0x33U == (0xfe00707fU & vlSelf->CPUTop__DOT__IFM_inst))
            ? 0x40U : ((0x40005013U == (0xfc00707fU 
                                        & vlSelf->CPUTop__DOT__IFM_inst))
                        ? 0x6eU : ((0x4003U == (0x707fU 
                                                & vlSelf->CPUTop__DOT__IFM_inst))
                                    ? 0x6fU : ((0x1023U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->CPUTop__DOT__IFM_inst))
                                                ? 0x70U
                                                : (
                                                   (0x7033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->CPUTop__DOT__IFM_inst))
                                                    ? 0x71U
                                                    : 
                                                   ((0x3033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->CPUTop__DOT__IFM_inst))
                                                     ? 0x6aU
                                                     : 
                                                    ((0x4013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->CPUTop__DOT__IFM_inst))
                                                      ? 0x72U
                                                      : 
                                                     ((0x103bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->CPUTop__DOT__IFM_inst))
                                                       ? 0x73U
                                                       : 
                                                      ((0x7013U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->CPUTop__DOT__IFM_inst))
                                                        ? 0x71U
                                                        : 
                                                       ((0x6033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->CPUTop__DOT__IFM_inst))
                                                         ? 0x44U
                                                         : 
                                                        ((0x23U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->CPUTop__DOT__IFM_inst))
                                                          ? 0x74U
                                                          : 
                                                         ((0x5013U 
                                                           == 
                                                           (0xfc00707fU 
                                                            & vlSelf->CPUTop__DOT__IFM_inst))
                                                           ? 0x75U
                                                           : 
                                                          ((0x5063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->CPUTop__DOT__IFM_inst))
                                                            ? 0x76U
                                                            : 
                                                           ((0x2023U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->CPUTop__DOT__IFM_inst))
                                                             ? 0x77U
                                                             : 
                                                            ((0x100073U 
                                                              == vlSelf->CPUTop__DOT__IFM_inst)
                                                              ? 0x42U
                                                              : 0U)))))))))))))));
    vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_151 
        = ((0x1013U == (0xfc00707fU & vlSelf->CPUTop__DOT__IFM_inst))
            ? 0x41U : ((0x17U == (0x7fU & vlSelf->CPUTop__DOT__IFM_inst))
                        ? 0x40U : ((0x37U == (0x7fU 
                                              & vlSelf->CPUTop__DOT__IFM_inst))
                                    ? 0x40U : ((0x6013U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->CPUTop__DOT__IFM_inst))
                                                ? 0x44U
                                                : (
                                                   (0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->CPUTop__DOT__IFM_inst))
                                                    ? 0x19U
                                                    : 
                                                   ((0x67U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->CPUTop__DOT__IFM_inst))
                                                     ? 0x48U
                                                     : 
                                                    ((0x3003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->CPUTop__DOT__IFM_inst))
                                                      ? 0x45U
                                                      : 
                                                     ((0x3023U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->CPUTop__DOT__IFM_inst))
                                                       ? 0x46U
                                                       : 
                                                      ((0x2003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->CPUTop__DOT__IFM_inst))
                                                        ? 0x47U
                                                        : 
                                                       ((0x3bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->CPUTop__DOT__IFM_inst))
                                                         ? 0x68U
                                                         : 
                                                        ((0x40000033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->CPUTop__DOT__IFM_inst))
                                                          ? 0x69U
                                                          : 
                                                         ((0x3013U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->CPUTop__DOT__IFM_inst))
                                                           ? 0x6aU
                                                           : 
                                                          ((0x63U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->CPUTop__DOT__IFM_inst))
                                                            ? 0x6bU
                                                            : 
                                                           ((0x1063U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->CPUTop__DOT__IFM_inst))
                                                             ? 0x6cU
                                                             : 
                                                            ((0x1bU 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->CPUTop__DOT__IFM_inst))
                                                              ? 0x6dU
                                                              : (IData)(vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_136))))))))))))))));
    if ((0x13U == (0x707fU & vlSelf->CPUTop__DOT__IFM_inst))) {
        vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype = 0U;
        vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0 = 8U;
        vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype = 0x40U;
    } else {
        if ((0x1013U == (0xfc00707fU & vlSelf->CPUTop__DOT__IFM_inst))) {
            vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype = 1U;
            vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0 = 8U;
        } else if ((0x17U == (0x7fU & vlSelf->CPUTop__DOT__IFM_inst))) {
            vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype = 0U;
            vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0 = 3U;
        } else if ((0x37U == (0x7fU & vlSelf->CPUTop__DOT__IFM_inst))) {
            vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype = 0U;
            vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0 = 3U;
        } else if ((0x6013U == (0x707fU & vlSelf->CPUTop__DOT__IFM_inst))) {
            vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype = 0U;
            vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0 = 8U;
        } else if ((0x6fU == (0x7fU & vlSelf->CPUTop__DOT__IFM_inst))) {
            vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype = 3U;
            vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0 = 7U;
        } else if ((0x67U == (0x707fU & vlSelf->CPUTop__DOT__IFM_inst))) {
            vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype = 3U;
            vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0 = 8U;
        } else if ((0x3003U == (0x707fU & vlSelf->CPUTop__DOT__IFM_inst))) {
            vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype = 4U;
            vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0 = 8U;
        } else if ((0x3023U == (0x707fU & vlSelf->CPUTop__DOT__IFM_inst))) {
            vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype = 4U;
            vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0 = 9U;
        } else if ((0x2003U == (0x707fU & vlSelf->CPUTop__DOT__IFM_inst))) {
            vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype = 4U;
            vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0 = 8U;
        } else if ((0x3bU == (0xfe00707fU & vlSelf->CPUTop__DOT__IFM_inst))) {
            vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype = 0U;
            vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0 = 5U;
        } else if ((0x40000033U == (0xfe00707fU & vlSelf->CPUTop__DOT__IFM_inst))) {
            vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype = 0U;
            vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0 = 5U;
        } else if ((0x3013U == (0x707fU & vlSelf->CPUTop__DOT__IFM_inst))) {
            vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype = 5U;
            vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0 = 8U;
        } else if ((0x63U == (0x707fU & vlSelf->CPUTop__DOT__IFM_inst))) {
            vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype = 2U;
            vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0 = 0xbU;
        } else if ((0x1063U == (0x707fU & vlSelf->CPUTop__DOT__IFM_inst))) {
            vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype = 2U;
            vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0 = 0xbU;
        } else {
            vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype 
                = vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_107;
            vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0 
                = vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_77;
        }
        vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype 
            = vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_151;
    }
    vlSelf->CPUTop__DOT__ID__DOT__srctype2 = (((8U 
                                                == (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0)) 
                                               | (7U 
                                                  == (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0))) 
                                              | (3U 
                                                 == (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0)));
    vlSelf->CPUTop__DOT__ID_io_ctrlIO_Imm = ((((((8U 
                                                  == (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0))
                                                  ? 
                                                 ((((vlSelf->CPUTop__DOT__IFM_inst 
                                                     >> 0x1fU)
                                                     ? 0xfffffffffffffULL
                                                     : 0ULL) 
                                                   << 0xcU) 
                                                  | (QData)((IData)(
                                                                    (vlSelf->CPUTop__DOT__IFM_inst 
                                                                     >> 0x14U))))
                                                  : 0ULL) 
                                                | ((7U 
                                                    == (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0))
                                                    ? 
                                                   ((((0x80000U 
                                                       & vlSelf->CPUTop__DOT__IFM_inst)
                                                       ? 0xfffffffffffULL
                                                       : 0ULL) 
                                                     << 0x14U) 
                                                    | (QData)((IData)(
                                                                      ((0xff000U 
                                                                        & vlSelf->CPUTop__DOT__IFM_inst) 
                                                                       | ((0x800U 
                                                                           & (vlSelf->CPUTop__DOT__IFM_inst 
                                                                              >> 9U)) 
                                                                          | (0x7feU 
                                                                             & (vlSelf->CPUTop__DOT__IFM_inst 
                                                                                >> 0x14U)))))))
                                                    : 0ULL)) 
                                               | ((3U 
                                                   == (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    ((vlSelf->CPUTop__DOT__IFM_inst 
                                                                      >> 0x1fU)
                                                                      ? 0xffffffffU
                                                                      : 0U))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     (0xfffff000U 
                                                                      & vlSelf->CPUTop__DOT__IFM_inst))))
                                                   : 0ULL)) 
                                              | ((9U 
                                                  == (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0))
                                                  ? 
                                                 ((((vlSelf->CPUTop__DOT__IFM_inst 
                                                     >> 0x1fU)
                                                     ? 0xfffffffffffffULL
                                                     : 0ULL) 
                                                   << 0xcU) 
                                                  | (QData)((IData)(
                                                                    ((0xfe0U 
                                                                      & (vlSelf->CPUTop__DOT__IFM_inst 
                                                                         >> 0x14U)) 
                                                                     | (0x1fU 
                                                                        & (vlSelf->CPUTop__DOT__IFM_inst 
                                                                           >> 7U))))))
                                                  : 0ULL)) 
                                             | ((0xbU 
                                                 == (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0))
                                                 ? 
                                                ((((vlSelf->CPUTop__DOT__IFM_inst 
                                                    >> 0x1fU)
                                                    ? 0x7ffffffffffffULL
                                                    : 0ULL) 
                                                  << 0xdU) 
                                                 | (QData)((IData)(
                                                                   ((0x1000U 
                                                                     & (vlSelf->CPUTop__DOT__IFM_inst 
                                                                        >> 0x13U)) 
                                                                    | ((0x800U 
                                                                        & (vlSelf->CPUTop__DOT__IFM_inst 
                                                                           << 4U)) 
                                                                       | ((0x7e0U 
                                                                           & (vlSelf->CPUTop__DOT__IFM_inst 
                                                                              >> 0x14U)) 
                                                                          | (0x1eU 
                                                                             & (vlSelf->CPUTop__DOT__IFM_inst 
                                                                                >> 7U))))))))
                                                 : 0ULL));
    vlSelf->CPUTop__DOT__ID__DOT___io_ctrlIO_src1type_T_2 
        = ((0x37U == (0x7fU & vlSelf->CPUTop__DOT__IFM_inst))
            ? 3U : (((7U == (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0))
                      ? 2U : 0U) | ((3U == (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0))
                                     ? 2U : 0U)));
    if (VL_UNLIKELY((0x42U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype)))) {
        VL_FINISH_MT("vsrc/DIP_model.v", 47, "");
    }
    vlSelf->CPUTop__DOT__EX__DOT___branch_result_T_1 
        = (vlSelf->CPUTop__DOT__IF__DOT__temp + vlSelf->CPUTop__DOT__ID_io_ctrlIO_Imm);
    vlSelf->CPUTop__DOT__EX__DOT__src2 = ((IData)(vlSelf->CPUTop__DOT__ID__DOT__srctype2)
                                           ? ((IData)(vlSelf->CPUTop__DOT__ID__DOT__srctype2)
                                               ? vlSelf->CPUTop__DOT__ID_io_ctrlIO_Imm
                                               : 0ULL)
                                           : ((0U == 
                                               (0x1fU 
                                                & (vlSelf->CPUTop__DOT__IFM_inst 
                                                   >> 0x14U)))
                                               ? 0ULL
                                               : vlSelf->CPUTop__DOT__rf
                                              [(0x1fU 
                                                & (vlSelf->CPUTop__DOT__IFM_inst 
                                                   >> 0x14U))]));
    vlSelf->CPUTop__DOT__EX__DOT__src1 = ((0U == (IData)(vlSelf->CPUTop__DOT__ID__DOT___io_ctrlIO_src1type_T_2))
                                           ? ((0U == 
                                               (0x1fU 
                                                & (vlSelf->CPUTop__DOT__IFM_inst 
                                                   >> 0xfU)))
                                               ? 0ULL
                                               : vlSelf->CPUTop__DOT__rf
                                              [(0x1fU 
                                                & (vlSelf->CPUTop__DOT__IFM_inst 
                                                   >> 0xfU))])
                                           : ((2U == (IData)(vlSelf->CPUTop__DOT__ID__DOT___io_ctrlIO_src1type_T_2))
                                               ? vlSelf->CPUTop__DOT__IF__DOT__temp
                                               : 0ULL));
    vlSelf->CPUTop__DOT__EX__DOT___GEN_58 = ((0x6cU 
                                              == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                              ? (vlSelf->CPUTop__DOT__EX__DOT__src1 
                                                 != vlSelf->CPUTop__DOT__EX__DOT__src2)
                                              : ((0x76U 
                                                  == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype)) 
                                                 & (vlSelf->CPUTop__DOT__EX__DOT__src1 
                                                    >= vlSelf->CPUTop__DOT__EX__DOT__src2)));
    VL_EXTEND_WQ(95,64, __Vtemp_hc42fb149__0, vlSelf->CPUTop__DOT__EX__DOT__src1);
    VL_SHIFTL_WWI(95,95,5, __Vtemp_h525afdda__0, __Vtemp_hc42fb149__0, 
                  (0x1fU & (IData)(vlSelf->CPUTop__DOT__EX__DOT__src2)));
    vlSelf->CPUTop__DOT__EX__DOT___shift_result_T_3[0U] 
        = __Vtemp_h525afdda__0[0U];
    vlSelf->CPUTop__DOT__EX__DOT___shift_result_T_3[1U] 
        = __Vtemp_h525afdda__0[1U];
    vlSelf->CPUTop__DOT__EX__DOT___shift_result_T_3[2U] 
        = (0x7fffffffU & __Vtemp_h525afdda__0[2U]);
    vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_1 = 
        (vlSelf->CPUTop__DOT__EX__DOT__src1 + vlSelf->CPUTop__DOT__EX__DOT__src2);
    vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_3 = 
        (vlSelf->CPUTop__DOT__EX__DOT__src1 + vlSelf->CPUTop__DOT__ID_io_ctrlIO_Imm);
    vlSelf->CPUTop__DOT__EX__DOT___dnpc_T_9 = (((0x6bU 
                                                 == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                 ? 
                                                (vlSelf->CPUTop__DOT__EX__DOT__src1 
                                                 == vlSelf->CPUTop__DOT__EX__DOT__src2)
                                                 : (IData)(vlSelf->CPUTop__DOT__EX__DOT___GEN_58))
                                                ? (
                                                   (0x6bU 
                                                    == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                    ? vlSelf->CPUTop__DOT__EX__DOT___branch_result_T_1
                                                    : 
                                                   ((0x6cU 
                                                     == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                     ? vlSelf->CPUTop__DOT__EX__DOT___branch_result_T_1
                                                     : 
                                                    ((0x76U 
                                                      == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                      ? vlSelf->CPUTop__DOT__EX__DOT___branch_result_T_1
                                                      : 0ULL)))
                                                : (4ULL 
                                                   + vlSelf->CPUTop__DOT__IF__DOT__temp));
    vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_7 = 
        (((QData)((IData)(((1U & (IData)((vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_1 
                                          >> 0x1fU)))
                            ? 0xffffffffU : 0U))) << 0x20U) 
         | (QData)((IData)(vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_1)));
    vlSelf->CPUTop__DOT__EX__DOT___GEN_10 = ((0x46U 
                                              == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                              ? vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_3
                                              : ((0x70U 
                                                  == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                  ? vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_3
                                                  : 
                                                 ((0x47U 
                                                   == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                   ? vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_3
                                                   : 
                                                  ((0x6fU 
                                                    == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                    ? vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_3
                                                    : 
                                                   ((0x74U 
                                                     == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                     ? vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_3
                                                     : 
                                                    ((0x77U 
                                                      == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                      ? vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_3
                                                      : 0ULL))))));
    vlSelf->CPUTop__DOT__EX__DOT__addr_temp = ((0x45U 
                                                == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                ? vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_1
                                                : vlSelf->CPUTop__DOT__EX__DOT___GEN_10);
    vlSelf->CPUTop__DOT__EX__DOT___wdata_temp_T_21 
        = ((0U == (7U & (IData)(vlSelf->CPUTop__DOT__EX__DOT__addr_temp)))
            ? (QData)((IData)((0xffU & (IData)(vlSelf->CPUTop__DOT__EX__DOT__src2))))
            : ((1U == (7U & (IData)(vlSelf->CPUTop__DOT__EX__DOT__addr_temp)))
                ? ((QData)((IData)((0xffU & (IData)(vlSelf->CPUTop__DOT__EX__DOT__src2)))) 
                   << 8U) : ((2U == (7U & (IData)(vlSelf->CPUTop__DOT__EX__DOT__addr_temp)))
                              ? ((QData)((IData)((0xffU 
                                                  & (IData)(vlSelf->CPUTop__DOT__EX__DOT__src2)))) 
                                 << 0x10U) : ((3U == 
                                               (7U 
                                                & (IData)(vlSelf->CPUTop__DOT__EX__DOT__addr_temp)))
                                               ? ((QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(vlSelf->CPUTop__DOT__EX__DOT__src2)))) 
                                                  << 0x18U)
                                               : ((4U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelf->CPUTop__DOT__EX__DOT__addr_temp)))
                                                   ? 
                                                  ((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->CPUTop__DOT__EX__DOT__src2)))) 
                                                   << 0x20U)
                                                   : 
                                                  ((5U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelf->CPUTop__DOT__EX__DOT__addr_temp)))
                                                    ? 
                                                   ((QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(vlSelf->CPUTop__DOT__EX__DOT__src2)))) 
                                                    << 0x28U)
                                                    : 
                                                   ((6U 
                                                     == 
                                                     (7U 
                                                      & (IData)(vlSelf->CPUTop__DOT__EX__DOT__addr_temp)))
                                                     ? 
                                                    ((QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(vlSelf->CPUTop__DOT__EX__DOT__src2)))) 
                                                     << 0x30U)
                                                     : 
                                                    ((7U 
                                                      == 
                                                      (7U 
                                                       & (IData)(vlSelf->CPUTop__DOT__EX__DOT__addr_temp)))
                                                      ? 
                                                     ((QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(vlSelf->CPUTop__DOT__EX__DOT__src2)))) 
                                                      << 0x38U)
                                                      : 0ULL))))))));
    vlSelf->CPUTop__DOT__EX__DOT___GEN_24 = ((0x70U 
                                              == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                              ? ((0U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelf->CPUTop__DOT__EX__DOT__addr_temp 
                                                              >> 1U))))
                                                  ? 3U
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelf->CPUTop__DOT__EX__DOT__addr_temp 
                                                               >> 1U))))
                                                   ? 0xcU
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelf->CPUTop__DOT__EX__DOT__addr_temp 
                                                                >> 1U))))
                                                    ? 0x30U
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (3U 
                                                      & (IData)(
                                                                (vlSelf->CPUTop__DOT__EX__DOT__addr_temp 
                                                                 >> 1U))))
                                                     ? 0xc0U
                                                     : 0U))))
                                              : ((0x74U 
                                                  == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                  ? 
                                                 ((0U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelf->CPUTop__DOT__EX__DOT__addr_temp)))
                                                   ? 1U
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelf->CPUTop__DOT__EX__DOT__addr_temp)))
                                                    ? 2U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & (IData)(vlSelf->CPUTop__DOT__EX__DOT__addr_temp)))
                                                     ? 4U
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (7U 
                                                       & (IData)(vlSelf->CPUTop__DOT__EX__DOT__addr_temp)))
                                                      ? 8U
                                                      : 
                                                     ((4U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSelf->CPUTop__DOT__EX__DOT__addr_temp)))
                                                       ? 0x10U
                                                       : 
                                                      ((5U 
                                                        == 
                                                        (7U 
                                                         & (IData)(vlSelf->CPUTop__DOT__EX__DOT__addr_temp)))
                                                        ? 0x20U
                                                        : 
                                                       ((6U 
                                                         == 
                                                         (7U 
                                                          & (IData)(vlSelf->CPUTop__DOT__EX__DOT__addr_temp)))
                                                         ? 0x40U
                                                         : 
                                                        ((7U 
                                                          == 
                                                          (7U 
                                                           & (IData)(vlSelf->CPUTop__DOT__EX__DOT__addr_temp)))
                                                          ? 0x80U
                                                          : 0U))))))))
                                                  : 
                                                 ((0x77U 
                                                   == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->CPUTop__DOT__EX__DOT__addr_temp 
                                                               >> 2U)))
                                                    ? 0xf0U
                                                    : 0xfU)
                                                   : 0U)));
    if ((4U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype))) {
        if ((((0x45U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype)) 
              | (0x47U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))) 
             | (0x6fU == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype)))) {
            VCPUTop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(
                                                                     ((0x45U 
                                                                       == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                                       ? vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_1
                                                                       : vlSelf->CPUTop__DOT__EX__DOT___GEN_10), vlSelf->__Vtask_pmem_read__4__rdata);
            vlSelf->CPUTop__DOT__mem_rdata = vlSelf->__Vtask_pmem_read__4__rdata;
        } else {
            VCPUTop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(
                                                                      ((0x45U 
                                                                        == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                                        ? vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_1
                                                                        : vlSelf->CPUTop__DOT__EX__DOT___GEN_10), 
                                                                      ((0x45U 
                                                                        == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                                        ? 0ULL
                                                                        : 
                                                                       ((0x47U 
                                                                         == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                                         ? 0ULL
                                                                         : 
                                                                        ((0x6fU 
                                                                          == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                                          ? 0ULL
                                                                          : 
                                                                         ((0x46U 
                                                                           == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                                           ? vlSelf->CPUTop__DOT__EX__DOT__src2
                                                                           : 
                                                                          ((0x70U 
                                                                            == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                                            ? 
                                                                           ((0U 
                                                                             == 
                                                                             (3U 
                                                                              & (IData)(
                                                                                (vlSelf->CPUTop__DOT__EX__DOT__addr_temp 
                                                                                >> 1U))))
                                                                             ? (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (IData)(vlSelf->CPUTop__DOT__EX__DOT__src2))))
                                                                             : 
                                                                            ((1U 
                                                                              == 
                                                                              (3U 
                                                                               & (IData)(
                                                                                (vlSelf->CPUTop__DOT__EX__DOT__addr_temp 
                                                                                >> 1U))))
                                                                              ? 
                                                                             ((QData)((IData)(
                                                                                (0xffffU 
                                                                                & (IData)(vlSelf->CPUTop__DOT__EX__DOT__src2)))) 
                                                                              << 0x10U)
                                                                              : 
                                                                             ((2U 
                                                                               == 
                                                                               (3U 
                                                                                & (IData)(
                                                                                (vlSelf->CPUTop__DOT__EX__DOT__addr_temp 
                                                                                >> 1U))))
                                                                               ? 
                                                                              ((QData)((IData)(
                                                                                (0xffffU 
                                                                                & (IData)(vlSelf->CPUTop__DOT__EX__DOT__src2)))) 
                                                                               << 0x20U)
                                                                               : 
                                                                              ((3U 
                                                                                == 
                                                                                (3U 
                                                                                & (IData)(
                                                                                (vlSelf->CPUTop__DOT__EX__DOT__addr_temp 
                                                                                >> 1U))))
                                                                                ? 
                                                                               ((QData)((IData)(
                                                                                (0xffffU 
                                                                                & (IData)(vlSelf->CPUTop__DOT__EX__DOT__src2)))) 
                                                                                << 0x30U)
                                                                                : 0ULL))))
                                                                            : 
                                                                           ((0x74U 
                                                                             == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                                             ? vlSelf->CPUTop__DOT__EX__DOT___wdata_temp_T_21
                                                                             : 
                                                                            ((0x77U 
                                                                              == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                                              ? 
                                                                             ((1U 
                                                                               & (IData)(
                                                                                (vlSelf->CPUTop__DOT__EX__DOT__addr_temp 
                                                                                >> 2U)))
                                                                               ? 
                                                                              ((QData)((IData)(vlSelf->CPUTop__DOT__EX__DOT__src2)) 
                                                                               << 0x20U)
                                                                               : (QData)((IData)(vlSelf->CPUTop__DOT__EX__DOT__src2)))
                                                                              : 0ULL))))))), 
                                                                      ((0x45U 
                                                                        == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                                        ? 0U
                                                                        : 
                                                                       ((0x47U 
                                                                         == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                                         ? 0U
                                                                         : 
                                                                        ((0x6fU 
                                                                          == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                                          ? 0U
                                                                          : 
                                                                         ((0x46U 
                                                                           == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                                           ? 0xffU
                                                                           : (IData)(vlSelf->CPUTop__DOT__EX__DOT___GEN_24))))));
            vlSelf->CPUTop__DOT__mem_rdata = 0ULL;
        }
    } else {
        vlSelf->CPUTop__DOT__mem_rdata = 0ULL;
    }
    vlSelf->CPUTop__DOT__EX__DOT___GEN_34 = ((0x6fU 
                                              == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                              ? ((0U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlSelf->CPUTop__DOT__EX__DOT__addr_temp)))
                                                  ? (QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(vlSelf->CPUTop__DOT__mem_rdata))))
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelf->CPUTop__DOT__EX__DOT__addr_temp)))
                                                   ? (QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(
                                                                                (vlSelf->CPUTop__DOT__mem_rdata 
                                                                                >> 8U)))))
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelf->CPUTop__DOT__EX__DOT__addr_temp)))
                                                    ? (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(
                                                                                (vlSelf->CPUTop__DOT__mem_rdata 
                                                                                >> 0x10U)))))
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (7U 
                                                      & (IData)(vlSelf->CPUTop__DOT__EX__DOT__addr_temp)))
                                                     ? (QData)((IData)(
                                                                       (0xffU 
                                                                        & (IData)(
                                                                                (vlSelf->CPUTop__DOT__mem_rdata 
                                                                                >> 0x18U)))))
                                                     : 
                                                    ((4U 
                                                      == 
                                                      (7U 
                                                       & (IData)(vlSelf->CPUTop__DOT__EX__DOT__addr_temp)))
                                                      ? (QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(
                                                                                (vlSelf->CPUTop__DOT__mem_rdata 
                                                                                >> 0x20U)))))
                                                      : 
                                                     ((5U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSelf->CPUTop__DOT__EX__DOT__addr_temp)))
                                                       ? (QData)((IData)(
                                                                         (0xffU 
                                                                          & (IData)(
                                                                                (vlSelf->CPUTop__DOT__mem_rdata 
                                                                                >> 0x28U)))))
                                                       : 
                                                      ((6U 
                                                        == 
                                                        (7U 
                                                         & (IData)(vlSelf->CPUTop__DOT__EX__DOT__addr_temp)))
                                                        ? (QData)((IData)(
                                                                          (0xffU 
                                                                           & (IData)(
                                                                                (vlSelf->CPUTop__DOT__mem_rdata 
                                                                                >> 0x30U)))))
                                                        : 
                                                       ((7U 
                                                         == 
                                                         (7U 
                                                          & (IData)(vlSelf->CPUTop__DOT__EX__DOT__addr_temp)))
                                                         ? (QData)((IData)(
                                                                           (0xffU 
                                                                            & (IData)(
                                                                                (vlSelf->CPUTop__DOT__mem_rdata 
                                                                                >> 0x38U)))))
                                                         : 0ULL))))))))
                                              : 0ULL);
    VL_EXTEND_WQ(127,64, __Vtemp_ha7c16809__0, (vlSelf->CPUTop__DOT__EX__DOT__src1 
                                                >> 
                                                (0x1fU 
                                                 & (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_Imm))));
    VL_EXTEND_WQ(127,64, __Vtemp_h5746bcbf__0, (((QData)((IData)(
                                                                 ((vlSelf->CPUTop__DOT__EX__DOT___shift_result_T_3[0U] 
                                                                   >> 0x1fU)
                                                                   ? 0xffffffffU
                                                                   : 0U))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->CPUTop__DOT__EX__DOT___shift_result_T_3[0U]))));
    VL_EXTEND_WQ(127,64, __Vtemp_hc42a596f__0, vlSelf->CPUTop__DOT__EX__DOT__src1);
    VL_SHIFTL_WWI(127,127,6, __Vtemp_h15b68c39__0, __Vtemp_hc42a596f__0, 
                  (0x3fU & (IData)(vlSelf->CPUTop__DOT__EX__DOT__src2)));
    VL_EXTEND_WQ(127,64, __Vtemp_h79e8d8bf__0, ((0x75U 
                                                 == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                 ? 
                                                (vlSelf->CPUTop__DOT__EX__DOT__src1 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(vlSelf->CPUTop__DOT__EX__DOT__src2)))
                                                 : 0ULL));
    vlSelf->CPUTop__DOT__EX__DOT___GEN_51 = ((1U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype))
                                              ? (((QData)((IData)(
                                                                  ((0x6eU 
                                                                    == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                                    ? 
                                                                   __Vtemp_ha7c16809__0[1U]
                                                                    : 
                                                                   ((0x73U 
                                                                     == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                                     ? 
                                                                    __Vtemp_h5746bcbf__0[1U]
                                                                     : 
                                                                    ((0x41U 
                                                                      == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                                      ? 
                                                                     __Vtemp_h15b68c39__0[1U]
                                                                      : 
                                                                     __Vtemp_h79e8d8bf__0[1U]))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((0x6eU 
                                                                     == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                                     ? 
                                                                    __Vtemp_ha7c16809__0[0U]
                                                                     : 
                                                                    ((0x73U 
                                                                      == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                                      ? 
                                                                     __Vtemp_h5746bcbf__0[0U]
                                                                      : 
                                                                     ((0x41U 
                                                                       == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                                       ? 
                                                                      __Vtemp_h15b68c39__0[0U]
                                                                       : 
                                                                      __Vtemp_h79e8d8bf__0[0U]))))))
                                              : ((4U 
                                                  == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype))
                                                  ? 
                                                 ((0x45U 
                                                   == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                   ? vlSelf->CPUTop__DOT__mem_rdata
                                                   : 
                                                  ((0x47U 
                                                    == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->CPUTop__DOT__EX__DOT__addr_temp 
                                                                >> 2U)))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      ((1U 
                                                                        & (IData)(
                                                                                (vlSelf->CPUTop__DOT__mem_rdata 
                                                                                >> 0x3fU)))
                                                                        ? 0xffffffffU
                                                                        : 0U))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       (vlSelf->CPUTop__DOT__mem_rdata 
                                                                        >> 0x20U))))
                                                     : 
                                                    (((QData)((IData)(
                                                                      ((1U 
                                                                        & (IData)(
                                                                                (vlSelf->CPUTop__DOT__mem_rdata 
                                                                                >> 0x1fU)))
                                                                        ? 0xffffffffU
                                                                        : 0U))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSelf->CPUTop__DOT__mem_rdata))))
                                                    : vlSelf->CPUTop__DOT__EX__DOT___GEN_34))
                                                  : 
                                                 ((5U 
                                                   == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype))
                                                   ? 
                                                  ((0x6aU 
                                                    == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                    ? 
                                                   ((vlSelf->CPUTop__DOT__EX__DOT__src1 
                                                     < vlSelf->CPUTop__DOT__EX__DOT__src2)
                                                     ? 1ULL
                                                     : 0ULL)
                                                    : 0ULL)
                                                   : 0ULL)));
    vlSelf->CPUTop__DOT__EX_io1_result = ((0U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype))
                                           ? ((0x40U 
                                               == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                               ? vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_1
                                               : ((0x68U 
                                                   == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                   ? vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_7
                                                   : 
                                                  ((0x44U 
                                                    == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                    ? 
                                                   (vlSelf->CPUTop__DOT__EX__DOT__src1 
                                                    | vlSelf->CPUTop__DOT__EX__DOT__src2)
                                                    : 
                                                   ((0x69U 
                                                     == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                     ? 
                                                    (vlSelf->CPUTop__DOT__EX__DOT__src1 
                                                     - vlSelf->CPUTop__DOT__EX__DOT__src2)
                                                     : 
                                                    ((0x71U 
                                                      == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                      ? 
                                                     (vlSelf->CPUTop__DOT__EX__DOT__src1 
                                                      & vlSelf->CPUTop__DOT__EX__DOT__src2)
                                                      : 
                                                     ((0x72U 
                                                       == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                       ? 
                                                      (vlSelf->CPUTop__DOT__EX__DOT__src1 
                                                       ^ vlSelf->CPUTop__DOT__EX__DOT__src2)
                                                       : 
                                                      ((0x6dU 
                                                        == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                        ? vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_7
                                                        : 0ULL)))))))
                                           : ((3U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype))
                                               ? ((3U 
                                                   == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype))
                                                   ? 
                                                  (4ULL 
                                                   + vlSelf->CPUTop__DOT__IF__DOT__temp)
                                                   : 0ULL)
                                               : ((2U 
                                                   == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype))
                                                   ? 0ULL
                                                   : vlSelf->CPUTop__DOT__EX__DOT___GEN_51)));
    vlSelf->io_result = vlSelf->CPUTop__DOT__EX_io1_result;
}

void VCPUTop___024unit____Vdpiimwrap_set_pc__Vdpioc2_TOP____024unit(const IData/*31:0*/ &inst);
void VCPUTop___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(const VlUnpacked<QData/*63:0*/, 32> &a);

VL_ATTR_COLD void VCPUTop___024root___initial__TOP__0(VCPUTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPUTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUTop___024root___initial__TOP__0\n"); );
    // Body
    VCPUTop___024unit____Vdpiimwrap_set_pc__Vdpioc2_TOP____024unit(vlSelf->io_inst);
    VCPUTop___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(vlSelf->CPUTop__DOT__DIP__DOT__rf);
}
