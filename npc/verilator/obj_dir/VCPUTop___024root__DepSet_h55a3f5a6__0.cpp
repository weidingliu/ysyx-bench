// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPUTop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VCPUTop__Syms.h"
#include "VCPUTop___024root.h"

void VCPUTop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask);
void VCPUTop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &rdata);

VL_INLINE_OPT void VCPUTop___024root___combo__TOP__1(VCPUTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPUTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUTop___024root___combo__TOP__1\n"); );
    // Body
    if ((0x13U == (0x707fU & vlSelf->io_inst))) {
        vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype = 0U;
        vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype = 0x40U;
    } else {
        vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype = 
            ((0x1013U == (0xfc00707fU & vlSelf->io_inst))
              ? 0U : ((0x17U == (0x7fU & vlSelf->io_inst))
                       ? 0U : ((0x37U == (0x7fU & vlSelf->io_inst))
                                ? 0U : ((0x6013U == 
                                         (0x707fU & vlSelf->io_inst))
                                         ? 0U : ((0x6fU 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->io_inst))
                                                  ? 3U
                                                  : 
                                                 ((0x67U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->io_inst))
                                                   ? 3U
                                                   : 
                                                  ((0x3003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 4U
                                                    : 0U)))))));
        vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype 
            = vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_41;
    }
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
    vlSelf->CPUTop__DOT__EX__DOT__src2 = ((IData)(vlSelf->CPUTop__DOT__ID__DOT__srctype_1)
                                           ? ((IData)(vlSelf->CPUTop__DOT__ID__DOT__srctype_1)
                                               ? ((8U 
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
                                                   : 
                                                  ((7U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0)))
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
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (3U 
                                                      & (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0)))
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
                                                     : 0ULL)))
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
    if (VL_UNLIKELY((0x42U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype)))) {
        VL_FINISH_MT("vsrc/DIP_model.v", 47, "");
    }
    vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_1 = 
        (vlSelf->CPUTop__DOT__EX__DOT__src1 + vlSelf->CPUTop__DOT__EX__DOT__src2);
    if ((0x45U != ((0x13U == (0x707fU & vlSelf->io_inst))
                    ? 0x40U : (IData)(vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_41)))) {
        if ((0x45U != ((0x13U == (0x707fU & vlSelf->io_inst))
                        ? 0x40U : (IData)(vlSelf->CPUTop__DOT__ID__DOT___Inst_decode_T_41)))) {
            VCPUTop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(
                                                                      ((0x45U 
                                                                        == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                                        ? vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_1
                                                                        : 0ULL), 0ULL, 0U);
        } else {
            VCPUTop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(
                                                                     ((0x45U 
                                                                       == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                                       ? vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_1
                                                                       : 0ULL), vlSelf->__Vtask_pmem_read__3__rdata);
            vlSelf->CPUTop__DOT__mem_rdata = vlSelf->__Vtask_pmem_read__3__rdata;
        }
    }
    vlSelf->CPUTop__DOT__EX_io1_result = ((0U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype))
                                           ? ((0x40U 
                                               == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                               ? vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_1
                                               : ((0x44U 
                                                   == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                   ? 
                                                  (vlSelf->CPUTop__DOT__EX__DOT__src1 
                                                   | vlSelf->CPUTop__DOT__EX__DOT__src2)
                                                   : 0ULL))
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
                                                     ? vlSelf->CPUTop__DOT__mem_rdata
                                                     : 0ULL)))));
    vlSelf->io_result = vlSelf->CPUTop__DOT__EX_io1_result;
}
