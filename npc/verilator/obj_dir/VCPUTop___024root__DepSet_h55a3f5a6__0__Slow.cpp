// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPUTop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VCPUTop__Syms.h"
#include "VCPUTop___024root.h"

void VCPUTop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask);
void VCPUTop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &rdata);

VL_ATTR_COLD void VCPUTop___024root___settle__TOP__0(VCPUTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPUTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUTop___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_76 
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
                                                    : 
                                                   ((0x67U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 0x48U
                                                     : 
                                                    ((0x3003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 0x45U
                                                      : 
                                                     ((0x3023U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->io_inst))
                                                       ? 0x46U
                                                       : 
                                                      ((0x2003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->io_inst))
                                                        ? 0x47U
                                                        : 
                                                       ((0x3bU 
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
                                                            ((0x100073U 
                                                              == vlSelf->io_inst)
                                                              ? 0x42U
                                                              : 0U)))))))))))))));
    if ((0x13U == (0x707fU & vlSelf->io_inst))) {
        vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0 = 8U;
        vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype = 0U;
        vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype = 0x40U;
    } else {
        if ((0x1013U == (0xfc00707fU & vlSelf->io_inst))) {
            vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0 = 8U;
            vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype = 0U;
        } else if ((0x17U == (0x7fU & vlSelf->io_inst))) {
            vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0 = 3U;
            vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype = 0U;
        } else if ((0x37U == (0x7fU & vlSelf->io_inst))) {
            vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0 = 3U;
            vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype = 0U;
        } else if ((0x6013U == (0x707fU & vlSelf->io_inst))) {
            vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0 = 8U;
            vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype = 0U;
        } else if ((0x6fU == (0x7fU & vlSelf->io_inst))) {
            vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0 = 7U;
            vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype = 3U;
        } else if ((0x67U == (0x707fU & vlSelf->io_inst))) {
            vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0 = 8U;
            vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype = 3U;
        } else if ((0x3003U == (0x707fU & vlSelf->io_inst))) {
            vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0 = 8U;
            vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype = 4U;
        } else if ((0x3023U == (0x707fU & vlSelf->io_inst))) {
            vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0 = 9U;
            vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype = 4U;
        } else if ((0x2003U == (0x707fU & vlSelf->io_inst))) {
            vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0 = 8U;
            vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype = 4U;
        } else if ((0x3bU == (0xfe00707fU & vlSelf->io_inst))) {
            vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0 = 5U;
            vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype = 0U;
        } else if ((0x40000033U == (0xfe00707fU & vlSelf->io_inst))) {
            vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0 = 5U;
            vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype = 0U;
        } else if ((0x3013U == (0x707fU & vlSelf->io_inst))) {
            vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0 = 8U;
            vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype = 5U;
        } else if ((0x63U == (0x707fU & vlSelf->io_inst))) {
            vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0 = 0xbU;
            vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype = 2U;
        } else if ((0x1063U == (0x707fU & vlSelf->io_inst))) {
            vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0 = 0xbU;
            vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype = 2U;
        } else {
            vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0 = 0U;
            vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype = 0U;
        }
        vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype 
            = vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_76;
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
    vlSelf->CPUTop__DOT__ID__DOT__srctype_1 = ((8U 
                                                == (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0)) 
                                               | ((7U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0))) 
                                                  | (3U 
                                                     == 
                                                     (3U 
                                                      & (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0)))));
    vlSelf->CPUTop__DOT__ID__DOT___io_ctrlIO_src1type_T_2 
        = ((0x37U == (0x7fU & vlSelf->io_inst)) ? 3U
            : ((8U == (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0))
                ? 0U : ((7U == (7U & (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0)))
                         ? 2U : ((3U == (3U & (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0)))
                                  ? 2U : 0U))));
    vlSelf->CPUTop__DOT__ID__DOT___imm_list_T_13 = 
        ((7U == (7U & (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0)))
          ? ((((0x80000U & vlSelf->io_inst) ? 0xfffffffffffULL
                : 0ULL) << 0x14U) | (QData)((IData)(
                                                    ((0xff000U 
                                                      & vlSelf->io_inst) 
                                                     | ((0x800U 
                                                         & (vlSelf->io_inst 
                                                            >> 9U)) 
                                                        | (0x7feU 
                                                           & (vlSelf->io_inst 
                                                              >> 0x14U)))))))
          : ((3U == (3U & (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0)))
              ? (((QData)((IData)(((vlSelf->io_inst 
                                    >> 0x1fU) ? 0xffffffffU
                                    : 0U))) << 0x20U) 
                 | (QData)((IData)((0xfffff000U & vlSelf->io_inst))))
              : ((9U == (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0))
                  ? ((((vlSelf->io_inst >> 0x1fU) ? 0xfffffffffffffULL
                        : 0ULL) << 0xcU) | (QData)((IData)(
                                                           ((0xfe0U 
                                                             & (vlSelf->io_inst 
                                                                >> 0x14U)) 
                                                            | (0x1fU 
                                                               & (vlSelf->io_inst 
                                                                  >> 7U))))))
                  : ((0xbU == (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0))
                      ? ((((vlSelf->io_inst >> 0x1fU)
                            ? 0x7ffffffffffffULL : 0ULL) 
                          << 0xdU) | (QData)((IData)(
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
                      : 0ULL))));
    if (VL_UNLIKELY((0x42U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype)))) {
        VL_FINISH_MT("vsrc/DIP_model.v", 47, "");
    }
    vlSelf->CPUTop__DOT__EX__DOT___GEN_28 = ((0x6cU 
                                              == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype)) 
                                             & ((0x1fU 
                                                 & (vlSelf->io_inst 
                                                    >> 0xfU)) 
                                                != 
                                                (0x1fU 
                                                 & (vlSelf->io_inst 
                                                    >> 0x14U))));
    vlSelf->CPUTop__DOT__EX__DOT__src1 = ((0U == (IData)(vlSelf->CPUTop__DOT__ID__DOT___io_ctrlIO_src1type_T_2))
                                           ? ((0U == 
                                               (0x1fU 
                                                & (vlSelf->io_inst 
                                                   >> 0xfU)))
                                               ? 0ULL
                                               : vlSelf->CPUTop__DOT__rf
                                              [(0x1fU 
                                                & (vlSelf->io_inst 
                                                   >> 0xfU))])
                                           : ((2U == (IData)(vlSelf->CPUTop__DOT__ID__DOT___io_ctrlIO_src1type_T_2))
                                               ? vlSelf->CPUTop__DOT__IF__DOT__temp
                                               : 0ULL));
    vlSelf->CPUTop__DOT__ID_io_ctrlIO_Imm = ((8U == (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0))
                                              ? (((
                                                   (vlSelf->io_inst 
                                                    >> 0x1fU)
                                                    ? 0xfffffffffffffULL
                                                    : 0ULL) 
                                                  << 0xcU) 
                                                 | (QData)((IData)(
                                                                   (vlSelf->io_inst 
                                                                    >> 0x14U))))
                                              : vlSelf->CPUTop__DOT__ID__DOT___imm_list_T_13);
    vlSelf->CPUTop__DOT__EX__DOT___branch_result_T_1 
        = (vlSelf->CPUTop__DOT__IF__DOT__temp + vlSelf->CPUTop__DOT__ID_io_ctrlIO_Imm);
    vlSelf->CPUTop__DOT__EX__DOT__src2 = ((IData)(vlSelf->CPUTop__DOT__ID__DOT__srctype_1)
                                           ? ((IData)(vlSelf->CPUTop__DOT__ID__DOT__srctype_1)
                                               ? vlSelf->CPUTop__DOT__ID_io_ctrlIO_Imm
                                               : 0ULL)
                                           : ((0U == 
                                               (0x1fU 
                                                & (vlSelf->io_inst 
                                                   >> 0x14U)))
                                               ? 0ULL
                                               : vlSelf->CPUTop__DOT__rf
                                              [(0x1fU 
                                                & (vlSelf->io_inst 
                                                   >> 0x14U))]));
    vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_3 = 
        (vlSelf->CPUTop__DOT__EX__DOT__src1 + vlSelf->CPUTop__DOT__ID_io_ctrlIO_Imm);
    vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_1 = 
        (vlSelf->CPUTop__DOT__EX__DOT__src1 + vlSelf->CPUTop__DOT__EX__DOT__src2);
    vlSelf->CPUTop__DOT__EX__DOT___GEN_32 = ((0x48U 
                                              == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                              ? (0xfffffffffffffffeULL 
                                                 & vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_1)
                                              : ((0x6bU 
                                                  == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                  ? 
                                                 (((0x6bU 
                                                    == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                    ? 
                                                   ((0x1fU 
                                                     & (vlSelf->io_inst 
                                                        >> 0xfU)) 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->io_inst 
                                                        >> 0x14U)))
                                                    : (IData)(vlSelf->CPUTop__DOT__EX__DOT___GEN_28))
                                                   ? 
                                                  ((0x6bU 
                                                    == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                    ? vlSelf->CPUTop__DOT__EX__DOT___branch_result_T_1
                                                    : 
                                                   ((0x6cU 
                                                     == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                     ? vlSelf->CPUTop__DOT__EX__DOT___branch_result_T_1
                                                     : 0ULL))
                                                   : 
                                                  (4ULL 
                                                   + vlSelf->CPUTop__DOT__IF__DOT__temp))
                                                  : 0ULL));
    if ((4U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype))) {
        if ((0x45U != ((0x13U == (0x707fU & vlSelf->io_inst))
                        ? 0x40U : (IData)(vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_76)))) {
            VCPUTop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(
                                                                      ((0x45U 
                                                                        == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                                        ? vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_1
                                                                        : 
                                                                       ((0x46U 
                                                                         == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                                         ? vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_3
                                                                         : 
                                                                        ((0x47U 
                                                                          == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                                          ? vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_3
                                                                          : 0ULL))), 
                                                                      ((0x45U 
                                                                        == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                                        ? 0ULL
                                                                        : 
                                                                       ((0x47U 
                                                                         == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                                         ? 0ULL
                                                                         : 
                                                                        ((0x46U 
                                                                          == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                                          ? vlSelf->CPUTop__DOT__EX__DOT__src2
                                                                          : 0ULL))), 
                                                                      ((0x45U 
                                                                        == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                                        ? 0U
                                                                        : 
                                                                       ((0x47U 
                                                                         == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                                         ? 0U
                                                                         : 
                                                                        ((0x46U 
                                                                          == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                                          ? 0xffU
                                                                          : 0U))));
            vlSelf->CPUTop__DOT__mem_rdata = 0ULL;
        } else {
            VCPUTop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(
                                                                     ((0x45U 
                                                                       == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                                       ? vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_1
                                                                       : 
                                                                      ((0x46U 
                                                                        == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                                        ? vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_3
                                                                        : 
                                                                       ((0x47U 
                                                                         == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                                         ? vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_3
                                                                         : 0ULL))), vlSelf->__Vtask_pmem_read__3__rdata);
            vlSelf->CPUTop__DOT__mem_rdata = vlSelf->__Vtask_pmem_read__3__rdata;
        }
    } else {
        vlSelf->CPUTop__DOT__mem_rdata = 0ULL;
    }
    vlSelf->CPUTop__DOT__EX_io1_result = ((0U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype))
                                           ? ((0x40U 
                                               == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                               ? vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_1
                                               : ((0x68U 
                                                   == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    ((1U 
                                                                      & (IData)(
                                                                                (vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_1 
                                                                                >> 0x1fU)))
                                                                      ? 0xffffffffU
                                                                      : 0U))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_1)))
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
                                                     : 0ULL))))
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
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype))
                                                    ? 0ULL
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype))
                                                     ? 
                                                    ((0x45U 
                                                      == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                      ? vlSelf->CPUTop__DOT__mem_rdata
                                                      : 
                                                     ((0x47U 
                                                       == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                       ? 
                                                      (((QData)((IData)(
                                                                        ((1U 
                                                                          & (IData)(
                                                                                (vlSelf->CPUTop__DOT__mem_rdata 
                                                                                >> 0x1fU)))
                                                                          ? 0xffffffffU
                                                                          : 0U))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(vlSelf->CPUTop__DOT__mem_rdata)))
                                                       : 0ULL))
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
                                                      : 0ULL))))));
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
